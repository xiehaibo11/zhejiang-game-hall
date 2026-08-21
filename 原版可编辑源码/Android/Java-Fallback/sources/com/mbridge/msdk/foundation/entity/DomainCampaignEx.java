package com.mbridge.msdk.foundation.entity;

public class DomainCampaignEx extends com.mbridge.msdk.out.Campaign implements com.mbridge.msdk.system.NoProGuard, java.io.Serializable {
    public static final java.lang.String JSON_KEY_ADV_ID = "adv_id";
    public static final java.lang.String JSON_KEY_AD_TRACKING_APK_END = "apk_download_end";
    public static final java.lang.String JSON_KEY_AD_TRACKING_APK_INSTALL = "apk_install";
    public static final java.lang.String JSON_KEY_AD_TRACKING_APK_START = "apk_download_start";
    public static final java.lang.String JSON_KEY_AKDLUI = "akdlui";
    public static final java.lang.String JSON_KEY_APK_ALT = "apk_alt";
    public static final java.lang.String JSON_KEY_APK_INFO = "apk_info";
    public static final java.lang.String JSON_KEY_ATAT_TYPE = "atat_type";
    public static final java.lang.String JSON_KEY_DISPLAY_APK_ALT = "disableApkAlt";
    public static final java.lang.String JSON_KEY_NTBARPASBL = "ntbarpasbl";
    public static final java.lang.String JSON_KEY_NTBARPT = "ntbarpt";
    public static final java.lang.String JSON_KEY_PRE_CLICK = "ttc";
    public static final java.lang.String JSON_KEY_PRE_CLICK_ERROR_INTERVAL = "ttc_pe";
    public static final java.lang.String JSON_KEY_PRE_CLICK_INTERVAL = "ttc_ct";
    public static final java.lang.String JSON_KEY_PRE_CLICK_OTHER_INTERVAL = "ttc_po";
    public static final java.lang.String JSON_KEY_TTC_CT2 = "ttc_ct2";
    public static final java.lang.String JSON_KEY_TTC_TYPE = "ttc_type";
    public static final java.lang.String KEY_BIND_ID = "bind_id";
    public static final java.lang.String KEY_GH_ID = "gh_id";
    public static final java.lang.String KEY_GH_PATH = "gh_path";
    public static final java.lang.String LOOPBACK = "loopback";
    public static final java.lang.String LOOPBACK_DOMAIN = "domain";
    public static final java.lang.String LOOPBACK_KEY = "key";
    public static final java.lang.String LOOPBACK_VALUE = "value";
    public static final java.lang.String ROVER_KEY_IS_POST = "isPost";
    public static final java.lang.String ROVER_KEY_MARK = "mark";
    public static final java.lang.String TAG = null;
    public static final int TTC_CT2_DEFAULT_VALUE = 1800;
    public static final int TTC_CT_DEFAULT_VALUE = 604800;
    private static final long serialVersionUID = 1;
    private java.lang.String advId;
    private java.lang.String akdlui;
    private int apk_alt;
    private int atatType;
    private java.lang.String bindId;
    private int displayApkAlt;
    private java.lang.String ghId;
    private java.lang.String ghPath;
    private com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult jumpResult;
    private java.util.Map<java.lang.String, java.lang.String> loopbackMap;
    private java.lang.String loopbackString;
    private int ntbarpasbl;
    private int ntbarpt;
    private boolean preClick;
    private int preClickInterval;
    private int roverIsPost;
    private java.lang.String roverMark;
    private int ttc_ct2;
    private int ttc_type;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.entity.DomainCampaignEx> r0 = com.mbridge.msdk.foundation.entity.DomainCampaignEx.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.entity.DomainCampaignEx.TAG = r0
            return
    }

    public DomainCampaignEx() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.apk_alt = r0
            r2.displayApkAlt = r0
            r2.ntbarpt = r0
            r2.ntbarpasbl = r0
            r2.atatType = r0
            java.lang.String r1 = ""
            r2.akdlui = r1
            r2.preClick = r0
            return
    }

    public static org.json.JSONObject campaignToJsonObject(org.json.JSONObject r2, com.mbridge.msdk.foundation.entity.CampaignEx r3) throws org.json.JSONException {
            if (r3 != 0) goto L3
            return r2
        L3:
            boolean r0 = r3.isPreClick()
            java.lang.String r1 = "ttc"
            r2.put(r1, r0)
            int r0 = r3.getPreClickInterval()
            java.lang.String r1 = "ttc_ct"
            r2.put(r1, r0)
            java.lang.String r0 = r3.getAdvId()
            java.lang.String r1 = "adv_id"
            r2.put(r1, r0)
            int r0 = r3.getTtc_type()
            java.lang.String r1 = "ttc_type"
            r2.put(r1, r0)
            int r0 = r3.getTtc_ct2()
            java.lang.String r1 = "ttc_ct2"
            r2.put(r1, r0)
            java.lang.String r0 = r3.getGhId()
            java.lang.String r1 = "gh_id"
            r2.put(r1, r0)
            java.lang.String r0 = r3.getGhPath()
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.t.a(r0)
            java.lang.String r1 = "gh_path"
            r2.put(r1, r0)
            java.lang.String r0 = r3.getBindId()
            java.lang.String r1 = "bind_id"
            r2.put(r1, r0)
            int r0 = r3.getApkAlt()
            java.lang.String r1 = "apk_alt"
            r2.put(r1, r0)
            int r0 = r3.getDisplayApkAlt()
            java.lang.String r1 = "disableApkAlt"
            r2.put(r1, r0)
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r3.getApkDisplayInfo()
            if (r0 == 0) goto L74
            com.mbridge.msdk.out.ApkDisplayInfo r0 = r3.getApkDisplayInfo()
            org.json.JSONObject r0 = r0.toJson()
            java.lang.String r1 = "apk_info"
            r2.put(r1, r0)
        L74:
            java.lang.String r0 = r3.getRoverMark()
            java.lang.String r1 = "mark"
            r2.put(r1, r0)
            int r0 = r3.getRoverIsPost()
            java.lang.String r1 = "isPost"
            r2.put(r1, r0)
            int r0 = r3.getNvT2()
            java.lang.String r1 = "nv_t2"
            r2.put(r1, r0)
            int r0 = r3.getNtbarpasbl()
            java.lang.String r1 = "ntbarpasbl"
            r2.put(r1, r0)
            int r0 = r3.getNtbarpt()
            java.lang.String r1 = "ntbarpt"
            r2.put(r1, r0)
            int r0 = r3.getAtatType()
            java.lang.String r1 = "atat_type"
            r2.put(r1, r0)
            java.lang.String r3 = r3.getAkdlui()
            java.lang.String r0 = "akdlui"
            r2.put(r0, r3)
            return r2
    }

    public static java.util.Map<java.lang.String, java.lang.String> loopbackStrToMap(java.lang.String r5) {
            java.lang.String r0 = "value"
            java.lang.String r1 = "key"
            java.lang.String r2 = "domain"
            r3 = 0
            boolean r4 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L2f
            if (r4 != 0) goto L36
            java.util.HashMap r4 = new java.util.HashMap     // Catch: java.lang.Throwable -> L2f
            r4.<init>()     // Catch: java.lang.Throwable -> L2f
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2e
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r5 = r3.getString(r2)     // Catch: java.lang.Throwable -> L2e
            r4.put(r2, r5)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r5 = r3.getString(r1)     // Catch: java.lang.Throwable -> L2e
            r4.put(r1, r5)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r5 = r3.getString(r0)     // Catch: java.lang.Throwable -> L2e
            r4.put(r0, r5)     // Catch: java.lang.Throwable -> L2e
            r3 = r4
            goto L36
        L2e:
            r3 = r4
        L2f:
            java.lang.String r5 = ""
            java.lang.String r0 = "loopbackStrToMap error"
            com.mbridge.msdk.foundation.tools.z.d(r5, r0)
        L36:
            return r3
    }

    public static com.mbridge.msdk.foundation.entity.CampaignEx parseCampaign(org.json.JSONObject r5, com.mbridge.msdk.foundation.entity.CampaignEx r6) {
            java.lang.String r0 = "cam_html"
            java.lang.String r1 = ""
            java.lang.String r2 = "loopback"
            if (r5 == 0) goto L10c
            if (r6 == 0) goto L10c
            java.lang.String r3 = "ttc"
            boolean r3 = r5.optBoolean(r3)     // Catch: java.lang.Exception -> Led
            r6.setPreClick(r3)     // Catch: java.lang.Exception -> Led
            java.lang.String r3 = "ttc_ct"
            r4 = 604800(0x93a80, float:8.47505E-40)
            int r3 = r5.optInt(r3, r4)     // Catch: java.lang.Exception -> Led
            r6.setPreClickInterval(r3)     // Catch: java.lang.Exception -> Led
            java.lang.String r3 = "adv_id"
            java.lang.String r3 = r5.optString(r3)     // Catch: java.lang.Exception -> Led
            r6.setAdvId(r3)     // Catch: java.lang.Exception -> Led
            java.lang.String r3 = "ttc_type"
            r4 = 3
            int r3 = r5.optInt(r3, r4)     // Catch: java.lang.Exception -> Led
            r6.setTtc_type(r3)     // Catch: java.lang.Exception -> Led
            java.lang.String r3 = "ttc_ct2"
            r4 = 1800(0x708, float:2.522E-42)
            int r3 = r5.optInt(r3, r4)     // Catch: java.lang.Exception -> Led
            r6.setTtc_ct2(r3)     // Catch: java.lang.Exception -> Led
            java.lang.String r3 = "mark"
            java.lang.String r3 = r5.optString(r3)     // Catch: java.lang.Exception -> Led
            r6.setRoverMark(r3)     // Catch: java.lang.Exception -> Led
            java.lang.String r3 = "isPost"
            int r3 = r5.optInt(r3)     // Catch: java.lang.Exception -> Led
            r6.setRoverIsPost(r3)     // Catch: java.lang.Exception -> Led
            boolean r3 = r5.has(r2)     // Catch: java.lang.Exception -> L6a
            if (r3 == 0) goto L6f
            java.lang.String r2 = r5.optString(r2)     // Catch: java.lang.Exception -> L6a
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L6a
            if (r3 != 0) goto L6f
            r6.setLoopbackString(r2)     // Catch: java.lang.Exception -> L6a
            java.util.Map r2 = loopbackStrToMap(r2)     // Catch: java.lang.Exception -> L6a
            r6.setLoopbackMap(r2)     // Catch: java.lang.Exception -> L6a
            goto L6f
        L6a:
            java.lang.String r2 = "loopback parser error"
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Exception -> Led
        L6f:
            java.lang.String r2 = "gh_id"
            java.lang.String r2 = r5.optString(r2)     // Catch: java.lang.Exception -> Led
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Led
            if (r3 != 0) goto L9a
            r6.setGhId(r2)     // Catch: java.lang.Exception -> Led
            java.lang.String r2 = "gh_path"
            java.lang.String r2 = r5.optString(r2)     // Catch: java.lang.Exception -> Led
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Led
            if (r3 != 0) goto L91
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.b(r2)     // Catch: java.lang.Exception -> Led
            r6.setGhPath(r2)     // Catch: java.lang.Exception -> Led
        L91:
            java.lang.String r2 = "bind_id"
            java.lang.String r2 = r5.optString(r2)     // Catch: java.lang.Exception -> Led
            r6.setBindId(r2)     // Catch: java.lang.Exception -> Led
        L9a:
            java.lang.String r2 = r5.optString(r0)     // Catch: java.lang.Exception -> Led
            r6.setBannerHtml(r2)     // Catch: java.lang.Exception -> Led
            java.lang.String r0 = r5.optString(r0)     // Catch: java.lang.Exception -> Led
            r6.setAdHtml(r0)     // Catch: java.lang.Exception -> Led
            java.lang.String r0 = "apk_alt"
            r2 = 0
            int r0 = r5.optInt(r0, r2)     // Catch: java.lang.Exception -> Led
            r6.setApkAlt(r0)     // Catch: java.lang.Exception -> Led
            java.lang.String r0 = "disableApkAlt"
            int r0 = r5.optInt(r0, r2)     // Catch: java.lang.Exception -> Led
            r6.setDisplayApkAlt(r0)     // Catch: java.lang.Exception -> Led
            java.lang.String r0 = "apk_info"
            java.lang.String r0 = r5.optString(r0)     // Catch: java.lang.Exception -> Led
            com.mbridge.msdk.out.ApkDisplayInfo r0 = com.mbridge.msdk.out.ApkDisplayInfo.parseByString(r0)     // Catch: java.lang.Exception -> Led
            r6.setApkDisplayInfo(r0)     // Catch: java.lang.Exception -> Led
            java.lang.String r0 = "ntbarpasbl"
            int r0 = r5.optInt(r0, r2)     // Catch: java.lang.Exception -> Led
            r6.setNtbarpasbl(r0)     // Catch: java.lang.Exception -> Led
            java.lang.String r0 = "ntbarpt"
            int r0 = r5.optInt(r0, r2)     // Catch: java.lang.Exception -> Led
            r6.setNtbarpt(r0)     // Catch: java.lang.Exception -> Led
            java.lang.String r0 = "atat_type"
            int r0 = r5.optInt(r0, r2)     // Catch: java.lang.Exception -> Led
            r6.setAtatType(r0)     // Catch: java.lang.Exception -> Led
            java.lang.String r0 = "akdlui"
            java.lang.String r5 = r5.optString(r0, r1)     // Catch: java.lang.Exception -> Led
            r6.setAkdlui(r5)     // Catch: java.lang.Exception -> Led
            return r6
        Led:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.String r0 = com.mbridge.msdk.foundation.entity.DomainCampaignEx.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "parse campaign json exception: "
            r1.append(r2)
            java.lang.String r5 = r5.getLocalizedMessage()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            return r6
        L10c:
            r5 = 0
            return r5
    }

    public static com.mbridge.msdk.foundation.entity.CampaignEx parseCampaignWithBackData(org.json.JSONObject r4, com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            java.lang.String r0 = ""
            java.lang.String r1 = "loopback"
            if (r4 == 0) goto L115
            if (r5 == 0) goto L115
            java.lang.String r2 = "ttc"
            boolean r2 = r4.optBoolean(r2)     // Catch: java.lang.Exception -> Lf6
            r5.setPreClick(r2)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r2 = "ttc_ct"
            r3 = 604800(0x93a80, float:8.47505E-40)
            int r2 = r4.optInt(r2, r3)     // Catch: java.lang.Exception -> Lf6
            r5.setPreClickInterval(r2)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r2 = "adv_id"
            java.lang.String r2 = r4.optString(r2)     // Catch: java.lang.Exception -> Lf6
            r5.setAdvId(r2)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r2 = "ttc_type"
            r3 = 3
            int r2 = r4.optInt(r2, r3)     // Catch: java.lang.Exception -> Lf6
            r5.setTtc_type(r2)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r2 = "ttc_ct2"
            r3 = 1800(0x708, float:2.522E-42)
            int r2 = r4.optInt(r2, r3)     // Catch: java.lang.Exception -> Lf6
            r5.setTtc_ct2(r2)     // Catch: java.lang.Exception -> Lf6
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Lf6
            r5.setTimestamp(r2)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r2 = "html_url"
            java.lang.String r2 = r4.optString(r2)     // Catch: java.lang.Exception -> Lf6
            r5.setHtmlUrl(r2)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r2 = "end_screen_url"
            java.lang.String r2 = r4.optString(r2)     // Catch: java.lang.Exception -> Lf6
            r5.setEndScreenUrl(r2)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r2 = "mark"
            java.lang.String r2 = r4.optString(r2)     // Catch: java.lang.Exception -> Lf6
            r5.setRoverMark(r2)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r2 = "isPost"
            int r2 = r4.optInt(r2)     // Catch: java.lang.Exception -> Lf6
            r5.setRoverIsPost(r2)     // Catch: java.lang.Exception -> Lf6
            boolean r2 = r4.has(r1)     // Catch: java.lang.Exception -> L81
            if (r2 == 0) goto L86
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> L81
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L81
            if (r2 != 0) goto L86
            r5.setLoopbackString(r1)     // Catch: java.lang.Exception -> L81
            java.util.Map r1 = loopbackStrToMap(r1)     // Catch: java.lang.Exception -> L81
            r5.setLoopbackMap(r1)     // Catch: java.lang.Exception -> L81
            goto L86
        L81:
            java.lang.String r1 = "loopback parser error"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> Lf6
        L86:
            java.lang.String r1 = "gh_id"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> Lf6
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lf6
            if (r2 != 0) goto Lb1
            r5.setGhId(r1)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r1 = "gh_path"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> Lf6
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lf6
            if (r2 != 0) goto La8
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)     // Catch: java.lang.Exception -> Lf6
            r5.setGhPath(r1)     // Catch: java.lang.Exception -> Lf6
        La8:
            java.lang.String r1 = "bind_id"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> Lf6
            r5.setBindId(r1)     // Catch: java.lang.Exception -> Lf6
        Lb1:
            java.lang.String r1 = "apk_alt"
            r2 = 0
            int r1 = r4.optInt(r1, r2)     // Catch: java.lang.Exception -> Lf6
            r5.setApkAlt(r1)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r1 = "disableApkAlt"
            int r1 = r4.optInt(r1, r2)     // Catch: java.lang.Exception -> Lf6
            r5.setDisplayApkAlt(r1)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r1 = "apk_info"
            java.lang.String r1 = r4.optString(r1)     // Catch: java.lang.Exception -> Lf6
            com.mbridge.msdk.out.ApkDisplayInfo r1 = com.mbridge.msdk.out.ApkDisplayInfo.parseByString(r1)     // Catch: java.lang.Exception -> Lf6
            r5.setApkDisplayInfo(r1)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r1 = "ntbarpasbl"
            int r1 = r4.optInt(r1, r2)     // Catch: java.lang.Exception -> Lf6
            r5.setNtbarpasbl(r1)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r1 = "ntbarpt"
            int r1 = r4.optInt(r1, r2)     // Catch: java.lang.Exception -> Lf6
            r5.setNtbarpt(r1)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r1 = "atat_type"
            int r1 = r4.optInt(r1, r2)     // Catch: java.lang.Exception -> Lf6
            r5.setAtatType(r1)     // Catch: java.lang.Exception -> Lf6
            java.lang.String r1 = "akdlui"
            java.lang.String r4 = r4.optString(r1, r0)     // Catch: java.lang.Exception -> Lf6
            r5.setAkdlui(r4)     // Catch: java.lang.Exception -> Lf6
            return r5
        Lf6:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.String r0 = com.mbridge.msdk.foundation.entity.DomainCampaignEx.TAG
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "parse campaign json exception: "
            r1.append(r2)
            java.lang.String r4 = r4.getLocalizedMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
            return r5
        L115:
            r4 = 0
            return r4
    }

    protected static java.lang.String replaceValueByKey(com.mbridge.msdk.foundation.entity.CampaignUnit r6, com.mbridge.msdk.foundation.entity.CampaignEx r7, java.lang.String r8) {
            if (r6 == 0) goto L10b
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L10b
            if (r7 != 0) goto Lc
            goto L10b
        Lc:
            java.util.HashMap r0 = r6.getRks()     // Catch: java.lang.Throwable -> L101
            java.lang.String r1 = "\\}"
            java.lang.String r2 = "\\{"
            if (r0 == 0) goto L54
            java.util.Set r3 = r0.entrySet()     // Catch: java.lang.Throwable -> L101
            r3.iterator()     // Catch: java.lang.Throwable -> L101
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L101
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L101
        L25:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Throwable -> L101
            if (r3 == 0) goto L54
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Throwable -> L101
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Throwable -> L101
            java.lang.Object r4 = r3.getKey()     // Catch: java.lang.Throwable -> L101
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L101
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Throwable -> L101
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L101
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L101
            r5.<init>()     // Catch: java.lang.Throwable -> L101
            r5.append(r2)     // Catch: java.lang.Throwable -> L101
            r5.append(r4)     // Catch: java.lang.Throwable -> L101
            r5.append(r1)     // Catch: java.lang.Throwable -> L101
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L101
            java.lang.String r8 = r8.replaceAll(r4, r3)     // Catch: java.lang.Throwable -> L101
            goto L25
        L54:
            java.util.HashMap r7 = r7.getAks()     // Catch: java.lang.Throwable -> L101
            if (r7 == 0) goto L98
            java.util.Set r0 = r7.entrySet()     // Catch: java.lang.Throwable -> L101
            r0.iterator()     // Catch: java.lang.Throwable -> L101
            java.util.Set r7 = r7.entrySet()     // Catch: java.lang.Throwable -> L101
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L101
        L69:
            boolean r0 = r7.hasNext()     // Catch: java.lang.Throwable -> L101
            if (r0 == 0) goto L98
            java.lang.Object r0 = r7.next()     // Catch: java.lang.Throwable -> L101
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Throwable -> L101
            java.lang.Object r3 = r0.getKey()     // Catch: java.lang.Throwable -> L101
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L101
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Throwable -> L101
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L101
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L101
            r4.<init>()     // Catch: java.lang.Throwable -> L101
            r4.append(r2)     // Catch: java.lang.Throwable -> L101
            r4.append(r3)     // Catch: java.lang.Throwable -> L101
            r4.append(r1)     // Catch: java.lang.Throwable -> L101
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L101
            java.lang.String r8 = r8.replaceAll(r3, r0)     // Catch: java.lang.Throwable -> L101
            goto L69
        L98:
            java.util.HashMap r7 = r6.getEpMap()     // Catch: java.lang.Throwable -> L101
            if (r7 == 0) goto Ld5
            java.util.Set r7 = r7.entrySet()     // Catch: java.lang.Throwable -> L101
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L101
        La6:
            boolean r0 = r7.hasNext()     // Catch: java.lang.Throwable -> L101
            if (r0 == 0) goto Ld5
            java.lang.Object r0 = r7.next()     // Catch: java.lang.Throwable -> L101
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0     // Catch: java.lang.Throwable -> L101
            java.lang.Object r3 = r0.getKey()     // Catch: java.lang.Throwable -> L101
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L101
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Throwable -> L101
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L101
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L101
            r4.<init>()     // Catch: java.lang.Throwable -> L101
            r4.append(r2)     // Catch: java.lang.Throwable -> L101
            r4.append(r3)     // Catch: java.lang.Throwable -> L101
            r4.append(r1)     // Catch: java.lang.Throwable -> L101
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L101
            java.lang.String r8 = r8.replaceAll(r3, r0)     // Catch: java.lang.Throwable -> L101
            goto La6
        Ld5:
            java.lang.String r7 = "\\{c\\}"
            java.lang.String r6 = r6.assembCParams()     // Catch: java.lang.Throwable -> L101
            java.lang.String r0 = "utf-8"
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r0)     // Catch: java.lang.Throwable -> L101
            java.lang.String r8 = r8.replaceAll(r7, r6)     // Catch: java.lang.Throwable -> L101
            java.lang.String r6 = "=\\{.*?\\}"
            java.util.regex.Pattern r6 = java.util.regex.Pattern.compile(r6)     // Catch: java.lang.Throwable -> L101
            java.util.regex.Matcher r6 = r6.matcher(r8)     // Catch: java.lang.Throwable -> L101
        Lef:
            boolean r7 = r6.find()     // Catch: java.lang.Throwable -> L101
            if (r7 == 0) goto L10b
            r7 = 0
            java.lang.String r7 = r6.group(r7)     // Catch: java.lang.Throwable -> L101
            java.lang.String r0 = "="
            java.lang.String r8 = r8.replace(r7, r0)     // Catch: java.lang.Throwable -> L101
            goto Lef
        L101:
            r6 = move-exception
            java.lang.String r7 = com.mbridge.msdk.foundation.entity.DomainCampaignEx.TAG
            java.lang.String r0 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r7, r0, r6)
        L10b:
            return r8
    }

    public static com.mbridge.msdk.foundation.entity.l trackingStr2Object(org.json.JSONObject r1, com.mbridge.msdk.foundation.entity.l r2) {
            if (r1 == 0) goto L2c
            if (r2 == 0) goto L2c
            java.lang.String r0 = "apk_download_start"
            org.json.JSONArray r0 = r1.optJSONArray(r0)
            java.lang.String[] r0 = com.mbridge.msdk.foundation.entity.CampaignEx.processNativeVideoTrackingArray(r0)
            r2.c(r0)
            java.lang.String r0 = "apk_download_end"
            org.json.JSONArray r0 = r1.optJSONArray(r0)
            java.lang.String[] r0 = com.mbridge.msdk.foundation.entity.CampaignEx.processNativeVideoTrackingArray(r0)
            r2.d(r0)
            java.lang.String r0 = "apk_install"
            org.json.JSONArray r1 = r1.optJSONArray(r0)
            java.lang.String[] r1 = com.mbridge.msdk.foundation.entity.CampaignEx.processNativeVideoTrackingArray(r1)
            r2.e(r1)
            return r2
        L2c:
            r1 = 0
            return r1
    }

    public java.lang.String getAdvId() {
            r1 = this;
            java.lang.String r0 = r1.advId
            return r0
    }

    public java.lang.String getAkdlui() {
            r1 = this;
            java.lang.String r0 = r1.akdlui
            return r0
    }

    public int getApkAlt() {
            r1 = this;
            int r0 = r1.apk_alt
            return r0
    }

    public int getAtatType() {
            r1 = this;
            int r0 = r1.atatType
            return r0
    }

    public java.lang.String getBindId() {
            r1 = this;
            java.lang.String r0 = r1.bindId
            return r0
    }

    public int getDisplayApkAlt() {
            r1 = this;
            int r0 = r1.displayApkAlt
            return r0
    }

    public java.lang.String getGhId() {
            r1 = this;
            java.lang.String r0 = r1.ghId
            return r0
    }

    public java.lang.String getGhPath() {
            r1 = this;
            java.lang.String r0 = r1.ghPath
            return r0
    }

    public com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult getJumpResult() {
            r1 = this;
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = r1.jumpResult
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getLoopbackMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.loopbackMap
            return r0
    }

    public java.lang.String getLoopbackString() {
            r1 = this;
            java.lang.String r0 = r1.loopbackString
            return r0
    }

    public int getNtbarpasbl() {
            r1 = this;
            int r0 = r1.ntbarpasbl
            return r0
    }

    public int getNtbarpt() {
            r1 = this;
            int r0 = r1.ntbarpt
            return r0
    }

    public int getPreClickInterval() {
            r1 = this;
            int r0 = r1.preClickInterval
            return r0
    }

    public int getRoverIsPost() {
            r1 = this;
            int r0 = r1.roverIsPost
            return r0
    }

    public java.lang.String getRoverMark() {
            r1 = this;
            java.lang.String r0 = r1.roverMark
            return r0
    }

    public int getTtc_ct2() {
            r1 = this;
            int r0 = r1.ttc_ct2
            return r0
    }

    public int getTtc_type() {
            r1 = this;
            int r0 = r1.ttc_type
            return r0
    }

    public boolean isPreClick() {
            r1 = this;
            boolean r0 = r1.preClick
            return r0
    }

    public java.lang.String matchLoopback(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = ""
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lbe
            if (r1 != 0) goto Lc3
            java.util.Map r1 = r6.getLoopbackMap()     // Catch: java.lang.Throwable -> Lbe
            if (r1 == 0) goto Lc3
            int r2 = r1.size()     // Catch: java.lang.Throwable -> Lbe
            if (r2 <= 0) goto Lc3
            android.net.Uri r2 = android.net.Uri.parse(r7)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r3 = r2.getHost()     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r4 = "domain"
            java.lang.Object r4 = r1.get(r4)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> Lbe
            boolean r5 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lbe
            if (r5 != 0) goto Lc3
            boolean r3 = r3.contains(r4)     // Catch: java.lang.Throwable -> Lbe
            if (r3 == 0) goto Lc3
            java.lang.String r3 = "key"
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r4 = "value"
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> Lbe
            boolean r4 = r7.contains(r3)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = "="
            if (r4 != 0) goto L79
            java.lang.String r4 = r2.getQueryParameter(r3)     // Catch: java.lang.Throwable -> Lbe
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lbe
            if (r4 == 0) goto L79
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lbe
            if (r4 != 0) goto L79
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lbe
            if (r4 != 0) goto L79
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbe
            r2.<init>()     // Catch: java.lang.Throwable -> Lbe
            r2.append(r7)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r4 = "&"
            r2.append(r4)     // Catch: java.lang.Throwable -> Lbe
            r2.append(r3)     // Catch: java.lang.Throwable -> Lbe
            r2.append(r5)     // Catch: java.lang.Throwable -> Lbe
            r2.append(r1)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> Lbe
            goto Lc3
        L79:
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lbe
            if (r4 != 0) goto Lc3
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lbe
            if (r4 != 0) goto Lc3
            java.lang.String r4 = r2.getQueryParameter(r3)     // Catch: java.lang.Throwable -> Lbe
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lbe
            if (r4 != 0) goto L94
            java.lang.String r2 = r2.getQueryParameter(r3)     // Catch: java.lang.Throwable -> Lbe
            goto L95
        L94:
            r2 = r0
        L95:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbe
            r4.<init>()     // Catch: java.lang.Throwable -> Lbe
            r4.append(r3)     // Catch: java.lang.Throwable -> Lbe
            r4.append(r5)     // Catch: java.lang.Throwable -> Lbe
            r4.append(r2)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> Lbe
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbe
            r4.<init>()     // Catch: java.lang.Throwable -> Lbe
            r4.append(r3)     // Catch: java.lang.Throwable -> Lbe
            r4.append(r5)     // Catch: java.lang.Throwable -> Lbe
            r4.append(r1)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r7 = r7.replace(r2, r1)     // Catch: java.lang.Throwable -> Lbe
            goto Lc3
        Lbe:
            java.lang.String r1 = "matchLoopback error"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        Lc3:
            return r7
    }

    public boolean needShowIDialog(com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r4 = this;
            int r0 = r4.apk_alt
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L14
            int r0 = r5.getLinkType()
            r3 = 3
            if (r0 != r3) goto L14
            int r5 = r5.getDisplayApkAlt()
            if (r5 == r2) goto L14
            goto L15
        L14:
            r2 = r1
        L15:
            if (r2 == 0) goto L37
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L2d
            android.content.Context r5 = r5.j()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r0 = r4.getPackageName()     // Catch: java.lang.Throwable -> L2d
            boolean r5 = com.mbridge.msdk.foundation.tools.ae.c(r5, r0)     // Catch: java.lang.Throwable -> L2d
            if (r5 == 0) goto L2a
            goto L2b
        L2a:
            r1 = r2
        L2b:
            r2 = r1
            goto L37
        L2d:
            r5 = move-exception
            java.lang.String r0 = com.mbridge.msdk.foundation.entity.DomainCampaignEx.TAG
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r5)
        L37:
            return r2
    }

    public void setAdvId(java.lang.String r1) {
            r0 = this;
            r0.advId = r1
            return
    }

    public void setAkdlui(java.lang.String r1) {
            r0 = this;
            r0.akdlui = r1
            return
    }

    public void setApkAlt(int r1) {
            r0 = this;
            r0.apk_alt = r1
            return
    }

    public void setAtatType(int r1) {
            r0 = this;
            r0.atatType = r1
            return
    }

    public void setBindId(java.lang.String r1) {
            r0 = this;
            r0.bindId = r1
            return
    }

    public void setDisplayApkAlt(int r1) {
            r0 = this;
            r0.displayApkAlt = r1
            return
    }

    public void setGhId(java.lang.String r1) {
            r0 = this;
            r0.ghId = r1
            return
    }

    public void setGhPath(java.lang.String r1) {
            r0 = this;
            r0.ghPath = r1
            return
    }

    public void setJumpResult(com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult r1) {
            r0 = this;
            r0.jumpResult = r1
            return
    }

    public void setLoopbackMap(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.loopbackMap = r1
            return
    }

    public void setLoopbackString(java.lang.String r1) {
            r0 = this;
            r0.loopbackString = r1
            return
    }

    public void setNtbarpasbl(int r1) {
            r0 = this;
            r0.ntbarpasbl = r1
            return
    }

    public void setNtbarpt(int r1) {
            r0 = this;
            r0.ntbarpt = r1
            return
    }

    public void setPreClick(boolean r1) {
            r0 = this;
            r0.preClick = r1
            return
    }

    public void setPreClickInterval(int r1) {
            r0 = this;
            r0.preClickInterval = r1
            return
    }

    public void setRoverIsPost(int r1) {
            r0 = this;
            r0.roverIsPost = r1
            return
    }

    public void setRoverMark(java.lang.String r1) {
            r0 = this;
            r0.roverMark = r1
            return
    }

    public void setTtc_ct2(int r1) {
            r0 = this;
            r0.ttc_ct2 = r1
            return
    }

    public void setTtc_type(int r1) {
            r0 = this;
            r0.ttc_type = r1
            return
    }
}
