package com.xiaomi.push;

public class ae {
    private static int a;
    public static final java.lang.String a = null;
    public static final boolean a = false;
    public static final boolean b = false;
    public static final boolean c = false;
    public static final boolean d = false;
    public static boolean e;
    public static final boolean f = false;
    public static final boolean g = false;

    static {
            boolean r0 = com.xiaomi.push.ah.a
            java.lang.String r1 = "ONEBOX"
            if (r0 == 0) goto L8
            r0 = r1
            goto La
        L8:
            java.lang.String r0 = "@SHIP.TO.2A2FE0D7@"
        La:
            com.xiaomi.push.ae.a = r0
            java.lang.String r2 = "2A2FE0D7"
            boolean r0 = r0.contains(r2)
            com.xiaomi.push.ae.a = r0
            r2 = 0
            r3 = 1
            if (r0 != 0) goto L25
            java.lang.String r0 = com.xiaomi.push.ae.a
            java.lang.String r4 = "DEBUG"
            boolean r0 = r4.equalsIgnoreCase(r0)
            if (r0 == 0) goto L23
            goto L25
        L23:
            r0 = r2
            goto L26
        L25:
            r0 = r3
        L26:
            com.xiaomi.push.ae.b = r0
            java.lang.String r0 = com.xiaomi.push.ae.a
            java.lang.String r4 = "LOGABLE"
            boolean r0 = r4.equalsIgnoreCase(r0)
            com.xiaomi.push.ae.c = r0
            java.lang.String r0 = com.xiaomi.push.ae.a
            java.lang.String r4 = "YY"
            boolean r0 = r0.contains(r4)
            com.xiaomi.push.ae.d = r0
            java.lang.String r0 = com.xiaomi.push.ae.a
            java.lang.String r4 = "TEST"
            boolean r0 = r0.equalsIgnoreCase(r4)
            com.xiaomi.push.ae.e = r0
            java.lang.String r0 = com.xiaomi.push.ae.a
            java.lang.String r4 = "BETA"
            boolean r0 = r4.equalsIgnoreCase(r0)
            com.xiaomi.push.ae.f = r0
            java.lang.String r0 = com.xiaomi.push.ae.a
            if (r0 == 0) goto L5d
            java.lang.String r4 = "RC"
            boolean r0 = r0.startsWith(r4)
            if (r0 == 0) goto L5d
            r2 = r3
        L5d:
            com.xiaomi.push.ae.g = r2
            com.xiaomi.push.ae.a = r3
            java.lang.String r0 = com.xiaomi.push.ae.a
            java.lang.String r2 = "SANDBOX"
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L6f
            r0 = 2
        L6c:
            com.xiaomi.push.ae.a = r0
            goto L7b
        L6f:
            java.lang.String r0 = com.xiaomi.push.ae.a
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L79
            r0 = 3
            goto L6c
        L79:
            com.xiaomi.push.ae.a = r3
        L7b:
            return
    }

    public static int a() {
            int r0 = com.xiaomi.push.ae.a
            return r0
    }

    public static void a(int r0) {
            com.xiaomi.push.ae.a = r0
            return
    }

    public static boolean a() {
            int r0 = com.xiaomi.push.ae.a
            r1 = 2
            if (r0 != r1) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    public static boolean b() {
            int r0 = com.xiaomi.push.ae.a
            r1 = 3
            if (r0 != r1) goto L7
            r0 = 1
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }
}
