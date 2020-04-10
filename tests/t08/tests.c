
void test_print(const char *message) {
    printf("%s", message);
}

// Tests

void test_pow_3_3_27() {
    double result = mx_pow(3, 3);

    if (result != 27.0) {
        test_print("FAILED: test_pow_3_3_27(): 3^3 should be 27, ACR:");
        printf("%f", result);
    }
}

void test_pow_25_3_15625() {
    double result = mx_pow(2.5, 3);

    if (result != 15.625) {
        test_print("FAILED: test_pow_25_3_15625(): 2.5^3 should be 15.625, ACR:");
        printf("%f", result);
    }
}

void test_pow_2_0_1() {
    double result = mx_pow(2, 0);

    if (result != 1) {
        test_print("FAILED: test_pow_2_0_1(): 2^0 should be 1, ACR:");
        printf("%f", result);
    }
}

// Run all

void tests_run_all(void) {
    test_pow_3_3_27();
    test_pow_25_3_15625();
    test_pow_2_0_1();
}
