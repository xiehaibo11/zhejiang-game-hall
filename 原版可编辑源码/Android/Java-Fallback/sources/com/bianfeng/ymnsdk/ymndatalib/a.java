package com.bianfeng.ymnsdk.ymndatalib;

public class a {
    public int a;
    public java.lang.String b;

    public a(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String c() {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.Long r2 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Exception -> Ld
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.SystemUtils.getRFC3339(r2)     // Catch: java.lang.Exception -> Ld
            return r0
        Ld:
            r2 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = ""
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
    }
}
