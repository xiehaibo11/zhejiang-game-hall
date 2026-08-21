package com.tkay.interstitial.a;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.m;
import com.tkay.interstitial.api.TYInterstitialAutoEventListener;
import com.tkay.interstitial.api.TYInterstitialExListener;

/* JADX INFO: loaded from: classes3.dex */
public final class c implements TYInterstitialExListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    TYInterstitialAutoEventListener f7513a;

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public final void onInterstitialAdLoadFail(AdError adError) {
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public final void onInterstitialAdLoaded() {
    }

    protected c(TYInterstitialAutoEventListener tYInterstitialAutoEventListener) {
        this.f7513a = tYInterstitialAutoEventListener;
    }

    @Override // com.tkay.interstitial.api.TYInterstitialExListener
    public final void onDeeplinkCallback(final TYAdInfo tYAdInfo, final boolean z) {
        m.a().a(new Runnable() { // from class: com.tkay.interstitial.a.c.1
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7513a != null) {
                    c.this.f7513a.onDeeplinkCallback(tYAdInfo, z);
                }
            }
        });
    }

    @Override // com.tkay.interstitial.api.TYInterstitialExListener
    public final void onDownloadConfirm(final Context context, final TYAdInfo tYAdInfo, final TYNetworkConfirmInfo tYNetworkConfirmInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.interstitial.a.c.2
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7513a != null) {
                    TYInterstitialAutoEventListener tYInterstitialAutoEventListener = c.this.f7513a;
                    Context contextD = context;
                    if (contextD == null) {
                        contextD = m.a().D();
                    }
                    tYInterstitialAutoEventListener.onDownloadConfirm(contextD, tYAdInfo, tYNetworkConfirmInfo);
                }
            }
        });
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public final void onInterstitialAdVideoStart(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.interstitial.a.c.3
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7513a != null) {
                    c.this.f7513a.onInterstitialAdVideoStart(tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public final void onInterstitialAdVideoEnd(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.interstitial.a.c.4
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7513a != null) {
                    c.this.f7513a.onInterstitialAdVideoEnd(tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public final void onInterstitialAdVideoError(final AdError adError) {
        m.a().a(new Runnable() { // from class: com.tkay.interstitial.a.c.5
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7513a != null) {
                    c.this.f7513a.onInterstitialAdVideoError(adError);
                }
            }
        });
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public final void onInterstitialAdClose(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.interstitial.a.c.6
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7513a != null) {
                    c.this.f7513a.onInterstitialAdClose(tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public final void onInterstitialAdClicked(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.interstitial.a.c.7
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7513a != null) {
                    c.this.f7513a.onInterstitialAdClicked(tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.interstitial.api.TYInterstitialListener
    public final void onInterstitialAdShow(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.interstitial.a.c.8
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7513a != null) {
                    c.this.f7513a.onInterstitialAdShow(tYAdInfo);
                }
            }
        });
    }
}
