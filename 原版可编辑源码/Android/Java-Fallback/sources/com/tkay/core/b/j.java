package com.tkay.core.b;

public final class j implements java.lang.Comparable<com.tkay.core.b.j> {
    int a;
    java.lang.String b;
    double c;
    java.lang.String d;

    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    private double a() {
            r2 = this;
            double r0 = r2.c
            return r0
    }

    private int a(com.tkay.core.b.j r2) {
            r1 = this;
            int r0 = r1.a
            int r2 = r2.a
            if (r0 >= r2) goto L8
            r2 = -1
            return r2
        L8:
            r2 = 1
            return r2
    }

    public static com.tkay.core.b.j a(java.lang.String r4) {
            java.lang.String r0 = "price"
            java.lang.String r1 = "s_pty"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L45
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L45
            com.tkay.core.b.j r4 = new com.tkay.core.b.j     // Catch: java.lang.Throwable -> L45
            r4.<init>()     // Catch: java.lang.Throwable -> L45
            java.lang.String r3 = "prority"
            int r3 = r2.optInt(r3)     // Catch: java.lang.Throwable -> L45
            r4.a = r3     // Catch: java.lang.Throwable -> L45
            java.lang.String r3 = "ad_source_id"
            java.lang.String r3 = r2.optString(r3)     // Catch: java.lang.Throwable -> L45
            r4.b = r3     // Catch: java.lang.Throwable -> L45
            boolean r3 = r2.has(r1)     // Catch: java.lang.Throwable -> L45
            if (r3 == 0) goto L2b
            double r0 = r2.optDouble(r1)     // Catch: java.lang.Throwable -> L45
            r4.c = r0     // Catch: java.lang.Throwable -> L45
            goto L3c
        L2b:
            boolean r1 = r2.has(r0)     // Catch: java.lang.Throwable -> L45
            if (r1 == 0) goto L38
            double r0 = r2.optDouble(r0)     // Catch: java.lang.Throwable -> L45
            r4.c = r0     // Catch: java.lang.Throwable -> L45
            goto L3c
        L38:
            r0 = 0
            r4.c = r0     // Catch: java.lang.Throwable -> L45
        L3c:
            java.lang.String r0 = "tp_bid_id"
            java.lang.String r0 = r2.optString(r0)     // Catch: java.lang.Throwable -> L45
            r4.d = r0     // Catch: java.lang.Throwable -> L45
            return r4
        L45:
            r4 = 0
            return r4
    }

    private void a(double r1) {
            r0 = this;
            r0.c = r1
            return
    }

    private java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    @Override
    public final int compareTo(com.tkay.core.b.j r2) {
            r1 = this;
            com.tkay.core.b.j r2 = (com.tkay.core.b.j) r2
            int r0 = r1.a
            int r2 = r2.a
            if (r0 >= r2) goto La
            r2 = -1
            return r2
        La:
            r2 = 1
            return r2
    }
}
