package com.igexin.push.d;

public class a implements com.igexin.b.a.d.a.a<java.lang.String, java.lang.Integer, com.igexin.b.a.b.b, com.igexin.b.a.b.e> {
    public android.content.Context a;

    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public com.igexin.b.a.b.e a(java.lang.String r1, java.lang.Integer r2, com.igexin.b.a.b.b r3) {
            r0 = this;
            java.lang.String r2 = "socket"
            boolean r2 = r1.startsWith(r2)
            if (r2 == 0) goto L12
            boolean r2 = com.igexin.push.core.d.i
            if (r2 == 0) goto L12
            com.igexin.b.a.b.a.a.m r2 = new com.igexin.b.a.b.a.a.m
            r2.<init>(r1, r3)
            return r2
        L12:
            r1 = 0
            return r1
    }

    @Override
    public com.igexin.b.a.d.e a(java.lang.String r1, java.lang.Integer r2, com.igexin.b.a.b.b r3) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Integer r2 = (java.lang.Integer) r2
            com.igexin.b.a.b.b r3 = (com.igexin.b.a.b.b) r3
            com.igexin.b.a.b.e r1 = r0.a(r1, r2, r3)
            return r1
    }
}
