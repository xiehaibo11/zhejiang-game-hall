package com.tkay.interstitial.a;

import android.app.Activity;
import android.content.Context;
import android.graphics.Bitmap;
import android.text.TextUtils;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;
import com.tkay.basead.e.b;
import com.tkay.basead.ui.BaseATActivity;
import com.tkay.core.api.AdError;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.IExHandler;
import com.tkay.core.api.TYAdStatusInfo;
import com.tkay.core.api.TYEventInterface;
import com.tkay.core.common.b.m;
import com.tkay.core.common.h;
import com.tkay.core.common.j;
import com.tkay.core.common.l.g;
import com.tkay.core.common.l.s;
import com.tkay.core.common.res.b;
import com.tkay.core.common.v;
import com.tkay.expressad.foundation.h.i;
import com.tkay.interstitial.api.TYInterstitialAutoLoadListener;
import com.tkay.interstitial.api.TYInterstitialListener;
import com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter;
import java.lang.ref.WeakReference;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes3.dex */
public class a extends com.tkay.core.common.f<e> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f7501a = a.class.getSimpleName();
    Runnable m;
    private View n;
    private AtomicBoolean o;

    private static void m() {
    }

    private static void n() {
    }

    private static void o() {
    }

    @Override // com.tkay.core.common.f
    protected final String a() {
        return "3";
    }

    @Override // com.tkay.core.common.f
    public final /* synthetic */ h a(j jVar) {
        e eVar = (e) jVar;
        f fVar = new f(eVar.a());
        fVar.a(eVar.d);
        return fVar;
    }

    public static a a(Context context, String str) {
        com.tkay.core.common.f fVarA = v.a().a(str, "3");
        if (fVarA == null || !(fVarA instanceof a)) {
            fVarA = new a(context, str);
            v.a().a(str, "3", fVarA);
        }
        return (a) fVarA;
    }

    private a(Context context, String str) {
        super(context, str);
        this.o = new AtomicBoolean(false);
        this.m = new Runnable() { // from class: com.tkay.interstitial.a.a.4
            @Override // java.lang.Runnable
            public final void run() {
                if (a.this.j()) {
                    a.this.a(m.a().D(), 4, (com.tkay.core.common.b.a) null, (com.tkay.core.common.b.b) null, (Map<String, Object>) null);
                }
            }
        };
    }

    public final synchronized void a(final Activity activity, final String str, final TYInterstitialListener tYInterstitialListener, final TYEventInterface tYEventInterface, final Map<String, Object> map) {
        if (this.o.get()) {
            StringBuilder sb = new StringBuilder("The placementId(");
            sb.append(this.c);
            sb.append(") is already in the process of being delayed.");
            return;
        }
        final com.tkay.core.common.f.a aVarA = a((Context) activity, false, true, map);
        if (aVarA == null || !(aVarA.e() instanceof CustomInterstitialAdapter)) {
            if (a((TYAdStatusInfo) null)) {
                a(m.a().D(), 7, (com.tkay.core.common.b.a) null, (com.tkay.core.common.b.b) null, map);
            }
            return;
        }
        a(aVarA);
        f();
        aVarA.a(aVarA.d() + 1);
        final int iAd = aVarA.e().getUnitGroupInfo().ad();
        if (iAd > 0) {
            this.o.set(true);
        }
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.interstitial.a.a.1
            @Override // java.lang.Runnable
            public final void run() {
                final CustomInterstitialAdapter customInterstitialAdapter = (CustomInterstitialAdapter) aVarA.e();
                Activity activity2 = activity;
                if (activity2 != null) {
                    customInterstitialAdapter.refreshActivityContext(activity2);
                }
                final com.tkay.core.common.f.d trackingInfo = aVarA.e().getTrackingInfo();
                long jCurrentTimeMillis = System.currentTimeMillis();
                if (trackingInfo != null) {
                    trackingInfo.v = a.this.g;
                    trackingInfo.C = str;
                    trackingInfo.h(g.a(trackingInfo.X(), trackingInfo.x(), jCurrentTimeMillis));
                    s.a(a.this.b, trackingInfo);
                    s.a((Map<String, Object>) map, trackingInfo);
                }
                com.tkay.core.common.a.a().a(a.this.b, aVarA);
                com.tkay.core.common.k.a.a(a.this.b).a(13, trackingInfo, aVarA.e().getUnitGroupInfo(), jCurrentTimeMillis);
                if (iAd > 0) {
                    m.a().a(new Runnable() { // from class: com.tkay.interstitial.a.a.1.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            a.a(a.this, activity);
                        }
                    });
                }
                m.a().a(new Runnable() { // from class: com.tkay.interstitial.a.a.1.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        customInterstitialAdapter.setScenario(str);
                        IExHandler iExHandlerB = m.a().b();
                        if (iExHandlerB != null) {
                            CustomInterstitialAdapter customInterstitialAdapter2 = customInterstitialAdapter;
                            customInterstitialAdapter2.setAdDownloadListener(iExHandlerB.createDownloadListener(customInterstitialAdapter2, null, tYEventInterface));
                        }
                        if (customInterstitialAdapter.getMixedFormatAdType() == 0) {
                            a.a(a.this, activity, new d(customInterstitialAdapter, tYInterstitialListener), aVarA.f(), trackingInfo, str);
                        } else {
                            customInterstitialAdapter.internalShow(activity, new d(customInterstitialAdapter, tYInterstitialListener));
                        }
                        if (iAd <= 0 || !a.this.o.get()) {
                            return;
                        }
                        if (a.this.n != null) {
                            ((ViewGroup) a.this.n.getParent()).removeView(a.this.n);
                        }
                        a.this.o.set(false);
                    }
                }, iAd);
            }
        });
    }

    private void a(Activity activity) {
        if (activity == null) {
            return;
        }
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(this.b).b(m.a().o());
        String strN = aVarB.n();
        String strM = aVarB.m();
        if (this.n == null) {
            this.n = LayoutInflater.from(activity.getApplicationContext()).inflate(com.tkay.core.common.l.h.a(activity, "interstitial_loading_layout", "layout"), (ViewGroup) null);
        }
        this.n.setOnTouchListener(new AnonymousClass2());
        ImageView imageView = (ImageView) this.n.findViewById(com.tkay.core.common.l.h.a(activity, "interstitial_iv_loading", "id"));
        TextView textView = (TextView) this.n.findViewById(com.tkay.core.common.l.h.a(activity, "interstitial_tv_loading", "id"));
        int iA = com.tkay.core.common.l.h.a(activity, 30.0f);
        imageView.setMinimumWidth(iA);
        imageView.setMinimumHeight(iA);
        int iA2 = com.tkay.core.common.l.h.a(activity, 90.0f);
        imageView.setMaxWidth(iA2);
        imageView.setMaxHeight(iA2);
        imageView.setScaleType(ImageView.ScaleType.CENTER_INSIDE);
        int iA3 = com.tkay.core.common.l.h.a(activity, "interstitial_loading_default", i.c);
        if (TextUtils.isEmpty(strN)) {
            imageView.setImageResource(iA3);
        } else {
            com.tkay.core.common.res.b.a(activity.getApplicationContext()).a(new com.tkay.core.common.res.e(3, strN), new AnonymousClass3(new WeakReference(imageView), strN, iA3));
        }
        if (!TextUtils.isEmpty(strM)) {
            textView.setText(strM);
        } else {
            textView.setText(com.tkay.core.common.l.h.a(activity, "interstitial_text_loading_default", i.g));
        }
        View view = this.n;
        if (view != null && view.getParent() != null) {
            ((ViewGroup) this.n.getParent()).removeView(this.n);
        }
        ((ViewGroup) activity.getWindow().getDecorView()).addView(this.n, new FrameLayout.LayoutParams(-1, -1));
    }

    /* JADX INFO: renamed from: com.tkay.interstitial.a.a$2, reason: invalid class name */
    final class AnonymousClass2 implements View.OnTouchListener {
        @Override // android.view.View.OnTouchListener
        public final boolean onTouch(View view, MotionEvent motionEvent) {
            return true;
        }

        AnonymousClass2() {
        }
    }

    /* JADX INFO: renamed from: com.tkay.interstitial.a.a$3, reason: invalid class name */
    final class AnonymousClass3 implements b.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ WeakReference f7506a;
        final /* synthetic */ String b;
        final /* synthetic */ int c;

        AnonymousClass3(WeakReference weakReference, String str, int i) {
            this.f7506a = weakReference;
            this.b = str;
            this.c = i;
        }

        @Override // com.tkay.core.common.res.b.a
        public final void onSuccess(String str, Bitmap bitmap) {
            ImageView imageView = (ImageView) this.f7506a.get();
            if (!TextUtils.equals(this.b, str) || imageView == null) {
                return;
            }
            imageView.setImageBitmap(bitmap);
        }

        @Override // com.tkay.core.common.res.b.a
        public final void onFail(String str, String str2) {
            Log.e(a.f7501a, "load: image load fail:".concat(String.valueOf(str2)));
            ImageView imageView = (ImageView) this.f7506a.get();
            if (!TextUtils.equals(this.b, str) || imageView == null) {
                return;
            }
            imageView.setImageResource(this.c);
        }
    }

    public final void a(Context context, int i, com.tkay.core.common.b.a aVar, com.tkay.core.common.b.b bVar, Map<String, Object> map) {
        e eVar = new e();
        eVar.a(context);
        eVar.d = i;
        eVar.e = bVar;
        eVar.g = map;
        super.a(this.b, "3", this.c, eVar, aVar);
    }

    private static h a(e eVar) {
        f fVar = new f(eVar.a());
        fVar.a(eVar.d);
        return fVar;
    }

    @Override // com.tkay.core.common.f
    public final TYAdStatusInfo a(Context context, Map<String, Object> map) {
        TYAdStatusInfo tYAdStatusInfoA = super.a(context, map);
        if (!c() && a(tYAdStatusInfoA)) {
            a(context, 5, (com.tkay.core.common.b.a) null, (com.tkay.core.common.b.b) null, map);
        }
        return tYAdStatusInfoA;
    }

    @Override // com.tkay.core.common.f
    protected final boolean j() {
        return v.a().e(this.c);
    }

    private void p() {
        m.a().a(this.m, ((long) Math.pow(2.0d, this.h)) * 1000);
    }

    @Override // com.tkay.core.common.f
    protected final void b(AdError adError) {
        super.b(adError);
        if (j()) {
            m.a().a(this.m, ((long) Math.pow(2.0d, this.h)) * 1000);
            TYInterstitialAutoLoadListener tYInterstitialAutoLoadListener = b.a().b;
            if (tYInterstitialAutoLoadListener != null) {
                tYInterstitialAutoLoadListener.onInterstitialAutoLoadFail(this.c, adError);
            }
        }
    }

    @Override // com.tkay.core.common.f
    protected final void l() {
        TYInterstitialAutoLoadListener tYInterstitialAutoLoadListener;
        super.l();
        if (!j() || (tYInterstitialAutoLoadListener = b.a().b) == null) {
            return;
        }
        tYInterstitialAutoLoadListener.onInterstitialAutoLoaded(this.c);
    }

    @Override // com.tkay.core.common.f
    protected final void k() {
        m.a().c(this.m);
    }

    /* JADX WARN: Multi-variable type inference failed */
    private void a(Activity activity, d dVar, BaseAd baseAd, com.tkay.core.common.f.d dVar2, String str) {
        if (baseAd != 0 && (baseAd instanceof com.tkay.core.common.f.a.e)) {
            com.tkay.core.common.f.a.b bVar = new com.tkay.core.common.f.a.b((com.tkay.core.common.f.a.e) baseAd);
            com.tkay.core.common.f.a.c cVar = new com.tkay.core.common.f.a.c((com.tkay.core.common.f.a.a) baseAd, dVar2, Integer.parseInt("3"));
            String strA = a(cVar);
            com.tkay.basead.e.b.a().a(strA, new AnonymousClass5(dVar, strA));
            com.tkay.basead.d.i.a().a(strA, baseAd);
            com.tkay.core.basead.b.a aVar = new com.tkay.core.basead.b.a();
            aVar.c = bVar;
            aVar.d = strA;
            aVar.f5983a = 3;
            aVar.h = cVar;
            aVar.e = com.tkay.core.common.l.d.g(activity);
            aVar.b = str;
            BaseATActivity.a(activity, aVar);
            return;
        }
        Log.e("tkay", "showThirdPartyNativeSplash fail,AdCache return illegal type adObject");
        if (dVar != null) {
            dVar.onInterstitialAdVideoError("", "showThirdPartyNativeInterstitial fail,AdCache return illegal type adObject");
        }
    }

    /* JADX INFO: renamed from: com.tkay.interstitial.a.a$5, reason: invalid class name */
    final class AnonymousClass5 implements b.InterfaceC0396b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ d f7508a;
        final /* synthetic */ String b;

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void a(boolean z) {
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void d() {
        }

        AnonymousClass5(d dVar, String str) {
            this.f7508a = dVar;
            this.b = str;
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void a() {
            d dVar = this.f7508a;
            if (dVar != null) {
                dVar.onInterstitialAdShow();
            }
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void a(com.tkay.basead.c.e eVar) {
            d dVar = this.f7508a;
            if (dVar != null) {
                dVar.onInterstitialAdVideoError(eVar.a(), eVar.b());
            }
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void b() {
            d dVar = this.f7508a;
            if (dVar != null) {
                dVar.onInterstitialAdVideoStart();
            }
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void c() {
            d dVar = this.f7508a;
            if (dVar != null) {
                dVar.onInterstitialAdVideoEnd();
            }
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void e() {
            com.tkay.basead.e.b.a().b(this.b);
            d dVar = this.f7508a;
            if (dVar != null) {
                dVar.onInterstitialAdClose();
            }
        }

        @Override // com.tkay.basead.e.b.InterfaceC0396b
        public final void a(int i) {
            d dVar = this.f7508a;
            if (dVar != null) {
                dVar.onInterstitialAdClicked();
            }
        }
    }

    static /* synthetic */ void a(a aVar, Activity activity) {
        if (activity != null) {
            com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(aVar.b).b(m.a().o());
            String strN = aVarB.n();
            String strM = aVarB.m();
            if (aVar.n == null) {
                aVar.n = LayoutInflater.from(activity.getApplicationContext()).inflate(com.tkay.core.common.l.h.a(activity, "interstitial_loading_layout", "layout"), (ViewGroup) null);
            }
            aVar.n.setOnTouchListener(aVar.new AnonymousClass2());
            ImageView imageView = (ImageView) aVar.n.findViewById(com.tkay.core.common.l.h.a(activity, "interstitial_iv_loading", "id"));
            TextView textView = (TextView) aVar.n.findViewById(com.tkay.core.common.l.h.a(activity, "interstitial_tv_loading", "id"));
            int iA = com.tkay.core.common.l.h.a(activity, 30.0f);
            imageView.setMinimumWidth(iA);
            imageView.setMinimumHeight(iA);
            int iA2 = com.tkay.core.common.l.h.a(activity, 90.0f);
            imageView.setMaxWidth(iA2);
            imageView.setMaxHeight(iA2);
            imageView.setScaleType(ImageView.ScaleType.CENTER_INSIDE);
            int iA3 = com.tkay.core.common.l.h.a(activity, "interstitial_loading_default", i.c);
            if (TextUtils.isEmpty(strN)) {
                imageView.setImageResource(iA3);
            } else {
                com.tkay.core.common.res.b.a(activity.getApplicationContext()).a(new com.tkay.core.common.res.e(3, strN), aVar.new AnonymousClass3(new WeakReference(imageView), strN, iA3));
            }
            if (!TextUtils.isEmpty(strM)) {
                textView.setText(strM);
            } else {
                textView.setText(com.tkay.core.common.l.h.a(activity, "interstitial_text_loading_default", i.g));
            }
            View view = aVar.n;
            if (view != null && view.getParent() != null) {
                ((ViewGroup) aVar.n.getParent()).removeView(aVar.n);
            }
            ((ViewGroup) activity.getWindow().getDecorView()).addView(aVar.n, new FrameLayout.LayoutParams(-1, -1));
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    static /* synthetic */ void a(a aVar, Activity activity, d dVar, BaseAd baseAd, com.tkay.core.common.f.d dVar2, String str) {
        if (baseAd != 0 && (baseAd instanceof com.tkay.core.common.f.a.e)) {
            com.tkay.core.common.f.a.b bVar = new com.tkay.core.common.f.a.b((com.tkay.core.common.f.a.e) baseAd);
            com.tkay.core.common.f.a.c cVar = new com.tkay.core.common.f.a.c((com.tkay.core.common.f.a.a) baseAd, dVar2, Integer.parseInt("3"));
            String strA = a(cVar);
            com.tkay.basead.e.b.a().a(strA, aVar.new AnonymousClass5(dVar, strA));
            com.tkay.basead.d.i.a().a(strA, baseAd);
            com.tkay.core.basead.b.a aVar2 = new com.tkay.core.basead.b.a();
            aVar2.c = bVar;
            aVar2.d = strA;
            aVar2.f5983a = 3;
            aVar2.h = cVar;
            aVar2.e = com.tkay.core.common.l.d.g(activity);
            aVar2.b = str;
            BaseATActivity.a(activity, aVar2);
            return;
        }
        Log.e("tkay", "showThirdPartyNativeSplash fail,AdCache return illegal type adObject");
        dVar.onInterstitialAdVideoError("", "showThirdPartyNativeInterstitial fail,AdCache return illegal type adObject");
    }
}
