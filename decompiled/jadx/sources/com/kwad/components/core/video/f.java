package com.kwad.components.core.video;

import android.content.Context;
import android.os.Message;
import android.view.View;
import com.kwad.components.core.video.a;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.bm;
import com.kwad.sdk.utils.bn;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public final class f extends com.kwad.components.core.video.a implements bn.a {
    private boolean DV;
    private View SM;
    private final AtomicBoolean SN;
    private boolean SQ;
    private final bn gx;

    public interface a extends a.c {
        void onVideoPlayError(int i, int i2);
    }

    public f(Context context, AdTemplate adTemplate, com.kwad.sdk.core.video.videoview.c cVar) {
        super(context, adTemplate, cVar);
        this.gx = new bn(this);
        this.SN = new AtomicBoolean(true);
        this.DV = false;
        this.SQ = false;
        this.SM = this;
    }

    private void aa() {
        if (this.SN.getAndSet(false)) {
            com.kwad.sdk.core.e.c.i("InterstitialVideoPlayerController", "onViewAttached");
            this.gx.sendEmptyMessage(1);
        }
    }

    private void ab() {
        if (this.SN.getAndSet(true)) {
            return;
        }
        com.kwad.sdk.core.e.c.i("InterstitialVideoPlayerController", "onViewDetached");
        this.gx.removeCallbacksAndMessages(null);
        release();
    }

    private void qX() {
        this.DV = false;
    }

    @Override // com.kwad.sdk.utils.bn.a
    public final void a(Message message) {
        if (!this.DV && message.what == 1) {
            if (bm.o(this.SM, 70)) {
                qy();
            } else {
                qA();
            }
            this.gx.sendEmptyMessageDelayed(1, 500L);
        }
    }

    @Override // com.kwad.components.core.video.a
    protected final void eP() {
        if (this.SQ) {
            super.eP();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected final void onAttachedToWindow() {
        super.onAttachedToWindow();
        com.kwad.sdk.core.e.c.i("InterstitialVideoPlayerController", "onAttachedToWindow");
        qX();
        aa();
    }

    @Override // android.view.ViewGroup, android.view.View
    protected final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        com.kwad.sdk.core.e.c.i("InterstitialVideoPlayerController", "onDetachedFromWindow");
        ab();
    }

    @Override // android.view.View
    public final void onFinishTemporaryDetach() {
        super.onFinishTemporaryDetach();
        com.kwad.sdk.core.e.c.i("InterstitialVideoPlayerController", "onFinishTemporaryDetach");
        aa();
    }

    @Override // android.view.View
    public final void onStartTemporaryDetach() {
        super.onStartTemporaryDetach();
        com.kwad.sdk.core.e.c.i("InterstitialVideoPlayerController", "onStartTemporaryDetach");
        ab();
    }

    @Override // android.view.View
    public final void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
    }

    @Override // android.view.View
    protected final void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
    }

    @Override // com.kwad.components.core.video.a
    public final void qA() {
        super.qA();
    }

    @Override // com.kwad.components.core.video.a
    protected final void qs() {
        super.qs();
        if (this.na != null) {
            this.na.setImageResource(R.drawable.ksad_interstitial_video_play);
        }
        if (this.nb != null) {
            this.nb.setVisibility(8);
        }
    }

    @Override // com.kwad.components.core.video.a
    public final void qy() {
        super.qy();
    }

    @Override // com.kwad.components.core.video.a
    public final void release() {
        super.release();
        this.DV = true;
    }
}
