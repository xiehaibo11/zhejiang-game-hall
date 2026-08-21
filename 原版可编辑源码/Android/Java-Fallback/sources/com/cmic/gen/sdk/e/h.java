package com.cmic.gen.sdk.e;

public class h {
    private static java.lang.String a = null;
    private static java.lang.String b = null;
    private static long c = 0;
    private static int d = -1;


    static {
            return
    }

    private static int a(java.lang.String r2) {
            java.lang.String r0 = com.cmic.gen.sdk.e.h.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.cmic.gen.sdk.e.h.b
            goto L15
        Lb:
            java.lang.String r0 = "pre_sim_key"
            java.lang.String r1 = ""
            java.lang.String r0 = com.cmic.gen.sdk.e.k.b(r0, r1)
            com.cmic.gen.sdk.e.h.b = r0
        L15:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1d
            r2 = 0
            return r2
        L1d:
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L25
            r2 = 1
            return r2
        L25:
            r2 = 2
            return r2
    }

    public static long a() {
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = com.cmic.gen.sdk.e.h.a
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            r3 = 10000(0x2710, double:4.9407E-320)
            r5 = 0
            if (r2 != 0) goto L32
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r7 = com.cmic.gen.sdk.e.h.b
            r2.append(r7)
            java.lang.String r7 = " "
            r2.append(r7)
            long r7 = com.cmic.gen.sdk.e.h.c
            r2.append(r7)
            java.lang.String r2 = r2.toString()
            java.lang.String r7 = "PhoneScripUtils"
            com.cmic.gen.sdk.e.c.b(r7, r2)
            long r7 = com.cmic.gen.sdk.e.h.c
        L2f:
            long r7 = r7 - r0
            long r7 = r7 - r3
            goto L48
        L32:
            java.lang.String r2 = "phonescripcache"
            java.lang.String r7 = ""
            java.lang.String r2 = com.cmic.gen.sdk.e.k.b(r2, r7)
            java.lang.String r7 = "phonescripstarttime"
            long r7 = com.cmic.gen.sdk.e.k.a(r7, r5)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L47
            goto L2f
        L47:
            r7 = r5
        L48:
            r0 = 1000(0x3e8, double:4.94E-321)
            long r7 = r7 / r0
            long r0 = java.lang.Math.max(r7, r5)
            return r0
    }

    public static java.lang.String a(android.content.Context r5) {
            java.lang.String r0 = com.cmic.gen.sdk.e.h.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L41
            java.lang.String r0 = "phonescripcache"
            java.lang.String r1 = ""
            java.lang.String r0 = com.cmic.gen.sdk.e.k.b(r0, r1)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L1f
            java.lang.String r5 = "PhoneScripUtils"
            java.lang.String r0 = "null"
            com.cmic.gen.sdk.e.c.a(r5, r0)
            r5 = 0
            return r5
        L1f:
            r2 = 0
            java.lang.String r4 = "phonescripstarttime"
            long r2 = com.cmic.gen.sdk.e.k.a(r4, r2)
            com.cmic.gen.sdk.e.h.c = r2
            java.lang.String r2 = "pre_sim_key"
            java.lang.String r1 = com.cmic.gen.sdk.e.k.b(r2, r1)
            com.cmic.gen.sdk.e.h.b = r1
            r1 = -1
            java.lang.String r2 = "phonescripversion"
            int r1 = com.cmic.gen.sdk.e.k.a(r2, r1)
            com.cmic.gen.sdk.e.h.d = r1
            java.lang.String r5 = com.cmic.gen.sdk.e.b.b(r5, r0)
            com.cmic.gen.sdk.e.h.a = r5
            return r5
        L41:
            java.lang.String r5 = com.cmic.gen.sdk.e.h.a
            return r5
    }

    static void a(android.content.Context r0, java.lang.String r1, long r2, java.lang.String r4) {
            b(r0, r1, r2, r4)
            return
    }

    public static void a(android.content.Context r4, java.lang.String r5, long r6, java.lang.String r8, java.lang.String r9) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L79
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L79
            r0 = 0
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r2 <= 0) goto L79
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "save phone scrip simKey = "
            r0.append(r1)
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PhoneScripUtils"
            com.cmic.gen.sdk.e.c.b(r1, r0)
            com.cmic.gen.sdk.e.h.a = r5
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r6 = r6 * r2
            long r0 = r0 + r6
            com.cmic.gen.sdk.e.h.c = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r1 = com.cmic.gen.sdk.e.h.c
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "sLifeTime"
            com.cmic.gen.sdk.e.c.b(r1, r0)
            com.cmic.gen.sdk.e.h.b = r8
            r0 = 1
            com.cmic.gen.sdk.e.h.d = r0
            java.lang.String r0 = "operator"
            boolean r9 = r0.equals(r9)
            if (r9 != 0) goto L63
            com.cmic.gen.sdk.e.h$1 r6 = new com.cmic.gen.sdk.e.h$1
            r6.<init>(r4, r5, r8)
            com.cmic.gen.sdk.e.n.a(r6)
            goto L79
        L63:
            r4 = 3600000(0x36ee80, double:1.7786363E-317)
            int r8 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r8 <= 0) goto L72
            long r6 = java.lang.System.currentTimeMillis()
            long r6 = r6 + r4
            com.cmic.gen.sdk.e.h.c = r6
            goto L79
        L72:
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 + r6
            com.cmic.gen.sdk.e.h.c = r4
        L79:
            return
    }

    public static void a(boolean r2, boolean r3) {
            com.cmic.gen.sdk.e.k$a r0 = com.cmic.gen.sdk.e.k.a()
            java.lang.String r1 = "phonescripstarttime"
            r0.a(r1)
            java.lang.String r1 = "phonescripcache"
            r0.a(r1)
            java.lang.String r1 = "pre_sim_key"
            r0.a(r1)
            java.lang.String r1 = "phonescripversion"
            r0.a(r1)
            if (r3 == 0) goto L1e
            r0.a()
            goto L21
        L1e:
            r0.b()
        L21:
            if (r2 == 0) goto L2f
            r2 = 0
            com.cmic.gen.sdk.e.h.a = r2
            com.cmic.gen.sdk.e.h.b = r2
            r2 = 0
            com.cmic.gen.sdk.e.h.c = r2
            r2 = -1
            com.cmic.gen.sdk.e.h.d = r2
        L2f:
            return
    }

    private static boolean a(long r5) {
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r3 = ""
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r4 = "PhoneScripUtils"
            com.cmic.gen.sdk.e.c.b(r4, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.cmic.gen.sdk.e.c.b(r4, r2)
            long r5 = r5 - r0
            r0 = 10000(0x2710, double:4.9407E-320)
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 <= 0) goto L35
            r5 = 1
            goto L36
        L35:
            r5 = 0
        L36:
            return r5
    }

    public static boolean a(com.cmic.gen.sdk.a r4) {
            java.lang.String r0 = "scripKey"
            java.lang.String r0 = r4.b(r0)
            int r0 = a(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "imsiState"
            r4.a(r2, r1)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "simState = "
            r4.append(r1)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r1 = "PhoneScripUtils"
            com.cmic.gen.sdk.e.c.b(r1, r4)
            r4 = 0
            if (r0 != 0) goto L3a
            return r4
        L3a:
            int r2 = com.cmic.gen.sdk.e.h.d
            r3 = -1
            if (r2 != r3) goto L47
            java.lang.String r2 = "phonescripversion"
            int r2 = com.cmic.gen.sdk.e.k.a(r2, r3)
            com.cmic.gen.sdk.e.h.d = r2
        L47:
            int r2 = com.cmic.gen.sdk.e.h.d
            r3 = 1
            if (r2 == r3) goto L58
            a(r3, r4)
            com.cmic.gen.sdk.e.b.a()
            java.lang.String r0 = "phoneScriptVersion change"
            com.cmic.gen.sdk.e.c.b(r1, r0)
            return r4
        L58:
            r1 = 2
            if (r0 != r1) goto L5f
            a(r3, r4)
            return r4
        L5f:
            boolean r4 = c()
            return r4
    }

    static long b() {
            long r0 = com.cmic.gen.sdk.e.h.c
            return r0
    }

    private static void b(android.content.Context r1, java.lang.String r2, long r3, java.lang.String r5) {
            java.lang.String r1 = com.cmic.gen.sdk.e.b.a(r1, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L26
            com.cmic.gen.sdk.e.k$a r2 = com.cmic.gen.sdk.e.k.a()
            java.lang.String r0 = "phonescripcache"
            r2.a(r0, r1)
            java.lang.String r1 = "phonescripstarttime"
            r2.a(r1, r3)
            r1 = 1
            java.lang.String r3 = "phonescripversion"
            r2.a(r3, r1)
            java.lang.String r1 = "pre_sim_key"
            r2.a(r1, r5)
            r2.b()
        L26:
            return
    }

    private static boolean c() {
            java.lang.String r0 = com.cmic.gen.sdk.e.h.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.cmic.gen.sdk.e.h.b
            r0.append(r1)
            java.lang.String r1 = " "
            r0.append(r1)
            long r1 = com.cmic.gen.sdk.e.h.c
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PhoneScripUtils"
            com.cmic.gen.sdk.e.c.b(r1, r0)
            long r0 = com.cmic.gen.sdk.e.h.c
            boolean r0 = a(r0)
            return r0
        L2c:
            java.lang.String r0 = "phonescripcache"
            java.lang.String r1 = ""
            java.lang.String r0 = com.cmic.gen.sdk.e.k.b(r0, r1)
            r1 = 0
            java.lang.String r3 = "phonescripstarttime"
            long r1 = com.cmic.gen.sdk.e.k.a(r3, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4a
            boolean r0 = a(r1)
            if (r0 == 0) goto L4a
            r0 = 1
            goto L4b
        L4a:
            r0 = 0
        L4b:
            return r0
    }
}
