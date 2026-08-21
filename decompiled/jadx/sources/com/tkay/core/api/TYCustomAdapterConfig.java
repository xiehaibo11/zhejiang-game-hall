package com.tkay.core.api;

/* JADX INFO: loaded from: classes3.dex */
public class TYCustomAdapterConfig {
    private long adCacheTime;
    private boolean realTimeBidSwitch;

    private TYCustomAdapterConfig() {
    }

    public boolean isRealTimeBidSwitch() {
        return this.realTimeBidSwitch;
    }

    public long getAdCacheTime() {
        return this.adCacheTime;
    }

    public static class Builder {
        private boolean realTimeBidSwitch = false;
        private long adCacheTime = 1800000;

        public Builder realTimeBidSwitch(boolean z) {
            this.realTimeBidSwitch = z;
            return this;
        }

        public Builder adCacheTime(long j) {
            this.adCacheTime = j;
            return this;
        }

        public TYCustomAdapterConfig build() {
            TYCustomAdapterConfig tYCustomAdapterConfig = new TYCustomAdapterConfig();
            tYCustomAdapterConfig.realTimeBidSwitch = this.realTimeBidSwitch;
            tYCustomAdapterConfig.adCacheTime = this.adCacheTime;
            return tYCustomAdapterConfig;
        }
    }
}
