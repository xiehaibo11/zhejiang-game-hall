package com.bianfeng.ymnsdk.ymndatalib;

public class c {
    public java.lang.String a;

    public c() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.a = r0
            return
    }

    public java.lang.String a() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String b() {
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
