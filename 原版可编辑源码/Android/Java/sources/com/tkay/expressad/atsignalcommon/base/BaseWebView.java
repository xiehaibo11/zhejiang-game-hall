package com.tkay.expressad.atsignalcommon.base;

import android.content.Context;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.sigmob.sdk.base.h;
import com.tkay.expressad.foundation.h.r;
import java.lang.reflect.Method;
import java.util.Map;

public class BaseWebView extends WebView {
    private View.OnTouchListener a;
    private View.OnTouchListener b;
    protected Context e;
    public long lastTouchTime;
    public b mWebViewClient;

    public BaseWebView(Context context) {
        super(context);
        this.lastTouchTime = 0L;
        this.a = new View.OnTouchListener() {
            @Override
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() == 0) {
                    BaseWebView.this.lastTouchTime = System.currentTimeMillis();
                }
                if (BaseWebView.this.b != null) {
                    return BaseWebView.this.b.onTouch(view, motionEvent);
                }
                return false;
            }
        };
        this.e = context;
        a();
    }

    public BaseWebView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.lastTouchTime = 0L;
        this.a = new View.OnTouchListener() {
            @Override
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() == 0) {
                    BaseWebView.this.lastTouchTime = System.currentTimeMillis();
                }
                if (BaseWebView.this.b != null) {
                    return BaseWebView.this.b.onTouch(view, motionEvent);
                }
                return false;
            }
        };
        this.e = context;
        a();
    }

    public BaseWebView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.lastTouchTime = 0L;
        this.a = new View.OnTouchListener() {
            @Override
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() == 0) {
                    BaseWebView.this.lastTouchTime = System.currentTimeMillis();
                }
                if (BaseWebView.this.b != null) {
                    return BaseWebView.this.b.onTouch(view, motionEvent);
                }
                return false;
            }
        };
        this.e = context;
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
            if (Build.VERSION.SDK_INT >= 16) {
                settings.setAllowUniversalAccessFromFileURLs(false);
            }
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
        settings.setDatabaseEnabled(true);
        String path = this.e.getDir("database", 0).getPath();
        settings.setDatabasePath(path);
        settings.setGeolocationEnabled(true);
        settings.setGeolocationDatabasePath(path);
        try {
            Method declaredMethod = WebSettings.class.getDeclaredMethod("setDisplayZoomControls", Boolean.TYPE);
            declaredMethod.setAccessible(true);
            declaredMethod.invoke(settings, Boolean.FALSE);
        } catch (Exception unused) {
        }
        try {
            Method declaredMethod2 = WebSettings.class.getDeclaredMethod(com.tkay.core.common.l.c.b("c2V0QWxsb3dVbml2ZXJzYWxBY2Nlc3NGcm9tRmlsZVVSTHM="), Boolean.TYPE);
            declaredMethod2.setAccessible(true);
            declaredMethod2.invoke(settings, Boolean.TRUE);
        } catch (Throwable unused2) {
        }
        super.setOnTouchListener(this.a);
    }

    @Override
    public void setOnTouchListener(View.OnTouchListener onTouchListener) {
        this.b = onTouchListener;
    }

    public void setTransparent() {
        setLayerType(1, null);
        setBackgroundColor(0);
    }

    @Override
    public void reload() {
        super.reload();
    }

    @Override
    public void setWebViewClient(WebViewClient webViewClient) {
        super.setWebViewClient(webViewClient);
        if (webViewClient instanceof b) {
            this.mWebViewClient = (b) webViewClient;
        }
    }

    public b getBaseWebViewClient() {
        return this.mWebViewClient;
    }

    @Override
    public void loadUrl(String str) {
        super.loadUrl(a(str));
    }

    @Override
    public void loadUrl(String str, Map<String, String> map) {
        super.loadUrl(a(str), map);
    }

    @Override
    public void loadDataWithBaseURL(String str, String str2, String str3, String str4, String str5) {
        super.loadDataWithBaseURL(a(str), str2, str3, str4, str5);
    }

    /* JADX WARN: Removed duplicated region for block: B:6:0x0010  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected String a(String str) {
        boolean z = false;
        if (!TextUtils.isEmpty(str)) {
            if (!str.contains("../")) {
                if (str.startsWith(h.x)) {
                    String path = Uri.parse(str).getPath();
                    if (TextUtils.isEmpty(path) || !path.contains(r.a())) {
                        z = true;
                    }
                }
            }
        }
        if (!z) {
            return str;
        }
        Log.e("tkay_express", "illegal URL: ".concat(String.valueOf(str)));
        return com.tkay.core.common.res.d.a;
    }
}
