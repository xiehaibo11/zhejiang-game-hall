package com.tkay.core.api;

import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class TYNetworkConfig {
    List<TYInitConfig> mTYInitConfigList;

    public List<TYInitConfig> getTYInitConfigList() {
        return this.mTYInitConfigList;
    }

    public static class Builder {
        List<TYInitConfig> mTYInitConfigs;

        public Builder withInitConfigList(List<TYInitConfig> list) {
            this.mTYInitConfigs = list;
            return this;
        }

        public TYNetworkConfig build() {
            TYNetworkConfig tYNetworkConfig = new TYNetworkConfig();
            tYNetworkConfig.mTYInitConfigList = this.mTYInitConfigs;
            return tYNetworkConfig;
        }
    }
}
