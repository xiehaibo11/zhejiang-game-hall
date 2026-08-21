package com.kwad.components.ad.reward.presenter.c;

import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import com.kwad.components.ad.reward.model.EcOrderCardStyle;
import com.kwad.components.ad.reward.n;
import com.kwad.components.core.t.b;
import com.kwad.components.core.video.i;
import com.kwad.components.core.video.l;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.ad.reward.presenter.a {
    private List<Integer> cr;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private l sr;
    private final i tS = new i();
    private long mPlayTime = 0;
    private Handler mHandler = new Handler(Looper.getMainLooper());
    private boolean tT = true;
    private volatile boolean cs = false;
    private Runnable tU = new Runnable() { // from class: com.kwad.components.ad.reward.presenter.c.a.1
        @Override // java.lang.Runnable
        public final void run() {
            if (a.this.tS.rd()) {
                long jElapsedRealtime = SystemClock.elapsedRealtime() - a.this.tS.rf();
                int iRg = a.this.tS.re().rg();
                a.this.qx.a(jElapsedRealtime, a.this.tS.re().rh(), iRg);
            } else if (a.this.tT) {
                a.this.qx.a(5000L, 5000L, 1);
            }
            com.kwad.components.core.o.a.pA().W(a.this.mAdTemplate);
        }
    };
    private l ss = new l() { // from class: com.kwad.components.ad.reward.presenter.c.a.2
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayCompleted() {
            super.onMediaPlayCompleted();
            a.this.hE();
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayPaused() {
            super.onMediaPlayPaused();
            a.this.tS.rc();
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            super.onMediaPlayProgress(j, j2);
            a.this.c(j2);
            a.this.mPlayTime = j2;
            a.this.tS.rc();
            a.a(a.this, false);
            if (a.this.cs) {
                return;
            }
            a.b(a.this, true);
            com.kwad.components.core.o.a.pA().a(a.this.mAdTemplate, System.currentTimeMillis(), 1);
            com.kwad.components.ad.reward.monitor.a.b(a.this.qx.pj, a.this.mAdTemplate, a.this.qx.mPageEnterTime);
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayStart() {
            super.onMediaPlayStart();
            a.this.hX();
        }
    };
    private l mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.reward.presenter.c.a.3
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayCompleted() {
            a.this.hE();
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayError(int i, int i2) {
            super.onMediaPlayError(i, i2);
            com.kwad.components.ad.reward.monitor.a.a(a.this.qx.pj, a.this.qx.mAdTemplate, a.this.qx.pF, i, i2);
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayPaused() {
            super.onMediaPlayPaused();
            a.this.tS.rc();
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            a.this.c(j2);
            a.this.mPlayTime = j2;
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayStart() {
            super.onMediaPlayStart();
            a.this.hX();
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlaying() {
            super.onMediaPlaying();
            a.this.tS.rc();
            a.a(a.this, false);
            if (a.this.cs) {
                return;
            }
            a.b(a.this, true);
            com.kwad.components.core.o.a.pA().a(a.this.mAdTemplate, System.currentTimeMillis(), 1);
            com.kwad.components.ad.reward.monitor.a.b(a.this.qx.pj, a.this.mAdTemplate, a.this.qx.mPageEnterTime);
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.k
        public final void onVideoPlayBufferingPaused() {
            super.onVideoPlayBufferingPaused();
            a.this.tS.rb();
            a.this.mHandler.removeCallbacks(a.this.tU);
            a.this.mHandler.postDelayed(a.this.tU, 5000L);
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.k
        public final void onVideoPlayBufferingPlaying() {
            super.onVideoPlayBufferingPlaying();
            a.this.tS.rb();
            a.this.mHandler.removeCallbacks(a.this.tU);
            a.this.mHandler.postDelayed(a.this.tU, 5000L);
        }
    };

    static /* synthetic */ boolean a(a aVar, boolean z) {
        aVar.tT = false;
        return false;
    }

    static /* synthetic */ boolean b(a aVar, boolean z) {
        aVar.cs = true;
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c(long j) {
        int iCeil = (int) Math.ceil(j / 1000.0f);
        List<Integer> list = this.cr;
        if (list == null || list.isEmpty()) {
            return;
        }
        for (Integer num : this.cr) {
            if (iCeil >= num.intValue()) {
                com.kwad.sdk.core.report.a.a(this.mAdTemplate, iCeil, this.qx.mReportExtData);
                this.cr.remove(num);
                return;
            }
        }
    }

    private void checkExposure() {
        long j = this.mAdInfo.adRewardInfo.callBackStrategyInfo.impressionCheckMs;
        if (j <= 0 || com.kwad.sdk.core.response.b.a.Y(this.mAdInfo) <= 5000) {
            return;
        }
        this.mHandler.postDelayed(new Runnable() { // from class: com.kwad.components.ad.reward.presenter.c.a.4
            @Override // java.lang.Runnable
            public final void run() {
                n.a(1, a.this.qx);
            }
        }, j);
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        AdTemplate adTemplate = this.qx.mAdTemplate;
        this.mAdTemplate = adTemplate;
        AdInfo adInfoCg = d.cg(adTemplate);
        this.mAdInfo = adInfoCg;
        this.cr = com.kwad.sdk.core.response.b.a.bd(adInfoCg);
        this.sr = this.qx.oV.jR() ? this.ss : this.mVideoPlayStateListener;
        this.qx.oV.a(this.sr);
        this.mHandler.postDelayed(this.tU, 5000L);
    }

    public final void hE() {
        if (!this.qx.pj || !this.qx.po) {
            com.kwad.sdk.core.report.a.h(this.mAdTemplate, this.qx.mReportExtData);
        }
        this.tS.rc();
    }

    public final void hX() {
        this.cs = false;
        EcOrderCardStyle ecOrderCardStyleCreateFromAdInfo = EcOrderCardStyle.createFromAdInfo(this.mAdInfo);
        j jVar = new j();
        if (ecOrderCardStyleCreateFromAdInfo != null) {
            z.a aVar = new z.a();
            aVar.asK = String.valueOf(ecOrderCardStyleCreateFromAdInfo.getValue());
            jVar.a(aVar);
        }
        if (!this.mAdTemplate.mPvReported) {
            checkExposure();
        }
        b.qj().a(this.mAdTemplate, null, jVar);
        com.kwad.sdk.core.report.a.g(this.mAdTemplate, this.qx.mReportExtData);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.mHandler.removeCallbacksAndMessages(null);
        this.qx.oV.b(this.sr);
        i.a aVarRe = this.tS.re();
        com.kwad.components.core.o.a.pA().a(this.qx.mAdTemplate, this.mPlayTime, aVarRe.rh(), aVarRe.rg());
    }
}
