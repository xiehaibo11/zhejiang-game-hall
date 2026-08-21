package com.tkay.expressad.advanced.view;

import android.content.Context;
import android.content.IntentFilter;
import com.tkay.expressad.advanced.a.b;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;

public class TYNativeAdvancedWebview extends WindVaneWebView {
    private static final String a = TYNativeAdvancedWebview.class.getSimpleName();
    private b b;

    public TYNativeAdvancedWebview(Context context) {
        super(context);
        setBackgroundColor(0);
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        registerNetWorkReceiver();
    }

    @Override
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
