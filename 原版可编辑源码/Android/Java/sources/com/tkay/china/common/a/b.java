package com.tkay.china.common.a;

public final class b {
    protected String a;
    protected String b;

    protected b(String str, String str2) {
        this.a = str;
        this.b = str2;
    }

    private String c() {
        return this.a;
    }

    public final String a() {
        return this.b;
    }

    public final String b() {
        return "code[ " + this.a + " ],desc[ " + this.b + " ]";
    }
}
