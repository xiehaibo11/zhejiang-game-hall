package com.tkay.expressad.atsignalcommon.bridge;

import android.content.Context;
import com.tkay.expressad.atsignalcommon.windvane.AbsFeedBackForH5;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;

public class BannerJSPlugin extends AbsFeedBackForH5 {
    private final String h = "BannerJSBridge";
    private IBannerJSBridge i;

    /* JADX WARN: Multi-variable type inference failed */
    @Override
    public void initialize(Context context, WindVaneWebView windVaneWebView) {
        super.initialize(context, windVaneWebView);
        try {
            if (context instanceof IBannerJSBridge) {
                this.i = (IBannerJSBridge) context;
            } else {
                if (windVaneWebView.getObject() == null || !(windVaneWebView.getObject() instanceof IBannerJSBridge)) {
                    return;
                }
                this.i = (IBannerJSBridge) windVaneWebView.getObject();
            }
        } catch (Throwable unused) {
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

    public void readyStatus(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.readyStatus(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void init(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.init(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void click(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.click(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void toggleCloseBtn(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.toggleCloseBtn(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void triggerCloseBtn(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.triggerCloseBtn(obj, str);
            }
        } catch (Throwable unused) {
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
            if (this.i != null) {
                this.i.increaseOfferFrequence(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void resetCountdown(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.resetCountdown(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void handlerH5Exception(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.handlerH5Exception(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void install(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.install(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void getNetstat(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.getNetstat(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void openURL(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.openURL(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void cai(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.cai(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void gial(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.gial(obj, str);
            }
        } catch (Throwable unused) {
        }
    }

    public void getFileInfo(Object obj, String str) {
        try {
            if (this.i != null) {
                this.i.getFileInfo(obj, str);
            }
        } catch (Throwable unused) {
        }
    }
}
