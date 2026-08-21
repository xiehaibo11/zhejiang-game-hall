package com.xiaomi.push;

public class db {
    public static int a(android.content.Context r1, int r2) {
            int r1 = com.xiaomi.push.hb.a(r1)
            r0 = -1
            if (r0 != r1) goto L8
            return r0
        L8:
            if (r1 != 0) goto Ld
            r1 = 13
            goto Lf
        Ld:
            r1 = 11
        Lf:
            int r2 = r2 * r1
            int r2 = r2 / 10
            return r2
    }

    public static int a(com.xiaomi.push.hj r0) {
            int r0 = r0.a()
            int r0 = com.xiaomi.push.en.a(r0)
            return r0
    }

    public static int a(com.xiaomi.push.iu r2, com.xiaomi.push.hj r3) {
            int[] r0 = com.xiaomi.push.dc.a
            int r1 = r3.ordinal()
            r0 = r0[r1]
            r1 = -1
            switch(r0) {
                case 1: goto Lb6;
                case 2: goto Lb6;
                case 3: goto Lb6;
                case 4: goto Lb6;
                case 5: goto Lb6;
                case 6: goto Lb6;
                case 7: goto Lb6;
                case 8: goto Lb6;
                case 9: goto Lb6;
                case 10: goto Lb6;
                case 11: goto L57;
                case 12: goto Le;
                default: goto Lc;
            }
        Lc:
            goto Lbe
        Le:
            int r3 = r3.a()
            int r3 = com.xiaomi.push.en.a(r3)
            if (r2 == 0) goto L55
            boolean r0 = r2 instanceof com.xiaomi.push.ie     // Catch: java.lang.Exception -> L50
            if (r0 == 0) goto L33
            com.xiaomi.push.ie r2 = (com.xiaomi.push.ie) r2     // Catch: java.lang.Exception -> L50
            java.lang.String r2 = r2.b()     // Catch: java.lang.Exception -> L50
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L50
            if (r0 != 0) goto L55
            int r0 = com.xiaomi.push.ey.a(r2)     // Catch: java.lang.Exception -> L50
            if (r0 == r1) goto L55
            int r3 = com.xiaomi.push.ey.a(r2)     // Catch: java.lang.Exception -> L50
            goto L55
        L33:
            boolean r0 = r2 instanceof com.xiaomi.push.id     // Catch: java.lang.Exception -> L50
            if (r0 == 0) goto L55
            com.xiaomi.push.id r2 = (com.xiaomi.push.id) r2     // Catch: java.lang.Exception -> L50
            java.lang.String r2 = r2.a()     // Catch: java.lang.Exception -> L50
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L50
            if (r0 != 0) goto L55
            int r0 = com.xiaomi.push.ey.a(r2)     // Catch: java.lang.Exception -> L50
            if (r0 == r1) goto L55
            int r2 = com.xiaomi.push.ey.a(r2)     // Catch: java.lang.Exception -> L50
            r1 = r2
            goto Lbe
        L50:
            java.lang.String r2 = "PERF_ERROR : parse Command type error"
            com.xiaomi.channel.commonutils.logger.b.d(r2)
        L55:
            r1 = r3
            goto Lbe
        L57:
            int r3 = r3.a()
            int r3 = com.xiaomi.push.en.a(r3)
            if (r2 == 0) goto L55
            boolean r0 = r2 instanceof com.xiaomi.push.ia     // Catch: java.lang.Exception -> Laf
            if (r0 == 0) goto L82
            com.xiaomi.push.ia r2 = (com.xiaomi.push.ia) r2     // Catch: java.lang.Exception -> Laf
            java.lang.String r2 = r2.d     // Catch: java.lang.Exception -> Laf
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Laf
            if (r0 != 0) goto L55
            com.xiaomi.push.ht r0 = com.xiaomi.push.en.a(r2)     // Catch: java.lang.Exception -> Laf
            int r0 = com.xiaomi.push.en.a(r0)     // Catch: java.lang.Exception -> Laf
            if (r0 == r1) goto L55
            com.xiaomi.push.ht r2 = com.xiaomi.push.en.a(r2)     // Catch: java.lang.Exception -> Laf
            int r3 = com.xiaomi.push.en.a(r2)     // Catch: java.lang.Exception -> Laf
            goto L55
        L82:
            boolean r0 = r2 instanceof com.xiaomi.push.ii     // Catch: java.lang.Exception -> Laf
            if (r0 == 0) goto L55
            com.xiaomi.push.ii r2 = (com.xiaomi.push.ii) r2     // Catch: java.lang.Exception -> Laf
            java.lang.String r2 = r2.d     // Catch: java.lang.Exception -> Laf
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Laf
            if (r0 != 0) goto L55
            com.xiaomi.push.ht r0 = com.xiaomi.push.en.a(r2)     // Catch: java.lang.Exception -> Laf
            int r0 = com.xiaomi.push.en.a(r0)     // Catch: java.lang.Exception -> Laf
            if (r0 == r1) goto La2
            com.xiaomi.push.ht r0 = com.xiaomi.push.en.a(r2)     // Catch: java.lang.Exception -> Laf
            int r3 = com.xiaomi.push.en.a(r0)     // Catch: java.lang.Exception -> Laf
        La2:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.B     // Catch: java.lang.Exception -> Laf
            com.xiaomi.push.ht r2 = com.xiaomi.push.en.a(r2)     // Catch: java.lang.Exception -> Laf
            boolean r2 = r0.equals(r2)     // Catch: java.lang.Exception -> Laf
            if (r2 == 0) goto L55
            goto Lbe
        Laf:
            r1 = r3
            java.lang.String r2 = "PERF_ERROR : parse Notification type error"
            com.xiaomi.channel.commonutils.logger.b.d(r2)
            goto Lbe
        Lb6:
            int r2 = r3.a()
            int r1 = com.xiaomi.push.en.a(r2)
        Lbe:
            return r1
    }

    public static void a(java.lang.String r7, android.content.Context r8, int r9, int r10) {
            if (r9 <= 0) goto L20
            if (r10 <= 0) goto L20
            int r10 = a(r8, r10)
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.B
            int r0 = com.xiaomi.push.en.a(r0)
            if (r9 == r0) goto L20
            android.content.Context r8 = r8.getApplicationContext()
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r8)
            r3 = 1
            long r5 = (long) r10
            r1 = r7
            r2 = r9
            r0.a(r1, r2, r3, r5)
        L20:
            return
    }

    public static void a(java.lang.String r2, android.content.Context r3, com.xiaomi.push.if r4, int r5) {
            if (r3 == 0) goto L1f
            if (r4 != 0) goto L5
            goto L1f
        L5:
            com.xiaomi.push.hj r0 = r4.a()
            if (r0 == 0) goto L1f
            int r0 = a(r0)
            r1 = 0
            if (r5 > 0) goto L1c
            byte[] r4 = com.xiaomi.push.it.a(r4)
            if (r4 == 0) goto L1b
            int r4 = r4.length
            r5 = r4
            goto L1c
        L1b:
            r5 = r1
        L1c:
            a(r2, r3, r0, r5)
        L1f:
            return
    }

    public static void a(java.lang.String r0, android.content.Context r1, com.xiaomi.push.iu r2, com.xiaomi.push.hj r3, int r4) {
            int r2 = a(r2, r3)
            a(r0, r1, r2, r4)
            return
    }

    public static void a(java.lang.String r1, android.content.Context r2, byte[] r3) {
            if (r2 == 0) goto L1a
            if (r3 == 0) goto L1a
            int r0 = r3.length
            if (r0 > 0) goto L8
            goto L1a
        L8:
            com.xiaomi.push.if r0 = new com.xiaomi.push.if
            r0.<init>()
            com.xiaomi.push.it.a(r0, r3)     // Catch: com.xiaomi.push.iz -> L15
            int r3 = r3.length     // Catch: com.xiaomi.push.iz -> L15
            a(r1, r2, r0, r3)     // Catch: com.xiaomi.push.iz -> L15
            goto L1a
        L15:
            java.lang.String r1 = "fail to convert bytes to container"
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L1a:
            return
    }
}
