package com.kwad.library.solder.lib;

public class h extends com.kwad.library.solder.lib.g {
    public h(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private java.util.Set<java.io.File> a(android.content.Context r6, java.io.File r7, java.io.File r8) {
            r5 = this;
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r0 = "Install plugin so libs, destDir = "
            r6.<init>(r0)
            r6.append(r8)
            java.util.HashSet r6 = new java.util.HashSet
            r6.<init>()
            boolean r0 = r8.exists()
            if (r0 == 0) goto L48
            java.lang.String[] r0 = r8.list()
            if (r0 == 0) goto L48
            int r1 = r0.length
            if (r1 <= 0) goto L48
            r7 = 0
        L1f:
            int r1 = r0.length
            if (r7 >= r1) goto L47
            r1 = r0[r7]
            java.io.File r2 = new java.io.File
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r8.getAbsolutePath()
            r3.append(r4)
            java.lang.String r4 = java.io.File.separator
            r3.append(r4)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.<init>(r1)
            r6.add(r2)
            int r7 = r7 + 1
            goto L1f
        L47:
            return r6
        L48:
            java.io.File r0 = new java.io.File
            java.io.File r1 = r8.getParentFile()
            com.kwad.library.solder.lib.ext.c r2 = r5.afy
            java.lang.String r2 = r2.wI()
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.q.X(r0)
            java.util.Set r7 = com.kwad.library.solder.lib.d.c.b(r7, r0)
            java.util.Iterator r7 = r7.iterator()
        L62:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto L82
            java.lang.Object r1 = r7.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "extractSoLib, soName = "
            r2.<init>(r3)
            r2.append(r1)
            java.io.File r1 = com.kwad.library.solder.lib.d.c.a(r0, r1, r8)
            if (r1 == 0) goto L62
            r6.add(r1)
            goto L62
        L82:
            com.kwad.sdk.utils.q.R(r0)
            return r6
    }

    private void c(java.util.Set<java.io.File> r7) {
            r6 = this;
            com.kwad.library.solder.lib.c.b r0 = r6.afV
            if (r0 == 0) goto L6b
            com.kwad.library.solder.lib.c.b r0 = r6.afV
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r0.agE
            int r0 = r0.size()
            if (r0 <= 0) goto L6b
            if (r7 == 0) goto L6b
            com.kwad.library.solder.lib.c.b r0 = r6.afV
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r0.agE
            java.util.Iterator r1 = r7.iterator()
        L18:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L6b
            java.lang.Object r2 = r1.next()
            java.io.File r2 = (java.io.File) r2
            java.lang.String r3 = com.kwad.sdk.utils.ad.ab(r2)
            java.lang.String r4 = r2.getName()
            java.lang.Object r4 = r0.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            if (r4 == 0) goto L18
            boolean r5 = android.text.TextUtils.equals(r3, r4)
            if (r5 == 0) goto L3b
            goto L18
        L3b:
            d(r7)
            com.kwad.library.solder.lib.ext.PluginError$LoadError r7 = new com.kwad.library.solder.lib.ext.PluginError$LoadError
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = " Md5 check error,find "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = ",except "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            r1 = 4008(0xfa8, float:5.616E-42)
            r7.<init>(r0, r1)
            throw r7
        L6b:
            return
    }

    private static void d(java.util.Set<java.io.File> r1) {
            java.util.Iterator r1 = r1.iterator()
        L4:
            boolean r0 = r1.hasNext()
            if (r0 == 0) goto L14
            java.lang.Object r0 = r1.next()
            java.io.File r0 = (java.io.File) r0
            com.kwad.sdk.utils.q.R(r0)
            goto L4
        L14:
            return
    }

    private java.io.File f(java.io.File r3) {
            r2 = this;
            java.io.File r0 = new java.io.File
            java.io.File r3 = r3.getParentFile()
            com.kwad.library.solder.lib.ext.c r1 = r2.afy
            java.lang.String r1 = r1.wH()
            r0.<init>(r3, r1)
            com.kwad.sdk.utils.q.X(r0)
            return r0
    }

    @Override
    public void f(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            super.f(r3, r4)
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            java.io.File r4 = r2.f(r0)     // Catch: java.io.IOException -> L52
            r2.afP = r4     // Catch: java.io.IOException -> L52
            r4 = 4004(0xfa4, float:5.611E-42)
            java.io.File r1 = r2.afP     // Catch: java.io.IOException -> L4b
            java.util.Set r3 = r2.a(r3, r0, r1)     // Catch: java.io.IOException -> L4b
            r2.c(r3)     // Catch: com.kwad.library.solder.lib.ext.PluginError.LoadError -> L46
            com.kwad.library.solder.lib.c.b r3 = r2.afV
            if (r3 == 0) goto L28
            com.kwad.library.solder.lib.c.b r3 = r2.afV
            java.lang.ClassLoader r3 = r3.agH
            if (r3 == 0) goto L28
            com.kwad.library.solder.lib.c.b r3 = r2.afV
            java.lang.ClassLoader r3 = r3.agH
            goto L30
        L28:
            java.lang.Class r3 = r2.getClass()
            java.lang.ClassLoader r3 = r3.getClassLoader()
        L30:
            java.lang.Runtime r1 = java.lang.Runtime.getRuntime()
            monitor-enter(r1)
            java.io.File r0 = r2.afP     // Catch: java.lang.Throwable -> L3c
            com.kwad.library.solder.lib.ext.d.c(r3, r0)     // Catch: java.lang.Throwable -> L3c
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L43
            return
        L3c:
            r3 = move-exception
            com.kwad.library.solder.lib.ext.PluginError$LoadError r0 = new com.kwad.library.solder.lib.ext.PluginError$LoadError     // Catch: java.lang.Throwable -> L43
            r0.<init>(r3, r4)     // Catch: java.lang.Throwable -> L43
            throw r0     // Catch: java.lang.Throwable -> L43
        L43:
            r3 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L43
            throw r3
        L46:
            r3 = move-exception
            com.kwad.sdk.utils.q.R(r0)
            throw r3
        L4b:
            r3 = move-exception
            com.kwad.library.solder.lib.ext.PluginError$LoadError r0 = new com.kwad.library.solder.lib.ext.PluginError$LoadError
            r0.<init>(r3, r4)
            throw r0
        L52:
            r3 = move-exception
            com.kwad.library.solder.lib.ext.PluginError$LoadError r4 = new com.kwad.library.solder.lib.ext.PluginError$LoadError
            r0 = 4003(0xfa3, float:5.61E-42)
            r4.<init>(r3, r0)
            throw r4
    }
}
