package com.mbridge.msdk.foundation.entity;

import android.content.Context;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.FastKV;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Frame;
import com.mbridge.msdk.out.MBConfiguration;
import com.mbridge.msdk.system.NoProGuard;
import com.xiaomi.mipush.sdk.Constants;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

public class CampaignUnit implements NoProGuard, Serializable {
    public static final String JSON_KEY_ADS = "ads";
    public static final String JSON_KEY_AD_HTML = "cam_html";
    public static final String JSON_KEY_AD_TYPE = "ad_type";
    public static final String JSON_KEY_AD_ZIP = "cam_tpl_url";
    public static final String JSON_KEY_BANNER_HTML = "cam_html";
    public static final String JSON_KEY_BANNER_URL = "cam_tpl_url";
    public static final String JSON_KEY_CSP = "csp";
    public static final String JSON_KEY_DO = "do";
    public static final String JSON_KEY_ENCRYPT_PRICE = "encrypt_p";
    public static final String JSON_KEY_END_SCREEN_URL = "end_screen_url";
    public static final String JSON_KEY_FRAME_ADS = "frames";
    public static final String JSON_KEY_HTML_URL = "html_url";
    public static final String JSON_KEY_IA_EXT1 = "ia_all_ext1";
    public static final String JSON_KEY_IA_EXT2 = "ia_all_ext2";
    public static final String JSON_KEY_IA_ICON = "ia_icon";
    public static final String JSON_KEY_IA_ORI = "ia_ori";
    public static final String JSON_KEY_IA_RST = "ia_rst";
    public static final String JSON_KEY_IA_URL = "ia_url";
    public static final String JSON_KEY_JM_DO = "jm_do";
    public static final String JSON_KEY_MOF_TEMPLATE_URL = "mof_template_url";
    public static final String JSON_KEY_MOF_TPLID = "mof_tplid";
    public static final String JSON_KEY_NSCPT = "nscpt";
    public static final String JSON_KEY_ONLY_IMPRESSION_URL = "only_impression_url";
    public static final String JSON_KEY_PARENT_SESSION_ID = "parent_session_id";
    public static final String JSON_KEY_PV_URLS = "pv_urls";
    public static final String JSON_KEY_REPLACE_TMP = "replace_tmp";
    public static final String JSON_KEY_REQ_EXT_DATA = "req_ext_data";
    public static final String JSON_KEY_RKS = "rks";
    public static final String JSON_KEY_SESSION_ID = "a";
    public static final String JSON_KEY_SH = "sh";
    public static final String JSON_KEY_TEMPLATE = "template";
    public static final String JSON_KEY_TOKEN_RULE = "token_r";
    public static final String JSON_KEY_UNIT_SIZE = "unit_size";
    public static final String JSON_KEY_VCN = "vcn";
    public static final String KEY_IRLFA = "irlfa";
    private static final String TAG = CampaignUnit.class.getSimpleName();
    private static final long serialVersionUID = 1;
    private String adHtml;
    private int adType;
    private String adZip;
    public ArrayList<CampaignEx> ads;
    private String bannerHtml;
    private String bannerUrl;
    private String csp;
    private String domain;
    private HashMap<String, String> epMap;
    private String htmlUrl;
    private String ia_all_ext1;
    private String ia_all_ext2;
    private String ia_icon;
    private int ia_ori;
    private int ia_rst;
    private String ia_url;
    private int jmDo;
    private List<Frame> listFrames;
    private String onlyImpressionUrl;
    private String parentSessionId;
    private String requestId;
    private HashMap<String, String> rks;
    private String sessionId;
    private String sh;
    private int template;
    private int tokenRule;
    private String unitSize;
    private int vcn;
    private String msg = "";
    private StringBuffer cParams = new StringBuffer();
    private String encryptPrice = "";

    private Object nullToEmpty(Object obj) {
        return obj == null ? "" : obj;
    }

    public String getMsg() {
        return this.msg;
    }

    public void setMsg(String str) {
        this.msg = str;
    }

    public String getAdZip() {
        return this.adZip;
    }

    public void setAdZip(String str) {
        this.adZip = str;
    }

    public String getAdHtml() {
        return this.adHtml;
    }

    public void setAdHtml(String str) {
        this.adHtml = str;
    }

    public String getBannerUrl() {
        return this.bannerUrl;
    }

    public void setBannerUrl(String str) {
        this.bannerUrl = str;
    }

    public String getBannerHtml() {
        return this.bannerHtml;
    }

    public void setBannerHtml(String str) {
        this.bannerHtml = str;
    }

    public String getIa_icon() {
        return this.ia_icon;
    }

    public void setIa_icon(String str) {
        this.ia_icon = str;
    }

    public int getIa_rst() {
        return this.ia_rst;
    }

    public void setIa_rst(int i) {
        this.ia_rst = i;
    }

    public String getIa_url() {
        return this.ia_url;
    }

    public void setIa_url(String str) {
        this.ia_url = str;
    }

    public int getIa_ori() {
        return this.ia_ori;
    }

    public void setIa_ori(int i) {
        this.ia_ori = i;
    }

    public String getIa_all_ext1() {
        return this.ia_all_ext1;
    }

    public void setIa_all_ext1(String str) {
        this.ia_all_ext1 = str;
    }

    public String getIa_all_ext2() {
        return this.ia_all_ext2;
    }

    public void setIa_all_ext2(String str) {
        this.ia_all_ext2 = str;
    }

    public String getEncryptPrice() {
        return this.encryptPrice;
    }

    public void setEncryptPrice(String str) {
        this.encryptPrice = str;
    }

    public int getVcn() {
        int i = this.vcn;
        if (i > 1) {
            return i;
        }
        return 1;
    }

    public void setVcn(int i) {
        this.vcn = i;
    }

    public int getTokenRule() {
        int i = this.tokenRule;
        if (i == 1) {
            return i;
        }
        return 0;
    }

    public void setTokenRule(int i) {
        this.tokenRule = i;
    }

    public HashMap<String, String> getRks() {
        return this.rks;
    }

    public void setRks(HashMap<String, String> map) {
        this.rks = map;
    }

    public HashMap<String, String> getEpMap() {
        return this.epMap;
    }

    public void setEpMap(HashMap<String, String> map) {
        this.epMap = map;
    }

    public String getCsp() {
        return this.csp;
    }

    public void setCsp(String str) {
        this.csp = str;
    }

    public String getDomain() {
        return this.domain;
    }

    public void setDomain(String str) {
        this.domain = str;
    }

    public String getSh() {
        return this.sh;
    }

    public void setSh(String str) {
        this.sh = str;
    }

    public int getJmDo() {
        return this.jmDo;
    }

    public void setJmDo(int i) {
        this.jmDo = i;
    }

    public List<Frame> getListFrames() {
        return this.listFrames;
    }

    public void setListFrames(List<Frame> list) {
        this.listFrames = list;
    }

    public String getSessionId() {
        return this.sessionId;
    }

    public void setSessionId(String str) {
        this.sessionId = str;
    }

    public String getParentSessionId() {
        return this.parentSessionId;
    }

    public void setParentSessionId(String str) {
        this.parentSessionId = str;
    }

    public int getAdType() {
        return this.adType;
    }

    public void setAdType(int i) {
        this.adType = i;
    }

    public String getUnitSize() {
        return this.unitSize;
    }

    public void setUnitSize(String str) {
        this.unitSize = str;
    }

    public String getHtmlUrl() {
        return this.htmlUrl;
    }

    public void setHtmlUrl(String str) {
        this.htmlUrl = str;
    }

    public String getOnlyImpressionUrl() {
        return this.onlyImpressionUrl;
    }

    public void setOnlyImpressionUrl(String str) {
        this.onlyImpressionUrl = str;
    }

    public ArrayList<CampaignEx> getAds() {
        return this.ads;
    }

    public void setAds(ArrayList<CampaignEx> arrayList) {
        this.ads = arrayList;
    }

    public int getTemplate() {
        return this.template;
    }

    public void setTemplate(int i) {
        this.template = i;
    }

    public String assembCParams() {
        String strValueOf;
        String str;
        StringBuffer stringBuffer = this.cParams;
        if (stringBuffer != null && stringBuffer.length() > 0) {
            return this.cParams.toString();
        }
        try {
            String strE = v.E();
            String strE2 = v.e(com.mbridge.msdk.foundation.controller.a.f().j());
            String strD = v.d(com.mbridge.msdk.foundation.controller.a.f().j());
            if (com.mbridge.msdk.foundation.controller.authoritycontroller.a.a().a(MBridgeConstans.AUTHORITY_GENERAL_DATA)) {
                strValueOf = String.valueOf(v.D(com.mbridge.msdk.foundation.controller.a.f().j()));
                str = v.x(com.mbridge.msdk.foundation.controller.a.f().j()) + "x" + v.y(com.mbridge.msdk.foundation.controller.a.f().j());
            } else {
                strValueOf = "";
                str = strValueOf;
            }
            StringBuffer stringBuffer2 = this.cParams;
            stringBuffer2.append(getAdType());
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty("1"));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(Build.VERSION.RELEASE));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(MBConfiguration.SDK_VERSION));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(v.x()));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(str));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(Integer.valueOf(v.t(com.mbridge.msdk.foundation.controller.a.f().j()))));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(v.s(com.mbridge.msdk.foundation.controller.a.f().j())));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(strValueOf));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(strD));
            stringBuffer2.append(nullToEmpty(strE2));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(v.b(com.mbridge.msdk.foundation.controller.a.f().j())));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(v.i(com.mbridge.msdk.foundation.controller.a.f().j())));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(v.g(com.mbridge.msdk.foundation.controller.a.f().j())));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(strE));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(""));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(v.z()));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(""));
            stringBuffer2.append("|");
            stringBuffer2.append("");
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(""));
            stringBuffer2.append("|");
            stringBuffer2.append(nullToEmpty(com.mbridge.msdk.foundation.same.a.t + Constants.ACCEPT_TIME_SEPARATOR_SP + com.mbridge.msdk.foundation.same.a.u));
            stringBuffer2.append("|");
            this.cParams = stringBuffer2;
        } catch (Throwable th) {
            z.c(TAG, th.getMessage(), th);
        }
        return this.cParams.toString();
    }

    public static CampaignUnit parseV5CampaignUnit(JSONObject jSONObject) {
        return parseV5CampaignUnit(jSONObject, "");
    }

    public static CampaignUnit parseCampaignUnit(JSONObject jSONObject) {
        return parseCampaignUnit(jSONObject, "");
    }

    public String getRequestId() {
        try {
            if (!TextUtils.isEmpty(this.requestId)) {
                return this.requestId;
            }
            if (TextUtils.isEmpty(this.onlyImpressionUrl)) {
                return "";
            }
            Uri uri = Uri.parse(this.onlyImpressionUrl);
            if (uri != null) {
                this.requestId = uri.getQueryParameter("k");
            }
            return this.requestId;
        } catch (Exception unused) {
            return "";
        }
    }

    public static CampaignUnit parseV5CampaignUnit(JSONObject jSONObject, String str) {
        return parseCampaignUnit(jSONObject, str);
    }

    private static void getSysIDAndBKUPID(JSONObject jSONObject) {
        FastKV fastKVBuild = null;
        if (com.mbridge.msdk.foundation.controller.b.a().d()) {
            try {
                fastKVBuild = new FastKV.Builder(com.mbridge.msdk.foundation.same.b.e.b(com.mbridge.msdk.foundation.same.b.c.m), t.b(com.tkay.expressad.foundation.h.v.a)).build();
            } catch (Exception unused) {
            }
        }
        if (fastKVBuild != null) {
            try {
                Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                if (jSONObject == null || contextJ == null) {
                    return;
                }
                String strOptString = jSONObject.optString("b");
                if (!TextUtils.isEmpty(strOptString) && !TextUtils.equals(com.mbridge.msdk.foundation.same.a.t, strOptString)) {
                    com.mbridge.msdk.foundation.same.a.t = strOptString;
                    com.mbridge.msdk.foundation.a.a.a.a().a("b", com.mbridge.msdk.foundation.same.a.t);
                    try {
                        fastKVBuild.putString(t.b(com.tkay.expressad.foundation.g.a.cj), com.mbridge.msdk.foundation.same.a.t);
                    } catch (Exception unused2) {
                    }
                }
                String strOptString2 = jSONObject.optString("c");
                if (TextUtils.isEmpty(strOptString2) || TextUtils.equals(com.mbridge.msdk.foundation.same.a.u, strOptString2)) {
                    return;
                }
                com.mbridge.msdk.foundation.same.a.u = strOptString2;
                com.mbridge.msdk.foundation.a.a.a.a().a("c", com.mbridge.msdk.foundation.same.a.u);
                try {
                    fastKVBuild.putString(t.b(com.tkay.expressad.foundation.g.a.cm), com.mbridge.msdk.foundation.same.a.u);
                    return;
                } catch (Exception unused3) {
                    return;
                }
            } catch (Exception e) {
                e.printStackTrace();
                return;
            }
        }
        try {
            Context contextJ2 = com.mbridge.msdk.foundation.controller.a.f().j();
            if (jSONObject == null || contextJ2 == null) {
                return;
            }
            String strOptString3 = jSONObject.optString("b");
            if (!TextUtils.isEmpty(strOptString3) && !TextUtils.equals(com.mbridge.msdk.foundation.same.a.t, strOptString3)) {
                com.mbridge.msdk.foundation.same.a.t = strOptString3;
                com.mbridge.msdk.foundation.a.a.a.a().a("b", com.mbridge.msdk.foundation.same.a.t);
                SharedPreferences sharedPreferences = contextJ2.getSharedPreferences(t.b(com.tkay.expressad.foundation.h.v.a), 0);
                if (sharedPreferences != null) {
                    SharedPreferences.Editor editorEdit = sharedPreferences.edit();
                    editorEdit.putString(t.b(com.tkay.expressad.foundation.g.a.cj), com.mbridge.msdk.foundation.same.a.t);
                    editorEdit.apply();
                }
            }
            String strOptString4 = jSONObject.optString("c");
            if (TextUtils.isEmpty(strOptString4) || TextUtils.equals(com.mbridge.msdk.foundation.same.a.u, strOptString4)) {
                return;
            }
            com.mbridge.msdk.foundation.same.a.u = strOptString4;
            com.mbridge.msdk.foundation.a.a.a.a().a("c", com.mbridge.msdk.foundation.same.a.u);
            SharedPreferences sharedPreferences2 = contextJ2.getSharedPreferences(t.b(com.tkay.expressad.foundation.h.v.a), 0);
            if (sharedPreferences2 != null) {
                SharedPreferences.Editor editorEdit2 = sharedPreferences2.edit();
                editorEdit2.putString(t.b(com.tkay.expressad.foundation.g.a.cm), com.mbridge.msdk.foundation.same.a.u);
                editorEdit2.apply();
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:83:0x0393 A[PHI: r13
      0x0393: PHI (r13v21 com.mbridge.msdk.foundation.entity.CampaignUnit) = 
      (r13v9 com.mbridge.msdk.foundation.entity.CampaignUnit)
      (r13v22 com.mbridge.msdk.foundation.entity.CampaignUnit)
      (r13v22 com.mbridge.msdk.foundation.entity.CampaignUnit)
     binds: [B:55:0x02d6, B:60:0x02f3, B:62:0x02f9] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Type update failed for variable: r15v0 ??, new type: com.mbridge.msdk.foundation.entity.CampaignUnit
    jadx.core.utils.exceptions.JadxOverflowException: Type inference error: updates count limit reached with updateSeq = 9321. Try increasing type updates limit count.
    	at jadx.core.dex.visitors.typeinference.TypeUpdateInfo.requestUpdate(TypeUpdateInfo.java:37)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:224)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.applyInvokeTypes(TypeUpdate.java:381)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.invokeListener(TypeUpdate.java:364)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:480)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:197)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.allSameListener(TypeUpdate.java:473)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.moveListener(TypeUpdate.java:454)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.runListeners(TypeUpdate.java:241)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.requestUpdate(TypeUpdate.java:225)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeForSsaVar(TypeUpdate.java:202)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.updateTypeChecked(TypeUpdate.java:119)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.apply(TypeUpdate.java:86)
    	at jadx.core.dex.visitors.typeinference.TypeUpdate.apply(TypeUpdate.java:58)
    	at jadx.core.dex.visitors.typeinference.TypeInferenceVisitor.calculateFromBounds(TypeInferenceVisitor.java:147)
    	at jadx.core.dex.visitors.typeinference.TypeInferenceVisitor.setBestType(TypeInferenceVisitor.java:125)
    	at jadx.core.dex.visitors.typeinference.TypeInferenceVisitor.lambda$runTypePropagation$1(TypeInferenceVisitor.java:103)
    	at java.base/java.util.ArrayList.forEach(Unknown Source)
    	at jadx.core.dex.visitors.typeinference.TypeInferenceVisitor.runTypePropagation(TypeInferenceVisitor.java:103)
    	at jadx.core.dex.visitors.typeinference.TypeInferenceVisitor.visit(TypeInferenceVisitor.java:75)
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static CampaignUnit parseCampaignUnit(JSONObject jSONObject, String str) {
        CampaignUnit campaignUnit;
        CampaignUnit campaignUnit2;
        String str2;
        String str3;
        ArrayList arrayList;
        CampaignUnit campaignUnit3;
        int i;
        String str4;
        String str5;
        String strOptString;
        String str6;
        JSONArray jSONArray;
        String str7;
        int i2;
        String str8;
        String str9;
        JSONObject jSONObject2 = jSONObject;
        String str10 = "ads";
        String str11 = "template";
        String str12 = "only_impression_url";
        String str13 = "html_url";
        if (jSONObject2 == null) {
            return null;
        }
        try {
            CampaignUnit campaignUnit4 = new CampaignUnit();
            try {
                String strOptString2 = jSONObject2.optString("rks");
                if (!TextUtils.isEmpty(strOptString2)) {
                    try {
                        JSONObject jSONObject3 = new JSONObject(strOptString2);
                        Iterator<String> itKeys = jSONObject3.keys();
                        HashMap<String, String> map = new HashMap<>();
                        while (itKeys != null && itKeys.hasNext()) {
                            String next = itKeys.next();
                            map.put(next, jSONObject3.optString(next));
                        }
                        campaignUnit4.setRks(map);
                    } catch (Exception unused) {
                        campaignUnit = campaignUnit4;
                        z.d(TAG, "parse campaign unit exception");
                        return campaignUnit;
                    }
                }
                if (!TextUtils.isEmpty(str)) {
                    HashMap<String, String> map2 = new HashMap<>();
                    map2.put("encrypt_p", "");
                    map2.put("irlfa", "");
                    campaignUnit4.setEpMap(map2);
                }
                JSONObject jSONObjectOptJSONObject = jSONObject2.optJSONObject("req_ext_data");
                int iOptInt = jSONObject2.optInt("nscpt", 1);
                String strOptString3 = jSONObject2.optString("mof_template_url", "");
                int iOptInt2 = jSONObject2.optInt("mof_tplid", 0);
                String string = jSONObjectOptJSONObject != null ? jSONObjectOptJSONObject.toString() : "";
                new JSONArray();
                JSONArray jSONArrayOptJSONArray = jSONObject2.optJSONArray("pv_urls");
                if (jSONArrayOptJSONArray == null || jSONArrayOptJSONArray.length() <= 0) {
                    str2 = string;
                    str3 = strOptString3;
                    arrayList = null;
                } else {
                    str2 = string;
                    arrayList = new ArrayList(jSONArrayOptJSONArray.length());
                    str3 = strOptString3;
                    for (int i3 = 0; i3 < jSONArrayOptJSONArray.length(); i3++) {
                        arrayList.add(jSONArrayOptJSONArray.getString(i3));
                    }
                }
                com.mbridge.msdk.foundation.db.a.a.a().a(jSONObject2.optJSONObject("replace_tmp"), true);
                getSysIDAndBKUPID(jSONObject);
                campaignUnit4.setSessionId(jSONObject2.optString("a"));
                campaignUnit4.setParentSessionId(jSONObject2.optString("parent_session_id"));
                campaignUnit4.setAdType(jSONObject2.optInt("ad_type"));
                campaignUnit4.setUnitSize(jSONObject2.optString("unit_size"));
                campaignUnit4.setHtmlUrl(jSONObject2.optString("html_url"));
                campaignUnit4.setOnlyImpressionUrl(jSONObject2.optString("only_impression_url"));
                campaignUnit4.setTemplate(jSONObject2.optInt("template"));
                campaignUnit4.setJmDo(jSONObject2.optInt("jm_do"));
                campaignUnit4.setIa_icon(jSONObject2.optString("ia_icon"));
                campaignUnit4.setIa_rst(jSONObject2.optInt("ia_rst"));
                campaignUnit4.setIa_url(jSONObject2.optString("ia_url"));
                campaignUnit4.setIa_ori(jSONObject2.optInt("ia_ori"));
                campaignUnit4.setIa_all_ext1(jSONObject2.optString("ia_all_ext1"));
                campaignUnit4.setIa_all_ext2(jSONObject2.optString("ia_all_ext2"));
                campaignUnit4.setVcn(jSONObject2.optInt("vcn"));
                campaignUnit4.setTokenRule(jSONObject2.optInt("token_r"));
                campaignUnit4.setEncryptPrice(jSONObject2.optString("encrypt_p"));
                JSONArray jSONArrayOptJSONArray2 = jSONObject2.optJSONArray("ads");
                JSONArray jSONArrayOptJSONArray3 = jSONObject2.optJSONArray("frames");
                String str14 = "end_screen_url";
                if (jSONArrayOptJSONArray3 != null) {
                    try {
                        if (jSONArrayOptJSONArray3.length() > 0) {
                            ArrayList arrayList2 = new ArrayList();
                            String str15 = "parse campaign error ,campaign is null";
                            ArrayList arrayList3 = arrayList;
                            int i4 = 0;
                            while (i4 < jSONArrayOptJSONArray3.length()) {
                                JSONObject jSONObjectOptJSONObject2 = jSONArrayOptJSONArray3.optJSONObject(i4);
                                int i5 = i4;
                                JSONArray jSONArray2 = jSONObjectOptJSONObject2.getJSONArray(str10);
                                String str16 = str10;
                                ArrayList arrayList4 = new ArrayList();
                                String str17 = str11;
                                JSONObject jSONObject4 = jSONObjectOptJSONObject2;
                                int i6 = 0;
                                while (i6 < jSONArray2.length()) {
                                    JSONObject jSONObjectOptJSONObject3 = jSONArray2.optJSONObject(i6);
                                    String strOptString4 = jSONObject2.optString(str12);
                                    String strOptString5 = jSONObject2.optString(str13);
                                    String str18 = str14;
                                    String str19 = str15;
                                    JSONObject jSONObject5 = jSONObject4;
                                    JSONArray jSONArray3 = jSONArrayOptJSONArray3;
                                    String str20 = str2;
                                    String str21 = str13;
                                    String str22 = str3;
                                    String str23 = str12;
                                    ArrayList arrayList5 = arrayList2;
                                    ArrayList arrayList6 = arrayList3;
                                    int i7 = i5;
                                    JSONArray jSONArray4 = jSONArray2;
                                    int i8 = iOptInt;
                                    CampaignUnit campaignUnit5 = campaignUnit4;
                                    try {
                                        CampaignEx campaign = CampaignEx.parseCampaign(jSONObjectOptJSONObject3, strOptString4, strOptString5, jSONObject2.optString(str14), false, campaignUnit4, str);
                                        if (campaign != null) {
                                            try {
                                                campaign.setKeyIaUrl(campaignUnit5.getIa_url());
                                                campaign.setKeyIaOri(campaignUnit5.getIa_ori());
                                                campaign.setKeyIaRst(campaignUnit5.getIa_rst());
                                                campaign.setKeyIaIcon(campaignUnit5.getIa_icon());
                                                campaign.setAdType(jSONObject2.optInt("ad_type"));
                                                campaign.setIa_ext1(jSONObject2.optString("ia_ext1"));
                                                campaign.setIa_ext2(jSONObject2.optString("ia_ext2"));
                                                campaign.setVcn(campaignUnit5.getVcn());
                                                campaign.setTokenRule(campaignUnit5.getTokenRule());
                                                campaign.setEncryptPrice(campaignUnit5.getEncryptPrice());
                                                campaign.setMof_tplid(iOptInt2);
                                                campaign.setMof_template_url(str22);
                                                i = i8;
                                                campaign.setNscpt(i);
                                                campaign.setPv_urls(arrayList6);
                                                str4 = str20;
                                                campaign.setReq_ext_data(str4);
                                                arrayList4.add(campaign);
                                                campaignUnit3 = campaignUnit5;
                                                str5 = str19;
                                            } catch (Exception unused2) {
                                                campaignUnit = campaignUnit5;
                                                z.d(TAG, "parse campaign unit exception");
                                                return campaignUnit;
                                            }
                                        } else {
                                            str4 = str20;
                                            i = i8;
                                            campaignUnit3 = campaignUnit5;
                                            str5 = str19;
                                            try {
                                                campaignUnit3.setMsg(str5);
                                            } catch (Exception unused3) {
                                                campaignUnit = campaignUnit3;
                                                z.d(TAG, "parse campaign unit exception");
                                                return campaignUnit;
                                            }
                                        }
                                        i6++;
                                        arrayList3 = arrayList6;
                                        str12 = str23;
                                        arrayList2 = arrayList5;
                                        str14 = str18;
                                        jSONObject4 = jSONObject5;
                                        str3 = str22;
                                        str13 = str21;
                                        str2 = str4;
                                        iOptInt = i;
                                        campaignUnit4 = campaignUnit3;
                                        jSONArray2 = jSONArray4;
                                        i5 = i7;
                                        str15 = str5;
                                        jSONArrayOptJSONArray3 = jSONArray3;
                                    } catch (Exception unused4) {
                                        campaignUnit3 = campaignUnit5;
                                        campaignUnit = campaignUnit3;
                                        z.d(TAG, "parse campaign unit exception");
                                        return campaignUnit;
                                    }
                                }
                                CampaignUnit campaignUnit6 = campaignUnit4;
                                JSONObject jSONObject6 = jSONObject4;
                                ArrayList arrayList7 = arrayList2;
                                int i9 = iOptInt;
                                String str24 = str2;
                                Frame frame = new Frame();
                                frame.setParentSessionId(jSONObject2.optString("parent_session_id"));
                                frame.setSessionId(jSONObject2.optString("a"));
                                frame.setCampaigns(arrayList4);
                                frame.setTemplate(jSONObject6.optInt(str17));
                                arrayList7.add(frame);
                                arrayList2 = arrayList7;
                                arrayList3 = arrayList3;
                                str12 = str12;
                                str10 = str16;
                                str3 = str3;
                                str13 = str13;
                                str2 = str24;
                                iOptInt = i9;
                                campaignUnit4 = campaignUnit6;
                                i4 = i5 + 1;
                                str11 = str17;
                                str14 = str14;
                                str15 = str15;
                                jSONArrayOptJSONArray3 = jSONArrayOptJSONArray3;
                            }
                            campaignUnit3 = campaignUnit4;
                            campaignUnit3.setListFrames(arrayList2);
                            campaignUnit2 = campaignUnit3;
                        }
                        return campaignUnit2;
                    } catch (Exception unused5) {
                        campaignUnit3 = campaignUnit4;
                    }
                }
                String str25 = "end_screen_url";
                String str26 = "parse campaign error ,campaign is null";
                String str27 = str3;
                String str28 = "only_impression_url";
                ArrayList arrayList8 = arrayList;
                campaignUnit3 = campaignUnit4;
                int i10 = iOptInt;
                String str29 = str2;
                String str30 = "html_url";
                if (jSONArrayOptJSONArray2 != null) {
                    try {
                        if (jSONArrayOptJSONArray2.length() > 0) {
                            ArrayList<CampaignEx> arrayList9 = new ArrayList<>();
                            int i11 = 0;
                            while (i11 < jSONArrayOptJSONArray2.length()) {
                                JSONObject jSONObjectOptJSONObject4 = jSONArrayOptJSONArray2.optJSONObject(i11);
                                String str31 = str28;
                                String strOptString6 = jSONObject2.optString(str31);
                                String str32 = str30;
                                String strOptString7 = jSONObject2.optString(str32);
                                CampaignUnit campaignUnit7 = campaignUnit3;
                                String str33 = str25;
                                try {
                                    strOptString = jSONObject2.optString(str33);
                                    str6 = str26;
                                    jSONArray = jSONArrayOptJSONArray2;
                                    str7 = str29;
                                    i2 = i10;
                                } catch (Exception unused6) {
                                    campaignUnit2 = campaignUnit7;
                                }
                                try {
                                    CampaignEx campaign2 = CampaignEx.parseCampaign(jSONObjectOptJSONObject4, strOptString6, strOptString7, strOptString, false, campaignUnit7, str);
                                    if (campaign2 != null) {
                                        try {
                                            campaign2.setMof_tplid(iOptInt2);
                                            campaign2.setMof_template_url(str27);
                                            campaign2.setNscpt(i2);
                                            campaign2.setPv_urls(arrayList8);
                                            str8 = str7;
                                            campaign2.setReq_ext_data(str8);
                                            campaign2.setVcn(campaignUnit7.getVcn());
                                            campaign2.setTokenRule(campaignUnit7.getTokenRule());
                                            campaign2.setEncryptPrice(campaignUnit7.getEncryptPrice());
                                            arrayList9.add(campaign2);
                                            campaignUnit2 = campaignUnit7;
                                            str9 = str6;
                                        } catch (Exception unused7) {
                                            campaignUnit = campaignUnit7;
                                            z.d(TAG, "parse campaign unit exception");
                                            return campaignUnit;
                                        }
                                    } else {
                                        str8 = str7;
                                        campaignUnit2 = campaignUnit7;
                                        str9 = str6;
                                        try {
                                            campaignUnit2.setMsg(str9);
                                        } catch (Exception unused8) {
                                            campaignUnit = campaignUnit2;
                                            z.d(TAG, "parse campaign unit exception");
                                            return campaignUnit;
                                        }
                                    }
                                    i11++;
                                    i10 = i2;
                                    str28 = str31;
                                    str30 = str32;
                                    jSONArrayOptJSONArray2 = jSONArray;
                                    campaignUnit3 = campaignUnit2;
                                    str29 = str8;
                                    str25 = str33;
                                    jSONObject2 = jSONObject;
                                    str26 = str9;
                                } catch (Exception unused9) {
                                    campaignUnit2 = campaignUnit7;
                                    campaignUnit = campaignUnit2;
                                    z.d(TAG, "parse campaign unit exception");
                                    return campaignUnit;
                                }
                            }
                            campaignUnit2 = campaignUnit3;
                            campaignUnit2.setAds(arrayList9);
                        } else {
                            campaignUnit2 = campaignUnit3;
                        }
                    } catch (Exception unused10) {
                        campaignUnit2 = campaignUnit3;
                    }
                }
                return campaignUnit2;
            } catch (Exception unused11) {
                campaignUnit2 = campaignUnit4;
            }
        } catch (Exception unused12) {
            campaignUnit = null;
        }
    }
}
