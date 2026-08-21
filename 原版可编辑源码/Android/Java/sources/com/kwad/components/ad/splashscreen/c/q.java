package com.kwad.components.ad.splashscreen.c;

import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.components.ad.splashscreen.widget.SkipView;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.utils.h;

public final class q extends e implements com.kwad.sdk.core.h.c {
    private SkipView DR;
    private ImageView gG;
    private AdInfo mAdInfo;
    private volatile boolean DP = false;
    private boolean DQ = false;
    private boolean CQ = false;
    private h.a gH = new h.a() {
        @Override
        public final void onAudioBeOccupied() {
            q.this.DP = false;
            if (q.this.gG != null) {
                q.this.gG.post(new Runnable() {
                    @Override
                    public final void run() {
                        if (q.this.CM.Cd != null) {
                            q.this.CM.Cd.setAudioEnabled(q.this.DP, false);
                        }
                        if (q.this.CM != null) {
                            AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(q.this.CM.mAdTemplate);
                            boolean z = q.this.DP;
                            AdInfo.AdSplashInfo adSplashInfo = adInfoCg.adSplashInfo;
                            String str = z ? adSplashInfo.speakerIconUrl : adSplashInfo.speakerMuteIconUrl;
                            if (TextUtils.isEmpty(str)) {
                                q.this.gG.setImageDrawable(q.this.getContext().getResources().getDrawable(R.drawable.ksad_splash_sound_selector));
                            } else {
                                KSImageLoader.loadImage(q.this.gG, str, q.this.CM.mAdTemplate);
                            }
                            q.this.gG.setSelected(false);
                        }
                    }
                });
            }
        }

        @Override
        public final void onAudioBeReleased() {
        }
    };
    private com.kwad.components.core.video.k DS = new com.kwad.components.core.video.k() {
        private boolean DV = false;
        private String DW = com.kwad.sdk.core.config.d.a(com.kwad.components.ad.splashscreen.b.a.Cw);

        @Override
        public final void onMediaPlayCompleted() {
            if (this.DV) {
                return;
            }
            q.this.CM.kG();
            this.DV = true;
        }

        @Override
        public final void onMediaPlayError(int i, int i2) {
            if (q.this.CQ) {
                return;
            }
            q.this.CM.g(0, "onMediaPlayError");
        }

        @Override
        public final void onMediaPlayPaused() {
        }

        @Override
        public final void onMediaPlayProgress(long j, final long j2) {
            q.this.CM.Y(((int) j2) / 1000);
            final int iMin = Math.min(q.this.mAdInfo.adSplashInfo.videoDisplaySecond, ((int) j) / 1000);
            final String str = this.DW;
            q qVar = q.this;
            if (q.a(qVar, qVar.mAdInfo)) {
                q.this.DR.post(new Runnable() {
                    @Override
                    public final void run() {
                        int i = (int) ((((long) (iMin * 1000)) - j2) / 1000);
                        if (i <= 0) {
                            i = 1;
                        }
                        q.this.DR.ad(str + i);
                    }
                });
            }
            float f = j2 / 1000.0f;
            if (iMin <= 0 || ((double) f) + 0.5d <= iMin - 1 || this.DV) {
                return;
            }
            q qVar2 = q.this;
            if (q.a(qVar2, qVar2.mAdInfo)) {
                q.this.CM.kG();
                this.DV = true;
            }
        }

        @Override
        public final void onMediaPlayStart() {
            if (q.this.CM.Cd != null) {
                q.this.CM.Cd.setAudioEnabled(q.this.DP, false);
            }
        }

        @Override
        public final void onMediaPlaying() {
            if (q.this.DQ) {
                return;
            }
            q.this.CM.kF();
            if (q.this.CM.Cd != null) {
                q.this.CM.Cd.ag(true);
                q.this.CM.Cd.setAudioEnabled(q.this.DP, true);
            }
            q.b(q.this, true);
        }

        @Override
        public final void onMediaPrepared() {
        }

        @Override
        public final void onMediaPreparing() {
        }

        @Override
        public final void onVideoPlayBufferingPaused() {
        }

        @Override
        public final void onVideoPlayBufferingPlaying() {
        }
    };

    private static void a(SkipView skipView, AdInfo adInfo) {
        skipView.setTimerBtnVisible(com.kwad.sdk.core.response.b.a.cj(adInfo));
    }

    static boolean a(q qVar, AdInfo adInfo) {
        return r(adInfo);
    }

    static boolean b(q qVar, boolean z) {
        qVar.DQ = true;
        return true;
    }

    private static boolean r(AdInfo adInfo) {
        return !com.kwad.sdk.core.response.b.a.cg(adInfo);
    }

    @Override
    public final void aK() {
    }

    @Override
    public final void aL() {
        if (this.CM.Cd != null) {
            this.CM.Cd.pause();
        }
    }

    @Override
    public final void ah() {
        super.ah();
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate);
        ((DetailVideoView) this.CM.mRootContainer.findViewById(R.id.ksad_splash_video_player)).setVisibility(0);
        if (this.CM.Cd != null) {
            this.CM.Cd.b(this.DS);
        }
        this.CM.Ce.a(this);
        this.DR = (SkipView) this.CM.p(this.mAdInfo).findViewById(R.id.ksad_splash_skip_view);
        if (r(this.mAdInfo)) {
            a(this.DR, this.mAdInfo);
        }
        int i = this.mAdInfo.adSplashInfo.mute;
        boolean z = true;
        if (i == 2) {
            this.DP = z;
        } else if (i != 3) {
            this.DP = false;
        } else {
            if (com.kwad.sdk.utils.k.bR(this.CM.mRootContainer.getContext()) <= 0) {
                z = false;
            }
            this.DP = z;
        }
        if (com.kwad.components.core.t.a.al(getContext()).qh()) {
            this.DP = false;
        }
        if (this.CM.Cd != null) {
            this.CM.Cd.setAudioEnabled(this.DP, false);
            this.CM.Cd.a(this.gH);
        }
        this.gG = (ImageView) this.CM.mRootContainer.findViewById(R.id.ksad_splash_sound);
        if (com.kwad.components.ad.splashscreen.f.c.v(this.mAdInfo)) {
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) this.gG.getLayoutParams();
            layoutParams.gravity = 51;
            this.gG.setLayoutParams(layoutParams);
            ViewGroup.LayoutParams layoutParams2 = this.gG.getLayoutParams();
            if (layoutParams2 instanceof ViewGroup.MarginLayoutParams) {
                ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) layoutParams2;
                marginLayoutParams.topMargin = com.kwad.sdk.d.a.a.a(this.gG.getContext(), 32.0f);
                marginLayoutParams.leftMargin = com.kwad.sdk.d.a.a.a(this.gG.getContext(), 16.0f);
            }
        }
        this.gG.setVisibility(0);
        String str = this.DP ? this.mAdInfo.adSplashInfo.speakerIconUrl : this.mAdInfo.adSplashInfo.speakerMuteIconUrl;
        if (TextUtils.isEmpty(str)) {
            this.gG.setImageDrawable(getContext().getResources().getDrawable(R.drawable.ksad_splash_sound_selector));
        } else {
            KSImageLoader.loadImage(this.gG, str, this.CM.mAdTemplate);
        }
        this.gG.setSelected(this.DP);
        this.gG.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                q.this.DP = !r4.DP;
                String str2 = q.this.DP ? q.this.mAdInfo.adSplashInfo.speakerIconUrl : q.this.mAdInfo.adSplashInfo.speakerMuteIconUrl;
                if (TextUtils.isEmpty(str2)) {
                    q.this.gG.setImageDrawable(q.this.getContext().getResources().getDrawable(R.drawable.ksad_splash_sound_selector));
                } else {
                    KSImageLoader.loadImage(q.this.gG, str2, q.this.CM.mAdTemplate);
                }
                q.this.gG.setSelected(q.this.DP);
                q.this.CM.Cd.setAudioEnabled(q.this.DP, true);
            }
        });
    }

    @Override
    public final void onDestroy() {
        super.onDestroy();
        this.CQ = true;
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        if (this.CM.Cd != null) {
            this.CM.Cd.a(this.DS);
            this.CM.Cd.b(this.gH);
        }
        if (this.DR.getHandler() != null) {
            this.DR.getHandler().removeCallbacksAndMessages(null);
        }
        this.CM.Ce.b(this);
    }
}
