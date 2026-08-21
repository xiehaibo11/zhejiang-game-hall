package com.mbridge.msdk.video.bt.module;

public class MBridgeBTVideoView extends com.mbridge.msdk.video.bt.module.BTBaseView {
    private static boolean J;
    private com.iab.omid.library.mmadbridge.adsession.AdEvents A;
    private com.iab.omid.library.mmadbridge.adsession.media.MediaEvents B;
    private com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.a C;
    private int D;
    private int E;
    private boolean F;
    private int G;
    private int H;
    private java.lang.String I;
    private boolean K;
    private boolean L;
    private boolean M;
    private android.widget.RelativeLayout N;
    private android.widget.ProgressBar O;
    private com.mbridge.msdk.playercommon.PlayerView p;
    private com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView q;
    private android.widget.TextView r;
    private android.view.View s;
    private com.mbridge.msdk.widget.FeedBackButton t;
    private android.webkit.WebView u;
    private com.mbridge.msdk.videocommon.download.a v;
    private int w;
    private int x;
    private int y;
    private com.iab.omid.library.mmadbridge.adsession.AdSession z;




    private static final class a extends com.mbridge.msdk.playercommon.DefaultVideoPlayerStatusListener {
        private com.mbridge.msdk.video.bt.module.MBridgeBTVideoView a;
        private android.webkit.WebView b;
        private com.iab.omid.library.mmadbridge.adsession.media.MediaEvents c;
        private java.lang.String d;
        private java.lang.String e;
        private int f;
        private int g;
        private boolean h;
        private boolean i;
        private boolean j;
        private boolean k;
        private int l;
        private int m;
        private boolean n;

        public a(com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r2, android.webkit.WebView r3, com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r4) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.i = r0
                r1.j = r0
                r1.k = r0
                r1.n = r0
                r1.a = r2
                r1.b = r3
                r1.c = r4
                if (r2 == 0) goto L1c
                java.lang.String r3 = r2.d
                r1.d = r3
                java.lang.String r2 = r2.c
                r1.e = r2
            L1c:
                return
        }

        public final void a(int r3, int r4) {
                r2 = this;
                java.lang.String r0 = "DefaultVideoPlayerStatusListener"
                r2.l = r3
                r2.m = r4
                com.mbridge.msdk.foundation.tools.ab r3 = com.mbridge.msdk.foundation.tools.ab.a()
                java.lang.String r4 = "h_c_r_w_p_c"
                r1 = 0
                boolean r3 = r3.a(r4, r1)
                if (r3 != 0) goto L15
                goto Lc5
            L15:
                int r3 = r2.l
                r4 = 100
                if (r3 == r4) goto Lc5
                int r4 = r2.m
                if (r4 != 0) goto Lc5
                boolean r4 = r2.n
                if (r4 != 0) goto Lc5
                if (r3 == 0) goto Lc5
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r3 = r2.a
                if (r3 == 0) goto Lc5
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r3.b
                if (r3 != 0) goto L2f
                goto Lc5
            L2f:
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r3 = r2.a     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r3.b     // Catch: java.lang.Exception -> Lb9
                int r3 = r3.getAdType()     // Catch: java.lang.Exception -> Lb9
                r4 = 94
                if (r3 == r4) goto L73
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r3 = r2.a     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r3.b     // Catch: java.lang.Exception -> Lb9
                int r3 = r3.getAdType()     // Catch: java.lang.Exception -> Lb9
                r4 = 287(0x11f, float:4.02E-43)
                if (r3 != r4) goto L48
                goto L73
            L48:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb9
                r3.<init>()     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r4 = r2.a     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r4.b     // Catch: java.lang.Exception -> Lb9
                java.lang.String r4 = r4.getId()     // Catch: java.lang.Exception -> Lb9
                r3.append(r4)     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r4 = r2.a     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r4.b     // Catch: java.lang.Exception -> Lb9
                java.lang.String r4 = r4.getVideoUrlEncode()     // Catch: java.lang.Exception -> Lb9
                r3.append(r4)     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r4 = r2.a     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r4.b     // Catch: java.lang.Exception -> Lb9
                java.lang.String r4 = r4.getBidToken()     // Catch: java.lang.Exception -> Lb9
                r3.append(r4)     // Catch: java.lang.Exception -> Lb9
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lb9
                goto L9d
            L73:
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb9
                r3.<init>()     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r4 = r2.a     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r4.b     // Catch: java.lang.Exception -> Lb9
                java.lang.String r4 = r4.getRequestId()     // Catch: java.lang.Exception -> Lb9
                r3.append(r4)     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r4 = r2.a     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r4.b     // Catch: java.lang.Exception -> Lb9
                java.lang.String r4 = r4.getId()     // Catch: java.lang.Exception -> Lb9
                r3.append(r4)     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r4 = r2.a     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r4.b     // Catch: java.lang.Exception -> Lb9
                java.lang.String r4 = r4.getVideoUrlEncode()     // Catch: java.lang.Exception -> Lb9
                r3.append(r4)     // Catch: java.lang.Exception -> Lb9
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lb9
            L9d:
                com.mbridge.msdk.videocommon.download.b r4 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> Lb9
                java.lang.String r1 = r2.e     // Catch: java.lang.Exception -> Lb9
                com.mbridge.msdk.videocommon.download.a r3 = r4.a(r1, r3)     // Catch: java.lang.Exception -> Lb9
                if (r3 == 0) goto Lc5
                r3.j()     // Catch: java.lang.Exception -> Lb9
                r3 = 1
                r2.n = r3     // Catch: java.lang.Exception -> Lb9
                boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> Lb9
                if (r3 == 0) goto Lc5
                java.lang.String r3 = "CDRate is : 0  and start download when player create!"
                com.mbridge.msdk.foundation.tools.z.d(r0, r3)     // Catch: java.lang.Exception -> Lb9
                goto Lc5
            Lb9:
                r3 = move-exception
                boolean r4 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r4 == 0) goto Lc5
                java.lang.String r3 = r3.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            Lc5:
                return
        }

        @Override
        public final void onBufferingEnd() {
                r2 = this;
                super.onBufferingEnd()     // Catch: java.lang.Exception -> L14
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r2.c     // Catch: java.lang.Exception -> L14
                if (r0 == 0) goto L18
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r2.c     // Catch: java.lang.Exception -> L14
                r0.bufferFinish()     // Catch: java.lang.Exception -> L14
                java.lang.String r0 = "omsdk"
                java.lang.String r1 = "play:  videoEvents.bufferFinish()"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> L14
                goto L18
            L14:
                r0 = move-exception
                r0.printStackTrace()
            L18:
                return
        }

        @Override
        public final void onBufferingStart(java.lang.String r5) {
                r4 = this;
                super.onBufferingStart(r5)     // Catch: java.lang.Exception -> L65
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r4.c     // Catch: java.lang.Exception -> L65
                if (r0 == 0) goto Lc
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r4.c     // Catch: java.lang.Exception -> L65
                r0.bufferStart()     // Catch: java.lang.Exception -> L65
            Lc:
                java.lang.String r0 = "mediaplayer prepare timeout"
                boolean r0 = r5.equals(r0)     // Catch: java.lang.Exception -> L65
                if (r0 != 0) goto L1c
                java.lang.String r0 = "play buffering tiemout"
                boolean r5 = r5.equals(r0)     // Catch: java.lang.Exception -> L65
                if (r5 == 0) goto L69
            L1c:
                android.webkit.WebView r5 = r4.b     // Catch: java.lang.Exception -> L65
                if (r5 == 0) goto L69
                org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L56
                r5.<init>()     // Catch: java.lang.Exception -> L56
                java.lang.String r0 = "code"
                int r1 = com.mbridge.msdk.video.bt.module.BTBaseView.n     // Catch: java.lang.Exception -> L56
                r5.put(r0, r1)     // Catch: java.lang.Exception -> L56
                java.lang.String r0 = "id"
                java.lang.String r1 = r4.d     // Catch: java.lang.Exception -> L56
                r5.put(r0, r1)     // Catch: java.lang.Exception -> L56
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L56
                r0.<init>()     // Catch: java.lang.Exception -> L56
                java.lang.String r1 = "data"
                r5.put(r1, r0)     // Catch: java.lang.Exception -> L56
                com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L56
                android.webkit.WebView r1 = r4.b     // Catch: java.lang.Exception -> L56
                java.lang.String r2 = "onPlayerTimeout"
                java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L56
                byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L56
                r3 = 2
                java.lang.String r5 = android.util.Base64.encodeToString(r5, r3)     // Catch: java.lang.Exception -> L56
                r0.a(r1, r2, r5)     // Catch: java.lang.Exception -> L56
                goto L69
            L56:
                r5 = move-exception
                com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Exception -> L65
                android.webkit.WebView r1 = r4.b     // Catch: java.lang.Exception -> L65
                java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Exception -> L65
                r0.a(r1, r5)     // Catch: java.lang.Exception -> L65
                goto L69
            L65:
                r5 = move-exception
                r5.printStackTrace()
            L69:
                return
        }

        @Override
        public final void onPlayCompleted() {
                r4 = this;
                super.onPlayCompleted()
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r4.a
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.b
                java.lang.String r1 = "0"
                if (r0 == 0) goto L39
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r4.a
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.b
                int r0 = r0.getVideoCompleteTime()
                if (r0 <= 0) goto L2f
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r4.a
                android.widget.TextView r0 = com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.f(r0)
                com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r1 = r1.j()
                java.lang.String r2 = "mbridge_reward_video_view_reward_time_complete"
                java.lang.String r3 = "string"
                int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r2, r3)
                r0.setText(r1)
                goto L42
            L2f:
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r4.a
                android.widget.TextView r0 = com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.f(r0)
                r0.setText(r1)
                goto L42
            L39:
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r4.a
                android.widget.TextView r0 = com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.f(r0)
                r0.setText(r1)
            L42:
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r4.a
                com.mbridge.msdk.playercommon.PlayerView r0 = com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.a(r0)
                r1 = 0
                r0.setClickable(r1)
                android.webkit.WebView r0 = r4.b
                if (r0 == 0) goto L57
                java.lang.String r1 = r4.d
                java.lang.String r2 = "onPlayerFinish"
                com.mbridge.msdk.video.bt.module.BTBaseView.a(r0, r2, r1)
            L57:
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r4.c
                if (r0 == 0) goto L65
                r0.complete()
                java.lang.String r0 = "omsdk"
                java.lang.String r1 = "play:  videoEvents.complete()"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            L65:
                int r0 = r4.g
                r4.f = r0
                r0 = 1
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.a(r0)
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r4.a
                r0.stop()
                return
        }

        @Override
        public final void onPlayError(java.lang.String r5) {
                r4 = this;
                java.lang.String r0 = "id"
                super.onPlayError(r5)
                android.webkit.WebView r1 = r4.b
                if (r1 == 0) goto L55
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L47
                r1.<init>()     // Catch: java.lang.Exception -> L47
                java.lang.String r2 = "code"
                int r3 = com.mbridge.msdk.video.bt.module.BTBaseView.o     // Catch: java.lang.Exception -> L47
                r1.put(r2, r3)     // Catch: java.lang.Exception -> L47
                java.lang.String r2 = r4.d     // Catch: java.lang.Exception -> L47
                r1.put(r0, r2)     // Catch: java.lang.Exception -> L47
                org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L47
                r2.<init>()     // Catch: java.lang.Exception -> L47
                java.lang.String r3 = "error"
                r2.put(r3, r5)     // Catch: java.lang.Exception -> L47
                java.lang.String r5 = r4.d     // Catch: java.lang.Exception -> L47
                r2.put(r0, r5)     // Catch: java.lang.Exception -> L47
                java.lang.String r5 = "data"
                r1.put(r5, r2)     // Catch: java.lang.Exception -> L47
                com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L47
                android.webkit.WebView r0 = r4.b     // Catch: java.lang.Exception -> L47
                java.lang.String r2 = "onPlayerFailed"
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L47
                byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> L47
                r3 = 2
                java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)     // Catch: java.lang.Exception -> L47
                r5.a(r0, r2, r1)     // Catch: java.lang.Exception -> L47
                goto L55
            L47:
                r5 = move-exception
                com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()
                android.webkit.WebView r1 = r4.b
                java.lang.String r5 = r5.getMessage()
                r0.a(r1, r5)
            L55:
                return
        }

        @Override
        public final void onPlayProgress(int r9, int r10) {
                r8 = this;
                java.lang.String r0 = "id"
                java.lang.String r1 = "DefaultVideoPlayerStatusListener"
                super.onPlayProgress(r9, r10)
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r2 = r8.a
                boolean r2 = r2.h
                r3 = 1
                if (r2 == 0) goto Lb5
                r2 = 0
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r4 = r8.a
                com.mbridge.msdk.foundation.entity.CampaignEx r4 = r4.b
                if (r4 == 0) goto L40
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r2 = r8.a
                com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.b
                int r2 = r2.getVideoCompleteTime()
                com.mbridge.msdk.foundation.b.b r4 = com.mbridge.msdk.foundation.b.b.a()
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r6 = r8.a
                com.mbridge.msdk.foundation.entity.CampaignEx r6 = r6.b
                java.lang.String r6 = r6.getCampaignUnitId()
                r5.append(r6)
                java.lang.String r6 = "_"
                r5.append(r6)
                r5.append(r3)
                java.lang.String r5 = r5.toString()
                r4.b(r5, r9)
            L40:
                if (r2 <= r10) goto L43
                r2 = r10
            L43:
                if (r2 > 0) goto L48
                int r4 = r10 - r9
                goto L4a
            L48:
                int r4 = r2 - r9
            L4a:
                java.lang.String r5 = "string"
                if (r4 > 0) goto L72
                if (r2 > 0) goto L53
                java.lang.String r2 = "0"
                goto Lac
            L53:
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r2 = r8.a
                android.content.Context r2 = r2.getContext()
                android.content.res.Resources r2 = r2.getResources()
                com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r4 = r4.j()
                java.lang.String r6 = "mbridge_reward_video_view_reward_time_complete"
                int r4 = com.mbridge.msdk.foundation.tools.s.a(r4, r6, r5)
                java.lang.CharSequence r2 = r2.getText(r4)
                java.lang.String r2 = (java.lang.String) r2
                goto Lac
            L72:
                if (r2 > 0) goto L7f
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r4)
                java.lang.String r4 = ""
                goto La5
            L7f:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r4)
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r4 = r8.a
                android.content.Context r4 = r4.getContext()
                android.content.res.Resources r4 = r4.getResources()
                com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r6 = r6.j()
                java.lang.String r7 = "mbridge_reward_video_view_reward_time_left"
                int r5 = com.mbridge.msdk.foundation.tools.s.a(r6, r7, r5)
                java.lang.CharSequence r4 = r4.getText(r5)
                java.lang.String r4 = (java.lang.String) r4
            La5:
                r2.append(r4)
                java.lang.String r2 = r2.toString()
            Lac:
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r4 = r8.a
                android.widget.TextView r4 = com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.f(r4)
                r4.setText(r2)
            Lb5:
                r8.g = r10
                r8.f = r9
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r2 = r8.a
                android.widget.ProgressBar r2 = com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.e(r2)
                int r4 = r8.g
                r2.setMax(r4)
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r2 = r8.a
                android.widget.ProgressBar r2 = com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.e(r2)
                int r4 = r8.f
                r2.setProgress(r4)
                android.webkit.WebView r2 = r8.b
                if (r2 == 0) goto L135
                org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L127
                r2.<init>()     // Catch: java.lang.Exception -> L127
                java.lang.String r4 = "code"
                int r5 = com.mbridge.msdk.video.bt.module.BTBaseView.n     // Catch: java.lang.Exception -> L127
                r2.put(r4, r5)     // Catch: java.lang.Exception -> L127
                java.lang.String r4 = r8.d     // Catch: java.lang.Exception -> L127
                r2.put(r0, r4)     // Catch: java.lang.Exception -> L127
                org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L127
                r4.<init>()     // Catch: java.lang.Exception -> L127
                java.lang.String r5 = r8.d     // Catch: java.lang.Exception -> L127
                r4.put(r0, r5)     // Catch: java.lang.Exception -> L127
                java.lang.String r0 = "progress"
                java.lang.String r5 = com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.a(r9, r10)     // Catch: java.lang.Exception -> L127
                r4.put(r0, r5)     // Catch: java.lang.Exception -> L127
                java.lang.String r0 = "time"
                java.lang.String r5 = java.lang.String.valueOf(r9)     // Catch: java.lang.Exception -> L127
                r4.put(r0, r5)     // Catch: java.lang.Exception -> L127
                java.lang.String r0 = "duration"
                java.lang.String r5 = java.lang.String.valueOf(r10)     // Catch: java.lang.Exception -> L127
                r4.put(r0, r5)     // Catch: java.lang.Exception -> L127
                java.lang.String r0 = "data"
                r2.put(r0, r4)     // Catch: java.lang.Exception -> L127
                com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L127
                android.webkit.WebView r4 = r8.b     // Catch: java.lang.Exception -> L127
                java.lang.String r5 = "onPlayerProgressChanged"
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L127
                byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> L127
                r6 = 2
                java.lang.String r2 = android.util.Base64.encodeToString(r2, r6)     // Catch: java.lang.Exception -> L127
                r0.a(r4, r5, r2)     // Catch: java.lang.Exception -> L127
                goto L135
            L127:
                r0 = move-exception
                com.mbridge.msdk.video.bt.a.c r2 = com.mbridge.msdk.video.bt.a.c.a()
                android.webkit.WebView r4 = r8.b
                java.lang.String r0 = r0.getMessage()
                r2.a(r4, r0)
            L135:
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r8.c
                r2 = 100
                if (r0 == 0) goto L186
                int r4 = r9 * 100
                int r4 = r4 / r10
                int r5 = r9 + 1
                int r5 = r5 * r2
                int r5 = r5 / r10
                r6 = 25
                java.lang.String r7 = "omsdk"
                if (r4 > r6) goto L159
                if (r6 >= r5) goto L159
                boolean r6 = r8.i
                if (r6 != 0) goto L159
                r8.i = r3
                r0.firstQuartile()
                java.lang.String r0 = "play:  videoEvents.firstQuartile()"
                com.mbridge.msdk.foundation.tools.z.a(r7, r0)
                goto L186
            L159:
                r0 = 50
                if (r4 > r0) goto L170
                if (r0 >= r5) goto L170
                boolean r0 = r8.j
                if (r0 != 0) goto L170
                r8.j = r3
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r8.c
                r0.midpoint()
                java.lang.String r0 = "play:  videoEvents.midpoint()"
                com.mbridge.msdk.foundation.tools.z.a(r7, r0)
                goto L186
            L170:
                r0 = 75
                if (r4 > r0) goto L186
                if (r0 >= r5) goto L186
                boolean r0 = r8.k
                if (r0 != 0) goto L186
                r8.k = r3
                com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r8.c
                r0.thirdQuartile()
                java.lang.String r0 = "play:  videoEvents.thirdQuartile()"
                com.mbridge.msdk.foundation.tools.z.a(r7, r0)
            L186:
                int r0 = r8.l     // Catch: java.lang.Exception -> L237
                if (r0 == r2) goto L23f
                boolean r0 = r8.n     // Catch: java.lang.Exception -> L237
                if (r0 != 0) goto L23f
                int r0 = r8.l     // Catch: java.lang.Exception -> L237
                if (r0 != 0) goto L194
                goto L23f
            L194:
                int r0 = r8.m     // Catch: java.lang.Exception -> L237
                if (r0 < 0) goto L23f
                int r0 = r8.m     // Catch: java.lang.Exception -> L237
                int r10 = r10 * r0
                int r10 = r10 / r2
                if (r9 < r10) goto L23f
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r9 = r8.a     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.foundation.entity.CampaignEx r9 = r9.b     // Catch: java.lang.Exception -> L237
                int r9 = r9.getAdType()     // Catch: java.lang.Exception -> L237
                r0 = 94
                if (r9 == r0) goto L1e2
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r9 = r8.a     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.foundation.entity.CampaignEx r9 = r9.b     // Catch: java.lang.Exception -> L237
                int r9 = r9.getAdType()     // Catch: java.lang.Exception -> L237
                r0 = 287(0x11f, float:4.02E-43)
                if (r9 != r0) goto L1b7
                goto L1e2
            L1b7:
                java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L237
                r9.<init>()     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r8.a     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.b     // Catch: java.lang.Exception -> L237
                java.lang.String r0 = r0.getId()     // Catch: java.lang.Exception -> L237
                r9.append(r0)     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r8.a     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.b     // Catch: java.lang.Exception -> L237
                java.lang.String r0 = r0.getVideoUrlEncode()     // Catch: java.lang.Exception -> L237
                r9.append(r0)     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r8.a     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.b     // Catch: java.lang.Exception -> L237
                java.lang.String r0 = r0.getBidToken()     // Catch: java.lang.Exception -> L237
                r9.append(r0)     // Catch: java.lang.Exception -> L237
                java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L237
                goto L20c
            L1e2:
                java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L237
                r9.<init>()     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r8.a     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.b     // Catch: java.lang.Exception -> L237
                java.lang.String r0 = r0.getRequestId()     // Catch: java.lang.Exception -> L237
                r9.append(r0)     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r8.a     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.b     // Catch: java.lang.Exception -> L237
                java.lang.String r0 = r0.getId()     // Catch: java.lang.Exception -> L237
                r9.append(r0)     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r8.a     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.b     // Catch: java.lang.Exception -> L237
                java.lang.String r0 = r0.getVideoUrlEncode()     // Catch: java.lang.Exception -> L237
                r9.append(r0)     // Catch: java.lang.Exception -> L237
                java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L237
            L20c:
                com.mbridge.msdk.videocommon.download.b r0 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Exception -> L237
                java.lang.String r2 = r8.e     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.videocommon.download.a r9 = r0.a(r2, r9)     // Catch: java.lang.Exception -> L237
                if (r9 == 0) goto L23f
                r9.j()     // Catch: java.lang.Exception -> L237
                r8.n = r3     // Catch: java.lang.Exception -> L237
                java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L237
                r9.<init>()     // Catch: java.lang.Exception -> L237
                java.lang.String r0 = "CDRate is : "
                r9.append(r0)     // Catch: java.lang.Exception -> L237
                r9.append(r10)     // Catch: java.lang.Exception -> L237
                java.lang.String r10 = " and start download !"
                r9.append(r10)     // Catch: java.lang.Exception -> L237
                java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L237
                com.mbridge.msdk.foundation.tools.z.d(r1, r9)     // Catch: java.lang.Exception -> L237
                goto L23f
            L237:
                r9 = move-exception
                java.lang.String r9 = r9.getMessage()
                com.mbridge.msdk.foundation.tools.z.d(r1, r9)
            L23f:
                return
        }

        @Override
        public final void onPlaySetDataSourceError(java.lang.String r1) {
                r0 = this;
                super.onPlaySetDataSourceError(r1)
                return
        }

        @Override
        public final void onPlayStarted(int r3) {
                r2 = this;
                super.onPlayStarted(r3)
                boolean r0 = r2.h
                if (r0 != 0) goto L1e
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0 = r2.a
                android.widget.ProgressBar r0 = com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.e(r0)
                r0.setMax(r3)
                android.webkit.WebView r3 = r2.b
                if (r3 == 0) goto L1b
                java.lang.String r0 = r2.d
                java.lang.String r1 = "onPlayerPlay"
                com.mbridge.msdk.video.bt.module.BTBaseView.a(r3, r1, r0)
            L1b:
                r3 = 1
                r2.h = r3
            L1e:
                r3 = 0
                com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.a(r3)
                return
        }
    }

    static {
            return
    }

    public MBridgeBTVideoView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 0
            r1.w = r2
            r1.x = r2
            r1.y = r2
            r0 = 2
            r1.D = r0
            r1.F = r2
            r1.G = r0
            r0 = 1
            r1.H = r0
            r1.K = r2
            r1.L = r2
            r1.M = r2
            return
    }

    public MBridgeBTVideoView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.w = r1
            r0.x = r1
            r0.y = r1
            r2 = 2
            r0.D = r2
            r0.F = r1
            r0.G = r2
            r2 = 1
            r0.H = r2
            r0.K = r1
            r0.L = r1
            r0.M = r1
            return
    }

    static com.mbridge.msdk.playercommon.PlayerView a(com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0) {
            com.mbridge.msdk.playercommon.PlayerView r0 = r0.p
            return r0
    }

    static java.lang.String a(int r0, int r1) {
            java.lang.String r0 = b(r0, r1)
            return r0
    }

    static boolean a(boolean r0) {
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.J = r0
            return r0
    }

    static android.webkit.WebView b(com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0) {
            android.webkit.WebView r0 = r0.u
            return r0
    }

    private static java.lang.String b(int r3, int r4) {
            java.lang.String r0 = ""
            if (r4 == 0) goto L24
            float r3 = (float) r3
            float r1 = (float) r4
            float r3 = r3 / r1
            double r1 = (double) r3
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L20
            r3.<init>()     // Catch: java.lang.Throwable -> L20
            java.lang.Double r1 = java.lang.Double.valueOf(r1)     // Catch: java.lang.Throwable -> L20
            double r1 = com.mbridge.msdk.foundation.tools.ae.a(r1)     // Catch: java.lang.Throwable -> L20
            r3.append(r1)     // Catch: java.lang.Throwable -> L20
            r3.append(r0)     // Catch: java.lang.Throwable -> L20
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L20
            return r3
        L20:
            r3 = move-exception
            r3.printStackTrace()
        L24:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            return r3
    }

    private boolean b() {
            r4 = this;
            r0 = 0
            java.lang.String r1 = "mbridge_vfpv"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            com.mbridge.msdk.playercommon.PlayerView r1 = (com.mbridge.msdk.playercommon.PlayerView) r1     // Catch: java.lang.Throwable -> L81
            r4.p = r1     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "mbridge_sound_switch"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r1 = (com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView) r1     // Catch: java.lang.Throwable -> L81
            r4.q = r1     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "mbridge_tv_count"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> L81
            r4.r = r1     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "mbridge_rl_playing_close"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            r4.s = r1     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "mbridge_top_control"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> L81
            r4.N = r1     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "mbridge_video_progress_bar"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            android.widget.ProgressBar r1 = (android.widget.ProgressBar) r1     // Catch: java.lang.Throwable -> L81
            r4.O = r1     // Catch: java.lang.Throwable -> L81
            com.mbridge.msdk.playercommon.PlayerView r1 = r4.p     // Catch: java.lang.Throwable -> L81
            r2 = 1
            r1.setIsBTVideo(r2)     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "mbridge_native_endcard_feed_btn"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            com.mbridge.msdk.widget.FeedBackButton r1 = (com.mbridge.msdk.widget.FeedBackButton) r1     // Catch: java.lang.Throwable -> L81
            r4.t = r1     // Catch: java.lang.Throwable -> L81
            r1 = 4
            android.view.View[] r1 = new android.view.View[r1]     // Catch: java.lang.Throwable -> L81
            com.mbridge.msdk.playercommon.PlayerView r3 = r4.p     // Catch: java.lang.Throwable -> L81
            r1[r0] = r3     // Catch: java.lang.Throwable -> L81
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r3 = r4.q     // Catch: java.lang.Throwable -> L81
            r1[r2] = r3     // Catch: java.lang.Throwable -> L81
            r2 = 2
            android.widget.TextView r3 = r4.r     // Catch: java.lang.Throwable -> L81
            r1[r2] = r3     // Catch: java.lang.Throwable -> L81
            r2 = 3
            android.view.View r3 = r4.s     // Catch: java.lang.Throwable -> L81
            r1[r2] = r3     // Catch: java.lang.Throwable -> L81
            boolean r0 = r4.isNotNULL(r1)     // Catch: java.lang.Throwable -> L81
            return r0
        L81:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            java.lang.String r3 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.c(r3, r2, r1)
            return r0
    }

    static int c(com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0) {
            int r0 = r0.D
            return r0
    }

    private java.lang.String c() {
            r4 = this;
            java.lang.String r0 = ""
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.b     // Catch: java.lang.Throwable -> L25
            java.lang.String r0 = r1.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L25
            com.mbridge.msdk.videocommon.download.a r1 = r4.v     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L2f
            com.mbridge.msdk.videocommon.download.a r1 = r4.v     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = r1.d()     // Catch: java.lang.Throwable -> L25
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.a(r1)     // Catch: java.lang.Throwable -> L25
            if (r2 != 0) goto L2f
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L25
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L25
            boolean r2 = r2.exists()     // Catch: java.lang.Throwable -> L25
            if (r2 == 0) goto L2f
            r0 = r1
            goto L2f
        L25:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            java.lang.String r3 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.c(r3, r2, r1)
        L2f:
            return r0
    }

    private int d() {
            r4 = this;
            r0 = 5
            com.mbridge.msdk.videocommon.d.b r1 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.videocommon.d.a r1 = r1.b()     // Catch: java.lang.Throwable -> L30
            if (r1 != 0) goto L12
            com.mbridge.msdk.videocommon.d.b r2 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L30
            r2.c()     // Catch: java.lang.Throwable -> L30
        L12:
            if (r1 == 0) goto L19
            long r0 = r1.g()     // Catch: java.lang.Throwable -> L30
            int r0 = (int) r0     // Catch: java.lang.Throwable -> L30
        L19:
            java.lang.String r1 = "BTBaseView"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L30
            r2.<init>()     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = "MBridgeBaseView buffetTimeout:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L30
            r2.append(r0)     // Catch: java.lang.Throwable -> L30
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L30
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Throwable -> L30
            goto L34
        L30:
            r1 = move-exception
            r1.printStackTrace()
        L34:
            return r0
    }

    static com.iab.omid.library.mmadbridge.adsession.media.MediaEvents d(com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0) {
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r0.B
            return r0
    }

    static android.widget.ProgressBar e(com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0) {
            android.widget.ProgressBar r0 = r0.O
            return r0
    }

    static android.widget.TextView f(com.mbridge.msdk.video.bt.module.MBridgeBTVideoView r0) {
            android.widget.TextView r0 = r0.r
            return r0
    }

    @Override
    protected final void a() {
            r2 = this;
            super.a()
            boolean r0 = r2.h
            if (r0 == 0) goto L23
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r0 = r2.q
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView$1 r1 = new com.mbridge.msdk.video.bt.module.MBridgeBTVideoView$1
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.view.View r0 = r2.s
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView$2 r1 = new com.mbridge.msdk.video.bt.module.MBridgeBTVideoView$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView$3 r0 = new com.mbridge.msdk.video.bt.module.MBridgeBTVideoView$3
            r0.<init>(r2)
            r2.setOnClickListener(r0)
        L23:
            return
    }

    public int getMute() {
            r1 = this;
            int r0 = r1.D
            return r0
    }

    @Override
    public void init(android.content.Context r2) {
            r1 = this;
            java.lang.String r2 = "mbridge_reward_videoview_item"
            int r2 = r1.findLayout(r2)
            if (r2 <= 0) goto L21
            android.view.LayoutInflater r0 = r1.f
            r0.inflate(r2, r1)
            boolean r2 = r1.b()
            r1.h = r2
            boolean r2 = r1.h
            if (r2 != 0) goto L1e
            java.lang.String r2 = "BTBaseView"
            java.lang.String r0 = "MBridgeVideoView init fail"
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
        L1e:
            r1.a()
        L21:
            r2 = 0
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.J = r2
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r5 = this;
            super.onAttachedToWindow()
            boolean r0 = r5.M
            if (r0 != 0) goto L13
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()
            java.lang.String r1 = r5.c
            int r0 = r0.f(r1)
            r5.G = r0
        L13:
            android.view.View r0 = r5.s
            r1 = 8
            r2 = 0
            if (r0 == 0) goto L24
            int r3 = r5.x
            if (r3 != 0) goto L20
            r3 = r1
            goto L21
        L20:
            r3 = r2
        L21:
            r0.setVisibility(r3)
        L24:
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r0 = r5.q
            if (r0 == 0) goto L32
            int r3 = r5.y
            if (r3 != 0) goto L2e
            r3 = r1
            goto L2f
        L2e:
            r3 = r2
        L2f:
            r0.setVisibility(r3)
        L32:
            android.widget.TextView r0 = r5.r
            if (r0 == 0) goto L95
            int r3 = r5.w
            if (r3 != 0) goto L3b
            goto L3c
        L3b:
            r1 = r2
        L3c:
            r0.setVisibility(r1)
            android.widget.TextView r0 = r5.r
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L95
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            boolean r0 = r0.b()
            if (r0 == 0) goto L95
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.b
            java.lang.String r1 = r5.c
            r0.setCampaignUnitId(r1)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r5.c
            r1.append(r2)
            java.lang.String r2 = "_"
            r1.append(r2)
            r3 = 1
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r5.b
            r0.a(r1, r4)
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = r5.c
            r1.append(r4)
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.widget.FeedBackButton r2 = r5.t
            r0.a(r1, r2)
        L95:
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r5.z
            if (r0 == 0) goto La4
            android.view.View r0 = r5.getRootView()
            if (r0 == 0) goto La4
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r5.z
            r1.removeFriendlyObstruction(r0)
        La4:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            return
    }

    @Override
    public void onDestory() {
            r2 = this;
            com.mbridge.msdk.playercommon.PlayerView r0 = r2.p     // Catch: java.lang.Throwable -> L39
            r1 = 0
            if (r0 == 0) goto L11
            com.mbridge.msdk.playercommon.PlayerView r0 = r2.p     // Catch: java.lang.Throwable -> L39
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L39
            com.mbridge.msdk.playercommon.PlayerView r0 = r2.p     // Catch: java.lang.Throwable -> L39
            r0.release()     // Catch: java.lang.Throwable -> L39
            r2.p = r1     // Catch: java.lang.Throwable -> L39
        L11:
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r0 = r2.q     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L1a
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r0 = r2.q     // Catch: java.lang.Throwable -> L39
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L39
        L1a:
            android.view.View r0 = r2.s     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L23
            android.view.View r0 = r2.s     // Catch: java.lang.Throwable -> L39
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L39
        L23:
            android.webkit.WebView r0 = r2.u     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L29
            r2.u = r1     // Catch: java.lang.Throwable -> L39
        L29:
            com.iab.omid.library.mmadbridge.adsession.AdSession r0 = r2.z     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L2f
            r2.z = r1     // Catch: java.lang.Throwable -> L39
        L2f:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r2.B     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L35
            r2.B = r1     // Catch: java.lang.Throwable -> L39
        L35:
            r2.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L39
            goto L43
        L39:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L43:
            return
    }

    public void onPause() {
            r2 = this;
            com.mbridge.msdk.playercommon.PlayerView r0 = r2.p
            if (r0 == 0) goto L14
            boolean r0 = r0.isPlayIng()
            r2.L = r0
            com.mbridge.msdk.playercommon.PlayerView r1 = r2.p
            r1.setIsBTVideoPlaying(r0)
            com.mbridge.msdk.playercommon.PlayerView r0 = r2.p
            r0.onPause()
        L14:
            return
    }

    public void onResume() {
            r3 = this;
            com.mbridge.msdk.playercommon.PlayerView r0 = r3.p
            if (r0 == 0) goto L17
            r1 = 1
            r0.setDesk(r1)
            com.mbridge.msdk.playercommon.PlayerView r0 = r3.p
            r2 = 0
            r0.setIsCovered(r2)
            boolean r0 = r3.L
            if (r0 == 0) goto L17
            com.mbridge.msdk.playercommon.PlayerView r0 = r3.p
            r0.start(r1)
        L17:
            return
    }

    public void onStop() {
            r2 = this;
            com.mbridge.msdk.playercommon.PlayerView r0 = r2.p
            if (r0 == 0) goto L8
            r1 = 1
            r0.setIsCovered(r1)
        L8:
            return
    }

    public void pause() {
            r3 = this;
            com.mbridge.msdk.playercommon.PlayerView r0 = r3.p     // Catch: java.lang.Exception -> L27
            if (r0 == 0) goto L31
            com.mbridge.msdk.playercommon.PlayerView r0 = r3.p     // Catch: java.lang.Exception -> L27
            r0.pause()     // Catch: java.lang.Exception -> L27
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r3.B     // Catch: java.lang.Exception -> L27
            if (r0 == 0) goto L19
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r3.B     // Catch: java.lang.Exception -> L27
            r0.pause()     // Catch: java.lang.Exception -> L27
            java.lang.String r0 = "omsdk"
            java.lang.String r1 = "play:  videoEvents.pause()"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> L27
        L19:
            android.webkit.WebView r0 = r3.u     // Catch: java.lang.Exception -> L27
            if (r0 == 0) goto L31
            android.webkit.WebView r0 = r3.u     // Catch: java.lang.Exception -> L27
            java.lang.String r1 = "onPlayerPause"
            java.lang.String r2 = r3.d     // Catch: java.lang.Exception -> L27
            a(r0, r1, r2)     // Catch: java.lang.Exception -> L27
            goto L31
        L27:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L31:
            return
    }

    public void play() {
            r8 = this;
            java.lang.String r0 = "BTBaseView"
            boolean r1 = r8.M     // Catch: java.lang.Exception -> Lbb
            java.lang.String r2 = "omsdk"
            if (r1 != 0) goto L84
            java.lang.String r1 = r8.c()     // Catch: java.lang.Exception -> Lbb
            r8.I = r1     // Catch: java.lang.Exception -> Lbb
            com.mbridge.msdk.playercommon.PlayerView r3 = r8.p     // Catch: java.lang.Exception -> Lbb
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r8.b     // Catch: java.lang.Exception -> Lbb
            java.lang.String r4 = r4.getVideoUrlEncode()     // Catch: java.lang.Exception -> Lbb
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView$a r5 = r8.C     // Catch: java.lang.Exception -> Lbb
            r3.initVFPData(r1, r4, r5)     // Catch: java.lang.Exception -> Lbb
            int r1 = r8.G     // Catch: java.lang.Exception -> Lbb
            r3 = 1
            if (r1 != r3) goto L24
            r8.playMute()     // Catch: java.lang.Exception -> Lbb
            goto L27
        L24:
            r8.playUnMute()     // Catch: java.lang.Exception -> Lbb
        L27:
            com.iab.omid.library.mmadbridge.adsession.AdEvents r1 = r8.A     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            if (r1 == 0) goto L30
            com.iab.omid.library.mmadbridge.adsession.AdEvents r1 = r8.A     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            r1.impressionOccurred()     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
        L30:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r8.B     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            if (r1 == 0) goto L67
            com.mbridge.msdk.playercommon.PlayerView r1 = r8.p     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            int r1 = r1.getDuration()     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            float r1 = (float) r1     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            r4 = 0
            int r5 = (r1 > r4 ? 1 : (r1 == r4 ? 0 : -1))
            if (r5 != 0) goto L4b
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r8.b     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            if (r5 == 0) goto L4b
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.b     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            int r1 = r1.getVideoLength()     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            float r1 = (float) r1     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
        L4b:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r5 = r8.B     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            int r6 = r8.getMute()     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            r7 = 2
            if (r6 != r7) goto L56
            r4 = 1065353216(0x3f800000, float:1.0)
        L56:
            r5.start(r1, r4)     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            java.lang.String r1 = "play: videoEvents.start()"
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)     // Catch: java.lang.IllegalArgumentException -> L5f java.lang.Exception -> Lbb
            goto L67
        L5f:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> Lbb
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> Lbb
        L67:
            com.mbridge.msdk.playercommon.PlayerView r1 = r8.p     // Catch: java.lang.Exception -> Lbb
            boolean r1 = r1.playVideo()     // Catch: java.lang.Exception -> Lbb
            if (r1 != 0) goto L81
            java.lang.String r1 = "MediaPlayer"
            java.lang.String r2 = "播放失败"
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Exception -> Lbb
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView$a r1 = r8.C     // Catch: java.lang.Exception -> Lbb
            if (r1 == 0) goto L81
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView$a r1 = r8.C     // Catch: java.lang.Exception -> Lbb
            java.lang.String r2 = "play video failed"
            r1.onPlayError(r2)     // Catch: java.lang.Exception -> Lbb
        L81:
            r8.M = r3     // Catch: java.lang.Exception -> Lbb
            goto Lc3
        L84:
            boolean r1 = r8.F     // Catch: java.lang.Exception -> Lbb
            r3 = 0
            if (r1 == 0) goto L91
            com.mbridge.msdk.playercommon.PlayerView r1 = r8.p     // Catch: java.lang.Exception -> Lbb
            r1.playVideo(r3)     // Catch: java.lang.Exception -> Lbb
            r8.F = r3     // Catch: java.lang.Exception -> Lbb
            goto L96
        L91:
            com.mbridge.msdk.playercommon.PlayerView r1 = r8.p     // Catch: java.lang.Exception -> Lbb
            r1.start(r3)     // Catch: java.lang.Exception -> Lbb
        L96:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r8.B     // Catch: java.lang.IllegalArgumentException -> La5 java.lang.Exception -> Lbb
            if (r1 == 0) goto Lad
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r8.B     // Catch: java.lang.IllegalArgumentException -> La5 java.lang.Exception -> Lbb
            r1.resume()     // Catch: java.lang.IllegalArgumentException -> La5 java.lang.Exception -> Lbb
            java.lang.String r1 = "play:  videoEvents.resume()"
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)     // Catch: java.lang.IllegalArgumentException -> La5 java.lang.Exception -> Lbb
            goto Lad
        La5:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> Lbb
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> Lbb
        Lad:
            android.webkit.WebView r1 = r8.u     // Catch: java.lang.Exception -> Lbb
            if (r1 == 0) goto Lc3
            android.webkit.WebView r1 = r8.u     // Catch: java.lang.Exception -> Lbb
            java.lang.String r2 = "onPlayerPlay"
            java.lang.String r3 = r8.d     // Catch: java.lang.Exception -> Lbb
            a(r1, r2, r3)     // Catch: java.lang.Exception -> Lbb
            goto Lc3
        Lbb:
            r1 = move-exception
            java.lang.String r2 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r2, r1)
        Lc3:
            return
    }

    public boolean playMute() {
            r5 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.PlayerView r1 = r5.p     // Catch: java.lang.Exception -> L35
            if (r1 == 0) goto L3f
            android.webkit.WebView r1 = r5.u     // Catch: java.lang.Exception -> L35
            if (r1 == 0) goto L3f
            com.mbridge.msdk.playercommon.PlayerView r1 = r5.p     // Catch: java.lang.Exception -> L35
            r1.closeSound()     // Catch: java.lang.Exception -> L35
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r1 = r5.q     // Catch: java.lang.Exception -> L35
            r1.setSoundStatus(r0)     // Catch: java.lang.Exception -> L35
            r1 = 1
            r5.D = r1     // Catch: java.lang.Exception -> L35
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r2 = r5.B     // Catch: java.lang.IllegalArgumentException -> L21 java.lang.Exception -> L35
            if (r2 == 0) goto L2b
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r2 = r5.B     // Catch: java.lang.IllegalArgumentException -> L21 java.lang.Exception -> L35
            r3 = 0
            r2.volumeChange(r3)     // Catch: java.lang.IllegalArgumentException -> L21 java.lang.Exception -> L35
            goto L2b
        L21:
            r2 = move-exception
            java.lang.String r3 = "OMSDK"
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Exception -> L35
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)     // Catch: java.lang.Exception -> L35
        L2b:
            android.webkit.WebView r2 = r5.u     // Catch: java.lang.Exception -> L35
            java.lang.String r3 = "onPlayerMute"
            java.lang.String r4 = r5.d     // Catch: java.lang.Exception -> L35
            a(r2, r3, r4)     // Catch: java.lang.Exception -> L35
            return r1
        L35:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L3f:
            return r0
    }

    public boolean playUnMute() {
            r4 = this;
            com.mbridge.msdk.playercommon.PlayerView r0 = r4.p     // Catch: java.lang.Exception -> L36
            if (r0 == 0) goto L40
            android.webkit.WebView r0 = r4.u     // Catch: java.lang.Exception -> L36
            if (r0 == 0) goto L40
            com.mbridge.msdk.playercommon.PlayerView r0 = r4.p     // Catch: java.lang.Exception -> L36
            r0.openSound()     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r0 = r4.q     // Catch: java.lang.Exception -> L36
            r1 = 1
            r0.setSoundStatus(r1)     // Catch: java.lang.Exception -> L36
            r0 = 2
            r4.D = r0     // Catch: java.lang.Exception -> L36
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r4.B     // Catch: java.lang.IllegalArgumentException -> L22 java.lang.Exception -> L36
            if (r0 == 0) goto L2c
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r4.B     // Catch: java.lang.IllegalArgumentException -> L22 java.lang.Exception -> L36
            r2 = 1065353216(0x3f800000, float:1.0)
            r0.volumeChange(r2)     // Catch: java.lang.IllegalArgumentException -> L22 java.lang.Exception -> L36
            goto L2c
        L22:
            r0 = move-exception
            java.lang.String r2 = "OMSDK"
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)     // Catch: java.lang.Exception -> L36
        L2c:
            android.webkit.WebView r0 = r4.u     // Catch: java.lang.Exception -> L36
            java.lang.String r2 = "onUnmute"
            java.lang.String r3 = r4.d     // Catch: java.lang.Exception -> L36
            a(r0, r2, r3)     // Catch: java.lang.Exception -> L36
            return r1
        L36:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L40:
            r0 = 0
            return r0
    }

    public void preLoadData() {
            r10 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b
            int r0 = r0.getAdType()
            r1 = 94
            if (r0 == r1) goto L3a
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r10.b
            int r0 = r0.getAdType()
            r1 = 287(0x11f, float:4.02E-43)
            if (r0 != r1) goto L15
            goto L3a
        L15:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b
            java.lang.String r1 = r1.getId()
            r0.append(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b
            java.lang.String r1 = r1.getVideoUrlEncode()
            r0.append(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b
            java.lang.String r1 = r1.getBidToken()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            goto L5e
        L3a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b
            java.lang.String r1 = r1.getRequestId()
            r0.append(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b
            java.lang.String r1 = r1.getId()
            r0.append(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b
            java.lang.String r1 = r1.getVideoUrlEncode()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
        L5e:
            com.mbridge.msdk.videocommon.download.b r1 = com.mbridge.msdk.videocommon.download.b.getInstance()
            java.lang.String r2 = r10.c
            com.mbridge.msdk.videocommon.download.a r0 = r1.a(r2, r0)
            if (r0 == 0) goto L6c
            r10.v = r0
        L6c:
            int r0 = r10.d()
            r10.E = r0
            r0 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b     // Catch: java.lang.Throwable -> Lfe
            if (r1 == 0) goto La6
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b     // Catch: java.lang.Throwable -> Lfe
            boolean r1 = r1.isActiveOm()     // Catch: java.lang.Throwable -> Lfe
            if (r1 == 0) goto La6
            android.content.Context r2 = r10.getContext()     // Catch: java.lang.Throwable -> Lfe
            r3 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r4 = r1.getOmid()     // Catch: java.lang.Throwable -> Lfe
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r5 = r1.getRequestId()     // Catch: java.lang.Throwable -> Lfe
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r6 = r1.getId()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r7 = r10.c     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r8 = ""
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r9 = r1.getRequestIdNotice()     // Catch: java.lang.Throwable -> Lfe
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = com.mbridge.msdk.a.b.a(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> Lfe
            r10.z = r1     // Catch: java.lang.Throwable -> Lfe
        La6:
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r10.z     // Catch: java.lang.Throwable -> Lfe
            if (r1 == 0) goto L108
            com.mbridge.msdk.playercommon.PlayerView r1 = r10.p     // Catch: java.lang.Throwable -> Lfe
            if (r1 == 0) goto Lb5
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r10.z     // Catch: java.lang.Throwable -> Lfe
            com.mbridge.msdk.playercommon.PlayerView r2 = r10.p     // Catch: java.lang.Throwable -> Lfe
            r1.registerAdView(r2)     // Catch: java.lang.Throwable -> Lfe
        Lb5:
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r1 = r10.q     // Catch: java.lang.Throwable -> Lfe
            if (r1 == 0) goto Lc2
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r10.z     // Catch: java.lang.Throwable -> Lfe
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r2 = r10.q     // Catch: java.lang.Throwable -> Lfe
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r3 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER     // Catch: java.lang.Throwable -> Lfe
            r1.addFriendlyObstruction(r2, r3, r0)     // Catch: java.lang.Throwable -> Lfe
        Lc2:
            android.widget.TextView r1 = r10.r     // Catch: java.lang.Throwable -> Lfe
            if (r1 == 0) goto Lcf
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r10.z     // Catch: java.lang.Throwable -> Lfe
            android.widget.TextView r2 = r10.r     // Catch: java.lang.Throwable -> Lfe
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r3 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER     // Catch: java.lang.Throwable -> Lfe
            r1.addFriendlyObstruction(r2, r3, r0)     // Catch: java.lang.Throwable -> Lfe
        Lcf:
            android.view.View r1 = r10.s     // Catch: java.lang.Throwable -> Lfe
            if (r1 == 0) goto Ldc
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r10.z     // Catch: java.lang.Throwable -> Lfe
            android.view.View r2 = r10.s     // Catch: java.lang.Throwable -> Lfe
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r3 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.CLOSE_AD     // Catch: java.lang.Throwable -> Lfe
            r1.addFriendlyObstruction(r2, r3, r0)     // Catch: java.lang.Throwable -> Lfe
        Ldc:
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r10.z     // Catch: java.lang.Throwable -> Lfe
            com.iab.omid.library.mmadbridge.adsession.AdEvents r1 = com.iab.omid.library.mmadbridge.adsession.AdEvents.createAdEvents(r1)     // Catch: java.lang.Throwable -> Lfe
            r10.A = r1     // Catch: java.lang.Throwable -> Lfe
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r10.z     // Catch: java.lang.Throwable -> Lfe
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = com.iab.omid.library.mmadbridge.adsession.media.MediaEvents.createMediaEvents(r1)     // Catch: java.lang.Throwable -> Lfe
            r10.B = r1     // Catch: java.lang.Throwable -> Lfe
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r10.z     // Catch: java.lang.Throwable -> Lfe
            r1.start()     // Catch: java.lang.Throwable -> Lfe
            r1 = 1
            com.iab.omid.library.mmadbridge.adsession.media.Position r2 = com.iab.omid.library.mmadbridge.adsession.media.Position.STANDALONE     // Catch: java.lang.Throwable -> Lfe
            com.iab.omid.library.mmadbridge.adsession.media.VastProperties r1 = com.iab.omid.library.mmadbridge.adsession.media.VastProperties.createVastPropertiesForNonSkippableMedia(r1, r2)     // Catch: java.lang.Throwable -> Lfe
            com.iab.omid.library.mmadbridge.adsession.AdEvents r2 = r10.A     // Catch: java.lang.Throwable -> Lfe
            r2.loaded(r1)     // Catch: java.lang.Throwable -> Lfe
            goto L108
        Lfe:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)
        L108:
            java.lang.String r1 = r10.c()
            r10.I = r1
            boolean r1 = r10.h
            r2 = 0
            if (r1 == 0) goto L1bc
            java.lang.String r1 = r10.I
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1bc
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.b
            if (r1 == 0) goto L1bc
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r10.z
            if (r1 == 0) goto L14a
            com.mbridge.msdk.playercommon.PlayerView r3 = r10.p
            r1.registerAdView(r3)
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r10.z
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r3 = r10.q
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r4 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER
            r1.addFriendlyObstruction(r3, r4, r0)
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r10.z
            android.widget.TextView r3 = r10.r
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r4 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.OTHER
            r1.addFriendlyObstruction(r3, r4, r0)
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r10.z
            android.view.View r3 = r10.s
            com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose r4 = com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose.CLOSE_AD
            r1.addFriendlyObstruction(r3, r4, r0)
            java.lang.String r1 = "OMSDK"
            java.lang.String r3 = "RV registerView"
            com.mbridge.msdk.foundation.tools.z.a(r1, r3)
        L14a:
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView$a r1 = new com.mbridge.msdk.video.bt.module.MBridgeBTVideoView$a
            android.webkit.WebView r3 = r10.u
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r4 = r10.B
            r1.<init>(r10, r3, r4)
            r10.C = r1
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r10.b
            r4 = -1
            if (r3 == 0) goto L17c
            int r5 = r3.getReady_rate()
            if (r5 == r4) goto L165
            int r3 = r3.getReady_rate()
            goto L192
        L165:
            com.mbridge.msdk.videocommon.d.b r3 = com.mbridge.msdk.videocommon.d.b.a()
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r5 = r5.k()
            java.lang.String r6 = r10.c
            com.mbridge.msdk.videocommon.d.c r3 = r3.a(r5, r6, r2)
            int r3 = r3.r()
            goto L192
        L17c:
            com.mbridge.msdk.videocommon.d.b r3 = com.mbridge.msdk.videocommon.d.b.a()
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r5 = r5.k()
            java.lang.String r6 = r10.c
            com.mbridge.msdk.videocommon.d.c r3 = r3.a(r5, r6, r2)
            int r3 = r3.r()
        L192:
            com.mbridge.msdk.videocommon.d.b r5 = com.mbridge.msdk.videocommon.d.b.a()
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r6 = r6.k()
            java.lang.String r7 = r10.c
            com.mbridge.msdk.videocommon.d.c r5 = r5.a(r6, r7, r2)
            int r5 = r5.s()
            r1.a(r3, r5)
            com.mbridge.msdk.playercommon.PlayerView r1 = r10.p
            r1.setDesk(r2)
            com.mbridge.msdk.playercommon.PlayerView r1 = r10.p
            int r3 = r10.E
            r1.initBufferIngParam(r3)
            int r1 = r10.D
            r10.soundOperate(r1, r4, r0)
        L1bc:
            com.mbridge.msdk.video.bt.module.MBridgeBTVideoView.J = r2
            return
    }

    public void resume() {
            r4 = this;
            java.lang.String r0 = "BTBaseView"
            com.mbridge.msdk.playercommon.PlayerView r1 = r4.p     // Catch: java.lang.Exception -> L3f
            if (r1 == 0) goto L47
            boolean r1 = r4.F     // Catch: java.lang.Exception -> L3f
            if (r1 == 0) goto L13
            com.mbridge.msdk.playercommon.PlayerView r1 = r4.p     // Catch: java.lang.Exception -> L3f
            r2 = 0
            r1.playVideo(r2)     // Catch: java.lang.Exception -> L3f
            r4.F = r2     // Catch: java.lang.Exception -> L3f
            goto L18
        L13:
            com.mbridge.msdk.playercommon.PlayerView r1 = r4.p     // Catch: java.lang.Exception -> L3f
            r1.onResume()     // Catch: java.lang.Exception -> L3f
        L18:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r4.B     // Catch: java.lang.IllegalArgumentException -> L29 java.lang.Exception -> L3f
            if (r1 == 0) goto L31
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r4.B     // Catch: java.lang.IllegalArgumentException -> L29 java.lang.Exception -> L3f
            r1.resume()     // Catch: java.lang.IllegalArgumentException -> L29 java.lang.Exception -> L3f
            java.lang.String r1 = "omsdk"
            java.lang.String r2 = "play:  videoEvents.resume()"
            com.mbridge.msdk.foundation.tools.z.a(r1, r2)     // Catch: java.lang.IllegalArgumentException -> L29 java.lang.Exception -> L3f
            goto L31
        L29:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Exception -> L3f
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> L3f
        L31:
            android.webkit.WebView r1 = r4.u     // Catch: java.lang.Exception -> L3f
            if (r1 == 0) goto L47
            android.webkit.WebView r1 = r4.u     // Catch: java.lang.Exception -> L3f
            java.lang.String r2 = "onPlayerResume"
            java.lang.String r3 = r4.d     // Catch: java.lang.Exception -> L3f
            a(r1, r2, r3)     // Catch: java.lang.Exception -> L3f
            goto L47
        L3f:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L47:
            return
    }

    @Override
    public void setCampaign(com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r4 = this;
            super.setCampaign(r5)
            r0 = 1106247680(0x41f00000, float:30.0)
            java.lang.String r1 = "drawable"
            if (r5 == 0) goto L51
            int r5 = r5.getVideoCompleteTime()
            if (r5 <= 0) goto L51
            android.widget.TextView r5 = r4.r
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            java.lang.String r3 = "mbridge_reward_video_time_count_num_bg"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r1)
            r5.setBackgroundResource(r1)
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r1 = -2
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r2, r0)
            r5.<init>(r1, r0)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            r1 = 1084227584(0x40a00000, float:5.0)
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r0, r1)
            r1 = 0
            r5.setMargins(r0, r1, r1, r1)
            android.widget.TextView r2 = r4.r
            r2.setPadding(r0, r1, r0, r1)
            android.widget.TextView r0 = r4.r
            r0.setLayoutParams(r5)
            goto L75
        L51:
            android.widget.TextView r5 = r4.r
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            java.lang.String r3 = "mbridge_reward_shape_progress"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r1)
            r5.setBackgroundResource(r1)
            android.widget.TextView r5 = r4.r
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            int r0 = com.mbridge.msdk.foundation.tools.ae.b(r1, r0)
            r5.setWidth(r0)
        L75:
            return
    }

    public void setCloseViewVisable(int r2) {
            r1 = this;
            android.view.View r0 = r1.s
            if (r2 != 0) goto L6
            r2 = 4
            goto L7
        L6:
            r2 = 0
        L7:
            r0.setVisibility(r2)
            return
    }

    public void setCountDownTextViewVisable(int r2) {
            r1 = this;
            android.widget.TextView r0 = r1.r
            if (r2 != 0) goto L6
            r2 = 4
            goto L7
        L6:
            r2 = 0
        L7:
            r0.setVisibility(r2)
            return
    }

    public void setCreateWebView(android.webkit.WebView r1) {
            r0 = this;
            r0.u = r1
            return
    }

    public void setNotchPadding(int r5, int r6, int r7, int r8) {
            r4 = this;
            if (r5 > 0) goto L8
            android.widget.RelativeLayout r5 = r4.N
            int r5 = r5.getPaddingLeft()
        L8:
            if (r6 > 0) goto L10
            android.widget.RelativeLayout r6 = r4.N
            int r6 = r6.getPaddingRight()
        L10:
            if (r7 > 0) goto L18
            android.widget.RelativeLayout r7 = r4.N
            int r7 = r7.getPaddingTop()
        L18:
            if (r8 > 0) goto L20
            android.widget.RelativeLayout r8 = r4.N
            int r8 = r8.getPaddingBottom()
        L20:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NOTCH BTVideoView "
            r0.append(r1)
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.Integer r3 = java.lang.Integer.valueOf(r5)
            r1[r2] = r3
            r2 = 1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r6)
            r1[r2] = r3
            r2 = 2
            java.lang.Integer r3 = java.lang.Integer.valueOf(r7)
            r1[r2] = r3
            r2 = 3
            java.lang.Integer r3 = java.lang.Integer.valueOf(r8)
            r1[r2] = r3
            java.lang.String r2 = "%1s-%2s-%3s-%4s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            android.widget.RelativeLayout r0 = r4.N
            r0.setPadding(r5, r7, r6, r8)
            return
    }

    public void setOrientation(int r1) {
            r0 = this;
            r0.H = r1
            return
    }

    public void setPlaybackParams(float r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.PlayerView r0 = r1.p
            if (r0 == 0) goto L7
            r0.setPlaybackParams(r2)
        L7:
            return
    }

    public void setProgressBarState(int r2) {
            r1 = this;
            android.widget.ProgressBar r0 = r1.O
            if (r0 == 0) goto Ld
            if (r2 != 0) goto L9
            r2 = 8
            goto La
        L9:
            r2 = 0
        La:
            r0.setVisibility(r2)
        Ld:
            return
    }

    public void setShowClose(int r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public void setShowMute(int r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public void setShowTime(int r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public void setSoundImageViewVisble(int r2) {
            r1 = this;
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r0 = r1.q
            if (r2 != 0) goto L6
            r2 = 4
            goto L7
        L6:
            r2 = 0
        L7:
            r0.setVisibility(r2)
            return
    }

    public void setVolume(float r2, float r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.PlayerView r0 = r1.p
            if (r0 == 0) goto L7
            r0.setVolume(r2, r3)
        L7:
            return
    }

    public void soundOperate(int r3, int r4, java.lang.String r5) {
            r2 = this;
            boolean r5 = r2.h
            if (r5 == 0) goto L33
            r2.D = r3
            r5 = 0
            r0 = 2
            r1 = 1
            if (r3 != r1) goto L16
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r3 = r2.q
            r3.setSoundStatus(r5)
            com.mbridge.msdk.playercommon.PlayerView r3 = r2.p
            r3.closeSound()
            goto L22
        L16:
            if (r3 != r0) goto L22
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r3 = r2.q
            r3.setSoundStatus(r1)
            com.mbridge.msdk.playercommon.PlayerView r3 = r2.p
            r3.openSound()
        L22:
            if (r4 != r1) goto L2c
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r3 = r2.q
            r4 = 8
            r3.setVisibility(r4)
            goto L33
        L2c:
            if (r4 != r0) goto L33
            com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView r3 = r2.q
            r3.setVisibility(r5)
        L33:
            return
    }

    public void stop() {
            r3 = this;
            com.mbridge.msdk.playercommon.PlayerView r0 = r3.p     // Catch: java.lang.Exception -> L1f
            if (r0 == 0) goto L29
            com.mbridge.msdk.playercommon.PlayerView r0 = r3.p     // Catch: java.lang.Exception -> L1f
            r0.pause()     // Catch: java.lang.Exception -> L1f
            com.mbridge.msdk.playercommon.PlayerView r0 = r3.p     // Catch: java.lang.Exception -> L1f
            r0.stop()     // Catch: java.lang.Exception -> L1f
            r0 = 1
            r3.F = r0     // Catch: java.lang.Exception -> L1f
            android.webkit.WebView r0 = r3.u     // Catch: java.lang.Exception -> L1f
            if (r0 == 0) goto L29
            android.webkit.WebView r0 = r3.u     // Catch: java.lang.Exception -> L1f
            java.lang.String r1 = "onPlayerStop"
            java.lang.String r2 = r3.d     // Catch: java.lang.Exception -> L1f
            a(r0, r1, r2)     // Catch: java.lang.Exception -> L1f
            goto L29
        L1f:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
        L29:
            return
    }
}
