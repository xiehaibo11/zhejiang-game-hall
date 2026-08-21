package com.mbridge.msdk.splash.view;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.drawable.Drawable;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.y;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.confirmation.e;
import com.mbridge.msdk.out.ApkDisplayInfo;
import com.mbridge.msdk.shake.MBShakeView;
import com.mbridge.msdk.shake.b;
import com.mbridge.msdk.splash.a.c;
import com.mbridge.msdk.splash.view.nativeview.MBNoRecycledCrashImageView;
import com.mbridge.msdk.splash.view.nativeview.MBSplashClickView;
import com.mbridge.msdk.widget.FeedBackButton;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes2.dex */
public class MBSplashNativeView extends RelativeLayout {
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
    private MBSplashView L;
    private CampaignEx M;
    private MBShakeView N;
    private String O;
    private String P;
    private String Q;
    private b R;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private MBNoRecycledCrashImageView f4027a;
    private MBNoRecycledCrashImageView b;
    private RelativeLayout c;
    private ImageView d;
    private FeedBackButton e;
    private TextView f;
    private RelativeLayout g;
    private MBNoRecycledCrashImageView h;
    private TextView i;
    private MBNoRecycledCrashImageView j;
    private TextView k;
    private TextView l;
    private RelativeLayout m;
    private TextView n;
    private TextView o;
    private TextView p;
    private MBSplashClickView q;
    private int r;
    private int s;
    private int t;
    private int u;
    private int v;
    private int w;
    private int x;
    private int y;
    private int z;

    public MBSplashNativeView(Context context) {
        super(context);
        this.H = false;
        this.I = false;
    }

    public MBSplashNativeView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public MBSplashNativeView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.H = false;
        this.I = false;
    }

    public MBSplashNativeView(Context context, MBSplashView mBSplashView, c cVar) {
        Drawable drawable;
        int iA;
        super(context);
        this.H = false;
        this.I = false;
        if (cVar == null) {
            throw new IllegalArgumentException("Parameters is NULL, can't gen view.");
        }
        this.J = cVar.b();
        this.K = cVar.a();
        this.M = cVar.c();
        this.L = mBSplashView;
        this.r = cVar.e();
        this.u = cVar.f();
        this.t = cVar.g();
        this.v = cVar.h();
        this.w = cVar.i();
        this.x = cVar.j();
        this.y = cVar.k();
        this.z = cVar.l();
        this.G = cVar.d();
        this.A = cVar.m();
        try {
            if (this.z == 1) {
                iA = s.a(getContext().getApplicationContext(), "mbridge_splash_portrait", "layout");
            } else {
                iA = s.a(getContext().getApplicationContext(), "mbridge_splash_landscape", "layout");
            }
            View viewInflate = LayoutInflater.from(getContext()).inflate(iA, (ViewGroup) null);
            addView(viewInflate);
            this.f4027a = (MBNoRecycledCrashImageView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_iv_image_bg", "id"));
            this.b = (MBNoRecycledCrashImageView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_iv_image", "id"));
            this.c = (RelativeLayout) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_topcontroller", "id"));
            this.d = (ImageView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_iv_link", "id"));
            this.e = (FeedBackButton) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_feedback", "id"));
            this.f = (TextView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_tv_skip", "id"));
            this.g = (RelativeLayout) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_landscape_foreground", "id"));
            this.h = (MBNoRecycledCrashImageView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_iv_icon", "id"));
            this.i = (TextView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_tv_title", "id"));
            this.j = (MBNoRecycledCrashImageView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_iv_foregroundimage", "id"));
            this.k = (TextView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_tv_adrect", "id"));
            this.m = (RelativeLayout) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_layout_appinfo", "id"));
            this.n = (TextView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_tv_appinfo", "id"));
            this.o = (TextView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_tv_privacy", "id"));
            this.p = (TextView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_tv_permission", "id"));
            this.q = (MBSplashClickView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_tv_click", "id"));
            this.l = (TextView) viewInflate.findViewById(s.a(getContext().getApplicationContext(), "mbridge_splash_tv_adcircle", "id"));
            int iA2 = s.a(getContext().getApplicationContext(), "mbridge_splash_count_time_can_skip", i.g);
            int iA3 = s.a(getContext().getApplicationContext(), "mbridge_splash_count_time_can_skip_not", i.g);
            int iA4 = s.a(getContext().getApplicationContext(), "mbridge_splash_count_time_can_skip_s", i.g);
            this.P = getContext().getResources().getString(iA2);
            this.Q = getContext().getResources().getString(iA3);
            this.O = getContext().getResources().getString(iA4);
            this.B = ae.b(getContext(), 9.0f);
        } catch (Throwable th) {
            z.d("MBSplashNativeView", th.getMessage());
        }
        try {
            this.E = getContext().getResources().getConfiguration().locale.getLanguage().contains(com.tkay.expressad.video.dynview.a.a.Q);
        } catch (Throwable th2) {
            z.d("MBSplashNativeView", th2.getMessage());
        }
        if (com.mbridge.msdk.foundation.b.b.a().b()) {
            this.M.setCampaignUnitId(this.J);
            com.mbridge.msdk.foundation.b.b.a().a(this.J, new com.mbridge.msdk.foundation.b.a() { // from class: com.mbridge.msdk.splash.view.MBSplashNativeView.11
                @Override // com.mbridge.msdk.foundation.b.a
                public final void a() {
                    MBSplashNativeView.this.I = true;
                    MBSplashNativeView.c(MBSplashNativeView.this, false);
                }

                @Override // com.mbridge.msdk.foundation.b.a
                public final void b() {
                    MBSplashNativeView.this.I = false;
                    MBSplashNativeView.c(MBSplashNativeView.this, true);
                }

                @Override // com.mbridge.msdk.foundation.b.a
                public final void a(String str) {
                    MBSplashNativeView.this.I = false;
                    MBSplashNativeView.c(MBSplashNativeView.this, true);
                }
            });
            com.mbridge.msdk.foundation.b.b.a().a(this.J, this.e);
            com.mbridge.msdk.foundation.b.b.a().a(this.J, this.M);
        } else {
            FeedBackButton feedBackButton = this.e;
            if (feedBackButton != null) {
                feedBackButton.setVisibility(8);
            }
        }
        if (!TextUtils.isEmpty(this.M.getImageUrl())) {
            com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(this.M.getImageUrl(), new com.mbridge.msdk.foundation.same.c.c() { // from class: com.mbridge.msdk.splash.view.MBSplashNativeView.1
                @Override // com.mbridge.msdk.foundation.same.c.c
                public final void onFailedLoad(String str, String str2) {
                }

                @Override // com.mbridge.msdk.foundation.same.c.c
                public final void onSuccessLoad(Bitmap bitmap, String str) {
                    if (bitmap != null) {
                        try {
                            if (bitmap.isRecycled()) {
                                return;
                            }
                            if (bitmap.getWidth() < bitmap.getHeight()) {
                                MBSplashNativeView.this.F = true;
                                MBSplashNativeView.this.g.setVisibility(4);
                                MBSplashNativeView.this.b.setScaleType(ImageView.ScaleType.FIT_CENTER);
                                MBSplashNativeView.this.b.setImageBitmap(bitmap);
                            } else if (MBSplashNativeView.this.z == 1) {
                                MBSplashNativeView.this.g.setVisibility(0);
                                try {
                                    Bitmap bitmapA = y.a(bitmap, 1, ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 10.0f));
                                    if (bitmapA != null && !bitmapA.isRecycled()) {
                                        MBSplashNativeView.this.j.setScaleType(ImageView.ScaleType.FIT_XY);
                                        MBSplashNativeView.this.j.setImageBitmap(bitmapA);
                                    }
                                } catch (Throwable th3) {
                                    try {
                                        z.d("MBSplashNativeView", th3.getMessage());
                                        MBSplashNativeView.this.j.setImageBitmap(bitmap);
                                    } catch (Throwable th4) {
                                        z.d("MBSplashNativeView", th4.getMessage());
                                    }
                                }
                                MBSplashNativeView.this.i.setText(MBSplashNativeView.this.M.getAppName());
                                MBSplashNativeView.g(MBSplashNativeView.this);
                                try {
                                    try {
                                        Bitmap bitmapA2 = y.a(bitmap);
                                        if (bitmapA2 != null && !bitmapA2.isRecycled()) {
                                            MBSplashNativeView.this.b.setScaleType(ImageView.ScaleType.CENTER_CROP);
                                            MBSplashNativeView.this.b.setImageBitmap(bitmapA2);
                                        }
                                    } catch (Throwable th5) {
                                        z.d("MBSplashNativeView", th5.getMessage());
                                    }
                                } catch (Throwable unused) {
                                    MBSplashNativeView.this.b.setImageBitmap(bitmap);
                                }
                            } else {
                                MBSplashNativeView.this.g.setVisibility(4);
                                MBSplashNativeView.this.b.setScaleType(ImageView.ScaleType.FIT_CENTER);
                                MBSplashNativeView.this.b.setImageBitmap(bitmap);
                            }
                            try {
                                Bitmap bitmapA3 = y.a(bitmap);
                                if (bitmapA3 == null || bitmapA3.isRecycled()) {
                                    return;
                                }
                                MBSplashNativeView.this.f4027a.setScaleType(ImageView.ScaleType.CENTER_CROP);
                                MBSplashNativeView.this.f4027a.setImageBitmap(bitmapA3);
                            } catch (Throwable unused2) {
                                MBSplashNativeView.this.b.setImageBitmap(bitmap);
                            }
                        } catch (Throwable th6) {
                            z.d("MBSplashNativeView", th6.getMessage());
                        }
                    }
                }
            });
        } else {
            this.b.setVisibility(4);
        }
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarB != null) {
            final String strAz = aVarB.az();
            if (TextUtils.isEmpty(strAz)) {
                this.d.setVisibility(8);
            }
            this.d.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.splash.view.MBSplashNativeView.5
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    com.mbridge.msdk.click.c.b(MBSplashNativeView.this.getContext(), strAz);
                }
            });
        } else {
            this.d.setVisibility(8);
        }
        try {
            drawable = getResources().getDrawable(s.a(getContext().getApplicationContext(), "mbridge_splash_m_circle", i.c));
            try {
                drawable.setBounds(0, 0, ae.b(getContext(), 10.0f), ae.b(getContext(), 10.0f));
            } catch (Throwable th3) {
                th = th3;
                z.d("MBSplashNativeView", th.getMessage());
            }
        } catch (Throwable th4) {
            th = th4;
            drawable = null;
        }
        if (this.z == 1 && this.F) {
            if (this.A != 0 && drawable != null) {
                this.l.setCompoundDrawables(drawable, null, null, null);
            }
            this.l.setText(this.E ? "广告" : "AD");
            this.k.setVisibility(4);
        } else {
            if (this.A != 0 && drawable != null) {
                this.k.setCompoundDrawables(drawable, null, null, null);
            }
            this.k.setText(this.E ? "广告" : "AD");
            this.l.setVisibility(4);
        }
        if (this.M.getApkDisplayInfo() != null && this.v == 0) {
            ApkDisplayInfo apkDisplayInfo = this.M.getApkDisplayInfo();
            StringBuilder sb = new StringBuilder();
            sb.append("应用名称：");
            sb.append(apkDisplayInfo.getAppName());
            sb.append("\n");
            sb.append("版本：");
            sb.append(apkDisplayInfo.getAppVersion());
            sb.append("\n");
            sb.append("开发者：");
            sb.append(apkDisplayInfo.getDevName());
            sb.append("\n");
            sb.append("更新时间：");
            sb.append(apkDisplayInfo.getUpdateTime());
            this.n.setText(sb);
        } else {
            this.m.setVisibility(8);
        }
        if (this.u == 1 || this.w == 1) {
            this.q.setVisibility(8);
        } else {
            this.q.initView(this.M.getAdCall());
        }
        if (this.t == 1) {
            setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.splash.view.MBSplashNativeView.6
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    MBSplashNativeView.a(MBSplashNativeView.this, 1);
                }
            });
        } else {
            this.q.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.splash.view.MBSplashNativeView.7
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    MBSplashNativeView.a(MBSplashNativeView.this, 0);
                }
            });
        }
        this.o.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.splash.view.MBSplashNativeView.8
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (MBSplashNativeView.this.M.getApkDisplayInfo() != null) {
                    String priUrl = MBSplashNativeView.this.M.getApkDisplayInfo().getPriUrl();
                    if (TextUtils.isEmpty(priUrl)) {
                        return;
                    }
                    com.mbridge.msdk.click.c.b(MBSplashNativeView.this.getContext(), priUrl);
                }
            }
        });
        this.p.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.splash.view.MBSplashNativeView.9
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (MBSplashNativeView.this.L.getSplashJSBridgeImpl() != null && MBSplashNativeView.this.L.getSplashJSBridgeImpl().a() != null) {
                    MBSplashNativeView.this.L.getSplashJSBridgeImpl().a().a(1, MBSplashNativeView.this.r);
                }
                e.a().a("", MBSplashNativeView.this.M, MBSplashNativeView.this.getContext(), MBSplashNativeView.this.J, new com.mbridge.msdk.widget.dialog.a() { // from class: com.mbridge.msdk.splash.view.MBSplashNativeView.9.1
                    @Override // com.mbridge.msdk.widget.dialog.a
                    public final void a() {
                        MBSplashNativeView.a(MBSplashNativeView.this, 0);
                    }

                    @Override // com.mbridge.msdk.widget.dialog.a
                    public final void b() {
                        if (MBSplashNativeView.this.L.getSplashJSBridgeImpl() == null || MBSplashNativeView.this.L.getSplashJSBridgeImpl().a() == null) {
                            return;
                        }
                        MBSplashNativeView.this.L.getSplashJSBridgeImpl().a().a(2, MBSplashNativeView.this.r);
                    }

                    @Override // com.mbridge.msdk.widget.dialog.a
                    public final void c() {
                        a();
                    }
                });
            }
        });
        this.f.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.splash.view.MBSplashNativeView.10
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (MBSplashNativeView.this.G) {
                    if (MBSplashNativeView.this.L.getSplashJSBridgeImpl() != null && MBSplashNativeView.this.L.getSplashJSBridgeImpl().a() != null) {
                        MBSplashNativeView.this.L.getSplashJSBridgeImpl().a().a();
                    }
                    MBSplashNativeView.this.f.setVisibility(4);
                    MBSplashNativeView.this.f.setEnabled(false);
                }
            }
        });
        if (this.w == 1) {
            MBShakeView mBShakeView = new MBShakeView(getContext());
            this.N = mBShakeView;
            mBShakeView.initView(this.M.getAdCall());
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
            layoutParams.addRule(13);
            this.N.setLayoutParams(layoutParams);
            addView(this.N);
            this.q.setVisibility(4);
            this.q.setEnabled(false);
            this.N.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.splash.view.MBSplashNativeView.2
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    MBSplashNativeView.a(MBSplashNativeView.this, 0);
                }
            });
            this.R = new b(this.x, this.y * 1000) { // from class: com.mbridge.msdk.splash.view.MBSplashNativeView.3
                @Override // com.mbridge.msdk.shake.b
                public final void a() {
                    if ((e.a().d() != null && e.a().d().isShowing()) || MBSplashNativeView.this.I || MBSplashNativeView.this.H) {
                        return;
                    }
                    MBSplashNativeView.a(MBSplashNativeView.this, 4);
                }
            };
        }
        updateCountDown(this.r);
    }

    public void updateCountDown(int i) {
        String str;
        if (this.f != null) {
            this.s = i;
            if (this.G) {
                str = this.P + " " + i + this.O;
            } else {
                str = i + this.O + " " + this.Q;
            }
            this.f.setText(str);
        }
    }

    public void setIsPause(boolean z) {
        this.H = z;
    }

    public void setNotchPadding(int i, int i2, int i3, int i4) {
        try {
            if (this.c == null) {
                return;
            }
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.c.getLayoutParams();
            layoutParams.leftMargin = this.B + i;
            layoutParams.rightMargin = this.B + i2;
            layoutParams.topMargin = this.B + i3;
            layoutParams.bottomMargin = this.B + i4;
        } catch (Throwable th) {
            z.d("MBSplashNativeView", th.getMessage());
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        try {
            if (this.w != 1 || this.N == null || this.R == null) {
                return;
            }
            com.mbridge.msdk.shake.a.a().a(this.R);
        } catch (Throwable th) {
            z.d("MBSplashNativeView", th.getMessage());
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

    public void release() {
        try {
            if (this.R != null) {
                com.mbridge.msdk.shake.a.a().b(this.R);
                this.R = null;
            }
            com.mbridge.msdk.foundation.b.b.a().c(this.J);
            detachAllViewsFromParent();
        } catch (Exception e) {
            z.d("MBSplashNativeView", e.getMessage());
        }
    }

    static /* synthetic */ void g(MBSplashNativeView mBSplashNativeView) {
        if (!TextUtils.isEmpty(mBSplashNativeView.M.getIconUrl())) {
            com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(mBSplashNativeView.M.getIconUrl(), new com.mbridge.msdk.foundation.same.c.c() { // from class: com.mbridge.msdk.splash.view.MBSplashNativeView.4
                @Override // com.mbridge.msdk.foundation.same.c.c
                public final void onSuccessLoad(Bitmap bitmap, String str) {
                    Bitmap bitmapA;
                    if (bitmap != null) {
                        try {
                        } catch (Throwable th) {
                            z.d("MBSplashNativeView", th.getMessage());
                        }
                        if (bitmap.isRecycled()) {
                            return;
                        }
                        try {
                            if (MBSplashNativeView.this.h == null || (bitmapA = y.a(bitmap, 1, ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 40.0f))) == null || bitmapA.isRecycled()) {
                                return;
                            }
                            MBSplashNativeView.this.h.setImageBitmap(bitmapA);
                            return;
                        } catch (Throwable th2) {
                            z.d("MBSplashNativeView", th2.getMessage());
                            MBSplashNativeView.this.h.setImageBitmap(bitmap);
                            return;
                        }
                        z.d("MBSplashNativeView", th.getMessage());
                    }
                }

                @Override // com.mbridge.msdk.foundation.same.c.c
                public final void onFailedLoad(String str, String str2) {
                    MBSplashNativeView.this.h.setVisibility(4);
                }
            });
        } else {
            mBSplashNativeView.h.setVisibility(4);
        }
    }

    static /* synthetic */ void a(MBSplashNativeView mBSplashNativeView, int i) {
        if (mBSplashNativeView.L.getSplashJSBridgeImpl() == null || mBSplashNativeView.L.getSplashJSBridgeImpl().a() == null) {
            return;
        }
        try {
            mBSplashNativeView.L.getSplashJSBridgeImpl().a().a(com.mbridge.msdk.splash.a.a.a.a(com.mbridge.msdk.splash.a.a.a.a(i, mBSplashNativeView.C, mBSplashNativeView.D), mBSplashNativeView.M));
        } catch (Throwable th) {
            z.d("MBSplashNativeView", th.getMessage());
            mBSplashNativeView.L.getSplashJSBridgeImpl().a().a(mBSplashNativeView.M);
        }
    }

    static /* synthetic */ void c(MBSplashNativeView mBSplashNativeView, boolean z) {
        if (mBSplashNativeView.L.getSplashJSBridgeImpl() == null || mBSplashNativeView.L.getSplashJSBridgeImpl().a() == null) {
            return;
        }
        mBSplashNativeView.L.getSplashJSBridgeImpl().a().a(z ? 2 : 1, mBSplashNativeView.s);
    }
}
