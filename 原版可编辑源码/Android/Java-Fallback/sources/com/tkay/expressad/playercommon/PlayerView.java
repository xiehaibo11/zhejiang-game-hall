package com.tkay.expressad.playercommon;

public class PlayerView extends android.widget.LinearLayout {
    public static final java.lang.String TAG = "PlayerView";
    private boolean isBTVideo;
    private boolean isBTVideoPlaying;
    private boolean mInitState;
    private boolean mIsCovered;
    private boolean mIsFirstCreateHolder;
    private boolean mIsNeedToRepeatPrepare;
    private boolean mIsSurfaceHolderDestoryed;
    private android.widget.LinearLayout mLlSurContainer;
    private android.widget.LinearLayout mLoadingView;
    private java.lang.String mPlayUrl;
    private android.view.SurfaceHolder mSurfaceHolder;
    private com.tkay.expressad.playercommon.VideoFeedsPlayer mVideoFeedsPlayer;

    static class 1 {
    }

    private class MySurfaceHoldeCallback implements android.view.SurfaceHolder.Callback {
        final com.tkay.expressad.playercommon.PlayerView this$0;

        private MySurfaceHoldeCallback(com.tkay.expressad.playercommon.PlayerView r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        MySurfaceHoldeCallback(com.tkay.expressad.playercommon.PlayerView r1, com.tkay.expressad.playercommon.PlayerView.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void surfaceChanged(android.view.SurfaceHolder r1, int r2, int r3, int r4) {
                r0 = this;
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                boolean r1 = com.tkay.expressad.playercommon.PlayerView.access$400(r1)     // Catch: java.lang.Exception -> L6f
                r2 = 0
                if (r1 == 0) goto L69
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                boolean r1 = com.tkay.expressad.playercommon.PlayerView.access$600(r1)     // Catch: java.lang.Exception -> L6f
                if (r1 != 0) goto L69
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                boolean r1 = r1.isComplete()     // Catch: java.lang.Exception -> L6f
                if (r1 != 0) goto L69
                boolean r1 = com.tkay.expressad.foundation.f.b.c     // Catch: java.lang.Exception -> L6f
                if (r1 != 0) goto L69
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                boolean r1 = com.tkay.expressad.playercommon.PlayerView.access$700(r1)     // Catch: java.lang.Exception -> L6f
                if (r1 != 0) goto L3d
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                com.tkay.expressad.playercommon.VideoFeedsPlayer r1 = com.tkay.expressad.playercommon.PlayerView.access$100(r1)     // Catch: java.lang.Exception -> L6f
                boolean r1 = r1.hasPrepare()     // Catch: java.lang.Exception -> L6f
                if (r1 == 0) goto L37
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                r1.resumeStart()     // Catch: java.lang.Exception -> L6f
                goto L69
            L37:
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                r1.playVideo(r2)     // Catch: java.lang.Exception -> L6f
                goto L69
            L3d:
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                boolean r1 = com.tkay.expressad.playercommon.PlayerView.access$800(r1)     // Catch: java.lang.Exception -> L6f
                if (r1 == 0) goto L64
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                com.tkay.expressad.playercommon.VideoFeedsPlayer r1 = com.tkay.expressad.playercommon.PlayerView.access$100(r1)     // Catch: java.lang.Exception -> L6f
                boolean r1 = r1.hasPrepare()     // Catch: java.lang.Exception -> L6f
                if (r1 != 0) goto L5a
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                com.tkay.expressad.playercommon.VideoFeedsPlayer r1 = com.tkay.expressad.playercommon.PlayerView.access$100(r1)     // Catch: java.lang.Exception -> L6f
                r1.prepare()     // Catch: java.lang.Exception -> L6f
            L5a:
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                com.tkay.expressad.playercommon.VideoFeedsPlayer r1 = com.tkay.expressad.playercommon.PlayerView.access$100(r1)     // Catch: java.lang.Exception -> L6f
                r1.start(r2)     // Catch: java.lang.Exception -> L6f
                goto L69
            L64:
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                r1.pause()     // Catch: java.lang.Exception -> L6f
            L69:
                com.tkay.expressad.playercommon.PlayerView r1 = r0.this$0     // Catch: java.lang.Exception -> L6f
                com.tkay.expressad.playercommon.PlayerView.access$402(r1, r2)     // Catch: java.lang.Exception -> L6f
                return
            L6f:
                r1 = move-exception
                r1.getMessage()
                return
        }

        @Override
        public void surfaceCreated(android.view.SurfaceHolder r2) {
                r1 = this;
                com.tkay.expressad.playercommon.PlayerView r0 = r1.this$0     // Catch: java.lang.Exception -> L1f
                com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = com.tkay.expressad.playercommon.PlayerView.access$100(r0)     // Catch: java.lang.Exception -> L1f
                if (r0 == 0) goto L18
                if (r2 == 0) goto L18
                com.tkay.expressad.playercommon.PlayerView r0 = r1.this$0     // Catch: java.lang.Exception -> L1f
                com.tkay.expressad.playercommon.PlayerView.access$202(r0, r2)     // Catch: java.lang.Exception -> L1f
                com.tkay.expressad.playercommon.PlayerView r0 = r1.this$0     // Catch: java.lang.Exception -> L1f
                com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = com.tkay.expressad.playercommon.PlayerView.access$100(r0)     // Catch: java.lang.Exception -> L1f
                r0.setDisplay(r2)     // Catch: java.lang.Exception -> L1f
            L18:
                com.tkay.expressad.playercommon.PlayerView r2 = r1.this$0     // Catch: java.lang.Exception -> L1f
                r0 = 0
                com.tkay.expressad.playercommon.PlayerView.access$302(r2, r0)     // Catch: java.lang.Exception -> L1f
                return
            L1f:
                r2 = move-exception
                r2.getMessage()
                return
        }

        @Override
        public void surfaceDestroyed(android.view.SurfaceHolder r2) {
                r1 = this;
                com.tkay.expressad.playercommon.PlayerView r2 = r1.this$0     // Catch: java.lang.Exception -> L15
                r0 = 1
                com.tkay.expressad.playercommon.PlayerView.access$402(r2, r0)     // Catch: java.lang.Exception -> L15
                com.tkay.expressad.playercommon.PlayerView r2 = r1.this$0     // Catch: java.lang.Exception -> L15
                com.tkay.expressad.playercommon.PlayerView.access$502(r2, r0)     // Catch: java.lang.Exception -> L15
                com.tkay.expressad.playercommon.PlayerView r2 = r1.this$0     // Catch: java.lang.Exception -> L15
                com.tkay.expressad.playercommon.VideoFeedsPlayer r2 = com.tkay.expressad.playercommon.PlayerView.access$100(r2)     // Catch: java.lang.Exception -> L15
                r2.pause()     // Catch: java.lang.Exception -> L15
                return
            L15:
                r2 = move-exception
                r2.getMessage()
                return
        }
    }

    public PlayerView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 0
            r1.mInitState = r2
            r0 = 1
            r1.mIsFirstCreateHolder = r0
            r1.mIsSurfaceHolderDestoryed = r2
            r1.mIsCovered = r2
            r1.mIsNeedToRepeatPrepare = r2
            r1.isBTVideo = r2
            r1.isBTVideoPlaying = r2
            r1.init()
            return
    }

    public PlayerView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.mInitState = r1
            r2 = 1
            r0.mIsFirstCreateHolder = r2
            r0.mIsSurfaceHolderDestoryed = r1
            r0.mIsCovered = r1
            r0.mIsNeedToRepeatPrepare = r1
            r0.isBTVideo = r1
            r0.isBTVideoPlaying = r1
            r0.init()
            return
    }

    static com.tkay.expressad.playercommon.VideoFeedsPlayer access$100(com.tkay.expressad.playercommon.PlayerView r0) {
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r0.mVideoFeedsPlayer
            return r0
    }

    static android.view.SurfaceHolder access$202(com.tkay.expressad.playercommon.PlayerView r0, android.view.SurfaceHolder r1) {
            r0.mSurfaceHolder = r1
            return r1
    }

    static boolean access$302(com.tkay.expressad.playercommon.PlayerView r0, boolean r1) {
            r0.mIsFirstCreateHolder = r1
            return r1
    }

    static boolean access$400(com.tkay.expressad.playercommon.PlayerView r0) {
            boolean r0 = r0.mIsSurfaceHolderDestoryed
            return r0
    }

    static boolean access$402(com.tkay.expressad.playercommon.PlayerView r0, boolean r1) {
            r0.mIsSurfaceHolderDestoryed = r1
            return r1
    }

    static boolean access$502(com.tkay.expressad.playercommon.PlayerView r0, boolean r1) {
            r0.mIsNeedToRepeatPrepare = r1
            return r1
    }

    static boolean access$600(com.tkay.expressad.playercommon.PlayerView r0) {
            boolean r0 = r0.mIsCovered
            return r0
    }

    static boolean access$700(com.tkay.expressad.playercommon.PlayerView r0) {
            boolean r0 = r0.isBTVideo
            return r0
    }

    static boolean access$800(com.tkay.expressad.playercommon.PlayerView r0) {
            boolean r0 = r0.isBTVideoPlaying
            return r0
    }

    private void init() {
            r1 = this;
            r1.initView()     // Catch: java.lang.Exception -> L7
            r1.initPlayer()     // Catch: java.lang.Exception -> L7
            return
        L7:
            r0 = move-exception
            r0.getMessage()
            return
    }

    private void initPlayer() {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = new com.tkay.expressad.playercommon.VideoFeedsPlayer
            r0.<init>()
            r1.mVideoFeedsPlayer = r0
            return
    }

    private void initView() {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            java.lang.String r1 = "tkay_playercommon_player_view"
            java.lang.String r2 = "layout"
            int r0 = com.tkay.expressad.foundation.h.i.a(r0, r1, r2)
            android.content.Context r1 = r4.getContext()
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            r2 = 0
            android.view.View r0 = r1.inflate(r0, r2)
            if (r0 == 0) goto L48
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "id"
            java.lang.String r3 = "tkay_playercommon_ll_sur_container"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r2)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.LinearLayout r1 = (android.widget.LinearLayout) r1
            r4.mLlSurContainer = r1
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "tkay_playercommon_ll_loading"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r2)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.LinearLayout r1 = (android.widget.LinearLayout) r1
            r4.mLoadingView = r1
            r4.addSurfaceView()
            r1 = -1
            r4.addView(r0, r1, r1)
        L48:
            return
    }

    public void addSurfaceView() {
            r4 = this;
            android.view.SurfaceView r0 = new android.view.SurfaceView     // Catch: java.lang.Exception -> L2f
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Exception -> L2f
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Exception -> L2f
            r0.<init>(r1)     // Catch: java.lang.Exception -> L2f
            android.view.SurfaceHolder r1 = r0.getHolder()     // Catch: java.lang.Exception -> L2f
            r4.mSurfaceHolder = r1     // Catch: java.lang.Exception -> L2f
            r2 = 3
            r1.setType(r2)     // Catch: java.lang.Exception -> L2f
            android.view.SurfaceHolder r1 = r4.mSurfaceHolder     // Catch: java.lang.Exception -> L2f
            r2 = 1
            r1.setKeepScreenOn(r2)     // Catch: java.lang.Exception -> L2f
            android.view.SurfaceHolder r1 = r4.mSurfaceHolder     // Catch: java.lang.Exception -> L2f
            com.tkay.expressad.playercommon.PlayerView$MySurfaceHoldeCallback r2 = new com.tkay.expressad.playercommon.PlayerView$MySurfaceHoldeCallback     // Catch: java.lang.Exception -> L2f
            r3 = 0
            r2.<init>(r4, r3)     // Catch: java.lang.Exception -> L2f
            r1.addCallback(r2)     // Catch: java.lang.Exception -> L2f
            android.widget.LinearLayout r1 = r4.mLlSurContainer     // Catch: java.lang.Exception -> L2f
            r2 = -1
            r1.addView(r0, r2, r2)     // Catch: java.lang.Exception -> L2f
            return
        L2f:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void closeSound() {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            if (r0 == 0) goto L7
            r0.closeSound()
        L7:
            return
    }

    public void coverUnlockResume() {
            r2 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L20
            r1 = 1
            r0.setIsFrontDesk(r1)     // Catch: java.lang.Throwable -> L20
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L1f
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L20
            boolean r0 = r0.hasPrepare()     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L1b
            boolean r0 = r2.mIsNeedToRepeatPrepare     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L17
            goto L1b
        L17:
            r2.start(r1)     // Catch: java.lang.Throwable -> L20
            goto L1f
        L1b:
            r0 = 0
            r2.playVideo(r0)     // Catch: java.lang.Throwable -> L20
        L1f:
            return
        L20:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public int getCurPosition() {
            r2 = this;
            r0 = 0
            com.tkay.expressad.playercommon.VideoFeedsPlayer r1 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> Lc
            if (r1 == 0) goto L10
            com.tkay.expressad.playercommon.VideoFeedsPlayer r1 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> Lc
            int r0 = r1.getCurPosition()     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r1 = move-exception
            r1.getMessage()
        L10:
            return r0
    }

    public int getDuration() {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            if (r0 == 0) goto L9
            int r0 = r0.getDuration()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public void initBufferIngParam(int r2) {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            if (r0 == 0) goto L7
            r0.initBufferIngParam(r2)
        L7:
            return
    }

    public boolean initVFPData(java.lang.String r8, java.lang.String r9, int r10, com.tkay.expressad.playercommon.VideoPlayerStatusListener r11) {
            r7 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L8
            r8 = 0
            return r8
        L8:
            r7.mPlayUrl = r8
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r7.mVideoFeedsPlayer
            android.content.Context r1 = r7.getContext()
            android.widget.LinearLayout r2 = r7.mLoadingView
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r0.initPlayer(r1, r2, r3, r4, r5, r6)
            r8 = 1
            r7.mInitState = r8
            return r8
    }

    public boolean isComplete() {
            r2 = this;
            r0 = 0
            com.tkay.expressad.playercommon.VideoFeedsPlayer r1 = r2.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Le
            com.tkay.expressad.playercommon.VideoFeedsPlayer r1 = r2.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> Lf
            boolean r1 = r1.isComplete()     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Le
            r0 = 1
        Le:
            return r0
        Lf:
            r1 = move-exception
            r1.getMessage()
            return r0
    }

    public boolean isPlayIng() {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto Lf
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> Lb
            boolean r0 = r0.isPlayIng()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            r0.getMessage()
        Lf:
            r0 = 0
            return r0
    }

    public boolean isSilent() {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            boolean r0 = r0.isSilent()
            return r0
    }

    public void justSeekTo(int r2) {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L9
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            r0.justSeekTo(r2)     // Catch: java.lang.Exception -> La
        L9:
            return
        La:
            r2 = move-exception
            r2.getMessage()
            return
    }

    public void onPause() {
            r2 = this;
            r2.pause()     // Catch: java.lang.Exception -> Le
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> Le
            if (r0 == 0) goto Ld
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> Le
            r1 = 0
            r0.setIsFrontDesk(r1)     // Catch: java.lang.Exception -> Le
        Ld:
            return
        Le:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void onResume() {
            r2 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> L29
            r1 = 1
            r0.setIsFrontDesk(r1)     // Catch: java.lang.Exception -> L29
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> L29
            if (r0 == 0) goto L28
            boolean r0 = r2.mIsSurfaceHolderDestoryed     // Catch: java.lang.Exception -> L29
            if (r0 != 0) goto L28
            boolean r0 = r2.isComplete()     // Catch: java.lang.Exception -> L29
            if (r0 != 0) goto L28
            boolean r0 = r2.mIsCovered     // Catch: java.lang.Exception -> L29
            if (r0 != 0) goto L28
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> L29
            boolean r0 = r0.hasPrepare()     // Catch: java.lang.Exception -> L29
            if (r0 == 0) goto L24
            r2.resumeStart()     // Catch: java.lang.Exception -> L29
            return
        L24:
            r0 = 0
            r2.playVideo(r0)     // Catch: java.lang.Exception -> L29
        L28:
            return
        L29:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void openSound() {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            if (r0 == 0) goto L7
            r0.openSound()
        L7:
            return
    }

    public void pause() {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L9
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            r0.pause()     // Catch: java.lang.Exception -> La
        L9:
            return
        La:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public boolean playVideo() {
            r1 = this;
            r0 = 0
            boolean r0 = r1.playVideo(r0)
            return r0
    }

    public boolean playVideo(int r4) {
            r3 = this;
            r0 = 0
            com.tkay.expressad.playercommon.VideoFeedsPlayer r1 = r3.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto L6
            return r0
        L6:
            boolean r1 = r3.mInitState     // Catch: java.lang.Throwable -> L16
            if (r1 != 0) goto Lb
            return r0
        Lb:
            com.tkay.expressad.playercommon.VideoFeedsPlayer r1 = r3.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L16
            java.lang.String r2 = r3.mPlayUrl     // Catch: java.lang.Throwable -> L16
            r1.play(r2, r4)     // Catch: java.lang.Throwable -> L16
            r3.mIsNeedToRepeatPrepare = r0     // Catch: java.lang.Throwable -> L16
            r4 = 1
            return r4
        L16:
            r4 = move-exception
            r4.getMessage()
            return r0
    }

    public void prepare() {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L9
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            r0.prepare()     // Catch: java.lang.Exception -> La
        L9:
            return
        La:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void release() {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L9
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L17
            r0.releasePlayer()     // Catch: java.lang.Throwable -> L17
        L9:
            android.view.SurfaceHolder r0 = r1.mSurfaceHolder     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L16
            android.view.SurfaceHolder r0 = r1.mSurfaceHolder     // Catch: java.lang.Throwable -> L17
            android.view.Surface r0 = r0.getSurface()     // Catch: java.lang.Throwable -> L17
            r0.release()     // Catch: java.lang.Throwable -> L17
        L16:
            return
        L17:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void removeSurface() {
            r1 = this;
            android.widget.LinearLayout r0 = r1.mLlSurContainer     // Catch: java.lang.Exception -> L6
            r0.removeAllViews()     // Catch: java.lang.Exception -> L6
            return
        L6:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void resumeStart() {
            r1 = this;
            r0 = 1
            r1.start(r0)     // Catch: java.lang.Exception -> L5
            return
        L5:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void seekTo(int r2) {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L9
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            r0.seekTo(r2)     // Catch: java.lang.Exception -> La
        L9:
            return
        La:
            r2 = move-exception
            r2.getMessage()
            return
    }

    public void setDataSource() {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> L12
            if (r0 == 0) goto L11
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> L12
            r0.showLoading()     // Catch: java.lang.Exception -> L12
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> L12
            r0.setDataSource()     // Catch: java.lang.Exception -> L12
            r0 = 0
            r1.mIsNeedToRepeatPrepare = r0     // Catch: java.lang.Exception -> L12
        L11:
            return
        L12:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void setDesk(boolean r2) {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            r0.setIsFrontDesk(r2)
            return
    }

    public void setIsBTVideo(boolean r1) {
            r0 = this;
            r0.isBTVideo = r1
            return
    }

    public void setIsBTVideoPlaying(boolean r1) {
            r0 = this;
            r0.isBTVideoPlaying = r1
            return
    }

    public void setIsCovered(boolean r1) {
            r0 = this;
            r0.mIsCovered = r1     // Catch: java.lang.Exception -> L3
            return
        L3:
            r1 = move-exception
            r1.getMessage()
            return
    }

    public void setPlaybackParams(float r2) {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            if (r0 == 0) goto L7
            r0.setPlaybackParams(r2)
        L7:
            return
    }

    public void setVolume(float r2, float r3) {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            if (r0 == 0) goto L7
            r0.setVolume(r2, r3)
        L7:
            return
    }

    public void start(int r2) {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L9
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            r0.start(r2)     // Catch: java.lang.Exception -> La
        L9:
            return
        La:
            r2 = move-exception
            r2.getMessage()
            return
    }

    public void start(boolean r2) {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> Le
            if (r0 == 0) goto Ld
            boolean r0 = r1.mIsCovered     // Catch: java.lang.Exception -> Le
            if (r0 != 0) goto Ld
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> Le
            r0.start(r2)     // Catch: java.lang.Exception -> Le
        Ld:
            return
        Le:
            r2 = move-exception
            r2.getMessage()
            return
    }

    public void stop() {
            r1 = this;
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L9
            com.tkay.expressad.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            r0.stop()     // Catch: java.lang.Exception -> La
        L9:
            return
        La:
            r0 = move-exception
            r0.getMessage()
            return
    }
}
