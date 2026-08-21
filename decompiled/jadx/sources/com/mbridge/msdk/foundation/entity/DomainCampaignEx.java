package com.mbridge.msdk.foundation.entity;

import android.net.Uri;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.click.CommonJumpLoader;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.ApkDisplayInfo;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.system.NoProGuard;
import java.io.Serializable;
import java.net.URLEncoder;
import java.util.HashMap;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class DomainCampaignEx extends Campaign implements NoProGuard, Serializable {
    public static final String JSON_KEY_ADV_ID = "adv_id";
    public static final String JSON_KEY_AD_TRACKING_APK_END = "apk_download_end";
    public static final String JSON_KEY_AD_TRACKING_APK_INSTALL = "apk_install";
    public static final String JSON_KEY_AD_TRACKING_APK_START = "apk_download_start";
    public static final String JSON_KEY_AKDLUI = "akdlui";
    public static final String JSON_KEY_APK_ALT = "apk_alt";
    public static final String JSON_KEY_APK_INFO = "apk_info";
    public static final String JSON_KEY_ATAT_TYPE = "atat_type";
    public static final String JSON_KEY_DISPLAY_APK_ALT = "disableApkAlt";
    public static final String JSON_KEY_NTBARPASBL = "ntbarpasbl";
    public static final String JSON_KEY_NTBARPT = "ntbarpt";
    public static final String JSON_KEY_PRE_CLICK = "ttc";
    public static final String JSON_KEY_PRE_CLICK_ERROR_INTERVAL = "ttc_pe";
    public static final String JSON_KEY_PRE_CLICK_INTERVAL = "ttc_ct";
    public static final String JSON_KEY_PRE_CLICK_OTHER_INTERVAL = "ttc_po";
    public static final String JSON_KEY_TTC_CT2 = "ttc_ct2";
    public static final String JSON_KEY_TTC_TYPE = "ttc_type";
    public static final String KEY_BIND_ID = "bind_id";
    public static final String KEY_GH_ID = "gh_id";
    public static final String KEY_GH_PATH = "gh_path";
    public static final String LOOPBACK = "loopback";
    public static final String LOOPBACK_DOMAIN = "domain";
    public static final String LOOPBACK_KEY = "key";
    public static final String LOOPBACK_VALUE = "value";
    public static final String ROVER_KEY_IS_POST = "isPost";
    public static final String ROVER_KEY_MARK = "mark";
    public static final String TAG = DomainCampaignEx.class.getSimpleName();
    public static final int TTC_CT2_DEFAULT_VALUE = 1800;
    public static final int TTC_CT_DEFAULT_VALUE = 604800;
    private static final long serialVersionUID = 1;
    private String advId;
    private String bindId;
    private String ghId;
    private String ghPath;
    private CommonJumpLoader.JumpLoaderResult jumpResult;
    private Map<String, String> loopbackMap;
    private String loopbackString;
    private int preClickInterval;
    private int roverIsPost;
    private String roverMark;
    private int ttc_ct2;
    private int ttc_type;
    private int apk_alt = 0;
    private int displayApkAlt = 0;
    private int ntbarpt = 0;
    private int ntbarpasbl = 0;
    private int atatType = 0;
    private String akdlui = "";
    private boolean preClick = false;

    public int getDisplayApkAlt() {
        return this.displayApkAlt;
    }

    public void setDisplayApkAlt(int i) {
        this.displayApkAlt = i;
    }

    public void setApkAlt(int i) {
        this.apk_alt = i;
    }

    public int getApkAlt() {
        return this.apk_alt;
    }

    public int getNtbarpt() {
        return this.ntbarpt;
    }

    public void setNtbarpt(int i) {
        this.ntbarpt = i;
    }

    public int getNtbarpasbl() {
        return this.ntbarpasbl;
    }

    public void setNtbarpasbl(int i) {
        this.ntbarpasbl = i;
    }

    public int getAtatType() {
        return this.atatType;
    }

    public void setAtatType(int i) {
        this.atatType = i;
    }

    public String getAkdlui() {
        return this.akdlui;
    }

    public void setAkdlui(String str) {
        this.akdlui = str;
    }

    public String getGhId() {
        return this.ghId;
    }

    public void setGhId(String str) {
        this.ghId = str;
    }

    public String getGhPath() {
        return this.ghPath;
    }

    public void setGhPath(String str) {
        this.ghPath = str;
    }

    public String getBindId() {
        return this.bindId;
    }

    public void setBindId(String str) {
        this.bindId = str;
    }

    public Map<String, String> getLoopbackMap() {
        return this.loopbackMap;
    }

    public void setLoopbackMap(Map<String, String> map) {
        this.loopbackMap = map;
    }

    public String getLoopbackString() {
        return this.loopbackString;
    }

    public void setLoopbackString(String str) {
        this.loopbackString = str;
    }

    public String getRoverMark() {
        return this.roverMark;
    }

    public void setRoverMark(String str) {
        this.roverMark = str;
    }

    public int getRoverIsPost() {
        return this.roverIsPost;
    }

    public void setRoverIsPost(int i) {
        this.roverIsPost = i;
    }

    public int getTtc_ct2() {
        return this.ttc_ct2;
    }

    public void setTtc_ct2(int i) {
        this.ttc_ct2 = i;
    }

    public int getTtc_type() {
        return this.ttc_type;
    }

    public void setTtc_type(int i) {
        this.ttc_type = i;
    }

    public String getAdvId() {
        return this.advId;
    }

    public void setAdvId(String str) {
        this.advId = str;
    }

    public int getPreClickInterval() {
        return this.preClickInterval;
    }

    public void setPreClickInterval(int i) {
        this.preClickInterval = i;
    }

    public boolean isPreClick() {
        return this.preClick;
    }

    public void setPreClick(boolean z) {
        this.preClick = z;
    }

    public CommonJumpLoader.JumpLoaderResult getJumpResult() {
        return this.jumpResult;
    }

    public void setJumpResult(CommonJumpLoader.JumpLoaderResult jumpLoaderResult) {
        this.jumpResult = jumpLoaderResult;
    }

    public static CampaignEx parseCampaignWithBackData(JSONObject jSONObject, CampaignEx campaignEx) {
        if (jSONObject == null || campaignEx == null) {
            return null;
        }
        try {
            campaignEx.setPreClick(jSONObject.optBoolean("ttc"));
            campaignEx.setPreClickInterval(jSONObject.optInt("ttc_ct", 604800));
            campaignEx.setAdvId(jSONObject.optString("adv_id"));
            campaignEx.setTtc_type(jSONObject.optInt("ttc_type", 3));
            campaignEx.setTtc_ct2(jSONObject.optInt("ttc_ct2", 1800));
            campaignEx.setTimestamp(System.currentTimeMillis());
            campaignEx.setHtmlUrl(jSONObject.optString("html_url"));
            campaignEx.setEndScreenUrl(jSONObject.optString("end_screen_url"));
            campaignEx.setRoverMark(jSONObject.optString("mark"));
            campaignEx.setRoverIsPost(jSONObject.optInt("isPost"));
            try {
                if (jSONObject.has("loopback")) {
                    String strOptString = jSONObject.optString("loopback");
                    if (!TextUtils.isEmpty(strOptString)) {
                        campaignEx.setLoopbackString(strOptString);
                        campaignEx.setLoopbackMap(loopbackStrToMap(strOptString));
                    }
                }
            } catch (Exception unused) {
                z.d("", "loopback parser error");
            }
            String strOptString2 = jSONObject.optString("gh_id");
            if (!TextUtils.isEmpty(strOptString2)) {
                campaignEx.setGhId(strOptString2);
                String strOptString3 = jSONObject.optString("gh_path");
                if (!TextUtils.isEmpty(strOptString3)) {
                    campaignEx.setGhPath(t.b(strOptString3));
                }
                campaignEx.setBindId(jSONObject.optString("bind_id"));
            }
            campaignEx.setApkAlt(jSONObject.optInt("apk_alt", 0));
            campaignEx.setDisplayApkAlt(jSONObject.optInt("disableApkAlt", 0));
            campaignEx.setApkDisplayInfo(ApkDisplayInfo.parseByString(jSONObject.optString("apk_info")));
            campaignEx.setNtbarpasbl(jSONObject.optInt("ntbarpasbl", 0));
            campaignEx.setNtbarpt(jSONObject.optInt("ntbarpt", 0));
            campaignEx.setAtatType(jSONObject.optInt("atat_type", 0));
            campaignEx.setAkdlui(jSONObject.optString("akdlui", ""));
            return campaignEx;
        } catch (Exception e) {
            e.printStackTrace();
            z.d(TAG, "parse campaign json exception: " + e.getLocalizedMessage());
            return campaignEx;
        }
    }

    protected static String replaceValueByKey(CampaignUnit campaignUnit, CampaignEx campaignEx, String str) {
        if (campaignUnit != null && !TextUtils.isEmpty(str) && campaignEx != null) {
            try {
                HashMap<String, String> rks = campaignUnit.getRks();
                if (rks != null) {
                    rks.entrySet().iterator();
                    for (Map.Entry<String, String> entry : rks.entrySet()) {
                        String key = entry.getKey();
                        str = str.replaceAll("\\{" + key + "\\}", entry.getValue());
                    }
                }
                HashMap<String, String> aks = campaignEx.getAks();
                if (aks != null) {
                    aks.entrySet().iterator();
                    for (Map.Entry<String, String> entry2 : aks.entrySet()) {
                        String key2 = entry2.getKey();
                        str = str.replaceAll("\\{" + key2 + "\\}", entry2.getValue());
                    }
                }
                HashMap<String, String> epMap = campaignUnit.getEpMap();
                if (epMap != null) {
                    for (Map.Entry<String, String> entry3 : epMap.entrySet()) {
                        String key3 = entry3.getKey();
                        str = str.replaceAll("\\{" + key3 + "\\}", entry3.getValue());
                    }
                }
                str = str.replaceAll("\\{c\\}", URLEncoder.encode(campaignUnit.assembCParams(), "utf-8"));
                Matcher matcher = Pattern.compile("=\\{.*?\\}").matcher(str);
                while (matcher.find()) {
                    str = str.replace(matcher.group(0), ContainerUtils.KEY_VALUE_DELIMITER);
                }
            } catch (Throwable th) {
                z.c(TAG, th.getMessage(), th);
            }
        }
        return str;
    }

    public static CampaignEx parseCampaign(JSONObject jSONObject, CampaignEx campaignEx) {
        if (jSONObject == null || campaignEx == null) {
            return null;
        }
        try {
            campaignEx.setPreClick(jSONObject.optBoolean("ttc"));
            campaignEx.setPreClickInterval(jSONObject.optInt("ttc_ct", 604800));
            campaignEx.setAdvId(jSONObject.optString("adv_id"));
            campaignEx.setTtc_type(jSONObject.optInt("ttc_type", 3));
            campaignEx.setTtc_ct2(jSONObject.optInt("ttc_ct2", 1800));
            campaignEx.setRoverMark(jSONObject.optString("mark"));
            campaignEx.setRoverIsPost(jSONObject.optInt("isPost"));
            try {
                if (jSONObject.has("loopback")) {
                    String strOptString = jSONObject.optString("loopback");
                    if (!TextUtils.isEmpty(strOptString)) {
                        campaignEx.setLoopbackString(strOptString);
                        campaignEx.setLoopbackMap(loopbackStrToMap(strOptString));
                    }
                }
            } catch (Exception unused) {
                z.d("", "loopback parser error");
            }
            String strOptString2 = jSONObject.optString("gh_id");
            if (!TextUtils.isEmpty(strOptString2)) {
                campaignEx.setGhId(strOptString2);
                String strOptString3 = jSONObject.optString("gh_path");
                if (!TextUtils.isEmpty(strOptString3)) {
                    campaignEx.setGhPath(t.b(strOptString3));
                }
                campaignEx.setBindId(jSONObject.optString("bind_id"));
            }
            campaignEx.setBannerHtml(jSONObject.optString("cam_html"));
            campaignEx.setAdHtml(jSONObject.optString("cam_html"));
            campaignEx.setApkAlt(jSONObject.optInt("apk_alt", 0));
            campaignEx.setDisplayApkAlt(jSONObject.optInt("disableApkAlt", 0));
            campaignEx.setApkDisplayInfo(ApkDisplayInfo.parseByString(jSONObject.optString("apk_info")));
            campaignEx.setNtbarpasbl(jSONObject.optInt("ntbarpasbl", 0));
            campaignEx.setNtbarpt(jSONObject.optInt("ntbarpt", 0));
            campaignEx.setAtatType(jSONObject.optInt("atat_type", 0));
            campaignEx.setAkdlui(jSONObject.optString("akdlui", ""));
            return campaignEx;
        } catch (Exception e) {
            e.printStackTrace();
            z.d(TAG, "parse campaign json exception: " + e.getLocalizedMessage());
            return campaignEx;
        }
    }

    public static Map<String, String> loopbackStrToMap(String str) {
        HashMap map = null;
        try {
            if (TextUtils.isEmpty(str)) {
                return null;
            }
            HashMap map2 = new HashMap();
            try {
                JSONObject jSONObject = new JSONObject(str);
                map2.put("domain", jSONObject.getString("domain"));
                map2.put("key", jSONObject.getString("key"));
                map2.put("value", jSONObject.getString("value"));
                return map2;
            } catch (Throwable unused) {
                map = map2;
            }
        } catch (Throwable unused2) {
        }
        z.d("", "loopbackStrToMap error");
        return map;
    }

    public static l trackingStr2Object(JSONObject jSONObject, l lVar) {
        if (jSONObject == null || lVar == null) {
            return null;
        }
        lVar.c(CampaignEx.processNativeVideoTrackingArray(jSONObject.optJSONArray("apk_download_start")));
        lVar.d(CampaignEx.processNativeVideoTrackingArray(jSONObject.optJSONArray("apk_download_end")));
        lVar.e(CampaignEx.processNativeVideoTrackingArray(jSONObject.optJSONArray("apk_install")));
        return lVar;
    }

    public static JSONObject campaignToJsonObject(JSONObject jSONObject, CampaignEx campaignEx) throws JSONException {
        if (campaignEx == null) {
            return jSONObject;
        }
        jSONObject.put("ttc", campaignEx.isPreClick());
        jSONObject.put("ttc_ct", campaignEx.getPreClickInterval());
        jSONObject.put("adv_id", campaignEx.getAdvId());
        jSONObject.put("ttc_type", campaignEx.getTtc_type());
        jSONObject.put("ttc_ct2", campaignEx.getTtc_ct2());
        jSONObject.put("gh_id", campaignEx.getGhId());
        jSONObject.put("gh_path", t.a(campaignEx.getGhPath()));
        jSONObject.put("bind_id", campaignEx.getBindId());
        jSONObject.put("apk_alt", campaignEx.getApkAlt());
        jSONObject.put("disableApkAlt", campaignEx.getDisplayApkAlt());
        if (campaignEx.getApkDisplayInfo() != null) {
            jSONObject.put("apk_info", campaignEx.getApkDisplayInfo().toJson());
        }
        jSONObject.put("mark", campaignEx.getRoverMark());
        jSONObject.put("isPost", campaignEx.getRoverIsPost());
        jSONObject.put("nv_t2", campaignEx.getNvT2());
        jSONObject.put("ntbarpasbl", campaignEx.getNtbarpasbl());
        jSONObject.put("ntbarpt", campaignEx.getNtbarpt());
        jSONObject.put("atat_type", campaignEx.getAtatType());
        jSONObject.put("akdlui", campaignEx.getAkdlui());
        return jSONObject;
    }

    public String matchLoopback(String str) {
        Map<String, String> loopbackMap;
        try {
            if (TextUtils.isEmpty(str) || (loopbackMap = getLoopbackMap()) == null || loopbackMap.size() <= 0) {
                return str;
            }
            Uri uri = Uri.parse(str);
            String host = uri.getHost();
            String str2 = loopbackMap.get("domain");
            if (TextUtils.isEmpty(host) || !host.contains(str2)) {
                return str;
            }
            String str3 = loopbackMap.get("key");
            String str4 = loopbackMap.get("value");
            if (!str.contains(str3) && TextUtils.isEmpty(uri.getQueryParameter(str3)) && !TextUtils.isEmpty(str3) && !TextUtils.isEmpty(str4)) {
                return str + "&" + str3 + ContainerUtils.KEY_VALUE_DELIMITER + str4;
            }
            if (TextUtils.isEmpty(str3) || TextUtils.isEmpty(str4)) {
                return str;
            }
            return str.replace(str3 + ContainerUtils.KEY_VALUE_DELIMITER + (!TextUtils.isEmpty(uri.getQueryParameter(str3)) ? uri.getQueryParameter(str3) : ""), str3 + ContainerUtils.KEY_VALUE_DELIMITER + str4);
        } catch (Throwable unused) {
            z.d("", "matchLoopback error");
            return str;
        }
    }

    public boolean needShowIDialog(CampaignEx campaignEx) {
        boolean z = this.apk_alt == 1 && campaignEx.getLinkType() == 3 && campaignEx.getDisplayApkAlt() != 1;
        if (!z) {
            return z;
        }
        try {
            return ae.c(com.mbridge.msdk.foundation.controller.a.f().j(), getPackageName()) ? false : z;
        } catch (Throwable th) {
            z.a(TAG, th.getMessage());
            return z;
        }
    }
}
