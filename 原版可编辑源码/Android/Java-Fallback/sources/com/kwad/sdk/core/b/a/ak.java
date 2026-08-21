package com.kwad.sdk.core.b.a;

public final class ak implements com.kwad.sdk.core.d<com.kwad.sdk.core.report.AdTrackLog> {
    public ak() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.sdk.core.report.AdTrackLog r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "template_id"
            java.lang.String r0 = r4.optString(r0)
            r3.templateId = r0
            java.lang.String r0 = r3.templateId
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L15
            r3.templateId = r2
        L15:
            java.lang.String r0 = "scene_id"
            java.lang.String r0 = r4.optString(r0)
            r3.sceneId = r0
            java.lang.String r0 = r3.sceneId
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L25
            r3.sceneId = r2
        L25:
            java.lang.String r0 = "pre_landing_page_switch"
            int r0 = r4.optInt(r0)
            r3.preLandingPageSwitch = r0
            java.lang.String r0 = "pre_landing_page_show_type"
            int r0 = r4.optInt(r0)
            r3.preLandingPageShowType = r0
            java.lang.String r0 = "ad_live_switch"
            int r0 = r4.optInt(r0)
            r3.adLiveSwitch = r0
            java.lang.String r0 = "ad_tk_live_switch"
            int r0 = r4.optInt(r0)
            r3.adTkLiveSwitch = r0
            java.lang.String r0 = "ad_live_component_ready"
            int r0 = r4.optInt(r0)
            r3.adLiveComponentReady = r0
            java.lang.String r0 = "server_check_switch"
            int r0 = r4.optInt(r0)
            r3.serverCheckSwitch = r0
            java.lang.String r0 = "reward_advance_switch"
            int r0 = r4.optInt(r0)
            r3.rewardAdvanceSwitch = r0
            java.lang.String r0 = "is_plugin"
            int r0 = r4.optInt(r0)
            r3.isPlugin = r0
            java.lang.String r0 = "api_sdk_version"
            java.lang.String r0 = r4.optString(r0)
            r3.apiSdkVersion = r0
            java.lang.String r0 = r3.apiSdkVersion
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L75
            r3.apiSdkVersion = r2
        L75:
            java.lang.String r0 = "reward_detail_status_bar_height"
            int r0 = r4.optInt(r0)
            r3.rewardDetailStatusBarHeight = r0
            java.lang.String r0 = "reward_detail_call_position_y"
            int r0 = r4.optInt(r0)
            r3.rewardDetailCallPositionY = r0
            java.lang.String r0 = "screen_orientation"
            int r4 = r4.optInt(r0)
            r3.screenOrientation = r4
            return
    }

    private static org.json.JSONObject b(com.kwad.sdk.core.report.AdTrackLog r3, org.json.JSONObject r4) {
            if (r4 != 0) goto L7
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
        L7:
            java.lang.String r0 = r3.templateId
            java.lang.String r1 = ""
            if (r0 == 0) goto L1c
            java.lang.String r0 = r3.templateId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r3.templateId
            java.lang.String r2 = "template_id"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L1c:
            java.lang.String r0 = r3.sceneId
            if (r0 == 0) goto L2f
            java.lang.String r0 = r3.sceneId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2f
            java.lang.String r0 = r3.sceneId
            java.lang.String r2 = "scene_id"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L2f:
            int r0 = r3.preLandingPageSwitch
            if (r0 == 0) goto L3a
            int r0 = r3.preLandingPageSwitch
            java.lang.String r2 = "pre_landing_page_switch"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L3a:
            int r0 = r3.preLandingPageShowType
            if (r0 == 0) goto L45
            int r0 = r3.preLandingPageShowType
            java.lang.String r2 = "pre_landing_page_show_type"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L45:
            int r0 = r3.adLiveSwitch
            if (r0 == 0) goto L50
            int r0 = r3.adLiveSwitch
            java.lang.String r2 = "ad_live_switch"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L50:
            int r0 = r3.adTkLiveSwitch
            if (r0 == 0) goto L5b
            int r0 = r3.adTkLiveSwitch
            java.lang.String r2 = "ad_tk_live_switch"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L5b:
            int r0 = r3.adLiveComponentReady
            if (r0 == 0) goto L66
            int r0 = r3.adLiveComponentReady
            java.lang.String r2 = "ad_live_component_ready"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L66:
            int r0 = r3.serverCheckSwitch
            if (r0 == 0) goto L71
            int r0 = r3.serverCheckSwitch
            java.lang.String r2 = "server_check_switch"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L71:
            int r0 = r3.rewardAdvanceSwitch
            if (r0 == 0) goto L7c
            int r0 = r3.rewardAdvanceSwitch
            java.lang.String r2 = "reward_advance_switch"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L7c:
            int r0 = r3.isPlugin
            if (r0 == 0) goto L87
            int r0 = r3.isPlugin
            java.lang.String r2 = "is_plugin"
            com.kwad.sdk.utils.t.putValue(r4, r2, r0)
        L87:
            java.lang.String r0 = r3.apiSdkVersion
            if (r0 == 0) goto L9a
            java.lang.String r0 = r3.apiSdkVersion
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L9a
            java.lang.String r0 = r3.apiSdkVersion
            java.lang.String r1 = "api_sdk_version"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        L9a:
            int r0 = r3.rewardDetailStatusBarHeight
            if (r0 == 0) goto La5
            int r0 = r3.rewardDetailStatusBarHeight
            java.lang.String r1 = "reward_detail_status_bar_height"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        La5:
            int r0 = r3.rewardDetailCallPositionY
            if (r0 == 0) goto Lb0
            int r0 = r3.rewardDetailCallPositionY
            java.lang.String r1 = "reward_detail_call_position_y"
            com.kwad.sdk.utils.t.putValue(r4, r1, r0)
        Lb0:
            int r0 = r3.screenOrientation
            if (r0 == 0) goto Lbb
            int r3 = r3.screenOrientation
            java.lang.String r0 = "screen_orientation"
            com.kwad.sdk.utils.t.putValue(r4, r0, r3)
        Lbb:
            return r4
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.report.AdTrackLog r1 = (com.kwad.sdk.core.report.AdTrackLog) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.sdk.core.report.AdTrackLog r1 = (com.kwad.sdk.core.report.AdTrackLog) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
