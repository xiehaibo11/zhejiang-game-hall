package com.tkay.core.api;

public class TYCustomAdapterConfig {
    private long adCacheTime;
    private boolean realTimeBidSwitch;

    static class 1 {
    }

    public static class Builder {
        private long adCacheTime;
        private boolean realTimeBidSwitch;

        public Builder() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.realTimeBidSwitch = r0
                r0 = 1800000(0x1b7740, double:8.89318E-318)
                r2.adCacheTime = r0
                return
        }

        public com.tkay.core.api.TYCustomAdapterConfig.Builder adCacheTime(long r1) {
                r0 = this;
                r0.adCacheTime = r1
                return r0
        }

        public com.tkay.core.api.TYCustomAdapterConfig build() {
                r3 = this;
                com.tkay.core.api.TYCustomAdapterConfig r0 = new com.tkay.core.api.TYCustomAdapterConfig
                r1 = 0
                r0.<init>(r1)
                boolean r1 = r3.realTimeBidSwitch
                com.tkay.core.api.TYCustomAdapterConfig.access$102(r0, r1)
                long r1 = r3.adCacheTime
                com.tkay.core.api.TYCustomAdapterConfig.access$202(r0, r1)
                return r0
        }

        public com.tkay.core.api.TYCustomAdapterConfig.Builder realTimeBidSwitch(boolean r1) {
                r0 = this;
                r0.realTimeBidSwitch = r1
                return r0
        }
    }

    private TYCustomAdapterConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    TYCustomAdapterConfig(com.tkay.core.api.TYCustomAdapterConfig.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean access$102(com.tkay.core.api.TYCustomAdapterConfig r0, boolean r1) {
            r0.realTimeBidSwitch = r1
            return r1
    }

    static long access$202(com.tkay.core.api.TYCustomAdapterConfig r0, long r1) {
            r0.adCacheTime = r1
            return r1
    }

    public long getAdCacheTime() {
            r2 = this;
            long r0 = r2.adCacheTime
            return r0
    }

    public boolean isRealTimeBidSwitch() {
            r1 = this;
            boolean r0 = r1.realTimeBidSwitch
            return r0
    }
}
