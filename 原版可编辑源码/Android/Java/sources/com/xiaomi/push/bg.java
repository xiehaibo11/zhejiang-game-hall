package com.xiaomi.push;

public class bg implements bi {
    private final String a;
    private final String b;

    public bg(String str, String str2) {
        if (str == null) {
            throw new IllegalArgumentException("Name may not be null");
        }
        this.a = str;
        this.b = str2;
    }

    @Override
    public String a() {
        return this.a;
    }

    @Override
    public String b() {
        return this.b;
    }
}
