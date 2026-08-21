package com.kwad.sdk.api;

@com.kwad.sdk.api.core.KsAdSdkApi
public class SdkConfig {
    public static final java.lang.String DEF_NIGHT_THEME_STYLE_FILE_NAME = "ks_adsdk_night_styles.xml";

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static final int SCREEN_ORIENTATION_LANDSCAPE = 2;

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static final int SCREEN_ORIENTATION_PORTRAIT = 1;

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static final int SCREEN_ORIENTATION_UNKNOWN = 0;

    @com.kwad.sdk.api.core.KsAdSdkApi
    public java.lang.String appId;

    @com.kwad.sdk.api.core.KsAdSdkApi
    public java.lang.String appKey;

    @com.kwad.sdk.api.core.KsAdSdkApi
    public java.lang.String appName;

    @com.kwad.sdk.api.core.KsAdSdkApi
    public java.lang.String appWebKey;

    @com.kwad.sdk.api.core.KsAdSdkApi
    private boolean canReadICCID;

    @com.kwad.sdk.api.core.KsAdSdkApi
    private boolean canReadMacAddress;

    @com.kwad.sdk.api.core.KsAdSdkApi
    private boolean canReadNearbyWifiList;

    @com.kwad.sdk.api.core.KsAdSdkApi
    public boolean enableDebug;

    @com.kwad.sdk.api.core.KsAdSdkApi
    public com.kwad.sdk.api.KsCustomController ksCustomController;
    public com.kwad.sdk.api.KsInitCallback ksInitCallback;

    @com.kwad.sdk.api.core.KsAdSdkApi
    public java.lang.String nightThemeStyleAssetsFileName;

    @com.kwad.sdk.api.core.KsAdSdkApi
    public boolean showNotification;

    static class 1 {
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public static class Builder {
        private java.lang.String appId;
        private java.lang.String appKey;
        private java.lang.String appName;
        private java.lang.String appWebKey;
        private boolean canReadICCID;
        private boolean canReadMacAddress;
        private boolean canReadNearbyWifiList;
        private boolean enableDebug;
        private com.kwad.sdk.api.KsCustomController ksCustomController;
        private com.kwad.sdk.api.KsInitCallback ksInitCallback;
        private java.lang.String nightThemeStyleAssetsFileName;
        private boolean showNotification;

        @com.kwad.sdk.api.core.KsAdSdkApi
        public Builder() {
                r1 = this;
                r1.<init>()
                r0 = 1
                r1.showNotification = r0
                r1.canReadMacAddress = r0
                r1.canReadNearbyWifiList = r0
                r1.canReadICCID = r0
                java.lang.String r0 = "ks_adsdk_night_styles.xml"
                r1.nightThemeStyleAssetsFileName = r0
                return
        }

        static boolean access$000(com.kwad.sdk.api.SdkConfig.Builder r0) {
                boolean r0 = r0.enableDebug
                return r0
        }

        static boolean access$002(com.kwad.sdk.api.SdkConfig.Builder r0, boolean r1) {
                r0.enableDebug = r1
                return r1
        }

        static java.lang.String access$100(com.kwad.sdk.api.SdkConfig.Builder r0) {
                java.lang.String r0 = r0.appId
                return r0
        }

        static com.kwad.sdk.api.KsCustomController access$1000(com.kwad.sdk.api.SdkConfig.Builder r0) {
                com.kwad.sdk.api.KsCustomController r0 = r0.ksCustomController
                return r0
        }

        static java.lang.String access$102(com.kwad.sdk.api.SdkConfig.Builder r0, java.lang.String r1) {
                r0.appId = r1
                return r1
        }

        static com.kwad.sdk.api.KsInitCallback access$1100(com.kwad.sdk.api.SdkConfig.Builder r0) {
                com.kwad.sdk.api.KsInitCallback r0 = r0.ksInitCallback
                return r0
        }

        static java.lang.String access$200(com.kwad.sdk.api.SdkConfig.Builder r0) {
                java.lang.String r0 = r0.appName
                return r0
        }

        static java.lang.String access$202(com.kwad.sdk.api.SdkConfig.Builder r0, java.lang.String r1) {
                r0.appName = r1
                return r1
        }

        static java.lang.String access$300(com.kwad.sdk.api.SdkConfig.Builder r0) {
                java.lang.String r0 = r0.appKey
                return r0
        }

        static java.lang.String access$302(com.kwad.sdk.api.SdkConfig.Builder r0, java.lang.String r1) {
                r0.appKey = r1
                return r1
        }

        static java.lang.String access$400(com.kwad.sdk.api.SdkConfig.Builder r0) {
                java.lang.String r0 = r0.appWebKey
                return r0
        }

        static java.lang.String access$402(com.kwad.sdk.api.SdkConfig.Builder r0, java.lang.String r1) {
                r0.appWebKey = r1
                return r1
        }

        static boolean access$500(com.kwad.sdk.api.SdkConfig.Builder r0) {
                boolean r0 = r0.showNotification
                return r0
        }

        static boolean access$502(com.kwad.sdk.api.SdkConfig.Builder r0, boolean r1) {
                r0.showNotification = r1
                return r1
        }

        static boolean access$600(com.kwad.sdk.api.SdkConfig.Builder r0) {
                boolean r0 = r0.canReadMacAddress
                return r0
        }

        static boolean access$602(com.kwad.sdk.api.SdkConfig.Builder r0, boolean r1) {
                r0.canReadMacAddress = r1
                return r1
        }

        static boolean access$700(com.kwad.sdk.api.SdkConfig.Builder r0) {
                boolean r0 = r0.canReadNearbyWifiList
                return r0
        }

        static boolean access$702(com.kwad.sdk.api.SdkConfig.Builder r0, boolean r1) {
                r0.canReadNearbyWifiList = r1
                return r1
        }

        static boolean access$800(com.kwad.sdk.api.SdkConfig.Builder r0) {
                boolean r0 = r0.canReadICCID
                return r0
        }

        static boolean access$802(com.kwad.sdk.api.SdkConfig.Builder r0, boolean r1) {
                r0.canReadICCID = r1
                return r1
        }

        static java.lang.String access$900(com.kwad.sdk.api.SdkConfig.Builder r0) {
                java.lang.String r0 = r0.nightThemeStyleAssetsFileName
                return r0
        }

        static java.lang.String access$902(com.kwad.sdk.api.SdkConfig.Builder r0, java.lang.String r1) {
                r0.nightThemeStyleAssetsFileName = r1
                return r1
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.SdkConfig.Builder appId(java.lang.String r1) {
                r0 = this;
                r0.appId = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.SdkConfig.Builder appKey(java.lang.String r1) {
                r0 = this;
                r0.appKey = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.SdkConfig.Builder appName(java.lang.String r1) {
                r0 = this;
                r0.appName = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.SdkConfig.Builder appWebKey(java.lang.String r1) {
                r0 = this;
                r0.appWebKey = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.SdkConfig build() {
                r2 = this;
                com.kwad.sdk.api.SdkConfig r0 = new com.kwad.sdk.api.SdkConfig
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        @java.lang.Deprecated
        public com.kwad.sdk.api.SdkConfig.Builder canReadICCID(boolean r1) {
                r0 = this;
                r0.canReadICCID = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        @java.lang.Deprecated
        public com.kwad.sdk.api.SdkConfig.Builder canReadMacAddress(boolean r1) {
                r0 = this;
                r0.canReadMacAddress = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.SdkConfig.Builder canReadNearbyWifiList(boolean r1) {
                r0 = this;
                r0.canReadNearbyWifiList = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.SdkConfig.Builder customController(com.kwad.sdk.api.KsCustomController r1) {
                r0 = this;
                r0.ksCustomController = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.SdkConfig.Builder debug(boolean r1) {
                r0 = this;
                r0.enableDebug = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.SdkConfig.Builder nightThemeStyleAssetsFileName(java.lang.String r1) {
                r0 = this;
                r0.nightThemeStyleAssetsFileName = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.SdkConfig.Builder setInitCallback(com.kwad.sdk.api.KsInitCallback r1) {
                r0 = this;
                r0.ksInitCallback = r1
                return r0
        }

        @com.kwad.sdk.api.core.KsAdSdkApi
        public com.kwad.sdk.api.SdkConfig.Builder showNotification(boolean r1) {
                r0 = this;
                r0.showNotification = r1
                return r0
        }
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    private SdkConfig(com.kwad.sdk.api.SdkConfig.Builder r2) {
            r1 = this;
            r1.<init>()
            boolean r0 = com.kwad.sdk.api.SdkConfig.Builder.access$000(r2)
            r1.enableDebug = r0
            java.lang.String r0 = com.kwad.sdk.api.SdkConfig.Builder.access$100(r2)
            r1.appId = r0
            java.lang.String r0 = com.kwad.sdk.api.SdkConfig.Builder.access$200(r2)
            r1.appName = r0
            java.lang.String r0 = com.kwad.sdk.api.SdkConfig.Builder.access$300(r2)
            r1.appKey = r0
            java.lang.String r0 = com.kwad.sdk.api.SdkConfig.Builder.access$400(r2)
            r1.appWebKey = r0
            boolean r0 = com.kwad.sdk.api.SdkConfig.Builder.access$500(r2)
            r1.showNotification = r0
            boolean r0 = com.kwad.sdk.api.SdkConfig.Builder.access$600(r2)
            r1.canReadMacAddress = r0
            boolean r0 = com.kwad.sdk.api.SdkConfig.Builder.access$700(r2)
            r1.canReadNearbyWifiList = r0
            boolean r0 = com.kwad.sdk.api.SdkConfig.Builder.access$800(r2)
            r1.canReadICCID = r0
            java.lang.String r0 = com.kwad.sdk.api.SdkConfig.Builder.access$900(r2)
            r1.nightThemeStyleAssetsFileName = r0
            com.kwad.sdk.api.KsCustomController r0 = com.kwad.sdk.api.SdkConfig.Builder.access$1000(r2)
            r1.ksCustomController = r0
            com.kwad.sdk.api.KsInitCallback r2 = com.kwad.sdk.api.SdkConfig.Builder.access$1100(r2)
            r1.ksInitCallback = r2
            return
    }

    SdkConfig(com.kwad.sdk.api.SdkConfig.Builder r1, com.kwad.sdk.api.SdkConfig.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.kwad.sdk.api.SdkConfig create(java.lang.String r2) {
            com.kwad.sdk.api.SdkConfig$Builder r0 = new com.kwad.sdk.api.SdkConfig$Builder
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L65
            r1.<init>(r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = "enableDebug"
            boolean r2 = r1.optBoolean(r2)     // Catch: org.json.JSONException -> L65
            com.kwad.sdk.api.SdkConfig.Builder.access$002(r0, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = "appId"
            java.lang.String r2 = r1.optString(r2)     // Catch: org.json.JSONException -> L65
            com.kwad.sdk.api.SdkConfig.Builder.access$102(r0, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = "appName"
            java.lang.String r2 = r1.optString(r2)     // Catch: org.json.JSONException -> L65
            com.kwad.sdk.api.SdkConfig.Builder.access$202(r0, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = "appKey"
            java.lang.String r2 = r1.optString(r2)     // Catch: org.json.JSONException -> L65
            com.kwad.sdk.api.SdkConfig.Builder.access$302(r0, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = "appWebKey"
            java.lang.String r2 = r1.optString(r2)     // Catch: org.json.JSONException -> L65
            com.kwad.sdk.api.SdkConfig.Builder.access$402(r0, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = "showNotification"
            boolean r2 = r1.optBoolean(r2)     // Catch: org.json.JSONException -> L65
            com.kwad.sdk.api.SdkConfig.Builder.access$502(r0, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = "canReadMacAddress"
            boolean r2 = r1.optBoolean(r2)     // Catch: org.json.JSONException -> L65
            com.kwad.sdk.api.SdkConfig.Builder.access$602(r0, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = "canReadNearbyWifiList"
            boolean r2 = r1.optBoolean(r2)     // Catch: org.json.JSONException -> L65
            com.kwad.sdk.api.SdkConfig.Builder.access$702(r0, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = "canReadICCID"
            boolean r2 = r1.optBoolean(r2)     // Catch: org.json.JSONException -> L65
            com.kwad.sdk.api.SdkConfig.Builder.access$802(r0, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = "nightThemeStyleAssetsFileName"
            java.lang.String r2 = r1.optString(r2)     // Catch: org.json.JSONException -> L65
            com.kwad.sdk.api.SdkConfig.Builder.access$902(r0, r2)     // Catch: org.json.JSONException -> L65
            goto L69
        L65:
            r2 = move-exception
            r2.printStackTrace()
        L69:
            com.kwad.sdk.api.SdkConfig r2 = r0.build()
            return r2
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public boolean canReadICCID() {
            r1 = this;
            boolean r0 = r1.canReadICCID
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public boolean canReadMacAddress() {
            r1 = this;
            boolean r0 = r1.canReadMacAddress
            return r0
    }

    @com.kwad.sdk.api.core.KsAdSdkApi
    public boolean canReadNearbyWifiList() {
            r1 = this;
            boolean r0 = r1.canReadNearbyWifiList
            return r0
    }

    public java.lang.String toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "enableDebug"
            boolean r2 = r3.enableDebug     // Catch: org.json.JSONException -> L4c
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L4c
            java.lang.String r1 = "appId"
            java.lang.String r2 = r3.appId     // Catch: org.json.JSONException -> L4c
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L4c
            java.lang.String r1 = "appName"
            java.lang.String r2 = r3.appName     // Catch: org.json.JSONException -> L4c
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L4c
            java.lang.String r1 = "appKey"
            java.lang.String r2 = r3.appKey     // Catch: org.json.JSONException -> L4c
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L4c
            java.lang.String r1 = "appWebKey"
            java.lang.String r2 = r3.appWebKey     // Catch: org.json.JSONException -> L4c
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L4c
            java.lang.String r1 = "showNotification"
            boolean r2 = r3.showNotification     // Catch: org.json.JSONException -> L4c
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L4c
            java.lang.String r1 = "canReadMacAddress"
            boolean r2 = r3.canReadMacAddress     // Catch: org.json.JSONException -> L4c
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L4c
            java.lang.String r1 = "canReadNearbyWifiList"
            boolean r2 = r3.canReadNearbyWifiList     // Catch: org.json.JSONException -> L4c
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L4c
            java.lang.String r1 = "canReadICCID"
            boolean r2 = r3.canReadICCID     // Catch: org.json.JSONException -> L4c
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L4c
            java.lang.String r1 = "nightThemeStyleAssetsFileName"
            java.lang.String r2 = r3.nightThemeStyleAssetsFileName     // Catch: org.json.JSONException -> L4c
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L4c
            goto L50
        L4c:
            r1 = move-exception
            r1.printStackTrace()
        L50:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
