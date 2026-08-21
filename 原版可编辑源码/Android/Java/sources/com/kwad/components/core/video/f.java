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

    @Override
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

    @Override
    protected final void eP() {
        if (this.SQ) {
            super.eP();
        }
    }

    @Override
    protected final void onAttachedToWindow() {
        super.onAttachedToWindow();
        com.kwad.sdk.core.e.c.i("InterstitialVideoPlayerController", "onAttachedToWindow");
        qX();
        aa();
    }

    @Override
    protected final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        com.kwad.sdk.core.e.c.i("InterstitialVideoPlayerController", "onDetachedFromWindow");
        ab();
    }

    @Override
    public final void onFinishTemporaryDetach() {
        super.onFinishTemporaryDetach();
        com.kwad.sdk.core.e.c.i("InterstitialVideoPlayerController", "onFinishTemporaryDetach");
        aa();
    }

    @Override
    public final void onStartTemporaryDetach() {
        super.onStartTemporaryDetach();
        com.kwad.sdk.core.e.c.i("InterstitialVideoPlayerController", "onStartTemporaryDetach");
        ab();
    }

    @Override
    public final void onWindowFocusChanged(boolean z) {
        super.onWindowFocusChanged(z);
    }

    @Override
    protected final void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
    }

    @Override
    public final void qA() {
        super.qA();
    }

    @Override
    protected final void qs() {
        super.qs();
        if (this.na != null) {
            this.na.setImageResource(R.drawable.ksad_interstitial_video_play);
        }
        if (this.nb != null) {
            this.nb.setVisibility(8);
        }
    }

    @Override
    public final void qy() {
        super.qy();
    }

    @Override
    public final void release() {
        super.release();
        this.DV = true;
    }
}
