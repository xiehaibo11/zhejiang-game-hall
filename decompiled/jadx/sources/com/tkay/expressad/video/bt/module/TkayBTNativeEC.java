package com.tkay.expressad.video.bt.module;

import android.content.Context;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.drawable.Drawable;
import android.os.Build;
import android.renderscript.Allocation;
import android.renderscript.Element;
import android.renderscript.RenderScript;
import android.renderscript.ScriptIntrinsicBlur;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.tkay.core.common.l.l;
import com.tkay.expressad.d.a;
import com.tkay.expressad.foundation.g.d.b;
import com.tkay.expressad.foundation.g.d.c;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.video.module.a.a.e;
import com.tkay.expressad.video.signal.a.j;
import com.tkay.expressad.videocommon.view.RoundImageView;
import com.tkay.expressad.videocommon.view.StarLevelView;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class TkayBTNativeEC extends BTBaseView {
    private static final String p = "tkay_reward_endcard_native_hor";
    private static final String q = "tkay_reward_endcard_native_land";
    private TextView A;
    private TextView B;
    private StarLevelView C;
    private boolean D;
    private boolean E;
    private int F;
    private Runnable G;
    private View H;
    private View I;
    private String J;
    private j K;
    private WebView L;
    private ViewGroup r;
    private ViewGroup s;
    private RelativeLayout t;
    private ImageView u;
    private RoundImageView v;
    private ImageView w;
    private ImageView x;
    private ImageView y;
    private TextView z;

    @Override // com.tkay.expressad.video.bt.module.BTBaseView
    public void onDestory() {
    }

    static /* synthetic */ boolean a(TkayBTNativeEC tkayBTNativeEC) {
        tkayBTNativeEC.E = true;
        return true;
    }

    public TkayBTNativeEC(Context context) {
        super(context);
        this.D = false;
        this.E = false;
        this.F = 0;
    }

    public TkayBTNativeEC(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.D = false;
        this.E = false;
        this.F = 0;
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView
    public void setUnitId(String str) {
        this.J = str;
    }

    public void setJSCommon(j jVar) {
        this.K = jVar;
    }

    public void setCreateWebView(WebView webView) {
        this.L = webView;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.G == null) {
            this.G = new Runnable() { // from class: com.tkay.expressad.video.bt.module.TkayBTNativeEC.1
                @Override // java.lang.Runnable
                public final void run() {
                    TkayBTNativeEC.a(TkayBTNativeEC.this);
                    if (TkayBTNativeEC.this.H != null) {
                        TkayBTNativeEC.this.H.setVisibility(0);
                    }
                }
            };
        }
        Runnable runnable = this.G;
        if (runnable != null) {
            postDelayed(runnable, this.F * 1000);
        }
        if (!this.h && this.L != null) {
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put("id", this.d);
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("unitId", this.J);
                jSONObject.put("data", jSONObject2);
                new StringBuilder("NativeEC Call H5 onCloseBtnClicked ").append(jSONObject.toString());
            } catch (JSONException e) {
                e.getMessage();
            }
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.a(this.L, "onCloseBtnClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        }
        if (this.L != null) {
            JSONObject jSONObject3 = new JSONObject();
            try {
                jSONObject3.put("id", this.d);
                JSONObject jSONObject4 = new JSONObject();
                jSONObject4.put("unitId", this.J);
                jSONObject3.put("data", jSONObject4);
                new StringBuilder("NativeEC Call H5 onEndCardShow ").append(jSONObject3.toString());
            } catch (JSONException e2) {
                e2.getMessage();
            }
            com.tkay.expressad.atsignalcommon.windvane.j.a();
            com.tkay.expressad.atsignalcommon.windvane.j.a(this.L, "onNativeECShow", Base64.encodeToString(jSONObject3.toString().getBytes(), 2));
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Runnable runnable = this.G;
        if (runnable != null) {
            removeCallbacks(runnable);
        }
    }

    public void preLoadData() {
        Bitmap bitmapBlurBitmap;
        try {
            if (this.b == null || !this.h) {
                return;
            }
            if (this.e != null) {
                this.F = this.e.p();
            }
            b.a(this.f7171a.getApplicationContext()).a(this.b.be(), new e(this.v, this.b, this.J));
            b.a(this.f7171a.getApplicationContext()).a(this.b.bd(), new com.tkay.expressad.video.module.a.a.j(this.w, t.b(com.tkay.expressad.foundation.b.b.b().d(), 8.0f)));
            this.z.setText(this.b.bb());
            this.A.setText(this.b.bc());
            this.B.setText(this.b.aY() + ")");
            this.C.removeAllViews();
            double dAX = this.b.aX();
            if (dAX <= 0.0d) {
                dAX = 5.0d;
            }
            this.C.initScore(dAX);
            if (Build.VERSION.SDK_INT < 17) {
                this.u.setVisibility(8);
                return;
            }
            try {
                Bitmap bitmapA = a(this.v.getDrawable());
                if (bitmapA != null && (bitmapBlurBitmap = blurBitmap(bitmapA)) != null) {
                    this.u.setImageBitmap(bitmapBlurBitmap);
                }
            } catch (Throwable unused) {
                this.u.setVisibility(8);
            }
            if (!TextUtils.isEmpty(this.b.I()) && this.b.I().contains("alecfc=1")) {
                this.D = true;
            }
            b.a(this.f7171a.getApplicationContext()).a(TextUtils.isEmpty(this.b.aE()) ? com.tkay.expressad.b.ab : this.b.aE(), new c() { // from class: com.tkay.expressad.video.bt.module.TkayBTNativeEC.2
                @Override // com.tkay.expressad.foundation.g.d.c
                public final void a(String str, String str2) {
                }

                @Override // com.tkay.expressad.foundation.g.d.c
                public final void a(Bitmap bitmap, String str) {
                    if (bitmap == null || bitmap.isRecycled()) {
                        return;
                    }
                    try {
                        int iB = t.b(TkayBTNativeEC.this.f7171a, 12.0f);
                        TkayBTNativeEC.this.x.getLayoutParams().height = iB;
                        TkayBTNativeEC.this.x.getLayoutParams().width = (int) (iB * ((bitmap.getWidth() * 1.0f) / bitmap.getHeight()));
                        TkayBTNativeEC.this.x.setImageBitmap(bitmap);
                        TkayBTNativeEC.this.x.setBackgroundColor(1426063360);
                    } catch (Throwable unused2) {
                    }
                }
            });
            com.tkay.expressad.foundation.b.b.b().e();
            com.tkay.expressad.d.b.a();
            a aVarB = com.tkay.expressad.d.b.b();
            if (aVarB != null) {
                final String strJ = aVarB.J();
                if (TextUtils.isEmpty(strJ)) {
                    this.y.setVisibility(8);
                }
                this.y.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.bt.module.TkayBTNativeEC.3
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        l.a(TkayBTNativeEC.this.f7171a, strJ);
                    }
                });
            } else {
                this.y.setVisibility(8);
            }
            if (this.E) {
                return;
            }
            this.H.setVisibility(8);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView
    public void onSelfConfigurationChanged(Configuration configuration) {
        super.onSelfConfigurationChanged(configuration);
        this.g = configuration.orientation;
        if (this.g == 2) {
            removeView(this.r);
            a(this.s);
        } else {
            removeView(this.s);
            a(this.r);
        }
    }

    private void a(View view) {
        if (view == null) {
            init(this.f7171a);
            preLoadData();
            return;
        }
        if (view.getParent() != null) {
            ((ViewGroup) view.getParent()).removeView(view);
        }
        addView(view);
        b(view);
        a();
    }

    private boolean b(int i) {
        if (isLandscape()) {
            ViewGroup viewGroup = (ViewGroup) this.f.inflate(i, (ViewGroup) null);
            this.s = viewGroup;
            addView(viewGroup);
            return b(this.s);
        }
        ViewGroup viewGroup2 = (ViewGroup) this.f.inflate(i, (ViewGroup) null);
        this.r = viewGroup2;
        addView(viewGroup2);
        return b(this.r);
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView
    protected final void a() {
        if (this.h) {
            this.t.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.bt.module.TkayBTNativeEC.4
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    if (TkayBTNativeEC.this.D) {
                        TkayBTNativeEC.a(TkayBTNativeEC.this, 1);
                        TkayBTNativeEC.a(TkayBTNativeEC.this, view.getX(), view.getY());
                    }
                }
            });
            this.H.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.bt.module.TkayBTNativeEC.5
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    if (TkayBTNativeEC.this.L != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", TkayBTNativeEC.this.d);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put("unitId", TkayBTNativeEC.this.J);
                            jSONObject.put("data", jSONObject2);
                            new StringBuilder("NativeEC Call H5 onCloseBtnClicked ").append(jSONObject.toString());
                        } catch (JSONException e) {
                            e.getMessage();
                        }
                        com.tkay.expressad.atsignalcommon.windvane.j.a();
                        com.tkay.expressad.atsignalcommon.windvane.j.a(TkayBTNativeEC.this.L, "onCloseBtnClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }
            });
            this.I.setOnClickListener(new com.tkay.expressad.widget.a() { // from class: com.tkay.expressad.video.bt.module.TkayBTNativeEC.6
                @Override // com.tkay.expressad.widget.a
                protected final void a(View view) {
                    TkayBTNativeEC.a(TkayBTNativeEC.this, 0);
                    TkayBTNativeEC.a(TkayBTNativeEC.this, view.getX(), view.getY());
                }
            });
            this.w.setOnClickListener(new com.tkay.expressad.widget.a() { // from class: com.tkay.expressad.video.bt.module.TkayBTNativeEC.7
                @Override // com.tkay.expressad.widget.a
                protected final void a(View view) {
                    TkayBTNativeEC.a(TkayBTNativeEC.this, 0);
                    TkayBTNativeEC.a(TkayBTNativeEC.this, view.getX(), view.getY());
                }
            });
            this.v.setOnClickListener(new com.tkay.expressad.widget.a() { // from class: com.tkay.expressad.video.bt.module.TkayBTNativeEC.8
                @Override // com.tkay.expressad.widget.a
                protected final void a(View view) {
                    TkayBTNativeEC.a(TkayBTNativeEC.this, 0);
                    TkayBTNativeEC.a(TkayBTNativeEC.this, view.getX(), view.getY());
                }
            });
        }
    }

    private void c(int i) {
        JSONObject jSONObject;
        JSONObject jSONObject2 = null;
        try {
            try {
                jSONObject = new JSONObject();
            } catch (Throwable th) {
                th.getMessage();
                return;
            }
        } catch (JSONException e) {
            e = e;
        }
        try {
            jSONObject.put(com.tkay.expressad.foundation.g.a.ce, a(i));
        } catch (JSONException e2) {
            e = e2;
            jSONObject2 = jSONObject;
            e.printStackTrace();
            jSONObject = jSONObject2;
        }
        if (this.K != null) {
            this.K.click(1, jSONObject != null ? jSONObject.toString() : "");
        }
    }

    private boolean b(View view) {
        try {
            this.t = (RelativeLayout) view.findViewById(findID("tkay_native_ec_layout"));
            this.u = (ImageView) view.findViewById(findID("tkay_iv_adbanner_bg"));
            this.v = (RoundImageView) view.findViewById(findID("tkay_iv_adbanner"));
            this.w = (ImageView) view.findViewById(findID("tkay_iv_icon"));
            this.x = (ImageView) view.findViewById(findID("tkay_iv_flag"));
            this.y = (ImageView) view.findViewById(findID("tkay_iv_link"));
            this.z = (TextView) view.findViewById(findID("tkay_tv_apptitle"));
            this.A = (TextView) view.findViewById(findID("tkay_tv_appdesc"));
            this.B = (TextView) view.findViewById(findID("tkay_tv_nuater"));
            this.C = (StarLevelView) view.findViewById(findID("tkay_sv_starlevel"));
            this.H = view.findViewById(findID("tkay_iv_close"));
            View viewFindViewById = view.findViewById(findID("tkay_tv_cta"));
            this.I = viewFindViewById;
            return isNotNULL(this.u, this.v, this.w, this.z, this.A, this.B, this.C, this.H, viewFindViewById);
        } catch (Throwable th) {
            th.getMessage();
            return false;
        }
    }

    private int b() {
        return findLayout(isLandscape() ? q : p);
    }

    public Bitmap blurBitmap(Bitmap bitmap) {
        try {
            Bitmap bitmapCreateBitmap = Bitmap.createBitmap(bitmap.getWidth(), bitmap.getHeight(), Bitmap.Config.ARGB_8888);
            RenderScript renderScriptCreate = RenderScript.create(this.f7171a.getApplicationContext());
            ScriptIntrinsicBlur scriptIntrinsicBlurCreate = ScriptIntrinsicBlur.create(renderScriptCreate, Element.U8_4(renderScriptCreate));
            Allocation allocationCreateFromBitmap = Allocation.createFromBitmap(renderScriptCreate, bitmap);
            Allocation allocationCreateFromBitmap2 = Allocation.createFromBitmap(renderScriptCreate, bitmapCreateBitmap);
            scriptIntrinsicBlurCreate.setRadius(10.0f);
            scriptIntrinsicBlurCreate.setInput(allocationCreateFromBitmap);
            scriptIntrinsicBlurCreate.forEach(allocationCreateFromBitmap2);
            allocationCreateFromBitmap2.copyTo(bitmapCreateBitmap);
            bitmap.recycle();
            renderScriptCreate.destroy();
            return bitmapCreateBitmap;
        } catch (Throwable unused) {
            return null;
        }
    }

    private static Bitmap a(Drawable drawable) {
        try {
            int intrinsicWidth = drawable.getIntrinsicWidth();
            int intrinsicHeight = drawable.getIntrinsicHeight();
            Bitmap bitmapCreateBitmap = Bitmap.createBitmap(intrinsicWidth, intrinsicHeight, Bitmap.Config.ARGB_8888);
            Canvas canvas = new Canvas(bitmapCreateBitmap);
            drawable.setBounds(0, 0, intrinsicWidth, intrinsicHeight);
            drawable.draw(canvas);
            return bitmapCreateBitmap;
        } catch (Throwable th) {
            th.getMessage();
            return null;
        }
    }

    private void a(float f, float f2) {
        if (this.L != null) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("code", n);
                jSONObject.put("id", this.d);
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("x", String.valueOf(f));
                jSONObject2.put("y", String.valueOf(f2));
                jSONObject.put("data", jSONObject2);
                com.tkay.expressad.atsignalcommon.windvane.j.a();
                com.tkay.expressad.atsignalcommon.windvane.j.a(this.L, "onClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } catch (Exception unused) {
                com.tkay.expressad.video.bt.a.c.a();
                com.tkay.expressad.video.bt.a.c.a(this.L, "onClicked", this.d);
            }
        }
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView
    public void init(Context context) {
        boolean zB;
        int iFindLayout = findLayout(isLandscape() ? q : p);
        if (iFindLayout > 0) {
            if (isLandscape()) {
                ViewGroup viewGroup = (ViewGroup) this.f.inflate(iFindLayout, (ViewGroup) null);
                this.s = viewGroup;
                addView(viewGroup);
                zB = b(this.s);
            } else {
                ViewGroup viewGroup2 = (ViewGroup) this.f.inflate(iFindLayout, (ViewGroup) null);
                this.r = viewGroup2;
                addView(viewGroup2);
                zB = b(this.r);
            }
            this.h = zB;
            a();
        }
    }

    static /* synthetic */ void a(TkayBTNativeEC tkayBTNativeEC, int i) {
        JSONObject jSONObject;
        JSONObject jSONObject2 = null;
        try {
            try {
                jSONObject = new JSONObject();
            } catch (Throwable th) {
                th.getMessage();
                return;
            }
        } catch (JSONException e) {
            e = e;
        }
        try {
            jSONObject.put(com.tkay.expressad.foundation.g.a.ce, tkayBTNativeEC.a(i));
        } catch (JSONException e2) {
            e = e2;
            jSONObject2 = jSONObject;
            e.printStackTrace();
            jSONObject = jSONObject2;
        }
        if (tkayBTNativeEC.K != null) {
            tkayBTNativeEC.K.click(1, jSONObject != null ? jSONObject.toString() : "");
        }
    }

    static /* synthetic */ void a(TkayBTNativeEC tkayBTNativeEC, float f, float f2) {
        if (tkayBTNativeEC.L != null) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("code", n);
                jSONObject.put("id", tkayBTNativeEC.d);
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("x", String.valueOf(f));
                jSONObject2.put("y", String.valueOf(f2));
                jSONObject.put("data", jSONObject2);
                com.tkay.expressad.atsignalcommon.windvane.j.a();
                com.tkay.expressad.atsignalcommon.windvane.j.a(tkayBTNativeEC.L, "onClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } catch (Exception unused) {
                com.tkay.expressad.video.bt.a.c.a();
                com.tkay.expressad.video.bt.a.c.a(tkayBTNativeEC.L, "onClicked", tkayBTNativeEC.d);
            }
        }
    }
}
