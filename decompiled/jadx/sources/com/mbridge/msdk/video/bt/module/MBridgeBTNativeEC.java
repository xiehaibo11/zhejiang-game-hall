package com.mbridge.msdk.video.bt.module;

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
import com.mbridge.msdk.click.c;
import com.mbridge.msdk.foundation.controller.a;
import com.mbridge.msdk.foundation.same.c.b;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.video.js.a.j;
import com.mbridge.msdk.video.module.a.a.d;
import com.mbridge.msdk.video.module.a.a.i;
import com.mbridge.msdk.videocommon.view.RoundImageView;
import com.mbridge.msdk.videocommon.view.StarLevelView;
import com.mbridge.msdk.widget.MBDownloadProgressBar;
import java.util.Locale;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class MBridgeBTNativeEC extends BTBaseView {
    private TextView A;
    private StarLevelView B;
    private boolean C;
    private boolean D;
    private int E;
    private Runnable F;
    private boolean G;
    private View H;
    private MBDownloadProgressBar I;
    private String J;
    private j K;
    private WebView L;
    private ViewGroup p;
    private ViewGroup q;
    private RelativeLayout r;
    private ImageView s;
    private RoundImageView t;
    private ImageView u;
    private ImageView v;
    private ImageView w;
    private ImageView x;
    private TextView y;
    private TextView z;

    @Override // com.mbridge.msdk.video.bt.module.BTBaseView
    public void onDestory() {
    }

    public MBridgeBTNativeEC(Context context) {
        super(context);
        this.C = false;
        this.D = false;
        this.E = 0;
        this.G = false;
    }

    public MBridgeBTNativeEC(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.C = false;
        this.D = false;
        this.E = 0;
        this.G = false;
    }

    @Override // com.mbridge.msdk.video.bt.module.BTBaseView
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
        if (this.F == null) {
            this.F = new Runnable() { // from class: com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC.1
                @Override // java.lang.Runnable
                public final void run() {
                    MBridgeBTNativeEC.this.D = true;
                    if (MBridgeBTNativeEC.this.H != null) {
                        MBridgeBTNativeEC.this.H.setVisibility(0);
                    }
                }
            };
        }
        Runnable runnable = this.F;
        if (runnable != null) {
            postDelayed(runnable, this.E * 1000);
        }
        if (!this.h && this.L != null) {
            JSONObject jSONObject = new JSONObject();
            try {
                jSONObject.put("id", this.d);
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("unitId", this.J);
                jSONObject.put("data", jSONObject2);
                z.a("BTBaseView", "NativeEC Call H5 onCloseBtnClicked " + jSONObject.toString());
            } catch (JSONException e) {
                z.a("BTBaseView", e.getMessage());
            }
            h.a().a(this.L, "onCloseBtnClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
        }
        if (this.L != null) {
            JSONObject jSONObject3 = new JSONObject();
            try {
                jSONObject3.put("id", this.d);
                JSONObject jSONObject4 = new JSONObject();
                jSONObject4.put("unitId", this.J);
                jSONObject3.put("data", jSONObject4);
                z.a("BTBaseView", "NativeEC Call H5 onEndCardShow " + jSONObject3.toString());
            } catch (JSONException e2) {
                z.a("BTBaseView", e2.getMessage());
            }
            h.a().a(this.L, "onNativeECShow", Base64.encodeToString(jSONObject3.toString().getBytes(), 2));
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        Runnable runnable = this.F;
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
            if (this.b.getCbd() > -2) {
                this.E = this.b.getCbd();
            } else if (this.e != null) {
                this.E = this.e.p();
            }
            b.a(this.f4081a.getApplicationContext()).a(this.b.getImageUrl(), new d(this.t, this.b, this.J));
            b.a(this.f4081a.getApplicationContext()).a(this.b.getIconUrl(), new i(this.u, ae.b(a.f().j(), 8.0f)));
            this.y.setText(this.b.getAppName());
            this.z.setText(this.b.getAppDesc());
            this.A.setText(this.b.getNumberRating() + ")");
            this.B.removeAllViews();
            this.I.setUniqueKey(this.b.getAkdlui());
            this.I.setLinkType(this.b.getLinkType());
            this.I.setCtaldtypeUrl(this.b.getCMPTEntryUrl());
            this.I.setText(this.b.getAdCall());
            double rating = this.b.getRating();
            if (rating <= 0.0d) {
                rating = 5.0d;
            }
            this.B.initScore(rating);
            if (Build.VERSION.SDK_INT < 17) {
                this.s.setVisibility(8);
                return;
            }
            try {
                Bitmap bitmapA = a(this.t.getDrawable());
                if (bitmapA != null && (bitmapBlurBitmap = blurBitmap(bitmapA)) != null) {
                    this.s.setImageBitmap(bitmapBlurBitmap);
                }
            } catch (Throwable unused) {
                this.s.setVisibility(8);
            }
            if (!TextUtils.isEmpty(this.b.getendcard_url()) && this.b.getendcard_url().contains("alecfc=1")) {
                this.C = true;
            }
            if (!TextUtils.isEmpty(this.b.getendcard_url()) && this.b.getendcard_url().contains("wlgo=1")) {
                this.G = true;
            }
            String language = Locale.getDefault().getLanguage();
            if (!TextUtils.isEmpty(language) && language.equals(com.tkay.expressad.video.dynview.a.a.Q)) {
                this.v.setImageDrawable(getResources().getDrawable(getResources().getIdentifier("mbridge_reward_flag_cn", com.tkay.expressad.foundation.h.i.c, a.f().d())));
            } else {
                this.v.setImageDrawable(getResources().getDrawable(getResources().getIdentifier("mbridge_reward_flag_en", com.tkay.expressad.foundation.h.i.c, a.f().d())));
            }
            if (!this.G) {
                this.v.setVisibility(4);
                this.x.setVisibility(4);
            }
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(a.f().k());
            if (aVarB != null) {
                final String strAz = aVarB.az();
                if (TextUtils.isEmpty(strAz)) {
                    this.w.setVisibility(8);
                }
                this.w.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC.2
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        c.b(MBridgeBTNativeEC.this.f4081a, strAz);
                    }
                });
            } else {
                this.w.setVisibility(8);
            }
            if (this.D) {
                return;
            }
            this.H.setVisibility(8);
        } catch (Throwable th) {
            z.a("BTBaseView", th.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.bt.module.BTBaseView
    public void onSelfConfigurationChanged(Configuration configuration) {
        super.onSelfConfigurationChanged(configuration);
        this.g = configuration.orientation;
        z.d("BTBaseView", " native onSelfConfigurationChanged:" + this.g);
        if (this.g == 2) {
            removeView(this.p);
            a(this.q);
        } else {
            removeView(this.q);
            a(this.p);
        }
    }

    private void a(View view) {
        if (view == null) {
            init(this.f4081a);
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

    @Override // com.mbridge.msdk.video.bt.module.BTBaseView
    protected final void a() {
        try {
            if (this.h) {
                this.r.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC.3
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        if (MBridgeBTNativeEC.this.C) {
                            MBridgeBTNativeEC.a(MBridgeBTNativeEC.this, 1, view.getContext());
                            MBridgeBTNativeEC.a(MBridgeBTNativeEC.this, view.getX(), view.getY());
                        }
                    }
                });
                this.H.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC.4
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        if (MBridgeBTNativeEC.this.L != null) {
                            JSONObject jSONObject = new JSONObject();
                            try {
                                jSONObject.put("id", MBridgeBTNativeEC.this.d);
                                JSONObject jSONObject2 = new JSONObject();
                                jSONObject2.put("unitId", MBridgeBTNativeEC.this.J);
                                jSONObject.put("data", jSONObject2);
                                z.a("BTBaseView", "NativeEC Call H5 onCloseBtnClicked " + jSONObject.toString());
                            } catch (JSONException e) {
                                z.a("BTBaseView", e.getMessage());
                            }
                            h.a().a(MBridgeBTNativeEC.this.L, "onCloseBtnClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                        }
                    }
                });
                this.I.setOnClickListener(new com.mbridge.msdk.widget.a() { // from class: com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC.5
                    @Override // com.mbridge.msdk.widget.a
                    protected final void a(View view) {
                        MBridgeBTNativeEC.a(MBridgeBTNativeEC.this, 0, view.getContext());
                        MBridgeBTNativeEC.a(MBridgeBTNativeEC.this, view.getX(), view.getY());
                    }
                });
                this.u.setOnClickListener(new com.mbridge.msdk.widget.a() { // from class: com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC.6
                    @Override // com.mbridge.msdk.widget.a
                    protected final void a(View view) {
                        if (MBridgeBTNativeEC.this.I.NotProgressBarInterceptedClick()) {
                            MBridgeBTNativeEC.a(MBridgeBTNativeEC.this, 0, view.getContext());
                        }
                        MBridgeBTNativeEC.a(MBridgeBTNativeEC.this, view.getX(), view.getY());
                    }
                });
                this.t.setOnClickListener(new com.mbridge.msdk.widget.a() { // from class: com.mbridge.msdk.video.bt.module.MBridgeBTNativeEC.7
                    @Override // com.mbridge.msdk.widget.a
                    protected final void a(View view) {
                        if (MBridgeBTNativeEC.this.I.NotProgressBarInterceptedClick()) {
                            MBridgeBTNativeEC.a(MBridgeBTNativeEC.this, 0, view.getContext());
                        }
                        MBridgeBTNativeEC.a(MBridgeBTNativeEC.this, view.getX(), view.getY());
                    }
                });
            }
        } catch (Throwable th) {
            z.a("BTBaseView", th.getMessage());
        }
    }

    private boolean b(View view) {
        try {
            this.r = (RelativeLayout) view.findViewById(findID("mbridge_native_ec_layout"));
            this.s = (ImageView) view.findViewById(findID("mbridge_iv_adbanner_bg"));
            this.t = (RoundImageView) view.findViewById(findID("mbridge_iv_adbanner"));
            this.u = (ImageView) view.findViewById(findID("mbridge_iv_icon"));
            this.v = (ImageView) view.findViewById(findID("mbridge_iv_flag"));
            this.w = (ImageView) view.findViewById(findID("mbridge_iv_link"));
            this.y = (TextView) view.findViewById(findID("mbridge_tv_apptitle"));
            this.z = (TextView) view.findViewById(findID("mbridge_tv_appdesc"));
            this.A = (TextView) view.findViewById(findID("mbridge_tv_number"));
            this.B = (StarLevelView) view.findViewById(findID("mbridge_sv_starlevel"));
            this.H = view.findViewById(findID("mbridge_iv_close"));
            this.I = (MBDownloadProgressBar) view.findViewById(findID("mbridge_tv_cta"));
            this.x = (ImageView) view.findViewById(findID("mbridge_iv_logo"));
            return isNotNULL(this.s, this.t, this.u, this.y, this.z, this.A, this.B, this.H, this.I);
        } catch (Throwable th) {
            z.c("BTBaseView", th.getMessage(), th);
            return false;
        }
    }

    public Bitmap blurBitmap(Bitmap bitmap) {
        try {
            Bitmap bitmapCreateBitmap = Bitmap.createBitmap(bitmap.getWidth(), bitmap.getHeight(), Bitmap.Config.ARGB_8888);
            RenderScript renderScriptCreate = RenderScript.create(this.f4081a.getApplicationContext());
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

    private Bitmap a(Drawable drawable) {
        try {
            int intrinsicWidth = drawable.getIntrinsicWidth();
            int intrinsicHeight = drawable.getIntrinsicHeight();
            Bitmap bitmapCreateBitmap = Bitmap.createBitmap(intrinsicWidth, intrinsicHeight, Bitmap.Config.ARGB_8888);
            Canvas canvas = new Canvas(bitmapCreateBitmap);
            drawable.setBounds(0, 0, intrinsicWidth, intrinsicHeight);
            drawable.draw(canvas);
            return bitmapCreateBitmap;
        } catch (Throwable th) {
            z.a("BTBaseView", th.getMessage());
            return null;
        }
    }

    @Override // com.mbridge.msdk.video.bt.module.BTBaseView
    public void init(Context context) {
        boolean zB;
        int iFindLayout = findLayout(isLandscape() ? "mbridge_reward_endcard_native_land" : "mbridge_reward_endcard_native_hor");
        if (iFindLayout > 0) {
            if (isLandscape()) {
                ViewGroup viewGroup = (ViewGroup) this.f.inflate(iFindLayout, (ViewGroup) null);
                this.q = viewGroup;
                addView(viewGroup);
                zB = b(this.q);
            } else {
                ViewGroup viewGroup2 = (ViewGroup) this.f.inflate(iFindLayout, (ViewGroup) null);
                this.p = viewGroup2;
                addView(viewGroup2);
                zB = b(this.p);
            }
            this.h = zB;
            a();
        }
    }

    static /* synthetic */ void a(MBridgeBTNativeEC mBridgeBTNativeEC, int i, Context context) {
        JSONObject jSONObject;
        JSONObject jSONObject2 = null;
        try {
            try {
                jSONObject = new JSONObject();
            } catch (Throwable th) {
                z.a("BTBaseView", th.getMessage());
                return;
            }
        } catch (JSONException e) {
            e = e;
        }
        try {
            jSONObject.put(com.mbridge.msdk.foundation.same.a.p, mBridgeBTNativeEC.a(i));
        } catch (JSONException e2) {
            e = e2;
            jSONObject2 = jSONObject;
            e.printStackTrace();
            jSONObject = jSONObject2;
        }
        if (mBridgeBTNativeEC.K != null) {
            if (context != null && context != context.getApplicationContext()) {
                mBridgeBTNativeEC.K.a(context);
            }
            if (mBridgeBTNativeEC.b != null) {
                mBridgeBTNativeEC.K.a(com.mbridge.msdk.video.bt.a.c.a().d(mBridgeBTNativeEC.J + "_" + mBridgeBTNativeEC.b.getRequestId()));
            }
            mBridgeBTNativeEC.K.click(1, jSONObject != null ? jSONObject.toString() : "");
        }
    }

    static /* synthetic */ void a(MBridgeBTNativeEC mBridgeBTNativeEC, float f, float f2) {
        if (mBridgeBTNativeEC.L != null) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put("code", n);
                jSONObject.put("id", mBridgeBTNativeEC.d);
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("x", String.valueOf(f));
                jSONObject2.put("y", String.valueOf(f2));
                jSONObject.put("data", jSONObject2);
                h.a().a(mBridgeBTNativeEC.L, "onClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } catch (Exception unused) {
                com.mbridge.msdk.video.bt.a.c.a().a(mBridgeBTNativeEC.L, "onClicked", mBridgeBTNativeEC.d);
            }
        }
    }
}
