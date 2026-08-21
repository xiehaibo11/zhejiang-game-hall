package com.kwad.sdk.core.report;

public class AdTrackLog extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    public static final int NEGATIVE_RESULT = 2;
    public static final int POSITIVE_RESULT = 1;
    private static int sLiveSupportMode = 2;
    private static final long serialVersionUID = 6629369763953107007L;
    public int adLiveComponentReady;
    public int adLiveSwitch;
    public int adTkLiveSwitch;
    public java.lang.String apiSdkVersion;
    public int isPlugin;
    public int preLandingPageShowType;
    public int preLandingPageSwitch;
    public int rewardAdvanceSwitch;
    public int rewardDetailCallPositionY;
    public int rewardDetailStatusBarHeight;
    public java.lang.String sceneId;
    public int screenOrientation;
    public int serverCheckSwitch;
    public java.lang.String templateId;

    static {
            return
    }

    private AdTrackLog() {
            r0 = this;
            r0.<init>()
            return
    }

    public AdTrackLog(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.templateId = r1
            r0.sceneId = r2
            return
    }

    public static com.kwad.sdk.core.report.AdTrackLog createFromJson(java.lang.String r2) {
            com.kwad.sdk.core.report.AdTrackLog r0 = new com.kwad.sdk.core.report.AdTrackLog     // Catch: java.lang.Exception -> Le
            r0.<init>()     // Catch: java.lang.Exception -> Le
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Le
            r1.<init>(r2)     // Catch: java.lang.Exception -> Le
            r0.parseJson(r1)     // Catch: java.lang.Exception -> Le
            return r0
        Le:
            r2 = 0
            return r2
    }

    private int toReportInt(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r1 = 1
            return r1
        L4:
            r1 = 2
            return r1
    }

    public void bindABParams(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            boolean r0 = r0.hasLiveCompoReady()
            int r0 = r2.toReportInt(r0)
            r2.adLiveComponentReady = r0
            boolean r0 = com.kwad.sdk.core.response.b.a.cw(r3)
            int r0 = r2.toReportInt(r0)
            r2.adLiveSwitch = r0
            java.lang.String r0 = com.kwad.sdk.core.response.b.b.dE(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            int r0 = r2.toReportInt(r0)
            r2.adTkLiveSwitch = r0
            int r0 = com.kwad.sdk.core.report.AdTrackLog.sLiveSupportMode
            r1 = 2
            if (r0 != r1) goto L47
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            boolean r0 = r0.hasLiveCompoReady()
            if (r0 == 0) goto L47
            r0 = 1
            com.kwad.sdk.core.report.AdTrackLog.sLiveSupportMode = r0
        L47:
            int r0 = com.kwad.sdk.core.report.AdTrackLog.sLiveSupportMode
            r2.adLiveComponentReady = r0
            boolean r0 = com.kwad.sdk.core.response.b.a.cI(r3)
            int r0 = r2.toReportInt(r0)
            r2.serverCheckSwitch = r0
            boolean r0 = com.kwad.sdk.core.response.b.a.cJ(r3)
            int r0 = r2.toReportInt(r0)
            r2.rewardAdvanceSwitch = r0
            boolean r0 = com.kwad.sdk.core.response.b.b.dC(r3)
            int r0 = r2.toReportInt(r0)
            r2.preLandingPageSwitch = r0
            int r3 = com.kwad.sdk.core.response.b.b.dD(r3)
            r2.preLandingPageShowType = r3
            java.lang.Class<com.kwad.sdk.service.a.e> r3 = com.kwad.sdk.service.a.e.class
            java.lang.Object r3 = com.kwad.sdk.service.ServiceProvider.get(r3)
            com.kwad.sdk.service.a.e r3 = (com.kwad.sdk.service.a.e) r3
            java.lang.String r3 = r3.getApiVersion()
            r2.apiSdkVersion = r3
            java.lang.Class<com.kwad.sdk.service.a.e> r3 = com.kwad.sdk.service.a.e.class
            java.lang.Object r3 = com.kwad.sdk.service.ServiceProvider.get(r3)
            com.kwad.sdk.service.a.e r3 = (com.kwad.sdk.service.a.e) r3
            boolean r3 = r3.getIsExternal()
            int r3 = r2.toReportInt(r3)
            r2.isPlugin = r3
            boolean r3 = com.kwad.sdk.utils.ai.IO()
            int r3 = r2.toReportInt(r3)
            r2.screenOrientation = r3
            return
    }
}
