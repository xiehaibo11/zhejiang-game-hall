package com.xiaomi.push;

public final class ct {
    private int a;
    private java.lang.String a;

    public ct(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.a = r2
            return
    }

    public static com.xiaomi.push.ct a(java.lang.String r2, int r3) {
            java.lang.String r0 = ":"
            int r0 = r2.lastIndexOf(r0)
            r1 = -1
            if (r0 == r1) goto L1d
            r1 = 0
            java.lang.String r1 = r2.substring(r1, r0)
            int r0 = r0 + 1
            java.lang.String r2 = r2.substring(r0)     // Catch: java.lang.NumberFormatException -> L1c
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> L1c
            if (r2 > 0) goto L1b
            goto L1c
        L1b:
            r3 = r2
        L1c:
            r2 = r1
        L1d:
            com.xiaomi.push.ct r0 = new com.xiaomi.push.ct
            r0.<init>(r2, r3)
            return r0
    }

    public static java.net.InetSocketAddress a(java.lang.String r1, int r2) {
            com.xiaomi.push.ct r1 = a(r1, r2)
            java.net.InetSocketAddress r2 = new java.net.InetSocketAddress
            java.lang.String r0 = r1.a()
            int r1 = r1.a()
            r2.<init>(r0, r1)
            return r2
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            int r0 = r2.a
            if (r0 <= 0) goto L1d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            int r1 = r2.a
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L1d:
            java.lang.String r0 = r2.a
            return r0
    }
}
