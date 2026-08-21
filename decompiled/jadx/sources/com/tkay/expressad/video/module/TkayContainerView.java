package com.tkay.expressad.video.module;

import android.content.Context;
import android.content.res.Configuration;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.x;
import com.tkay.expressad.video.dynview.widget.TYOrderCampView;
import com.tkay.expressad.video.module.a.a.g;
import com.tkay.expressad.video.module.a.a.i;
import com.tkay.expressad.video.module.a.a.k;
import com.tkay.expressad.video.module.a.a.l;
import com.tkay.expressad.video.module.b.a;
import com.tkay.expressad.video.signal.e;
import com.tkay.expressad.video.signal.factory.b;
import com.tkay.expressad.video.signal.h;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class TkayContainerView extends TkayBaseView implements e, h {
    private int A;
    private boolean B;
    private boolean C;
    private boolean D;
    private boolean E;
    private boolean F;
    private boolean G;
    private int H;
    private boolean I;
    private boolean J;
    private int K;
    private int L;
    private int M;
    private int N;
    private int O;
    private String P;
    private b Q;
    private TYOrderCampView R;
    private boolean S;
    private boolean T;
    private List<c> U;
    private TkayPlayableView n;
    private TkayClickCTAView o;
    private TkayClickMiniCardView p;
    private TkayNativeEndCardView q;
    private TkayH5EndCardView r;
    private TkayVideoEndCoverView s;
    private TkayVastEndCardView t;
    private TkayLandingPageView u;
    private TkayAlertWebview v;
    private String w;
    private int x;
    private int y;
    private int z;

    public void setJSFactory(b bVar) {
        this.Q = bVar;
    }

    public void addOrderViewData(List<c> list) {
        if (list == null) {
            return;
        }
        this.U = list;
    }

    public int getVideoSkipTime() {
        return this.H;
    }

    public void setVideoSkipTime(int i) {
        this.H = i;
    }

    public TkayContainerView(Context context) {
        super(context);
        this.y = 1;
        this.z = 1;
        this.A = 1;
        this.B = false;
        this.C = false;
        this.D = false;
        this.E = false;
        this.F = true;
        this.G = false;
        this.I = false;
        this.J = false;
        this.S = false;
        this.T = false;
        this.U = new ArrayList();
    }

    public TkayContainerView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.y = 1;
        this.z = 1;
        this.A = 1;
        this.B = false;
        this.C = false;
        this.D = false;
        this.E = false;
        this.F = true;
        this.G = false;
        this.I = false;
        this.J = false;
        this.S = false;
        this.T = false;
        this.U = new ArrayList();
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView
    public void init(Context context) {
        setVisibility(0);
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView, android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        TkayBaseView[] tkayBaseViewArr = {this.n, this.o, this.p, this.q, this.r, this.t, this.u, this.s};
        for (int i = 0; i < 8; i++) {
            TkayBaseView tkayBaseView = tkayBaseViewArr[i];
            if (tkayBaseView != null && (tkayBaseView instanceof TkayClickMiniCardView)) {
                tkayBaseView.onSelfConfigurationChanged(configuration);
            } else if (tkayBaseView != null && tkayBaseView.getVisibility() == 0 && tkayBaseView.getParent() != null && !isLast()) {
                tkayBaseView.onSelfConfigurationChanged(configuration);
            }
        }
    }

    @Override // com.tkay.expressad.video.signal.f
    public void preLoadData(final b bVar) {
        this.Q = bVar;
        if (this.b != null) {
            if (this.b.J() != 2) {
                b(this.x);
                if (this.b.j()) {
                    try {
                        a(bVar, Integer.valueOf(this.b.F()));
                    } catch (Throwable th) {
                        th.getMessage();
                        new Handler(Looper.getMainLooper()).postAtFrontOfQueue(new Runnable() { // from class: com.tkay.expressad.video.module.TkayContainerView.1
                            @Override // java.lang.Runnable
                            public final void run() {
                                TkayContainerView tkayContainerView = TkayContainerView.this;
                                tkayContainerView.a(bVar, Integer.valueOf(tkayContainerView.b.F()));
                            }
                        });
                    }
                    t.f(this.b.I());
                } else {
                    new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.tkay.expressad.video.module.TkayContainerView.2
                        @Override // java.lang.Runnable
                        public final void run() {
                            TkayContainerView tkayContainerView = TkayContainerView.this;
                            tkayContainerView.a(bVar, Integer.valueOf(tkayContainerView.b.F()));
                        }
                    }, getVideoSkipTime());
                }
            } else {
                if (this.n == null) {
                    this.n = new TkayPlayableView(this.f7279a);
                }
                this.n.setCloseDelayShowTime(this.z);
                this.n.setPlayCloseBtnTm(this.A);
                this.n.setCampaign(this.b);
                this.n.setNotifyListener(new AnonymousClass4(this.e));
                this.n.preLoadData(bVar);
            }
            o();
        }
    }

    @Override // com.tkay.expressad.video.signal.e
    public void showPlayableView() {
        if (this.b == null || this.E) {
            return;
        }
        removeAllViews();
        setMatchParent();
        if (this.n == null) {
            preLoadData(this.Q);
        }
        addView(this.n);
        TkayPlayableView tkayPlayableView = this.n;
        if (tkayPlayableView != null) {
            tkayPlayableView.setUnitId(this.w);
            if (this.b != null && this.b.H() && this.b.J() == 2) {
                this.n.setCloseVisible(0);
            }
            this.n.setNotchValue(this.P, this.K, this.L, this.M, this.N);
        }
        this.T = true;
        bringToFront();
    }

    private boolean a() {
        ViewGroup viewGroup = (ViewGroup) getParent();
        return viewGroup.indexOfChild(this) == viewGroup.getChildCount() - 1;
    }

    @Override // com.tkay.expressad.video.signal.e
    public boolean showAlertWebView() {
        TkayAlertWebview tkayAlertWebview = this.v;
        if (tkayAlertWebview == null || !tkayAlertWebview.isLoadSuccess()) {
            return false;
        }
        setMatchParent();
        ViewGroup viewGroup = (ViewGroup) getParent();
        if (!(viewGroup.indexOfChild(this) == viewGroup.getChildCount() - 1) && !this.T) {
            removeAllViews();
            bringToFront();
            this.S = true;
        }
        TkayClickMiniCardView tkayClickMiniCardView = this.p;
        if (tkayClickMiniCardView != null && tkayClickMiniCardView.getParent() != null) {
            return false;
        }
        if (this.v == null) {
            o();
        }
        TkayAlertWebview tkayAlertWebview2 = this.v;
        if (tkayAlertWebview2 != null && tkayAlertWebview2.getParent() != null) {
            removeView(this.v);
        }
        addView(this.v);
        setBackgroundColor(0);
        this.v.webviewshow();
        return true;
    }

    @Override // com.tkay.expressad.video.signal.e
    public void showVideoClickView(int i) {
        if (this.b != null) {
            if (i == -1) {
                if (isLast() || endCardShowing()) {
                    return;
                }
                p();
                return;
            }
            if (i == 1) {
                if (this.B) {
                    return;
                }
                TkayH5EndCardView tkayH5EndCardView = this.r;
                if (tkayH5EndCardView != null && tkayH5EndCardView.getParent() != null) {
                    removeView(this.r);
                }
                TkayClickMiniCardView tkayClickMiniCardView = this.p;
                if (tkayClickMiniCardView != null && tkayClickMiniCardView.getParent() != null) {
                    removeView(this.p);
                }
                TkayClickCTAView tkayClickCTAView = this.o;
                if (tkayClickCTAView == null || tkayClickCTAView.getParent() == null) {
                    try {
                        if (this.b != null && this.b.J() == 1) {
                            this.T = true;
                            if (this.o == null) {
                                b(-1);
                            }
                            if (this.o != null && (this.b == null || !this.b.j())) {
                                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
                                layoutParams.addRule(12, -1);
                                addView(this.o, 0, layoutParams);
                            }
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
                if (isLast()) {
                    bringToFront();
                    return;
                }
                return;
            }
            if (i != 2) {
                return;
            }
            TkayClickCTAView tkayClickCTAView2 = this.o;
            if (tkayClickCTAView2 != null && tkayClickCTAView2.getParent() != null) {
                removeView(this.o);
            }
            TkayAlertWebview tkayAlertWebview = this.v;
            if (tkayAlertWebview == null || tkayAlertWebview.getParent() == null) {
                TkayClickMiniCardView tkayClickMiniCardView2 = this.p;
                if (tkayClickMiniCardView2 == null || tkayClickMiniCardView2.getParent() == null) {
                    try {
                        if (this.b != null && this.b.J() == 1) {
                            setMatchParent();
                            m();
                        }
                    } catch (Exception e2) {
                        e2.printStackTrace();
                    }
                }
                if (miniCardLoaded()) {
                    TkayH5EndCardView tkayH5EndCardView2 = this.r;
                    if (tkayH5EndCardView2 != null && tkayH5EndCardView2.getParent() != null) {
                        removeView(this.r);
                    }
                    this.e.a(112, "");
                    if (this.b != null && !this.b.aw()) {
                        this.b.ax();
                        a.e(this.f7279a, this.b);
                    }
                    if (this.D) {
                        this.e.a(115, "");
                    } else {
                        this.T = true;
                        bringToFront();
                        webviewshow();
                        onConfigurationChanged(getResources().getConfiguration());
                    }
                    this.C = true;
                    return;
                }
                p();
            }
        }
    }

    @Override // com.tkay.expressad.video.signal.e
    public void showEndcard(int i) {
        if (this.b != null) {
            if (i == 1) {
                this.e.a(104, "");
            } else if (i == 100) {
                if (this.b.J() == 2) {
                    this.E = true;
                }
                a(this.n);
                setMatchParent();
                i();
            } else if (i == 3) {
                removeAllViews();
                setMatchParent();
                if (this.t == null) {
                    a(this.Q, (Integer) 3);
                }
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
                layoutParams.addRule(13, -1);
                addView(this.t, layoutParams);
                this.t.notifyShowListener();
                this.T = true;
                bringToFront();
            } else if (i == 4) {
                this.e.a(113, "");
                removeAllViews();
                setMatchParent();
                if (this.u == null) {
                    a(this.Q, (Integer) 4);
                }
                this.u.setUnitId(this.w);
                this.u.preLoadData(this.Q);
                addView(this.u);
                this.T = true;
                bringToFront();
            } else if (i == 5) {
                this.e.a(106, "");
            } else {
                removeAllViews();
                setMatchParent();
                this.T = true;
                bringToFront();
                e();
                this.e.a(117, "");
            }
        }
        this.B = true;
    }

    @Override // com.tkay.expressad.video.signal.e
    public void showVideoEndCover() {
        removeAllViews();
        setMatchParent();
        TkayVideoEndCoverView tkayVideoEndCoverView = this.s;
        if (tkayVideoEndCoverView == null) {
            b bVar = this.Q;
            this.Q = bVar;
            if (tkayVideoEndCoverView == null) {
                TkayVideoEndCoverView tkayVideoEndCoverView2 = new TkayVideoEndCoverView(this.f7279a);
                this.s = tkayVideoEndCoverView2;
                tkayVideoEndCoverView2.setCampaign(this.b);
                this.s.setNotifyListener(new i(this.e));
                this.s.preLoadData(bVar);
            }
        }
        addView(this.s);
        onConfigurationChanged(getResources().getConfiguration());
        this.T = true;
        bringToFront();
    }

    public void showOrderCampView() {
        TYOrderCampView tYOrderCampView = new TYOrderCampView(this.f7279a);
        this.R = tYOrderCampView;
        tYOrderCampView.setCampaignExes(this.U);
        if (this.e != null && (this.e instanceof k)) {
            ((k) this.e).a(this.U);
        }
        this.R.setNotifyListener(new i(this.e));
        this.R.setRewarded(this.J);
        this.R.setNotchPadding(this.K, this.L, this.M, this.N);
        this.R.setCampOrderViewBuildCallback(new com.tkay.expressad.video.dynview.f.b() { // from class: com.tkay.expressad.video.module.TkayContainerView.3
            @Override // com.tkay.expressad.video.dynview.f.b
            public final void a() {
                if (TkayContainerView.this.e != null) {
                    TkayContainerView.this.e.a(117, "");
                }
            }

            @Override // com.tkay.expressad.video.dynview.f.b
            public final void b() {
                if (TkayContainerView.this.b.f() == 2) {
                    TkayContainerView.this.showVideoEndCover();
                } else {
                    TkayContainerView tkayContainerView = TkayContainerView.this;
                    tkayContainerView.showEndcard(tkayContainerView.b.F());
                }
            }
        });
        this.R.createView(this);
    }

    @Override // com.tkay.expressad.video.signal.e
    public boolean endCardShowing() {
        return this.B;
    }

    @Override // com.tkay.expressad.video.signal.e
    public boolean miniCardShowing() {
        return this.C;
    }

    @Override // com.tkay.expressad.video.signal.e
    public boolean miniCardLoaded() {
        TkayClickMiniCardView tkayClickMiniCardView = this.p;
        return tkayClickMiniCardView != null && tkayClickMiniCardView.isLoadSuccess();
    }

    @Override // com.tkay.expressad.video.signal.h
    public void toggleCloseBtn(int i) {
        TkayPlayableView tkayPlayableView = this.n;
        if (tkayPlayableView != null) {
            tkayPlayableView.toggleCloseBtn(i);
        }
        TkayH5EndCardView tkayH5EndCardView = this.r;
        if (tkayH5EndCardView != null) {
            tkayH5EndCardView.toggleCloseBtn(i);
        }
    }

    @Override // com.tkay.expressad.video.signal.h
    public void notifyCloseBtn(int i) {
        TkayPlayableView tkayPlayableView = this.n;
        if (tkayPlayableView != null) {
            tkayPlayableView.notifyCloseBtn(i);
        }
        TkayH5EndCardView tkayH5EndCardView = this.r;
        if (tkayH5EndCardView != null) {
            tkayH5EndCardView.notifyCloseBtn(i);
        }
    }

    public void triggerCloseBtn(String str) {
        if (this.b != null) {
            this.e.a(122, "");
            this.e.a(104, "");
        }
    }

    @Override // com.tkay.expressad.video.signal.e, com.tkay.expressad.video.signal.h
    public void readyStatus(int i) {
        TkayH5EndCardView tkayH5EndCardView = this.r;
        if (tkayH5EndCardView != null) {
            tkayH5EndCardView.readyStatus(i);
        }
    }

    @Override // com.tkay.expressad.video.signal.e, com.tkay.expressad.video.signal.h
    public void handlerPlayableException(String str) {
        TkayH5EndCardView tkayH5EndCardView = this.r;
        if (tkayH5EndCardView != null) {
            tkayH5EndCardView.handlerPlayableException(str);
            if (!this.I) {
                return;
            }
        }
        e();
    }

    @Override // com.tkay.expressad.video.signal.e
    public void showMiniCard(int i, int i2, int i3, int i4, int i5) {
        TkayClickMiniCardView tkayClickMiniCardView = this.p;
        if (tkayClickMiniCardView != null) {
            tkayClickMiniCardView.setMiniCardLocation(i, i2, i3, i4);
            this.p.setRadius(i5);
            this.p.setCloseVisible(8);
            this.p.setClickable(false);
            removeAllViews();
            setMatchParent();
            this.T = true;
            bringToFront();
            m();
            if (this.G) {
                return;
            }
            this.G = true;
            this.e.a(109, "");
            this.e.a(117, "");
        }
    }

    @Override // com.tkay.expressad.video.signal.e
    public void resizeMiniCard(int i, int i2, int i3) {
        TkayClickMiniCardView tkayClickMiniCardView = this.p;
        if (tkayClickMiniCardView != null) {
            tkayClickMiniCardView.resizeMiniCard(i, i2);
            this.p.setRadius(i3);
            removeAllViews();
            setMatchParent();
            this.T = true;
            bringToFront();
            m();
        }
    }

    @Override // com.tkay.expressad.video.signal.e
    public void configurationChanged(int i, int i2, int i3) {
        TkayClickMiniCardView tkayClickMiniCardView = this.p;
        if (tkayClickMiniCardView == null || tkayClickMiniCardView.getVisibility() != 0) {
            return;
        }
        this.p.resizeMiniCard(i, i2);
    }

    @Override // com.tkay.expressad.video.signal.h
    public void webviewshow() {
        TkayH5EndCardView[] tkayH5EndCardViewArr = {this.n, this.p, this.r, this.v};
        for (int i = 0; i < 4; i++) {
            TkayH5EndCardView tkayH5EndCardView = tkayH5EndCardViewArr[i];
            if (tkayH5EndCardView != null && tkayH5EndCardView.getVisibility() == 0 && tkayH5EndCardView.getParent() != null && !isLast()) {
                tkayH5EndCardView.webviewshow();
            }
        }
    }

    @Override // com.tkay.expressad.video.signal.h
    public void install(c cVar) {
        this.e.a(105, cVar);
    }

    @Override // com.tkay.expressad.video.signal.h
    public void orientation(Configuration configuration) {
        TkayH5EndCardView[] tkayH5EndCardViewArr = {this.n, this.p, this.r, this.v};
        for (int i = 0; i < 4; i++) {
            TkayH5EndCardView tkayH5EndCardView = tkayH5EndCardViewArr[i];
            if (tkayH5EndCardView != null && tkayH5EndCardView.getVisibility() == 0) {
                tkayH5EndCardView.orientation(getResources().getConfiguration());
            }
        }
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView
    public void setNotifyListener(com.tkay.expressad.video.module.a.a aVar) {
        super.setNotifyListener(aVar);
        TkayBaseView[] tkayBaseViewArr = {this.n, this.o, this.p, this.q, this.r, this.t, this.u, this.s};
        for (int i = 0; i < 8; i++) {
            TkayBaseView tkayBaseView = tkayBaseViewArr[i];
            if (tkayBaseView != null) {
                if (tkayBaseView instanceof TkayClickMiniCardView) {
                    tkayBaseView.setNotifyListener(new g(this.p, aVar));
                } else {
                    tkayBaseView.setNotifyListener(new i(aVar));
                }
            }
        }
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView
    public void defaultShow() {
        super.defaultShow();
    }

    @Override // android.view.ViewGroup
    public void addView(View view) {
        if (view != null) {
            a(view);
            super.addView(view);
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewManager
    public void addView(View view, ViewGroup.LayoutParams layoutParams) {
        if (view != null) {
            a(view);
            super.addView(view, layoutParams);
        }
    }

    public boolean canBackPress() {
        if (this.q != null) {
            return false;
        }
        TkayH5EndCardView tkayH5EndCardView = this.r;
        if (tkayH5EndCardView != null) {
            return tkayH5EndCardView.canBackPress();
        }
        TkayLandingPageView tkayLandingPageView = this.u;
        if (tkayLandingPageView != null) {
            return tkayLandingPageView.canBackPress();
        }
        TkayPlayableView tkayPlayableView = this.n;
        if (tkayPlayableView != null) {
            return tkayPlayableView.canBackPress();
        }
        return false;
    }

    public boolean endcardIsPlayable() {
        TkayH5EndCardView tkayH5EndCardView = this.r;
        return tkayH5EndCardView != null && tkayH5EndCardView.isPlayable();
    }

    public void setShowingTransparent(boolean z) {
        this.D = z;
    }

    public boolean getShowingTransparent() {
        return this.D;
    }

    public String getUnitID() {
        return this.w;
    }

    public void setUnitID(String str) {
        this.w = str;
    }

    public void setVideoInteractiveType(int i) {
        if (this.b != null && this.b.j()) {
            int iA = com.tkay.expressad.video.dynview.i.c.a(this.b);
            if (iA == 100) {
                this.x = i;
                return;
            } else {
                this.x = iA;
                return;
            }
        }
        this.x = i;
    }

    public void setEndscreenType(int i) {
        this.y = i;
    }

    public int getVideoInteractiveType() {
        return this.x;
    }

    public void setCloseDelayTime(int i) {
        this.z = i;
    }

    public void setPlayCloseBtnTm(int i) {
        this.A = i;
    }

    private static void a(View view) {
        if (view != null) {
            try {
                ViewGroup viewGroup = (ViewGroup) view.getParent();
                if (viewGroup != null) {
                    viewGroup.removeView(view);
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
    }

    private void b() {
        setWrapContent();
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams instanceof RelativeLayout.LayoutParams) {
            ((RelativeLayout.LayoutParams) layoutParams).addRule(12, -1);
        }
    }

    private void e() {
        if (this.b != null) {
            boolean zJ = this.b.j();
            boolean zF = t.f(this.b.I());
            if (zJ && !zF) {
                i();
                return;
            }
        }
        if (this.y == 2 && !this.I) {
            h();
        } else {
            i();
        }
    }

    private void f() {
        if (this.t == null) {
            a(this.Q, (Integer) 3);
        }
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        layoutParams.addRule(13, -1);
        addView(this.t, layoutParams);
        this.t.notifyShowListener();
    }

    private void g() {
        if (this.u == null) {
            a(this.Q, (Integer) 4);
        }
        this.u.setUnitId(this.w);
        this.u.preLoadData(this.Q);
        addView(this.u);
    }

    private void h() {
        if (this.r == null) {
            a(this.Q, (Integer) 2);
        }
        TkayH5EndCardView tkayH5EndCardView = this.r;
        if (tkayH5EndCardView != null && tkayH5EndCardView.isLoadSuccess()) {
            this.I = true;
            addView(this.r);
            webviewshow();
            onConfigurationChanged(getResources().getConfiguration());
            this.r.excuteTask();
            this.r.setNotchValue(this.P, this.K, this.L, this.M, this.N);
        } else {
            i();
            TkayH5EndCardView tkayH5EndCardView2 = this.r;
            if (tkayH5EndCardView2 != null) {
                tkayH5EndCardView2.reportRenderResult("timeout", 3);
                this.r.setError(true);
            }
        }
        TkayH5EndCardView tkayH5EndCardView3 = this.r;
        if (tkayH5EndCardView3 != null) {
            tkayH5EndCardView3.setUnitId(this.w);
        }
    }

    private void i() {
        this.y = 1;
        if (this.q == null) {
            a(this.Q, (Integer) 2);
        }
        addView(this.q);
        onConfigurationChanged(getResources().getConfiguration());
        this.q.notifyShowListener();
        this.T = true;
        bringToFront();
    }

    private void j() {
        TkayVideoEndCoverView tkayVideoEndCoverView = this.s;
        if (tkayVideoEndCoverView == null) {
            b bVar = this.Q;
            this.Q = bVar;
            if (tkayVideoEndCoverView == null) {
                TkayVideoEndCoverView tkayVideoEndCoverView2 = new TkayVideoEndCoverView(this.f7279a);
                this.s = tkayVideoEndCoverView2;
                tkayVideoEndCoverView2.setCampaign(this.b);
                this.s.setNotifyListener(new i(this.e));
                this.s.preLoadData(bVar);
            }
        }
        addView(this.s);
        onConfigurationChanged(getResources().getConfiguration());
        this.T = true;
        bringToFront();
    }

    private void k() {
        if (this.n == null) {
            preLoadData(this.Q);
        }
        addView(this.n);
        TkayPlayableView tkayPlayableView = this.n;
        if (tkayPlayableView != null) {
            tkayPlayableView.setUnitId(this.w);
            if (this.b != null && this.b.H() && this.b.J() == 2) {
                this.n.setCloseVisible(0);
            }
            this.n.setNotchValue(this.P, this.K, this.L, this.M, this.N);
        }
    }

    private void l() {
        if (this.o == null) {
            b(-1);
        }
        if (this.o != null) {
            if (this.b == null || !this.b.j()) {
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
                layoutParams.addRule(12, -1);
                addView(this.o, 0, layoutParams);
            }
        }
    }

    private void m() {
        if (this.p == null) {
            b(-2);
        }
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        layoutParams.addRule(13, -1);
        if (this.D && this.F) {
            this.F = false;
            layoutParams.width = 1;
            layoutParams.height = 1;
        }
        addView(this.p, layoutParams);
    }

    private void n() {
        if (this.v == null) {
            o();
        }
        TkayAlertWebview tkayAlertWebview = this.v;
        if (tkayAlertWebview != null && tkayAlertWebview.getParent() != null) {
            removeView(this.v);
        }
        addView(this.v);
    }

    private void a(b bVar) {
        if (this.n == null) {
            this.n = new TkayPlayableView(this.f7279a);
        }
        this.n.setCloseDelayShowTime(this.z);
        this.n.setPlayCloseBtnTm(this.A);
        this.n.setCampaign(this.b);
        this.n.setNotifyListener(new AnonymousClass4(this.e));
        this.n.preLoadData(bVar);
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayContainerView$4, reason: invalid class name */
    final class AnonymousClass4 extends i {
        AnonymousClass4(com.tkay.expressad.video.module.a.a aVar) {
            super(aVar);
        }

        @Override // com.tkay.expressad.video.module.a.a.i, com.tkay.expressad.video.module.a.a.f, com.tkay.expressad.video.module.a.a
        public final void a(int i, Object obj) {
            super.a(i, obj);
            if (i == 100) {
                TkayContainerView.this.webviewshow();
                TkayContainerView tkayContainerView = TkayContainerView.this;
                tkayContainerView.onConfigurationChanged(tkayContainerView.getResources().getConfiguration());
            }
        }
    }

    private void o() {
        if (this.v == null) {
            TkayAlertWebview tkayAlertWebview = new TkayAlertWebview(this.f7279a);
            this.v = tkayAlertWebview;
            tkayAlertWebview.setUnitId(this.w);
            this.v.setCampaign(this.b);
        }
        this.v.preLoadData(this.Q);
    }

    private void b(b bVar) {
        this.Q = bVar;
        if (this.s == null) {
            TkayVideoEndCoverView tkayVideoEndCoverView = new TkayVideoEndCoverView(this.f7279a);
            this.s = tkayVideoEndCoverView;
            tkayVideoEndCoverView.setCampaign(this.b);
            this.s.setNotifyListener(new i(this.e));
            this.s.preLoadData(bVar);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(b bVar, Integer num) {
        this.Q = bVar;
        if (this.b != null) {
            if (num == null) {
                num = Integer.valueOf(this.b.F());
            }
            if (!isLast()) {
                p();
            }
            int iIntValue = num.intValue();
            if (iIntValue != 1) {
                if (iIntValue == 3) {
                    if (this.t == null) {
                        this.t = new TkayVastEndCardView(this.f7279a);
                    }
                    this.t.setCampaign(this.b);
                    this.t.setNotifyListener(new l(this.e));
                    this.t.preLoadData(bVar);
                    return;
                }
                if (iIntValue == 4) {
                    if (this.u == null) {
                        this.u = new TkayLandingPageView(this.f7279a);
                    }
                    this.u.setCampaign(this.b);
                    this.u.setNotifyListener(new i(this.e));
                    return;
                }
                if (iIntValue != 5) {
                    if (this.y == 2) {
                        boolean zJ = this.b.j();
                        boolean zF = t.f(this.b.I());
                        if ((this.b == null || !zJ || zF) && this.b.f() != 2) {
                            if (this.r == null) {
                                this.r = new TkayH5EndCardView(this.f7279a);
                            }
                            if (this.b.k() == 5 && this.e != null && (this.e instanceof k)) {
                                ((k) this.e).a(this.b);
                            }
                            this.r.setCampaign(this.b);
                            this.r.setCloseDelayShowTime(this.z);
                            this.r.setNotifyListener(new i(this.e));
                            this.r.setUnitId(this.w);
                            this.r.setNotchValue(this.P, this.K, this.L, this.M, this.N);
                            this.r.preLoadData(bVar);
                            if (this.D) {
                                return;
                            }
                            StringBuilder sb = new StringBuilder("showTransparent = ");
                            sb.append(this.D);
                            sb.append(" addview");
                            addView(this.r);
                            return;
                        }
                        return;
                    }
                    int iC = (this.b == null || this.b.M() == null) ? 0 : this.b.M().c();
                    TkayNativeEndCardView tkayNativeEndCardView = this.q;
                    if (tkayNativeEndCardView == null && tkayNativeEndCardView == null) {
                        if (this.b.j()) {
                            q();
                        } else {
                            TkayNativeEndCardView tkayNativeEndCardView2 = new TkayNativeEndCardView(this.f7279a, null, false, -1, this.b.f() == 2, iC, this.b.as());
                            this.q = tkayNativeEndCardView2;
                            tkayNativeEndCardView2.setCampaign(this.b);
                        }
                    }
                    this.q.setLayout();
                    this.q.setCampaign(this.b);
                    this.q.setUnitId(this.w);
                    this.q.setCloseBtnDelay(this.z);
                    this.q.setNotifyListener(new i(this.e));
                    this.q.preLoadData(bVar);
                    this.q.setNotchPadding(this.K, this.L, this.M, this.N);
                }
            }
        }
    }

    public boolean isLast() {
        ViewGroup viewGroup = (ViewGroup) getParent();
        return viewGroup != null && viewGroup.indexOfChild(this) == 0;
    }

    private void p() {
        this.C = false;
        this.T = false;
        ViewGroup viewGroup = (ViewGroup) getParent();
        if (viewGroup != null) {
            int i = 0;
            for (int i2 = 0; i2 < viewGroup.getChildCount(); i2++) {
                View childAt = viewGroup.getChildAt(i);
                if (childAt instanceof TkayContainerView) {
                    i++;
                } else {
                    viewGroup.bringChildToFront(childAt);
                }
            }
        }
    }

    private void b(int i) {
        if (i != -3) {
            if (i == -2) {
                if (this.b == null || this.b.F() != 2) {
                    return;
                }
                if (this.p == null) {
                    this.p = new TkayClickMiniCardView(this.f7279a);
                }
                this.p.setCampaign(this.b);
                TkayClickMiniCardView tkayClickMiniCardView = this.p;
                tkayClickMiniCardView.setNotifyListener(new g(tkayClickMiniCardView, this.e));
                this.p.preLoadData(this.Q);
                setMatchParent();
                m();
                p();
                return;
            }
            if (this.o == null) {
                this.o = new TkayClickCTAView(this.f7279a);
            }
            this.o.setCampaign(this.b);
            this.o.setUnitId(this.w);
            this.o.setNotifyListener(new i(this.e));
            this.o.preLoadData(this.Q);
        }
    }

    private void a(com.tkay.expressad.video.module.a.a aVar, TkayBaseView... tkayBaseViewArr) {
        for (int i = 0; i < 8; i++) {
            TkayBaseView tkayBaseView = tkayBaseViewArr[i];
            if (tkayBaseView != null) {
                if (tkayBaseView instanceof TkayClickMiniCardView) {
                    tkayBaseView.setNotifyListener(new g(this.p, aVar));
                } else {
                    tkayBaseView.setNotifyListener(new i(aVar));
                }
            }
        }
    }

    private void a(Configuration configuration, TkayBaseView... tkayBaseViewArr) {
        for (int i = 0; i < 8; i++) {
            TkayBaseView tkayBaseView = tkayBaseViewArr[i];
            if (tkayBaseView != null && (tkayBaseView instanceof TkayClickMiniCardView)) {
                tkayBaseView.onSelfConfigurationChanged(configuration);
            } else if (tkayBaseView != null && tkayBaseView.getVisibility() == 0 && tkayBaseView.getParent() != null && !isLast()) {
                tkayBaseView.onSelfConfigurationChanged(configuration);
            }
        }
    }

    private void a(TkayH5EndCardView... tkayH5EndCardViewArr) {
        for (int i = 0; i < 4; i++) {
            TkayH5EndCardView tkayH5EndCardView = tkayH5EndCardViewArr[i];
            if (tkayH5EndCardView != null && tkayH5EndCardView.getVisibility() == 0 && tkayH5EndCardView.getParent() != null && !isLast()) {
                tkayH5EndCardView.webviewshow();
            }
        }
    }

    private void b(TkayH5EndCardView... tkayH5EndCardViewArr) {
        for (int i = 0; i < 4; i++) {
            TkayH5EndCardView tkayH5EndCardView = tkayH5EndCardViewArr[i];
            if (tkayH5EndCardView != null && tkayH5EndCardView.getVisibility() == 0) {
                tkayH5EndCardView.orientation(getResources().getConfiguration());
            }
        }
    }

    public c getReSetCampaign() {
        if (!this.b.j() || !TextUtils.isEmpty(this.b.I())) {
            return null;
        }
        int size = this.U.size();
        int i = 0;
        int i2 = 0;
        while (true) {
            if (i2 < size) {
                if (this.U.get(i2) != null && this.U.get(i2).aZ() == this.b.aZ()) {
                    i = i2 - 1;
                    break;
                }
                i2++;
            } else {
                break;
            }
        }
        if (i < 0 || i >= size || this.U.get(i) == null) {
            return null;
        }
        return this.U.get(i);
    }

    private void q() {
        if (this.b == null) {
            return;
        }
        String strI = this.b.I();
        int i = 404;
        if (!TextUtils.isEmpty(strI)) {
            try {
                i = Integer.parseInt(x.a(strI, "ecid"));
            } catch (Throwable th) {
                th.getMessage();
            }
        }
        this.q = new TkayNativeEndCardView(this.f7279a, null, true, i, this.b.f() == 2, this.l, this.b.as());
        if (this.b.k() == 5) {
            if (this.e != null && (this.e instanceof k)) {
                ((k) this.e).a(this.b);
            }
            this.q.setCampaign(this.b);
            return;
        }
        this.q.setCampaign(this.b);
    }

    public void setTkayClickMiniCardViewTransparent() {
        TkayClickMiniCardView tkayClickMiniCardView = this.p;
        if (tkayClickMiniCardView != null) {
            tkayClickMiniCardView.setTkayClickMiniCardViewTransparent();
            this.p.setTkayClickMiniCardViewClickable(false);
        }
    }

    public void onPlayableBackPress() {
        TkayPlayableView tkayPlayableView = this.n;
        if (tkayPlayableView != null) {
            tkayPlayableView.onBackPress();
        }
    }

    public void onMiniEndcardBackPress() {
        if (this.C) {
            this.e.a(107, "");
        }
    }

    public void onEndcardBackPress() {
        if (this.q != null || this.t != null) {
            this.e.a(104, "");
            return;
        }
        if (this.u != null) {
            this.e.a(103, "");
            return;
        }
        TkayH5EndCardView tkayH5EndCardView = this.r;
        if (tkayH5EndCardView != null) {
            tkayH5EndCardView.onBackPress();
        }
    }

    public void release() {
        TkayH5EndCardView tkayH5EndCardView = this.r;
        if (tkayH5EndCardView != null) {
            tkayH5EndCardView.release();
            this.r = null;
        }
        TkayPlayableView tkayPlayableView = this.n;
        if (tkayPlayableView != null) {
            tkayPlayableView.release();
        }
        TkayLandingPageView tkayLandingPageView = this.u;
        if (tkayLandingPageView != null) {
            tkayLandingPageView.release();
        }
        TkayNativeEndCardView tkayNativeEndCardView = this.q;
        if (tkayNativeEndCardView != null) {
            tkayNativeEndCardView.clearMoreOfferBitmap();
            this.q.release();
        }
        if (this.e != null) {
            this.e = null;
        }
    }

    public TkayH5EndCardView getH5EndCardView() {
        TkayH5EndCardView tkayH5EndCardView = this.r;
        return tkayH5EndCardView == null ? this.n : tkayH5EndCardView;
    }

    @Override // com.tkay.expressad.video.signal.e
    public void hideAlertWebview() {
        if (isLast()) {
            return;
        }
        if (this.S && !this.T) {
            p();
            this.S = false;
        }
        TkayAlertWebview tkayAlertWebview = this.v;
        if (tkayAlertWebview == null || tkayAlertWebview.getParent() == null) {
            return;
        }
        removeView(this.v);
        TkayClickCTAView tkayClickCTAView = this.o;
        if (tkayClickCTAView == null || tkayClickCTAView.getParent() == null) {
            return;
        }
        setWrapContent();
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams instanceof RelativeLayout.LayoutParams) {
            ((RelativeLayout.LayoutParams) layoutParams).addRule(12, -1);
        }
    }

    @Override // com.tkay.expressad.video.signal.e
    public void ivRewardAdsWithoutVideo(String str) {
        this.e.a(103, str);
    }

    public void setNotchPadding(int i, int i2, int i3, int i4, int i5) {
        new StringBuilder("NOTCH ContainerView ").append(String.format("%1s-%2s-%3s-%4s-%5s", Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4), Integer.valueOf(i5), Integer.valueOf(i)));
        this.O = i;
        this.K = i2;
        this.L = i3;
        this.M = i4;
        this.N = i5;
        this.P = com.tkay.expressad.foundation.h.h.a(i, i2, i3, i4, i5);
        TkayNativeEndCardView tkayNativeEndCardView = this.q;
        if (tkayNativeEndCardView != null) {
            tkayNativeEndCardView.setNotchPadding(i2, i3, i4, i5);
        }
        TkayH5EndCardView tkayH5EndCardView = this.r;
        if (tkayH5EndCardView != null && tkayH5EndCardView.s != null) {
            this.r.setNotchValue(this.P, i2, i3, i4, i5);
            j.a();
            j.a((WebView) this.r.s, "oncutoutfetched", Base64.encodeToString(this.P.getBytes(), 0));
        }
        TkayPlayableView tkayPlayableView = this.n;
        if (tkayPlayableView != null && tkayPlayableView.s != null) {
            this.n.setNotchValue(this.P, i2, i3, i4, i5);
            j.a();
            j.a((WebView) this.n.s, "oncutoutfetched", Base64.encodeToString(this.P.getBytes(), 0));
        }
        TYOrderCampView tYOrderCampView = this.R;
        if (tYOrderCampView != null) {
            tYOrderCampView.setNotchPadding(i2, i3, i4, i5);
        }
    }

    public void setOnResume() {
        TkayNativeEndCardView tkayNativeEndCardView = this.q;
        if (tkayNativeEndCardView != null) {
            tkayNativeEndCardView.setOnResume();
        }
    }

    public void setOnPause() {
        TkayNativeEndCardView tkayNativeEndCardView = this.q;
        if (tkayNativeEndCardView != null) {
            tkayNativeEndCardView.setOnPause();
        }
    }

    public void setRewardStatus(boolean z) {
        this.J = z;
    }
}
