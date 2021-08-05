int main() {
    int int_val_a = 5;
    int int_val_b = 3;
    int add_sub_result;
    float float_val_a = .7f;
    float float_val_b = .3f;
    float div_mult_result;
    bool test_bool = false;
    double test_new_operatorA = .05;
    double test_new_operatorB = .07;
    double test_new_operatorC;

    add_sub_result = int_val_a + int_val_b;
    add_sub_result = int_val_a - int_val_b;
    div_mult_result = float_val_a * float_val_b;
    div_mult_result = float_val_a / float_val_b;
    
    test_new_operatorC = test_new_operatorA +* test_new_operatorB;

    until (int_val_a >= 10) {
        int_val_a = int_val_a + 1;
    }

    if (int_val_a > 2) {
        test_bool = true;
    }
}