package com.bytedance.pangle;

public class PluginClassLoader extends dalvik.system.BaseDexClassLoader {
    private static final java.lang.String TAG = "PluginClassLoader";
    private java.util.HashSet<java.lang.String> allPluginClasses;
    private final java.lang.ClassLoader hostClassLoader;
    private final java.util.List<java.lang.ClassLoader> otherPluginClassLoader;

    public PluginClassLoader(java.lang.String r2, java.io.File r3, java.lang.String r4, java.util.List<java.lang.ClassLoader> r5) {
            r1 = this;
            java.lang.ClassLoader r0 = getSystemClassLoader()
            java.lang.ClassLoader r0 = r0.getParent()
            r1.<init>(r2, r3, r4, r0)
            java.lang.Class<com.bytedance.pangle.PluginClassLoader> r2 = com.bytedance.pangle.PluginClassLoader.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            r1.hostClassLoader = r2
            r1.otherPluginClassLoader = r5
            return
    }

    private java.lang.ClassNotFoundException handleException(java.lang.StringBuilder r3, java.lang.ClassNotFoundException r4, java.lang.ClassNotFoundException r5) {
            r2 = this;
            if (r4 != 0) goto L4
            r4 = r5
            goto L23
        L4:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Le
            r4.addSuppressed(r5)
            goto L23
        Le:
            java.lang.Throwable r4 = r5.getCause()
            r3.append(r4)
            java.lang.String r4 = "\n"
            r3.append(r4)
            java.lang.ClassNotFoundException r4 = new java.lang.ClassNotFoundException
            java.lang.String r3 = r3.toString()
            r4.<init>(r3, r5)
        L23:
            return r4
    }

    @Override
    protected java.lang.Class<?> findClass(java.lang.String r7) {
            r6 = this;
            java.util.HashSet<java.lang.String> r0 = r6.allPluginClasses
            r1 = 0
            if (r0 == 0) goto Le
            boolean r0 = r0.contains(r7)
            if (r0 == 0) goto Lc
            goto Le
        Lc:
            r0 = r1
            goto L17
        Le:
            java.lang.Class r0 = super.findClass(r7)     // Catch: java.lang.ClassNotFoundException -> L16
            r5 = r1
            r1 = r0
            r0 = r5
            goto L17
        L16:
            r0 = move-exception
        L17:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "loadClass from :\n"
            r2.<init>(r3)
            if (r1 != 0) goto L3f
            java.util.List<java.lang.ClassLoader> r3 = r6.otherPluginClassLoader
            if (r3 == 0) goto L3f
            java.util.Iterator r3 = r3.iterator()
        L28:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L3f
            java.lang.Object r4 = r3.next()
            java.lang.ClassLoader r4 = (java.lang.ClassLoader) r4
            java.lang.Class r1 = r4.loadClass(r7)     // Catch: java.lang.ClassNotFoundException -> L39
            goto L28
        L39:
            r4 = move-exception
            java.lang.ClassNotFoundException r0 = r6.handleException(r2, r0, r4)
            goto L28
        L3f:
            if (r1 != 0) goto L4d
            java.lang.ClassLoader r3 = r6.hostClassLoader     // Catch: java.lang.ClassNotFoundException -> L48
            java.lang.Class r1 = r3.loadClass(r7)     // Catch: java.lang.ClassNotFoundException -> L48
            goto L4d
        L48:
            r3 = move-exception
            java.lang.ClassNotFoundException r0 = r6.handleException(r2, r0, r3)
        L4d:
            if (r1 != 0) goto L68
            if (r0 != 0) goto L67
            java.lang.ClassNotFoundException r0 = new java.lang.ClassNotFoundException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r7)
            java.lang.String r7 = " class not found in PluginClassLoader"
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
        L67:
            throw r0
        L68:
            return r1
    }

    public void setAllPluginClasses(java.util.HashSet<java.lang.String> r1) {
            r0 = this;
            r0.allPluginClasses = r1
            return
    }
}
