package com.bytedance.pangle.g;

final class o {
    public static final com.bytedance.pangle.g.o a = null;
    public final android.content.pm.Signature[] b;
    public final int c;
    public final android.util.ArraySet<java.security.PublicKey> d;
    public final android.content.pm.Signature[] e;
    public final int[] f;

    static {
            com.bytedance.pangle.g.o r6 = new com.bytedance.pangle.g.o
            r1 = 0
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            r0 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            com.bytedance.pangle.g.o.a = r6
            return
    }

    public o(android.content.pm.Signature[] r3) {
            r2 = this;
            r0 = 0
            r1 = 2
            r2.<init>(r3, r1, r0, r0)
            return
    }

    public o(android.content.pm.Signature[] r1, int r2, android.util.ArraySet<java.security.PublicKey> r3, android.content.pm.Signature[] r4, int[] r5) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            r0.d = r3
            r0.e = r4
            r0.f = r5
            return
    }

    public o(android.content.pm.Signature[] r7, int r8, android.content.pm.Signature[] r9, int[] r10) {
            r6 = this;
            android.util.ArraySet r3 = a(r7)
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    private static android.util.ArraySet<java.security.PublicKey> a(android.content.pm.Signature[] r6) {
            android.util.ArraySet r0 = new android.util.ArraySet
            int r1 = r6.length
            r0.<init>(r1)
            r1 = 0
            r2 = r1
        L8:
            int r3 = r6.length
            if (r2 >= r3) goto L3c
            java.lang.Class<android.content.pm.Signature> r3 = android.content.pm.Signature.class
            java.lang.Class[] r4 = new java.lang.Class[r1]
            java.lang.String r5 = "getPublicKey"
            java.lang.reflect.Method r3 = com.bytedance.pangle.b.a.a.a(r3, r5, r4)
            if (r3 == 0) goto L39
            boolean r4 = r3.isAccessible()
            if (r4 == 0) goto L39
            r4 = r6[r2]     // Catch: java.lang.Exception -> L2b java.lang.reflect.InvocationTargetException -> L30 java.lang.IllegalAccessException -> L35
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L2b java.lang.reflect.InvocationTargetException -> L30 java.lang.IllegalAccessException -> L35
            java.lang.Object r3 = r3.invoke(r4, r5)     // Catch: java.lang.Exception -> L2b java.lang.reflect.InvocationTargetException -> L30 java.lang.IllegalAccessException -> L35
            java.security.PublicKey r3 = (java.security.PublicKey) r3     // Catch: java.lang.Exception -> L2b java.lang.reflect.InvocationTargetException -> L30 java.lang.IllegalAccessException -> L35
            r0.add(r3)     // Catch: java.lang.Exception -> L2b java.lang.reflect.InvocationTargetException -> L30 java.lang.IllegalAccessException -> L35
            goto L39
        L2b:
            r3 = move-exception
            r3.printStackTrace()
            goto L39
        L30:
            r3 = move-exception
            r3.printStackTrace()
            goto L39
        L35:
            r3 = move-exception
            r3.printStackTrace()
        L39:
            int r2 = r2 + 1
            goto L8
        L3c:
            return r0
    }

    public static boolean a(byte[] r4, byte[] r5) {
            int r0 = r4.length
            int r1 = r5.length
            r2 = 0
            if (r0 == r1) goto L6
            return r2
        L6:
            r0 = r2
        L7:
            int r1 = r4.length
            if (r0 >= r1) goto L14
            r1 = r4[r0]
            r3 = r5[r0]
            if (r1 == r3) goto L11
            return r2
        L11:
            int r0 = r0 + 1
            goto L7
        L14:
            r4 = 1
            return r4
    }

    public static boolean a(android.content.pm.Signature[] r2, android.content.pm.Signature[] r3) {
            int r0 = r2.length
            int r1 = r3.length
            if (r0 != r1) goto L12
            boolean r0 = com.bytedance.pangle.util.d.a(r2, r3)
            if (r0 == 0) goto L12
            boolean r2 = com.bytedance.pangle.util.d.a(r3, r2)
            if (r2 == 0) goto L12
            r2 = 1
            return r2
        L12:
            r2 = 0
            return r2
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.bytedance.pangle.g.o
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.bytedance.pangle.g.o r5 = (com.bytedance.pangle.g.o) r5
            int r1 = r4.c
            int r3 = r5.c
            if (r1 == r3) goto L13
            return r2
        L13:
            android.content.pm.Signature[] r1 = r4.b
            android.content.pm.Signature[] r3 = r5.b
            boolean r1 = a(r1, r3)
            if (r1 != 0) goto L1e
            return r2
        L1e:
            android.util.ArraySet<java.security.PublicKey> r1 = r4.d
            if (r1 == 0) goto L2b
            android.util.ArraySet<java.security.PublicKey> r3 = r5.d
            boolean r1 = r1.equals(r3)
            if (r1 != 0) goto L30
            return r2
        L2b:
            android.util.ArraySet<java.security.PublicKey> r1 = r5.d
            if (r1 == 0) goto L30
            return r2
        L30:
            android.content.pm.Signature[] r1 = r4.e
            android.content.pm.Signature[] r3 = r5.e
            boolean r1 = java.util.Arrays.equals(r1, r3)
            if (r1 != 0) goto L3b
            return r2
        L3b:
            int[] r1 = r4.f
            int[] r5 = r5.f
            boolean r5 = java.util.Arrays.equals(r1, r5)
            if (r5 != 0) goto L46
            return r2
        L46:
            return r0
    }

    public final int hashCode() {
            r2 = this;
            android.content.pm.Signature[] r0 = r2.b
            int r0 = java.util.Arrays.hashCode(r0)
            int r0 = r0 * 31
            int r1 = r2.c
            int r0 = r0 + r1
            int r0 = r0 * 31
            android.util.ArraySet<java.security.PublicKey> r1 = r2.d
            if (r1 == 0) goto L16
            int r1 = r1.hashCode()
            goto L17
        L16:
            r1 = 0
        L17:
            int r0 = r0 + r1
            int r0 = r0 * 31
            android.content.pm.Signature[] r1 = r2.e
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            int r0 = r0 * 31
            int[] r1 = r2.f
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            return r0
    }
}
