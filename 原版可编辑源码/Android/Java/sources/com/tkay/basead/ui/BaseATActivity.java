package com.tkay.basead.ui;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import android.view.KeyEvent;
import android.view.ViewGroup;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
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

public class BaseATActivity extends Activity {
    public static final String a = BaseATActivity.class.getSimpleName();
    boolean b;
    x c;
    long d = 0;
    long e = 0;
    float f = 0.0f;
    boolean g = false;
    b.a h = new b.a() {
        @Override
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
    private b.b m;
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
    */
    public static void a(Activity activity, com.tkay.core.basead.b.a aVar) {
        Context context;
        Intent intent = new Intent();
        Context contextF = m.a().f();
        if (activity != null) {
            boolean zIsFinishing = activity.isFinishing();
            context = activity;
            if (zIsFinishing) {
                Log.i("tkay_BaseATActivity", "Activity is null");
                context = contextF;
            }
        }
        boolean zA = a(aVar.a, aVar.h);
        if (aVar.e == 2) {
            if (zA) {
                intent.setClass(context, ATLandscapeTranslucentActivity.class);
            } else {
                intent.setClass(context, ATLandscapeActivity.class);
            }
        } else if (zA) {
            intent.setClass(context, ATPortraitTranslucentActivity.class);
        } else {
            intent.setClass(context, ATPortraitActivity.class);
        }
        intent.putExtra("extra_scenario", aVar.b);
        intent.putExtra(a.a.b, aVar.a);
        intent.putExtra(a.a.c, aVar.c);
        intent.putExtra(a.a.d, aVar.d);
        intent.putExtra(a.a.e, aVar.h);
        if (!(context instanceof Activity)) {
            intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        }
        try {
            context.startActivity(intent);
        } catch (Throwable th) {
            b.b bVarA = com.tkay.basead.e.b.a().a(aVar.d);
            if (bVarA != null) {
                bVarA.a(f.a("10000", th.getMessage()));
            }
        }
    }

    private void a() {
        Intent intent = getIntent();
        try {
            if (intent != null) {
                this.n = intent.getStringExtra("extra_scenario");
                this.o = intent.getIntExtra(a.a.b, 1);
                this.k = (h) intent.getSerializableExtra(a.a.c);
                this.j = (i) intent.getSerializableExtra(a.a.e);
                this.l = intent.getStringExtra(a.a.d);
                this.u = a(this.o, this.j);
                return;
            }
            Log.e("tkay", a + " Intent is null.");
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

    @Override
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
                this.o = intent.getIntExtra(a.a.b, 1);
                this.k = (h) intent.getSerializableExtra(a.a.c);
                this.j = (i) intent.getSerializableExtra(a.a.e);
                this.l = intent.getStringExtra(a.a.d);
                this.u = a(this.o, this.j);
            } else {
                Log.e("tkay", a + " Intent is null.");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        this.m = com.tkay.basead.e.b.a().a(this.l);
        this.v = com.tkay.basead.d.i.a().a(this.l);
        i iVar = this.j;
        if (iVar == null || iVar.m == null) {
            Log.e("tkay", a + "Start Screen Ad Error.");
            try {
                if (this.m != null) {
                    this.m.a(f.a(f.k, a + "Start FullScreen Ad Error."));
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
            finish();
            return;
        }
        if (this.k == null) {
            Log.e("tkay", a + " onCreate: OfferAd = null");
            try {
                if (this.m != null) {
                    this.m.a(f.a(f.k, a + " onCreate: OfferAd = null"));
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
        this.i.setListener(new 2());
        if (bundle != null) {
            this.q = bundle.getBoolean(a.a.f);
            this.r = bundle.getBoolean(a.a.g);
            this.s = bundle.getBoolean(a.a.h);
            this.t = bundle.getBoolean(a.a.k);
            this.d = bundle.getLong(a.a.m);
            this.e = bundle.getLong(a.a.n);
            this.f = bundle.getFloat(a.a.o);
            this.g = bundle.getBoolean(a.a.i);
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
            this.q = bundle.getBoolean(a.a.f);
            this.r = bundle.getBoolean(a.a.g);
            this.s = bundle.getBoolean(a.a.h);
            this.t = bundle.getBoolean(a.a.k);
            this.d = bundle.getLong(a.a.m);
            this.e = bundle.getLong(a.a.n);
            this.f = bundle.getFloat(a.a.o);
            this.g = bundle.getBoolean(a.a.i);
        }
    }

    final class 2 implements b.b {
        2() {
        }

        @Override
        public final void a() {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.a();
            }
        }

        @Override
        public final void a(e eVar) {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.a(eVar);
            }
        }

        @Override
        public final void b() {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.b();
            }
        }

        @Override
        public final void c() {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.c();
            }
        }

        @Override
        public final void d() {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.d();
            }
        }

        @Override
        public final void e() {
            BaseATActivity.this.finish();
            if (BaseATActivity.this.u) {
                BaseATActivity.this.overridePendingTransition(0, 0);
            }
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.e();
            }
        }

        @Override
        public final void a(int i) {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.a(i);
            }
        }

        @Override
        public final void a(boolean z) {
            if (BaseATActivity.this.m != null) {
                BaseATActivity.this.m.a(z);
            }
        }
    }

    private void b(Bundle bundle) {
        this.i.setListener(new 2());
        if (bundle != null) {
            this.q = bundle.getBoolean(a.a.f);
            this.r = bundle.getBoolean(a.a.g);
            this.s = bundle.getBoolean(a.a.h);
            this.t = bundle.getBoolean(a.a.k);
            this.d = bundle.getLong(a.a.m);
            this.e = bundle.getLong(a.a.n);
            this.f = bundle.getFloat(a.a.o);
            this.g = bundle.getBoolean(a.a.i);
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

    @Override
    protected void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        BaseScreenATView baseScreenATView = this.i;
        if (baseScreenATView != null) {
            if (baseScreenATView.isShowEndCard()) {
                bundle.putBoolean(a.a.f, true);
            }
            bundle.putBoolean(a.a.g, this.i.needHideFeedbackButton());
            bundle.putBoolean(a.a.h, this.i.isVideoMute());
            bundle.putBoolean(a.a.k, this.i.hasReward());
            bundle.putLong(a.a.m, this.i.getShowBannerTime());
            bundle.putLong(a.a.n, this.i.getHideBannerTime());
            bundle.putFloat(a.a.o, this.i.getCloseButtonScaleFactor());
        }
    }

    @Override
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

    @Override
    protected void onPause() {
        super.onPause();
        this.b = false;
        BaseScreenATView baseScreenATView = this.i;
        if (baseScreenATView != null) {
            baseScreenATView.s();
        }
    }

    @Override
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

    @Override
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (4 == i) {
            return true;
        }
        return super.onKeyDown(i, keyEvent);
    }

    @Override
    public void setTheme(int i) {
        if (Build.VERSION.SDK_INT == 26) {
            super.setTheme(com.tkay.core.common.l.h.a(this, "myoffer_half_screen_fit_by_o", "style"));
        } else {
            super.setTheme(i);
        }
    }
}
