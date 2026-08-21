package com.tkay.core.common.f;

public final class n {
    public static final java.lang.String h = "business_type";
    public static final int i = 1000;
    public static final int j = 1001;
    public java.lang.String a;
    public int b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public long f;
    public java.lang.String g;

    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(int r2) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "business_type"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lb
            goto Lf
        Lb:
            r2 = move-exception
            r2.printStackTrace()
        Lf:
            java.lang.String r2 = r0.toString()
            return r2
    }

    public final java.lang.String a() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.d
            r0.append(r1)
            java.lang.String r1 = "--extra: "
            r0.append(r1)
            java.lang.String r1 = r2.g
            r0.append(r1)
            java.lang.String r1 = "--requestType: "
            r0.append(r1)
            int r1 = r2.b
            r0.append(r1)
            java.lang.String r1 = "--content:"
            r0.append(r1)
            java.lang.String r1 = r2.e
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
