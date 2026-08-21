package com.tkay.core.api;

public class ATDebuggerConfig {
    private int mBannerType;
    private int mInterstitialType;
    private int mNativeType;
    private int mNetworkFirmId;
    private int mRewarderVideoType;
    private int mSplashType;

    public static class Builder {
        private int mBannerType;
        private int mInterstitialType;
        private int mNativeType;
        private int mNetworkFirmId;
        private int mRewarderVideoType;
        private int mSplashType;

        public Builder(int r1) {
                r0 = this;
                r0.<init>()
                r0.mNetworkFirmId = r1
                r0.fillDefaultType(r1)
                return
        }

        private void fillDefaultType(int r5) {
                r4 = this;
                r0 = 1
                if (r5 == r0) goto L52
                r1 = 2
                if (r5 == r1) goto L4d
                r2 = 6
                if (r5 == r2) goto L4a
                r2 = 8
                if (r5 == r2) goto L47
                r2 = 15
                r3 = 101(0x65, float:1.42E-43)
                if (r5 == r2) goto L41
                r2 = 28
                if (r5 == r2) goto L3e
                r2 = 39
                if (r5 == r2) goto L37
                r2 = 59
                if (r5 == r2) goto L34
                r2 = 66
                if (r5 == r2) goto L4f
                r2 = 22
                if (r5 == r2) goto L2f
                r1 = 23
                if (r5 == r1) goto L2c
                goto L51
            L2c:
                r4.mInterstitialType = r0
                return
            L2f:
                r4.mNativeType = r0
                r4.mInterstitialType = r1
                return
            L34:
                r4.mBannerType = r0
                return
            L37:
                r4.mNativeType = r0
                r4.mInterstitialType = r0
                r4.mSplashType = r0
                return
            L3e:
                r4.mNativeType = r3
                return
            L41:
                r4.mNativeType = r3
                r5 = 3
                r4.mInterstitialType = r5
                return
            L47:
                r4.mNativeType = r0
                goto L4f
            L4a:
                r4.mNativeType = r0
                goto L4f
            L4d:
                r4.mNativeType = r0
            L4f:
                r4.mInterstitialType = r0
            L51:
                return
            L52:
                r4.mNativeType = r0
                return
        }

        public com.tkay.core.api.ATDebuggerConfig build() {
                r2 = this;
                com.tkay.core.api.ATDebuggerConfig r0 = new com.tkay.core.api.ATDebuggerConfig
                r0.<init>()
                int r1 = r2.mNetworkFirmId
                com.tkay.core.api.ATDebuggerConfig.access$002(r0, r1)
                int r1 = r2.mNativeType
                com.tkay.core.api.ATDebuggerConfig.access$102(r0, r1)
                int r1 = r2.mBannerType
                com.tkay.core.api.ATDebuggerConfig.access$202(r0, r1)
                int r1 = r2.mSplashType
                com.tkay.core.api.ATDebuggerConfig.access$302(r0, r1)
                int r1 = r2.mInterstitialType
                com.tkay.core.api.ATDebuggerConfig.access$402(r0, r1)
                int r1 = r2.mRewarderVideoType
                com.tkay.core.api.ATDebuggerConfig.access$502(r0, r1)
                return r0
        }

        public com.tkay.core.api.ATDebuggerConfig.Builder setBannerType(int r1) {
                r0 = this;
                r0.mBannerType = r1
                return r0
        }

        public com.tkay.core.api.ATDebuggerConfig.Builder setInterstitial(int r1) {
                r0 = this;
                r0.mInterstitialType = r1
                return r0
        }

        public com.tkay.core.api.ATDebuggerConfig.Builder setNativeType(int r1) {
                r0 = this;
                r0.mNativeType = r1
                return r0
        }

        public com.tkay.core.api.ATDebuggerConfig.Builder setRewardedVideoType(int r1) {
                r0 = this;
                r0.mRewarderVideoType = r1
                return r0
        }

        public com.tkay.core.api.ATDebuggerConfig.Builder setSplashType(int r1) {
                r0 = this;
                r0.mSplashType = r1
                return r0
        }
    }

    public ATDebuggerConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    static int access$002(com.tkay.core.api.ATDebuggerConfig r0, int r1) {
            r0.mNetworkFirmId = r1
            return r1
    }

    static int access$102(com.tkay.core.api.ATDebuggerConfig r0, int r1) {
            r0.mNativeType = r1
            return r1
    }

    static int access$202(com.tkay.core.api.ATDebuggerConfig r0, int r1) {
            r0.mBannerType = r1
            return r1
    }

    static int access$302(com.tkay.core.api.ATDebuggerConfig r0, int r1) {
            r0.mSplashType = r1
            return r1
    }

    static int access$402(com.tkay.core.api.ATDebuggerConfig r0, int r1) {
            r0.mInterstitialType = r1
            return r1
    }

    static int access$502(com.tkay.core.api.ATDebuggerConfig r0, int r1) {
            r0.mRewarderVideoType = r1
            return r1
    }

    public void fillRequestParam(org.json.JSONObject r4) {
            r3 = this;
            java.lang.String r0 = "is_test"
            r1 = 1
            r4.put(r0, r1)     // Catch: org.json.JSONException -> L41
            java.lang.String r0 = "test_nw_firm"
            int r1 = r3.mNetworkFirmId     // Catch: org.json.JSONException -> L41
            r4.put(r0, r1)     // Catch: org.json.JSONException -> L41
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L41
            r0.<init>()     // Catch: org.json.JSONException -> L41
            java.lang.String r1 = "0"
            int r2 = r3.mNativeType     // Catch: org.json.JSONException -> L41
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L41
            java.lang.String r1 = "2"
            int r2 = r3.mBannerType     // Catch: org.json.JSONException -> L41
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L41
            java.lang.String r1 = "1"
            int r2 = r3.mRewarderVideoType     // Catch: org.json.JSONException -> L41
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L41
            java.lang.String r1 = "3"
            int r2 = r3.mInterstitialType     // Catch: org.json.JSONException -> L41
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L41
            java.lang.String r1 = "4"
            int r2 = r3.mSplashType     // Catch: org.json.JSONException -> L41
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L41
            int r1 = r0.length()     // Catch: org.json.JSONException -> L41
            if (r1 <= 0) goto L40
            java.lang.String r1 = "test_format_sub"
            r4.put(r1, r0)     // Catch: org.json.JSONException -> L41
        L40:
            return
        L41:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    public int getBannerType() {
            r1 = this;
            int r0 = r1.mBannerType
            return r0
    }

    public int getInterstitialType() {
            r1 = this;
            int r0 = r1.mInterstitialType
            return r0
    }

    public int getNativeType() {
            r1 = this;
            int r0 = r1.mNativeType
            return r0
    }

    public int getNetworkFirmId() {
            r1 = this;
            int r0 = r1.mNetworkFirmId
            return r0
    }

    public int getRewarderVideoType() {
            r1 = this;
            int r0 = r1.mRewarderVideoType
            return r0
    }

    public int getSplashType() {
            r1 = this;
            int r0 = r1.mSplashType
            return r0
    }
}
