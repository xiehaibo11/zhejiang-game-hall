package com.kwad.components.ad.interstitial.d;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.widget.ImageView;
import com.kwad.components.ad.interstitial.d.c;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.video.a;
import com.kwad.components.core.video.f;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.contentalliance.a.a.b;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.widget.KSFrameLayout;
import java.io.File;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

public final class j extends b implements com.kwad.sdk.widget.c {
    private List<Integer> cr;
    private KsAdVideoPlayConfig dJ;
    private ImageView ew;
    private com.kwad.sdk.core.video.videoview.a ex;
    private KSFrameLayout jQ;
    private KSFrameLayout jR;
    private c jf;
    private com.kwad.components.core.video.f lb;
    protected AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    protected Context mContext;
    private boolean mIsAudioEnable = false;
    private h ka = new h() {
        @Override
        public final void du() {
            try {
                j.this.lb.qy();
            } catch (Throwable unused) {
            }
        }

        @Override
        public final void dv() {
            try {
                j.this.lb.qA();
            } catch (Throwable unused) {
            }
        }
    };
    private final a.a eC = new a.a() {
        /* JADX WARN: Removed duplicated region for block: B:15:0x002d  */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final void a(int i, ac.a aVar) {
            int i2;
            int i3;
            boolean z = false;
            if (i == 1) {
                i2 = 13;
            } else if (i == 2) {
                i2 = 82;
            } else {
                if (i == 3) {
                    i2 = 83;
                    z = true;
                    i3 = 1;
                    z.b bVar = new z.b();
                    bVar.jI = aVar;
                    bVar.jG = i2;
                    j.this.getContext();
                    bVar.atb = ai.IN() ? 2 : 1;
                    com.kwad.components.core.e.d.a.a(new a.a(j.this.getContext()).P(j.this.mAdTemplate).b(j.this.mApkDownloadHelper).ao(i3).am(z).ao(true).a(bVar).a(new a.b() {
                        @Override
                        public final void onAdClicked() {
                            j.this.eb();
                        }
                    }));
                }
                i2 = 108;
            }
            i3 = 2;
            z.b bVar2 = new z.b();
            bVar2.jI = aVar;
            bVar2.jG = i2;
            j.this.getContext();
            bVar2.atb = ai.IN() ? 2 : 1;
            com.kwad.components.core.e.d.a.a(new a.a(j.this.getContext()).P(j.this.mAdTemplate).b(j.this.mApkDownloadHelper).ao(i3).am(z).ao(true).a(bVar2).a(new a.b() {
                @Override
                public final void onAdClicked() {
                    j.this.eb();
                }
            }));
        }
    };

    private c.b a(View view, boolean z) {
        return new c.b(view.getContext()).k(z).a(this.jQ.getTouchCoords()).y(3).z(85);
    }

    private void c(long j) {
        int iCeil = (int) Math.ceil(j / 1000.0f);
        List<Integer> list = this.cr;
        if (list == null || list.isEmpty()) {
            return;
        }
        Iterator<Integer> it = this.cr.iterator();
        while (it.hasNext()) {
            if (iCeil >= it.next().intValue()) {
                com.kwad.sdk.core.report.a.a(this.mAdTemplate, iCeil, (JSONObject) null);
                it.remove();
                return;
            }
        }
    }

    private void ea() {
        ImageView imageView;
        int i;
        this.mIsAudioEnable = this.dJ.isVideoSoundEnable();
        String url = com.kwad.sdk.core.response.b.a.bi(this.mAdInfo).getUrl();
        if (TextUtils.isEmpty(url)) {
            imageView = this.ew;
            i = 8;
        } else {
            this.ew.setImageDrawable(null);
            KSImageLoader.loadImage(this.ew, url, this.mAdTemplate);
            imageView = this.ew;
            i = 0;
        }
        imageView.setVisibility(i);
        int iZz = com.kwad.sdk.core.config.d.zz();
        String strF = com.kwad.sdk.core.response.b.a.F(this.mAdInfo);
        if (TextUtils.isEmpty(strF)) {
            return;
        }
        if (iZz < 0) {
            File fileBR = com.kwad.sdk.core.diskcache.b.a.Au().bR(strF);
            strF = (fileBR == null || !fileBR.exists()) ? null : fileBR.getAbsolutePath();
        } else if (iZz != 0) {
            strF = com.kwad.sdk.core.videocache.c.a.bj(this.mContext).dN(strF);
        }
        if (TextUtils.isEmpty(strF)) {
            return;
        }
        this.ex.a(new b.a(this.mAdTemplate).cn(strF).co(com.kwad.sdk.core.response.b.f.b(com.kwad.sdk.core.response.b.d.ch(this.mAdTemplate))).a(this.mAdTemplate.mVideoPlayerStatus).b(new com.kwad.sdk.contentalliance.a.a.a(this.mAdTemplate, System.currentTimeMillis())).yS(), null);
        this.ex.setVideoSoundEnable(this.mIsAudioEnable);
        this.lb.setVideoPlayCallback(new f.a() {
            private boolean cs = false;

            @Override
            public final void bj() {
                if (!this.cs) {
                    this.cs = true;
                    com.kwad.components.core.o.a.pA().a(j.this.mAdTemplate, System.currentTimeMillis(), 0);
                }
                Iterator<a.c> it = j.this.jf.jr.iterator();
                while (it.hasNext()) {
                    it.next().bj();
                }
            }

            @Override
            public final void bk() {
                com.kwad.sdk.core.report.a.aA(j.this.mAdTemplate);
                if (!j.this.jf.jk && j.this.jf.hz != null) {
                    j.this.jf.hz.onVideoPlayEnd();
                }
                Iterator<a.c> it = j.this.jf.jr.iterator();
                while (it.hasNext()) {
                    it.next().bk();
                }
                j.this.jf.jt = true;
            }

            @Override
            public final void d(long j) {
                j.this.c(j);
                Iterator<a.c> it = j.this.jf.jr.iterator();
                while (it.hasNext()) {
                    it.next().d(j);
                }
            }

            @Override
            public final void onVideoPlayError(int i2, int i3) {
                com.kwad.components.ad.interstitial.monitor.b.cL();
                com.kwad.components.ad.interstitial.monitor.b.a(j.this.mAdTemplate, i2, String.valueOf(i3));
                if (j.this.jf.hz != null) {
                    j.this.jf.hz.onVideoPlayError(i2, i3);
                }
            }

            @Override
            public final void onVideoPlayStart() {
                com.kwad.sdk.core.report.a.j(j.this.mAdTemplate);
                com.kwad.components.ad.interstitial.monitor.b.cL();
                com.kwad.components.ad.interstitial.monitor.b.j(j.this.mAdTemplate);
                if (!j.this.jf.jk && j.this.jf.hz != null) {
                    j.this.jf.hz.onVideoPlayStart();
                }
                Iterator<a.c> it = j.this.jf.jr.iterator();
                while (it.hasNext()) {
                    it.next().onVideoPlayStart();
                }
                j.this.jf.jt = false;
            }
        });
        this.ex.setController(this.lb);
        this.jR.setClickable(true);
        new com.kwad.sdk.widget.f(this.jR.getContext(), this.jR, this);
        this.jR.addView(this.ex);
        this.jf.jp = new c.d() {
            @Override
            public final void db() {
                if (j.this.ex != null) {
                    j.this.ex.restart();
                }
            }
        };
    }

    private void eb() {
        if (!this.jf.jk && this.jf.hz != null) {
            this.jf.hz.onAdClicked();
        }
        this.jf.ji = true;
        if (this.jf.jk) {
            return;
        }
        this.jf.ck();
    }

    @Override
    public final void a(View view) {
        this.jf.a(a(view, true));
    }

    @Override
    public final void ah() {
        super.ah();
        c cVar = (c) Gk();
        this.jf = cVar;
        this.dJ = cVar.dJ;
        AdTemplate adTemplate = this.jf.mAdTemplate;
        this.mAdTemplate = adTemplate;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.mAdInfo = adInfoCg;
        this.cr = com.kwad.sdk.core.response.b.a.bd(adInfoCg);
        com.kwad.sdk.core.video.videoview.a aVar = this.jf.ex;
        this.ex = aVar;
        aVar.setTag(this.cr);
        com.kwad.components.core.video.f fVar = new com.kwad.components.core.video.f(this.mContext, this.mAdTemplate, this.ex);
        this.lb = fVar;
        fVar.setDataFlowAutoStart(this.dJ.isDataFlowAutoStart());
        this.lb.setAdClickListener(this.eC);
        this.lb.qC();
        this.mApkDownloadHelper = this.jf.mApkDownloadHelper;
        ea();
        float dimension = getContext().getResources().getDimension(R.dimen.ksad_interstitial_card_radius);
        this.jR.setRadius(dimension, dimension, 0.0f, 0.0f);
        this.jf.a(this.ka);
    }

    @Override
    public final void b(View view) {
        this.jf.a(a(view, false));
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.jQ = (KSFrameLayout) getRootView().findViewById(R.id.ksad_container);
        this.jR = (KSFrameLayout) getRootView().findViewById(R.id.ksad_video_container);
        this.ew = (ImageView) getRootView().findViewById(R.id.ksad_video_first_frame_container);
        this.jR.setVisibility(4);
        this.mContext = getContext();
    }

    @Override
    public final void onDestroy() {
        super.onDestroy();
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.jf.jp = null;
        this.jf.b(this.ka);
    }
}
