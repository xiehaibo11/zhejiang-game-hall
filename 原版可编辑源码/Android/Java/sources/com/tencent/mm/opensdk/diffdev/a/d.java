package com.tencent.mm.opensdk.diffdev.a;

public enum d {
    b(402),
    c(403),
    d(404),
    e(405),
    f(408),
    g(500);

    private int a;

    d(int i) {
        this.a = i;
    }

    public int a() {
        return this.a;
    }

    @Override
    public String toString() {
        return "UUIDStatusCode:" + this.a;
    }
}
