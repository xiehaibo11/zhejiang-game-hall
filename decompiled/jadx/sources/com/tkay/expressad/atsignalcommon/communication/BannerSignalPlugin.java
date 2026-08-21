package com.tkay.expressad.atsignalcommon.communication;

import android.content.Context;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.windvane.l;

/* JADX INFO: loaded from: classes3.dex */
public class BannerSignalPlugin extends l {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f6425a = "BannerSignalPlugin";
    private b b;

    public void click(Object obj, String str) {
    }

    public void getFileInfo(Object obj, String str) {
    }

    public void getNetstat(Object obj, String str) {
    }

    public void handlerH5Exception(Object obj, String str) {
    }

    public void increaseOfferFrequence(Object obj, String str) {
    }

    public void init(Object obj, String str) {
    }

    public void install(Object obj, String str) {
    }

    public void onSignalCommunication(Object obj, String str) {
    }

    public void openURL(Object obj, String str) {
    }

    public void readyStatus(Object obj, String str) {
    }

    public void reportUrls(Object obj, String str) {
    }

    public void resetCountdown(Object obj, String str) {
    }

    public void sendImpressions(Object obj, String str) {
    }

    public void toggleCloseBtn(Object obj, String str) {
    }

    public void triggerCloseBtn(Object obj, String str) {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.tkay.expressad.atsignalcommon.windvane.l
    public void initialize(Context context, WindVaneWebView windVaneWebView) {
        super.initialize(context, windVaneWebView);
        try {
            if (context instanceof b) {
                this.b = (b) context;
            } else {
                if (windVaneWebView.getObject() == null || !(windVaneWebView.getObject() instanceof b)) {
                    return;
                }
                this.b = (b) windVaneWebView.getObject();
            }
        } catch (Throwable unused) {
        }
    }
}
