package com.kwad.library.b.a;

public final class b extends dalvik.system.BaseDexClassLoader {
    private final java.util.List<java.lang.String> afb;
    private final java.util.List<java.lang.String> afc;
    private final java.lang.ClassLoader afd;

    public b(java.lang.ClassLoader r1, java.lang.String r2, java.io.File r3, java.lang.String r4, java.util.List<java.lang.String> r5, java.util.List<java.lang.String> r6) {
            r0 = this;
            r0.<init>(r2, r3, r4, r1)
            r0.afd = r1
            r0.afb = r5
            r0.afc = r6
        L9:
            java.lang.ClassLoader r2 = r1.getParent()
            if (r2 == 0) goto L14
            java.lang.ClassLoader r1 = r1.getParent()
            goto L9
        L14:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "mParent is "
            r2.<init>(r3)
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "PluginClassLoader"
            android.util.Log.i(r2, r1)
            return
    }

    @Override
    public final java.lang.String findLibrary(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = super.findLibrary(r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L28
            java.lang.ClassLoader r1 = r2.afd
            boolean r1 = r1 instanceof dalvik.system.BaseDexClassLoader
            if (r1 == 0) goto L28
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "load so "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r1 = " from parent"
            r0.append(r1)
            java.lang.ClassLoader r0 = r2.afd
            dalvik.system.BaseDexClassLoader r0 = (dalvik.system.BaseDexClassLoader) r0
            java.lang.String r3 = r0.findLibrary(r3)
            return r3
        L28:
            return r0
    }

    @Override
    protected final java.lang.Class<?> loadClass(java.lang.String r4, boolean r5) {
            r3 = this;
            java.util.List<java.lang.String> r0 = r3.afb
            if (r0 == 0) goto L27
            boolean r0 = r0.contains(r4)
            if (r0 == 0) goto L27
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "loadClass "
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r1 = " from host by interface"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PluginClassLoader"
            android.util.Log.i(r1, r0)
            java.lang.Class r4 = super.loadClass(r4, r5)
            return r4
        L27:
            java.util.List<java.lang.String> r0 = r3.afc
            if (r0 == 0) goto L57
            java.util.Iterator r0 = r0.iterator()
        L2f:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L57
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = "."
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            boolean r1 = r4.startsWith(r1)
            if (r1 == 0) goto L2f
            java.lang.Class r4 = super.loadClass(r4, r5)
            return r4
        L57:
            java.lang.Class r5 = r3.findLoadedClass(r4)
            if (r5 == 0) goto L5e
            return r5
        L5e:
            java.lang.Class r4 = r3.findClass(r4)     // Catch: java.lang.ClassNotFoundException -> L63
            return r4
        L63:
            r5 = move-exception
            java.lang.ClassLoader r0 = r3.getParent()     // Catch: java.lang.ClassNotFoundException -> L6d
            java.lang.Class r4 = r0.loadClass(r4)     // Catch: java.lang.ClassNotFoundException -> L6d
            return r4
        L6d:
            r4 = move-exception
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L77
            r4.addSuppressed(r5)
        L77:
            throw r4
    }
}
