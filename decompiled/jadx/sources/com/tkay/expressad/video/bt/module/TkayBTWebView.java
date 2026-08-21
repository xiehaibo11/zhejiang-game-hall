package com.tkay.expressad.video.bt.module;

import android.content.Context;
import android.content.res.Configuration;
import android.net.http.SslError;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.view.View;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.tkay.expressad.atsignalcommon.a.a;
import com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.video.signal.a.j;
import com.tkay.expressad.videocommon.e.d;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class TkayBTWebView extends BTBaseView implements IMraidJSBridge {
    private static final String s = "portrait";
    private static final String t = "landscape";
    private j A;
    private WebView B;
    private String p;
    private String q;
    private String r;
    private boolean u;
    private ImageView v;
    private boolean w;
    private d x;
    private List<c> y;
    private WindVaneWebView z;

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public void expand(String str, boolean z) {
    }

    public d getRewardUnitSetting() {
        return this.x;
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView
    public void setRewardUnitSetting(d dVar) {
        this.x = dVar;
    }

    public List<c> getCampaigns() {
        return this.y;
    }

    public void setCampaigns(List<c> list) {
        this.y = list;
    }

    public void setCreateWebView(WebView webView) {
        this.B = webView;
    }

    public String getFileURL() {
        return this.p;
    }

    public void setFileURL(String str) {
        this.p = str;
        if (TextUtils.isEmpty(str)) {
            return;
        }
        boolean zContains = str.contains("play.google.com");
        setWebviewClickable(!zContains);
        if (zContains) {
            com.tkay.expressad.atsignalcommon.base.c cVar = new com.tkay.expressad.atsignalcommon.base.c();
            WindVaneWebView windVaneWebView = this.z;
            if (windVaneWebView != null) {
                windVaneWebView.setFilter(cVar);
            }
        }
    }

    public String getFilePath() {
        return this.q;
    }

    public void setFilePath(String str) {
        this.q = str;
    }

    public String getHtml() {
        return this.r;
    }

    public void setHtml(String str) {
        this.r = str;
    }

    public WindVaneWebView getWebView() {
        return this.z;
    }

    public TkayBTWebView(Context context) {
        super(context);
        this.u = false;
        this.w = false;
    }

    public TkayBTWebView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.u = false;
        this.w = false;
    }

    public void setWebviewClickable(boolean z) {
        WindVaneWebView windVaneWebView = this.z;
        if (windVaneWebView != null) {
            windVaneWebView.setClickable(z);
        }
    }

    private void a(com.tkay.expressad.atsignalcommon.base.c cVar) {
        WindVaneWebView windVaneWebView = this.z;
        if (windVaneWebView != null) {
            windVaneWebView.setFilter(cVar);
        }
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView
    public void init(Context context) {
        WindVaneWebView windVaneWebView = new WindVaneWebView(context);
        this.z = windVaneWebView;
        windVaneWebView.setBackgroundColor(0);
        this.z.setVisibility(0);
        j jVar = new j(null, this.b, this.y);
        this.A = jVar;
        jVar.a(this.c);
        this.z.setObject(this.A);
        this.z.setMraidObject(this);
        this.z.setWebViewListener(new a() { // from class: com.tkay.expressad.video.bt.module.TkayBTWebView.1
            @Override // com.tkay.expressad.atsignalcommon.a.a, com.tkay.expressad.atsignalcommon.windvane.c
            public final void a(Object obj) {
                super.a(obj);
                try {
                    String strI = TkayBTWebView.this.A != null ? TkayBTWebView.this.A.i() : "";
                    com.tkay.expressad.atsignalcommon.windvane.j.a().a(obj, TextUtils.isEmpty(strI) ? "" : Base64.encodeToString(strI.getBytes(), 2));
                } catch (Throwable th) {
                    th.getMessage();
                }
            }

            @Override // com.tkay.expressad.atsignalcommon.a.a, com.tkay.expressad.atsignalcommon.windvane.e
            public final void onPageFinished(WebView webView, String str) {
                super.onPageFinished(webView, str);
                if (TkayBTWebView.this.B != null) {
                    try {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put("id", TkayBTWebView.this.d);
                        jSONObject.put("code", BTBaseView.n);
                        JSONObject jSONObject2 = new JSONObject();
                        jSONObject2.put("id", TkayBTWebView.this.d);
                        jSONObject2.put("result", 1);
                        jSONObject.put("data", jSONObject2);
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a(TkayBTWebView.this.B, "onWebviewLoad", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    } catch (Exception e) {
                        com.tkay.expressad.video.bt.a.c.a();
                        com.tkay.expressad.video.bt.a.c.a(TkayBTWebView.this.B, e.getMessage());
                        e.getMessage();
                    }
                }
                com.tkay.expressad.atsignalcommon.windvane.j.a();
                com.tkay.expressad.atsignalcommon.windvane.j.a(TkayBTWebView.this.z);
            }

            @Override // com.tkay.expressad.atsignalcommon.a.a, com.tkay.expressad.atsignalcommon.windvane.e
            public final void onReceivedError(WebView webView, int i, String str, String str2) {
                super.onReceivedError(webView, i, str, str2);
                if (TkayBTWebView.this.B != null) {
                    try {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put("id", TkayBTWebView.this.d);
                        jSONObject.put("code", BTBaseView.n);
                        JSONObject jSONObject2 = new JSONObject();
                        jSONObject2.put("id", TkayBTWebView.this.d);
                        jSONObject2.put("result", 2);
                        jSONObject2.put("error", str);
                        jSONObject.put("data", jSONObject2);
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a(TkayBTWebView.this.B, "onWebviewLoad", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    } catch (Exception e) {
                        com.tkay.expressad.video.bt.a.c.a();
                        com.tkay.expressad.video.bt.a.c.a(TkayBTWebView.this.B, e.getMessage());
                        e.getMessage();
                    }
                }
            }

            @Override // com.tkay.expressad.atsignalcommon.a.a, com.tkay.expressad.atsignalcommon.windvane.e
            public final void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
                super.onReceivedSslError(webView, sslErrorHandler, sslError);
                if (TkayBTWebView.this.B != null) {
                    try {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put("id", TkayBTWebView.this.d);
                        jSONObject.put("code", BTBaseView.n);
                        JSONObject jSONObject2 = new JSONObject();
                        jSONObject2.put("id", TkayBTWebView.this.d);
                        jSONObject2.put("result", 2);
                        jSONObject2.put("error", sslError.toString());
                        jSONObject.put("data", jSONObject2);
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a(TkayBTWebView.this.B, "onWebviewLoad", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    } catch (Exception e) {
                        com.tkay.expressad.video.bt.a.c.a();
                        com.tkay.expressad.video.bt.a.c.a(TkayBTWebView.this.B, e.getMessage());
                        e.getMessage();
                    }
                }
            }

            @Override // com.tkay.expressad.atsignalcommon.a.a, com.tkay.expressad.atsignalcommon.windvane.e
            public final void readyState(WebView webView, int i) {
                super.readyState(webView, i);
            }
        });
        addView(this.z, new FrameLayout.LayoutParams(-1, -1));
        setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.bt.module.TkayBTWebView.2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (TkayBTWebView.this.B != null) {
                    try {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put("code", BTBaseView.n);
                        jSONObject.put("id", TkayBTWebView.this.d);
                        JSONObject jSONObject2 = new JSONObject();
                        jSONObject2.put("x", String.valueOf(view.getX()));
                        jSONObject2.put("y", String.valueOf(view.getY()));
                        jSONObject.put("data", jSONObject2);
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a(TkayBTWebView.this.B, "onClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    } catch (Exception unused) {
                        com.tkay.expressad.video.bt.a.c.a();
                        com.tkay.expressad.video.bt.a.c.a(TkayBTWebView.this.B, "onClicked", TkayBTWebView.this.d);
                    }
                }
            }
        });
        try {
            ImageView imageView = new ImageView(getContext());
            this.v = imageView;
            imageView.setImageResource(findDrawable("tkay_reward_close"));
            FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(96, 96);
            layoutParams.gravity = 8388661;
            layoutParams.setMargins(30, 30, 30, 30);
            this.v.setLayoutParams(layoutParams);
            this.v.setVisibility(this.u ? 4 : 8);
            if (this.b != null && this.b.H()) {
                this.v.setVisibility(4);
            }
            this.v.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.bt.module.TkayBTWebView.3
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    TkayBTWebView.this.close();
                }
            });
            addView(this.v);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public void setWebViewRid(String str) {
        WindVaneWebView windVaneWebView = this.z;
        if (windVaneWebView != null) {
            windVaneWebView.setRid(str);
        }
    }

    public void preload() {
        if (!TextUtils.isEmpty(this.p)) {
            this.z.loadUrl(this.p);
        } else if (!TextUtils.isEmpty(this.q)) {
            this.z.loadUrl(this.q);
        } else {
            if (TextUtils.isEmpty(this.r)) {
                return;
            }
            this.z.loadDataWithBaseURL("", this.r, "text/html", "UTF-8", null);
        }
    }

    public void webviewLoad(int i) {
        if (this.A == null) {
            this.A = new j(null, this.b, this.y);
        }
        if (this.b != null) {
            this.A.a(this.b);
        } else {
            List<c> list = this.y;
            if (list != null && list.size() > 0) {
                this.A.a(this.y);
                if (this.y.size() == 1) {
                    this.A.a(this.y.get(0));
                }
            }
        }
        d dVar = this.x;
        if (dVar != null) {
            this.A.a(dVar);
        }
        this.A.a(this.c);
        this.A.c(this.d);
        if (i == 1) {
            this.A.q();
        }
        WindVaneWebView windVaneWebView = this.z;
        if (windVaneWebView != null) {
            windVaneWebView.setObject(this.A);
        }
        if (this.b != null && this.b.H()) {
            this.v.setVisibility(4);
        }
        preload();
    }

    public boolean webviewReload() {
        WindVaneWebView windVaneWebView = this.z;
        if (windVaneWebView == null) {
            return false;
        }
        windVaneWebView.reload();
        return true;
    }

    public boolean webviewGoBack() {
        WindVaneWebView windVaneWebView = this.z;
        if (windVaneWebView == null || !windVaneWebView.canGoBack()) {
            return false;
        }
        this.z.goBack();
        return true;
    }

    public boolean webviewGoForward() {
        WindVaneWebView windVaneWebView = this.z;
        if (windVaneWebView == null || !windVaneWebView.canGoForward()) {
            return false;
        }
        this.z.goForward();
        return true;
    }

    public void broadcast(String str, JSONObject jSONObject) {
        if (this.z != null) {
            try {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("code", n);
                jSONObject2.put("id", this.d);
                jSONObject2.put("eventName", str);
                jSONObject2.put("data", jSONObject);
                com.tkay.expressad.atsignalcommon.windvane.j.a();
                com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) this.z, "broadcast", Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
            } catch (Exception unused) {
                com.tkay.expressad.video.bt.a.c.a();
                com.tkay.expressad.video.bt.a.c.a((WebView) this.z, "broadcast", this.d);
            }
        }
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView, android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        if (this.z != null) {
            try {
                JSONObject jSONObject = new JSONObject();
                if (configuration.orientation == 2) {
                    jSONObject.put("orientation", t);
                } else {
                    jSONObject.put("orientation", s);
                }
                jSONObject.put("instanceId", this.d);
                String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes(), 2);
                com.tkay.expressad.atsignalcommon.windvane.j.a();
                com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) this.z, "orientation", strEncodeToString);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public void onBackPressed() {
        if (this.z != null) {
            com.tkay.expressad.video.bt.a.c.a();
            com.tkay.expressad.video.bt.a.c.a((WebView) this.z, "onSystemBackPressed", this.d);
        }
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView
    public void onDestory() {
        if (this.w) {
            return;
        }
        this.w = true;
        try {
            if (this.z != null) {
                com.tkay.expressad.video.bt.a.c.a();
                com.tkay.expressad.video.bt.a.c.a((WebView) this.z, "onSystemDestory", this.d);
            }
            new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.tkay.expressad.video.bt.module.TkayBTWebView.4
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        if (TkayBTWebView.this.z != null) {
                            TkayBTWebView.this.z.clearWebView();
                            TkayBTWebView.this.z.release();
                        }
                        TkayBTWebView.this.p = null;
                        TkayBTWebView.this.q = null;
                        TkayBTWebView.this.r = null;
                        if (TkayBTWebView.this.B != null) {
                            TkayBTWebView.this.B = null;
                        }
                    } catch (Throwable th) {
                        th.getMessage();
                    }
                }
            }, 500L);
            setOnClickListener(null);
            removeAllViews();
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public void open(String str) {
        try {
            String strAd = this.b.ad();
            if (!TextUtils.isEmpty(str)) {
                this.b.p(str);
                try {
                    getMraidCampaign();
                } catch (Throwable th) {
                    th.getMessage();
                }
            }
            new com.tkay.expressad.a.a(getContext(), this.c);
            this.b.p(strAd);
        } catch (Throwable th2) {
            th2.getMessage();
        }
    }

    private void b() {
        try {
            getMraidCampaign();
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public void close() {
        WebView webView = this.B;
        if (webView != null) {
            a(webView, "onPlayerCloseBtnClicked", this.d);
        }
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public void unload() {
        close();
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public c getMraidCampaign() {
        return this.b;
    }

    @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
    public void useCustomClose(boolean z) {
        try {
            this.v.setVisibility(z ? 4 : 0);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public void notifyEvent(String str) {
        WindVaneWebView windVaneWebView = this.z;
        if (windVaneWebView != null) {
            a(windVaneWebView, str, this.d);
        }
    }
}
