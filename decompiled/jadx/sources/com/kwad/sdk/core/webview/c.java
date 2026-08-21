package com.kwad.sdk.core.webview;

import android.content.Context;
import android.content.res.Configuration;
import android.os.Build;
import android.util.AttributeSet;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.webkit.WebView;
import com.kwad.sdk.m.l;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.bo;

/* JADX INFO: loaded from: classes2.dex */
public class c extends WebView {
    private boolean ayj;
    private com.kwad.sdk.core.webview.a.a ayk;

    public c(Context context) {
        super(bn(context));
        this.ayj = true;
        init();
    }

    public c(Context context, AttributeSet attributeSet) {
        super(bn(context), attributeSet);
        this.ayj = true;
        init();
    }

    public c(Context context, AttributeSet attributeSet, int i) {
        super(bn(context), attributeSet, i);
        this.ayj = true;
        init();
    }

    public c(Context context, AttributeSet attributeSet, int i, int i2) {
        super(bn(context), attributeSet, i, i2);
        this.ayj = true;
        init();
    }

    public c(Context context, AttributeSet attributeSet, int i, boolean z) {
        super(bn(context), attributeSet, i, z);
        this.ayj = true;
        init();
    }

    private static Context bn(Context context) {
        if (Build.VERSION.SDK_INT >= 21 && Build.VERSION.SDK_INT < 23) {
            context = context.createConfigurationContext(new Configuration());
        }
        Context contextDt = l.dt(context);
        if (l.dw(contextDt)) {
            return contextDt;
        }
        ((com.kwad.sdk.service.a.d) ServiceProvider.get(com.kwad.sdk.service.a.d.class)).gatherException(new IllegalArgumentException("KSApiWebView context not except--context:" + contextDt.getClass().getName() + "--classloader:" + contextDt.getClass().getClassLoader() + "--context2:" + l.dt(ServiceProvider.HD()).getClass().getName()));
        return l.dt(ServiceProvider.HD());
    }

    private void init() {
        bo.a(this);
        com.kwad.sdk.core.webview.a.a aVar = new com.kwad.sdk.core.webview.a.a();
        this.ayk = aVar;
        setWebViewClient(aVar);
    }

    @Override // android.webkit.WebView
    public void destroy() {
        if (this.ayj) {
            release();
        }
    }

    public final void release() {
        try {
            ViewParent parent = getParent();
            if (parent instanceof ViewGroup) {
                ((ViewGroup) parent).removeView(this);
            }
            removeAllViews();
            super.destroy();
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(th);
        }
    }

    public void setEnableDestroy(boolean z) {
        this.ayj = z;
    }

    public void setNeedHybridLoad(boolean z) {
        this.ayk.setNeedHybridLoad(z);
    }
}
