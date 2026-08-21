package com.kwad.components.ad.f.b;

import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.video.l;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class f extends com.kwad.components.ad.f.a.a implements View.OnClickListener {
    private ImageView du;
    private TextView dv;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private ViewGroup ni;
    private TextView nj;
    private KsAppDownloadListener nk = new com.kwad.sdk.core.download.a.a() {
        @Override
        public final void onDownloadFailed() {
            f.this.nj.setText(com.kwad.sdk.core.response.b.a.aw(f.this.mAdInfo));
        }

        @Override
        public final void onDownloadFinished() {
            f.this.nj.setText(com.kwad.sdk.core.response.b.a.aM(f.this.mAdTemplate));
        }

        @Override
        public final void onIdle() {
            f.this.nj.setText(com.kwad.sdk.core.response.b.a.aw(f.this.mAdInfo));
        }

        @Override
        public final void onInstalled() {
            f.this.nj.setText(com.kwad.sdk.core.response.b.a.U(f.this.mAdInfo));
        }

        @Override
        public final void onProgressUpdate(int i) {
        }
    };

    private void F(int i) {
        com.kwad.components.core.e.d.a.a(new a.a(this.ni.getContext()).P(this.mAdTemplate).ao(i).b(this.mApkDownloadHelper).a(new a.b() {
            @Override
            public final void onAdClicked() {
                com.kwad.sdk.core.report.a.a(f.this.mAdTemplate, 2, f.this.mV.mQ.getTouchCoords());
            }
        }));
    }

    private void eP() {
        KSImageLoader.loadAppIcon(this.du, com.kwad.sdk.core.response.b.a.bQ(this.mAdInfo), this.mAdTemplate, 12);
        this.dv.setText(com.kwad.sdk.core.response.b.a.ao(this.mAdInfo));
        this.nj.setText(com.kwad.sdk.core.response.b.a.aw(this.mAdInfo));
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar != null) {
            cVar.b(this.nk);
        }
        this.ni.setOnClickListener(this);
        this.ni.setVisibility(0);
    }

    private void notifyAdClick() {
        this.mV.mE.l(this.ni);
    }

    @Override
    public final void ah() {
        super.ah();
        AdTemplate adTemplate = this.mV.mAdTemplate;
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.mApkDownloadHelper = this.mV.mApkDownloadHelper;
        this.mVideoPlayStateListener = new l() {
            @Override
            public final void onMediaPlayCompleted() {
                try {
                    f.this.eP();
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                    com.kwad.components.core.d.a.b(th);
                }
            }
        };
        this.mV.mW.b(this.mVideoPlayStateListener);
        this.ni.setVisibility(8);
    }

    @Override
    public final void onClick(View view) {
        if (view == this.ni) {
            F(2);
            notifyAdClick();
        } else if (view == this.nj) {
            F(1);
            notifyAdClick();
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.ni = (ViewGroup) findViewById(R.id.ksad_video_complete_app_container);
        this.du = (ImageView) findViewById(R.id.ksad_app_icon);
        this.dv = (TextView) findViewById(R.id.ksad_app_name);
        this.nj = (TextView) findViewById(R.id.ksad_app_download);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar != null) {
            cVar.c(this.nk);
        }
    }
}
