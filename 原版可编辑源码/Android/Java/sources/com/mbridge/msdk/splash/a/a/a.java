package com.mbridge.msdk.splash.a.a;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.foundation.db.c;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ae;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class a {
    private static final String a = a.class.getSimpleName();

    public static String a(Context context, String str) {
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

    public static String a() {
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

    public static CampaignEx a(String str, CampaignEx campaignEx) {
        String strValueOf;
        String strValueOf2;
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
                    if (jSONObjectOptJSONObject != null) {
                        String string = jSONObjectOptJSONObject.getString(com.mbridge.msdk.foundation.same.a.n);
                        String string2 = jSONObjectOptJSONObject.getString(com.mbridge.msdk.foundation.same.a.o);
                        if (TextUtils.isEmpty(string)) {
                            string = "-999";
                        }
                        int i = Integer.parseInt(string);
                        if (TextUtils.isEmpty(string2)) {
                            string2 = "-999";
                        }
                        int i2 = Integer.parseInt(string2);
                        strValueOf = i != -999 ? String.valueOf(ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), i)) : "-999";
                        strValueOf2 = i2 != -999 ? String.valueOf(ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), i2)) : "-999";
                    } else {
                        strValueOf = "-999";
                        strValueOf2 = strValueOf;
                    }
                    campaignWithBackData.setClickURL(com.mbridge.msdk.click.c.a(campaignWithBackData.getClickURL(), strValueOf, strValueOf2));
                    String noticeUrl = campaignWithBackData.getNoticeUrl();
                    if (jSONObjectOptJSONObject != null) {
                        Iterator<String> itKeys = jSONObjectOptJSONObject.keys();
                        StringBuilder sb = new StringBuilder();
                        while (itKeys.hasNext()) {
                            sb.append("&");
                            String next = itKeys.next();
                            String strOptString2 = jSONObjectOptJSONObject.optString(next);
                            if (com.mbridge.msdk.foundation.same.a.n.equals(next) || com.mbridge.msdk.foundation.same.a.o.equals(next)) {
                                if (TextUtils.isEmpty(strOptString2)) {
                                    strOptString2 = "-999";
                                }
                                int i3 = Integer.parseInt(strOptString2);
                                strOptString2 = i3 != -999 ? String.valueOf(ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), i3)) : "-999";
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

    public static String a(int i, float f, float f2) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            if (i == 4) {
                jSONObject2.put(com.mbridge.msdk.foundation.same.a.n, com.tkay.expressad.video.bt.a.c.a);
                jSONObject2.put(com.mbridge.msdk.foundation.same.a.o, com.tkay.expressad.video.bt.a.c.a);
            } else {
                jSONObject2.put(com.mbridge.msdk.foundation.same.a.n, ae.a(com.mbridge.msdk.foundation.controller.a.f().j(), f));
                jSONObject2.put(com.mbridge.msdk.foundation.same.a.o, ae.a(com.mbridge.msdk.foundation.controller.a.f().j(), f2));
            }
            jSONObject2.put(com.mbridge.msdk.foundation.same.a.q, i);
            jSONObject2.put(com.mbridge.msdk.foundation.same.a.r, com.mbridge.msdk.foundation.controller.a.f().j().getResources().getConfiguration().orientation);
            jSONObject2.put(com.mbridge.msdk.foundation.same.a.s, ae.d(com.mbridge.msdk.foundation.controller.a.f().j()));
            jSONObject.put(com.mbridge.msdk.foundation.same.a.p, jSONObject2);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return jSONObject.toString();
    }
}
