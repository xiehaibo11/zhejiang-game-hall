package com.tkay.expressad.video.bt.module;

public class TkayBTVideoView extends com.tkay.expressad.video.bt.module.BTBaseView {
    private static boolean H = false;
    private static final java.lang.String N = "2";
    private static final java.lang.String p = "tkay_reward_videoview_item";
    private com.tkay.expressad.video.bt.module.TkayBTVideoView.a A;
    private int B;
    private int C;
    private boolean D;
    private int E;
    private int F;
    private java.lang.String G;
    private boolean I;
    private boolean J;
    private boolean K;
    private android.widget.RelativeLayout L;
    private android.widget.ProgressBar M;
    private com.tkay.expressad.playercommon.PlayerView q;
    private com.tkay.expressad.video.widget.SoundImageView r;
    private android.widget.TextView s;
    private android.view.View t;
    private com.tkay.expressad.widget.FeedBackButton u;
    private android.webkit.WebView v;
    private com.tkay.expressad.videocommon.b.a w;
    private int x;
    private int y;
    private int z;




    private static final class a extends com.tkay.expressad.playercommon.DefaultVideoPlayerStatusListener {
        private com.tkay.expressad.video.bt.module.TkayBTVideoView a;
        private android.webkit.WebView b;
        private java.lang.String c;
        private java.lang.String d;
        private int e;
        private int f;
        private boolean g;
        private boolean h;
        private boolean i;
        private boolean j;
        private int k;
        private int l;
        private boolean m;

        public a(com.tkay.expressad.video.bt.module.TkayBTVideoView r2, android.webkit.WebView r3) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.h = r0
                r1.i = r0
                r1.j = r0
                r1.m = r0
                r1.a = r2
                r1.b = r3
                java.lang.String r3 = r2.d
                r1.c = r3
                java.lang.String r2 = r2.c
                r1.d = r2
                return
        }

        private int a() {
                r1 = this;
                int r0 = r1.e
                return r0
        }

        private void b() {
                r1 = this;
                r0 = 0
                r1.a = r0
                r1.b = r0
                r0 = 0
                com.tkay.expressad.video.bt.module.TkayBTVideoView.a(r0)
                return
        }

        public final void a(int r1, int r2) {
                r0 = this;
                r0.k = r1
                r0.l = r2
                return
        }

        @Override
        public final void onBufferingEnd() {
                r1 = this;
                super.onBufferingEnd()     // Catch: java.lang.Exception -> L4
                return
            L4:
                r0 = move-exception
                r0.printStackTrace()
                return
        }

        @Override
        public final void onBufferingStart(java.lang.String r4) {
                r3 = this;
                super.onBufferingStart(r4)     // Catch: java.lang.Exception -> L5a
                java.lang.String r0 = "mediaplayer prepare timeout"
                boolean r0 = r4.equals(r0)     // Catch: java.lang.Exception -> L5a
                if (r0 != 0) goto L13
                java.lang.String r0 = "play buffering tiemout"
                boolean r4 = r4.equals(r0)     // Catch: java.lang.Exception -> L5a
                if (r4 == 0) goto L59
            L13:
                android.webkit.WebView r4 = r3.b     // Catch: java.lang.Exception -> L5a
                if (r4 == 0) goto L59
                org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4c
                r4.<init>()     // Catch: java.lang.Exception -> L4c
                java.lang.String r0 = "code"
                int r1 = com.tkay.expressad.video.bt.module.BTBaseView.n     // Catch: java.lang.Exception -> L4c
                r4.put(r0, r1)     // Catch: java.lang.Exception -> L4c
                java.lang.String r0 = "id"
                java.lang.String r1 = r3.c     // Catch: java.lang.Exception -> L4c
                r4.put(r0, r1)     // Catch: java.lang.Exception -> L4c
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4c
                r0.<init>()     // Catch: java.lang.Exception -> L4c
                java.lang.String r1 = "data"
                r4.put(r1, r0)     // Catch: java.lang.Exception -> L4c
                com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L4c
                android.webkit.WebView r0 = r3.b     // Catch: java.lang.Exception -> L4c
                java.lang.String r1 = "onPlayerTimeout"
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L4c
                byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L4c
                r2 = 2
                java.lang.String r4 = android.util.Base64.encodeToString(r4, r2)     // Catch: java.lang.Exception -> L4c
                com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r1, r4)     // Catch: java.lang.Exception -> L4c
                return
            L4c:
                r4 = move-exception
                com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Exception -> L5a
                android.webkit.WebView r0 = r3.b     // Catch: java.lang.Exception -> L5a
                java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Exception -> L5a
                com.tkay.expressad.video.bt.a.c.a(r0, r4)     // Catch: java.lang.Exception -> L5a
            L59:
                return
            L5a:
                r4 = move-exception
                r4.printStackTrace()
                return
        }

        @Override
        public final void onPlayCompleted() {
                r4 = this;
                super.onPlayCompleted()
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r4.a
                com.tkay.expressad.foundation.d.c r0 = r0.b
                java.lang.String r1 = "0"
                if (r0 == 0) goto L39
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r4.a
                com.tkay.expressad.foundation.d.c r0 = r0.b
                int r0 = r0.i()
                if (r0 <= 0) goto L2f
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r4.a
                android.widget.TextView r0 = com.tkay.expressad.video.bt.module.TkayBTVideoView.e(r0)
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                java.lang.String r2 = "tkay_reward_video_view_reward_time_complete"
                java.lang.String r3 = "string"
                int r1 = com.tkay.expressad.foundation.h.i.a(r1, r2, r3)
                r0.setText(r1)
                goto L42
            L2f:
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r4.a
                android.widget.TextView r0 = com.tkay.expressad.video.bt.module.TkayBTVideoView.e(r0)
                r0.setText(r1)
                goto L42
            L39:
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r4.a
                android.widget.TextView r0 = com.tkay.expressad.video.bt.module.TkayBTVideoView.e(r0)
                r0.setText(r1)
            L42:
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r4.a
                com.tkay.expressad.playercommon.PlayerView r0 = com.tkay.expressad.video.bt.module.TkayBTVideoView.a(r0)
                r1 = 0
                r0.setClickable(r1)
                android.webkit.WebView r0 = r4.b
                if (r0 == 0) goto L57
                java.lang.String r1 = r4.c
                java.lang.String r2 = "onPlayerFinish"
                com.tkay.expressad.video.bt.module.BTBaseView.a(r0, r2, r1)
            L57:
                int r0 = r4.f
                r4.e = r0
                r0 = 1
                com.tkay.expressad.video.bt.module.TkayBTVideoView.a(r0)
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r4.a
                r0.stop()
                return
        }

        @Override
        public final void onPlayError(java.lang.String r5) {
                r4 = this;
                java.lang.String r0 = "id"
                super.onPlayError(r5)
                android.webkit.WebView r1 = r4.b
                if (r1 == 0) goto L53
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L46
                r1.<init>()     // Catch: java.lang.Exception -> L46
                java.lang.String r2 = "code"
                int r3 = com.tkay.expressad.video.bt.module.BTBaseView.o     // Catch: java.lang.Exception -> L46
                r1.put(r2, r3)     // Catch: java.lang.Exception -> L46
                java.lang.String r2 = r4.c     // Catch: java.lang.Exception -> L46
                r1.put(r0, r2)     // Catch: java.lang.Exception -> L46
                org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L46
                r2.<init>()     // Catch: java.lang.Exception -> L46
                java.lang.String r3 = "error"
                r2.put(r3, r5)     // Catch: java.lang.Exception -> L46
                java.lang.String r5 = r4.c     // Catch: java.lang.Exception -> L46
                r2.put(r0, r5)     // Catch: java.lang.Exception -> L46
                java.lang.String r5 = "data"
                r1.put(r5, r2)     // Catch: java.lang.Exception -> L46
                com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L46
                android.webkit.WebView r5 = r4.b     // Catch: java.lang.Exception -> L46
                java.lang.String r0 = "onPlayerFailed"
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L46
                byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> L46
                r2 = 2
                java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)     // Catch: java.lang.Exception -> L46
                com.tkay.expressad.atsignalcommon.windvane.j.a(r5, r0, r1)     // Catch: java.lang.Exception -> L46
                return
            L46:
                r5 = move-exception
                com.tkay.expressad.video.bt.a.c.a()
                android.webkit.WebView r0 = r4.b
                java.lang.String r5 = r5.getMessage()
                com.tkay.expressad.video.bt.a.c.a(r0, r5)
            L53:
                return
        }

        @Override
        public final void onPlayProgress(int r7, int r8) {
                r6 = this;
                java.lang.String r0 = "id"
                super.onPlayProgress(r7, r8)
                com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = r6.a
                boolean r1 = r1.h
                if (r1 == 0) goto La9
                r1 = 0
                com.tkay.expressad.video.bt.module.TkayBTVideoView r2 = r6.a
                com.tkay.expressad.foundation.d.c r2 = r2.b
                if (r2 == 0) goto L3a
                com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = r6.a
                com.tkay.expressad.foundation.d.c r1 = r1.b
                int r1 = r1.i()
                com.tkay.expressad.foundation.f.b r2 = com.tkay.expressad.foundation.f.b.a()
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                com.tkay.expressad.video.bt.module.TkayBTVideoView r4 = r6.a
                com.tkay.expressad.foundation.d.c r4 = r4.b
                java.lang.String r4 = r4.K()
                r3.append(r4)
                java.lang.String r4 = "_1"
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                r2.a(r3, r7)
            L3a:
                if (r1 <= r8) goto L3d
                r1 = r8
            L3d:
                if (r1 > 0) goto L42
                int r2 = r8 - r7
                goto L44
            L42:
                int r2 = r1 - r7
            L44:
                java.lang.String r3 = "string"
                if (r2 > 0) goto L6c
                if (r1 > 0) goto L4d
                java.lang.String r1 = "0"
                goto La0
            L4d:
                com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = r6.a
                android.content.Context r1 = r1.getContext()
                android.content.res.Resources r1 = r1.getResources()
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
                android.content.Context r2 = r2.f()
                java.lang.String r4 = "tkay_reward_video_view_reward_time_complete"
                int r2 = com.tkay.expressad.foundation.h.i.a(r2, r4, r3)
                java.lang.CharSequence r1 = r1.getText(r2)
                java.lang.String r1 = (java.lang.String) r1
                goto La0
            L6c:
                if (r1 > 0) goto L73
                java.lang.String r1 = java.lang.String.valueOf(r2)
                goto La0
            L73:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r2)
                com.tkay.expressad.video.bt.module.TkayBTVideoView r2 = r6.a
                android.content.Context r2 = r2.getContext()
                android.content.res.Resources r2 = r2.getResources()
                com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
                android.content.Context r4 = r4.f()
                java.lang.String r5 = "tkay_reward_video_view_reward_time_left"
                int r3 = com.tkay.expressad.foundation.h.i.a(r4, r5, r3)
                java.lang.CharSequence r2 = r2.getText(r3)
                java.lang.String r2 = (java.lang.String) r2
                r1.append(r2)
                java.lang.String r1 = r1.toString()
            La0:
                com.tkay.expressad.video.bt.module.TkayBTVideoView r2 = r6.a
                android.widget.TextView r2 = com.tkay.expressad.video.bt.module.TkayBTVideoView.e(r2)
                r2.setText(r1)
            La9:
                r6.f = r8
                r6.e = r7
                com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = r6.a
                android.widget.ProgressBar r1 = com.tkay.expressad.video.bt.module.TkayBTVideoView.d(r1)
                int r2 = r6.f
                r1.setMax(r2)
                com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = r6.a
                android.widget.ProgressBar r1 = com.tkay.expressad.video.bt.module.TkayBTVideoView.d(r1)
                int r2 = r6.e
                r1.setProgress(r2)
                android.webkit.WebView r1 = r6.b
                if (r1 == 0) goto L127
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L11a
                r1.<init>()     // Catch: java.lang.Exception -> L11a
                java.lang.String r2 = "code"
                int r3 = com.tkay.expressad.video.bt.module.BTBaseView.n     // Catch: java.lang.Exception -> L11a
                r1.put(r2, r3)     // Catch: java.lang.Exception -> L11a
                java.lang.String r2 = r6.c     // Catch: java.lang.Exception -> L11a
                r1.put(r0, r2)     // Catch: java.lang.Exception -> L11a
                org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L11a
                r2.<init>()     // Catch: java.lang.Exception -> L11a
                java.lang.String r3 = r6.c     // Catch: java.lang.Exception -> L11a
                r2.put(r0, r3)     // Catch: java.lang.Exception -> L11a
                java.lang.String r0 = "progress"
                java.lang.String r3 = com.tkay.expressad.video.bt.module.TkayBTVideoView.a(r7, r8)     // Catch: java.lang.Exception -> L11a
                r2.put(r0, r3)     // Catch: java.lang.Exception -> L11a
                java.lang.String r0 = "time"
                java.lang.String r3 = java.lang.String.valueOf(r7)     // Catch: java.lang.Exception -> L11a
                r2.put(r0, r3)     // Catch: java.lang.Exception -> L11a
                java.lang.String r0 = "duration"
                java.lang.String r3 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> L11a
                r2.put(r0, r3)     // Catch: java.lang.Exception -> L11a
                java.lang.String r0 = "data"
                r1.put(r0, r2)     // Catch: java.lang.Exception -> L11a
                com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L11a
                android.webkit.WebView r0 = r6.b     // Catch: java.lang.Exception -> L11a
                java.lang.String r2 = "onPlayerProgressChanged"
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L11a
                byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> L11a
                r3 = 2
                java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)     // Catch: java.lang.Exception -> L11a
                com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r2, r1)     // Catch: java.lang.Exception -> L11a
                goto L127
            L11a:
                r0 = move-exception
                com.tkay.expressad.video.bt.a.c.a()
                android.webkit.WebView r1 = r6.b
                java.lang.String r0 = r0.getMessage()
                com.tkay.expressad.video.bt.a.c.a(r1, r0)
            L127:
                int r0 = r6.k     // Catch: java.lang.Exception -> L1d0
                r1 = 100
                if (r0 == r1) goto L1cf
                boolean r0 = r6.m     // Catch: java.lang.Exception -> L1d0
                if (r0 != 0) goto L1cf
                int r0 = r6.k     // Catch: java.lang.Exception -> L1d0
                if (r0 != 0) goto L136
                return
            L136:
                int r0 = r6.l     // Catch: java.lang.Exception -> L1d0
                if (r0 < 0) goto L1cf
                int r0 = r6.l     // Catch: java.lang.Exception -> L1d0
                int r8 = r8 * r0
                int r8 = r8 / r1
                if (r7 < r8) goto L1cf
                com.tkay.expressad.video.bt.module.TkayBTVideoView r7 = r6.a     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.foundation.d.c r7 = r7.b     // Catch: java.lang.Exception -> L1d0
                int r7 = r7.w()     // Catch: java.lang.Exception -> L1d0
                r0 = 94
                if (r7 == r0) goto L184
                com.tkay.expressad.video.bt.module.TkayBTVideoView r7 = r6.a     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.foundation.d.c r7 = r7.b     // Catch: java.lang.Exception -> L1d0
                int r7 = r7.w()     // Catch: java.lang.Exception -> L1d0
                r0 = 287(0x11f, float:4.02E-43)
                if (r7 != r0) goto L159
                goto L184
            L159:
                java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1d0
                r7.<init>()     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r6.a     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.foundation.d.c r0 = r0.b     // Catch: java.lang.Exception -> L1d0
                java.lang.String r0 = r0.aZ()     // Catch: java.lang.Exception -> L1d0
                r7.append(r0)     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r6.a     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.foundation.d.c r0 = r0.b     // Catch: java.lang.Exception -> L1d0
                java.lang.String r0 = r0.S()     // Catch: java.lang.Exception -> L1d0
                r7.append(r0)     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r6.a     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.foundation.d.c r0 = r0.b     // Catch: java.lang.Exception -> L1d0
                java.lang.String r0 = r0.B()     // Catch: java.lang.Exception -> L1d0
                r7.append(r0)     // Catch: java.lang.Exception -> L1d0
                java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L1d0
                goto L1ae
            L184:
                java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1d0
                r7.<init>()     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r6.a     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.foundation.d.c r0 = r0.b     // Catch: java.lang.Exception -> L1d0
                java.lang.String r0 = r0.Z()     // Catch: java.lang.Exception -> L1d0
                r7.append(r0)     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r6.a     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.foundation.d.c r0 = r0.b     // Catch: java.lang.Exception -> L1d0
                java.lang.String r0 = r0.aZ()     // Catch: java.lang.Exception -> L1d0
                r7.append(r0)     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r6.a     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.foundation.d.c r0 = r0.b     // Catch: java.lang.Exception -> L1d0
                java.lang.String r0 = r0.S()     // Catch: java.lang.Exception -> L1d0
                r7.append(r0)     // Catch: java.lang.Exception -> L1d0
                java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L1d0
            L1ae:
                com.tkay.expressad.videocommon.b.c r0 = com.tkay.expressad.videocommon.b.c.a()     // Catch: java.lang.Exception -> L1d0
                java.lang.String r1 = r6.d     // Catch: java.lang.Exception -> L1d0
                com.tkay.expressad.videocommon.b.a r7 = r0.a(r1, r7)     // Catch: java.lang.Exception -> L1d0
                if (r7 == 0) goto L1cf
                r7.i()     // Catch: java.lang.Exception -> L1d0
                r7 = 1
                r6.m = r7     // Catch: java.lang.Exception -> L1d0
                java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1d0
                java.lang.String r0 = "CDRate is : "
                r7.<init>(r0)     // Catch: java.lang.Exception -> L1d0
                r7.append(r8)     // Catch: java.lang.Exception -> L1d0
                java.lang.String r8 = " and start download !"
                r7.append(r8)     // Catch: java.lang.Exception -> L1d0
            L1cf:
                return
            L1d0:
                r7 = move-exception
                r7.getMessage()
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
                boolean r0 = r2.g
                if (r0 != 0) goto L1e
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r2.a
                android.widget.ProgressBar r0 = com.tkay.expressad.video.bt.module.TkayBTVideoView.d(r0)
                r0.setMax(r3)
                android.webkit.WebView r3 = r2.b
                if (r3 == 0) goto L1b
                java.lang.String r0 = r2.c
                java.lang.String r1 = "onPlayerPlay"
                com.tkay.expressad.video.bt.module.BTBaseView.a(r3, r1, r0)
            L1b:
                r3 = 1
                r2.g = r3
            L1e:
                r3 = 0
                com.tkay.expressad.video.bt.module.TkayBTVideoView.a(r3)
                return
        }

        @Override
        public final void onVideoDownloadResume() {
                r3 = this;
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r3.a
                com.tkay.expressad.foundation.d.c r0 = r0.b
                int r0 = r0.w()
                r1 = 94
                if (r0 == r1) goto L44
                com.tkay.expressad.video.bt.module.TkayBTVideoView r0 = r3.a
                com.tkay.expressad.foundation.d.c r0 = r0.b
                int r0 = r0.w()
                r1 = 287(0x11f, float:4.02E-43)
                if (r0 != r1) goto L19
                goto L44
            L19:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = r3.a
                com.tkay.expressad.foundation.d.c r1 = r1.b
                java.lang.String r1 = r1.aZ()
                r0.append(r1)
                com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = r3.a
                com.tkay.expressad.foundation.d.c r1 = r1.b
                java.lang.String r1 = r1.S()
                r0.append(r1)
                com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = r3.a
                com.tkay.expressad.foundation.d.c r1 = r1.b
                java.lang.String r1 = r1.B()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                goto L6e
            L44:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = r3.a
                com.tkay.expressad.foundation.d.c r1 = r1.b
                java.lang.String r1 = r1.Z()
                r0.append(r1)
                com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = r3.a
                com.tkay.expressad.foundation.d.c r1 = r1.b
                java.lang.String r1 = r1.aZ()
                r0.append(r1)
                com.tkay.expressad.video.bt.module.TkayBTVideoView r1 = r3.a
                com.tkay.expressad.foundation.d.c r1 = r1.b
                java.lang.String r1 = r1.S()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
            L6e:
                com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()
                java.lang.String r2 = r3.d
                com.tkay.expressad.videocommon.b.a r0 = r1.a(r2, r0)
                if (r0 == 0) goto L80
                r0.i()
                r0 = 1
                r3.m = r0
            L80:
                return
        }
    }

    static {
            return
    }

    public TkayBTVideoView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 0
            r1.x = r2
            r1.y = r2
            r1.z = r2
            r0 = 2
            r1.B = r0
            r1.D = r2
            r1.E = r0
            r0 = 1
            r1.F = r0
            r1.I = r2
            r1.J = r2
            r1.K = r2
            return
    }

    public TkayBTVideoView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.x = r1
            r0.y = r1
            r0.z = r1
            r2 = 2
            r0.B = r2
            r0.D = r1
            r0.E = r2
            r2 = 1
            r0.F = r2
            r0.I = r1
            r0.J = r1
            r0.K = r1
            return
    }

    private int a(com.tkay.expressad.foundation.d.c r4) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L26
            int r1 = r4.ao()
            r2 = -1
            if (r1 == r2) goto Lf
            int r4 = r4.ao()
            goto L3c
        Lf:
            com.tkay.expressad.videocommon.e.c r4 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.e()
            java.lang.String r2 = r3.c
            com.tkay.expressad.videocommon.e.d r4 = r4.a(r1, r2, r0)
            int r4 = r4.v()
            goto L3c
        L26:
            com.tkay.expressad.videocommon.e.c r4 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.e()
            java.lang.String r2 = r3.c
            com.tkay.expressad.videocommon.e.d r4 = r4.a(r1, r2, r0)
            int r4 = r4.v()
        L3c:
            return r4
    }

    static com.tkay.expressad.playercommon.PlayerView a(com.tkay.expressad.video.bt.module.TkayBTVideoView r0) {
            com.tkay.expressad.playercommon.PlayerView r0 = r0.q
            return r0
    }

    static java.lang.String a(int r0, int r1) {
            java.lang.String r0 = b(r0, r1)
            return r0
    }

    static boolean a(boolean r0) {
            com.tkay.expressad.video.bt.module.TkayBTVideoView.H = r0
            return r0
    }

    static android.webkit.WebView b(com.tkay.expressad.video.bt.module.TkayBTVideoView r0) {
            android.webkit.WebView r0 = r0.v
            return r0
    }

    private static java.lang.String b(int r2, int r3) {
            if (r3 == 0) goto L1f
            float r2 = (float) r2
            float r0 = (float) r3
            float r2 = r2 / r0
            double r0 = (double) r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1b
            r2.<init>()     // Catch: java.lang.Throwable -> L1b
            java.lang.Double r0 = java.lang.Double.valueOf(r0)     // Catch: java.lang.Throwable -> L1b
            double r0 = com.tkay.expressad.foundation.h.t.a(r0)     // Catch: java.lang.Throwable -> L1b
            r2.append(r0)     // Catch: java.lang.Throwable -> L1b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1b
            return r2
        L1b:
            r2 = move-exception
            r2.printStackTrace()
        L1f:
            java.lang.String r2 = java.lang.String.valueOf(r3)
            return r2
    }

    private boolean b() {
            r4 = this;
            r0 = 0
            java.lang.String r1 = "tkay_vfpv"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            com.tkay.expressad.playercommon.PlayerView r1 = (com.tkay.expressad.playercommon.PlayerView) r1     // Catch: java.lang.Throwable -> L81
            r4.q = r1     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "tkay_sound_switch"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            com.tkay.expressad.video.widget.SoundImageView r1 = (com.tkay.expressad.video.widget.SoundImageView) r1     // Catch: java.lang.Throwable -> L81
            r4.r = r1     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "tkay_tv_count"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> L81
            r4.s = r1     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "tkay_rl_playing_close"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            r4.t = r1     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "tkay_top_control"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> L81
            r4.L = r1     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "tkay_video_progress_bar"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            android.widget.ProgressBar r1 = (android.widget.ProgressBar) r1     // Catch: java.lang.Throwable -> L81
            r4.M = r1     // Catch: java.lang.Throwable -> L81
            com.tkay.expressad.playercommon.PlayerView r1 = r4.q     // Catch: java.lang.Throwable -> L81
            r2 = 1
            r1.setIsBTVideo(r2)     // Catch: java.lang.Throwable -> L81
            java.lang.String r1 = "tkay_native_endcard_feed_btn"
            int r1 = r4.findID(r1)     // Catch: java.lang.Throwable -> L81
            android.view.View r1 = r4.findViewById(r1)     // Catch: java.lang.Throwable -> L81
            com.tkay.expressad.widget.FeedBackButton r1 = (com.tkay.expressad.widget.FeedBackButton) r1     // Catch: java.lang.Throwable -> L81
            r4.u = r1     // Catch: java.lang.Throwable -> L81
            r1 = 4
            android.view.View[] r1 = new android.view.View[r1]     // Catch: java.lang.Throwable -> L81
            com.tkay.expressad.playercommon.PlayerView r3 = r4.q     // Catch: java.lang.Throwable -> L81
            r1[r0] = r3     // Catch: java.lang.Throwable -> L81
            com.tkay.expressad.video.widget.SoundImageView r3 = r4.r     // Catch: java.lang.Throwable -> L81
            r1[r2] = r3     // Catch: java.lang.Throwable -> L81
            r2 = 2
            android.widget.TextView r3 = r4.s     // Catch: java.lang.Throwable -> L81
            r1[r2] = r3     // Catch: java.lang.Throwable -> L81
            r2 = 3
            android.view.View r3 = r4.t     // Catch: java.lang.Throwable -> L81
            r1[r2] = r3     // Catch: java.lang.Throwable -> L81
            boolean r0 = r4.isNotNULL(r1)     // Catch: java.lang.Throwable -> L81
            return r0
        L81:
            r1 = move-exception
            r1.getMessage()
            return r0
    }

    static int c(com.tkay.expressad.video.bt.module.TkayBTVideoView r0) {
            int r0 = r0.B
            return r0
    }

    private void c() {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.b
            int r0 = r0.w()
            r1 = 94
            if (r0 == r1) goto L3a
            com.tkay.expressad.foundation.d.c r0 = r3.b
            int r0 = r0.w()
            r1 = 287(0x11f, float:4.02E-43)
            if (r0 != r1) goto L15
            goto L3a
        L15:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.tkay.expressad.foundation.d.c r1 = r3.b
            java.lang.String r1 = r1.aZ()
            r0.append(r1)
            com.tkay.expressad.foundation.d.c r1 = r3.b
            java.lang.String r1 = r1.S()
            r0.append(r1)
            com.tkay.expressad.foundation.d.c r1 = r3.b
            java.lang.String r1 = r1.B()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            goto L5e
        L3a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.tkay.expressad.foundation.d.c r1 = r3.b
            java.lang.String r1 = r1.Z()
            r0.append(r1)
            com.tkay.expressad.foundation.d.c r1 = r3.b
            java.lang.String r1 = r1.aZ()
            r0.append(r1)
            com.tkay.expressad.foundation.d.c r1 = r3.b
            java.lang.String r1 = r1.S()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
        L5e:
            com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r2 = r3.c
            com.tkay.expressad.videocommon.b.a r0 = r1.a(r2, r0)
            if (r0 == 0) goto L6c
            r3.w = r0
        L6c:
            return
    }

    static android.widget.ProgressBar d(com.tkay.expressad.video.bt.module.TkayBTVideoView r0) {
            android.widget.ProgressBar r0 = r0.M
            return r0
    }

    private java.lang.String d() {
            r3 = this;
            java.lang.String r0 = ""
            com.tkay.expressad.foundation.d.c r1 = r3.b     // Catch: java.lang.Throwable -> L2e
            java.lang.String r0 = r1.S()     // Catch: java.lang.Throwable -> L2e
            com.tkay.expressad.videocommon.b.a r1 = r3.w     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L32
            com.tkay.expressad.videocommon.b.a r1 = r3.w     // Catch: java.lang.Throwable -> L2e
            int r1 = r1.k()     // Catch: java.lang.Throwable -> L2e
            r2 = 5
            if (r1 != r2) goto L32
            com.tkay.expressad.videocommon.b.a r1 = r3.w     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = r1.e()     // Catch: java.lang.Throwable -> L2e
            boolean r2 = com.tkay.expressad.foundation.h.w.a(r1)     // Catch: java.lang.Throwable -> L2e
            if (r2 != 0) goto L32
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L2e
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L2e
            boolean r2 = r2.exists()     // Catch: java.lang.Throwable -> L2e
            if (r2 == 0) goto L32
            r0 = r1
            goto L32
        L2e:
            r1 = move-exception
            r1.getMessage()
        L32:
            return r0
    }

    private static int e() {
            r0 = 5
            com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L19
            com.tkay.expressad.videocommon.e.a r1 = r1.b()     // Catch: java.lang.Throwable -> L19
            if (r1 != 0) goto L11
            com.tkay.expressad.videocommon.e.c.a()     // Catch: java.lang.Throwable -> L19
            com.tkay.expressad.videocommon.e.c.c()     // Catch: java.lang.Throwable -> L19
        L11:
            if (r1 == 0) goto L1d
            long r0 = r1.g()     // Catch: java.lang.Throwable -> L19
            int r0 = (int) r0
            goto L1d
        L19:
            r1 = move-exception
            r1.printStackTrace()
        L1d:
            return r0
    }

    static android.widget.TextView e(com.tkay.expressad.video.bt.module.TkayBTVideoView r0) {
            android.widget.TextView r0 = r0.s
            return r0
    }

    private int f() {
            r4 = this;
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.e()
            java.lang.String r2 = r4.c
            r3 = 0
            com.tkay.expressad.videocommon.e.d r0 = r0.a(r1, r2, r3)
            int r0 = r0.x()
            return r0
    }

    @Override
    protected final void a() {
            r2 = this;
            super.a()
            boolean r0 = r2.h
            if (r0 == 0) goto L23
            com.tkay.expressad.video.widget.SoundImageView r0 = r2.r
            com.tkay.expressad.video.bt.module.TkayBTVideoView$1 r1 = new com.tkay.expressad.video.bt.module.TkayBTVideoView$1
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.view.View r0 = r2.t
            com.tkay.expressad.video.bt.module.TkayBTVideoView$2 r1 = new com.tkay.expressad.video.bt.module.TkayBTVideoView$2
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            com.tkay.expressad.video.bt.module.TkayBTVideoView$3 r0 = new com.tkay.expressad.video.bt.module.TkayBTVideoView$3
            r0.<init>(r2)
            r2.setOnClickListener(r0)
        L23:
            return
    }

    public int getMute() {
            r1 = this;
            int r0 = r1.B
            return r0
    }

    @Override
    public void init(android.content.Context r2) {
            r1 = this;
            java.lang.String r2 = "tkay_reward_videoview_item"
            int r2 = r1.findLayout(r2)
            if (r2 <= 0) goto L16
            android.view.LayoutInflater r0 = r1.f
            r0.inflate(r2, r1)
            boolean r2 = r1.b()
            r1.h = r2
            r1.a()
        L16:
            r2 = 0
            com.tkay.expressad.video.bt.module.TkayBTVideoView.H = r2
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r4 = this;
            super.onAttachedToWindow()
            boolean r0 = r4.K
            if (r0 != 0) goto L12
            com.tkay.expressad.video.bt.a.c.a()
            java.lang.String r0 = r4.c
            int r0 = com.tkay.expressad.video.bt.a.c.e(r0)
            r4.E = r0
        L12:
            android.view.View r0 = r4.t
            r1 = 8
            r2 = 0
            if (r0 == 0) goto L23
            int r3 = r4.y
            if (r3 != 0) goto L1f
            r3 = r1
            goto L20
        L1f:
            r3 = r2
        L20:
            r0.setVisibility(r3)
        L23:
            com.tkay.expressad.video.widget.SoundImageView r0 = r4.r
            if (r0 == 0) goto L31
            int r3 = r4.z
            if (r3 != 0) goto L2d
            r3 = r1
            goto L2e
        L2d:
            r3 = r2
        L2e:
            r0.setVisibility(r3)
        L31:
            android.widget.TextView r0 = r4.s
            if (r0 == 0) goto L8d
            int r3 = r4.x
            if (r3 != 0) goto L3a
            goto L3b
        L3a:
            r1 = r2
        L3b:
            r0.setVisibility(r1)
            android.widget.TextView r0 = r4.s
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L8d
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            boolean r0 = r0.b()
            if (r0 == 0) goto L8d
            com.tkay.expressad.foundation.d.c r0 = r4.b
            java.lang.String r1 = r4.c
            r0.l(r1)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.c
            r1.append(r2)
            java.lang.String r2 = "_1"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.foundation.d.c r3 = r4.b
            r0.a(r1, r3)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.c
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.widget.FeedBackButton r2 = r4.u
            r0.a(r1, r2)
        L8d:
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
            com.tkay.expressad.playercommon.PlayerView r0 = r2.q     // Catch: java.lang.Throwable -> L2d
            r1 = 0
            if (r0 == 0) goto L11
            com.tkay.expressad.playercommon.PlayerView r0 = r2.q     // Catch: java.lang.Throwable -> L2d
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L2d
            com.tkay.expressad.playercommon.PlayerView r0 = r2.q     // Catch: java.lang.Throwable -> L2d
            r0.release()     // Catch: java.lang.Throwable -> L2d
            r2.q = r1     // Catch: java.lang.Throwable -> L2d
        L11:
            com.tkay.expressad.video.widget.SoundImageView r0 = r2.r     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L1a
            com.tkay.expressad.video.widget.SoundImageView r0 = r2.r     // Catch: java.lang.Throwable -> L2d
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L2d
        L1a:
            android.view.View r0 = r2.t     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L23
            android.view.View r0 = r2.t     // Catch: java.lang.Throwable -> L2d
            r0.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L2d
        L23:
            android.webkit.WebView r0 = r2.v     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L29
            r2.v = r1     // Catch: java.lang.Throwable -> L2d
        L29:
            r2.setOnClickListener(r1)     // Catch: java.lang.Throwable -> L2d
            return
        L2d:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void onPause() {
            r2 = this;
            com.tkay.expressad.playercommon.PlayerView r0 = r2.q
            if (r0 == 0) goto L14
            boolean r0 = r0.isPlayIng()
            r2.J = r0
            com.tkay.expressad.playercommon.PlayerView r1 = r2.q
            r1.setIsBTVideoPlaying(r0)
            com.tkay.expressad.playercommon.PlayerView r0 = r2.q
            r0.onPause()
        L14:
            return
    }

    public void onResume() {
            r2 = this;
            com.tkay.expressad.playercommon.PlayerView r0 = r2.q
            if (r0 == 0) goto L17
            r1 = 1
            r0.setDesk(r1)
            com.tkay.expressad.playercommon.PlayerView r0 = r2.q
            r1 = 0
            r0.setIsCovered(r1)
            boolean r0 = r2.J
            if (r0 == 0) goto L17
            com.tkay.expressad.playercommon.PlayerView r0 = r2.q
            r0.onResume()
        L17:
            return
    }

    public void onStop() {
            r2 = this;
            com.tkay.expressad.playercommon.PlayerView r0 = r2.q
            if (r0 == 0) goto L8
            r1 = 1
            r0.setIsCovered(r1)
        L8:
            return
    }

    public void pause() {
            r3 = this;
            com.tkay.expressad.playercommon.PlayerView r0 = r3.q     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L16
            com.tkay.expressad.playercommon.PlayerView r0 = r3.q     // Catch: java.lang.Exception -> L17
            r0.pause()     // Catch: java.lang.Exception -> L17
            android.webkit.WebView r0 = r3.v     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L16
            android.webkit.WebView r0 = r3.v     // Catch: java.lang.Exception -> L17
            java.lang.String r1 = "onPlayerPause"
            java.lang.String r2 = r3.d     // Catch: java.lang.Exception -> L17
            a(r0, r1, r2)     // Catch: java.lang.Exception -> L17
        L16:
            return
        L17:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void play() {
            r4 = this;
            boolean r0 = r4.K     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "onPlayerPlay"
            if (r0 != 0) goto L33
            int r0 = r4.E     // Catch: java.lang.Exception -> L51
            r2 = 1
            if (r0 != r2) goto Lf
            r4.playMute()     // Catch: java.lang.Exception -> L51
            goto L12
        Lf:
            r4.playUnMute()     // Catch: java.lang.Exception -> L51
        L12:
            com.tkay.expressad.playercommon.PlayerView r0 = r4.q     // Catch: java.lang.Exception -> L51
            boolean r0 = r0.playVideo()     // Catch: java.lang.Exception -> L51
            if (r0 != 0) goto L25
            com.tkay.expressad.video.bt.module.TkayBTVideoView$a r0 = r4.A     // Catch: java.lang.Exception -> L51
            if (r0 == 0) goto L25
            com.tkay.expressad.video.bt.module.TkayBTVideoView$a r0 = r4.A     // Catch: java.lang.Exception -> L51
            java.lang.String r3 = "play video failed"
            r0.onPlayError(r3)     // Catch: java.lang.Exception -> L51
        L25:
            r4.K = r2     // Catch: java.lang.Exception -> L51
            android.webkit.WebView r0 = r4.v     // Catch: java.lang.Exception -> L51
            if (r0 == 0) goto L32
            android.webkit.WebView r0 = r4.v     // Catch: java.lang.Exception -> L51
            java.lang.String r2 = r4.d     // Catch: java.lang.Exception -> L51
            a(r0, r1, r2)     // Catch: java.lang.Exception -> L51
        L32:
            return
        L33:
            boolean r0 = r4.D     // Catch: java.lang.Exception -> L51
            r2 = 0
            if (r0 == 0) goto L40
            com.tkay.expressad.playercommon.PlayerView r0 = r4.q     // Catch: java.lang.Exception -> L51
            r0.playVideo(r2)     // Catch: java.lang.Exception -> L51
            r4.D = r2     // Catch: java.lang.Exception -> L51
            goto L45
        L40:
            com.tkay.expressad.playercommon.PlayerView r0 = r4.q     // Catch: java.lang.Exception -> L51
            r0.start(r2)     // Catch: java.lang.Exception -> L51
        L45:
            android.webkit.WebView r0 = r4.v     // Catch: java.lang.Exception -> L51
            if (r0 == 0) goto L50
            android.webkit.WebView r0 = r4.v     // Catch: java.lang.Exception -> L51
            java.lang.String r2 = r4.d     // Catch: java.lang.Exception -> L51
            a(r0, r1, r2)     // Catch: java.lang.Exception -> L51
        L50:
            return
        L51:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public boolean playMute() {
            r5 = this;
            r0 = 0
            com.tkay.expressad.playercommon.PlayerView r1 = r5.q     // Catch: java.lang.Exception -> L20
            if (r1 == 0) goto L24
            android.webkit.WebView r1 = r5.v     // Catch: java.lang.Exception -> L20
            if (r1 == 0) goto L24
            com.tkay.expressad.playercommon.PlayerView r1 = r5.q     // Catch: java.lang.Exception -> L20
            r1.closeSound()     // Catch: java.lang.Exception -> L20
            com.tkay.expressad.video.widget.SoundImageView r1 = r5.r     // Catch: java.lang.Exception -> L20
            r1.setSoundStatus(r0)     // Catch: java.lang.Exception -> L20
            r1 = 1
            r5.B = r1     // Catch: java.lang.Exception -> L20
            android.webkit.WebView r2 = r5.v     // Catch: java.lang.Exception -> L20
            java.lang.String r3 = "onPlayerMute"
            java.lang.String r4 = r5.d     // Catch: java.lang.Exception -> L20
            a(r2, r3, r4)     // Catch: java.lang.Exception -> L20
            return r1
        L20:
            r1 = move-exception
            r1.getMessage()
        L24:
            return r0
    }

    public boolean playUnMute() {
            r4 = this;
            com.tkay.expressad.playercommon.PlayerView r0 = r4.q     // Catch: java.lang.Exception -> L20
            if (r0 == 0) goto L24
            android.webkit.WebView r0 = r4.v     // Catch: java.lang.Exception -> L20
            if (r0 == 0) goto L24
            com.tkay.expressad.playercommon.PlayerView r0 = r4.q     // Catch: java.lang.Exception -> L20
            r0.openSound()     // Catch: java.lang.Exception -> L20
            com.tkay.expressad.video.widget.SoundImageView r0 = r4.r     // Catch: java.lang.Exception -> L20
            r1 = 1
            r0.setSoundStatus(r1)     // Catch: java.lang.Exception -> L20
            r0 = 2
            r4.B = r0     // Catch: java.lang.Exception -> L20
            android.webkit.WebView r0 = r4.v     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = "onUnmute"
            java.lang.String r3 = r4.d     // Catch: java.lang.Exception -> L20
            a(r0, r2, r3)     // Catch: java.lang.Exception -> L20
            return r1
        L20:
            r0 = move-exception
            r0.getMessage()
        L24:
            r0 = 0
            return r0
    }

    public void preLoadData() {
            r7 = this;
            com.tkay.expressad.foundation.d.c r0 = r7.b
            int r0 = r0.w()
            r1 = 94
            if (r0 == r1) goto L3a
            com.tkay.expressad.foundation.d.c r0 = r7.b
            int r0 = r0.w()
            r1 = 287(0x11f, float:4.02E-43)
            if (r0 != r1) goto L15
            goto L3a
        L15:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.tkay.expressad.foundation.d.c r1 = r7.b
            java.lang.String r1 = r1.aZ()
            r0.append(r1)
            com.tkay.expressad.foundation.d.c r1 = r7.b
            java.lang.String r1 = r1.S()
            r0.append(r1)
            com.tkay.expressad.foundation.d.c r1 = r7.b
            java.lang.String r1 = r1.B()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            goto L5e
        L3a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.tkay.expressad.foundation.d.c r1 = r7.b
            java.lang.String r1 = r1.Z()
            r0.append(r1)
            com.tkay.expressad.foundation.d.c r1 = r7.b
            java.lang.String r1 = r1.aZ()
            r0.append(r1)
            com.tkay.expressad.foundation.d.c r1 = r7.b
            java.lang.String r1 = r1.S()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
        L5e:
            com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()
            java.lang.String r2 = r7.c
            com.tkay.expressad.videocommon.b.a r0 = r1.a(r2, r0)
            if (r0 == 0) goto L6c
            r7.w = r0
        L6c:
            int r0 = e()
            r7.C = r0
            java.lang.String r0 = r7.d()
            r7.G = r0
            boolean r0 = r7.h
            r1 = 0
            if (r0 == 0) goto L10f
            java.lang.String r0 = r7.G
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10f
            com.tkay.expressad.foundation.d.c r0 = r7.b
            if (r0 == 0) goto L10f
            com.tkay.expressad.video.bt.module.TkayBTVideoView$a r0 = new com.tkay.expressad.video.bt.module.TkayBTVideoView$a
            android.webkit.WebView r2 = r7.v
            r0.<init>(r7, r2)
            r7.A = r0
            com.tkay.expressad.foundation.d.c r2 = r7.b
            r3 = -1
            if (r2 == 0) goto Lb9
            int r4 = r2.ao()
            if (r4 == r3) goto La2
            int r2 = r2.ao()
            goto Lcf
        La2:
            com.tkay.expressad.videocommon.e.c r2 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r4 = r4.e()
            java.lang.String r5 = r7.c
            com.tkay.expressad.videocommon.e.d r2 = r2.a(r4, r5, r1)
            int r2 = r2.v()
            goto Lcf
        Lb9:
            com.tkay.expressad.videocommon.e.c r2 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r4 = r4.e()
            java.lang.String r5 = r7.c
            com.tkay.expressad.videocommon.e.d r2 = r2.a(r4, r5, r1)
            int r2 = r2.v()
        Lcf:
            com.tkay.expressad.videocommon.e.c r4 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r5 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r5 = r5.e()
            java.lang.String r6 = r7.c
            com.tkay.expressad.videocommon.e.d r4 = r4.a(r5, r6, r1)
            int r4 = r4.x()
            r0.a(r2, r4)
            com.tkay.expressad.playercommon.PlayerView r0 = r7.q
            r0.setDesk(r1)
            com.tkay.expressad.playercommon.PlayerView r0 = r7.q
            int r2 = r7.C
            r0.initBufferIngParam(r2)
            com.tkay.expressad.playercommon.PlayerView r0 = r7.q
            java.lang.String r2 = r7.G
            com.tkay.expressad.foundation.d.c r4 = r7.b
            java.lang.String r4 = r4.S()
            com.tkay.expressad.foundation.d.c r5 = r7.b
            int r5 = r5.ao()
            com.tkay.expressad.video.bt.module.TkayBTVideoView$a r6 = r7.A
            r0.initVFPData(r2, r4, r5, r6)
            int r0 = r7.B
            r2 = 0
            r7.soundOperate(r0, r3, r2)
        L10f:
            com.tkay.expressad.video.bt.module.TkayBTVideoView.H = r1
            return
    }

    public void resume() {
            r3 = this;
            com.tkay.expressad.playercommon.PlayerView r0 = r3.q     // Catch: java.lang.Exception -> L24
            if (r0 == 0) goto L23
            boolean r0 = r3.D     // Catch: java.lang.Exception -> L24
            if (r0 == 0) goto L11
            com.tkay.expressad.playercommon.PlayerView r0 = r3.q     // Catch: java.lang.Exception -> L24
            r1 = 0
            r0.playVideo(r1)     // Catch: java.lang.Exception -> L24
            r3.D = r1     // Catch: java.lang.Exception -> L24
            goto L16
        L11:
            com.tkay.expressad.playercommon.PlayerView r0 = r3.q     // Catch: java.lang.Exception -> L24
            r0.onResume()     // Catch: java.lang.Exception -> L24
        L16:
            android.webkit.WebView r0 = r3.v     // Catch: java.lang.Exception -> L24
            if (r0 == 0) goto L23
            android.webkit.WebView r0 = r3.v     // Catch: java.lang.Exception -> L24
            java.lang.String r1 = "onPlayerResume"
            java.lang.String r2 = r3.d     // Catch: java.lang.Exception -> L24
            a(r0, r1, r2)     // Catch: java.lang.Exception -> L24
        L23:
            return
        L24:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public void setCampaign(com.tkay.expressad.foundation.d.c r5) {
            r4 = this;
            super.setCampaign(r5)
            r0 = 1106247680(0x41f00000, float:30.0)
            java.lang.String r1 = "drawable"
            if (r5 == 0) goto L51
            int r5 = r5.i()
            if (r5 <= 0) goto L51
            android.widget.TextView r5 = r4.s
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            java.lang.String r3 = "tkay_reward_video_time_count_num_bg"
            int r1 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)
            r5.setBackgroundResource(r1)
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r1 = -2
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            int r0 = com.tkay.expressad.foundation.h.t.b(r2, r0)
            r5.<init>(r1, r0)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            r1 = 1084227584(0x40a00000, float:5.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)
            r1 = 0
            r5.setMargins(r0, r1, r1, r1)
            android.widget.TextView r2 = r4.s
            r2.setPadding(r0, r1, r0, r1)
            android.widget.TextView r0 = r4.s
            r0.setLayoutParams(r5)
            return
        L51:
            android.widget.TextView r5 = r4.s
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            java.lang.String r3 = "tkay_reward_shape_progress"
            int r1 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)
            r5.setBackgroundResource(r1)
            android.widget.TextView r5 = r4.s
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            int r0 = com.tkay.expressad.foundation.h.t.b(r1, r0)
            r5.setWidth(r0)
            return
    }

    public void setCloseViewVisable(int r2) {
            r1 = this;
            android.view.View r0 = r1.t
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
            android.widget.TextView r0 = r1.s
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
            r0.v = r1
            return
    }

    public void setNotchPadding(int r5, int r6, int r7, int r8) {
            r4 = this;
            if (r5 > 0) goto L8
            android.widget.RelativeLayout r5 = r4.L
            int r5 = r5.getPaddingLeft()
        L8:
            if (r6 > 0) goto L10
            android.widget.RelativeLayout r6 = r4.L
            int r6 = r6.getPaddingRight()
        L10:
            if (r7 > 0) goto L18
            android.widget.RelativeLayout r7 = r4.L
            int r7 = r7.getPaddingTop()
        L18:
            if (r8 > 0) goto L20
            android.widget.RelativeLayout r8 = r4.L
            int r8 = r8.getPaddingBottom()
        L20:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "NOTCH BTVideoView "
            r0.<init>(r1)
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
            android.widget.RelativeLayout r0 = r4.L
            r0.setPadding(r5, r7, r6, r8)
            return
    }

    public void setOrientation(int r1) {
            r0 = this;
            r0.F = r1
            return
    }

    public void setPlaybackParams(float r2) {
            r1 = this;
            com.tkay.expressad.playercommon.PlayerView r0 = r1.q
            if (r0 == 0) goto L7
            r0.setPlaybackParams(r2)
        L7:
            return
    }

    public void setProgressBarState(int r2) {
            r1 = this;
            android.widget.ProgressBar r0 = r1.M
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
            r0.y = r1
            return
    }

    public void setShowMute(int r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public void setShowTime(int r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public void setSoundImageViewVisble(int r2) {
            r1 = this;
            com.tkay.expressad.video.widget.SoundImageView r0 = r1.r
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
            com.tkay.expressad.playercommon.PlayerView r0 = r1.q
            if (r0 == 0) goto L7
            r0.setVolume(r2, r3)
        L7:
            return
    }

    public void soundOperate(int r3, int r4, java.lang.String r5) {
            r2 = this;
            boolean r5 = r2.h
            if (r5 == 0) goto L33
            r2.B = r3
            r5 = 0
            r0 = 2
            r1 = 1
            if (r3 != r1) goto L16
            com.tkay.expressad.video.widget.SoundImageView r3 = r2.r
            r3.setSoundStatus(r5)
            com.tkay.expressad.playercommon.PlayerView r3 = r2.q
            r3.closeSound()
            goto L22
        L16:
            if (r3 != r0) goto L22
            com.tkay.expressad.video.widget.SoundImageView r3 = r2.r
            r3.setSoundStatus(r1)
            com.tkay.expressad.playercommon.PlayerView r3 = r2.q
            r3.openSound()
        L22:
            if (r4 != r1) goto L2c
            com.tkay.expressad.video.widget.SoundImageView r3 = r2.r
            r4 = 8
            r3.setVisibility(r4)
            return
        L2c:
            if (r4 != r0) goto L33
            com.tkay.expressad.video.widget.SoundImageView r3 = r2.r
            r3.setVisibility(r5)
        L33:
            return
    }

    public void stop() {
            r3 = this;
            com.tkay.expressad.playercommon.PlayerView r0 = r3.q     // Catch: java.lang.Exception -> L2c
            if (r0 == 0) goto L2b
            com.tkay.expressad.playercommon.PlayerView r0 = r3.q     // Catch: java.lang.Exception -> L2c
            r0.pause()     // Catch: java.lang.Exception -> L2c
            com.tkay.expressad.playercommon.PlayerView r0 = r3.q     // Catch: java.lang.Exception -> L2c
            r0.stop()     // Catch: java.lang.Exception -> L2c
            com.tkay.expressad.playercommon.PlayerView r0 = r3.q     // Catch: java.lang.Exception -> L1a
            r0.prepare()     // Catch: java.lang.Exception -> L1a
            com.tkay.expressad.playercommon.PlayerView r0 = r3.q     // Catch: java.lang.Exception -> L1a
            r1 = 0
            r0.justSeekTo(r1)     // Catch: java.lang.Exception -> L1a
            goto L1e
        L1a:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Exception -> L2c
        L1e:
            android.webkit.WebView r0 = r3.v     // Catch: java.lang.Exception -> L2c
            if (r0 == 0) goto L2b
            android.webkit.WebView r0 = r3.v     // Catch: java.lang.Exception -> L2c
            java.lang.String r1 = "onPlayerStop"
            java.lang.String r2 = r3.d     // Catch: java.lang.Exception -> L2c
            a(r0, r1, r2)     // Catch: java.lang.Exception -> L2c
        L2b:
            return
        L2c:
            r0 = move-exception
            r0.getMessage()
            return
    }
}
