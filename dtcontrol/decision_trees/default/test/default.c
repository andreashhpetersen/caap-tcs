#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {2.5f,2.5f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 5.0) {
		return 0.0f;
	}
	else {
		if (x[0] <= 10.0) {
			return 1.0f;
		}
		else {
			if (x[1] <= 5.0) {
				return 0.0f;
			}
			else {
				return 1.0f;
			}

		}

	}

}