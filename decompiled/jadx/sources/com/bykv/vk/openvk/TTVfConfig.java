package com.bykv.vk.openvk;

import com.bykv.vk.openvk.AdConfig;
import com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public final class TTVfConfig implements AdConfig {
    private boolean b;
    private int[] bm;
    private int c;
    private String df;
    private Map<String, Object> f;
    private boolean fw;
    private boolean hq;
    private int oh;
    private String pp;
    private String pt;
    private boolean q;
    private String rg;
    private boolean rz;
    private int un;
    private boolean ux;
    private TTCustomController v;
    private ITTLiveTokenInjectionAuth z;

    @Override // com.bykv.vk.openvk.AdConfig
    @Deprecated
    public String[] getNeedClearTaskReset() {
        return new String[0];
    }

    @Override // com.bykv.vk.openvk.AdConfig
    @Deprecated
    public boolean isAsyncInit() {
        return true;
    }

    @Deprecated
    public void setAsyncInit(boolean z) {
    }

    @Deprecated
    public void setNeedClearTaskReset(String... strArr) {
    }

    private TTVfConfig() {
        this.q = false;
        this.c = 0;
        this.fw = true;
        this.ux = false;
        this.rz = false;
        this.b = true;
        this.hq = false;
        this.oh = 0;
        HashMap map = new HashMap();
        this.f = map;
        map.put("_sdk_is_p_", true);
        this.f.put("_sdk_v_c_", 5114);
        this.f.put("_sdk_v_n_", "5.1.1.4");
        this.f.put("_sdk_p_n_", "com.bykv.vk");
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public ITTLiveTokenInjectionAuth getInjectionAuth() {
        return this.z;
    }

    public void setInjectionAuth(ITTLiveTokenInjectionAuth iTTLiveTokenInjectionAuth) {
        this.z = iTTLiveTokenInjectionAuth;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public String getAppId() {
        return this.rg;
    }

    public void setAppId(String str) {
        this.rg = str;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public String getAppName() {
        return this.df;
    }

    public void setAppName(String str) {
        this.df = str;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public boolean isPaid() {
        return this.q;
    }

    public void setPaid(boolean z) {
        this.q = z;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public String getKeywords() {
        return this.pt;
    }

    public void setKeywords(String str) {
        this.pt = str;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public String getData() {
        return this.pp;
    }

    public void setData(String str) {
        this.pp = str;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public int getTitleBarTheme() {
        return this.c;
    }

    public void setTitleBarTheme(int i) {
        this.c = i;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public boolean isAllowShowNotify() {
        return this.fw;
    }

    public void setAllowShowNotify(boolean z) {
        this.fw = z;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public boolean isDebug() {
        return this.ux;
    }

    public void setDebug(boolean z) {
        this.ux = z;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public boolean isAllowShowPageWhenScreenLock() {
        return this.rz;
    }

    public void setAllowShowPageWhenScreenLock(boolean z) {
        this.rz = z;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public int[] getDirectDownloadNetworkType() {
        return this.bm;
    }

    public void setDirectDownloadNetworkType(int... iArr) {
        this.bm = iArr;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public boolean isUseTextureView() {
        return this.b;
    }

    public void setUseTextureView(boolean z) {
        this.b = z;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public boolean isSupportMultiProcess() {
        return this.hq;
    }

    public void setSupportMultiProcess(boolean z) {
        this.hq = z;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public void setAgeGroup(int i) {
        this.f.put(TTVfConstant.KEY_AGE_GROUP, Integer.valueOf(i));
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public TTCustomController getCustomController() {
        return this.v;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    @Deprecated
    public Object getExtra(String str) {
        return this.f.get(str);
    }

    public void setThemeStatus(int i) {
        this.un = i;
    }

    public int getThemeStatus() {
        return this.un;
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public Object removeExtra(String str) {
        return this.f.remove(str);
    }

    @Override // com.bykv.vk.openvk.AdConfig
    @Deprecated
    public void setExtra(String str, Object obj) {
        this.f.put(str, obj);
    }

    @Override // com.bykv.vk.openvk.AdConfig
    public AdConfig.SdkInfo getSdkInfo() {
        return new AdConfig.SdkInfo() { // from class: com.bykv.vk.openvk.TTVfConfig.1
            @Override // com.bykv.vk.openvk.AdConfig.SdkInfo
            public boolean isPlugin() {
                return true;
            }

            @Override // com.bykv.vk.openvk.AdConfig.SdkInfo
            public String pluginName() {
                return "com.bykv.vk";
            }

            @Override // com.bykv.vk.openvk.AdConfig.SdkInfo
            public int sdkVersionCode() {
                return 5114;
            }

            @Override // com.bykv.vk.openvk.AdConfig.SdkInfo
            public String sdkVersionName() {
                return "5.1.1.4";
            }
        };
    }

    public void setCustomController(TTCustomController tTCustomController) {
        this.v = tTCustomController;
    }

    public static class Builder {
        private int[] bm;
        private String df;
        private String[] oh;
        private String pp;
        private String pt;
        private ITTLiveTokenInjectionAuth qx;
        private String rg;
        private int un;
        private TTCustomController v;
        private boolean q = false;
        private int c = 0;
        private boolean fw = true;
        private boolean ux = false;
        private boolean rz = false;
        private boolean b = true;
        private boolean hq = false;
        private boolean f = false;
        private int z = 2;
        private int r = 0;

        public Builder injectionAuth(ITTLiveTokenInjectionAuth iTTLiveTokenInjectionAuth) {
            this.qx = iTTLiveTokenInjectionAuth;
            return this;
        }

        public Builder appId(String str) {
            this.rg = str;
            return this;
        }

        public Builder appName(String str) {
            this.df = str;
            return this;
        }

        public Builder paid(boolean z) {
            this.q = z;
            return this;
        }

        public Builder keywords(String str) {
            this.pt = str;
            return this;
        }

        public Builder data(String str) {
            this.pp = str;
            return this;
        }

        public Builder titleBarTheme(int i) {
            this.c = i;
            return this;
        }

        public Builder allowShowNotify(boolean z) {
            this.fw = z;
            return this;
        }

        public Builder debug(boolean z) {
            this.ux = z;
            return this;
        }

        @Deprecated
        public Builder allowShowPageWhenScreenLock(boolean z) {
            this.rz = z;
            return this;
        }

        public Builder directDownloadNetworkType(int... iArr) {
            this.bm = iArr;
            return this;
        }

        public Builder useTextureView(boolean z) {
            this.b = z;
            return this;
        }

        public Builder supportMultiProcess(boolean z) {
            this.hq = z;
            return this;
        }

        public Builder needClearTaskReset(String... strArr) {
            this.oh = strArr;
            return this;
        }

        public Builder asyncInit(boolean z) {
            this.f = z;
            return this;
        }

        public Builder customController(TTCustomController tTCustomController) {
            this.v = tTCustomController;
            return this;
        }

        public Builder themeStatus(int i) {
            this.un = i;
            return this;
        }

        public Builder setPluginUpdateConfig(int i) {
            this.z = i;
            return this;
        }

        public Builder setAgeGroup(int i) {
            this.r = i;
            return this;
        }

        public TTVfConfig build() {
            TTVfConfig tTVfConfig = new TTVfConfig();
            tTVfConfig.setAppId(this.rg);
            tTVfConfig.setAppName(this.df);
            tTVfConfig.setPaid(this.q);
            tTVfConfig.setKeywords(this.pt);
            tTVfConfig.setData(this.pp);
            tTVfConfig.setTitleBarTheme(this.c);
            tTVfConfig.setAllowShowNotify(this.fw);
            tTVfConfig.setDebug(this.ux);
            tTVfConfig.setAllowShowPageWhenScreenLock(this.rz);
            tTVfConfig.setDirectDownloadNetworkType(this.bm);
            tTVfConfig.setUseTextureView(this.b);
            tTVfConfig.setSupportMultiProcess(this.hq);
            tTVfConfig.setNeedClearTaskReset(this.oh);
            tTVfConfig.setAsyncInit(this.f);
            tTVfConfig.setCustomController(this.v);
            tTVfConfig.setThemeStatus(this.un);
            tTVfConfig.setExtra("plugin_update_conf", Integer.valueOf(this.z));
            tTVfConfig.setExtra(TTVfConstant.KEY_AGE_GROUP, Integer.valueOf(this.r));
            tTVfConfig.setInjectionAuth(this.qx);
            return tTVfConfig;
        }
    }
}
