package com.tkay.interstitial.a;

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
import com.tkay.interstitial.api.TYInterstitialExListener;
import com.tkay.interstitial.api.TYInterstitialListener;
import com.tkay.interstitial.unitgroup.api.CustomInterstitialAdapter;
import com.tkay.interstitial.unitgroup.api.CustomInterstitialEventListener;
import java.util.Map;

public final class d implements CustomInterstitialEventListener {
    TYInterstitialListener a;
    CustomInterstitialAdapter b;
    long c;
    long d;
    int e = 0;
    boolean f = true;

    public d(CustomInterstitialAdapter customInterstitialAdapter, TYInterstitialListener tYInterstitialListener) {
        this.a = tYInterstitialListener;
        this.b = customInterstitialAdapter;
    }

    @Override
    public final void onInterstitialAdVideoStart() {
        CustomInterstitialAdapter customInterstitialAdapter = this.b;
        if (customInterstitialAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customInterstitialAdapter.getTrackingInfo();
            if (this.f) {
                com.tkay.core.common.k.a.a(m.a().f()).a(8, trackingInfo);
                TYInterstitialListener tYInterstitialListener = this.a;
                if (tYInterstitialListener != null) {
                    tYInterstitialListener.onInterstitialAdVideoStart(i.a(this.b));
                }
            }
        }
    }

    @Override
    public final void onInterstitialAdVideoEnd() {
        CustomInterstitialAdapter customInterstitialAdapter = this.b;
        if (customInterstitialAdapter != null) {
            if (customInterstitialAdapter.getDismissType() == 0) {
                this.e = 3;
            }
            com.tkay.core.common.f.d trackingInfo = this.b.getTrackingInfo();
            com.tkay.core.common.k.a.a(m.a().f()).a(9, trackingInfo);
            TYInterstitialListener tYInterstitialListener = this.a;
            if (tYInterstitialListener != null) {
                tYInterstitialListener.onInterstitialAdVideoEnd(i.a(this.b));
            }
            g.a(trackingInfo, f.i.f, f.i.l, "");
        }
    }

    @Override
    public final void onInterstitialAdVideoError(String str, String str2) {
        String strW;
        this.e = 99;
        AdError errorCode = ErrorCode.getErrorCode(ErrorCode.adShowError, str, str2);
        CustomInterstitialAdapter customInterstitialAdapter = this.b;
        if (customInterstitialAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customInterstitialAdapter.getTrackingInfo();
            if (trackingInfo.H() == 66) {
                this.f = false;
            }
            com.tkay.core.common.k.c.a(trackingInfo, errorCode, this.b.getNetworkInfoMap());
            if (trackingInfo != null) {
                strW = trackingInfo.W();
                a(trackingInfo.W());
            } else {
                strW = "";
            }
            if (!TextUtils.isEmpty(strW)) {
                a aVarA = a.a(m.a().D(), strW);
                if (aVarA.a((TYAdStatusInfo) null)) {
                    aVarA.a(m.a().D(), 7, (com.tkay.core.common.b.a) null, (com.tkay.core.common.b.b) null, (Map<String, Object>) null);
                }
            }
            g.a(trackingInfo, f.i.g, f.i.m, str2);
        }
        TYInterstitialListener tYInterstitialListener = this.a;
        if (tYInterstitialListener != null) {
            tYInterstitialListener.onInterstitialAdVideoError(errorCode);
        }
    }

    @Override
    public final void onInterstitialAdClose() {
        CustomInterstitialAdapter customInterstitialAdapter = this.b;
        if (customInterstitialAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customInterstitialAdapter.getTrackingInfo();
            int dismissType = this.e;
            if (dismissType == 0) {
                dismissType = this.b.getDismissType();
            }
            if (dismissType == 0) {
                dismissType = 1;
            }
            trackingInfo.y(dismissType);
            g.a(trackingInfo, f.i.e, f.i.l, "");
            long j = this.c;
            if (j != 0) {
                com.tkay.core.common.k.c.a(trackingInfo, false, j, System.currentTimeMillis(), SystemClock.elapsedRealtime() - this.d);
            }
            com.tkay.core.common.k.c.a(trackingInfo, false);
            try {
                this.b.clearImpressionListener();
                this.b.destory();
            } catch (Throwable unused) {
            }
            TYInterstitialListener tYInterstitialListener = this.a;
            if (tYInterstitialListener != null) {
                tYInterstitialListener.onInterstitialAdClose(i.a(trackingInfo, this.b));
            }
            if (trackingInfo != null) {
                a(trackingInfo.W());
            }
        }
    }

    @Override
    public final void onInterstitialAdClicked() {
        CustomInterstitialAdapter customInterstitialAdapter = this.b;
        if (customInterstitialAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customInterstitialAdapter.getTrackingInfo();
            g.a(trackingInfo, f.i.d, f.i.l, "");
            com.tkay.core.common.k.a.a(m.a().f()).a(6, trackingInfo);
        }
        TYInterstitialListener tYInterstitialListener = this.a;
        if (tYInterstitialListener != null) {
            tYInterstitialListener.onInterstitialAdClicked(i.a(this.b));
        }
    }

    @Override
    public final void onInterstitialAdShow() {
        this.c = System.currentTimeMillis();
        this.d = SystemClock.elapsedRealtime();
        i iVarA = i.a(this.b);
        CustomInterstitialAdapter customInterstitialAdapter = this.b;
        if (customInterstitialAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customInterstitialAdapter.getTrackingInfo();
            String ilrd = this.b.getILRD();
            if (!TextUtils.isEmpty(ilrd)) {
                trackingInfo.a(ilrd);
            }
            String strW = "";
            g.a(trackingInfo, f.i.c, f.i.l, "");
            com.tkay.core.common.k.a.a(m.a().f()).a(4, trackingInfo, this.b.getUnitGroupInfo());
            if (trackingInfo != null) {
                strW = trackingInfo.W();
                v.a().a(strW, iVarA);
            }
            if (!TextUtils.isEmpty(strW)) {
                a aVarA = a.a(m.a().D(), strW);
                if (aVarA.a((TYAdStatusInfo) null)) {
                    aVarA.a(m.a().D(), 6, (com.tkay.core.common.b.a) null, (com.tkay.core.common.b.b) null, (Map<String, Object>) null);
                }
            }
        }
        TYInterstitialListener tYInterstitialListener = this.a;
        if (tYInterstitialListener != null) {
            tYInterstitialListener.onInterstitialAdShow(iVarA);
        }
    }

    @Override
    public final void onDeeplinkCallback(boolean z) {
        TYInterstitialListener tYInterstitialListener = this.a;
        if (tYInterstitialListener != null && (tYInterstitialListener instanceof TYInterstitialExListener)) {
            ((TYInterstitialExListener) tYInterstitialListener).onDeeplinkCallback(i.a(this.b), z);
        }
        CustomInterstitialAdapter customInterstitialAdapter = this.b;
        if (customInterstitialAdapter != null) {
            g.a(customInterstitialAdapter.getTrackingInfo(), f.i.i, z ? f.i.l : f.i.m, "");
        }
    }

    @Override
    public final void onDownloadConfirm(Context context, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
        TYInterstitialListener tYInterstitialListener = this.a;
        if (tYInterstitialListener != null && (tYInterstitialListener instanceof TYInterstitialExListener)) {
            ((TYInterstitialExListener) tYInterstitialListener).onDownloadConfirm(context, i.a(this.b), tYNetworkConfirmInfo);
        }
        CustomInterstitialAdapter customInterstitialAdapter = this.b;
        if (customInterstitialAdapter != null) {
            g.a(customInterstitialAdapter.getTrackingInfo(), f.i.j, f.i.l, "");
        }
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
