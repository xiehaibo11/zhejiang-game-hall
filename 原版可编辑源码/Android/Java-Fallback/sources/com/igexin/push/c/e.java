package com.igexin.push.c;

public final class e {
    public java.lang.String a;
    public long b;

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.igexin.push.c.e a(org.json.JSONObject r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return r2
        L3:
            java.lang.String r0 = "address"
            java.lang.String r0 = r3.getString(r0)     // Catch: java.lang.Exception -> L13
            r2.a = r0     // Catch: java.lang.Exception -> L13
            java.lang.String r0 = "outdateTime"
            long r0 = r3.getLong(r0)     // Catch: java.lang.Exception -> L13
            r2.b = r0     // Catch: java.lang.Exception -> L13
        L13:
            return r2
    }

    public org.json.JSONObject a() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L14
            r0.<init>()     // Catch: java.lang.Exception -> L14
            java.lang.String r1 = "address"
            java.lang.String r2 = r4.a     // Catch: java.lang.Exception -> L14
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L14
            java.lang.String r1 = "outdateTime"
            long r2 = r4.b     // Catch: java.lang.Exception -> L14
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L14
            return r0
        L14:
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ServerAddress{address='"
            r0.append(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", outdateTime="
            r0.append(r1)
            long r1 = r3.b
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
