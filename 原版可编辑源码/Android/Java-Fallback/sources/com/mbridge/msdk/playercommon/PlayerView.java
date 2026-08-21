package com.mbridge.msdk.playercommon;

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
    private com.mbridge.msdk.playercommon.VideoFeedsPlayer mVideoFeedsPlayer;
    protected int orientation;
    protected float xInScreen;
    protected float yInScreen;

    static class 1 {
    }

    private class MySurfaceHoldeCallback implements android.view.SurfaceHolder.Callback {
        final com.mbridge.msdk.playercommon.PlayerView this$0;

        private MySurfaceHoldeCallback(com.mbridge.msdk.playercommon.PlayerView r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        MySurfaceHoldeCallback(com.mbridge.msdk.playercommon.PlayerView r1, com.mbridge.msdk.playercommon.PlayerView.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void surfaceChanged(android.view.SurfaceHolder r1, int r2, int r3, int r4) {
                r0 = this;
                java.lang.String r1 = "PlayerView"
                java.lang.String r2 = "surfaceChanged"
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L87
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                boolean r2 = com.mbridge.msdk.playercommon.PlayerView.access$400(r2)     // Catch: java.lang.Exception -> L87
                r3 = 0
                if (r2 == 0) goto L81
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                boolean r2 = com.mbridge.msdk.playercommon.PlayerView.access$600(r2)     // Catch: java.lang.Exception -> L87
                if (r2 != 0) goto L81
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                boolean r2 = r2.isComplete()     // Catch: java.lang.Exception -> L87
                if (r2 != 0) goto L81
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                boolean r2 = com.mbridge.msdk.playercommon.PlayerView.access$700(r2)     // Catch: java.lang.Exception -> L87
                if (r2 != 0) goto L81
                boolean r2 = com.mbridge.msdk.foundation.b.b.c     // Catch: java.lang.Exception -> L87
                if (r2 != 0) goto L81
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                com.mbridge.msdk.playercommon.VideoFeedsPlayer r2 = com.mbridge.msdk.playercommon.PlayerView.access$100(r2)     // Catch: java.lang.Exception -> L87
                boolean r2 = r2.hasPrepare()     // Catch: java.lang.Exception -> L87
                if (r2 == 0) goto L43
                java.lang.String r2 = "surfaceChanged  start===="
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L87
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                r2.resumeStart()     // Catch: java.lang.Exception -> L87
                goto L4d
            L43:
                java.lang.String r2 = "surfaceChanged  PLAY===="
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L87
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                r2.playVideo(r3)     // Catch: java.lang.Exception -> L87
            L4d:
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                boolean r2 = com.mbridge.msdk.playercommon.PlayerView.access$700(r2)     // Catch: java.lang.Exception -> L87
                if (r2 == 0) goto L81
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                boolean r2 = com.mbridge.msdk.playercommon.PlayerView.access$800(r2)     // Catch: java.lang.Exception -> L87
                if (r2 == 0) goto L7c
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                com.mbridge.msdk.playercommon.VideoFeedsPlayer r2 = com.mbridge.msdk.playercommon.PlayerView.access$100(r2)     // Catch: java.lang.Exception -> L87
                boolean r2 = r2.hasPrepare()     // Catch: java.lang.Exception -> L87
                if (r2 != 0) goto L72
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                com.mbridge.msdk.playercommon.VideoFeedsPlayer r2 = com.mbridge.msdk.playercommon.PlayerView.access$100(r2)     // Catch: java.lang.Exception -> L87
                r2.prepare()     // Catch: java.lang.Exception -> L87
            L72:
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                com.mbridge.msdk.playercommon.VideoFeedsPlayer r2 = com.mbridge.msdk.playercommon.PlayerView.access$100(r2)     // Catch: java.lang.Exception -> L87
                r2.start(r3)     // Catch: java.lang.Exception -> L87
                goto L81
            L7c:
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                r2.pause()     // Catch: java.lang.Exception -> L87
            L81:
                com.mbridge.msdk.playercommon.PlayerView r2 = r0.this$0     // Catch: java.lang.Exception -> L87
                com.mbridge.msdk.playercommon.PlayerView.access$402(r2, r3)     // Catch: java.lang.Exception -> L87
                goto L8f
            L87:
                r2 = move-exception
                java.lang.String r2 = r2.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r1, r2)
            L8f:
                return
        }

        @Override
        public void surfaceCreated(android.view.SurfaceHolder r3) {
                r2 = this;
                java.lang.String r0 = "PlayerView"
                java.lang.String r1 = "surfaceCreated"
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L26
                com.mbridge.msdk.playercommon.PlayerView r1 = r2.this$0     // Catch: java.lang.Exception -> L26
                com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = com.mbridge.msdk.playercommon.PlayerView.access$100(r1)     // Catch: java.lang.Exception -> L26
                if (r1 == 0) goto L1f
                if (r3 == 0) goto L1f
                com.mbridge.msdk.playercommon.PlayerView r1 = r2.this$0     // Catch: java.lang.Exception -> L26
                com.mbridge.msdk.playercommon.PlayerView.access$202(r1, r3)     // Catch: java.lang.Exception -> L26
                com.mbridge.msdk.playercommon.PlayerView r1 = r2.this$0     // Catch: java.lang.Exception -> L26
                com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = com.mbridge.msdk.playercommon.PlayerView.access$100(r1)     // Catch: java.lang.Exception -> L26
                r1.setDisplay(r3)     // Catch: java.lang.Exception -> L26
            L1f:
                com.mbridge.msdk.playercommon.PlayerView r3 = r2.this$0     // Catch: java.lang.Exception -> L26
                r1 = 0
                com.mbridge.msdk.playercommon.PlayerView.access$302(r3, r1)     // Catch: java.lang.Exception -> L26
                goto L2e
            L26:
                r3 = move-exception
                java.lang.String r3 = r3.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            L2e:
                return
        }

        @Override
        public void surfaceDestroyed(android.view.SurfaceHolder r3) {
                r2 = this;
                java.lang.String r3 = "PlayerView"
                java.lang.String r0 = "surfaceDestroyed "
                com.mbridge.msdk.foundation.tools.z.b(r3, r0)     // Catch: java.lang.Exception -> L1c
                com.mbridge.msdk.playercommon.PlayerView r0 = r2.this$0     // Catch: java.lang.Exception -> L1c
                r1 = 1
                com.mbridge.msdk.playercommon.PlayerView.access$402(r0, r1)     // Catch: java.lang.Exception -> L1c
                com.mbridge.msdk.playercommon.PlayerView r0 = r2.this$0     // Catch: java.lang.Exception -> L1c
                com.mbridge.msdk.playercommon.PlayerView.access$502(r0, r1)     // Catch: java.lang.Exception -> L1c
                com.mbridge.msdk.playercommon.PlayerView r0 = r2.this$0     // Catch: java.lang.Exception -> L1c
                com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = com.mbridge.msdk.playercommon.PlayerView.access$100(r0)     // Catch: java.lang.Exception -> L1c
                r0.pause()     // Catch: java.lang.Exception -> L1c
                goto L24
            L1c:
                r0 = move-exception
                java.lang.String r0 = r0.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r3, r0)
            L24:
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
            r1.orientation = r0
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
            r0.orientation = r2
            r0.init()
            return
    }

    static com.mbridge.msdk.playercommon.VideoFeedsPlayer access$100(com.mbridge.msdk.playercommon.PlayerView r0) {
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r0.mVideoFeedsPlayer
            return r0
    }

    static android.view.SurfaceHolder access$202(com.mbridge.msdk.playercommon.PlayerView r0, android.view.SurfaceHolder r1) {
            r0.mSurfaceHolder = r1
            return r1
    }

    static boolean access$302(com.mbridge.msdk.playercommon.PlayerView r0, boolean r1) {
            r0.mIsFirstCreateHolder = r1
            return r1
    }

    static boolean access$400(com.mbridge.msdk.playercommon.PlayerView r0) {
            boolean r0 = r0.mIsSurfaceHolderDestoryed
            return r0
    }

    static boolean access$402(com.mbridge.msdk.playercommon.PlayerView r0, boolean r1) {
            r0.mIsSurfaceHolderDestoryed = r1
            return r1
    }

    static boolean access$502(com.mbridge.msdk.playercommon.PlayerView r0, boolean r1) {
            r0.mIsNeedToRepeatPrepare = r1
            return r1
    }

    static boolean access$600(com.mbridge.msdk.playercommon.PlayerView r0) {
            boolean r0 = r0.mIsCovered
            return r0
    }

    static boolean access$700(com.mbridge.msdk.playercommon.PlayerView r0) {
            boolean r0 = r0.isBTVideo
            return r0
    }

    static boolean access$800(com.mbridge.msdk.playercommon.PlayerView r0) {
            boolean r0 = r0.isBTVideoPlaying
            return r0
    }

    private void init() {
            r2 = this;
            r2.initView()     // Catch: java.lang.Exception -> L7
            r2.initPlayer()     // Catch: java.lang.Exception -> L7
            goto L11
        L7:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L11:
            return
    }

    private void initPlayer() {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = new com.mbridge.msdk.playercommon.VideoFeedsPlayer
            r0.<init>()
            r1.mVideoFeedsPlayer = r0
            return
    }

    private void initView() {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            java.lang.String r1 = "mbridge_playercommon_player_view"
            java.lang.String r2 = "layout"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r1, r2)
            android.content.Context r1 = r4.getContext()
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
            r2 = 0
            android.view.View r0 = r1.inflate(r0, r2)
            if (r0 == 0) goto L48
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "id"
            java.lang.String r3 = "mbridge_playercommon_ll_sur_container"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.LinearLayout r1 = (android.widget.LinearLayout) r1
            r4.mLlSurContainer = r1
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "mbridge_playercommon_ll_loading"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r3, r2)
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
            r5 = this;
            java.lang.String r0 = "PlayerView"
            java.lang.String r1 = "addSurfaceView"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L36
            android.view.SurfaceView r1 = new android.view.SurfaceView     // Catch: java.lang.Exception -> L36
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Exception -> L36
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Exception -> L36
            r1.<init>(r2)     // Catch: java.lang.Exception -> L36
            android.view.SurfaceHolder r2 = r1.getHolder()     // Catch: java.lang.Exception -> L36
            r5.mSurfaceHolder = r2     // Catch: java.lang.Exception -> L36
            r3 = 3
            r2.setType(r3)     // Catch: java.lang.Exception -> L36
            android.view.SurfaceHolder r2 = r5.mSurfaceHolder     // Catch: java.lang.Exception -> L36
            r3 = 1
            r2.setKeepScreenOn(r3)     // Catch: java.lang.Exception -> L36
            android.view.SurfaceHolder r2 = r5.mSurfaceHolder     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.playercommon.PlayerView$MySurfaceHoldeCallback r3 = new com.mbridge.msdk.playercommon.PlayerView$MySurfaceHoldeCallback     // Catch: java.lang.Exception -> L36
            r4 = 0
            r3.<init>(r5, r4)     // Catch: java.lang.Exception -> L36
            r2.addCallback(r3)     // Catch: java.lang.Exception -> L36
            android.widget.LinearLayout r2 = r5.mLlSurContainer     // Catch: java.lang.Exception -> L36
            r3 = -1
            r2.addView(r1, r3, r3)     // Catch: java.lang.Exception -> L36
            goto L3e
        L36:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L3e:
            return
    }

    public org.json.JSONObject buildH5JsonObject(int r5) {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L63
            r1.<init>()     // Catch: org.json.JSONException -> L63
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.n     // Catch: org.json.JSONException -> L60
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L60
            android.content.Context r2 = r2.j()     // Catch: org.json.JSONException -> L60
            float r3 = r4.xInScreen     // Catch: org.json.JSONException -> L60
            int r2 = com.mbridge.msdk.foundation.tools.ae.a(r2, r3)     // Catch: org.json.JSONException -> L60
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L60
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.o     // Catch: org.json.JSONException -> L60
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L60
            android.content.Context r2 = r2.j()     // Catch: org.json.JSONException -> L60
            float r3 = r4.yInScreen     // Catch: org.json.JSONException -> L60
            int r2 = com.mbridge.msdk.foundation.tools.ae.a(r2, r3)     // Catch: org.json.JSONException -> L60
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L60
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.q     // Catch: org.json.JSONException -> L60
            r1.put(r0, r5)     // Catch: org.json.JSONException -> L60
            android.content.Context r5 = r4.getContext()     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            android.content.res.Resources r5 = r5.getResources()     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            android.content.res.Configuration r5 = r5.getConfiguration()     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            int r5 = r5.orientation     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            r4.orientation = r5     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            goto L4a
        L46:
            r5 = move-exception
            r5.printStackTrace()     // Catch: org.json.JSONException -> L60
        L4a:
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.r     // Catch: org.json.JSONException -> L60
            int r0 = r4.orientation     // Catch: org.json.JSONException -> L60
            r1.put(r5, r0)     // Catch: org.json.JSONException -> L60
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.s     // Catch: org.json.JSONException -> L60
            android.content.Context r0 = r4.getContext()     // Catch: org.json.JSONException -> L60
            float r0 = com.mbridge.msdk.foundation.tools.ae.d(r0)     // Catch: org.json.JSONException -> L60
            double r2 = (double) r0     // Catch: org.json.JSONException -> L60
            r1.put(r5, r2)     // Catch: org.json.JSONException -> L60
            goto L68
        L60:
            r5 = move-exception
            r0 = r1
            goto L64
        L63:
            r5 = move-exception
        L64:
            r5.printStackTrace()
            r1 = r0
        L68:
            return r1
    }

    public void closeSound() {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            if (r0 == 0) goto L7
            r0.closeSound()
        L7:
            return
    }

    public void coverUnlockResume() {
            r3 = this;
            java.lang.String r0 = "PlayerView"
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = r3.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L27
            r2 = 1
            r1.setIsFrontDesk(r2)     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = r3.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto L2f
            java.lang.String r1 = "coverUnlockResume========"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = r3.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L27
            boolean r1 = r1.hasPrepare()     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto L22
            boolean r1 = r3.mIsNeedToRepeatPrepare     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto L1e
            goto L22
        L1e:
            r3.start(r2)     // Catch: java.lang.Throwable -> L27
            goto L2f
        L22:
            r1 = 0
            r3.playVideo(r1)     // Catch: java.lang.Throwable -> L27
            goto L2f
        L27:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L2f:
            return
    }

    public int getCurPosition() {
            r3 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = r3.mVideoFeedsPlayer     // Catch: java.lang.Exception -> Lc
            if (r1 == 0) goto L16
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = r3.mVideoFeedsPlayer     // Catch: java.lang.Exception -> Lc
            int r0 = r1.getCurPosition()     // Catch: java.lang.Exception -> Lc
            goto L16
        Lc:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L16:
            return r0
    }

    public int getDuration() {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            if (r0 == 0) goto L9
            int r0 = r0.getDuration()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public void initBufferIngParam(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            if (r0 == 0) goto L7
            r0.initBufferIngParam(r2)
        L7:
            return
    }

    public boolean initVFPData(java.lang.String r3, java.lang.String r4, com.mbridge.msdk.playercommon.VideoPlayerStatusListener r5) {
            r2 = this;
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 == 0) goto Lf
            java.lang.String r3 = "PlayerView"
            java.lang.String r4 = "playUrl==null"
            com.mbridge.msdk.foundation.tools.z.b(r3, r4)
            r3 = 0
            return r3
        Lf:
            r2.mPlayUrl = r3
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r4 = r2.mVideoFeedsPlayer
            android.content.Context r0 = r2.getContext()
            android.widget.LinearLayout r1 = r2.mLoadingView
            r4.initPlayer(r0, r1, r3, r5)
            r3 = 1
            r2.mInitState = r3
            return r3
    }

    public boolean isComplete() {
            r4 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = r4.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Le
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = r4.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> Lf
            boolean r1 = r1.isComplete()     // Catch: java.lang.Throwable -> Lf
            if (r1 == 0) goto Le
            r0 = 1
        Le:
            return r0
        Lf:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            java.lang.String r3 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.c(r3, r2, r1)
            return r0
    }

    public boolean isPlayIng() {
            r2 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto L15
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> Lb
            boolean r0 = r0.isPlayIng()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L15:
            r0 = 0
            return r0
    }

    public boolean isSilent() {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            boolean r0 = r0.isSilent()
            return r0
    }

    public void justSeekTo(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L14
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            r0.justSeekTo(r2)     // Catch: java.lang.Exception -> La
            goto L14
        La:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L14:
            return
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            float r0 = r2.getRawX()
            r1.xInScreen = r0
            float r0 = r2.getRawY()
            r1.yInScreen = r0
            boolean r2 = super.onInterceptTouchEvent(r2)
            return r2
    }

    public void onPause() {
            r2 = this;
            r2.pause()     // Catch: java.lang.Exception -> Le
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> Le
            if (r0 == 0) goto L18
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> Le
            r1 = 0
            r0.setIsFrontDesk(r1)     // Catch: java.lang.Exception -> Le
            goto L18
        Le:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L18:
            return
    }

    public void onResume() {
            r3 = this;
            java.lang.String r0 = "PlayerView"
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = r3.mVideoFeedsPlayer     // Catch: java.lang.Exception -> L30
            r2 = 1
            r1.setIsFrontDesk(r2)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = r3.mVideoFeedsPlayer     // Catch: java.lang.Exception -> L30
            if (r1 == 0) goto L38
            boolean r1 = r3.mIsSurfaceHolderDestoryed     // Catch: java.lang.Exception -> L30
            if (r1 != 0) goto L38
            boolean r1 = r3.isComplete()     // Catch: java.lang.Exception -> L30
            if (r1 != 0) goto L38
            boolean r1 = r3.mIsCovered     // Catch: java.lang.Exception -> L30
            if (r1 != 0) goto L38
            java.lang.String r1 = "onresume========"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = r3.mVideoFeedsPlayer     // Catch: java.lang.Exception -> L30
            boolean r1 = r1.hasPrepare()     // Catch: java.lang.Exception -> L30
            if (r1 == 0) goto L2b
            r3.resumeStart()     // Catch: java.lang.Exception -> L30
            goto L38
        L2b:
            r1 = 0
            r3.playVideo(r1)     // Catch: java.lang.Exception -> L30
            goto L38
        L30:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L38:
            return
    }

    public void openSound() {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            if (r0 == 0) goto L7
            r0.openSound()
        L7:
            return
    }

    public void pause() {
            r2 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L14
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            r0.pause()     // Catch: java.lang.Exception -> La
            goto L14
        La:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L14:
            return
    }

    public boolean playVideo() {
            r1 = this;
            r0 = 0
            boolean r0 = r1.playVideo(r0)
            return r0
    }

    public boolean playVideo(int r5) {
            r4 = this;
            java.lang.String r0 = "PlayerView"
            r1 = 0
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r2 = r4.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L22
            if (r2 != 0) goto Ld
            java.lang.String r5 = "player init error 播放失败"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L22
            return r1
        Ld:
            boolean r2 = r4.mInitState     // Catch: java.lang.Throwable -> L22
            if (r2 != 0) goto L17
            java.lang.String r5 = "vfp init failed 播放失败"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L22
            return r1
        L17:
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r2 = r4.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L22
            java.lang.String r3 = r4.mPlayUrl     // Catch: java.lang.Throwable -> L22
            r2.play(r3, r5)     // Catch: java.lang.Throwable -> L22
            r4.mIsNeedToRepeatPrepare = r1     // Catch: java.lang.Throwable -> L22
            r5 = 1
            return r5
        L22:
            r5 = move-exception
            java.lang.String r2 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r5)
            return r1
    }

    public void prepare() {
            r2 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L14
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            r0.prepare()     // Catch: java.lang.Exception -> La
            goto L14
        La:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L14:
            return
    }

    public void release() {
            r2 = this;
            java.lang.String r0 = "PlayerView"
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = r2.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto Lb
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r1 = r2.mVideoFeedsPlayer     // Catch: java.lang.Throwable -> L1e
            r1.releasePlayer()     // Catch: java.lang.Throwable -> L1e
        Lb:
            android.view.SurfaceHolder r1 = r2.mSurfaceHolder     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L26
            java.lang.String r1 = "mSurfaceHolder release"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L1e
            android.view.SurfaceHolder r1 = r2.mSurfaceHolder     // Catch: java.lang.Throwable -> L1e
            android.view.Surface r1 = r1.getSurface()     // Catch: java.lang.Throwable -> L1e
            r1.release()     // Catch: java.lang.Throwable -> L1e
            goto L26
        L1e:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L26:
            return
    }

    public void removeSurface() {
            r2 = this;
            java.lang.String r0 = "PlayerView"
            java.lang.String r1 = "removeSurface"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> Ld
            android.widget.LinearLayout r1 = r2.mLlSurContainer     // Catch: java.lang.Exception -> Ld
            r1.removeAllViews()     // Catch: java.lang.Exception -> Ld
            goto L15
        Ld:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L15:
            return
    }

    public void resumeStart() {
            r2 = this;
            r0 = 1
            r2.start(r0)     // Catch: java.lang.Exception -> L5
            goto Lf
        L5:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        Lf:
            return
    }

    public void seekTo(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L14
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            r0.seekTo(r2)     // Catch: java.lang.Exception -> La
            goto L14
        La:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L14:
            return
    }

    public void setDataSource() {
            r2 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> L12
            if (r0 == 0) goto L1c
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> L12
            r0.showLoading()     // Catch: java.lang.Exception -> L12
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> L12
            r0.setDataSource()     // Catch: java.lang.Exception -> L12
            r0 = 0
            r2.mIsNeedToRepeatPrepare = r0     // Catch: java.lang.Exception -> L12
            goto L1c
        L12:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1c:
            return
    }

    public void setDesk(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
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

    public void setIsCovered(boolean r4) {
            r3 = this;
            java.lang.String r0 = "PlayerView"
            r3.mIsCovered = r4     // Catch: java.lang.Exception -> L19
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L19
            r1.<init>()     // Catch: java.lang.Exception -> L19
            java.lang.String r2 = "mIsCovered:"
            r1.append(r2)     // Catch: java.lang.Exception -> L19
            r1.append(r4)     // Catch: java.lang.Exception -> L19
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L19
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Exception -> L19
            goto L21
        L19:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L21:
            return
    }

    public void setPlaybackParams(float r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            if (r0 == 0) goto L7
            r0.setPlaybackParams(r2)
        L7:
            return
    }

    public void setVolume(float r2, float r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer
            if (r0 == 0) goto L7
            r0.setVolume(r2, r3)
        L7:
            return
    }

    public void start(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L14
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            r0.start(r2)     // Catch: java.lang.Exception -> La
            goto L14
        La:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L14:
            return
    }

    public void start(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> Le
            if (r0 == 0) goto L18
            boolean r0 = r1.mIsCovered     // Catch: java.lang.Exception -> Le
            if (r0 != 0) goto L18
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r1.mVideoFeedsPlayer     // Catch: java.lang.Exception -> Le
            r0.start(r2)     // Catch: java.lang.Exception -> Le
            goto L18
        Le:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L18:
            return
    }

    public void stop() {
            r2 = this;
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto L14
            com.mbridge.msdk.playercommon.VideoFeedsPlayer r0 = r2.mVideoFeedsPlayer     // Catch: java.lang.Exception -> La
            r0.stop()     // Catch: java.lang.Exception -> La
            goto L14
        La:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "PlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L14:
            return
    }
}
