package com.kwad.library.b;

public final class a extends com.kwad.library.solder.lib.h {
    private com.kwad.library.b.a.b aeX;
    private android.content.res.Resources aeY;

    public a(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private com.kwad.library.b.a.b a(java.io.File r8, java.io.File r9) {
            r7 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 >= r1) goto L26
            boolean r0 = r8.canRead()
            r1 = 1
            if (r0 != 0) goto L10
            r8.setReadable(r1)
        L10:
            boolean r0 = r8.canWrite()
            if (r0 != 0) goto L19
            r8.setWritable(r1)
        L19:
            boolean r0 = r8.canRead()
            if (r0 == 0) goto L25
            boolean r0 = r8.canWrite()
            if (r0 != 0) goto L26
        L25:
            r8 = 0
        L26:
            r3 = r8
            com.kwad.library.b.a.a r1 = new com.kwad.library.b.a.a
            java.lang.Class r8 = r7.getClass()
            java.lang.ClassLoader r8 = r8.getClassLoader()
            dalvik.system.BaseDexClassLoader r8 = (dalvik.system.BaseDexClassLoader) r8
            r1.<init>(r8)
            com.kwad.library.b.a.b r8 = new com.kwad.library.b.a.b
            java.lang.String r2 = r9.getAbsolutePath()
            java.io.File r9 = r7.afP
            java.lang.String r4 = r9.getAbsolutePath()
            com.kwad.library.solder.lib.c.b r9 = r7.afV
            java.util.List<java.lang.String> r5 = r9.agG
            com.kwad.library.solder.lib.c.b r9 = r7.afV
            java.util.List<java.lang.String> r6 = r9.agF
            r0 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r8
    }

    private java.io.File d(java.io.File r3) {
            r2 = this;
            java.io.File r0 = new java.io.File
            java.io.File r3 = r3.getParentFile()
            com.kwad.library.solder.lib.ext.c r1 = r2.afy
            java.lang.String r1 = r1.wG()
            r0.<init>(r3, r1)
            com.kwad.sdk.utils.q.X(r0)
            return r0
    }

    @Override
    public final void f(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            super.f(r3, r4)
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            java.io.File r1 = r2.d(r0)     // Catch: java.io.IOException -> L3f
            com.kwad.library.b.a.b r0 = r2.a(r1, r0)
            r2.aeX = r0
            android.content.res.Resources r0 = r3.getResources()     // Catch: java.lang.Exception -> L33
            android.content.res.Resources r3 = com.kwad.library.b.b.a.a(r3, r0, r4)     // Catch: java.lang.Exception -> L33
            r2.aeY = r3     // Catch: java.lang.Exception -> L33
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "Install plugin mClassLoader: "
            r3.<init>(r4)
            com.kwad.library.b.a.b r4 = r2.aeX
            r3.append(r4)
            java.lang.String r4 = ", mResources: "
            r3.append(r4)
            android.content.res.Resources r4 = r2.aeY
            r3.append(r4)
            return
        L33:
            r3 = move-exception
            android.util.Log.getStackTraceString(r3)
            com.kwad.library.solder.lib.ext.PluginError$LoadError r4 = new com.kwad.library.solder.lib.ext.PluginError$LoadError
            r0 = 4006(0xfa6, float:5.614E-42)
            r4.<init>(r3, r0)
            throw r4
        L3f:
            r3 = move-exception
            com.kwad.library.solder.lib.ext.PluginError$LoadError r4 = new com.kwad.library.solder.lib.ext.PluginError$LoadError
            r0 = 4002(0xfa2, float:5.608E-42)
            r4.<init>(r3, r0)
            throw r4
    }

    public final android.content.res.Resources getResources() {
            r1 = this;
            android.content.res.Resources r0 = r1.aeY
            return r0
    }

    public final com.kwad.library.b.a.b vV() {
            r1 = this;
            com.kwad.library.b.a.b r0 = r1.aeX
            return r0
    }
}
