package com.tkay.expressad.video.signal.factory;

import android.app.Activity;
import android.webkit.WebView;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.video.bt.module.TkayBTContainer;
import com.tkay.expressad.video.module.TkayContainerView;
import com.tkay.expressad.video.module.TkayVideoView;
import com.tkay.expressad.video.signal.a.h;
import com.tkay.expressad.video.signal.a.j;
import com.tkay.expressad.video.signal.a.k;
import com.tkay.expressad.video.signal.a.l;
import com.tkay.expressad.video.signal.a.m;
import com.tkay.expressad.video.signal.a.n;
import com.tkay.expressad.video.signal.c;
import com.tkay.expressad.video.signal.e;
import com.tkay.expressad.video.signal.g;
import com.tkay.expressad.video.signal.i;
import java.util.List;

public class b extends a {
    private Activity h;
    private WebView i;
    private TkayVideoView j;
    private TkayContainerView k;
    private c l;
    private TkayBTContainer m;
    private List<c> n;
    private c.a o;
    private String p;

    public b(Activity activity) {
        this.h = activity;
    }

    public b(Activity activity, TkayBTContainer tkayBTContainer, WebView webView) {
        this.h = activity;
        this.m = tkayBTContainer;
        this.i = webView;
    }

    private b(Activity activity, WebView webView, TkayVideoView tkayVideoView, TkayContainerView tkayContainerView, com.tkay.expressad.foundation.d.c cVar) {
        this.h = activity;
        this.i = webView;
        this.j = tkayVideoView;
        this.k = tkayContainerView;
        this.l = cVar;
    }

    public b(Activity activity, WebView webView, TkayVideoView tkayVideoView, TkayContainerView tkayContainerView, com.tkay.expressad.foundation.d.c cVar, c.a aVar) {
        this.h = activity;
        this.i = webView;
        this.j = tkayVideoView;
        this.k = tkayContainerView;
        this.l = cVar;
        this.o = aVar;
        this.p = tkayVideoView.getUnitId();
    }

    @Override
    public com.tkay.expressad.video.signal.a getActivityProxy() {
        if (this.i == null) {
            return super.getActivityProxy();
        }
        if (this.a == null) {
            this.a = new h(this.i);
        }
        return this.a;
    }

    @Override
    public g getJSNotifyProxy() {
        if (this.i == null) {
            return super.getJSNotifyProxy();
        }
        if (this.d == null) {
            this.d = new l(this.i);
        }
        return this.d;
    }

    @Override
    public com.tkay.expressad.video.signal.c getJSCommon() {
        if (this.h == null || this.l == null) {
            return super.getJSCommon();
        }
        if (this.b == null) {
            this.b = new j(this.h, this.l);
        }
        if (this.l.k() == 5 && this.n != null && (this.b instanceof j)) {
            ((j) this.b).a(this.n);
        }
        this.b.a(this.h);
        this.b.a(this.p);
        this.b.a(this.o);
        return this.b;
    }

    @Override
    public com.tkay.expressad.video.signal.j getJSVideoModule() {
        if (this.j == null) {
            return super.getJSVideoModule();
        }
        if (this.c == null) {
            this.c = new n(this.j);
        }
        return this.c;
    }

    @Override
    public e getJSContainerModule() {
        if (this.k == null) {
            return super.getJSContainerModule();
        }
        if (this.e == null) {
            this.e = new k(this.k);
        }
        return this.e;
    }

    @Override
    public i getIJSRewardVideoV1() {
        if (this.k == null || this.h == null) {
            return super.getIJSRewardVideoV1();
        }
        if (this.f == null) {
            this.f = new m(this.h, this.k);
        }
        return this.f;
    }

    @Override
    public com.tkay.expressad.video.signal.b getJSBTModule() {
        if (this.h == null || this.m == null) {
            return super.getJSBTModule();
        }
        if (this.g == null) {
            this.g = new com.tkay.expressad.video.signal.a.i(this.h, this.m);
        }
        return this.g;
    }

    public final void a(j jVar) {
        this.b = jVar;
    }

    public final void a(List<com.tkay.expressad.foundation.d.c> list) {
        this.n = list;
    }
}
