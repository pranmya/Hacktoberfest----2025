#include <vector>
#include <algorithm> // For std::reverse

class Solution {
public:
    void rotate(std::vector<std::vector<int>>& matrix) {
        int n = matrix.size();

        // --- Step 1: Transpose the matrix ---
        // Transposing means turning rows into columns (and vice versa).
        // We can do this by swapping matrix[i][j] with matrix[j][i].
        // We only need to iterate through the upper triangle of the matrix.
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }

        // --- Step 2: Reverse each row ---
        // After transposing, reversing each row completes the 90-degree rotation.
        for (int i = 0; i < n; ++i) {
            std::reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
