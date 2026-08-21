package com.vivo.push.e;

public final class a {
    private static java.lang.String[] a;
    private java.util.ArrayList<java.lang.String> b;

    final class a {
        private static com.vivo.push.e.a a;

        static {
                com.vivo.push.e.a r0 = new com.vivo.push.e.a
                r1 = 0
                r0.<init>(r1)
                com.vivo.push.e.a.a.a = r0
                return
        }

        static com.vivo.push.e.a a() {
                com.vivo.push.e.a r0 = com.vivo.push.e.a.a.a
                return r0
        }
    }

    static {
            java.lang.String r0 = "com.vivo.pushservice"
            java.lang.String r1 = "com.vivo.pushdemo.test"
            java.lang.String r2 = "com.vivo.sdk.test"
            java.lang.String r3 = "com.vivo.hybrid"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3}
            com.vivo.push.e.a.a = r0
            return
    }

    private a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.b = r0
            return
    }

    a(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.vivo.push.e.a a() {
            com.vivo.push.e.a r0 = com.vivo.push.e.a.a.a()
            return r0
    }

    public final java.util.ArrayList<java.lang.String> b() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.ArrayList<java.lang.String> r1 = r2.b
            r0.<init>(r1)
            return r0
    }

    public final boolean c() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.b
            if (r0 == 0) goto Lc
            int r0 = r0.size()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }
}
