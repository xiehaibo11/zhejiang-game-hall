package com.bykv.vk.openvk.api.plugin;

final class rg implements com.bykv.vk.openvk.TTVfManager {
    static final com.bykv.vk.openvk.api.plugin.rg rg = null;
    private volatile com.bykv.vk.openvk.TTVfManager df;

    class 1 implements com.bykv.vk.openvk.api.plugin.rg.df<com.bykv.vk.openvk.TTVfNative> {
        final java.lang.ref.WeakReference df;
        final com.bykv.vk.openvk.api.plugin.rg q;
        com.bykv.vk.openvk.TTVfNative rg;


        1(com.bykv.vk.openvk.api.plugin.rg r1, java.lang.ref.WeakReference r2) {
                r0 = this;
                r0.q = r1
                r0.df = r2
                r0.<init>()
                return
        }

        @Override
        public void rg(com.bykv.vk.openvk.api.plugin.rg.rg<com.bykv.vk.openvk.TTVfNative> r3) {
                r2 = this;
                com.bykv.vk.openvk.TTVfNative r0 = r2.rg
                if (r0 == 0) goto L8
                r3.rg(r0)
                goto L12
            L8:
                com.bykv.vk.openvk.api.plugin.rg r0 = r2.q
                com.bykv.vk.openvk.api.plugin.rg$1$1 r1 = new com.bykv.vk.openvk.api.plugin.rg$1$1
                r1.<init>(r2, r3)
                com.bykv.vk.openvk.api.plugin.rg.rg(r0, r1)
            L12:
                return
        }
    }








    private interface df<T> {
        void rg(com.bykv.vk.openvk.api.plugin.rg.rg<T> r1);
    }

    private static final class pt implements com.bykv.vk.openvk.TTVfNative {
        private com.bykv.vk.openvk.api.plugin.rg.df<com.bykv.vk.openvk.TTVfNative> rg;













        public pt(com.bykv.vk.openvk.api.plugin.rg.df<com.bykv.vk.openvk.TTVfNative> r1) {
                r0 = this;
                r0.<init>()
                r0.rg = r1
                return
        }

        private final void rg(com.bykv.vk.openvk.TTVfNative.CSJSplashAdListener r5, com.bykv.vk.openvk.api.plugin.rg.rg<com.bykv.vk.openvk.TTVfNative> r6) {
                r4 = this;
                com.bykv.vk.openvk.api.plugin.rg$df<com.bykv.vk.openvk.TTVfNative> r0 = r4.rg     // Catch: java.lang.Throwable -> L6
                r0.rg(r6)     // Catch: java.lang.Throwable -> L6
                goto L28
            L6:
                r6 = move-exception
                if (r5 == 0) goto L28
                com.bykv.vk.openvk.CSJAdError r0 = new com.bykv.vk.openvk.CSJAdError
                r1 = 4202(0x106a, float:5.888E-42)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "Load ad failed: "
                r2.append(r3)
                java.lang.String r6 = r6.getMessage()
                r2.append(r6)
                java.lang.String r6 = r2.toString()
                r0.<init>(r1, r6)
                r5.onSplashLoadFail(r0)
            L28:
                return
        }

        private final void rg(com.bykv.vk.openvk.common.CommonListener r4, com.bykv.vk.openvk.api.plugin.rg.rg<com.bykv.vk.openvk.TTVfNative> r5) {
                r3 = this;
                com.bykv.vk.openvk.api.plugin.rg$df<com.bykv.vk.openvk.TTVfNative> r0 = r3.rg     // Catch: java.lang.Throwable -> L6
                r0.rg(r5)     // Catch: java.lang.Throwable -> L6
                goto L23
            L6:
                r5 = move-exception
                if (r4 == 0) goto L23
                r0 = 4202(0x106a, float:5.888E-42)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Load ad failed: "
                r1.append(r2)
                java.lang.String r5 = r5.getMessage()
                r1.append(r5)
                java.lang.String r5 = r1.toString()
                r4.onError(r0, r5)
            L23:
                return
        }

        @Override
        public void loadBnExpressVb(com.bykv.vk.openvk.VfSlot r2, com.bykv.vk.openvk.TTVfNative.NtExpressVfListener r3) {
                r1 = this;
                com.bykv.vk.openvk.api.plugin.rg$pt$4 r0 = new com.bykv.vk.openvk.api.plugin.rg$pt$4
                r0.<init>(r1, r2, r3)
                r1.rg(r3, r0)
                return
        }

        @Override
        public void loadDrawVfList(com.bykv.vk.openvk.VfSlot r2, com.bykv.vk.openvk.TTVfNative.DrawVfListListener r3) {
                r1 = this;
                com.bykv.vk.openvk.api.plugin.rg$pt$6 r0 = new com.bykv.vk.openvk.api.plugin.rg$pt$6
                r0.<init>(r1, r2, r3)
                r1.rg(r3, r0)
                return
        }

        @Override
        public void loadExpressDrawVf(com.bykv.vk.openvk.VfSlot r2, com.bykv.vk.openvk.TTVfNative.NtExpressVfListener r3) {
                r1 = this;
                com.bykv.vk.openvk.api.plugin.rg$pt$3 r0 = new com.bykv.vk.openvk.api.plugin.rg$pt$3
                r0.<init>(r1, r2, r3)
                r1.rg(r3, r0)
                return
        }

        @Override
        public void loadFullVideoVs(com.bykv.vk.openvk.VfSlot r2, com.bykv.vk.openvk.TTVfNative.FullScreenVideoAdListener r3) {
                r1 = this;
                com.bykv.vk.openvk.api.plugin.rg$pt$12 r0 = new com.bykv.vk.openvk.api.plugin.rg$pt$12
                r0.<init>(r1, r2, r3)
                r1.rg(r3, r0)
                return
        }

        @Override
        public void loadItExpressVi(com.bykv.vk.openvk.VfSlot r1, com.bykv.vk.openvk.TTVfNative.NtExpressVfListener r2) {
                r0 = this;
                return
        }

        @Override
        public void loadNativeVn(com.bykv.vk.openvk.VfSlot r2, com.bykv.vk.openvk.TTVfNative.NtVfListener r3) {
                r1 = this;
                com.bykv.vk.openvk.api.plugin.rg$pt$7 r0 = new com.bykv.vk.openvk.api.plugin.rg$pt$7
                r0.<init>(r1, r2, r3)
                r1.rg(r3, r0)
                return
        }

        @Override
        public void loadNtExpressVn(com.bykv.vk.openvk.VfSlot r2, com.bykv.vk.openvk.TTVfNative.NtExpressVfListener r3) {
                r1 = this;
                com.bykv.vk.openvk.api.plugin.rg$pt$2 r0 = new com.bykv.vk.openvk.api.plugin.rg$pt$2
                r0.<init>(r1, r2, r3)
                r1.rg(r3, r0)
                return
        }

        @Override
        public void loadRdVideoVr(com.bykv.vk.openvk.VfSlot r2, com.bykv.vk.openvk.TTVfNative.RdVideoVfListener r3) {
                r1 = this;
                com.bykv.vk.openvk.api.plugin.rg$pt$11 r0 = new com.bykv.vk.openvk.api.plugin.rg$pt$11
                r0.<init>(r1, r2, r3)
                r1.rg(r3, r0)
                return
        }

        @Override
        public void loadSphVs(com.bykv.vk.openvk.VfSlot r2, com.bykv.vk.openvk.TTVfNative.CSJSplashAdListener r3, int r4) {
                r1 = this;
                com.bykv.vk.openvk.api.plugin.rg$pt$9 r0 = new com.bykv.vk.openvk.api.plugin.rg$pt$9
                r0.<init>(r1, r2, r3, r4)
                r1.rg(r3, r0)
                return
        }

        @Override
        public void loadSphVs(com.bykv.vk.openvk.VfSlot r2, com.bykv.vk.openvk.TTVfNative.SphVfListener r3) {
                r1 = this;
                com.bykv.vk.openvk.api.plugin.rg$pt$10 r0 = new com.bykv.vk.openvk.api.plugin.rg$pt$10
                r0.<init>(r1, r2, r3)
                r1.rg(r3, r0)
                return
        }

        @Override
        public void loadSphVs(com.bykv.vk.openvk.VfSlot r2, com.bykv.vk.openvk.TTVfNative.SphVfListener r3, int r4) {
                r1 = this;
                com.bykv.vk.openvk.api.plugin.rg$pt$8 r0 = new com.bykv.vk.openvk.api.plugin.rg$pt$8
                r0.<init>(r1, r2, r3, r4)
                r1.rg(r3, r0)
                return
        }

        @Override
        public void loadStream(com.bykv.vk.openvk.VfSlot r2, com.bykv.vk.openvk.TTVfNative.VfListListener r3) {
                r1 = this;
                com.bykv.vk.openvk.api.plugin.rg$pt$5 r0 = new com.bykv.vk.openvk.api.plugin.rg$pt$5
                r0.<init>(r1, r2, r3)
                r1.rg(r3, r0)
                return
        }

        @Override
        public void loadVfList(com.bykv.vk.openvk.VfSlot r2, com.bykv.vk.openvk.TTVfNative.VfListListener r3) {
                r1 = this;
                com.bykv.vk.openvk.api.plugin.rg$pt$1 r0 = new com.bykv.vk.openvk.api.plugin.rg$pt$1
                r0.<init>(r1, r2, r3)
                r1.rg(r3, r0)
                return
        }
    }

    private interface q<T> extends com.bykv.vk.openvk.api.plugin.rg.rg<T> {
        void rg();
    }

    private interface rg<T> {
        void rg(T r1);
    }

    static {
            com.bykv.vk.openvk.api.plugin.rg r0 = new com.bykv.vk.openvk.api.plugin.rg
            r0.<init>()
            com.bykv.vk.openvk.api.plugin.rg.rg = r0
            return
    }

    rg() {
            r0 = this;
            r0.<init>()
            return
    }

    private final void call(com.bykv.vk.openvk.api.plugin.rg.rg<com.bykv.vk.openvk.TTVfManager> r4) {
            r3 = this;
            com.bykv.vk.openvk.TTVfManager r0 = r3.df
            java.lang.String r1 = "PluginDefaultAdManager"
            if (r0 == 0) goto L29
            com.bykv.vk.openvk.TTVfManager r0 = r3.df     // Catch: java.lang.Throwable -> Lc
            r4.rg(r0)     // Catch: java.lang.Throwable -> Lc
            goto L28
        Lc:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Unexpected manager call error: "
            r0.append(r2)
            java.lang.String r2 = r4.getMessage()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.bykv.vk.openvk.api.rg.pt(r1, r0)
            com.bykv.vk.openvk.api.plugin.c.rg(r4)
        L28:
            return
        L29:
            java.util.concurrent.ScheduledExecutorService r0 = com.bykv.vk.openvk.api.plugin.fw.rg
            if (r0 == 0) goto L38
            java.util.concurrent.ScheduledExecutorService r0 = com.bykv.vk.openvk.api.plugin.fw.rg
            com.bykv.vk.openvk.api.plugin.rg$8 r1 = new com.bykv.vk.openvk.api.plugin.rg$8
            r1.<init>(r3, r4)
            r0.submit(r1)
            goto L3d
        L38:
            java.lang.String r4 = "Not ready, no executor"
            com.bykv.vk.openvk.api.rg.pt(r1, r4)
        L3d:
            return
    }

    static com.bykv.vk.openvk.TTVfManager rg(com.bykv.vk.openvk.api.plugin.rg r0) {
            com.bykv.vk.openvk.TTVfManager r0 = r0.df
            return r0
    }

    static void rg(com.bykv.vk.openvk.api.plugin.rg r0, com.bykv.vk.openvk.api.plugin.rg.rg r1) {
            r0.call(r1)
            return
    }

    @Override
    public com.bykv.vk.openvk.TTVfNative createVfNative(android.content.Context r3) {
            r2 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r3)
            com.bykv.vk.openvk.api.plugin.rg$pt r3 = new com.bykv.vk.openvk.api.plugin.rg$pt
            com.bykv.vk.openvk.api.plugin.rg$1 r1 = new com.bykv.vk.openvk.api.plugin.rg$1
            r1.<init>(r2, r0)
            r3.<init>(r1)
            return r3
    }

    @Override
    public java.lang.String getBiddingToken(com.bykv.vk.openvk.VfSlot r2) {
            r1 = this;
            com.bykv.vk.openvk.TTVfManager r0 = r1.df
            if (r0 == 0) goto Lb
            com.bykv.vk.openvk.TTVfManager r0 = r1.df
            java.lang.String r2 = r0.getBiddingToken(r2)
            goto Lc
        Lb:
            r2 = 0
        Lc:
            return r2
    }

    @Override
    public java.lang.String getBiddingToken(com.bykv.vk.openvk.VfSlot r2, boolean r3, int r4) {
            r1 = this;
            com.bykv.vk.openvk.TTVfManager r0 = r1.df
            if (r0 == 0) goto Lb
            com.bykv.vk.openvk.TTVfManager r0 = r1.df
            java.lang.String r2 = r0.getBiddingToken(r2, r3, r4)
            goto Lc
        Lb:
            r2 = 0
        Lc:
            return r2
    }

    @Override
    public <T> T getExtra(java.lang.Class<T> r3, android.os.Bundle r4) {
            r2 = this;
            com.bykv.vk.openvk.TTVfManager r0 = r2.df
            if (r0 == 0) goto Lb
            com.bykv.vk.openvk.TTVfManager r0 = r2.df
            java.lang.Object r3 = r0.getExtra(r3, r4)
            return r3
        Lb:
            java.lang.Class<android.os.Bundle> r0 = android.os.Bundle.class
            if (r3 != r0) goto L24
            if (r4 == 0) goto L24
            r0 = 0
            java.lang.String r1 = "action"
            int r0 = r4.getInt(r1, r0)
            r1 = 1
            if (r0 != r1) goto L24
            com.bykv.vk.openvk.api.plugin.rg$4 r0 = new com.bykv.vk.openvk.api.plugin.rg$4
            r0.<init>(r2, r4, r3)
            r2.call(r0)
            goto L2c
        L24:
            com.bykv.vk.openvk.api.plugin.rg$5 r0 = new com.bykv.vk.openvk.api.plugin.rg$5
            r0.<init>(r2, r3, r4)
            r2.call(r0)
        L2c:
            r3 = 0
            return r3
    }

    @Override
    public java.lang.String getPluginVersion() {
            r1 = this;
            com.bykv.vk.openvk.TTVfManager r0 = r1.df
            if (r0 == 0) goto Lb
            com.bykv.vk.openvk.TTVfManager r0 = r1.df
            java.lang.String r0 = r0.getPluginVersion()
            goto Ld
        Lb:
            java.lang.String r0 = ""
        Ld:
            return r0
    }

    @Override
    public java.lang.String getSDKVersion() {
            r1 = this;
            java.lang.String r0 = "5.1.1.4"
            return r0
    }

    @Override
    public int getThemeStatus() {
            r1 = this;
            com.bykv.vk.openvk.TTVfManager r0 = r1.df
            if (r0 == 0) goto Lb
            com.bykv.vk.openvk.TTVfManager r0 = r1.df
            int r0 = r0.getThemeStatus()
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    @Override
    public void register(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof com.bykv.vk.openvk.TTPluginListener
            if (r0 == 0) goto L1c
            r0 = r4
            com.bykv.vk.openvk.TTPluginListener r0 = (com.bykv.vk.openvk.TTPluginListener) r0
            java.lang.String r1 = r0.packageName()
            android.os.Bundle r0 = r0.config()
            android.content.Context r2 = com.bykv.vk.openvk.TTAppContextHolder.getContext()
            com.bykv.vk.openvk.api.plugin.c r2 = com.bykv.vk.openvk.api.plugin.c.rg(r2)
            android.os.Bundle r0 = r2.rg(r1, r0)
            goto L1d
        L1c:
            r0 = r4
        L1d:
            com.bykv.vk.openvk.api.plugin.rg$2 r1 = new com.bykv.vk.openvk.api.plugin.rg$2
            r1.<init>(r3, r0, r4)
            r3.call(r1)
            return
    }

    @Override
    public void requestPermissionIfNecessary(android.content.Context r2) {
            r1 = this;
            com.bykv.vk.openvk.api.plugin.rg$6 r0 = new com.bykv.vk.openvk.api.plugin.rg$6
            r0.<init>(r1, r2)
            r1.call(r0)
            return
    }

    public void rg(com.bykv.vk.openvk.TTVfManager r1) {
            r0 = this;
            r0.df = r1
            return
    }

    @Override
    public void setThemeStatus(int r2) {
            r1 = this;
            com.bykv.vk.openvk.api.plugin.rg$7 r0 = new com.bykv.vk.openvk.api.plugin.rg$7
            r0.<init>(r1, r2)
            r1.call(r0)
            return
    }

    @Override
    public boolean tryShowInstallDialogWhenExit(android.app.Activity r2, com.bykv.vk.openvk.downloadnew.core.ExitInstallListener r3) {
            r1 = this;
            com.bykv.vk.openvk.TTVfManager r0 = r1.df
            if (r0 == 0) goto Le
            com.bykv.vk.openvk.TTVfManager r0 = r1.df
            boolean r2 = r0.tryShowInstallDialogWhenExit(r2, r3)
            if (r2 == 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    @Override
    public void unregister(java.lang.Object r2) {
            r1 = this;
            com.bykv.vk.openvk.api.plugin.rg$3 r0 = new com.bykv.vk.openvk.api.plugin.rg$3
            r0.<init>(r1, r2)
            r1.call(r0)
            return
    }
}
