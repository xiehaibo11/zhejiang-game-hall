package com.tkay.rewardvideo.a;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.api.TYAdStatusInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.i;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.g;
import com.tkay.core.common.v;
import com.tkay.rewardvideo.api.TYRewardVideoExListener;
import com.tkay.rewardvideo.api.TYRewardVideoListener;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardVideoAdapter;
import com.tkay.rewardvideo.unitgroup.api.CustomRewardedVideoEventListener;
import java.util.Map;

public final class e implements CustomRewardedVideoEventListener {
    long b;
    boolean c;
    com.tkay.core.common.f.d d;
    boolean e;
    long f;
    long g;
    private TYRewardVideoListener j;
    private CustomRewardVideoAdapter k;
    private com.tkay.core.common.g.c l;
    private long m;
    private long n;
    int h = 0;
    long a = 0;
    boolean i = true;

    public e(CustomRewardVideoAdapter customRewardVideoAdapter, com.tkay.core.common.g.c cVar, TYRewardVideoListener tYRewardVideoListener) {
        this.j = tYRewardVideoListener;
        this.k = customRewardVideoAdapter;
        this.l = cVar;
    }

    @Override
    public final void onRewardedVideoAdPlayStart() {
        TYRewardVideoListener tYRewardVideoListener;
        String strW;
        this.a = System.currentTimeMillis();
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        this.b = jElapsedRealtime;
        if (this.m == 0) {
            this.m = jElapsedRealtime;
        }
        i iVarA = i.a(this.k);
        CustomRewardVideoAdapter customRewardVideoAdapter = this.k;
        if (customRewardVideoAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customRewardVideoAdapter.getTrackingInfo();
            a(trackingInfo);
            if (trackingInfo != null) {
                strW = trackingInfo.W();
                v.a().a(strW, iVarA);
            } else {
                strW = "";
            }
            if (!TextUtils.isEmpty(strW)) {
                a aVarA = a.a(m.a().D(), strW);
                if (aVarA.a((TYAdStatusInfo) null)) {
                    aVarA.a(m.a().D(), 6, (com.tkay.core.common.b.a) null, (com.tkay.core.common.b.b) null, (Map<String, Object>) null);
                }
            }
        }
        if (!this.i || (tYRewardVideoListener = this.j) == null) {
            return;
        }
        tYRewardVideoListener.onRewardedVideoAdPlayStart(iVarA);
    }

    @Override
    public final void onRewardedVideoAdPlayEnd() {
        if (this.n == 0) {
            this.n = SystemClock.elapsedRealtime();
        }
        CustomRewardVideoAdapter customRewardVideoAdapter = this.k;
        if (customRewardVideoAdapter != null) {
            if (customRewardVideoAdapter.getDismissType() == 0) {
                this.h = 3;
            }
            b(this.k.getTrackingInfo());
        }
        TYRewardVideoListener tYRewardVideoListener = this.j;
        if (tYRewardVideoListener != null) {
            tYRewardVideoListener.onRewardedVideoAdPlayEnd(i.a(this.k));
        }
    }

    @Override
    public final void onRewardedVideoAdPlayFailed(String str, String str2) {
        this.h = 99;
        AdError errorCode = ErrorCode.getErrorCode(ErrorCode.adShowError, str, str2);
        CustomRewardVideoAdapter customRewardVideoAdapter = this.k;
        if (customRewardVideoAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customRewardVideoAdapter.getTrackingInfo();
            if (trackingInfo.H() == 66) {
                this.i = false;
            }
            String strW = trackingInfo.W();
            a(errorCode, trackingInfo);
            if (trackingInfo != null) {
                a(trackingInfo.W());
            }
            if (!TextUtils.isEmpty(strW)) {
                a aVarA = a.a(m.a().D(), strW);
                if (aVarA.a((TYAdStatusInfo) null)) {
                    aVarA.a(m.a().D(), 7, (com.tkay.core.common.b.a) null, (com.tkay.core.common.b.b) null, (Map<String, Object>) null);
                }
            }
        }
        TYRewardVideoListener tYRewardVideoListener = this.j;
        if (tYRewardVideoListener != null) {
            tYRewardVideoListener.onRewardedVideoAdPlayFailed(errorCode, i.a(this.k));
        }
    }

    @Override
    public final void onRewardedVideoAdClosed() {
        CustomRewardVideoAdapter customRewardVideoAdapter = this.k;
        if (customRewardVideoAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customRewardVideoAdapter.getTrackingInfo();
            int dismissType = this.h;
            if (dismissType == 0) {
                dismissType = this.k.getDismissType();
            }
            if (dismissType == 0) {
                dismissType = 1;
            }
            trackingInfo.y(dismissType);
            g.a(trackingInfo, f.i.e, f.i.l, "");
            long j = this.a;
            if (j != 0) {
                com.tkay.core.common.k.c.a(trackingInfo, this.c, j, System.currentTimeMillis(), SystemClock.elapsedRealtime() - this.b);
            }
            com.tkay.core.common.k.c.a(trackingInfo, this.c);
            if (this.c) {
                try {
                    this.k.clearImpressionListener();
                    this.k.destory();
                } catch (Throwable unused) {
                }
            } else {
                m.a().a(new Runnable() {
                    @Override
                    public final void run() {
                        try {
                            e.this.k.clearImpressionListener();
                            e.this.k.destory();
                        } catch (Throwable unused2) {
                        }
                    }
                }, 5000L);
            }
            if (trackingInfo != null) {
                a(trackingInfo.W());
            }
            TYRewardVideoListener tYRewardVideoListener = this.j;
            if (tYRewardVideoListener != null) {
                tYRewardVideoListener.onRewardedVideoAdClosed(i.a(trackingInfo, this.k));
            }
        }
    }

    @Override
    public final void onRewardedVideoAdPlayClicked() {
        CustomRewardVideoAdapter customRewardVideoAdapter = this.k;
        if (customRewardVideoAdapter != null) {
            c(customRewardVideoAdapter.getTrackingInfo());
        }
        TYRewardVideoListener tYRewardVideoListener = this.j;
        if (tYRewardVideoListener != null) {
            tYRewardVideoListener.onRewardedVideoAdPlayClicked(i.a(this.k));
        }
    }

    @Override
    public final void onReward() {
        com.tkay.core.common.g.c cVar;
        if (!this.c && (cVar = this.l) != null) {
            long j = this.m;
            long j2 = this.n;
            CustomRewardVideoAdapter customRewardVideoAdapter = this.k;
            cVar.a(j, j2, customRewardVideoAdapter, customRewardVideoAdapter.getTrackingInfo());
        }
        this.c = true;
        TYRewardVideoListener tYRewardVideoListener = this.j;
        if (tYRewardVideoListener != null) {
            tYRewardVideoListener.onReward(i.a(this.k));
        }
        CustomRewardVideoAdapter customRewardVideoAdapter2 = this.k;
        if (customRewardVideoAdapter2 != null) {
            g.a(customRewardVideoAdapter2.getTrackingInfo(), f.i.h, f.i.l, "");
        }
    }

    @Override
    public final void onDeeplinkCallback(boolean z) {
        TYRewardVideoListener tYRewardVideoListener = this.j;
        if (tYRewardVideoListener != null && (tYRewardVideoListener instanceof TYRewardVideoExListener)) {
            ((TYRewardVideoExListener) tYRewardVideoListener).onDeeplinkCallback(i.a(this.k), z);
        }
        CustomRewardVideoAdapter customRewardVideoAdapter = this.k;
        if (customRewardVideoAdapter != null) {
            g.a(customRewardVideoAdapter.getTrackingInfo(), f.i.i, z ? f.i.l : f.i.m, "");
        }
    }

    @Override
    public final void onDownloadConfirm(Context context, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
        TYRewardVideoListener tYRewardVideoListener = this.j;
        if (tYRewardVideoListener != null && (tYRewardVideoListener instanceof TYRewardVideoExListener)) {
            ((TYRewardVideoExListener) tYRewardVideoListener).onDownloadConfirm(context, i.a(this.k), tYNetworkConfirmInfo);
        }
        CustomRewardVideoAdapter customRewardVideoAdapter = this.k;
        if (customRewardVideoAdapter != null) {
            g.a(customRewardVideoAdapter.getTrackingInfo(), f.i.j, f.i.l, "");
        }
    }

    @Override
    public final void onRewardedVideoAdAgainPlayStart() {
        this.h = 0;
        if (this.f == 0) {
            this.f = SystemClock.elapsedRealtime();
        }
        this.g = 0L;
        com.tkay.core.common.f.d dVarA = a();
        if (this.k != null && dVarA != null) {
            com.tkay.core.common.k.a.a(m.a().f()).a(13, dVarA, this.k.getUnitGroupInfo());
            a(dVarA);
        }
        TYRewardVideoListener tYRewardVideoListener = this.j;
        if (tYRewardVideoListener == null || !(tYRewardVideoListener instanceof TYRewardVideoExListener)) {
            return;
        }
        ((TYRewardVideoExListener) tYRewardVideoListener).onRewardedVideoAdAgainPlayStart(i.a(dVarA, this.k));
    }

    @Override
    public final void onRewardedVideoAdAgainPlayEnd() {
        if (this.g == 0) {
            this.g = SystemClock.elapsedRealtime();
        }
        com.tkay.core.common.f.d dVarA = a();
        if (this.k != null && dVarA != null) {
            b(dVarA);
        }
        TYRewardVideoListener tYRewardVideoListener = this.j;
        if (tYRewardVideoListener == null || !(tYRewardVideoListener instanceof TYRewardVideoExListener)) {
            return;
        }
        ((TYRewardVideoExListener) tYRewardVideoListener).onRewardedVideoAdAgainPlayEnd(i.a(dVarA, this.k));
    }

    @Override
    public final void onRewardedVideoAdAgainPlayFailed(String str, String str2) {
        this.h = 99;
        AdError errorCode = ErrorCode.getErrorCode(ErrorCode.adShowError, str, str2);
        com.tkay.core.common.f.d dVarA = a();
        if (this.k != null && dVarA != null) {
            a(errorCode, dVarA);
        }
        TYRewardVideoListener tYRewardVideoListener = this.j;
        if (tYRewardVideoListener == null || !(tYRewardVideoListener instanceof TYRewardVideoExListener)) {
            return;
        }
        ((TYRewardVideoExListener) tYRewardVideoListener).onRewardedVideoAdAgainPlayFailed(errorCode, i.a(dVarA, this.k));
    }

    @Override
    public final void onRewardedVideoAdAgainPlayClicked() {
        com.tkay.core.common.f.d dVarA = a();
        if (this.k != null && dVarA != null) {
            c(dVarA);
        }
        TYRewardVideoListener tYRewardVideoListener = this.j;
        if (tYRewardVideoListener == null || !(tYRewardVideoListener instanceof TYRewardVideoExListener)) {
            return;
        }
        ((TYRewardVideoExListener) tYRewardVideoListener).onRewardedVideoAdAgainPlayClicked(i.a(dVarA, this.k));
    }

    @Override
    public final void onAgainReward() {
        com.tkay.core.common.g.c cVar;
        com.tkay.core.common.f.d dVarA = a();
        if (!this.e && (cVar = this.l) != null) {
            cVar.a(this.f, this.g, this.k, dVarA);
        }
        this.e = true;
        TYRewardVideoListener tYRewardVideoListener = this.j;
        if (tYRewardVideoListener == null || !(tYRewardVideoListener instanceof TYRewardVideoExListener)) {
            return;
        }
        ((TYRewardVideoExListener) tYRewardVideoListener).onAgainReward(i.a(dVarA, this.k));
    }

    private com.tkay.core.common.f.d a() {
        CustomRewardVideoAdapter customRewardVideoAdapter;
        if (this.d == null && (customRewardVideoAdapter = this.k) != null) {
            com.tkay.core.common.f.d dVarN = customRewardVideoAdapter.getTrackingInfo().N();
            this.d = dVarN;
            dVarN.q = 6;
            this.d.h(g.b(this.d.X(), this.d.x(), System.currentTimeMillis()));
        }
        return this.d;
    }

    private void a(com.tkay.core.common.f.d dVar) {
        String ilrd = this.k.getILRD();
        if (!TextUtils.isEmpty(ilrd)) {
            dVar.a(ilrd);
        }
        if (this.i) {
            com.tkay.core.common.k.a.a(m.a().f()).a(8, dVar);
        }
        com.tkay.core.common.k.a.a(m.a().f()).a(4, dVar, this.k.getUnitGroupInfo());
        g.a(dVar, f.i.c, f.i.l, "");
    }

    private void a(AdError adError, com.tkay.core.common.f.d dVar) {
        g.a(dVar, f.i.c, f.i.m, adError.printStackTrace());
        CustomRewardVideoAdapter customRewardVideoAdapter = this.k;
        com.tkay.core.common.k.c.a(dVar, adError, customRewardVideoAdapter != null ? customRewardVideoAdapter.getNetworkInfoMap() : null);
    }

    private static void b(com.tkay.core.common.f.d dVar) {
        g.a(dVar, f.i.f, f.i.l, "");
        com.tkay.core.common.k.a.a(m.a().f()).a(9, dVar);
    }

    private static void c(com.tkay.core.common.f.d dVar) {
        com.tkay.core.common.k.a.a(m.a().f()).a(6, dVar);
        g.a(dVar, f.i.d, f.i.l, "");
    }

    private void d(com.tkay.core.common.f.d dVar) {
        com.tkay.core.common.k.a.a(m.a().f()).a(13, dVar, this.k.getUnitGroupInfo());
        a(dVar);
    }

    private static void a(String str) {
        com.tkay.core.common.f.c cVarC;
        if (TextUtils.isEmpty(str) || (cVarC = v.a().c(str)) == null) {
            return;
        }
        v.a().d(str);
        a.a(m.a().f(), str).d(v.a().b(str, cVarC.a()));
    }
}
