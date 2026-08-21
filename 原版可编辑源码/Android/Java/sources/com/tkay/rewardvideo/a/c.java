package com.tkay.rewardvideo.a;

import android.content.Context;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.m;
import com.tkay.rewardvideo.api.TYRewardVideoAutoEventListener;
import com.tkay.rewardvideo.api.TYRewardVideoExListener;

public final class c implements TYRewardVideoExListener {
    TYRewardVideoAutoEventListener a;

    @Override
    public final void onRewardedVideoAdFailed(AdError adError) {
    }

    @Override
    public final void onRewardedVideoAdLoaded() {
    }

    protected c(TYRewardVideoAutoEventListener tYRewardVideoAutoEventListener) {
        this.a = tYRewardVideoAutoEventListener;
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
                    c.this.a.onDownloadConfirm(context, tYAdInfo, tYNetworkConfirmInfo);
                }
            }
        });
    }

    @Override
    public final void onRewardedVideoAdAgainPlayStart(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onRewardedVideoAdAgainPlayStart(tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onRewardedVideoAdAgainPlayEnd(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onRewardedVideoAdAgainPlayEnd(tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onRewardedVideoAdAgainPlayFailed(final AdError adError, final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onRewardedVideoAdAgainPlayFailed(adError, tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onRewardedVideoAdAgainPlayClicked(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onRewardedVideoAdAgainPlayClicked(tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onAgainReward(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onAgainReward(tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onRewardedVideoAdPlayStart(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onRewardedVideoAdPlayStart(tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onRewardedVideoAdPlayEnd(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onRewardedVideoAdPlayEnd(tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onRewardedVideoAdPlayFailed(final AdError adError, final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onRewardedVideoAdPlayFailed(adError, tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onRewardedVideoAdClosed(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onRewardedVideoAdClosed(tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onRewardedVideoAdPlayClicked(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onRewardedVideoAdPlayClicked(tYAdInfo);
                }
            }
        });
    }

    @Override
    public final void onReward(final TYAdInfo tYAdInfo) {
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                if (c.this.a != null) {
                    c.this.a.onReward(tYAdInfo);
                }
            }
        });
    }
}
