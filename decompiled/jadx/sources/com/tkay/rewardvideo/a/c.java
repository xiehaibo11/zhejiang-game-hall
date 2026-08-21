package com.tkay.rewardvideo.a;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.m;
import com.tkay.rewardvideo.api.TYRewardVideoAutoEventListener;
import com.tkay.rewardvideo.api.TYRewardVideoExListener;

/* JADX INFO: loaded from: classes4.dex */
public final class c implements TYRewardVideoExListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    TYRewardVideoAutoEventListener f7778a;

    @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
    public final void onRewardedVideoAdFailed(AdError adError) {
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
    public final void onRewardedVideoAdLoaded() {
    }

    protected c(TYRewardVideoAutoEventListener tYRewardVideoAutoEventListener) {
        this.f7778a = tYRewardVideoAutoEventListener;
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
    public final void onDeeplinkCallback(final TYAdInfo tYAdInfo, final boolean z) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.1
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onDeeplinkCallback(tYAdInfo, z);
                }
            }
        });
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
    public final void onDownloadConfirm(final Context context, final TYAdInfo tYAdInfo, final TYNetworkConfirmInfo tYNetworkConfirmInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.6
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onDownloadConfirm(context, tYAdInfo, tYNetworkConfirmInfo);
                }
            }
        });
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
    public final void onRewardedVideoAdAgainPlayStart(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.7
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onRewardedVideoAdAgainPlayStart(tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
    public final void onRewardedVideoAdAgainPlayEnd(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.8
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onRewardedVideoAdAgainPlayEnd(tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
    public final void onRewardedVideoAdAgainPlayFailed(final AdError adError, final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.9
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onRewardedVideoAdAgainPlayFailed(adError, tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
    public final void onRewardedVideoAdAgainPlayClicked(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.10
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onRewardedVideoAdAgainPlayClicked(tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoExListener
    public final void onAgainReward(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.11
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onAgainReward(tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
    public final void onRewardedVideoAdPlayStart(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.12
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onRewardedVideoAdPlayStart(tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
    public final void onRewardedVideoAdPlayEnd(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.13
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onRewardedVideoAdPlayEnd(tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
    public final void onRewardedVideoAdPlayFailed(final AdError adError, final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.2
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onRewardedVideoAdPlayFailed(adError, tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
    public final void onRewardedVideoAdClosed(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.3
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onRewardedVideoAdClosed(tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
    public final void onRewardedVideoAdPlayClicked(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.4
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onRewardedVideoAdPlayClicked(tYAdInfo);
                }
            }
        });
    }

    @Override // com.tkay.rewardvideo.api.TYRewardVideoListener
    public final void onReward(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() { // from class: com.tkay.rewardvideo.a.c.5
            @Override // java.lang.Runnable
            public final void run() {
                if (c.this.f7778a != null) {
                    c.this.f7778a.onReward(tYAdInfo);
                }
            }
        });
    }
}
