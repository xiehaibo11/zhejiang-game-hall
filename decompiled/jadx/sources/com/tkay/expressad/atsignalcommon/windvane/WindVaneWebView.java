package com.tkay.expressad.atsignalcommon.windvane;

import android.content.Context;
import android.content.IntentFilter;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.MotionEvent;
import com.tkay.expressad.atsignalcommon.base.BaseWebView;
import com.tkay.expressad.foundation.h.t;

/* JADX INFO: loaded from: classes3.dex */
public class WindVaneWebView extends BaseWebView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Object f6437a;
    private Object b;
    private String c;
    private e d;
    protected o f;
    protected d g;
    protected i h;
    private String i;
    private boolean j;
    private float k;
    private float l;

    static /* synthetic */ boolean a(WindVaneWebView windVaneWebView) {
        windVaneWebView.j = true;
        return true;
    }

    public WindVaneWebView(Context context) {
        super(context);
        this.j = false;
        this.k = 0.0f;
        this.l = 0.0f;
    }

    public WindVaneWebView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.j = false;
        this.k = 0.0f;
        this.l = 0.0f;
    }

    public WindVaneWebView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.j = false;
        this.k = 0.0f;
        this.l = 0.0f;
    }

    public void setSignalCommunication(d dVar) {
        this.g = dVar;
        dVar.a(this);
    }

    public d getSignalCommunication() {
        return this.g;
    }

    public void setRid(String str) {
        this.i = str;
    }

    public String getRid() {
        return this.i;
    }

    public Object getJsObject(String str) {
        i iVar = this.h;
        if (iVar == null) {
            return null;
        }
        return iVar.a(str);
    }

    public void registerWindVanePlugin(Class cls) {
        if (this.h == null) {
            return;
        }
        i.a(cls);
    }

    @Override // com.tkay.expressad.atsignalcommon.base.BaseWebView
    protected final void a() {
        super.a();
        getSettings().setSavePassword(false);
        try {
            getSettings().setUserAgentString(getSettings().getUserAgentString() + " WindVane/3.0.2");
        } catch (Throwable unused) {
            getSettings().setUserAgentString(com.tkay.core.common.l.d.i() + " WindVane/3.0.2");
        }
        if (this.f == null) {
            this.f = new o(this);
        }
        setWebViewChromeClient(this.f);
        this.mWebViewClient = new p();
        setWebViewClient(this.mWebViewClient);
        if (this.g == null) {
            m mVar = new m(this.e);
            this.g = mVar;
            setSignalCommunication(mVar);
        }
        this.h = new i(this.e, this);
    }

    public void setApiManagerContext(Context context) {
        i iVar = this.h;
        if (iVar != null) {
            iVar.a(context);
        }
    }

    public void setApiManagerJSFactory(Object obj) {
        i iVar = this.h;
        if (iVar != null) {
            iVar.a(obj);
        }
    }

    public void setWebViewChromeClient(o oVar) {
        this.f = oVar;
        setWebChromeClient(oVar);
    }

    public void setObject(Object obj) {
        this.f6437a = obj;
    }

    public Object getObject() {
        return this.f6437a;
    }

    public void setMraidObject(Object obj) {
        this.b = obj;
    }

    public Object getMraidObject() {
        return this.b;
    }

    public void setWebViewListener(e eVar) {
        this.d = eVar;
        o oVar = this.f;
        if (oVar != null) {
            oVar.a(eVar);
        }
        if (this.mWebViewClient != null) {
            this.mWebViewClient.a(eVar);
        }
    }

    public e getWebViewListener() {
        return this.d;
    }

    public boolean isDestroyed() {
        return this.j;
    }

    public void release() {
        try {
            removeAllViews();
            setDownloadListener(null);
            this.f6437a = null;
            if (t.j(getContext()) == 0) {
                this.j = true;
                destroy();
            } else {
                com.tkay.core.common.b.m.a().a(new Runnable() { // from class: com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        WindVaneWebView.a(WindVaneWebView.this);
                        WindVaneWebView.this.destroy();
                    }
                }, r0 * 1000);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public void clearWebView() {
        if (this.j) {
            return;
        }
        loadUrl(com.tkay.core.common.res.d.f6304a);
    }

    public void setWebViewTransparent() {
        super.setTransparent();
    }

    public String getCampaignId() {
        return this.c;
    }

    public void setCampaignId(String str) {
        this.c = str;
    }

    @Override // android.webkit.WebView, android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        if (this.mWebViewClient != null && (this.mWebViewClient.b() instanceof IntentFilter)) {
            String url = getUrl();
            if (!TextUtils.isEmpty(url) && url.contains("https://play.google.com")) {
                if (motionEvent.getAction() == 0) {
                    this.k = motionEvent.getRawX();
                    this.l = motionEvent.getRawY();
                } else {
                    float rawX = motionEvent.getRawX() - this.k;
                    float y = motionEvent.getY() - this.l;
                    if ((rawX >= 0.0f || rawX * (-1.0f) <= 48.0f) && ((rawX <= 0.0f || rawX <= 48.0f) && ((y >= 0.0f || (-1.0f) * y <= 48.0f) && (y <= 0.0f || y <= 48.0f)))) {
                        setClickable(false);
                        return true;
                    }
                }
            }
        }
        return super.onTouchEvent(motionEvent);
    }
}
