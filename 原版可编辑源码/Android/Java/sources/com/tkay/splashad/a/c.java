package com.tkay.splashad.a;

import android.app.Activity;
import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import com.tkay.basead.d.i;
import com.tkay.basead.ui.ThirdPartySplashATView;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.IExHandler;
import com.tkay.core.api.TYEventInterface;
import com.tkay.core.api.TYMediationRequestInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.k;
import com.tkay.core.common.b.m;
import com.tkay.core.common.h;
import com.tkay.core.common.j;
import com.tkay.core.common.l.s;
import com.tkay.core.common.v;
import com.tkay.splashad.api.TYSplashSkipAdListener;
import com.tkay.splashad.api.TYSplashSkipInfo;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import java.util.Map;

public class c extends com.tkay.core.common.f<g> {
    d a;

    @Override
    protected final String a() {
        return "4";
    }

    @Override
    public final h a(j jVar) {
        g gVar = (g) jVar;
        e eVar = new e(gVar.a());
        eVar.T = gVar.h;
        eVar.a(gVar.d);
        return eVar;
    }

    @Override
    public final boolean a(String str, String str2, j jVar, com.tkay.core.common.b.a aVar) {
        g gVar = (g) jVar;
        if (aVar == null || !(aVar instanceof b)) {
            return false;
        }
        d dVar = new d(this.b);
        this.a = dVar;
        dVar.a(gVar.a(), str, str2, gVar.b, gVar.c, (b) aVar, gVar.h);
        return true;
    }

    private c(Context context, String str) {
        super(context, str);
    }

    public static c a(Context context, String str) {
        com.tkay.core.common.f fVarA = v.a().a(str, "4");
        if (fVarA == null || !(fVarA instanceof c)) {
            fVarA = new c(context, str);
            v.a().a(str, "4", fVarA);
        }
        return (c) fVarA;
    }

    public final void a(Context context, TYMediationRequestInfo tYMediationRequestInfo, String str, b bVar, int i, int i2, com.tkay.core.common.b.b bVar2, Map<String, Object> map) {
        g gVar = new g();
        gVar.a(context);
        gVar.b = tYMediationRequestInfo;
        gVar.c = str;
        gVar.h = i;
        gVar.d = i2;
        gVar.e = bVar2;
        gVar.g = map;
        super.a(this.b, "4", this.c, gVar, bVar);
    }

    @Override
    public final void a(String str, com.tkay.core.common.b.a aVar) {
        if (aVar == null || !(aVar instanceof b)) {
            return;
        }
        ((b) aVar).setRequestId(str);
    }

    private static h a(g gVar) {
        e eVar = new e(gVar.a());
        eVar.T = gVar.h;
        eVar.a(gVar.d);
        return eVar;
    }

    @Override
    public final com.tkay.core.common.f.a a(Context context, boolean z, boolean z2, Map<String, Object> map) {
        d dVar = this.a;
        com.tkay.core.common.f.a aVar = null;
        if (dVar != null && dVar.d != null && dVar.d.d() <= 0) {
            aVar = dVar.d;
        }
        if (aVar != null) {
            com.tkay.core.common.f.d dVarH = aVar.h();
            if (z) {
                com.tkay.core.common.k.c.a(dVarH, true, -1, 0, dVarH.x(), dVarH.H(), dVarH.u, "", dVarH.X(), dVarH.q == 3, "");
            }
            return aVar;
        }
        return super.a(context, z, z2, map);
    }

    public final synchronized void a(final Activity activity, final ViewGroup viewGroup, final a aVar, final TYEventInterface tYEventInterface, final TYSplashSkipInfo tYSplashSkipInfo, final String str, final Map<String, Object> map) {
        final com.tkay.core.common.f.a aVarA = a((Context) activity, false, true, map);
        if (aVarA == null) {
            Log.e("tkay", "Splash No Cache.");
            return;
        }
        if (aVarA != null && (aVarA.e() instanceof CustomSplashAdapter)) {
            a(aVarA);
            f();
            aVarA.a(aVarA.d() + 1);
            if (this.a != null && this.a.d == aVarA) {
                this.a.d = null;
            }
            com.tkay.core.common.l.b.a.a().a(new Runnable() {
                @Override
                public final void run() {
                    final CustomSplashAdapter customSplashAdapter = (CustomSplashAdapter) aVarA.e();
                    Activity activity2 = activity;
                    if (activity2 != null) {
                        customSplashAdapter.refreshActivityContext(activity2);
                    }
                    final com.tkay.core.common.f.d trackingInfo = aVarA.e().getTrackingInfo();
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    if (trackingInfo != null) {
                        trackingInfo.v = c.this.g;
                        trackingInfo.C = str;
                        trackingInfo.h(com.tkay.core.common.l.g.a(trackingInfo.X(), trackingInfo.x(), jCurrentTimeMillis));
                        s.a(c.this.b, trackingInfo);
                        s.a((Map<String, Object>) map, trackingInfo);
                    }
                    com.tkay.core.common.a.a().a(c.this.b, aVarA);
                    com.tkay.core.common.k.a.a(c.this.b).a(13, trackingInfo, customSplashAdapter.getUnitGroupInfo(), jCurrentTimeMillis);
                    m.a().a(new Runnable() {
                        @Override
                        public final void run() {
                            IExHandler iExHandlerB = m.a().b();
                            if (iExHandlerB != null) {
                                CustomSplashAdapter customSplashAdapter2 = customSplashAdapter;
                                customSplashAdapter2.setAdDownloadListener(iExHandlerB.createDownloadListener(customSplashAdapter2, null, tYEventInterface));
                            }
                            boolean z = tYSplashSkipInfo != null && tYSplashSkipInfo.canUseCustomSkipView();
                            boolean zIsSupportCustomSkipView = customSplashAdapter.isSupportCustomSkipView();
                            if (z && zIsSupportCustomSkipView) {
                                tYSplashSkipInfo.setContainer(viewGroup);
                                customSplashAdapter.setSplashSkipInfo(tYSplashSkipInfo);
                            }
                            final f fVar = new f(customSplashAdapter, aVar);
                            if (customSplashAdapter.getMixedFormatAdType() == 0) {
                                c.a(c.this, activity, viewGroup, fVar, z, aVarA.f(), trackingInfo);
                            } else {
                                customSplashAdapter.internalShow(activity, viewGroup, fVar);
                            }
                            if (z) {
                                TYSplashSkipAdListener tYSplashSkipAdListener = tYSplashSkipInfo.getTYSplashSkipAdListener();
                                if (tYSplashSkipAdListener != null) {
                                    tYSplashSkipAdListener.isSupportCustomSkipView(zIsSupportCustomSkipView);
                                }
                                if (zIsSupportCustomSkipView) {
                                    tYSplashSkipInfo.getSkipView().setOnClickListener(new View.OnClickListener() {
                                        @Override
                                        public final void onClick(View view) {
                                            f fVar2 = fVar;
                                            if (fVar2 != null) {
                                                fVar2.a(2);
                                                fVar.onSplashAdDismiss();
                                            }
                                        }
                                    });
                                    return;
                                }
                                return;
                            }
                            if (tYSplashSkipInfo != null) {
                                Log.e("tkay", "This AdSource does't support 'Custom SkipView' or 'SkipView' is null.");
                            }
                        }
                    });
                }
            });
        }
    }

    @Override
    public final boolean g() {
        d dVar = this.a;
        return dVar != null && dVar.a();
    }

    private boolean a(String str, String str2, g gVar, com.tkay.core.common.b.a aVar) {
        if (aVar == null || !(aVar instanceof b)) {
            return false;
        }
        d dVar = new d(this.b);
        this.a = dVar;
        dVar.a(gVar.a(), str, str2, gVar.b, gVar.c, (b) aVar, gVar.h);
        return true;
    }

    private void e(String str) {
        d dVar = this.a;
        if (dVar != null) {
            com.tkay.core.common.f.d dVar2 = new com.tkay.core.common.f.d();
            dVar2.x(dVar.f);
            dVar2.y(dVar.e);
            dVar2.z("4");
            dVar2.w("0");
            dVar2.a(true);
            com.tkay.core.common.k.c.a(dVar2, ErrorCode.getErrorCode(ErrorCode.timeOutError, "", "Splash FetchAd Timeout."));
            this.a.b = null;
            this.a = null;
        }
        if (TextUtils.isEmpty(str)) {
            return;
        }
        h hVar = this.d.get(str);
        this.d.remove(str);
        if (hVar != null) {
            if (hVar instanceof e) {
                ((e) hVar).j();
                return;
            }
            return;
        }
        com.tkay.core.common.f.d dVar3 = new com.tkay.core.common.f.d();
        dVar3.x(this.c);
        dVar3.y(str);
        dVar3.z("4");
        dVar3.w("0");
        dVar3.a(true);
        com.tkay.core.common.k.c.a(dVar3, ErrorCode.getErrorCode(ErrorCode.timeOutError, "", "Splash FetchAd Timeout."));
    }

    @Override
    public final boolean i() {
        d dVar = this.a;
        if (dVar != null) {
            return !TextUtils.isEmpty(dVar.e);
        }
        return super.i();
    }

    /* JADX WARN: Multi-variable type inference failed */
    private void a(Activity activity, ViewGroup viewGroup, f fVar, boolean z, BaseAd baseAd, com.tkay.core.common.f.d dVar) {
        ViewGroup customAdContainer;
        if (baseAd != 0 && (baseAd instanceof com.tkay.core.common.f.a.e)) {
            com.tkay.core.common.f.a.b bVar = new com.tkay.core.common.f.a.b((com.tkay.core.common.f.a.e) baseAd);
            com.tkay.core.common.f.a.c cVar = new com.tkay.core.common.f.a.c((com.tkay.core.common.f.a.a) baseAd, dVar, Integer.parseInt("4"));
            String strA = a(cVar);
            baseAd.setNativeEventListener(new 2(new boolean[]{false}, fVar));
            i.a().a(strA, baseAd);
            ThirdPartySplashATView thirdPartySplashATView = new ThirdPartySplashATView(activity.getApplicationContext(), cVar, bVar, new 3(fVar), strA);
            thirdPartySplashATView.setDontCountDown(z);
            if (baseAd.getCustomAdContainer() != null) {
                customAdContainer = baseAd.getCustomAdContainer();
                customAdContainer.addView(thirdPartySplashATView);
            } else {
                customAdContainer = thirdPartySplashATView;
            }
            thirdPartySplashATView.registerNativeClickListener(viewGroup);
            viewGroup.addView(customAdContainer);
            return;
        }
        Log.e("tkay", "showThirdPartyNativeSplash fail,AdCache return illegal type adObject");
        if (fVar != null) {
            fVar.a(99);
            fVar.onSplashAdShowFail(ErrorCode.getErrorCode(ErrorCode.adShowError, "", "showThirdPartyNativeSplash fail,AdCache return illegal type adObject"));
            fVar.onSplashAdDismiss();
        }
    }

    final class 2 implements k {
        final boolean[] a;
        final f b;

        @Override
        public final void onAdDislikeButtonClick() {
        }

        @Override
        public final void onAdVideoEnd() {
        }

        @Override
        public final void onAdVideoProgress(int i) {
        }

        @Override
        public final void onAdVideoStart() {
        }

        2(boolean[] zArr, f fVar) {
            this.a = zArr;
            this.b = fVar;
        }

        @Override
        public final void onAdImpressed() {
            boolean[] zArr = this.a;
            if (zArr[0]) {
                return;
            }
            zArr[0] = true;
            this.b.onSplashAdShow();
        }

        @Override
        public final void onAdClicked(View view) {
            this.b.onSplashAdClicked();
        }

        @Override
        public final void onDeeplinkCallback(boolean z) {
            this.b.onDeeplinkCallback(z);
        }

        @Override
        public final void onDownloadConfirmCallback(Context context, View view, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
            this.b.onDownloadConfirm(context, tYNetworkConfirmInfo);
        }
    }

    final class 3 implements com.tkay.basead.e.a {
        final f a;

        @Override
        public final void onAdClick(int i) {
        }

        @Override
        public final void onAdShow() {
        }

        @Override
        public final void onDeeplinkCallback(boolean z) {
        }

        @Override
        public final void onShowFailed(com.tkay.basead.c.e eVar) {
        }

        3(f fVar) {
            this.a = fVar;
        }

        @Override
        public final void onAdClosed() {
            this.a.onSplashAdDismiss();
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    static void a(c cVar, Activity activity, ViewGroup viewGroup, f fVar, boolean z, BaseAd baseAd, com.tkay.core.common.f.d dVar) {
        ViewGroup customAdContainer;
        if (baseAd != 0 && (baseAd instanceof com.tkay.core.common.f.a.e)) {
            com.tkay.core.common.f.a.b bVar = new com.tkay.core.common.f.a.b((com.tkay.core.common.f.a.e) baseAd);
            com.tkay.core.common.f.a.c cVar2 = new com.tkay.core.common.f.a.c((com.tkay.core.common.f.a.a) baseAd, dVar, Integer.parseInt("4"));
            String strA = a(cVar2);
            baseAd.setNativeEventListener(cVar.new 2(new boolean[]{false}, fVar));
            i.a().a(strA, baseAd);
            ThirdPartySplashATView thirdPartySplashATView = new ThirdPartySplashATView(activity.getApplicationContext(), cVar2, bVar, cVar.new 3(fVar), strA);
            thirdPartySplashATView.setDontCountDown(z);
            if (baseAd.getCustomAdContainer() != null) {
                customAdContainer = baseAd.getCustomAdContainer();
                customAdContainer.addView(thirdPartySplashATView);
            } else {
                customAdContainer = thirdPartySplashATView;
            }
            thirdPartySplashATView.registerNativeClickListener(viewGroup);
            viewGroup.addView(customAdContainer);
            return;
        }
        Log.e("tkay", "showThirdPartyNativeSplash fail,AdCache return illegal type adObject");
        fVar.a(99);
        fVar.onSplashAdShowFail(ErrorCode.getErrorCode(ErrorCode.adShowError, "", "showThirdPartyNativeSplash fail,AdCache return illegal type adObject"));
        fVar.onSplashAdDismiss();
    }
}
