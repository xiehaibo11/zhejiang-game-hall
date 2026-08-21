package com.bytedance.pangle.res.a;

public final class k {
    static int a(com.bytedance.pangle.res.a.g r2) {
            com.bytedance.pangle.res.a.i r2 = r2.a
            com.bytedance.pangle.res.a.e r2 = r2.a()
            long r0 = r2.b()
            int r2 = (int) r0
            return r2
    }

    static int a(byte[] r2, int r3, int r4, com.bytedance.pangle.res.a.h r5) {
            r0 = 2130706432(0x7f000000, float:1.7014118E38)
            if (r3 < r0) goto L25
            int r3 = r5.a(r3)
            byte[] r5 = a(r3)
            r0 = 0
            r0 = r5[r0]
            r2[r4] = r0
            int r0 = r4 + 1
            r1 = 1
            r1 = r5[r1]
            r2[r0] = r1
            int r0 = r4 + 2
            r1 = 2
            r1 = r5[r1]
            r2[r0] = r1
            r0 = 3
            int r4 = r4 + r0
            r5 = r5[r0]
            r2[r4] = r5
        L25:
            return r3
    }

    public static void a(int r10, byte[] r11, int[] r12, int r13, java.util.HashMap<java.lang.Integer, java.lang.Integer> r14) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r2 = -1
            r3 = 0
            r5 = r2
            r4 = r3
        Le:
            if (r4 >= r13) goto L4f
            int r6 = r4 * 5
            int r7 = r6 + 1
            r7 = r12[r7]
            java.lang.Integer r8 = java.lang.Integer.valueOf(r7)
            boolean r8 = r14.containsKey(r8)
            if (r8 == 0) goto L4c
            if (r5 != r2) goto L23
            r5 = r4
        L23:
            int r6 = r6 * 4
            int r6 = r6 + r10
            java.lang.Integer r8 = java.lang.Integer.valueOf(r4)
            int r9 = r6 + 20
            byte[] r6 = java.util.Arrays.copyOfRange(r11, r6, r9)
            r0.put(r8, r6)
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)
            java.lang.Object r6 = r14.get(r6)
            java.lang.Integer r6 = (java.lang.Integer) r6
            int r6 = r6.intValue()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            java.lang.Integer r7 = java.lang.Integer.valueOf(r4)
            r1.put(r6, r7)
        L4c:
            int r4 = r4 + 1
            goto Le
        L4f:
            java.util.ArrayList r12 = new java.util.ArrayList
            java.util.Set r13 = r1.keySet()
            r12.<init>(r13)
            java.util.Collections.sort(r12)
            java.util.Iterator r12 = r12.iterator()
            r13 = r3
        L60:
            boolean r14 = r12.hasNext()
            if (r14 == 0) goto L8e
            java.lang.Object r14 = r12.next()
            java.lang.Integer r14 = (java.lang.Integer) r14
            java.lang.Object r14 = r1.get(r14)
            java.lang.Integer r14 = (java.lang.Integer) r14
            int r14 = r14.intValue()
            java.lang.Integer r14 = java.lang.Integer.valueOf(r14)
            java.lang.Object r14 = r0.get(r14)
            byte[] r14 = (byte[]) r14
            int r2 = r13 + 1
            int r13 = r13 + r5
            int r13 = r13 * 5
            int r13 = r13 * 4
            int r13 = r13 + r10
            int r4 = r14.length
            java.lang.System.arraycopy(r14, r3, r11, r13, r4)
            r13 = r2
            goto L60
        L8e:
            return
    }

    static void a(byte[] r3, com.bytedance.pangle.res.a.h r4) {
            com.bytedance.pangle.res.a.b r0 = new com.bytedance.pangle.res.a.b
            r0.<init>(r3, r4)
            java.io.ByteArrayInputStream r4 = new java.io.ByteArrayInputStream
            r4.<init>(r3)
            r0.a()
            com.bytedance.pangle.res.a.g r3 = new com.bytedance.pangle.res.a.g
            com.bytedance.pangle.res.a.i r1 = new com.bytedance.pangle.res.a.i
            com.bytedance.pangle.res.a.e r2 = new com.bytedance.pangle.res.a.e
            r2.<init>(r4)
            r1.<init>(r2)
            r3.<init>(r1)
            r0.c = r3
        L1e:
            int r3 = r0.b()
            r4 = 1
            if (r3 != r4) goto L1e
            return
    }

    private static byte[] a(int r3) {
            r0 = 4
            byte[] r0 = new byte[r0]
            int r1 = r3 >> 0
            byte r1 = (byte) r1
            r2 = 0
            r0[r2] = r1
            int r1 = r3 >> 8
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            int r1 = r3 >> 16
            byte r1 = (byte) r1
            r2 = 2
            r0[r2] = r1
            int r3 = r3 >> 24
            byte r3 = (byte) r3
            r1 = 3
            r0[r1] = r3
            return r0
    }
}
