package com.mbridge.msdk.mbbanner.common.util;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.foundation.db.c;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.h;
import com.mbridge.msdk.foundation.same.a.d;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.z;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class BannerUtils {
    private static final String TAG = BannerUtils.class.getSimpleName();

    public static String getTtcIds(Context context, String str) {
        if (context == null) {
            return "";
        }
        try {
            i iVarA = i.a(context);
            if (iVarA == null) {
                return "";
            }
            c cVarA = c.a(iVarA);
            cVarA.a();
            return cVarA.a(str);
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public static String getInstallIds() {
        try {
            JSONArray jSONArray = new JSONArray();
            List<Long> listI = com.mbridge.msdk.foundation.controller.a.f().i();
            if (listI != null && listI.size() > 0) {
                Iterator<Long> it = listI.iterator();
                while (it.hasNext()) {
                    jSONArray.put(it.next().longValue());
                }
            }
            return jSONArray.length() > 0 ? ae.a(jSONArray) : "";
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public static String getCloseIds(String str) {
        List<com.mbridge.msdk.foundation.same.d.a> list;
        try {
            if (d.b == null) {
                return "";
            }
            Map<String, List<com.mbridge.msdk.foundation.same.d.a>> map = d.b;
            if (!ai.b(str) || !map.containsKey(str) || (list = map.get(str)) == null || list.size() <= 0) {
                return "";
            }
            JSONArray jSONArray = new JSONArray();
            for (int i = 0; i < list.size(); i++) {
                JSONObject jSONObject = new JSONObject();
                com.mbridge.msdk.foundation.same.d.a aVar = list.get(i);
                jSONObject.put("cid", aVar.a());
                jSONObject.put("crid", aVar.c());
                jSONArray.put(jSONObject);
            }
            return jSONArray.toString();
        } catch (Exception e) {
            e.printStackTrace();
            return "";
        }
    }

    public static void inserCloseId(String str, List<CampaignEx> list) {
        Map<String, List<com.mbridge.msdk.foundation.same.d.a>> map = d.b;
        if (map == null || list == null || list.size() <= 0) {
            return;
        }
        if (ai.b(str)) {
            if (map.containsKey(str)) {
                map.put(str, fillIdInList(map.get(str), list));
            } else {
                map.put(str, fillIdInList(new ArrayList(), list));
            }
        }
        d.b = map;
    }

    private static synchronized List<com.mbridge.msdk.foundation.same.d.a> fillIdInList(List<com.mbridge.msdk.foundation.same.d.a> list, List<CampaignEx> list2) {
        if (list2 != null) {
            if (list2.size() > 0) {
                if (list == null) {
                    list = new ArrayList<>();
                }
                for (CampaignEx campaignEx : list2) {
                    if (campaignEx != null) {
                        com.mbridge.msdk.foundation.same.d.a aVar = new com.mbridge.msdk.foundation.same.d.a(campaignEx.getId(), campaignEx.getCreativeId());
                        if (list.size() >= 20) {
                            list.remove(0);
                        }
                        list.add(aVar);
                    }
                }
            }
        }
        return list;
    }

    public static void updateInstallList(Context context, List<CampaignEx> list) {
        z.b(TAG, "updateInstallList 开始 更新本机已安装广告列表");
        if (context == null || list == null || list.size() == 0) {
            z.b(TAG, "updateInstallList 列表为空 不做更新本机已安装广告列表");
            return;
        }
        l lVarA = l.a(i.a(context));
        boolean z = false;
        for (int i = 0; i < list.size(); i++) {
            CampaignEx campaignEx = list.get(i);
            if (campaignEx != null) {
                if (ae.c(context, campaignEx.getPackageName())) {
                    if (com.mbridge.msdk.foundation.controller.a.e() != null) {
                        com.mbridge.msdk.foundation.controller.a.e().add(new com.mbridge.msdk.foundation.entity.i(campaignEx.getId(), campaignEx.getPackageName()));
                        z = true;
                    }
                } else if (lVarA != null && !lVarA.a(campaignEx.getId())) {
                    h hVar = new h();
                    hVar.a(campaignEx.getId());
                    hVar.a(campaignEx.getFca());
                    hVar.b(campaignEx.getFcb());
                    hVar.d(0);
                    hVar.c(0);
                    hVar.a(System.currentTimeMillis());
                    lVarA.a(hVar);
                }
            }
        }
        if (z) {
            z.b(TAG, "更新安装列表");
            com.mbridge.msdk.foundation.controller.a.f().h();
        }
    }

    public static CampaignEx managerCampaignEX(String str, CampaignEx campaignEx) {
        String strValueOf;
        if (TextUtils.isEmpty(str)) {
            return campaignEx;
        }
        if (TextUtils.isEmpty(str) && campaignEx == null) {
            return null;
        }
        if (!str.contains("notice")) {
            try {
                JSONObject jSONObjectCampaignToJsonObject = CampaignEx.campaignToJsonObject(campaignEx);
                CampaignEx campaignWithBackData = CampaignEx.parseCampaignWithBackData(jSONObjectCampaignToJsonObject);
                if (campaignWithBackData == null) {
                    campaignWithBackData = campaignEx;
                }
                if (!TextUtils.isEmpty(str)) {
                    String strOptString = jSONObjectCampaignToJsonObject.optString("unitId");
                    if (!TextUtils.isEmpty(strOptString)) {
                        campaignWithBackData.setCampaignUnitId(strOptString);
                    }
                    JSONObject jSONObjectOptJSONObject = new JSONObject(str).optJSONObject(com.mbridge.msdk.foundation.same.a.p);
                    String strValueOf2 = "-999";
                    if (jSONObjectOptJSONObject != null) {
                        strValueOf2 = String.valueOf(ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), Integer.valueOf(jSONObjectOptJSONObject.getString(com.mbridge.msdk.foundation.same.a.n)).intValue()));
                        strValueOf = String.valueOf(ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), Integer.valueOf(jSONObjectOptJSONObject.getString(com.mbridge.msdk.foundation.same.a.o)).intValue()));
                    } else {
                        strValueOf = "-999";
                    }
                    campaignWithBackData.setClickURL(com.mbridge.msdk.click.c.a(campaignWithBackData.getClickURL(), strValueOf2, strValueOf));
                    String noticeUrl = campaignWithBackData.getNoticeUrl();
                    if (jSONObjectOptJSONObject != null) {
                        Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                        StringBuilder sb = new StringBuilder();
                        while (itKeys.hasNext()) {
                            sb.append("&");
                            String next = itKeys.next();
                            String strOptString2 = jSONObjectOptJSONObject.optString(next);
                            if (com.mbridge.msdk.foundation.same.a.n.equals(next) || com.mbridge.msdk.foundation.same.a.o.equals(next)) {
                                strOptString2 = String.valueOf(ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), Integer.valueOf(strOptString2).intValue()));
                            }
                            sb.append(next);
                            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
                            sb.append(strOptString2);
                        }
                        campaignWithBackData.setNoticeUrl(noticeUrl + ((Object) sb));
                    }
                }
                return campaignWithBackData;
            } catch (Throwable unused) {
                return campaignEx;
            }
        }
        try {
            JSONObject jSONObjectCampaignToJsonObject2 = CampaignEx.campaignToJsonObject(campaignEx);
            JSONObject jSONObject = new JSONObject(str);
            try {
                if (!jSONObject.has("deep_link")) {
                    jSONObjectCampaignToJsonObject2.put("deep_link", "");
                }
            } catch (Exception unused2) {
            }
            Iterator<String> itKeys2 = jSONObject.keys();
            while (itKeys2.hasNext()) {
                String next2 = itKeys2.next();
                jSONObjectCampaignToJsonObject2.put(next2, jSONObject.getString(next2));
            }
            CampaignEx campaignWithBackData2 = CampaignEx.parseCampaignWithBackData(jSONObjectCampaignToJsonObject2);
            String strOptString3 = jSONObjectCampaignToJsonObject2.optString("unitId");
            if (!TextUtils.isEmpty(strOptString3)) {
                campaignWithBackData2.setCampaignUnitId(strOptString3);
            }
            return campaignWithBackData2;
        } catch (JSONException e) {
            e.printStackTrace();
            return campaignEx;
        }
    }
}
