package com.tkay.expressad.video.signal.communication;

import android.content.Context;
import android.text.TextUtils;
import android.util.Base64;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.l;
import com.tkay.expressad.atsignalcommon.bridge.CommonJSBridgeImpUtils;
import com.tkay.expressad.atsignalcommon.windvane.AbsFeedBackForH5;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.a;
import com.tkay.expressad.b;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.video.signal.a.j;
import okhttp3.HttpUrl;
import org.json.JSONException;
import org.json.JSONObject;

public class BaseRewardJs extends AbsFeedBackForH5 implements IRewardBridge {
    protected static final String h = "JS-Reward-Brigde";
    protected IRewardBridge i;

    @Override
    public void initialize(Context context, WindVaneWebView windVaneWebView) {
        boolean zIsInstance;
        super.initialize(context, windVaneWebView);
        try {
            zIsInstance = Class.forName("com.tkay.expressad.video.signal.factory.IJSFactory").isInstance(context);
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
            zIsInstance = false;
        }
        try {
            if (zIsInstance) {
                Class<?> cls = Class.forName("com.tkay.expressad.video.signal.communication.BaseRewardJsH5");
                this.i = (IRewardBridge) cls.newInstance();
                cls.getMethod("initialize", Context.class, WindVaneWebView.class).invoke(this.i, context, windVaneWebView);
            } else {
                if (windVaneWebView.getObject() == null || !(windVaneWebView.getObject() instanceof IRewardBridge)) {
                    return;
                }
                this.i = (IRewardBridge) windVaneWebView.getObject();
            }
        } catch (Exception e2) {
            if (b.a) {
                e2.printStackTrace();
            }
        }
    }

    @Override
    public void initialize(Object obj, WindVaneWebView windVaneWebView) {
        boolean zIsInstance;
        super.initialize(obj, windVaneWebView);
        try {
            zIsInstance = Class.forName("com.tkay.expressad.video.signal.factory.IJSFactory").isInstance(obj);
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
            zIsInstance = false;
        }
        try {
            if (zIsInstance) {
                Class<?> cls = Class.forName("com.tkay.expressad.video.signal.communication.BaseRewardJsH5");
                this.i = (IRewardBridge) cls.newInstance();
                cls.getMethod("initialize", Object.class, WindVaneWebView.class).invoke(this.i, obj, windVaneWebView);
            } else {
                if (windVaneWebView.getObject() == null || !(windVaneWebView.getObject() instanceof IRewardBridge)) {
                    return;
                }
                this.i = (IRewardBridge) windVaneWebView.getObject();
            }
        } catch (Exception e2) {
            if (b.a) {
                e2.printStackTrace();
            }
        }
    }

    @Override
    public void getEndScreenInfo(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.getEndScreenInfo(obj, str);
                return;
            }
            if (obj != null) {
                a aVar = (a) obj;
                if (aVar.a instanceof WindVaneWebView) {
                    WindVaneWebView windVaneWebView = aVar.a;
                    if (windVaneWebView.getWebViewListener() != null) {
                        ((com.tkay.expressad.atsignalcommon.a.a) windVaneWebView.getWebViewListener()).a(obj);
                    }
                }
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void install(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.install(obj, str);
                return;
            }
            if (TextUtils.isEmpty(str) || obj == null) {
                return;
            }
            a aVar = (a) obj;
            if (aVar.a.getObject() instanceof j) {
                j jVar = (j) aVar.a.getObject();
                Context context = aVar.a.getContext();
                if (context != null && context != context.getApplicationContext()) {
                    jVar.a(context);
                }
                jVar.click(1, str);
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public void notifyCloseBtn(Object obj, String str) {
        try {
            if (this.i == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.i.notifyCloseBtn(obj, str);
        } catch (Throwable unused) {
        }
    }

    @Override
    public void toggleCloseBtn(Object obj, String str) {
        try {
            if (this.i == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.i.toggleCloseBtn(obj, str);
        } catch (Throwable unused) {
        }
    }

    @Override
    public void triggerCloseBtn(Object obj, String str) {
        try {
            if (this.i == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.i.triggerCloseBtn(obj, str);
        } catch (Throwable unused) {
            com.tkay.expressad.atsignalcommon.windvane.j.a().a(obj, a());
        }
    }

    @Override
    public void setOrientation(Object obj, String str) {
        try {
            if (this.i == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.i.setOrientation(obj, str);
        } catch (Throwable unused) {
        }
    }

    @Override
    public void handlerPlayableException(Object obj, String str) {
        try {
            if (this.i == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.i.handlerPlayableException(obj, str);
        } catch (Throwable unused) {
        }
    }

    private static String a() {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", -1);
            String string = jSONObject.toString();
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Throwable unused) {
            return "";
        }
    }

    @Override
    public void openURL(Object obj, String str) {
        if (TextUtils.isEmpty(str)) {
            CommonJSBridgeImpUtils.callbackExcep(obj, "params is null");
            return;
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        try {
            JSONObject jSONObject = new JSONObject(str);
            String strOptString = jSONObject.optString("url");
            int iOptInt = jSONObject.optInt("type");
            if (iOptInt == 1) {
                l.a(strOptString);
            } else if (iOptInt == 2) {
                l.a(this.e, strOptString);
            }
        } catch (JSONException e) {
            e.getMessage();
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
                com.tkay.expressad.atsignalcommon.windvane.j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
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
            com.tkay.expressad.atsignalcommon.windvane.j.a().a(obj, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        } catch (Exception e) {
            CommonJSBridgeImpUtils.callbackExcep(obj, e.getMessage());
            e.getMessage();
        } catch (Throwable th) {
            CommonJSBridgeImpUtils.callbackExcep(obj, th.getMessage());
            th.getMessage();
        }
    }
}
