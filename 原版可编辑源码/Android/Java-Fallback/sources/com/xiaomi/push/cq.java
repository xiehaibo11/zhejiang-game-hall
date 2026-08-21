package com.xiaomi.push;

public class cq {
    private int a;
    private long a;
    private java.lang.String a;
    private long b;
    private long c;

    public cq() {
            r7 = this;
            r1 = 0
            r2 = 0
            r4 = 0
            r6 = 0
            r0 = r7
            r0.<init>(r1, r2, r4, r6)
            return
    }

    public cq(int r1, long r2, long r4, java.lang.Exception r6) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.a = r2
            r0.c = r4
            long r1 = java.lang.System.currentTimeMillis()
            r0.b = r1
            if (r6 == 0) goto L1b
            java.lang.Class r1 = r6.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.a = r1
        L1b:
            return
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public com.xiaomi.push.cq a(org.json.JSONObject r3) {
            r2 = this;
            java.lang.String r0 = "cost"
            long r0 = r3.getLong(r0)
            r2.a = r0
            java.lang.String r0 = "size"
            long r0 = r3.getLong(r0)
            r2.c = r0
            java.lang.String r0 = "ts"
            long r0 = r3.getLong(r0)
            r2.b = r0
            java.lang.String r0 = "wt"
            int r0 = r3.getInt(r0)
            r2.a = r0
            java.lang.String r0 = "expt"
            java.lang.String r3 = r3.optString(r0)
            r2.a = r3
            return r2
    }

    public org.json.JSONObject a() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            long r1 = r4.a
            java.lang.String r3 = "cost"
            r0.put(r3, r1)
            long r1 = r4.c
            java.lang.String r3 = "size"
            r0.put(r3, r1)
            long r1 = r4.b
            java.lang.String r3 = "ts"
            r0.put(r3, r1)
            int r1 = r4.a
            java.lang.String r2 = "wt"
            r0.put(r2, r1)
            java.lang.String r1 = r4.a
            java.lang.String r2 = "expt"
            r0.put(r2, r1)
            return r0
    }
}
