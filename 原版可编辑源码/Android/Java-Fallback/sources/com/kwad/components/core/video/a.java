package com.kwad.components.core.video;

@java.lang.Deprecated
public class a extends com.kwad.sdk.core.video.videoview.b implements android.view.View.OnClickListener {
    private android.widget.ImageView Ah;
    private android.widget.TextView Ai;
    protected boolean RB;
    private boolean RC;
    protected boolean RD;
    private int RE;
    private int RF;
    private com.kwad.sdk.widget.KSRelativeLayout RG;
    private android.widget.RelativeLayout RH;
    private boolean RI;
    private boolean RJ;
    private android.widget.LinearLayout RK;
    private android.widget.LinearLayout RL;
    private android.widget.ImageView RM;
    private android.view.ViewGroup RN;
    private android.widget.TextView RO;
    private com.kwad.components.core.video.a.c RP;
    private com.kwad.components.core.video.a.a RQ;
    private final com.kwad.sdk.core.download.a.a RR;
    protected com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    protected com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    protected android.content.Context mContext;
    protected android.widget.ImageView na;
    protected android.widget.TextView nb;
    private android.widget.ProgressBar nu;
    private boolean nx;


    public interface a {
        void a(int r1, com.kwad.sdk.utils.ac.a r2);
    }

    public interface b extends com.kwad.components.core.video.a.c {
        void onVideoPlayError(int r1, int r2);
    }

    public interface c {
        void bj();

        void bk();

        void d(long r1);

        void onVideoPlayStart();
    }

    public a(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.core.video.videoview.c r3) {
            r0 = this;
            r0.<init>(r1, r3)
            r3 = 1
            r0.RC = r3
            r3 = 0
            r0.RD = r3
            r0.RJ = r3
            com.kwad.components.core.video.a$1 r3 = new com.kwad.components.core.video.a$1
            r3.<init>(r0)
            r0.RR = r3
            r0.mContext = r1
            r0.mAdTemplate = r2
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r2)
            r0.mAdInfo = r1
            r0.init()
            return
    }

    static android.widget.TextView a(com.kwad.components.core.video.a r0) {
            android.widget.TextView r0 = r0.RO
            return r0
    }

    private void aK(int r3) {
            r2 = this;
            com.kwad.components.core.video.a$a r0 = r2.RQ
            if (r0 == 0) goto Ld
            com.kwad.sdk.widget.KSRelativeLayout r1 = r2.RG
            com.kwad.sdk.utils.ac$a r1 = r1.getTouchCoords()
            r0.a(r3, r1)
        Ld:
            return
    }

    private void init() {
            r4 = this;
            android.content.Context r0 = r4.mContext
            int r1 = com.kwad.sdk.R.layout.ksad_feed_video_palyer_controller
            com.kwad.sdk.m.l.inflate(r0, r1, r4)
            int r0 = com.kwad.sdk.R.id.ksad_video_root_container
            android.view.View r0 = r4.findViewById(r0)
            com.kwad.sdk.widget.KSRelativeLayout r0 = (com.kwad.sdk.widget.KSRelativeLayout) r0
            r4.RG = r0
            int r0 = com.kwad.sdk.R.id.ksad_data_flow_container
            android.view.View r0 = r4.findViewById(r0)
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            r4.RH = r0
            int r0 = com.kwad.sdk.R.id.ksad_data_flow_play_tip
            android.view.View r0 = r4.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.nb = r0
            int r0 = com.kwad.sdk.R.id.ksad_data_flow_play_btn
            android.view.View r0 = r4.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.na = r0
            r0.setOnClickListener(r4)
            int r0 = com.kwad.sdk.R.id.ksad_video_network_unavailable
            android.view.View r0 = r4.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r4.RK = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_error_container
            android.view.View r0 = r4.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r4.RL = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_progress
            android.view.View r0 = r4.findViewById(r0)
            android.widget.ProgressBar r0 = (android.widget.ProgressBar) r0
            r4.nu = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_thumb_image
            android.view.View r0 = r4.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.RM = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            com.kwad.sdk.core.response.model.b r0 = com.kwad.sdk.core.response.b.a.bi(r0)
            java.lang.String r0 = r0.getUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L7b
            android.widget.ImageView r1 = r4.RM
            r2 = 0
            r1.setImageDrawable(r2)
            android.widget.ImageView r1 = r4.RM
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r0, r2)
            android.widget.ImageView r0 = r4.RM
            r1 = 0
            goto L7f
        L7b:
            android.widget.ImageView r0 = r4.RM
            r1 = 8
        L7f:
            r0.setVisibility(r1)
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.G(r0)
            android.widget.TextView r1 = r4.nb
            int r0 = r0 * 1000
            long r2 = (long) r0
            java.lang.String r0 = com.kwad.sdk.utils.bh.V(r2)
            r1.setText(r0)
            r4.qs()
            return
    }

    private void qt() {
            r2 = this;
            android.view.ViewGroup r0 = r2.RN
            if (r0 == 0) goto L9
            r1 = 8
            r0.setVisibility(r1)
        L9:
            return
    }

    private void qx() {
            r2 = this;
            android.widget.RelativeLayout r0 = r2.RH
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    private void setTopBottomVisible(boolean r3) {
            r2 = this;
            boolean r0 = r2.RJ
            if (r0 == 0) goto L5
            return
        L5:
            android.widget.ProgressBar r0 = r2.nu
            if (r3 == 0) goto Lb
            r1 = 0
            goto Ld
        Lb:
            r1 = 8
        Ld:
            r0.setVisibility(r1)
            r2.RI = r3
            return
    }

    public final void aC(java.lang.String r2) {
            r1 = this;
            int r0 = com.kwad.sdk.R.id.ksad_app_download
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r0.setText(r2)
            return
    }

    public final void aK(boolean r2) {
            r1 = this;
            boolean r0 = r1.RJ
            if (r0 == 0) goto L5
            return
        L5:
            if (r2 == 0) goto L12
            boolean r2 = r1.RI
            if (r2 == 0) goto L19
            android.widget.ProgressBar r2 = r1.nu
            r0 = 0
            r2.setVisibility(r0)
            return
        L12:
            android.widget.ProgressBar r2 = r1.nu
            r0 = 8
            r2.setVisibility(r0)
        L19:
            return
    }

    protected void eP() {
            r5 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto L73
            int r0 = com.kwad.sdk.R.id.ksad_video_complete_app_container
            android.view.View r0 = r5.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            int r1 = com.kwad.sdk.R.id.ksad_video_complete_app_icon
            android.view.View r1 = r5.findViewById(r1)
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            r5.Ah = r1
            int r1 = com.kwad.sdk.R.id.ksad_app_name
            android.view.View r1 = r5.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            r5.Ai = r1
            int r1 = com.kwad.sdk.R.id.ksad_app_download
            android.view.View r1 = r5.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            r5.RO = r1
            android.widget.ImageView r1 = r5.Ah
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            java.lang.String r2 = com.kwad.sdk.core.response.b.d.cl(r2)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            r4 = 12
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r1, r2, r3, r4)
            android.widget.TextView r1 = r5.Ai
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.bO(r2)
            r1.setText(r2)
            android.widget.TextView r1 = r5.RO
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aw(r2)
            r1.setText(r2)
            r5.RN = r0
            android.widget.ImageView r0 = r5.Ah
            r0.setOnClickListener(r5)
            android.widget.TextView r0 = r5.Ai
            r0.setOnClickListener(r5)
            android.widget.TextView r0 = r5.RO
            r0.setOnClickListener(r5)
            com.kwad.components.core.e.d.c r0 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate
            r0.<init>(r1)
            r5.mApkDownloadHelper = r0
            com.kwad.sdk.core.download.a.a r1 = r5.RR
            r0.b(r1)
            goto L95
        L73:
            int r0 = com.kwad.sdk.R.id.ksad_video_complete_h5_container
            android.view.View r0 = r5.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            int r1 = com.kwad.sdk.R.id.ksad_h5_open
            android.view.View r1 = r5.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            r5.RO = r1
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aw(r2)
            r1.setText(r2)
            android.widget.TextView r1 = r5.RO
            r1.setOnClickListener(r5)
            r5.RN = r0
        L95:
            android.view.ViewGroup r0 = r5.RN
            r0.setOnClickListener(r5)
            android.view.ViewGroup r0 = r5.RN
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    public com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            return r0
    }

    @Override
    public final void m(int r1, int r2) {
            r0 = this;
            r0.RF = r2
            r0.RE = r1
            return
    }

    @Override
    public void onClick(android.view.View r3) {
            r2 = this;
            android.widget.ImageView r0 = r2.na
            r1 = 1
            if (r3 != r0) goto Ld
            r2.RB = r1
            r2.RC = r1
            r2.qy()
            return
        Ld:
            android.widget.ImageView r0 = r2.Ah
            if (r3 != r0) goto L15
            r2.aK(r1)
            return
        L15:
            android.widget.TextView r0 = r2.Ai
            if (r3 != r0) goto L1e
            r3 = 2
            r2.aK(r3)
            return
        L1e:
            android.widget.TextView r0 = r2.RO
            if (r3 != r0) goto L27
            r3 = 3
            r2.aK(r3)
            return
        L27:
            r3 = 4
            r2.aK(r3)
            return
    }

    @Override
    public final void onPlayStateChanged(int r5) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onPlayStateChanged playState="
            r0.<init>(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AdVideoPlayerController"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r0 = -1
            r1 = 0
            r2 = 8
            if (r5 == r0) goto L82
            r0 = 4
            if (r5 == r0) goto L75
            r0 = 9
            if (r5 == r0) goto L4b
            r0 = 1
            if (r5 == r0) goto L35
            r1 = 2
            if (r5 == r1) goto L27
            goto L74
        L27:
            com.kwad.components.core.video.a$c r5 = r4.RP
            if (r5 == 0) goto L2e
            r5.onVideoPlayStart()
        L2e:
            r4.setTopBottomVisible(r0)
            r4.qH()
            return
        L35:
            r4.qx()
            android.widget.LinearLayout r5 = r4.RK
            r5.setVisibility(r2)
            android.widget.LinearLayout r5 = r4.RL
            r5.setVisibility(r2)
            android.widget.ProgressBar r5 = r4.nu
            r5.setVisibility(r2)
            r4.qt()
            return
        L4b:
            com.kwad.components.core.video.a$c r5 = r4.RP
            if (r5 == 0) goto L52
            r5.bk()
        L52:
            r4.qI()
            com.kwad.sdk.core.response.model.AdTemplate r5 = r4.mAdTemplate
            r2 = -1
            r5.setmCurPlayTime(r2)
            r4.setTopBottomVisible(r1)
            android.widget.ImageView r5 = r4.RM
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.P(r0)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r5, r0, r2)
            android.widget.ImageView r5 = r4.RM
            r5.setVisibility(r1)
            r4.eP()
        L74:
            return
        L75:
            com.kwad.components.core.video.a$c r5 = r4.RP
            if (r5 == 0) goto L7c
            r5.bj()
        L7c:
            android.widget.ImageView r5 = r4.RM
            r5.setVisibility(r2)
            return
        L82:
            r4.qI()
            r4.setTopBottomVisible(r1)
            android.widget.LinearLayout r5 = r4.RK
            r5.setVisibility(r2)
            android.widget.LinearLayout r5 = r4.RL
            r5.setVisibility(r1)
            com.kwad.components.core.video.a$c r5 = r4.RP
            boolean r0 = r5 instanceof com.kwad.components.core.video.f.a
            if (r0 == 0) goto La1
            com.kwad.components.core.video.f$a r5 = (com.kwad.components.core.video.f.a) r5
            int r0 = r4.RE
            int r1 = r4.RF
            r5.onVideoPlayError(r0, r1)
        La1:
            com.kwad.components.core.video.a$c r5 = r4.RP
            boolean r0 = r5 instanceof com.kwad.components.core.video.a.b
            if (r0 == 0) goto Lb0
            com.kwad.components.core.video.a$b r5 = (com.kwad.components.core.video.a.b) r5
            int r0 = r4.RE
            int r1 = r4.RF
            r5.onVideoPlayError(r0, r1)
        Lb0:
            com.kwad.components.core.o.a r5 = com.kwad.components.core.o.a.pA()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            int r1 = r4.RE
            int r2 = r4.RF
            r5.b(r0, r1, r2)
            return
    }

    protected void qA() {
            r1 = this;
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            r0.pause()
            return
    }

    @Override
    public final void qB() {
            r6 = this;
            com.kwad.sdk.core.video.videoview.c r0 = r6.awf
            long r0 = r0.getCurrentPosition()
            com.kwad.sdk.core.video.videoview.c r2 = r6.awf
            long r2 = r2.getDuration()
            com.kwad.sdk.core.video.videoview.c r4 = r6.awf
            int r4 = r4.getBufferPercentage()
            android.widget.ProgressBar r5 = r6.nu
            r5.setSecondaryProgress(r4)
            float r4 = (float) r0
            r5 = 1120403456(0x42c80000, float:100.0)
            float r4 = r4 * r5
            float r2 = (float) r2
            float r4 = r4 / r2
            int r2 = (int) r4
            com.kwad.sdk.core.response.model.AdTemplate r3 = r6.mAdTemplate
            r3.setmCurPlayTime(r0)
            android.widget.ProgressBar r3 = r6.nu
            r3.setProgress(r2)
            com.kwad.components.core.video.a$c r2 = r6.RP
            if (r2 == 0) goto L2f
            r2.d(r0)
        L2f:
            return
    }

    public final void qC() {
            r2 = this;
            r0 = 1
            r2.RJ = r0
            android.widget.ProgressBar r0 = r2.nu
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    protected void qs() {
            r0 = this;
            return
    }

    protected final void qu() {
            r2 = this;
            android.widget.LinearLayout r0 = r2.RK
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    protected final void qv() {
            r2 = this;
            android.widget.LinearLayout r0 = r2.RK
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    protected final void qw() {
            r2 = this;
            android.widget.RelativeLayout r0 = r2.RH
            r1 = 0
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r2.RM
            r0.setVisibility(r1)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r0.mVideoPlayerStatus
            r1 = 2
            r0.setVideoPlayerBehavior(r1)
            return
    }

    protected void qy() {
            r1 = this;
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            boolean r0 = r0.isIdle()
            if (r0 == 0) goto L42
            android.content.Context r0 = r1.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            if (r0 != 0) goto L14
            r1.qu()
            return
        L14:
            r1.qv()
            boolean r0 = r1.RD
            if (r0 == 0) goto L24
        L1b:
            r1.qz()
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            r0.start()
            return
        L24:
            boolean r0 = r1.RC
            if (r0 == 0) goto L31
            android.content.Context r0 = r1.mContext
            boolean r0 = com.kwad.sdk.utils.ag.isWifiConnected(r0)
            if (r0 == 0) goto L31
            goto L1b
        L31:
            boolean r0 = r1.RC
            if (r0 == 0) goto L3e
            boolean r0 = r1.nx
            if (r0 != 0) goto L1b
            boolean r0 = r1.RB
            if (r0 == 0) goto L3e
            goto L1b
        L3e:
            r1.qw()
            return
        L42:
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            boolean r0 = r0.isPaused()
            if (r0 != 0) goto L52
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            boolean r0 = r0.Dw()
            if (r0 == 0) goto L5a
        L52:
            r1.qz()
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            r0.restart()
        L5a:
            return
    }

    protected final void qz() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.contentalliance.a.a.a r0 = com.kwad.sdk.contentalliance.a.a.a.ap(r0)
            com.kwad.sdk.core.video.videoview.c r1 = r2.awf
            r1.setKsPlayLogParam(r0)
            return
    }

    public void release() {
            r1 = this;
            com.kwad.sdk.core.video.videoview.c r0 = r1.awf
            r0.release()
            return
    }

    @Override
    public final void reset() {
            r2 = this;
            r2.qI()
            android.widget.ProgressBar r0 = r2.nu
            r1 = 0
            r0.setProgress(r1)
            android.widget.ProgressBar r0 = r2.nu
            r0.setSecondaryProgress(r1)
            r2.qx()
            android.widget.LinearLayout r0 = r2.RK
            r1 = 8
            r0.setVisibility(r1)
            android.widget.LinearLayout r0 = r2.RL
            r0.setVisibility(r1)
            android.widget.ProgressBar r0 = r2.nu
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r2.RM
            r0.setVisibility(r1)
            android.widget.RelativeLayout r0 = r2.RH
            r0.setVisibility(r1)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r0.mVideoPlayerStatus
            r1 = 1
            r0.setVideoPlayerBehavior(r1)
            r2.qt()
            return
    }

    public void setAdClickListener(com.kwad.components.core.video.a.a r1) {
            r0 = this;
            r0.RQ = r1
            return
    }

    public void setCanControlPlay(boolean r1) {
            r0 = this;
            r0.RD = r1
            return
    }

    public void setDataAutoStart(boolean r1) {
            r0 = this;
            r0.RC = r1
            return
    }

    public void setDataFlowAutoStart(boolean r1) {
            r0 = this;
            r0.nx = r1
            return
    }

    public void setVideoPlayCallback(com.kwad.components.core.video.a.c r1) {
            r0 = this;
            r0.RP = r1
            return
    }
}
