
void test_print(const char *message) {
    printf("%s", message);
}

// Tests

void test_equal_strings() {
    const char *str1 = "abc";
    const char *str2 = "abc";
    int result = mx_strcmp(str1, str2);

    if (result != 0) {
        test_print("FAILED: test_equal_strings()\n");
    }
}

void test_99() {
    const char *str1 = "abc";
    const char *str2 = "ab";
    int result = mx_strcmp(str1, str2);

    if (result != 99) {
        test_print("FAILED: test_99()\n");
    }
}

void test_minus_100() {
    const char *str1 = "abc";
    const char *str2 = "abcd";
    int result = mx_strcmp(str1, str2);

    if (result != -100) {
        test_print("FAILED: test_minus_100()\n");
    }
}

// Run all

void tests_run_all(void) {
    test_equal_strings();
    test_99();
    test_minus_100();
}
