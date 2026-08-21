package com.mbridge.msdk.mbjscommon.bridge;

import android.content.Context;
import android.text.TextUtils;
import android.util.Base64;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.sigmob.sdk.base.mta.PointCategory;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public abstract class a implements c {
    public static final String a = a.class.getSimpleName();

    @Override
    public void f(Object obj, String str) {
        try {
            if (obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) {
                h.a().a(((com.mbridge.msdk.mbjscommon.windvane.a) obj).a);
            }
        } catch (Throwable th) {
            z.c(a, "onJSBridgeConnect", th);
        }
    }

    @Override
    public void c(Object obj, String str) {
        z.a(a, "readyStatus: " + str);
    }

    @Override
    public void a(Object obj, String str) {
        z.a(a, "init: " + str);
    }

    @Override
    public void b(Object obj, String str) {
        z.a(a, "click: " + str);
    }

    @Override
    public void d(Object obj, String str) {
        z.a(a, "toggleCloseBtn: " + str);
    }

    @Override
    public void e(Object obj, String str) {
        z.a(a, "triggerCloseBtn: " + str);
    }

    @Override
    public void i(Object obj, String str) {
        z.a(a, "sendImpressions: " + str);
    }

    @Override
    public final void k(Object obj, String str) {
        z.a(a, "reportUrls:" + str);
        if (TextUtils.isEmpty(str)) {
            b.a(obj, "params is null");
            return;
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            JSONArray jSONArray = new JSONArray(str);
            for (int i = 0; i < jSONArray.length(); i++) {
                JSONObject jSONObject = jSONArray.getJSONObject(i);
                int iOptInt = jSONObject.optInt("type");
                String strA = ae.a(jSONObject.optString("url"), "&tun=", v.P() + "");
                int iOptInt2 = jSONObject.optInt(PointCategory.REPORT);
                if (iOptInt2 == 0) {
                    com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), (CampaignEx) null, "", strA, false, iOptInt != 0);
                } else {
                    com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), (CampaignEx) null, "", strA, false, iOptInt != 0, iOptInt2);
                }
            }
            h.a().a(obj, b.a(0));
        } catch (Throwable th) {
            z.c(a, "reportUrls", th);
        }
    }

    @Override
    public final void l(Object obj, String str) {
        z.a(a, "increaseOfferFrequence:" + str);
        if (TextUtils.isEmpty(str)) {
            b.a(obj, "params is null");
        } else {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            try {
                b.a(obj, new JSONObject(str));
            } catch (Throwable th) {
                z.c(a, "increaseOfferFrequence", th);
            }
        }
    }

    @Override
    public void h(Object obj, String str) {
        z.a(a, "resetCountdown: " + str);
    }

    @Override
    public final void m(Object obj, String str) {
        z.a(a, "handlerH5Exception: " + str);
    }

    @Override
    public void g(Object obj, String str) {
        z.a(a, "install: " + str);
    }

    @Override
    public final void n(Object obj, String str) {
        WindVaneWebView windVaneWebView;
        z.d(a, "openURL:" + str);
        if (TextUtils.isEmpty(str)) {
            b.a(obj, "params is null");
            return;
        }
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (contextJ == null) {
            try {
                if ((obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) && (windVaneWebView = ((com.mbridge.msdk.mbjscommon.windvane.a) obj).a) != null) {
                    contextJ = windVaneWebView.getContext();
                }
            } catch (Exception e) {
                z.d(a, e.getMessage());
            }
        }
        if (contextJ == null) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("url");
            int iOptInt = jSONObject.optInt("type");
            if (iOptInt == 1) {
                com.mbridge.msdk.click.c.a(contextJ, strOptString);
            } else if (iOptInt == 2) {
                com.mbridge.msdk.click.c.b(contextJ, strOptString);
            }
        } catch (JSONException e2) {
            z.d(a, e2.getMessage());
        } catch (Throwable th) {
            z.d(a, th.getMessage());
        }
    }

    @Override
    public final void o(Object obj, String str) {
        WindVaneWebView windVaneWebView;
        z.d(a, "getNetstat:" + str);
        if (TextUtils.isEmpty(str)) {
            b.a(obj, "params is null");
            return;
        }
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (contextJ == null) {
            try {
                if ((obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) && (windVaneWebView = ((com.mbridge.msdk.mbjscommon.windvane.a) obj).a) != null) {
                    contextJ = windVaneWebView.getContext();
                }
            } catch (Exception e) {
                z.d(a, e.getMessage());
            }
        }
        if (contextJ == null) {
            h.a().a(obj, b.a(1));
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put(NativeAdvancedJsUtils.m, v.D(contextJ));
            String string = jSONObject.toString();
            if (!TextUtils.isEmpty(string)) {
                string = Base64.encodeToString(string.getBytes(), 2);
            }
            h.a().a(obj, string);
        } catch (Throwable th) {
            z.d(a, th.getMessage());
            h.a().a(obj, b.a(1));
        }
    }

    @Override
    public final void p(Object obj, String str) {
        z.a(a, "cai:" + str);
        if (TextUtils.isEmpty(str)) {
            b.a(obj, "params is null");
            return;
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            String strOptString = new JSONObject(str).optString(DBDefinition.PACKAGE_NAME);
            if (TextUtils.isEmpty(strOptString)) {
                b.a(obj, "packageName is empty");
            }
            int i = ae.c(com.mbridge.msdk.foundation.controller.a.f().j(), strOptString) ? 1 : 2;
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("code", b.b);
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("result", i);
                jSONObject.put("data", jSONObject2);
                h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } catch (Exception e) {
                b.a(obj, e.getMessage());
                z.a(a, e.getMessage());
            }
        } catch (JSONException e2) {
            b.a(obj, "exception: " + e2.getLocalizedMessage());
            z.c(a, "cai", e2);
        } catch (Throwable th) {
            b.a(obj, "exception: " + th.getLocalizedMessage());
            z.c(a, "cai", th);
        }
    }

    @Override
    public final void q(Object obj, String str) {
        z.a(a, "gial:" + str);
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", b.b);
            JSONObject jSONObject2 = new JSONObject();
            List<String> list = com.mbridge.msdk.foundation.controller.a.c;
            JSONArray jSONArray = new JSONArray();
            if (list != null && list.size() > 0) {
                int size = list.size();
                for (int i = 0; i < size; i++) {
                    jSONArray.put(list.get(i));
                }
            }
            jSONObject2.put("packageNameList", jSONArray);
            jSONObject.put("data", jSONObject2);
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            b.a(obj, e.getMessage());
            z.a(a, e.getMessage());
        } catch (Throwable th) {
            b.a(obj, th.getMessage());
            z.a(a, th.getMessage());
        }
    }

    @Override
    public void j(Object obj, String str) {
        z.a(a, "getFileInfo:" + str);
    }
}
