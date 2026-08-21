package com.sigmob.sdk.mraid;

import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.graphics.Rect;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.webkit.ConsoleMessage;
import android.webkit.JsResult;
import android.webkit.ValueCallback;
import android.widget.FrameLayout;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.Preconditions;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.CurrentAppOrientation;
import com.sigmob.sdk.base.models.ExposureChange;
import com.sigmob.sdk.base.models.ExtensionEvent;
import com.sigmob.sdk.base.models.MraidEnv;
import com.sigmob.sdk.base.models.PlacementType;
import com.sigmob.sdk.base.models.VideoItem;
import com.sigmob.sdk.base.models.ViewState;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import com.sigmob.sdk.mraid.a;
import com.sigmob.sdk.mraid.b;
import com.sigmob.sdk.mraid.n;
import com.sigmob.sdk.nativead.APKStatusBroadcastReceiver;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.WindAds;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import java.net.URI;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Map;
import org.json.JSONObject;

public class d {
    private boolean A;
    private com.sigmob.sdk.base.common.e B;
    private final PlacementType a;
    private final BaseAdUnit b;
    private final FrameLayout c;
    private final d d;
    private final k e;
    private final com.sigmob.sdk.mraid.b f;
    private final h g;
    private boolean h;
    private Integer i;
    private String j;
    private ViewGroup k;
    private ViewState l;
    private a m;
    private e n;
    private q o;
    private f p;
    private o q;
    private c r;
    private Integer s;
    private boolean t;
    private j u;
    private boolean v;
    private HashMap<String, i> w;
    private final b.c x;
    private final b.b y;
    private APKStatusBroadcastReceiver z;

    public interface a {
        void a();

        void a(float f);

        void a(int i, int i2, int i3, int i4, a.a aVar, boolean z);

        void a(View view);

        void a(WindAdError windAdError);

        void a(String str);

        void a(URI uri, int i, String str);

        void a(boolean z);

        void b();

        void b(float f);

        void c();

        void d();

        void e();

        void f();

        void g();
    }

    public interface b {
        void a(o oVar, com.sigmob.sdk.base.common.r rVar);
    }

    class c extends BroadcastReceiver {
        private Context b;
        private int c = -1;

        c() {
        }

        public void a() {
            Context context = this.b;
            if (context != null) {
                context.unregisterReceiver(this);
                this.b = null;
            }
        }

        public void a(Context context) {
            Preconditions.checkNotNull(context);
            Context applicationContext = context.getApplicationContext();
            this.b = applicationContext;
            if (applicationContext != null) {
                applicationContext.registerReceiver(this, new IntentFilter("android.intent.action.CONFIGURATION_CHANGED"));
            }
        }

        @Override
        public void onReceive(Context context, Intent intent) {
            int iW;
            if (this.b == null || !"android.intent.action.CONFIGURATION_CHANGED".equals(intent.getAction()) || (iW = d.this.w()) == this.c) {
                return;
            }
            this.c = iW;
            d.this.a(iW);
        }
    }

    static class d {
        private final Handler a = new Handler();
        private a b;

        static class a {
            int a;
            private final View[] b;
            private final Handler c;
            private Runnable d;
            private final Runnable e;

            private a(Handler handler, View[] viewArr) {
                this.e = new Runnable() {
                    @Override
                    public void run() {
                        for (final View view : a.this.b) {
                            if (view.getHeight() > 0 || view.getWidth() > 0) {
                                a.this.b();
                            } else {
                                view.getViewTreeObserver().addOnPreDrawListener(new ViewTreeObserver.OnPreDrawListener() {
                                    @Override
                                    public boolean onPreDraw() {
                                        view.getViewTreeObserver().removeOnPreDrawListener(this);
                                        a.this.b();
                                        return true;
                                    }
                                });
                            }
                        }
                    }
                };
                this.c = handler;
                this.b = viewArr;
            }

            private void b() {
                Runnable runnable;
                int i = this.a - 1;
                this.a = i;
                if (i != 0 || (runnable = this.d) == null) {
                    return;
                }
                runnable.run();
                this.d = null;
            }

            void a() {
                this.c.removeCallbacks(this.e);
                this.d = null;
            }

            void a(Runnable runnable) {
                this.d = runnable;
                this.a = this.b.length;
                this.c.post(this.e);
            }
        }

        d() {
        }

        a a(View... viewArr) {
            a aVar = new a(this.a, viewArr);
            this.b = aVar;
            return aVar;
        }

        void a() {
            a aVar = this.b;
            if (aVar != null) {
                aVar.a();
                this.b = null;
            }
        }
    }

    public interface e {
        void a(boolean z);
    }

    public interface f {
        void a();

        void a(Integer num);

        void a(Map<String, String> map);

        void b();

        void b(Map<String, String> map);

        void c();

        void d();

        void e();

        void f();

        void g();

        void h();
    }

    public d(Context context, BaseAdUnit baseAdUnit, PlacementType placementType) {
        this(context, baseAdUnit, placementType, new com.sigmob.sdk.mraid.b(baseAdUnit, placementType), null, new d());
    }

    d(Context context, BaseAdUnit baseAdUnit, PlacementType placementType, com.sigmob.sdk.mraid.b bVar, com.sigmob.sdk.mraid.b bVar2, d dVar) {
        this.h = false;
        this.l = ViewState.LOADING;
        this.r = new c();
        this.t = true;
        this.u = j.c;
        this.v = true;
        this.w = new HashMap<>();
        this.x = new b.c() {
            @Override
            public void a(String str, JSONObject jSONObject) {
                n nVar;
                SigmobLog.d(" handleVpaidEvent event:" + str);
                SigmobLog.d(" postMessage args:" + jSONObject);
                String strOptString = jSONObject.optString("uniqueId");
                if (TextUtils.isEmpty(strOptString)) {
                    SigmobLog.e(" handleVpaidEvent uniqueId is null:" + jSONObject);
                }
                nVar = null;
                i iVar = (i) d.this.w.get(strOptString);
                if (iVar != null && (iVar instanceof n)) {
                    nVar = (n) iVar;
                }
                switch (str) {
                    case "init":
                        n nVar2 = new n(strOptString);
                        nVar2.a(new n.a() {
                            @Override
                            public void a(String str2, int i) {
                                if (d.this.f != null) {
                                    d.this.f.c(str2, i);
                                }
                            }

                            @Override
                            public void a(String str2, int i, String str3) {
                                if (d.this.f != null) {
                                    d.this.f.b(str2, "code:" + i + ", msg:" + str3);
                                }
                            }

                            @Override
                            public void a(String str2, long j) {
                                if (d.this.f != null) {
                                    d.this.f.a(str2, (int) j);
                                }
                            }

                            @Override
                            public void a(String str2, long j, int i, int i2) {
                                if (d.this.f != null) {
                                    d.this.f.a(str2, (int) j, i, i2);
                                }
                            }

                            @Override
                            public void a(String str2, long j, long j2) {
                                if (d.this.f != null) {
                                    d.this.f.a(str2, (int) j, (int) j2);
                                }
                            }

                            @Override
                            public void b(String str2, int i) {
                                if (d.this.f != null) {
                                    d.this.f.b(str2, i);
                                }
                            }
                        });
                        d.this.w.put(strOptString, nVar2);
                        nVar2.a(d.this.q.getContext(), jSONObject);
                        View viewB = nVar2.b();
                        if (viewB != null) {
                            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(1, 1);
                            layoutParams.topMargin = -1;
                            layoutParams.rightMargin = -1;
                            d.this.c.addView(viewB, layoutParams);
                            break;
                        }
                        break;
                    case "assetURL":
                        if (nVar != null) {
                            nVar.a(jSONObject);
                            break;
                        }
                        break;
                    case "play":
                        if (nVar != null) {
                            nVar.b(jSONObject);
                            break;
                        }
                        break;
                    case "replay":
                        if (nVar != null) {
                            nVar.c(jSONObject);
                            break;
                        }
                        break;
                    case "pause":
                        if (nVar != null) {
                            nVar.d(jSONObject);
                            break;
                        }
                        break;
                    case "stop":
                        if (nVar != null) {
                            nVar.e(jSONObject);
                            nVar.c();
                            d.this.w.remove(nVar);
                            break;
                        }
                        break;
                    case "muted":
                        if (nVar != null) {
                            nVar.f(jSONObject);
                            break;
                        }
                        break;
                    case "seek":
                        if (nVar != null) {
                            nVar.g(jSONObject);
                            break;
                        }
                        break;
                    case "frame":
                        if (nVar != null) {
                            nVar.h(jSONObject);
                            break;
                        }
                        break;
                }
            }

            @Override
            public void b(String str, JSONObject jSONObject) {
                i iVar;
                String strOptString = jSONObject.optString("uniqueId");
                if (TextUtils.isEmpty(strOptString) || (iVar = (i) d.this.w.get(strOptString)) == null || iVar.b() == null) {
                    return;
                }
                d.this.c.bringChildToFront(d.this.q);
            }
        };
        this.y = new b.b() {
            @Override
            public void a() {
                d.this.j();
                if (d.this.m != null) {
                    d.this.m.a(d.this.c);
                }
            }

            @Override
            public void a(int i, int i2, int i3, int i4, a.a aVar, boolean z) {
                if (d.this.m != null) {
                    d.this.m.a(i, i2, i3, i4, aVar, z);
                }
            }

            @Override
            public void a(WindAdError windAdError) {
                d.this.a(windAdError);
            }

            @Override
            public void a(String str, Map<String, String> map) {
                d.this.b(str, map);
            }

            @Override
            public void a(URI uri) {
                d.this.a(uri.toString());
            }

            @Override
            public void a(URI uri, int i, String str) {
                d.this.a(uri, i, str);
            }

            @Override
            public void a(URI uri, boolean z) throws com.sigmob.sdk.mraid.c {
                d.this.a(uri, z);
            }

            @Override
            public void a(boolean z) {
                d.this.f.a(z);
            }

            @Override
            public void a(boolean z, j jVar) throws com.sigmob.sdk.mraid.c {
                d.this.a(z, jVar);
            }

            @Override
            public boolean a(ConsoleMessage consoleMessage) {
                return d.this.a(consoleMessage);
            }

            @Override
            public boolean a(String str, JsResult jsResult) {
                return d.this.a(str, jsResult);
            }

            @Override
            public void b() {
                d.this.i();
            }

            @Override
            public void b(String str, Map<String, String> map) {
                d.this.a(str, map);
            }

            @Override
            public void b(boolean z) {
                d.this.e(z);
            }

            @Override
            public void c() {
                if (d.this.m != null) {
                    d.this.m.d();
                }
            }

            @Override
            public void d() {
                d.this.m();
                d.this.m.g();
            }

            @Override
            public void e() {
                if (d.this.m != null) {
                    d.this.m.e();
                }
            }

            @Override
            public void f() {
                if (d.this.m != null) {
                    d.this.m.f();
                }
            }
        };
        Preconditions.checkNotNull(context);
        this.c = new FrameLayout(context);
        this.b = baseAdUnit;
        this.a = placementType;
        this.f = bVar;
        this.d = dVar;
        this.l = ViewState.LOADING;
        this.e = new k(context, context.getResources().getDisplayMetrics().density);
        this.c.setBackgroundColor(0);
        new View(context).setOnTouchListener(new View.OnTouchListener() {
            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                return true;
            }
        });
        this.r.a(context);
        this.f.a(this.y);
        this.f.a(this.x);
        this.g = new h();
    }

    static void a(a aVar, ViewState viewState, ViewState viewState2) {
        Preconditions.checkNotNull(aVar);
        Preconditions.checkNotNull(viewState);
        Preconditions.checkNotNull(viewState2);
    }

    private void a(Runnable runnable) {
        this.d.a();
        o oVarF = f();
        if (oVarF == null) {
            return;
        }
        DisplayMetrics displayMetrics = v().getResources().getDisplayMetrics();
        com.sigmob.sdk.base.common.e eVar = this.B;
        if (eVar != null) {
            this.e.a(eVar.a(), this.B.b());
        } else {
            this.e.a(displayMetrics.widthPixels, displayMetrics.heightPixels);
        }
        int[] iArr = new int[2];
        ViewGroup viewGroupY = y();
        viewGroupY.getLocationOnScreen(iArr);
        this.e.a(iArr[0], iArr[1], viewGroupY.getWidth(), viewGroupY.getHeight());
        this.e.c(iArr[0], iArr[1], viewGroupY.getWidth(), viewGroupY.getHeight());
        oVarF.getLocationOnScreen(iArr);
        this.e.b(iArr[0], iArr[1], oVarF.getWidth(), oVarF.getHeight());
        this.f.a(new CurrentAppOrientation(ClientMetadata.getInstance().getOrientationInt().intValue() == 1 ? "portrait" : "landscape", true));
        this.f.a(this.e);
        if (runnable != null) {
            runnable.run();
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private void a(String str, Map<String, String> map) {
        if (this.m == null) {
            return;
        }
        try {
            String strA = com.sigmob.sdk.mraid.b.a(map.get("ext"));
            String strA2 = com.sigmob.sdk.mraid.b.a(map.get("ctime"));
            String strA3 = com.sigmob.sdk.mraid.b.a(map.get(CallMraidJS.b));
            byte b2 = -1;
            switch (str.hashCode()) {
                case -1610203128:
                    if (str.equals(ExtensionEvent.AD_ENDCARD_SHOW)) {
                        b2 = 3;
                    }
                    break;
                case -1102513700:
                    if (str.equals(ExtensionEvent.AD_COMPANION_CLICK)) {
                        b2 = 4;
                    }
                    break;
                case -934326481:
                    if (str.equals("reward")) {
                        b2 = 1;
                    }
                    break;
                case -900560382:
                    if (str.equals(ExtensionEvent.AD_SKIP)) {
                        b2 = 0;
                    }
                    break;
                case 112386354:
                    if (str.equals(ExtensionEvent.AD_MUTE)) {
                        b2 = 2;
                    }
                    break;
                case 1293469449:
                    if (str.equals(ExtensionEvent.AD_SHOE_SKIP_TIME)) {
                        b2 = 5;
                    }
                    break;
            }
            if (b2 == 0) {
                Float fValueOf = Float.valueOf(0.0f);
                try {
                    fValueOf = Float.valueOf(strA2);
                } catch (Throwable unused) {
                }
                this.m.b(fValueOf.floatValue());
                return;
            }
            if (b2 == 1) {
                Float fValueOf2 = Float.valueOf(0.0f);
                try {
                    fValueOf2 = Float.valueOf(strA2);
                } catch (Throwable unused2) {
                }
                this.m.a(fValueOf2.floatValue());
            } else {
                if (b2 == 2) {
                    this.m.a(strA3.equalsIgnoreCase("true") || strA3.equalsIgnoreCase("1"));
                    return;
                }
                if (b2 == 3) {
                    this.m.a();
                } else if (b2 == 4) {
                    this.m.a(strA);
                } else {
                    if (b2 != 5) {
                        return;
                    }
                    this.m.b();
                }
            }
        } catch (Throwable unused3) {
        }
    }

    private void b(ViewState viewState) {
        SigmobLog.d("MRAID state set to " + viewState);
        ViewState viewState2 = this.l;
        this.l = viewState;
        this.f.a(viewState);
        a aVar = this.m;
        if (aVar != null) {
            a(aVar, viewState2, viewState);
        }
        SigmobLog.e("setViewState state set to " + viewState);
        a((Runnable) null);
    }

    private void b(String str, Map<String, String> map) {
        if (this.p == null) {
        }
        switch (str) {
            case "AdClickThru":
                this.p.a(map);
                break;
            case "AdError":
                this.p.b(map);
                break;
            case "AdImpression":
                this.p.a();
                break;
            case "AdPaused":
                this.p.b();
                break;
            case "AdPlaying":
                this.p.c();
                break;
            case "AdVideoComplete":
                this.p.d();
                break;
            case "AdVideoFirstQuartile":
                this.p.e();
                break;
            case "AdVideoThirdQuartile":
                this.p.f();
                break;
            case "AdVideoMidpoint":
                this.p.g();
                break;
            case "AdVideoStart":
                this.p.h();
                break;
        }
    }

    private Context v() {
        FrameLayout frameLayout = this.c;
        if (frameLayout != null) {
            return frameLayout.getContext();
        }
        return null;
    }

    private int w() {
        return ClientMetadata.getInstance().getScreenOrientation(v());
    }

    private void x() {
        this.f.b();
        this.q = null;
    }

    private ViewGroup y() {
        ViewGroup viewGroup = this.k;
        if (viewGroup != null) {
            return viewGroup;
        }
        View topmostView = ViewUtil.getTopmostView(v(), this.c);
        ViewGroup viewGroup2 = topmostView instanceof ViewGroup ? (ViewGroup) topmostView : this.c;
        this.k = viewGroup2;
        return viewGroup2;
    }

    int a(int i, int i2, int i3) {
        return Math.max(i, Math.min(i2, i3));
    }

    public String a() {
        return this.f.a();
    }

    void a(int i) {
        SigmobLog.i("handleOrientationChange " + i);
        a((Runnable) null);
    }

    @Deprecated
    void a(int i, int i2) {
        this.e.a(0, 0, i, i2);
    }

    void a(int i, int i2, int i3, int i4, a.a aVar, boolean z) throws com.sigmob.sdk.mraid.c {
    }

    public void a(Activity activity) {
        new Handler(Looper.getMainLooper()).postDelayed(new Runnable() {
            @Override
            public void run() {
                if (d.this.n != null) {
                    d.this.n.a(d.this.h);
                }
            }
        }, ((this.b.getRvAdSetting() == null || this.b.getSkipSeconds() == -1) ? 5 : this.b.getSkipSeconds()) * 1000);
    }

    public void a(ValueCallback valueCallback) {
        this.f.a(valueCallback);
    }

    public void a(com.sigmob.sdk.base.common.e eVar) {
        this.B = eVar;
    }

    @Deprecated
    void a(ViewState viewState) {
        this.l = viewState;
    }

    public void a(a aVar) {
        this.m = aVar;
    }

    @Deprecated
    void a(c cVar) {
        this.r = cVar;
    }

    public void a(e eVar) {
        this.n = eVar;
    }

    public void a(f fVar) {
        this.p = fVar;
    }

    public void a(q qVar) {
        this.o = qVar;
    }

    void a(WindAdError windAdError) {
        a aVar = this.m;
        if (aVar != null) {
            aVar.a(windAdError);
        }
    }

    void a(String str) {
    }

    public void a(String str, b bVar) {
        o oVar = new o(v());
        this.q = oVar;
        oVar.a(true);
        this.q.setBackgroundColor(0);
        if (bVar != null) {
            bVar.a(this.q, null);
        }
        this.f.a(this.q);
        this.c.addView(this.q, new FrameLayout.LayoutParams(-1, -1));
        this.f.a(v(), str);
    }

    public void a(String str, String str2) {
        this.f.a(str, str2);
    }

    void a(URI uri, int i, String str) {
        a aVar = this.m;
        if (aVar != null) {
            aVar.a(uri, i, str);
        }
    }

    void a(URI uri, boolean z) throws com.sigmob.sdk.mraid.c {
    }

    public void a(boolean z) {
        if (z) {
            this.f.f();
        } else {
            this.f.g();
        }
    }

    void a(boolean z, j jVar) throws com.sigmob.sdk.mraid.c {
        if (!a(jVar)) {
            throw new com.sigmob.sdk.mraid.c("Unable to force orientation to " + jVar);
        }
        this.t = z;
        this.u = jVar;
        if (this.l == ViewState.EXPANDED || (this.a == PlacementType.INTERSTITIAL && !this.v)) {
            n();
        }
    }

    boolean a(ConsoleMessage consoleMessage) {
        q qVar = this.o;
        if (qVar != null) {
            return qVar.a(consoleMessage);
        }
        return true;
    }

    boolean a(j jVar) {
        if (jVar == j.c) {
            return true;
        }
        Activity activityFromViewTop = ViewUtil.getActivityFromViewTop(this.c);
        if (activityFromViewTop == null) {
            return false;
        }
        try {
            int i = activityFromViewTop.getPackageManager().getActivityInfo(new ComponentName(activityFromViewTop, activityFromViewTop.getClass()), 0).screenOrientation;
            return i == -1 || i == jVar.a();
        } catch (PackageManager.NameNotFoundException unused) {
            return false;
        }
    }

    boolean a(String str, JsResult jsResult) {
        q qVar = this.o;
        if (qVar != null) {
            return qVar.a(str, jsResult);
        }
        jsResult.confirm();
        return true;
    }

    public void b() {
        this.f.a(false);
    }

    void b(int i) throws com.sigmob.sdk.mraid.c {
        Activity activityFromViewTop = ViewUtil.getActivityFromViewTop(this.c);
        if (activityFromViewTop == null || !a(this.u)) {
            throw new com.sigmob.sdk.mraid.c("Attempted to lock orientation to unsupported value: " + this.u.name());
        }
        if (this.s == null) {
            this.s = Integer.valueOf(activityFromViewTop.getRequestedOrientation());
        }
        try {
            activityFromViewTop.setRequestedOrientation(i);
        } catch (Exception e2) {
            SigmobLog.e("lockOrientation: " + e2.getMessage());
        }
    }

    public void b(String str) {
        this.f.c(str);
    }

    public void b(String str, b bVar) {
        o oVar = new o(v());
        this.q = oVar;
        oVar.a(true);
        this.q.setBackgroundColor(0);
        if (bVar != null) {
            bVar.a(this.q, null);
        }
        this.f.a(this.q);
        this.c.addView(this.q, new FrameLayout.LayoutParams(-1, -1));
        this.f.b(str);
    }

    public void b(boolean z) {
        if (z) {
            this.f.h();
        } else {
            this.f.g();
        }
    }

    public void c() {
        o oVar = this.q;
        if (oVar != null) {
            oVar.resumeTimers();
        }
        this.f.a(true);
    }

    public void c(boolean z) {
        if (z) {
            this.f.i();
        }
    }

    public void d() {
        this.f.a(new ExposureChange(100.0f, new Rect(0, 0, y().getWidth(), y().getHeight()), null));
    }

    public void d(boolean z) {
        this.v = true;
        o oVar = this.q;
        if (oVar != null) {
            oVar.b(z);
        }
    }

    public Integer e() {
        Integer num = this.i;
        if (num != null) {
            return num;
        }
        this.f.b(new ValueCallback<String>() {
            @Override
            public void onReceiveValue(String str) {
                Float fValueOf;
                try {
                    if (str.equalsIgnoreCase("null") || str.equalsIgnoreCase("undefined") || (fValueOf = Float.valueOf(str)) == null || fValueOf.floatValue() <= 1.0E-5d) {
                        return;
                    }
                    d.this.i = Integer.valueOf((int) (fValueOf.floatValue() * 1000.0f));
                    if (d.this.p != null) {
                        d.this.p.a(d.this.i);
                    }
                } catch (Throwable unused) {
                }
            }
        });
        return 0;
    }

    protected void e(boolean z) {
        this.h = z;
        e eVar = this.n;
        if (eVar != null) {
            eVar.a(z);
        }
    }

    public o f() {
        return this.q;
    }

    boolean g() {
        Activity activityFromViewTop = ViewUtil.getActivityFromViewTop(this.c);
        if (activityFromViewTop == null || f() == null) {
            return false;
        }
        if (this.a != PlacementType.INLINE) {
            return true;
        }
        return this.g.a(activityFromViewTop, f());
    }

    void h() {
        String str = ClientMetadata.getInstance().getOrientationInt().intValue() == 1 ? "portrait" : "landscape";
        DisplayMetrics displayMetrics = v().getResources().getDisplayMetrics();
        com.sigmob.sdk.base.common.e eVar = this.B;
        if (eVar != null) {
            this.e.a(eVar.a(), this.B.b());
        } else {
            this.e.a(displayMetrics.widthPixels, displayMetrics.heightPixels);
        }
        ViewGroup viewGroupY = y();
        this.e.a(0, 0, viewGroupY.getMeasuredWidth(), viewGroupY.getMeasuredHeight());
        this.e.c(0, 0, viewGroupY.getMeasuredWidth(), viewGroupY.getMeasuredHeight());
        this.e.b(0, 0, viewGroupY.getMeasuredWidth(), viewGroupY.getMeasuredHeight());
        this.f.a(new CurrentAppOrientation(str, true));
        this.f.a(this.e);
    }

    void i() {
        WindAds.sharedAds().getHandler().post(new Runnable() {
            @Override
            public void run() {
                try {
                    d.this.f.a(new MraidEnv());
                    d.this.f.a(d.this.g.b(d.this.v()), d.this.g.a(d.this.v()), h.d(d.this.v()), h.c(d.this.v()), d.this.g(), true, true);
                    d.this.f.a(d.this.a);
                    d.this.f.a(d.this.b.getRvAdSetting());
                    if (!TextUtils.isEmpty(d.this.b.getVideo_url())) {
                        String proxyVideoUrl = d.this.b.getProxyVideoUrl();
                        d.this.f.a(d.this.b.getMaterial().video_size != null ? new VideoItem(proxyVideoUrl, d.this.b.getMaterial().video_size.width.intValue(), d.this.b.getMaterial().video_size.height.intValue()) : new VideoItem(proxyVideoUrl, 0, 0));
                        d.this.e();
                    }
                    MaterialMeta.Builder builderNewBuilder = d.this.b.getMaterial().newBuilder();
                    if (!d.this.b.getMaterial().has_companion_endcard.booleanValue()) {
                        builderNewBuilder = builderNewBuilder.companion(null);
                    }
                    d.this.f.a(builderNewBuilder.html_snippet(null).html_url(null).deeplink_url(null).landing_page(null).web_event_handle(null).endcard_url(null).build());
                    d.this.f.a(d.this.b.getAd().newBuilder().materials(new LinkedList()).ad_tracking(new LinkedList()).build());
                } catch (Throwable th) {
                    SigmobLog.e("handleMraidLoad", th);
                }
                if (d.this.A) {
                    d.this.j();
                }
            }
        });
    }

    void j() {
        try {
            this.A = true;
            h();
            b(ViewState.DEFAULT);
            d();
            this.f.e();
            this.f.a(true);
            try {
                this.f.j();
                n();
                this.f.a(ClientMetadata.getInstance().getLocation());
            } catch (Throwable unused) {
                SigmobLog.e("Failed to apply orientation.");
            }
        } catch (Throwable th) {
            SigmobLog.e("handlePageLoad error", th);
        }
    }

    public void k() {
        this.v = false;
        o oVar = this.q;
        if (oVar != null) {
            oVar.onResume();
        }
    }

    public void l() {
        this.d.a();
        Iterator<i> it = this.w.values().iterator();
        while (it.hasNext()) {
            it.next().c();
        }
        this.w.clear();
        try {
            this.r.a();
        } catch (Throwable unused) {
        }
        try {
            if (this.z != null) {
                this.z.b(this.z);
            }
        } catch (Throwable unused2) {
        }
        if (!this.v) {
            d(true);
        }
        x();
        o();
    }

    protected void m() {
        ViewState viewState;
        if (this.q == null || this.l == ViewState.LOADING || this.l == ViewState.HIDDEN) {
            return;
        }
        if (this.l == ViewState.EXPANDED || this.a == PlacementType.INTERSTITIAL) {
            o();
        }
        if (this.l == ViewState.RESIZED || this.l == ViewState.EXPANDED) {
            this.c.addView(this.q, new FrameLayout.LayoutParams(-1, -1));
            this.c.setVisibility(0);
            viewState = ViewState.DEFAULT;
        } else {
            if (this.l != ViewState.DEFAULT) {
                return;
            }
            this.c.setVisibility(4);
            viewState = ViewState.HIDDEN;
        }
        b(viewState);
    }

    void n() throws com.sigmob.sdk.mraid.c {
        int iA;
        if (this.u != j.c) {
            iA = this.u.a();
        } else {
            if (this.t) {
                o();
                return;
            }
            Activity activityFromViewTop = ViewUtil.getActivityFromViewTop(this.c);
            if (activityFromViewTop == null) {
                throw new com.sigmob.sdk.mraid.c("Unable to set MRAID expand orientation to 'none'; expected passed in Activity Context.");
            }
            iA = ClientMetadata.getInstance().getScreenOrientation(activityFromViewTop);
        }
        b(iA);
    }

    void o() {
        try {
            Activity activityFromViewTop = ViewUtil.getActivityFromViewTop(this.c);
            if (activityFromViewTop != null && this.s != null) {
                activityFromViewTop.setRequestedOrientation(this.s.intValue());
            }
            this.s = null;
        } catch (Exception e2) {
            SigmobLog.e("unApplyOrientation: " + e2.getMessage());
        }
    }

    public FrameLayout p() {
        return this.c;
    }

    @Deprecated
    ViewState q() {
        return this.l;
    }

    @Deprecated
    Integer r() {
        return this.s;
    }

    @Deprecated
    boolean s() {
        return this.t;
    }

    @Deprecated
    j t() {
        return this.u;
    }

    @Deprecated
    o u() {
        return this.q;
    }
}
