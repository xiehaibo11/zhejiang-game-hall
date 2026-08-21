package com.mbridge.msdk.mbjscommon.windvane;

import android.content.Context;

/* JADX INFO: compiled from: WindVanePlugin.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class j {
    protected Context mContext;
    protected WindVaneWebView mWebView;
    protected Object object;

    public void initialize(Context context, WindVaneWebView windVaneWebView) {
        this.mContext = context;
        this.mWebView = windVaneWebView;
    }

    public void initialize(Object obj, WindVaneWebView windVaneWebView) {
        this.object = obj;
        this.mWebView = windVaneWebView;
    }
}
