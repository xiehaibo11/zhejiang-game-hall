package com.mbridge.msdk.video.module.b;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.net.g.d;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.t;
import com.mbridge.msdk.foundation.tools.z;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: compiled from: VideoViewReport.java */
/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static HashMap<String, ArrayList<String>> f4379a = new HashMap<>();

    public static void a(String str) {
        f4379a.remove(str);
    }

    public static void a(String str, String str2) {
        try {
            if (com.mbridge.msdk.foundation.controller.a.f().j() == null || TextUtils.isEmpty(str) || TextUtils.isEmpty(str2)) {
                return;
            }
            com.mbridge.msdk.foundation.same.report.d.a aVar = new com.mbridge.msdk.foundation.same.report.d.a(com.mbridge.msdk.foundation.controller.a.f().j());
            d dVarA = e.a(str, com.mbridge.msdk.foundation.controller.a.f().j(), str2);
            dVarA.a(com.tkay.expressad.foundation.g.a.an, com.mbridge.msdk.videocommon.d.b.a().b().b());
            aVar.post(0, com.mbridge.msdk.foundation.same.net.f.d.a().f3453a, dVarA, new com.mbridge.msdk.foundation.same.report.d.b() { // from class: com.mbridge.msdk.video.module.b.b.1
                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onSuccess(String str3) {
                    z.d("VideoViewReport", str3);
                }

                @Override // com.mbridge.msdk.foundation.same.report.d.b
                public final void onFailed(String str3) {
                    z.d("VideoViewReport", str3);
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
            z.d("VideoViewReport", e.getMessage());
        }
    }

    public static void a(Context context, CampaignEx campaignEx) {
        if (campaignEx == null || campaignEx.getNativeVideoTracking() == null || campaignEx.getNativeVideoTracking().l() == null) {
            return;
        }
        com.mbridge.msdk.click.b.a(context, campaignEx, campaignEx.getCampaignUnitId(), campaignEx.getNativeVideoTracking().l(), false, false);
    }

    public static void b(Context context, CampaignEx campaignEx) {
        if (campaignEx == null || campaignEx.getNativeVideoTracking() == null || campaignEx.getNativeVideoTracking().f() == null) {
            return;
        }
        com.mbridge.msdk.click.b.a(context, campaignEx, campaignEx.getCampaignUnitId(), campaignEx.getNativeVideoTracking().f(), false, false);
    }

    public static void c(Context context, CampaignEx campaignEx) {
        if (campaignEx == null || campaignEx.getNativeVideoTracking() == null || campaignEx.getNativeVideoTracking().g() == null) {
            return;
        }
        com.mbridge.msdk.click.b.a(context, campaignEx, campaignEx.getCampaignUnitId(), campaignEx.getNativeVideoTracking().g(), false, false);
    }

    public static void d(Context context, CampaignEx campaignEx) {
        if (campaignEx == null || campaignEx.getNativeVideoTracking() == null || campaignEx.getNativeVideoTracking().h() == null) {
            return;
        }
        String campaignUnitId = campaignEx.getCampaignUnitId();
        ArrayList<String> arrayList = f4379a.get(campaignUnitId);
        if (arrayList == null) {
            arrayList = new ArrayList<>();
            f4379a.put(campaignUnitId, arrayList);
        }
        if (arrayList.contains(campaignEx.getId())) {
            return;
        }
        com.mbridge.msdk.click.b.a(context, campaignEx, campaignEx.getCampaignUnitId(), campaignEx.getNativeVideoTracking().h(), false, false);
        arrayList.add(campaignEx.getId());
    }

    public static void a(Context context, CampaignEx campaignEx, int i, int i2) {
        try {
            String[] strArrM = campaignEx.getNativeVideoTracking().m();
            if (campaignEx == null || campaignEx.getNativeVideoTracking() == null || strArrM == null) {
                return;
            }
            String[] strArr = new String[strArrM.length];
            for (int i3 = 0; i3 < strArrM.length; i3++) {
                String str = strArrM[i3];
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("endscreen_type", i);
                String string = jSONObject.toString();
                if (!TextUtils.isEmpty(string)) {
                    string = t.a(string);
                }
                if (!TextUtils.isEmpty(string)) {
                    str = str + "&value=" + URLEncoder.encode(string);
                }
                strArr[i3] = campaignEx.getSpareOfferFlag() == 1 ? str + "&to=1&cbt=" + campaignEx.getCbt() + "&tmorl=" + i2 : str + "&to=0&cbt=" + campaignEx.getCbt() + "&tmorl=" + i2;
            }
            com.mbridge.msdk.click.b.a(context, campaignEx, campaignEx.getCampaignUnitId(), strArr, false, true);
        } catch (Throwable unused) {
            z.d("", "reportEndcardshowData error");
        }
    }

    public static void e(Context context, CampaignEx campaignEx) {
        if (campaignEx == null || campaignEx.getNativeVideoTracking() == null || campaignEx.getNativeVideoTracking().n() == null) {
            return;
        }
        com.mbridge.msdk.click.b.a(context, campaignEx, campaignEx.getCampaignUnitId(), campaignEx.getNativeVideoTracking().n(), false, false);
    }

    public static void f(Context context, CampaignEx campaignEx) {
        if (campaignEx == null || campaignEx.getNativeVideoTracking() == null || campaignEx.getNativeVideoTracking().i() == null) {
            return;
        }
        com.mbridge.msdk.click.b.a(context, campaignEx, campaignEx.getCampaignUnitId(), campaignEx.getNativeVideoTracking().i(), false, false);
    }

    public static void a(Context context, CampaignEx campaignEx, int i, int i2, int i3) {
        String str;
        if (i2 == 0 || context == null || campaignEx == null) {
            return;
        }
        try {
            List<Map<Integer, String>> listE = campaignEx.getNativeVideoTracking().e();
            int i4 = ((i + 1) * 100) / i2;
            if (listE != null) {
                int i5 = 0;
                while (i5 < listE.size()) {
                    Map<Integer, String> map = listE.get(i5);
                    if (map != null && map.size() > 0) {
                        Iterator<Map.Entry<Integer, String>> it = map.entrySet().iterator();
                        int i6 = i5;
                        while (it.hasNext()) {
                            Map.Entry<Integer, String> next = it.next();
                            int iIntValue = next.getKey().intValue();
                            String value = next.getValue();
                            if (campaignEx.getSpareOfferFlag() == 1) {
                                str = value + "&to=1&cbt=" + campaignEx.getCbt() + "&tmorl=" + i3;
                            } else {
                                str = value + "&to=0&cbt=" + campaignEx.getCbt() + "&tmorl=" + i3;
                            }
                            if (iIntValue <= i4 && !TextUtils.isEmpty(str)) {
                                com.mbridge.msdk.click.b.a(context, campaignEx, campaignEx.getCampaignUnitId(), new String[]{str}, false, true);
                                it.remove();
                                listE.remove(i6);
                                i6--;
                            }
                        }
                        i5 = i6;
                    }
                    i5++;
                }
            }
        } catch (Throwable unused) {
            z.d("", "reportPlayPercentageData error");
        }
    }

    public static void a(CampaignEx campaignEx, Map<Integer, String> map, String str, int i) {
        if (campaignEx == null || map == null) {
            return;
        }
        try {
            if (map.size() > 0) {
                Iterator<Map.Entry<Integer, String>> it = map.entrySet().iterator();
                while (it.hasNext()) {
                    Map.Entry<Integer, String> next = it.next();
                    Integer key = next.getKey();
                    String value = next.getValue();
                    if (i == key.intValue() && !TextUtils.isEmpty(value)) {
                        com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str, value, false, false);
                        it.remove();
                    }
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void a(CampaignEx campaignEx, String str) {
        if (campaignEx != null) {
            try {
                if (campaignEx.getAdUrlList() == null || campaignEx.getAdUrlList().size() <= 0) {
                    return;
                }
                for (String str2 : campaignEx.getAdUrlList()) {
                    if (!TextUtils.isEmpty(str2)) {
                        com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, str, str2, false, false);
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public static void a(CampaignEx campaignEx, com.mbridge.msdk.videocommon.b.d dVar, String str, String str2, String str3) {
        String str4 = "&";
        String str5 = "";
        if (campaignEx == null || dVar == null) {
            return;
        }
        try {
            com.mbridge.msdk.video.module.c.a aVar = new com.mbridge.msdk.video.module.c.a(com.mbridge.msdk.foundation.controller.a.f().j());
            d dVar2 = new d();
            dVar2.a("user_id", t.a(str2));
            dVar2.a(com.tkay.expressad.d.a.b.aM, "1");
            dVar2.a("reward_name", dVar.a());
            dVar2.a("reward_amount", dVar.b() + "");
            dVar2.a("unit_id", str);
            dVar2.a("click_id", campaignEx.getRequestIdNotice());
            if (!TextUtils.isEmpty(str3)) {
                dVar2.a("extra", str3);
            }
            aVar.addExtraParams("", dVar2);
            String string = campaignEx.getHost() + "/addReward?";
            String strTrim = dVar2.a().trim();
            if (!TextUtils.isEmpty(strTrim)) {
                if (!string.endsWith("?") && !string.endsWith("&")) {
                    StringBuilder sb = new StringBuilder();
                    sb.append(string);
                    if (!string.contains("?")) {
                        str4 = "?";
                    }
                    sb.append(str4);
                    string = sb.toString();
                }
                str5 = string + strTrim;
            }
            String str6 = str5;
            z.d("VideoViewReport", "rewardUrl:" + str6);
            com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, campaignEx.getCampaignUnitId(), str6, false, false);
        } catch (Throwable th) {
            z.c("VideoViewReport", th.getMessage(), th);
        }
    }
}
