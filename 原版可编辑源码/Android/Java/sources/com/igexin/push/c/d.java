package com.igexin.push.c;

public enum d {
    a(0),
    b(1),
    c(2);

    private int d;

    d(int i) {
        this.d = -1;
        this.d = i;
    }

    public static d a(int i) {
        for (d dVar : values()) {
            if (dVar.b() == i) {
                return dVar;
            }
        }
        return null;
    }

    public int b() {
        return this.d;
    }
}
