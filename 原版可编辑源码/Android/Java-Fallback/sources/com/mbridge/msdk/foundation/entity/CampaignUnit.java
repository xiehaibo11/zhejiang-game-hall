package com.mbridge.msdk.foundation.entity;

public class CampaignUnit implements com.mbridge.msdk.system.NoProGuard, java.io.Serializable {
    public static final java.lang.String JSON_KEY_ADS = "ads";
    public static final java.lang.String JSON_KEY_AD_HTML = "cam_html";
    public static final java.lang.String JSON_KEY_AD_TYPE = "ad_type";
    public static final java.lang.String JSON_KEY_AD_ZIP = "cam_tpl_url";
    public static final java.lang.String JSON_KEY_BANNER_HTML = "cam_html";
    public static final java.lang.String JSON_KEY_BANNER_URL = "cam_tpl_url";
    public static final java.lang.String JSON_KEY_CSP = "csp";
    public static final java.lang.String JSON_KEY_DO = "do";
    public static final java.lang.String JSON_KEY_ENCRYPT_PRICE = "encrypt_p";
    public static final java.lang.String JSON_KEY_END_SCREEN_URL = "end_screen_url";
    public static final java.lang.String JSON_KEY_FRAME_ADS = "frames";
    public static final java.lang.String JSON_KEY_HTML_URL = "html_url";
    public static final java.lang.String JSON_KEY_IA_EXT1 = "ia_all_ext1";
    public static final java.lang.String JSON_KEY_IA_EXT2 = "ia_all_ext2";
    public static final java.lang.String JSON_KEY_IA_ICON = "ia_icon";
    public static final java.lang.String JSON_KEY_IA_ORI = "ia_ori";
    public static final java.lang.String JSON_KEY_IA_RST = "ia_rst";
    public static final java.lang.String JSON_KEY_IA_URL = "ia_url";
    public static final java.lang.String JSON_KEY_JM_DO = "jm_do";
    public static final java.lang.String JSON_KEY_MOF_TEMPLATE_URL = "mof_template_url";
    public static final java.lang.String JSON_KEY_MOF_TPLID = "mof_tplid";
    public static final java.lang.String JSON_KEY_NSCPT = "nscpt";
    public static final java.lang.String JSON_KEY_ONLY_IMPRESSION_URL = "only_impression_url";
    public static final java.lang.String JSON_KEY_PARENT_SESSION_ID = "parent_session_id";
    public static final java.lang.String JSON_KEY_PV_URLS = "pv_urls";
    public static final java.lang.String JSON_KEY_REPLACE_TMP = "replace_tmp";
    public static final java.lang.String JSON_KEY_REQ_EXT_DATA = "req_ext_data";
    public static final java.lang.String JSON_KEY_RKS = "rks";
    public static final java.lang.String JSON_KEY_SESSION_ID = "a";
    public static final java.lang.String JSON_KEY_SH = "sh";
    public static final java.lang.String JSON_KEY_TEMPLATE = "template";
    public static final java.lang.String JSON_KEY_TOKEN_RULE = "token_r";
    public static final java.lang.String JSON_KEY_UNIT_SIZE = "unit_size";
    public static final java.lang.String JSON_KEY_VCN = "vcn";
    public static final java.lang.String KEY_IRLFA = "irlfa";
    private static final java.lang.String TAG = null;
    private static final long serialVersionUID = 1;
    private java.lang.String adHtml;
    private int adType;
    private java.lang.String adZip;
    public java.util.ArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> ads;
    private java.lang.String bannerHtml;
    private java.lang.String bannerUrl;
    private java.lang.StringBuffer cParams;
    private java.lang.String csp;
    private java.lang.String domain;
    private java.lang.String encryptPrice;
    private java.util.HashMap<java.lang.String, java.lang.String> epMap;
    private java.lang.String htmlUrl;
    private java.lang.String ia_all_ext1;
    private java.lang.String ia_all_ext2;
    private java.lang.String ia_icon;
    private int ia_ori;
    private int ia_rst;
    private java.lang.String ia_url;
    private int jmDo;
    private java.util.List<com.mbridge.msdk.out.Frame> listFrames;
    private java.lang.String msg;
    private java.lang.String onlyImpressionUrl;
    private java.lang.String parentSessionId;
    private java.lang.String requestId;
    private java.util.HashMap<java.lang.String, java.lang.String> rks;
    private java.lang.String sessionId;
    private java.lang.String sh;
    private int template;
    private int tokenRule;
    private java.lang.String unitSize;
    private int vcn;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.entity.CampaignUnit> r0 = com.mbridge.msdk.foundation.entity.CampaignUnit.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.entity.CampaignUnit.TAG = r0
            return
    }

    public CampaignUnit() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.msg = r0
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            r2.cParams = r1
            r2.encryptPrice = r0
            return
    }

    private static void getSysIDAndBKUPID(org.json.JSONObject r9) {
            com.mbridge.msdk.foundation.controller.b r0 = com.mbridge.msdk.foundation.controller.b.a()
            boolean r0 = r0.d()
            r1 = 0
            java.lang.String r2 = "H+tU+FeXHM=="
            if (r0 == 0) goto L20
            com.mbridge.msdk.foundation.tools.FastKV$Builder r0 = new com.mbridge.msdk.foundation.tools.FastKV$Builder     // Catch: java.lang.Exception -> L20
            com.mbridge.msdk.foundation.same.b.c r3 = com.mbridge.msdk.foundation.same.b.c.m     // Catch: java.lang.Exception -> L20
            java.lang.String r3 = com.mbridge.msdk.foundation.same.b.e.b(r3)     // Catch: java.lang.Exception -> L20
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.t.b(r2)     // Catch: java.lang.Exception -> L20
            r0.<init>(r3, r4)     // Catch: java.lang.Exception -> L20
            com.mbridge.msdk.foundation.tools.FastKV r1 = r0.build()     // Catch: java.lang.Exception -> L20
        L20:
            java.lang.String r0 = "H+tU+Fz8"
            java.lang.String r3 = "H+tU+bfPhM=="
            java.lang.String r4 = "c"
            java.lang.String r5 = "b"
            if (r1 == 0) goto L8a
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L84
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L84
            if (r9 == 0) goto L10a
            if (r2 == 0) goto L10a
            java.lang.String r2 = r9.optString(r5)     // Catch: java.lang.Exception -> L84
            boolean r6 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L84
            if (r6 != 0) goto L5c
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L84
            boolean r6 = android.text.TextUtils.equals(r6, r2)     // Catch: java.lang.Exception -> L84
            if (r6 != 0) goto L5c
            com.mbridge.msdk.foundation.same.a.t = r2     // Catch: java.lang.Exception -> L84
            com.mbridge.msdk.foundation.a.a.a r2 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L84
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L84
            r2.a(r5, r6)     // Catch: java.lang.Exception -> L84
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.b(r3)     // Catch: java.lang.Exception -> L5c
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L5c
            r1.putString(r2, r3)     // Catch: java.lang.Exception -> L5c
        L5c:
            java.lang.String r9 = r9.optString(r4)     // Catch: java.lang.Exception -> L84
            boolean r2 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L84
            if (r2 != 0) goto L10a
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L84
            boolean r2 = android.text.TextUtils.equals(r2, r9)     // Catch: java.lang.Exception -> L84
            if (r2 != 0) goto L10a
            com.mbridge.msdk.foundation.same.a.u = r9     // Catch: java.lang.Exception -> L84
            com.mbridge.msdk.foundation.a.a.a r9 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L84
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L84
            r9.a(r4, r2)     // Catch: java.lang.Exception -> L84
            java.lang.String r9 = com.mbridge.msdk.foundation.tools.t.b(r0)     // Catch: java.lang.Exception -> L10a
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L10a
            r1.putString(r9, r0)     // Catch: java.lang.Exception -> L10a
            goto L10a
        L84:
            r9 = move-exception
            r9.printStackTrace()
            goto L10a
        L8a:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L106
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L106
            if (r9 == 0) goto L10a
            if (r1 == 0) goto L10a
            java.lang.String r6 = r9.optString(r5)     // Catch: java.lang.Exception -> L106
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L106
            r8 = 0
            if (r7 != 0) goto Lce
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L106
            boolean r7 = android.text.TextUtils.equals(r7, r6)     // Catch: java.lang.Exception -> L106
            if (r7 != 0) goto Lce
            com.mbridge.msdk.foundation.same.a.t = r6     // Catch: java.lang.Exception -> L106
            com.mbridge.msdk.foundation.a.a.a r6 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L106
            java.lang.String r7 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L106
            r6.a(r5, r7)     // Catch: java.lang.Exception -> L106
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.t.b(r2)     // Catch: java.lang.Exception -> L106
            android.content.SharedPreferences r5 = r1.getSharedPreferences(r5, r8)     // Catch: java.lang.Exception -> L106
            if (r5 == 0) goto Lce
            android.content.SharedPreferences$Editor r5 = r5.edit()     // Catch: java.lang.Exception -> L106
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.t.b(r3)     // Catch: java.lang.Exception -> L106
            java.lang.String r6 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L106
            r5.putString(r3, r6)     // Catch: java.lang.Exception -> L106
            r5.apply()     // Catch: java.lang.Exception -> L106
        Lce:
            java.lang.String r9 = r9.optString(r4)     // Catch: java.lang.Exception -> L106
            boolean r3 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L106
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L106
            boolean r3 = android.text.TextUtils.equals(r3, r9)     // Catch: java.lang.Exception -> L106
            if (r3 != 0) goto L10a
            com.mbridge.msdk.foundation.same.a.u = r9     // Catch: java.lang.Exception -> L106
            com.mbridge.msdk.foundation.a.a.a r9 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L106
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L106
            r9.a(r4, r3)     // Catch: java.lang.Exception -> L106
            java.lang.String r9 = com.mbridge.msdk.foundation.tools.t.b(r2)     // Catch: java.lang.Exception -> L106
            android.content.SharedPreferences r9 = r1.getSharedPreferences(r9, r8)     // Catch: java.lang.Exception -> L106
            if (r9 == 0) goto L10a
            android.content.SharedPreferences$Editor r9 = r9.edit()     // Catch: java.lang.Exception -> L106
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.t.b(r0)     // Catch: java.lang.Exception -> L106
            java.lang.String r1 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L106
            r9.putString(r0, r1)     // Catch: java.lang.Exception -> L106
            r9.apply()     // Catch: java.lang.Exception -> L106
            goto L10a
        L106:
            r9 = move-exception
            r9.printStackTrace()
        L10a:
            return
    }

    private java.lang.Object nullToEmpty(java.lang.Object r1) {
            r0 = this;
            if (r1 != 0) goto L4
            java.lang.String r1 = ""
        L4:
            return r1
    }

    public static com.mbridge.msdk.foundation.entity.CampaignUnit parseCampaignUnit(org.json.JSONObject r1) {
            java.lang.String r0 = ""
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = parseCampaignUnit(r1, r0)
            return r1
    }

    public static com.mbridge.msdk.foundation.entity.CampaignUnit parseCampaignUnit(org.json.JSONObject r37, java.lang.String r38) {
            r0 = r37
            java.lang.String r1 = "ads"
            java.lang.String r2 = "template"
            java.lang.String r3 = "ad_type"
            java.lang.String r4 = "parent_session_id"
            java.lang.String r5 = "a"
            java.lang.String r6 = "only_impression_url"
            java.lang.String r7 = "html_url"
            if (r0 == 0) goto L3a2
            com.mbridge.msdk.foundation.entity.CampaignUnit r15 = new com.mbridge.msdk.foundation.entity.CampaignUnit     // Catch: java.lang.Exception -> L399
            r15.<init>()     // Catch: java.lang.Exception -> L399
            java.lang.String r9 = "rks"
            java.lang.String r9 = r0.optString(r9)     // Catch: java.lang.Exception -> L396
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L396
            if (r10 != 0) goto L4e
            org.json.JSONObject r10 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4b
            r10.<init>(r9)     // Catch: java.lang.Exception -> L4b
            java.util.Iterator r9 = r10.keys()     // Catch: java.lang.Exception -> L4b
            java.util.HashMap r11 = new java.util.HashMap     // Catch: java.lang.Exception -> L4b
            r11.<init>()     // Catch: java.lang.Exception -> L4b
        L31:
            if (r9 == 0) goto L47
            boolean r12 = r9.hasNext()     // Catch: java.lang.Exception -> L4b
            if (r12 == 0) goto L47
            java.lang.Object r12 = r9.next()     // Catch: java.lang.Exception -> L4b
            java.lang.String r12 = (java.lang.String) r12     // Catch: java.lang.Exception -> L4b
            java.lang.String r13 = r10.optString(r12)     // Catch: java.lang.Exception -> L4b
            r11.put(r12, r13)     // Catch: java.lang.Exception -> L4b
            goto L31
        L47:
            r15.setRks(r11)     // Catch: java.lang.Exception -> L4b
            goto L4e
        L4b:
            r8 = r15
            goto L39a
        L4e:
            boolean r9 = android.text.TextUtils.isEmpty(r38)     // Catch: java.lang.Exception -> L396
            java.lang.String r10 = "encrypt_p"
            java.lang.String r11 = ""
            if (r9 != 0) goto L68
            java.util.HashMap r9 = new java.util.HashMap     // Catch: java.lang.Exception -> L4b
            r9.<init>()     // Catch: java.lang.Exception -> L4b
            r9.put(r10, r11)     // Catch: java.lang.Exception -> L4b
            java.lang.String r12 = "irlfa"
            r9.put(r12, r11)     // Catch: java.lang.Exception -> L4b
            r15.setEpMap(r9)     // Catch: java.lang.Exception -> L4b
        L68:
            java.lang.String r9 = "req_ext_data"
            org.json.JSONObject r9 = r0.optJSONObject(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r12 = "nscpt"
            r13 = 1
            int r14 = r0.optInt(r12, r13)     // Catch: java.lang.Exception -> L396
            java.lang.String r12 = "mof_template_url"
            java.lang.String r12 = r0.optString(r12, r11)     // Catch: java.lang.Exception -> L396
            java.lang.String r8 = "mof_tplid"
            r13 = 0
            int r8 = r0.optInt(r8, r13)     // Catch: java.lang.Exception -> L396
            if (r9 == 0) goto L88
            java.lang.String r11 = r9.toString()     // Catch: java.lang.Exception -> L4b
        L88:
            org.json.JSONArray r9 = new org.json.JSONArray     // Catch: java.lang.Exception -> L396
            r9.<init>()     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = "pv_urls"
            org.json.JSONArray r9 = r0.optJSONArray(r9)     // Catch: java.lang.Exception -> L396
            if (r9 == 0) goto Lb9
            int r18 = r9.length()     // Catch: java.lang.Exception -> L4b
            if (r18 <= 0) goto Lb9
            java.util.ArrayList r13 = new java.util.ArrayList     // Catch: java.lang.Exception -> L4b
            r19 = r11
            int r11 = r9.length()     // Catch: java.lang.Exception -> L4b
            r13.<init>(r11)     // Catch: java.lang.Exception -> L4b
            r20 = r12
            r11 = 0
        La9:
            int r12 = r9.length()     // Catch: java.lang.Exception -> L4b
            if (r11 >= r12) goto Lbe
            java.lang.String r12 = r9.getString(r11)     // Catch: java.lang.Exception -> L4b
            r13.add(r12)     // Catch: java.lang.Exception -> L4b
            int r11 = r11 + 1
            goto La9
        Lb9:
            r19 = r11
            r20 = r12
            r13 = 0
        Lbe:
            java.lang.String r9 = "replace_tmp"
            org.json.JSONObject r9 = r0.optJSONObject(r9)     // Catch: java.lang.Exception -> L396
            com.mbridge.msdk.foundation.db.a.a r11 = com.mbridge.msdk.foundation.db.a.a.a()     // Catch: java.lang.Exception -> L396
            r12 = 1
            r11.a(r9, r12)     // Catch: java.lang.Exception -> L396
            getSysIDAndBKUPID(r37)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = r0.optString(r5)     // Catch: java.lang.Exception -> L396
            r15.setSessionId(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = r0.optString(r4)     // Catch: java.lang.Exception -> L396
            r15.setParentSessionId(r9)     // Catch: java.lang.Exception -> L396
            int r9 = r0.optInt(r3)     // Catch: java.lang.Exception -> L396
            r15.setAdType(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = "unit_size"
            java.lang.String r9 = r0.optString(r9)     // Catch: java.lang.Exception -> L396
            r15.setUnitSize(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = r0.optString(r7)     // Catch: java.lang.Exception -> L396
            r15.setHtmlUrl(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = r0.optString(r6)     // Catch: java.lang.Exception -> L396
            r15.setOnlyImpressionUrl(r9)     // Catch: java.lang.Exception -> L396
            int r9 = r0.optInt(r2)     // Catch: java.lang.Exception -> L396
            r15.setTemplate(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = "jm_do"
            int r9 = r0.optInt(r9)     // Catch: java.lang.Exception -> L396
            r15.setJmDo(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = "ia_icon"
            java.lang.String r9 = r0.optString(r9)     // Catch: java.lang.Exception -> L396
            r15.setIa_icon(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = "ia_rst"
            int r9 = r0.optInt(r9)     // Catch: java.lang.Exception -> L396
            r15.setIa_rst(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = "ia_url"
            java.lang.String r9 = r0.optString(r9)     // Catch: java.lang.Exception -> L396
            r15.setIa_url(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = "ia_ori"
            int r9 = r0.optInt(r9)     // Catch: java.lang.Exception -> L396
            r15.setIa_ori(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = "ia_all_ext1"
            java.lang.String r9 = r0.optString(r9)     // Catch: java.lang.Exception -> L396
            r15.setIa_all_ext1(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = "ia_all_ext2"
            java.lang.String r9 = r0.optString(r9)     // Catch: java.lang.Exception -> L396
            r15.setIa_all_ext2(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = "vcn"
            int r9 = r0.optInt(r9)     // Catch: java.lang.Exception -> L396
            r15.setVcn(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = "token_r"
            int r9 = r0.optInt(r9)     // Catch: java.lang.Exception -> L396
            r15.setTokenRule(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = r0.optString(r10)     // Catch: java.lang.Exception -> L396
            r15.setEncryptPrice(r9)     // Catch: java.lang.Exception -> L396
            org.json.JSONArray r12 = r0.optJSONArray(r1)     // Catch: java.lang.Exception -> L396
            java.lang.String r9 = "frames"
            org.json.JSONArray r11 = r0.optJSONArray(r9)     // Catch: java.lang.Exception -> L396
            java.lang.String r10 = "parse campaign error ,campaign is null"
            java.lang.String r9 = "end_screen_url"
            if (r11 == 0) goto L2e1
            int r16 = r11.length()     // Catch: java.lang.Exception -> L2dd
            if (r16 <= 0) goto L2e1
            java.util.ArrayList r12 = new java.util.ArrayList     // Catch: java.lang.Exception -> L2dd
            r12.<init>()     // Catch: java.lang.Exception -> L2dd
            r17 = r10
            r16 = r13
            r13 = 0
        L17a:
            int r10 = r11.length()     // Catch: java.lang.Exception -> L2dd
            if (r13 >= r10) goto L2d6
            org.json.JSONObject r10 = r11.optJSONObject(r13)     // Catch: java.lang.Exception -> L2dd
            r21 = r13
            org.json.JSONArray r13 = r10.getJSONArray(r1)     // Catch: java.lang.Exception -> L2dd
            r22 = r1
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L2dd
            r1.<init>()     // Catch: java.lang.Exception -> L2dd
            r23 = r2
            r24 = r10
            r2 = 0
        L196:
            int r10 = r13.length()     // Catch: java.lang.Exception -> L2dd
            if (r2 >= r10) goto L277
            org.json.JSONObject r10 = r13.optJSONObject(r2)     // Catch: java.lang.Exception -> L2dd
            java.lang.String r25 = r0.optString(r6)     // Catch: java.lang.Exception -> L2dd
            java.lang.String r26 = r0.optString(r7)     // Catch: java.lang.Exception -> L2dd
            java.lang.String r27 = r0.optString(r9)     // Catch: java.lang.Exception -> L2dd
            r28 = 0
            r29 = r9
            r9 = r10
            r31 = r17
            r30 = r24
            r10 = r25
            r17 = r11
            r32 = r19
            r11 = r26
            r19 = r7
            r7 = r20
            r20 = r6
            r6 = r12
            r12 = r27
            r24 = r6
            r6 = r16
            r18 = r21
            r16 = 0
            r21 = r13
            r13 = r28
            r33 = r14
            r14 = r15
            r25 = r15
            r15 = r38
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaign(r9, r10, r11, r12, r13, r14, r15)     // Catch: java.lang.Exception -> L273
            if (r9 == 0) goto L248
            java.lang.String r10 = r25.getIa_url()     // Catch: java.lang.Exception -> L244
            r9.setKeyIaUrl(r10)     // Catch: java.lang.Exception -> L244
            int r10 = r25.getIa_ori()     // Catch: java.lang.Exception -> L244
            r9.setKeyIaOri(r10)     // Catch: java.lang.Exception -> L244
            int r10 = r25.getIa_rst()     // Catch: java.lang.Exception -> L244
            r9.setKeyIaRst(r10)     // Catch: java.lang.Exception -> L244
            java.lang.String r10 = r25.getIa_icon()     // Catch: java.lang.Exception -> L244
            r9.setKeyIaIcon(r10)     // Catch: java.lang.Exception -> L244
            int r10 = r0.optInt(r3)     // Catch: java.lang.Exception -> L244
            r9.setAdType(r10)     // Catch: java.lang.Exception -> L244
            java.lang.String r10 = "ia_ext1"
            java.lang.String r10 = r0.optString(r10)     // Catch: java.lang.Exception -> L244
            r9.setIa_ext1(r10)     // Catch: java.lang.Exception -> L244
            java.lang.String r10 = "ia_ext2"
            java.lang.String r10 = r0.optString(r10)     // Catch: java.lang.Exception -> L244
            r9.setIa_ext2(r10)     // Catch: java.lang.Exception -> L244
            int r10 = r25.getVcn()     // Catch: java.lang.Exception -> L244
            r9.setVcn(r10)     // Catch: java.lang.Exception -> L244
            int r10 = r25.getTokenRule()     // Catch: java.lang.Exception -> L244
            r9.setTokenRule(r10)     // Catch: java.lang.Exception -> L244
            java.lang.String r10 = r25.getEncryptPrice()     // Catch: java.lang.Exception -> L244
            r9.setEncryptPrice(r10)     // Catch: java.lang.Exception -> L244
            r9.setMof_tplid(r8)     // Catch: java.lang.Exception -> L244
            r9.setMof_template_url(r7)     // Catch: java.lang.Exception -> L244
            r15 = r33
            r9.setNscpt(r15)     // Catch: java.lang.Exception -> L244
            r9.setPv_urls(r6)     // Catch: java.lang.Exception -> L244
            r14 = r32
            r9.setReq_ext_data(r14)     // Catch: java.lang.Exception -> L244
            r1.add(r9)     // Catch: java.lang.Exception -> L244
            r13 = r25
            r11 = r31
            goto L253
        L244:
            r8 = r25
            goto L39a
        L248:
            r14 = r32
            r15 = r33
            r13 = r25
            r11 = r31
            r13.setMsg(r11)     // Catch: java.lang.Exception -> L2de
        L253:
            int r2 = r2 + 1
            r16 = r6
            r6 = r20
            r12 = r24
            r9 = r29
            r24 = r30
            r20 = r7
            r7 = r19
            r19 = r14
            r14 = r15
            r15 = r13
            r13 = r21
            r21 = r18
            r36 = r17
            r17 = r11
            r11 = r36
            goto L196
        L273:
            r13 = r25
            goto L2de
        L277:
            r29 = r9
            r13 = r15
            r18 = r21
            r30 = r24
            r24 = r12
            r15 = r14
            r14 = r19
            r19 = r7
            r7 = r20
            r20 = r6
            r6 = r16
            r16 = 0
            r36 = r17
            r17 = r11
            r11 = r36
            com.mbridge.msdk.out.Frame r2 = new com.mbridge.msdk.out.Frame     // Catch: java.lang.Exception -> L2de
            r2.<init>()     // Catch: java.lang.Exception -> L2de
            java.lang.String r9 = r0.optString(r4)     // Catch: java.lang.Exception -> L2de
            r2.setParentSessionId(r9)     // Catch: java.lang.Exception -> L2de
            java.lang.String r9 = r0.optString(r5)     // Catch: java.lang.Exception -> L2de
            r2.setSessionId(r9)     // Catch: java.lang.Exception -> L2de
            r2.setCampaigns(r1)     // Catch: java.lang.Exception -> L2de
            r9 = r23
            r1 = r30
            int r1 = r1.optInt(r9)     // Catch: java.lang.Exception -> L2de
            r2.setTemplate(r1)     // Catch: java.lang.Exception -> L2de
            r1 = r24
            r1.add(r2)     // Catch: java.lang.Exception -> L2de
            int r2 = r18 + 1
            r12 = r1
            r16 = r6
            r6 = r20
            r1 = r22
            r20 = r7
            r7 = r19
            r19 = r14
            r14 = r15
            r15 = r13
            r13 = r2
            r2 = r9
            r9 = r29
            r36 = r17
            r17 = r11
            r11 = r36
            goto L17a
        L2d6:
            r1 = r12
            r13 = r15
            r13.setListFrames(r1)     // Catch: java.lang.Exception -> L2de
            goto L393
        L2dd:
            r13 = r15
        L2de:
            r8 = r13
            goto L39a
        L2e1:
            r29 = r9
            r11 = r10
            r16 = 0
            r36 = r20
            r20 = r6
            r6 = r13
            r13 = r15
            r15 = r14
            r14 = r19
            r19 = r7
            r7 = r36
            if (r12 == 0) goto L393
            int r1 = r12.length()     // Catch: java.lang.Exception -> L391
            if (r1 <= 0) goto L393
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L391
            r1.<init>()     // Catch: java.lang.Exception -> L391
            r2 = r16
        L302:
            int r3 = r12.length()     // Catch: java.lang.Exception -> L391
            if (r2 >= r3) goto L38c
            org.json.JSONObject r9 = r12.optJSONObject(r2)     // Catch: java.lang.Exception -> L391
            r3 = r20
            java.lang.String r10 = r0.optString(r3)     // Catch: java.lang.Exception -> L391
            r4 = r19
            java.lang.String r5 = r0.optString(r4)     // Catch: java.lang.Exception -> L391
            r25 = r13
            r13 = r29
            java.lang.String r16 = r0.optString(r13)     // Catch: java.lang.Exception -> L389
            r17 = 0
            r34 = r11
            r11 = r5
            r5 = r12
            r12 = r16
            r18 = r13
            r16 = r25
            r13 = r17
            r35 = r14
            r14 = r16
            r0 = r15
            r15 = r38
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaign(r9, r10, r11, r12, r13, r14, r15)     // Catch: java.lang.Exception -> L386
            if (r9 == 0) goto L36c
            r9.setMof_tplid(r8)     // Catch: java.lang.Exception -> L369
            r9.setMof_template_url(r7)     // Catch: java.lang.Exception -> L369
            r9.setNscpt(r0)     // Catch: java.lang.Exception -> L369
            r9.setPv_urls(r6)     // Catch: java.lang.Exception -> L369
            r11 = r35
            r9.setReq_ext_data(r11)     // Catch: java.lang.Exception -> L369
            int r10 = r16.getVcn()     // Catch: java.lang.Exception -> L369
            r9.setVcn(r10)     // Catch: java.lang.Exception -> L369
            int r10 = r16.getTokenRule()     // Catch: java.lang.Exception -> L369
            r9.setTokenRule(r10)     // Catch: java.lang.Exception -> L369
            java.lang.String r10 = r16.getEncryptPrice()     // Catch: java.lang.Exception -> L369
            r9.setEncryptPrice(r10)     // Catch: java.lang.Exception -> L369
            r1.add(r9)     // Catch: java.lang.Exception -> L369
            r9 = r16
            r10 = r34
            goto L375
        L369:
            r8 = r16
            goto L39a
        L36c:
            r11 = r35
            r9 = r16
            r10 = r34
            r9.setMsg(r10)     // Catch: java.lang.Exception -> L397
        L375:
            int r2 = r2 + 1
            r15 = r0
            r20 = r3
            r19 = r4
            r12 = r5
            r13 = r9
            r14 = r11
            r29 = r18
            r0 = r37
            r11 = r10
            goto L302
        L386:
            r9 = r16
            goto L397
        L389:
            r9 = r25
            goto L397
        L38c:
            r9 = r13
            r9.setAds(r1)     // Catch: java.lang.Exception -> L397
            goto L394
        L391:
            r9 = r13
            goto L397
        L393:
            r9 = r13
        L394:
            r8 = r9
            goto L3a3
        L396:
            r9 = r15
        L397:
            r8 = r9
            goto L39a
        L399:
            r8 = 0
        L39a:
            java.lang.String r0 = com.mbridge.msdk.foundation.entity.CampaignUnit.TAG
            java.lang.String r1 = "parse campaign unit exception"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            goto L3a3
        L3a2:
            r8 = 0
        L3a3:
            return r8
    }

    public static com.mbridge.msdk.foundation.entity.CampaignUnit parseV5CampaignUnit(org.json.JSONObject r1) {
            java.lang.String r0 = ""
            com.mbridge.msdk.foundation.entity.CampaignUnit r1 = parseV5CampaignUnit(r1, r0)
            return r1
    }

    public static com.mbridge.msdk.foundation.entity.CampaignUnit parseV5CampaignUnit(org.json.JSONObject r0, java.lang.String r1) {
            com.mbridge.msdk.foundation.entity.CampaignUnit r0 = parseCampaignUnit(r0, r1)
            return r0
    }

    public java.lang.String assembCParams() {
            r9 = this;
            java.lang.String r0 = "|"
            java.lang.StringBuffer r1 = r9.cParams
            if (r1 == 0) goto L13
            int r1 = r1.length()
            if (r1 <= 0) goto L13
            java.lang.StringBuffer r0 = r9.cParams
            java.lang.String r0 = r0.toString()
            return r0
        L13:
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Throwable -> L1b2
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b2
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.e(r2)     // Catch: java.lang.Throwable -> L1b2
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b2
            android.content.Context r3 = r3.j()     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.d(r3)     // Catch: java.lang.Throwable -> L1b2
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r4 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r5 = "authority_general_data"
            boolean r4 = r4.a(r5)     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r5 = ""
            if (r4 == 0) goto L7a
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b2
            android.content.Context r4 = r4.j()     // Catch: java.lang.Throwable -> L1b2
            int r4 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L1b2
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b2
            r6.<init>()     // Catch: java.lang.Throwable -> L1b2
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b2
            android.content.Context r7 = r7.j()     // Catch: java.lang.Throwable -> L1b2
            int r7 = com.mbridge.msdk.foundation.tools.v.x(r7)     // Catch: java.lang.Throwable -> L1b2
            r6.append(r7)     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r7 = "x"
            r6.append(r7)     // Catch: java.lang.Throwable -> L1b2
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b2
            android.content.Context r7 = r7.j()     // Catch: java.lang.Throwable -> L1b2
            int r7 = com.mbridge.msdk.foundation.tools.v.y(r7)     // Catch: java.lang.Throwable -> L1b2
            r6.append(r7)     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L1b2
            goto L7c
        L7a:
            r4 = r5
            r6 = r4
        L7c:
            java.lang.StringBuffer r7 = r9.cParams     // Catch: java.lang.Throwable -> L1b2
            int r8 = r9.getAdType()     // Catch: java.lang.Throwable -> L1b2
            r7.append(r8)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r8 = "1"
            java.lang.Object r8 = r9.nullToEmpty(r8)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r8)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r8 = android.os.Build.VERSION.RELEASE     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r8 = r9.nullToEmpty(r8)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r8)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r8 = "MAL_16.3.67"
            java.lang.Object r8 = r9.nullToEmpty(r8)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r8)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.v.x()     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r8 = r9.nullToEmpty(r8)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r8)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r6 = r9.nullToEmpty(r6)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r6)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b2
            android.content.Context r6 = r6.j()     // Catch: java.lang.Throwable -> L1b2
            int r6 = com.mbridge.msdk.foundation.tools.v.t(r6)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r6 = r9.nullToEmpty(r6)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r6)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b2
            android.content.Context r6 = r6.j()     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.v.s(r6)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r6 = r9.nullToEmpty(r6)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r6)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r4 = r9.nullToEmpty(r4)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r4)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r3 = r9.nullToEmpty(r3)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r3)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r2 = r9.nullToEmpty(r2)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r2)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b2
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.b(r2)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r2 = r9.nullToEmpty(r2)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r2)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b2
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.i(r2)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r2 = r9.nullToEmpty(r2)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r2)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L1b2
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.g(r2)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r2 = r9.nullToEmpty(r2)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r2)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r1 = r9.nullToEmpty(r1)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r1)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r1 = r9.nullToEmpty(r5)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r1)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.z()     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r1 = r9.nullToEmpty(r1)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r1)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r1 = r9.nullToEmpty(r5)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r1)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r5)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r1 = r9.nullToEmpty(r5)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r1)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b2
            r1.<init>()     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Throwable -> L1b2
            r1.append(r2)     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r2 = ","
            r1.append(r2)     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r2 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Throwable -> L1b2
            r1.append(r2)     // Catch: java.lang.Throwable -> L1b2
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1b2
            java.lang.Object r1 = r9.nullToEmpty(r1)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r1)     // Catch: java.lang.Throwable -> L1b2
            r7.append(r0)     // Catch: java.lang.Throwable -> L1b2
            r9.cParams = r7     // Catch: java.lang.Throwable -> L1b2
            goto L1bc
        L1b2:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.foundation.entity.CampaignUnit.TAG
            java.lang.String r2 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
        L1bc:
            java.lang.StringBuffer r0 = r9.cParams
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getAdHtml() {
            r1 = this;
            java.lang.String r0 = r1.adHtml
            return r0
    }

    public int getAdType() {
            r1 = this;
            int r0 = r1.adType
            return r0
    }

    public java.lang.String getAdZip() {
            r1 = this;
            java.lang.String r0 = r1.adZip
            return r0
    }

    public java.util.ArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> getAds() {
            r1 = this;
            java.util.ArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.ads
            return r0
    }

    public java.lang.String getBannerHtml() {
            r1 = this;
            java.lang.String r0 = r1.bannerHtml
            return r0
    }

    public java.lang.String getBannerUrl() {
            r1 = this;
            java.lang.String r0 = r1.bannerUrl
            return r0
    }

    public java.lang.String getCsp() {
            r1 = this;
            java.lang.String r0 = r1.csp
            return r0
    }

    public java.lang.String getDomain() {
            r1 = this;
            java.lang.String r0 = r1.domain
            return r0
    }

    public java.lang.String getEncryptPrice() {
            r1 = this;
            java.lang.String r0 = r1.encryptPrice
            return r0
    }

    public java.util.HashMap<java.lang.String, java.lang.String> getEpMap() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.epMap
            return r0
    }

    public java.lang.String getHtmlUrl() {
            r1 = this;
            java.lang.String r0 = r1.htmlUrl
            return r0
    }

    public java.lang.String getIa_all_ext1() {
            r1 = this;
            java.lang.String r0 = r1.ia_all_ext1
            return r0
    }

    public java.lang.String getIa_all_ext2() {
            r1 = this;
            java.lang.String r0 = r1.ia_all_ext2
            return r0
    }

    public java.lang.String getIa_icon() {
            r1 = this;
            java.lang.String r0 = r1.ia_icon
            return r0
    }

    public int getIa_ori() {
            r1 = this;
            int r0 = r1.ia_ori
            return r0
    }

    public int getIa_rst() {
            r1 = this;
            int r0 = r1.ia_rst
            return r0
    }

    public java.lang.String getIa_url() {
            r1 = this;
            java.lang.String r0 = r1.ia_url
            return r0
    }

    public int getJmDo() {
            r1 = this;
            int r0 = r1.jmDo
            return r0
    }

    public java.util.List<com.mbridge.msdk.out.Frame> getListFrames() {
            r1 = this;
            java.util.List<com.mbridge.msdk.out.Frame> r0 = r1.listFrames
            return r0
    }

    public java.lang.String getMsg() {
            r1 = this;
            java.lang.String r0 = r1.msg
            return r0
    }

    public java.lang.String getOnlyImpressionUrl() {
            r1 = this;
            java.lang.String r0 = r1.onlyImpressionUrl
            return r0
    }

    public java.lang.String getParentSessionId() {
            r1 = this;
            java.lang.String r0 = r1.parentSessionId
            return r0
    }

    public java.lang.String getRequestId() {
            r2 = this;
            java.lang.String r0 = r2.requestId     // Catch: java.lang.Exception -> L26
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L26
            if (r0 != 0) goto Lb
            java.lang.String r0 = r2.requestId     // Catch: java.lang.Exception -> L26
            return r0
        Lb:
            java.lang.String r0 = r2.onlyImpressionUrl     // Catch: java.lang.Exception -> L26
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L26
            if (r0 != 0) goto L26
            java.lang.String r0 = r2.onlyImpressionUrl     // Catch: java.lang.Exception -> L26
            android.net.Uri r0 = android.net.Uri.parse(r0)     // Catch: java.lang.Exception -> L26
            if (r0 == 0) goto L23
            java.lang.String r1 = "k"
            java.lang.String r0 = r0.getQueryParameter(r1)     // Catch: java.lang.Exception -> L26
            r2.requestId = r0     // Catch: java.lang.Exception -> L26
        L23:
            java.lang.String r0 = r2.requestId     // Catch: java.lang.Exception -> L26
            return r0
        L26:
            java.lang.String r0 = ""
            return r0
    }

    public java.util.HashMap<java.lang.String, java.lang.String> getRks() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.rks
            return r0
    }

    public java.lang.String getSessionId() {
            r1 = this;
            java.lang.String r0 = r1.sessionId
            return r0
    }

    public java.lang.String getSh() {
            r1 = this;
            java.lang.String r0 = r1.sh
            return r0
    }

    public int getTemplate() {
            r1 = this;
            int r0 = r1.template
            return r0
    }

    public int getTokenRule() {
            r2 = this;
            int r0 = r2.tokenRule
            r1 = 1
            if (r0 != r1) goto L6
            return r0
        L6:
            r0 = 0
            return r0
    }

    public java.lang.String getUnitSize() {
            r1 = this;
            java.lang.String r0 = r1.unitSize
            return r0
    }

    public int getVcn() {
            r2 = this;
            int r0 = r2.vcn
            r1 = 1
            if (r0 <= r1) goto L6
            return r0
        L6:
            return r1
    }

    public void setAdHtml(java.lang.String r1) {
            r0 = this;
            r0.adHtml = r1
            return
    }

    public void setAdType(int r1) {
            r0 = this;
            r0.adType = r1
            return
    }

    public void setAdZip(java.lang.String r1) {
            r0 = this;
            r0.adZip = r1
            return
    }

    public void setAds(java.util.ArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.ads = r1
            return
    }

    public void setBannerHtml(java.lang.String r1) {
            r0 = this;
            r0.bannerHtml = r1
            return
    }

    public void setBannerUrl(java.lang.String r1) {
            r0 = this;
            r0.bannerUrl = r1
            return
    }

    public void setCsp(java.lang.String r1) {
            r0 = this;
            r0.csp = r1
            return
    }

    public void setDomain(java.lang.String r1) {
            r0 = this;
            r0.domain = r1
            return
    }

    public void setEncryptPrice(java.lang.String r1) {
            r0 = this;
            r0.encryptPrice = r1
            return
    }

    public void setEpMap(java.util.HashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.epMap = r1
            return
    }

    public void setHtmlUrl(java.lang.String r1) {
            r0 = this;
            r0.htmlUrl = r1
            return
    }

    public void setIa_all_ext1(java.lang.String r1) {
            r0 = this;
            r0.ia_all_ext1 = r1
            return
    }

    public void setIa_all_ext2(java.lang.String r1) {
            r0 = this;
            r0.ia_all_ext2 = r1
            return
    }

    public void setIa_icon(java.lang.String r1) {
            r0 = this;
            r0.ia_icon = r1
            return
    }

    public void setIa_ori(int r1) {
            r0 = this;
            r0.ia_ori = r1
            return
    }

    public void setIa_rst(int r1) {
            r0 = this;
            r0.ia_rst = r1
            return
    }

    public void setIa_url(java.lang.String r1) {
            r0 = this;
            r0.ia_url = r1
            return
    }

    public void setJmDo(int r1) {
            r0 = this;
            r0.jmDo = r1
            return
    }

    public void setListFrames(java.util.List<com.mbridge.msdk.out.Frame> r1) {
            r0 = this;
            r0.listFrames = r1
            return
    }

    public void setMsg(java.lang.String r1) {
            r0 = this;
            r0.msg = r1
            return
    }

    public void setOnlyImpressionUrl(java.lang.String r1) {
            r0 = this;
            r0.onlyImpressionUrl = r1
            return
    }

    public void setParentSessionId(java.lang.String r1) {
            r0 = this;
            r0.parentSessionId = r1
            return
    }

    public void setRks(java.util.HashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.rks = r1
            return
    }

    public void setSessionId(java.lang.String r1) {
            r0 = this;
            r0.sessionId = r1
            return
    }

    public void setSh(java.lang.String r1) {
            r0 = this;
            r0.sh = r1
            return
    }

    public void setTemplate(int r1) {
            r0 = this;
            r0.template = r1
            return
    }

    public void setTokenRule(int r1) {
            r0 = this;
            r0.tokenRule = r1
            return
    }

    public void setUnitSize(java.lang.String r1) {
            r0 = this;
            r0.unitSize = r1
            return
    }

    public void setVcn(int r1) {
            r0 = this;
            r0.vcn = r1
            return
    }
}
