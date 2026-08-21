package com.tkay.expressad.splash.js;

import android.content.Context;
import android.text.TextUtils;
import com.tkay.expressad.atsignalcommon.windvane.AbsFeedBackForH5;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.a;
import org.json.JSONException;
import org.json.JSONObject;

public class SplashJs extends AbsFeedBackForH5 {
    private static String h = "SplashJs";
    private SplashJSBridgeImpl i;

    @Override
    public void initialize(Context context, WindVaneWebView windVaneWebView) {
        super.initialize(context, windVaneWebView);
        try {
            if (windVaneWebView.getObject() == null || !(windVaneWebView.getObject() instanceof SplashJSBridgeImpl)) {
                return;
            }
            this.i = (SplashJSBridgeImpl) windVaneWebView.getObject();
        } catch (Throwable unused) {
        }
    }

    public void init(Object obj, String str) {
        SplashJSBridgeImpl splashJSBridgeImpl = this.i;
        if (splashJSBridgeImpl != null) {
            splashJSBridgeImpl.init(obj, str);
        }
    }

    public void toggleCloseBtn(Object obj, String str) {
        SplashJSBridgeImpl splashJSBridgeImpl = this.i;
        if (splashJSBridgeImpl != null) {
            splashJSBridgeImpl.toggleCloseBtn(obj, str);
        }
    }

    public void triggerCloseBtn(Object obj, String str) {
        SplashJSBridgeImpl splashJSBridgeImpl = this.i;
        if (splashJSBridgeImpl != null) {
            splashJSBridgeImpl.triggerCloseBtn(obj, str);
        }
    }

    public void readyStatus(Object obj, String str) {
        if (obj != null) {
            try {
                a aVar = (a) obj;
                int iOptInt = new JSONObject(str).optInt("isReady", 1);
                if (aVar.a != null) {
                    WindVaneWebView windVaneWebView = aVar.a;
                    if (windVaneWebView.getWebViewListener() != null) {
                        windVaneWebView.getWebViewListener().readyState(windVaneWebView, iOptInt);
                    }
                }
            } catch (Throwable unused) {
            }
        }
    }

    public void install(Object obj, String str) {
        SplashJSBridgeImpl splashJSBridgeImpl = this.i;
        if (splashJSBridgeImpl != null) {
            splashJSBridgeImpl.install(obj, str);
        }
    }

    public void resetCountdown(Object obj, String str) {
        SplashJSBridgeImpl splashJSBridgeImpl = this.i;
        if (splashJSBridgeImpl != null) {
            splashJSBridgeImpl.resetCountdown(obj, str);
        }
    }

    public void openURL(Object obj, String str) {
        SplashJSBridgeImpl splashJSBridgeImpl = this.i;
        if (splashJSBridgeImpl != null) {
            splashJSBridgeImpl.openURL(obj, str);
        }
    }

    public void cai(Object obj, String str) {
        SplashJSBridgeImpl splashJSBridgeImpl = this.i;
        if (splashJSBridgeImpl != null) {
            splashJSBridgeImpl.cai(obj, str);
        }
    }

    public void gial(Object obj, String str) {
        SplashJSBridgeImpl splashJSBridgeImpl = this.i;
        if (splashJSBridgeImpl != null) {
            splashJSBridgeImpl.gial(obj, str);
        }
    }

    public void handlerH5Exception(Object obj, String str) {
        if (obj != null) {
            try {
                a aVar = (a) obj;
                if (aVar.a != null) {
                    WindVaneWebView windVaneWebView = aVar.a;
                    if (windVaneWebView.getWebViewListener() != null) {
                        windVaneWebView.getWebViewListener().onReceivedError(windVaneWebView, 0, str.toString(), windVaneWebView.getUrl());
                    }
                }
            } catch (Throwable unused) {
            }
        }
    }

    public void getFileInfo(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            SplashJsUtils.getFileInfo(obj, new JSONObject(str));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public void sendImpressions(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.sendImpressions(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void reportUrls(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.reportUrls(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void increaseOfferFrequence(Object obj, String str) {
        try {
            SplashJsUtils.increaseOfferFrequence(obj, new JSONObject(str));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public void onJSBridgeConnect(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.onJSBridgeConnect(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void pauseCountDown(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.pauseCountDown(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void resumeCountDown(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.resumeCountDown(obj, str);
            }
        } catch (Throwable unused) {
        }
    }
}
