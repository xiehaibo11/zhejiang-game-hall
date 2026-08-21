package com.xiaomi.push;

public enum hx {
    a(0),
    b(1),
    c(2);

    private final int a;

    hx(int i) {
        this.a = i;
    }

    public static hx a(int i) {
        if (i == 0) {
            return a;
        }
        if (i == 1) {
            return b;
        }
        if (i != 2) {
            return null;
        }
        return c;
    }

    public int a() {
        return this.a;
    }
}
