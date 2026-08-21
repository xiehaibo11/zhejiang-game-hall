package com.mbridge.msdk.mbjscommon.bridge;

import android.content.Context;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.AbsMbridgeDownload;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.sigmob.sdk.base.mta.PointCategory;

public class BannerJSPlugin extends AbsMbridgeDownload {
    private final String a = "BannerJSBridge";
    private c b;

    /* JADX WARN: Multi-variable type inference failed */
    @Override
    public void initialize(Context context, WindVaneWebView windVaneWebView) {
        super.initialize(context, windVaneWebView);
        try {
            if (context instanceof c) {
                this.b = (c) context;
            } else if (windVaneWebView.getObject() != null && (windVaneWebView.getObject() instanceof c)) {
                this.b = (c) windVaneWebView.getObject();
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "initialize", th);
        }
    }

    public void onJSBridgeConnect(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "onJSBridgeConnect");
            if (this.b != null) {
                this.b.f(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "onJSBridgeConnect", th);
        }
    }

    public void readyStatus(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "readyStatus");
            if (this.b != null) {
                this.b.c(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "readyStatus", th);
        }
    }

    public void init(Object obj, String str) {
        try {
            z.d("BannerJSBridge", PointCategory.INIT);
            if (this.b != null) {
                this.b.a(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", PointCategory.INIT, th);
        }
    }

    public void click(Object obj, String str) {
        try {
            String strAddDownloaderListener = addDownloaderListener(obj, str);
            z.d("BannerJSBridge", "click");
            if (this.b != null) {
                this.b.b(obj, strAddDownloaderListener);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "click", th);
        }
    }

    public void toggleCloseBtn(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "toggleCloseBtn");
            if (this.b != null) {
                this.b.d(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "toggleCloseBtn", th);
        }
    }

    public void triggerCloseBtn(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "triggerCloseBtn");
            if (this.b != null) {
                this.b.e(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "triggerCloseBtn", th);
        }
    }

    public void sendImpressions(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "sendImpressions");
            if (this.b != null) {
                this.b.i(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "sendImpressions", th);
        }
    }

    public void reportUrls(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "reportUrls");
            if (this.b != null) {
                this.b.k(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "reportUrls", th);
        }
    }

    public void increaseOfferFrequence(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "increaseOfferFrequence");
            if (this.b != null) {
                this.b.l(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "increaseOfferFrequence", th);
        }
    }

    public void resetCountdown(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "resetCountdown");
            if (this.b != null) {
                this.b.h(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "resetCountdown", th);
        }
    }

    public void handlerH5Exception(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "handlerH5Exception");
            if (this.b != null) {
                this.b.m(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "handlerH5Exception", th);
        }
    }

    public void install(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "install");
            if (this.b != null) {
                this.b.g(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "install", th);
        }
    }

    public void getNetstat(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "getNetstat");
            if (this.b != null) {
                this.b.o(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "getNetstat", th);
        }
    }

    public void openURL(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "openURL");
            if (this.b != null) {
                this.b.n(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "openURL", th);
        }
    }

    public void cai(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "cai");
            if (this.b != null) {
                this.b.p(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "cai", th);
        }
    }

    public void gial(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "gial");
            if (this.b != null) {
                this.b.q(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "gial", th);
        }
    }

    public void getFileInfo(Object obj, String str) {
        try {
            z.d("BannerJSBridge", "getFileInfo");
            if (this.b != null) {
                this.b.j(obj, str);
            }
        } catch (Throwable th) {
            z.c("BannerJSBridge", "getFileInfo", th);
        }
    }

    @Override
    public void sendNoticeAndCallBackClick(Object obj, String str) {
        install(obj, str);
    }
}
