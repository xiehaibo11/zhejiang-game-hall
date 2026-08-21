package com.bykv.vk.openvk.rg;

public final class df implements com.bykv.vk.openvk.TTAdBridge, com.bykv.vk.openvk.api.proto.Bridge {
    private static volatile com.bykv.vk.openvk.rg.df rg;
    private com.bykv.vk.openvk.rg.rg df;



    private df() {
            r1 = this;
            r1.<init>()
            com.bykv.vk.openvk.rg.rg r0 = new com.bykv.vk.openvk.rg.rg
            r0.<init>()
            r1.df = r0
            return
    }

    public static final com.bykv.vk.openvk.rg.df rg() {
            com.bykv.vk.openvk.rg.df r0 = com.bykv.vk.openvk.rg.df.rg
            if (r0 != 0) goto L17
            java.lang.Class<com.bykv.vk.openvk.rg.df> r0 = com.bykv.vk.openvk.rg.df.class
            monitor-enter(r0)
            com.bykv.vk.openvk.rg.df r1 = com.bykv.vk.openvk.rg.df.rg     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bykv.vk.openvk.rg.df r1 = new com.bykv.vk.openvk.rg.df     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bykv.vk.openvk.rg.df.rg = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bykv.vk.openvk.rg.df r0 = com.bykv.vk.openvk.rg.df.rg
            return r0
    }

    private void rg(com.bykv.vk.openvk.api.proto.EventListener r3) {
            r2 = this;
            com.bykv.vk.openvk.rg.rg r0 = r2.df
            com.bykv.vk.openvk.rg.df$2 r1 = new com.bykv.vk.openvk.rg.df$2
            r1.<init>(r2, r3)
            r0.rg(r1)
            return
    }

    @Override
    public <T> T call(int r1, com.bykv.vk.openvk.api.proto.ValueSet r2, java.lang.Class<T> r3) {
            r0 = this;
            r3 = 0
            switch(r1) {
                case 2: goto L67;
                case 3: goto L62;
                case 4: goto L57;
                case 5: goto L4a;
                case 6: goto L3d;
                case 7: goto L30;
                case 8: goto L1f;
                case 9: goto L5;
                default: goto L4;
            }
        L4:
            goto L6e
        L5:
            java.lang.Class<java.lang.Object> r1 = java.lang.Object.class
            java.lang.Object r1 = r2.objectValue(r3, r1)
            boolean r2 = r1 instanceof com.bykv.vk.openvk.TTAdEvent
            if (r2 == 0) goto L15
            com.bykv.vk.openvk.TTAdEvent r1 = (com.bykv.vk.openvk.TTAdEvent) r1
            r0.subscribe(r1)
            goto L6e
        L15:
            boolean r2 = r1 instanceof com.bykv.vk.openvk.api.proto.EventListener
            if (r2 == 0) goto L6e
            com.bykv.vk.openvk.api.proto.EventListener r1 = (com.bykv.vk.openvk.api.proto.EventListener) r1
            r0.rg(r1)
            goto L6e
        L1f:
            java.lang.String r1 = r2.stringValue(r3)
            java.lang.String r1 = com.bykv.vk.openvk.api.plugin.c.rg(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L2f
            java.lang.String r1 = "0.0.0.0"
        L2f:
            return r1
        L30:
            java.lang.String r1 = r2.stringValue(r3)
            boolean r1 = com.bytedance.pangle.Zeus.isPluginLoaded(r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L3d:
            java.lang.String r1 = r2.stringValue(r3)
            boolean r1 = com.bytedance.pangle.Zeus.isPluginInstalled(r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L4a:
            java.lang.String r1 = r2.stringValue(r3)
            boolean r1 = com.bytedance.pangle.Zeus.loadPlugin(r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L57:
            java.lang.String r1 = r2.stringValue(r3)
            com.bytedance.pangle.plugin.Plugin r1 = com.bytedance.pangle.Zeus.getPlugin(r1)
            com.bytedance.pangle.PluginClassLoader r1 = r1.mClassLoader
            return r1
        L62:
            android.content.Context r1 = com.bykv.vk.openvk.TTAppContextHolder.getContext()
            return r1
        L67:
            com.bykv.vk.openvk.rg.rg r1 = r0.df
            java.lang.Boolean r1 = r1.rg()
            return r1
        L6e:
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String call(int r1, android.os.Bundle r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public <T> T callMethod(java.lang.Class<T> r1, int r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            java.lang.String r1 = "com.byted.csj.ext"
            switch(r2) {
                case 2: goto L3b;
                case 3: goto L36;
                case 4: goto L2f;
                case 5: goto L26;
                case 6: goto L1d;
                case 7: goto L14;
                case 8: goto L7;
                default: goto L5;
            }
        L5:
            r1 = 0
            return r1
        L7:
            java.lang.String r1 = com.bykv.vk.openvk.api.plugin.c.rg(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L13
            java.lang.String r1 = "0.0.0.0"
        L13:
            return r1
        L14:
            boolean r1 = com.bytedance.pangle.Zeus.isPluginLoaded(r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L1d:
            boolean r1 = com.bytedance.pangle.Zeus.isPluginInstalled(r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L26:
            boolean r1 = com.bytedance.pangle.Zeus.loadPlugin(r1)
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            return r1
        L2f:
            com.bytedance.pangle.plugin.Plugin r1 = com.bytedance.pangle.Zeus.getPlugin(r1)
            com.bytedance.pangle.PluginClassLoader r1 = r1.mClassLoader
            return r1
        L36:
            android.content.Context r1 = com.bykv.vk.openvk.TTAppContextHolder.getContext()
            return r1
        L3b:
            com.bykv.vk.openvk.rg.rg r1 = r0.df
            java.lang.Boolean r1 = r1.rg()
            return r1
    }

    public android.app.Application.ActivityLifecycleCallbacks df() {
            r1 = this;
            com.bykv.vk.openvk.rg.rg r0 = r1.df
            return r0
    }

    @Override
    public <T> T getObj(java.lang.Class<T> r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public <T> T getObj(java.lang.Class<T> r1, int r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void init(android.os.Bundle r1) {
            r0 = this;
            return
    }

    @Override
    public void removeObj(java.lang.Object r1) {
            r0 = this;
            return
    }

    @Override
    public void setObj(java.lang.Object r1) {
            r0 = this;
            return
    }

    @Override
    public void subscribe(com.bykv.vk.openvk.TTAdEvent r3) {
            r2 = this;
            com.bykv.vk.openvk.rg.rg r0 = r2.df
            com.bykv.vk.openvk.rg.df$1 r1 = new com.bykv.vk.openvk.rg.df$1
            r1.<init>(r2, r3)
            r0.rg(r1)
            return
    }

    @Override
    public void unsubscribe(com.bykv.vk.openvk.TTAdEvent r1) {
            r0 = this;
            return
    }

    @Override
    public com.bykv.vk.openvk.api.proto.ValueSet values() {
            r1 = this;
            r0 = 0
            return r0
    }
}
