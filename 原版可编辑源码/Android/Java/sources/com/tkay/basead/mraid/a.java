package com.tkay.basead.mraid;

import android.app.Activity;
import android.os.Bundle;
import android.text.TextUtils;
import com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge;
import java.lang.ref.WeakReference;

public final class a implements IBannerJSBridge {
    c a;
    WeakReference<Activity> b;
    private b c;

    @Override
    public final void cai(Object obj, String str) {
    }

    @Override
    public final void click(Object obj, String str) {
    }

    @Override
    public final void getFileInfo(Object obj, String str) {
    }

    @Override
    public final com.tkay.expressad.foundation.d.c getMraidCampaign() {
        return null;
    }

    @Override
    public final void getNetstat(Object obj, String str) {
    }

    @Override
    public final void gial(Object obj, String str) {
    }

    @Override
    public final void handlerH5Exception(Object obj, String str) {
    }

    @Override
    public final void increaseOfferFrequence(Object obj, String str) {
    }

    @Override
    public final void init(Object obj, String str) {
    }

    @Override
    public final void install(Object obj, String str) {
    }

    @Override
    public final void onJSBridgeConnect(Object obj, String str) {
    }

    @Override
    public final void openURL(Object obj, String str) {
    }

    @Override
    public final void readyStatus(Object obj, String str) {
    }

    @Override
    public final void reportUrls(Object obj, String str) {
    }

    @Override
    public final void resetCountdown(Object obj, String str) {
    }

    @Override
    public final void sendImpressions(Object obj, String str) {
    }

    @Override
    public final void toggleCloseBtn(Object obj, String str) {
    }

    @Override
    public final void triggerCloseBtn(Object obj, String str) {
    }

    @Override
    public final void open(String str) {
        b bVar = this.c;
        if (bVar != null) {
            bVar.open(str);
        }
    }

    @Override
    public final void close() {
        b bVar = this.c;
        if (bVar != null) {
            bVar.close();
        }
    }

    @Override
    public final void unload() {
        close();
    }

    @Override
    public final void useCustomClose(boolean z) {
        try {
            if (this.c != null) {
                this.c.useCustomClose(z);
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public final void expand(String str, boolean z) {
        Activity activity;
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            Bundle bundle = new Bundle();
            bundle.putString("url", str);
            bundle.putBoolean("shouldUseCustomClose", z);
            if (this.b == null || (activity = this.b.get()) == null) {
                return;
            }
            if (this.a == null || !this.a.isShowing()) {
                c cVar = new c(activity, bundle, this.c);
                this.a = cVar;
                cVar.show();
            }
        } catch (Throwable unused) {
        }
    }

    private void a(Activity activity) {
        this.b = new WeakReference<>(activity);
    }

    public final void a(b bVar) {
        if (bVar != null) {
            this.c = bVar;
        }
    }
}
