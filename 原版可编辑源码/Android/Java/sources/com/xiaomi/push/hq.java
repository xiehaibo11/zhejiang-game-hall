package com.xiaomi.push;

public enum hq {
    a(1),
    b(2),
    c(3),
    d(4);

    private final int a;

    hq(int i) {
        this.a = i;
    }

    public static hq a(int i) {
        if (i == 1) {
            return a;
        }
        if (i == 2) {
            return b;
        }
        if (i == 3) {
            return c;
        }
        if (i != 4) {
            return null;
        }
        return d;
    }
}
