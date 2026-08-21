package com.xiaomi.push;

public class bg implements com.xiaomi.push.bi {
    private final java.lang.String a;
    private final java.lang.String b;

    public bg(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto La
            r0.a = r1
            r0.b = r2
            return
        La:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "Name may not be null"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }
}
