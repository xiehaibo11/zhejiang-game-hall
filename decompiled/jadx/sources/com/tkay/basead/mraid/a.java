package com.tkay.basead.mraid;

import android.app.Activity;
import android.os.Bundle;
import android.text.TextUtils;
import com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes3.dex */
public final class a implements IBannerJSBridge {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    c f5705a;
    WeakReference<Activity> b;
    private b c;

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void cai(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void click(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void getFileInfo(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final com.tkay.expressad.foundation.d.c getMraidCampaign() {
        return null;
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void getNetstat(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void gial(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void handlerH5Exception(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void increaseOfferFrequence(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void init(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void install(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void onJSBridgeConnect(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void openURL(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void readyStatus(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void reportUrls(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void resetCountdown(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void sendImpressions(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void toggleCloseBtn(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.bridge.IBannerJSBridge
    public final void triggerCloseBtn(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final void open(String str) {
        b bVar = this.c;
        if (bVar != null) {
            bVar.open(str);
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final void close() {
        b bVar = this.c;
        if (bVar != null) {
            bVar.close();
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final void unload() {
        close();
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public final void useCustomClose(boolean z) {
        try {
            if (this.c != null) {
                this.c.useCustomClose(z);
            }
        } catch (Throwable unused) {
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
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
            if (this.f5705a == null || !this.f5705a.isShowing()) {
                c cVar = new c(activity, bundle, this.c);
                this.f5705a = cVar;
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
