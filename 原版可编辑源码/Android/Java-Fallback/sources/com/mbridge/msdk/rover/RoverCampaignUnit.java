package com.mbridge.msdk.rover;

public class RoverCampaignUnit implements com.mbridge.msdk.system.NoProGuard, java.io.Serializable {
    public static final java.lang.String JSON_KEY_AD_TYPE = "ad_type";
    public static final java.lang.String JSON_KEY_DATA = "data";
    public static final java.lang.String JSON_KEY_END_SCREEN_URL = "end_screen_url";
    public static final java.lang.String JSON_KEY_FRAME_ADS = "frames";
    public static final java.lang.String JSON_KEY_HTML_URL = "html_url";
    public static final java.lang.String JSON_KEY_ONLY_IMPRESSION_URL = "only_impression_url";
    public static final java.lang.String JSON_KEY_PARENT_SESSION_ID = "parent_session_id";
    public static final java.lang.String JSON_KEY_SESSION_ID = "session_id";
    public static final java.lang.String JSON_KEY_TEMPLATE = "template";
    public static final java.lang.String JSON_KEY_UNIT_SIZE = "unit_size";
    private static final long serialVersionUID = 1;
    private int adType;
    public java.util.ArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> ads;
    private java.lang.String htmlUrl;
    private java.lang.String onlyImpressionUrl;
    private java.lang.String parentSessionId;
    private java.lang.String sessionId;
    private java.lang.String unitSize;

    public RoverCampaignUnit() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long getSerialversionuid() {
            r0 = 1
            return r0
    }

    public static com.mbridge.msdk.rover.RoverCampaignUnit parseCampaignUnit(org.json.JSONObject r11) {
            r0 = 0
            if (r11 == 0) goto L51
            com.mbridge.msdk.rover.RoverCampaignUnit r1 = new com.mbridge.msdk.rover.RoverCampaignUnit     // Catch: java.lang.Exception -> L4a
            r1.<init>()     // Catch: java.lang.Exception -> L4a
            java.lang.String r0 = "data"
            org.json.JSONArray r0 = r11.optJSONArray(r0)     // Catch: java.lang.Exception -> L49
            if (r0 == 0) goto L47
            int r2 = r0.length()     // Catch: java.lang.Exception -> L49
            if (r2 <= 0) goto L47
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L49
            r2.<init>()     // Catch: java.lang.Exception -> L49
            r3 = 0
        L1c:
            int r4 = r0.length()     // Catch: java.lang.Exception -> L49
            if (r3 >= r4) goto L44
            org.json.JSONObject r5 = r0.optJSONObject(r3)     // Catch: java.lang.Exception -> L49
            java.lang.String r4 = "only_impression_url"
            java.lang.String r6 = r11.optString(r4)     // Catch: java.lang.Exception -> L49
            java.lang.String r4 = "html_url"
            java.lang.String r7 = r11.optString(r4)     // Catch: java.lang.Exception -> L49
            java.lang.String r4 = "end_screen_url"
            java.lang.String r8 = r11.optString(r4)     // Catch: java.lang.Exception -> L49
            r9 = 0
            r10 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaign(r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> L49
            r2.add(r4)     // Catch: java.lang.Exception -> L49
            int r3 = r3 + 1
            goto L1c
        L44:
            r1.setAds(r2)     // Catch: java.lang.Exception -> L49
        L47:
            r0 = r1
            goto L51
        L49:
            r0 = r1
        L4a:
            java.lang.String r11 = ""
            java.lang.String r1 = "parse campaign unit exception"
            com.mbridge.msdk.foundation.tools.z.d(r11, r1)
        L51:
            return r0
    }

    public java.util.ArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> getAds() {
            r1 = this;
            java.util.ArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.ads
            return r0
    }

    public java.lang.String getParentSessionId() {
            r1 = this;
            java.lang.String r0 = r1.parentSessionId
            return r0
    }

    public java.lang.String getSessionId() {
            r1 = this;
            java.lang.String r0 = r1.sessionId
            return r0
    }

    public java.lang.String getUnitSize() {
            r1 = this;
            java.lang.String r0 = r1.unitSize
            return r0
    }

    public void setAds(java.util.ArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.ads = r1
            return
    }

    public void setParentSessionId(java.lang.String r1) {
            r0 = this;
            r0.parentSessionId = r1
            return
    }

    public void setSessionId(java.lang.String r1) {
            r0 = this;
            r0.sessionId = r1
            return
    }

    public void setUnitSize(java.lang.String r1) {
            r0 = this;
            r0.unitSize = r1
            return
    }
}
