package com.kwad.components.ad.f.b;

import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public final class h extends com.kwad.components.ad.f.a.a implements View.OnClickListener {
    private ViewGroup no;
    private TextView np;

    /* JADX INFO: Access modifiers changed from: private */
    public void eP() {
        this.np.setText(com.kwad.sdk.core.response.b.a.aw(com.kwad.sdk.core.response.b.d.cg(this.mV.mAdTemplate)));
        this.no.setOnClickListener(this);
        this.no.setVisibility(0);
    }

    private void eR() {
        com.kwad.components.core.e.d.a.a(new a.C0150a(this.no.getContext()).P(this.mV.mAdTemplate).ao(2).a(new a.b() { // from class: com.kwad.components.ad.f.b.h.2
            @Override // com.kwad.components.core.e.d.a.b
            public final void onAdClicked() {
                com.kwad.sdk.core.report.a.a(h.this.mV.mAdTemplate, 2, h.this.mV.mQ.getTouchCoords());
            }
        }));
    }

    private void notifyAdClick() {
        this.mV.mE.l(this.no);
    }

    @Override // com.kwad.components.ad.f.a.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.f.b.h.1
            @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
            public final void onMediaPlayCompleted() {
                h.this.eP();
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
        this.no.setVisibility(8);
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        eR();
        notifyAdClick();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.no = (ViewGroup) findViewById(R.id.ksad_video_complete_h5_container);
        this.np = (TextView) findViewById(R.id.ksad_h5_open);
    }
}
