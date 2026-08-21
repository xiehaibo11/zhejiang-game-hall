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

public final class f implements CustomSplashEventListener {
    CustomSplashAdapter a;
    a b;
    long c;
    private Timer d;
    private boolean e = false;
    private int f = 0;

    public f(CustomSplashAdapter customSplashAdapter, a aVar) {
        this.a = customSplashAdapter;
        this.b = aVar;
    }

    @Override
    public final void onSplashAdShow() {
        i iVarA = i.a(this.a);
        CustomSplashAdapter customSplashAdapter = this.a;
        if (customSplashAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customSplashAdapter.getTrackingInfo();
            com.tkay.core.common.k.a.a(m.a().f()).a(4, trackingInfo, this.a.getUnitGroupInfo());
            com.tkay.core.common.l.g.a(trackingInfo, f.i.c, f.i.l, "");
            TYSplashSkipInfo splashSkipInfo = this.a.getSplashSkipInfo();
            if (splashSkipInfo != null && splashSkipInfo.canUseCustomSkipView() && this.a.isSupportCustomSkipView() && this.d == null) {
                long callbackInterval = splashSkipInfo.getCallbackInterval();
                long countDownDuration = splashSkipInfo.getCountDownDuration();
                ViewGroup container = splashSkipInfo.getContainer();
                f.b bVar = new f.b();
                TYSplashSkipAdListener tYSplashSkipAdListener = splashSkipInfo.getTYSplashSkipAdListener();
                this.c = countDownDuration;
                Timer timer = new Timer();
                this.d = timer;
                timer.schedule(new 1(container, bVar, tYSplashSkipAdListener, countDownDuration, callbackInterval), callbackInterval, callbackInterval);
                m.a().a(new 2(tYSplashSkipAdListener, countDownDuration, callbackInterval));
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

    @Override
    public final void onSplashAdClicked() {
        CustomSplashAdapter customSplashAdapter = this.a;
        if (customSplashAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customSplashAdapter.getTrackingInfo();
            com.tkay.core.common.k.a.a(m.a().f()).a(6, trackingInfo);
            com.tkay.core.common.l.g.a(trackingInfo, f.i.d, f.i.l, "");
        }
        a aVar = this.b;
        if (aVar != null) {
            aVar.onAdClick(i.a(this.a));
        }
    }

    @Override
    public final void onSplashAdDismiss() {
        com.tkay.core.common.f.c cVarC;
        Timer timer = this.d;
        if (timer != null) {
            timer.cancel();
        }
        CustomSplashAdapter customSplashAdapter = this.a;
        if (customSplashAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customSplashAdapter.getTrackingInfo();
            int dismissType = this.f;
            if (dismissType != 0) {
                trackingInfo.y(dismissType);
            } else {
                dismissType = this.a.getDismissType();
                if (dismissType == 0) {
                    dismissType = 1;
                }
                trackingInfo.y(dismissType);
            }
            com.tkay.core.common.k.c.a(trackingInfo, false);
            TYSplashSkipInfo splashSkipInfo = this.a.getSplashSkipInfo();
            if (splashSkipInfo != null && splashSkipInfo.canUseCustomSkipView()) {
                this.a.startSplashCustomSkipViewClickEye();
                Timer timer2 = this.d;
                if (timer2 != null) {
                    timer2.cancel();
                    this.d = null;
                }
                splashSkipInfo.destroy();
                this.a.setSplashSkipInfo(null);
            }
            com.tkay.core.common.l.g.a(trackingInfo, f.i.e, f.i.l, "");
            String strW = trackingInfo.W();
            if (!TextUtils.isEmpty(strW) && (cVarC = v.a().c(strW)) != null) {
                v.a().d(strW);
                c.a(m.a().f(), strW).d(v.a().b(strW, cVarC.a()));
            }
            CustomSplashAdapter customSplashAdapter2 = this.a;
            ITYSplashEyeAd splashEyeAd = customSplashAdapter2 instanceof CustomSplashAdapter ? customSplashAdapter2.getSplashEyeAd() : null;
            a aVar = this.b;
            if (aVar != null && !this.e) {
                this.e = true;
                aVar.onCallbackAdDismiss(i.a(trackingInfo, this.a), new TYSplashAdExtraInfo(dismissType, splashEyeAd));
            }
            if (splashEyeAd == null) {
                CustomSplashAdapter customSplashAdapter3 = this.a;
                if (customSplashAdapter3 != null) {
                    customSplashAdapter3.cleanImpressionListener();
                }
                CustomSplashAdapter customSplashAdapter4 = this.a;
                if (customSplashAdapter4 != null) {
                    customSplashAdapter4.destory();
                }
            }
        }
    }

    @Override
    public final void onDeeplinkCallback(boolean z) {
        a aVar = this.b;
        if (aVar != null) {
            aVar.onDeeplinkCallback(i.a(this.a), z);
        }
        CustomSplashAdapter customSplashAdapter = this.a;
        if (customSplashAdapter != null) {
            com.tkay.core.common.l.g.a(customSplashAdapter.getTrackingInfo(), f.i.i, z ? f.i.l : f.i.m, "");
        }
    }

    @Override
    public final void onDownloadConfirm(Context context, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
        a aVar = this.b;
        if (aVar != null) {
            aVar.onDownloadConfirm(context, i.a(this.a), tYNetworkConfirmInfo);
        }
        CustomSplashAdapter customSplashAdapter = this.a;
        if (customSplashAdapter != null) {
            com.tkay.core.common.l.g.a(customSplashAdapter.getTrackingInfo(), f.i.j, f.i.l, "");
        }
    }

    @Override
    public final void onSplashAdShowFail(AdError adError) {
        CustomSplashAdapter customSplashAdapter = this.a;
        if (customSplashAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customSplashAdapter.getTrackingInfo();
            com.tkay.core.common.k.c.a(trackingInfo, adError, this.a.getNetworkInfoMap());
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
            timer.schedule(new 1(container, bVar, tYSplashSkipAdListener, countDownDuration, callbackInterval), callbackInterval, callbackInterval);
            m.a().a(new 2(tYSplashSkipAdListener, countDownDuration, callbackInterval));
        }
    }

    final class 1 extends TimerTask {
        final ViewGroup a;
        final f.b b;
        final TYSplashSkipAdListener c;
        final long d;
        final long e;

        1(ViewGroup viewGroup, f.b bVar, TYSplashSkipAdListener tYSplashSkipAdListener, long j, long j2) {
            this.a = viewGroup;
            this.b = bVar;
            this.c = tYSplashSkipAdListener;
            this.d = j;
            this.e = j2;
        }

        @Override
        public final void run() {
            ViewGroup viewGroup = this.a;
            if (viewGroup == null || u.a(viewGroup, this.b)) {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        if (f.this.c <= 0) {
                            f.this.a(3);
                            f.this.onSplashAdDismiss();
                        } else if (1.this.c != null) {
                            1.this.c.onAdTick(1.this.d, f.this.c);
                        }
                        f.this.c -= 1.this.e;
                    }
                });
            }
        }
    }

    final class 2 implements Runnable {
        final TYSplashSkipAdListener a;
        final long b;
        final long c;

        2(TYSplashSkipAdListener tYSplashSkipAdListener, long j, long j2) {
            this.a = tYSplashSkipAdListener;
            this.b = j;
            this.c = j2;
        }

        @Override
        public final void run() {
            TYSplashSkipAdListener tYSplashSkipAdListener = this.a;
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
