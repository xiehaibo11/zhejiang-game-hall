package com.mbridge.msdk.splash.d;

import android.R;
import android.app.Activity;
import android.text.TextUtils;
import android.util.Base64;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.an;
import com.mbridge.msdk.foundation.tools.m;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.out.MBSplashLoadListener;
import com.mbridge.msdk.out.MBSplashShowListener;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.ZoomOutTypeEnum;
import com.mbridge.msdk.splash.view.MBSplashPopView;
import com.mbridge.msdk.splash.view.MBSplashView;
import com.mbridge.msdk.splash.view.MBSplashWebview;

/* JADX INFO: compiled from: SplashProvider.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private static String b = "SplashProvider";
    private Activity A;
    private boolean B;
    private CampaignEx C;
    private MBSplashPopView D;
    private String c;
    private String d;
    private MBridgeIds e;
    private long g;
    private com.mbridge.msdk.splash.c.c h;
    private com.mbridge.msdk.splash.c.d i;
    private b j;
    private MBSplashShowListener k;
    private d l;
    private MBSplashView m;
    private MBSplashWebview n;
    private ViewGroup o;
    private View p;
    private com.mbridge.msdk.c.d q;
    private boolean r;
    private ViewGroup s;
    private com.mbridge.msdk.c.c t;
    private boolean u;
    private int f = 5;
    private int v = 1;
    private int w = v.x(com.mbridge.msdk.foundation.controller.a.f().j());
    private int x = v.y(com.mbridge.msdk.foundation.controller.a.f().j());
    private Object y = new Object();
    private Object z = new Object();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public boolean f4007a = false;
    private boolean E = false;

    public final void a(ViewGroup viewGroup) {
        this.s = viewGroup;
    }

    public final boolean a() {
        return this.r;
    }

    public final void a(boolean z) {
        this.r = z;
    }

    public final void a(int i) {
        this.v = i;
    }

    public c(Activity activity, String str, String str2) {
        this.d = str;
        this.c = str2;
        this.e = new MBridgeIds(str, str2);
        this.A = activity;
        if (this.i == null) {
            if (activity != null) {
                this.i = new com.mbridge.msdk.splash.c.d(activity, this.d, this.c);
            } else {
                this.i = new com.mbridge.msdk.splash.c.d(com.mbridge.msdk.foundation.controller.a.f().j(), this.d, this.c);
            }
        }
        if (this.n == null) {
            try {
                if (activity != null) {
                    this.n = new MBSplashWebview(activity);
                } else {
                    this.n = new MBSplashWebview(com.mbridge.msdk.foundation.controller.a.f().j());
                }
            } catch (Exception unused) {
            }
            MBSplashWebview mBSplashWebview = this.n;
            if (mBSplashWebview != null) {
                mBSplashWebview.setWebViewClient(new com.mbridge.msdk.splash.view.a(this.c, this.i.a()));
            }
        }
        if (this.m == null) {
            if (activity != null) {
                this.m = new MBSplashView(activity);
            } else {
                this.m = new MBSplashView(com.mbridge.msdk.foundation.controller.a.f().j());
            }
            this.m.setSplashWebview(this.n);
        }
        if (this.t == null) {
            this.t = new com.mbridge.msdk.c.c();
        }
        this.t.a(com.mbridge.msdk.foundation.controller.a.f().j(), com.mbridge.msdk.foundation.controller.a.f().k(), com.mbridge.msdk.foundation.controller.a.f().l(), this.c);
    }

    public final void a(long j) {
        this.g = j;
    }

    public final long b() {
        return this.g;
    }

    public final boolean c() {
        return this.u;
    }

    public final void a(MBSplashLoadListener mBSplashLoadListener) {
        if (this.j == null) {
            this.j = new b(this, this.e);
        }
        this.j.a(mBSplashLoadListener);
    }

    public final void a(MBSplashShowListener mBSplashShowListener) {
        this.k = mBSplashShowListener;
    }

    public final void a(String str) {
        if (TextUtils.isEmpty(str)) {
            b bVar = this.j;
            if (bVar != null) {
                bVar.a("token is null or empty", 1);
                return;
            }
            return;
        }
        a(str, 1);
    }

    public final void b(String str) {
        a(str, 1);
    }

    public final void a(String str, Activity activity) {
        ViewGroup viewGroupA = a(activity);
        if (viewGroupA == null) {
            b bVar = this.j;
            if (bVar != null) {
                bVar.a("activity is except,please check it", 1);
                return;
            }
            return;
        }
        a(str, viewGroupA);
    }

    public final void a(String str, ViewGroup viewGroup) {
        if (TextUtils.isEmpty(str)) {
            b bVar = this.j;
            if (bVar != null) {
                bVar.a("token is null or empty", 1);
                return;
            }
            return;
        }
        b(str, viewGroup);
    }

    public final void b(String str, Activity activity) {
        ViewGroup viewGroupA = a(activity);
        if (viewGroupA == null) {
            b bVar = this.j;
            if (bVar != null) {
                bVar.a("activity is except,please check it", 1);
                return;
            }
            return;
        }
        b(str, viewGroupA);
    }

    public final void b(String str, ViewGroup viewGroup) {
        this.o = viewGroup;
        MBSplashView mBSplashView = this.m;
        if (mBSplashView != null) {
            mBSplashView.setDevContainer(viewGroup);
        }
        a(str, 2);
    }

    public final boolean c(String str) {
        return com.mbridge.msdk.splash.c.b.a(this.m, this.d, this.c, str, this.u, this.f, false, true) != null;
    }

    public final void b(boolean z) {
        this.u = z;
    }

    public final void b(int i) {
        this.f = i;
    }

    public final int d() {
        return this.f;
    }

    public final void a(int i, int i2) {
        b(i2, i);
    }

    public final String e() {
        if (!this.f4007a) {
            com.mbridge.msdk.splash.c.c cVar = this.h;
            return cVar != null ? cVar.a() : "";
        }
        com.mbridge.msdk.splash.c.d dVar = this.i;
        return dVar != null ? dVar.b() : "";
    }

    public final void c(String str, Activity activity) {
        ViewGroup viewGroupA = a(activity);
        if (viewGroupA == null) {
            MBSplashShowListener mBSplashShowListener = this.k;
            if (mBSplashShowListener != null) {
                mBSplashShowListener.onShowFailed(this.e, "activity is except,please check it");
                return;
            }
            return;
        }
        c(str, viewGroupA);
    }

    public final void c(String str, ViewGroup viewGroup) {
        if (TextUtils.isEmpty(str)) {
            MBSplashShowListener mBSplashShowListener = this.k;
            if (mBSplashShowListener != null) {
                mBSplashShowListener.onShowFailed(this.e, "token is null or empty");
                return;
            }
            return;
        }
        d(str, viewGroup);
    }

    public final void d(String str, Activity activity) {
        ViewGroup viewGroupA = a(activity);
        if (viewGroupA == null) {
            MBSplashShowListener mBSplashShowListener = this.k;
            if (mBSplashShowListener != null) {
                mBSplashShowListener.onShowFailed(this.e, "activity is except,please check it");
                return;
            }
            return;
        }
        d(str, viewGroupA);
    }

    public final void d(String str, ViewGroup viewGroup) {
        this.o = viewGroup;
        MBSplashView mBSplashView = this.m;
        if (mBSplashView != null) {
            mBSplashView.setDevContainer(viewGroup);
        }
        CampaignEx campaignExA = com.mbridge.msdk.splash.c.b.a(this.m, this.d, this.c, str, this.u, this.f, true, false);
        if (campaignExA != null) {
            if (this.q == null) {
                this.q = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k(), this.c);
            }
            this.l = new d(this, this.k, this.q.e(), campaignExA);
            z.a(b, "show start");
            if (this.w == 0 || this.x == 0) {
                d dVar = this.l;
                if (dVar != null) {
                    dVar.a(this.e, "width or height is 0  or width or height is too small");
                    return;
                }
                return;
            }
            int i = this.f;
            if (i < 2 || i > 10) {
                d dVar2 = this.l;
                if (dVar2 != null) {
                    dVar2.a(this.e, "countDownTime must in 2 - 10 ,but now is " + this.f);
                    return;
                }
                return;
            }
            a(campaignExA, this.q.o(), false);
            return;
        }
        MBSplashShowListener mBSplashShowListener = this.k;
        if (mBSplashShowListener != null) {
            mBSplashShowListener.onShowFailed(this.e, "campaignEx is vali");
        }
    }

    final void a(CampaignEx campaignEx, int i, boolean z) {
        if (campaignEx != null && z) {
            if (this.q == null) {
                this.q = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k(), this.c);
            }
            this.l = new d(this, this.k, this.q.e(), campaignEx);
        }
        this.C = campaignEx;
        ViewGroup viewGroup = this.o;
        if (viewGroup == null) {
            d dVar = this.l;
            if (dVar != null) {
                dVar.a(this.e, "container is null");
                return;
            }
            return;
        }
        if (this.i == null) {
            this.i = new com.mbridge.msdk.splash.c.d(viewGroup.getContext(), this.d, this.c);
        }
        b(campaignEx, i, z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(final CampaignEx campaignEx, final int i, final boolean z) {
        if (!com.mbridge.msdk.splash.c.b.a(this.m, campaignEx)) {
            if (i > 0) {
                this.i.f3993a.postDelayed(new Runnable() { // from class: com.mbridge.msdk.splash.d.c.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        c.this.b(campaignEx, i - 1, z);
                    }
                }, 1L);
                return;
            }
            d dVar = this.l;
            if (dVar != null) {
                dVar.a(this.e, "campaignEx is not ready");
                return;
            }
            return;
        }
        d(true);
        ViewGroup.LayoutParams layoutParams = this.o.getLayoutParams();
        if (layoutParams == null) {
            layoutParams = new ViewGroup.LayoutParams(-1, -1);
        } else {
            layoutParams.height = -1;
            layoutParams.width = -1;
        }
        this.o.setLayoutParams(layoutParams);
        this.o.removeAllViews();
        this.i.a(this.f);
        this.i.a(this.s);
        this.i.a(this.l);
        z.d(b, "start show process");
        ViewGroup viewGroup = this.o;
        if (viewGroup != null) {
            viewGroup.removeAllViews();
            an.a(this.m);
            this.o.addView(this.m);
        }
        this.i.a(this.u);
        this.i.a(campaignEx, this.m);
    }

    private void a(String str, int i) throws Throwable {
        synchronized (this.y) {
            if (this.r) {
                if (this.j != null) {
                    this.j.a("current unit is loading", i);
                    this.r = true;
                }
                return;
            }
            this.r = true;
            int i2 = this.f;
            if (i2 < 2 || i2 > 10) {
                b bVar = this.j;
                if (bVar != null) {
                    bVar.a("countDownTime must in 2 - 10 ,but now is " + this.f, i);
                    return;
                }
                return;
            }
            if (this.w == 0 || this.x == 0) {
                b bVar2 = this.j;
                if (bVar2 != null) {
                    bVar2.a("width or height is 0  or width or height is too small", i);
                    return;
                }
                return;
            }
            boolean zA = false;
            try {
                zA = com.mbridge.msdk.mbjscommon.webEnvCheck.a.a(com.mbridge.msdk.foundation.controller.a.f().j());
            } catch (Exception unused) {
            }
            if (!zA) {
                b bVar3 = this.j;
                if (bVar3 != null) {
                    bVar3.a("WebView is not available", i);
                    return;
                }
                return;
            }
            this.m.clearResState();
            this.q = com.mbridge.msdk.c.b.a().c(com.mbridge.msdk.foundation.controller.a.f().k(), this.c);
            if (this.h == null) {
                this.h = new com.mbridge.msdk.splash.c.c(this.d, this.c, this.g * 1000);
            }
            b bVar4 = this.j;
            if (bVar4 != null) {
                bVar4.a(str);
                this.h.a(this.j);
            }
            this.m.resetLoadState();
            this.h.a(this.f);
            this.h.a(this.m);
            this.h.a(this.q);
            this.h.a(this.w, this.x);
            this.h.a(this.u);
            this.h.b(this.v);
            this.h.a(str, i);
        }
    }

    public final void a(View view, RelativeLayout.LayoutParams layoutParams) {
        this.p = view;
        if (view != null) {
            b(layoutParams.width, layoutParams.height);
            MBSplashView mBSplashView = this.m;
            if (mBSplashView != null) {
                mBSplashView.setIconVg(view, layoutParams);
            }
        }
    }

    public final void c(boolean z) {
        this.B = z;
    }

    public final ViewGroup a(ZoomOutTypeEnum zoomOutTypeEnum) {
        MBSplashPopView mBSplashPopView = new MBSplashPopView(com.mbridge.msdk.foundation.controller.a.f().j(), new MBSplashPopView.a(this.d, this.c, zoomOutTypeEnum.getIndex(), this.C), this.l);
        this.D = mBSplashPopView;
        return mBSplashPopView;
    }

    public final void f() {
        this.E = true;
        MBSplashPopView mBSplashPopView = this.D;
        if (mBSplashPopView != null) {
            mBSplashPopView.startCountDown();
        }
    }

    public final void g() {
        this.E = false;
        MBSplashShowListener mBSplashShowListener = this.k;
        if (mBSplashShowListener != null) {
            mBSplashShowListener.onZoomOutPlayFinish(new MBridgeIds(this.d, this.c));
        }
        MBSplashPopView mBSplashPopView = this.D;
        if (mBSplashPopView != null) {
            mBSplashPopView.release();
        }
    }

    private void b(int i, int i2) {
        int iX = v.x(com.mbridge.msdk.foundation.controller.a.f().j());
        int iY = v.y(com.mbridge.msdk.foundation.controller.a.f().j());
        int i3 = this.v;
        if (i3 == 1) {
            if (iY >= i2 * 4) {
                this.x = iY - i2;
                this.w = iX;
                return;
            } else {
                this.x = 0;
                this.w = 0;
                return;
            }
        }
        if (i3 == 2) {
            if (iX >= i * 4) {
                this.w = iX - i;
                this.x = iY;
            } else {
                this.x = 0;
                this.w = 0;
            }
        }
    }

    public final void h() {
        com.mbridge.msdk.splash.c.d dVar = this.i;
        if (dVar != null) {
            dVar.d();
        }
        MBSplashPopView mBSplashPopView = this.D;
        if (mBSplashPopView == null || !this.E) {
            return;
        }
        mBSplashPopView.reStartCountDown();
    }

    public final void d(final boolean z) {
        MBSplashWebview mBSplashWebview = this.n;
        if (mBSplashWebview != null) {
            mBSplashWebview.setOnTouchListener(new View.OnTouchListener() { // from class: com.mbridge.msdk.splash.d.c.2
                @Override // android.view.View.OnTouchListener
                public final boolean onTouch(View view, MotionEvent motionEvent) {
                    return !z;
                }
            });
        }
        MBSplashView mBSplashView = this.m;
        if (mBSplashView != null) {
            mBSplashView.setOnTouchListener(new View.OnTouchListener() { // from class: com.mbridge.msdk.splash.d.c.3
                @Override // android.view.View.OnTouchListener
                public final boolean onTouch(View view, MotionEvent motionEvent) {
                    return !z;
                }
            });
        }
    }

    private ViewGroup a(Activity activity) {
        Throwable th;
        ViewGroup viewGroup;
        if (activity != null && activity.isFinishing()) {
            activity = null;
        }
        if (activity == null) {
            z.c(b, "splash can't show because, activity is null or activity is finishing");
            return null;
        }
        try {
            viewGroup = (ViewGroup) activity.getWindow().getDecorView().findViewById(R.id.content);
        } catch (Throwable th2) {
            th = th2;
            viewGroup = null;
        }
        try {
            try {
                return (ViewGroup) viewGroup.getChildAt(0);
            } catch (Exception e) {
                e.printStackTrace();
                return viewGroup;
            }
        } catch (Throwable th3) {
            th = th3;
            th.printStackTrace();
            return viewGroup;
        }
    }

    public final void a(int i, int i2, int i3, int i4) {
        try {
            if (this.m != null) {
                this.m.setNotchPadding(i, i2, i3, i4);
            }
            if (this.n != null) {
                h.a().a((WebView) this.n, "oncutoutfetched", Base64.encodeToString(m.a(com.tkay.expressad.video.bt.a.c.f7167a, i, i2, i3, i4).getBytes(), 0));
            }
        } catch (Throwable th) {
            z.d(b, th.getMessage());
        }
    }

    public final void i() {
        com.mbridge.msdk.splash.c.d dVar = this.i;
        if (dVar != null) {
            dVar.e();
        }
        MBSplashPopView mBSplashPopView = this.D;
        if (mBSplashPopView == null || !this.E) {
            return;
        }
        mBSplashPopView.pauseCountDown();
    }

    public final void j() {
        this.C = null;
        if (this.k != null) {
            this.k = null;
        }
        if (this.j != null) {
            this.j = null;
        }
        if (this.l != null) {
            this.l = null;
        }
        com.mbridge.msdk.splash.c.c cVar = this.h;
        if (cVar != null) {
            cVar.b();
        }
        com.mbridge.msdk.splash.c.d dVar = this.i;
        if (dVar != null) {
            dVar.c();
        }
        if (this.A != null) {
            this.A = null;
        }
    }
}
