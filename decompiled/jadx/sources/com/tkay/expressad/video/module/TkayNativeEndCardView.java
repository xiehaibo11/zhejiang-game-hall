package com.tkay.expressad.video.module;

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
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.l;
import com.tkay.expressad.foundation.d.d;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.x;
import com.tkay.expressad.shake.MBShakeView;
import com.tkay.expressad.shake.a;
import com.tkay.expressad.video.dynview.f.h;
import com.tkay.expressad.video.dynview.j.c;
import com.tkay.expressad.video.dynview.widget.TYLevelLayoutView;
import com.tkay.expressad.video.dynview.widget.TkayBaitClickView;
import com.tkay.expressad.video.module.a.a.j;
import com.tkay.expressad.video.signal.f;
import com.tkay.expressad.video.signal.factory.b;
import com.tkay.expressad.videocommon.view.RoundImageView;
import com.tkay.expressad.videocommon.view.StarLevelView;
import com.tkay.expressad.widget.FeedBackButton;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class TkayNativeEndCardView extends TkayBaseView implements f {
    private static final String n = "tkay_reward_endcard_native_hor";
    private static final String o = "tkay_reward_endcard_native_land";
    private static final String p = "tkay_reward_endcard_native_half_portrait";
    private static final String q = "tkay_reward_endcard_native_half_landscape";
    private ImageView A;
    private TextView B;
    private TextView C;
    private TextView D;
    private LinearLayout E;
    private FeedBackButton F;
    private Runnable G;
    private RelativeLayout H;
    private b I;
    private boolean J;
    private boolean K;
    private int L;
    private boolean M;
    private boolean N;
    private boolean O;
    private AlphaAnimation P;
    private int Q;
    private int R;
    private int S;
    private int T;
    private boolean U;
    private View V;
    private TextView W;
    private boolean aa;
    private String ab;
    private d ac;
    private MBShakeView ad;
    private com.tkay.expressad.shake.b ae;
    private TkayBaitClickView af;
    private int ag;
    private ViewGroup r;
    private ViewGroup s;
    private RelativeLayout t;
    private RelativeLayout u;
    private ImageView v;
    private ImageView w;
    private ImageView x;
    private ImageView y;
    private ImageView z;

    @Override // com.tkay.expressad.video.module.TkayBaseView
    public void init(Context context) {
    }

    static /* synthetic */ boolean a(TkayNativeEndCardView tkayNativeEndCardView) {
        tkayNativeEndCardView.K = true;
        return true;
    }

    public void setCloseBtnDelay(int i) {
        this.L = i;
    }

    public void setUnitId(String str) {
        this.ab = str;
    }

    public TkayNativeEndCardView(Context context) {
        super(context);
        this.J = false;
        this.K = false;
        this.L = 0;
        this.M = false;
        this.N = false;
        this.O = false;
        this.U = false;
        this.ag = 1;
    }

    public TkayNativeEndCardView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.J = false;
        this.K = false;
        this.L = 0;
        this.M = false;
        this.N = false;
        this.O = false;
        this.U = false;
        this.ag = 1;
    }

    public TkayNativeEndCardView(Context context, AttributeSet attributeSet, boolean z, int i, boolean z2, int i2, int i3) {
        super(context, attributeSet, z, i, z2, i2, i3);
        this.J = false;
        this.K = false;
        this.L = 0;
        this.M = false;
        this.N = false;
        this.O = false;
        this.U = false;
        this.ag = 1;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        int i;
        int i2;
        int i3;
        super.onAttachedToWindow();
        if (this.G == null) {
            this.G = new Runnable() { // from class: com.tkay.expressad.video.module.TkayNativeEndCardView.1
                @Override // java.lang.Runnable
                public final void run() {
                    TkayNativeEndCardView.a(TkayNativeEndCardView.this);
                    if (TkayNativeEndCardView.this.V != null) {
                        TkayNativeEndCardView.this.V.setVisibility(0);
                    }
                }
            };
        }
        Runnable runnable = this.G;
        if (runnable != null) {
            postDelayed(runnable, this.L * 1000);
            if (!this.N) {
                this.N = true;
            }
            try {
                if (this.b != null && this.b.j()) {
                    String strI = this.b.I();
                    if (TextUtils.isEmpty(strI)) {
                        strI = this.b.P();
                    }
                    String strA = x.a(strI, "alac");
                    if (!TextUtils.isEmpty(strA) && strA.equals("1")) {
                        postDelayed(new AnonymousClass8(), 1000L);
                    }
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        }
        try {
            if (this.b != null && this.b.j()) {
                String strI2 = this.b.I();
                if (TextUtils.isEmpty(strI2)) {
                    strI2 = this.b.P();
                }
                String strA2 = x.a(strI2, "bait_click");
                try {
                    i3 = Integer.parseInt(strA2);
                } catch (Throwable th2) {
                    th2.getMessage();
                    i3 = 1;
                }
                if (!TextUtils.isEmpty(strA2) && i3 != 0 && this.af == null) {
                    TkayBaitClickView tkayBaitClickView = new TkayBaitClickView(getContext());
                    this.af = tkayBaitClickView;
                    tkayBaitClickView.init(1342177280, i3);
                    this.af.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
                    if (this.u != null) {
                        this.u.addView(this.af);
                        this.af.startAnimation();
                        this.af.setOnClickListener(new AnonymousClass7());
                    }
                }
            }
        } catch (Throwable th3) {
            th3.getMessage();
        }
        try {
            if (this.b == null || !this.b.j()) {
                return;
            }
            String strI3 = this.b.I();
            if (TextUtils.isEmpty(strI3)) {
                strI3 = this.b.P();
            }
            String strA3 = x.a(strI3, "shake_show");
            String strA4 = x.a(strI3, "shake_strength");
            String strA5 = x.a(strI3, "shake_time");
            if (!TextUtils.isEmpty(strA3) && strA3.equals("1") && this.ad == null) {
                if (this.af != null) {
                    this.af.setVisibility(8);
                }
                MBShakeView mBShakeView = new MBShakeView(getContext());
                this.ad = mBShakeView;
                mBShakeView.initView(this.b.cU, true);
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
                if (!isLandscape()) {
                    layoutParams.addRule(2, findID("tkay_iv_logo"));
                    layoutParams.addRule(14);
                    this.ad.setPadding(0, 0, 0, t.b(getContext(), 20.0f));
                } else {
                    layoutParams.addRule(13);
                }
                this.ad.setLayoutParams(layoutParams);
                if (this.t != null && this.t.isShown()) {
                    if (this.W != null) {
                        this.t.addView(this.ad);
                    }
                    this.W.setVisibility(4);
                    this.ad.setOnClickListener(new AnonymousClass5());
                    int i4 = 10;
                    if (!TextUtils.isEmpty(strA4) && (i2 = Integer.parseInt(strA4)) >= 0) {
                        i4 = i2;
                    }
                    int i5 = 5000;
                    if (!TextUtils.isEmpty(strA5) && (i = Integer.parseInt(strA5)) > 0) {
                        i5 = i * 1000;
                    }
                    this.ae = new AnonymousClass6(i4, i5);
                    a.a().a(this.ae);
                }
            }
        } catch (Throwable th4) {
            th4.getMessage();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Runnable runnable = this.G;
        if (runnable != null) {
            removeCallbacks(runnable);
        }
        if (this.ae != null) {
            a.a().b(this.ae);
            this.ae = null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:29:0x0055  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void setLayout() {
        /*
            r6 = this;
            boolean r0 = r6.i
            if (r0 == 0) goto L21
            com.tkay.expressad.video.dynview.j.c r0 = new com.tkay.expressad.video.dynview.j.c
            r0.<init>()
            android.content.Context r0 = r6.getContext()
            com.tkay.expressad.foundation.d.c r1 = r6.b
            int r2 = r6.j
            com.tkay.expressad.video.dynview.c r0 = com.tkay.expressad.video.dynview.j.c.a(r0, r1, r2)
            com.tkay.expressad.video.dynview.b.a()
            com.tkay.expressad.video.module.TkayNativeEndCardView$9 r1 = new com.tkay.expressad.video.module.TkayNativeEndCardView$9
            r1.<init>()
            com.tkay.expressad.video.dynview.b.a(r0, r1)
            return
        L21:
            int r0 = r6.ag
            java.lang.String r1 = "tkay_reward_endcard_native_half_landscape"
            java.lang.String r2 = "tkay_reward_endcard_native_land"
            java.lang.String r3 = "tkay_reward_endcard_native_half_portrait"
            java.lang.String r4 = "tkay_reward_endcard_native_hor"
            if (r0 != 0) goto L3e
            boolean r0 = r6.aa
            if (r0 == 0) goto L32
            goto L33
        L32:
            r3 = r4
        L33:
            boolean r0 = r6.isLandscape()
            if (r0 == 0) goto L57
            boolean r0 = r6.aa
            if (r0 == 0) goto L55
            goto L56
        L3e:
            r5 = 1
            if (r0 != r5) goto L48
            boolean r0 = r6.aa
            if (r0 == 0) goto L46
            goto L4b
        L46:
            r3 = r4
            goto L4b
        L48:
            java.lang.String r0 = ""
            r3 = r0
        L4b:
            int r0 = r6.ag
            r4 = 2
            if (r0 != r4) goto L57
            boolean r0 = r6.aa
            if (r0 == 0) goto L55
            goto L56
        L55:
            r1 = r2
        L56:
            r3 = r1
        L57:
            int r0 = r6.findLayout(r3)
            if (r0 <= 0) goto L90
            boolean r1 = r6.isLandscape()
            r2 = 0
            if (r1 == 0) goto L78
            android.view.LayoutInflater r1 = r6.c
            android.view.View r0 = r1.inflate(r0, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.s = r0
            r6.addView(r0)
            android.view.ViewGroup r0 = r6.s
            boolean r0 = r6.b(r0)
            goto L8b
        L78:
            android.view.LayoutInflater r1 = r6.c
            android.view.View r0 = r1.inflate(r0, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.r = r0
            r6.addView(r0)
            android.view.ViewGroup r0 = r6.r
            boolean r0 = r6.b(r0)
        L8b:
            r6.f = r0
            r6.e()
        L90:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.video.module.TkayNativeEndCardView.setLayout():void");
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayNativeEndCardView$9, reason: invalid class name */
    final class AnonymousClass9 implements h {
        AnonymousClass9() {
        }

        @Override // com.tkay.expressad.video.dynview.f.h
        public final void a(com.tkay.expressad.video.dynview.a aVar) {
            TkayNativeEndCardView.this.addView(aVar.a());
            TkayNativeEndCardView.this.U = aVar.c();
            TkayNativeEndCardView tkayNativeEndCardView = TkayNativeEndCardView.this;
            tkayNativeEndCardView.f = tkayNativeEndCardView.b(aVar.a());
            TkayNativeEndCardView.this.e();
        }

        @Override // com.tkay.expressad.video.dynview.f.h
        public final void a(com.tkay.expressad.video.dynview.c.b bVar) {
            new StringBuilder("errorMsg:").append(bVar.b());
        }
    }

    private void a() {
        new c();
        com.tkay.expressad.video.dynview.c cVarA = c.a(getContext(), this.b, this.j);
        com.tkay.expressad.video.dynview.b.a();
        com.tkay.expressad.video.dynview.b.a(cVarA, new AnonymousClass9());
    }

    @Override // com.tkay.expressad.video.signal.f
    public void preLoadData(b bVar) {
        this.I = bVar;
        try {
            if (this.b == null || !this.f) {
                return;
            }
            com.tkay.expressad.foundation.g.d.b.a(this.f7279a.getApplicationContext()).a(this.b.be(), new AnonymousClass10());
            com.tkay.expressad.foundation.g.d.b.a(this.f7279a.getApplicationContext()).a(this.b.bd(), new j(this.x, t.b(m.a().f(), 8.0f)));
            this.B.setText(this.b.bb());
            if (this.W != null) {
                this.W.setText(this.b.cU);
            }
            if (this.C != null) {
                this.C.setText(this.b.bc());
            }
            if (this.D != null) {
                this.D.setText(this.b.aY() + ")");
            }
            this.E.removeAllViews();
            double dAX = this.b.aX();
            if (dAX <= 0.0d) {
                dAX = 5.0d;
            }
            if (this.E instanceof StarLevelView) {
                ((StarLevelView) this.E).initScore(dAX);
            }
            if (this.E instanceof TYLevelLayoutView) {
                ((TYLevelLayoutView) this.E).setRatingAndUser(dAX, this.b.aY());
            }
            if (!TextUtils.isEmpty(this.b.I()) && this.b.I().contains("alecfc=1")) {
                this.J = true;
            }
            com.tkay.expressad.foundation.g.d.b.a(this.f7279a.getApplicationContext()).a(TextUtils.isEmpty(this.b.aE()) ? com.tkay.expressad.b.ab : this.b.aE(), new AnonymousClass11());
            com.tkay.expressad.foundation.b.b.b().e();
            com.tkay.expressad.d.b.a();
            com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
            if (aVarB != null) {
                String strJ = aVarB.J();
                if (TextUtils.isEmpty(strJ)) {
                    this.z.setVisibility(8);
                }
                this.z.setOnClickListener(new AnonymousClass12(strJ));
            } else {
                this.z.setVisibility(8);
            }
            if (!this.K) {
                this.V.setVisibility(8);
            }
            if (Build.VERSION.SDK_INT >= 17 || this.v == null) {
                return;
            }
            this.v.setVisibility(8);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void e() {
        c();
        if (!this.f) {
            this.e.a(104, "");
        }
        AlphaAnimation alphaAnimation = new AlphaAnimation(0.0f, 100.0f);
        this.P = alphaAnimation;
        alphaAnimation.setDuration(200L);
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayNativeEndCardView$10, reason: invalid class name */
    final class AnonymousClass10 implements com.tkay.expressad.foundation.g.d.c {
        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(String str, String str2) {
        }

        AnonymousClass10() {
        }

        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(Bitmap bitmap, String str) {
            if (bitmap == null || bitmap.isRecycled()) {
                return;
            }
            try {
                if (TkayNativeEndCardView.this.w != null) {
                    if (TkayNativeEndCardView.this.i) {
                        TkayNativeEndCardView.this.w.setBackgroundDrawable(null);
                    }
                    TkayNativeEndCardView.this.w.setImageBitmap(bitmap);
                }
                Bitmap bitmapBlurBitmap = TkayNativeEndCardView.this.blurBitmap(bitmap);
                if (bitmapBlurBitmap == null || bitmapBlurBitmap.isRecycled() || TkayNativeEndCardView.this.v == null) {
                    return;
                }
                if (TkayNativeEndCardView.this.i) {
                    TkayNativeEndCardView.this.v.setBackgroundDrawable(null);
                }
                TkayNativeEndCardView.this.v.setImageBitmap(bitmapBlurBitmap);
            } catch (Throwable unused) {
                if (TkayNativeEndCardView.this.v != null) {
                    TkayNativeEndCardView.this.v.setVisibility(4);
                }
            }
        }
    }

    private void f() {
        ImageView imageView;
        com.tkay.expressad.foundation.g.d.b.a(this.f7279a.getApplicationContext()).a(this.b.be(), new AnonymousClass10());
        com.tkay.expressad.foundation.g.d.b.a(this.f7279a.getApplicationContext()).a(this.b.bd(), new j(this.x, t.b(m.a().f(), 8.0f)));
        this.B.setText(this.b.bb());
        TextView textView = this.W;
        if (textView != null) {
            textView.setText(this.b.cU);
        }
        TextView textView2 = this.C;
        if (textView2 != null) {
            textView2.setText(this.b.bc());
        }
        TextView textView3 = this.D;
        if (textView3 != null) {
            textView3.setText(this.b.aY() + ")");
        }
        this.E.removeAllViews();
        double dAX = this.b.aX();
        if (dAX <= 0.0d) {
            dAX = 5.0d;
        }
        LinearLayout linearLayout = this.E;
        if (linearLayout instanceof StarLevelView) {
            ((StarLevelView) linearLayout).initScore(dAX);
        }
        LinearLayout linearLayout2 = this.E;
        if (linearLayout2 instanceof TYLevelLayoutView) {
            ((TYLevelLayoutView) linearLayout2).setRatingAndUser(dAX, this.b.aY());
        }
        if (!TextUtils.isEmpty(this.b.I()) && this.b.I().contains("alecfc=1")) {
            this.J = true;
        }
        com.tkay.expressad.foundation.g.d.b.a(this.f7279a.getApplicationContext()).a(TextUtils.isEmpty(this.b.aE()) ? com.tkay.expressad.b.ab : this.b.aE(), new AnonymousClass11());
        com.tkay.expressad.foundation.b.b.b().e();
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
        if (aVarB != null) {
            String strJ = aVarB.J();
            if (TextUtils.isEmpty(strJ)) {
                this.z.setVisibility(8);
            }
            this.z.setOnClickListener(new AnonymousClass12(strJ));
        } else {
            this.z.setVisibility(8);
        }
        if (!this.K) {
            this.V.setVisibility(8);
        }
        if (Build.VERSION.SDK_INT >= 17 || (imageView = this.v) == null) {
            return;
        }
        imageView.setVisibility(8);
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayNativeEndCardView$11, reason: invalid class name */
    final class AnonymousClass11 implements com.tkay.expressad.foundation.g.d.c {
        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(String str, String str2) {
        }

        AnonymousClass11() {
        }

        @Override // com.tkay.expressad.foundation.g.d.c
        public final void a(Bitmap bitmap, String str) {
            if (bitmap == null || bitmap.isRecycled() || bitmap == null || bitmap.isRecycled()) {
                return;
            }
            try {
                int iB = t.b(TkayNativeEndCardView.this.f7279a, 12.0f);
                TkayNativeEndCardView.this.y.getLayoutParams().height = iB;
                TkayNativeEndCardView.this.y.getLayoutParams().width = (int) (iB * ((bitmap.getWidth() * 1.0f) / bitmap.getHeight()));
                TkayNativeEndCardView.this.y.setImageBitmap(bitmap);
                TkayNativeEndCardView.this.y.setBackgroundColor(1426063360);
            } catch (Throwable unused) {
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayNativeEndCardView$12, reason: invalid class name */
    final class AnonymousClass12 implements View.OnClickListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ String f7305a;

        AnonymousClass12(String str) {
            this.f7305a = str;
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            l.a(TkayNativeEndCardView.this.f7279a, this.f7305a);
        }
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView
    public void onSelfConfigurationChanged(Configuration configuration) {
        super.onSelfConfigurationChanged(configuration);
        if (this.b == null || !this.b.j()) {
            RelativeLayout relativeLayout = this.H;
            if (relativeLayout != null) {
                relativeLayout.setVisibility(4);
            }
            this.d = configuration.orientation;
            new StringBuilder(" native onSelfConfigurationChanged:").append(this.d);
            if (this.d == 2) {
                removeView(this.r);
                a(this.s);
            } else {
                removeView(this.s);
                a(this.r);
            }
        }
    }

    public boolean canBackPress() {
        View view = this.V;
        return view != null && view.getVisibility() == 0;
    }

    public void notifyShowListener() {
        this.e.a(110, "");
    }

    private void a(View view) {
        if (view == null) {
            setLayout();
            preLoadData(this.I);
        } else {
            if (view.getParent() != null) {
                ((ViewGroup) view.getParent()).removeView(view);
            }
            addView(view);
            b(view);
            c();
        }
        h();
    }

    private boolean b(int i) {
        if (isLandscape()) {
            ViewGroup viewGroup = (ViewGroup) this.c.inflate(i, (ViewGroup) null);
            this.s = viewGroup;
            addView(viewGroup);
            return b(this.s);
        }
        ViewGroup viewGroup2 = (ViewGroup) this.c.inflate(i, (ViewGroup) null);
        this.r = viewGroup2;
        addView(viewGroup2);
        return b(this.r);
    }

    @Override // com.tkay.expressad.video.module.TkayBaseView
    protected final void c() {
        if (this.f) {
            this.t.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.module.TkayNativeEndCardView.13
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    if (TkayNativeEndCardView.this.J) {
                        TkayNativeEndCardView.a(TkayNativeEndCardView.this, 1);
                    }
                }
            });
            this.V.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.module.TkayNativeEndCardView.14
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    TkayNativeEndCardView.this.e.a(104, "");
                }
            });
            TextView textView = this.W;
            if (textView != null) {
                textView.setOnClickListener(new com.tkay.expressad.widget.a() { // from class: com.tkay.expressad.video.module.TkayNativeEndCardView.15
                    @Override // com.tkay.expressad.widget.a
                    protected final void a(View view) {
                        TkayNativeEndCardView.a(TkayNativeEndCardView.this, 0);
                    }
                });
            }
            this.x.setOnClickListener(new com.tkay.expressad.widget.a() { // from class: com.tkay.expressad.video.module.TkayNativeEndCardView.16
                @Override // com.tkay.expressad.widget.a
                protected final void a(View view) {
                    TkayNativeEndCardView.a(TkayNativeEndCardView.this, 0);
                }
            });
            this.w.setOnClickListener(new com.tkay.expressad.widget.a() { // from class: com.tkay.expressad.video.module.TkayNativeEndCardView.2
                @Override // com.tkay.expressad.widget.a
                protected final void a(View view) {
                    TkayNativeEndCardView.a(TkayNativeEndCardView.this, 0);
                }
            });
        }
    }

    private void c(int i) {
        JSONObject jSONObject;
        JSONObject jSONObject2 = null;
        try {
            jSONObject = new JSONObject();
        } catch (JSONException e) {
            e = e;
        }
        try {
            jSONObject.put(com.tkay.expressad.foundation.g.a.ce, a(i));
            if (this.b.k() == 5) {
                jSONObject.put("camp_position", 0);
            }
        } catch (JSONException e2) {
            e = e2;
            jSONObject2 = jSONObject;
            e.printStackTrace();
            jSONObject = jSONObject2;
        }
        this.e.a(105, jSONObject);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean b(View view) {
        try {
            this.t = (RelativeLayout) view.findViewById(filterFindViewId(this.U, "tkay_native_ec_layout"));
            this.u = (RelativeLayout) view.findViewById(filterFindViewId(this.U, "tkay_native_ec_layer_layout"));
            this.w = (ImageView) view.findViewById(filterFindViewId(this.U, "tkay_iv_adbanner"));
            this.x = (ImageView) view.findViewById(filterFindViewId(this.U, "tkay_iv_icon"));
            this.y = (ImageView) view.findViewById(filterFindViewId(this.U, "tkay_iv_flag"));
            this.z = (ImageView) view.findViewById(filterFindViewId(this.U, "tkay_iv_link"));
            this.B = (TextView) view.findViewById(filterFindViewId(this.U, "tkay_tv_apptitle"));
            this.E = (LinearLayout) view.findViewById(filterFindViewId(this.U, "tkay_sv_starlevel"));
            this.V = view.findViewById(filterFindViewId(this.U, "tkay_iv_close"));
            View viewFindViewById = view.findViewById(filterFindViewId(this.U, "tkay_tv_cta"));
            if (viewFindViewById != null && (viewFindViewById instanceof TextView)) {
                this.W = (TextView) viewFindViewById;
            }
            this.F = (FeedBackButton) view.findViewById(filterFindViewId(this.U, "tkay_native_endcard_feed_btn"));
            this.H = (RelativeLayout) view.findViewById(filterFindViewId(this.U, "tkay_native_ec_controller"));
            this.v = (ImageView) view.findViewById(filterFindViewId(this.U, "tkay_iv_adbanner_bg"));
            if (this.i) {
                if (this.w != null && (this.w instanceof RoundImageView)) {
                    ((RoundImageView) this.w).setBorderRadius(10);
                }
                if (this.x != null && (this.x instanceof RoundImageView)) {
                    ((RoundImageView) this.x).setBorderRadius(10);
                }
                return isNotNULL(this.v, this.w, this.x, this.B, this.E, this.V);
            }
            this.C = (TextView) view.findViewById(filterFindViewId(this.U, "tkay_tv_appdesc"));
            TextView textView = (TextView) view.findViewById(filterFindViewId(this.U, "tkay_tv_number"));
            this.D = textView;
            return isNotNULL(this.v, this.w, this.x, this.B, this.C, textView, this.E, this.V, this.W);
        } catch (Throwable th) {
            th.getMessage();
            return false;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x0034  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private int g() {
        /*
            r6 = this;
            int r0 = r6.ag
            java.lang.String r1 = "tkay_reward_endcard_native_half_landscape"
            java.lang.String r2 = "tkay_reward_endcard_native_land"
            java.lang.String r3 = "tkay_reward_endcard_native_half_portrait"
            java.lang.String r4 = "tkay_reward_endcard_native_hor"
            if (r0 != 0) goto L1d
            boolean r0 = r6.aa
            if (r0 == 0) goto L11
            goto L12
        L11:
            r3 = r4
        L12:
            boolean r0 = r6.isLandscape()
            if (r0 == 0) goto L36
            boolean r0 = r6.aa
            if (r0 == 0) goto L34
            goto L35
        L1d:
            r5 = 1
            if (r0 != r5) goto L27
            boolean r0 = r6.aa
            if (r0 == 0) goto L25
            goto L2a
        L25:
            r3 = r4
            goto L2a
        L27:
            java.lang.String r0 = ""
            r3 = r0
        L2a:
            int r0 = r6.ag
            r4 = 2
            if (r0 != r4) goto L36
            boolean r0 = r6.aa
            if (r0 == 0) goto L34
            goto L35
        L34:
            r1 = r2
        L35:
            r3 = r1
        L36:
            int r0 = r6.findLayout(r3)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.video.module.TkayNativeEndCardView.g():int");
    }

    public Bitmap blurBitmap(Bitmap bitmap) {
        try {
            Bitmap bitmapCreateBitmap = Bitmap.createBitmap(bitmap.getWidth(), bitmap.getHeight(), Bitmap.Config.ARGB_4444);
            RenderScript renderScriptCreate = RenderScript.create(this.f7279a.getApplicationContext());
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
        new StringBuilder("NOTCH NativeEndCard ").append(String.format("%1s-%2s-%3s-%4s", Integer.valueOf(i), Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4)));
        this.Q = i;
        this.R = i2;
        this.S = i3;
        this.T = i4;
        h();
    }

    private void h() {
        RelativeLayout relativeLayout;
        if (!this.f || (relativeLayout = this.H) == null) {
            return;
        }
        relativeLayout.postDelayed(new Runnable() { // from class: com.tkay.expressad.video.module.TkayNativeEndCardView.3
            @Override // java.lang.Runnable
            public final void run() {
                if (TkayNativeEndCardView.this.b != null && !TkayNativeEndCardView.this.b.j() && TkayNativeEndCardView.this.b.f() != 2) {
                    TkayNativeEndCardView.this.H.setPadding(TkayNativeEndCardView.this.Q, TkayNativeEndCardView.this.S, TkayNativeEndCardView.this.R, TkayNativeEndCardView.this.T);
                    TkayNativeEndCardView.this.H.startAnimation(TkayNativeEndCardView.this.P);
                }
                TkayNativeEndCardView.this.H.setVisibility(0);
                if (TkayNativeEndCardView.this.V.getVisibility() != 0 && TkayNativeEndCardView.this.K) {
                    TkayNativeEndCardView.this.V.setVisibility(0);
                }
                TkayNativeEndCardView.o(TkayNativeEndCardView.this);
            }
        }, 200L);
    }

    private void i() {
        if (com.tkay.expressad.foundation.f.b.a().b()) {
            this.b.l(this.ab);
            com.tkay.expressad.foundation.f.b.a().a(this.ab + "_2", new AnonymousClass4());
            com.tkay.expressad.foundation.f.b.a().a(this.ab + "_2", this.b);
            com.tkay.expressad.foundation.f.b.a().c(this.ab + "_1");
            com.tkay.expressad.foundation.f.b.a().a(this.ab + "_2", this.F);
            if (this.F != null) {
                com.tkay.expressad.foundation.f.b.a().a(this.ab + "_2", this.F);
                return;
            }
            return;
        }
        FeedBackButton feedBackButton = this.F;
        if (feedBackButton != null) {
            feedBackButton.setVisibility(8);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayNativeEndCardView$4, reason: invalid class name */
    final class AnonymousClass4 implements com.tkay.expressad.foundation.f.a {
        AnonymousClass4() {
        }

        @Override // com.tkay.expressad.foundation.f.a
        public final void a() {
            TkayNativeEndCardView.this.O = true;
        }

        @Override // com.tkay.expressad.foundation.f.a
        public final void b() {
            TkayNativeEndCardView.this.O = false;
        }

        @Override // com.tkay.expressad.foundation.f.a
        public final void c() {
            TkayNativeEndCardView.this.O = false;
        }
    }

    public void setMoreOfferCampaignUnit(d dVar) {
        MBShakeView mBShakeView;
        if (this.b == null || !this.b.j()) {
            return;
        }
        this.ac = dVar;
        if (dVar == null || dVar.J == null || this.ac.J.size() <= 5 || (mBShakeView = this.ad) == null) {
            return;
        }
        mBShakeView.setPadding(0, 0, 0, t.b(getContext(), 5.0f));
    }

    public void clearMoreOfferBitmap() {
        d dVar;
        if (this.b == null || !this.b.j() || (dVar = this.ac) == null || dVar.J == null || this.ac.J.size() <= 0) {
            return;
        }
        for (com.tkay.expressad.foundation.d.c cVar : this.ac.J) {
            if (!TextUtils.isEmpty(cVar.bd())) {
                com.tkay.expressad.foundation.g.d.b.a(m.a().f()).c(cVar.bd());
            }
        }
    }

    public void release() {
        try {
            removeAllViews();
            if (this.P != null) {
                this.P.cancel();
            }
            this.ae = null;
            this.G = null;
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void setOnResume() {
        this.N = true;
    }

    public void setOnPause() {
        this.N = false;
    }

    private void j() {
        int i;
        int i2;
        try {
            if (this.b == null || !this.b.j()) {
                return;
            }
            String strI = this.b.I();
            if (TextUtils.isEmpty(strI)) {
                strI = this.b.P();
            }
            String strA = x.a(strI, "shake_show");
            String strA2 = x.a(strI, "shake_strength");
            String strA3 = x.a(strI, "shake_time");
            if (!TextUtils.isEmpty(strA) && strA.equals("1") && this.ad == null) {
                if (this.af != null) {
                    this.af.setVisibility(8);
                }
                MBShakeView mBShakeView = new MBShakeView(getContext());
                this.ad = mBShakeView;
                mBShakeView.initView(this.b.cU, true);
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
                if (!isLandscape()) {
                    layoutParams.addRule(2, findID("tkay_iv_logo"));
                    layoutParams.addRule(14);
                    this.ad.setPadding(0, 0, 0, t.b(getContext(), 20.0f));
                } else {
                    layoutParams.addRule(13);
                }
                this.ad.setLayoutParams(layoutParams);
                if (this.t != null && this.t.isShown()) {
                    if (this.W != null) {
                        this.t.addView(this.ad);
                    }
                    this.W.setVisibility(4);
                    this.ad.setOnClickListener(new AnonymousClass5());
                    int i3 = 10;
                    if (!TextUtils.isEmpty(strA2) && (i2 = Integer.parseInt(strA2)) >= 0) {
                        i3 = i2;
                    }
                    int i4 = 5000;
                    if (!TextUtils.isEmpty(strA3) && (i = Integer.parseInt(strA3)) > 0) {
                        i4 = i * 1000;
                    }
                    this.ae = new AnonymousClass6(i3, i4);
                    a.a().a(this.ae);
                }
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayNativeEndCardView$5, reason: invalid class name */
    final class AnonymousClass5 implements View.OnClickListener {
        AnonymousClass5() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            TkayNativeEndCardView.a(TkayNativeEndCardView.this, 0);
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayNativeEndCardView$6, reason: invalid class name */
    final class AnonymousClass6 extends com.tkay.expressad.shake.b {
        AnonymousClass6(int i, int i2) {
            super(i, i2);
        }

        @Override // com.tkay.expressad.shake.b
        public final void a() {
            if (!TkayNativeEndCardView.this.O && TkayNativeEndCardView.this.N) {
                TkayNativeEndCardView.a(TkayNativeEndCardView.this, 4);
            }
        }
    }

    private void k() {
        try {
            if (this.b == null || !this.b.j()) {
                return;
            }
            String strI = this.b.I();
            if (TextUtils.isEmpty(strI)) {
                strI = this.b.P();
            }
            String strA = x.a(strI, "bait_click");
            int i = 1;
            try {
                i = Integer.parseInt(strA);
            } catch (Throwable th) {
                th.getMessage();
            }
            if (TextUtils.isEmpty(strA) || i == 0 || this.af != null) {
                return;
            }
            TkayBaitClickView tkayBaitClickView = new TkayBaitClickView(getContext());
            this.af = tkayBaitClickView;
            tkayBaitClickView.init(1342177280, i);
            this.af.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
            if (this.u != null) {
                this.u.addView(this.af);
                this.af.startAnimation();
                this.af.setOnClickListener(new AnonymousClass7());
            }
        } catch (Throwable th2) {
            th2.getMessage();
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayNativeEndCardView$7, reason: invalid class name */
    final class AnonymousClass7 implements View.OnClickListener {
        AnonymousClass7() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            TkayNativeEndCardView.a(TkayNativeEndCardView.this, 0);
        }
    }

    private void l() {
        try {
            if (this.b == null || !this.b.j()) {
                return;
            }
            String strI = this.b.I();
            if (TextUtils.isEmpty(strI)) {
                strI = this.b.P();
            }
            String strA = x.a(strI, "alac");
            if (TextUtils.isEmpty(strA) || !strA.equals("1")) {
                return;
            }
            postDelayed(new AnonymousClass8(), 1000L);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.video.module.TkayNativeEndCardView$8, reason: invalid class name */
    final class AnonymousClass8 implements Runnable {
        AnonymousClass8() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            TkayNativeEndCardView.a(TkayNativeEndCardView.this, 2);
        }
    }

    public boolean isDyXmlSuccess() {
        return this.U;
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x0034  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void b() {
        /*
            r6 = this;
            int r0 = r6.ag
            java.lang.String r1 = "tkay_reward_endcard_native_half_landscape"
            java.lang.String r2 = "tkay_reward_endcard_native_land"
            java.lang.String r3 = "tkay_reward_endcard_native_half_portrait"
            java.lang.String r4 = "tkay_reward_endcard_native_hor"
            if (r0 != 0) goto L1d
            boolean r0 = r6.aa
            if (r0 == 0) goto L11
            goto L12
        L11:
            r3 = r4
        L12:
            boolean r0 = r6.isLandscape()
            if (r0 == 0) goto L36
            boolean r0 = r6.aa
            if (r0 == 0) goto L34
            goto L35
        L1d:
            r5 = 1
            if (r0 != r5) goto L27
            boolean r0 = r6.aa
            if (r0 == 0) goto L25
            goto L2a
        L25:
            r3 = r4
            goto L2a
        L27:
            java.lang.String r0 = ""
            r3 = r0
        L2a:
            int r0 = r6.ag
            r4 = 2
            if (r0 != r4) goto L36
            boolean r0 = r6.aa
            if (r0 == 0) goto L34
            goto L35
        L34:
            r1 = r2
        L35:
            r3 = r1
        L36:
            int r0 = r6.findLayout(r3)
            if (r0 <= 0) goto L6f
            boolean r1 = r6.isLandscape()
            r2 = 0
            if (r1 == 0) goto L57
            android.view.LayoutInflater r1 = r6.c
            android.view.View r0 = r1.inflate(r0, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.s = r0
            r6.addView(r0)
            android.view.ViewGroup r0 = r6.s
            boolean r0 = r6.b(r0)
            goto L6a
        L57:
            android.view.LayoutInflater r1 = r6.c
            android.view.View r0 = r1.inflate(r0, r2)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r6.r = r0
            r6.addView(r0)
            android.view.ViewGroup r0 = r6.r
            boolean r0 = r6.b(r0)
        L6a:
            r6.f = r0
            r6.e()
        L6f:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.video.module.TkayNativeEndCardView.b():void");
    }

    static /* synthetic */ void a(TkayNativeEndCardView tkayNativeEndCardView, int i) {
        JSONObject jSONObject;
        JSONObject jSONObject2 = null;
        try {
            jSONObject = new JSONObject();
        } catch (JSONException e) {
            e = e;
        }
        try {
            jSONObject.put(com.tkay.expressad.foundation.g.a.ce, tkayNativeEndCardView.a(i));
            if (tkayNativeEndCardView.b.k() == 5) {
                jSONObject.put("camp_position", 0);
            }
        } catch (JSONException e2) {
            e = e2;
            jSONObject2 = jSONObject;
            e.printStackTrace();
            jSONObject = jSONObject2;
        }
        tkayNativeEndCardView.e.a(105, jSONObject);
    }

    static /* synthetic */ void o(TkayNativeEndCardView tkayNativeEndCardView) {
        if (com.tkay.expressad.foundation.f.b.a().b()) {
            tkayNativeEndCardView.b.l(tkayNativeEndCardView.ab);
            com.tkay.expressad.foundation.f.b.a().a(tkayNativeEndCardView.ab + "_2", tkayNativeEndCardView.new AnonymousClass4());
            com.tkay.expressad.foundation.f.b.a().a(tkayNativeEndCardView.ab + "_2", tkayNativeEndCardView.b);
            com.tkay.expressad.foundation.f.b.a().c(tkayNativeEndCardView.ab + "_1");
            com.tkay.expressad.foundation.f.b.a().a(tkayNativeEndCardView.ab + "_2", tkayNativeEndCardView.F);
            if (tkayNativeEndCardView.F != null) {
                com.tkay.expressad.foundation.f.b.a().a(tkayNativeEndCardView.ab + "_2", tkayNativeEndCardView.F);
                return;
            }
            return;
        }
        FeedBackButton feedBackButton = tkayNativeEndCardView.F;
        if (feedBackButton != null) {
            feedBackButton.setVisibility(8);
        }
    }
}
