package com.xiaomi.push.service;

public class bb {
    public static int a(com.xiaomi.push.service.ba r3, com.xiaomi.push.hp r4) {
            int[] r0 = com.xiaomi.push.service.bc.a
            int r1 = r4.ordinal()
            r0 = r0[r1]
            r1 = 1
            r2 = 0
            if (r0 == r1) goto Le
            r1 = 2
            r1 = r2
        Le:
            int r3 = r3.a(r4, r1)
            return r3
    }

    private static java.util.List<android.util.Pair<java.lang.Integer, java.lang.Object>> a(java.util.List<com.xiaomi.push.hu> r7, boolean r8) {
            boolean r0 = com.xiaomi.push.ag.a(r7)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r7 = r7.iterator()
        L11:
            boolean r2 = r7.hasNext()
            if (r2 == 0) goto L9d
            java.lang.Object r2 = r7.next()
            com.xiaomi.push.hu r2 = (com.xiaomi.push.hu) r2
            int r3 = r2.a()
            int r4 = r2.b()
            com.xiaomi.push.hq r4 = com.xiaomi.push.hq.a(r4)
            if (r4 != 0) goto L2c
            goto L11
        L2c:
            if (r8 == 0) goto L3f
            boolean r5 = r2.a
            if (r5 == 0) goto L3f
            android.util.Pair r2 = new android.util.Pair
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r2.<init>(r3, r1)
            r0.add(r2)
            goto L11
        L3f:
            int[] r5 = com.xiaomi.push.service.bc.b
            int r4 = r4.ordinal()
            r4 = r5[r4]
            r5 = 1
            if (r4 == r5) goto L87
            r5 = 2
            if (r4 == r5) goto L75
            r5 = 3
            if (r4 == r5) goto L67
            r5 = 4
            if (r4 == r5) goto L55
            r4 = r1
            goto L98
        L55:
            android.util.Pair r4 = new android.util.Pair
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            boolean r2 = r2.g()
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r4.<init>(r3, r2)
            goto L98
        L67:
            android.util.Pair r4 = new android.util.Pair
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r2 = r2.a()
            r4.<init>(r3, r2)
            goto L98
        L75:
            android.util.Pair r4 = new android.util.Pair
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            long r5 = r2.a()
            java.lang.Long r2 = java.lang.Long.valueOf(r5)
            r4.<init>(r3, r2)
            goto L98
        L87:
            android.util.Pair r4 = new android.util.Pair
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            int r2 = r2.c()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r4.<init>(r3, r2)
        L98:
            r0.add(r4)
            goto L11
        L9d:
            return r0
    }

    public static void a(com.xiaomi.push.service.ba r1, com.xiaomi.push.ig r2) {
            java.util.List r2 = r2.a()
            r0 = 1
            java.util.List r2 = a(r2, r0)
            r1.a(r2)
            r1.b()
            return
    }

    public static void a(com.xiaomi.push.service.ba r6, com.xiaomi.push.ih r7) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.List r7 = r7.a()
            java.util.Iterator r7 = r7.iterator()
        L12:
            boolean r2 = r7.hasNext()
            if (r2 == 0) goto L43
            java.lang.Object r2 = r7.next()
            com.xiaomi.push.hs r2 = (com.xiaomi.push.hs) r2
            android.util.Pair r3 = new android.util.Pair
            com.xiaomi.push.hp r4 = r2.a()
            int r5 = r2.a()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r3.<init>(r4, r5)
            r0.add(r3)
            java.util.List<com.xiaomi.push.hu> r2 = r2.a
            r3 = 0
            java.util.List r2 = a(r2, r3)
            boolean r3 = com.xiaomi.push.ag.a(r2)
            if (r3 != 0) goto L12
            r1.addAll(r2)
            goto L12
        L43:
            r6.a(r0, r1)
            r6.b()
            return
    }
}
