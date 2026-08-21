package com.tkay.basead.ui;

import android.app.Activity;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import android.view.KeyEvent;
import android.view.ViewGroup;
import com.tkay.basead.c.e;
import com.tkay.basead.c.f;
import com.tkay.basead.e.b;
import com.tkay.core.api.BaseAd;
import com.tkay.core.basead.a;
import com.tkay.core.common.a.j;
import com.tkay.core.common.b;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.x;

/* JADX INFO: loaded from: classes3.dex */
public class BaseATActivity extends Activity {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5724a = BaseATActivity.class.getSimpleName();
    boolean b;
    x c;
    long d = 0;
    long e = 0;
    float f = 0.0f;
    boolean g = false;
    b.a h = new b.a() { // from class: com.tkay.basead.ui.BaseATActivity.1
        @Override // com.tkay.core.common.b.a
        public final void a(Object obj) {
            if (!(obj instanceof x) || BaseATActivity.this.k == null) {
                return;
            }
            x xVar = (x) obj;
            if (xVar.a().B().equals(BaseATActivity.this.k.B())) {
                if (BaseATActivity.this.b) {
                    xVar.a(BaseATActivity.this);
                } else {
                    BaseATActivity.this.c = xVar;
                }
            }
        }
    };
    private BaseScreenATView i;
    private i j;
    private h k;
    private String l;
    private b.InterfaceC0396b m;
    private String n;
    private int o;
    private int p;
    private boolean q;
    private boolean r;
    private boolean s;
    private boolean t;
    private boolean u;
    private BaseAd v;

    /* JADX WARN: Removed duplicated region for block: B:7:0x0016  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static void a(android.app.Activity r4, com.tkay.core.basead.b.a r5) {
        /*
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            if (r4 == 0) goto L16
            boolean r2 = r4.isFinishing()
            if (r2 != 0) goto L16
            goto L1e
        L16:
            java.lang.String r4 = "tkay_BaseATActivity"
            java.lang.String r2 = "Activity is null"
            android.util.Log.i(r4, r2)
            r4 = r1
        L1e:
            int r1 = r5.f5983a
            com.tkay.core.common.f.i r2 = r5.h
            boolean r1 = a(r1, r2)
            int r2 = r5.e
            r3 = 2
            if (r2 != r3) goto L39
            if (r1 == 0) goto L33
            java.lang.Class<com.tkay.basead.ui.ATLandscapeTranslucentActivity> r1 = com.tkay.basead.ui.ATLandscapeTranslucentActivity.class
            r0.setClass(r4, r1)
            goto L46
        L33:
            java.lang.Class<com.tkay.basead.ui.ATLandscapeActivity> r1 = com.tkay.basead.ui.ATLandscapeActivity.class
            r0.setClass(r4, r1)
            goto L46
        L39:
            if (r1 == 0) goto L41
            java.lang.Class<com.tkay.basead.ui.ATPortraitTranslucentActivity> r1 = com.tkay.basead.ui.ATPortraitTranslucentActivity.class
            r0.setClass(r4, r1)
            goto L46
        L41:
            java.lang.Class<com.tkay.basead.ui.ATPortraitActivity> r1 = com.tkay.basead.ui.ATPortraitActivity.class
            r0.setClass(r4, r1)
        L46:
            java.lang.String r1 = r5.b
            java.lang.String r2 = "extra_scenario"
            r0.putExtra(r2, r1)
            int r1 = r5.f5983a
            java.lang.String r2 = "extra_ad_format"
            r0.putExtra(r2, r1)
            com.tkay.core.common.f.h r1 = r5.c
            java.lang.String r2 = "extra_offer_ad"
            r0.putExtra(r2, r1)
            java.lang.String r1 = r5.d
            java.lang.String r2 = "extra_event_id"
            r0.putExtra(r2, r1)
            com.tkay.core.common.f.i r1 = r5.h
            java.lang.String r2 = "extra_request_info"
            r0.putExtra(r2, r1)
            boolean r1 = r4 instanceof android.app.Activity
            if (r1 != 0) goto L72
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
        L72:
            r4.startActivity(r0)     // Catch: java.lang.Throwable -> L76
            return
        L76:
            r4 = move-exception
            com.tkay.basead.e.b r0 = com.tkay.basead.e.b.a()
            java.lang.String r5 = r5.d
            com.tkay.basead.e.b$b r5 = r0.a(r5)
            if (r5 == 0) goto L90
            java.lang.String r4 = r4.getMessage()
            java.lang.String r0 = "10000"
            com.tkay.basead.c.e r4 = com.tkay.basead.c.f.a(r0, r4)
            r5.a(r4)
        L90:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.ui.BaseATActivity.a(android.app.Activity, com.tkay.core.basead.b.a):void");
    }

    private void a() {
        Intent intent = getIntent();
        try {
            if (intent != null) {
                this.n = intent.getStringExtra("extra_scenario");
                this.o = intent.getIntExtra(a.C0409a.b, 1);
                this.k = (h) intent.getSerializableExtra(a.C0409a.c);
                this.j = (i) intent.getSerializableExtra(a.C0409a.e);
                this.l = intent.getStringExtra(a.C0409a.d);
                this.u = a(this.o, this.j);
                return;
            }
            Log.e("tkay", f5724a + " Intent is null.");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static boolean a(int i, i iVar) {
        if (iVar == null || iVar.m == null || i != 3) {
            return false;
        }
        return TextUtils.equals("2", iVar.m.E());
    }

    private BaseScreenATView b() {
        if (this.o == 3) {
            if (this.v != null) {
                return new ThirdPartyFullScreenATView(this, this.j, this.k, this.n, this.o, this.p, this.v);
            }
            if (this.u) {
                return new HalfScreenATView(this, this.j, this.k, this.n, this.o, this.p);
            }
            return new FullScreenATView(this, this.j, this.k, this.n, this.o, this.p);
        }
        return new FullScreenATView(this, this.j, this.k, this.n, this.o, this.p);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        BaseScreenATView fullScreenATView;
        super.onCreate(bundle);
        if (m.a().f() == null) {
            m.a().a(getApplicationContext());
        }
        if (this instanceof ATLandscapeActivity) {
            this.p = 2;
        } else {
            this.p = 1;
        }
        Intent intent = getIntent();
        try {
            if (intent != null) {
                this.n = intent.getStringExtra("extra_scenario");
                this.o = intent.getIntExtra(a.C0409a.b, 1);
                this.k = (h) intent.getSerializableExtra(a.C0409a.c);
                this.j = (i) intent.getSerializableExtra(a.C0409a.e);
                this.l = intent.getStringExtra(a.C0409a.d);
                this.u = a(this.o, this.j);
            } else {
                Log.e("tkay", f5724a + " Intent is null.");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        this.m = com.tkay.basead.e.b.a().a(this.l);
        this.v = com.tkay.basead.d.i.a().a(this.l);
        i iVar = this.j;
        if (iVar == null || iVar.m == null) {
            Log.e("tkay", f5724a + "Start Screen Ad Error.");
            try {
                if (this.m != null) {
                    this.m.a(f.a(f.k, f5724a + "Start FullScreen Ad Error."));
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
            finish();
            return;
        }
        if (this.k == null) {
            Log.e("tkay", f5724a + " onCreate: OfferAd = null");
            try {
                if (this.m != null) {
                    this.m.a(f.a(f.k, f5724a + " onCreate: OfferAd = null"));
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
            finish();
            return;
        }
        com.tkay.core.common.b.a().a("1", this.h);
        if (this.o == 3) {
            if (this.v != null) {
                fullScreenATView = new ThirdPartyFullScreenATView(this, this.j, this.k, this.n, this.o, this.p, this.v);
            } else if (this.u) {
                fullScreenATView = new HalfScreenATView(this, this.j, this.k, this.n, this.o, this.p);
            } else {
                fullScreenATView = new FullScreenATView(this, this.j, this.k, this.n, this.o, this.p);
            }
        } else {
            fullScreenATView = new FullScreenATView(this, this.j, this.k, this.n, this.o, this.p);
        }
        this.i = fullScreenATView;
        BaseAd baseAd = this.v;
        if (baseAd != null && baseAd.getCustomAdContainer() != null) {
            ViewGroup customAdContainer = this.v.getCustomAdContainer();
            customAdContainer.addView(this.i);
            setContentView(customAdContainer);
        } else {
            setContentView(this.i);
        }
        this.i.setListener(new AnonymousClass2());
        if (bundle != null) {
            this.q = bundle.getBoolean(a.C0409a.f);
            this.r = bundle.getBoolean(a.C0409a.g);
            this.s = bundle.getBoolean(a.C0409a.h);
            this.t = bundle.getBoolean(a.C0409a.k);
            this.d = bundle.getLong(a.C0409a.m);
            this.e = bundle.getLong(a.C0409a.n);
            this.f = bundle.getFloat(a.C0409a.o);
            this.g = bundle.getBoolean(a.C0409a.i);
        }
        this.i.setIsShowEndCard(this.q);
        this.i.setHideFeedbackButton(this.r);
        this.i.setHasReward(this.t);
        if (bundle != null) {
            this.i.setVideoMute(this.s);
            this.i.setShowBannerTime(this.d);
            this.i.setHideBannerTime(this.e);
            this.i.setCloseButtonScaleFactor(this.f);
            this.i.setHasPerformClick(this.g);
        }
        try {
            this.i.init();
        } catch (Throwable th3) {
            th3.printStackTrace();
            try {
                if (this.m != null) {
                    this.m.a(f.a(f.k, com.tkay.core.common.l.h.a(th3.getStackTrace())));
                }
            } catch (Throwable th4) {
                th4.printStackTrace();
            }
            finish();
        }
    }

    private void a(Bundle bundle) {
        if (bundle != null) {
            this.q = bundle.getBoolean(a.C0409a.f);
            this.r = bundle.getBoolean(a.C0409a.g);
            this.s = bundle.getBoolean(a.C0409a.h);
            this.t = bundle.getBoolean(a.C0409a.k);
            this.d = bundle.getLong(a.C0409a.m);
            this.e = bundle.getLong(a.C0409a.n);
            this.f = bundle.getFloat(a.C0409a.o);
            this.g = bundle.getBoolean(a.C0409a.i);
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.BaseATActivity$2, reason: invalid class name */
    final class AnonymousClass2 implements b.InterfaceC0396b {
        AnonymousClass2() {
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void a() {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.a();
            }
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void a(e eVar) {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.a(eVar);
            }
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void b() {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.b();
            }
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void c() {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.c();
            }
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void d() {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.d();
            }
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void e() {
            BaseATActivity.this.finish();
            if (BaseATActivity.this.u) {
                BaseATActivity.this.overridePendingTransition(0, 0);
            }
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.e();
            }
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void a(int i) {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.a(i);
            }
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void a(boolean z) {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.a(z);
            }
        }
    }

    private void b(Bundle bundle) {
        this.i.setListener(new AnonymousClass2());
        if (bundle != null) {
            this.q = bundle.getBoolean(a.C0409a.f);
            this.r = bundle.getBoolean(a.C0409a.g);
            this.s = bundle.getBoolean(a.C0409a.h);
            this.t = bundle.getBoolean(a.C0409a.k);
            this.d = bundle.getLong(a.C0409a.m);
            this.e = bundle.getLong(a.C0409a.n);
            this.f = bundle.getFloat(a.C0409a.o);
            this.g = bundle.getBoolean(a.C0409a.i);
        }
        this.i.setIsShowEndCard(this.q);
        this.i.setHideFeedbackButton(this.r);
        this.i.setHasReward(this.t);
        if (bundle != null) {
            this.i.setVideoMute(this.s);
            this.i.setShowBannerTime(this.d);
            this.i.setHideBannerTime(this.e);
            this.i.setCloseButtonScaleFactor(this.f);
            this.i.setHasPerformClick(this.g);
        }
        try {
            this.i.init();
        } catch (Throwable th) {
            th.printStackTrace();
            try {
                if (this.m != null) {
                    this.m.a(f.a(f.k, com.tkay.core.common.l.h.a(th.getStackTrace())));
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
            finish();
        }
    }

    @Override // android.app.Activity
    protected void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        BaseScreenATView baseScreenATView = this.i;
        if (baseScreenATView != null) {
            if (baseScreenATView.isShowEndCard()) {
                bundle.putBoolean(a.C0409a.f, true);
            }
            bundle.putBoolean(a.C0409a.g, this.i.needHideFeedbackButton());
            bundle.putBoolean(a.C0409a.h, this.i.isVideoMute());
            bundle.putBoolean(a.C0409a.k, this.i.hasReward());
            bundle.putLong(a.C0409a.m, this.i.getShowBannerTime());
            bundle.putLong(a.C0409a.n, this.i.getHideBannerTime());
            bundle.putFloat(a.C0409a.o, this.i.getCloseButtonScaleFactor());
        }
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        this.b = true;
        BaseScreenATView baseScreenATView = this.i;
        if (baseScreenATView != null) {
            baseScreenATView.r();
        }
        x xVar = this.c;
        if (xVar != null) {
            xVar.a(this);
            this.c = null;
        }
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        this.b = false;
        BaseScreenATView baseScreenATView = this.i;
        if (baseScreenATView != null) {
            baseScreenATView.s();
        }
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        this.c = null;
        com.tkay.core.common.b.a().b("1", this.h);
        BaseScreenATView baseScreenATView = this.i;
        if (baseScreenATView != null) {
            baseScreenATView.t();
        }
        h hVar = this.k;
        if (hVar != null && hVar.E() && !this.k.L()) {
            j.a().b();
        }
        super.onDestroy();
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (4 == i) {
            return true;
        }
        return super.onKeyDown(i, keyEvent);
    }

    @Override // android.app.Activity, android.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public void setTheme(int i) {
        if (Build.VERSION.SDK_INT == 26) {
            super.setTheme(com.tkay.core.common.l.h.a(this, "myoffer_half_screen_fit_by_o", "style"));
        } else {
            super.setTheme(i);
        }
    }
}
