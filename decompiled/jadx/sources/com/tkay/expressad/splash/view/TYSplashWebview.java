package com.tkay.expressad.splash.view;

import android.content.Context;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;

/* JADX INFO: loaded from: classes3.dex */
public class TYSplashWebview extends WindVaneWebView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7160a = TYSplashWebview.class.getSimpleName();
    private String b;

    public TYSplashWebview(Context context) {
        super(context);
        setBackgroundColor(0);
    }

    public String getRequestId() {
        return this.b;
    }

    public void setRequestId(String str) {
        this.b = str;
    }
}
