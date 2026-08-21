package com.xiaomi.mipush.sdk;

public class ai {
    protected static <T extends com.xiaomi.push.iu<T, ?>> com.xiaomi.push.if a(android.content.Context r7, T r8, com.xiaomi.push.hj r9) {
            com.xiaomi.push.hj r0 = com.xiaomi.push.hj.a
            boolean r0 = r9.equals(r0)
            r4 = r0 ^ 1
            java.lang.String r5 = r7.getPackageName()
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r7)
            java.lang.String r6 = r0.a()
            r1 = r7
            r2 = r8
            r3 = r9
            com.xiaomi.push.if r7 = a(r1, r2, r3, r4, r5, r6)
            return r7
    }

    protected static <T extends com.xiaomi.push.iu<T, ?>> com.xiaomi.push.if a(android.content.Context r7, T r8, com.xiaomi.push.hj r9, boolean r10, java.lang.String r11, java.lang.String r12) {
            r6 = 1
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            com.xiaomi.push.if r7 = a(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }

    protected static <T extends com.xiaomi.push.iu<T, ?>> com.xiaomi.push.if a(android.content.Context r4, T r5, com.xiaomi.push.hj r6, boolean r7, java.lang.String r8, java.lang.String r9, boolean r10) {
            byte[] r5 = com.xiaomi.push.it.a(r5)
            r0 = 0
            if (r5 != 0) goto Ld
            java.lang.String r4 = "invoke convertThriftObjectToBytes method, return null."
        L9:
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            return r0
        Ld:
            com.xiaomi.push.if r1 = new com.xiaomi.push.if
            r1.<init>()
            if (r7 == 0) goto L33
            com.xiaomi.mipush.sdk.b r4 = com.xiaomi.mipush.sdk.b.a(r4)
            java.lang.String r4 = r4.d()
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 == 0) goto L25
            java.lang.String r4 = "regSecret is empty, return null"
            goto L9
        L25:
            byte[] r4 = com.xiaomi.push.bm.a(r4)
            byte[] r5 = com.xiaomi.push.i.b(r4, r5)     // Catch: java.lang.Exception -> L2e
            goto L33
        L2e:
            java.lang.String r4 = "encryption error. "
            com.xiaomi.channel.commonutils.logger.b.d(r4)
        L33:
            com.xiaomi.push.hy r4 = new com.xiaomi.push.hy
            r4.<init>()
            r2 = 5
            r4.a = r2
            java.lang.String r0 = "fakeid"
            r4.a = r0
            r1.a(r4)
            java.nio.ByteBuffer r4 = java.nio.ByteBuffer.wrap(r5)
            r1.a(r4)
            r1.a(r6)
            r1.b(r10)
            r1.b(r8)
            r1.a(r7)
            r1.a(r9)
            return r1
    }

    public static com.xiaomi.push.iu a(android.content.Context r1, com.xiaomi.push.if r2) {
            boolean r0 = r2.b()
            if (r0 == 0) goto L2c
            com.xiaomi.mipush.sdk.e r0 = com.xiaomi.mipush.sdk.e.b
            byte[] r0 = com.xiaomi.mipush.sdk.i.a(r1, r2, r0)
            if (r0 != 0) goto L1a
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r1)
            java.lang.String r1 = r1.d()
            byte[] r0 = com.xiaomi.push.bm.a(r1)
        L1a:
            byte[] r1 = r2.a()     // Catch: java.lang.Exception -> L23
            byte[] r1 = com.xiaomi.push.i.a(r0, r1)     // Catch: java.lang.Exception -> L23
            goto L30
        L23:
            r1 = move-exception
            com.xiaomi.mipush.sdk.u r2 = new com.xiaomi.mipush.sdk.u
            java.lang.String r0 = "the aes decrypt failed."
            r2.<init>(r0, r1)
            throw r2
        L2c:
            byte[] r1 = r2.a()
        L30:
            com.xiaomi.push.hj r0 = r2.a()
            boolean r2 = r2.b
            com.xiaomi.push.iu r2 = a(r0, r2)
            if (r2 == 0) goto L3f
            com.xiaomi.push.it.a(r2, r1)
        L3f:
            return r2
    }

    private static com.xiaomi.push.iu a(com.xiaomi.push.hj r1, boolean r2) {
            int[] r0 = com.xiaomi.mipush.sdk.aj.a
            int r1 = r1.ordinal()
            r1 = r0[r1]
            switch(r1) {
                case 1: goto L4f;
                case 2: goto L49;
                case 3: goto L43;
                case 4: goto L3d;
                case 5: goto L37;
                case 6: goto L31;
                case 7: goto L2b;
                case 8: goto L25;
                case 9: goto L13;
                case 10: goto Ld;
                default: goto Lb;
            }
        Lb:
            r1 = 0
            return r1
        Ld:
            com.xiaomi.push.ie r1 = new com.xiaomi.push.ie
            r1.<init>()
            return r1
        L13:
            if (r2 == 0) goto L1b
            com.xiaomi.push.ii r1 = new com.xiaomi.push.ii
            r1.<init>()
            return r1
        L1b:
            com.xiaomi.push.ia r1 = new com.xiaomi.push.ia
            r1.<init>()
            r2 = 1
            r1.a(r2)
            return r1
        L25:
            com.xiaomi.push.il r1 = new com.xiaomi.push.il
            r1.<init>()
            return r1
        L2b:
            com.xiaomi.push.ie r1 = new com.xiaomi.push.ie
            r1.<init>()
            return r1
        L31:
            com.xiaomi.push.hz r1 = new com.xiaomi.push.hz
            r1.<init>()
            return r1
        L37:
            com.xiaomi.push.im r1 = new com.xiaomi.push.im
            r1.<init>()
            return r1
        L3d:
            com.xiaomi.push.is r1 = new com.xiaomi.push.is
            r1.<init>()
            return r1
        L43:
            com.xiaomi.push.io r1 = new com.xiaomi.push.io
            r1.<init>()
            return r1
        L49:
            com.xiaomi.push.iq r1 = new com.xiaomi.push.iq
            r1.<init>()
            return r1
        L4f:
            com.xiaomi.push.ik r1 = new com.xiaomi.push.ik
            r1.<init>()
            return r1
    }

    protected static <T extends com.xiaomi.push.iu<T, ?>> com.xiaomi.push.if b(android.content.Context r7, T r8, com.xiaomi.push.hj r9, boolean r10, java.lang.String r11, java.lang.String r12) {
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            com.xiaomi.push.if r7 = a(r0, r1, r2, r3, r4, r5, r6)
            return r7
    }
}
