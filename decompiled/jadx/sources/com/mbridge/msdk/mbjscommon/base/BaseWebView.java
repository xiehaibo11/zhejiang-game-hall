package com.mbridge.msdk.mbjscommon.base;

import android.content.Context;
import android.os.Build;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes2.dex */
public class BaseWebView extends WebView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected Context f3694a;
    private View.OnTouchListener b;
    private View.OnTouchListener c;
    public long lastTouchTime;
    public b mWebViewClient;

    public BaseWebView(Context context) {
        super(context);
        this.lastTouchTime = 0L;
        this.b = new View.OnTouchListener() { // from class: com.mbridge.msdk.mbjscommon.base.BaseWebView.1
            @Override // android.view.View.OnTouchListener
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() == 0) {
                    BaseWebView.this.lastTouchTime = System.currentTimeMillis();
                }
                if (BaseWebView.this.c != null) {
                    return BaseWebView.this.c.onTouch(view, motionEvent);
                }
                return false;
            }
        };
        this.f3694a = context;
        a();
    }

    public BaseWebView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.lastTouchTime = 0L;
        this.b = new View.OnTouchListener() { // from class: com.mbridge.msdk.mbjscommon.base.BaseWebView.1
            @Override // android.view.View.OnTouchListener
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() == 0) {
                    BaseWebView.this.lastTouchTime = System.currentTimeMillis();
                }
                if (BaseWebView.this.c != null) {
                    return BaseWebView.this.c.onTouch(view, motionEvent);
                }
                return false;
            }
        };
        this.f3694a = context;
        a();
    }

    public BaseWebView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.lastTouchTime = 0L;
        this.b = new View.OnTouchListener() { // from class: com.mbridge.msdk.mbjscommon.base.BaseWebView.1
            @Override // android.view.View.OnTouchListener
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() == 0) {
                    BaseWebView.this.lastTouchTime = System.currentTimeMillis();
                }
                if (BaseWebView.this.c != null) {
                    return BaseWebView.this.c.onTouch(view, motionEvent);
                }
                return false;
            }
        };
        this.f3694a = context;
        a();
    }

    public void setFilter(a aVar) {
        b bVar = this.mWebViewClient;
        if (bVar != null) {
            bVar.a(aVar);
        }
    }

    protected void a() {
        if (this.mWebViewClient == null) {
            b bVar = new b();
            this.mWebViewClient = bVar;
            setWebViewClient(bVar);
        }
        setHorizontalScrollBarEnabled(false);
        setVerticalScrollBarEnabled(false);
        setVerticalScrollBarEnabled(false);
        requestFocus();
        WebSettings settings = getSettings();
        settings.setJavaScriptEnabled(true);
        settings.setAppCacheEnabled(true);
        settings.setAppCacheMaxSize(5242880L);
        settings.setAllowFileAccess(true);
        settings.setBuiltInZoomControls(true);
        settings.setJavaScriptCanOpenWindowsAutomatically(true);
        settings.setDomStorageEnabled(true);
        settings.setSupportZoom(false);
        settings.setSavePassword(false);
        settings.setDatabaseEnabled(true);
        settings.setUseWideViewPort(true);
        settings.setLoadWithOverviewMode(true);
        settings.setRenderPriority(WebSettings.RenderPriority.HIGH);
        if (Build.VERSION.SDK_INT >= 26) {
            try {
                settings.setSafeBrowsingEnabled(false);
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        if (Build.VERSION.SDK_INT >= 17) {
            settings.setMediaPlaybackRequiresUserGesture(false);
        }
        try {
            settings.setAllowUniversalAccessFromFileURLs(true);
        } catch (Throwable th2) {
            th2.printStackTrace();
        }
        try {
            if (Build.VERSION.SDK_INT >= 21) {
                settings.setMixedContentMode(0);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (Build.VERSION.SDK_INT >= 5) {
            settings.setDatabaseEnabled(true);
            String path = this.f3694a.getDir("database", 0).getPath();
            settings.setDatabasePath(path);
            settings.setGeolocationEnabled(true);
            settings.setGeolocationDatabasePath(path);
        }
        if (Build.VERSION.SDK_INT >= 11) {
            try {
                Method declaredMethod = WebSettings.class.getDeclaredMethod("setDisplayZoomControls", Boolean.TYPE);
                declaredMethod.setAccessible(true);
                declaredMethod.invoke(settings, false);
            } catch (Exception unused) {
            }
        }
        super.setOnTouchListener(this.b);
    }

    @Override // android.view.View
    public void setOnTouchListener(View.OnTouchListener onTouchListener) {
        this.c = onTouchListener;
    }

    public void setTransparent() {
        setLayerType(1, null);
        setBackgroundColor(0);
    }

    @Override // android.webkit.WebView
    public void reload() {
        super.reload();
    }

    @Override // android.webkit.WebView
    public void setWebViewClient(WebViewClient webViewClient) {
        super.setWebViewClient(webViewClient);
        if (webViewClient instanceof b) {
            this.mWebViewClient = (b) webViewClient;
        }
    }
}
