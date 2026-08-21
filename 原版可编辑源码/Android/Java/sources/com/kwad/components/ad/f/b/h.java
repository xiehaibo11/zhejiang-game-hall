package com.kwad.components.ad.f.b;

import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;

public final class h extends com.kwad.components.ad.f.a.a implements View.OnClickListener {
    private ViewGroup no;
    private TextView np;

    private void eP() {
        this.np.setText(com.kwad.sdk.core.response.b.a.aw(com.kwad.sdk.core.response.b.d.cg(this.mV.mAdTemplate)));
        this.no.setOnClickListener(this);
        this.no.setVisibility(0);
    }

    private void eR() {
        com.kwad.components.core.e.d.a.a(new a.a(this.no.getContext()).P(this.mV.mAdTemplate).ao(2).a(new a.b() {
            @Override
            public final void onAdClicked() {
                com.kwad.sdk.core.report.a.a(h.this.mV.mAdTemplate, 2, h.this.mV.mQ.getTouchCoords());
            }
        }));
    }

    private void notifyAdClick() {
        this.mV.mE.l(this.no);
    }

    @Override
    public final void ah() {
        super.ah();
        this.mVideoPlayStateListener = new l() {
            @Override
            public final void onMediaPlayCompleted() {
                h.this.eP();
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
        this.no.setVisibility(8);
    }

    @Override
    public final void onClick(View view) {
        eR();
        notifyAdClick();
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.no = (ViewGroup) findViewById(R.id.ksad_video_complete_h5_container);
        this.np = (TextView) findViewById(R.id.ksad_h5_open);
    }
}
