package com.kwad.components.core.video;

import android.content.Context;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.kwad.components.core.video.f;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.utils.ag;
import com.kwad.sdk.utils.bh;
import com.kwad.sdk.widget.KSRelativeLayout;

/* JADX INFO: loaded from: classes2.dex */
@Deprecated
public class a extends com.kwad.sdk.core.video.videoview.b implements View.OnClickListener {
    private ImageView Ah;
    private TextView Ai;
    protected boolean RB;
    private boolean RC;
    protected boolean RD;
    private int RE;
    private int RF;
    private KSRelativeLayout RG;
    private RelativeLayout RH;
    private boolean RI;
    private boolean RJ;
    private LinearLayout RK;
    private LinearLayout RL;
    private ImageView RM;
    private ViewGroup RN;
    private TextView RO;
    private c RP;
    private InterfaceC0165a RQ;
    private final com.kwad.sdk.core.download.a.a RR;
    protected AdInfo mAdInfo;
    protected AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    protected Context mContext;
    protected ImageView na;
    protected TextView nb;
    private ProgressBar nu;
    private boolean nx;

    /* JADX INFO: renamed from: com.kwad.components.core.video.a$a, reason: collision with other inner class name */
    public interface InterfaceC0165a {
        void a(int i, ac.a aVar);
    }

    public interface b extends c {
        void onVideoPlayError(int i, int i2);
    }

    public interface c {
        void bj();

        void bk();

        void d(long j);

        void onVideoPlayStart();
    }

    public a(Context context, AdTemplate adTemplate, com.kwad.sdk.core.video.videoview.c cVar) {
        super(context, cVar);
        this.RC = true;
        this.RD = false;
        this.RJ = false;
        this.RR = new com.kwad.sdk.core.download.a.a() { // from class: com.kwad.components.core.video.a.1
            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onDownloadFailed() {
                a.this.RO.setText(com.kwad.sdk.core.response.b.a.aw(a.this.mAdInfo));
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onDownloadFinished() {
                a.this.RO.setText(com.kwad.sdk.core.response.b.a.aM(a.this.mAdTemplate));
            }

            @Override // com.kwad.sdk.core.download.a.a, com.kwad.sdk.api.KsAppDownloadListener
            public final void onDownloadStarted() {
                a.this.RO.setText(com.kwad.sdk.core.response.b.a.cv(0));
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onIdle() {
                a aVar = a.this;
                aVar.aC(com.kwad.sdk.core.response.b.a.aw(aVar.mAdInfo));
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onInstalled() {
                a.this.RO.setText(com.kwad.sdk.core.response.b.a.U(a.this.mAdInfo));
            }

            @Override // com.kwad.sdk.core.download.a.a
            public final void onPaused(int i) {
                a.this.RO.setText(com.kwad.sdk.core.response.b.a.Cz());
            }

            @Override // com.kwad.sdk.api.KsAppDownloadListener
            public final void onProgressUpdate(int i) {
                a.this.RO.setText(com.kwad.sdk.core.response.b.a.cv(i));
            }
        };
        this.mContext = context;
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        init();
    }

    private void aK(int i) {
        InterfaceC0165a interfaceC0165a = this.RQ;
        if (interfaceC0165a != null) {
            interfaceC0165a.a(i, this.RG.getTouchCoords());
        }
    }

    private void init() {
        ImageView imageView;
        int i;
        com.kwad.sdk.m.l.inflate(this.mContext, R.layout.ksad_feed_video_palyer_controller, this);
        this.RG = (KSRelativeLayout) findViewById(R.id.ksad_video_root_container);
        this.RH = (RelativeLayout) findViewById(R.id.ksad_data_flow_container);
        this.nb = (TextView) findViewById(R.id.ksad_data_flow_play_tip);
        ImageView imageView2 = (ImageView) findViewById(R.id.ksad_data_flow_play_btn);
        this.na = imageView2;
        imageView2.setOnClickListener(this);
        this.RK = (LinearLayout) findViewById(R.id.ksad_video_network_unavailable);
        this.RL = (LinearLayout) findViewById(R.id.ksad_video_error_container);
        this.nu = (ProgressBar) findViewById(R.id.ksad_video_progress);
        this.RM = (ImageView) findViewById(R.id.ksad_video_thumb_image);
        String url = com.kwad.sdk.core.response.b.a.bi(this.mAdInfo).getUrl();
        if (TextUtils.isEmpty(url)) {
            imageView = this.RM;
            i = 8;
        } else {
            this.RM.setImageDrawable(null);
            KSImageLoader.loadImage(this.RM, url, this.mAdTemplate);
            imageView = this.RM;
            i = 0;
        }
        imageView.setVisibility(i);
        this.nb.setText(bh.V(com.kwad.sdk.core.response.b.a.G(this.mAdInfo) * 1000));
        qs();
    }

    private void qt() {
        ViewGroup viewGroup = this.RN;
        if (viewGroup != null) {
            viewGroup.setVisibility(8);
        }
    }

    private void qx() {
        this.RH.setVisibility(8);
    }

    private void setTopBottomVisible(boolean z) {
        if (this.RJ) {
            return;
        }
        this.nu.setVisibility(z ? 0 : 8);
        this.RI = z;
    }

    public final void aC(String str) {
        ((TextView) findViewById(R.id.ksad_app_download)).setText(str);
    }

    public final void aK(boolean z) {
        if (this.RJ) {
            return;
        }
        if (!z) {
            this.nu.setVisibility(8);
        } else if (this.RI) {
            this.nu.setVisibility(0);
        }
    }

    protected void eP() {
        if (com.kwad.sdk.core.response.b.a.ax(this.mAdInfo)) {
            LinearLayout linearLayout = (LinearLayout) findViewById(R.id.ksad_video_complete_app_container);
            this.Ah = (ImageView) findViewById(R.id.ksad_video_complete_app_icon);
            this.Ai = (TextView) findViewById(R.id.ksad_app_name);
            this.RO = (TextView) findViewById(R.id.ksad_app_download);
            KSImageLoader.loadAppIcon(this.Ah, com.kwad.sdk.core.response.b.d.cl(this.mAdTemplate), this.mAdTemplate, 12);
            this.Ai.setText(com.kwad.sdk.core.response.b.a.bO(this.mAdInfo));
            this.RO.setText(com.kwad.sdk.core.response.b.a.aw(this.mAdInfo));
            this.RN = linearLayout;
            this.Ah.setOnClickListener(this);
            this.Ai.setOnClickListener(this);
            this.RO.setOnClickListener(this);
            com.kwad.components.core.e.d.c cVar = new com.kwad.components.core.e.d.c(this.mAdTemplate);
            this.mApkDownloadHelper = cVar;
            cVar.b(this.RR);
        } else {
            LinearLayout linearLayout2 = (LinearLayout) findViewById(R.id.ksad_video_complete_h5_container);
            TextView textView = (TextView) findViewById(R.id.ksad_h5_open);
            this.RO = textView;
            textView.setText(com.kwad.sdk.core.response.b.a.aw(this.mAdInfo));
            this.RO.setOnClickListener(this);
            this.RN = linearLayout2;
        }
        this.RN.setOnClickListener(this);
        this.RN.setVisibility(0);
    }

    public AdTemplate getAdTemplate() {
        return this.mAdTemplate;
    }

    @Override // com.kwad.sdk.core.video.videoview.b
    public final void m(int i, int i2) {
        this.RF = i2;
        this.RE = i;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view == this.na) {
            this.RB = true;
            this.RC = true;
            qy();
        } else {
            if (view == this.Ah) {
                aK(1);
                return;
            }
            if (view == this.Ai) {
                aK(2);
            } else if (view == this.RO) {
                aK(3);
            } else {
                aK(4);
            }
        }
    }

    @Override // com.kwad.sdk.core.video.videoview.b
    public final void onPlayStateChanged(int i) {
        com.kwad.sdk.core.e.c.d("AdVideoPlayerController", "onPlayStateChanged playState=" + i);
        if (i == -1) {
            qI();
            setTopBottomVisible(false);
            this.RK.setVisibility(8);
            this.RL.setVisibility(0);
            c cVar = this.RP;
            if (cVar instanceof f.a) {
                ((f.a) cVar).onVideoPlayError(this.RE, this.RF);
            }
            c cVar2 = this.RP;
            if (cVar2 instanceof b) {
                ((b) cVar2).onVideoPlayError(this.RE, this.RF);
            }
            com.kwad.components.core.o.a.pA().b(this.mAdTemplate, this.RE, this.RF);
            return;
        }
        if (i == 4) {
            c cVar3 = this.RP;
            if (cVar3 != null) {
                cVar3.bj();
            }
            this.RM.setVisibility(8);
            return;
        }
        if (i == 9) {
            c cVar4 = this.RP;
            if (cVar4 != null) {
                cVar4.bk();
            }
            qI();
            this.mAdTemplate.setmCurPlayTime(-1L);
            setTopBottomVisible(false);
            KSImageLoader.loadImage(this.RM, com.kwad.sdk.core.response.b.a.P(this.mAdInfo), this.mAdTemplate);
            this.RM.setVisibility(0);
            eP();
            return;
        }
        if (i == 1) {
            qx();
            this.RK.setVisibility(8);
            this.RL.setVisibility(8);
            this.nu.setVisibility(8);
            qt();
            return;
        }
        if (i != 2) {
            return;
        }
        c cVar5 = this.RP;
        if (cVar5 != null) {
            cVar5.onVideoPlayStart();
        }
        setTopBottomVisible(true);
        qH();
    }

    protected void qA() {
        this.awf.pause();
    }

    @Override // com.kwad.sdk.core.video.videoview.b
    public final void qB() {
        long currentPosition = this.awf.getCurrentPosition();
        long duration = this.awf.getDuration();
        this.nu.setSecondaryProgress(this.awf.getBufferPercentage());
        this.mAdTemplate.setmCurPlayTime(currentPosition);
        this.nu.setProgress((int) ((currentPosition * 100.0f) / duration));
        c cVar = this.RP;
        if (cVar != null) {
            cVar.d(currentPosition);
        }
    }

    public final void qC() {
        this.RJ = true;
        this.nu.setVisibility(8);
    }

    protected void qs() {
    }

    protected final void qu() {
        this.RK.setVisibility(0);
    }

    protected final void qv() {
        this.RK.setVisibility(8);
    }

    protected final void qw() {
        this.RH.setVisibility(0);
        this.RM.setVisibility(0);
        this.mAdTemplate.mVideoPlayerStatus.setVideoPlayerBehavior(2);
    }

    protected void qy() {
        if (!this.awf.isIdle()) {
            if (this.awf.isPaused() || this.awf.Dw()) {
                qz();
                this.awf.restart();
                return;
            }
            return;
        }
        if (!ag.isNetworkConnected(this.mContext)) {
            qu();
            return;
        }
        qv();
        if (!this.RD && ((!this.RC || !ag.isWifiConnected(this.mContext)) && (!this.RC || (!this.nx && !this.RB)))) {
            qw();
        } else {
            qz();
            this.awf.start();
        }
    }

    protected final void qz() {
        this.awf.setKsPlayLogParam(com.kwad.sdk.contentalliance.a.a.a.ap(this.mAdTemplate));
    }

    public void release() {
        this.awf.release();
    }

    @Override // com.kwad.sdk.core.video.videoview.b
    public final void reset() {
        qI();
        this.nu.setProgress(0);
        this.nu.setSecondaryProgress(0);
        qx();
        this.RK.setVisibility(8);
        this.RL.setVisibility(8);
        this.nu.setVisibility(8);
        this.RM.setVisibility(8);
        this.RH.setVisibility(8);
        this.mAdTemplate.mVideoPlayerStatus.setVideoPlayerBehavior(1);
        qt();
    }

    public void setAdClickListener(InterfaceC0165a interfaceC0165a) {
        this.RQ = interfaceC0165a;
    }

    public void setCanControlPlay(boolean z) {
        this.RD = z;
    }

    public void setDataAutoStart(boolean z) {
        this.RC = z;
    }

    public void setDataFlowAutoStart(boolean z) {
        this.nx = z;
    }

    public void setVideoPlayCallback(c cVar) {
        this.RP = cVar;
    }
}
