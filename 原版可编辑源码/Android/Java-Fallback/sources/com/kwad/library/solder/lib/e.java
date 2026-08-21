package com.kwad.library.solder.lib;

final class e implements com.kwad.library.solder.lib.a.g {
    private com.kwad.library.solder.lib.a.g.a afA;
    private final android.content.Context mContext;

    e(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.mContext = r1
            return
    }

    private void a(int r3, com.kwad.library.solder.lib.a.f r4) {
            r2 = this;
            r0 = -3
            if (r3 != 0) goto L39
            com.kwad.library.solder.lib.c.b r3 = com.kwad.library.solder.lib.f.k(r4)
            if (r3 != 0) goto La
            goto L3c
        La:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Download new plugin, version = "
            r0.<init>(r1)
            java.lang.String r1 = r3.version
            r0.append(r1)
            java.lang.String r1 = ", url = "
            r0.append(r1)
            java.lang.String r1 = r3.agz
            r0.append(r1)
            r0 = 3
            r4.bI(r0)
            java.lang.String r0 = r3.agz
            r4.bK(r0)
            long r0 = r3.agA
            r4.P(r0)
            java.lang.String r0 = r3.agB
            r4.bJ(r0)
            java.lang.String r3 = r3.version
            r4.bD(r3)
            return
        L39:
            r1 = -1
            if (r3 != r1) goto L3f
        L3c:
            r4.bI(r0)
        L3f:
            return
    }

    private static void a(com.kwad.library.solder.lib.a.f r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onCanceled state = "
            r0.<init>(r1)
            int r1 = r2.getState()
            r0.append(r1)
            r0 = -7
            r2.bI(r0)
            com.kwad.library.solder.lib.a.e r0 = r2.wp()
            com.kwad.library.solder.lib.ext.a r0 = r0.wi()
            r0.o(r2)
            return
    }

    private void a(com.kwad.library.solder.lib.a.f r3, com.kwad.library.solder.lib.ext.PluginError.UpdateError r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onError state = "
            r0.<init>(r1)
            int r1 = r3.getState()
            r0.append(r1)
            r0 = -4
            r3.bI(r0)
            r3.j(r4)
            r3.wE()
            b(r3)
            return
    }

    private void a(com.kwad.library.solder.lib.a.f r7, java.io.File r8) {
            r6 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "start download:"
            r2.<init>(r3)
            java.lang.String r3 = r7.getId()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "Sodler.update"
            android.util.Log.v(r3, r2)
            com.kwad.library.solder.lib.a.g$a r2 = r6.afA
            if (r2 == 0) goto L47
            r2.a(r7, r8)     // Catch: java.lang.Throwable -> L45
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r0
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "finish download:"
            r8.<init>(r0)
            java.lang.String r7 = r7.getId()
            r8.append(r7)
            java.lang.String r7 = " cost:"
            r8.append(r7)
            r8.append(r4)
            java.lang.String r7 = r8.toString()
            android.util.Log.v(r3, r7)
            return
        L45:
            r7 = move-exception
            throw r7
        L47:
            com.kwad.library.solder.lib.ext.PluginError$UpdateError r7 = new com.kwad.library.solder.lib.ext.PluginError$UpdateError
            r8 = 2008(0x7d8, float:2.814E-42)
            java.lang.String r0 = "update "
            r7.<init>(r0, r8)
            throw r7
    }

    private static void b(com.kwad.library.solder.lib.a.f r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onPostUpdate state = "
            r0.<init>(r1)
            int r1 = r2.getState()
            r0.append(r1)
            com.kwad.library.solder.lib.a.e r0 = r2.wp()
            com.kwad.library.solder.lib.ext.a r0 = r0.wi()
            r0.q(r2)
            return
    }

    private static void c(com.kwad.library.solder.lib.a.f r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onPreUpdate state = "
            r0.<init>(r1)
            int r1 = r2.getState()
            r0.append(r1)
            com.kwad.library.solder.lib.a.e r0 = r2.wp()
            com.kwad.library.solder.lib.ext.a r0 = r0.wi()
            r0.p(r2)
            return
    }

    private com.kwad.library.solder.lib.a.f j(com.kwad.library.solder.lib.a.f r4) {
            r3 = this;
            boolean r0 = r4.wt()
            if (r0 == 0) goto L15
            com.kwad.library.solder.lib.a.e r0 = r4.wp()
            com.kwad.library.solder.lib.a.c r0 = r0.wg()
            java.lang.String r1 = r4.getId()
            r0.bz(r1)
        L15:
            boolean r0 = r4.wy()     // Catch: java.lang.Exception -> L54
            if (r0 == 0) goto L29
            com.kwad.library.solder.lib.c.b r0 = com.kwad.library.solder.lib.f.k(r4)     // Catch: java.lang.Exception -> L54
            r1 = 2
            r4.bI(r1)     // Catch: java.lang.Exception -> L54
            java.lang.String r0 = r0.version     // Catch: java.lang.Exception -> L54
            r4.bD(r0)     // Catch: java.lang.Exception -> L54
            return r4
        L29:
            boolean r0 = r4.wy()     // Catch: java.lang.Exception -> L54
            if (r0 != 0) goto L40
            com.kwad.library.solder.lib.c.b r0 = r4.wC()     // Catch: java.lang.Exception -> L54
            if (r0 != 0) goto L40
            com.kwad.library.solder.lib.a.e r0 = r4.wp()     // Catch: java.lang.Exception -> L54
            com.kwad.library.solder.lib.a.b r0 = r0.wh()     // Catch: java.lang.Exception -> L54
            r0.e(r4)     // Catch: java.lang.Exception -> L54
        L40:
            java.lang.String r0 = r4.getId()     // Catch: java.lang.Exception -> L54
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L54
            if (r0 == 0) goto L4f
            r0 = -1
            r3.a(r0, r4)     // Catch: java.lang.Exception -> L54
            return r4
        L4f:
            r0 = 0
            r3.a(r0, r4)     // Catch: java.lang.Exception -> L54
            goto L7d
        L54:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Request remote plugin info fail, error = "
            r1.<init>(r2)
            java.lang.String r2 = r0.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "Sodler.update"
            com.kwad.library.solder.lib.a.w(r2, r1)
            com.kwad.library.solder.lib.a.e(r2, r0)
            r1 = -2
            r4.bI(r1)
            com.kwad.library.solder.lib.ext.PluginError$UpdateError r1 = new com.kwad.library.solder.lib.ext.PluginError$UpdateError
            r2 = 2006(0x7d6, float:2.811E-42)
            r1.<init>(r0, r2)
            r4.j(r1)
        L7d:
            return r4
    }

    @Override
    public final com.kwad.library.solder.lib.a.g a(com.kwad.library.solder.lib.a.g.a r1) {
            r0 = this;
            r0.afA = r1
            return r0
    }

    @Override
    public final com.kwad.library.solder.lib.a.f i(com.kwad.library.solder.lib.a.f r8) {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Start update, id = "
            r0.<init>(r1)
            java.lang.String r1 = r8.getId()
            r0.append(r1)
            java.lang.String r0 = "Update"
            r8.bG(r0)
            c(r8)
            r7.j(r8)
            boolean r0 = r8.isCanceled()
            if (r0 == 0) goto L23
            a(r8)
            return r8
        L23:
            int r0 = r8.getState()
            r1 = 2
            r2 = 2003(0x7d3, float:2.807E-42)
            java.lang.String r3 = "Can not get temp file, error = "
            r4 = 2005(0x7d5, float:2.81E-42)
            r5 = 1
            java.lang.String r6 = "Sodler.update"
            if (r0 != r1) goto La5
            com.kwad.library.solder.lib.a.e r0 = r8.wp()     // Catch: java.lang.Throwable -> L98
            com.kwad.library.solder.lib.a.c r0 = r0.wg()     // Catch: java.lang.Throwable -> L98
            r0.vZ()     // Catch: java.lang.Throwable -> L98
            com.kwad.library.solder.lib.a.e r0 = r8.wp()     // Catch: java.lang.Throwable -> L7f
            com.kwad.library.solder.lib.a.c r0 = r0.wg()     // Catch: java.lang.Throwable -> L7f
            java.lang.String r1 = r8.wz()     // Catch: java.lang.Throwable -> L7f
            r4 = 0
            java.io.File r0 = r0.d(r1, r4)     // Catch: java.lang.Throwable -> L7f
            boolean r1 = r8.isCanceled()
            if (r1 == 0) goto L59
            a(r8)
            return r8
        L59:
            android.content.Context r1 = r7.mContext     // Catch: java.lang.Throwable -> L70
            java.lang.String r2 = r8.wz()     // Catch: java.lang.Throwable -> L70
            com.kwad.sdk.utils.q.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L70
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: java.lang.Throwable -> L70
            r8.bH(r0)     // Catch: java.lang.Throwable -> L70
            r8.bI(r5)     // Catch: java.lang.Throwable -> L70
            b(r8)     // Catch: java.lang.Throwable -> L70
            return r8
        L70:
            r0 = move-exception
            com.kwad.library.solder.lib.a.e(r6, r0)
            com.kwad.library.solder.lib.ext.PluginError$UpdateError r1 = new com.kwad.library.solder.lib.ext.PluginError$UpdateError
            r2 = 2004(0x7d4, float:2.808E-42)
            r1.<init>(r0, r2)
            r7.a(r8, r1)
            return r8
        L7f:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r3)
            java.lang.String r3 = r0.getLocalizedMessage()
            r1.append(r3)
            com.kwad.library.solder.lib.a.e(r6, r0)
            com.kwad.library.solder.lib.ext.PluginError$UpdateError r1 = new com.kwad.library.solder.lib.ext.PluginError$UpdateError
            r1.<init>(r0, r2)
            r7.a(r8, r1)
            return r8
        L98:
            r0 = move-exception
            com.kwad.library.solder.lib.a.e(r6, r0)
            com.kwad.library.solder.lib.ext.PluginError$UpdateError r1 = new com.kwad.library.solder.lib.ext.PluginError$UpdateError
            r1.<init>(r0, r4)
            r7.a(r8, r1)
            return r8
        La5:
            int r0 = r8.getState()
            r1 = 3
            if (r0 != r1) goto L14f
            com.kwad.library.solder.lib.a.e r0 = r8.wp()     // Catch: java.lang.Throwable -> L142
            com.kwad.library.solder.lib.a.c r0 = r0.wg()     // Catch: java.lang.Throwable -> L142
            r0.vZ()     // Catch: java.lang.Throwable -> L142
            com.kwad.library.solder.lib.a.e r0 = r8.wp()     // Catch: java.lang.Throwable -> L129
            com.kwad.library.solder.lib.a.c r0 = r0.wg()     // Catch: java.lang.Throwable -> L129
            java.lang.String r1 = r8.getDownloadUrl()     // Catch: java.lang.Throwable -> L129
            com.kwad.library.solder.lib.a.e r4 = r8.wp()     // Catch: java.lang.Throwable -> L129
            com.kwad.library.solder.lib.ext.c r4 = r4.wd()     // Catch: java.lang.Throwable -> L129
            boolean r4 = r4.wM()     // Catch: java.lang.Throwable -> L129
            java.io.File r0 = r0.d(r1, r4)     // Catch: java.lang.Throwable -> L129
            java.lang.String r1 = r8.wA()
            if (r1 == 0) goto Lfb
            boolean r1 = r0.exists()
            if (r1 == 0) goto Lfb
            java.lang.String r1 = com.kwad.sdk.utils.ad.ab(r0)
            java.lang.String r2 = r8.wA()
            boolean r1 = android.text.TextUtils.equals(r1, r2)
            if (r1 == 0) goto Lfb
            java.lang.String r0 = r0.getAbsolutePath()
            r8.bH(r0)
            r8.bI(r5)
            b(r8)
            return r8
        Lfb:
            r7.a(r8, r0)     // Catch: com.kwad.library.solder.lib.ext.PluginError.CancelError -> L10c com.kwad.library.solder.lib.ext.PluginError.UpdateError -> L110
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: com.kwad.library.solder.lib.ext.PluginError.CancelError -> L10c com.kwad.library.solder.lib.ext.PluginError.UpdateError -> L110
            r8.bH(r0)     // Catch: com.kwad.library.solder.lib.ext.PluginError.CancelError -> L10c com.kwad.library.solder.lib.ext.PluginError.UpdateError -> L110
            r8.bI(r5)     // Catch: com.kwad.library.solder.lib.ext.PluginError.CancelError -> L10c com.kwad.library.solder.lib.ext.PluginError.UpdateError -> L110
            b(r8)     // Catch: com.kwad.library.solder.lib.ext.PluginError.CancelError -> L10c com.kwad.library.solder.lib.ext.PluginError.UpdateError -> L110
            return r8
        L10c:
            a(r8)
            return r8
        L110:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Download plugin fail, error = "
            r1.<init>(r2)
            java.lang.String r2 = r0.getLocalizedMessage()
            r1.append(r2)
            com.kwad.library.solder.lib.a.e(r6, r0)
            r8.j(r0)
            r7.a(r8, r0)
            return r8
        L129:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r3)
            java.lang.String r3 = r0.getLocalizedMessage()
            r1.append(r3)
            com.kwad.library.solder.lib.a.e(r6, r0)
            com.kwad.library.solder.lib.ext.PluginError$UpdateError r1 = new com.kwad.library.solder.lib.ext.PluginError$UpdateError
            r1.<init>(r0, r2)
            r7.a(r8, r1)
            return r8
        L142:
            r0 = move-exception
            com.kwad.library.solder.lib.a.e(r6, r0)
            com.kwad.library.solder.lib.ext.PluginError$UpdateError r1 = new com.kwad.library.solder.lib.ext.PluginError$UpdateError
            r1.<init>(r0, r4)
            r7.a(r8, r1)
            return r8
        L14f:
            b(r8)
            return r8
    }
}
