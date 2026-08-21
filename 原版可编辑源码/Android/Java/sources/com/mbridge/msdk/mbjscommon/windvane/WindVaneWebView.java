package com.mbridge.msdk.mbjscommon.windvane;

import android.content.Context;
import android.os.Handler;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.MotionEvent;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.mbjscommon.base.BaseWebView;

public class WindVaneWebView extends BaseWebView {
    protected l b;
    protected b c;
    protected g d;
    private Object e;
    private Object f;
    private String g;
    private d h;
    private String i;
    private boolean j;
    private float k;
    private float l;

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

    public void setJsBridge(b bVar) {
        this.c = bVar;
        bVar.a(this);
    }

    public b getJsBridge() {
        return this.c;
    }

    public void setRid(String str) {
        this.i = str;
    }

    public String getRid() {
        return this.i;
    }

    public Object getJsObject(String str) {
        g gVar = this.d;
        if (gVar == null) {
            return null;
        }
        return gVar.a(str);
    }

    public void registerWindVanePlugin(Class cls) {
        g gVar = this.d;
        if (gVar == null) {
            return;
        }
        gVar.a(cls);
    }

    @Override
    protected final void a() {
        super.a();
        getSettings().setSavePassword(false);
        getSettings().setUserAgentString(getSettings().getUserAgentString() + " WindVane/3.0.2");
        if (this.b == null) {
            this.b = new l(this);
        }
        setWebViewChromeClient(this.b);
        this.mWebViewClient = new m();
        setWebViewClient(this.mWebViewClient);
        if (this.c == null) {
            i iVar = new i(this.a);
            this.c = iVar;
            setJsBridge(iVar);
        }
        this.d = new g(this.a, this);
    }

    public void setApiManagerContext(Context context) {
        g gVar = this.d;
        if (gVar != null) {
            gVar.a(context);
        }
    }

    public void setApiManagerJSFactory(Object obj) {
        g gVar = this.d;
        if (gVar != null) {
            gVar.a(obj);
        }
    }

    public void setWebViewChromeClient(l lVar) {
        this.b = lVar;
        setWebChromeClient(lVar);
    }

    public void setObject(Object obj) {
        this.e = obj;
    }

    public Object getObject() {
        return this.e;
    }

    public void setMraidObject(Object obj) {
        this.f = obj;
    }

    public Object getMraidObject() {
        return this.f;
    }

    public void setWebViewListener(d dVar) {
        this.h = dVar;
        l lVar = this.b;
        if (lVar != null) {
            lVar.a(dVar);
        }
        if (this.mWebViewClient != null) {
            this.mWebViewClient.a(dVar);
        }
    }

    public d getWebViewListener() {
        return this.h;
    }

    public boolean isDestoryed() {
        return this.j;
    }

    public void release() {
        try {
            setVisibility(8);
            removeAllViews();
            setDownloadListener(null);
            this.e = null;
            if (ae.m(getContext()) == 0) {
                this.j = true;
                destroy();
            } else {
                new Handler().postDelayed(new Runnable() {
                    @Override
                    public final void run() {
                        WindVaneWebView.this.j = true;
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
        loadUrl(com.tkay.core.common.res.d.a);
    }

    public void setWebViewTransparent() {
        super.setTransparent();
    }

    public String getCampaignId() {
        return this.g;
    }

    public void setCampaignId(String str) {
        this.g = str;
    }

    @Override
    public boolean onTouchEvent(MotionEvent motionEvent) {
        if (this.mWebViewClient != null && (this.mWebViewClient.b() instanceof com.mbridge.msdk.mbjscommon.base.c)) {
            String url = getUrl();
            if (!TextUtils.isEmpty(url) && url.contains("https://play.google.com")) {
                if (motionEvent.getAction() == 0) {
                    this.k = motionEvent.getRawX();
                    this.l = motionEvent.getRawY();
                } else {
                    int iB = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 15.0f);
                    float rawX = motionEvent.getRawX() - this.k;
                    float y = motionEvent.getY() - this.l;
                    if ((rawX >= 0.0f || rawX * (-1.0f) <= iB) && ((rawX <= 0.0f || rawX <= iB) && ((y >= 0.0f || (-1.0f) * y <= iB) && (y <= 0.0f || y <= iB)))) {
                        setClickable(false);
                        return true;
                    }
                }
            }
        }
        return super.onTouchEvent(motionEvent);
    }
}
