package com.mbridge.msdk.video.module;

import android.content.Context;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.os.Build;
import android.renderscript.Allocation;
import android.renderscript.Element;
import android.renderscript.RenderScript;
import android.renderscript.ScriptIntrinsicBlur;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AlphaAnimation;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.mbridge.msdk.dycreator.baseview.MBHeatLevelLayoutView;
import com.mbridge.msdk.dycreator.baseview.MBStarLevelLayoutView;
import com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.CampaignUnit;
import com.mbridge.msdk.foundation.same.c.c;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.confirmation.e;
import com.mbridge.msdk.shake.MBShakeView;
import com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView;
import com.mbridge.msdk.video.js.factory.b;
import com.mbridge.msdk.video.module.a.a.i;
import com.mbridge.msdk.videocommon.view.RoundImageView;
import com.mbridge.msdk.videocommon.view.StarLevelView;
import com.mbridge.msdk.widget.FeedBackButton;
import com.mbridge.msdk.widget.MBDownloadProgressBar;
import java.util.Locale;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class MBridgeNativeEndCardView extends MBridgeBaseView {
    private LinearLayout A;
    private FeedBackButton B;
    private Runnable C;
    private RelativeLayout D;
    private b E;
    private boolean F;
    private boolean G;
    private int H;
    private boolean I;
    private boolean J;
    private boolean K;
    private AlphaAnimation L;
    private int M;
    private int N;
    private int O;
    private int P;
    private boolean Q;
    private Bitmap R;
    private View S;
    private MBDownloadProgressBar T;
    private boolean U;
    private String V;
    private CampaignUnit W;
    private MBShakeView aa;
    private com.mbridge.msdk.shake.b ab;
    private MBridgeBaitClickView ac;
    private int ad;
    private ViewGroup n;
    private ViewGroup o;
    private RelativeLayout p;
    private RelativeLayout q;
    private ImageView r;
    private ImageView s;
    private ImageView t;
    private ImageView u;
    private ImageView v;
    private TextView w;
    private TextView x;
    private TextView y;
    private LinearLayout z;

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    public void init(Context context) {
    }

    public void setCloseBtnDelay(int i) {
        this.H = i;
    }

    public void setUnitId(String str) {
        this.V = str;
    }

    public MBridgeNativeEndCardView(Context context) {
        super(context);
        this.F = false;
        this.G = false;
        this.H = 0;
        this.I = false;
        this.J = false;
        this.K = false;
        this.Q = false;
        this.ad = 1;
    }

    public MBridgeNativeEndCardView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.F = false;
        this.G = false;
        this.H = 0;
        this.I = false;
        this.J = false;
        this.K = false;
        this.Q = false;
        this.ad = 1;
    }

    public MBridgeNativeEndCardView(Context context, AttributeSet attributeSet, boolean z, int i, boolean z2, int i2, int i3) {
        super(context, attributeSet, z, i, z2, i2, i3);
        this.F = false;
        this.G = false;
        this.H = 0;
        this.I = false;
        this.J = false;
        this.K = false;
        this.Q = false;
        this.ad = 1;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        int i;
        int i2;
        int i3;
        super.onAttachedToWindow();
        if (this.C == null) {
            this.C = new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.1
                @Override // java.lang.Runnable
                public final void run() {
                    MBridgeNativeEndCardView.this.G = true;
                    if (MBridgeNativeEndCardView.this.S != null) {
                        MBridgeNativeEndCardView.this.S.setVisibility(0);
                    }
                }
            };
        }
        Runnable runnable = this.C;
        if (runnable != null) {
            postDelayed(runnable, this.H * 1000);
            if (!this.J) {
                this.J = true;
            }
            try {
                if (this.b != null && this.b.isDynamicView()) {
                    String endScreenUrl = this.b.getendcard_url();
                    if (TextUtils.isEmpty(endScreenUrl)) {
                        endScreenUrl = this.b.getEndScreenUrl();
                    }
                    String strA = ak.a(endScreenUrl, "alac");
                    if (!TextUtils.isEmpty(strA) && strA.equals("1")) {
                        postDelayed(new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.8
                            @Override // java.lang.Runnable
                            public final void run() {
                                MBridgeNativeEndCardView.a(MBridgeNativeEndCardView.this, 2);
                            }
                        }, 1000L);
                    }
                }
            } catch (Throwable th) {
                z.d(MBridgeBaseView.TAG, th.getMessage());
            }
        }
        try {
            if (this.b != null && this.b.isDynamicView()) {
                String endScreenUrl2 = this.b.getendcard_url();
                if (TextUtils.isEmpty(endScreenUrl2)) {
                    endScreenUrl2 = this.b.getEndScreenUrl();
                }
                String strA2 = ak.a(endScreenUrl2, "bait_click");
                try {
                    i3 = Integer.parseInt(strA2);
                } catch (Throwable th2) {
                    z.d(MBridgeBaseView.TAG, th2.getMessage());
                    i3 = 1;
                }
                if (!TextUtils.isEmpty(strA2) && i3 != 0 && this.ac != null) {
                    this.ac.setVisibility(0);
                    this.ac.init(1342177280, i3);
                    this.ac.startAnimation();
                    this.ac.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.7
                        @Override // android.view.View.OnClickListener
                        public final void onClick(View view) {
                            MBridgeNativeEndCardView.a(MBridgeNativeEndCardView.this, 0);
                        }
                    });
                }
            }
        } catch (Throwable th3) {
            z.d(MBridgeBaseView.TAG, th3.getMessage());
        }
        try {
            if (this.b != null && this.b.isDynamicView()) {
                String endScreenUrl3 = this.b.getendcard_url();
                if (TextUtils.isEmpty(endScreenUrl3)) {
                    endScreenUrl3 = this.b.getEndScreenUrl();
                }
                String strA3 = ak.a(endScreenUrl3, "shake_show");
                String strA4 = ak.a(endScreenUrl3, "shake_strength");
                String strA5 = ak.a(endScreenUrl3, "shake_time");
                if (!TextUtils.isEmpty(strA3) && strA3.equals("1") && this.aa == null) {
                    if (this.ac != null) {
                        this.ac.setVisibility(8);
                    }
                    MBShakeView mBShakeView = new MBShakeView(getContext());
                    this.aa = mBShakeView;
                    mBShakeView.initView(this.b.getAdCall(), true);
                    RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
                    if (!isLandscape()) {
                        layoutParams.addRule(2, filterFindViewId(this.Q, "mbridge_iv_logo"));
                        layoutParams.addRule(14);
                        this.aa.setPadding(0, 0, 0, ae.b(getContext(), 20.0f));
                    } else {
                        layoutParams.addRule(13);
                    }
                    this.aa.setLayoutParams(layoutParams);
                    if (this.p != null && this.p.isShown()) {
                        this.p.addView(this.aa);
                        if (this.T != null) {
                            this.T.setVisibility(4);
                        }
                        this.aa.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.5
                            @Override // android.view.View.OnClickListener
                            public final void onClick(View view) {
                                MBridgeNativeEndCardView.a(MBridgeNativeEndCardView.this, 0);
                            }
                        });
                        int i4 = 10;
                        if (!TextUtils.isEmpty(strA4) && (i2 = Integer.parseInt(strA4)) > 0) {
                            i4 = i2;
                        }
                        int i5 = 5000;
                        if (!TextUtils.isEmpty(strA5) && (i = Integer.parseInt(strA5)) > 0) {
                            i5 = i * 1000;
                        }
                        this.ab = new com.mbridge.msdk.shake.b(i4, i5) { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.6
                            @Override // com.mbridge.msdk.shake.b
                            public final void a() {
                                if ((e.a().d() == null || !e.a().d().isShowing()) && !MBridgeNativeEndCardView.this.K && MBridgeNativeEndCardView.this.J) {
                                    MBridgeNativeEndCardView.this.g = 0.0f;
                                    MBridgeNativeEndCardView.this.h = 0.0f;
                                    MBridgeNativeEndCardView.a(MBridgeNativeEndCardView.this, 4);
                                }
                            }
                        };
                        com.mbridge.msdk.shake.a.a().a(this.ab);
                    }
                }
            }
        } catch (Throwable th4) {
            z.d(MBridgeBaseView.TAG, th4.getMessage());
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Runnable runnable = this.C;
        if (runnable != null) {
            removeCallbacks(runnable);
        }
        if (this.ab != null) {
            com.mbridge.msdk.shake.a.a().b(this.ab);
            this.ab = null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:28:0x0059  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void setLayout() {
        /*
            r6 = this;
            boolean r0 = r6.i
            if (r0 == 0) goto L25
            com.mbridge.msdk.video.dynview.j.c r0 = new com.mbridge.msdk.video.dynview.j.c
            r0.<init>()
            android.content.Context r1 = r6.getContext()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.b
            int r3 = r6.j
            java.lang.String r4 = "cn_"
            com.mbridge.msdk.video.dynview.c r0 = r0.a(r1, r2, r3, r4)
            com.mbridge.msdk.video.dynview.b r1 = com.mbridge.msdk.video.dynview.b.a()
            com.mbridge.msdk.video.module.MBridgeNativeEndCardView$9 r2 = new com.mbridge.msdk.video.module.MBridgeNativeEndCardView$9
            r2.<init>()
            r1.a(r0, r2)
            goto L94
        L25:
            int r0 = r6.ad
            java.lang.String r1 = "mbridge_reward_endcard_native_half_landscape"
            java.lang.String r2 = "mbridge_reward_endcard_native_land"
            java.lang.String r3 = "mbridge_reward_endcard_native_half_portrait"
            java.lang.String r4 = "mbridge_reward_endcard_native_hor"
            if (r0 != 0) goto L42
            boolean r0 = r6.U
            if (r0 == 0) goto L36
            goto L37
        L36:
            r3 = r4
        L37:
            boolean r0 = r6.isLandscape()
            if (r0 == 0) goto L5b
            boolean r0 = r6.U
            if (r0 == 0) goto L59
            goto L5a
        L42:
            r5 = 1
            if (r0 != r5) goto L4c
            boolean r0 = r6.U
            if (r0 == 0) goto L4a
            goto L4f
        L4a:
            r3 = r4
            goto L4f
        L4c:
            java.lang.String r0 = ""
            r3 = r0
        L4f:
            int r0 = r6.ad
            r4 = 2
            if (r0 != r4) goto L5b
            boolean r0 = r6.U
            if (r0 == 0) goto L59
            goto L5a
        L59:
            r1 = r2
        L5a:
            r3 = r1
        L5b:
            int r0 = r6.findLayout(r3)
            if (r0 <= 0) goto L94
            boolean r1 = r6.isLandscape()
            r2 = 0
            if (r1 == 0) goto L7c
            android.view.LayoutInflater r1 = r6.c
            android.view.View r0 = r1.inflate(r0, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.o = r0
            r6.addView(r0)
            android.view.ViewGroup r0 = r6.o
            boolean r0 = r6.b(r0)
            goto L8f
        L7c:
            android.view.LayoutInflater r1 = r6.c
            android.view.View r0 = r1.inflate(r0, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.n = r0
            r6.addView(r0)
            android.view.ViewGroup r0 = r6.n
            boolean r0 = r6.b(r0)
        L8f:
            r6.f = r0
            r6.a()
        L94:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.setLayout():void");
    }

    public void preLoadData(b bVar) {
        this.E = bVar;
        try {
            if (this.b == null || !this.f) {
                return;
            }
            com.mbridge.msdk.foundation.same.c.b.a(this.f4304a.getApplicationContext()).a(this.b.getImageUrl(), new c() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.10
                @Override // com.mbridge.msdk.foundation.same.c.c
                public final void onFailedLoad(String str, String str2) {
                }

                @Override // com.mbridge.msdk.foundation.same.c.c
                public final void onSuccessLoad(Bitmap bitmap, String str) {
                    if (bitmap == null || bitmap.isRecycled()) {
                        return;
                    }
                    try {
                        if (MBridgeNativeEndCardView.this.s != null) {
                            if (MBridgeNativeEndCardView.this.i) {
                                MBridgeNativeEndCardView.this.s.setBackground(null);
                            }
                            MBridgeNativeEndCardView.this.s.setImageBitmap(bitmap);
                        }
                        MBridgeNativeEndCardView.a(MBridgeNativeEndCardView.this, bitmap);
                    } catch (Throwable unused) {
                        if (MBridgeNativeEndCardView.this.r != null) {
                            MBridgeNativeEndCardView.this.r.setVisibility(4);
                        }
                    }
                }
            });
            com.mbridge.msdk.foundation.same.c.b.a(this.f4304a.getApplicationContext()).a(this.b.getIconUrl(), new i(this.t, ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 8.0f)));
            this.w.setText(this.b.getAppName());
            if (this.T != null) {
                this.T.setText(this.b.getAdCall());
            }
            if (this.x != null) {
                this.x.setText(this.b.getAppDesc());
            }
            if (this.y != null) {
                this.y.setText(this.b.getNumberRating() + ")");
            }
            this.z.removeAllViews();
            double rating = this.b.getRating();
            if (rating <= 0.0d) {
                rating = 5.0d;
            }
            if (this.z instanceof StarLevelView) {
                ((StarLevelView) this.z).initScore(rating);
            }
            if (this.z instanceof MBridgeLevelLayoutView) {
                ((MBridgeLevelLayoutView) this.z).setRatingAndUser(rating, this.b.getNumberRating());
            }
            if (this.z instanceof MBStarLevelLayoutView) {
                ((MBStarLevelLayoutView) this.z).setRating((int) rating);
            }
            if (this.A != null && (this.A instanceof MBHeatLevelLayoutView)) {
                ((MBHeatLevelLayoutView) this.A).setHeatCount(this.b.getNumberRating());
            }
            if (!TextUtils.isEmpty(this.b.getendcard_url()) && this.b.getendcard_url().contains("alecfc=1")) {
                this.F = true;
            }
            String language = Locale.getDefault().getLanguage();
            if (!TextUtils.isEmpty(language) && language.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
                this.u.setImageDrawable(getResources().getDrawable(getResources().getIdentifier("mbridge_reward_flag_cn", com.tkay.expressad.foundation.h.i.c, com.mbridge.msdk.foundation.controller.a.f().d())));
            } else {
                this.u.setImageDrawable(getResources().getDrawable(getResources().getIdentifier("mbridge_reward_flag_en", com.tkay.expressad.foundation.h.i.c, com.mbridge.msdk.foundation.controller.a.f().d())));
            }
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB != null) {
                final String strAz = aVarB.az();
                if (TextUtils.isEmpty(strAz)) {
                    this.v.setVisibility(8);
                }
                this.v.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.11
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        com.mbridge.msdk.click.c.b(MBridgeNativeEndCardView.this.f4304a, strAz);
                    }
                });
            } else {
                this.v.setVisibility(8);
            }
            if (!this.G) {
                this.S.setVisibility(8);
            }
            if (Build.VERSION.SDK_INT >= 17 || this.r == null) {
                return;
            }
            this.r.setVisibility(8);
        } catch (Throwable th) {
            z.a(MBridgeBaseView.TAG, th.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a() {
        c();
        if (!this.f) {
            this.e.a(104, "");
        }
        AlphaAnimation alphaAnimation = new AlphaAnimation(0.0f, 100.0f);
        this.L = alphaAnimation;
        alphaAnimation.setDuration(200L);
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    public void onSelfConfigurationChanged(Configuration configuration) {
        super.onSelfConfigurationChanged(configuration);
        if (this.b == null || !this.b.isDynamicView()) {
            RelativeLayout relativeLayout = this.D;
            if (relativeLayout != null) {
                relativeLayout.setVisibility(4);
            }
            this.d = configuration.orientation;
            z.d(MBridgeBaseView.TAG, " native onSelfConfigurationChanged:" + this.d);
            if (this.d == 2) {
                removeView(this.n);
                a(this.o);
            } else {
                removeView(this.o);
                a(this.n);
            }
        }
    }

    public boolean canBackPress() {
        View view = this.S;
        return view != null && view.getVisibility() == 0;
    }

    public void notifyShowListener() {
        this.e.a(110, "");
    }

    private void a(View view) {
        if (view == null) {
            setLayout();
            preLoadData(this.E);
        } else {
            if (view.getParent() != null) {
                ((ViewGroup) view.getParent()).removeView(view);
            }
            addView(view);
            b(view);
            c();
        }
        b();
    }

    @Override // com.mbridge.msdk.video.module.MBridgeBaseView
    protected final void c() {
        if (this.f) {
            this.p.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.13
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    if (MBridgeNativeEndCardView.this.F) {
                        MBridgeNativeEndCardView.a(MBridgeNativeEndCardView.this, 1);
                    }
                }
            });
            this.S.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.14
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    if (MBridgeNativeEndCardView.this.i) {
                        try {
                            com.mbridge.msdk.foundation.same.f.b.b().execute(new a(MBridgeNativeEndCardView.this.V, MBridgeNativeEndCardView.this.b));
                        } catch (Exception unused) {
                        }
                        try {
                            com.mbridge.msdk.video.dynview.moffer.a.a().b();
                        } catch (Exception e) {
                            z.d(MBridgeBaseView.TAG, e.getMessage());
                        }
                    }
                    MBridgeNativeEndCardView.this.e.a(104, "");
                }
            });
            MBDownloadProgressBar mBDownloadProgressBar = this.T;
            if (mBDownloadProgressBar != null) {
                mBDownloadProgressBar.setOnClickListener(new com.mbridge.msdk.widget.a() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.15
                    @Override // com.mbridge.msdk.widget.a
                    protected final void a(View view) {
                        MBridgeNativeEndCardView.a(MBridgeNativeEndCardView.this, 0);
                    }
                });
            }
            this.t.setOnClickListener(new com.mbridge.msdk.widget.a() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.16
                @Override // com.mbridge.msdk.widget.a
                protected final void a(View view) {
                    if (MBridgeNativeEndCardView.this.T == null || !MBridgeNativeEndCardView.this.T.NotProgressBarInterceptedClick()) {
                        return;
                    }
                    MBridgeNativeEndCardView.a(MBridgeNativeEndCardView.this, 0);
                }
            });
            this.s.setOnClickListener(new com.mbridge.msdk.widget.a() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.2
                @Override // com.mbridge.msdk.widget.a
                protected final void a(View view) {
                    if (MBridgeNativeEndCardView.this.T == null || !MBridgeNativeEndCardView.this.T.NotProgressBarInterceptedClick()) {
                        return;
                    }
                    MBridgeNativeEndCardView.a(MBridgeNativeEndCardView.this, 0);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean b(View view) {
        try {
            this.p = (RelativeLayout) view.findViewById(filterFindViewId(this.Q, "mbridge_native_ec_layout"));
            this.q = (RelativeLayout) view.findViewById(filterFindViewId(this.Q, "mbridge_native_ec_layer_layout"));
            this.s = (ImageView) view.findViewById(filterFindViewId(this.Q, "mbridge_iv_adbanner"));
            this.t = (ImageView) view.findViewById(filterFindViewId(this.Q, "mbridge_iv_icon"));
            this.u = (ImageView) view.findViewById(filterFindViewId(this.Q, "mbridge_iv_flag"));
            this.v = (ImageView) view.findViewById(filterFindViewId(this.Q, "mbridge_iv_link"));
            this.w = (TextView) view.findViewById(filterFindViewId(this.Q, "mbridge_tv_apptitle"));
            this.z = (LinearLayout) view.findViewById(filterFindViewId(this.Q, "mbridge_sv_starlevel"));
            this.A = (LinearLayout) view.findViewById(filterFindViewId(this.Q, "mbridge_sv_heat_count_level"));
            this.S = view.findViewById(filterFindViewId(this.Q, "mbridge_iv_close"));
            View viewFindViewById = view.findViewById(filterFindViewId(this.Q, "mbridge_tv_cta"));
            if (viewFindViewById != null && (viewFindViewById instanceof MBDownloadProgressBar)) {
                this.T = (MBDownloadProgressBar) viewFindViewById;
            }
            this.B = (FeedBackButton) view.findViewById(filterFindViewId(this.Q, "mbridge_native_endcard_feed_btn"));
            this.D = (RelativeLayout) view.findViewById(filterFindViewId(this.Q, "mbridge_native_ec_controller"));
            this.r = (ImageView) view.findViewById(filterFindViewId(this.Q, "mbridge_iv_adbanner_bg"));
            this.ac = (MBridgeBaitClickView) findViewById(filterFindViewId(this.Q, "mbridge_animation_click_view"));
            if (this.i) {
                if (this.s != null && (this.s instanceof RoundImageView)) {
                    ((RoundImageView) this.s).setBorderRadius(10);
                }
                if (this.t != null && (this.t instanceof RoundImageView)) {
                    ((RoundImageView) this.t).setBorderRadius(10);
                }
                return isNotNULL(this.r, this.s, this.t, this.w, this.z, this.S);
            }
            this.x = (TextView) view.findViewById(filterFindViewId(this.Q, "mbridge_tv_appdesc"));
            TextView textView = (TextView) view.findViewById(filterFindViewId(this.Q, "mbridge_tv_number"));
            this.y = textView;
            return isNotNULL(this.r, this.s, this.t, this.w, this.x, textView, this.z, this.S, this.T);
        } catch (Throwable th) {
            z.c(MBridgeBaseView.TAG, th.getMessage(), th);
            return false;
        }
    }

    public Bitmap blurBitmap(Bitmap bitmap) {
        try {
            Bitmap bitmapCreateBitmap = Bitmap.createBitmap(bitmap.getWidth(), bitmap.getHeight(), Bitmap.Config.ARGB_4444);
            RenderScript renderScriptCreate = RenderScript.create(this.f4304a.getApplicationContext());
            ScriptIntrinsicBlur scriptIntrinsicBlurCreate = ScriptIntrinsicBlur.create(renderScriptCreate, Element.U8_4(renderScriptCreate));
            Allocation allocationCreateFromBitmap = Allocation.createFromBitmap(renderScriptCreate, bitmap);
            Allocation allocationCreateFromBitmap2 = Allocation.createFromBitmap(renderScriptCreate, bitmapCreateBitmap);
            scriptIntrinsicBlurCreate.setRadius(25.0f);
            scriptIntrinsicBlurCreate.setInput(allocationCreateFromBitmap);
            scriptIntrinsicBlurCreate.forEach(allocationCreateFromBitmap2);
            allocationCreateFromBitmap2.copyTo(bitmapCreateBitmap);
            renderScriptCreate.destroy();
            return bitmapCreateBitmap;
        } catch (Throwable unused) {
            return null;
        }
    }

    public void setNotchPadding(int i, int i2, int i3, int i4) {
        z.d(MBridgeBaseView.TAG, "NOTCH NativeEndCard " + String.format("%1s-%2s-%3s-%4s", Integer.valueOf(i), Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4)));
        this.M = i;
        this.N = i2;
        this.O = i3;
        this.P = i4;
        b();
    }

    private void b() {
        RelativeLayout relativeLayout;
        if (!this.f || (relativeLayout = this.D) == null) {
            return;
        }
        relativeLayout.postDelayed(new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.3
            @Override // java.lang.Runnable
            public final void run() {
                if (MBridgeNativeEndCardView.this.D != null) {
                    if (MBridgeNativeEndCardView.this.b != null && !MBridgeNativeEndCardView.this.b.isDynamicView() && MBridgeNativeEndCardView.this.b.getAdSpaceT() != 2) {
                        MBridgeNativeEndCardView.this.D.setPadding(MBridgeNativeEndCardView.this.M, MBridgeNativeEndCardView.this.O, MBridgeNativeEndCardView.this.N, MBridgeNativeEndCardView.this.P);
                        MBridgeNativeEndCardView.this.D.startAnimation(MBridgeNativeEndCardView.this.L);
                    }
                    MBridgeNativeEndCardView.this.D.setVisibility(0);
                }
                if (MBridgeNativeEndCardView.this.S != null && MBridgeNativeEndCardView.this.S.getVisibility() != 0 && MBridgeNativeEndCardView.this.G) {
                    MBridgeNativeEndCardView.this.S.setVisibility(0);
                }
                MBridgeNativeEndCardView.p(MBridgeNativeEndCardView.this);
            }
        }, 200L);
    }

    public void setMoreOfferCampaignUnit(CampaignUnit campaignUnit) {
        MBShakeView mBShakeView;
        if (this.b == null || !this.b.isDynamicView()) {
            return;
        }
        this.W = campaignUnit;
        if (campaignUnit == null || campaignUnit.getAds() == null || this.W.getAds().size() <= 5 || (mBShakeView = this.aa) == null) {
            return;
        }
        mBShakeView.setPadding(0, 0, 0, ae.b(getContext(), 5.0f));
    }

    public void clearMoreOfferBitmap() {
        CampaignUnit campaignUnit;
        if (this.b == null || !this.b.isDynamicView() || (campaignUnit = this.W) == null || campaignUnit.getAds() == null || this.W.getAds().size() <= 0) {
            return;
        }
        for (CampaignEx campaignEx : this.W.getAds()) {
            if (!TextUtils.isEmpty(campaignEx.getIconUrl())) {
                com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).c(campaignEx.getIconUrl());
            }
        }
    }

    public void release() {
        try {
            removeAllViews();
            if (this.L != null) {
                this.L.cancel();
            }
            this.C = null;
        } catch (Exception e) {
            z.d(MBridgeBaseView.TAG, e.getMessage());
        }
    }

    private static class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f4345a;
        private final CampaignEx b;

        public a(String str, CampaignEx campaignEx) {
            this.f4345a = str;
            this.b = campaignEx;
        }

        @Override // java.lang.Runnable
        public final void run() throws Throwable {
            String strA;
            CampaignEx campaignEx;
            String str;
            String str2;
            String id;
            String requestIdNotice;
            String str3;
            String str4;
            String str5;
            String str6;
            String requestId;
            strA = "";
            if (TextUtils.isEmpty(this.f4345a) || (campaignEx = this.b) == null) {
                return;
            }
            try {
                String str7 = this.f4345a;
                if (TextUtils.isEmpty(str7) || campaignEx == null) {
                    return;
                }
                String strA2 = null;
                String strA3 = null;
                try {
                    try {
                        requestId = campaignEx.getRequestId();
                        try {
                            id = campaignEx.getId();
                            try {
                                requestIdNotice = campaignEx.getRequestIdNotice();
                                try {
                                    CampaignEx.c rewardTemplateMode = campaignEx.getRewardTemplateMode();
                                    if (rewardTemplateMode != null) {
                                        try {
                                            String strE = rewardTemplateMode.e();
                                            String strValueOf = String.valueOf(rewardTemplateMode.b());
                                            try {
                                                strA = TextUtils.isEmpty(strE) ? "" : ak.a(strE, com.tkay.expressad.video.dynview.a.a.L);
                                                str3 = strValueOf;
                                            } catch (Throwable th) {
                                                th = th;
                                                str3 = strValueOf;
                                                str2 = strA3;
                                                strA3 = requestId;
                                                str = strA;
                                                com.mbridge.msdk.video.module.b.a.a(str7, strA3, str, (String) null, str2, id, requestIdNotice, str3);
                                                throw th;
                                            }
                                        } catch (Throwable th2) {
                                            th = th2;
                                            str3 = "";
                                            str2 = null;
                                            strA3 = requestId;
                                            str = str3;
                                            com.mbridge.msdk.video.module.b.a.a(str7, strA3, str, (String) null, str2, id, requestIdNotice, str3);
                                            throw th;
                                        }
                                    } else {
                                        str3 = "";
                                    }
                                } catch (Throwable th3) {
                                    th = th3;
                                    str2 = null;
                                    str3 = null;
                                }
                            } catch (Throwable th4) {
                                th = th4;
                                str2 = null;
                                requestIdNotice = null;
                                str3 = requestIdNotice;
                                strA3 = requestId;
                                str = str3;
                                com.mbridge.msdk.video.module.b.a.a(str7, strA3, str, (String) null, str2, id, requestIdNotice, str3);
                                throw th;
                            }
                        } catch (Throwable th5) {
                            th = th5;
                            str2 = null;
                            id = null;
                            requestIdNotice = null;
                        }
                    } catch (Exception unused) {
                        str4 = "";
                        id = "";
                        requestIdNotice = "";
                        str3 = "";
                        str5 = "";
                        str6 = "";
                        strA2 = "";
                    }
                } catch (Throwable th6) {
                    th = th6;
                    str = null;
                    str2 = null;
                    id = null;
                    requestIdNotice = null;
                    str3 = null;
                }
                try {
                    String str8 = campaignEx.getendcard_url();
                    if (!TextUtils.isEmpty(str8)) {
                        strA3 = ak.a(str8, "ec_id");
                        strA2 = ak.a(str8, "mof");
                    }
                    str6 = strA3;
                    str4 = requestId;
                    str5 = strA;
                    com.mbridge.msdk.video.module.b.a.a(str7, str4, str5, strA2, str6, id, requestIdNotice, str3);
                } catch (Throwable th7) {
                    th = th7;
                    str2 = strA3;
                    strA3 = requestId;
                    str = strA;
                    com.mbridge.msdk.video.module.b.a.a(str7, strA3, str, (String) null, str2, id, requestIdNotice, str3);
                    throw th;
                }
            } catch (Exception unused2) {
            }
        }
    }

    public void setOnResume() {
        this.J = true;
    }

    public void setOnPause() {
        this.J = false;
    }

    public boolean isDyXmlSuccess() {
        return this.Q;
    }

    static /* synthetic */ void a(MBridgeNativeEndCardView mBridgeNativeEndCardView, final Bitmap bitmap) {
        try {
            Runnable runnable = new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.12
                @Override // java.lang.Runnable
                public final void run() {
                    MBridgeNativeEndCardView mBridgeNativeEndCardView2 = MBridgeNativeEndCardView.this;
                    mBridgeNativeEndCardView2.R = mBridgeNativeEndCardView2.blurBitmap(bitmap);
                    if (MBridgeNativeEndCardView.this.R == null || MBridgeNativeEndCardView.this.R.isRecycled() || MBridgeNativeEndCardView.this.r == null) {
                        return;
                    }
                    MBridgeNativeEndCardView.this.r.post(new Runnable() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.12.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            if (MBridgeNativeEndCardView.this.i) {
                                MBridgeNativeEndCardView.this.r.setBackground(null);
                            }
                            z.d("async", "执行异步加载图");
                            MBridgeNativeEndCardView.this.r.setImageBitmap(MBridgeNativeEndCardView.this.R);
                        }
                    });
                }
            };
            if (com.mbridge.msdk.foundation.same.f.b.d().getActiveCount() < 1) {
                com.mbridge.msdk.foundation.same.f.b.c().execute(runnable);
            }
        } catch (Exception e) {
            z.a(MBridgeBaseView.TAG, e.getMessage());
        }
    }

    static /* synthetic */ void a(MBridgeNativeEndCardView mBridgeNativeEndCardView, int i) {
        JSONObject jSONObject;
        if (mBridgeNativeEndCardView.b != null && mBridgeNativeEndCardView.b.isDynamicView()) {
            try {
                CampaignEx.c rewardTemplateMode = mBridgeNativeEndCardView.b.getRewardTemplateMode();
                String str = "";
                if (rewardTemplateMode != null) {
                    str = rewardTemplateMode.b() + "";
                }
                com.mbridge.msdk.foundation.same.report.e.a(mBridgeNativeEndCardView.f4304a, "end_card_click", mBridgeNativeEndCardView.b.getCampaignUnitId(), mBridgeNativeEndCardView.b.isBidCampaign(), mBridgeNativeEndCardView.b.getRequestId(), mBridgeNativeEndCardView.b.getRequestIdNotice(), mBridgeNativeEndCardView.b.getId(), str);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        JSONObject jSONObject2 = null;
        try {
            jSONObject = new JSONObject();
            try {
                jSONObject.put(com.mbridge.msdk.foundation.same.a.p, mBridgeNativeEndCardView.a(i));
                if (mBridgeNativeEndCardView.b.getDynamicTempCode() == 5) {
                    jSONObject.put("camp_position", 0);
                }
            } catch (JSONException e2) {
                e = e2;
                jSONObject2 = jSONObject;
                e.printStackTrace();
                jSONObject = jSONObject2;
            }
        } catch (JSONException e3) {
            e = e3;
        }
        mBridgeNativeEndCardView.e.a(105, jSONObject);
    }

    static /* synthetic */ void p(MBridgeNativeEndCardView mBridgeNativeEndCardView) {
        if (com.mbridge.msdk.foundation.b.b.a().b()) {
            mBridgeNativeEndCardView.b.setCampaignUnitId(mBridgeNativeEndCardView.V);
            com.mbridge.msdk.foundation.b.b.a().a(mBridgeNativeEndCardView.V + "_2", new com.mbridge.msdk.foundation.b.a() { // from class: com.mbridge.msdk.video.module.MBridgeNativeEndCardView.4
                @Override // com.mbridge.msdk.foundation.b.a
                public final void a() {
                    MBridgeNativeEndCardView.this.K = true;
                }

                @Override // com.mbridge.msdk.foundation.b.a
                public final void b() {
                    MBridgeNativeEndCardView.this.K = false;
                }

                @Override // com.mbridge.msdk.foundation.b.a
                public final void a(String str) {
                    MBridgeNativeEndCardView.this.K = false;
                }
            });
            com.mbridge.msdk.foundation.b.b.a().a(mBridgeNativeEndCardView.V + "_2", mBridgeNativeEndCardView.b);
            com.mbridge.msdk.foundation.b.b.a().c(mBridgeNativeEndCardView.V + "_1");
            if (mBridgeNativeEndCardView.B != null) {
                com.mbridge.msdk.foundation.b.b.a().a(mBridgeNativeEndCardView.V + "_2", mBridgeNativeEndCardView.B);
                return;
            }
            return;
        }
        FeedBackButton feedBackButton = mBridgeNativeEndCardView.B;
        if (feedBackButton != null) {
            feedBackButton.setVisibility(8);
        }
    }
}
