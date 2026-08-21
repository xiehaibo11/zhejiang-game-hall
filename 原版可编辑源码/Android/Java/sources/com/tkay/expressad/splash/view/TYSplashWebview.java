package com.tkay.expressad.splash.view;

import android.content.Context;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;

public class TYSplashWebview extends WindVaneWebView {
    private static final String a = TYSplashWebview.class.getSimpleName();
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
