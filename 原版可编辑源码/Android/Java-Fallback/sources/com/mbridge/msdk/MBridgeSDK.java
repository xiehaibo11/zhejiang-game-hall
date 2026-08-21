package com.mbridge.msdk;

public interface MBridgeSDK {

    public enum PLUGIN_LOAD_STATUS extends java.lang.Enum<com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS> {
        private static final com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS[] $VALUES = null;
        public static final com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS COMPLETED = null;
        public static final com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS INCOMPLETED = null;
        public static final com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS INITIAL = null;

        static {
                com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r0 = new com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS
                r1 = 0
                java.lang.String r2 = "INITIAL"
                r0.<init>(r2, r1)
                com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.INITIAL = r0
                com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r0 = new com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS
                r2 = 1
                java.lang.String r3 = "INCOMPLETED"
                r0.<init>(r3, r2)
                com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.INCOMPLETED = r0
                com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r0 = new com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS
                r3 = 2
                java.lang.String r4 = "COMPLETED"
                r0.<init>(r4, r3)
                com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.COMPLETED = r0
                r4 = 3
                com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS[] r4 = new com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS[r4]
                com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r5 = com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.INITIAL
                r4[r1] = r5
                com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r1 = com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.INCOMPLETED
                r4[r2] = r1
                r4[r3] = r0
                com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.$VALUES = r4
                return
        }

        PLUGIN_LOAD_STATUS(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS valueOf(java.lang.String r1) {
                java.lang.Class<com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS> r0 = com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS r1 = (com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS) r1
                return r1
        }

        public static com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS[] values() {
                com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS[] r0 = com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS.$VALUES
                java.lang.Object r0 = r0.clone()
                com.mbridge.msdk.MBridgeSDK$PLUGIN_LOAD_STATUS[] r0 = (com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS[]) r0
                return r0
        }
    }

    boolean getConsentStatus(android.content.Context r1);

    java.util.Map<java.lang.String, java.lang.String> getMBConfigurationMap(java.lang.String r1, java.lang.String r2);

    java.util.Map<java.lang.String, java.lang.String> getMBConfigurationMap(java.lang.String r1, java.lang.String r2, java.lang.String r3);

    com.mbridge.msdk.MBridgeSDK.PLUGIN_LOAD_STATUS getStatus();

    void init(java.util.Map<java.lang.String, java.lang.String> r1, android.app.Application r2);

    void init(java.util.Map<java.lang.String, java.lang.String> r1, android.app.Application r2, com.mbridge.msdk.out.SDKInitStatusListener r3);

    void init(java.util.Map<java.lang.String, java.lang.String> r1, android.content.Context r2);

    void init(java.util.Map<java.lang.String, java.lang.String> r1, android.content.Context r2, com.mbridge.msdk.out.SDKInitStatusListener r3);

    void initAsync(java.util.Map<java.lang.String, java.lang.String> r1, android.app.Application r2);

    void initAsync(java.util.Map<java.lang.String, java.lang.String> r1, android.app.Application r2, com.mbridge.msdk.out.SDKInitStatusListener r3);

    void initAsync(java.util.Map<java.lang.String, java.lang.String> r1, android.content.Context r2);

    void initAsync(java.util.Map<java.lang.String, java.lang.String> r1, android.content.Context r2, com.mbridge.msdk.out.SDKInitStatusListener r3);

    void preload(java.util.Map<java.lang.String, java.lang.Object> r1);

    void preloadFrame(java.util.Map<java.lang.String, java.lang.Object> r1);

    void release();

    void setAllowAcquireIds(boolean r1);

    void setConsentStatus(android.content.Context r1, int r2);

    void setCoppaStatus(android.content.Context r1, boolean r2);

    void setDeveloperIds(com.mbridge.msdk.out.DeveloperTransferIdInfo r1);

    void setDoNotTrackStatus(android.content.Context r1, boolean r2);

    void setDoNotTrackStatus(boolean r1);

    void setThirdPartyFeatures(java.util.Map<java.lang.String, java.lang.Object> r1);

    void setUserPrivateInfoType(android.content.Context r1, java.lang.String r2, int r3);

    void showUserPrivateInfoTips(android.content.Context r1, com.mbridge.msdk.foundation.controller.authoritycontroller.CallBackForDeveloper r2);

    void updateDialogWeakActivity(java.lang.ref.WeakReference<android.app.Activity> r1);

    com.mbridge.msdk.foundation.controller.authoritycontroller.AuthorityInfoBean userPrivateInfo(android.content.Context r1);
}
