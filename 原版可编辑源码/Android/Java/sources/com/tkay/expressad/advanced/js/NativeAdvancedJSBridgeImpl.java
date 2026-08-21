package com.tkay.expressad.advanced.js;

import android.content.Context;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Base64;
import com.meizu.cloud.pushsdk.notification.model.AdvertisementOption;
import com.sigmob.sdk.base.mta.PointCategory;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.b.m;
import com.tkay.expressad.advanced.d.a;
import com.tkay.expressad.atsignalcommon.base.d;
import com.tkay.expressad.atsignalcommon.bridge.CommonBannerJSBridgeImp;
import com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.d.b;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.g.a.f;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class NativeAdvancedJSBridgeImpl extends CommonBannerJSBridgeImp {
    private WeakReference<Context> c;
    private List<c> d;
    private String e;
    private String f;
    private int g;
    private int h;
    private a j;
    private NativeAdvancedExpandDialog k;
    private String b = "NativeAdvancedJSBridgeImpl";
    private int i = 5;

    public NativeAdvancedJSBridgeImpl(Context context, String str, String str2) {
        this.f = str;
        this.e = str2;
        this.c = new WeakReference<>(context);
    }

    public void updateContext(Context context) {
        this.c = new WeakReference<>(context);
    }

    public void setAllowSkip(int i) {
        this.h = i;
    }

    public void setCountdownS(int i) {
        this.i = i;
    }

    public void setNativeAdvancedBridgeListener(a aVar) {
        if (aVar != null) {
            this.j = aVar;
        }
    }

    public void setCampaignList(List<c> list) {
        this.d = list;
    }

    public List<c> getmCampaignList() {
        return this.d;
    }

    public void setDevCloseBtnStatus(int i) {
        this.g = i;
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
            com.tkay.expressad.advanced.a.a aVar = new com.tkay.expressad.advanced.a.a(m.a().f());
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("dev_close_state", this.g);
            jSONObject2.put("customURLScheme", 1);
            jSONObject.put("sdkSetting", jSONObject2);
            jSONObject.put("device", aVar.a());
            jSONObject.put("campaignList", c.b(this.d));
            b.a();
            com.tkay.expressad.d.c cVarD = b.d(com.tkay.expressad.foundation.b.b.b().e(), this.e);
            if (cVarD == null) {
                cVarD = com.tkay.expressad.d.c.y();
            }
            if (!TextUtils.isEmpty(this.f)) {
                cVarD.e(this.f);
            }
            cVarD.a(this.e);
            cVarD.b(this.i);
            cVarD.a(this.h);
            jSONObject.put("unitSetting", cVarD.s());
            jSONObject.put("appSetting", new JSONObject());
            jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.SDK_INFO, d.a);
            new StringBuilder(PointCategory.INIT).append(jSONObject.toString());
            j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Throwable unused) {
        }
    }

    @Override
    public void click(Object obj, String str) {
        c cVar = null;
        try {
            if (this.d != null && this.d.size() > 0) {
                cVar = this.d.get(0);
            }
            if (TextUtils.isEmpty(str)) {
                return;
            }
            try {
                JSONObject jSONObjectA = c.a(cVar);
                JSONObject jSONObject = new JSONObject(str).getJSONObject(AdvertisementOption.PRIORITY_VALID_TIME);
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
    public void readyStatus(Object obj, String str) {
        WindVaneWebView windVaneWebView;
        try {
            if (!(obj instanceof com.tkay.expressad.atsignalcommon.windvane.a) || (windVaneWebView = ((com.tkay.expressad.atsignalcommon.windvane.a) obj).a) == null) {
                return;
            }
            try {
                windVaneWebView.getWebViewListener().readyState(windVaneWebView, new JSONObject(str).getInt("isReady"));
            } catch (Exception unused) {
                windVaneWebView.getWebViewListener().readyState(windVaneWebView, 2);
            }
        } catch (Throwable th) {
            th.getMessage();
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
        if (this.j != null) {
            NativeAdvancedJsUtils.callbackSuccess(obj);
            this.j.a();
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
    public void install(Object obj, String str) {
        c cVar = null;
        try {
            if (this.d != null && this.d.size() > 0) {
                cVar = this.d.get(0);
            }
            if (TextUtils.isEmpty(str)) {
                return;
            }
            try {
                JSONObject jSONObjectA = c.a(cVar);
                JSONObject jSONObject = new JSONObject(str).getJSONObject(AdvertisementOption.PRIORITY_VALID_TIME);
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
    public void resetCountdown(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            new JSONObject(str).getInt(com.tkay.expressad.d.a.b.dk);
            if (this.j != null) {
                this.j.c();
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    @Override
    public void open(String str) {
        a aVar = this.j;
        if (aVar != null) {
            aVar.a(str);
        }
    }

    @Override
    public void close() {
        try {
            if (this.j != null) {
                this.j.e();
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
        List<c> list = this.d;
        if (list == null || list.size() <= 0) {
            return null;
        }
        return this.d.get(0);
    }

    @Override
    public void useCustomClose(boolean z) {
        try {
            if (this.h == -1) {
                int i = z ? 2 : 1;
                if (this.j != null) {
                    this.j.a(i);
                }
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
            if (this.c == null || this.c.get() == null) {
                return;
            }
            if (this.k == null || !this.k.isShowing()) {
                NativeAdvancedExpandDialog nativeAdvancedExpandDialog = new NativeAdvancedExpandDialog(this.c.get(), bundle, this.j);
                this.k = nativeAdvancedExpandDialog;
                nativeAdvancedExpandDialog.setCampaignList(this.e, this.d);
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
                for (c cVar : this.d) {
                    if (cVar.aZ().equals(string)) {
                        f.a(this.e, cVar, f.g);
                        arrayList.add(string);
                    }
                }
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void getFileInfo(Object obj, String str) {
        if (TextUtils.isEmpty(str)) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "params is empty");
            return;
        }
        try {
            NativeAdvancedJsUtils.getFileInfo(obj, new JSONObject(str));
        } catch (Throwable th) {
            th.getMessage();
        }
    }
}
