package com.bykv.vk.openvk;

public final class TTVfConfig implements com.bykv.vk.openvk.AdConfig {
    private boolean b;
    private int[] bm;
    private int c;
    private java.lang.String df;
    private java.util.Map<java.lang.String, java.lang.Object> f;
    private boolean fw;
    private boolean hq;
    private int oh;
    private java.lang.String pp;
    private java.lang.String pt;
    private boolean q;
    private java.lang.String rg;
    private boolean rz;
    private int un;
    private boolean ux;
    private com.bykv.vk.openvk.TTCustomController v;
    private com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth z;


    public static class Builder {
        private boolean b;
        private int[] bm;
        private int c;
        private java.lang.String df;
        private boolean f;
        private boolean fw;
        private boolean hq;
        private java.lang.String[] oh;
        private java.lang.String pp;
        private java.lang.String pt;
        private boolean q;
        private com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth qx;
        private int r;
        private java.lang.String rg;
        private boolean rz;
        private int un;
        private boolean ux;
        private com.bykv.vk.openvk.TTCustomController v;
        private int z;

        public Builder() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.q = r0
                r2.c = r0
                r1 = 1
                r2.fw = r1
                r2.ux = r0
                r2.rz = r0
                r2.b = r1
                r2.hq = r0
                r2.f = r0
                r1 = 2
                r2.z = r1
                r2.r = r0
                return
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder allowShowNotify(boolean r1) {
                r0 = this;
                r0.fw = r1
                return r0
        }

        @java.lang.Deprecated
        public com.bykv.vk.openvk.TTVfConfig.Builder allowShowPageWhenScreenLock(boolean r1) {
                r0 = this;
                r0.rz = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder appId(java.lang.String r1) {
                r0 = this;
                r0.rg = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder appName(java.lang.String r1) {
                r0 = this;
                r0.df = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder asyncInit(boolean r1) {
                r0 = this;
                r0.f = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig build() {
                r3 = this;
                com.bykv.vk.openvk.TTVfConfig r0 = new com.bykv.vk.openvk.TTVfConfig
                r1 = 0
                r0.<init>(r1)
                java.lang.String r1 = r3.rg
                r0.setAppId(r1)
                java.lang.String r1 = r3.df
                r0.setAppName(r1)
                boolean r1 = r3.q
                r0.setPaid(r1)
                java.lang.String r1 = r3.pt
                r0.setKeywords(r1)
                java.lang.String r1 = r3.pp
                r0.setData(r1)
                int r1 = r3.c
                r0.setTitleBarTheme(r1)
                boolean r1 = r3.fw
                r0.setAllowShowNotify(r1)
                boolean r1 = r3.ux
                r0.setDebug(r1)
                boolean r1 = r3.rz
                r0.setAllowShowPageWhenScreenLock(r1)
                int[] r1 = r3.bm
                r0.setDirectDownloadNetworkType(r1)
                boolean r1 = r3.b
                r0.setUseTextureView(r1)
                boolean r1 = r3.hq
                r0.setSupportMultiProcess(r1)
                java.lang.String[] r1 = r3.oh
                r0.setNeedClearTaskReset(r1)
                boolean r1 = r3.f
                r0.setAsyncInit(r1)
                com.bykv.vk.openvk.TTCustomController r1 = r3.v
                r0.setCustomController(r1)
                int r1 = r3.un
                r0.setThemeStatus(r1)
                int r1 = r3.z
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                java.lang.String r2 = "plugin_update_conf"
                r0.setExtra(r2, r1)
                int r1 = r3.r
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                java.lang.String r2 = "age_group"
                r0.setExtra(r2, r1)
                com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth r1 = r3.qx
                r0.setInjectionAuth(r1)
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder customController(com.bykv.vk.openvk.TTCustomController r1) {
                r0 = this;
                r0.v = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder data(java.lang.String r1) {
                r0 = this;
                r0.pp = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder debug(boolean r1) {
                r0 = this;
                r0.ux = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder directDownloadNetworkType(int... r1) {
                r0 = this;
                r0.bm = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder injectionAuth(com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth r1) {
                r0 = this;
                r0.qx = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder keywords(java.lang.String r1) {
                r0 = this;
                r0.pt = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder needClearTaskReset(java.lang.String... r1) {
                r0 = this;
                r0.oh = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder paid(boolean r1) {
                r0 = this;
                r0.q = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder setAgeGroup(int r1) {
                r0 = this;
                r0.r = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder setPluginUpdateConfig(int r1) {
                r0 = this;
                r0.z = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder supportMultiProcess(boolean r1) {
                r0 = this;
                r0.hq = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder themeStatus(int r1) {
                r0 = this;
                r0.un = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder titleBarTheme(int r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        public com.bykv.vk.openvk.TTVfConfig.Builder useTextureView(boolean r1) {
                r0 = this;
                r0.b = r1
                return r0
        }
    }

    private TTVfConfig() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.q = r0
            r3.c = r0
            r1 = 1
            r3.fw = r1
            r3.ux = r0
            r3.rz = r0
            r3.b = r1
            r3.hq = r0
            r3.oh = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r3.f = r0
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            java.lang.String r2 = "_sdk_is_p_"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.f
            r1 = 5114(0x13fa, float:7.166E-42)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "_sdk_v_c_"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.f
            java.lang.String r1 = "_sdk_v_n_"
            java.lang.String r2 = "5.1.1.4"
            r0.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.f
            java.lang.String r1 = "_sdk_p_n_"
            java.lang.String r2 = "com.bykv.vk"
            r0.put(r1, r2)
            return
    }

    TTVfConfig(com.bykv.vk.openvk.TTVfConfig.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String getAppId() {
            r1 = this;
            java.lang.String r0 = r1.rg
            return r0
    }

    @Override
    public java.lang.String getAppName() {
            r1 = this;
            java.lang.String r0 = r1.df
            return r0
    }

    @Override
    public com.bykv.vk.openvk.TTCustomController getCustomController() {
            r1 = this;
            com.bykv.vk.openvk.TTCustomController r0 = r1.v
            return r0
    }

    @Override
    public java.lang.String getData() {
            r1 = this;
            java.lang.String r0 = r1.pp
            return r0
    }

    @Override
    public int[] getDirectDownloadNetworkType() {
            r1 = this;
            int[] r0 = r1.bm
            return r0
    }

    @Override
    @java.lang.Deprecated
    public java.lang.Object getExtra(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.f
            java.lang.Object r2 = r0.get(r2)
            return r2
    }

    @Override
    public com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth getInjectionAuth() {
            r1 = this;
            com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth r0 = r1.z
            return r0
    }

    @Override
    public java.lang.String getKeywords() {
            r1 = this;
            java.lang.String r0 = r1.pt
            return r0
    }

    @Override
    @java.lang.Deprecated
    public java.lang.String[] getNeedClearTaskReset() {
            r1 = this;
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            return r0
    }

    @Override
    public com.bykv.vk.openvk.AdConfig.SdkInfo getSdkInfo() {
            r1 = this;
            com.bykv.vk.openvk.TTVfConfig$1 r0 = new com.bykv.vk.openvk.TTVfConfig$1
            r0.<init>(r1)
            return r0
    }

    public int getThemeStatus() {
            r1 = this;
            int r0 = r1.un
            return r0
    }

    @Override
    public int getTitleBarTheme() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    @Override
    public boolean isAllowShowNotify() {
            r1 = this;
            boolean r0 = r1.fw
            return r0
    }

    @Override
    public boolean isAllowShowPageWhenScreenLock() {
            r1 = this;
            boolean r0 = r1.rz
            return r0
    }

    @Override
    @java.lang.Deprecated
    public boolean isAsyncInit() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public boolean isDebug() {
            r1 = this;
            boolean r0 = r1.ux
            return r0
    }

    @Override
    public boolean isPaid() {
            r1 = this;
            boolean r0 = r1.q
            return r0
    }

    @Override
    public boolean isSupportMultiProcess() {
            r1 = this;
            boolean r0 = r1.hq
            return r0
    }

    @Override
    public boolean isUseTextureView() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    @Override
    public java.lang.Object removeExtra(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.f
            java.lang.Object r2 = r0.remove(r2)
            return r2
    }

    @Override
    public void setAgeGroup(int r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.f
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r1 = "age_group"
            r0.put(r1, r3)
            return
    }

    public void setAllowShowNotify(boolean r1) {
            r0 = this;
            r0.fw = r1
            return
    }

    public void setAllowShowPageWhenScreenLock(boolean r1) {
            r0 = this;
            r0.rz = r1
            return
    }

    public void setAppId(java.lang.String r1) {
            r0 = this;
            r0.rg = r1
            return
    }

    public void setAppName(java.lang.String r1) {
            r0 = this;
            r0.df = r1
            return
    }

    @java.lang.Deprecated
    public void setAsyncInit(boolean r1) {
            r0 = this;
            return
    }

    public void setCustomController(com.bykv.vk.openvk.TTCustomController r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public void setData(java.lang.String r1) {
            r0 = this;
            r0.pp = r1
            return
    }

    public void setDebug(boolean r1) {
            r0 = this;
            r0.ux = r1
            return
    }

    public void setDirectDownloadNetworkType(int... r1) {
            r0 = this;
            r0.bm = r1
            return
    }

    @Override
    @java.lang.Deprecated
    public void setExtra(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.f
            r0.put(r2, r3)
            return
    }

    public void setInjectionAuth(com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public void setKeywords(java.lang.String r1) {
            r0 = this;
            r0.pt = r1
            return
    }

    @java.lang.Deprecated
    public void setNeedClearTaskReset(java.lang.String... r1) {
            r0 = this;
            return
    }

    public void setPaid(boolean r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public void setSupportMultiProcess(boolean r1) {
            r0 = this;
            r0.hq = r1
            return
    }

    public void setThemeStatus(int r1) {
            r0 = this;
            r0.un = r1
            return
    }

    public void setTitleBarTheme(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setUseTextureView(boolean r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
