package com.mbridge.msdk.nativex.view;

public class MediaViewPlayerView extends android.widget.LinearLayout implements com.mbridge.msdk.playercommon.VideoPlayerStatusListener {
    private static android.os.Handler F;
    private java.lang.String A;
    private java.lang.String B;
    private com.mbridge.msdk.foundation.entity.CampaignEx C;
    private com.mbridge.msdk.nativex.listener.a D;
    private java.util.Timer E;
    private com.mbridge.msdk.videocommon.download.a G;
    private com.mbridge.msdk.playercommon.VideoNativePlayer H;
    private com.mbridge.msdk.nativex.view.MediaViewPlayerView.a I;
    private com.iab.omid.library.mmadbridge.adsession.AdSession J;
    private com.iab.omid.library.mmadbridge.adsession.media.MediaEvents K;
    private boolean L;
    private boolean a;
    private boolean b;
    private boolean c;
    private boolean d;
    private boolean e;
    private boolean f;
    private boolean g;
    private boolean h;
    private boolean i;
    private boolean j;
    private boolean k;
    private volatile int l;
    private boolean m;
    private boolean n;
    private android.view.TextureView o;
    private android.widget.LinearLayout p;
    private android.view.Surface q;
    private android.widget.ProgressBar r;
    private com.mbridge.msdk.videocommon.view.MyImageView s;
    private android.widget.ImageView t;
    private android.widget.ImageView u;
    private android.widget.ImageView v;
    private android.widget.ImageView w;
    private android.view.View x;
    private android.graphics.drawable.AnimationDrawable y;
    private android.view.animation.AlphaAnimation z;








    public static class a {
        private com.mbridge.msdk.nativex.view.MediaViewPlayerView a;

        public a(com.mbridge.msdk.nativex.view.MediaViewPlayerView r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        public void a() {
                r2 = this;
                java.lang.String r0 = "MediaViewPlayerView"
                java.lang.String r1 = "=========onPlayCompleted"
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L1f
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r2.a     // Catch: java.lang.Exception -> L1f
                if (r1 != 0) goto Lc
                return
            Lc:
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r2.a     // Catch: java.lang.Exception -> L1f
                boolean r1 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.j(r1)     // Catch: java.lang.Exception -> L1f
                if (r1 != 0) goto L27
                java.lang.String r1 = "播放结束 不能循环播放 显示endcardView"
                com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L1f
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r2.a     // Catch: java.lang.Exception -> L1f
                com.mbridge.msdk.nativex.view.MediaViewPlayerView.k(r1)     // Catch: java.lang.Exception -> L1f
                goto L27
            L1f:
                r1 = move-exception
                java.lang.String r1 = r1.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            L27:
                return
        }
    }

    private class b implements android.view.TextureView.SurfaceTextureListener {
        final com.mbridge.msdk.nativex.view.MediaViewPlayerView a;

        private b(com.mbridge.msdk.nativex.view.MediaViewPlayerView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        b(com.mbridge.msdk.nativex.view.MediaViewPlayerView r1, com.mbridge.msdk.nativex.view.MediaViewPlayerView.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onSurfaceTextureAvailable(android.graphics.SurfaceTexture r2, int r3, int r4) {
                r1 = this;
                java.lang.String r3 = "MediaViewPlayerView"
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17e
                r4.<init>()     // Catch: java.lang.Exception -> L17e
                java.lang.String r0 = "onSurfaceTextureAvailable 进来: "
                r4.append(r0)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.a     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.l(r0)     // Catch: java.lang.Exception -> L17e
                if (r0 != 0) goto L17
                java.lang.String r0 = "appname"
                goto L21
            L17:
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.a     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.l(r0)     // Catch: java.lang.Exception -> L17e
                java.lang.String r0 = r0.getAppName()     // Catch: java.lang.Exception -> L17e
            L21:
                r4.append(r0)     // Catch: java.lang.Exception -> L17e
                java.lang.String r0 = " url:"
                r4.append(r0)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.a     // Catch: java.lang.Exception -> L17e
                java.lang.String r0 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.m(r0)     // Catch: java.lang.Exception -> L17e
                r4.append(r0)     // Catch: java.lang.Exception -> L17e
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.foundation.tools.z.d(r3, r4)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r1.a     // Catch: java.lang.Exception -> L17e
                android.view.Surface r0 = new android.view.Surface     // Catch: java.lang.Exception -> L17e
                r0.<init>(r2)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView.a(r4, r0)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                r4 = 1
                com.mbridge.msdk.nativex.view.MediaViewPlayerView.b(r2, r4)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView.c(r2, r4)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r2 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.n(r2)     // Catch: java.lang.Exception -> L17e
                if (r2 == 0) goto L9c
                java.lang.String r2 = "onSurfaceTextureAvailable 在全屏"
                com.mbridge.msdk.foundation.tools.z.b(r3, r2)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r2 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.o(r2)     // Catch: java.lang.Exception -> L17e
                if (r2 == 0) goto L73
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                r4 = 0
                com.mbridge.msdk.nativex.view.MediaViewPlayerView.d(r2, r4)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView.e(r2, r4)     // Catch: java.lang.Exception -> L17e
                java.lang.String r2 = "onSurfaceTextureAvailable 在全屏 mIsNeedToRepeatPrepare置为false"
                com.mbridge.msdk.foundation.tools.z.b(r3, r2)     // Catch: java.lang.Exception -> L17e
            L73:
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r2 = r2.isComplete()     // Catch: java.lang.Exception -> L17e
                if (r2 != 0) goto L90
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r2 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.p(r2)     // Catch: java.lang.Exception -> L17e
                if (r2 == 0) goto L84
                goto L90
            L84:
                java.lang.String r2 = "onSurfaceTextureAvailable 在全屏 startOrPlayVideo"
                com.mbridge.msdk.foundation.tools.z.b(r3, r2)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                r2.startOrPlayVideo()     // Catch: java.lang.Exception -> L17e
                goto L186
            L90:
                java.lang.String r2 = "onSurfaceTextureAvailable 在全屏 showPlayEndView"
                com.mbridge.msdk.foundation.tools.z.b(r3, r2)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView.k(r2)     // Catch: java.lang.Exception -> L17e
                goto L186
            L9c:
                java.lang.String r2 = "onSurfaceTextureAvailable 在半屏"
                com.mbridge.msdk.foundation.tools.z.b(r3, r2)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r2 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.q(r2)     // Catch: java.lang.Exception -> L17e
                java.lang.String r4 = " isComplete:"
                if (r2 == 0) goto L115
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r2 = r2.hasPrepare()     // Catch: java.lang.Exception -> L17e
                if (r2 == 0) goto Le9
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r2 = r2.isComplete()     // Catch: java.lang.Exception -> L17e
                if (r2 != 0) goto Lbc
                goto Le9
            Lbc:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17e
                r2.<init>()     // Catch: java.lang.Exception -> L17e
                java.lang.String r0 = "onSurfaceTextureAvailable 在半屏 自动播放showPlayEndView hasPrepare():"
                r2.append(r0)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r0 = r0.hasPrepare()     // Catch: java.lang.Exception -> L17e
                r2.append(r0)     // Catch: java.lang.Exception -> L17e
                r2.append(r4)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r4 = r4.isComplete()     // Catch: java.lang.Exception -> L17e
                r2.append(r4)     // Catch: java.lang.Exception -> L17e
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.foundation.tools.z.b(r3, r2)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView.k(r2)     // Catch: java.lang.Exception -> L17e
                goto L186
            Le9:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17e
                r2.<init>()     // Catch: java.lang.Exception -> L17e
                java.lang.String r0 = "onSurfaceTextureAvailable 在半屏 自动播放startOrPlayVideo hasPrepare():"
                r2.append(r0)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r0 = r0.hasPrepare()     // Catch: java.lang.Exception -> L17e
                r2.append(r0)     // Catch: java.lang.Exception -> L17e
                r2.append(r4)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r4 = r4.isComplete()     // Catch: java.lang.Exception -> L17e
                r2.append(r4)     // Catch: java.lang.Exception -> L17e
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.foundation.tools.z.b(r3, r2)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                r2.startOrPlayVideo()     // Catch: java.lang.Exception -> L17e
                goto L186
            L115:
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r2 = r2.hasPrepare()     // Catch: java.lang.Exception -> L17e
                if (r2 == 0) goto L152
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r2 = r2.isComplete()     // Catch: java.lang.Exception -> L17e
                if (r2 == 0) goto L126
                goto L152
            L126:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17e
                r2.<init>()     // Catch: java.lang.Exception -> L17e
                java.lang.String r0 = "onSurfaceTextureAvailable 在半屏 startOrPlayVideo hasPrepare():"
                r2.append(r0)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r0 = r0.hasPrepare()     // Catch: java.lang.Exception -> L17e
                r2.append(r0)     // Catch: java.lang.Exception -> L17e
                r2.append(r4)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r4 = r4.isComplete()     // Catch: java.lang.Exception -> L17e
                r2.append(r4)     // Catch: java.lang.Exception -> L17e
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.foundation.tools.z.b(r3, r2)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                r2.startOrPlayVideo()     // Catch: java.lang.Exception -> L17e
                goto L186
            L152:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17e
                r2.<init>()     // Catch: java.lang.Exception -> L17e
                java.lang.String r0 = "onSurfaceTextureAvailable 在半屏 点击播放showPlayEndView hasPrepare():"
                r2.append(r0)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r0 = r0.hasPrepare()     // Catch: java.lang.Exception -> L17e
                r2.append(r0)     // Catch: java.lang.Exception -> L17e
                r2.append(r4)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r1.a     // Catch: java.lang.Exception -> L17e
                boolean r4 = r4.isComplete()     // Catch: java.lang.Exception -> L17e
                r2.append(r4)     // Catch: java.lang.Exception -> L17e
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.foundation.tools.z.b(r3, r2)     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r1.a     // Catch: java.lang.Exception -> L17e
                com.mbridge.msdk.nativex.view.MediaViewPlayerView.k(r2)     // Catch: java.lang.Exception -> L17e
                goto L186
            L17e:
                r2 = move-exception
                java.lang.String r2 = r2.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r3, r2)
            L186:
                return
        }

        @Override
        public final boolean onSurfaceTextureDestroyed(android.graphics.SurfaceTexture r4) {
                r3 = this;
                java.lang.String r4 = "MediaViewPlayerView"
                r0 = 1
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L51
                r1.<init>()     // Catch: java.lang.Throwable -> L51
                java.lang.String r2 = "onSurfaceTextureDestroyed:"
                r1.append(r2)     // Catch: java.lang.Throwable -> L51
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r3.a     // Catch: java.lang.Throwable -> L51
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.l(r2)     // Catch: java.lang.Throwable -> L51
                if (r2 != 0) goto L18
                java.lang.String r2 = "appname"
                goto L22
            L18:
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r3.a     // Catch: java.lang.Throwable -> L51
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.l(r2)     // Catch: java.lang.Throwable -> L51
                java.lang.String r2 = r2.getAppName()     // Catch: java.lang.Throwable -> L51
            L22:
                r1.append(r2)     // Catch: java.lang.Throwable -> L51
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L51
                com.mbridge.msdk.foundation.tools.z.d(r4, r1)     // Catch: java.lang.Throwable -> L51
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r3.a     // Catch: java.lang.Throwable -> L51
                com.mbridge.msdk.playercommon.VideoNativePlayer r1 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.r(r1)     // Catch: java.lang.Throwable -> L51
                if (r1 == 0) goto L45
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r3.a     // Catch: java.lang.Throwable -> L51
                com.mbridge.msdk.playercommon.VideoNativePlayer r1 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.r(r1)     // Catch: java.lang.Throwable -> L51
                boolean r1 = r1.isPlayIng()     // Catch: java.lang.Throwable -> L51
                if (r1 == 0) goto L45
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r3.a     // Catch: java.lang.Throwable -> L51
                r1.pause()     // Catch: java.lang.Throwable -> L51
            L45:
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r3.a     // Catch: java.lang.Throwable -> L51
                com.mbridge.msdk.nativex.view.MediaViewPlayerView.d(r1, r0)     // Catch: java.lang.Throwable -> L51
                com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r3.a     // Catch: java.lang.Throwable -> L51
                r2 = 0
                com.mbridge.msdk.nativex.view.MediaViewPlayerView.b(r1, r2)     // Catch: java.lang.Throwable -> L51
                goto L59
            L51:
                r1 = move-exception
                java.lang.String r1 = r1.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r4, r1)
            L59:
                return r0
        }

        @Override
        public final void onSurfaceTextureSizeChanged(android.graphics.SurfaceTexture r1, int r2, int r3) {
                r0 = this;
                java.lang.String r1 = "MediaViewPlayerView"
                java.lang.String r2 = "onSurfaceTextureSizeChanged "
                com.mbridge.msdk.foundation.tools.z.b(r1, r2)
                return
        }

        @Override
        public final void onSurfaceTextureUpdated(android.graphics.SurfaceTexture r1) {
                r0 = this;
                return
        }
    }

    static {
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            com.mbridge.msdk.nativex.view.MediaViewPlayerView.F = r0
            return
    }

    public MediaViewPlayerView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r3 = 0
            r2.a = r3
            r2.b = r3
            r2.c = r3
            r2.d = r3
            r2.e = r3
            r2.f = r3
            r2.g = r3
            r0 = 1
            r2.h = r0
            r2.i = r3
            r2.j = r0
            r2.k = r3
            r1 = -1
            r2.l = r1
            r2.m = r0
            r2.n = r0
            r0 = 0
            r2.J = r0
            r2.K = r0
            r2.L = r3
            r2.a()
            return
    }

    public MediaViewPlayerView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            r2 = 0
            r1.a = r2
            r1.b = r2
            r1.c = r2
            r1.d = r2
            r1.e = r2
            r1.f = r2
            r1.g = r2
            r3 = 1
            r1.h = r3
            r1.i = r2
            r1.j = r3
            r1.k = r2
            r0 = -1
            r1.l = r0
            r1.m = r3
            r1.n = r3
            r3 = 0
            r1.J = r3
            r1.K = r3
            r1.L = r2
            r1.a()
            return
    }

    static android.view.Surface a(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0, android.view.Surface r1) {
            r0.q = r1
            return r1
    }

    private void a() {
            r2 = this;
            r2.c()     // Catch: java.lang.Exception -> L7
            r2.b()     // Catch: java.lang.Exception -> L7
            goto L11
        L7:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L11:
            return
    }

    static boolean a(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            boolean r0 = r0.k
            return r0
    }

    static boolean a(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0, boolean r1) {
            r0.e = r1
            return r1
    }

    static com.mbridge.msdk.nativex.listener.a b(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            com.mbridge.msdk.nativex.listener.a r0 = r0.D
            return r0
    }

    private void b() {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = new com.mbridge.msdk.playercommon.VideoNativePlayer
            r0.<init>()
            r1.H = r0
            r0.setSelfVideoFeedsPlayerListener(r1)
            return
    }

    static boolean b(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0, boolean r1) {
            r0.g = r1
            return r1
    }

    static android.widget.ImageView c(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            android.widget.ImageView r0 = r0.t
            return r0
    }

    private void c() {
            r5 = this;
            java.lang.String r0 = "id"
            android.content.Context r1 = r5.getContext()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r2 = "mbridge_nativex_playerview"
            java.lang.String r3 = "layout"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r2, r3)     // Catch: java.lang.Throwable -> Lde
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> Lde
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r2)     // Catch: java.lang.Throwable -> Lde
            r3 = 0
            android.view.View r1 = r2.inflate(r1, r3)     // Catch: java.lang.Throwable -> Lde
            if (r1 == 0) goto Le8
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r4 = "mbridge_ll_loading"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r4, r0)     // Catch: java.lang.Throwable -> Lde
            android.view.View r2 = r1.findViewById(r2)     // Catch: java.lang.Throwable -> Lde
            android.widget.LinearLayout r2 = (android.widget.LinearLayout) r2     // Catch: java.lang.Throwable -> Lde
            r5.p = r2     // Catch: java.lang.Throwable -> Lde
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r4 = "mbridge_textureview"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r4, r0)     // Catch: java.lang.Throwable -> Lde
            android.view.View r2 = r1.findViewById(r2)     // Catch: java.lang.Throwable -> Lde
            android.view.TextureView r2 = (android.view.TextureView) r2     // Catch: java.lang.Throwable -> Lde
            r5.o = r2     // Catch: java.lang.Throwable -> Lde
            r4 = 1
            r2.setKeepScreenOn(r4)     // Catch: java.lang.Throwable -> Lde
            android.view.TextureView r2 = r5.o     // Catch: java.lang.Throwable -> Lde
            com.mbridge.msdk.nativex.view.MediaViewPlayerView$b r4 = new com.mbridge.msdk.nativex.view.MediaViewPlayerView$b     // Catch: java.lang.Throwable -> Lde
            r4.<init>(r5, r3)     // Catch: java.lang.Throwable -> Lde
            r2.setSurfaceTextureListener(r4)     // Catch: java.lang.Throwable -> Lde
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = "mbridge_progress"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r0)     // Catch: java.lang.Throwable -> Lde
            android.view.View r2 = r1.findViewById(r2)     // Catch: java.lang.Throwable -> Lde
            android.widget.ProgressBar r2 = (android.widget.ProgressBar) r2     // Catch: java.lang.Throwable -> Lde
            r5.r = r2     // Catch: java.lang.Throwable -> Lde
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = "mbridge_iv_playend_pic"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r0)     // Catch: java.lang.Throwable -> Lde
            android.view.View r2 = r1.findViewById(r2)     // Catch: java.lang.Throwable -> Lde
            com.mbridge.msdk.videocommon.view.MyImageView r2 = (com.mbridge.msdk.videocommon.view.MyImageView) r2     // Catch: java.lang.Throwable -> Lde
            r5.s = r2     // Catch: java.lang.Throwable -> Lde
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = "mbridge_iv_play"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r0)     // Catch: java.lang.Throwable -> Lde
            android.view.View r2 = r1.findViewById(r2)     // Catch: java.lang.Throwable -> Lde
            android.widget.ImageView r2 = (android.widget.ImageView) r2     // Catch: java.lang.Throwable -> Lde
            r5.t = r2     // Catch: java.lang.Throwable -> Lde
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = "mbridge_iv_pause"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r0)     // Catch: java.lang.Throwable -> Lde
            android.view.View r2 = r1.findViewById(r2)     // Catch: java.lang.Throwable -> Lde
            android.widget.ImageView r2 = (android.widget.ImageView) r2     // Catch: java.lang.Throwable -> Lde
            r5.u = r2     // Catch: java.lang.Throwable -> Lde
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = "mbridge_iv_sound"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r0)     // Catch: java.lang.Throwable -> Lde
            android.view.View r2 = r1.findViewById(r2)     // Catch: java.lang.Throwable -> Lde
            android.widget.ImageView r2 = (android.widget.ImageView) r2     // Catch: java.lang.Throwable -> Lde
            r5.v = r2     // Catch: java.lang.Throwable -> Lde
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = "mbridge_view_cover"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r0)     // Catch: java.lang.Throwable -> Lde
            android.view.View r2 = r1.findViewById(r2)     // Catch: java.lang.Throwable -> Lde
            r5.x = r2     // Catch: java.lang.Throwable -> Lde
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = "mbridge_iv_sound_animation"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r0)     // Catch: java.lang.Throwable -> Lde
            android.view.View r0 = r1.findViewById(r0)     // Catch: java.lang.Throwable -> Lde
            android.widget.ImageView r0 = (android.widget.ImageView) r0     // Catch: java.lang.Throwable -> Lde
            r5.w = r0     // Catch: java.lang.Throwable -> Lde
            android.graphics.drawable.Drawable r0 = r0.getDrawable()     // Catch: java.lang.Throwable -> Lde
            android.graphics.drawable.AnimationDrawable r0 = (android.graphics.drawable.AnimationDrawable) r0     // Catch: java.lang.Throwable -> Lde
            r5.y = r0     // Catch: java.lang.Throwable -> Lde
            r0.start()     // Catch: java.lang.Throwable -> Lde
            r5.d()     // Catch: java.lang.Throwable -> Lde
            r0 = -1
            r5.addView(r1, r0, r0)     // Catch: java.lang.Throwable -> Lde
            goto Le8
        Lde:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        Le8:
            return
    }

    static boolean c(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0, boolean r1) {
            r0.i = r1
            return r1
    }

    private void d() {
            r2 = this;
            android.widget.ImageView r0 = r2.v
            com.mbridge.msdk.nativex.view.MediaViewPlayerView$1 r1 = new com.mbridge.msdk.nativex.view.MediaViewPlayerView$1
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.ImageView r0 = r2.u
            com.mbridge.msdk.nativex.view.MediaViewPlayerView$2 r1 = new com.mbridge.msdk.nativex.view.MediaViewPlayerView$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.ImageView r0 = r2.t
            com.mbridge.msdk.nativex.view.MediaViewPlayerView$3 r1 = new com.mbridge.msdk.nativex.view.MediaViewPlayerView$3
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            return
    }

    static void d(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            r0.i()
            return
    }

    static boolean d(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0, boolean r1) {
            r0.c = r1
            return r1
    }

    private void e() {
            r2 = this;
            com.mbridge.msdk.videocommon.view.MyImageView r0 = r2.s     // Catch: java.lang.Throwable -> L19
            r1 = 0
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L19
            android.widget.ImageView r0 = r2.t     // Catch: java.lang.Throwable -> L19
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L19
            r2.i()     // Catch: java.lang.Throwable -> L19
            r2.k()     // Catch: java.lang.Throwable -> L19
            android.widget.ProgressBar r0 = r2.r     // Catch: java.lang.Throwable -> L19
            r1 = 8
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L19
            goto L23
        L19:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L23:
            return
    }

    static void e(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            r0.k()
            return
    }

    static boolean e(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0, boolean r1) {
            r0.h = r1
            return r1
    }

    static android.widget.ImageView f(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            android.widget.ImageView r0 = r0.u
            return r0
    }

    private void f() {
            r2 = this;
            com.mbridge.msdk.videocommon.view.MyImageView r0 = r2.s     // Catch: java.lang.Throwable -> L15
            r1 = 8
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L15
            android.widget.ImageView r0 = r2.t     // Catch: java.lang.Throwable -> L15
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L15
            r2.j()     // Catch: java.lang.Throwable -> L15
            boolean r0 = r2.n     // Catch: java.lang.Throwable -> L15
            r2.showProgressView(r0)     // Catch: java.lang.Throwable -> L15
            goto L1f
        L15:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1f:
            return
    }

    private void g() {
            r2 = this;
            boolean r0 = r2.d
            if (r0 != 0) goto L18
            android.widget.ImageView r0 = r2.w
            if (r0 == 0) goto L18
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L18
            boolean r0 = r2.m
            if (r0 == 0) goto L18
            android.widget.ImageView r0 = r2.w
            r1 = 0
            r0.setVisibility(r1)
        L18:
            return
    }

    static void g(com.mbridge.msdk.nativex.view.MediaViewPlayerView r3) {
            r3.l()
            java.util.Timer r0 = new java.util.Timer
            r0.<init>()
            r3.E = r0
            com.mbridge.msdk.nativex.view.MediaViewPlayerView$7 r0 = new com.mbridge.msdk.nativex.view.MediaViewPlayerView$7
            r0.<init>(r3)
            java.util.Timer r3 = r3.E
            r1 = 2000(0x7d0, double:9.88E-321)
            r3.schedule(r0, r1)
            return
    }

    private void h() {
            r2 = this;
            android.widget.ImageView r0 = r2.w
            int r0 = r0.getVisibility()
            if (r0 != 0) goto Lf
            android.widget.ImageView r0 = r2.w
            r1 = 8
            r0.setVisibility(r1)
        Lf:
            return
    }

    static void h(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            r0.j()
            return
    }

    static com.mbridge.msdk.videocommon.view.MyImageView i(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            com.mbridge.msdk.videocommon.view.MyImageView r0 = r0.s
            return r0
    }

    private void i() {
            r2 = this;
            android.view.View r0 = r2.x
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    private void j() {
            r2 = this;
            android.widget.ImageView r0 = r2.t
            int r0 = r0.getVisibility()
            if (r0 == 0) goto Lf
            android.view.View r0 = r2.x
            r1 = 8
            r0.setVisibility(r1)
        Lf:
            return
    }

    static boolean j(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            boolean r0 = r0.j
            return r0
    }

    private void k() {
            r2 = this;
            android.widget.ImageView r0 = r2.u
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    static void k(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            r0.e()
            return
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx l(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.C
            return r0
    }

    private void l() {
            r2 = this;
            android.os.Handler r0 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.F     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto La
            android.os.Handler r0 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.F     // Catch: java.lang.Exception -> L14
            r1 = 0
            r0.removeCallbacksAndMessages(r1)     // Catch: java.lang.Exception -> L14
        La:
            java.util.Timer r0 = r2.E     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L1e
            java.util.Timer r0 = r2.E     // Catch: java.lang.Exception -> L14
            r0.cancel()     // Catch: java.lang.Exception -> L14
            goto L1e
        L14:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1e:
            return
    }

    private java.lang.String m() {
            r6 = this;
            java.lang.String r0 = "MediaViewPlayerView"
            r1 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.C     // Catch: java.lang.Exception -> Lef
            if (r2 != 0) goto L8
            return r1
        L8:
            com.mbridge.msdk.videocommon.download.a r2 = r6.G     // Catch: java.lang.Exception -> L77
            if (r2 != 0) goto L7f
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.C     // Catch: java.lang.Exception -> L77
            int r2 = r2.getAdType()     // Catch: java.lang.Exception -> L77
            r3 = 287(0x11f, float:4.02E-43)
            if (r2 == r3) goto L46
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.C     // Catch: java.lang.Exception -> L77
            int r2 = r2.getAdType()     // Catch: java.lang.Exception -> L77
            r3 = 94
            if (r2 != r3) goto L21
            goto L46
        L21:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L77
            r2.<init>()     // Catch: java.lang.Exception -> L77
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r6.C     // Catch: java.lang.Exception -> L77
            java.lang.String r3 = r3.getId()     // Catch: java.lang.Exception -> L77
            r2.append(r3)     // Catch: java.lang.Exception -> L77
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r6.C     // Catch: java.lang.Exception -> L77
            java.lang.String r3 = r3.getVideoUrlEncode()     // Catch: java.lang.Exception -> L77
            r2.append(r3)     // Catch: java.lang.Exception -> L77
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r6.C     // Catch: java.lang.Exception -> L77
            java.lang.String r3 = r3.getBidToken()     // Catch: java.lang.Exception -> L77
            r2.append(r3)     // Catch: java.lang.Exception -> L77
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L77
            goto L6a
        L46:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L77
            r2.<init>()     // Catch: java.lang.Exception -> L77
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r6.C     // Catch: java.lang.Exception -> L77
            java.lang.String r3 = r3.getRequestId()     // Catch: java.lang.Exception -> L77
            r2.append(r3)     // Catch: java.lang.Exception -> L77
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r6.C     // Catch: java.lang.Exception -> L77
            java.lang.String r3 = r3.getId()     // Catch: java.lang.Exception -> L77
            r2.append(r3)     // Catch: java.lang.Exception -> L77
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r6.C     // Catch: java.lang.Exception -> L77
            java.lang.String r3 = r3.getVideoUrlEncode()     // Catch: java.lang.Exception -> L77
            r2.append(r3)     // Catch: java.lang.Exception -> L77
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L77
        L6a:
            com.mbridge.msdk.videocommon.download.b r3 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> L77
            java.lang.String r4 = r6.A     // Catch: java.lang.Exception -> L77
            com.mbridge.msdk.videocommon.download.a r2 = r3.a(r4, r2)     // Catch: java.lang.Exception -> L77
            r6.G = r2     // Catch: java.lang.Exception -> L77
            goto L7f
        L77:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Exception -> Lef
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Exception -> Lef
        L7f:
            com.mbridge.msdk.videocommon.download.a r2 = r6.G     // Catch: java.lang.Exception -> Lef
            if (r2 == 0) goto Lce
            com.mbridge.msdk.videocommon.download.a r2 = r6.G     // Catch: java.lang.Exception -> Lef
            int r2 = r2.f()     // Catch: java.lang.Exception -> Lef
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lef
            r3.<init>()     // Catch: java.lang.Exception -> Lef
            java.lang.String r4 = "本地已下载完 拿本地播放地址：Jinr state："
            r3.append(r4)     // Catch: java.lang.Exception -> Lef
            r3.append(r2)     // Catch: java.lang.Exception -> Lef
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lef
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)     // Catch: java.lang.Exception -> Lef
            r3 = 5
            if (r2 != r3) goto Lce
            com.mbridge.msdk.videocommon.download.a r3 = r6.G     // Catch: java.lang.Exception -> Lef
            java.lang.String r3 = r3.d()     // Catch: java.lang.Exception -> Lef
            java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> Lef
            r4.<init>(r3)     // Catch: java.lang.Exception -> Lef
            boolean r4 = r4.exists()     // Catch: java.lang.Exception -> Lef
            if (r4 == 0) goto Lce
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lef
            r4.<init>()     // Catch: java.lang.Exception -> Lef
            java.lang.String r5 = "本地已下载完 拿本地播放地址："
            r4.append(r5)     // Catch: java.lang.Exception -> Lef
            r4.append(r3)     // Catch: java.lang.Exception -> Lef
            java.lang.String r5 = " state："
            r4.append(r5)     // Catch: java.lang.Exception -> Lef
            r4.append(r2)     // Catch: java.lang.Exception -> Lef
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Exception -> Lef
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Exception -> Lef
            return r3
        Lce:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r6.C     // Catch: java.lang.Exception -> Lef
            java.lang.String r2 = r2.getVideoUrlEncode()     // Catch: java.lang.Exception -> Lef
            boolean r3 = com.mbridge.msdk.foundation.tools.ai.b(r2)     // Catch: java.lang.Exception -> Lef
            if (r3 == 0) goto Lf7
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lef
            r3.<init>()     // Catch: java.lang.Exception -> Lef
            java.lang.String r4 = "本地尚未下载完 拿网络地址："
            r3.append(r4)     // Catch: java.lang.Exception -> Lef
            r3.append(r2)     // Catch: java.lang.Exception -> Lef
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lef
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)     // Catch: java.lang.Exception -> Lef
            return r2
        Lef:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        Lf7:
            return r1
    }

    static java.lang.String m(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            java.lang.String r0 = r0.B
            return r0
    }

    static boolean n(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            boolean r0 = r0.d
            return r0
    }

    static boolean o(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            boolean r0 = r0.h
            return r0
    }

    static boolean p(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            boolean r0 = r0.e
            return r0
    }

    static boolean q(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            boolean r0 = r0.b
            return r0
    }

    static com.mbridge.msdk.playercommon.VideoNativePlayer r(com.mbridge.msdk.nativex.view.MediaViewPlayerView r0) {
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r0.H
            return r0
    }

    public void closeSound() {
            r4 = this;
            r0 = 0
            r4.k = r0
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r4.H     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto L1d
            android.widget.ImageView r0 = r4.v     // Catch: java.lang.Throwable -> L33
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = "mbridge_nativex_sound_close"
            java.lang.String r3 = "drawable"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L33
            r0.setImageResource(r1)     // Catch: java.lang.Throwable -> L33
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r4.H     // Catch: java.lang.Throwable -> L33
            r0.closeSound()     // Catch: java.lang.Throwable -> L33
        L1d:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r4.K     // Catch: java.lang.IllegalArgumentException -> L28 java.lang.Throwable -> L33
            if (r0 == 0) goto L3d
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r4.K     // Catch: java.lang.IllegalArgumentException -> L28 java.lang.Throwable -> L33
            r1 = 0
            r0.volumeChange(r1)     // Catch: java.lang.IllegalArgumentException -> L28 java.lang.Throwable -> L33
            goto L3d
        L28:
            r0 = move-exception
            java.lang.String r1 = "OMSDK"
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L33
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)     // Catch: java.lang.Throwable -> L33
            goto L3d
        L33:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L3d:
            return
    }

    public boolean curIsFullScreen() {
            r1 = this;
            boolean r0 = r1.d
            return r0
    }

    public com.mbridge.msdk.out.Campaign getCampaign() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.C
            return r0
    }

    public boolean getIsActiviePause() {
            r1 = this;
            boolean r0 = r1.e
            return r0
    }

    public void gonePauseView() {
            r2 = this;
            android.os.Handler r0 = com.mbridge.msdk.nativex.view.MediaViewPlayerView.F
            if (r0 == 0) goto Lc
            com.mbridge.msdk.nativex.view.MediaViewPlayerView$5 r1 = new com.mbridge.msdk.nativex.view.MediaViewPlayerView$5
            r1.<init>(r2)
            r0.post(r1)
        Lc:
            return
    }

    public boolean halfLoadingViewisVisible() {
            r2 = this;
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto L18
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Throwable -> Le
            boolean r0 = r0.loadingViewIsVisible()     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto L18
            r0 = 1
            return r0
        Le:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L18:
            r0 = 0
            return r0
    }

    public boolean hasPrepare() {
            r2 = this;
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto L15
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Throwable -> Lb
            boolean r0 = r0.hasPrepare()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L15:
            r0 = 0
            return r0
    }

    public boolean initPlayerViewData(java.lang.String r10, com.mbridge.msdk.foundation.entity.CampaignEx r11, boolean r12, com.mbridge.msdk.playercommon.VideoPlayerStatusListener r13, com.mbridge.msdk.videocommon.download.a r14, java.lang.String r15) {
            r9 = this;
            java.lang.String r0 = "MediaViewPlayerView"
            r1 = 1
            r2 = 0
            boolean r3 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L9f
            if (r3 == 0) goto L10
            java.lang.String r10 = "playUrl==null return "
            com.mbridge.msdk.foundation.tools.z.b(r0, r10)     // Catch: java.lang.Exception -> L9f
            return r2
        L10:
            if (r11 != 0) goto L18
            java.lang.String r10 = "campaign ==null return "
            com.mbridge.msdk.foundation.tools.z.b(r0, r10)     // Catch: java.lang.Exception -> L9f
            return r2
        L18:
            r9.B = r10     // Catch: java.lang.Exception -> L9f
            r9.b = r12     // Catch: java.lang.Exception -> L9f
            r9.C = r11     // Catch: java.lang.Exception -> L9f
            r9.G = r14     // Catch: java.lang.Exception -> L9f
            r9.A = r15     // Catch: java.lang.Exception -> L9f
            com.mbridge.msdk.playercommon.VideoNativePlayer r3 = r9.H     // Catch: java.lang.Exception -> L9f
            java.lang.String r4 = r11.getVideoUrlEncode()     // Catch: java.lang.Exception -> L9f
            r5 = 1
            boolean r6 = r9.j     // Catch: java.lang.Exception -> L9f
            com.mbridge.msdk.videocommon.view.MyImageView r7 = r9.s     // Catch: java.lang.Exception -> L9f
            r8 = r13
            r3.initParameter(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L9f
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.C     // Catch: java.lang.Throwable -> L94
            if (r10 != 0) goto L36
            goto L9c
        L36:
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = r9.C     // Catch: java.lang.Throwable -> L94
            java.lang.String r10 = r10.getImageUrl()     // Catch: java.lang.Throwable -> L94
            boolean r11 = com.mbridge.msdk.foundation.tools.ai.a(r10)     // Catch: java.lang.Throwable -> L94
            if (r11 == 0) goto L48
            java.lang.String r10 = "imageUrl isnull initPlayEndPic return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r10)     // Catch: java.lang.Throwable -> L94
            goto L9c
        L48:
            android.content.Context r11 = r9.getContext()     // Catch: java.lang.Throwable -> L94
            if (r11 != 0) goto L4f
            goto L9c
        L4f:
            android.content.Context r11 = r9.getContext()     // Catch: java.lang.Throwable -> L94
            com.mbridge.msdk.foundation.same.c.b r11 = com.mbridge.msdk.foundation.same.c.b.a(r11)     // Catch: java.lang.Throwable -> L94
            boolean r11 = r11.b(r10)     // Catch: java.lang.Throwable -> L94
            if (r11 == 0) goto L83
            com.mbridge.msdk.foundation.controller.a r11 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L94
            android.content.Context r11 = r11.j()     // Catch: java.lang.Throwable -> L94
            com.mbridge.msdk.foundation.same.c.b r11 = com.mbridge.msdk.foundation.same.c.b.a(r11)     // Catch: java.lang.Throwable -> L94
            android.graphics.Bitmap r11 = r11.a(r10)     // Catch: java.lang.Throwable -> L94
            com.mbridge.msdk.videocommon.view.MyImageView r12 = r9.s     // Catch: java.lang.Throwable -> L94
            if (r12 == 0) goto L9c
            if (r11 == 0) goto L9c
            com.mbridge.msdk.videocommon.view.MyImageView r12 = r9.s     // Catch: java.lang.Throwable -> L94
            r12.setImageUrl(r10)     // Catch: java.lang.Throwable -> L94
            com.mbridge.msdk.videocommon.view.MyImageView r10 = r9.s     // Catch: java.lang.Throwable -> L94
            r10.setImageBitmap(r11)     // Catch: java.lang.Throwable -> L94
            com.mbridge.msdk.videocommon.view.MyImageView r10 = r9.s     // Catch: java.lang.Throwable -> L94
            r10.setVisibility(r2)     // Catch: java.lang.Throwable -> L94
            goto L9c
        L83:
            android.content.Context r11 = r9.getContext()     // Catch: java.lang.Throwable -> L94
            com.mbridge.msdk.foundation.same.c.b r11 = com.mbridge.msdk.foundation.same.c.b.a(r11)     // Catch: java.lang.Throwable -> L94
            com.mbridge.msdk.nativex.view.MediaViewPlayerView$6 r12 = new com.mbridge.msdk.nativex.view.MediaViewPlayerView$6     // Catch: java.lang.Throwable -> L94
            r12.<init>(r9)     // Catch: java.lang.Throwable -> L94
            r11.a(r10, r12)     // Catch: java.lang.Throwable -> L94
            goto L9c
        L94:
            r10 = move-exception
            java.lang.String r10 = r10.getMessage()     // Catch: java.lang.Exception -> L9f
            com.mbridge.msdk.foundation.tools.z.d(r0, r10)     // Catch: java.lang.Exception -> L9f
        L9c:
            r9.a = r1     // Catch: java.lang.Exception -> L9f
            goto La9
        L9f:
            r10 = move-exception
            java.lang.String r10 = r10.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r10)
            r9.a = r2
        La9:
            return r1
    }

    public boolean isComplete() {
            r2 = this;
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto L15
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Throwable -> Lb
            boolean r0 = r0.isComplete()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L15:
            r0 = 0
            return r0
    }

    public boolean isPlaying() {
            r2 = this;
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto L15
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Throwable -> Lb
            boolean r0 = r0.isPlaying()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L15:
            r0 = 0
            return r0
    }

    @Override
    public void onBufferingEnd() {
            r0 = this;
            return
    }

    @Override
    public void onBufferingStart(java.lang.String r1) {
            r0 = this;
            return
    }

    public void onClickPlayButton() {
            r6 = this;
            java.lang.String r0 = "MediaViewPlayerView"
            r6.f()     // Catch: java.lang.Throwable -> L68
            r6.j()     // Catch: java.lang.Throwable -> L68
            r1 = 0
            r6.setIsComplete(r1)     // Catch: java.lang.Throwable -> L68
            boolean r2 = r6.f     // Catch: java.lang.Throwable -> L68
            if (r2 == 0) goto L16
            com.mbridge.msdk.playercommon.VideoNativePlayer r2 = r6.H     // Catch: java.lang.Throwable -> L68
            r2.play()     // Catch: java.lang.Throwable -> L68
            goto L58
        L16:
            boolean r2 = r6.hasPrepare()     // Catch: java.lang.Throwable -> L68
            if (r2 == 0) goto L46
            boolean r2 = r6.c     // Catch: java.lang.Throwable -> L68
            if (r2 != 0) goto L46
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L68
            r2.<init>()     // Catch: java.lang.Throwable -> L68
            java.lang.String r3 = "startOrPlayVideo() hasPrepare():"
            r2.append(r3)     // Catch: java.lang.Throwable -> L68
            boolean r3 = r6.hasPrepare()     // Catch: java.lang.Throwable -> L68
            r2.append(r3)     // Catch: java.lang.Throwable -> L68
            java.lang.String r3 = " mIsNeedToRepeatPrepare:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L68
            boolean r3 = r6.c     // Catch: java.lang.Throwable -> L68
            r2.append(r3)     // Catch: java.lang.Throwable -> L68
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L68
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L68
            r6.startOrPlayVideo()     // Catch: java.lang.Throwable -> L68
            goto L58
        L46:
            java.lang.String r2 = "点击播放 playVideo()"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L68
            com.mbridge.msdk.playercommon.VideoNativePlayer r2 = r6.H     // Catch: java.lang.Throwable -> L68
            android.content.Context r3 = r6.getContext()     // Catch: java.lang.Throwable -> L68
            java.lang.String r4 = r6.B     // Catch: java.lang.Throwable -> L68
            android.view.Surface r5 = r6.q     // Catch: java.lang.Throwable -> L68
            r2.replaySameSource(r3, r4, r5)     // Catch: java.lang.Throwable -> L68
        L58:
            boolean r2 = r6.e     // Catch: java.lang.Throwable -> L68
            if (r2 == 0) goto L65
            com.mbridge.msdk.nativex.listener.a r2 = r6.D     // Catch: java.lang.Throwable -> L68
            if (r2 == 0) goto L65
            com.mbridge.msdk.nativex.listener.a r2 = r6.D     // Catch: java.lang.Throwable -> L68
            r2.d()     // Catch: java.lang.Throwable -> L68
        L65:
            r6.e = r1     // Catch: java.lang.Throwable -> L68
            goto L70
        L68:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)
        L70:
            return
    }

    public void onClickPlayerView() {
            r4 = this;
            java.lang.String r0 = "MediaViewPlayerView"
            com.mbridge.msdk.videocommon.view.MyImageView r1 = r4.s     // Catch: java.lang.Throwable -> L7a
            if (r1 == 0) goto L14
            com.mbridge.msdk.videocommon.view.MyImageView r1 = r4.s     // Catch: java.lang.Throwable -> L7a
            int r1 = r1.getVisibility()     // Catch: java.lang.Throwable -> L7a
            if (r1 != 0) goto L14
            java.lang.String r1 = "playend is visibility return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L7a
            return
        L14:
            boolean r1 = r4.isPlaying()     // Catch: java.lang.Throwable -> L7a
            if (r1 != 0) goto L20
            java.lang.String r1 = "isplaying return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L7a
            return
        L20:
            android.widget.ImageView r1 = r4.u     // Catch: java.lang.Throwable -> L7a
            if (r1 != 0) goto L2a
            java.lang.String r1 = "pause id is null return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L7a
            return
        L2a:
            android.widget.ImageView r1 = r4.u     // Catch: java.lang.Throwable -> L7a
            int r1 = r1.getVisibility()     // Catch: java.lang.Throwable -> L7a
            if (r1 != 0) goto L3e
            java.lang.String r1 = "gone durview"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L7a
            r4.gonePauseView()     // Catch: java.lang.Throwable -> L7a
            r4.l()     // Catch: java.lang.Throwable -> L7a
            goto L82
        L3e:
            java.lang.String r1 = "show durview"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L7a
            android.view.animation.AlphaAnimation r1 = r4.z     // Catch: java.lang.Throwable -> L7a
            if (r1 == 0) goto L4c
            android.view.animation.AlphaAnimation r1 = r4.z     // Catch: java.lang.Throwable -> L7a
            r1.cancel()     // Catch: java.lang.Throwable -> L7a
        L4c:
            android.view.animation.AlphaAnimation r1 = new android.view.animation.AlphaAnimation     // Catch: java.lang.Throwable -> L7a
            r2 = 0
            r3 = 1065353216(0x3f800000, float:1.0)
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L7a
            r4.z = r1     // Catch: java.lang.Throwable -> L7a
            r2 = 300(0x12c, double:1.48E-321)
            r1.setDuration(r2)     // Catch: java.lang.Throwable -> L7a
            android.view.animation.AlphaAnimation r1 = r4.z     // Catch: java.lang.Throwable -> L7a
            android.view.animation.DecelerateInterpolator r2 = new android.view.animation.DecelerateInterpolator     // Catch: java.lang.Throwable -> L7a
            r2.<init>()     // Catch: java.lang.Throwable -> L7a
            r1.setInterpolator(r2)     // Catch: java.lang.Throwable -> L7a
            android.view.animation.AlphaAnimation r1 = r4.z     // Catch: java.lang.Throwable -> L7a
            com.mbridge.msdk.nativex.view.MediaViewPlayerView$4 r2 = new com.mbridge.msdk.nativex.view.MediaViewPlayerView$4     // Catch: java.lang.Throwable -> L7a
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L7a
            r1.setAnimationListener(r2)     // Catch: java.lang.Throwable -> L7a
            r4.i()     // Catch: java.lang.Throwable -> L7a
            android.view.View r1 = r4.x     // Catch: java.lang.Throwable -> L7a
            android.view.animation.AlphaAnimation r2 = r4.z     // Catch: java.lang.Throwable -> L7a
            r1.startAnimation(r2)     // Catch: java.lang.Throwable -> L7a
            goto L82
        L7a:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L82:
            return
    }

    @Override
    public void onPlayCompleted() {
            r3 = this;
            java.lang.String r0 = "MediaViewPlayerView"
            java.lang.String r1 = "=========onPlayCompleted"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            com.mbridge.msdk.nativex.listener.a r1 = r3.D
            if (r1 == 0) goto L1a
            java.lang.String r1 = r3.B
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1a
            com.mbridge.msdk.nativex.listener.a r1 = r3.D
            java.lang.String r2 = r3.B
            r1.b(r2)
        L1a:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView$a r1 = r3.I
            if (r1 == 0) goto L22
            r1.a()
            goto L3a
        L22:
            boolean r1 = r3.j     // Catch: java.lang.Exception -> L32
            if (r1 != 0) goto L3a
            r1 = 1
            r3.c = r1     // Catch: java.lang.Exception -> L32
            java.lang.String r1 = "播放结束 不能循环播放 显示endcardView"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L32
            r3.e()     // Catch: java.lang.Exception -> L32
            goto L3a
        L32:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L3a:
            return
    }

    @Override
    public void onPlayError(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = "MediaViewPlayerView"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L30
            r1.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = "onPlayError:"
            r1.append(r2)     // Catch: java.lang.Exception -> L30
            r1.append(r6)     // Catch: java.lang.Exception -> L30
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.foundation.tools.z.b(r0, r6)     // Catch: java.lang.Exception -> L30
            r6 = 1
            r5.c = r6     // Catch: java.lang.Exception -> L30
            r5.e()     // Catch: java.lang.Exception -> L30
            boolean r1 = r5.L     // Catch: java.lang.Exception -> L30
            if (r1 != 0) goto L38
            com.mbridge.msdk.playercommon.VideoNativePlayer r1 = r5.H     // Catch: java.lang.Exception -> L30
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Exception -> L30
            java.lang.String r3 = r5.B     // Catch: java.lang.Exception -> L30
            android.view.Surface r4 = r5.q     // Catch: java.lang.Exception -> L30
            r1.play(r2, r3, r4)     // Catch: java.lang.Exception -> L30
            r5.L = r6     // Catch: java.lang.Exception -> L30
            goto L38
        L30:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
        L38:
            return
    }

    @Override
    public void onPlayProgress(int r2, int r3) {
            r1 = this;
            r1.f()     // Catch: java.lang.Throwable -> Le
            r1.g()     // Catch: java.lang.Throwable -> Le
            r3 = 0
            r1.e = r3     // Catch: java.lang.Throwable -> Le
            r1.c = r3     // Catch: java.lang.Throwable -> Le
            r1.l = r2     // Catch: java.lang.Throwable -> Le
            goto L18
        Le:
            r2 = move-exception
            java.lang.String r3 = r2.getMessage()
            java.lang.String r0 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.c(r0, r3, r2)
        L18:
            return
    }

    @Override
    public void onPlayProgressMS(int r2, int r3) {
            r1 = this;
            android.widget.ProgressBar r0 = r1.r     // Catch: java.lang.Throwable -> L1d
            if (r0 == 0) goto L27
            android.widget.ProgressBar r0 = r1.r     // Catch: java.lang.Throwable -> L1d
            int r0 = r0.getVisibility()     // Catch: java.lang.Throwable -> L1d
            if (r0 != 0) goto L27
            if (r3 <= 0) goto L13
            android.widget.ProgressBar r0 = r1.r     // Catch: java.lang.Throwable -> L1d
            r0.setMax(r3)     // Catch: java.lang.Throwable -> L1d
        L13:
            if (r2 < 0) goto L27
            int r2 = r2 + 1
            android.widget.ProgressBar r3 = r1.r     // Catch: java.lang.Throwable -> L1d
            r3.setProgress(r2)     // Catch: java.lang.Throwable -> L1d
            goto L27
        L1d:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L27:
            return
    }

    @Override
    public void onPlaySetDataSourceError(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "MediaViewPlayerView"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L53
            r1.<init>()     // Catch: java.lang.Exception -> L53
            java.lang.String r2 = "onPlaySetDataSourceError:"
            r1.append(r2)     // Catch: java.lang.Exception -> L53
            r1.append(r4)     // Catch: java.lang.Exception -> L53
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L53
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Exception -> L53
            r4 = 1
            r3.c = r4     // Catch: java.lang.Exception -> L53
            java.lang.String r4 = r3.B     // Catch: java.lang.Throwable -> L4a
            boolean r4 = android.webkit.URLUtil.isNetworkUrl(r4)     // Catch: java.lang.Throwable -> L4a
            if (r4 == 0) goto L27
            java.lang.String r4 = "playerview  dwLocalAddressplayError playurl is network return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L4a
            goto L5b
        L27:
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.C     // Catch: java.lang.Throwable -> L4a
            java.lang.String r4 = r4.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L4a
            boolean r1 = com.mbridge.msdk.foundation.tools.ai.b(r4)     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L5b
            r3.B = r4     // Catch: java.lang.Throwable -> L4a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a
            r1.<init>()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = "playerview dwLocalAddressplayError 用网络地址抄底播放"
            r1.append(r2)     // Catch: java.lang.Throwable -> L4a
            r1.append(r4)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L4a
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L4a
            goto L5b
        L4a:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Exception -> L53
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Exception -> L53
            goto L5b
        L53:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L5b:
            return
    }

    @Override
    public void onPlayStarted(int r2) {
            r1 = this;
            com.mbridge.msdk.nativex.listener.a r2 = r1.D
            if (r2 == 0) goto L13
            java.lang.String r2 = r1.B
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L13
            com.mbridge.msdk.nativex.listener.a r2 = r1.D
            java.lang.String r0 = r1.B
            r2.a(r0)
        L13:
            return
    }

    public void openSound() {
            r4 = this;
            r0 = 1
            r4.k = r0
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r4.H     // Catch: java.lang.Throwable -> L34
            if (r0 == 0) goto L1d
            android.widget.ImageView r0 = r4.v     // Catch: java.lang.Throwable -> L34
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> L34
            java.lang.String r2 = "mbridge_nativex_sound_open"
            java.lang.String r3 = "drawable"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L34
            r0.setImageResource(r1)     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r4.H     // Catch: java.lang.Throwable -> L34
            r0.openSound()     // Catch: java.lang.Throwable -> L34
        L1d:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r4.K     // Catch: java.lang.IllegalArgumentException -> L29 java.lang.Throwable -> L34
            if (r0 == 0) goto L3e
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r4.K     // Catch: java.lang.IllegalArgumentException -> L29 java.lang.Throwable -> L34
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.volumeChange(r1)     // Catch: java.lang.IllegalArgumentException -> L29 java.lang.Throwable -> L34
            goto L3e
        L29:
            r0 = move-exception
            java.lang.String r1 = "OMSDK"
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)     // Catch: java.lang.Throwable -> L34
            goto L3e
        L34:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L3e:
            return
    }

    public void pause() {
            r2 = this;
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto Lc
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Throwable -> L20
            r0.pause()     // Catch: java.lang.Throwable -> L20
            r0 = 1
            r2.f = r0     // Catch: java.lang.Throwable -> L20
        Lc:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r2.K     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L1c
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r2.K     // Catch: java.lang.Throwable -> L20
            r0.pause()     // Catch: java.lang.Throwable -> L20
            java.lang.String r0 = "omsdk"
            java.lang.String r1 = "videoEvents.pause()"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Throwable -> L20
        L1c:
            r2.h()     // Catch: java.lang.Throwable -> L20
            goto L2a
        L20:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L2a:
            return
    }

    public void playVideo() {
            r5 = this;
            java.lang.String r0 = "MediaViewPlayerView"
            boolean r1 = r5.a     // Catch: java.lang.Throwable -> L87
            if (r1 != 0) goto Lc
            java.lang.String r1 = "playVideo() init failed 播放失败"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L87
            return
        Lc:
            com.mbridge.msdk.playercommon.VideoNativePlayer r1 = r5.H     // Catch: java.lang.Throwable -> L87
            if (r1 != 0) goto L16
            java.lang.String r1 = "playVideo() mVideoFeedsPlayer is null 播放失败"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L87
            return
        L16:
            boolean r1 = r5.g     // Catch: java.lang.Throwable -> L87
            if (r1 != 0) goto L23
            r5.e()     // Catch: java.lang.Throwable -> L87
            java.lang.String r1 = "playVideo() mSurfaceTextureAvailable no init return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L87
            return
        L23:
            java.lang.String r1 = r5.B     // Catch: java.lang.Throwable -> L87
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L87
            if (r1 != 0) goto L35
            java.lang.String r1 = r5.B     // Catch: java.lang.Throwable -> L87
            java.lang.String r2 = "http"
            boolean r1 = r1.startsWith(r2)     // Catch: java.lang.Throwable -> L87
            if (r1 != 0) goto L3f
        L35:
            java.lang.String r1 = r5.B     // Catch: java.lang.Throwable -> L87
            java.lang.String r2 = "https"
            boolean r1 = r1.startsWith(r2)     // Catch: java.lang.Throwable -> L87
            if (r1 == 0) goto L45
        L3f:
            java.lang.String r1 = r5.m()     // Catch: java.lang.Throwable -> L87
            r5.B = r1     // Catch: java.lang.Throwable -> L87
        L45:
            java.lang.String r1 = "playVideo() play"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L87
            r5.f()     // Catch: java.lang.Throwable -> L87
            com.mbridge.msdk.playercommon.VideoNativePlayer r1 = r5.H     // Catch: java.lang.Throwable -> L87
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> L87
            java.lang.String r3 = r5.B     // Catch: java.lang.Throwable -> L87
            android.view.Surface r4 = r5.q     // Catch: java.lang.Throwable -> L87
            r1.play(r2, r3, r4)     // Catch: java.lang.Throwable -> L87
            boolean r1 = r5.f     // Catch: java.lang.Throwable -> L87
            r2 = 0
            if (r1 != 0) goto L63
            boolean r1 = r5.e     // Catch: java.lang.Throwable -> L87
            if (r1 == 0) goto L75
        L63:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r5.K     // Catch: java.lang.Throwable -> L87
            if (r1 == 0) goto L75
            r5.f = r2     // Catch: java.lang.Throwable -> L87
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r5.K     // Catch: java.lang.Throwable -> L87
            r1.resume()     // Catch: java.lang.Throwable -> L87
            java.lang.String r1 = "omsdk"
            java.lang.String r3 = "videoEvents.resume()"
            com.mbridge.msdk.foundation.tools.z.a(r1, r3)     // Catch: java.lang.Throwable -> L87
        L75:
            boolean r1 = r5.k     // Catch: java.lang.Throwable -> L87
            if (r1 == 0) goto L7f
            com.mbridge.msdk.playercommon.VideoNativePlayer r1 = r5.H     // Catch: java.lang.Throwable -> L87
            r1.openSound()     // Catch: java.lang.Throwable -> L87
            goto L84
        L7f:
            com.mbridge.msdk.playercommon.VideoNativePlayer r1 = r5.H     // Catch: java.lang.Throwable -> L87
            r1.closeSound()     // Catch: java.lang.Throwable -> L87
        L84:
            r5.c = r2     // Catch: java.lang.Throwable -> L87
            goto L8f
        L87:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L8f:
            return
    }

    public void registerView(com.iab.omid.library.mmadbridge.adsession.AdSession r4) {
            r3 = this;
            r3.J = r4
            if (r4 == 0) goto L32
            r4.registerAdView(r3)
            android.widget.LinearLayout r0 = r3.p
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r1 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER
            r2 = 0
            r4.addFriendlyObstruction(r0, r1, r2)
            android.widget.ProgressBar r0 = r3.r
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r1 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER
            r4.addFriendlyObstruction(r0, r1, r2)
            com.mbridge.msdk.videocommon.view.MyImageView r0 = r3.s
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r1 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.VIDEO_CONTROLS
            r4.addFriendlyObstruction(r0, r1, r2)
            android.widget.ImageView r0 = r3.t
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r1 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.VIDEO_CONTROLS
            r4.addFriendlyObstruction(r0, r1, r2)
            android.widget.ImageView r0 = r3.u
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r1 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.VIDEO_CONTROLS
            r4.addFriendlyObstruction(r0, r1, r2)
            android.widget.ImageView r0 = r3.v
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r1 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER
            r4.addFriendlyObstruction(r0, r1, r2)
        L32:
            return
    }

    public void release() {
            r2 = this;
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L17
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Throwable -> Ld
            r0.releasePlayer()     // Catch: java.lang.Throwable -> Ld
            r0 = 0
            r2.H = r0     // Catch: java.lang.Throwable -> Ld
            goto L17
        Ld:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L17:
            return
    }

    public void setAllowLoopPlay(boolean r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public void setEnterFullScreen() {
            r3 = this;
            java.lang.String r0 = "MediaViewPlayerView"
            java.lang.String r1 = "setEnterFullScreen"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L16
            r1 = 1
            r3.d = r1     // Catch: java.lang.Throwable -> L16
            r3.h = r1     // Catch: java.lang.Throwable -> L16
            android.widget.ImageView r1 = r3.v     // Catch: java.lang.Throwable -> L16
            r2 = 0
            r1.setVisibility(r2)     // Catch: java.lang.Throwable -> L16
            r3.h()     // Catch: java.lang.Throwable -> L16
            goto L1e
        L16:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)
        L1e:
            return
    }

    public void setExitFullScreen() {
            r3 = this;
            java.lang.String r0 = "MediaViewPlayerView"
            java.lang.String r1 = "setExitFullScreen"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L1f
            r1 = 0
            r3.d = r1     // Catch: java.lang.Throwable -> L1f
            r3.c = r1     // Catch: java.lang.Throwable -> L1f
            java.lang.String r1 = "setExitFullScreen mIsNeedToRepeatPrepare=false"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L1f
            android.widget.ImageView r1 = r3.v     // Catch: java.lang.Throwable -> L1f
            r2 = 8
            r1.setVisibility(r2)     // Catch: java.lang.Throwable -> L1f
            r3.g()     // Catch: java.lang.Throwable -> L1f
            r3.f()     // Catch: java.lang.Throwable -> L1f
            goto L27
        L1f:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)
        L27:
            return
    }

    public void setIsActivePause(boolean r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setIsComplete(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r1.H     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L14
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r1.H     // Catch: java.lang.Throwable -> La
            r0.setIsComplete(r2)     // Catch: java.lang.Throwable -> La
            goto L14
        La:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L14:
            return
    }

    public void setIsFrontDesk(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r1.H     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L14
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r1.H     // Catch: java.lang.Throwable -> La
            r0.setIsFrontDesk(r2)     // Catch: java.lang.Throwable -> La
            goto L14
        La:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L14:
            return
    }

    public void setMediaViewPlayListener(com.mbridge.msdk.nativex.view.MediaViewPlayerView.a r1) {
            r0 = this;
            r0.I = r1
            return
    }

    public void setOnMediaViewPlayerViewListener(com.mbridge.msdk.nativex.listener.a r1) {
            r0 = this;
            r0.D = r1
            return
    }

    public void setVideoEvents(com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1) {
            r0 = this;
            r0.K = r1
            return
    }

    public void showPlayView() {
            r2 = this;
            android.widget.ImageView r0 = r2.t
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    public void showProgressView(boolean r2) {
            r1 = this;
            r1.n = r2
            android.widget.ProgressBar r0 = r1.r
            if (r0 == 0) goto Le
            if (r2 == 0) goto La
            r2 = 0
            goto Lb
        La:
            r2 = 4
        Lb:
            r0.setVisibility(r2)
        Le:
            return
    }

    public void showSoundIndicator(boolean r1) {
            r0 = this;
            r0.m = r1
            if (r1 == 0) goto L8
            r0.g()
            goto Lb
        L8:
            r0.h()
        Lb:
            return
    }

    public void startOrPlayVideo() {
            r4 = this;
            java.lang.String r0 = "MediaViewPlayerView"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8d
            r1.<init>()     // Catch: java.lang.Exception -> L8d
            java.lang.String r2 = "startOrPlayVideo() mIsNeedToRepeatPrepare:"
            r1.append(r2)     // Catch: java.lang.Exception -> L8d
            boolean r2 = r4.c     // Catch: java.lang.Exception -> L8d
            r1.append(r2)     // Catch: java.lang.Exception -> L8d
            java.lang.String r2 = " mhasprepare:"
            r1.append(r2)     // Catch: java.lang.Exception -> L8d
            boolean r2 = r4.hasPrepare()     // Catch: java.lang.Exception -> L8d
            r1.append(r2)     // Catch: java.lang.Exception -> L8d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L8d
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L8d
            boolean r1 = r4.g     // Catch: java.lang.Exception -> L8d
            if (r1 != 0) goto L31
            r4.e()     // Catch: java.lang.Exception -> L8d
            java.lang.String r1 = "startOrPlayVideo() mSurfaceTextureAvailable no init return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L8d
            return
        L31:
            boolean r1 = r4.hasPrepare()     // Catch: java.lang.Exception -> L8d
            if (r1 != 0) goto L40
            java.lang.String r1 = "startOrPlayVideo() playVideo"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L8d
            r4.playVideo()     // Catch: java.lang.Exception -> L8d
            goto L95
        L40:
            java.lang.String r1 = "startOrPlayVideo() start"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L8d
            com.mbridge.msdk.playercommon.VideoNativePlayer r1 = r4.H     // Catch: java.lang.Throwable -> L84
            if (r1 != 0) goto L4f
            java.lang.String r1 = "start() mVideoFeedsPlayer is null return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L84
            goto L95
        L4f:
            r4.f()     // Catch: java.lang.Throwable -> L84
            boolean r1 = r4.i     // Catch: java.lang.Throwable -> L84
            r2 = 0
            if (r1 == 0) goto L66
            java.lang.String r1 = "start() startOrPlayVideo need setSurface final"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L84
            com.mbridge.msdk.playercommon.VideoNativePlayer r1 = r4.H     // Catch: java.lang.Throwable -> L84
            android.view.Surface r3 = r4.q     // Catch: java.lang.Throwable -> L84
            r1.start(r3)     // Catch: java.lang.Throwable -> L84
            r4.i = r2     // Catch: java.lang.Throwable -> L84
            goto L70
        L66:
            java.lang.String r1 = "start() startOrPlayVideo final"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L84
            com.mbridge.msdk.playercommon.VideoNativePlayer r1 = r4.H     // Catch: java.lang.Throwable -> L84
            r1.start()     // Catch: java.lang.Throwable -> L84
        L70:
            boolean r1 = r4.f     // Catch: java.lang.Throwable -> L84
            if (r1 != 0) goto L78
            boolean r1 = r4.e     // Catch: java.lang.Throwable -> L84
            if (r1 == 0) goto L95
        L78:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r4.K     // Catch: java.lang.Throwable -> L84
            if (r1 == 0) goto L95
            r4.f = r2     // Catch: java.lang.Throwable -> L84
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r4.K     // Catch: java.lang.Throwable -> L84
            r1.resume()     // Catch: java.lang.Throwable -> L84
            goto L95
        L84:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()     // Catch: java.lang.Exception -> L8d
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)     // Catch: java.lang.Exception -> L8d
            goto L95
        L8d:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L95:
            return
    }

    public void stop() {
            r2 = this;
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Exception -> Ld
            if (r0 == 0) goto L9
            com.mbridge.msdk.playercommon.VideoNativePlayer r0 = r2.H     // Catch: java.lang.Exception -> Ld
            r0.stop()     // Catch: java.lang.Exception -> Ld
        L9:
            r2.h()     // Catch: java.lang.Exception -> Ld
            goto L17
        Ld:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MediaViewPlayerView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L17:
            return
    }

    public void unregisterView() {
            r1 = this;
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r1.J
            if (r0 == 0) goto L7
            r0.removeAllFriendlyObstructions()
        L7:
            return
    }
}
