package com.bytedance.pangle.dex;

public final class a {
    private static volatile int a;
    private static volatile java.lang.reflect.Constructor<?> b;

    private static java.lang.Object a(java.io.File r11, java.lang.Object r12) {
            int r0 = com.bytedance.pangle.dex.a.a
            java.lang.reflect.Constructor<?> r1 = com.bytedance.pangle.dex.a.b
            r2 = 0
            if (r1 != 0) goto Le
            java.lang.String r3 = "dalvik.system.DexPathList$Element"
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Exception -> Le
            goto Lf
        Le:
            r3 = r2
        Lf:
            r4 = 8
            r5 = 4
            r6 = 0
            r7 = 3
            r8 = 2
            r9 = 1
            if (r1 != 0) goto L34
            java.lang.Class[] r1 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> L33
            java.lang.Class<java.io.File> r10 = java.io.File.class
            r1[r6] = r10     // Catch: java.lang.Exception -> L33
            java.lang.Class r10 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L33
            r1[r9] = r10     // Catch: java.lang.Exception -> L33
            java.lang.Class<java.io.File> r10 = java.io.File.class
            r1[r8] = r10     // Catch: java.lang.Exception -> L33
            java.lang.Class<dalvik.system.DexFile> r10 = dalvik.system.DexFile.class
            r1[r7] = r10     // Catch: java.lang.Exception -> L33
            java.lang.reflect.Constructor r1 = r3.getConstructor(r1)     // Catch: java.lang.Exception -> L33
            r1.setAccessible(r9)     // Catch: java.lang.Exception -> L33
            r0 = r4
            goto L34
        L33:
            r1 = r2
        L34:
            if (r1 != 0) goto L4e
            java.lang.Class[] r1 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> L4d
            java.lang.Class<java.io.File> r10 = java.io.File.class
            r1[r6] = r10     // Catch: java.lang.Exception -> L4d
            java.lang.Class<java.util.zip.ZipFile> r10 = java.util.zip.ZipFile.class
            r1[r9] = r10     // Catch: java.lang.Exception -> L4d
            java.lang.Class<dalvik.system.DexFile> r10 = dalvik.system.DexFile.class
            r1[r8] = r10     // Catch: java.lang.Exception -> L4d
            java.lang.reflect.Constructor r1 = r3.getConstructor(r1)     // Catch: java.lang.Exception -> L4d
            r1.setAccessible(r9)     // Catch: java.lang.Exception -> L4d
            r0 = r5
            goto L4e
        L4d:
            r1 = r2
        L4e:
            if (r1 != 0) goto L68
            java.lang.Class[] r1 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> L67
            java.lang.Class<java.io.File> r10 = java.io.File.class
            r1[r6] = r10     // Catch: java.lang.Exception -> L67
            java.lang.Class<java.io.File> r10 = java.io.File.class
            r1[r9] = r10     // Catch: java.lang.Exception -> L67
            java.lang.Class<dalvik.system.DexFile> r10 = dalvik.system.DexFile.class
            r1[r8] = r10     // Catch: java.lang.Exception -> L67
            java.lang.reflect.Constructor r1 = r3.getConstructor(r1)     // Catch: java.lang.Exception -> L67
            r1.setAccessible(r9)     // Catch: java.lang.Exception -> L67
            r0 = r8
            goto L68
        L67:
            r1 = r2
        L68:
            if (r1 != 0) goto L86
            java.lang.Class[] r1 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> L85
            java.lang.Class<java.io.File> r10 = java.io.File.class
            r1[r6] = r10     // Catch: java.lang.Exception -> L85
            java.lang.Class r10 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L85
            r1[r9] = r10     // Catch: java.lang.Exception -> L85
            java.lang.Class<java.io.File> r10 = java.io.File.class
            r1[r8] = r10     // Catch: java.lang.Exception -> L85
            java.lang.Class<dalvik.system.DexFile> r10 = dalvik.system.DexFile.class
            r1[r7] = r10     // Catch: java.lang.Exception -> L85
            java.lang.reflect.Constructor r1 = r3.getConstructor(r1)     // Catch: java.lang.Exception -> L85
            r1.setAccessible(r9)     // Catch: java.lang.Exception -> L85
            r0 = r9
            goto L86
        L85:
            r1 = r2
        L86:
            com.bytedance.pangle.dex.a.b = r1
            com.bytedance.pangle.dex.a.a = r0
            if (r0 == r9) goto La0
            if (r0 == r8) goto L93
            if (r0 == r5) goto L93
            if (r0 == r4) goto La0
            goto Lb0
        L93:
            java.lang.Object[] r0 = new java.lang.Object[r7]
            r0[r6] = r11
            r0[r9] = r2
            r0[r8] = r12
            java.lang.Object r2 = a(r1, r0)
            goto Lb0
        La0:
            java.lang.Object[] r0 = new java.lang.Object[r5]
            r0[r6] = r11
            java.lang.Boolean r11 = java.lang.Boolean.FALSE
            r0[r9] = r11
            r0[r8] = r2
            r0[r7] = r12
            java.lang.Object r2 = a(r1, r0)
        Lb0:
            return r2
    }

    private static java.lang.Object a(java.lang.reflect.Constructor<?> r0, java.lang.Object... r1) {
            java.lang.Object r0 = r0.newInstance(r1)     // Catch: java.lang.Exception -> L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    public static void a(java.lang.ClassLoader r7, java.lang.String r8, int r9) {
            java.lang.Class r0 = r7.getClass()
            java.lang.String r1 = "pathList"
            java.lang.reflect.Field r0 = com.bytedance.pangle.util.FieldUtils.getField(r0, r1)
            java.lang.Object r7 = r0.get(r7)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = com.bytedance.pangle.e.g.a(r8, r9)
            java.lang.String r2 = ":"
            java.lang.String[] r1 = r1.split(r2)
            java.lang.String r8 = com.bytedance.pangle.d.c.c(r8, r9)
            int r9 = r1.length
            r2 = 0
            r3 = r2
        L24:
            if (r3 >= r9) goto L59
            r4 = r1[r3]
            java.lang.Object r5 = com.bytedance.pangle.dex.DirectDex.native_load_direct_dex(r4)
            if (r5 != 0) goto L4a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r8)
            java.lang.String r6 = java.io.File.separator
            r5.append(r6)
            java.lang.String r6 = com.bytedance.pangle.e.b.a(r4)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            dalvik.system.DexFile r5 = dalvik.system.DexFile.loadDex(r4, r5, r2)
        L4a:
            java.io.File r6 = new java.io.File
            r6.<init>(r4)
            java.lang.Object r4 = a(r6, r5)
            r0.add(r4)
            int r3 = r3 + 1
            goto L24
        L59:
            java.lang.Object[] r8 = r0.toArray()
            java.lang.Class r9 = r7.getClass()
            java.lang.String r0 = "dexElements"
            java.lang.reflect.Field r9 = com.bytedance.pangle.util.FieldUtils.getField(r9, r0)
            java.lang.Object r0 = r9.get(r7)
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            java.lang.Class r1 = r0.getClass()
            java.lang.Class r1 = r1.getComponentType()
            int r3 = r0.length
            int r4 = r8.length
            int r3 = r3 + r4
            java.lang.Object r1 = java.lang.reflect.Array.newInstance(r1, r3)
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            int r3 = r0.length
            java.lang.System.arraycopy(r0, r2, r1, r2, r3)
            int r0 = r0.length
            int r3 = r8.length
            java.lang.System.arraycopy(r8, r2, r1, r0, r3)
            r9.set(r7, r1)
            return
    }
}
