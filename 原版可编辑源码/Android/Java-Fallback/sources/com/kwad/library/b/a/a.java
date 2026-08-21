package com.kwad.library.b.a;

public final class a extends dalvik.system.PathClassLoader {
    private static final java.util.List<java.lang.ClassLoader> afa = null;
    private final dalvik.system.BaseDexClassLoader aeZ;

    static {
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.kwad.library.b.a.a.afa = r0
            return
    }

    public a(dalvik.system.BaseDexClassLoader r2) {
            r1 = this;
            java.lang.String r0 = ""
            r1.<init>(r0, r2)
            r1.aeZ = r2
            return
    }

    @Override
    protected final java.lang.Class<?> findClass(java.lang.String r5) {
            r4 = this;
            r0 = 0
            dalvik.system.BaseDexClassLoader r1 = r4.aeZ     // Catch: java.lang.Throwable -> L14
            java.lang.Class r1 = r1.loadClass(r5)     // Catch: java.lang.Throwable -> L14
            java.lang.Class<android.app.Activity> r2 = android.app.Activity.class
            boolean r2 = r2.isAssignableFrom(r1)     // Catch: java.lang.Throwable -> L14
            if (r2 == 0) goto L10
            return r1
        L10:
            r3 = r1
            r1 = r0
            r0 = r3
            goto L15
        L14:
            r1 = move-exception
        L15:
            if (r0 != 0) goto L3d
            java.util.List<java.lang.ClassLoader> r0 = com.kwad.library.b.a.a.afa
            java.util.Iterator r0 = r0.iterator()
        L1d:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L30
            java.lang.Object r2 = r0.next()
            java.lang.ClassLoader r2 = (java.lang.ClassLoader) r2
            java.lang.Class r2 = r2.loadClass(r5)     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L1d
            return r2
        L30:
            boolean r0 = r1 instanceof java.lang.ClassNotFoundException
            if (r0 == 0) goto L37
            java.lang.ClassNotFoundException r1 = (java.lang.ClassNotFoundException) r1
            throw r1
        L37:
            java.lang.ClassNotFoundException r0 = new java.lang.ClassNotFoundException
            r0.<init>(r5, r1)
            throw r0
        L3d:
            return r0
    }

    @Override
    public final java.lang.String findLibrary(java.lang.String r2) {
            r1 = this;
            dalvik.system.BaseDexClassLoader r0 = r1.aeZ
            java.lang.String r2 = r0.findLibrary(r2)
            return r2
    }

    @Override
    public final java.net.URL getResource(java.lang.String r2) {
            r1 = this;
            dalvik.system.BaseDexClassLoader r0 = r1.aeZ
            java.net.URL r2 = r0.getResource(r2)
            return r2
    }

    @Override
    public final java.io.InputStream getResourceAsStream(java.lang.String r2) {
            r1 = this;
            dalvik.system.BaseDexClassLoader r0 = r1.aeZ
            java.io.InputStream r2 = r0.getResourceAsStream(r2)
            return r2
    }

    @Override
    public final java.util.Enumeration<java.net.URL> getResources(java.lang.String r2) {
            r1 = this;
            dalvik.system.BaseDexClassLoader r0 = r1.aeZ
            java.util.Enumeration r2 = r0.getResources(r2)
            return r2
    }

    @Override
    public final java.lang.Class<?> loadClass(java.lang.String r1) {
            r0 = this;
            java.lang.Class r1 = r0.findClass(r1)
            return r1
    }

    @Override
    public final java.lang.String toString() {
            r1 = this;
            dalvik.system.BaseDexClassLoader r0 = r1.aeZ
            java.lang.String r0 = r0.toString()
            return r0
    }
}
