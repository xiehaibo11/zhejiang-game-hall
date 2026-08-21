package com.mbridge.msdk.video.js.bridge;

import android.content.Context;
import android.text.TextUtils;
import android.util.Base64;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.click.c;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.bridge.b;
import com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.mbjscommon.windvane.a;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.video.js.a.j;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class BaseRewardJs extends AbsMbridgeDownload implements IRewardBridge {
    protected IRewardBridge a;

    @Override
    public void initialize(Context context, WindVaneWebView windVaneWebView) {
        boolean zIsInstance;
        super.initialize(context, windVaneWebView);
        try {
            zIsInstance = Class.forName("com.mbridge.msdk.video.js.factory.IJSFactory").isInstance(context);
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
            zIsInstance = false;
        }
        try {
            if (zIsInstance) {
                Class<?> cls = Class.forName("com.mbridge.msdk.video.js.bridge.BaseRewardJsH5");
                this.a = (IRewardBridge) cls.newInstance();
                cls.getMethod("initialize", Context.class, WindVaneWebView.class).invoke(this.a, context, windVaneWebView);
            } else if (windVaneWebView.getObject() != null && (windVaneWebView.getObject() instanceof IRewardBridge)) {
                this.a = (IRewardBridge) windVaneWebView.getObject();
            }
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                e2.printStackTrace();
            }
        }
    }

    @Override
    public void initialize(Object obj, WindVaneWebView windVaneWebView) {
        boolean zIsInstance;
        super.initialize(obj, windVaneWebView);
        try {
            zIsInstance = Class.forName("com.mbridge.msdk.video.js.factory.IJSFactory").isInstance(obj);
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
            zIsInstance = false;
        }
        try {
            if (zIsInstance) {
                Class<?> cls = Class.forName("com.mbridge.msdk.video.js.bridge.BaseRewardJsH5");
                this.a = (IRewardBridge) cls.newInstance();
                cls.getMethod("initialize", Object.class, WindVaneWebView.class).invoke(this.a, obj, windVaneWebView);
            } else if (windVaneWebView.getObject() != null && (windVaneWebView.getObject() instanceof IRewardBridge)) {
                this.a = (IRewardBridge) windVaneWebView.getObject();
            }
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                e2.printStackTrace();
            }
        }
    }

    @Override
    public void getEndScreenInfo(Object obj, String str) {
        try {
            if (this.a != null) {
                this.a.getEndScreenInfo(obj, str);
                z.d("JS-Reward-Brigde", "getEndScreenInfo factory is true");
            } else {
                z.d("JS-Reward-Brigde", "getEndScreenInfo factory is null");
                if (obj != null) {
                    a aVar = (a) obj;
                    if (aVar.a instanceof WindVaneWebView) {
                        WindVaneWebView windVaneWebView = aVar.a;
                        if (windVaneWebView.getWebViewListener() != null) {
                            ((com.mbridge.msdk.mbjscommon.c.a) windVaneWebView.getWebViewListener()).a(obj);
                        }
                    }
                }
            }
        } catch (Throwable th) {
            z.c("JS-Reward-Brigde", "getEndScreenInfo", th);
        }
    }

    @Override
    public void install(Object obj, String str) {
        String strAddDownloaderListener = addDownloaderListener(obj, str);
        try {
            if (this.a != null) {
                this.a.install(obj, strAddDownloaderListener);
                return;
            }
            if (TextUtils.isEmpty(strAddDownloaderListener)) {
                return;
            }
            if (obj != null) {
                a aVar = (a) obj;
                if (aVar.a.getObject() instanceof j) {
                    j jVar = (j) aVar.a.getObject();
                    Context context = aVar.a.getContext();
                    if (context != null && context != context.getApplicationContext()) {
                        jVar.a(context);
                    }
                    jVar.click(1, strAddDownloaderListener);
                    z.d("JS-Reward-Brigde", "JSCommon install jump success");
                }
            }
            z.d("JS-Reward-Brigde", "JSCommon install failed");
        } catch (Throwable th) {
            z.c("JS-Reward-Brigde", "install", th);
        }
    }

    @Override
    public void notifyCloseBtn(Object obj, String str) {
        try {
            if (this.a == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.a.notifyCloseBtn(obj, str);
        } catch (Throwable th) {
            z.c("JS-Reward-Brigde", "notifyCloseBtn", th);
        }
    }

    @Override
    public void toggleCloseBtn(Object obj, String str) {
        try {
            if (this.a == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.a.toggleCloseBtn(obj, str);
        } catch (Throwable th) {
            z.c("JS-Reward-Brigde", "toggleCloseBtn", th);
        }
    }

    @Override
    public void triggerCloseBtn(Object obj, String str) {
        try {
            if (this.a == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.a.triggerCloseBtn(obj, str);
        } catch (Throwable th) {
            z.c("JS-Reward-Brigde", "triggerCloseBtn", th);
            h.a().a(obj, a(-1));
        }
    }

    @Override
    public void setOrientation(Object obj, String str) {
        try {
            if (this.a == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.a.setOrientation(obj, str);
        } catch (Throwable th) {
            z.c("JS-Reward-Brigde", "setOrientation", th);
        }
    }

    @Override
    public void handlerPlayableException(Object obj, String str) {
        try {
            if (this.a == null || TextUtils.isEmpty(str)) {
                return;
            }
            this.a.handlerPlayableException(obj, str);
        } catch (Throwable th) {
            z.c("JS-Reward-Brigde", "handlerPlayableException", th);
        }
    }

    private String a(int i) {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("code", i);
            String string = jSONObject.toString();
            return !TextUtils.isEmpty(string) ? Base64.encodeToString(string.getBytes(), 2) : "";
        } catch (Throwable unused) {
            z.d("JS-Reward-Brigde", "code to string is error");
            return "";
        }
    }

    @Override
    public void openURL(Object obj, String str) {
        z.d("JS-Reward-Brigde", "openURL:" + str);
        if (TextUtils.isEmpty(str)) {
            b.a(obj, "params is null");
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
                c.a(this.mContext, strOptString);
            } else if (iOptInt == 2) {
                c.b(this.mContext, strOptString);
            }
        } catch (JSONException e) {
            z.d("JS-Reward-Brigde", e.getMessage());
        } catch (Throwable th) {
            z.d("JS-Reward-Brigde", th.getMessage());
        }
    }

    @Override
    public void cai(Object obj, String str) {
        z.a("JS-Reward-Brigde", "cai:" + str);
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
                z.a("JS-Reward-Brigde", e.getMessage());
            }
        } catch (JSONException e2) {
            b.a(obj, "exception: " + e2.getLocalizedMessage());
            z.c("JS-Reward-Brigde", "cai", e2);
        } catch (Throwable th) {
            b.a(obj, "exception: " + th.getLocalizedMessage());
            z.c("JS-Reward-Brigde", "cai", th);
        }
    }

    @Override
    public void gial(Object obj, String str) {
        z.a("JS-Reward-Brigde", "gial:" + str);
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
            z.a("JS-Reward-Brigde", e.getMessage());
        } catch (Throwable th) {
            b.a(obj, th.getMessage());
            z.a("JS-Reward-Brigde", th.getMessage());
        }
    }

    @Override
    public void sendNoticeAndCallBackClick(Object obj, String str) {
        install(obj, str);
    }
}
