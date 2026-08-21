package com.tkay.expressad.video.signal.communication;

import android.content.Context;
import android.text.TextUtils;
import android.util.Base64;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.l;
import com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.a;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.video.signal.factory.IJSFactory;
import okhttp3.HttpUrl;
import org.json.JSONException;
import org.json.JSONObject;

public class BaseRewardJsH5 implements IRewardBridge {
    protected static final String a = "JS-Reward-Brigde";
    protected IJSFactory b;

    /* JADX WARN: Multi-variable type inference failed */
    public void initialize(Context context, WindVaneWebView windVaneWebView) {
        if (context instanceof IJSFactory) {
            this.b = (IJSFactory) context;
        }
    }

    public void initialize(Object obj, WindVaneWebView windVaneWebView) {
        if (obj instanceof IJSFactory) {
            this.b = (IJSFactory) obj;
        }
    }

    @Override
    public void getEndScreenInfo(Object obj, String str) {
        try {
            if (this.b != null) {
                String strA = this.b.getIJSRewardVideoV1().a();
                j.a().a(obj, !TextUtils.isEmpty(strA) ? Base64.encodeToString(strA.getBytes(), 2) : "");
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void install(Object obj, String str) {
        com.tkay.expressad.video.signal.a.j jVar;
        Context context;
        try {
            if (this.b != null) {
                if (obj != null) {
                    a aVar = (a) obj;
                    if ((aVar.a.getObject() instanceof com.tkay.expressad.video.signal.a.j) && (jVar = (com.tkay.expressad.video.signal.a.j) aVar.a.getObject()) != null && (context = aVar.a.getContext()) != null && context != context.getApplicationContext()) {
                        jVar.a(context);
                    }
                }
                if (this.b.getJSContainerModule().endCardShowing()) {
                    this.b.getJSCommon().click(3, str);
                } else {
                    this.b.getJSCommon().click(1, str);
                }
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void openURL(Object obj, String str) {
        WindVaneWebView windVaneWebView;
        Context contextF = m.a().f();
        if (TextUtils.isEmpty(str)) {
            return;
        }
        if (contextF == null) {
            try {
                if ((obj instanceof a) && (windVaneWebView = ((a) obj).a) != null) {
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
            jSONObject2.put("packageNameList", HttpUrl.PATH_SEGMENT_ENCODE_SET_URI);
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
    public void notifyCloseBtn(Object obj, String str) {
        try {
            if (this.b == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.b.getIJSRewardVideoV1().notifyCloseBtn(new JSONObject(str).optInt(CallMraidJS.b));
        } catch (Throwable unused) {
        }
    }

    @Override
    public void toggleCloseBtn(Object obj, String str) {
        try {
            if (this.b == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.b.getIJSRewardVideoV1().toggleCloseBtn(new JSONObject(str).optInt(CallMraidJS.b));
        } catch (Throwable unused) {
        }
    }

    @Override
    public void triggerCloseBtn(Object obj, String str) {
        try {
            if (this.b == null || TextUtils.isEmpty(str)) {
                return;
            }
            j.a().a(obj, a(0));
            this.b.getIJSRewardVideoV1().a(new JSONObject(str).optString(CallMraidJS.b));
        } catch (Throwable unused) {
            j.a().a(obj, a(-1));
        }
    }

    @Override
    public void setOrientation(Object obj, String str) {
        try {
            if (this.b == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.b.getIJSRewardVideoV1().b(new JSONObject(str).optString(CallMraidJS.b));
        } catch (Throwable unused) {
        }
    }

    @Override
    public void handlerPlayableException(Object obj, String str) {
        try {
            if (this.b == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.b.getIJSRewardVideoV1().handlerPlayableException(new JSONObject(str).optString("msg"));
        } catch (Throwable unused) {
        }
    }

    private static String a(int i) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            String string = jSONObject.toString();
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Throwable unused) {
            return "";
        }
    }
}
