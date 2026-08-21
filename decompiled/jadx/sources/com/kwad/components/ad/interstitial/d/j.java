package com.kwad.components.ad.interstitial.d;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.widget.ImageView;
import com.kwad.components.ad.interstitial.d.c;
import com.kwad.components.core.video.a;
import com.kwad.components.core.video.f;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.contentalliance.a.a.b;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.widget.KSFrameLayout;
import java.io.File;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
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
    private h ka = new h() { // from class: com.kwad.components.ad.interstitial.d.j.1
        @Override // com.kwad.components.ad.interstitial.d.h
        public final void du() {
            try {
                j.this.lb.qy();
            } catch (Throwable unused) {
            }
        }

        @Override // com.kwad.components.ad.interstitial.d.h
        public final void dv() {
            try {
                j.this.lb.qA();
            } catch (Throwable unused) {
            }
        }
    };
    private final a.InterfaceC0165a eC = new a.InterfaceC0165a() { // from class: com.kwad.components.ad.interstitial.d.j.4
        /* JADX WARN: Removed duplicated region for block: B:15:0x002d  */
        @Override // com.kwad.components.core.video.a.InterfaceC0165a
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final void a(int r6, com.kwad.sdk.utils.ac.a r7) {
            /*
                r5 = this;
                r0 = 2
                r1 = 1
                r2 = 0
                if (r6 == r1) goto L15
                if (r6 == r0) goto L12
                r3 = 3
                if (r6 == r3) goto Ld
                r6 = 108(0x6c, float:1.51E-43)
                goto L17
            Ld:
                r6 = 83
                r2 = r1
                r3 = r2
                goto L18
            L12:
                r6 = 82
                goto L17
            L15:
                r6 = 13
            L17:
                r3 = r0
            L18:
                com.kwad.sdk.core.report.z$b r4 = new com.kwad.sdk.core.report.z$b
                r4.<init>()
                r4.jI = r7
                r4.jG = r6
                com.kwad.components.ad.interstitial.d.j r6 = com.kwad.components.ad.interstitial.d.j.this
                com.kwad.components.ad.interstitial.d.j.e(r6)
                boolean r6 = com.kwad.sdk.utils.ai.IN()
                if (r6 == 0) goto L2d
                goto L2e
            L2d:
                r0 = r1
            L2e:
                r4.atb = r0
                com.kwad.components.core.e.d.a$a r6 = new com.kwad.components.core.e.d.a$a
                com.kwad.components.ad.interstitial.d.j r7 = com.kwad.components.ad.interstitial.d.j.this
                android.content.Context r7 = com.kwad.components.ad.interstitial.d.j.h(r7)
                r6.<init>(r7)
                com.kwad.components.ad.interstitial.d.j r7 = com.kwad.components.ad.interstitial.d.j.this
                com.kwad.sdk.core.response.model.AdTemplate r7 = com.kwad.components.ad.interstitial.d.j.c(r7)
                com.kwad.components.core.e.d.a$a r6 = r6.P(r7)
                com.kwad.components.ad.interstitial.d.j r7 = com.kwad.components.ad.interstitial.d.j.this
                com.kwad.components.core.e.d.c r7 = com.kwad.components.ad.interstitial.d.j.g(r7)
                com.kwad.components.core.e.d.a$a r6 = r6.b(r7)
                com.kwad.components.core.e.d.a$a r6 = r6.ao(r3)
                com.kwad.components.core.e.d.a$a r6 = r6.am(r2)
                com.kwad.components.core.e.d.a$a r6 = r6.ao(r1)
                com.kwad.components.core.e.d.a$a r6 = r6.a(r4)
                com.kwad.components.ad.interstitial.d.j$4$1 r7 = new com.kwad.components.ad.interstitial.d.j$4$1
                r7.<init>()
                com.kwad.components.core.e.d.a$a r6 = r6.a(r7)
                com.kwad.components.core.e.d.a.a(r6)
                return
            */
            throw new UnsupportedOperationException("Method not decompiled: com.kwad.components.ad.interstitial.d.j.AnonymousClass4.a(int, com.kwad.sdk.utils.ac$a):void");
        }
    };

    private c.b a(View view, boolean z) {
        return new c.b(view.getContext()).k(z).a(this.jQ.getTouchCoords()).y(3).z(85);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c(long j) {
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
        this.lb.setVideoPlayCallback(new f.a() { // from class: com.kwad.components.ad.interstitial.d.j.2
            private boolean cs = false;

            @Override // com.kwad.components.core.video.a.c
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

            @Override // com.kwad.components.core.video.a.c
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

            @Override // com.kwad.components.core.video.a.c
            public final void d(long j) {
                j.this.c(j);
                Iterator<a.c> it = j.this.jf.jr.iterator();
                while (it.hasNext()) {
                    it.next().d(j);
                }
            }

            @Override // com.kwad.components.core.video.f.a
            public final void onVideoPlayError(int i2, int i3) {
                com.kwad.components.ad.interstitial.monitor.b.cL();
                com.kwad.components.ad.interstitial.monitor.b.a(j.this.mAdTemplate, i2, String.valueOf(i3));
                if (j.this.jf.hz != null) {
                    j.this.jf.hz.onVideoPlayError(i2, i3);
                }
            }

            @Override // com.kwad.components.core.video.a.c
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
        this.jf.jp = new c.d() { // from class: com.kwad.components.ad.interstitial.d.j.3
            @Override // com.kwad.components.ad.interstitial.d.c.d
            public final void db() {
                if (j.this.ex != null) {
                    j.this.ex.restart();
                }
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void eb() {
        if (!this.jf.jk && this.jf.hz != null) {
            this.jf.hz.onAdClicked();
        }
        this.jf.ji = true;
        if (this.jf.jk) {
            return;
        }
        this.jf.ck();
    }

    @Override // com.kwad.sdk.widget.c
    public final void a(View view) {
        this.jf.a(a(view, true));
    }

    @Override // com.kwad.components.ad.interstitial.d.b, com.kwad.sdk.mvp.Presenter
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

    @Override // com.kwad.sdk.widget.c
    public final void b(View view) {
        this.jf.a(a(view, false));
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.jQ = (KSFrameLayout) getRootView().findViewById(R.id.ksad_container);
        this.jR = (KSFrameLayout) getRootView().findViewById(R.id.ksad_video_container);
        this.ew = (ImageView) getRootView().findViewById(R.id.ksad_video_first_frame_container);
        this.jR.setVisibility(4);
        this.mContext = getContext();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onDestroy() {
        super.onDestroy();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.jf.jp = null;
        this.jf.b(this.ka);
    }
}
