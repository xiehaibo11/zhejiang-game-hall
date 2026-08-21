package com.kwad.library.solder.lib;

final class c implements com.kwad.library.solder.lib.a.c {
    private final java.io.File afw;
    private final java.io.File afx;
    private final com.kwad.library.solder.lib.ext.c afy;
    private final android.content.Context mContext;

    c(android.content.Context r2, com.kwad.library.solder.lib.ext.c r3) {
            r1 = this;
            r1.<init>()
            android.content.Context r2 = r2.getApplicationContext()
            r1.mContext = r2
            r1.afy = r3
            java.lang.String r3 = r3.wF()
            r0 = 0
            java.io.File r2 = r2.getDir(r3, r0)
            r1.afw = r2
            android.content.Context r2 = r1.mContext
            java.io.File r2 = r2.getCacheDir()
            r1.afx = r2
            return
    }

    private java.lang.String a(com.kwad.library.solder.lib.a.a r2) {
            r1 = this;
            java.lang.String r0 = r2.getId()
            java.lang.String r2 = r2.getVersion()
            java.lang.String r2 = r1.y(r0, r2)
            return r2
    }

    private static boolean a(java.lang.String r2, com.kwad.library.solder.lib.a.a r3) {
            boolean r0 = com.kwad.sdk.utils.q.fr(r2)
            r1 = 0
            if (r0 != 0) goto L1b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "Plugin not found, path = "
            r3.<init>(r0)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "Sodler.installer"
            com.kwad.library.solder.lib.a.w(r3, r2)
            return r1
        L1b:
            if (r3 == 0) goto L3b
            java.lang.String r0 = r3.wn()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3b
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            java.lang.String r0 = com.kwad.sdk.utils.ad.ab(r0)
            java.lang.String r3 = r3.wn()
            boolean r3 = android.text.TextUtils.equals(r0, r3)
            if (r3 != 0) goto L3b
            return r1
        L3b:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "Check plugin's signatures success, path = "
            r3.<init>(r0)
            r3.append(r2)
            r2 = 1
            return r2
    }

    private boolean a(java.lang.String r1, com.kwad.library.solder.lib.a.a r2, boolean r3) {
            r0 = this;
            boolean r2 = a(r1, r2)
            if (r2 == 0) goto L8
            r1 = 1
            return r1
        L8:
            delete(r1)
            r1 = 0
            return r1
    }

    private static void delete(java.lang.String r0) {
            com.kwad.sdk.utils.q.delete(r0)
            return
    }

    private boolean i(java.lang.String r2, java.lang.String r3, boolean r4) {
            r1 = this;
            java.lang.String r4 = r1.y(r2, r3)
            r0 = 0
            boolean r4 = a(r4, r0)
            if (r4 == 0) goto Ld
            r2 = 1
            return r2
        Ld:
            r1.t(r2, r3)
            r2 = 0
            return r2
    }

    private void t(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = r0.y(r1, r2)
            com.kwad.sdk.utils.q.delete(r1)
            return
    }

    private java.lang.String wa() {
            r1 = this;
            java.io.File r0 = r1.afw
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    private java.lang.String x(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.wa()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = java.io.File.separator
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            return r3
    }

    @Override
    public final java.lang.String b(com.kwad.library.solder.lib.a.a r8) {
            r7 = this;
            java.lang.String r0 = r7.a(r8)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lab
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Install path = "
            r1.<init>(r2)
            r1.append(r0)
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r2 = r1.exists()
            r3 = 1
            if (r2 == 0) goto L33
            com.kwad.library.solder.lib.ext.c r2 = r7.afy
            boolean r2 = r2.wL()
            if (r2 != 0) goto L33
            java.lang.String r2 = r1.getAbsolutePath()
            boolean r2 = r7.a(r2, r8, r3)
            if (r2 == 0) goto L33
            return r0
        L33:
            java.lang.String r2 = r8.wm()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "Install plugin, path = "
            r4.<init>(r5)
            r4.append(r2)
            java.io.File r4 = new java.io.File
            r4.<init>(r2)
            boolean r5 = r4.exists()
            java.lang.String r6 = "Sodler.installer"
            if (r5 == 0) goto L9c
            boolean r8 = r7.a(r2, r8, r3)
            if (r8 == 0) goto L8f
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r3 = "Install plugin, from = "
            r8.<init>(r3)
            r8.append(r2)
            java.lang.String r2 = ", to = "
            r8.append(r2)
            r8.append(r0)
            boolean r8 = r4.renameTo(r1)
            if (r8 == 0) goto L6d
            return r0
        L6d:
            r7.vZ()     // Catch: java.lang.Throwable -> L83
            com.kwad.sdk.utils.q.f(r4, r1)     // Catch: java.lang.Throwable -> L77
            com.kwad.sdk.utils.q.R(r4)     // Catch: java.lang.Throwable -> L77
            return r0
        L77:
            r8 = move-exception
            com.kwad.library.solder.lib.a.e(r6, r8)
            com.kwad.library.solder.lib.ext.PluginError$InstallError r0 = new com.kwad.library.solder.lib.ext.PluginError$InstallError
            r1 = 3004(0xbbc, float:4.21E-42)
            r0.<init>(r8, r1)
            throw r0
        L83:
            r8 = move-exception
            com.kwad.library.solder.lib.a.e(r6, r8)
            com.kwad.library.solder.lib.ext.PluginError$InstallError r0 = new com.kwad.library.solder.lib.ext.PluginError$InstallError
            r1 = 3005(0xbbd, float:4.211E-42)
            r0.<init>(r8, r1)
            throw r0
        L8f:
            java.lang.String r8 = "Check plugin's signatures fail."
            com.kwad.library.solder.lib.a.w(r6, r8)
            com.kwad.library.solder.lib.ext.PluginError$InstallError r0 = new com.kwad.library.solder.lib.ext.PluginError$InstallError
            r1 = 3003(0xbbb, float:4.208E-42)
            r0.<init>(r8, r1)
            throw r0
        L9c:
            java.lang.String r8 = "Plugin path not exist"
            com.kwad.library.solder.lib.a.w(r6, r8)
            com.kwad.library.solder.lib.ext.PluginError$InstallError r8 = new com.kwad.library.solder.lib.ext.PluginError$InstallError
            r0 = 3001(0xbb9, float:4.205E-42)
            java.lang.String r1 = "Plugin file not exist."
            r8.<init>(r1, r0)
            throw r8
        Lab:
            com.kwad.library.solder.lib.ext.PluginError$InstallError r8 = new com.kwad.library.solder.lib.ext.PluginError$InstallError
            r0 = 3006(0xbbe, float:4.212E-42)
            java.lang.String r1 = "Can not get install path."
            r8.<init>(r1, r0)
            throw r8
    }

    @Override
    public final java.lang.String bA(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.wa()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    @Override
    public final void bz(java.lang.String r2) {
            r1 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r2 = r1.bA(r2)
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L10
            return
        L10:
            com.kwad.sdk.utils.q.R(r0)
            return
    }

    @Override
    public final java.io.File d(java.lang.String r3, boolean r4) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r3 = com.kwad.library.solder.lib.d.b.getMD5(r3)
            if (r3 != 0) goto Lb
            return r0
        Lb:
            if (r4 == 0) goto L40
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            com.kwad.library.solder.lib.ext.c r3 = r2.afy
            java.lang.String r3 = r3.wJ()
            if (r3 == 0) goto L26
            com.kwad.library.solder.lib.ext.c r3 = r2.afy
            java.lang.String r3 = r3.wJ()
            r4.append(r3)
        L26:
            java.io.File r3 = new java.io.File
            java.io.File r1 = r2.afx
            java.lang.String r4 = r4.toString()
            r3.<init>(r1, r4)
            boolean r4 = r3.exists()
            if (r4 != 0) goto L3e
            boolean r4 = r3.createNewFile()
            if (r4 != 0) goto L3e
            goto L3f
        L3e:
            r0 = r3
        L3f:
            return r0
        L40:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            long r0 = java.lang.System.currentTimeMillis()
            r4.append(r0)
            java.lang.String r3 = r4.toString()
            com.kwad.library.solder.lib.ext.c r4 = r2.afy
            java.lang.String r4 = r4.wJ()
            java.io.File r0 = r2.afx
            java.io.File r3 = java.io.File.createTempFile(r3, r4, r0)
            return r3
    }

    @Override
    public final void u(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r2 = r1.x(r2, r3)
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L10
            return
        L10:
            com.kwad.sdk.utils.q.R(r0)
            return
    }

    @Override
    public final void vZ() {
            r4 = this;
            java.io.File r0 = r4.afw
            long r0 = r0.getFreeSpace()
            r2 = 10000000(0x989680, double:4.9406565E-317)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto Le
            return
        Le:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "No enough capacity."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final java.lang.String y(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.wa()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = java.io.File.separator
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = java.io.File.separator
            r0.append(r3)
            com.kwad.library.solder.lib.ext.c r3 = r2.afy
            java.lang.String r3 = r3.wK()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    @Override
    public final boolean z(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.kwad.library.solder.lib.ext.c r0 = r1.afy
            boolean r0 = r0.wL()
            if (r0 == 0) goto La
            r2 = 0
            return r2
        La:
            r0 = 1
            boolean r2 = r1.i(r2, r3, r0)
            return r2
    }
}
