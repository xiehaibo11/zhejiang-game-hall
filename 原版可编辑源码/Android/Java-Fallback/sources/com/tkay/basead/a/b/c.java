package com.tkay.basead.a.b;

public final class c {
    public static final int a = 0;
    public static final int b = -1;
    public static final int c = 100;
    private static java.util.Map<java.lang.String, java.lang.Integer> d;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.mraid.MraidWebView> e;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.basead.a.b.c.d = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 3
            r0.<init>(r1)
            com.tkay.basead.a.b.c.e = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(com.tkay.core.common.f.i r1, com.tkay.core.common.f.h r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r1.d
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            java.lang.String r1 = r2.p()
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static void a(java.lang.String r1, int r2) {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.basead.a.b.c.d
            java.lang.Object r0 = r0.get(r1)
            java.lang.Integer r0 = (java.lang.Integer) r0
            if (r0 == 0) goto L10
            int r0 = r0.intValue()
            if (r0 >= r2) goto L19
        L10:
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.basead.a.b.c.d
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0.put(r1, r2)
        L19:
            return
    }

    public static void a(java.lang.String r1, com.tkay.basead.mraid.MraidWebView r2) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.mraid.MraidWebView> r0 = com.tkay.basead.a.b.c.e
            r0.put(r1, r2)
            return
    }

    public static boolean a(com.tkay.core.common.f.h r2, int r3, com.tkay.core.common.f.j r4) {
            java.lang.String r0 = java.lang.String.valueOf(r3)
            java.lang.String r1 = "1"
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            if (r0 == 0) goto L25
            java.lang.String r3 = r2.x()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L23
            java.lang.String r2 = r2.x()
            int r3 = r4.S()
            boolean r2 = b(r2, r3)
            return r2
        L23:
            r2 = 0
            return r2
        L25:
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "3"
            boolean r3 = android.text.TextUtils.equals(r3, r0)
            if (r3 == 0) goto L48
            java.lang.String r3 = r2.x()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L48
            java.lang.String r2 = r2.x()
            int r3 = r4.S()
            boolean r2 = b(r2, r3)
            return r2
        L48:
            r2 = 1
            return r2
    }

    public static boolean a(com.tkay.core.common.f.h r3, com.tkay.core.common.f.i r4) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            com.tkay.core.common.f.j r1 = r4.m
            int r2 = r4.j
            boolean r2 = a(r3, r2, r1)
            if (r2 != 0) goto Lf
            return r0
        Lf:
            boolean r0 = r3.g()
            if (r0 == 0) goto L27
            boolean r0 = r1.V()
            if (r0 == 0) goto L26
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.mraid.MraidWebView> r0 = com.tkay.basead.a.b.c.e
            java.lang.String r3 = a(r4, r3)
            boolean r2 = r0.containsKey(r3)
            goto L27
        L26:
            r2 = 1
        L27:
            return r2
    }

    public static boolean a(java.lang.String r1) {
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.tkay.basead.a.b.c.d
            java.lang.Object r1 = r0.get(r1)
            java.lang.Integer r1 = (java.lang.Integer) r1
            if (r1 == 0) goto L12
            int r1 = r1.intValue()
            if (r1 != 0) goto L12
            r1 = 1
            return r1
        L12:
            r1 = 0
            return r1
    }

    public static com.tkay.basead.mraid.MraidWebView b(java.lang.String r1) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.mraid.MraidWebView> r0 = com.tkay.basead.a.b.c.e
            java.lang.Object r1 = r0.remove(r1)
            com.tkay.basead.mraid.MraidWebView r1 = (com.tkay.basead.mraid.MraidWebView) r1
            return r1
    }

    public static boolean b(java.lang.String r1, int r2) {
            com.tkay.core.common.a.j r0 = com.tkay.core.common.a.j.a()
            boolean r1 = r0.a(r1, r2)
            return r1
    }

    public static boolean c(java.lang.String r4) {
            java.lang.String r4 = com.tkay.core.common.l.f.a(r4)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.res.d r0 = com.tkay.core.common.res.d.a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L18
            r4 = 0
            return r4
        L18:
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r3 = 1
            java.lang.String r0 = r0.a(r3)
            r2.append(r0)
            java.lang.String r0 = java.io.File.separator
            r2.append(r0)
            r2.append(r4)
            java.lang.String r4 = ".0"
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4)
            boolean r4 = r1.exists()
            return r4
    }
}
