package com.tkay.expressad.advanced.view;

import android.content.Context;
import android.content.IntentFilter;
import com.tkay.expressad.advanced.a.b;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;

/* JADX INFO: loaded from: classes3.dex */
public class TYNativeAdvancedWebview extends WindVaneWebView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6402a = TYNativeAdvancedWebview.class.getSimpleName();
    private b b;

    public TYNativeAdvancedWebview(Context context) {
        super(context);
        setBackgroundColor(0);
    }

    @Override // android.webkit.WebView, android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        registerNetWorkReceiver();
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        unregisterNetWorkReceiver();
    }

    public void registerNetWorkReceiver() {
        try {
            if (this.b == null) {
                this.b = new b(this);
            }
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
            getContext().registerReceiver(this.b, intentFilter);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public void unregisterNetWorkReceiver() {
        try {
            if (this.b != null) {
                this.b.a();
                getContext().unregisterReceiver(this.b);
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }
}
