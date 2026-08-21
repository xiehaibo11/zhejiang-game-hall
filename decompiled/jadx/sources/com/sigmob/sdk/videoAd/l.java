package com.sigmob.sdk.videoAd;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.media.MediaPlayer;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Base64;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.animation.LinearInterpolator;
import android.view.animation.RotateAnimation;
import android.webkit.DownloadListener;
import android.webkit.JavascriptInterface;
import android.webkit.WebResourceError;
import android.webkit.WebResourceRequest;
import android.webkit.WebView;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import com.bianfeng.libuniverse.Device;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.logger.SigmobLog;
import com.czhj.volley.toolbox.ImageLoader;
import com.sigmob.sdk.base.common.f;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.common.r;
import com.sigmob.sdk.base.common.x;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.ClickCommon;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.models.rtb.ClickAreaSetting;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.base.views.d;
import com.sigmob.sdk.base.views.l;
import com.sigmob.sdk.base.views.o;
import com.sigmob.sdk.base.views.q;
import com.sigmob.sdk.base.views.t;
import com.sigmob.sdk.base.views.w;
import com.sigmob.sdk.base.views.y;
import com.sigmob.sdk.videoAd.h;
import com.ss.android.download.api.constant.BaseConstants;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class l extends c implements f.a, x {
    static final String f = "video_config";
    private static final String h = "current_position";
    private static final String i = "video_finished";
    private static final String j = "companionAd_visable";
    private static final long k = 50;
    private static final int l = -1;
    private static final int m = 0;
    private static int n;
    private boolean A;
    private Handler B;
    private boolean C;
    private com.sigmob.sdk.base.views.d D;
    private String E;
    private int F;
    private boolean G;
    private com.sigmob.sdk.videoAd.a H;
    private int I;
    private b J;
    private BaseAdUnit K;
    private View L;
    private r M;
    private y N;
    private com.sigmob.sdk.base.views.x O;
    private w P;
    private com.sigmob.sdk.base.views.a Q;
    private h R;
    private d S;
    private int T;
    private int U;
    private boolean V;
    private boolean W;
    private int X;
    private boolean Y;
    private RelativeLayout Z;
    private boolean aa;
    private com.sigmob.sdk.base.views.x ab;
    private boolean ac;
    private boolean ad;
    private ImageLoader.ImageContainer ae;
    private com.sigmob.sdk.base.views.j af;
    private boolean ag;
    private boolean ah;
    private boolean ai;
    private int aj;
    private t ak;
    private boolean al;
    private q am;
    private boolean an;
    private boolean ao;
    String g;
    private com.sigmob.sdk.base.views.b o;
    private com.sigmob.sdk.base.common.w p;
    private ImageView q;
    private RelativeLayout r;
    private int s;
    private boolean t;
    private int u;
    private String v;
    private List<String> w;
    private List<String> x;
    private long y;
    private String z;

    /* JADX INFO: renamed from: com.sigmob.sdk.videoAd.l$14, reason: invalid class name */
    static /* synthetic */ class AnonymousClass14 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f5193a;

        static {
            int[] iArr = new int[com.sigmob.sdk.base.a.values().length];
            f5193a = iArr;
            try {
                iArr[com.sigmob.sdk.base.a.COMPANION.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f5193a[com.sigmob.sdk.base.a.VIDEO_CLICK.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
        }
    }

    static class a {
        a() {
        }

        @JavascriptInterface
        public int getInteractionType() {
            return l.n;
        }

        @JavascriptInterface
        public String getSdkVersion() {
            return "4.9.0";
        }
    }

    public l(Activity activity, BaseAdUnit baseAdUnit, Bundle bundle, Bundle bundle2, String str, com.sigmob.sdk.base.common.j jVar) throws IllegalStateException {
        super(activity, str, jVar);
        this.s = 0;
        this.t = false;
        this.u = 0;
        this.v = "undone";
        this.w = new ArrayList();
        this.x = new ArrayList();
        this.z = Device.NETWORN_NONE;
        this.B = new Handler();
        this.C = true;
        this.K = null;
        this.T = 0;
        this.Y = false;
        this.aa = false;
        this.ac = false;
        this.ad = false;
        this.ag = false;
        this.al = false;
        this.an = false;
        this.K = baseAdUnit;
        com.sigmob.sdk.videoAd.a aVar = (com.sigmob.sdk.videoAd.a) baseAdUnit.getAdConfig();
        this.H = aVar;
        aVar.a(k(), this.K, (q.b) null);
        this.H.a(this);
        this.E = this.K.getAdslot_id();
        n = this.K.getInteractionType();
        int iIntValue = this.K.getAd().display_orientation.intValue();
        this.I = iIntValue != 1 ? iIntValue != 2 ? bundle.getInt(com.sigmob.sdk.base.h.u, 3) : 6 : 7;
        h().a(this.I);
        k().requestWindowFeature(1);
        k().getWindow().addFlags(1024);
        b(activity, this.I, bundle);
        this.K.getMacroCommon().addMarcoKey(SigMacroCommon._PLAYLASTFRAME_, "1");
        this.C = this.K.getMaterial().creative_type.intValue() != com.sigmob.sdk.base.common.l.CreativeTypeVideo_transparent_html.a();
        if (bundle2 != null) {
            this.U = bundle2.getInt(h, -1);
            this.V = bundle2.getBoolean(i, false);
            this.Y = bundle2.getBoolean(j, false);
        }
        if (this.H.e() == null) {
            throw new IllegalStateException("BaseVideoConfig does not have a video disk path");
        }
        if (this.e == null) {
            int iB = com.sigmob.sdk.base.d.b();
            if (iB != 0) {
                k().setTheme(iB);
            }
            j().setBackgroundColor(-16777216);
        } else {
            j().setBackgroundColor(0);
        }
        RelativeLayout relativeLayout = new RelativeLayout(activity);
        this.r = relativeLayout;
        relativeLayout.setBackgroundColor(-16777216);
        this.J = a(activity, 0);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -2);
        layoutParams.addRule(13);
        this.r.addView(this.J, layoutParams);
        j().addView(this.r, new RelativeLayout.LayoutParams(-1, -1));
        if (this.t) {
            a(activity);
            z();
        }
        m();
        this.r.setClickable(true);
        this.r.setOnTouchListener(new View.OnTouchListener() { // from class: com.sigmob.sdk.videoAd.l.1

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            MotionEvent f5188a = null;

            /* JADX WARN: Removed duplicated region for block: B:32:0x009a  */
            @Override // android.view.View.OnTouchListener
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public boolean onTouch(android.view.View r4, android.view.MotionEvent r5) {
                /*
                    r3 = this;
                    com.sigmob.sdk.videoAd.l r4 = com.sigmob.sdk.videoAd.l.this
                    com.sigmob.sdk.base.models.BaseAdUnit r4 = com.sigmob.sdk.videoAd.l.a(r4)
                    boolean r4 = r4.getFullClickOnVideo()
                    r0 = 1
                    if (r4 == 0) goto L3c
                    com.sigmob.sdk.videoAd.l r4 = com.sigmob.sdk.videoAd.l.this
                    com.sigmob.sdk.base.views.d r4 = com.sigmob.sdk.videoAd.l.b(r4)
                    if (r4 == 0) goto L21
                    com.sigmob.sdk.videoAd.l r4 = com.sigmob.sdk.videoAd.l.this
                    com.sigmob.sdk.base.views.d r4 = com.sigmob.sdk.videoAd.l.b(r4)
                    int r4 = r4.getVisibility()
                    if (r4 == 0) goto La0
                L21:
                    int r4 = r5.getAction()
                    if (r4 != r0) goto L35
                    android.view.MotionEvent r4 = r3.f5188a
                    if (r4 != 0) goto L2d
                    r3.f5188a = r5
                L2d:
                    com.sigmob.sdk.videoAd.l r4 = com.sigmob.sdk.videoAd.l.this
                    android.view.MotionEvent r1 = r3.f5188a
                    com.sigmob.sdk.videoAd.l.a(r4, r1, r5)
                    goto La0
                L35:
                    int r4 = r5.getAction()
                    if (r4 != 0) goto La0
                    goto L9a
                L3c:
                    int r4 = r5.getAction()
                    if (r4 != r0) goto L94
                    com.sigmob.sdk.videoAd.l r4 = com.sigmob.sdk.videoAd.l.this
                    com.sigmob.sdk.base.models.BaseAdUnit r4 = com.sigmob.sdk.videoAd.l.a(r4)
                    com.sigmob.sdk.base.models.rtb.MaterialMeta r4 = r4.getMaterial()
                    java.lang.Boolean r4 = r4.enable_collapse_tool_bar
                    boolean r4 = r4.booleanValue()
                    r1 = 0
                    if (r4 == 0) goto L89
                    com.sigmob.sdk.videoAd.l r4 = com.sigmob.sdk.videoAd.l.this
                    com.sigmob.sdk.base.views.j r4 = com.sigmob.sdk.videoAd.l.c(r4)
                    if (r4 == 0) goto L89
                    com.sigmob.sdk.videoAd.l r4 = com.sigmob.sdk.videoAd.l.this
                    com.sigmob.sdk.base.views.j r4 = com.sigmob.sdk.videoAd.l.c(r4)
                    boolean r4 = r4.a()
                    if (r4 == 0) goto L89
                    com.sigmob.sdk.videoAd.l r4 = com.sigmob.sdk.videoAd.l.this
                    com.sigmob.sdk.base.views.j r4 = com.sigmob.sdk.videoAd.l.c(r4)
                    boolean r4 = r4.b()
                    if (r4 == 0) goto L7f
                    com.sigmob.sdk.videoAd.l r4 = com.sigmob.sdk.videoAd.l.this
                    com.sigmob.sdk.base.views.j r4 = com.sigmob.sdk.videoAd.l.c(r4)
                    r4.setVisibility(r1)
                    goto L89
                L7f:
                    com.sigmob.sdk.videoAd.l r4 = com.sigmob.sdk.videoAd.l.this
                    com.sigmob.sdk.base.views.j r4 = com.sigmob.sdk.videoAd.l.c(r4)
                    r2 = 4
                    r4.setVisibility(r2)
                L89:
                    com.sigmob.sdk.videoAd.l r4 = com.sigmob.sdk.videoAd.l.this
                    com.sigmob.sdk.base.models.BaseAdUnit r4 = com.sigmob.sdk.videoAd.l.a(r4)
                    java.lang.String r2 = "useless_video_click"
                    com.sigmob.sdk.base.common.z.a(r4, r5, r2, r1)
                L94:
                    int r4 = r5.getAction()
                    if (r4 != 0) goto La0
                L9a:
                    android.view.MotionEvent r4 = android.view.MotionEvent.obtain(r5)
                    r3.f5188a = r4
                La0:
                    return r0
                */
                throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.videoAd.l.AnonymousClass1.onTouch(android.view.View, android.view.MotionEvent):boolean");
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void A() {
        RelativeLayout relativeLayout = this.Z;
        if (relativeLayout == null || relativeLayout.getVisibility() != 0) {
            return;
        }
        this.w.add(String.format("%d", Long.valueOf(System.currentTimeMillis() - this.y)));
        this.x.add(String.format("%.2f", Float.valueOf(t() / 1000.0f)));
        this.z = PointCategory.PLAY;
        this.B.removeCallbacksAndMessages(null);
        this.Z.setVisibility(4);
    }

    private void B() {
        try {
            if (this.V) {
                return;
            }
            I();
            if (this.U > 0) {
                SigmobLog.d("video seek to " + this.U);
                this.J.seekTo(this.U);
            }
            if ((this.D == null || this.D.getVisibility() != 0) && !this.an) {
                this.J.start();
            }
            if (this.U != -1) {
                this.H.a(i(), this.U);
            }
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    private void C() {
        try {
            if (this.V) {
                return;
            }
            J();
            this.J.pause();
            SigmobLog.i("videoView.pause()");
            this.U = t();
            n().a(com.sigmob.sdk.base.common.a.AD_PAUSE, t());
            this.H.b(i(), this.U);
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public float D() {
        return t() / s();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void E() {
        try {
            this.T = this.H.j(s());
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    private void F() {
        z.a(PointCategory.PLAY_LOADING, (String) null, this.K, new z.a() { // from class: com.sigmob.sdk.videoAd.l.18
            @Override // com.sigmob.sdk.base.common.z.a
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    HashMap map = new HashMap();
                    l lVar = l.this;
                    map.put("duration_seq", lVar.a((List<String>) lVar.w));
                    l lVar2 = l.this;
                    map.put("video_time_seq", lVar2.a((List<String>) lVar2.x));
                    map.put("skip_state", l.this.z);
                    map.put("video_duration", String.format("%.2f", Float.valueOf(l.this.s() / 1000.0f)));
                    map.put("endcard_loading_state", l.this.v);
                    ((PointEntitySigmob) obj).setOptions(map);
                }
            }
        });
    }

    private void G() {
        int iS = this.H.s();
        int iS2 = s() - 2;
        if (iS == 99999999) {
            iS = 0;
        } else if (iS == -99999999) {
            a(iS2);
            return;
        } else if (iS <= 0) {
            iS += iS2;
        }
        a(iS);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void H() {
        ImageView imageView;
        u();
        if (!this.C && (imageView = this.q) != null) {
            ViewParent parent = imageView.getParent();
            if (parent != null && (parent instanceof ViewGroup)) {
                ((ViewGroup) parent).removeView(this.q);
            }
            j().addView(this.q, 0);
        }
        com.sigmob.sdk.base.common.f.e().b(this);
        com.sigmob.sdk.base.views.x xVar = this.O;
        if (xVar == null) {
            e(i(), 0);
        } else {
            xVar.setVisibility(0);
        }
        com.sigmob.sdk.base.views.b bVar = this.o;
        if (bVar != null) {
            bVar.setVisibility(8);
        }
        F();
        A();
        if (this.L == null) {
            SigmobLog.e("endcard can't show " + this.K.getEndCardIndexPath());
            HashMap map = new HashMap();
            map.put("error", "endcard can't show");
            a(IntentActions.ACTION_REWARDED_VIDEO_PLAYFAIL, map);
            this.d.a();
        }
        View view = this.L;
        if (view != null) {
            view.setVisibility(0);
            this.L.bringToFront();
        }
        RelativeLayout relativeLayout = this.r;
        if (relativeLayout != null) {
            relativeLayout.setVisibility(4);
            a(IntentActions.ACTION_REWARDED_VIDEO_CLOSE);
        }
        w wVar = this.P;
        if (wVar != null) {
            wVar.setVisibility(8);
        }
        com.sigmob.sdk.base.views.x xVar2 = this.ab;
        if (xVar2 != null) {
            xVar2.setVisibility(8);
        }
        if (this.ag) {
            this.N.setVisibility(8);
        }
        com.sigmob.sdk.base.views.j jVar = this.af;
        if (jVar != null) {
            jVar.setVisibility(8);
        }
        this.Y = true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void I() {
        d dVar = this.S;
        if (dVar != null) {
            dVar.startRepeating(k);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void J() {
        d dVar = this.S;
        if (dVar != null) {
            dVar.stop();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void K() {
        new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.sigmob.sdk.videoAd.l.11
            @Override // java.lang.Runnable
            public void run() {
                l.this.a(IntentActions.ACTION_INTERSTITIAL_CLICK);
            }
        });
    }

    private View a(Context context, h hVar, int i2) {
        Preconditions.NoThrow.checkNotNull(context);
        if (hVar == null) {
            View view = new View(context);
            view.setVisibility(4);
            return view;
        }
        RelativeLayout relativeLayout = new RelativeLayout(context);
        relativeLayout.setGravity(17);
        j().addView(relativeLayout, 0, new RelativeLayout.LayoutParams(-1, -1));
        com.sigmob.sdk.base.views.l lVarA = a(context, hVar);
        lVarA.setVisibility(i2);
        relativeLayout.addView(lVarA, new LinearLayout.LayoutParams(-1, -1));
        if (this.Q == null) {
            this.Q = new com.sigmob.sdk.base.views.a(context, this.K.getRequestId(), this.K.getAdslot_id());
        }
        lVarA.setLogoClickListener(new View.OnClickListener() { // from class: com.sigmob.sdk.videoAd.l.6
            @Override // android.view.View.OnClickListener
            public void onClick(View view2) {
                if (l.this.Q != null) {
                    l.this.Q.show();
                }
            }
        });
        return lVarA;
    }

    private com.sigmob.sdk.base.views.l a(Context context, h hVar) {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(hVar);
        Preconditions.NoThrow.checkNotNull(hVar.a());
        com.sigmob.sdk.base.views.l lVarA = com.sigmob.sdk.base.views.l.a(context, this.K.getAd_source_logo(), false, this.K.getInvisibleAdLabel());
        lVarA.addJavascriptInterface(new a(), "sigVersion");
        lVarA.setWebViewClickListener(new l.a() { // from class: com.sigmob.sdk.videoAd.l.8
            @Override // com.sigmob.sdk.base.views.l.a
            public void a(MotionEvent motionEvent, MotionEvent motionEvent2) {
                String str;
                if (l.this.O.getVisibility() != 0 || l.this.aa) {
                    SigmobLog.w("ignore invalid click");
                    return;
                }
                z.a(l.this.K, motionEvent2, PointCategory.ENDCARDCLICK, true);
                l lVar = l.this;
                Object[] objArr = new Object[4];
                if (motionEvent == null) {
                    objArr[0] = Integer.valueOf((int) motionEvent2.getRawX());
                    objArr[1] = Integer.valueOf((int) motionEvent2.getRawY());
                    objArr[2] = Integer.valueOf((int) motionEvent2.getRawX());
                    objArr[3] = Integer.valueOf((int) motionEvent2.getRawY());
                    str = String.format("%d,%d,%d,%d", objArr);
                } else {
                    objArr[0] = Integer.valueOf((int) motionEvent.getRawX());
                    objArr[1] = Integer.valueOf((int) motionEvent.getRawY());
                    objArr[2] = Integer.valueOf((int) motionEvent2.getRawX());
                    objArr[3] = Integer.valueOf((int) motionEvent2.getRawY());
                    str = String.format("%d,%d,%d,%d", objArr);
                }
                lVar.g = str;
                SigMacroCommon macroCommon = l.this.K.getMacroCommon();
                if (macroCommon instanceof SigMacroCommon) {
                    SigMacroCommon sigMacroCommon = macroCommon;
                    sigMacroCommon.addMarcoKey(SigMacroCommon._DOWNX_, String.valueOf((int) motionEvent.getRawX()));
                    sigMacroCommon.addMarcoKey(SigMacroCommon._DOWNY_, String.valueOf((int) motionEvent.getRawY()));
                    sigMacroCommon.addMarcoKey(SigMacroCommon._UPX_, String.valueOf((int) motionEvent2.getRawX()));
                    sigMacroCommon.addMarcoKey(SigMacroCommon._UPY_, String.valueOf((int) motionEvent2.getRawY()));
                }
                l.this.A = true;
                if (l.this.K.getMaterial().click_type.intValue() != com.sigmob.sdk.base.common.k.FullScreen.a() || TextUtils.isEmpty(l.this.K.getMaterial().landing_page) || l.this.K.getMaterial().creative_type.intValue() == com.sigmob.sdk.base.common.l.CreativeTypeVideo_EndCardURL.a()) {
                    return;
                }
                l.this.H.a(com.sigmob.sdk.base.a.ENDCARD, l.this.g, true);
            }
        });
        lVarA.setDownloadListener(new DownloadListener() { // from class: com.sigmob.sdk.videoAd.l.9
            @Override // android.webkit.DownloadListener
            public void onDownloadStart(String str, String str2, String str3, String str4, long j2) {
                if (l.this.A) {
                    if (TextUtils.isEmpty(l.this.K.getMaterial().landing_page) || l.this.K.getInteractionType() == 2) {
                        l.this.K.setCustomLandPageUrl(str);
                    }
                    l.this.H.a(com.sigmob.sdk.base.a.ENDCARD, l.this.g, true);
                    SigmobLog.d("onDownloadStart() called with: url = [" + str + "], userAgent = [" + str2 + "], contentDisposition = [" + str3 + "], mimetype = [" + str4 + "], contentLength = [" + j2 + "]");
                }
            }
        });
        lVarA.setAdUnit(this.K);
        lVarA.setWebViewClient(new com.sigmob.sdk.base.e() { // from class: com.sigmob.sdk.videoAd.l.10
            @Override // android.webkit.WebViewClient
            public void onPageFinished(WebView webView, String str) {
                super.onPageFinished(webView, str);
                SigmobLog.d("onPageFinished: ");
                l.this.v = "done";
            }

            @Override // com.sigmob.sdk.base.e, android.webkit.WebViewClient
            public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
                super.onPageStarted(webView, str, bitmap);
                SigmobLog.d("onPageStarted: ");
            }

            @Override // com.sigmob.sdk.base.e, android.webkit.WebViewClient
            public void onReceivedError(WebView webView, int i2, String str, String str2) {
                super.onReceivedError(webView, i2, str, str2);
                if (str2.startsWith("http://")) {
                    return;
                }
                l.this.v = "error";
            }

            @Override // android.webkit.WebViewClient
            public void onReceivedError(WebView webView, WebResourceRequest webResourceRequest, WebResourceError webResourceError) {
                super.onReceivedError(webView, webResourceRequest, webResourceError);
                if (Build.VERSION.SDK_INT >= 21) {
                    String host = webResourceRequest.getUrl().getHost();
                    if (TextUtils.isEmpty(host) || !host.equals(com.sigmob.sdk.base.network.c.f4916a)) {
                        return;
                    }
                    l.this.v = "error";
                }
            }

            @Override // android.webkit.WebViewClient
            public boolean shouldOverrideUrlLoading(WebView webView, String str) {
                int i2;
                try {
                    SigmobLog.d("load url " + str);
                    webView.getContext();
                    Uri uri = Uri.parse(str);
                    if ("sigmobAd".equalsIgnoreCase(uri.getScheme())) {
                        String host = uri.getHost();
                        if (!TextUtils.isEmpty(host)) {
                            if (!"track".equals(host) && !"active".equals(host)) {
                                if ("openFourElements".equals(host)) {
                                    l.this.b(2);
                                    return true;
                                }
                            }
                            String queryParameter = uri.getQueryParameter("data");
                            String queryParameter2 = uri.getQueryParameter("event");
                            if (!TextUtils.isEmpty(queryParameter2) && !TextUtils.isEmpty(queryParameter)) {
                                final String str2 = new String(Base64.decode(queryParameter, 0), "utf-8");
                                z.a(host, queryParameter2, l.this.K, new z.a() { // from class: com.sigmob.sdk.videoAd.l.10.1
                                    @Override // com.sigmob.sdk.base.common.z.a
                                    public void a(Object obj) {
                                        if (obj instanceof PointEntitySigmob) {
                                            ((PointEntitySigmob) obj).setUrl(str2);
                                        }
                                    }
                                });
                            }
                            return true;
                        }
                    }
                    if (l.this.aa) {
                        return true;
                    }
                    if (l.this.K.getMaterial().disable_auto_deeplink.booleanValue() && !l.this.A) {
                        return TextUtils.isEmpty(str) || !str.startsWith("http");
                    }
                    if (l.this.K.getMaterial().click_type.intValue() == com.sigmob.sdk.base.common.k.Button.a() || TextUtils.isEmpty(l.this.K.getMaterial().landing_page) || l.this.K.getMaterial().creative_type.intValue() == com.sigmob.sdk.base.common.l.CreativeTypeVideo_EndCardURL.a()) {
                        if (l.this.O.getVisibility() != 0 || TextUtils.isEmpty(uri.getScheme()) || uri.getScheme().equals("http") || uri.getScheme().equals("https")) {
                            if (!TextUtils.isEmpty(uri.getScheme()) && (uri.getScheme().equals("http") || uri.getScheme().equals("https"))) {
                                if (l.this.ah) {
                                    l.this.K();
                                    l.this.ah = false;
                                }
                                webView.loadUrl(str);
                            }
                        } else if (!uri.getScheme().equalsIgnoreCase("sigmobAd") || TextUtils.isEmpty(uri.getHost()) || !uri.getHost().equalsIgnoreCase("download") || TextUtils.isEmpty(l.this.K.getMaterial().landing_page)) {
                            try {
                                List<String> list = l.this.K.getAdSetting() != null ? l.this.K.getAdSetting().scheme_white_list : null;
                                if (list != null && list.size() > 0) {
                                    while (i2 < list.size()) {
                                        String str3 = list.get(i2);
                                        i2 = (str.startsWith(str3) || str3.equals("*")) ? 0 : i2 + 1;
                                        l.this.K.setCustomDeeplink(str);
                                        l.this.H.a(com.sigmob.sdk.base.a.ENDCARD, l.this.g, true);
                                        return true;
                                    }
                                }
                            } catch (Exception e) {
                                e.printStackTrace();
                            }
                        } else {
                            l.this.H.a(com.sigmob.sdk.base.a.ENDCARD, l.this.g, true);
                        }
                    } else if (l.this.K.getMaterial().click_type.intValue() != com.sigmob.sdk.base.common.k.FullScreen.a() || TextUtils.isEmpty(l.this.K.getMaterial().landing_page)) {
                        return true;
                    }
                } catch (Throwable unused) {
                    SigmobLog.e("webview");
                }
                return true;
            }
        });
        hVar.a().a(lVarA);
        lVarA.a((m.a) null);
        return lVarA;
    }

    private b a(Context context, int i2) {
        Uri uriFromFile;
        if (this.H.e() == null) {
            throw new IllegalStateException("BaseVideoConfig does not have a video disk path");
        }
        final b bVar = new b(context);
        bVar.setOnPreparedListener(new MediaPlayer.OnPreparedListener() { // from class: com.sigmob.sdk.videoAd.l.15
            @Override // android.media.MediaPlayer.OnPreparedListener
            public void onPrepared(MediaPlayer mediaPlayer) {
                l.this.X = mediaPlayer.getDuration();
                if (l.this.R != null) {
                    l.this.R.a(l.this.X);
                }
                mediaPlayer.setOnSeekCompleteListener(new MediaPlayer.OnSeekCompleteListener() { // from class: com.sigmob.sdk.videoAd.l.15.1
                    @Override // android.media.MediaPlayer.OnSeekCompleteListener
                    public void onSeekComplete(MediaPlayer mediaPlayer2) {
                        if (l.this.V) {
                            return;
                        }
                        if ((l.this.D == null || l.this.D.getVisibility() != 0) && !l.this.an) {
                            l.this.A();
                            mediaPlayer2.start();
                            l.this.I();
                            SigmobLog.i("mediaplayer omPrepared start");
                        }
                    }
                });
                if (l.this.aj > 0) {
                    SigmobLog.i("seek to " + (l.this.aj / 1000));
                    mediaPlayer.seekTo(l.this.aj + (-500));
                } else {
                    SigmobLog.i("seek to 0");
                    mediaPlayer.seekTo(0);
                }
                if (Build.VERSION.SDK_INT >= 3) {
                    mediaPlayer.setOnVideoSizeChangedListener(new MediaPlayer.OnVideoSizeChangedListener() { // from class: com.sigmob.sdk.videoAd.l.15.2
                        @Override // android.media.MediaPlayer.OnVideoSizeChangedListener
                        public void onVideoSizeChanged(MediaPlayer mediaPlayer2, int i3, int i4) {
                            bVar.a(mediaPlayer2.getVideoWidth(), mediaPlayer2.getVideoHeight());
                            bVar.requestLayout();
                        }
                    });
                }
                try {
                    if (Build.VERSION.SDK_INT >= 16) {
                        String strConcat = "";
                        for (MediaPlayer.TrackInfo trackInfo : mediaPlayer.getTrackInfo()) {
                            strConcat = strConcat.concat(trackInfo.toString());
                        }
                    }
                } catch (Throwable unused) {
                }
                if (l.this.ac) {
                    l.this.ab.a(o.SOUND_MUTE.a());
                    l.this.J.setVolume(0.0f);
                }
                l.this.n().a(l.this.X, l.this.H.l());
                if (!l.this.V && (l.this.U == 0 || l.this.U == -1)) {
                    SigMacroCommon macroCommon = l.this.K.getMacroCommon();
                    if (macroCommon instanceof SigMacroCommon) {
                        SigMacroCommon sigMacroCommon = macroCommon;
                        sigMacroCommon.addMarcoKey(SigMacroCommon._COMPLETED_, "0");
                        sigMacroCommon.addMarcoKey(SigMacroCommon._VIDEOTIME_, String.valueOf(l.this.X / 1000));
                    }
                }
                l.this.E();
                if (l.this.ag) {
                    l.this.N.a(l.this.s(), 0);
                }
                mediaPlayer.setOnInfoListener(new MediaPlayer.OnInfoListener() { // from class: com.sigmob.sdk.videoAd.l.15.3
                    @Override // android.media.MediaPlayer.OnInfoListener
                    public boolean onInfo(MediaPlayer mediaPlayer2, int i3, int i4) {
                        String str;
                        if (l.this.t && mediaPlayer2.isPlaying()) {
                            if (i3 == 3) {
                                mediaPlayer2.start();
                                str = "mediaplayer onInfo start";
                            } else if (i3 == 804 && !l.this.ai) {
                                l.this.z();
                                l.this.ai = true;
                                l.this.aj = mediaPlayer2.getCurrentPosition();
                                l.this.J();
                                bVar.pause();
                                str = "videoView.pause()";
                            }
                            SigmobLog.i(str);
                        }
                        return true;
                    }
                });
            }
        });
        try {
            if (!this.C) {
                bVar.f5179a.setDataSource(this.H.e());
                this.q = b(context);
            }
        } catch (Throwable unused) {
        }
        bVar.setOnCompletionListener(new MediaPlayer.OnCompletionListener() { // from class: com.sigmob.sdk.videoAd.l.16
            @Override // android.media.MediaPlayer.OnCompletionListener
            public void onCompletion(MediaPlayer mediaPlayer) {
                if (l.this.t && (l.this.ai || l.this.D() < 0.5f)) {
                    l.this.z();
                } else {
                    l.this.z = Device.NETWORN_NONE;
                    l.this.b(true);
                }
            }
        });
        bVar.setOnErrorListener(new MediaPlayer.OnErrorListener() { // from class: com.sigmob.sdk.videoAd.l.17
            @Override // android.media.MediaPlayer.OnErrorListener
            public boolean onError(MediaPlayer mediaPlayer, int i3, int i4) {
                SigmobLog.e(String.format("what %d, extra %d", Integer.valueOf(i3), Integer.valueOf(i4)));
                if (l.this.t) {
                    l.this.z();
                    l.this.ai = true;
                    l.this.aj = mediaPlayer.getCurrentPosition();
                    l.this.J();
                    bVar.pause();
                    SigmobLog.i("videoView.pause()");
                    return true;
                }
                l.this.W = true;
                l.this.n().a(com.sigmob.sdk.base.common.a.AD_ERROR, l.this.t());
                l.this.J();
                String strConcat = "";
                try {
                    if (Build.VERSION.SDK_INT >= 16) {
                        for (MediaPlayer.TrackInfo trackInfo : mediaPlayer.getTrackInfo()) {
                            strConcat = strConcat.concat(trackInfo.toString());
                        }
                    }
                } catch (Throwable unused2) {
                }
                String.format("what %d, extra %d", Integer.valueOf(i3), Integer.valueOf(i4));
                l.this.H.a(l.this.i(), strConcat, l.this.K, "video", l.this.t());
                HashMap map = new HashMap();
                map.put("error", "video play error: " + strConcat);
                l.this.a(IntentActions.ACTION_REWARDED_VIDEO_PLAYFAIL, map);
                l.this.H();
                return false;
            }
        });
        if (this.K.isVideoExist()) {
            uriFromFile = Uri.fromFile(new File(this.H.e()));
        } else {
            this.t = true;
            com.sigmob.sdk.base.common.f.e().a(this.K, (f.b) null);
            uriFromFile = Uri.parse(this.K.getProxyVideoUrl());
        }
        bVar.setVideoURI(uriFromFile);
        bVar.setVisibility(i2);
        return bVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String a(List<String> list) {
        if (list == null || list.size() == 0) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        int i2 = 0;
        sb.append('[');
        do {
            if (i2 != 0) {
                sb.append(',');
            }
            sb.append(list.get(i2));
            i2++;
        } while (i2 < list.size());
        sb.append(']');
        return sb.toString();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(int i2) {
        try {
            SigmobLog.d("get video image begin" + System.currentTimeMillis());
            Bitmap frameAtTime = this.J.f5179a.getFrameAtTime((long) (i2 * 1000), 2);
            SigmobLog.d("get video image end" + System.currentTimeMillis());
            this.q.setScaleType(ImageView.ScaleType.FIT_XY);
            this.q.setImageBitmap(frameAtTime);
        } catch (RuntimeException e) {
            SigmobLog.e(e.getMessage());
        }
    }

    private void a(int i2, RelativeLayout.LayoutParams layoutParams) {
        int iDipsToIntPixels = Dips.dipsToIntPixels(10.0f, this.b);
        layoutParams.addRule(10);
        com.sigmob.sdk.base.views.x xVar = this.ab;
        if (xVar != null) {
            layoutParams.addRule(i2, xVar.getId());
            layoutParams.setMargins(0, iDipsToIntPixels * 2, 0, 0);
        } else {
            layoutParams.addRule(i2, xVar.getId());
            layoutParams.setMargins(iDipsToIntPixels, iDipsToIntPixels * 2, iDipsToIntPixels, iDipsToIntPixels);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(int i2, boolean z) {
        w wVar = this.P;
        if (wVar == null || wVar.a()) {
            return;
        }
        this.P.b();
        n().a(z, i2);
        n().a(com.sigmob.sdk.base.common.a.AD_SHOW_SKIP, i2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(MotionEvent motionEvent, MotionEvent motionEvent2) {
        ClickAreaSetting clickAreaSetting = this.K.getClickAreaSetting();
        float fFloatValue = clickAreaSetting.left.floatValue() * ClientMetadata.getInstance().getDisplayMetrics().widthPixels;
        float fFloatValue2 = (1.0f - clickAreaSetting.right.floatValue()) * ClientMetadata.getInstance().getDisplayMetrics().widthPixels;
        float fFloatValue3 = clickAreaSetting.top.floatValue() * ClientMetadata.getInstance().getDisplayMetrics().heightPixels;
        float fFloatValue4 = (1.0f - clickAreaSetting.bottom.floatValue()) * ClientMetadata.getInstance().getDisplayMetrics().heightPixels;
        boolean z = false;
        if (fFloatValue < motionEvent2.getRawX() && motionEvent2.getRawX() < fFloatValue2 && fFloatValue3 < motionEvent2.getRawY() && motionEvent2.getRawY() < fFloatValue4) {
            SigMacroCommon macroCommon = this.K.getMacroCommon();
            if (macroCommon instanceof SigMacroCommon) {
                SigMacroCommon sigMacroCommon = macroCommon;
                sigMacroCommon.addMarcoKey(SigMacroCommon._PROGRESS_, String.valueOf((t() * 100) / s()));
                sigMacroCommon.addMarcoKey(SigMacroCommon._DOWNX_, String.valueOf((int) motionEvent.getRawX()));
                sigMacroCommon.addMarcoKey(SigMacroCommon._DOWNY_, String.valueOf((int) motionEvent.getRawY()));
                sigMacroCommon.addMarcoKey(SigMacroCommon._UPX_, String.valueOf((int) motionEvent2.getRawX()));
                sigMacroCommon.addMarcoKey(SigMacroCommon._UPY_, String.valueOf((int) motionEvent2.getRawY()));
            }
            this.g = String.format("%d,%d,%d,%d", Integer.valueOf((int) motionEvent.getRawX()), Integer.valueOf((int) motionEvent.getRawY()), Integer.valueOf((int) motionEvent2.getRawX()), Integer.valueOf((int) motionEvent2.getRawY()));
            if (this.R == null) {
                u();
            }
            this.H.a(com.sigmob.sdk.base.a.VIDEO_CLICK, this.g, true);
            z = true;
        }
        z.a(this.K, motionEvent2, "useless_video_click", z);
    }

    private ImageView b(Context context) {
        ImageView imageView = new ImageView(context);
        imageView.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
        return imageView;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(final int i2) {
        if (this.am == null) {
            q qVar = new q(k(), this.K);
            this.am = qVar;
            qVar.a(new q.b() { // from class: com.sigmob.sdk.videoAd.l.7
                @Override // com.sigmob.sdk.base.views.q.b
                public void a() {
                    if (l.this.am != null) {
                        l.this.am.dismiss();
                        l.this.am.c();
                        l.this.am = null;
                        l.this.an = false;
                    }
                    if (l.this.J != null && i2 == 1) {
                        l.this.J.start();
                    }
                    l.this.n().a(com.sigmob.sdk.base.common.a.AD_FOUR_ELEMENTS_CLOSE, l.this.t());
                }

                @Override // com.sigmob.sdk.base.views.q.b
                public void a(String str, String str2) {
                    if (l.this.R == null) {
                        l.this.u();
                    }
                    l.this.H.a(com.sigmob.sdk.base.a.ENDCARD, str, str2, true);
                }

                @Override // com.sigmob.sdk.base.views.q.b
                public void b() {
                    if (l.this.J != null && l.this.J.isPlaying() && i2 == 1) {
                        l.this.J.pause();
                    }
                    l.this.n().a(com.sigmob.sdk.base.common.a.AD_FOUR_ELEMENTS_SHOW, l.this.t());
                }
            });
        }
        q qVar2 = this.am;
        if (qVar2 == null || !qVar2.a() || this.an) {
            return;
        }
        this.am.show();
        this.an = true;
    }

    private void b(int i2, RelativeLayout.LayoutParams layoutParams) {
        int i3;
        int iDipsToIntPixels = Dips.dipsToIntPixels(10.0f, this.b);
        if (i2 == 1 || i2 == 2) {
            layoutParams.addRule(10);
            i3 = 9;
        } else {
            if (i2 != 3 && i2 != 4) {
                return;
            }
            layoutParams.addRule(10);
            i3 = 11;
        }
        layoutParams.addRule(i3);
        layoutParams.setMargins(iDipsToIntPixels, iDipsToIntPixels * 2, iDipsToIntPixels, iDipsToIntPixels);
    }

    private void b(Context context, int i2) {
        y yVar = new y(context);
        this.N = yVar;
        yVar.setAnchorId(this.J.getId());
        this.N.setVisibility(i2);
        j().addView(this.N);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c(Context context, int i2) {
        if (this.D != null) {
            return;
        }
        com.sigmob.sdk.base.views.d dVar = new com.sigmob.sdk.base.views.d(context, this.H.u());
        this.D = dVar;
        dVar.setVisibility(i2);
        j().addView(this.D);
        this.D.setDialogListener(new d.a() { // from class: com.sigmob.sdk.videoAd.l.19
            @Override // com.sigmob.sdk.base.views.d.a
            public void a() {
                if (!l.this.V) {
                    l.this.n().a(com.sigmob.sdk.base.common.a.AD_SKIP, l.this.t());
                    l.this.H.b(l.this.b, l.this.t(), l.this.s(), l.this.K);
                }
                l.this.D.setVisibility(8);
                if (l.this.af != null && l.this.af.getFourElementsLayout() != null) {
                    l.this.af.getFourElementsLayout().setClickable(true);
                }
                if (l.this.H.m()) {
                    l.this.h().a();
                    return;
                }
                if (!l.this.C) {
                    l lVar = l.this;
                    lVar.a(lVar.t());
                }
                l.this.J.stopPlayback();
                l.this.J();
                l.this.H();
                l.this.V = true;
                if (l.this.M != null) {
                    l.this.M.a(com.sigmob.sdk.base.common.a.AD_SHOW, 0);
                }
            }

            @Override // com.sigmob.sdk.base.views.d.a
            public void b() {
                l.this.J.start();
                l.this.D.setVisibility(8);
                if (l.this.af == null || l.this.af.getFourElementsLayout() == null) {
                    return;
                }
                l.this.af.getFourElementsLayout().setClickable(true);
            }
        });
    }

    /* JADX WARN: Removed duplicated region for block: B:27:0x00af  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void d(android.content.Context r23, int r24) {
        /*
            Method dump skipped, instruction units count: 506
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.videoAd.l.d(android.content.Context, int):void");
    }

    private void e(Context context, int i2) {
        if (this.O != null) {
            return;
        }
        com.sigmob.sdk.base.views.x xVar = new com.sigmob.sdk.base.views.x(context, this.H.n());
        this.O = xVar;
        xVar.setVisibility(i2);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(Dips.dipsToIntPixels(30.0f, context), Dips.dipsToIntPixels(30.0f, context));
        b(this.H.n(), layoutParams);
        j().addView(this.O, layoutParams);
        BaseAdUnit baseAdUnit = this.K;
        if (baseAdUnit != null && !TextUtils.isEmpty(baseAdUnit.getCloseCardHtmlData()) && !this.ao) {
            t tVar = new t(k(), this.K, this.H);
            this.ak = tVar;
            tVar.a(new t.a() { // from class: com.sigmob.sdk.videoAd.l.2
                @Override // com.sigmob.sdk.base.views.t.a
                public void a() {
                    if (l.this.ak != null) {
                        l.this.ak.dismiss();
                        l.this.ak.c();
                    }
                    l.this.aa = true;
                    l.this.H.b(l.this.i(), l.this.s(), l.this.K);
                    l.this.h().a();
                }
            });
        }
        this.O.setOnTouchListener(new View.OnTouchListener() { // from class: com.sigmob.sdk.videoAd.l.3
            @Override // android.view.View.OnTouchListener
            public boolean onTouch(View view, MotionEvent motionEvent) {
                if (motionEvent.getAction() == 1) {
                    if (l.this.ao || l.this.ak == null || l.this.ak.a() || l.this.al) {
                        l.this.aa = true;
                        l.this.H.b(l.this.i(), l.this.s(), l.this.K);
                        l.this.h().a();
                    } else {
                        l.this.ak.show();
                        l.this.al = true;
                    }
                }
                return true;
            }
        });
        this.O.a(this.K);
        String strH = this.H.h();
        if (strH != null) {
            this.O.a(strH);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x003c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void f(final android.content.Context r4, int r5) {
        /*
            r3 = this;
            com.sigmob.sdk.base.views.w r0 = new com.sigmob.sdk.base.views.w
            r0.<init>(r4)
            r3.P = r0
            int r1 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r1)
            com.sigmob.sdk.base.views.w r0 = r3.P
            r0.setVisibility(r5)
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r0 = -2
            r5.<init>(r0, r0)
            com.sigmob.sdk.videoAd.a r0 = r3.H
            int r0 = r0.p()
            r1 = 0
            r2 = 2
            if (r0 > r2) goto L30
            com.sigmob.sdk.videoAd.a r0 = r3.H
            int r0 = r0.o()
            if (r0 > r2) goto L3c
            r0 = 1
            r3.a(r0, r5)
            goto L45
        L30:
            com.sigmob.sdk.videoAd.a r0 = r3.H
            int r0 = r0.o()
            if (r0 <= r2) goto L3c
            r3.a(r1, r5)
            goto L45
        L3c:
            com.sigmob.sdk.videoAd.a r0 = r3.H
            int r0 = r0.o()
            r3.b(r0, r5)
        L45:
            android.view.ViewGroup r0 = r3.j()
            com.sigmob.sdk.base.views.w r2 = r3.P
            r0.addView(r2, r5)
            com.sigmob.sdk.base.views.w r5 = r3.P
            com.sigmob.sdk.videoAd.l$4 r0 = new com.sigmob.sdk.videoAd.l$4
            r0.<init>()
            r5.setOnClickListener(r0)
            com.sigmob.sdk.videoAd.a r4 = r3.H
            int r4 = r4.w()
            if (r4 != 0) goto L68
            com.sigmob.sdk.videoAd.a r4 = r3.H
            int r4 = r4.y()
            if (r4 < 0) goto L70
        L68:
            com.sigmob.sdk.videoAd.a r4 = r3.H
            int r4 = r4.y()
            if (r4 != 0) goto L73
        L70:
            r3.a(r1, r1)
        L73:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.videoAd.l.f(android.content.Context, int):void");
    }

    private void g(Context context, int i2) {
        com.sigmob.sdk.base.views.x xVar = new com.sigmob.sdk.base.views.x(context, this.H.p());
        this.ab = xVar;
        xVar.setId(ClientMetadata.generateViewId());
        this.ab.setVisibility(i2);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(Dips.dipsToIntPixels(30.0f, context), Dips.dipsToIntPixels(30.0f, context));
        b(this.H.p(), layoutParams);
        j().addView(this.ab, layoutParams);
        this.ab.setOnTouchListener(new View.OnTouchListener() { // from class: com.sigmob.sdk.videoAd.l.5
            @Override // android.view.View.OnTouchListener
            public boolean onTouch(View view, MotionEvent motionEvent) {
                b bVar;
                float f2;
                if (motionEvent.getAction() == 1) {
                    if (l.this.ac) {
                        l.this.n().a(com.sigmob.sdk.base.common.a.AD_UNMUTE, l.this.t());
                        l.this.ab.a(o.SOUND_ON.a());
                        bVar = l.this.J;
                        f2 = 1.0f;
                    } else {
                        l.this.n().a(com.sigmob.sdk.base.common.a.AD_MUTE, l.this.t());
                        l.this.ab.a(o.SOUND_MUTE.a());
                        bVar = l.this.J;
                        f2 = 0.0f;
                    }
                    bVar.setVolume(f2);
                    l.this.ac = !r3.ac;
                }
                return true;
            }
        });
        if (this.H.r() == 0) {
            this.ab.a(o.SOUND_ON.a());
            return;
        }
        this.ab.a(o.SOUND_MUTE.a());
        this.J.setVolume(0.0f);
        this.ac = true;
    }

    public static int l() {
        return 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void z() {
        RelativeLayout relativeLayout = this.Z;
        if (relativeLayout == null || relativeLayout.getVisibility() == 0) {
            return;
        }
        this.y = System.currentTimeMillis();
        this.Z.setVisibility(0);
        this.z = CallMraidJS.e;
        int i2 = this.u + 1;
        this.u = i2;
        if (i2 > 2) {
            a(t(), true);
        } else {
            this.B.postDelayed(new Runnable() { // from class: com.sigmob.sdk.videoAd.l.12
                @Override // java.lang.Runnable
                public void run() {
                    l.this.B.removeCallbacksAndMessages(null);
                    l lVar = l.this;
                    lVar.a(lVar.t(), true);
                }
            }, 5000L);
        }
    }

    @Override // com.sigmob.sdk.base.common.f.a
    public BaseAdUnit a() {
        return this.K;
    }

    @Override // com.sigmob.sdk.base.common.i
    public void a(int i2, int i3, Intent intent) {
        if (i3 == -1) {
            h().a();
        }
    }

    public void a(Context context) {
        this.Z = new RelativeLayout(context);
        ImageView imageView = new ImageView(context);
        imageView.setImageBitmap(o.LOADING.a());
        imageView.setId(ClientMetadata.generateViewId());
        RotateAnimation rotateAnimation = new RotateAnimation(0.0f, BaseConstants.Time.HOUR, 1, 0.5f, 1, 0.5f);
        rotateAnimation.setDuration(8000000);
        rotateAnimation.setInterpolator(new LinearInterpolator());
        rotateAnimation.setRepeatCount(-1);
        rotateAnimation.setRepeatMode(1);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams.addRule(13);
        imageView.setAnimation(rotateAnimation);
        this.Z.addView(imageView, layoutParams);
        this.Z.setVisibility(4);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams2.addRule(13);
        j().addView(this.Z, layoutParams2);
    }

    @Override // com.sigmob.sdk.base.common.i
    public void a(Configuration configuration) {
        if (this.H != null && this.R == null) {
            h hVarG = com.sigmob.sdk.videoAd.a.g(this.K);
            this.R = hVarG;
            hVarG.a(this.H);
        }
        if (n() != null) {
            n().a(com.sigmob.sdk.base.common.a.AD_ROTATION, t());
        }
    }

    @Override // com.sigmob.sdk.base.common.i
    public void a(Bundle bundle) {
        try {
            bundle.putBoolean(i, this.V);
            bundle.putInt(h, this.U);
            bundle.putBoolean(j, this.Y);
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    void a(com.sigmob.sdk.base.common.a aVar) {
        if (com.sigmob.sdk.base.common.a.AD_START.equals(aVar)) {
            a(IntentActions.ACTION_INTERSTITIAL_SHOW);
            a(IntentActions.ACTION_REWARDED_VIDEO_PLAY);
        }
        if (n() != null) {
            n().a(aVar, t());
        }
    }

    @Override // com.sigmob.sdk.base.common.f.a
    public void a(BaseAdUnit baseAdUnit) {
        if (baseAdUnit.getUuid().equals(this.K.getUuid()) && baseAdUnit.isEndCardIndexExist()) {
            new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.sigmob.sdk.videoAd.l.13
                @Override // java.lang.Runnable
                public void run() {
                    l.this.u();
                }
            });
        }
    }

    @Override // com.sigmob.sdk.base.common.x
    public void a(boolean z, com.sigmob.sdk.base.a aVar) {
        r rVarN;
        com.sigmob.sdk.base.common.a aVar2;
        this.ao = true;
        K();
        if (z) {
            int i2 = AnonymousClass14.f5193a[aVar.ordinal()];
            if (i2 == 1) {
                ClickCommon clickCommon = this.K.getClickCommon();
                z.a(com.sigmob.sdk.base.a.COMPANION, "click", this.K, clickCommon.isDeeplink, clickCommon.clickUrl, clickCommon.clickCoordinate, this.X);
                rVarN = n();
                aVar2 = com.sigmob.sdk.base.common.a.AD_COMPANION_CLICK;
            } else if (i2 != 2) {
                ClickCommon clickCommon2 = this.K.getClickCommon();
                z.a(com.sigmob.sdk.base.a.ENDCARD, "click", this.K, clickCommon2.isDeeplink, clickCommon2.clickUrl, clickCommon2.clickCoordinate, this.X);
                rVarN = n();
                aVar2 = com.sigmob.sdk.base.common.a.AD_CLICK;
            } else {
                ClickCommon clickCommon3 = this.K.getClickCommon();
                z.a(com.sigmob.sdk.base.a.VIDEO_CLICK, "click", this.K, clickCommon3.isDeeplink, clickCommon3.clickUrl, clickCommon3.clickCoordinate, this.X);
                rVarN = n();
                aVar2 = com.sigmob.sdk.base.common.a.AD_VIDEO_CLICK;
            }
            rVarN.a(aVar2, t());
        }
    }

    @Override // com.sigmob.sdk.videoAd.c, com.sigmob.sdk.base.common.i
    public void b() {
        super.b();
        MaterialMeta material = this.K.getMaterial();
        this.s = ClientMetadata.getInstance().getInsetBottom();
        if (this.Y) {
            H();
            return;
        }
        if (this.H == null) {
            throw new IllegalStateException("BaseVideoConfig does not have a video disk path");
        }
        if (this.ag) {
            b(i(), 4);
        }
        if (material.has_companion_endcard != null && material.has_companion_endcard.booleanValue() && material.companion != null) {
            d(i(), 4);
            this.F = material.companion.show_delay_secs.intValue();
        }
        g(i(), 0);
        f(i(), 0);
        this.S = new d(this, this.H, new Handler(Looper.getMainLooper()));
        a(IntentActions.ACTION_INTERSTITIAL_VOPEN);
    }

    @Override // com.sigmob.sdk.base.common.f.a
    public void b(BaseAdUnit baseAdUnit) {
    }

    public void b(boolean z) {
        if (!this.ad) {
            c(z);
        }
        if (!this.ad && this.H.m()) {
            h().a();
            return;
        }
        if (!this.C) {
            if (z) {
                G();
            } else {
                a(t());
            }
        }
        this.J.stopPlayback();
        J();
        if (z) {
            this.K.getMacroCommon().addMarcoKey(SigMacroCommon._PLAYLASTFRAME_, "1");
            this.H.a(this.b, t(), s(), this.K);
            if (!this.W) {
                n().a(com.sigmob.sdk.base.common.a.AD_COMPLETE, t());
            }
        }
        H();
        this.V = true;
        r rVar = this.M;
        if (rVar != null) {
            rVar.a(com.sigmob.sdk.base.common.a.AD_SHOW, 0);
        }
    }

    @Override // com.sigmob.sdk.base.common.i
    public void c() {
        if (this.aa) {
            a(IntentActions.ACTION_INTERSTITIAL_DISMISS);
        } else {
            if (this.Y) {
                return;
            }
            C();
        }
    }

    void c(boolean z) {
        if (this.K.getAd_type() == 4) {
            return;
        }
        this.ad = true;
        int iS = z ? s() : t();
        a(IntentActions.ACTION_REWARDED_VIDEO_COMPLETE);
        n().a(com.sigmob.sdk.base.common.a.AD_FINISH, iS);
        this.H.c(i().getApplicationContext(), iS, s(), a());
    }

    @Override // com.sigmob.sdk.base.common.i
    public void d() {
        if (!this.Y) {
            B();
        }
        View view = this.L;
        if (view == null || !(view instanceof com.sigmob.sdk.base.views.l)) {
            return;
        }
        ((com.sigmob.sdk.base.views.l) view).resumeTimers();
    }

    @Override // com.sigmob.sdk.base.common.i
    public void e() {
        try {
            SigmobLog.d("VideoViewController onDestroy() called");
            J();
            com.sigmob.sdk.base.common.f.e().b(this);
            if (!this.aa) {
                a(IntentActions.ACTION_INTERSTITIAL_DISMISS);
            }
            this.H.k();
            if (this.Q != null) {
                this.Q.a();
            }
            if (this.ae != null) {
                this.ae.cancelRequest();
                this.ae = null;
            }
            if (this.M != null) {
                this.M.a(com.sigmob.sdk.base.common.a.AD_VCLOSE, 0);
                this.M.a();
                this.M = null;
            }
            if (this.R != null) {
                this.R.a((h.a) null);
            }
            if (this.J.f5179a != null) {
                this.J.f5179a.release();
            }
            if (this.O != null) {
                this.O.setOnTouchListener(null);
            }
            if (this.P != null) {
                this.P.setOnTouchListener(null);
            }
            if (this.ab != null) {
                this.ab.setOnTouchListener(null);
            }
            if (this.J != null) {
                this.J.a();
            }
            if (this.L != null && (this.L instanceof com.sigmob.sdk.base.views.l)) {
                ((com.sigmob.sdk.base.views.l) this.L).setWebViewClickListener(null);
            }
            this.L = null;
            this.N = null;
            super.e();
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
        }
    }

    @Override // com.sigmob.sdk.base.common.i
    public void f() {
    }

    @Override // com.sigmob.sdk.base.common.i
    public boolean g() {
        return false;
    }

    public void m() {
        com.sigmob.sdk.base.views.b bVar = new com.sigmob.sdk.base.views.b(i(), 0);
        this.o = bVar;
        bVar.setId(ClientMetadata.generateViewId());
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, Dips.dipsToIntPixels(16.0f, i()));
        int iDipsToIntPixels = Dips.dipsToIntPixels(10.0f, this.b);
        com.sigmob.sdk.base.views.j jVar = this.af;
        if (jVar != null) {
            layoutParams.addRule(8, jVar.getId());
        } else {
            layoutParams.addRule(12);
            layoutParams.setMargins(0, 0, 0, iDipsToIntPixels);
        }
        try {
            this.o.a(this.K.getAd_source_logo());
            if (!this.K.getInvisibleAdLabel()) {
                this.o.b(com.sigmob.sdk.base.d.g());
            }
        } catch (Throwable unused) {
        }
        j().addView(this.o, layoutParams);
    }

    public r n() {
        if (this.M == null) {
            r rVar = new r();
            this.M = rVar;
            rVar.a(a());
        }
        return this.M;
    }

    public String o() {
        return this.E;
    }

    public boolean p() {
        try {
            long jT = t();
            if (this.H.y() > -1) {
                if ((jT / 1000.0f) + 0.3f >= this.H.y()) {
                    return true;
                }
            } else if (this.T / 1000.0f < jT / 1000.0f) {
                return true;
            }
            return false;
        } catch (Throwable th) {
            SigmobLog.e(th.getMessage());
            return true;
        }
    }

    public boolean q() {
        com.sigmob.sdk.base.views.j jVar = this.af;
        if (jVar != null && jVar.a()) {
            return true;
        }
        try {
            boolean z = ((long) t()) / 1000 >= ((long) this.F);
            if (z) {
                SigmobLog.d("showAble CompanionAds");
            }
            return z;
        } catch (Throwable th) {
            SigmobLog.e("shouldBeShowCompanionAds", th);
            return true;
        }
    }

    public void r() {
        com.sigmob.sdk.base.views.j jVar;
        if (this.G || (jVar = this.af) == null) {
            return;
        }
        jVar.bringToFront();
        this.af.setVisibility(0);
        this.G = true;
    }

    int s() {
        b bVar = this.J;
        if (bVar == null) {
            return 0;
        }
        int i2 = this.X;
        return i2 > 0 ? this.H.b(i2) : this.H.b(bVar.getDuration());
    }

    int t() {
        b bVar = this.J;
        if (bVar == null) {
            return 0;
        }
        return bVar.getCurrentPosition();
    }

    void u() {
        if (this.L == null && this.K.isEndCardIndexExist()) {
            try {
                h hVarG = com.sigmob.sdk.videoAd.a.g(this.K);
                this.R = hVarG;
                hVarG.a(this.H);
                this.L = a(k(), this.R, 4);
                this.R.a(this.X);
                e(i(), 4);
            } catch (Throwable th) {
                this.R = null;
                SigmobLog.e(th.getMessage());
                HashMap map = new HashMap();
                map.put("error", th.getMessage());
                a(IntentActions.ACTION_REWARDED_VIDEO_PLAYFAIL, map);
                this.d.a();
            }
        }
    }

    void v() {
        if (this.K.getMaterial().disable_auto_deeplink.booleanValue()) {
            u();
        }
        a(t(), false);
        int iS = (int) (((s() - t()) / 1000.0f) + 0.5f);
        this.P.a(iS);
        com.sigmob.sdk.base.views.d dVar = this.D;
        if (dVar != null) {
            dVar.setduration(iS);
        }
    }

    boolean w() {
        return !this.ad && D() >= this.H.q();
    }

    void x() {
        int iS = (int) (((s() - t()) / 1000.0f) + 0.5f);
        this.P.a(iS);
        com.sigmob.sdk.base.views.d dVar = this.D;
        if (dVar != null) {
            dVar.setduration(iS);
        }
        if (this.ag) {
            this.N.a(t());
        }
    }
}
