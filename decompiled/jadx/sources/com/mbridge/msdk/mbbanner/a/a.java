package com.mbridge.msdk.mbbanner.a;

import com.mbridge.msdk.c.d;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.same.report.e;
import com.mbridge.msdk.foundation.tools.am;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbbanner.common.a.b;
import com.mbridge.msdk.mbbanner.common.c.c;
import com.mbridge.msdk.out.BannerAdListener;
import com.mbridge.msdk.out.BannerSize;
import com.mbridge.msdk.out.MBBannerView;
import com.mbridge.msdk.out.MBridgeIds;
import java.util.List;

/* JADX INFO: compiled from: BannerController.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f3601a = "BannerController";
    private String b;
    private String c;
    private MBridgeIds d;
    private boolean e;
    private int f;
    private MBBannerView g;
    private int h;
    private int i;
    private int j;
    private BannerAdListener l;
    private CampaignUnit m;
    private c n;
    private d o;
    private com.mbridge.msdk.c.c p;
    private boolean q;
    private boolean r;
    private boolean s;
    private boolean t;
    private boolean u;
    private int k = -1;
    private com.mbridge.msdk.mbbanner.common.b.c v = new com.mbridge.msdk.mbbanner.common.b.c() { // from class: com.mbridge.msdk.mbbanner.a.a.1
        @Override // com.mbridge.msdk.mbbanner.common.b.c
        public final void a(List<CampaignEx> list) {
            if (a.this.l != null) {
                a.this.l.onLoadSuccessed(a.this.d);
            }
            z.d(a.f3601a, "onShowSuccessed:");
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.c
        public final void a(CampaignEx campaignEx, boolean z) {
            a.this.c();
            if (a.this.l == null || z) {
                return;
            }
            a.this.l.onLogImpression(a.this.d);
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.c
        public final void a(String str) {
            a.this.b(str);
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.c
        public final void a() {
            if (a.this.l != null) {
                a.this.l.onClick(a.this.d);
            }
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.c
        public final void b() {
            if (a.this.l != null) {
                a.this.l.onLeaveApp(a.this.d);
            }
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.c
        public final void c() {
            if (a.this.l != null) {
                a.this.l.showFullScreen(a.this.d);
                a.this.u = true;
                com.mbridge.msdk.mbbanner.common.c.a.a().a(2, a.this.c, a.this.b, null, null);
            }
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.c
        public final void d() {
            if (a.this.l != null) {
                a.this.l.closeFullScreen(a.this.d);
                a.this.u = false;
                com.mbridge.msdk.mbbanner.common.c.a.a().a(3, a.this.c, a.this.b, new b(a.this.i + "x" + a.this.h, a.this.j * 1000), a.this.w);
            }
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.c
        public final void e() {
            if (a.this.l != null) {
                a.this.l.onCloseBanner(a.this.d);
            }
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.c
        public final void a(boolean z) {
            if (z) {
                com.mbridge.msdk.mbbanner.common.c.a.a().a(2, a.this.c, a.this.b, null, null);
                return;
            }
            com.mbridge.msdk.mbbanner.common.c.a.a().a(3, a.this.c, a.this.b, new b(a.this.i + "x" + a.this.h, a.this.j * 1000), a.this.w);
        }
    };
    private com.mbridge.msdk.mbbanner.common.b.b w = new com.mbridge.msdk.mbbanner.common.b.b() { // from class: com.mbridge.msdk.mbbanner.a.a.2
        @Override // com.mbridge.msdk.mbbanner.common.b.b
        public final void a(String str, CampaignUnit campaignUnit, boolean z) {
            a.this.m = campaignUnit;
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.b
        public final void a(String str, String str2, boolean z) {
            if (a.this.l != null) {
                a.this.l.onLoadFailed(a.this.d, str2);
            }
            z.d(a.f3601a, "onCampaignFail:" + str2);
            a.this.c();
            e.a(com.mbridge.msdk.foundation.controller.a.f().j(), str2, a.this.b, z);
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.b
        public final void a(String str, boolean z) {
            if (a.this.m != null) {
                e.a(com.mbridge.msdk.foundation.controller.a.f().j(), a.this.m.getAds(), a.this.b, z);
            }
            if (a.this.g != null) {
                a.this.t = true;
                a.this.h();
            }
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.b
        public final void b(String str, boolean z) {
            if (a.this.l != null) {
                a.this.l.onLoadFailed(a.this.d, com.tkay.expressad.mbbanner.a.a.c);
            }
            z.d(a.f3601a, "onResourceFail:");
            a.this.c();
            e.a(com.mbridge.msdk.foundation.controller.a.f().j(), com.tkay.expressad.mbbanner.a.a.c, a.this.b, z);
        }
    };

    private int b(int i) {
        if (i <= 0) {
            return i;
        }
        if (i < 10) {
            return 10;
        }
        if (i > 180) {
            return 180;
        }
        return i;
    }

    public final String a() {
        CampaignUnit campaignUnit = this.m;
        return (campaignUnit == null || campaignUnit.getRequestId() == null) ? "" : this.m.getRequestId();
    }

    public a(MBBannerView mBBannerView, BannerSize bannerSize, String str, String str2) {
        this.g = mBBannerView;
        if (bannerSize != null) {
            this.h = bannerSize.getHeight();
            this.i = bannerSize.getWidth();
        }
        this.b = str2;
        this.c = str;
        this.d = new MBridgeIds(this.c, this.b);
        String strK = com.mbridge.msdk.foundation.controller.a.f().k();
        String strL = com.mbridge.msdk.foundation.controller.a.f().l();
        if (this.p == null) {
            this.p = new com.mbridge.msdk.c.c();
        }
        this.p.a(com.mbridge.msdk.foundation.controller.a.f().j(), strK, strL, this.b);
        g();
    }

    public final void a(BannerSize bannerSize) {
        if (bannerSize != null) {
            this.h = bannerSize.getHeight();
            this.i = bannerSize.getWidth();
        }
    }

    public final void a(int i) {
        int iB = b(i);
        this.k = iB;
        this.j = iB;
    }

    public final void a(boolean z) {
        this.e = z;
        this.f = z ? 1 : 2;
    }

    private void g() {
        d dVarE = com.mbridge.msdk.c.b.a().e(com.mbridge.msdk.foundation.controller.a.f().k(), this.b);
        this.o = dVarE;
        if (dVarE == null) {
            this.o = d.d(this.b);
        }
        if (this.k == -1) {
            this.j = b(this.o.b());
        }
        if (this.f == 0) {
            boolean z = this.o.c() == 1;
            this.e = z;
            c cVar = this.n;
            if (cVar != null) {
                cVar.a(z);
            }
        }
    }

    public final void a(String str) {
        if (this.h < 1 || this.i < 1) {
            BannerAdListener bannerAdListener = this.l;
            if (bannerAdListener != null) {
                bannerAdListener.onLoadFailed(this.d, com.tkay.expressad.mbbanner.a.a.d);
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
            BannerAdListener bannerAdListener2 = this.l;
            if (bannerAdListener2 != null) {
                bannerAdListener2.onLoadFailed(this.d, com.tkay.expressad.mbbanner.a.a.e);
                return;
            }
            return;
        }
        b bVar = new b(this.i + "x" + this.h, this.j * 1000);
        bVar.a(str);
        bVar.b(this.c);
        com.mbridge.msdk.mbbanner.common.c.a.a().a(this.c, this.b, bVar, this.w);
        com.mbridge.msdk.mbbanner.common.c.a.a().a(1, this.c, this.b, bVar, this.w);
    }

    public final void a(BannerAdListener bannerAdListener) {
        this.l = bannerAdListener;
    }

    public final void b() {
        this.s = true;
        if (this.l != null) {
            this.l = null;
        }
        if (this.w != null) {
            this.w = null;
        }
        if (this.v != null) {
            this.v = null;
        }
        if (this.g != null) {
            this.g = null;
        }
        com.mbridge.msdk.mbbanner.common.c.a.a().a(4, this.c, this.b, null, null);
        com.mbridge.msdk.mbbanner.common.c.a.a().a(this.b);
        com.mbridge.msdk.mbbanner.common.c.a.a().b();
        c cVar = this.n;
        if (cVar != null) {
            cVar.a();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void h() {
        if (this.s || !this.t) {
            return;
        }
        if (this.m != null) {
            if (this.n == null) {
                this.n = new c(this.g, this.v, this.c, this.b, this.e, this.o);
            }
            this.n.b(this.q);
            this.n.c(this.r);
            this.n.a(this.e, this.f);
            this.n.a(this.m);
        } else {
            b(com.tkay.expressad.mbbanner.a.a.h);
        }
        this.t = false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(String str) {
        BannerAdListener bannerAdListener = this.l;
        if (bannerAdListener != null) {
            bannerAdListener.onLoadFailed(this.d, str);
        }
        z.d(f3601a, "showFailed:" + str);
        c();
    }

    public final void c() {
        if (this.s) {
            return;
        }
        i();
        g();
        b bVar = new b(this.i + "x" + this.h, this.j * 1000);
        bVar.b(this.c);
        com.mbridge.msdk.mbbanner.common.c.a.a().b(this.c, this.b, bVar, this.w);
    }

    public final void b(boolean z) {
        this.q = z;
        j();
        h();
    }

    public final void c(boolean z) {
        this.r = z;
        j();
    }

    private void i() {
        MBBannerView mBBannerView = this.g;
        if (mBBannerView != null) {
            if (this.q && this.r && !this.u && !am.a(mBBannerView)) {
                com.mbridge.msdk.mbbanner.common.c.a.a().a(3, this.c, this.b, new b(this.i + "x" + this.h, this.j * 1000), this.w);
            } else {
                com.mbridge.msdk.mbbanner.common.c.a.a().a(2, this.c, this.b, null, null);
            }
            if (this.q) {
                return;
            }
            com.mbridge.msdk.mbbanner.common.c.a.a().a(4, this.c, this.b, null, null);
            com.mbridge.msdk.mbbanner.common.c.a.a().a(this.b);
        }
    }

    private void j() {
        i();
        c cVar = this.n;
        if (cVar != null) {
            cVar.b(this.q);
            this.n.c(this.r);
        }
    }

    public final void a(int i, int i2, int i3, int i4) {
        c cVar = this.n;
        if (cVar != null) {
            cVar.a(i, i2, i3, i4);
        }
    }

    public final void d() {
        com.mbridge.msdk.mbbanner.common.c.a.a().a(4, this.c, this.b, new b(this.i + "x" + this.h, this.j * 1000), this.w);
    }

    public final void e() {
        com.mbridge.msdk.mbbanner.common.c.a.a().a(3, this.c, this.b, new b(this.i + "x" + this.h, this.j * 1000), this.w);
    }
}
