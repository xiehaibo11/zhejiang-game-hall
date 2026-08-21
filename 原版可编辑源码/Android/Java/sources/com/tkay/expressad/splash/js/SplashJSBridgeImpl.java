package com.tkay.expressad.splash.js;

import android.content.Context;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Base64;
import com.sigmob.sdk.base.mta.PointCategory;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.l;
import com.tkay.expressad.atsignalcommon.base.d;
import com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.d.b;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.g.a.f;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.splash.d.a;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class SplashJSBridgeImpl implements ISplashBridge {
    private WeakReference<Context> b;
    private List<c> c;
    private String d;
    private String e;
    private int f;
    private int g;
    private int i;
    private a j;
    private SplashExpandDialog k;
    private String a = "SplashJSBridgeImpl";
    private int h = 5;

    @Override
    public void handlerH5Exception(Object obj, String str) {
    }

    @Override
    public void readyStatus(Object obj, String str) {
    }

    public SplashJSBridgeImpl(Context context, String str, String str2) {
        this.e = str;
        this.d = str2;
        this.b = new WeakReference<>(context);
    }

    public void updateContext(Context context) {
        this.b = new WeakReference<>(context);
    }

    public void setAllowSkip(int i) {
        this.g = i;
    }

    public void setCountdownS(int i) {
        this.h = i;
    }

    public void updateCountDown(int i) {
        this.i = i;
    }

    public void setSplashBridgeListener(a aVar) {
        if (aVar != null) {
            this.j = aVar;
        }
    }

    public a getSplashBridgeListener() {
        return this.j;
    }

    public void setCampaignList(List<c> list) {
        this.c = list;
    }

    public List<c> getmCampaignList() {
        return this.c;
    }

    public void setDevCloseBtnStatus(int i) {
        this.f = i;
    }

    public void release() {
        if (this.j != null) {
            this.j = null;
        }
    }

    @Override
    public void init(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            com.tkay.expressad.splash.a.a aVar = new com.tkay.expressad.splash.a.a(m.a().f());
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("dev_close_state", this.f);
            jSONObject.put("sdkSetting", jSONObject2);
            jSONObject.put("device", aVar.a());
            jSONObject.put("campaignList", c.b(this.c));
            b.a();
            com.tkay.expressad.d.c cVarC = b.c(com.tkay.expressad.foundation.b.b.b().e(), this.d);
            if (cVarC == null) {
                cVarC = com.tkay.expressad.d.c.c(this.d);
            }
            if (!TextUtils.isEmpty(this.e)) {
                cVarC.e(this.e);
            }
            cVarC.a(this.d);
            cVarC.b(this.h);
            cVarC.a(this.g);
            jSONObject.put("unitSetting", cVarC.s());
            b.a();
            String strA = b.a(com.tkay.expressad.foundation.b.b.b().e());
            if (!TextUtils.isEmpty(strA)) {
                jSONObject.put("appSetting", new JSONObject(strA));
            }
            jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SDK_INFO, d.a);
            new StringBuilder(PointCategory.INIT).append(jSONObject.toString());
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Throwable unused) {
        }
    }

    @Override
    public void toggleCloseBtn(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            int iOptInt = new JSONObject(str).optInt(CallMraidJS.b);
            if (this.j != null) {
                this.j.a(iOptInt);
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void triggerCloseBtn(Object obj, String str) {
        a aVar = this.j;
        if (aVar != null) {
            aVar.a();
        }
    }

    @Override
    public void install(Object obj, String str) {
        try {
            if (this.c == null) {
                return;
            }
            c cVar = null;
            if (this.c != null && this.c.size() > 0) {
                cVar = this.c.get(0);
            }
            if (TextUtils.isEmpty(str)) {
                return;
            }
            try {
                JSONObject jSONObjectA = c.a(cVar);
                JSONObject jSONObject = new JSONObject(str);
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    jSONObjectA.put(next, jSONObject.getString(next));
                }
                c cVarB = c.b(jSONObjectA);
                String strOptString = jSONObjectA.optString("unitId");
                if (!TextUtils.isEmpty(strOptString)) {
                    cVarB.l(strOptString);
                }
                cVar = cVarB;
            } catch (JSONException e) {
                e.printStackTrace();
            }
            if (this.j != null) {
                this.j.a(cVar);
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void openURL(Object obj, String str) {
        WindVaneWebView windVaneWebView;
        if (TextUtils.isEmpty(str)) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "params is null");
            return;
        }
        Context contextF = m.a().f();
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (contextF == null) {
            try {
                if ((obj instanceof com.tkay.expressad.atsignalcommon.windvane.a) && (windVaneWebView = ((com.tkay.expressad.atsignalcommon.windvane.a) obj).a) != null) {
                    contextF = windVaneWebView.getContext();
                }
            } catch (Exception e) {
                e.getMessage();
            }
        }
        if (contextF == null) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("url");
            int iOptInt = jSONObject.optInt("type");
            if (iOptInt == 1) {
                l.a(strOptString);
            } else if (iOptInt == 2) {
                l.a(contextF, strOptString);
            }
        } catch (JSONException e2) {
            e2.getMessage();
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override
    public void cai(Object obj, String str) {
        if (TextUtils.isEmpty(str)) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "params is null");
            return;
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            String strOptString = new JSONObject(str).optString(DBDefinition.PACKAGE_NAME);
            if (TextUtils.isEmpty(strOptString)) {
                CommonJSBridgeImpUtils.callbackExcep(obj, "packageName is empty");
            }
            int i = t.a(m.a().f(), strOptString) ? 1 : 2;
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("code", CommonJSBridgeImpUtils.b);
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("result", i);
                jSONObject.put("data", jSONObject2);
                j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } catch (Exception e) {
                CommonJSBridgeImpUtils.callbackExcep(obj, e.getMessage());
                e.getMessage();
            }
        } catch (JSONException e2) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "exception: " + e2.getLocalizedMessage());
        } catch (Throwable th) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "exception: " + th.getLocalizedMessage());
        }
    }

    @Override
    public void gial(Object obj, String str) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", CommonJSBridgeImpUtils.b);
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("packageNameList", new JSONArray());
            jSONObject.put("data", jSONObject2);
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            CommonJSBridgeImpUtils.callbackExcep(obj, e.getMessage());
            e.getMessage();
        } catch (Throwable th) {
            CommonJSBridgeImpUtils.callbackExcep(obj, th.getMessage());
            th.getMessage();
        }
    }

    @Override
    public void resetCountdown(Object obj, String str) {
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
    public void open(String str) {
        a aVar = this.j;
        if (aVar != null) {
            aVar.b(str);
        }
    }

    @Override
    public void close() {
        try {
            if (this.j != null) {
                this.j.c();
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void unload() {
        close();
    }

    @Override
    public c getMraidCampaign() {
        List<c> list = this.c;
        if (list == null || list.size() <= 0) {
            return null;
        }
        return this.c.get(0);
    }

    @Override
    public void useCustomClose(boolean z) {
        int i = z ? 2 : 1;
        try {
            if (this.j != null) {
                this.j.a(i);
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void expand(String str, boolean z) {
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
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void sendImpressions(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            JSONArray jSONArray = new JSONArray(str);
            ArrayList arrayList = new ArrayList();
            for (int i = 0; i < jSONArray.length(); i++) {
                String string = jSONArray.getString(i);
                for (c cVar : this.c) {
                    if (cVar.aZ().equals(string)) {
                        f.a(this.d, cVar, f.f);
                        arrayList.add(string);
                    }
                }
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void reportUrls(Object obj, String str) {
        if (TextUtils.isEmpty(str)) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "params is null");
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
                String strOptString = jSONObject.optString("url");
                int iOptInt2 = jSONObject.optInt(PointCategory.REPORT);
                boolean z = true;
                if (iOptInt2 == 0) {
                    Context contextF = m.a().f();
                    if (iOptInt == 0) {
                        z = false;
                    }
                    com.tkay.expressad.a.a.a(contextF, (c) null, "", strOptString, z);
                } else {
                    com.tkay.expressad.a.a.a(m.a().f(), null, "", strOptString, false, iOptInt != 0, iOptInt2);
                }
            }
            j.a().a(obj, SplashJsUtils.codeToJsonString(0));
        } catch (Throwable unused) {
        }
    }

    @Override
    public void onJSBridgeConnect(Object obj, String str) {
        try {
            if (obj instanceof com.tkay.expressad.atsignalcommon.windvane.a) {
                j.a();
                j.b(((com.tkay.expressad.atsignalcommon.windvane.a) obj).a);
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void pauseCountDown(Object obj, String str) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("code", 0);
            jSONObject.put("message", "Call pause count down success.");
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put(com.tkay.expressad.d.a.b.dk, this.i);
            jSONObject.put("data", jSONObject2);
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            e.getMessage();
        }
        a aVar = this.j;
        if (aVar != null) {
            aVar.a(1, -1);
        }
    }

    @Override
    public void resumeCountDown(Object obj, String str) {
        int i = 0;
        if (!TextUtils.isEmpty(str)) {
            try {
                int iOptInt = new JSONObject(str).optInt(com.tkay.expressad.d.a.b.dk);
                try {
                    j.a().a(obj, SplashJsUtils.codeToJsonString(0));
                    i = iOptInt;
                } catch (Exception e) {
                    e = e;
                    i = iOptInt;
                    e.getMessage();
                }
            } catch (Exception e2) {
                e = e2;
            }
        }
        a aVar = this.j;
        if (aVar != null) {
            aVar.a(2, i);
        }
    }
}
