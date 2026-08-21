package com.tkay.core.api;

public class TYNetworkConfig {
    java.util.List<com.tkay.core.api.TYInitConfig> mTYInitConfigList;

    public static class Builder {
        java.util.List<com.tkay.core.api.TYInitConfig> mTYInitConfigs;

        public Builder() {
                r0 = this;
                r0.<init>()
                return
        }

        public com.tkay.core.api.TYNetworkConfig build() {
                r2 = this;
                com.tkay.core.api.TYNetworkConfig r0 = new com.tkay.core.api.TYNetworkConfig
                r0.<init>()
                java.util.List<com.tkay.core.api.TYInitConfig> r1 = r2.mTYInitConfigs
                r0.mTYInitConfigList = r1
                return r0
        }

        public com.tkay.core.api.TYNetworkConfig.Builder withInitConfigList(java.util.List<com.tkay.core.api.TYInitConfig> r1) {
                r0 = this;
                r0.mTYInitConfigs = r1
                return r0
        }
    }

    public TYNetworkConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.util.List<com.tkay.core.api.TYInitConfig> getTYInitConfigList() {
            r1 = this;
            java.util.List<com.tkay.core.api.TYInitConfig> r0 = r1.mTYInitConfigList
            return r0
    }
}
