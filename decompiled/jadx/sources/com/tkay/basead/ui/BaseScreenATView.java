package com.tkay.basead.ui;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.ValueAnimator;
import android.content.Context;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.ViewGroup;
import android.widget.RelativeLayout;
import com.tkay.basead.a.b.g;
import com.tkay.basead.c;
import com.tkay.basead.c.e;
import com.tkay.basead.c.f;
import com.tkay.basead.c.i;
import com.tkay.basead.e.b;
import com.tkay.basead.ui.BaseShakeView;
import com.tkay.basead.ui.EndCardView;
import com.tkay.basead.ui.MraidEndCardView;
import com.tkay.basead.ui.PanelView;
import com.tkay.basead.ui.PlayerView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.ab;
import com.tkay.core.common.f.j;
import com.tkay.core.common.f.z;
import com.tkay.core.common.l.h;
import java.util.Map;
import java.util.Random;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes3.dex */
public abstract class BaseScreenATView extends BaseATView {
    public static final int FORMAT_INTERSTITIAL = 3;
    public static final int FORMAT_REWARD_VIDEO = 1;
    public static final String TAG = BaseScreenATView.class.getSimpleName();
    public static final int TYPE_FULL_SCREEN = 0;
    public static final int TYPE_HALF_SCREEN = 1;
    protected b A;
    int B;
    protected int C;
    protected int D;
    protected b.InterfaceC0396b E;
    protected boolean F;
    protected int G;
    protected CountDownView H;
    protected CloseImageView I;
    protected ViewGroup J;
    protected MuteImageView K;
    protected int L;
    protected boolean M;
    protected float N;
    protected int O;
    protected int P;
    protected int Q;
    protected BaseShakeView R;
    protected BaseShakeView S;
    final long T;
    final long U;
    Runnable V;
    ConcurrentHashMap<Integer, Boolean> W;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected int f5737a;
    protected int aa;
    protected int ab;
    protected int ac;
    protected int ad;
    private boolean ae;
    private boolean af;
    private long ag;
    private long ah;
    private long ai;
    private long aj;
    private c ak;
    private boolean al;
    private boolean am;
    private boolean an;
    protected int t;
    protected boolean u;
    protected boolean v;
    protected RelativeLayout w;
    protected PlayerView x;
    protected PanelView y;
    protected BaseEndCardView z;

    protected abstract void A();

    protected abstract void H();

    protected abstract void I();

    protected abstract void J();

    @Override // com.tkay.basead.ui.BaseATView
    protected void a() {
    }

    protected abstract boolean c(int i);

    protected abstract int q();

    protected abstract void w();

    protected void y() {
    }

    public BaseScreenATView(Context context) {
        super(context);
        this.G = 0;
        this.al = false;
        this.T = 3000L;
        this.U = 500L;
        this.am = false;
        this.an = false;
        this.V = new Runnable() { // from class: com.tkay.basead.ui.BaseScreenATView.1
            @Override // java.lang.Runnable
            public final void run() {
                BaseScreenATView.super.h();
            }
        };
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x006f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public BaseScreenATView(android.content.Context r3, com.tkay.core.common.f.i r4, com.tkay.core.common.f.h r5, java.lang.String r6, int r7, int r8) {
        /*
            r2 = this;
            r2.<init>(r3, r4, r5, r6)
            r3 = 0
            r2.G = r3
            r2.al = r3
            r4 = 3000(0xbb8, double:1.482E-320)
            r2.T = r4
            r4 = 500(0x1f4, double:2.47E-321)
            r2.U = r4
            r2.am = r3
            r2.an = r3
            com.tkay.basead.ui.BaseScreenATView$1 r4 = new com.tkay.basead.ui.BaseScreenATView$1
            r4.<init>()
            r2.V = r4
            r2.f5737a = r7
            r2.t = r8
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.v()
            if (r4 <= 0) goto L34
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.v()
            int r4 = r4 * 1000
            goto L3c
        L34:
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.v()
        L3c:
            long r4 = (long) r4
            r2.ag = r4
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.w()
            if (r4 <= 0) goto L54
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.w()
            int r4 = r4 * 1000
            goto L5c
        L54:
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.w()
        L5c:
            long r4 = (long) r4
            r2.ah = r4
            r6 = 0
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 <= 0) goto L6f
            long r0 = r2.ag
            int r6 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r6 < 0) goto L6f
            long r0 = r0 + r4
            r2.ai = r0
            goto L73
        L6f:
            long r4 = r2.ah
            r2.ai = r4
        L73:
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.z()
            int r4 = r4 * 1000
            r2.L = r4
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.y()
            if (r4 != 0) goto L8a
            r3 = 1
        L8a:
            r2.M = r3
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.ui.BaseScreenATView.<init>(android.content.Context, com.tkay.core.common.f.i, com.tkay.core.common.f.h, java.lang.String, int, int):void");
    }

    public void setListener(b.InterfaceC0396b interfaceC0396b) {
        this.E = interfaceC0396b;
    }

    public boolean isShowEndCard() {
        return this.u;
    }

    public void setIsShowEndCard(boolean z) {
        this.u = z;
    }

    public boolean hasReward() {
        return this.v;
    }

    public void setHasReward(boolean z) {
        this.v = z;
    }

    public void setHideFeedbackButton(boolean z) {
        this.ae = z;
    }

    public boolean needHideFeedbackButton() {
        return this.ae;
    }

    public boolean isVideoMute() {
        return this.M;
    }

    public void setVideoMute(boolean z) {
        this.M = z;
    }

    public long getShowBannerTime() {
        return this.ag;
    }

    public void setShowBannerTime(long j) {
        this.ag = j;
    }

    public long getHideBannerTime() {
        return this.ai;
    }

    public void setHideBannerTime(long j) {
        this.ai = j;
    }

    public boolean getHasPerformClick() {
        return this.an;
    }

    public void setHasPerformClick(boolean z) {
        this.an = z;
    }

    public void setCloseButtonScaleFactor(float f) {
        this.N = f;
        CloseImageView closeImageView = this.I;
        if (closeImageView != null) {
            closeImageView.setClickAreaScaleFactor(f);
        }
    }

    public float getCloseButtonScaleFactor() {
        return this.N;
    }

    protected void b() {
        this.w = (RelativeLayout) findViewById(h.a(getContext(), "myoffer_rl_root", "id"));
        this.x = (PlayerView) findViewById(h.a(getContext(), "myoffer_player_view_id", "id"));
        this.y = (PanelView) findViewById(h.a(getContext(), "myoffer_banner_view_id", "id"));
        this.H = (CountDownView) findViewById(h.a(getContext(), "myoffer_count_down_view_id", "id"));
        this.K = (MuteImageView) findViewById(h.a(getContext(), "myoffer_btn_mute_id", "id"));
        this.I = (CloseImageView) findViewById(h.a(getContext(), "myoffer_btn_close_id", "id"));
        this.J = (ViewGroup) findViewById(h.a(getContext(), "myoffer_feedback_ll_id", "id"));
        CountDownView countDownView = this.H;
        if (countDownView != null) {
            countDownView.setVisibility(4);
        }
        z();
        CloseImageView closeImageView = this.I;
        if (closeImageView != null) {
            this.N = a(closeImageView, this.c.m.h());
            this.I.setVisibility(8);
            this.I.setOnClickListener(new AnonymousClass7());
        }
        ViewGroup viewGroup = this.J;
        if (viewGroup != null) {
            viewGroup.setVisibility(8);
            this.J.setOnClickListener(new AnonymousClass8());
        }
        v();
    }

    public void init() {
        b();
        this.F = c(this.Q);
        if (this.u) {
            J();
            p();
            return;
        }
        int i = this.f5737a;
        if (1 == i) {
            if (this.d.E()) {
                J();
                c();
                K();
                return;
            } else {
                a(f.a(f.k, f.D));
                b.InterfaceC0396b interfaceC0396b = this.E;
                if (interfaceC0396b != null) {
                    interfaceC0396b.e();
                    return;
                }
                return;
            }
        }
        if (3 == i) {
            if (this.d.C() == 1 && this.d.E()) {
                J();
                c();
                K();
            } else {
                J();
                p();
                if (n()) {
                    return;
                }
                h();
            }
        }
    }

    private void K() {
        if (n() && !this.c.m.V() && this.z == null) {
            this.z = b(true);
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.tkay.basead.ui.BaseATView
    public final synchronized void h() {
        if (this.c.m.R() > 0) {
            m.a().a(this.V, this.c.m.R());
        } else {
            super.h();
        }
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected final i i() {
        i iVar = new i(this.c.d, this.q);
        iVar.e = getWidth();
        iVar.f = getHeight();
        PlayerView playerView = this.x;
        if (playerView != null && playerView.hasVideo()) {
            iVar.h = fillVideoEndRecord(true);
        }
        return iVar;
    }

    private void L() {
        DisplayMetrics displayMetrics = getResources().getDisplayMetrics();
        this.C = displayMetrics.widthPixels;
        this.D = displayMetrics.heightPixels;
    }

    protected void c() {
        this.x.setListener(new PlayerView.a() { // from class: com.tkay.basead.ui.BaseScreenATView.9
            @Override // com.tkay.basead.ui.PlayerView.a
            public final void a() {
                String str = BaseScreenATView.TAG;
                BaseScreenATView.this.D();
                BaseScreenATView.this.aj = System.currentTimeMillis();
                BaseScreenATView.this.h();
                BaseScreenATView.b(BaseScreenATView.this);
            }

            @Override // com.tkay.basead.ui.PlayerView.a
            public final void a(int i) {
                BaseScreenATView.this.D();
                BaseScreenATView.a(BaseScreenATView.this, i);
                BaseScreenATView.b(BaseScreenATView.this, i);
                if (BaseScreenATView.this.H != null && BaseScreenATView.this.H.isShown()) {
                    BaseScreenATView.this.H.refresh(i);
                }
                if (BaseScreenATView.this.L >= 0 && i >= BaseScreenATView.this.L) {
                    BaseScreenATView.this.G();
                }
                if (i < BaseScreenATView.this.c.m.e() || BaseScreenATView.this.v) {
                    return;
                }
                BaseScreenATView.this.G();
                BaseScreenATView.this.v = true;
                if (BaseScreenATView.this.E != null) {
                    BaseScreenATView.this.E.d();
                }
            }

            @Override // com.tkay.basead.ui.PlayerView.a
            public final void b() {
                String str = BaseScreenATView.TAG;
            }

            @Override // com.tkay.basead.ui.PlayerView.a
            public final void c() {
                String str = BaseScreenATView.TAG;
                i iVarI = BaseScreenATView.this.i();
                com.tkay.basead.a.b.a(5, BaseScreenATView.this.d, iVarI);
                com.tkay.basead.a.b.a(31, BaseScreenATView.this.d, iVarI);
                if (BaseScreenATView.this.E != null) {
                    BaseScreenATView.this.E.c();
                }
                if (!BaseScreenATView.this.v) {
                    BaseScreenATView.this.v = true;
                    if (BaseScreenATView.this.E != null) {
                        BaseScreenATView.this.E.d();
                    }
                }
                if (BaseScreenATView.this.c.m.J() == 1) {
                    BaseScreenATView.this.p();
                    BaseScreenATView.this.l();
                    return;
                }
                BaseScreenATView.this.l();
                if (BaseScreenATView.this.I != null) {
                    BaseScreenATView baseScreenATView = BaseScreenATView.this;
                    baseScreenATView.a(baseScreenATView.I);
                }
                BaseScreenATView.this.C();
            }

            @Override // com.tkay.basead.ui.PlayerView.a
            public final void a(e eVar) {
                BaseScreenATView.this.p();
                i iVarI = BaseScreenATView.this.i();
                iVarI.h = BaseScreenATView.this.fillVideoEndRecord(false);
                com.tkay.basead.a.b.a(17, BaseScreenATView.this.d, iVarI);
                BaseScreenATView.this.a(eVar);
                if (BaseScreenATView.this.v || BaseScreenATView.this.c.m.f() != 1) {
                    return;
                }
                BaseScreenATView.this.v = true;
                if (BaseScreenATView.this.E != null) {
                    BaseScreenATView.this.E.d();
                }
            }

            @Override // com.tkay.basead.ui.PlayerView.a
            public final void b(int i) {
                i iVarI = BaseScreenATView.this.i();
                if (i == 25) {
                    String str = BaseScreenATView.TAG;
                    com.tkay.basead.a.b.a(2, BaseScreenATView.this.d, iVarI);
                } else if (i == 50) {
                    String str2 = BaseScreenATView.TAG;
                    com.tkay.basead.a.b.a(3, BaseScreenATView.this.d, iVarI);
                } else {
                    if (i != 75) {
                        return;
                    }
                    String str3 = BaseScreenATView.TAG;
                    com.tkay.basead.a.b.a(4, BaseScreenATView.this.d, iVarI);
                }
            }

            @Override // com.tkay.basead.ui.PlayerView.a
            public final void d() {
                BaseScreenATView baseScreenATView = BaseScreenATView.this;
                BaseScreenATView.c(baseScreenATView, baseScreenATView.x.getCurrentPosition());
                i iVarI = BaseScreenATView.this.i();
                iVarI.g = BaseScreenATView.this.j();
                com.tkay.basead.a.b.a(14, BaseScreenATView.this.d, iVarI);
                if (BaseScreenATView.this.c.m == null || BaseScreenATView.this.c.m.u() != 1) {
                    return;
                }
                BaseScreenATView.this.b(1);
            }

            @Override // com.tkay.basead.ui.PlayerView.a
            public final void e() {
                String str = BaseScreenATView.TAG;
                i iVarI = BaseScreenATView.this.i();
                iVarI.g = BaseScreenATView.this.j();
                com.tkay.basead.a.b.a(12, BaseScreenATView.this.d, iVarI);
            }

            @Override // com.tkay.basead.ui.PlayerView.a
            public final void f() {
                String str = BaseScreenATView.TAG;
                i iVarI = BaseScreenATView.this.i();
                iVarI.g = BaseScreenATView.this.j();
                com.tkay.basead.a.b.a(13, BaseScreenATView.this.d, iVarI);
            }

            @Override // com.tkay.basead.ui.PlayerView.a
            public final void c(int i) {
                BaseScreenATView.this.d(i);
                com.tkay.basead.a.b.a(35, BaseScreenATView.this.d, BaseScreenATView.this.i());
            }

            @Override // com.tkay.basead.ui.PlayerView.a
            public final void g() {
                new com.tkay.basead.a.b.f(BaseScreenATView.this.c.b, BaseScreenATView.this.d, BaseScreenATView.this.c.m).b();
            }
        });
        this.x.initMuteStatus(this.M);
        this.x.setVideoSize(this.O, this.P);
        this.x.setVideoRateConfig(this.d.k().S(), this.d.k().T());
        this.x.load(this.d.x(), false);
    }

    protected final void o() {
        BaseShakeView baseShakeView = this.R;
        if (baseShakeView != null) {
            baseShakeView.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.basead.ui.BaseScreenATView.10
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    BaseScreenATView.this.b(1);
                }
            });
            this.R.setOnShakeListener(new BaseShakeView.a() { // from class: com.tkay.basead.ui.BaseScreenATView.11
                @Override // com.tkay.basead.ui.BaseShakeView.a
                public final boolean a() {
                    if (!BaseScreenATView.this.x()) {
                        return false;
                    }
                    BaseScreenATView.this.b(4);
                    return true;
                }
            }, this.c.m);
        }
        BaseShakeView baseShakeView2 = this.S;
        if (baseShakeView2 != null) {
            baseShakeView2.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.basead.ui.BaseScreenATView.12
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    BaseScreenATView.this.b(1);
                }
            });
            this.S.setOnShakeListener(new BaseShakeView.a() { // from class: com.tkay.basead.ui.BaseScreenATView.13
                @Override // com.tkay.basead.ui.BaseShakeView.a
                public final boolean a() {
                    if (!BaseScreenATView.this.x()) {
                        return false;
                    }
                    BaseScreenATView.this.b(4);
                    return true;
                }
            }, this.c.m);
        }
    }

    protected final void p() {
        this.u = true;
        if (n()) {
            M();
        } else {
            N();
        }
        BaseEndCardView baseEndCardView = this.z;
        if (baseEndCardView != null) {
            baseEndCardView.postDelayed(new Runnable() { // from class: com.tkay.basead.ui.BaseScreenATView.14
                @Override // java.lang.Runnable
                public final void run() {
                    BaseScreenATView.this.G();
                }
            }, a(this.c.m));
        }
        com.tkay.basead.a.b.a(6, this.d, i());
    }

    private static int a(j jVar) {
        int iB;
        if (jVar == null || (iB = (int) (jVar.B() / 100.0f)) == 0) {
            return 0;
        }
        Random random = new Random();
        if (random.nextInt(100) > iB) {
            return 0;
        }
        int iC = jVar.C();
        int iD = jVar.D();
        if (iD <= 0) {
            return 0;
        }
        if (iC == iD) {
            return iC;
        }
        try {
            return random.nextInt(iD - iC) + iC;
        } catch (Throwable th) {
            th.printStackTrace();
            return 0;
        }
    }

    private BaseEndCardView b(boolean z) {
        MraidEndCardView mraidEndCardView = new MraidEndCardView(getContext(), this.d, this.c);
        mraidEndCardView.setEndCardListener(new MraidEndCardView.a() { // from class: com.tkay.basead.ui.BaseScreenATView.15
            @Override // com.tkay.basead.ui.MraidEndCardView.a
            public final void b() {
            }

            @Override // com.tkay.basead.ui.MraidEndCardView.a
            public final void a(String str) {
                String str2 = BaseScreenATView.TAG;
                BaseScreenATView.this.d.v(str);
                BaseScreenATView.this.b(1);
            }

            @Override // com.tkay.basead.ui.MraidEndCardView.a
            public final void a() {
                if (3 == BaseScreenATView.this.f5737a) {
                    if (BaseScreenATView.this.d.C() == 1 && BaseScreenATView.this.d.E()) {
                        return;
                    }
                    BaseScreenATView.this.h();
                }
            }
        });
        mraidEndCardView.init(z);
        return mraidEndCardView;
    }

    private void M() {
        if (this.z == null) {
            this.z = b(false);
        }
        H();
        I();
    }

    private void N() {
        int iQ = q();
        this.Q = iQ;
        final boolean zC = c(iQ);
        EndCardView endCardView = new EndCardView(getContext(), this.d, this.c);
        endCardView.setSize(this.C, this.D);
        endCardView.init(false, false, new EndCardView.a() { // from class: com.tkay.basead.ui.BaseScreenATView.16
            @Override // com.tkay.basead.ui.EndCardView.a
            public final void a() {
                String str = BaseScreenATView.TAG;
                BaseScreenATView.this.b(1);
            }

            @Override // com.tkay.basead.ui.EndCardView.a
            public final void b() {
                BaseScreenATView.this.I();
                if (zC) {
                    BaseScreenATView.this.E();
                }
            }
        });
        this.z = endCardView;
        H();
        PanelView panelView = this.y;
        if (panelView != null && panelView.getVisibility() == 0) {
            if (this.y.getCTAButton() != null && this.y.getCTAButton().getVisibility() == 0) {
                this.s = this.y.getCTAButton();
            } else {
                this.s = this.y;
            }
        }
        endCardView.load();
    }

    private void O() {
        s();
        if (this.ak == null) {
            this.ak = new c();
        }
        this.ak.a(getContext(), this.d, this.c, new AnonymousClass2());
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.BaseScreenATView$2, reason: invalid class name */
    final class AnonymousClass2 implements c.a {
        AnonymousClass2() {
        }

        @Override // com.tkay.basead.c.a
        public final void a() {
            BaseScreenATView.c(BaseScreenATView.this);
        }

        @Override // com.tkay.basead.c.a
        public final void b() {
            BaseScreenATView.this.r();
            BaseScreenATView.this.ak.b();
        }
    }

    private void P() {
        this.ae = true;
        ViewGroup viewGroup = this.J;
        if (viewGroup != null) {
            viewGroup.setVisibility(8);
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.tkay.basead.ui.BaseATView
    public void b(int i) {
        this.an = true;
        this.N = a(this.I, this.c.m.g());
        if (this.af || this.d == null) {
            return;
        }
        super.b(i);
    }

    private void Q() {
        if (this.A == null) {
            this.A = new b(this.w);
        }
        this.A.b();
    }

    private void R() {
        b bVar = this.A;
        if (bVar != null) {
            bVar.c();
        }
    }

    private void S() {
        com.tkay.basead.a.b.a(1, this.d, i());
        b.InterfaceC0396b interfaceC0396b = this.E;
        if (interfaceC0396b != null) {
            interfaceC0396b.b();
        }
    }

    protected final void a(e eVar) {
        b.InterfaceC0396b interfaceC0396b = this.E;
        if (interfaceC0396b != null) {
            interfaceC0396b.a(eVar);
        }
        k();
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected final void e() {
        com.tkay.basead.a.b.a(8, this.d, i());
        b.InterfaceC0396b interfaceC0396b = this.E;
        if (interfaceC0396b != null) {
            interfaceC0396b.a();
        }
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected final void a(int i) {
        b.InterfaceC0396b interfaceC0396b = this.E;
        if (interfaceC0396b != null) {
            interfaceC0396b.a(i);
        }
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected final void a(boolean z) {
        b.InterfaceC0396b interfaceC0396b = this.E;
        if (interfaceC0396b != null) {
            interfaceC0396b.a(z);
        }
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected final void f() {
        this.af = true;
        if (this.A == null) {
            this.A = new b(this.w);
        }
        this.A.b();
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected final void g() {
        this.af = false;
        post(new Runnable() { // from class: com.tkay.basead.ui.BaseScreenATView.3
            @Override // java.lang.Runnable
            public final void run() {
                BaseScreenATView.e(BaseScreenATView.this);
            }
        });
    }

    protected final void r() {
        this.am = true;
        try {
            if ((this.ak == null || !this.ak.a()) && this.x != null && this.x.hasVideo()) {
                if (!this.x.isPlaying()) {
                    this.aj = System.currentTimeMillis();
                    int currentPosition = this.x.getCurrentPosition();
                    this.B = currentPosition;
                    if (currentPosition != 0) {
                        com.tkay.basead.a.b.a(15, this.d, i());
                    }
                }
                this.x.start();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    protected final void s() {
        this.am = false;
        PlayerView playerView = this.x;
        if (playerView != null) {
            if (playerView.isPlaying()) {
                com.tkay.basead.a.b.a(11, this.d, i());
            }
            this.x.pause();
        }
    }

    public com.tkay.basead.c.j fillVideoEndRecord(boolean z) {
        com.tkay.basead.c.j jVar = new com.tkay.basead.c.j();
        jVar.l = this.t == 2 ? 4 : 1;
        jVar.r = 1;
        PlayerView playerView = this.x;
        jVar.f5619a = playerView != null ? playerView.getVideoLength() / 1000 : 0;
        jVar.b = this.B / 1000;
        PlayerView playerView2 = this.x;
        jVar.c = playerView2 != null ? playerView2.getCurrentPosition() / 1000 : 0;
        jVar.d = this.B == 0 ? 1 : 0;
        jVar.o = this.B == 0 ? 1 : 2;
        PlayerView playerView3 = this.x;
        jVar.e = (playerView3 == null || playerView3.getCurrentPosition() != this.x.getVideoLength()) ? 0 : 1;
        jVar.u = z ? 0 : 2;
        jVar.f = this.aj;
        jVar.g = System.currentTimeMillis();
        PlayerView playerView4 = this.x;
        jVar.h = playerView4 != null ? playerView4.getCurrentPosition() : 0;
        new StringBuilder("Video End Record:").append(jVar.toString());
        return jVar;
    }

    private void e(int i) {
        ab abVarX;
        Map<Integer, String[]> mapY;
        if (!(this.d instanceof z) || (abVarX = ((z) this.d).X()) == null || (mapY = abVarX.y()) == null || mapY.size() <= 0) {
            return;
        }
        if (this.W == null) {
            this.W = new ConcurrentHashMap<>();
        }
        int i2 = i / 1000;
        for (Integer num : mapY.keySet()) {
            if (this.W.get(num) == null || !this.W.get(num).booleanValue()) {
                if (i2 >= num.intValue()) {
                    this.W.put(num, Boolean.TRUE);
                    i iVarI = i();
                    iVarI.h.i = num.intValue();
                    com.tkay.basead.a.b.a(32, this.d, iVarI);
                }
            }
        }
    }

    private void f(int i) {
        long j = this.ai;
        if (j >= 0 && i > j) {
            F();
            return;
        }
        if (this.F) {
            long j2 = this.ag;
            if (j2 < 0 || i < j2) {
                return;
            }
            E();
        }
    }

    private void g(int i) {
        if (this.F && this.ag == -1) {
            long j = this.ah;
            if (j != 0) {
                long j2 = i;
                this.ag = j2;
                if (j > 0) {
                    this.ai = j2 + j;
                }
                E();
            }
        }
    }

    final void a(final BaseShakeView baseShakeView, final BaseShakeView baseShakeView2) {
        if (this.al) {
            return;
        }
        this.al = true;
        if (baseShakeView == null || !m()) {
            return;
        }
        baseShakeView.setVisibility(0);
        baseShakeView.postDelayed(new Runnable() { // from class: com.tkay.basead.ui.BaseScreenATView.4
            @Override // java.lang.Runnable
            public final void run() {
                if (BaseScreenATView.this.u) {
                    return;
                }
                try {
                    ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(1.0f, 0.2f);
                    valueAnimatorOfFloat.setDuration(500L);
                    valueAnimatorOfFloat.setRepeatCount(1);
                    valueAnimatorOfFloat.setRepeatMode(2);
                    valueAnimatorOfFloat.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.tkay.basead.ui.BaseScreenATView.4.1
                        @Override // android.animation.ValueAnimator.AnimatorUpdateListener
                        public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                            float fFloatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                            if (baseShakeView.getVisibility() == 0) {
                                baseShakeView.setAlpha(fFloatValue);
                            }
                            if (baseShakeView2 == null || baseShakeView2.getVisibility() != 0) {
                                return;
                            }
                            baseShakeView2.setAlpha(fFloatValue);
                        }
                    });
                    valueAnimatorOfFloat.addListener(new AnimatorListenerAdapter() { // from class: com.tkay.basead.ui.BaseScreenATView.4.2
                        @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
                        public final void onAnimationRepeat(Animator animator) {
                            super.onAnimationRepeat(animator);
                            baseShakeView.setVisibility(8);
                            if (baseShakeView2 == null || BaseScreenATView.this.u) {
                                return;
                            }
                            baseShakeView2.setAlpha(0.2f);
                            baseShakeView2.setVisibility(0);
                        }
                    });
                    valueAnimatorOfFloat.start();
                } catch (Throwable unused) {
                    baseShakeView.setVisibility(8);
                    if (baseShakeView2 == null || BaseScreenATView.this.u) {
                        return;
                    }
                    baseShakeView2.setVisibility(0);
                }
            }
        }, 3000L);
    }

    protected final void t() {
        destroy();
        m.a().c(this.V);
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected void destroy() {
        super.destroy();
        this.E = null;
        BaseEndCardView baseEndCardView = this.z;
        if (baseEndCardView != null) {
            baseEndCardView.a();
        }
    }

    protected void u() {
        String strU = this.d.u();
        if (!TextUtils.isEmpty(strU)) {
            com.tkay.basead.a.f.a();
            int[] iArrA = com.tkay.core.common.l.b.a(com.tkay.basead.a.f.a(1, strU));
            if (iArrA != null) {
                this.ac = iArrA[0];
                this.ad = iArrA[1];
            }
        }
        String strX = this.d.x();
        if (!TextUtils.isEmpty(strX)) {
            com.tkay.basead.a.f.a();
            g.a aVarA = g.a(com.tkay.basead.a.f.a(4, strX));
            if (aVarA != null) {
                this.aa = aVarA.f5576a;
                this.ab = aVarA.b;
            }
        } else if (!TextUtils.isEmpty(strU)) {
            this.aa = this.ac;
            this.ab = this.ad;
        }
        StringBuilder sb = new StringBuilder("mMaterialWidth: ");
        sb.append(this.aa);
        sb.append(", mMaterialHeight: ");
        sb.append(this.ab);
    }

    protected void v() {
        PanelView panelView = this.y;
        if (panelView != null) {
            panelView.setVisibility(4);
            this.y.init(this.d, this.c, this.t, m(), new PanelView.a() { // from class: com.tkay.basead.ui.BaseScreenATView.5
                @Override // com.tkay.basead.ui.PanelView.a
                public final void a() {
                    BaseScreenATView.this.b(1);
                }

                @Override // com.tkay.basead.ui.PanelView.a
                public final boolean b() {
                    if (!BaseScreenATView.this.x()) {
                        return false;
                    }
                    BaseScreenATView.this.b(4);
                    return true;
                }
            });
        }
        w();
    }

    protected final boolean x() {
        c cVar = this.ak;
        return (cVar == null || !cVar.a()) && this.am;
    }

    private void T() {
        CountDownView countDownView = this.H;
        if (countDownView != null) {
            countDownView.setVisibility(4);
        }
    }

    protected void z() {
        MuteImageView muteImageView = this.K;
        if (muteImageView == null) {
            return;
        }
        if (this.M) {
            muteImageView.setMute(true);
        } else {
            muteImageView.setMute(false);
        }
        this.K.setVisibility(4);
        this.K.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.basead.ui.BaseScreenATView.6
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (BaseScreenATView.this.x == null || BaseScreenATView.this.K == null) {
                    return;
                }
                if (!BaseScreenATView.this.x.isMute()) {
                    BaseScreenATView.this.M = true;
                    BaseScreenATView.this.K.setMute(true);
                    BaseScreenATView.this.x.setMute(true);
                } else {
                    BaseScreenATView.this.M = false;
                    BaseScreenATView.this.K.setMute(false);
                    BaseScreenATView.this.x.setMute(false);
                }
            }
        });
    }

    private void U() {
        CloseImageView closeImageView = this.I;
        if (closeImageView != null) {
            this.N = a(closeImageView, this.c.m.h());
            this.I.setVisibility(8);
            this.I.setOnClickListener(new AnonymousClass7());
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.BaseScreenATView$7, reason: invalid class name */
    final class AnonymousClass7 implements View.OnClickListener {
        AnonymousClass7() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            BaseScreenATView.this.A();
        }
    }

    protected final void B() {
        PlayerView playerView = this.x;
        if (playerView == null || !playerView.isPlaying()) {
            return;
        }
        this.x.stop();
        this.x.removeAllViews();
        i iVarI = i();
        iVarI.g = j();
        com.tkay.basead.a.b.a(16, this.d, iVarI);
    }

    protected final void C() {
        i iVarI = i();
        iVarI.g = j();
        com.tkay.basead.a.b.a(7, this.d, iVarI);
        b.InterfaceC0396b interfaceC0396b = this.E;
        if (interfaceC0396b != null) {
            interfaceC0396b.e();
        }
    }

    private void V() {
        ViewGroup viewGroup = this.J;
        if (viewGroup != null) {
            viewGroup.setVisibility(8);
            this.J.setOnClickListener(new AnonymousClass8());
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.BaseScreenATView$8, reason: invalid class name */
    final class AnonymousClass8 implements View.OnClickListener {
        AnonymousClass8() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            BaseScreenATView.f(BaseScreenATView.this);
        }
    }

    protected void D() {
        CountDownView countDownView = this.H;
        if (countDownView != null && !countDownView.isShown()) {
            this.H.setVisibility(0);
        }
        MuteImageView muteImageView = this.K;
        if (muteImageView == null || muteImageView.isShown()) {
            return;
        }
        this.K.setVisibility(0);
    }

    protected final void E() {
        if (this.y.getVisibility() != 0) {
            this.y.setVisibility(0);
        }
    }

    protected void F() {
        if (this.y.getVisibility() != 8) {
            this.y.setVisibility(8);
        }
    }

    private void W() {
        ViewGroup viewGroup;
        if (this.ae || (viewGroup = this.J) == null || viewGroup.isShown()) {
            return;
        }
        this.J.setVisibility(0);
    }

    protected void G() {
        ViewGroup viewGroup;
        CloseImageView closeImageView = this.I;
        if (closeImageView != null && !closeImageView.isShown()) {
            this.I.setVisibility(0);
            this.I.setClickAreaScaleFactor(this.N);
        }
        if (this.ae || (viewGroup = this.J) == null || viewGroup.isShown()) {
            return;
        }
        this.J.setVisibility(0);
    }

    protected final void d(int i) {
        CountDownView countDownView = this.H;
        if (countDownView != null) {
            countDownView.setDuration(i);
        }
    }

    @Override // com.tkay.basead.ui.BaseATView
    protected void d() {
        DisplayMetrics displayMetrics = getResources().getDisplayMetrics();
        this.C = displayMetrics.widthPixels;
        this.D = displayMetrics.heightPixels;
        u();
    }

    static /* synthetic */ void b(BaseScreenATView baseScreenATView) {
        com.tkay.basead.a.b.a(1, baseScreenATView.d, baseScreenATView.i());
        b.InterfaceC0396b interfaceC0396b = baseScreenATView.E;
        if (interfaceC0396b != null) {
            interfaceC0396b.b();
        }
    }

    static /* synthetic */ void a(BaseScreenATView baseScreenATView, int i) {
        ab abVarX;
        Map<Integer, String[]> mapY;
        if (!(baseScreenATView.d instanceof z) || (abVarX = ((z) baseScreenATView.d).X()) == null || (mapY = abVarX.y()) == null || mapY.size() <= 0) {
            return;
        }
        if (baseScreenATView.W == null) {
            baseScreenATView.W = new ConcurrentHashMap<>();
        }
        int i2 = i / 1000;
        for (Integer num : mapY.keySet()) {
            if (baseScreenATView.W.get(num) == null || !baseScreenATView.W.get(num).booleanValue()) {
                if (i2 >= num.intValue()) {
                    baseScreenATView.W.put(num, Boolean.TRUE);
                    i iVarI = baseScreenATView.i();
                    iVarI.h.i = num.intValue();
                    com.tkay.basead.a.b.a(32, baseScreenATView.d, iVarI);
                }
            }
        }
    }

    static /* synthetic */ void b(BaseScreenATView baseScreenATView, int i) {
        long j = baseScreenATView.ai;
        if (j >= 0 && i > j) {
            baseScreenATView.F();
            return;
        }
        if (baseScreenATView.F) {
            long j2 = baseScreenATView.ag;
            if (j2 < 0 || i < j2) {
                return;
            }
            baseScreenATView.E();
        }
    }

    static /* synthetic */ void c(BaseScreenATView baseScreenATView, int i) {
        if (baseScreenATView.F && baseScreenATView.ag == -1) {
            long j = baseScreenATView.ah;
            if (j != 0) {
                long j2 = i;
                baseScreenATView.ag = j2;
                if (j > 0) {
                    baseScreenATView.ai = j2 + j;
                }
                baseScreenATView.E();
            }
        }
    }

    static /* synthetic */ void c(BaseScreenATView baseScreenATView) {
        baseScreenATView.ae = true;
        ViewGroup viewGroup = baseScreenATView.J;
        if (viewGroup != null) {
            viewGroup.setVisibility(8);
        }
    }

    static /* synthetic */ void e(BaseScreenATView baseScreenATView) {
        b bVar = baseScreenATView.A;
        if (bVar != null) {
            bVar.c();
        }
    }

    static /* synthetic */ void f(BaseScreenATView baseScreenATView) {
        baseScreenATView.s();
        if (baseScreenATView.ak == null) {
            baseScreenATView.ak = new c();
        }
        baseScreenATView.ak.a(baseScreenATView.getContext(), baseScreenATView.d, baseScreenATView.c, baseScreenATView.new AnonymousClass2());
    }
}
