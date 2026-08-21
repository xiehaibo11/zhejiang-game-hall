package com.mbridge.msdk.splash.js;

import android.content.Context;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import org.json.JSONException;
import org.json.JSONObject;

public class SplashJs extends AbsMbridgeDownload {
    private static String a = "SplashJs";
    private b b;

    @Override
    public void initialize(Context context, WindVaneWebView windVaneWebView) {
        super.initialize(context, windVaneWebView);
        try {
            if (windVaneWebView.getObject() == null || !(windVaneWebView.getObject() instanceof b)) {
                return;
            }
            this.b = (b) windVaneWebView.getObject();
        } catch (Throwable th) {
            z.c(a, "initialize", th);
        }
    }

    public void init(Object obj, String str) {
        z.d(a, "initialize" + str);
        b bVar = this.b;
        if (bVar != null) {
            bVar.a(obj, str);
        }
    }

    public void toggleCloseBtn(Object obj, String str) {
        z.d(a, "toggleCloseBtn" + str);
        b bVar = this.b;
        if (bVar != null) {
            bVar.b(obj, str);
        }
    }

    public void triggerCloseBtn(Object obj, String str) {
        z.d(a, "triggerCloseBtn" + str);
        b bVar = this.b;
        if (bVar != null) {
            bVar.c(obj, str);
        }
    }

    public void readyStatus(Object obj, String str) {
        if (obj != null) {
            try {
                com.mbridge.msdk.mbjscommon.windvane.a aVar = (com.mbridge.msdk.mbjscommon.windvane.a) obj;
                int iOptInt = new JSONObject(str).optInt("isReady", 1);
                if (aVar.a != null) {
                    WindVaneWebView windVaneWebView = aVar.a;
                    if (windVaneWebView.getWebViewListener() != null) {
                        windVaneWebView.getWebViewListener().a(windVaneWebView, iOptInt);
                    }
                }
            } catch (Throwable th) {
                z.c(a, "readyStatus", th);
            }
        }
    }

    public void install(Object obj, String str) {
        String strAddDownloaderListener = addDownloaderListener(obj, str);
        b bVar = this.b;
        if (bVar != null) {
            bVar.d(obj, strAddDownloaderListener);
        }
    }

    public void resetCountdown(Object obj, String str) {
        z.d(a, "resetCountdown" + str);
        b bVar = this.b;
        if (bVar != null) {
            bVar.h(obj, str);
        }
    }

    public void openURL(Object obj, String str) {
        z.d(a, "openURL" + str);
        b bVar = this.b;
        if (bVar != null) {
            bVar.e(obj, str);
        }
    }

    public void cai(Object obj, String str) {
        z.d(a, "cai" + str);
        b bVar = this.b;
        if (bVar != null) {
            bVar.f(obj, str);
        }
    }

    public void gial(Object obj, String str) {
        z.d(a, "gial" + str);
        b bVar = this.b;
        if (bVar != null) {
            bVar.g(obj, str);
        }
    }

    public void handlerH5Exception(Object obj, String str) {
        if (obj != null) {
            try {
                com.mbridge.msdk.mbjscommon.windvane.a aVar = (com.mbridge.msdk.mbjscommon.windvane.a) obj;
                if (aVar.a != null) {
                    WindVaneWebView windVaneWebView = aVar.a;
                    if (windVaneWebView.getWebViewListener() != null) {
                        windVaneWebView.getWebViewListener().a(windVaneWebView, 0, str.toString(), windVaneWebView.getUrl());
                    }
                }
            } catch (Throwable th) {
                z.c(a, "handlerH5Exception", th);
            }
        }
    }

    public void getFileInfo(Object obj, String str) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            c.a(obj, new JSONObject(str));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public void sendImpressions(Object obj, String str) {
        try {
            z.d(a, "sendImpressions");
            if (this.b != null) {
                this.b.i(obj, str);
            }
        } catch (Throwable th) {
            z.c(a, "sendImpressions", th);
        }
    }

    public void reportUrls(Object obj, String str) {
        try {
            z.d(a, "reportUrls");
            if (this.b != null) {
                this.b.j(obj, str);
            }
        } catch (Throwable th) {
            z.c(a, "reportUrls", th);
        }
    }

    public void increaseOfferFrequence(Object obj, String str) {
        try {
            c.b(obj, new JSONObject(str));
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    public void onJSBridgeConnect(Object obj, String str) {
        try {
            z.d(a, "onJSBridgeConnect");
            if (this.b != null) {
                this.b.k(obj, str);
            }
        } catch (Throwable th) {
            z.c(a, "onJSBridgeConnect", th);
        }
    }

    @Override
    public void sendNoticeAndCallBackClick(Object obj, String str) {
        install(obj, str);
    }

    public void pauseCountDown(Object obj, String str) {
        try {
            z.d(a, "pauseCountDown");
            if (this.b != null) {
                this.b.l(obj, str);
            }
        } catch (Throwable th) {
            z.c(a, "pauseCountDown", th);
        }
    }

    public void resumeCountDown(Object obj, String str) {
        try {
            z.d(a, "resumeCountDown");
            if (this.b != null) {
                this.b.m(obj, str);
            }
        } catch (Throwable th) {
            z.c(a, "resumeCountDown", th);
        }
    }
}
