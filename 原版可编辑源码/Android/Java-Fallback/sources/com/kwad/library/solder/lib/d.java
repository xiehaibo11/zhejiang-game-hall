package com.kwad.library.solder.lib;

final class d implements com.kwad.library.solder.lib.a.d {
    private final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.kwad.library.solder.lib.a.a> afz;
    private final android.content.Context mContext;

    d(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.afz = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.mContext = r2
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

    private com.kwad.library.solder.lib.a.a b(com.kwad.library.solder.lib.a.f r6, com.kwad.library.solder.lib.a.a r7) {
            r5 = this;
            java.lang.String r0 = r7.wm()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Loading plugin, path = "
            r2.<init>(r3)
            r2.append(r0)
            com.kwad.library.solder.lib.a.e r2 = r6.wp()
            boolean r1 = r1.exists()
            if (r1 == 0) goto L8f
            java.lang.String r1 = r6.getId()
            java.lang.String r6 = r6.getVersion()
            com.kwad.library.solder.lib.a.a r3 = r5.bB(r1)
            if (r3 == 0) goto L36
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r0 = "The current plugin has been loaded, id = "
            r7.<init>(r0)
            r7.append(r6)
            return r3
        L36:
            r7.bE(r1)
            r7.bD(r6)
            com.kwad.library.solder.lib.a.c r3 = r2.wg()
            boolean r3 = r3.z(r1, r6)
            if (r3 == 0) goto L60
            com.kwad.library.solder.lib.a.c r3 = r2.wg()
            java.lang.String r6 = r3.y(r1, r6)
            boolean r3 = com.kwad.sdk.utils.q.fq(r6)
            if (r3 == 0) goto L60
            r7.bF(r6)
            android.content.Context r0 = r5.mContext
            r7.i(r0, r6)
            r5.b(r1, r7)
            return r7
        L60:
            com.kwad.library.solder.lib.a.c r6 = r2.wg()
            java.lang.String r6 = r6.b(r7)
            r7.bF(r6)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "installed ."
            r3.<init>(r4)
            r3.append(r6)
            android.content.Context r3 = r5.mContext
            r7.i(r3, r6)
            r5.b(r1, r7)
            com.kwad.library.solder.lib.ext.c r6 = r2.wd()
            java.lang.String r6 = r6.wJ()
            boolean r6 = r0.endsWith(r6)
            if (r6 == 0) goto L8e
            com.kwad.sdk.utils.q.delete(r0)
        L8e:
            return r7
        L8f:
            com.kwad.library.solder.lib.ext.PluginError$LoadError r6 = new com.kwad.library.solder.lib.ext.PluginError$LoadError
            r7 = 3001(0xbb9, float:4.205E-42)
            java.lang.String r0 = "Apk file not exist."
            r6.<init>(r0, r7)
            throw r6
    }

    private void b(com.kwad.library.solder.lib.a.f r3, com.kwad.library.solder.lib.ext.PluginError r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onError state = "
            r0.<init>(r1)
            int r1 = r3.getState()
            r0.append(r1)
            r0 = -5
            r3.bI(r0)
            r3.j(r4)
            h(r3)
            return
    }

    private synchronized void b(java.lang.String r2, com.kwad.library.solder.lib.a.a r3) {
            r1 = this;
            monitor-enter(r1)
            if (r3 == 0) goto L12
            boolean r0 = r3.isLoaded()     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto L12
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.kwad.library.solder.lib.a.a> r0 = r1.afz     // Catch: java.lang.Throwable -> Lf
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> Lf
            goto L12
        Lf:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L12:
            monitor-exit(r1)
            return
    }

    private static void g(com.kwad.library.solder.lib.a.f r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onPreLoad state = "
            r0.<init>(r1)
            int r1 = r2.getState()
            r0.append(r1)
            com.kwad.library.solder.lib.a.e r2 = r2.wp()
            r2.wi()
            return
    }

    private static void h(com.kwad.library.solder.lib.a.f r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onPostLoad state = "
            r0.<init>(r1)
            int r1 = r4.getState()
            r0.append(r1)
            int r0 = r4.getState()
            if (r0 != 0) goto L2a
            com.kwad.library.solder.lib.a.a r0 = r4.ww()
            if (r0 == 0) goto L26
            com.kwad.library.solder.lib.a.e r1 = r4.wp()
            com.kwad.library.solder.lib.ext.a r1 = r1.wi()
            r1.c(r4, r0)
            return
        L26:
            r0 = -1
            r4.bI(r0)
        L2a:
            java.lang.Throwable r0 = r4.wr()
            r1 = 4011(0xfab, float:5.62E-42)
            if (r0 == 0) goto L4b
            java.lang.Throwable r0 = r4.wr()
            boolean r0 = r0 instanceof com.kwad.library.solder.lib.ext.PluginError
            if (r0 == 0) goto L41
            java.lang.Throwable r0 = r4.wr()
            com.kwad.library.solder.lib.ext.PluginError r0 = (com.kwad.library.solder.lib.ext.PluginError) r0
            goto L62
        L41:
            com.kwad.library.solder.lib.ext.PluginError$LoadError r0 = new com.kwad.library.solder.lib.ext.PluginError$LoadError
            java.lang.Throwable r2 = r4.wr()
            r0.<init>(r2, r1)
            goto L62
        L4b:
            com.kwad.library.solder.lib.ext.PluginError$LoadError r0 = new com.kwad.library.solder.lib.ext.PluginError$LoadError
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Can not get plugin instance "
            r2.<init>(r3)
            int r3 = r4.getState()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r2, r1)
        L62:
            com.kwad.library.solder.lib.a.e r1 = r4.wp()
            com.kwad.library.solder.lib.ext.a r1 = r1.wi()
            r1.c(r4, r0)
            return
    }

    @Override
    public final synchronized com.kwad.library.solder.lib.a.a bB(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.kwad.library.solder.lib.a.a> r0 = r1.afz     // Catch: java.lang.Throwable -> L16
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L16
            com.kwad.library.solder.lib.a.a r2 = (com.kwad.library.solder.lib.a.a) r2     // Catch: java.lang.Throwable -> L16
            if (r2 == 0) goto L14
            boolean r0 = r2.isLoaded()     // Catch: java.lang.Throwable -> L16
            if (r0 != 0) goto L14
            r2 = 0
            monitor-exit(r1)
            return r2
        L14:
            monitor-exit(r1)
            return r2
        L16:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final com.kwad.library.solder.lib.a.f f(com.kwad.library.solder.lib.a.f r10) {
            r9 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Loading plugin, id = "
            r0.<init>(r1)
            java.lang.String r1 = r10.getId()
            r0.append(r1)
            java.lang.String r0 = "Load"
            r10.bG(r0)
            g(r10)
            boolean r0 = r10.isCanceled()
            if (r0 == 0) goto L20
            a(r10)
            return r10
        L20:
            r10.wD()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.kwad.library.solder.lib.a.a> r0 = r9.afz
            java.lang.String r1 = r10.getId()
            java.lang.Object r0 = r0.get(r1)
            com.kwad.library.solder.lib.a.a r0 = (com.kwad.library.solder.lib.a.a) r0
            r1 = 0
            java.lang.String r2 = "Load plugin success, path = "
            if (r0 == 0) goto L50
            boolean r3 = r0.isLoaded()
            if (r3 == 0) goto L50
            r10.c(r0)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>(r2)
            java.lang.String r0 = r0.wm()
            r3.append(r0)
            r10.bI(r1)
            h(r10)
            return r10
        L50:
            java.util.List r0 = r10.wB()
            com.kwad.library.solder.lib.c.b r3 = com.kwad.library.solder.lib.f.k(r10)
            r4 = -1
            if (r3 != 0) goto L62
            r10.bI(r4)
            h(r10)
            return r10
        L62:
            r5 = 0
            if (r0 == 0) goto L99
            boolean r6 = r0.isEmpty()
            if (r6 != 0) goto L99
            java.util.Iterator r0 = r0.iterator()
        L6f:
            boolean r6 = r0.hasNext()
            if (r6 == 0) goto L99
            java.lang.Object r6 = r0.next()
            com.kwad.library.solder.lib.c.a r6 = (com.kwad.library.solder.lib.c.a) r6
            java.lang.String r7 = r3.version
            java.lang.String r8 = r6.version
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L87
            r5 = r6
            goto L6f
        L87:
            com.kwad.library.solder.lib.a.e r7 = r10.wp()
            com.kwad.library.solder.lib.a.c r7 = r7.wg()
            java.lang.String r8 = r10.getId()
            java.lang.String r6 = r6.version
            r7.u(r8, r6)
            goto L6f
        L99:
            r0 = 1
            if (r5 != 0) goto Lcb
            android.content.Context r5 = r9.mContext
            boolean r5 = com.kwad.sdk.utils.ag.isWifiConnected(r5)
            if (r5 != 0) goto Lbf
            boolean r5 = r3.agC
            if (r5 != 0) goto Lb2
            boolean r5 = r3.agD
            if (r5 == 0) goto Lbf
            int r5 = r10.wu()
            if (r5 <= 0) goto Lbf
        Lb2:
            com.kwad.library.solder.lib.ext.PluginError$NotWifiDownloadError r0 = new com.kwad.library.solder.lib.ext.PluginError$NotWifiDownloadError
            r1 = 2007(0x7d7, float:2.812E-42)
            java.lang.String r2 = "It can be downloaded only on WiFi"
            r0.<init>(r2, r1)
            r9.b(r10, r0)
            return r10
        Lbf:
            com.kwad.library.solder.lib.a.e r5 = r10.wp()
            com.kwad.library.solder.lib.a.g r5 = r5.wf()
            r5.i(r10)
            goto Lf3
        Lcb:
            com.kwad.library.solder.lib.a.e r6 = r10.wp()
            com.kwad.library.solder.lib.a.c r6 = r6.wg()
            java.lang.String r7 = r5.agy
            java.lang.String r8 = r5.version
            java.lang.String r6 = r6.y(r7, r8)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r8 = "-------本地已存在--------"
            r7.<init>(r8)
            r7.append(r6)
            r10.bH(r6)
            r10.bI(r6)
            r10.bI(r0)
            java.lang.String r5 = r5.version
            r10.bD(r5)
        Lf3:
            int r5 = r10.getState()
            if (r5 != r0) goto L164
            java.lang.String r0 = r10.wv()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "-------更新成功或者获取到本地成功------------"
            r5.<init>(r6)
            r5.append(r0)
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 != 0) goto L15d
            com.kwad.library.solder.lib.a.a r4 = r10.bL(r0)
            com.kwad.library.solder.lib.a.a r3 = r4.a(r3)
            boolean r4 = r10.isCanceled()
            if (r4 == 0) goto L11f
            a(r10)
            return r10
        L11f:
            com.kwad.library.solder.lib.a.a r3 = r9.b(r10, r3)     // Catch: java.lang.Throwable -> L135 com.kwad.library.solder.lib.ext.PluginError.InstallError -> L156 com.kwad.library.solder.lib.ext.PluginError.LoadError -> L158
            r10.c(r3)     // Catch: java.lang.Throwable -> L135 com.kwad.library.solder.lib.ext.PluginError.InstallError -> L156 com.kwad.library.solder.lib.ext.PluginError.LoadError -> L158
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L135 com.kwad.library.solder.lib.ext.PluginError.InstallError -> L156 com.kwad.library.solder.lib.ext.PluginError.LoadError -> L158
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L135 com.kwad.library.solder.lib.ext.PluginError.InstallError -> L156 com.kwad.library.solder.lib.ext.PluginError.LoadError -> L158
            r3.append(r0)     // Catch: java.lang.Throwable -> L135 com.kwad.library.solder.lib.ext.PluginError.InstallError -> L156 com.kwad.library.solder.lib.ext.PluginError.LoadError -> L158
            r10.bI(r1)     // Catch: java.lang.Throwable -> L135 com.kwad.library.solder.lib.ext.PluginError.InstallError -> L156 com.kwad.library.solder.lib.ext.PluginError.LoadError -> L158
            h(r10)     // Catch: java.lang.Throwable -> L135 com.kwad.library.solder.lib.ext.PluginError.InstallError -> L156 com.kwad.library.solder.lib.ext.PluginError.LoadError -> L158
            return r10
        L135:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Load plugin failed, path = "
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.String r2 = "Sodler.loader"
            com.kwad.library.solder.lib.a.e(r2, r0, r1)
            com.kwad.library.solder.lib.ext.PluginError$InstallError r0 = new com.kwad.library.solder.lib.ext.PluginError$InstallError
            r1 = 4004(0xfa4, float:5.611E-42)
            java.lang.String r2 = "Load or install plugin failed"
            r0.<init>(r2, r1)
            r9.b(r10, r0)
            return r10
        L156:
            r0 = move-exception
            goto L159
        L158:
            r0 = move-exception
        L159:
            r9.b(r10, r0)
            return r10
        L15d:
            r10.bI(r4)
            h(r10)
            return r10
        L164:
            h(r10)
            return r10
    }
}
