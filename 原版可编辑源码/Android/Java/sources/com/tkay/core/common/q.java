package com.tkay.core.common;

import android.text.TextUtils;
import com.adjust.sdk.Adjust;
import com.adjust.sdk.AdjustEvent;
import com.appsflyer.AppsFlyerLib;
import java.util.HashMap;
import org.json.JSONObject;

public class q {
    private static volatile q c;
    private final String a = "1";
    private final String b = "2";

    private q() {
    }

    public static q a() {
        if (c == null) {
            synchronized (q.class) {
                if (c == null) {
                    c = new q();
                }
            }
        }
        return c;
    }

    public static void a(com.tkay.core.common.f.d dVar) {
        if (dVar == null) {
            return;
        }
        try {
            com.tkay.core.c.d dVarA = com.tkay.core.c.e.a(com.tkay.core.common.b.m.a().f()).a(dVar.W());
            if (dVarA != null) {
                String strC = dVarA.C();
                if (TextUtils.isEmpty(strC)) {
                    return;
                }
                JSONObject jSONObject = new JSONObject(strC);
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("1");
                if (jSONObjectOptJSONObject != null) {
                    String strOptString = jSONObjectOptJSONObject.optString("token");
                    if (!TextUtils.isEmpty(strOptString)) {
                        String strP = dVar.p();
                        double dW = dVar.w() / 1000.0d;
                        String strL = dVar.l();
                        try {
                            AdjustEvent adjustEvent = new AdjustEvent(strOptString);
                            adjustEvent.setRevenue(dW, strP);
                            adjustEvent.setOrderId(strL);
                            Adjust.trackEvent(adjustEvent);
                        } catch (Throwable unused) {
                        }
                    }
                }
                JSONObject jSONObjectOptJSONObject2 = jSONObject.optJSONObject("2");
                if (jSONObjectOptJSONObject2 != null) {
                    int iOptInt = jSONObjectOptJSONObject2.optInt("rtye");
                    HashMap map = new HashMap();
                    map.put("af_order_id", dVar.l());
                    map.put("af_content_id", dVar.W());
                    map.put("af_content_type", dVar.Y());
                    map.put("af_revenue", Double.valueOf(iOptInt == 2 ? dVar.w() : dVar.w() / 1000.0d));
                    map.put("af_currency", "USD");
                    AppsFlyerLib.getInstance().trackEvent(com.tkay.core.common.b.m.a().f(), "af_ad_view", map);
                }
            }
        } catch (Throwable unused2) {
        }
    }

    private static void a(String str, double d, String str2, String str3) {
        try {
            AdjustEvent adjustEvent = new AdjustEvent(str);
            adjustEvent.setRevenue(d, str2);
            adjustEvent.setOrderId(str3);
            Adjust.trackEvent(adjustEvent);
        } catch (Throwable unused) {
        }
    }
}
