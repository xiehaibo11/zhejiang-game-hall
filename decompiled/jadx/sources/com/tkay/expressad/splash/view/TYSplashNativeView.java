package com.tkay.expressad.splash.view;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.h;
import com.tkay.core.common.l.l;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.n;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.shake.MBShakeView;
import com.tkay.expressad.widget.FeedBackButton;

/* JADX INFO: loaded from: classes3.dex */
public class TYSplashNativeView extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7139a = "MBSplashNativeView";
    private int A;
    private int B;
    private float C;
    private float D;
    private boolean E;
    private boolean F;
    private boolean G;
    private boolean H;
    private boolean I;
    private String J;
    private String K;
    private TYSplashView L;
    private c M;
    private MBShakeView N;
    private String O;
    private String P;
    private String Q;
    private com.tkay.expressad.shake.b R;
    private MBNoRecycledCrashImageView b;
    private MBNoRecycledCrashImageView c;
    private RelativeLayout d;
    private ImageView e;
    private FeedBackButton f;
    private TextView g;
    private RelativeLayout h;
    private MBNoRecycledCrashImageView i;
    private TextView j;
    private MBNoRecycledCrashImageView k;
    private TextView l;
    private TextView m;
    private RelativeLayout n;
    private TextView o;
    private TextView p;
    private TextView q;
    private MBSplashClickView r;
    private int s;
    private int t;
    private int u;
    private int v;
    private int w;
    private int x;
    private int y;
    private int z;

    static /* synthetic */ boolean a(TYSplashNativeView tYSplashNativeView) {
        tYSplashNativeView.F = true;
        return true;
    }

    public TYSplashNativeView(Context context) {
        super(context);
        this.H = false;
        this.I = false;
    }

    public TYSplashNativeView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public TYSplashNativeView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.H = false;
        this.I = false;
    }

    public TYSplashNativeView(Context context, TYSplashView tYSplashView, com.tkay.expressad.splash.a.b bVar) {
        int iA;
        super(context);
        this.H = false;
        this.I = false;
        if (bVar == null) {
            throw new IllegalArgumentException("Parameters is NULL, can't gen view.");
        }
        this.J = bVar.b();
        this.K = bVar.a();
        this.M = bVar.c();
        this.L = tYSplashView;
        this.s = bVar.e();
        this.v = bVar.f();
        this.u = bVar.g();
        this.w = bVar.h();
        this.x = bVar.i();
        this.y = bVar.j();
        this.z = bVar.k();
        this.A = bVar.l();
        this.G = bVar.d();
        this.B = bVar.m();
        try {
            if (this.A == 1) {
                iA = i.a(getContext().getApplicationContext(), "tkay_splash_portrait", "layout");
            } else {
                iA = i.a(getContext().getApplicationContext(), "tkay_splash_landscape", "layout");
            }
            View viewInflate = LayoutInflater.from(getContext()).inflate(iA, (ViewGroup) null);
            addView(viewInflate);
            this.b = (MBNoRecycledCrashImageView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_iv_image_bg", "id"));
            this.c = (MBNoRecycledCrashImageView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_iv_image", "id"));
            this.d = (RelativeLayout) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_topcontroller", "id"));
            this.e = (ImageView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_iv_link", "id"));
            this.f = (FeedBackButton) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_feedback", "id"));
            this.g = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_skip", "id"));
            this.h = (RelativeLayout) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_landscape_foreground", "id"));
            this.i = (MBNoRecycledCrashImageView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_iv_icon", "id"));
            this.j = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_title", "id"));
            this.k = (MBNoRecycledCrashImageView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_iv_foregroundimage", "id"));
            this.l = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_adrect", "id"));
            this.n = (RelativeLayout) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_layout_appinfo", "id"));
            this.o = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_appinfo", "id"));
            this.p = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_privacy", "id"));
            this.q = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_permission", "id"));
            this.r = (MBSplashClickView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_click", "id"));
            this.m = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_adcircle", "id"));
            int iA2 = i.a(getContext().getApplicationContext(), "tkay_splash_count_time_can_skip", i.g);
            int iA3 = i.a(getContext().getApplicationContext(), "tkay_splash_count_time_can_skip_not", i.g);
            int iA4 = i.a(getContext().getApplicationContext(), "tkay_splash_count_time_can_skip_s", i.g);
            this.P = getContext().getResources().getString(iA2);
            this.Q = getContext().getResources().getString(iA3);
            this.O = getContext().getResources().getString(iA4);
        } catch (Throwable th) {
            th.getMessage();
        }
        if (com.tkay.expressad.foundation.f.b.a().b()) {
            this.M.l(this.J);
            com.tkay.expressad.foundation.f.b.a().a(this.J, new AnonymousClass11());
            com.tkay.expressad.foundation.f.b.a().a(this.J, this.f);
            com.tkay.expressad.foundation.f.b.a().a(this.J, this.M);
        } else {
            FeedBackButton feedBackButton = this.f;
            if (feedBackButton != null) {
                feedBackButton.setVisibility(8);
            }
        }
        if (!TextUtils.isEmpty(this.M.be())) {
            com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(this.M.be(), new AnonymousClass1());
        } else {
            this.c.setVisibility(4);
        }
        e();
        if (this.M.aG() != null && this.w == 0) {
            com.tkay.expressad.foundation.d.a aVarAG = this.M.aG();
            StringBuilder sb = new StringBuilder();
            sb.append(getContext().getString(i.a(getContext(), "tkay_cm_app_info_app_name", i.g)));
            sb.append(aVarAG.b());
            sb.append("\n");
            sb.append(getContext().getString(i.a(getContext(), "tkay_cm_app_info_version", i.g)));
            sb.append(aVarAG.e());
            sb.append("\n");
            sb.append(getContext().getString(i.a(getContext(), "tkay_cm_app_info_publish", i.g)));
            sb.append(aVarAG.f());
            sb.append("\n");
            sb.append(getContext().getString(i.a(getContext(), "tkay_cm_app_info_update_time", i.g)));
            sb.append(aVarAG.d());
            this.o.setText(sb);
        } else {
            this.n.setVisibility(8);
        }
        if (this.v == 1 || this.x == 1) {
            this.r.setVisibility(8);
        } else {
            this.r.initView(this.M.cU);
        }
        if (this.u == 1) {
            setOnClickListener(new AnonymousClass6());
        } else {
            this.r.setOnClickListener(new AnonymousClass7());
        }
        this.p.setOnClickListener(new AnonymousClass8());
        this.q.setOnClickListener(new AnonymousClass9());
        this.g.setOnClickListener(new AnonymousClass10());
        if (this.x == 1) {
            MBShakeView mBShakeView = new MBShakeView(getContext());
            this.N = mBShakeView;
            mBShakeView.initView(this.M.cU);
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
            layoutParams.addRule(13);
            this.N.setLayoutParams(layoutParams);
            addView(this.N);
            this.r.setVisibility(4);
            this.r.setEnabled(false);
            this.N.setOnClickListener(new AnonymousClass2());
            this.R = new AnonymousClass3(this.y, this.z * 1000);
        }
        updateCountDown(this.s);
    }

    private void a() {
        int iA;
        try {
            if (this.A == 1) {
                iA = i.a(getContext().getApplicationContext(), "tkay_splash_portrait", "layout");
            } else {
                iA = i.a(getContext().getApplicationContext(), "tkay_splash_landscape", "layout");
            }
            View viewInflate = LayoutInflater.from(getContext()).inflate(iA, (ViewGroup) null);
            addView(viewInflate);
            this.b = (MBNoRecycledCrashImageView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_iv_image_bg", "id"));
            this.c = (MBNoRecycledCrashImageView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_iv_image", "id"));
            this.d = (RelativeLayout) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_topcontroller", "id"));
            this.e = (ImageView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_iv_link", "id"));
            this.f = (FeedBackButton) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_feedback", "id"));
            this.g = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_skip", "id"));
            this.h = (RelativeLayout) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_landscape_foreground", "id"));
            this.i = (MBNoRecycledCrashImageView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_iv_icon", "id"));
            this.j = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_title", "id"));
            this.k = (MBNoRecycledCrashImageView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_iv_foregroundimage", "id"));
            this.l = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_adrect", "id"));
            this.n = (RelativeLayout) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_layout_appinfo", "id"));
            this.o = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_appinfo", "id"));
            this.p = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_privacy", "id"));
            this.q = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_permission", "id"));
            this.r = (MBSplashClickView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_click", "id"));
            this.m = (TextView) viewInflate.findViewById(i.a(getContext().getApplicationContext(), "tkay_splash_tv_adcircle", "id"));
            int iA2 = i.a(getContext().getApplicationContext(), "tkay_splash_count_time_can_skip", i.g);
            int iA3 = i.a(getContext().getApplicationContext(), "tkay_splash_count_time_can_skip_not", i.g);
            int iA4 = i.a(getContext().getApplicationContext(), "tkay_splash_count_time_can_skip_s", i.g);
            this.P = getContext().getResources().getString(iA2);
            this.Q = getContext().getResources().getString(iA3);
            this.O = getContext().getResources().getString(iA4);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.TYSplashNativeView$1, reason: invalid class name */
    final class AnonymousClass1 implements com.tkay.expressad.foundation.g.d.c {
        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(String str, String str2) {
        }

        AnonymousClass1() {
        }

        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(Bitmap bitmap, String str) {
            if (bitmap != null) {
                try {
                } catch (Throwable th) {
                    th.getMessage();
                }
                if (bitmap.isRecycled()) {
                    return;
                }
                if (bitmap.getWidth() >= bitmap.getHeight()) {
                    if (TYSplashNativeView.this.A == 1) {
                        TYSplashNativeView.this.h.setVisibility(0);
                        try {
                            Bitmap bitmapA = n.a(bitmap, t.b(m.a().f(), 10.0f));
                            if (bitmapA != null && !bitmapA.isRecycled()) {
                                TYSplashNativeView.this.k.setScaleType(ImageView.ScaleType.FIT_XY);
                                TYSplashNativeView.this.k.setImageBitmap(bitmapA);
                            }
                        } catch (Throwable th2) {
                            try {
                                th2.getMessage();
                                TYSplashNativeView.this.k.setImageBitmap(bitmap);
                            } catch (Throwable th3) {
                                th3.getMessage();
                            }
                        }
                        TYSplashNativeView.this.j.setText(TYSplashNativeView.this.M.bb());
                        TYSplashNativeView.h(TYSplashNativeView.this);
                        try {
                            try {
                                Bitmap bitmapB = n.b(bitmap);
                                if (bitmapB != null && !bitmapB.isRecycled()) {
                                    TYSplashNativeView.this.c.setScaleType(ImageView.ScaleType.CENTER_CROP);
                                    TYSplashNativeView.this.c.setImageBitmap(bitmapB);
                                }
                            } catch (Throwable unused) {
                                TYSplashNativeView.this.c.setImageBitmap(bitmap);
                            }
                        } catch (Throwable th4) {
                            th4.getMessage();
                        }
                    } else {
                        TYSplashNativeView.this.h.setVisibility(4);
                        TYSplashNativeView.this.c.setScaleType(ImageView.ScaleType.FIT_CENTER);
                        TYSplashNativeView.this.c.setImageBitmap(bitmap);
                    }
                } else {
                    TYSplashNativeView.a(TYSplashNativeView.this);
                    TYSplashNativeView.this.h.setVisibility(4);
                    TYSplashNativeView.this.c.setScaleType(ImageView.ScaleType.FIT_CENTER);
                    TYSplashNativeView.this.c.setImageBitmap(bitmap);
                }
                try {
                    Bitmap bitmapB2 = n.b(bitmap);
                    if (bitmapB2 == null || bitmapB2.isRecycled()) {
                        return;
                    }
                    TYSplashNativeView.this.b.setScaleType(ImageView.ScaleType.CENTER_CROP);
                    TYSplashNativeView.this.b.setImageBitmap(bitmapB2);
                    return;
                } catch (Throwable unused2) {
                    TYSplashNativeView.this.c.setImageBitmap(bitmap);
                    return;
                }
                th.getMessage();
            }
        }
    }

    private void c() {
        if (!TextUtils.isEmpty(this.M.be())) {
            com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(this.M.be(), new AnonymousClass1());
        } else {
            this.c.setVisibility(4);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.TYSplashNativeView$4, reason: invalid class name */
    final class AnonymousClass4 implements com.tkay.expressad.foundation.g.d.c {
        AnonymousClass4() {
        }

        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(Bitmap bitmap, String str) {
            Bitmap bitmapA;
            if (bitmap != null) {
                try {
                    if (bitmap.isRecycled()) {
                        return;
                    }
                    try {
                        if (TYSplashNativeView.this.i == null || (bitmapA = n.a(bitmap, t.b(m.a().f(), 40.0f))) == null || bitmapA.isRecycled()) {
                            return;
                        }
                        TYSplashNativeView.this.i.setImageBitmap(bitmapA);
                    } catch (Throwable th) {
                        th.getMessage();
                        TYSplashNativeView.this.i.setImageBitmap(bitmap);
                    }
                } catch (Throwable th2) {
                    th2.getMessage();
                }
            }
        }

        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(String str, String str2) {
            TYSplashNativeView.this.i.setVisibility(4);
        }
    }

    private void d() {
        if (!TextUtils.isEmpty(this.M.bd())) {
            com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(this.M.bd(), new AnonymousClass4());
        } else {
            this.i.setVisibility(4);
        }
    }

    private void e() {
        Drawable drawable;
        com.tkay.expressad.foundation.b.b.b().e();
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
        if (aVarB != null) {
            final String strJ = aVarB.J();
            if (TextUtils.isEmpty(strJ)) {
                this.e.setVisibility(8);
            }
            this.e.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.splash.view.TYSplashNativeView.5
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    l.a(TYSplashNativeView.this.getContext(), strJ);
                }
            });
        } else {
            this.e.setVisibility(8);
        }
        try {
            drawable = getResources().getDrawable(i.a(getContext().getApplicationContext(), "tkay_splash_m_circle", i.c));
            try {
                drawable.setBounds(0, 0, t.b(getContext(), 10.0f), t.b(getContext(), 10.0f));
            } catch (Throwable th) {
                th = th;
                th.getMessage();
            }
        } catch (Throwable th2) {
            th = th2;
            drawable = null;
        }
        if (this.A == 1 && this.F) {
            if (this.B != 0 && drawable != null) {
                this.m.setCompoundDrawables(drawable, null, null, null);
            }
            this.m.setText(getContext().getString(i.a(getContext(), "tkay_cm_app_info_app_label", i.g)));
            this.l.setVisibility(4);
            return;
        }
        if (this.B != 0 && drawable != null) {
            this.l.setCompoundDrawables(drawable, null, null, null);
        }
        this.l.setText(getContext().getString(i.a(getContext(), "tkay_cm_app_info_app_label", i.g)));
        this.m.setVisibility(4);
    }

    private void f() {
        if (this.M.aG() != null && this.w == 0) {
            com.tkay.expressad.foundation.d.a aVarAG = this.M.aG();
            StringBuilder sb = new StringBuilder();
            sb.append(getContext().getString(i.a(getContext(), "tkay_cm_app_info_app_name", i.g)));
            sb.append(aVarAG.b());
            sb.append("\n");
            sb.append(getContext().getString(i.a(getContext(), "tkay_cm_app_info_version", i.g)));
            sb.append(aVarAG.e());
            sb.append("\n");
            sb.append(getContext().getString(i.a(getContext(), "tkay_cm_app_info_publish", i.g)));
            sb.append(aVarAG.f());
            sb.append("\n");
            sb.append(getContext().getString(i.a(getContext(), "tkay_cm_app_info_update_time", i.g)));
            sb.append(aVarAG.d());
            this.o.setText(sb);
            return;
        }
        this.n.setVisibility(8);
    }

    private void g() {
        if (this.v == 1) {
            this.r.setVisibility(8);
        } else if (this.x == 1) {
            this.r.setVisibility(8);
        } else {
            this.r.initView(this.M.cU);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.TYSplashNativeView$6, reason: invalid class name */
    final class AnonymousClass6 implements View.OnClickListener {
        AnonymousClass6() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            TYSplashNativeView.a(TYSplashNativeView.this, 1);
        }
    }

    private void h() {
        if (this.u == 1) {
            setOnClickListener(new AnonymousClass6());
        } else {
            this.r.setOnClickListener(new AnonymousClass7());
        }
        this.p.setOnClickListener(new AnonymousClass8());
        this.q.setOnClickListener(new AnonymousClass9());
        this.g.setOnClickListener(new AnonymousClass10());
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.TYSplashNativeView$7, reason: invalid class name */
    final class AnonymousClass7 implements View.OnClickListener {
        AnonymousClass7() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            TYSplashNativeView.a(TYSplashNativeView.this, 0);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.TYSplashNativeView$8, reason: invalid class name */
    final class AnonymousClass8 implements View.OnClickListener {
        AnonymousClass8() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            if (TYSplashNativeView.this.M.aG() != null) {
                String strC = TYSplashNativeView.this.M.aG().c();
                if (TextUtils.isEmpty(strC)) {
                    return;
                }
                l.a(TYSplashNativeView.this.getContext(), strC);
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.TYSplashNativeView$9, reason: invalid class name */
    final class AnonymousClass9 implements View.OnClickListener {
        AnonymousClass9() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            com.tkay.expressad.foundation.d.a aVarAG = TYSplashNativeView.this.M.aG();
            if (aVarAG != null) {
                l.a(m.a().f(), aVarAG.a());
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.TYSplashNativeView$10, reason: invalid class name */
    final class AnonymousClass10 implements View.OnClickListener {
        AnonymousClass10() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            if (TYSplashNativeView.this.G) {
                if (TYSplashNativeView.this.L.getSplashJSBridgeImpl() != null && TYSplashNativeView.this.L.getSplashJSBridgeImpl().getSplashBridgeListener() != null) {
                    TYSplashNativeView.this.L.getSplashJSBridgeImpl().getSplashBridgeListener().c();
                }
                TYSplashNativeView.this.g.setVisibility(4);
                TYSplashNativeView.this.g.setEnabled(false);
            }
        }
    }

    private void a(int i) {
        if (this.L.getSplashJSBridgeImpl() == null || this.L.getSplashJSBridgeImpl().getSplashBridgeListener() == null) {
            return;
        }
        try {
            this.L.getSplashJSBridgeImpl().getSplashBridgeListener().a(com.tkay.expressad.splash.a.a.a.a(com.tkay.expressad.splash.a.a.a.a(i, this.C, this.D), this.M));
        } catch (Throwable th) {
            th.getMessage();
            this.L.getSplashJSBridgeImpl().getSplashBridgeListener().a(this.M);
        }
    }

    public void updateCountDown(int i) {
        String str;
        if (this.g != null) {
            this.t = i;
            if (this.G) {
                str = this.P + " " + i + this.O;
            } else {
                str = i + this.O + " " + this.Q;
            }
            this.g.setText(str);
        }
    }

    public void setIsPause(boolean z) {
        this.H = z;
    }

    public void setNotchPadding(int i, int i2, int i3, int i4) {
        this.d.setPadding(i, i3, i2, i4);
    }

    private void i() {
        if (com.tkay.expressad.foundation.f.b.a().b()) {
            this.M.l(this.J);
            com.tkay.expressad.foundation.f.b.a().a(this.J, new AnonymousClass11());
            com.tkay.expressad.foundation.f.b.a().a(this.J, this.f);
            com.tkay.expressad.foundation.f.b.a().a(this.J, this.M);
            return;
        }
        FeedBackButton feedBackButton = this.f;
        if (feedBackButton != null) {
            feedBackButton.setVisibility(8);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.TYSplashNativeView$11, reason: invalid class name */
    final class AnonymousClass11 implements com.tkay.expressad.foundation.f.a {
        AnonymousClass11() {
        }

        @Override // com.tkay.expressad.foundation.f.a
        public final void a() {
            TYSplashNativeView.this.I = true;
            TYSplashNativeView.b(TYSplashNativeView.this, false);
        }

        @Override // com.tkay.expressad.foundation.f.a
        public final void b() {
            TYSplashNativeView.this.I = false;
            TYSplashNativeView.b(TYSplashNativeView.this, true);
        }

        @Override // com.tkay.expressad.foundation.f.a
        public final void c() {
            TYSplashNativeView.this.I = false;
            TYSplashNativeView.b(TYSplashNativeView.this, true);
        }
    }

    private void j() {
        if (this.x == 1) {
            MBShakeView mBShakeView = new MBShakeView(getContext());
            this.N = mBShakeView;
            mBShakeView.initView(this.M.cU);
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
            layoutParams.addRule(13);
            this.N.setLayoutParams(layoutParams);
            addView(this.N);
            this.r.setVisibility(4);
            this.r.setEnabled(false);
            this.N.setOnClickListener(new AnonymousClass2());
            this.R = new AnonymousClass3(this.y, this.z * 1000);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.TYSplashNativeView$2, reason: invalid class name */
    final class AnonymousClass2 implements View.OnClickListener {
        AnonymousClass2() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            TYSplashNativeView.a(TYSplashNativeView.this, 0);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.splash.view.TYSplashNativeView$3, reason: invalid class name */
    final class AnonymousClass3 extends com.tkay.expressad.shake.b {
        AnonymousClass3(int i, int i2) {
            super(i, i2);
        }

        @Override // com.tkay.expressad.shake.b
        public final void a() {
            if (TYSplashNativeView.this.I || TYSplashNativeView.this.H) {
                return;
            }
            TYSplashNativeView.a(TYSplashNativeView.this, 4);
        }
    }

    private void a(boolean z) {
        if (this.L.getSplashJSBridgeImpl() == null || this.L.getSplashJSBridgeImpl().getSplashBridgeListener() == null) {
            return;
        }
        this.L.getSplashJSBridgeImpl().getSplashBridgeListener().a(z ? 2 : 1, this.t);
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        try {
            if (this.x != 1 || this.N == null || this.R == null) {
                return;
            }
            com.tkay.expressad.shake.a.a().a(this.R);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        release();
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        this.C = motionEvent.getRawX();
        this.D = motionEvent.getRawY();
        return super.onInterceptTouchEvent(motionEvent);
    }

    @Override // android.widget.RelativeLayout, android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
        TextView textView = this.g;
        if (textView == null || textView.getParent() == null || !(this.g.getParent() instanceof ViewGroup)) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = ((ViewGroup) this.g.getParent()).getLayoutParams();
        if (layoutParams instanceof RelativeLayout.LayoutParams) {
            int iB = ((RelativeLayout.LayoutParams) layoutParams).topMargin + h.b(getContext());
            int[] iArr = new int[2];
            this.g.getLocationOnScreen(iArr);
            if (iArr[1] < iB) {
                int i5 = iB - iArr[1];
                ViewParent parent = this.g.getParent();
                if (parent instanceof ViewGroup) {
                    ViewGroup viewGroup = (ViewGroup) parent;
                    viewGroup.setPadding(viewGroup.getPaddingLeft(), viewGroup.getPaddingTop() + i5, viewGroup.getPaddingRight(), viewGroup.getPaddingBottom() + i5);
                }
            }
        }
    }

    public void release() {
        try {
            if (this.R != null) {
                com.tkay.expressad.shake.a.a().b(this.R);
                this.R = null;
            }
            com.tkay.expressad.foundation.f.b.a().c(this.J);
            detachAllViewsFromParent();
        } catch (Exception e) {
            e.getMessage();
        }
    }

    private void b() {
        if (com.tkay.expressad.foundation.f.b.a().b()) {
            this.M.l(this.J);
            com.tkay.expressad.foundation.f.b.a().a(this.J, new AnonymousClass11());
            com.tkay.expressad.foundation.f.b.a().a(this.J, this.f);
            com.tkay.expressad.foundation.f.b.a().a(this.J, this.M);
        } else {
            FeedBackButton feedBackButton = this.f;
            if (feedBackButton != null) {
                feedBackButton.setVisibility(8);
            }
        }
        if (!TextUtils.isEmpty(this.M.be())) {
            com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(this.M.be(), new AnonymousClass1());
        } else {
            this.c.setVisibility(4);
        }
        e();
        if (this.M.aG() != null && this.w == 0) {
            com.tkay.expressad.foundation.d.a aVarAG = this.M.aG();
            StringBuilder sb = new StringBuilder();
            sb.append(getContext().getString(i.a(getContext(), "tkay_cm_app_info_app_name", i.g)));
            sb.append(aVarAG.b());
            sb.append("\n");
            sb.append(getContext().getString(i.a(getContext(), "tkay_cm_app_info_version", i.g)));
            sb.append(aVarAG.e());
            sb.append("\n");
            sb.append(getContext().getString(i.a(getContext(), "tkay_cm_app_info_publish", i.g)));
            sb.append(aVarAG.f());
            sb.append("\n");
            sb.append(getContext().getString(i.a(getContext(), "tkay_cm_app_info_update_time", i.g)));
            sb.append(aVarAG.d());
            this.o.setText(sb);
        } else {
            this.n.setVisibility(8);
        }
        if (this.v == 1 || this.x == 1) {
            this.r.setVisibility(8);
        } else {
            this.r.initView(this.M.cU);
        }
        if (this.u == 1) {
            setOnClickListener(new AnonymousClass6());
        } else {
            this.r.setOnClickListener(new AnonymousClass7());
        }
        this.p.setOnClickListener(new AnonymousClass8());
        this.q.setOnClickListener(new AnonymousClass9());
        this.g.setOnClickListener(new AnonymousClass10());
        if (this.x == 1) {
            MBShakeView mBShakeView = new MBShakeView(getContext());
            this.N = mBShakeView;
            mBShakeView.initView(this.M.cU);
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
            layoutParams.addRule(13);
            this.N.setLayoutParams(layoutParams);
            addView(this.N);
            this.r.setVisibility(4);
            this.r.setEnabled(false);
            this.N.setOnClickListener(new AnonymousClass2());
            this.R = new AnonymousClass3(this.y, this.z * 1000);
        }
        updateCountDown(this.s);
    }

    static /* synthetic */ void h(TYSplashNativeView tYSplashNativeView) {
        if (!TextUtils.isEmpty(tYSplashNativeView.M.bd())) {
            com.tkay.expressad.foundation.g.d.b.a(m.a().f()).a(tYSplashNativeView.M.bd(), tYSplashNativeView.new AnonymousClass4());
        } else {
            tYSplashNativeView.i.setVisibility(4);
        }
    }

    static /* synthetic */ void a(TYSplashNativeView tYSplashNativeView, int i) {
        if (tYSplashNativeView.L.getSplashJSBridgeImpl() == null || tYSplashNativeView.L.getSplashJSBridgeImpl().getSplashBridgeListener() == null) {
            return;
        }
        try {
            tYSplashNativeView.L.getSplashJSBridgeImpl().getSplashBridgeListener().a(com.tkay.expressad.splash.a.a.a.a(com.tkay.expressad.splash.a.a.a.a(i, tYSplashNativeView.C, tYSplashNativeView.D), tYSplashNativeView.M));
        } catch (Throwable th) {
            th.getMessage();
            tYSplashNativeView.L.getSplashJSBridgeImpl().getSplashBridgeListener().a(tYSplashNativeView.M);
        }
    }

    static /* synthetic */ void b(TYSplashNativeView tYSplashNativeView, boolean z) {
        if (tYSplashNativeView.L.getSplashJSBridgeImpl() == null || tYSplashNativeView.L.getSplashJSBridgeImpl().getSplashBridgeListener() == null) {
            return;
        }
        tYSplashNativeView.L.getSplashJSBridgeImpl().getSplashBridgeListener().a(z ? 2 : 1, tYSplashNativeView.t);
    }
}
