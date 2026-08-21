package com.xiaomi.push;

public enum hp {
    a(1),
    b(2);

    private final int a;

    hp(int i) {
        this.a = i;
    }

    public static hp a(int i) {
        if (i == 1) {
            return a;
        }
        if (i != 2) {
            return null;
        }
        return b;
    }

    public int a() {
        return this.a;
    }
}
