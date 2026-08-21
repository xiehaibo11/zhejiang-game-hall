package com.tkay.interstitial.a;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.m;
import com.tkay.interstitial.api.TYInterstitialAutoEventListener;
import com.tkay.interstitial.api.TYInterstitialExListener;

public final class c implements TYInterstitialExListener {
    TYInterstitialAutoEventListener a;

    @Override
    public final void onInterstitialAdLoadFail(AdError adError) {
    }

    @Override
    public final void onInterstitialAdLoaded() {
    }

    protected c(TYInterstitialAutoEventListener tYInterstitialAutoEventListener) {
        this.a = tYInterstitialAutoEventListener;
    }

    @Override
    public final void onDeeplinkCallback(final TYAdInfo tYAdInfo, final boolean z) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onDeeplinkCallback(tYAdInfo, z);
                }
            }
        });
    }

    @Override
    public final void onDownloadConfirm(final Context context, final TYAdInfo tYAdInfo, final TYNetworkConfirmInfo tYNetworkConfirmInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    TYInterstitialAutoEventListener tYInterstitialAutoEventListener = c.this.a;
                    Context contextD = context;
                    if (contextD == null) {
                        contextD = m.a().D();
                    }
                    tYInterstitialAutoEventListener.onDownloadConfirm(contextD, tYAdInfo, tYNetworkConfirmInfo);
                }
            }
        });
    }

    @Override
    public final void onInterstitialAdVideoStart(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onInterstitialAdVideoStart(tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onInterstitialAdVideoEnd(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onInterstitialAdVideoEnd(tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onInterstitialAdVideoError(final AdError adError) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onInterstitialAdVideoError(adError);
                }
            }
        });
    }

    @Override
    public final void onInterstitialAdClose(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onInterstitialAdClose(tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onInterstitialAdClicked(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onInterstitialAdClicked(tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onInterstitialAdShow(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onInterstitialAdShow(tYAdInfo);
                }
            }
        });
    }
}
