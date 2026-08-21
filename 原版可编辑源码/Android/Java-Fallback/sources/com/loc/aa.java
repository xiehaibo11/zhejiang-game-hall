package com.loc;

public final class aa extends com.loc.af {
    public java.lang.String a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;
    public java.lang.String h;
    public java.lang.String i;
    protected byte[] j;

    public aa(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final byte[] d() {
            r3 = this;
            byte[] r0 = r3.j
            if (r0 == 0) goto L5
            return r0
        L5:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lda
            r0.<init>()     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = "method"
            java.lang.String r2 = "create"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = "package_name"
            android.content.Context r2 = r3.k     // Catch: java.lang.Throwable -> Lda
            java.lang.String r2 = com.loc.l.c(r2)     // Catch: java.lang.Throwable -> Lda
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = "model"
            java.lang.String r2 = android.os.Build.MODEL     // Catch: java.lang.Throwable -> Lda
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = "os_version"
            java.lang.String r2 = android.os.Build.VERSION.RELEASE     // Catch: java.lang.Throwable -> Lda
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = "os_type"
            java.lang.String r2 = "Android"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = "sdk_version"
            java.lang.String r2 = "4.3.6"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = com.loc.ab.a()     // Catch: java.lang.Throwable -> Lda
            r3.a = r1     // Catch: java.lang.Throwable -> Lda
            java.lang.String r2 = "t1"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = com.loc.ab.b()     // Catch: java.lang.Throwable -> Lda
            r3.b = r1     // Catch: java.lang.Throwable -> Lda
            java.lang.String r2 = "t2"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = com.loc.ab.c()     // Catch: java.lang.Throwable -> Lda
            r3.c = r1     // Catch: java.lang.Throwable -> Lda
            java.lang.String r2 = "t3"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = com.loc.ab.d()     // Catch: java.lang.Throwable -> Lda
            r3.d = r1     // Catch: java.lang.Throwable -> Lda
            java.lang.String r2 = "s1"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = com.loc.ab.e()     // Catch: java.lang.Throwable -> Lda
            r3.e = r1     // Catch: java.lang.Throwable -> Lda
            java.lang.String r2 = "s2"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = com.loc.ab.f()     // Catch: java.lang.Throwable -> Lda
            r3.f = r1     // Catch: java.lang.Throwable -> Lda
            java.lang.String r2 = "s3"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = com.loc.ab.g()     // Catch: java.lang.Throwable -> Lda
            r3.g = r1     // Catch: java.lang.Throwable -> Lda
            java.lang.String r2 = "s4"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = "uuid"
            android.content.Context r2 = r3.k     // Catch: java.lang.Throwable -> Lda
            java.lang.String r2 = com.loc.ab.a(r2)     // Catch: java.lang.Throwable -> Lda
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = "android_id"
            java.lang.String r2 = com.loc.o.g()     // Catch: java.lang.Throwable -> Lda
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = "hostname"
            java.lang.String r2 = com.loc.ab.h()     // Catch: java.lang.Throwable -> Lda
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lda
            android.content.Context r1 = r3.k     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = com.loc.o.t(r1)     // Catch: java.lang.Throwable -> Lda
            r3.h = r1     // Catch: java.lang.Throwable -> Lda
            java.lang.String r2 = "gaid"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Lda
            android.content.Context r1 = r3.k     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = com.loc.o.e(r1)     // Catch: java.lang.Throwable -> Lda
            r3.i = r1     // Catch: java.lang.Throwable -> Lda
            java.lang.String r2 = "oaid"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = "utf-8"
            byte[] r0 = r0.getBytes(r1)     // Catch: java.lang.Throwable -> Lda
            byte[] r0 = com.loc.x.d(r0)     // Catch: java.lang.Throwable -> Lda
            java.lang.String r1 = "YWDR1a2R2WEd0M3RXdHRocg=="
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Throwable -> Lda
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> Lda
            byte[] r0 = com.loc.ab.a(r0, r1)     // Catch: java.lang.Throwable -> Lda
            r3.j = r0     // Catch: java.lang.Throwable -> Lda
        Lda:
            byte[] r0 = r3.j
            return r0
    }
}
