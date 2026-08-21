package com.sigmob.sdk.splash;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import android.view.MotionEvent;
import android.view.View;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.network.Networking;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.FileUtil;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.VolleyError;
import com.czhj.volley.toolbox.ImageLoader;
import com.sigmob.sdk.base.common.BaseBroadcastReceiver;
import com.sigmob.sdk.base.common.af;
import com.sigmob.sdk.base.common.ag;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.base.views.o;
import com.sigmob.sdk.base.views.q;
import com.sigmob.sdk.base.views.v;
import com.sigmob.windad.WindAdError;
import java.io.File;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public final class i extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static float f5164a = 25.0f;
    private static float b = 13.0f;
    private d c;
    private Context d;
    private RelativeLayout e;
    private BaseAdUnit f;
    private c g;
    private ImageLoader.ImageContainer h;
    private String i;
    private boolean j;
    private TextView k;
    private String l;
    private RelativeLayout m;
    private RelativeLayout n;
    private View.OnTouchListener o;
    private float p;
    private v q;
    private boolean r;
    private SensorManager s;
    private boolean t;
    private SensorEventListener u;
    private boolean v;

    /* JADX INFO: renamed from: com.sigmob.sdk.splash.i$7, reason: invalid class name */
    static /* synthetic */ class AnonymousClass7 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f5176a;

        static {
            int[] iArr = new int[af.values().length];
            f5176a = iArr;
            try {
                iArr[af.IGNORE_ABOUT_SCHEME.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f5176a[af.MINI_PROGRAM.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f5176a[af.FOLLOW_DEEP_LINK.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                f5176a[af.MARKET_SCHEME.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                f5176a[af.DOWNLOAD_APK.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                f5176a[af.OPEN_WITH_BROWSER.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                f5176a[af.NOOP.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
        }
    }

    public i(Context context) {
        super(context);
        this.p = 1.0f;
        this.u = new SensorEventListener() { // from class: com.sigmob.sdk.splash.i.1
            private long b;

            @Override // android.hardware.SensorEventListener
            public void onAccuracyChanged(Sensor sensor, int i) {
            }

            @Override // android.hardware.SensorEventListener
            public void onSensorChanged(SensorEvent sensorEvent) {
                long jCurrentTimeMillis = System.currentTimeMillis();
                if (jCurrentTimeMillis - this.b < 2000) {
                    return;
                }
                float f = sensorEvent.values[0];
                float f2 = sensorEvent.values[1];
                float f3 = sensorEvent.values[2];
                if (f > 15.0f || f2 > 15.0f || f3 > 15.0f) {
                    i.this.q.a(2);
                    this.b = jCurrentTimeMillis;
                    i.this.q.postDelayed(new Runnable() { // from class: com.sigmob.sdk.splash.i.1.1
                        @Override // java.lang.Runnable
                        public void run() {
                            if (i.this.r) {
                                return;
                            }
                            SigMacroCommon macroCommon = i.this.f.getMacroCommon();
                            if (macroCommon instanceof SigMacroCommon) {
                                macroCommon.addMarcoKey(SigMacroCommon._AUTOCLICK_, String.valueOf(2));
                            }
                            i.this.a((String) null);
                        }
                    }, 400L);
                }
            }
        };
        this.d = context.getApplicationContext();
    }

    private void a(final BaseAdUnit baseAdUnit, final String str) {
        SigmobLog.i("handleUrlAction: ");
        new ag.a().a(af.IGNORE_ABOUT_SCHEME, af.DOWNLOAD_APK, af.MARKET_SCHEME, af.OPEN_WITH_BROWSER, af.FOLLOW_DEEP_LINK, af.MINI_PROGRAM).a(new ag.b() { // from class: com.sigmob.sdk.splash.i.5
            @Override // com.sigmob.sdk.base.common.ag.b
            public void a(final String str2, af afVar) {
                String str3;
                SigmobLog.i("urlHandlingSucceeded: " + afVar.name() + " url: " + str2);
                if (!baseAdUnit.getAd().forbiden_parse_landingpage.booleanValue()) {
                    z.a(baseAdUnit, afVar.name(), str2);
                }
                BaseBroadcastReceiver.a(i.this.d, i.this.f.getUuid(), IntentActions.ACTION_INTERSTITIAL_CLICK);
                int i = AnonymousClass7.f5176a[afVar.ordinal()];
                if (i == 2 || i == 3) {
                    Log.d("lance", "打开小程序成功:" + afVar);
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_OPEN_DEEPLINK);
                    z.a(PointCategory.OPEN_DEEPLINK, (String) null, baseAdUnit, new z.a() { // from class: com.sigmob.sdk.splash.i.5.1
                        @Override // com.sigmob.sdk.base.common.z.a
                        public void a(Object obj) {
                            if (obj instanceof PointEntitySigmob) {
                                ((PointEntitySigmob) obj).setFinal_url(str2);
                            }
                        }
                    });
                    str3 = "1";
                } else {
                    if (i == 4) {
                        if (i.this.f.getAndroidMarket() != null && !TextUtils.isEmpty(i.this.f.getAndroidMarket().app_package_name)) {
                            try {
                                FileUtil.writeToCache(i.this.f, new File(com.sigmob.sdk.base.utils.b.f(), i.this.f.getAndroidMarket().app_package_name + com.tkay.china.common.a.a.f).getAbsolutePath());
                            } catch (Throwable th) {
                                SigmobLog.e("write ad info with package error " + th.getMessage());
                            }
                        }
                        z.a("open_market", (String) null, i.this.f, new z.a() { // from class: com.sigmob.sdk.splash.i.5.2
                            @Override // com.sigmob.sdk.base.common.z.a
                            public void a(Object obj) {
                                if (obj instanceof PointEntitySigmob) {
                                    PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                                    pointEntitySigmob.setFinal_url(str2);
                                    HashMap map = new HashMap();
                                    map.put("app_package_name", i.this.f.getAndroidMarket().app_package_name);
                                    map.put("store_package_name", i.this.f.getAndroidMarket().appstore_package_name);
                                    pointEntitySigmob.setOptions(map);
                                }
                            }
                        });
                    } else if (i == 5) {
                        i.this.g.h(str2);
                        if (!i.this.f.isDownloadDialog() || i.this.f.getadPrivacy() == null) {
                            i.this.a(true);
                        }
                    }
                    str3 = "0";
                }
                com.sigmob.sdk.base.network.f.a(i.this.f, com.sigmob.sdk.base.common.a.AD_CLICK);
                z.a("click", i.this.f, str3, str2, str);
            }

            @Override // com.sigmob.sdk.base.common.ag.b
            public void b(final String str2, af afVar) {
                BaseAdUnit baseAdUnit2;
                z.a aVar;
                String str3;
                SigmobLog.i("urlHandlingFailed: " + afVar.name() + " url: " + str2);
                int i = AnonymousClass7.f5176a[afVar.ordinal()];
                if (i == 2 || i == 3) {
                    Log.d("lance", "打开小程序失败:" + afVar);
                    com.sigmob.sdk.base.network.f.a(baseAdUnit, com.sigmob.sdk.base.common.a.AD_OPEN_DEEPLINK_FAIL);
                    baseAdUnit2 = baseAdUnit;
                    aVar = new z.a() { // from class: com.sigmob.sdk.splash.i.5.3
                        @Override // com.sigmob.sdk.base.common.z.a
                        public void a(Object obj) {
                            if (obj instanceof PointEntitySigmob) {
                                ((PointEntitySigmob) obj).setFinal_url(str2);
                            }
                        }
                    };
                    str3 = PointCategory.OPEN_DEEPLINK_FAILED;
                } else {
                    if (i != 4) {
                        if (i != 7) {
                            return;
                        }
                        if (!baseAdUnit.getAd().forbiden_parse_landingpage.booleanValue()) {
                            z.a(baseAdUnit, afVar.name(), str2);
                        }
                        com.sigmob.sdk.base.network.f.a(i.this.f, com.sigmob.sdk.base.common.a.AD_CLICK);
                        z.a("click", i.this.f, "0", str2, str);
                        return;
                    }
                    baseAdUnit2 = i.this.f;
                    aVar = new z.a() { // from class: com.sigmob.sdk.splash.i.5.4
                        @Override // com.sigmob.sdk.base.common.z.a
                        public void a(Object obj) {
                            if (obj instanceof PointEntitySigmob) {
                                PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                                pointEntitySigmob.setFinal_url(str2);
                                HashMap map = new HashMap();
                                map.put("app_package_name", i.this.f.getAndroidMarket().app_package_name);
                                map.put("store_package_name", i.this.f.getAndroidMarket().appstore_package_name);
                                pointEntitySigmob.setOptions(map);
                            }
                        }
                    };
                    str3 = PointCategory.OPEN_MARKET_FAILED;
                }
                z.a(str3, (String) null, baseAdUnit2, aVar);
            }
        }).a(baseAdUnit.isSkipSigmobBrowser()).a(baseAdUnit).b(baseAdUnit.getAd().forbiden_parse_landingpage.booleanValue()).a().a(com.sigmob.sdk.b.b(), null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str) {
        SigmobLog.i("handleClick: ");
        this.r = true;
        a(this.f, str);
    }

    private void b(final Context context) {
        this.c = d.a(context, this.f);
        addView(this.c, new RelativeLayout.LayoutParams(-1, -1));
        this.n = new RelativeLayout(context);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        int iDipsToIntPixels = Dips.dipsToIntPixels(f5164a, this.d);
        layoutParams.setMargins(iDipsToIntPixels, (int) (((double) iDipsToIntPixels) * 2.5d), iDipsToIntPixels, iDipsToIntPixels);
        this.n.setClickable(true);
        addView(this.n, layoutParams);
        RelativeLayout relativeLayout = new RelativeLayout(context);
        this.e = relativeLayout;
        relativeLayout.setId(ClientMetadata.generateViewId());
        this.e.setOnTouchListener(new View.OnTouchListener() { // from class: com.sigmob.sdk.splash.i.3
            @Override // android.view.View.OnTouchListener
            public boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() == 1) {
                    BaseBroadcastReceiver.a(context, i.this.f.getUuid(), IntentActions.ACTION_SPLAH_SKIP);
                }
                return true;
            }
        });
        this.o = new View.OnTouchListener() { // from class: com.sigmob.sdk.splash.i.4
            private MotionEvent b;

            @Override // android.view.View.OnTouchListener
            public boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() == 0) {
                    this.b = MotionEvent.obtain(motionEvent);
                } else if (motionEvent.getAction() == 1) {
                    if (this.b == null) {
                        this.b = motionEvent;
                    }
                    String str = String.format("%d,%d,%d,%d", Integer.valueOf((int) this.b.getRawX()), Integer.valueOf((int) this.b.getRawY()), Integer.valueOf((int) motionEvent.getRawX()), Integer.valueOf((int) motionEvent.getRawY()));
                    try {
                        SigMacroCommon macroCommon = i.this.f.getMacroCommon();
                        if (macroCommon instanceof SigMacroCommon) {
                            macroCommon.addMarcoKey(SigMacroCommon._AUTOCLICK_, String.valueOf(2));
                            macroCommon.addMarcoKey(SigMacroCommon._DOWNX_, String.valueOf((int) this.b.getRawX()));
                            macroCommon.addMarcoKey(SigMacroCommon._DOWNY_, String.valueOf((int) this.b.getRawY()));
                            macroCommon.addMarcoKey(SigMacroCommon._UPX_, String.valueOf((int) motionEvent.getRawX()));
                            macroCommon.addMarcoKey(SigMacroCommon._UPY_, String.valueOf((int) motionEvent.getRawY()));
                        }
                    } catch (Throwable th) {
                        SigmobLog.e("splash click macro set " + th.getMessage());
                    }
                    i.this.a(str);
                }
                return true;
            }
        };
        if (this.f.enable_full_click()) {
            this.n.setOnTouchListener(this.o);
        }
    }

    private View c(Context context) {
        TextView textView = new TextView(context);
        textView.setId(ClientMetadata.generateViewId());
        textView.setText(com.sigmob.sdk.base.d.g());
        textView.setTextSize(1, 10.0f);
        textView.setTextColor(Color.parseColor("#dadada"));
        textView.setGravity(17);
        int iDipsToIntPixels = Dips.dipsToIntPixels(5.0f, context);
        textView.setPadding(iDipsToIntPixels, 0, iDipsToIntPixels, 0);
        textView.setBackgroundColor(Color.parseColor("#B3505050"));
        return textView;
    }

    private void d(Context context) {
        RelativeLayout relativeLayout = new RelativeLayout(context);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, Dips.dipsToIntPixels(15.0f, context));
        if (this.m != null) {
            layoutParams.addRule(4, this.e.getId());
            layoutParams.addRule(9);
            layoutParams.setMargins(Dips.dipsToIntPixels(f5164a * this.p, context) / 2, 0, 0, 0);
        } else {
            layoutParams.addRule(12);
            layoutParams.addRule(11);
            if (!this.j) {
                layoutParams.setMargins(0, 0, 0, ClientMetadata.getInstance().getInsetBottom());
            }
        }
        relativeLayout.addView(c(context));
        addView(relativeLayout, layoutParams);
    }

    private void e(Context context) {
        int iDipsToIntPixels = Dips.dipsToIntPixels(this.p * 30.0f, context);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, iDipsToIntPixels);
        layoutParams.addRule(11);
        layoutParams.addRule(10);
        int i = iDipsToIntPixels / 2;
        int color = Color.parseColor("#B3505050");
        layoutParams.setMargins(0, i, i, 0);
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(color);
        gradientDrawable.setCornerRadius(i);
        if (Build.VERSION.SDK_INT >= 16) {
            this.e.setBackground(gradientDrawable);
        } else {
            this.e.setBackgroundDrawable(gradientDrawable);
        }
        this.e.setPadding(i, 0, i, 0);
        addView(this.e, layoutParams);
        TextView textView = new TextView(context);
        this.k = textView;
        textView.setId(ClientMetadata.generateViewId());
        this.k.setTextSize(1, (int) b);
        this.k.setTextColor(Color.parseColor("#dadada"));
        this.k.setGravity(17);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, -1);
        layoutParams2.addRule(15);
        this.e.addView(this.k, layoutParams2);
    }

    private void f(Context context) {
        v vVar = new v(context);
        this.q = vVar;
        vVar.a(1);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams.setMargins(0, 0, 0, Dips.asIntPixels(40.0f, getContext()));
        layoutParams.addRule(12);
        layoutParams.addRule(14);
        addView(this.q, layoutParams);
        SensorManager sensorManager = (SensorManager) context.getSystemService("sensor");
        this.s = sensorManager;
        if (sensorManager != null) {
            sensorManager.registerListener(this.u, sensorManager.getDefaultSensor(1), 3);
        }
    }

    private View g(Context context) {
        final ImageView imageView = new ImageView(context);
        imageView.setBackgroundColor(Color.alpha(0));
        imageView.setId(ClientMetadata.generateViewId());
        imageView.setScaleType(ImageView.ScaleType.FIT_XY);
        ImageLoader imageLoader = Networking.getImageLoader();
        if (imageLoader != null) {
            this.h = imageLoader.get(this.f.getAd_source_logo(), new ImageLoader.ImageListener() { // from class: com.sigmob.sdk.splash.i.6
                @Override // com.czhj.volley.Response.ErrorListener
                public void onErrorResponse(VolleyError volleyError) {
                }

                @Override // com.czhj.volley.toolbox.ImageLoader.ImageListener
                public void onResponse(ImageLoader.ImageContainer imageContainer, boolean z) {
                    if (imageContainer.getBitmap() != null) {
                        imageView.setImageBitmap(imageContainer.getBitmap());
                    }
                }
            });
        }
        return imageView;
    }

    private void h(Context context) {
        if (TextUtils.isEmpty(this.f.getAd_source_logo())) {
            return;
        }
        RelativeLayout relativeLayout = new RelativeLayout(context);
        View viewG = g(context);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(Dips.dipsToIntPixels(13.0f, context), Dips.dipsToIntPixels(13.0f, context));
        if (!this.j) {
            layoutParams.setMargins(0, 0, 0, ClientMetadata.getInstance().getInsetBottom());
        }
        layoutParams.addRule(12);
        layoutParams.addRule(11);
        relativeLayout.addView(viewG, new RelativeLayout.LayoutParams(-1, -1));
        RelativeLayout relativeLayout2 = this.m;
        if (relativeLayout2 != null) {
            layoutParams.addRule(2, relativeLayout2.getId());
        }
        addView(relativeLayout, layoutParams);
    }

    private void i(Context context) {
        com.sigmob.sdk.base.views.b bVar = new com.sigmob.sdk.base.views.b(getContext(), 0);
        bVar.a(this.f.getAd_source_logo());
        if (!this.f.getInvisibleAdLabel()) {
            bVar.b(com.sigmob.sdk.base.d.g());
        }
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
        int iDipsToIntPixels = Dips.dipsToIntPixels(5.0f, context);
        layoutParams.addRule(12);
        layoutParams.addRule(9);
        layoutParams.setMargins(iDipsToIntPixels, 0, 0, iDipsToIntPixels);
        addView(bVar, layoutParams);
    }

    protected void a() {
        super.setVisibility(8);
        d dVar = this.c;
        if (dVar != null) {
            dVar.setVisibility(8);
        }
    }

    public void a(Context context) {
        String str = (this.f.getMaterial() == null || this.f.getMaterial().template_type.intValue() == 5) ? "" : this.f.getInteractionType() == 1 ? "点击查看详情" : "点击跳转第三方应用";
        if (TextUtils.isEmpty(str)) {
            return;
        }
        int iAsIntPixels = Dips.asIntPixels(70.0f, context);
        RelativeLayout relativeLayout = new RelativeLayout(context);
        this.m = relativeLayout;
        relativeLayout.setOnTouchListener(this.o);
        this.m.setClickable(true);
        this.m.setId(ClientMetadata.generateViewId());
        int i = iAsIntPixels / 2;
        this.m.setPadding(i, 0, i, 0);
        this.m.setGravity(16);
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(-16777216);
        gradientDrawable.setAlpha(102);
        gradientDrawable.setCornerRadius(i);
        if (Build.VERSION.SDK_INT >= 16) {
            this.m.setBackground(gradientDrawable);
        } else {
            this.m.setBackgroundDrawable(gradientDrawable);
        }
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, iAsIntPixels);
        layoutParams.addRule(12);
        layoutParams.addRule(14);
        int i2 = (iAsIntPixels * 2) / 7;
        layoutParams.setMargins(i2, 0, i2, iAsIntPixels);
        addView(this.m, layoutParams);
        TextView textView = new TextView(context);
        textView.setId(ClientMetadata.generateViewId());
        textView.setTextColor(-1);
        textView.setSingleLine();
        textView.setGravity(17);
        textView.setText(str);
        textView.setTextSize(1, 20.0f);
        textView.getPaint().setFakeBoldText(true);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams2.addRule(13);
        this.m.addView(textView, layoutParams2);
        ImageView imageView = new ImageView(context);
        imageView.setScaleType(ImageView.ScaleType.CENTER);
        imageView.setImageBitmap(o.SKIP_ICON.a());
        int i3 = iAsIntPixels / 7;
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(i3, (iAsIntPixels * 3) / 14);
        layoutParams3.addRule(1, textView.getId());
        layoutParams3.addRule(15);
        layoutParams3.setMargins(i3, 0, 0, 0);
        this.m.addView(imageView, layoutParams3);
    }

    void a(boolean z) {
        if (z) {
            BaseBroadcastReceiver.a(this.d, this.f.getUuid(), IntentActions.ACTION_INTERSTITIAL_DISMISS);
            this.e.setOnTouchListener(null);
            this.g.k();
        }
        SensorManager sensorManager = this.s;
        if (sensorManager != null) {
            sensorManager.unregisterListener(this.u);
        }
        this.c.setOnTouchListener(null);
        ImageLoader.ImageContainer imageContainer = this.h;
        if (imageContainer != null) {
            imageContainer.cancelRequest();
            this.h = null;
        }
    }

    public boolean a(BaseAdUnit baseAdUnit) {
        try {
            this.f = baseAdUnit;
            this.g = (c) baseAdUnit.getAdConfig();
            b(this.d);
            if (this.f.isUse_floating_btn()) {
                a(this.d);
            }
            int iIntValue = this.f.getMaterial().template_type.intValue();
            if (iIntValue == 2 || iIntValue == 3) {
                d(this.d);
            } else if (iIntValue == 4) {
                i(this.d);
            } else if (iIntValue != 5) {
                h(this.d);
            } else {
                i(this.d);
                f(this.d);
            }
            e(this.d);
            return true;
        } catch (Throwable th) {
            SigmobLog.e("setupAd error", th);
            return false;
        }
    }

    protected void b() {
        super.setVisibility(4);
    }

    public boolean c() {
        return this.c.a(this.f);
    }

    public void d() {
        try {
            if (this.r) {
                return;
            }
            SigMacroCommon macroCommon = this.f.getMacroCommon();
            if (macroCommon instanceof SigMacroCommon) {
                macroCommon.addMarcoKey(SigMacroCommon._AUTOCLICK_, String.valueOf(this.g.n()));
            }
        } catch (Throwable th) {
            SigmobLog.e("splash click macro set " + th.getMessage());
        }
        a(String.format("%d,%d,%d,%d", 0, 0, 0, 0));
    }

    public void e() {
        this.c.b();
    }

    public void f() {
        this.c.c();
    }

    public int getDuration() {
        return this.c.getDuration();
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.g.a(ViewUtil.getActivityFromViewTop(this), this.f, new q.b() { // from class: com.sigmob.sdk.splash.i.2
            @Override // com.sigmob.sdk.base.views.q.b
            public void a() {
                i.this.t = false;
                if (i.this.v) {
                    i.this.a(true);
                }
            }

            @Override // com.sigmob.sdk.base.views.q.b
            public void a(String str, String str2) {
            }

            @Override // com.sigmob.sdk.base.views.q.b
            public void b() {
                i.this.t = true;
            }
        });
    }

    public void setDuration(int i) {
        TextView textView;
        String strA;
        if (this.f == null) {
            return;
        }
        if (i <= 0 || this.k == null) {
            this.v = true;
            if (this.t) {
                return;
            }
            a(true);
            return;
        }
        SigmobLog.e("duration " + String.valueOf(i));
        int iIntValue = this.f.getMaterial().template_type.intValue();
        if (iIntValue == 2 || iIntValue == 3 || iIntValue == 4 || iIntValue == 5) {
            textView = this.k;
            strA = com.sigmob.sdk.base.d.a(Integer.valueOf(i));
        } else {
            textView = this.k;
            strA = com.sigmob.sdk.base.d.c(Integer.valueOf(i));
        }
        textView.setText(strA);
    }

    @Override // android.view.View
    public void setOnTouchListener(View.OnTouchListener onTouchListener) {
        d dVar = this.c;
        if (dVar != null) {
            dVar.setOnTouchListener(onTouchListener);
        }
    }

    public void setShowAppLogo(boolean z) {
        this.j = z;
    }

    @Override // android.view.View
    public void setVisibility(int i) {
        if (i == 0) {
            this.e.setVisibility(0);
            this.c.a();
            this.g.a(this.d, 0, this.f);
            super.setVisibility(i);
            return;
        }
        try {
            z.a(PointCategory.SPLASHADBLOCK, WindAdError.ERROR_SPLASH_ADBLOCK.getErrorCode(), Preconditions.NoThrow.getLineInfo(), this.f);
            SigmobLog.e("debug " + Preconditions.NoThrow.getLineInfo());
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }
}
