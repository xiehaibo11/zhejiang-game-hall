package com.bytedance.pangle.f;

public class a extends com.bytedance.pangle.c.a {
    private static volatile com.bytedance.pangle.f.a a;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bytedance.pangle.f.a b() {
            com.bytedance.pangle.f.a r0 = com.bytedance.pangle.f.a.a
            if (r0 != 0) goto L17
            java.lang.Class<com.bytedance.pangle.f.a> r0 = com.bytedance.pangle.f.a.class
            monitor-enter(r0)
            com.bytedance.pangle.f.a r1 = com.bytedance.pangle.f.a.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bytedance.pangle.f.a r1 = new com.bytedance.pangle.f.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bytedance.pangle.f.a.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bytedance.pangle.f.a r0 = com.bytedance.pangle.f.a.a
            return r0
    }

    @Override
    public final boolean a(java.lang.String r2) {
            r1 = this;
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            boolean r2 = r0.checkPluginInstalled(r2)
            return r2
    }

    @Override
    public final boolean a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            java.io.File r1 = new java.io.File
            r1.<init>(r4)
            boolean r3 = r0.syncInstall(r3, r1)
            return r3
    }

    @Override
    public final int b(java.lang.String r2) {
            r1 = this;
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()
            com.bytedance.pangle.plugin.Plugin r2 = r0.getPlugin(r2)
            int r2 = r2.getVersion()
            return r2
    }
}
