package com.kwad.components.offline.api.adLive;

public interface IAdLiveOfflineCompo extends com.kwad.components.offline.api.IOfflineCompo {
    public static final java.lang.String IMPL = "com.kwad.sdk.AdLiveOfflineCompoImpl";
    public static final java.lang.String PACKAGE_NAME = "com.kwad.components.adLive";

    public enum AdLiveState extends java.lang.Enum<com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState> {
        private static final com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState[] $VALUES = null;
        public static final com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState READY = null;
        public static final com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState SO_FAIL = null;

        static {
                com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState r0 = new com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState
                r1 = 0
                java.lang.String r2 = "READY"
                r0.<init>(r2, r1)
                com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState.READY = r0
                com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState r0 = new com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState
                r2 = 1
                java.lang.String r3 = "SO_FAIL"
                r0.<init>(r3, r2)
                com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState.SO_FAIL = r0
                r3 = 2
                com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState[] r3 = new com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState[r3]
                com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState r4 = com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState.READY
                r3[r1] = r4
                r3[r2] = r0
                com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState.$VALUES = r3
                return
        }

        AdLiveState(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState> r0 = com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState r1 = (com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState) r1
                return r1
        }

        public static com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState[] values() {
                com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState[] r0 = com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo$AdLiveState[] r0 = (com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState[]) r0
                return r0
        }
    }

    com.kwad.components.offline.api.core.adlive.IAdLiveEndRequest getAdLiveEndRequest(java.lang.String r1);

    com.kwad.components.offline.api.core.adlive.IAdLivePlayModule getAdLivePlayModule(com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView r1, java.lang.String r2, java.lang.String r3);

    com.kwad.components.offline.api.adLive.IAdLiveOfflineCompo.AdLiveState getState();

    com.kwad.components.offline.api.core.adlive.IAdLiveOfflineView getView(android.content.Context r1, int r2);

    void initReal(android.content.Context r1, com.kwad.sdk.api.SdkConfig r2, com.kwad.components.offline.api.adLive.IAdLiveOfflineCompoInitConfig r3, com.kwad.components.offline.api.InitCallBack r4);

    void onConfigRefresh(android.content.Context r1, org.json.JSONObject r2);
}
