package com.mbridge.msdk.advanced.c;

import android.app.Activity;
import android.text.TextUtils;
import android.util.Base64;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.webkit.WebView;
import com.mbridge.msdk.advanced.view.MBNativeAdvancedView;
import com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview;
import com.mbridge.msdk.advanced.view.MBOutNativeAdvancedViewGroup;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.am;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.NativeAdvancedAdListener;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import org.json.JSONObject;

/* JADX INFO: compiled from: NativeAdvancedProvider.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private static String b = "NativeAdvancedProvider";
    private MBOutNativeAdvancedViewGroup B;
    private boolean C;
    private boolean D;
    private boolean E;
    private String c;
    private String d;
    private MBridgeIds e;
    private com.mbridge.msdk.advanced.b.a f;
    private com.mbridge.msdk.advanced.b.b g;
    private b h;
    private NativeAdvancedAdListener i;
    private d j;
    private MBNativeAdvancedView k;
    private MBNativeAdvancedWebview l;
    private com.mbridge.msdk.advanced.view.a m;
    private com.mbridge.msdk.c.d n;
    private boolean o;
    private com.mbridge.msdk.c.c p;
    private JSONObject z;
    private int q = -1;
    private boolean r = false;
    private int s = 0;
    private boolean t = false;
    private int u = 0;
    private boolean v = false;
    private int w = 0;
    private int x = 0;
    private Object y = new Object();
    private boolean A = false;
    private boolean F = true;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public boolean f3084a = false;
    private ViewTreeObserver.OnScrollChangedListener G = new ViewTreeObserver.OnScrollChangedListener() { // from class: com.mbridge.msdk.advanced.c.c.1
        @Override // android.view.ViewTreeObserver.OnScrollChangedListener
        public final void onScrollChanged() {
            if (c.this.F) {
                c.this.F = false;
                if (c.this.B != null) {
                    c.this.B.postDelayed(new Runnable() { // from class: com.mbridge.msdk.advanced.c.c.1.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            c.this.F = true;
                        }
                    }, 1000L);
                }
                try {
                    c.this.h();
                } catch (Exception unused) {
                }
            }
        }
    };

    public final boolean a() {
        return this.o;
    }

    public final void a(boolean z) {
        this.o = z;
    }

    public final MBOutNativeAdvancedViewGroup b() {
        return this.B;
    }

    public c(String str, String str2, Activity activity) {
        com.mbridge.msdk.advanced.view.a aVar;
        ViewGroup.LayoutParams layoutParams;
        this.d = str;
        this.c = str2;
        this.e = new MBridgeIds(str, str2);
        if (this.g == null) {
            com.mbridge.msdk.advanced.b.b bVar = new com.mbridge.msdk.advanced.b.b(com.mbridge.msdk.foundation.controller.a.f().j(), this.d, this.c);
            this.g = bVar;
            bVar.a(this);
        }
        if (this.l == null) {
            try {
                this.l = new MBNativeAdvancedWebview(com.mbridge.msdk.foundation.controller.a.f().j());
            } catch (Exception unused) {
            }
            if (this.m == null) {
                try {
                    this.m = new com.mbridge.msdk.advanced.view.a(this.c, this.g.b(), this);
                } catch (Exception unused2) {
                }
            }
            MBNativeAdvancedWebview mBNativeAdvancedWebview = this.l;
            if (mBNativeAdvancedWebview != null && (aVar = this.m) != null) {
                mBNativeAdvancedWebview.setWebViewClient(aVar);
            }
        }
        if (this.k == null) {
            MBNativeAdvancedView mBNativeAdvancedView = new MBNativeAdvancedView(activity == null ? com.mbridge.msdk.foundation.controller.a.f().j() : activity);
            this.k = mBNativeAdvancedView;
            mBNativeAdvancedView.setAdvancedNativeWebview(this.l);
            MBNativeAdvancedWebview mBNativeAdvancedWebview2 = this.l;
            if (mBNativeAdvancedWebview2 != null && mBNativeAdvancedWebview2.getParent() == null) {
                this.k.addView(this.l, new ViewGroup.LayoutParams(-1, -1));
            }
        }
        if (this.B == null) {
            this.B = new MBOutNativeAdvancedViewGroup(com.mbridge.msdk.foundation.controller.a.f().j());
            if (this.w == 0 || this.x == 0) {
                layoutParams = new ViewGroup.LayoutParams(-1, -1);
            } else {
                layoutParams = new ViewGroup.LayoutParams(this.w, this.x);
            }
            this.B.setLayoutParams(layoutParams);
            this.B.setProvider(this);
            this.B.addView(this.k);
            this.B.getViewTreeObserver().addOnScrollChangedListener(this.G);
        }
        if (this.p == null) {
            this.p = new com.mbridge.msdk.c.c();
        }
        this.p.a(com.mbridge.msdk.foundation.controller.a.f().j(), com.mbridge.msdk.foundation.controller.a.f().k(), com.mbridge.msdk.foundation.controller.a.f().l(), this.c);
    }

    public final void a(JSONObject jSONObject) {
        this.A = true;
        b(jSONObject);
    }

    private void b(JSONObject jSONObject) {
        if (this.A) {
            this.z = jSONObject;
            MBNativeAdvancedWebview mBNativeAdvancedWebview = this.l;
            if (mBNativeAdvancedWebview == null || mBNativeAdvancedWebview.isDestoryed()) {
                return;
            }
            com.mbridge.msdk.advanced.js.b.a(this.l, NativeAdvancedJsUtils.d, "", jSONObject);
        }
    }

    private void f(int i) {
        MBNativeAdvancedWebview mBNativeAdvancedWebview = this.l;
        if (mBNativeAdvancedWebview == null || mBNativeAdvancedWebview.isDestoryed()) {
            return;
        }
        try {
            if (this.l != null) {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(NativeAdvancedJsUtils.m, i);
                h.a().a((WebView) this.l, NativeAdvancedJsUtils.l, Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            }
        } catch (Throwable th) {
            z.a(b, th.getMessage());
        }
    }

    public final int c() {
        return this.q;
    }

    public final void a(NativeAdvancedAdListener nativeAdvancedAdListener) {
        this.i = nativeAdvancedAdListener;
    }

    public final void a(String str) {
        if (TextUtils.isEmpty(str)) {
            NativeAdvancedAdListener nativeAdvancedAdListener = this.i;
            if (nativeAdvancedAdListener != null) {
                nativeAdvancedAdListener.onLoadFailed(this.e, "bid  token is null or empty");
                return;
            }
            return;
        }
        b(str);
    }

    public final void b(String str) {
        b bVar = new b(this, this.e);
        this.h = bVar;
        bVar.a(this.i);
        this.h.a(str);
        a(str, 2);
    }

    public final boolean c(String str) {
        return (this.B == null || com.mbridge.msdk.advanced.b.c.a(this.k, this.d, this.c, str, this.q, false, true) == null) ? false : true;
    }

    public final void a(int i) {
        this.r = true;
        g(i);
    }

    private void g(int i) {
        if (this.r) {
            this.q = i;
            MBNativeAdvancedWebview mBNativeAdvancedWebview = this.l;
            if (mBNativeAdvancedWebview == null || mBNativeAdvancedWebview.isDestoryed()) {
                return;
            }
            int i2 = this.q;
            if (i2 == 1) {
                this.g.a(true);
                com.mbridge.msdk.advanced.js.b.a(this.l, NativeAdvancedJsUtils.f, "", null);
            } else if (i2 == 0) {
                this.g.a(false);
                com.mbridge.msdk.advanced.js.b.a(this.l, NativeAdvancedJsUtils.g, "", null);
            }
        }
    }

    public final void b(int i) {
        this.t = true;
        h(i);
    }

    private void h(int i) {
        if (this.t) {
            this.s = i;
            MBNativeAdvancedWebview mBNativeAdvancedWebview = this.l;
            if (mBNativeAdvancedWebview == null || mBNativeAdvancedWebview.isDestoryed()) {
                return;
            }
            com.mbridge.msdk.advanced.js.b.a(this.l, NativeAdvancedJsUtils.h, "mute", Integer.valueOf(i));
        }
    }

    public final void c(int i) {
        this.v = true;
        i(i);
    }

    private void i(int i) {
        if (this.v) {
            this.u = i;
            MBNativeAdvancedWebview mBNativeAdvancedWebview = this.l;
            if (mBNativeAdvancedWebview == null || mBNativeAdvancedWebview.isDestoryed()) {
                return;
            }
            com.mbridge.msdk.advanced.js.b.a(this.l, NativeAdvancedJsUtils.j, NativeAdvancedJsUtils.k, Integer.valueOf(i));
        }
    }

    private void f() {
        CampaignEx campaignExA = com.mbridge.msdk.advanced.b.c.a(this.k, this.d, this.c, "", this.q, true, true);
        if (campaignExA != null) {
            if (this.n == null) {
                this.n = com.mbridge.msdk.c.b.a().d(com.mbridge.msdk.foundation.controller.a.f().k(), this.c);
            }
            this.j = new d(this, this.i, this.n.e(), campaignExA);
            z.a(b, "show start");
            if (this.w == 0 || this.x == 0) {
                d dVar = this.j;
                if (dVar != null) {
                    dVar.a(this.e, "width or height is 0  or width or height is too small");
                    return;
                }
                return;
            }
            a(campaignExA, false);
        }
    }

    final void a(CampaignEx campaignEx, boolean z) {
        g();
        MBOutNativeAdvancedViewGroup mBOutNativeAdvancedViewGroup = this.B;
        if (mBOutNativeAdvancedViewGroup == null || mBOutNativeAdvancedViewGroup.getParent() == null) {
            return;
        }
        if (campaignEx != null && z) {
            if (this.n == null) {
                this.n = com.mbridge.msdk.c.b.a().d(com.mbridge.msdk.foundation.controller.a.f().k(), this.c);
            }
            this.j = new d(this, this.i, this.n.e(), campaignEx);
        }
        if (this.g == null) {
            com.mbridge.msdk.advanced.b.b bVar = new com.mbridge.msdk.advanced.b.b(com.mbridge.msdk.foundation.controller.a.f().j(), this.d, this.c);
            this.g = bVar;
            bVar.a(this);
        }
        a(campaignEx);
    }

    public final String d() {
        if (this.f3084a) {
            com.mbridge.msdk.advanced.b.b bVar = this.g;
            return bVar != null ? bVar.a() : "";
        }
        com.mbridge.msdk.advanced.b.a aVar = this.f;
        return aVar != null ? aVar.a() : "";
    }

    private void a(CampaignEx campaignEx) {
        if (com.mbridge.msdk.advanced.b.c.a(this.k, campaignEx, this.d, this.c)) {
            this.g.a(this.j);
            z.d(b, "start show process");
            this.g.a(campaignEx, this.k, true);
        }
    }

    private void g() {
        g(this.q);
        h(this.s);
        i(this.u);
        b(this.z);
        f(v.D(com.mbridge.msdk.foundation.controller.a.f().j()));
    }

    private void a(String str, int i) {
        this.F = true;
        synchronized (this.y) {
            if (this.o) {
                if (this.h != null) {
                    this.h.a("current unit is loading", i);
                    this.o = true;
                }
                return;
            }
            this.o = true;
            if (this.w == 0 || this.x == 0) {
                b bVar = this.h;
                if (bVar != null) {
                    bVar.a("width or height is 0  or width or height is too small", i);
                    return;
                }
                return;
            }
            if (this.k == null) {
                b bVar2 = this.h;
                if (bVar2 != null) {
                    bVar2.a("view is not ready", i);
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
                b bVar3 = this.h;
                if (bVar3 != null) {
                    bVar3.a("WebView is not available", i);
                    return;
                }
                return;
            }
            this.k.clearResStateAndRemoveClose();
            com.mbridge.msdk.c.d dVarF = com.mbridge.msdk.c.b.a().f(com.mbridge.msdk.foundation.controller.a.f().k(), this.c);
            this.n = dVarF;
            if (dVarF == null) {
                this.n = com.mbridge.msdk.c.d.c(this.c);
            }
            if (this.f == null) {
                this.f = new com.mbridge.msdk.advanced.b.a(this.d, this.c, 0L);
            }
            b bVar4 = this.h;
            if (bVar4 != null) {
                bVar4.a(str);
                this.f.a(this.h);
            }
            this.k.resetLoadState();
            this.f.a(this.k);
            this.f.a(this.n);
            this.f.a(this.w, this.x);
            this.f.a(this.q);
            this.f.a(str, i);
        }
    }

    public final String d(String str) {
        com.mbridge.msdk.advanced.b.a aVar = this.f;
        return aVar != null ? aVar.a(str) : "";
    }

    public final void d(int i) {
        if (i == 1) {
            this.C = true;
        } else if (i == 2) {
            this.D = true;
        } else if (i == 3) {
            this.E = true;
        }
        try {
            h();
        } catch (Exception unused) {
        }
    }

    public final void e(int i) {
        if (i == 1) {
            this.C = false;
        } else if (i == 2) {
            this.D = false;
        } else if (i == 3) {
            this.E = false;
        }
        com.mbridge.msdk.advanced.b.b bVar = this.g;
        if (bVar != null) {
            bVar.e();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void h() {
        if (this.C && this.D && this.E && !am.a(this.k.getAdvancedNativeWebview()) && this.B.getAlpha() >= 0.5f && this.B.getVisibility() == 0) {
            com.mbridge.msdk.advanced.b.b bVar = this.g;
            if (bVar != null) {
                bVar.d();
            }
            f();
        }
    }

    public final void e() {
        if (this.i != null) {
            this.i = null;
        }
        if (this.h != null) {
            this.h = null;
        }
        if (this.j != null) {
            this.j = null;
        }
        com.mbridge.msdk.advanced.b.a aVar = this.f;
        if (aVar != null) {
            aVar.a((MBNativeAdvancedView) null);
            this.f.b();
        }
        com.mbridge.msdk.advanced.b.b bVar = this.g;
        if (bVar != null) {
            bVar.c();
        }
        MBNativeAdvancedView mBNativeAdvancedView = this.k;
        if (mBNativeAdvancedView != null) {
            mBNativeAdvancedView.destroy();
        }
        com.mbridge.msdk.advanced.common.b.b(this.d + this.c + d());
        com.mbridge.msdk.advanced.view.a aVar2 = this.m;
        if (aVar2 != null) {
            aVar2.a();
        }
        MBOutNativeAdvancedViewGroup mBOutNativeAdvancedViewGroup = this.B;
        if (mBOutNativeAdvancedViewGroup != null) {
            mBOutNativeAdvancedViewGroup.getViewTreeObserver().removeOnScrollChangedListener(this.G);
            this.B.removeAllViews();
            this.B = null;
        }
    }

    public final void a(int i, int i2) {
        if (i <= 0 || i2 <= 0) {
            return;
        }
        this.x = i;
        this.w = i2;
        this.B.setLayoutParams(new ViewGroup.LayoutParams(i2, i));
    }
}
