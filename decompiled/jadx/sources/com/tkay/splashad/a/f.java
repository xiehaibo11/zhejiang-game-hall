package com.tkay.splashad.a;

import android.content.Context;
import android.text.TextUtils;
import android.view.ViewGroup;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.i;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.a.f;
import com.tkay.core.common.l.u;
import com.tkay.core.common.v;
import com.tkay.splashad.api.ITYSplashEyeAd;
import com.tkay.splashad.api.TYSplashAdExtraInfo;
import com.tkay.splashad.api.TYSplashSkipAdListener;
import com.tkay.splashad.api.TYSplashSkipInfo;
import com.tkay.splashad.unitgroup.api.CustomSplashAdapter;
import com.tkay.splashad.unitgroup.api.CustomSplashEventListener;
import java.util.Timer;
import java.util.TimerTask;

/* JADX INFO: loaded from: classes4.dex */
public final class f implements CustomSplashEventListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    CustomSplashAdapter f7809a;
    a b;
    long c;
    private Timer d;
    private boolean e = false;
    private int f = 0;

    public f(CustomSplashAdapter customSplashAdapter, a aVar) {
        this.f7809a = customSplashAdapter;
        this.b = aVar;
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashEventListener
    public final void onSplashAdShow() {
        i iVarA = i.a(this.f7809a);
        CustomSplashAdapter customSplashAdapter = this.f7809a;
        if (customSplashAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customSplashAdapter.getTrackingInfo();
            com.tkay.core.common.k.a.a(m.a().f()).a(4, trackingInfo, this.f7809a.getUnitGroupInfo());
            com.tkay.core.common.l.g.a(trackingInfo, f.i.c, f.i.l, "");
            TYSplashSkipInfo splashSkipInfo = this.f7809a.getSplashSkipInfo();
            if (splashSkipInfo != null && splashSkipInfo.canUseCustomSkipView() && this.f7809a.isSupportCustomSkipView() && this.d == null) {
                long callbackInterval = splashSkipInfo.getCallbackInterval();
                long countDownDuration = splashSkipInfo.getCountDownDuration();
                ViewGroup container = splashSkipInfo.getContainer();
                f.b bVar = new f.b();
                TYSplashSkipAdListener tYSplashSkipAdListener = splashSkipInfo.getTYSplashSkipAdListener();
                this.c = countDownDuration;
                Timer timer = new Timer();
                this.d = timer;
                timer.schedule(new AnonymousClass1(container, bVar, tYSplashSkipAdListener, countDownDuration, callbackInterval), callbackInterval, callbackInterval);
                m.a().a(new AnonymousClass2(tYSplashSkipAdListener, countDownDuration, callbackInterval));
            }
            if (trackingInfo != null) {
                v.a().a(trackingInfo.W(), iVarA);
            }
        }
        a aVar = this.b;
        if (aVar != null) {
            aVar.onAdShow(iVarA);
        }
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashEventListener
    public final void onSplashAdClicked() {
        CustomSplashAdapter customSplashAdapter = this.f7809a;
        if (customSplashAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customSplashAdapter.getTrackingInfo();
            com.tkay.core.common.k.a.a(m.a().f()).a(6, trackingInfo);
            com.tkay.core.common.l.g.a(trackingInfo, f.i.d, f.i.l, "");
        }
        a aVar = this.b;
        if (aVar != null) {
            aVar.onAdClick(i.a(this.f7809a));
        }
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashEventListener
    public final void onSplashAdDismiss() {
        com.tkay.core.common.f.c cVarC;
        Timer timer = this.d;
        if (timer != null) {
            timer.cancel();
        }
        CustomSplashAdapter customSplashAdapter = this.f7809a;
        if (customSplashAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customSplashAdapter.getTrackingInfo();
            int dismissType = this.f;
            if (dismissType != 0) {
                trackingInfo.y(dismissType);
            } else {
                dismissType = this.f7809a.getDismissType();
                if (dismissType == 0) {
                    dismissType = 1;
                }
                trackingInfo.y(dismissType);
            }
            com.tkay.core.common.k.c.a(trackingInfo, false);
            TYSplashSkipInfo splashSkipInfo = this.f7809a.getSplashSkipInfo();
            if (splashSkipInfo != null && splashSkipInfo.canUseCustomSkipView()) {
                this.f7809a.startSplashCustomSkipViewClickEye();
                Timer timer2 = this.d;
                if (timer2 != null) {
                    timer2.cancel();
                    this.d = null;
                }
                splashSkipInfo.destroy();
                this.f7809a.setSplashSkipInfo(null);
            }
            com.tkay.core.common.l.g.a(trackingInfo, f.i.e, f.i.l, "");
            String strW = trackingInfo.W();
            if (!TextUtils.isEmpty(strW) && (cVarC = v.a().c(strW)) != null) {
                v.a().d(strW);
                c.a(m.a().f(), strW).d(v.a().b(strW, cVarC.a()));
            }
            CustomSplashAdapter customSplashAdapter2 = this.f7809a;
            ITYSplashEyeAd splashEyeAd = customSplashAdapter2 instanceof CustomSplashAdapter ? customSplashAdapter2.getSplashEyeAd() : null;
            a aVar = this.b;
            if (aVar != null && !this.e) {
                this.e = true;
                aVar.onCallbackAdDismiss(i.a(trackingInfo, this.f7809a), new TYSplashAdExtraInfo(dismissType, splashEyeAd));
            }
            if (splashEyeAd == null) {
                CustomSplashAdapter customSplashAdapter3 = this.f7809a;
                if (customSplashAdapter3 != null) {
                    customSplashAdapter3.cleanImpressionListener();
                }
                CustomSplashAdapter customSplashAdapter4 = this.f7809a;
                if (customSplashAdapter4 != null) {
                    customSplashAdapter4.destory();
                }
            }
        }
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashEventListener
    public final void onDeeplinkCallback(boolean z) {
        a aVar = this.b;
        if (aVar != null) {
            aVar.onDeeplinkCallback(i.a(this.f7809a), z);
        }
        CustomSplashAdapter customSplashAdapter = this.f7809a;
        if (customSplashAdapter != null) {
            com.tkay.core.common.l.g.a(customSplashAdapter.getTrackingInfo(), f.i.i, z ? f.i.l : f.i.m, "");
        }
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashEventListener
    public final void onDownloadConfirm(Context context, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
        a aVar = this.b;
        if (aVar != null) {
            aVar.onDownloadConfirm(context, i.a(this.f7809a), tYNetworkConfirmInfo);
        }
        CustomSplashAdapter customSplashAdapter = this.f7809a;
        if (customSplashAdapter != null) {
            com.tkay.core.common.l.g.a(customSplashAdapter.getTrackingInfo(), f.i.j, f.i.l, "");
        }
    }

    @Override // com.tkay.splashad.unitgroup.api.CustomSplashEventListener
    public final void onSplashAdShowFail(AdError adError) {
        CustomSplashAdapter customSplashAdapter = this.f7809a;
        if (customSplashAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customSplashAdapter.getTrackingInfo();
            com.tkay.core.common.k.c.a(trackingInfo, adError, this.f7809a.getNetworkInfoMap());
            com.tkay.core.common.l.g.a(trackingInfo, f.i.k, f.i.m, adError != null ? adError.getFullErrorInfo() : "");
        }
    }

    private void a(TYSplashSkipInfo tYSplashSkipInfo) {
        if (this.d == null) {
            long callbackInterval = tYSplashSkipInfo.getCallbackInterval();
            long countDownDuration = tYSplashSkipInfo.getCountDownDuration();
            ViewGroup container = tYSplashSkipInfo.getContainer();
            f.b bVar = new f.b();
            TYSplashSkipAdListener tYSplashSkipAdListener = tYSplashSkipInfo.getTYSplashSkipAdListener();
            this.c = countDownDuration;
            Timer timer = new Timer();
            this.d = timer;
            timer.schedule(new AnonymousClass1(container, bVar, tYSplashSkipAdListener, countDownDuration, callbackInterval), callbackInterval, callbackInterval);
            m.a().a(new AnonymousClass2(tYSplashSkipAdListener, countDownDuration, callbackInterval));
        }
    }

    /* JADX INFO: renamed from: com.tkay.splashad.a.f$1, reason: invalid class name */
    final class AnonymousClass1 extends TimerTask {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ ViewGroup f7810a;
        final /* synthetic */ f.b b;
        final /* synthetic */ TYSplashSkipAdListener c;
        final /* synthetic */ long d;
        final /* synthetic */ long e;

        AnonymousClass1(ViewGroup viewGroup, f.b bVar, TYSplashSkipAdListener tYSplashSkipAdListener, long j, long j2) {
            this.f7810a = viewGroup;
            this.b = bVar;
            this.c = tYSplashSkipAdListener;
            this.d = j;
            this.e = j2;
        }

        @Override // java.util.TimerTask, java.lang.Runnable
        public final void run() {
            ViewGroup viewGroup = this.f7810a;
            if (viewGroup == null || u.a(viewGroup, this.b)) {
                m.a().a(new Runnable() { // from class: com.tkay.splashad.a.f.1.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        if (f.this.c <= 0) {
                            f.this.a(3);
                            f.this.onSplashAdDismiss();
                        } else if (AnonymousClass1.this.c != null) {
                            AnonymousClass1.this.c.onAdTick(AnonymousClass1.this.d, f.this.c);
                        }
                        f.this.c -= AnonymousClass1.this.e;
                    }
                });
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.splashad.a.f$2, reason: invalid class name */
    final class AnonymousClass2 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ TYSplashSkipAdListener f7812a;
        final /* synthetic */ long b;
        final /* synthetic */ long c;

        AnonymousClass2(TYSplashSkipAdListener tYSplashSkipAdListener, long j, long j2) {
            this.f7812a = tYSplashSkipAdListener;
            this.b = j;
            this.c = j2;
        }

        @Override // java.lang.Runnable
        public final void run() {
            TYSplashSkipAdListener tYSplashSkipAdListener = this.f7812a;
            if (tYSplashSkipAdListener != null) {
                tYSplashSkipAdListener.onAdTick(this.b, f.this.c);
                f.this.c -= this.c;
            }
        }
    }

    private void a() {
        Timer timer = this.d;
        if (timer != null) {
            timer.cancel();
            this.d = null;
        }
    }

    final void a(int i) {
        this.f = i;
    }

    private static void a(String str) {
        com.tkay.core.common.f.c cVarC;
        if (TextUtils.isEmpty(str) || (cVarC = v.a().c(str)) == null) {
            return;
        }
        v.a().d(str);
        c.a(m.a().f(), str).d(v.a().b(str, cVarC.a()));
    }
}
