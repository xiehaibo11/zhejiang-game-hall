package com.tkay.expressad.video.bt.module;

import android.app.Activity;
import android.content.Context;
import android.content.res.Configuration;
import android.os.Handler;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.foundation.d.r;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.video.bt.module.b.f;
import com.tkay.expressad.video.bt.module.b.h;
import com.tkay.expressad.video.module.TkayContainerView;
import com.tkay.expressad.video.module.TkayVideoView;
import com.tkay.expressad.video.module.a.a.n;
import com.tkay.expressad.video.signal.a.c;
import com.tkay.expressad.video.signal.a.j;
import com.tkay.expressad.video.signal.container.AbstractJSContainer;
import com.tkay.expressad.videocommon.a;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class TYTempContainer extends AbstractJSContainer {
    private static final String A = TYTempContainer.class.getSimpleName();
    private static final long aa = 5000;
    private static final long ab = 2000;
    private static final long ac = 100;
    private static final int ad = -1;
    private static final int ae = -2;
    private static final int af = -3;
    private static final int ag = -3;
    private static final int ah = -4;
    private static final int al = 250;
    protected static final int b = 0;
    private View B;
    private com.tkay.expressad.foundation.d.c C;
    private com.tkay.expressad.videocommon.b.a D;
    private h E;
    private com.tkay.expressad.video.bt.module.a.b F;
    private com.tkay.expressad.video.dynview.f.a G;
    private int H;
    private String I;
    private com.tkay.expressad.video.signal.factory.b J;
    private int K;
    private int L;
    private boolean M;
    private int N;
    private int O;
    private int P;
    private int Q;
    private int R;
    private String S;
    private String T;
    private List<com.tkay.expressad.foundation.d.c> U;
    private int V;
    private LayoutInflater W;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected boolean f7172a;
    private int ai;
    private int aj;
    private int ak;
    private View am;
    private boolean an;
    private boolean ao;
    private boolean ap;
    private boolean aq;
    private boolean ar;
    private boolean as;
    private boolean at;
    private boolean au;
    private boolean av;
    private boolean aw;
    private MraidVolumeChangeReceiver ax;
    private Runnable ay;
    protected boolean c;
    protected a d;
    protected WindVaneWebView e;
    protected TkayVideoView f;
    protected TkayContainerView g;
    protected Handler h;
    protected Runnable i;
    protected Runnable j;

    private static void n() {
    }

    private static void p() {
    }

    public void preload() {
    }

    public void setMediaPlayerUrl(String str) {
    }

    static /* synthetic */ boolean h(TYTempContainer tYTempContainer) {
        tYTempContainer.ao = true;
        return true;
    }

    static /* synthetic */ boolean m(TYTempContainer tYTempContainer) {
        tYTempContainer.au = true;
        return true;
    }

    static /* synthetic */ boolean q(TYTempContainer tYTempContainer) {
        tYTempContainer.av = true;
        return true;
    }

    static /* synthetic */ boolean t(TYTempContainer tYTempContainer) {
        tYTempContainer.as = true;
        return true;
    }

    public TYTempContainer(Context context) {
        super(context);
        this.H = 1;
        this.I = "";
        this.K = com.tkay.expressad.foundation.g.a.cv;
        this.M = false;
        this.S = "";
        this.U = new ArrayList();
        this.V = 0;
        this.f7172a = false;
        this.c = false;
        this.d = new a.C0477a();
        this.h = new Handler();
        this.ai = 0;
        this.aj = 0;
        this.ak = 0;
        this.i = new Runnable() { // from class: com.tkay.expressad.video.bt.module.TYTempContainer.1
            @Override // java.lang.Runnable
            public final void run() {
                if (TYTempContainer.this.getActivityProxy().h() == 0) {
                    Log.d(TYTempContainer.A, "run: WebView load timeout");
                    TYTempContainer.this.defaultLoad(-1, "WebView load timeout");
                } else {
                    TYTempContainer.this.ai = -3;
                }
            }
        };
        this.j = new Runnable() { // from class: com.tkay.expressad.video.bt.module.TYTempContainer.2
            @Override // java.lang.Runnable
            public final void run() {
                if (TYTempContainer.this.getActivityProxy().h() != 0) {
                    TYTempContainer.this.ai = -4;
                } else {
                    TYTempContainer.this.defaultLoad(-3, "JS bridge connect timeout");
                }
            }
        };
        this.an = false;
        this.ao = false;
        this.ap = false;
        this.ar = false;
        this.as = false;
        this.at = false;
        this.au = false;
        this.av = false;
        this.aw = false;
        this.ay = new Runnable() { // from class: com.tkay.expressad.video.bt.module.TYTempContainer.3
            @Override // java.lang.Runnable
            public final void run() {
                if (TYTempContainer.this.am != null) {
                    TYTempContainer.this.am.setVisibility(8);
                }
            }
        };
        init(context);
    }

    public TYTempContainer(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.H = 1;
        this.I = "";
        this.K = com.tkay.expressad.foundation.g.a.cv;
        this.M = false;
        this.S = "";
        this.U = new ArrayList();
        this.V = 0;
        this.f7172a = false;
        this.c = false;
        this.d = new a.C0477a();
        this.h = new Handler();
        this.ai = 0;
        this.aj = 0;
        this.ak = 0;
        this.i = new Runnable() { // from class: com.tkay.expressad.video.bt.module.TYTempContainer.1
            @Override // java.lang.Runnable
            public final void run() {
                if (TYTempContainer.this.getActivityProxy().h() == 0) {
                    Log.d(TYTempContainer.A, "run: WebView load timeout");
                    TYTempContainer.this.defaultLoad(-1, "WebView load timeout");
                } else {
                    TYTempContainer.this.ai = -3;
                }
            }
        };
        this.j = new Runnable() { // from class: com.tkay.expressad.video.bt.module.TYTempContainer.2
            @Override // java.lang.Runnable
            public final void run() {
                if (TYTempContainer.this.getActivityProxy().h() != 0) {
                    TYTempContainer.this.ai = -4;
                } else {
                    TYTempContainer.this.defaultLoad(-3, "JS bridge connect timeout");
                }
            }
        };
        this.an = false;
        this.ao = false;
        this.ap = false;
        this.ar = false;
        this.as = false;
        this.at = false;
        this.au = false;
        this.av = false;
        this.aw = false;
        this.ay = new Runnable() { // from class: com.tkay.expressad.video.bt.module.TYTempContainer.3
            @Override // java.lang.Runnable
            public final void run() {
                if (TYTempContainer.this.am != null) {
                    TYTempContainer.this.am.setVisibility(8);
                }
            }
        };
        init(context);
    }

    public void init(Context context) {
        this.W = LayoutInflater.from(context);
    }

    private static RelativeLayout.LayoutParams c() {
        return new RelativeLayout.LayoutParams(-1, -1);
    }

    private void d() {
        if (this.f7172a) {
            setMatchParent();
        }
    }

    public void setMatchParent() {
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams == null) {
            setLayoutParams(new ViewGroup.LayoutParams(-1, -1));
        } else {
            layoutParams.height = -1;
            layoutParams.width = -1;
        }
    }

    public void setCampOrderViewData(List<com.tkay.expressad.foundation.d.c> list, int i) {
        if (list != null) {
            this.U = list;
        }
        this.V = i;
    }

    public void registerErrorListener(a aVar) {
        this.d = aVar;
    }

    public int findID(String str) {
        return i.a(getContext(), str, "id");
    }

    public int findLayout(String str) {
        return i.a(getContext(), str, "layout");
    }

    public interface a {
        void a(String str);

        boolean a();

        void b();

        /* JADX INFO: renamed from: com.tkay.expressad.video.bt.module.TYTempContainer$a$a, reason: collision with other inner class name */
        public static class C0477a implements a {
            private static final String b = "ActivityErrorListener";

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private boolean f7181a = false;

            @Override // com.tkay.expressad.video.bt.module.TYTempContainer.a
            public void a(String str) {
                this.f7181a = true;
            }

            @Override // com.tkay.expressad.video.bt.module.TYTempContainer.a
            public final boolean a() {
                return this.f7181a;
            }

            @Override // com.tkay.expressad.video.bt.module.TYTempContainer.a
            public final void b() {
                this.f7181a = true;
            }
        }
    }

    public boolean isLoadSuccess() {
        return this.c;
    }

    private int e() {
        j jVarB = b(this.C);
        if (jVarB != null) {
            return jVarB.c();
        }
        return 0;
    }

    private int f() {
        if (getJSCommon() != null) {
            return getJSCommon().n();
        }
        return 1;
    }

    private int g() {
        j jVarB = b(this.C);
        if (jVarB != null) {
            return jVarB.b();
        }
        return 0;
    }

    private boolean h() {
        j jVarB = b(this.C);
        if (jVarB != null) {
            return jVarB.a();
        }
        return false;
    }

    private boolean i() {
        TkayVideoView tkayVideoView = this.f;
        if (tkayVideoView != null) {
            return tkayVideoView.isShowingAlertView() || this.f.isInstallDialogShowing();
        }
        return false;
    }

    private void j() {
        int iF;
        int iE;
        try {
            if (this.e != null) {
                int i = getResources().getConfiguration().orientation;
                if (h()) {
                    iF = t.g(getContext());
                    iE = t.h(getContext());
                    if (t.a(getContext())) {
                        int i2 = t.i(getContext());
                        if (i == 2) {
                            iF += i2;
                        } else {
                            iE += i2;
                        }
                    }
                } else {
                    iF = t.f(getContext());
                    iE = t.e(getContext());
                }
                int iC = this.C.M().c();
                if (c(this.C) == 1) {
                    iC = i;
                }
                getJSNotifyProxy().a(i, iC, iF, iE);
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(com.tkay.expressad.foundation.g.a.ch, t.c(getContext()));
                try {
                    if (this.q != null) {
                        JSONObject jSONObject2 = new JSONObject();
                        jSONObject2.put("name", this.q.a());
                        jSONObject2.put("amount", this.q.b());
                        jSONObject2.put("id", this.r);
                        jSONObject.put("userId", this.p);
                        jSONObject.put("reward", jSONObject2);
                        jSONObject.put("playVideoMute", this.s);
                        jSONObject.put("extra", this.T);
                    }
                } catch (JSONException e2) {
                    e2.getMessage();
                } catch (Exception e3) {
                    e3.getMessage();
                }
                getJSNotifyProxy().a(jSONObject.toString());
                com.tkay.expressad.atsignalcommon.windvane.j.a();
                com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) this.e, "oncutoutfetched", Base64.encodeToString(this.S.getBytes(), 0));
                getJSCommon().h();
                loadModuleDatas();
                this.h.postDelayed(this.i, 2000L);
            }
        } catch (Exception e4) {
            if (com.tkay.expressad.b.f6449a) {
                e4.printStackTrace();
            }
        }
    }

    private void k() {
        Runnable runnable;
        int i = this.ai;
        if (i == -3) {
            runnable = this.i;
        } else {
            runnable = i == -4 ? this.j : null;
        }
        if (runnable != null) {
            runnable.run();
            this.ai = 0;
        }
    }

    public void superDefaultLoad(int i, String str) {
        StringBuilder sb = new StringBuilder("receiveError:");
        sb.append(i);
        sb.append(",descroption:");
        sb.append(str);
        this.h.removeCallbacks(this.i);
        this.h.removeCallbacks(this.j);
        this.d.b();
        WindVaneWebView windVaneWebView = this.e;
        if (windVaneWebView != null) {
            windVaneWebView.setVisibility(8);
        }
    }

    private boolean l() {
        this.e = findWindVaneWebView();
        TkayVideoView tkayVideoViewFindTkayVideoView = findTkayVideoView();
        this.f = tkayVideoViewFindTkayVideoView;
        tkayVideoViewFindTkayVideoView.setVideoLayout(this.C);
        this.f.setIsIV(this.t);
        this.f.setUnitId(this.m);
        this.f.setCamPlayOrderCallback(this.G, this.U, this.H, this.V);
        if (this.y) {
            this.f.setNotchPadding(this.O, this.P, this.Q, this.R);
        }
        this.g = findTkayContainerView();
        if (this.y) {
            this.g.setNotchPadding(this.N, this.O, this.P, this.Q, this.R);
        }
        return (this.f == null || this.g == null || !initViews()) ? false : true;
    }

    @Override // com.tkay.expressad.video.signal.container.AbstractJSContainer, android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    public void onCreate() {
        ViewGroup viewGroup;
        new StringBuilder("onCreate isBigOffer: ").append(this.y);
        if (this.o == null) {
            this.o = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.m, this.t);
        }
        byte b2 = 0;
        this.aw = false;
        try {
            if (this.y) {
                if (this.C != null && this.C.j()) {
                    this.E = new com.tkay.expressad.video.bt.module.b.e(getContext(), this.t, this.o, this.C, this.E, b(), this.m);
                } else {
                    this.E = new com.tkay.expressad.video.bt.module.b.d(this.F, this.I);
                }
            } else {
                this.E = new com.tkay.expressad.video.bt.module.b.e(getContext(), this.t, this.o, this.C, this.E, b(), this.m);
            }
            registerErrorListener(new f(this.E));
            a(this.o, this.C);
            setShowingTransparent();
            int layoutID = getLayoutID();
            if (layoutID <= 0) {
                a("layoutID not found");
                return;
            }
            View viewInflate = this.W.inflate(layoutID, (ViewGroup) null);
            this.B = viewInflate;
            addView(viewInflate, new RelativeLayout.LayoutParams(-1, -1));
            if (this.f7172a) {
                setMatchParent();
            }
            this.e = findWindVaneWebView();
            TkayVideoView tkayVideoViewFindTkayVideoView = findTkayVideoView();
            this.f = tkayVideoViewFindTkayVideoView;
            tkayVideoViewFindTkayVideoView.setVideoLayout(this.C);
            this.f.setIsIV(this.t);
            this.f.setUnitId(this.m);
            this.f.setCamPlayOrderCallback(this.G, this.U, this.H, this.V);
            if (this.y) {
                this.f.setNotchPadding(this.O, this.P, this.Q, this.R);
            }
            this.g = findTkayContainerView();
            if (this.y) {
                this.g.setNotchPadding(this.N, this.O, this.P, this.Q, this.R);
            }
            if (!((this.f == null || this.g == null || !initViews()) ? false : true)) {
                this.d.a(com.tkay.expressad.foundation.e.a.b);
                if (this.l != null) {
                    this.l.finish();
                    return;
                }
                return;
            }
            this.c = true;
            WindVaneWebView windVaneWebView = this.e;
            this.J = new com.tkay.expressad.video.signal.factory.b(this.l, windVaneWebView, this.f, this.g, this.C, new d(this, b2));
            if (this.C != null && this.C.k() == 5 && this.U != null) {
                this.J.a(this.U);
            }
            registerJsFactory(this.J);
            com.tkay.expressad.foundation.f.b.a().a(this.m + "_1", new AnonymousClass5());
            if (windVaneWebView != null) {
                ViewGroup viewGroup2 = (ViewGroup) this.B.findViewById(i.a(getContext(), "tkay_video_templete_webview_parent", "id"));
                windVaneWebView.setApiManagerJSFactory(this.J);
                if (windVaneWebView.getParent() != null) {
                    defaultLoad(0, "preload template webview is null or load error");
                    return;
                }
                if (windVaneWebView.getObject() instanceof j) {
                    this.J.a((j) windVaneWebView.getObject());
                    getJSCommon().a(this.s);
                    getJSCommon().a(this.m);
                    getJSCommon().a(this.o);
                    getJSCommon().a(new d(this, b2));
                    if (this.C != null && (this.C.H() || this.C.ay())) {
                        MraidVolumeChangeReceiver mraidVolumeChangeReceiver = new MraidVolumeChangeReceiver(getContext());
                        this.ax = mraidVolumeChangeReceiver;
                        mraidVolumeChangeReceiver.registerReceiver();
                        this.ax.getCurrentVolume();
                        this.ax.setVolumeChangeListener(new AnonymousClass6());
                    }
                    getJSContainerModule().readyStatus(((j) windVaneWebView.getObject()).r());
                    j();
                    ((j) windVaneWebView.getObject()).r.c();
                    if (this.y) {
                        getJSCommon().f(this.aj);
                        getJSCommon().e(this.ak);
                    }
                }
                if (getJSCommon().f() == 1 && (viewGroup = (ViewGroup) this.B.findViewById(i.a(getContext(), "tkay_video_templete_webview_parent", "id"))) != null) {
                    ((ViewGroup) this.B).removeView(viewGroup);
                    ((ViewGroup) this.B).addView(viewGroup, 1);
                }
                viewGroup2.addView(windVaneWebView, new ViewGroup.LayoutParams(-1, -1));
                return;
            }
            defaultLoad(0, "preload template webview is null or load error");
        } catch (Throwable th) {
            a("onCreate error".concat(String.valueOf(th)));
        }
    }

    @Override // com.tkay.expressad.video.signal.container.AbstractJSContainer
    protected final void a(String str) {
        h hVar = this.E;
        if (hVar != null) {
            hVar.a(str);
        }
        super.a(str);
    }

    private void m() {
        if (this.o == null) {
            this.o = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.m, this.t);
        }
    }

    @Override // com.tkay.expressad.video.signal.container.AbstractJSContainer
    public void onPause() {
        super.onPause();
        this.ap = true;
        try {
            getJSVideoModule().videoOperate(2);
            if (this.g != null) {
                this.g.setOnPause();
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override // com.tkay.expressad.video.signal.container.AbstractJSContainer
    public void onResume() {
        Runnable runnable;
        super.onResume();
        int i = this.ai;
        if (i == -3) {
            runnable = this.i;
        } else {
            runnable = i == -4 ? this.j : null;
        }
        if (runnable != null) {
            runnable.run();
            this.ai = 0;
        }
        try {
            if (this.f != null && !i() && !this.f.isMiniCardShowing() && !com.tkay.expressad.foundation.f.b.c) {
                this.f.setCover(false);
            }
            if (this.g != null) {
                this.g.setOnResume();
            }
            if (this.ap && !i() && !com.tkay.expressad.foundation.f.b.c) {
                getJSVideoModule().videoOperate(1);
            }
            if (this.l != null) {
                t.a(this.l.getWindow().getDecorView());
            }
            if (this.ar && this.as && this.l != null) {
                this.l.finish();
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    @Override // com.tkay.expressad.video.signal.container.AbstractJSContainer
    public void onStop() {
        super.onStop();
        TkayVideoView tkayVideoView = this.f;
        if (tkayVideoView != null) {
            tkayVideoView.setCover(true);
        }
    }

    @Override // com.tkay.expressad.video.signal.container.AbstractJSContainer
    public void onDestroy() {
        if (this.M) {
            return;
        }
        boolean z = true;
        this.M = true;
        super.onDestroy();
        try {
            if (this.f != null) {
                this.f.releasePlayer();
            }
            if (this.e != null) {
                ViewGroup viewGroup = (ViewGroup) this.e.getParent();
                if (viewGroup != null) {
                    viewGroup.removeAllViews();
                }
                this.e.clearWebView();
                this.e.release();
            }
            if (this.F != null) {
                this.F = null;
            }
            this.h.removeCallbacks(this.i);
            this.h.removeCallbacks(this.j);
            getJSCommon().k();
            if (this.t) {
                com.tkay.expressad.d.b.a();
                com.tkay.expressad.d.b.c(this.m);
            }
            if (!this.an) {
                try {
                    this.an = true;
                    if (this.C != null && this.C.J() == 2) {
                        this.ao = true;
                    }
                    if (this.E != null) {
                        if (this.t && (this.v == com.tkay.expressad.foundation.g.a.cr || this.v == com.tkay.expressad.foundation.g.a.cs)) {
                            h hVar = this.E;
                            if (this.L != 1) {
                                z = false;
                            }
                            hVar.a(z, this.K);
                        }
                        if (!this.ao) {
                            this.q.a(0);
                        }
                        this.E.a(this.ao, this.q);
                    }
                    this.h.removeCallbacks(this.ay);
                    if (((!this.t && !this.y) || (this.C != null && this.C.j())) && this.ao) {
                        com.tkay.expressad.video.module.b.a.a(this.C, this.q, this.m, this.p, this.T);
                    }
                    if (!this.y) {
                        if (this.t) {
                            com.tkay.expressad.videocommon.a.b(com.tkay.expressad.foundation.g.a.aU, this.C);
                        } else {
                            com.tkay.expressad.videocommon.a.b(94, this.C);
                        }
                    }
                    if (this.g != null) {
                        this.g.release();
                    }
                } catch (Throwable th) {
                    th.getMessage();
                }
            }
            if (this.ax != null) {
                this.ax.unregisterReceiver();
            }
            if (!this.y) {
                if (isLoadSuccess()) {
                    this.h.postDelayed(new Runnable() { // from class: com.tkay.expressad.video.bt.module.TYTempContainer.4
                        @Override // java.lang.Runnable
                        public final void run() {
                            if (TYTempContainer.this.l != null) {
                                TYTempContainer.this.l.finish();
                            }
                        }
                    }, ac);
                } else if (this.l != null) {
                    this.l.finish();
                }
            }
            com.tkay.expressad.video.bt.a.c.a();
            com.tkay.expressad.video.bt.a.c.f(this.I);
        } catch (Throwable th2) {
            th2.getMessage();
        }
    }

    private void o() {
        try {
            if (this.F != null) {
                if (this.t && (this.v == com.tkay.expressad.foundation.g.a.cr || this.v == com.tkay.expressad.foundation.g.a.cs)) {
                    com.tkay.expressad.video.bt.module.a.b bVar = this.F;
                    boolean z = true;
                    if (this.L != 1) {
                        z = false;
                    }
                    bVar.a(z, this.K);
                }
                this.F.a(this.I, this.ao, this.q);
                return;
            }
            if (this.l != null) {
                this.l.finish();
            }
        } catch (Exception unused) {
            if (this.l != null) {
                this.l.finish();
            }
        }
    }

    public void setShowingTransparent() {
        int iA;
        boolean zH = h();
        this.ar = zH;
        if (zH || (iA = i.a(getContext(), "tkay_reward_theme", "style")) <= 1 || this.l == null) {
            return;
        }
        this.l.setTheme(iA);
    }

    private void q() {
        ViewGroup viewGroup;
        List<com.tkay.expressad.foundation.d.c> list;
        WindVaneWebView windVaneWebView = this.e;
        byte b2 = 0;
        this.J = new com.tkay.expressad.video.signal.factory.b(this.l, windVaneWebView, this.f, this.g, this.C, new d(this, b2));
        com.tkay.expressad.foundation.d.c cVar = this.C;
        if (cVar != null && cVar.k() == 5 && (list = this.U) != null) {
            this.J.a(list);
        }
        registerJsFactory(this.J);
        com.tkay.expressad.foundation.f.b.a().a(this.m + "_1", new AnonymousClass5());
        if (windVaneWebView != null) {
            ViewGroup viewGroup2 = (ViewGroup) this.B.findViewById(i.a(getContext(), "tkay_video_templete_webview_parent", "id"));
            windVaneWebView.setApiManagerJSFactory(this.J);
            if (windVaneWebView.getParent() != null) {
                defaultLoad(0, "preload template webview is null or load error");
                return;
            }
            if (windVaneWebView.getObject() instanceof j) {
                this.J.a((j) windVaneWebView.getObject());
                getJSCommon().a(this.s);
                getJSCommon().a(this.m);
                getJSCommon().a(this.o);
                getJSCommon().a(new d(this, b2));
                com.tkay.expressad.foundation.d.c cVar2 = this.C;
                if (cVar2 != null && (cVar2.H() || this.C.ay())) {
                    MraidVolumeChangeReceiver mraidVolumeChangeReceiver = new MraidVolumeChangeReceiver(getContext());
                    this.ax = mraidVolumeChangeReceiver;
                    mraidVolumeChangeReceiver.registerReceiver();
                    this.ax.getCurrentVolume();
                    this.ax.setVolumeChangeListener(new AnonymousClass6());
                }
                getJSContainerModule().readyStatus(((j) windVaneWebView.getObject()).r());
                j();
                ((j) windVaneWebView.getObject()).r.c();
                if (this.y) {
                    getJSCommon().f(this.aj);
                    getJSCommon().e(this.ak);
                }
            }
            if (getJSCommon().f() == 1 && (viewGroup = (ViewGroup) this.B.findViewById(i.a(getContext(), "tkay_video_templete_webview_parent", "id"))) != null) {
                ((ViewGroup) this.B).removeView(viewGroup);
                ((ViewGroup) this.B).addView(viewGroup, 1);
            }
            viewGroup2.addView(windVaneWebView, new ViewGroup.LayoutParams(-1, -1));
            return;
        }
        defaultLoad(0, "preload template webview is null or load error");
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.bt.module.TYTempContainer$5, reason: invalid class name */
    final class AnonymousClass5 implements com.tkay.expressad.foundation.f.a {
        AnonymousClass5() {
        }

        @Override // com.tkay.expressad.foundation.f.a
        public final void a() {
            String string;
            TYTempContainer.this.onPause();
            try {
                JSONObject jSONObject = new JSONObject();
                if (m.a().f() != null) {
                    jSONObject.put("status", 1);
                }
                string = jSONObject.toString();
            } catch (Throwable th) {
                String unused = TYTempContainer.A;
                th.getMessage();
                string = "";
            }
            String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TYTempContainer.this.e, "onFeedbackAlertStatusNotify", strEncodeToString);
        }

        @Override // com.tkay.expressad.foundation.f.a
        public final void b() {
            String string;
            TYTempContainer.this.onResume();
            try {
                JSONObject jSONObject = new JSONObject();
                if (m.a().f() != null) {
                    jSONObject.put("status", 2);
                }
                string = jSONObject.toString();
            } catch (Throwable th) {
                String unused = TYTempContainer.A;
                th.getMessage();
                string = "";
            }
            String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TYTempContainer.this.e, "onFeedbackAlertStatusNotify", strEncodeToString);
        }

        @Override // com.tkay.expressad.foundation.f.a
        public final void c() {
            String string;
            TYTempContainer.this.onResume();
            try {
                JSONObject jSONObject = new JSONObject();
                if (m.a().f() != null) {
                    jSONObject.put("status", 2);
                }
                string = jSONObject.toString();
            } catch (Throwable th) {
                String unused = TYTempContainer.A;
                th.getMessage();
                string = "";
            }
            String strEncodeToString = Base64.encodeToString(string.getBytes(), 2);
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) TYTempContainer.this.e, "onFeedbackAlertStatusNotify", strEncodeToString);
        }
    }

    private void r() {
        getJSCommon().a(this.s);
        getJSCommon().a(this.m);
        getJSCommon().a(this.o);
        getJSCommon().a(new d(this, (byte) 0));
        com.tkay.expressad.foundation.d.c cVar = this.C;
        if (cVar != null) {
            if (cVar.H() || this.C.ay()) {
                MraidVolumeChangeReceiver mraidVolumeChangeReceiver = new MraidVolumeChangeReceiver(getContext());
                this.ax = mraidVolumeChangeReceiver;
                mraidVolumeChangeReceiver.registerReceiver();
                this.ax.getCurrentVolume();
                this.ax.setVolumeChangeListener(new AnonymousClass6());
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.bt.module.TYTempContainer$6, reason: invalid class name */
    final class AnonymousClass6 implements MraidVolumeChangeReceiver.VolumeChangeListener {
        AnonymousClass6() {
        }

        @Override // com.tkay.expressad.atsignalcommon.mraid.MraidVolumeChangeReceiver.VolumeChangeListener
        public final void onVolumeChanged(double d) {
            String unused = TYTempContainer.A;
            try {
                if (!TYTempContainer.this.C.H() || TYTempContainer.this.g == null || TYTempContainer.this.g.getH5EndCardView() == null) {
                    return;
                }
                TYTempContainer.this.g.getH5EndCardView().volumeChange(d);
            } catch (Exception e) {
                String unused2 = TYTempContainer.A;
                e.getMessage();
            }
        }
    }

    public void receiveSuccess() {
        this.h.removeCallbacks(this.j);
        this.h.postDelayed(this.ay, 250L);
    }

    public void defaultLoad(int i, String str) {
        int iE;
        int i2;
        int iP;
        superDefaultLoad(i, str);
        if (isLoadSuccess()) {
            byte b2 = 0;
            if (this.C.J() == 2) {
                this.g.setCampaign(this.C);
                this.g.addOrderViewData(this.U);
                this.g.setUnitID(this.m);
                if (this.C.g() > -2) {
                    iP = this.C.g();
                } else {
                    iP = this.o.p();
                }
                this.g.setCloseDelayTime(iP);
                this.g.setPlayCloseBtnTm(this.o.j());
                this.g.setNotifyListener(new com.tkay.expressad.video.module.a.a.h(this.C, this.D, this.q, b(), this.m, new c(this, b2), this.o.M(), this.y));
                this.g.preLoadData(this.J);
                this.g.showPlayableView();
                return;
            }
            a(i, str);
            this.am.setVisibility(8);
            loadModuleDatas();
            int iF = this.o.f();
            int iE2 = e();
            int i3 = iE2 != 0 ? iE2 : iF;
            com.tkay.expressad.foundation.d.c cVar = this.C;
            if (cVar != null && cVar.j()) {
                this.f.setContainerViewOnNotifyListener(new b(this.l, this.C));
            }
            com.tkay.expressad.foundation.d.c cVar2 = this.C;
            if (cVar2 != null && cVar2.h() > -2) {
                iE = this.C.h();
            } else {
                iE = this.o.e();
            }
            if (this.C.k() == 5 && (i2 = this.H) > 1) {
                iE = a(iE, i2);
                this.C.a(iE);
            }
            int i4 = iE;
            this.f.setVideoSkipTime(i4);
            TkayVideoView tkayVideoView = this.f;
            tkayVideoView.setNotifyListener(new com.tkay.expressad.video.module.a.a.m(tkayVideoView, this.g, this.C, this.q, this.D, b(), this.m, i3, i4, new e(this, b2), this.o.M(), this.y, this.o.U()));
            this.f.defaultShow();
            TkayContainerView tkayContainerView = this.g;
            tkayContainerView.setNotifyListener(new com.tkay.expressad.video.module.a.a.b(this.f, tkayContainerView, this.C, this.q, this.D, b(), this.m, new b(this.l, this.C), this.o.M(), this.y));
            this.g.defaultShow();
            return;
        }
        a(i, str);
        if (this.l != null) {
            this.l.finish();
        }
    }

    public int getLayoutID() {
        return findLayout(this.ar ? "tkay_reward_activity_video_templete_transparent" : "tkay_reward_activity_video_templete");
    }

    public WindVaneWebView findWindVaneWebView() {
        a.C0482a c0482aA;
        try {
            if (this.y) {
                if (this.C == null || this.C.M() == null) {
                    return null;
                }
                a.C0482a c0482aA2 = com.tkay.expressad.videocommon.a.a(this.m + "_" + this.C.aZ() + "_" + this.C.Z() + "_" + this.C.M().e());
                if (c0482aA2 != null) {
                    return c0482aA2.a();
                }
                return null;
            }
            if (this.t) {
                c0482aA = com.tkay.expressad.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU, this.C);
            } else {
                c0482aA = com.tkay.expressad.videocommon.a.a(94, this.C);
            }
            if (c0482aA == null || !c0482aA.c()) {
                return null;
            }
            if (this.t) {
                com.tkay.expressad.videocommon.a.b(com.tkay.expressad.foundation.g.a.aU, this.C);
            } else {
                com.tkay.expressad.videocommon.a.b(94, this.C);
            }
            WindVaneWebView windVaneWebViewA = c0482aA.a();
            if (this.ar) {
                windVaneWebViewA.setWebViewTransparent();
            }
            return windVaneWebViewA;
        } catch (Exception e2) {
            if (!com.tkay.expressad.b.f6449a) {
                return null;
            }
            e2.printStackTrace();
            return null;
        }
    }

    public TkayVideoView findTkayVideoView() {
        return (TkayVideoView) findViewById(findID("tkay_video_templete_videoview"));
    }

    public TkayContainerView findTkayContainerView() {
        return (TkayContainerView) findViewById(findID("tkay_video_templete_container"));
    }

    public boolean initViews() {
        View viewFindViewById = findViewById(findID("tkay_video_templete_progressbar"));
        this.am = viewFindViewById;
        return viewFindViewById != null;
    }

    private void s() {
        if (this.ao) {
            com.tkay.expressad.video.module.b.a.a(this.C, this.q, this.m, this.p, this.T);
        }
    }

    public boolean canBackPress() {
        TkayContainerView tkayContainerView = this.g;
        return tkayContainerView == null || tkayContainerView.canBackPress();
    }

    public void onBackPressed() {
        TkayContainerView tkayContainerView;
        TkayContainerView tkayContainerView2;
        TkayVideoView tkayVideoView;
        TkayVideoView tkayVideoView2;
        if (this.ar && (tkayVideoView2 = this.f) != null) {
            tkayVideoView2.notifyVideoClose();
            return;
        }
        if (this.at && (tkayVideoView = this.f) != null) {
            if (tkayVideoView.isMiniCardShowing()) {
                TkayContainerView tkayContainerView3 = this.g;
                if (tkayContainerView3 != null) {
                    tkayContainerView3.onMiniEndcardBackPress();
                    return;
                }
                return;
            }
            this.f.onBackPress();
            return;
        }
        if (this.av && (tkayContainerView2 = this.g) != null) {
            tkayContainerView2.onPlayableBackPress();
            return;
        }
        if (this.au && (tkayContainerView = this.g) != null) {
            tkayContainerView.onEndcardBackPress();
        }
        if (getJSCommon().g()) {
            if (getJSContainerModule() == null || !getJSContainerModule().miniCardShowing()) {
                getActivityProxy().g();
                return;
            }
            return;
        }
        if (!canBackPress() || this.l == null || this.y || this.aw) {
            return;
        }
        this.aw = true;
        this.l.onBackPressed();
    }

    private void t() {
        boolean z = true;
        try {
            this.an = true;
            if (this.C != null && this.C.J() == 2) {
                this.ao = true;
            }
            if (this.E != null) {
                if (this.t && (this.v == com.tkay.expressad.foundation.g.a.cr || this.v == com.tkay.expressad.foundation.g.a.cs)) {
                    h hVar = this.E;
                    if (this.L != 1) {
                        z = false;
                    }
                    hVar.a(z, this.K);
                }
                if (!this.ao) {
                    this.q.a(0);
                }
                this.E.a(this.ao, this.q);
            }
            this.h.removeCallbacks(this.ay);
            if (((!this.t && !this.y) || (this.C != null && this.C.j())) && this.ao) {
                com.tkay.expressad.video.module.b.a.a(this.C, this.q, this.m, this.p, this.T);
            }
            if (!this.y) {
                if (this.t) {
                    com.tkay.expressad.videocommon.a.b(com.tkay.expressad.foundation.g.a.aU, this.C);
                } else {
                    com.tkay.expressad.videocommon.a.b(94, this.C);
                }
            }
            if (this.g != null) {
                this.g.release();
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private void a(int i, String str) {
        try {
            r rVar = new r();
            rVar.h(r.i);
            rVar.c("code=" + i + ",desc=" + str);
            rVar.b((this.C == null || this.C.M() == null) ? "" : this.C.M().e());
            rVar.f(this.m);
            rVar.g(this.C != null ? this.C.aZ() : "");
            if (this.C != null && !TextUtils.isEmpty(this.C.Z())) {
                rVar.d(this.C.Z());
            }
            if (this.C != null && !TextUtils.isEmpty(this.C.aa())) {
                rVar.e(this.C.aa());
            }
            getContext();
            int iA = k.a();
            rVar.c(iA);
            rVar.j(k.a(getContext(), iA));
            r.a(rVar);
            com.tkay.expressad.video.module.b.a.a();
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private static int u() {
        try {
            com.tkay.expressad.videocommon.e.a aVarB = com.tkay.expressad.videocommon.e.c.a().b();
            if (aVarB == null) {
                com.tkay.expressad.videocommon.e.c.a();
                com.tkay.expressad.videocommon.e.c.c();
            }
            if (aVarB != null) {
                return (int) aVarB.g();
            }
            return 5;
        } catch (Throwable th) {
            th.printStackTrace();
            return 5;
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.bt.module.TYTempContainer$7, reason: invalid class name */
    final class AnonymousClass7 implements Runnable {
        AnonymousClass7() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            TYTempContainer.this.am.setBackgroundColor(0);
            TYTempContainer.this.am.setVisibility(0);
            TYTempContainer.this.am.bringToFront();
        }
    }

    private void v() {
        if (isLoadSuccess()) {
            this.l.runOnUiThread(new AnonymousClass7());
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.bt.module.TYTempContainer$8, reason: invalid class name */
    final class AnonymousClass8 implements Runnable {
        AnonymousClass8() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            TYTempContainer.this.am.setVisibility(8);
        }
    }

    private void w() {
        if (isLoadSuccess()) {
            this.l.runOnUiThread(new AnonymousClass8());
        }
    }

    private int a(int i, int i2) {
        List<com.tkay.expressad.foundation.d.c> list;
        if (i < 0 || (list = this.U) == null || list.size() == 0 || i2 <= 1) {
            return i;
        }
        int iBi = 0;
        for (int i3 = 0; i3 < i2 - 1; i3++) {
            if (this.U.get(i3) != null) {
                iBi += this.U.get(i3).bi();
            }
        }
        if (i > iBi) {
            return i - iBi;
        }
        return 0;
    }

    private final class e extends com.tkay.expressad.video.module.a.a.f {
        private e() {
        }

        /* synthetic */ e(TYTempContainer tYTempContainer, byte b) {
            this();
        }

        @Override // com.tkay.expressad.video.module.a.a.f, com.tkay.expressad.video.module.a.a
        public final void a(int i, Object obj) {
            super.a(i, obj);
            if (TYTempContainer.this.t) {
                try {
                    if (obj instanceof String) {
                        String str = (String) obj;
                        if (!TextUtils.isEmpty(str)) {
                            JSONObject jSONObject = new JSONObject(str);
                            TYTempContainer.this.K = jSONObject.getInt("Alert_window_status");
                            TYTempContainer.this.L = jSONObject.getInt("complete_info");
                        }
                    }
                } catch (Exception e) {
                    e.getMessage();
                }
            }
            if (i != 2) {
                if (i == 121) {
                    TYTempContainer.h(TYTempContainer.this);
                    TYTempContainer.this.E.b();
                    TYTempContainer.this.at = false;
                    return;
                }
                if (i == 16) {
                    TYTempContainer.k(TYTempContainer.this);
                    return;
                }
                if (i != 17) {
                    switch (i) {
                        case 10:
                            TYTempContainer.this.at = true;
                            if (TYTempContainer.this.C != null) {
                                if (TYTempContainer.this.C.j()) {
                                    if (TYTempContainer.this.y) {
                                        if (TYTempContainer.this.C.l()) {
                                            TYTempContainer.this.E.a();
                                        }
                                    } else {
                                        TYTempContainer.this.E.a();
                                    }
                                } else {
                                    TYTempContainer.this.E.a();
                                }
                            }
                            break;
                    }
                    return;
                }
                TYTempContainer.h(TYTempContainer.this);
                if (TYTempContainer.this.g != null) {
                    TYTempContainer.this.g.setRewardStatus(true);
                    return;
                }
                return;
            }
            if (i == 12 && !TYTempContainer.this.at) {
                if (TYTempContainer.this.o.U() == 0) {
                    TYTempContainer.this.E.a("play error");
                    TYTempContainer.this.at = false;
                    TYTempContainer.k(TYTempContainer.this);
                    return;
                } else if (TYTempContainer.this.C == null || !TYTempContainer.this.C.j() || !TYTempContainer.this.y || TYTempContainer.this.C.l()) {
                    TYTempContainer.this.E.a();
                }
            }
            TYTempContainer.this.getJSVideoModule().videoOperate(3);
            TYTempContainer.this.at = false;
        }
    }

    private final class b extends com.tkay.expressad.video.module.a.a.f {
        private Activity V;
        private com.tkay.expressad.foundation.d.c W;

        public b(Activity activity, com.tkay.expressad.foundation.d.c cVar) {
            this.V = activity;
            this.W = cVar;
        }

        @Override // com.tkay.expressad.video.module.a.a.f, com.tkay.expressad.video.module.a.a
        public final void a(int i, Object obj) {
            Context context = TYTempContainer.this.getContext();
            if (context != null && context != context.getApplicationContext()) {
                TYTempContainer.this.getJSCommon().a(context);
            }
            if (this.V != null) {
                TYTempContainer.this.getJSCommon().a(this.V);
            }
            TYTempContainer.m(TYTempContainer.this);
            if (i != 108) {
                if (i != 113) {
                    if (i != 117) {
                        if (i == 126 || i == 128) {
                            TYTempContainer.this.E.a(this.W);
                        } else {
                            switch (i) {
                                case 103:
                                case 104:
                                    TYTempContainer.k(TYTempContainer.this);
                                    break;
                                case 105:
                                    TYTempContainer.this.getJSCommon().click(1, obj != null ? obj.toString() : "");
                                    break;
                                case 106:
                                    if (TYTempContainer.this.F != null) {
                                        TYTempContainer.this.F.a(TYTempContainer.this.I, this.W);
                                    } else {
                                        TYTempContainer.this.E.a(this.W);
                                    }
                                    if (this.V != null && this.W != null) {
                                        m.a().a(new Runnable() { // from class: com.tkay.expressad.video.bt.module.TYTempContainer.b.1
                                            @Override // java.lang.Runnable
                                            public final void run() {
                                                TYTempContainer.k(TYTempContainer.this);
                                            }
                                        }, 50L);
                                    }
                                    break;
                            }
                        }
                    } else {
                        if (TYTempContainer.this.f != null) {
                            TYTempContainer.this.f.setVisible(4);
                        }
                        TYTempContainer.m(TYTempContainer.this);
                        TYTempContainer.this.E.c();
                    }
                } else {
                    TYTempContainer.this.E.a(this.W);
                }
            } else {
                TYTempContainer.this.getJSCommon().a(new c.b(TYTempContainer.this.getJSCommon(), new d(TYTempContainer.this, (byte) 0)));
                TYTempContainer.this.getJSCommon().click(1, obj != null ? obj.toString() : "");
            }
            super.a(i, obj);
        }
    }

    private final class c extends com.tkay.expressad.video.module.a.a.f {
        private c() {
        }

        /* synthetic */ c(TYTempContainer tYTempContainer, byte b) {
            this();
        }

        @Override // com.tkay.expressad.video.module.a.a.f, com.tkay.expressad.video.module.a.a
        public final void a(int i, Object obj) {
            String string;
            super.a(i, obj);
            try {
                if (obj instanceof JSONObject) {
                    string = obj.toString();
                } else {
                    string = (String) obj;
                }
                if (TYTempContainer.this.t && !TextUtils.isEmpty(string)) {
                    JSONObject jSONObject = new JSONObject(string);
                    int iOptInt = jSONObject.optInt("type");
                    int iOptInt2 = jSONObject.optInt("complete");
                    if (iOptInt == 2) {
                        TYTempContainer.this.K = com.tkay.expressad.foundation.g.a.cx;
                    } else if (iOptInt != 3) {
                        TYTempContainer.this.K = com.tkay.expressad.foundation.g.a.cv;
                    } else {
                        TYTempContainer.this.K = com.tkay.expressad.foundation.g.a.cw;
                    }
                    TYTempContainer.this.L = iOptInt2;
                }
            } catch (Exception unused) {
            }
            if (i == 120) {
                TYTempContainer.this.E.c();
                return;
            }
            if (i == 126) {
                TYTempContainer.this.E.a(TYTempContainer.this.C);
                return;
            }
            if (i != 127) {
                switch (i) {
                    case 100:
                        TYTempContainer.q(TYTempContainer.this);
                        TYTempContainer.this.h.postDelayed(TYTempContainer.this.ay, 250L);
                        TYTempContainer.this.E.a();
                        break;
                    case 101:
                    case 102:
                        TYTempContainer.this.getJSCommon().j();
                        break;
                    case 103:
                        TYTempContainer.h(TYTempContainer.this);
                        if (TYTempContainer.this.C.H()) {
                            TYTempContainer.k(TYTempContainer.this);
                        } else {
                            TYTempContainer.this.getJSCommon().j();
                        }
                        break;
                    case 104:
                        TYTempContainer.k(TYTempContainer.this);
                        break;
                    case 105:
                        TYTempContainer.this.getJSCommon().click(1, obj != null ? obj.toString() : "");
                        break;
                }
                return;
            }
            TYTempContainer.h(TYTempContainer.this);
            TYTempContainer.this.E.a();
            TYTempContainer.this.E.c();
            TYTempContainer.this.getJSContainerModule().showEndcard(100);
        }
    }

    private class d extends c.a {
        private d() {
        }

        /* synthetic */ d(TYTempContainer tYTempContainer, byte b) {
            this();
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.video.signal.c.a
        public final void c() {
            super.c();
            TYTempContainer.this.receiveSuccess();
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.out.j.c
        public final void a(com.tkay.expressad.foundation.d.c cVar, String str) {
            super.a(cVar, str);
            TYTempContainer.s(TYTempContainer.this);
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.out.j.c
        public final void a(com.tkay.expressad.out.d dVar, String str) {
            super.a(dVar, str);
            TYTempContainer.t(TYTempContainer.this);
            TYTempContainer.u(TYTempContainer.this);
            if (dVar == null || !(dVar instanceof com.tkay.expressad.foundation.d.c)) {
                return;
            }
            try {
                com.tkay.expressad.foundation.d.c cVar = (com.tkay.expressad.foundation.d.c) dVar;
                String strOptString = new JSONObject(TYTempContainer.this.getJSVideoModule().getCurrentProgress()).optString(NotificationCompat.CATEGORY_PROGRESS, "");
                if (cVar.Q() == 3 && cVar.C() == 2 && strOptString.equals("1.0") && TYTempContainer.this.l != null) {
                    if (!TYTempContainer.this.y) {
                        TYTempContainer.this.l.finish();
                    } else {
                        TYTempContainer.k(TYTempContainer.this);
                    }
                }
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.out.j.c
        public final void b(com.tkay.expressad.out.d dVar, String str) {
            super.b(dVar, str);
            TYTempContainer.u(TYTempContainer.this);
            TYTempContainer.t(TYTempContainer.this);
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.video.signal.c.a
        public final void a(com.tkay.expressad.foundation.d.c cVar, boolean z) {
            super.a(cVar, z);
            TYTempContainer.this.E.a(cVar);
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.video.signal.c.a
        public final void a(int i, String str) {
            super.a(i, str);
            TYTempContainer.this.defaultLoad(i, str);
        }

        @Override // com.tkay.expressad.video.signal.a.c.a, com.tkay.expressad.video.signal.c.a
        public final void d() {
            super.d();
            if (TYTempContainer.this.h != null) {
                TYTempContainer.this.h.removeCallbacks(TYTempContainer.this.i);
            }
        }
    }

    public void setCampaign(com.tkay.expressad.foundation.d.c cVar) {
        this.C = cVar;
        if (cVar != null) {
            if (TextUtils.isEmpty(cVar.K()) && !TextUtils.isEmpty(this.m)) {
                cVar.l(this.m);
            }
            com.tkay.expressad.foundation.f.b.a().a(cVar.K() + "_1", cVar);
        }
    }

    public com.tkay.expressad.foundation.d.c getCampaign() {
        return this.C;
    }

    public void setCampaignExpired(boolean z) {
        try {
            if (this.C != null) {
                if (z) {
                    this.C.e(1);
                    if (this.u) {
                        this.C.m(0);
                        return;
                    } else {
                        if (this.o != null) {
                            if (this.o.M() == 1) {
                                this.C.m(1);
                                return;
                            } else {
                                this.C.m(0);
                                return;
                            }
                        }
                        return;
                    }
                }
                this.C.e(0);
                if (this.C.A()) {
                    this.C.m(0);
                } else if (this.o != null) {
                    this.C.m(this.o.a());
                }
            }
        } catch (Exception e2) {
            e2.getMessage();
        }
    }

    public void setCampaignDownLoadTask(com.tkay.expressad.videocommon.b.a aVar) {
        this.D = aVar;
    }

    public void setShowRewardListener(h hVar) {
        this.E = hVar;
    }

    public void setTkayTempCallback(com.tkay.expressad.video.bt.module.a.b bVar) {
        this.F = bVar;
    }

    public void setCamPlayOrderCallback(com.tkay.expressad.video.dynview.f.a aVar, int i) {
        this.G = aVar;
        this.H = i;
    }

    public void setJSFactory(com.tkay.expressad.video.signal.factory.b bVar) {
        this.J = bVar;
    }

    public void setInstanceId(String str) {
        this.I = str;
    }

    public String getInstanceId() {
        return this.I;
    }

    public void setH5Cbp(int i) {
        this.ak = i;
    }

    public void setWebViewFront(int i) {
        this.aj = i;
    }

    public void notifyEvent(String str) {
        WindVaneWebView windVaneWebView = this.e;
        if (windVaneWebView != null) {
            String str2 = this.I;
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) windVaneWebView, str, Base64.encodeToString(str2.getBytes(), 2));
        }
    }

    public void setNotchPadding(int i, int i2, int i3, int i4, int i5) {
        this.N = i;
        this.O = i2;
        this.P = i3;
        this.Q = i4;
        this.R = i5;
        this.S = com.tkay.expressad.foundation.h.h.a(i, i2, i3, i4, i5);
        if (getJSCommon() != null && !TextUtils.isEmpty(this.S)) {
            getJSCommon().b(this.S);
            if (this.e != null && !TextUtils.isEmpty(this.S)) {
                com.tkay.expressad.atsignalcommon.windvane.j.a();
                com.tkay.expressad.atsignalcommon.windvane.j.a((WebView) this.e, "oncutoutfetched", Base64.encodeToString(this.S.getBytes(), 0));
            }
        }
        TkayVideoView tkayVideoView = this.f;
        if (tkayVideoView != null) {
            tkayVideoView.setNotchPadding(i2, i3, i4, i5);
        }
        TkayContainerView tkayContainerView = this.g;
        if (tkayContainerView != null) {
            tkayContainerView.setNotchPadding(i, i2, i3, i4, i5);
        }
    }

    public void setDeveloperExtraData(String str) {
        this.T = str;
    }

    public void loadModuleDatas() {
        int iE;
        int iP;
        int i;
        j jVarB = b(this.C);
        byte b2 = 0;
        int iB = jVarB != null ? jVarB.b() : 0;
        if (iB != 0) {
            this.s = iB;
        }
        int iF = this.o.f();
        int iE2 = e();
        int i2 = iE2 != 0 ? iE2 : iF;
        this.f.setSoundState(this.s);
        this.f.setCampaign(this.C);
        this.f.setPlayURL(this.D.r());
        com.tkay.expressad.foundation.d.c cVar = this.C;
        if (cVar != null && cVar.h() > -2) {
            iE = this.C.h();
        } else {
            iE = this.o.e();
        }
        if (this.C.k() == 5 && (i = this.H) > 1) {
            iE = a(iE, i);
            this.C.a(iE);
        }
        this.f.setVideoSkipTime(iE);
        this.f.setCloseAlert(this.o.k());
        this.f.setBufferTimeout(u());
        this.f.setNotifyListener(new n(this.J, this.C, this.q, this.D, b(), this.m, i2, iE, new e(this, b2), this.o.M(), this.y, this.o.U()));
        this.f.setShowingTransparent(this.ar);
        if (this.t && (this.v == com.tkay.expressad.foundation.g.a.cr || this.v == com.tkay.expressad.foundation.g.a.cs)) {
            this.f.setIVRewardEnable(this.v, this.w, this.x);
            this.f.setDialogRole(getJSCommon() != null ? getJSCommon().n() : 1);
        }
        this.g.setCampaign(this.C);
        this.g.addOrderViewData(this.U);
        this.g.setUnitID(this.m);
        if (this.C.g() > -2) {
            iP = this.C.g();
        } else {
            iP = this.o.p();
        }
        this.g.setCloseDelayTime(iP);
        this.g.setPlayCloseBtnTm(this.o.j());
        this.g.setVideoInteractiveType(this.o.h());
        this.g.setEndscreenType(this.o.r());
        this.g.setVideoSkipTime(iE);
        this.g.setShowingTransparent(this.ar);
        this.g.setJSFactory(this.J);
        if (this.C.J() == 2) {
            this.g.setNotifyListener(new com.tkay.expressad.video.module.a.a.h(this.C, this.D, this.q, b(), this.m, new c(this, (byte) 0), this.o.M(), this.y));
            this.g.preLoadData(this.J);
            this.g.showPlayableView();
        } else {
            this.g.setNotifyListener(new com.tkay.expressad.video.module.a.a.c(this.J, this.C, this.q, this.D, b(), this.m, new b(this.l, this.C), this.o.M(), this.y));
            this.g.preLoadData(this.J);
            this.f.preLoadData(this.J);
        }
        if (this.ar) {
            this.g.setTkayClickMiniCardViewTransparent();
        }
    }

    static /* synthetic */ void k(TYTempContainer tYTempContainer) {
        try {
            if (tYTempContainer.F != null) {
                if (tYTempContainer.t && (tYTempContainer.v == com.tkay.expressad.foundation.g.a.cr || tYTempContainer.v == com.tkay.expressad.foundation.g.a.cs)) {
                    com.tkay.expressad.video.bt.module.a.b bVar = tYTempContainer.F;
                    boolean z = true;
                    if (tYTempContainer.L != 1) {
                        z = false;
                    }
                    bVar.a(z, tYTempContainer.K);
                }
                tYTempContainer.F.a(tYTempContainer.I, tYTempContainer.ao, tYTempContainer.q);
                return;
            }
            if (tYTempContainer.l != null) {
                tYTempContainer.l.finish();
            }
        } catch (Exception unused) {
            if (tYTempContainer.l != null) {
                tYTempContainer.l.finish();
            }
        }
    }

    static /* synthetic */ void s(TYTempContainer tYTempContainer) {
        if (tYTempContainer.isLoadSuccess()) {
            tYTempContainer.l.runOnUiThread(tYTempContainer.new AnonymousClass7());
        }
    }

    static /* synthetic */ void u(TYTempContainer tYTempContainer) {
        if (tYTempContainer.isLoadSuccess()) {
            tYTempContainer.l.runOnUiThread(tYTempContainer.new AnonymousClass8());
        }
    }
}
