package com.mbridge.msdk.mbjscommon.bridge;

import android.text.TextUtils;
import android.util.Base64;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.h;
import com.mbridge.msdk.foundation.same.a.d;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.foundation.g.a.f;
import org.json.JSONObject;

public class b {
    public static final String a = b.class.getSimpleName();
    public static int b = 0;
    public static int c = 1;

    public static void a(Object obj, JSONObject jSONObject) {
        try {
            JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("data");
            if (jSONObjectOptJSONObject == null) {
                a(obj, "data is empty");
                return;
            }
            final CampaignEx campaignWithBackData = CampaignEx.parseCampaignWithBackData(jSONObjectOptJSONObject);
            if (campaignWithBackData == null) {
                a(obj, "data camapign is empty");
                return;
            }
            new Thread(new Runnable() {
                @Override
                public final void run() {
                    try {
                        l lVarA = l.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                        if (lVarA != null) {
                            if (!lVarA.a(campaignWithBackData.getId())) {
                                h hVar = new h();
                                hVar.a(campaignWithBackData.getId());
                                hVar.a(campaignWithBackData.getFca());
                                hVar.b(campaignWithBackData.getFcb());
                                hVar.d(0);
                                hVar.c(1);
                                hVar.a(System.currentTimeMillis());
                                lVarA.a(hVar);
                            } else {
                                lVarA.b(campaignWithBackData.getId());
                            }
                        }
                        b.a(campaignWithBackData.getCampaignUnitId(), campaignWithBackData);
                    } catch (Throwable th) {
                        z.c(b.a, th.getMessage(), th);
                    }
                }
            }).start();
            try {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("code", b);
                JSONObject jSONObject3 = new JSONObject();
                jSONObject3.put("id", "");
                jSONObject2.put("data", jSONObject3);
                com.mbridge.msdk.mbjscommon.windvane.h.a().a(obj, Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
            } catch (Exception e) {
                a(obj, e.getMessage());
                z.a(a, e.getMessage());
            }
        } catch (Throwable th) {
            a(obj, th.getMessage());
        }
    }

    public static String a(float f, float f2) {
        JSONObject jSONObject = new JSONObject();
        try {
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(com.mbridge.msdk.foundation.same.a.n, ae.a(com.mbridge.msdk.foundation.controller.a.f().j(), f));
            jSONObject2.put(com.mbridge.msdk.foundation.same.a.o, ae.a(com.mbridge.msdk.foundation.controller.a.f().j(), f2));
            jSONObject2.put(com.mbridge.msdk.foundation.same.a.q, 0);
            jSONObject2.put(com.mbridge.msdk.foundation.same.a.r, com.mbridge.msdk.foundation.controller.a.f().j().getResources().getConfiguration().orientation);
            jSONObject2.put(com.mbridge.msdk.foundation.same.a.s, ae.d(com.mbridge.msdk.foundation.controller.a.f().j()));
            jSONObject.put(com.mbridge.msdk.foundation.same.a.p, jSONObject2);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return jSONObject.toString();
    }

    public static String a(int i) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            String string = jSONObject.toString();
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Throwable unused) {
            z.d(a, "code to string is error");
            return "";
        }
    }

    public static void a(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", c);
            jSONObject.put("message", str);
            jSONObject.put("data", new JSONObject());
            com.mbridge.msdk.mbjscommon.windvane.h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            z.a(a, e.getMessage());
        }
    }

    static void a(String str, CampaignEx campaignEx) {
        if (d.h == null || TextUtils.isEmpty(campaignEx.getId())) {
            return;
        }
        d.a(str, campaignEx, f.e);
    }
}
