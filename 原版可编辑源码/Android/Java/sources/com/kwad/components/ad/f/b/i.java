package com.kwad.components.ad.f.b;

import android.view.View;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.video.DetailVideoView;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;

public final class i extends com.kwad.components.ad.f.a.a implements View.OnClickListener {
    private DetailVideoView mDetailVideoView;

    private void eR() {
        com.kwad.components.core.e.d.a.a(new a.a(this.mDetailVideoView.getContext()).P(this.mV.mAdTemplate).b(this.mV.mApkDownloadHelper).a(new a.b() {
            @Override
            public final void onAdClicked() {
                com.kwad.sdk.core.report.a.a(i.this.mV.mAdTemplate, 2, i.this.mV.mQ.getTouchCoords());
            }
        }));
    }

    private void notifyAdClick() {
        this.mV.mE.l(this.mDetailVideoView);
    }

    @Override
    public final void ah() {
        super.ah();
        this.mVideoPlayStateListener = new l() {
            @Override
            public final void onMediaPlayStart() {
                super.onMediaPlayStart();
                i.this.mDetailVideoView.setOnClickListener(i.this);
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
    }

    @Override
    public final void onClick(View view) {
        if (view == this.mDetailVideoView) {
            eR();
            notifyAdClick();
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.mDetailVideoView = (DetailVideoView) findViewById(R.id.ksad_video_player);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.mDetailVideoView.setOnClickListener(null);
    }
}
