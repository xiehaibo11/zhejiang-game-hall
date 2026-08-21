package com.xiaomi.mipush.sdk;

public class l {
    private static java.util.HashMap<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.l.a> a;

    class a {
        public java.lang.String a;
        public java.lang.String b;

        public a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.mipush.sdk.l.a = r0
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.a
            com.xiaomi.mipush.sdk.l$a r1 = new com.xiaomi.mipush.sdk.l$a
            java.lang.String r2 = "newInstance"
            java.lang.String r3 = "com.xiaomi.assemble.control.HmsPushManager"
            r1.<init>(r3, r2)
            a(r0, r1)
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            com.xiaomi.mipush.sdk.l$a r1 = new com.xiaomi.mipush.sdk.l$a
            java.lang.String r3 = "com.xiaomi.assemble.control.FCMPushManager"
            r1.<init>(r3, r2)
            a(r0, r1)
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.c
            com.xiaomi.mipush.sdk.l$a r1 = new com.xiaomi.mipush.sdk.l$a
            java.lang.String r3 = "com.xiaomi.assemble.control.COSPushManager"
            r1.<init>(r3, r2)
            a(r0, r1)
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.d
            com.xiaomi.mipush.sdk.l$a r1 = new com.xiaomi.mipush.sdk.l$a
            java.lang.String r3 = "com.xiaomi.assemble.control.FTOSPushManager"
            r1.<init>(r3, r2)
            a(r0, r1)
            return
    }

    public static com.xiaomi.mipush.sdk.au a(com.xiaomi.mipush.sdk.e r1) {
            int[] r0 = com.xiaomi.mipush.sdk.m.a
            int r1 = r1.ordinal()
            r1 = r0[r1]
            r0 = 1
            if (r1 == r0) goto L1f
            r0 = 2
            if (r1 == r0) goto L1c
            r0 = 3
            if (r1 == r0) goto L19
            r0 = 4
            if (r1 == r0) goto L16
            r1 = 0
            goto L21
        L16:
            com.xiaomi.mipush.sdk.au r1 = com.xiaomi.mipush.sdk.au.f
            goto L21
        L19:
            com.xiaomi.mipush.sdk.au r1 = com.xiaomi.mipush.sdk.au.e
            goto L21
        L1c:
            com.xiaomi.mipush.sdk.au r1 = com.xiaomi.mipush.sdk.au.d
            goto L21
        L1f:
            com.xiaomi.mipush.sdk.au r1 = com.xiaomi.mipush.sdk.au.c
        L21:
            return r1
    }

    public static com.xiaomi.mipush.sdk.l.a a(com.xiaomi.mipush.sdk.e r1) {
            java.util.HashMap<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.l$a> r0 = com.xiaomi.mipush.sdk.l.a
            java.lang.Object r1 = r0.get(r1)
            com.xiaomi.mipush.sdk.l$a r1 = (com.xiaomi.mipush.sdk.l.a) r1
            return r1
    }

    public static com.xiaomi.push.ho a(com.xiaomi.mipush.sdk.e r0) {
            com.xiaomi.push.ho r0 = com.xiaomi.push.ho.ao
            return r0
    }

    private static void a(com.xiaomi.mipush.sdk.e r1, com.xiaomi.mipush.sdk.l.a r2) {
            if (r2 == 0) goto L7
            java.util.HashMap<com.xiaomi.mipush.sdk.e, com.xiaomi.mipush.sdk.l$a> r0 = com.xiaomi.mipush.sdk.l.a
            r0.put(r1, r2)
        L7:
            return
    }
}
