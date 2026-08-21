package com.bytedance.pangle.plugin;

final class a implements java.lang.Runnable {
    private final java.io.File a;
    private final java.lang.String b;

    a(java.lang.String r1, java.io.File r2) {
            r0 = this;
            r0.<init>()
            r0.a = r2
            r0.b = r1
            return
    }

    final boolean a() {
            r8 = this;
            java.io.File r0 = r8.a
            com.bytedance.pangle.f.a.e r0 = com.bytedance.pangle.f.a.d.a(r0)
            java.lang.String r1 = "Zeus/install_pangle"
            r2 = 1
            r3 = 7
            r4 = 0
            if (r0 != 0) goto L48
            java.lang.String r0 = r8.b
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = " read local file package info failed !!! pluginPkg = "
            r5.<init>(r6)
            java.lang.String r6 = r8.b
            r5.append(r6)
            java.lang.String r6 = " mApkFile.exists = "
            r5.append(r6)
            java.io.File r6 = r8.a
            boolean r6 = r6.exists()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r2[r4] = r5
            com.bytedance.pangle.ZeusPluginStateListener.postStateChange(r0, r3, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "PluginInstallRunnable read local file package info failed !!! pluginPkg = "
            r0.<init>(r2)
            java.lang.String r2 = r8.b
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)
            return r4
        L48:
            com.bytedance.pangle.plugin.PluginManager r5 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            java.lang.String r6 = r0.a
            com.bytedance.pangle.plugin.Plugin r5 = r5.getPlugin(r6)
            if (r5 != 0) goto L81
            java.lang.String r5 = r8.b
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = " plugin == null !!! pluginPkg = "
            r6.<init>(r7)
            java.lang.String r7 = r8.b
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r2[r4] = r6
            com.bytedance.pangle.ZeusPluginStateListener.postStateChange(r5, r3, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "PluginInstallRunnable cannot query valid plugin !!! packageName = "
            r2.<init>(r3)
            java.lang.String r0 = r0.a
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0)
            return r4
        L81:
            java.io.File r1 = r8.a
            boolean r1 = r5.install(r1, r0)
            if (r1 == 0) goto L92
            java.lang.String r0 = r0.a
            r2 = 6
            java.lang.Object[] r3 = new java.lang.Object[r4]
            com.bytedance.pangle.ZeusPluginStateListener.postStateChange(r0, r2, r3)
            goto L9d
        L92:
            java.lang.String r0 = r0.a
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.String r5 = "Internal error."
            r2[r4] = r5
            com.bytedance.pangle.ZeusPluginStateListener.postStateChange(r0, r3, r2)
        L9d:
            return r1
    }

    @Override
    public final void run() {
            r0 = this;
            r0.a()
            return
    }
}
