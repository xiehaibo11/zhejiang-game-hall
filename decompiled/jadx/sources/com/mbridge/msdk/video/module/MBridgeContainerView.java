package com.mbridge.msdk.video.module;

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
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.same.report.c;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.m;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.video.dynview.moffer.a;
import com.mbridge.msdk.video.dynview.widget.MBridgeOrderCampView;
import com.mbridge.msdk.video.js.e;
import com.mbridge.msdk.video.js.factory.b;
import com.mbridge.msdk.video.js.g;
import com.mbridge.msdk.video.module.a.a.f;
import com.mbridge.msdk.video.module.a.a.h;
import com.mbridge.msdk.video.module.a.a.j;
import com.mbridge.msdk.video.module.a.a.k;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class MBridgeContainerView extends MBridgeBaseView implements e, g {
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
    private MBridgeOrderCampView R;
    private boolean S;
    private boolean T;
    private List<CampaignEx> U;
    private MBridgePlayableView n;
    private MBridgeClickCTAView o;
    private MBridgeClickMiniCardView p;
    private MBridgeNativeEndCardView q;
    private MBridgeH5EndCardView r;
    private MBridgeVideoEndCoverView s;
    private MBridgeVastEndCardView t;
    private MBridgeLandingPageView u;
    private MBridgeAlertWebview v;
    private String w;
    private int x;
    private int y;
    private int z;

    public void setJSFactory(b bVar) {
        this.Q = bVar;
    }

    public void addOrderViewData(List<CampaignEx> list) {
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

    public MBridgeContainerView(Context context) {
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

    public MBridgeContainerView(Context context, AttributeSet attributeSet) {
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

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    public void init(Context context) {
        setVisibility(0);
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView, android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        MBridgeBaseView[] mBridgeBaseViewArr = {this.n, this.o, this.p, this.q, this.r, this.t, this.u, this.s};
        for (int i = 0; i < 8; i++) {
            MBridgeBaseView mBridgeBaseView = mBridgeBaseViewArr[i];
            if (mBridgeBaseView != null && (mBridgeBaseView instanceof MBridgeClickMiniCardView)) {
                mBridgeBaseView.onSelfConfigurationChanged(configuration);
            } else if (mBridgeBaseView != null && mBridgeBaseView.getVisibility() == 0 && mBridgeBaseView.getParent() != null && !isLast()) {
                mBridgeBaseView.onSelfConfigurationChanged(configuration);
            }
        }
    }

    public void preLoadData(final b bVar) {
        this.Q = bVar;
        if (this.b != null) {
            if (this.b.getPlayable_ads_without_video() != 2) {
                b(this.x);
                if (this.b.isDynamicView()) {
                    try {
                        a(bVar, Integer.valueOf(this.b.getVideo_end_type()));
                    } catch (Throwable th) {
                        z.d(MBridgeBaseView.TAG, th.getMessage());
                        new Handler(Looper.getMainLooper()).postAtFrontOfQueue(new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeContainerView.1
                            @Override // java.lang.Runnable
                            public final void run() {
                                MBridgeContainerView mBridgeContainerView = MBridgeContainerView.this;
                                mBridgeContainerView.a(bVar, Integer.valueOf(mBridgeContainerView.b.getVideo_end_type()));
                            }
                        });
                    }
                    if (!ae.j(this.b.getendcard_url())) {
                        try {
                            String strA = ak.a(this.b.getendcard_url(), "mof");
                            if (!TextUtils.isEmpty(strA) && Integer.parseInt(strA) == 1) {
                                a.a().a(this.b, 2);
                            }
                        } catch (Exception e) {
                            z.d(MBridgeBaseView.TAG, e.getMessage());
                        }
                    }
                } else {
                    new Handler(Looper.getMainLooper()).postDelayed(new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeContainerView.2
                        @Override // java.lang.Runnable
                        public final void run() {
                            MBridgeContainerView mBridgeContainerView = MBridgeContainerView.this;
                            mBridgeContainerView.a(bVar, Integer.valueOf(mBridgeContainerView.b.getVideo_end_type()));
                        }
                    }, getVideoSkipTime());
                }
            } else {
                if (this.n == null) {
                    this.n = new MBridgePlayableView(this.f4304a);
                }
                this.n.setCloseDelayShowTime(this.z);
                this.n.setPlayCloseBtnTm(this.A);
                this.n.setCampaign(this.b);
                this.n.setNotifyListener(new h(this.e) { // from class: com.mbridge.msdk.video.module.MBridgeContainerView.4
                    @Override // com.mbridge.msdk.video.module.a.a.h, com.mbridge.msdk.video.module.a.a.e, com.mbridge.msdk.video.module.a.a
                    public final void a(int i, Object obj) {
                        super.a(i, obj);
                        if (i == 100) {
                            MBridgeContainerView.this.webviewshow();
                            MBridgeContainerView mBridgeContainerView = MBridgeContainerView.this;
                            mBridgeContainerView.onConfigurationChanged(mBridgeContainerView.getResources().getConfiguration());
                            p pVar = new p();
                            pVar.k(MBridgeContainerView.this.b.getRequestId());
                            pVar.l(MBridgeContainerView.this.b.getRequestIdNotice());
                            pVar.n(MBridgeContainerView.this.b.getId());
                            pVar.a(MBridgeContainerView.this.b.isMraid() ? p.f3396a : p.b);
                            c.a(pVar, MBridgeContainerView.this.f4304a, MBridgeContainerView.this.w);
                        }
                    }
                });
                this.n.preLoadData(bVar);
            }
            g();
        }
    }

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
        MBridgePlayableView mBridgePlayableView = this.n;
        if (mBridgePlayableView != null) {
            mBridgePlayableView.setUnitId(this.w);
            if (this.b != null && this.b.isMraid() && this.b.getPlayable_ads_without_video() == 2) {
                this.n.setCloseVisible(0);
            }
            this.n.setNotchValue(this.P, this.K, this.L, this.M, this.N);
        }
        this.T = true;
        bringToFront();
    }

    @Override // com.mbridge.msdk.video.js.e
    public boolean showAlertWebView() {
        MBridgeAlertWebview mBridgeAlertWebview = this.v;
        if (mBridgeAlertWebview == null || !mBridgeAlertWebview.isLoadSuccess()) {
            return false;
        }
        setMatchParent();
        ViewGroup viewGroup = (ViewGroup) getParent();
        if (!(viewGroup.indexOfChild(this) == viewGroup.getChildCount() - 1) && !this.T) {
            removeAllViews();
            bringToFront();
            this.S = true;
        }
        MBridgeClickMiniCardView mBridgeClickMiniCardView = this.p;
        if (mBridgeClickMiniCardView != null && mBridgeClickMiniCardView.getParent() != null) {
            return false;
        }
        if (this.v == null) {
            g();
        }
        MBridgeAlertWebview mBridgeAlertWebview2 = this.v;
        if (mBridgeAlertWebview2 != null && mBridgeAlertWebview2.getParent() != null) {
            removeView(this.v);
        }
        addView(this.v);
        setBackgroundColor(0);
        this.v.webviewshow();
        return true;
    }

    @Override // com.mbridge.msdk.video.js.e
    public void showVideoClickView(int i) {
        if (this.b != null) {
            if (i == -1) {
                if (isLast() || endCardShowing()) {
                    return;
                }
                h();
                return;
            }
            if (i == 1) {
                if (this.B) {
                    return;
                }
                MBridgeH5EndCardView mBridgeH5EndCardView = this.r;
                if (mBridgeH5EndCardView != null && mBridgeH5EndCardView.getParent() != null) {
                    removeView(this.r);
                }
                MBridgeClickMiniCardView mBridgeClickMiniCardView = this.p;
                if (mBridgeClickMiniCardView != null && mBridgeClickMiniCardView.getParent() != null) {
                    removeView(this.p);
                }
                MBridgeClickCTAView mBridgeClickCTAView = this.o;
                if (mBridgeClickCTAView == null || mBridgeClickCTAView.getParent() == null) {
                    try {
                        if (this.b != null && this.b.getPlayable_ads_without_video() == 1) {
                            this.T = true;
                            if (this.o == null) {
                                b(-1);
                            }
                            if (this.o != null && (this.b == null || !this.b.isDynamicView())) {
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
            MBridgeClickCTAView mBridgeClickCTAView2 = this.o;
            if (mBridgeClickCTAView2 != null && mBridgeClickCTAView2.getParent() != null) {
                removeView(this.o);
            }
            MBridgeAlertWebview mBridgeAlertWebview = this.v;
            if (mBridgeAlertWebview == null || mBridgeAlertWebview.getParent() == null) {
                MBridgeClickMiniCardView mBridgeClickMiniCardView2 = this.p;
                if (mBridgeClickMiniCardView2 == null || mBridgeClickMiniCardView2.getParent() == null) {
                    try {
                        if (this.b != null && this.b.getPlayable_ads_without_video() == 1) {
                            setMatchParent();
                            f();
                        }
                    } catch (Exception e2) {
                        e2.printStackTrace();
                    }
                }
                if (miniCardLoaded()) {
                    MBridgeH5EndCardView mBridgeH5EndCardView2 = this.r;
                    if (mBridgeH5EndCardView2 != null && mBridgeH5EndCardView2.getParent() != null) {
                        removeView(this.r);
                    }
                    this.e.a(112, "");
                    if (this.b != null && !this.b.isHasReportAdTrackPause()) {
                        this.b.setHasReportAdTrackPause(true);
                        com.mbridge.msdk.video.module.b.b.f(this.f4304a, this.b);
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
                h();
            }
        }
    }

    @Override // com.mbridge.msdk.video.js.e
    public void showEndcard(int i) {
        if (this.b != null) {
            if (i == 1) {
                this.e.a(104, "");
            } else if (i == 100) {
                if (this.b.getPlayable_ads_without_video() == 2) {
                    this.E = true;
                }
                a(this.n);
                setMatchParent();
                e();
                z.a(MBridgeBaseView.TAG, "showEndcard addNativeEndcard");
            } else if (i == 3) {
                removeAllViews();
                setMatchParent();
                if (this.t == null) {
                    a(this.Q, 3);
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
                    a(this.Q, 4);
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
                a();
                this.e.a(117, "");
            }
        }
        this.B = true;
    }

    @Override // com.mbridge.msdk.video.js.e
    public void showVideoEndCover() {
        removeAllViews();
        setMatchParent();
        MBridgeVideoEndCoverView mBridgeVideoEndCoverView = this.s;
        if (mBridgeVideoEndCoverView == null) {
            b bVar = this.Q;
            this.Q = bVar;
            if (mBridgeVideoEndCoverView == null) {
                MBridgeVideoEndCoverView mBridgeVideoEndCoverView2 = new MBridgeVideoEndCoverView(this.f4304a);
                this.s = mBridgeVideoEndCoverView2;
                mBridgeVideoEndCoverView2.setCampaign(this.b);
                this.s.setNotifyListener(new h(this.e));
                this.s.preLoadData(bVar);
            }
        }
        addView(this.s);
        onConfigurationChanged(getResources().getConfiguration());
        this.T = true;
        bringToFront();
    }

    public void showOrderCampView() {
        MBridgeOrderCampView mBridgeOrderCampView = new MBridgeOrderCampView(this.f4304a);
        this.R = mBridgeOrderCampView;
        mBridgeOrderCampView.setCampaignExes(this.U);
        if (this.e != null && (this.e instanceof j)) {
            ((j) this.e).a(this.U);
        }
        this.R.setNotifyListener(new h(this.e));
        this.R.setRewarded(this.J);
        this.R.setNotchPadding(this.K, this.L, this.M, this.N);
        this.R.setCampOrderViewBuildCallback(new com.mbridge.msdk.video.dynview.e.b() { // from class: com.mbridge.msdk.video.module.MBridgeContainerView.3
            @Override // com.mbridge.msdk.video.dynview.e.b
            public final void a() {
                if (MBridgeContainerView.this.e != null) {
                    MBridgeContainerView.this.e.a(117, "");
                }
            }

            @Override // com.mbridge.msdk.video.dynview.e.b
            public final void b() {
                if (MBridgeContainerView.this.b.getAdSpaceT() == 2) {
                    MBridgeContainerView.this.showVideoEndCover();
                } else {
                    MBridgeContainerView mBridgeContainerView = MBridgeContainerView.this;
                    mBridgeContainerView.showEndcard(mBridgeContainerView.b.getVideo_end_type());
                }
            }
        });
        this.R.createView(this);
    }

    @Override // com.mbridge.msdk.video.js.e
    public boolean endCardShowing() {
        return this.B;
    }

    @Override // com.mbridge.msdk.video.js.e
    public boolean miniCardShowing() {
        return this.C;
    }

    public boolean miniCardLoaded() {
        MBridgeClickMiniCardView mBridgeClickMiniCardView = this.p;
        return mBridgeClickMiniCardView != null && mBridgeClickMiniCardView.isLoadSuccess();
    }

    @Override // com.mbridge.msdk.video.js.g
    public void toggleCloseBtn(int i) {
        MBridgePlayableView mBridgePlayableView = this.n;
        if (mBridgePlayableView != null) {
            mBridgePlayableView.toggleCloseBtn(i);
        }
        MBridgeH5EndCardView mBridgeH5EndCardView = this.r;
        if (mBridgeH5EndCardView != null) {
            mBridgeH5EndCardView.toggleCloseBtn(i);
        }
    }

    @Override // com.mbridge.msdk.video.js.g
    public void notifyCloseBtn(int i) {
        MBridgePlayableView mBridgePlayableView = this.n;
        if (mBridgePlayableView != null) {
            mBridgePlayableView.notifyCloseBtn(i);
        }
        MBridgeH5EndCardView mBridgeH5EndCardView = this.r;
        if (mBridgeH5EndCardView != null) {
            mBridgeH5EndCardView.notifyCloseBtn(i);
        }
    }

    public void triggerCloseBtn(String str) {
        if (this.b != null) {
            this.e.a(122, "");
            this.e.a(104, "");
        }
    }

    @Override // com.mbridge.msdk.video.js.e
    public void readyStatus(int i) {
        MBridgeH5EndCardView mBridgeH5EndCardView = this.r;
        if (mBridgeH5EndCardView != null) {
            mBridgeH5EndCardView.readyStatus(i);
        }
    }

    public void handlerPlayableException(String str) {
        MBridgeH5EndCardView mBridgeH5EndCardView = this.r;
        if (mBridgeH5EndCardView != null) {
            mBridgeH5EndCardView.handlerPlayableException(str);
            if (!this.I) {
                return;
            }
        }
        a();
    }

    @Override // com.mbridge.msdk.video.js.e
    public void showMiniCard(int i, int i2, int i3, int i4, int i5) {
        MBridgeClickMiniCardView mBridgeClickMiniCardView = this.p;
        if (mBridgeClickMiniCardView != null) {
            mBridgeClickMiniCardView.setMiniCardLocation(i, i2, i3, i4);
            this.p.setRadius(i5);
            this.p.setCloseVisible(8);
            this.p.setClickable(false);
            removeAllViews();
            setMatchParent();
            this.T = true;
            bringToFront();
            f();
            if (this.G) {
                return;
            }
            this.G = true;
            this.e.a(109, "");
            this.e.a(117, "");
        }
    }

    @Override // com.mbridge.msdk.video.js.e
    public void resizeMiniCard(int i, int i2, int i3) {
        MBridgeClickMiniCardView mBridgeClickMiniCardView = this.p;
        if (mBridgeClickMiniCardView != null) {
            mBridgeClickMiniCardView.resizeMiniCard(i, i2);
            this.p.setRadius(i3);
            removeAllViews();
            setMatchParent();
            this.T = true;
            bringToFront();
            f();
        }
    }

    @Override // com.mbridge.msdk.video.js.e
    public void configurationChanged(int i, int i2, int i3) {
        MBridgeClickMiniCardView mBridgeClickMiniCardView = this.p;
        if (mBridgeClickMiniCardView == null || mBridgeClickMiniCardView.getVisibility() != 0) {
            return;
        }
        this.p.resizeMiniCard(i, i2);
    }

    public void webviewshow() {
        MBridgeH5EndCardView[] mBridgeH5EndCardViewArr = {this.n, this.p, this.r, this.v};
        for (int i = 0; i < 4; i++) {
            MBridgeH5EndCardView mBridgeH5EndCardView = mBridgeH5EndCardViewArr[i];
            if (mBridgeH5EndCardView != null && mBridgeH5EndCardView.getVisibility() == 0 && mBridgeH5EndCardView.getParent() != null && !isLast()) {
                mBridgeH5EndCardView.webviewshow();
            }
        }
    }

    public void install(CampaignEx campaignEx) {
        this.e.a(105, campaignEx);
    }

    public void orientation(Configuration configuration) {
        MBridgeH5EndCardView[] mBridgeH5EndCardViewArr = {this.n, this.p, this.r, this.v};
        for (int i = 0; i < 4; i++) {
            MBridgeH5EndCardView mBridgeH5EndCardView = mBridgeH5EndCardViewArr[i];
            if (mBridgeH5EndCardView != null && mBridgeH5EndCardView.getVisibility() == 0) {
                mBridgeH5EndCardView.orientation(getResources().getConfiguration());
            }
        }
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    public void setNotifyListener(com.mbridge.msdk.video.module.a.a aVar) {
        super.setNotifyListener(aVar);
        MBridgeBaseView[] mBridgeBaseViewArr = {this.n, this.o, this.p, this.q, this.r, this.t, this.u, this.s};
        for (int i = 0; i < 8; i++) {
            MBridgeBaseView mBridgeBaseView = mBridgeBaseViewArr[i];
            if (mBridgeBaseView != null) {
                if (mBridgeBaseView instanceof MBridgeClickMiniCardView) {
                    mBridgeBaseView.setNotifyListener(new f(this.p, aVar));
                } else {
                    mBridgeBaseView.setNotifyListener(new h(aVar));
                }
            }
        }
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    public void defaultShow() {
        super.defaultShow();
    }

    @Override // android.view.ViewGroup
    public void addView(View view) {
        if (view != null) {
            a(view);
            super.addView(view);
        } else {
            z.d(MBridgeBaseView.TAG, "view is null");
        }
    }

    @Override // android.view.ViewGroup, android.view.ViewManager
    public void addView(View view, ViewGroup.LayoutParams layoutParams) {
        if (view != null) {
            a(view);
            super.addView(view, layoutParams);
        } else {
            z.d(MBridgeBaseView.TAG, "view is null");
        }
    }

    public boolean canBackPress() {
        if (this.q != null) {
            return false;
        }
        MBridgeH5EndCardView mBridgeH5EndCardView = this.r;
        if (mBridgeH5EndCardView != null) {
            return mBridgeH5EndCardView.canBackPress();
        }
        MBridgeLandingPageView mBridgeLandingPageView = this.u;
        if (mBridgeLandingPageView != null) {
            return mBridgeLandingPageView.canBackPress();
        }
        MBridgePlayableView mBridgePlayableView = this.n;
        if (mBridgePlayableView != null) {
            return mBridgePlayableView.canBackPress();
        }
        return false;
    }

    public boolean endcardIsPlayable() {
        MBridgeH5EndCardView mBridgeH5EndCardView = this.r;
        return mBridgeH5EndCardView != null && mBridgeH5EndCardView.isPlayable();
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
        if (this.b != null && this.b.isDynamicView()) {
            int iA = com.mbridge.msdk.video.dynview.i.b.a(this.b);
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

    private void a(View view) {
        if (view != null) {
            try {
                ViewGroup viewGroup = (ViewGroup) view.getParent();
                if (viewGroup != null) {
                    viewGroup.removeView(view);
                }
            } catch (Throwable th) {
                z.c(MBridgeBaseView.TAG, th.getMessage(), th);
            }
        }
    }

    private void a() {
        if (this.b != null) {
            boolean zIsDynamicView = this.b.isDynamicView();
            boolean zJ = ae.j(this.b.getendcard_url());
            if (zIsDynamicView && !zJ) {
                e();
                return;
            }
        }
        if (this.y == 2 && !this.I) {
            b();
        } else {
            e();
        }
    }

    private void b() {
        if (this.r == null) {
            a(this.Q, 2);
        }
        MBridgeH5EndCardView mBridgeH5EndCardView = this.r;
        if (mBridgeH5EndCardView != null && mBridgeH5EndCardView.isLoadSuccess()) {
            this.I = true;
            addView(this.r);
            webviewshow();
            onConfigurationChanged(getResources().getConfiguration());
            this.r.excuteTask();
            this.r.setNotchValue(this.P, this.K, this.L, this.M, this.N);
            p pVar = new p();
            pVar.k(this.b.getRequestId());
            pVar.l(this.b.getRequestIdNotice());
            pVar.n(this.b.getId());
            pVar.a(this.b.isMraid() ? p.f3396a : p.b);
            c.a(pVar, this.f4304a, this.w);
        } else {
            e();
            MBridgeH5EndCardView mBridgeH5EndCardView2 = this.r;
            if (mBridgeH5EndCardView2 != null) {
                mBridgeH5EndCardView2.reportRenderResult("timeout", 3);
                this.r.setError(true);
            }
        }
        MBridgeH5EndCardView mBridgeH5EndCardView3 = this.r;
        if (mBridgeH5EndCardView3 != null) {
            mBridgeH5EndCardView3.setUnitId(this.w);
        }
    }

    private void e() {
        this.y = 1;
        if (this.q == null) {
            a(this.Q, 2);
        }
        addView(this.q);
        onConfigurationChanged(getResources().getConfiguration());
        this.q.notifyShowListener();
        this.T = true;
        bringToFront();
    }

    private void f() {
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

    private void g() {
        if (this.v == null) {
            MBridgeAlertWebview mBridgeAlertWebview = new MBridgeAlertWebview(this.f4304a);
            this.v = mBridgeAlertWebview;
            mBridgeAlertWebview.setUnitId(this.w);
            this.v.setCampaign(this.b);
        }
        this.v.preLoadData(this.Q);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(b bVar, Integer num) {
        this.Q = bVar;
        if (this.b != null) {
            if (num == null) {
                num = Integer.valueOf(this.b.getVideo_end_type());
            }
            if (!isLast()) {
                h();
            }
            int iIntValue = num.intValue();
            if (iIntValue != 1) {
                if (iIntValue == 3) {
                    if (this.t == null) {
                        this.t = new MBridgeVastEndCardView(this.f4304a);
                    }
                    this.t.setCampaign(this.b);
                    this.t.setNotifyListener(new k(this.e));
                    this.t.preLoadData(bVar);
                    return;
                }
                if (iIntValue == 4) {
                    if (this.u == null) {
                        this.u = new MBridgeLandingPageView(this.f4304a);
                    }
                    this.u.setCampaign(this.b);
                    this.u.setNotifyListener(new h(this.e));
                    return;
                }
                if (iIntValue != 5) {
                    if (this.y == 2) {
                        boolean zIsDynamicView = this.b.isDynamicView();
                        boolean zJ = ae.j(this.b.getendcard_url());
                        if ((this.b == null || !zIsDynamicView || zJ) && this.b.getAdSpaceT() != 2) {
                            if (this.r == null) {
                                this.r = new MBridgeH5EndCardView(this.f4304a);
                            }
                            if (this.b.getDynamicTempCode() == 5 && this.e != null && (this.e instanceof j)) {
                                ((j) this.e).a(this.b);
                            }
                            this.r.setCampaign(this.b);
                            this.r.setCloseDelayShowTime(this.z);
                            this.r.setNotifyListener(new h(this.e));
                            this.r.setUnitId(this.w);
                            this.r.setNotchValue(this.P, this.K, this.L, this.M, this.N);
                            this.r.preLoadData(bVar);
                            z.a(MBridgeBaseView.TAG, "preload H5Endcard");
                            if (this.D) {
                                return;
                            }
                            z.a(MBridgeBaseView.TAG, "showTransparent = " + this.D + " addview");
                            addView(this.r);
                            return;
                        }
                        return;
                    }
                    int iC = (this.b == null || this.b.getRewardTemplateMode() == null) ? 0 : this.b.getRewardTemplateMode().c();
                    if (this.q == null) {
                        if (this.b.isDynamicView()) {
                            i();
                        } else {
                            MBridgeNativeEndCardView mBridgeNativeEndCardView = new MBridgeNativeEndCardView(this.f4304a, null, false, -1, this.b.getAdSpaceT() == 2, iC, this.b.getMof_tplid());
                            this.q = mBridgeNativeEndCardView;
                            mBridgeNativeEndCardView.setCampaign(this.b);
                        }
                    }
                    this.q.setLayout();
                    if (this.b.isDynamicView()) {
                        if (a.a().a(this.b.getRequestId() + "_" + this.b.getId())) {
                            try {
                                a.a().a(this.q, this.b.getRequestId() + "_" + this.b.getId(), new h(this.e));
                            } catch (Exception e) {
                                z.d(MBridgeBaseView.TAG, e.getMessage());
                            }
                        } else {
                            try {
                                String strA = ak.a(this.b.getendcard_url(), "mof");
                                if (!TextUtils.isEmpty(strA) && Integer.parseInt(strA) == 1) {
                                    a.a().a(this.b, this.q, new h(this.e), 2);
                                }
                            } catch (Exception e2) {
                                z.d(MBridgeBaseView.TAG, e2.getMessage());
                            }
                        }
                    }
                    this.q.setUnitId(this.w);
                    this.q.setCloseBtnDelay(this.z);
                    this.q.setNotifyListener(new h(this.e));
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

    private void h() {
        this.C = false;
        this.T = false;
        ViewGroup viewGroup = (ViewGroup) getParent();
        if (viewGroup != null) {
            int i = 0;
            for (int i2 = 0; i2 < viewGroup.getChildCount(); i2++) {
                View childAt = viewGroup.getChildAt(i);
                if (childAt instanceof MBridgeContainerView) {
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
                if (this.b == null || this.b.getVideo_end_type() != 2) {
                    return;
                }
                if (this.p == null) {
                    this.p = new MBridgeClickMiniCardView(this.f4304a);
                }
                this.p.setCampaign(this.b);
                MBridgeClickMiniCardView mBridgeClickMiniCardView = this.p;
                mBridgeClickMiniCardView.setNotifyListener(new f(mBridgeClickMiniCardView, this.e));
                this.p.preLoadData(this.Q);
                setMatchParent();
                f();
                h();
                return;
            }
            if (this.o == null) {
                this.o = new MBridgeClickCTAView(this.f4304a);
            }
            this.o.setCampaign(this.b);
            this.o.setUnitId(this.w);
            this.o.setNotifyListener(new h(this.e));
            this.o.preLoadData(this.Q);
        }
    }

    public CampaignEx getReSetCampaign() {
        if (!this.b.isDynamicView() || !TextUtils.isEmpty(this.b.getendcard_url())) {
            return null;
        }
        int size = this.U.size();
        int i = 0;
        int i2 = 0;
        while (true) {
            if (i2 < size) {
                if (this.U.get(i2) != null && this.U.get(i2).getId() == this.b.getId()) {
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

    private void i() {
        if (this.b == null) {
            return;
        }
        String str = this.b.getendcard_url();
        int i = 404;
        if (!TextUtils.isEmpty(str)) {
            try {
                i = Integer.parseInt(ak.a(str, "ecid"));
            } catch (Throwable th) {
                z.d(MBridgeBaseView.TAG, th.getMessage());
            }
        }
        this.q = new MBridgeNativeEndCardView(this.f4304a, null, true, i, this.b.getAdSpaceT() == 2, this.l, this.b.getMof_tplid());
        if (this.b.getDynamicTempCode() == 5) {
            if (this.e != null && (this.e instanceof j)) {
                ((j) this.e).a(this.b);
            }
            this.q.setCampaign(this.b);
            return;
        }
        this.q.setCampaign(this.b);
    }

    public void setMBridgeClickMiniCardViewTransparent() {
        MBridgeClickMiniCardView mBridgeClickMiniCardView = this.p;
        if (mBridgeClickMiniCardView != null) {
            mBridgeClickMiniCardView.setMBridgeClickMiniCardViewTransparent();
            this.p.setMBridgeClickMiniCardViewClickable(false);
        }
    }

    public void onPlayableBackPress() {
        MBridgePlayableView mBridgePlayableView = this.n;
        if (mBridgePlayableView != null) {
            mBridgePlayableView.onBackPress();
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
        MBridgeH5EndCardView mBridgeH5EndCardView = this.r;
        if (mBridgeH5EndCardView != null) {
            mBridgeH5EndCardView.onBackPress();
        }
    }

    public void release() {
        MBridgeH5EndCardView mBridgeH5EndCardView = this.r;
        if (mBridgeH5EndCardView != null) {
            mBridgeH5EndCardView.release();
            this.r = null;
        }
        MBridgePlayableView mBridgePlayableView = this.n;
        if (mBridgePlayableView != null) {
            mBridgePlayableView.release();
        }
        MBridgeLandingPageView mBridgeLandingPageView = this.u;
        if (mBridgeLandingPageView != null) {
            mBridgeLandingPageView.release();
        }
        MBridgeNativeEndCardView mBridgeNativeEndCardView = this.q;
        if (mBridgeNativeEndCardView != null) {
            mBridgeNativeEndCardView.clearMoreOfferBitmap();
            this.q.release();
        }
        if (this.e != null) {
            this.e = null;
        }
    }

    public MBridgeH5EndCardView getH5EndCardView() {
        MBridgeH5EndCardView mBridgeH5EndCardView = this.r;
        return mBridgeH5EndCardView == null ? this.n : mBridgeH5EndCardView;
    }

    @Override // com.mbridge.msdk.video.js.e
    public void hideAlertWebview() {
        if (isLast()) {
            return;
        }
        if (this.S && !this.T) {
            h();
            this.S = false;
        }
        MBridgeAlertWebview mBridgeAlertWebview = this.v;
        if (mBridgeAlertWebview == null || mBridgeAlertWebview.getParent() == null) {
            return;
        }
        removeView(this.v);
        MBridgeClickCTAView mBridgeClickCTAView = this.o;
        if (mBridgeClickCTAView == null || mBridgeClickCTAView.getParent() == null) {
            return;
        }
        setWrapContent();
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams instanceof RelativeLayout.LayoutParams) {
            ((RelativeLayout.LayoutParams) layoutParams).addRule(12, -1);
        }
    }

    @Override // com.mbridge.msdk.video.js.e
    public void ivRewardAdsWithoutVideo(String str) {
        this.e.a(103, str);
    }

    public void setNotchPadding(int i, int i2, int i3, int i4, int i5) {
        z.d(MBridgeBaseView.TAG, "NOTCH ContainerView " + String.format("%1s-%2s-%3s-%4s-%5s", Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4), Integer.valueOf(i5), Integer.valueOf(i)));
        this.O = i;
        this.K = i2;
        this.L = i3;
        this.M = i4;
        this.N = i5;
        this.P = m.a(i, i2, i3, i4, i5);
        MBridgeNativeEndCardView mBridgeNativeEndCardView = this.q;
        if (mBridgeNativeEndCardView != null) {
            mBridgeNativeEndCardView.setNotchPadding(i2, i3, i4, i5);
        }
        MBridgeH5EndCardView mBridgeH5EndCardView = this.r;
        if (mBridgeH5EndCardView != null && mBridgeH5EndCardView.q != null) {
            this.r.setNotchValue(this.P, i2, i3, i4, i5);
            com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) this.r.q, "oncutoutfetched", Base64.encodeToString(this.P.getBytes(), 0));
        }
        MBridgePlayableView mBridgePlayableView = this.n;
        if (mBridgePlayableView != null && mBridgePlayableView.q != null) {
            this.n.setNotchValue(this.P, i2, i3, i4, i5);
            com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) this.n.q, "oncutoutfetched", Base64.encodeToString(this.P.getBytes(), 0));
        }
        MBridgeOrderCampView mBridgeOrderCampView = this.R;
        if (mBridgeOrderCampView != null) {
            mBridgeOrderCampView.setNotchPadding(i2, i3, i4, i5);
        }
    }

    public void setOnResume() {
        MBridgeNativeEndCardView mBridgeNativeEndCardView = this.q;
        if (mBridgeNativeEndCardView != null) {
            mBridgeNativeEndCardView.setOnResume();
        }
    }

    public void setOnPause() {
        MBridgeNativeEndCardView mBridgeNativeEndCardView = this.q;
        if (mBridgeNativeEndCardView != null) {
            mBridgeNativeEndCardView.setOnPause();
        }
    }

    public void setRewardStatus(boolean z) {
        this.J = z;
    }
}
