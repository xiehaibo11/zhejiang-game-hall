package com.kuaishou.weapon.p0;

public class k<T> implements java.lang.Runnable {
    private java.lang.String a;
    private org.json.JSONObject b;
    private com.kuaishou.weapon.p0.j c;
    private android.content.Context d;
    private java.lang.String e;
    private java.lang.String f;


    public k(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, org.json.JSONObject r5, com.kuaishou.weapon.p0.j r6) {
            r0 = this;
            r0.<init>()
            r0.d = r1
            r0.a = r4
            r0.b = r5
            r0.c = r6
            r0.e = r2
            r0.f = r3
            return
    }

    static com.kuaishou.weapon.p0.j a(com.kuaishou.weapon.p0.k r0) {
            com.kuaishou.weapon.p0.j r0 = r0.c
            return r0
    }

    @Override
    public void run() {
            r4 = this;
            android.content.Context r0 = r4.d     // Catch: java.lang.Throwable -> L21
            com.kuaishou.weapon.p0.l r0 = com.kuaishou.weapon.p0.l.a(r0)     // Catch: java.lang.Throwable -> L21
            com.kuaishou.weapon.p0.m r1 = new com.kuaishou.weapon.p0.m     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = r4.a     // Catch: java.lang.Throwable -> L21
            org.json.JSONObject r3 = r4.b     // Catch: java.lang.Throwable -> L21
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = r4.e     // Catch: java.lang.Throwable -> L21
            r1.a(r2)     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = r4.f     // Catch: java.lang.Throwable -> L21
            r1.b(r2)     // Catch: java.lang.Throwable -> L21
            com.kuaishou.weapon.p0.k$1 r2 = new com.kuaishou.weapon.p0.k$1     // Catch: java.lang.Throwable -> L21
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L21
            r0.b(r1, r2)     // Catch: java.lang.Throwable -> L21
        L21:
            return
    }
}
