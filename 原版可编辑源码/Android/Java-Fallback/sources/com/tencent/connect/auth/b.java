package com.tencent.connect.auth;

public class b {
    public static com.tencent.connect.auth.b a;
    static final boolean d = false;
    private static int e;
    public java.util.HashMap<java.lang.String, com.tencent.connect.auth.b.a> b;
    public final java.lang.String c;

    public static class a {
        public com.tencent.tauth.IUiListener a;
        public com.tencent.connect.auth.a b;
        public java.lang.String c;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.Class<com.tencent.connect.auth.b> r0 = com.tencent.connect.auth.b.class
            boolean r0 = r0.desiredAssertionStatus()
            r0 = r0 ^ 1
            com.tencent.connect.auth.b.d = r0
            r0 = 0
            com.tencent.connect.auth.b.e = r0
            return
    }

    public b() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            java.lang.String r0 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
            r1.c = r0
            return
    }

    public static com.tencent.connect.auth.b a() {
            com.tencent.connect.auth.b r0 = com.tencent.connect.auth.b.a
            if (r0 != 0) goto Lb
            com.tencent.connect.auth.b r0 = new com.tencent.connect.auth.b
            r0.<init>()
            com.tencent.connect.auth.b.a = r0
        Lb:
            com.tencent.connect.auth.b r0 = com.tencent.connect.auth.b.a
            return r0
    }

    public static int b() {
            int r0 = com.tencent.connect.auth.b.e
            int r0 = r0 + 1
            com.tencent.connect.auth.b.e = r0
            return r0
    }

    public java.lang.String a(com.tencent.connect.auth.b.a r5) {
            r4 = this;
            java.lang.String r0 = ""
            int r1 = b()
            java.util.HashMap<java.lang.String, com.tencent.connect.auth.b$a> r2 = r4.b     // Catch: java.lang.Throwable -> L1b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b
            r3.<init>()     // Catch: java.lang.Throwable -> L1b
            r3.append(r0)     // Catch: java.lang.Throwable -> L1b
            r3.append(r1)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L1b
            r2.put(r3, r5)     // Catch: java.lang.Throwable -> L1b
            goto L1f
        L1b:
            r5 = move-exception
            r5.printStackTrace()
        L1f:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r0)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            return r5
    }

    public java.lang.String c() {
            r9 = this;
            double r0 = java.lang.Math.random()
            r2 = 4626322717216342016(0x4034000000000000, double:20.0)
            double r0 = r0 * r2
            r2 = 4613937818241073152(0x4008000000000000, double:3.0)
            double r0 = r0 + r2
            double r0 = java.lang.Math.ceil(r0)
            int r0 = (int) r0
            java.lang.String r1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
            char[] r1 = r1.toCharArray()
            int r2 = r1.length
            java.lang.StringBuffer r3 = new java.lang.StringBuffer
            r3.<init>()
            r4 = 0
        L1d:
            if (r4 >= r0) goto L2f
            double r5 = java.lang.Math.random()
            double r7 = (double) r2
            double r5 = r5 * r7
            int r5 = (int) r5
            char r5 = r1[r5]
            r3.append(r5)
            int r4 = r4 + 1
            goto L1d
        L2f:
            java.lang.String r0 = r3.toString()
            return r0
    }
}
