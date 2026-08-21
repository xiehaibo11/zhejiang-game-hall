package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public interface KsScene extends java.io.Serializable {

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static class Builder {
        private com.kwad.sdk.api.KsScene scene;

        @com.kwad.sdk.api.core.KsAdSdkApi
        public Builder(long r3) {
                r2 = this;
                r2.<init>()
                com.kwad.sdk.api.loader.Loader r0 = com.kwad.sdk.api.loader.Loader.get()
                java.lang.Class<com.kwad.sdk.api.KsScene> r1 = com.kwad.sdk.api.KsScene.class
                java.lang.Object r0 = r0.newInstance(r1)
                com.kwad.sdk.api.KsScene r0 = (com.kwad.sdk.api.KsScene) r0
                r2.scene = r0
                r0.setPosId(r3)
                return
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder action(int r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setAction(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder adLabel(com.kwad.sdk.api.model.a r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setKsAdLabel(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder adNum(int r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setAdNum(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene build() {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder height(int r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setHeight(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder posId(long r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setPosId(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder promoteId(java.lang.String r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setPromoteId(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder rewardCallbackExtraData(java.util.Map<java.lang.String, java.lang.String> r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setRewardCallbackExtraData(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder screenOrientation(int r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setScreenOrientation(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder setBackUrl(java.lang.String r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setBackUrl(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder setBidResponse(java.lang.String r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setBidResponse(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder setBidResponseV2(java.lang.String r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setBidResponseV2(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder setComment(java.lang.String r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setComment(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder setNativeAdExtraData(com.kwad.sdk.api.model.NativeAdExtraData r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setNativeAdExtraData(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder setSplashExtraData(com.kwad.sdk.api.model.SplashAdExtraData r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setSplashExtraData(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder setUserCommRateBuying(int r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setUserCommRateBuying(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder setUserCommRateSharing(int r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setUserCommRateSharing(r2)
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.KsScene.Builder width(int r2) {
                r1 = this;
                com.kwad.sdk.api.KsScene r0 = r1.scene
                r0.setWidth(r2)
                return r1
        }
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getAction();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getAdNum();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getAdStyle();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getBackUrl();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getBidResponse();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getBidResponseV2();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getComment();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getHeight();

    @com.kwad.sdk.api.core.KsAdSdkApi
    long getPosId();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.lang.String getPromoteId();

    @com.kwad.sdk.api.core.KsAdSdkApi
    java.util.Map<java.lang.String, java.lang.String> getRewardCallbackExtraData();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getScreenOrientation();

    @com.kwad.sdk.api.core.KsAdSdkApi
    long getUserCommRateBuying();

    @com.kwad.sdk.api.core.KsAdSdkApi
    long getUserCommRateSharing();

    @com.kwad.sdk.api.core.KsAdSdkApi
    int getWidth();

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setAction(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setAdNum(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setAdStyle(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setBackUrl(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setBidResponse(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setBidResponseV2(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setComment(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setHeight(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setKsAdLabel(com.kwad.sdk.api.model.IKsAdLabel r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setNativeAdExtraData(com.kwad.sdk.api.model.NativeAdExtraData r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setPosId(long r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setPromoteId(java.lang.String r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setRewardCallbackExtraData(java.util.Map<java.lang.String, java.lang.String> r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setScreenOrientation(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setSplashExtraData(com.kwad.sdk.api.model.SplashAdExtraData r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setUserCommRateBuying(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setUserCommRateSharing(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    void setWidth(int r1);

    @com.kwad.sdk.api.core.KsAdSdkApi
    org.json.JSONObject toJson();
}
