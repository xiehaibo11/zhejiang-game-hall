package com.bytedance.pangle.g;

final class l implements com.bytedance.pangle.g.k {
    private static final long a = 0;
    private final java.io.FileDescriptor b;
    private final long c;
    private final long d;

    static {
            int r0 = android.system.OsConstants._SC_PAGESIZE
            long r0 = android.system.Os.sysconf(r0)
            com.bytedance.pangle.g.l.a = r0
            return
    }

    l(java.io.FileDescriptor r1, long r2, long r4) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            r0.d = r4
            return
    }

    @Override
    public final long a() {
            r2 = this;
            long r0 = r2.d
            return r0
    }

    @Override
    public final void a(com.bytedance.pangle.g.j r19, long r20, int r22) {
            r18 = this;
            r1 = r18
            long r2 = r1.c
            long r2 = r2 + r20
            long r4 = com.bytedance.pangle.g.l.a
            long r6 = r2 / r4
            long r15 = r6 * r4
            long r2 = r2 - r15
            int r2 = (int) r2
            int r0 = r22 + r2
            long r3 = (long) r0
            r5 = 0
            boolean r0 = com.bytedance.pangle.util.i.g()     // Catch: java.lang.Throwable -> L127 android.system.ErrnoException -> L12a
            r7 = 0
            r17 = 0
            if (r0 == 0) goto L38
            java.lang.Class<android.system.OsConstants> r0 = android.system.OsConstants.class
            java.lang.String r8 = "MAP_POPULATE"
            java.lang.reflect.Field r0 = com.bytedance.pangle.b.a.a.a(r0, r8)     // Catch: java.lang.Exception -> L2f java.lang.IllegalAccessException -> L34 java.lang.Throwable -> L127 android.system.ErrnoException -> L12a
            java.lang.Object r0 = com.bytedance.pangle.util.FieldUtils.readField(r0, r7)     // Catch: java.lang.Exception -> L2f java.lang.IllegalAccessException -> L34 java.lang.Throwable -> L127 android.system.ErrnoException -> L12a
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Exception -> L2f java.lang.IllegalAccessException -> L34 java.lang.Throwable -> L127 android.system.ErrnoException -> L12a
            int r0 = r0.intValue()     // Catch: java.lang.Exception -> L2f java.lang.IllegalAccessException -> L34 java.lang.Throwable -> L127 android.system.ErrnoException -> L12a
            goto L3a
        L2f:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L127 android.system.ErrnoException -> L12a
            goto L38
        L34:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L127 android.system.ErrnoException -> L12a
        L38:
            r0 = r17
        L3a:
            r8 = 0
            int r12 = android.system.OsConstants.PROT_READ     // Catch: java.lang.Throwable -> L127 android.system.ErrnoException -> L12a
            int r10 = android.system.OsConstants.MAP_SHARED     // Catch: java.lang.Throwable -> L127 android.system.ErrnoException -> L12a
            r13 = r10 | r0
            java.io.FileDescriptor r14 = r1.b     // Catch: java.lang.Throwable -> L127 android.system.ErrnoException -> L12a
            r10 = r3
            long r8 = android.system.Os.mmap(r8, r10, r12, r13, r14, r15)     // Catch: java.lang.Throwable -> L127 android.system.ErrnoException -> L12a
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r10 = 24
            r11 = 1
            if (r0 < r10) goto L58
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r10 = 28
            if (r0 > r10) goto L58
            r0 = r11
            goto L5a
        L58:
            r0 = r17
        L5a:
            java.lang.String r10 = "java.nio.DirectByteBuffer"
            r12 = 2
            if (r0 == 0) goto Lca
            java.lang.Class r0 = java.lang.Class.forName(r10)     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r10 = 5
            java.lang.Class[] r13 = new java.lang.Class[r10]     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Class r14 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r13[r17] = r14     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Class r14 = java.lang.Long.TYPE     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r13[r11] = r14     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Class<java.io.FileDescriptor> r14 = java.io.FileDescriptor.class
            r13[r12] = r14     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Class<java.lang.Runnable> r14 = java.lang.Runnable.class
            r15 = 3
            r13[r15] = r14     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Class r14 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r16 = 4
            r13[r16] = r14     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.reflect.Constructor r0 = com.bytedance.pangle.b.a.a.a(r0, r13)     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            if (r0 == 0) goto L118
            boolean r13 = r0.isAccessible()     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            if (r13 == 0) goto L118
            java.lang.Object[] r10 = new java.lang.Object[r10]     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Integer r13 = java.lang.Integer.valueOf(r22)     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r10[r17] = r13     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            long r13 = (long) r2     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            long r13 = r13 + r8
            java.lang.Long r2 = java.lang.Long.valueOf(r13)     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r10[r11] = r2     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.io.FileDescriptor r2 = r1.b     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r10[r12] = r2     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r10[r15] = r7     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Boolean r2 = java.lang.Boolean.TRUE     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r10[r16] = r2     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Object r0 = r0.newInstance(r10)     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.nio.ByteBuffer r0 = (java.nio.ByteBuffer) r0     // Catch: java.lang.Exception -> Lac java.lang.reflect.InvocationTargetException -> Lae java.lang.InstantiationException -> Lb0 java.lang.IllegalAccessException -> Lb2 java.lang.ClassNotFoundException -> Lb4 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
        La9:
            r7 = r0
            goto L118
        Lac:
            r0 = move-exception
            goto Lb6
        Lae:
            r0 = move-exception
            goto Lba
        Lb0:
            r0 = move-exception
            goto Lbe
        Lb2:
            r0 = move-exception
            goto Lc2
        Lb4:
            r0 = move-exception
            goto Lc6
        Lb6:
            r0.printStackTrace()     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            goto L118
        Lba:
            r0.printStackTrace()     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            goto L118
        Lbe:
            r0.printStackTrace()     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            goto L118
        Lc2:
            r0.printStackTrace()     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            goto L118
        Lc6:
            r0.printStackTrace()     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            goto L118
        Lca:
            java.lang.Class r0 = java.lang.Class.forName(r10)     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Class[] r10 = new java.lang.Class[r12]     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Class r13 = java.lang.Long.TYPE     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r10[r17] = r13     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Class r13 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r10[r11] = r13     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.reflect.Constructor r0 = com.bytedance.pangle.b.a.a.a(r0, r10)     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            if (r0 == 0) goto L118
            boolean r10 = r0.isAccessible()     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            if (r10 == 0) goto L118
            java.lang.Object[] r10 = new java.lang.Object[r12]     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            long r12 = (long) r2     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            long r12 = r12 + r8
            java.lang.Long r2 = java.lang.Long.valueOf(r12)     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r10[r17] = r2     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Integer r2 = java.lang.Integer.valueOf(r22)     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            r10[r11] = r2     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.lang.Object r0 = r0.newInstance(r10)     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            java.nio.ByteBuffer r0 = (java.nio.ByteBuffer) r0     // Catch: java.lang.Exception -> Lfb java.lang.reflect.InvocationTargetException -> Lfd java.lang.InstantiationException -> Lff java.lang.IllegalAccessException -> L101 java.lang.ClassNotFoundException -> L103 android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            goto La9
        Lfb:
            r0 = move-exception
            goto L105
        Lfd:
            r0 = move-exception
            goto L109
        Lff:
            r0 = move-exception
            goto L10d
        L101:
            r0 = move-exception
            goto L111
        L103:
            r0 = move-exception
            goto L115
        L105:
            r0.printStackTrace()     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            goto L118
        L109:
            r0.printStackTrace()     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            goto L118
        L10d:
            r0.printStackTrace()     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            goto L118
        L111:
            r0.printStackTrace()     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            goto L118
        L115:
            r0.printStackTrace()     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
        L118:
            r2 = r19
            r2.a(r7)     // Catch: android.system.ErrnoException -> L125 java.lang.Throwable -> L145
            int r0 = (r8 > r5 ? 1 : (r8 == r5 ? 0 : -1))
            if (r0 == 0) goto L124
            android.system.Os.munmap(r8, r3)     // Catch: android.system.ErrnoException -> L124
        L124:
            return
        L125:
            r0 = move-exception
            goto L12c
        L127:
            r0 = move-exception
            r8 = r5
            goto L146
        L12a:
            r0 = move-exception
            r8 = r5
        L12c:
            java.io.IOException r2 = new java.io.IOException     // Catch: java.lang.Throwable -> L145
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L145
            java.lang.String r10 = "Failed to mmap "
            r7.<init>(r10)     // Catch: java.lang.Throwable -> L145
            r7.append(r3)     // Catch: java.lang.Throwable -> L145
            java.lang.String r10 = " bytes"
            r7.append(r10)     // Catch: java.lang.Throwable -> L145
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L145
            r2.<init>(r7, r0)     // Catch: java.lang.Throwable -> L145
            throw r2     // Catch: java.lang.Throwable -> L145
        L145:
            r0 = move-exception
        L146:
            int r2 = (r8 > r5 ? 1 : (r8 == r5 ? 0 : -1))
            if (r2 == 0) goto L14d
            android.system.Os.munmap(r8, r3)     // Catch: android.system.ErrnoException -> L14d
        L14d:
            throw r0
    }
}
