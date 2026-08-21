package com.bytedance.pangle.e;

public final class e implements com.bytedance.pangle.e.f.a {
    private static volatile android.os.IBinder a;
    private static volatile java.lang.Object b;

    public interface a {
    }

    static class b extends android.os.ResultReceiver {
        private com.bytedance.pangle.e.e.a a;

        public b() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                r1.a = r0
                return
        }

        @Override
        protected final void onReceiveResult(int r1, android.os.Bundle r2) {
                r0 = this;
                super.onReceiveResult(r1, r2)
                return
        }
    }

    static {
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.Object a(java.lang.Object r0, java.lang.String r1, java.lang.Object[] r2, java.lang.Class<?>[] r3) {
            java.lang.Object r0 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r0, r1, r2, r3)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    private static java.lang.Object a(java.lang.reflect.Field r1, java.lang.Object r2) {
            boolean r0 = r1.isAccessible()     // Catch: java.lang.Exception -> L13
            if (r0 != 0) goto La
            r0 = 1
            r1.setAccessible(r0)     // Catch: java.lang.Exception -> L13
        La:
            java.lang.Object r2 = r1.get(r2)     // Catch: java.lang.Exception -> L13
            r0 = 0
            r1.setAccessible(r0)     // Catch: java.lang.Exception -> L13
            return r2
        L13:
            r1 = 0
            return r1
    }

    private static void a(java.lang.String[] r4) {
            android.os.Parcel r0 = android.os.Parcel.obtain()
            android.os.Parcel r1 = android.os.Parcel.obtain()
            java.io.FileDescriptor r2 = java.io.FileDescriptor.in
            r0.writeFileDescriptor(r2)
            java.io.FileDescriptor r2 = java.io.FileDescriptor.out
            r0.writeFileDescriptor(r2)
            java.io.FileDescriptor r2 = java.io.FileDescriptor.err
            r0.writeFileDescriptor(r2)
            r0.writeStringArray(r4)
            r4 = 0
            r0.writeStrongBinder(r4)
            com.bytedance.pangle.e.e$b r4 = new com.bytedance.pangle.e.e$b
            r4.<init>()
            r2 = 0
            r4.writeToParcel(r0, r2)
            android.os.IBinder r4 = com.bytedance.pangle.e.e.a     // Catch: java.lang.Exception -> L32 java.lang.Throwable -> L39
            r3 = 1598246212(0x5f434d44, float:1.4072979E19)
            r4.transact(r3, r0, r1, r2)     // Catch: java.lang.Exception -> L32 java.lang.Throwable -> L39
            r1.readException()     // Catch: java.lang.Exception -> L32 java.lang.Throwable -> L39
        L32:
            r0.recycle()
            r1.recycle()
            return
        L39:
            r4 = move-exception
            r0.recycle()
            r1.recycle()
            throw r4
    }

    @Override
    public final boolean a(java.lang.String r13, int r14) {
            r12 = this;
            android.os.IBinder r0 = com.bytedance.pangle.e.e.a
            if (r0 != 0) goto L32
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            if (r0 != 0) goto L10
            r1 = 0
            goto L1a
        L10:
            java.lang.Class r1 = r0.getClass()
            java.lang.String r2 = "mPM"
            java.lang.reflect.Field r1 = com.bytedance.pangle.util.FieldUtils.getField(r1, r2)
        L1a:
            if (r1 == 0) goto L32
            java.lang.Object r0 = a(r1, r0)
            com.bytedance.pangle.e.e.b = r0
            boolean r0 = r0 instanceof android.os.IInterface
            if (r0 == 0) goto L32
            java.lang.Object r0 = com.bytedance.pangle.e.e.b
            android.os.IInterface r0 = (android.os.IInterface) r0
            android.os.IBinder r0 = r0.asBinder()
            if (r0 == 0) goto L32
            com.bytedance.pangle.e.e.a = r0
        L32:
            r0 = 4
            r1 = 2
            r2 = 3
            r3 = 0
            r4 = 1
            if (r13 == 0) goto Lc1
            java.lang.String r5 = com.bytedance.pangle.d.c.b(r13, r14)
            java.lang.String r6 = com.bytedance.pangle.d.c.e(r13, r14)
            com.bytedance.pangle.util.h.a(r5, r6)     // Catch: java.lang.Exception -> L44
        L44:
            android.app.Application r5 = com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r5 = r5.getPackageName()
            java.lang.String r7 = com.bytedance.pangle.e.b.a()
            int r8 = android.os.Build.VERSION.SDK_INT
            r9 = 30
            java.lang.String r10 = "notifyDexLoad"
            if (r8 != r9) goto L85
            java.lang.Object r8 = com.bytedance.pangle.e.e.b
            if (r8 == 0) goto Lc1
            if (r5 == 0) goto Lc1
            if (r6 == 0) goto Lc1
            if (r7 != 0) goto L63
            goto Lc1
        L63:
            java.lang.String r8 = "PCL[]"
            java.util.Map r6 = java.util.Collections.singletonMap(r6, r8)
            java.lang.Object r8 = com.bytedance.pangle.e.e.b
            java.lang.Object[] r9 = new java.lang.Object[r2]
            r9[r3] = r5
            r9[r4] = r6
            r9[r1] = r7
            java.lang.Class[] r5 = new java.lang.Class[r2]
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r3] = r6
            java.lang.Class<java.util.Map> r6 = java.util.Map.class
            r5[r4] = r6
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r1] = r6
            a(r8, r10, r9, r5)
            goto Lc1
        L85:
            int r8 = android.os.Build.VERSION.SDK_INT
            r9 = 29
            if (r8 != r9) goto Lc1
            java.lang.Object r8 = com.bytedance.pangle.e.e.b
            if (r8 == 0) goto Lc1
            if (r5 == 0) goto Lc1
            if (r6 == 0) goto Lc1
            if (r7 != 0) goto L96
            goto Lc1
        L96:
            java.lang.String r8 = "dalvik.system.DexClassLoader"
            java.util.List r8 = java.util.Collections.singletonList(r8)
            java.util.List r6 = java.util.Collections.singletonList(r6)
            java.lang.Object r9 = com.bytedance.pangle.e.e.b
            java.lang.Object[] r11 = new java.lang.Object[r0]
            r11[r3] = r5
            r11[r4] = r8
            r11[r1] = r6
            r11[r2] = r7
            java.lang.Class[] r5 = new java.lang.Class[r0]
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r3] = r6
            java.lang.Class<java.util.List> r6 = java.util.List.class
            r5[r4] = r6
            java.lang.Class<java.util.List> r6 = java.util.List.class
            r5[r1] = r6
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r2] = r6
            a(r9, r10, r11, r5)
        Lc1:
            java.lang.String r5 = com.bytedance.pangle.d.c.e(r13, r14)
            java.lang.String r6 = com.bytedance.pangle.d.c.h(r13, r14)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r6)
            java.lang.String r6 = java.io.File.separator
            r7.append(r6)
            java.lang.String r5 = com.bytedance.pangle.e.b.a(r5)
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6 = r4
        Le2:
            if (r6 > r2) goto L118
            r7 = 6
            java.lang.String[] r7 = new java.lang.String[r7]
            java.lang.String r8 = "compile"
            r7[r3] = r8
            java.lang.String r8 = "-m"
            r7[r4] = r8
            java.lang.String r8 = "speed"
            r7[r1] = r8
            java.lang.String r8 = "-f"
            r7[r2] = r8
            java.lang.String r8 = "--secondary-dex"
            r7[r0] = r8
            r8 = 5
            android.app.Application r9 = com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r9 = r9.getPackageName()
            r7[r8] = r9
            a(r7)
            java.lang.String[] r7 = new java.lang.String[r4]
            r7[r3] = r5
            boolean r7 = com.bytedance.pangle.e.b.a(r7)
            if (r7 == 0) goto L115
            r0 = r4
            goto L119
        L115:
            int r6 = r6 + 1
            goto Le2
        L118:
            r0 = r3
        L119:
            if (r13 == 0) goto L14b
            java.lang.String r2 = com.bytedance.pangle.d.c.f(r13, r14)
            java.lang.String r5 = com.bytedance.pangle.d.c.g(r13, r14)
            com.bytedance.pangle.util.g.a(r5, r2)     // Catch: java.lang.Exception -> L126
        L126:
            java.lang.String r13 = com.bytedance.pangle.d.c.e(r13, r14)
            java.io.File r14 = new java.io.File     // Catch: java.lang.Exception -> L138
            r14.<init>(r13)     // Catch: java.lang.Exception -> L138
            boolean r13 = r14.exists()     // Catch: java.lang.Exception -> L138
            if (r13 == 0) goto L138
            r14.delete()     // Catch: java.lang.Exception -> L138
        L138:
            java.lang.String[] r13 = new java.lang.String[r1]
            java.lang.String r14 = "reconcile-secondary-dex-files"
            r13[r3] = r14
            android.app.Application r14 = com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r14 = r14.getPackageName()
            r13[r4] = r14
            a(r13)
        L14b:
            return r0
    }
}
