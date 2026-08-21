package com.kwad.sdk.core.response.model;

public class SdkConfigData extends com.kwad.sdk.core.network.BaseResultData implements com.kwad.sdk.core.b, java.io.Serializable {
    public static final int DEFAULT_CAN_USE_THRESHOLD = 300;
    public static final int DEFAULT_GOOD_IDC_THRESHOLD = 200;
    public static final int DEFAULT_REQUEST_INTERVAL = 3600;
    private static final long serialVersionUID = -7796837168148055391L;
    private org.json.JSONObject abConfig;
    private org.json.JSONObject adxConfig;
    private org.json.JSONObject appConfig;
    public int canUseThresholdMs;
    public com.kwad.sdk.core.response.model.SdkConfigData.CouponActiveConfig couponActiveConfig;
    public int goodIdcThresholdMs;
    public java.util.List<com.kwad.sdk.h.a.a> h5PreloadConfigs;
    public com.kwad.sdk.core.response.model.HttpDnsInfo httpDnsInfo;
    private org.json.JSONObject mDataJsonObj;
    public long requestInterval;
    public com.kwad.sdk.core.response.model.TemplateConfig templateConfig;
    public com.kwad.sdk.core.response.model.SdkConfigData.TemplateConfigMap templateConfigMap;


    public static class CouponActiveConfig extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = 6375241669684789095L;
        public com.kwad.sdk.contentalliance.coupon.model.ActivityInfo activityInfo;
        public java.lang.String bottomTitle;
        public com.kwad.sdk.core.response.model.TemplateConfig couponInfoConfig;
        public com.kwad.sdk.core.response.model.TemplateConfig couponOpenConfig;
        public int popUpShowTimeSeconds;
        public java.lang.String secondTitle;
        public java.lang.String title;
        public int videoSeconds;
        public int videoThreshold;

        public CouponActiveConfig() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "抽红包兑奖"
                r1.title = r0
                java.lang.String r0 = "累计到100元可兑换京东卡"
                r1.secondTitle = r0
                java.lang.String r0 = "刷满5个视频抽红包，每个视频观看>5秒"
                r1.bottomTitle = r0
                return
        }
    }

    public static class TemplateConfigMap extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b, java.io.Serializable {
        private static final long serialVersionUID = -6512236636350788192L;
        public com.kwad.sdk.core.response.model.TemplateConfig couponInfoConfig;
        public com.kwad.sdk.core.response.model.TemplateConfig couponOpenConfig;

        public TemplateConfigMap() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public SdkConfigData() {
            r2 = this;
            r2.<init>()
            r0 = 3600(0xe10, double:1.7786E-320)
            r2.requestInterval = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.h5PreloadConfigs = r0
            com.kwad.sdk.core.response.model.TemplateConfig r0 = new com.kwad.sdk.core.response.model.TemplateConfig
            r0.<init>()
            r2.templateConfig = r0
            com.kwad.sdk.core.response.model.SdkConfigData$TemplateConfigMap r0 = new com.kwad.sdk.core.response.model.SdkConfigData$TemplateConfigMap
            r0.<init>()
            r2.templateConfigMap = r0
            com.kwad.sdk.core.response.model.SdkConfigData$CouponActiveConfig r0 = new com.kwad.sdk.core.response.model.SdkConfigData$CouponActiveConfig
            r0.<init>()
            r2.couponActiveConfig = r0
            com.kwad.sdk.core.response.model.HttpDnsInfo r0 = new com.kwad.sdk.core.response.model.HttpDnsInfo
            r0.<init>()
            r2.httpDnsInfo = r0
            r0 = 200(0xc8, float:2.8E-43)
            r2.goodIdcThresholdMs = r0
            r0 = 300(0x12c, float:4.2E-43)
            r2.canUseThresholdMs = r0
            return
    }

    public <T> T getAppConfigData(T r2, com.kwad.sdk.g.b<org.json.JSONObject, T> r3) {
            r1 = this;
            org.json.JSONObject r0 = r1.appConfig
            if (r0 == 0) goto L8
            java.lang.Object r2 = r3.apply(r0)
        L8:
            return r2
    }

    @Override
    public boolean isDataEmpty() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r3) {
            r2 = this;
            super.parseJson(r3)
            if (r3 != 0) goto L6
            return
        L6:
            java.lang.String r0 = "data"
            java.lang.String r3 = r3.optString(r0)     // Catch: java.lang.Exception -> Lad
            java.lang.String r3 = com.kwad.sdk.core.a.d.getResponseData(r3)     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lad
            r0.<init>(r3)     // Catch: java.lang.Exception -> Lad
            r2.mDataJsonObj = r0     // Catch: java.lang.Exception -> Lad
            java.lang.String r3 = "requestInterval"
            long r0 = r0.optLong(r3)     // Catch: java.lang.Exception -> Lad
            r2.requestInterval = r0     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r3 = r2.mDataJsonObj     // Catch: java.lang.Exception -> Lad
            java.lang.String r0 = "goodIdcThresholdMs"
            r1 = 200(0xc8, float:2.8E-43)
            int r3 = r3.optInt(r0, r1)     // Catch: java.lang.Exception -> Lad
            r2.goodIdcThresholdMs = r3     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r3 = r2.mDataJsonObj     // Catch: java.lang.Exception -> Lad
            java.lang.String r0 = "canUseThresholdMs"
            r1 = 300(0x12c, float:4.2E-43)
            int r3 = r3.optInt(r0, r1)     // Catch: java.lang.Exception -> Lad
            r2.canUseThresholdMs = r3     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r3 = r2.mDataJsonObj     // Catch: java.lang.Exception -> Lad
            com.kwad.sdk.core.config.b.f(r3)     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r3 = r2.mDataJsonObj     // Catch: java.lang.Exception -> Lad
            java.lang.String r0 = "abConfig"
            org.json.JSONObject r3 = r3.optJSONObject(r0)     // Catch: java.lang.Exception -> Lad
            r2.abConfig = r3     // Catch: java.lang.Exception -> Lad
            com.kwad.sdk.core.config.b.f(r3)     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r3 = r2.mDataJsonObj     // Catch: java.lang.Exception -> Lad
            java.lang.String r0 = "adxConfig"
            org.json.JSONObject r3 = r3.optJSONObject(r0)     // Catch: java.lang.Exception -> Lad
            r2.adxConfig = r3     // Catch: java.lang.Exception -> Lad
            com.kwad.sdk.core.config.b.f(r3)     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r3 = r2.mDataJsonObj     // Catch: java.lang.Exception -> Lad
            java.lang.String r0 = "appConfig"
            org.json.JSONObject r3 = r3.optJSONObject(r0)     // Catch: java.lang.Exception -> Lad
            r2.appConfig = r3     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r3 = r2.mDataJsonObj     // Catch: java.lang.Exception -> Lad
            java.lang.String r0 = "h5PreloadConfigs"
            java.lang.String r3 = r3.optString(r0)     // Catch: java.lang.Exception -> Lad
            com.kwad.sdk.core.response.model.SdkConfigData$1 r0 = new com.kwad.sdk.core.response.model.SdkConfigData$1     // Catch: java.lang.Exception -> Lad
            r0.<init>(r2)     // Catch: java.lang.Exception -> Lad
            java.util.List r3 = com.kwad.sdk.utils.t.a(r3, r0)     // Catch: java.lang.Exception -> Lad
            r2.h5PreloadConfigs = r3     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r3 = r2.appConfig     // Catch: java.lang.Exception -> Lad
            com.kwad.sdk.core.config.b.f(r3)     // Catch: java.lang.Exception -> Lad
            com.kwad.sdk.core.response.model.TemplateConfig r3 = r2.templateConfig     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r0 = r2.mDataJsonObj     // Catch: java.lang.Exception -> Lad
            java.lang.String r1 = "templateConfig"
            org.json.JSONObject r0 = r0.optJSONObject(r1)     // Catch: java.lang.Exception -> Lad
            r3.parseJson(r0)     // Catch: java.lang.Exception -> Lad
            com.kwad.sdk.core.response.model.SdkConfigData$TemplateConfigMap r3 = r2.templateConfigMap     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r0 = r2.mDataJsonObj     // Catch: java.lang.Exception -> Lad
            java.lang.String r1 = "templateConfigMap"
            org.json.JSONObject r0 = r0.optJSONObject(r1)     // Catch: java.lang.Exception -> Lad
            r3.parseJson(r0)     // Catch: java.lang.Exception -> Lad
            com.kwad.sdk.core.response.model.SdkConfigData$CouponActiveConfig r3 = r2.couponActiveConfig     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r0 = r2.mDataJsonObj     // Catch: java.lang.Exception -> Lad
            java.lang.String r1 = "couponActiveConfig"
            org.json.JSONObject r0 = r0.optJSONObject(r1)     // Catch: java.lang.Exception -> Lad
            r3.parseJson(r0)     // Catch: java.lang.Exception -> Lad
            com.kwad.sdk.core.response.model.HttpDnsInfo r3 = r2.httpDnsInfo     // Catch: java.lang.Exception -> Lad
            org.json.JSONObject r0 = r2.mDataJsonObj     // Catch: java.lang.Exception -> Lad
            java.lang.String r1 = "httpDnsInfo"
            org.json.JSONObject r0 = r0.optJSONObject(r1)     // Catch: java.lang.Exception -> Lad
            r3.parseJson(r0)     // Catch: java.lang.Exception -> Lad
            return
        Lad:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r1 = this;
            org.json.JSONObject r0 = r1.mDataJsonObj
            if (r0 != 0) goto L9
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
        L9:
            return r0
    }
}
