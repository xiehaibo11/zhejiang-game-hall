package com.mbridge.msdk.splash.js;

import android.content.Context;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Base64;
import com.mbridge.msdk.c.d;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.sigmob.sdk.base.mta.PointCategory;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.tkay.core.api.TYAdConst;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.foundation.g.a.f;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class b implements a {
    private WeakReference<Context> b;
    private List<CampaignEx> c;
    private String d;
    private String e;
    private int f;
    private int g;
    private int i;
    private com.mbridge.msdk.splash.d.a j;
    private SplashExpandDialog k;
    private String a = "SplashJSBridgeImpl";
    private int h = 5;

    public b(Context context, String str, String str2) {
        this.e = str;
        this.d = str2;
        this.b = new WeakReference<>(context);
    }

    public final void a(Context context) {
        this.b = new WeakReference<>(context);
    }

    public final void a(int i) {
        this.g = i;
    }

    public final void b(int i) {
        this.h = i;
    }

    public final void c(int i) {
        this.i = i;
    }

    public final void a(com.mbridge.msdk.splash.d.a aVar) {
        if (aVar != null) {
            this.j = aVar;
        }
    }

    public final com.mbridge.msdk.splash.d.a a() {
        return this.j;
    }

    public final void a(List<CampaignEx> list) {
        this.c = list;
    }

    public final List<CampaignEx> b() {
        return this.c;
    }

    public final void a(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            com.mbridge.msdk.splash.a.a aVar = new com.mbridge.msdk.splash.a.a(com.mbridge.msdk.foundation.controller.a.f().j());
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("dev_close_state", this.f);
            jSONObject.put("sdkSetting", jSONObject2);
            jSONObject.put("device", aVar.a());
            jSONObject.put("campaignList", CampaignEx.parseCamplistToJson(this.c));
            d dVarE = com.mbridge.msdk.c.b.a().e(com.mbridge.msdk.foundation.controller.a.f().k(), this.d);
            if (dVarE == null) {
                dVarE = d.d(this.d);
            }
            if (!TextUtils.isEmpty(this.e)) {
                dVarE.g(this.e);
            }
            dVarE.a(this.d);
            dVarE.b(this.h);
            dVarE.a(this.g);
            jSONObject.put("unitSetting", dVarE.t());
            String strC = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k());
            if (!TextUtils.isEmpty(strC)) {
                jSONObject.put("appSetting", new JSONObject(strC));
            }
            jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SDK_INFO, com.mbridge.msdk.mbjscommon.base.d.a);
            z.d(this.a, PointCategory.INIT + jSONObject.toString());
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Throwable th) {
            z.c(this.a, PointCategory.INIT, th);
        }
    }

    public final void b(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            int iOptInt = new JSONObject(str).optInt(CallMraidJS.b);
            if (this.j != null) {
                this.j.a(iOptInt);
            }
        } catch (Throwable th) {
            z.c(this.a, "toggleCloseBtn", th);
        }
    }

    public final void c(Object obj, String str) {
        com.mbridge.msdk.splash.d.a aVar = this.j;
        if (aVar != null) {
            aVar.a(obj, str);
        }
    }

    public final void d(Object obj, String str) {
        z.d(this.a, "install");
        try {
            if (this.c == null) {
                return;
            }
            CampaignEx campaignEx = null;
            if (this.c != null && this.c.size() > 0) {
                campaignEx = this.c.get(0);
            }
            if (TextUtils.isEmpty(str)) {
                return;
            }
            try {
                JSONObject jSONObjectCampaignToJsonObject = CampaignEx.campaignToJsonObject(campaignEx);
                JSONObject jSONObject = new JSONObject(str);
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    jSONObjectCampaignToJsonObject.put(next, jSONObject.getString(next));
                }
                CampaignEx campaignWithBackData = CampaignEx.parseCampaignWithBackData(jSONObjectCampaignToJsonObject);
                String strOptString = jSONObjectCampaignToJsonObject.optString("unitId");
                if (!TextUtils.isEmpty(strOptString)) {
                    campaignWithBackData.setCampaignUnitId(strOptString);
                }
                campaignEx = campaignWithBackData;
            } catch (JSONException e) {
                e.printStackTrace();
            }
            if (this.j != null) {
                this.j.a(campaignEx);
            }
        } catch (Throwable th) {
            z.c(this.a, "click", th);
        }
    }

    public final void e(Object obj, String str) {
        WindVaneWebView windVaneWebView;
        z.d(this.a, "openURL:" + str);
        if (TextUtils.isEmpty(str)) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "params is null");
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
                z.d(this.a, e.getMessage());
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
            z.d(this.a, e2.getMessage());
        } catch (Throwable th) {
            z.d(this.a, th.getMessage());
        }
    }

    public final void f(Object obj, String str) {
        z.a(this.a, "cai:" + str);
        if (TextUtils.isEmpty(str)) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "params is null");
            return;
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            String strOptString = new JSONObject(str).optString(DBDefinition.PACKAGE_NAME);
            if (TextUtils.isEmpty(strOptString)) {
                com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "packageName is empty");
            }
            int i = ae.c(com.mbridge.msdk.foundation.controller.a.f().j(), strOptString) ? 1 : 2;
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("code", com.mbridge.msdk.mbjscommon.bridge.b.b);
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("result", i);
                jSONObject.put("data", jSONObject2);
                h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } catch (Exception e) {
                com.mbridge.msdk.mbjscommon.bridge.b.a(obj, e.getMessage());
                z.a(this.a, e.getMessage());
            }
        } catch (JSONException e2) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "exception: " + e2.getLocalizedMessage());
            z.c(this.a, "cai", e2);
        } catch (Throwable th) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "exception: " + th.getLocalizedMessage());
            z.c(this.a, "cai", th);
        }
    }

    public final void g(Object obj, String str) {
        z.a(this.a, "gial:" + str);
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", com.mbridge.msdk.mbjscommon.bridge.b.b);
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
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, e.getMessage());
            z.a(this.a, e.getMessage());
        } catch (Throwable th) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, th.getMessage());
            z.a(this.a, th.getMessage());
        }
    }

    public final void h(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            int i = new JSONObject(str).getInt(com.tkay.expressad.d.a.b.dk);
            if (this.j != null) {
                this.j.b(i);
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    @Override
    public final void open(String str) {
        com.mbridge.msdk.splash.d.a aVar = this.j;
        if (aVar != null) {
            aVar.a(true, str);
        }
    }

    @Override
    public final void close() {
        z.d(this.a, "close");
        try {
            if (this.j != null) {
                this.j.a();
            }
        } catch (Throwable th) {
            z.c(this.a, "close", th);
        }
    }

    @Override
    public final void unload() {
        close();
    }

    @Override
    public final CampaignEx getMraidCampaign() {
        List<CampaignEx> list = this.c;
        if (list == null || list.size() <= 0) {
            return null;
        }
        return this.c.get(0);
    }

    @Override
    public final void useCustomClose(boolean z) {
        int i = z ? 2 : 1;
        try {
            if (this.j != null) {
                this.j.a(i);
            }
        } catch (Throwable th) {
            z.c(this.a, "useCustomClose", th);
        }
    }

    @Override
    public final void expand(String str, boolean z) {
        try {
            Bundle bundle = new Bundle();
            bundle.putString("url", str);
            bundle.putBoolean("shouldUseCustomClose", z);
            if (this.b == null || this.b.get() == null) {
                return;
            }
            if (this.k == null || !this.k.isShowing()) {
                SplashExpandDialog splashExpandDialog = new SplashExpandDialog(this.b.get(), bundle, this.j);
                this.k = splashExpandDialog;
                splashExpandDialog.setCampaignList(this.d, this.c);
                this.k.show();
                if (this.j != null) {
                    this.j.a(true);
                }
                com.mbridge.msdk.splash.e.a.a(this.d, getMraidCampaign(), str);
            }
        } catch (Throwable th) {
            z.c(this.a, "expand", th);
        }
    }

    public final void i(Object obj, String str) {
        z.a(this.a, "sendImpressions:" + str);
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            JSONArray jSONArray = new JSONArray(str);
            final ArrayList arrayList = new ArrayList();
            for (int i = 0; i < jSONArray.length(); i++) {
                String string = jSONArray.getString(i);
                for (CampaignEx campaignEx : this.c) {
                    if (campaignEx.getId().equals(string)) {
                        com.mbridge.msdk.foundation.same.a.d.a(this.d, campaignEx, f.f);
                        arrayList.add(string);
                    }
                }
            }
            new Thread(new Runnable() {
                @Override
                public final void run() {
                    try {
                        l lVarA = l.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
                        Iterator it = arrayList.iterator();
                        while (it.hasNext()) {
                            lVarA.b((String) it.next());
                        }
                    } catch (Exception unused) {
                        z.d(b.this.a, "campain can't insert db");
                    }
                }
            }).start();
        } catch (Throwable th) {
            z.c(this.a, "sendImpressions", th);
        }
    }

    public final void j(Object obj, String str) {
        z.a(this.a, "reportUrls:" + str);
        if (TextUtils.isEmpty(str)) {
            com.mbridge.msdk.mbjscommon.bridge.b.a(obj, "params is null");
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
            h.a().a(obj, c.a(0));
        } catch (Throwable th) {
            z.c(this.a, "reportUrls", th);
        }
    }

    public final void k(Object obj, String str) {
        try {
            if (obj instanceof com.mbridge.msdk.mbjscommon.windvane.a) {
                h.a().a(((com.mbridge.msdk.mbjscommon.windvane.a) obj).a);
            }
        } catch (Throwable th) {
            z.c(this.a, "onJSBridgeConnect", th);
        }
    }

    public final void l(Object obj, String str) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("code", 0);
            jSONObject.put("message", "Call pause count down success.");
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(com.tkay.expressad.d.a.b.dk, this.i);
            jSONObject.put("data", jSONObject2);
            h.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            z.d(this.a, e.getMessage());
        }
        com.mbridge.msdk.splash.d.a aVar = this.j;
        if (aVar != null) {
            aVar.a(1, -1);
        }
    }

    public final void m(Object obj, String str) {
        int i = 0;
        if (!TextUtils.isEmpty(str)) {
            try {
                int iOptInt = new JSONObject(str).optInt(com.tkay.expressad.d.a.b.dk);
                try {
                    h.a().a(obj, c.a(0));
                    i = iOptInt;
                } catch (Exception e) {
                    e = e;
                    i = iOptInt;
                    z.d(this.a, e.getMessage());
                }
            } catch (Exception e2) {
                e = e2;
            }
        }
        com.mbridge.msdk.splash.d.a aVar = this.j;
        if (aVar != null) {
            aVar.a(2, i);
        }
    }
}
