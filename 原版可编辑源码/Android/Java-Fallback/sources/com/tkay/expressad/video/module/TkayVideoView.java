package com.tkay.expressad.video.module;

public class TkayVideoView extends com.tkay.expressad.video.module.TkayBaseView implements com.tkay.expressad.video.signal.f, com.tkay.expressad.video.signal.j {
    private static int A = 0;
    private static int B = 0;
    private static final java.lang.String C = "2";
    public static final java.lang.String TAG = "TkayVideoView";
    private static boolean av = false;
    private static final java.lang.String s = "tkay_reward_videoview_item";
    private static final int t = 1;
    private static final float u = 1280.0f;
    private static final float v = 720.0f;
    private static final float w = 0.1f;
    private static int x;
    private static int y;
    private static int z;
    private com.tkay.expressad.playercommon.PlayerView D;
    private com.tkay.expressad.video.widget.SoundImageView E;
    private android.widget.TextView F;
    private android.view.View G;
    private android.widget.RelativeLayout H;
    private android.widget.ImageView I;
    private android.widget.ProgressBar J;
    private com.tkay.expressad.widget.FeedBackButton K;
    private boolean L;
    private com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar M;
    private com.tkay.expressad.video.dynview.f.a N;
    private int O;
    private android.widget.FrameLayout P;
    private com.tkay.expressad.video.module.TkayClickCTAView Q;
    private com.tkay.expressad.video.signal.factory.b R;
    private int S;
    private android.widget.RelativeLayout T;
    private com.tkay.expressad.video.module.a.a U;
    private boolean V;
    private boolean W;
    private int aA;
    private boolean aB;
    private boolean aC;
    private boolean aD;
    private boolean aE;
    private boolean aF;
    private boolean aG;
    private boolean aH;
    private boolean aI;
    private android.view.animation.AlphaAnimation aJ;
    private com.tkay.expressad.video.dynview.widget.TkayBaitClickView aK;
    private com.tkay.expressad.video.module.TkayVideoView.b aL;
    private boolean aM;
    private java.lang.Runnable aN;
    private java.lang.String aa;
    private int ab;
    private int ac;
    private int ad;
    private int ae;
    private com.tkay.expressad.widget.a.b af;
    private com.tkay.expressad.widget.a.c ag;
    private java.lang.String ah;
    private double ai;
    private double aj;
    private boolean ak;
    private boolean al;
    private boolean am;
    private boolean an;
    private boolean ao;
    private boolean ap;
    private boolean aq;
    private boolean ar;
    private boolean as;
    private int at;
    private boolean au;
    private int aw;
    private java.lang.String ax;
    private int ay;
    private int az;
    public java.util.List<com.tkay.expressad.foundation.d.c> mCampOrderViewData;
    public int mCampaignSize;
    public int mCurrPlayNum;
    public int mCurrentPlayProgressTime;
    public int mMuteSwitch;

    final class 1 implements com.tkay.expressad.video.dynview.f.h {
        final android.view.ViewGroup a;
        final com.tkay.expressad.video.dynview.c b;
        final com.tkay.expressad.video.module.TkayVideoView c;


        1(com.tkay.expressad.video.module.TkayVideoView r1, android.view.ViewGroup r2, com.tkay.expressad.video.dynview.c r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void a(com.tkay.expressad.video.dynview.a r4) {
                r3 = this;
                android.view.ViewGroup r0 = r3.a
                if (r0 == 0) goto L20
                android.view.View r0 = r4.a()
                if (r0 == 0) goto L20
                android.view.View r0 = r4.a()
                android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
                r2 = -1
                r1.<init>(r2, r2)
                r0.setLayoutParams(r1)
                android.view.ViewGroup r0 = r3.a
                android.view.View r1 = r4.a()
                r0.addView(r1)
            L20:
                java.util.List r0 = r4.b()
                if (r0 == 0) goto L43
                java.util.List r0 = r4.b()
                java.util.Iterator r0 = r0.iterator()
            L2e:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L43
                java.lang.Object r1 = r0.next()
                android.view.View r1 = (android.view.View) r1
                com.tkay.expressad.video.module.TkayVideoView$1$1 r2 = new com.tkay.expressad.video.module.TkayVideoView$1$1
                r2.<init>(r3)
                r1.setOnClickListener(r2)
                goto L2e
            L43:
                com.tkay.expressad.video.module.TkayVideoView r0 = r3.c
                boolean r4 = r4.c()
                com.tkay.expressad.video.module.TkayVideoView.a(r0, r4)
                com.tkay.expressad.video.module.TkayVideoView r4 = r3.c
                com.tkay.expressad.video.module.TkayVideoView.b(r4)
                r4 = 0
                com.tkay.expressad.video.module.TkayVideoView.a(r4)
                com.tkay.expressad.video.module.TkayVideoView r4 = r3.c
                com.tkay.expressad.video.dynview.c r0 = r3.b
                int r0 = r0.j()
                com.tkay.expressad.video.module.TkayVideoView.a(r4, r0)
                return
        }

        @Override
        public final void a(com.tkay.expressad.video.dynview.c.b r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "errorMsg:"
                r0.<init>(r1)
                java.lang.String r3 = r3.b()
                r0.append(r3)
                return
        }
    }


    final class 11 implements java.lang.Runnable {
        final com.tkay.expressad.video.module.TkayVideoView a;

        11(com.tkay.expressad.video.module.TkayVideoView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.tkay.expressad.video.module.TkayVideoView r0 = r1.a
                com.tkay.expressad.video.module.TkayVideoView.p(r0)
                return
        }
    }










    public static class a {
        public int a;
        public int b;
        public boolean c;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public final java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "ProgressData{curPlayPosition="
                r0.<init>(r1)
                int r1 = r2.a
                r0.append(r1)
                java.lang.String r1 = ", allDuration="
                r0.append(r1)
                int r1 = r2.b
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    private static final class b extends com.tkay.expressad.playercommon.DefaultVideoPlayerStatusListener {
        private com.tkay.expressad.video.module.TkayVideoView a;
        private int b;
        private int c;
        private boolean d;
        private com.tkay.expressad.video.module.TkayVideoView.a e;
        private boolean f;
        private boolean g;
        private boolean h;
        private boolean i;
        private java.lang.String j;
        private com.tkay.expressad.foundation.d.c k;
        private int l;
        private int m;
        private boolean n;

        public b(com.tkay.expressad.video.module.TkayVideoView r2) {
                r1 = this;
                r1.<init>()
                com.tkay.expressad.video.module.TkayVideoView$a r0 = new com.tkay.expressad.video.module.TkayVideoView$a
                r0.<init>()
                r1.e = r0
                r0 = 0
                r1.f = r0
                r1.g = r0
                r1.h = r0
                r1.n = r0
                r1.a = r2
                return
        }

        private void a(int r6) {
                r5 = this;
                java.lang.String r0 = "drawable"
                if (r6 <= 0) goto L68
                com.tkay.expressad.video.module.TkayVideoView r6 = r5.a
                android.widget.TextView r6 = com.tkay.expressad.video.module.TkayVideoView.t(r6)
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                java.lang.String r2 = "tkay_reward_video_time_count_num_bg"
                int r0 = com.tkay.expressad.foundation.h.i.a(r1, r2, r0)
                r6.setBackgroundResource(r0)
                android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams
                r0 = -2
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                r2 = 1106247680(0x41f00000, float:30.0)
                int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
                r6.<init>(r0, r1)
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                android.content.Context r0 = r0.f()
                r1 = 1084227584(0x40a00000, float:5.0)
                int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)
                r1 = 1
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
                android.content.Context r2 = r2.f()
                java.lang.String r3 = "tkay_native_endcard_feed_btn"
                java.lang.String r4 = "id"
                int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r4)
                r6.addRule(r1, r2)
                r1 = 0
                r6.setMargins(r0, r1, r1, r1)
                com.tkay.expressad.video.module.TkayVideoView r2 = r5.a
                android.widget.TextView r2 = com.tkay.expressad.video.module.TkayVideoView.t(r2)
                r2.setPadding(r0, r1, r0, r1)
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                android.widget.TextView r0 = com.tkay.expressad.video.module.TkayVideoView.t(r0)
                r0.setLayoutParams(r6)
                return
            L68:
                com.tkay.expressad.video.module.TkayVideoView r6 = r5.a
                android.widget.TextView r6 = com.tkay.expressad.video.module.TkayVideoView.t(r6)
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                java.lang.String r2 = "tkay_reward_shape_progress"
                int r0 = com.tkay.expressad.foundation.h.i.a(r1, r2, r0)
                r6.setBackgroundResource(r0)
                return
        }

        private void a(int r6, int r7, int r8) {
                r5 = this;
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                if (r0 != 0) goto L5
                return
            L5:
                android.content.Context r0 = r0.getContext()
                android.content.res.Resources r0 = r0.getResources()
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                java.lang.String r2 = "string"
                java.lang.String r3 = "tkay_reward_video_view_reward_time_complete"
                int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r2)
                java.lang.CharSequence r0 = r0.getText(r1)
                java.lang.String r0 = (java.lang.String) r0
                com.tkay.expressad.video.module.TkayVideoView r1 = r5.a
                android.content.Context r1 = r1.getContext()
                android.content.res.Resources r1 = r1.getResources()
                com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
                android.content.Context r3 = r3.f()
                java.lang.String r4 = "tkay_reward_video_view_reward_time_left"
                int r2 = com.tkay.expressad.foundation.h.i.a(r3, r4, r2)
                java.lang.CharSequence r1 = r1.getText(r2)
                java.lang.String r1 = (java.lang.String) r1
                if (r6 < 0) goto L57
                int r6 = r6 - r8
                if (r6 > 0) goto L47
                goto L75
            L47:
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                r7.append(r6)
                r7.append(r1)
                java.lang.String r0 = r7.toString()
                goto L75
            L57:
                int r7 = r7 - r8
                if (r7 > 0) goto L5f
                if (r6 > 0) goto L75
                java.lang.String r0 = "0"
                goto L75
            L5f:
                if (r6 > 0) goto L66
                java.lang.String r0 = java.lang.String.valueOf(r7)
                goto L75
            L66:
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                r6.append(r7)
                r6.append(r1)
                java.lang.String r0 = r6.toString()
            L75:
                com.tkay.expressad.video.module.TkayVideoView$a r6 = r5.e
                r6.a = r8
                com.tkay.expressad.video.module.TkayVideoView r6 = r5.a
                android.widget.TextView r6 = com.tkay.expressad.video.module.TkayVideoView.t(r6)
                r6.setText(r0)
                com.tkay.expressad.video.module.TkayVideoView r6 = r5.a
                android.widget.ProgressBar r6 = com.tkay.expressad.video.module.TkayVideoView.r(r6)
                if (r6 == 0) goto L9f
                com.tkay.expressad.video.module.TkayVideoView r6 = r5.a
                android.widget.ProgressBar r6 = com.tkay.expressad.video.module.TkayVideoView.r(r6)
                int r6 = r6.getVisibility()
                if (r6 != 0) goto L9f
                com.tkay.expressad.video.module.TkayVideoView r6 = r5.a
                android.widget.ProgressBar r6 = com.tkay.expressad.video.module.TkayVideoView.r(r6)
                r6.setProgress(r8)
            L9f:
                return
        }

        private void b(int r5) {
                r4 = this;
                com.tkay.expressad.video.module.TkayVideoView r0 = r4.a
                if (r0 == 0) goto L57
                android.widget.TextView r0 = com.tkay.expressad.video.module.TkayVideoView.t(r0)
                if (r0 != 0) goto Lb
                goto L57
            Lb:
                com.tkay.expressad.foundation.d.c r0 = r4.k
                int r0 = r0.k()
                r1 = 5
                java.lang.String r2 = "drawable"
                java.lang.String r3 = "tkay_reward_video_time_count_num_bg"
                if (r0 != r1) goto L3a
                com.tkay.expressad.video.module.TkayVideoView r0 = r4.a
                int r0 = r0.mCurrPlayNum
                r1 = 1
                if (r0 <= r1) goto L3a
                if (r5 > 0) goto L3a
                com.tkay.expressad.video.module.TkayVideoView r5 = r4.a
                android.widget.TextView r5 = com.tkay.expressad.video.module.TkayVideoView.t(r5)
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                android.content.Context r0 = r0.f()
                int r0 = com.tkay.expressad.foundation.h.i.a(r0, r3, r2)
                r5.setBackgroundResource(r0)
                r4.d()
                return
            L3a:
                if (r5 <= 0) goto L40
                r4.d()
                goto L42
            L40:
                java.lang.String r3 = "tkay_reward_shape_progress"
            L42:
                com.tkay.expressad.video.module.TkayVideoView r5 = r4.a
                android.widget.TextView r5 = com.tkay.expressad.video.module.TkayVideoView.t(r5)
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                android.content.Context r0 = r0.f()
                int r0 = com.tkay.expressad.foundation.h.i.a(r0, r3, r2)
                r5.setBackgroundResource(r0)
            L57:
                return
        }

        private void b(int r4, int r5, int r6) {
                r3 = this;
                com.tkay.expressad.video.module.TkayVideoView r0 = r3.a
                if (r0 != 0) goto L5
                return
            L5:
                if (r4 <= r5) goto L8
                r4 = r5
            L8:
                if (r4 > 0) goto Lc
                int r5 = r5 - r6
                goto Le
            Lc:
                int r5 = r4 - r6
            Le:
                java.lang.String r0 = "string"
                if (r5 > 0) goto L36
                if (r4 > 0) goto L17
                java.lang.String r4 = "0"
                goto L6a
            L17:
                com.tkay.expressad.video.module.TkayVideoView r4 = r3.a
                android.content.Context r4 = r4.getContext()
                android.content.res.Resources r4 = r4.getResources()
                com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
                android.content.Context r5 = r5.f()
                java.lang.String r1 = "tkay_reward_video_view_reward_time_complete"
                int r5 = com.tkay.expressad.foundation.h.i.a(r5, r1, r0)
                java.lang.CharSequence r4 = r4.getText(r5)
                java.lang.String r4 = (java.lang.String) r4
                goto L6a
            L36:
                if (r4 > 0) goto L3d
                java.lang.String r4 = java.lang.String.valueOf(r5)
                goto L6a
            L3d:
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                r4.append(r5)
                com.tkay.expressad.video.module.TkayVideoView r5 = r3.a
                android.content.Context r5 = r5.getContext()
                android.content.res.Resources r5 = r5.getResources()
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                java.lang.String r2 = "tkay_reward_video_view_reward_time_left"
                int r0 = com.tkay.expressad.foundation.h.i.a(r1, r2, r0)
                java.lang.CharSequence r5 = r5.getText(r0)
                java.lang.String r5 = (java.lang.String) r5
                r4.append(r5)
                java.lang.String r4 = r4.toString()
            L6a:
                com.tkay.expressad.video.module.TkayVideoView r5 = r3.a
                android.widget.TextView r5 = com.tkay.expressad.video.module.TkayVideoView.t(r5)
                r5.setText(r4)
                com.tkay.expressad.video.module.TkayVideoView r4 = r3.a
                android.widget.ProgressBar r4 = com.tkay.expressad.video.module.TkayVideoView.r(r4)
                if (r4 == 0) goto L90
                com.tkay.expressad.video.module.TkayVideoView r4 = r3.a
                android.widget.ProgressBar r4 = com.tkay.expressad.video.module.TkayVideoView.r(r4)
                int r4 = r4.getVisibility()
                if (r4 != 0) goto L90
                com.tkay.expressad.video.module.TkayVideoView r4 = r3.a
                android.widget.ProgressBar r4 = com.tkay.expressad.video.module.TkayVideoView.r(r4)
                r4.setProgress(r6)
            L90:
                return
        }

        private com.tkay.expressad.foundation.d.c c() {
                r1 = this;
                com.tkay.expressad.foundation.d.c r0 = r1.k
                return r0
        }

        private void d() {
                r3 = this;
                com.tkay.expressad.video.module.TkayVideoView r0 = r3.a
                if (r0 != 0) goto L5
                return
            L5:
                android.widget.TextView r0 = com.tkay.expressad.video.module.TkayVideoView.t(r0)
                android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
                android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
                if (r0 == 0) goto L2d
                r1 = -2
                r0.width = r1
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                r2 = 1103626240(0x41c80000, float:25.0)
                int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
                r0.height = r1
                com.tkay.expressad.video.module.TkayVideoView r1 = r3.a
                android.widget.TextView r1 = com.tkay.expressad.video.module.TkayVideoView.t(r1)
                r1.setLayoutParams(r0)
            L2d:
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                android.content.Context r0 = r0.f()
                r1 = 1084227584(0x40a00000, float:5.0)
                int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)
                com.tkay.expressad.video.module.TkayVideoView r1 = r3.a
                android.widget.TextView r1 = com.tkay.expressad.video.module.TkayVideoView.t(r1)
                r2 = 0
                r1.setPadding(r0, r2, r0, r2)
                return
        }

        public final int a() {
                r1 = this;
                int r0 = r1.b
                return r0
        }

        public final void a(int r1, int r2) {
                r0 = this;
                r0.l = r1
                r0.m = r2
                return
        }

        public final void a(com.tkay.expressad.foundation.d.c r1) {
                r0 = this;
                r0.k = r1
                return
        }

        public final void a(java.lang.String r1) {
                r0 = this;
                r0.j = r1
                return
        }

        public final void a(boolean r1) {
                r0 = this;
                r0.i = r1
                return
        }

        public final void b() {
                r1 = this;
                r0 = 0
                r1.a = r0
                r0 = 0
                com.tkay.expressad.video.module.TkayVideoView.a(r0)
                return
        }

        @Override
        public final void onBufferingEnd() {
                r3 = this;
                super.onBufferingEnd()     // Catch: java.lang.Exception -> Lf
                com.tkay.expressad.video.module.TkayVideoView r0 = r3.a     // Catch: java.lang.Exception -> Lf
                com.tkay.expressad.video.module.a.a r0 = r0.e     // Catch: java.lang.Exception -> Lf
                r1 = 14
                java.lang.String r2 = ""
                r0.a(r1, r2)     // Catch: java.lang.Exception -> Lf
                return
            Lf:
                r0 = move-exception
                r0.printStackTrace()
                return
        }

        @Override
        public final void onBufferingStart(java.lang.String r3) {
                r2 = this;
                super.onBufferingStart(r3)     // Catch: java.lang.Exception -> Lf
                com.tkay.expressad.video.module.TkayVideoView r3 = r2.a     // Catch: java.lang.Exception -> Lf
                com.tkay.expressad.video.module.a.a r3 = r3.e     // Catch: java.lang.Exception -> Lf
                r0 = 13
                java.lang.String r1 = ""
                r3.a(r0, r1)     // Catch: java.lang.Exception -> Lf
                return
            Lf:
                r3 = move-exception
                r3.printStackTrace()
                return
        }

        @Override
        public final void onPlayCompleted() {
                r5 = this;
                super.onPlayCompleted()
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                com.tkay.expressad.video.module.TkayVideoView.w(r0)
                com.tkay.expressad.foundation.d.c r0 = r5.k
                java.lang.String r1 = "0"
                r2 = 0
                if (r0 == 0) goto L75
                int r0 = r0.i()
                if (r0 <= 0) goto L2f
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                android.widget.TextView r0 = com.tkay.expressad.video.module.TkayVideoView.t(r0)
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                java.lang.String r3 = "tkay_reward_video_view_reward_time_complete"
                java.lang.String r4 = "string"
                int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r4)
                r0.setText(r1)
                goto L38
            L2f:
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                android.widget.TextView r0 = com.tkay.expressad.video.module.TkayVideoView.t(r0)
                r0.setText(r1)
            L38:
                com.tkay.expressad.foundation.d.c r0 = r5.k
                r1 = 100
                r0.n(r1)
                com.tkay.expressad.foundation.d.c r0 = r5.k
                int r0 = r0.f()
                r1 = 2
                if (r0 != r1) goto L7e
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                android.view.View r0 = com.tkay.expressad.video.module.TkayVideoView.x(r0)
                r1 = 4
                r0.setVisibility(r1)
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                com.tkay.expressad.widget.FeedBackButton r0 = com.tkay.expressad.video.module.TkayVideoView.y(r0)
                if (r0 == 0) goto L63
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                com.tkay.expressad.widget.FeedBackButton r0 = com.tkay.expressad.video.module.TkayVideoView.y(r0)
                r0.setClickable(r2)
            L63:
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                com.tkay.expressad.video.widget.SoundImageView r0 = com.tkay.expressad.video.module.TkayVideoView.z(r0)
                if (r0 == 0) goto L7e
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                com.tkay.expressad.video.widget.SoundImageView r0 = com.tkay.expressad.video.module.TkayVideoView.z(r0)
                r0.setClickable(r2)
                goto L7e
            L75:
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                android.widget.TextView r0 = com.tkay.expressad.video.module.TkayVideoView.t(r0)
                r0.setText(r1)
            L7e:
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                com.tkay.expressad.playercommon.PlayerView r0 = com.tkay.expressad.video.module.TkayVideoView.c(r0)
                r0.setClickable(r2)
                com.tkay.expressad.video.module.TkayVideoView r0 = r5.a
                r1 = 1
                java.lang.String r0 = com.tkay.expressad.video.module.TkayVideoView.b(r0, r1)
                com.tkay.expressad.foundation.d.c r2 = r5.k
                if (r2 == 0) goto Ldc
                int r2 = r2.k()
                r3 = 5
                if (r2 != r3) goto Ldc
                com.tkay.expressad.video.module.TkayVideoView r2 = r5.a
                if (r2 == 0) goto Ldc
                com.tkay.expressad.video.dynview.f.a r2 = com.tkay.expressad.video.module.TkayVideoView.A(r2)
                if (r2 == 0) goto Ldc
                com.tkay.expressad.video.module.TkayVideoView r2 = r5.a
                int r2 = r2.mCampaignSize
                com.tkay.expressad.video.module.TkayVideoView r3 = r5.a
                int r3 = r3.mCurrPlayNum
                if (r2 <= r3) goto Ldc
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                com.tkay.expressad.video.module.TkayVideoView r1 = r5.a
                int r1 = r1.mCurrPlayNum
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                java.lang.String r2 = "position"
                r0.put(r2, r1)
                com.tkay.expressad.video.module.TkayVideoView r1 = r5.a
                int r1 = r1.mMuteSwitch
                if (r1 == 0) goto Ld2
                com.tkay.expressad.video.module.TkayVideoView r1 = r5.a
                int r1 = r1.mMuteSwitch
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                java.lang.String r2 = "mute"
                r0.put(r2, r1)
            Ld2:
                com.tkay.expressad.video.module.TkayVideoView r1 = r5.a
                com.tkay.expressad.video.dynview.f.a r1 = com.tkay.expressad.video.module.TkayVideoView.A(r1)
                r1.a(r0)
                return
            Ldc:
                com.tkay.expressad.video.module.TkayVideoView r2 = r5.a
                com.tkay.expressad.video.module.a.a r2 = r2.e
                r3 = 121(0x79, float:1.7E-43)
                java.lang.String r4 = ""
                r2.a(r3, r4)
                com.tkay.expressad.video.module.TkayVideoView r2 = r5.a
                com.tkay.expressad.video.module.a.a r2 = r2.e
                r3 = 11
                r2.a(r3, r0)
                int r0 = r5.c
                r5.b = r0
                com.tkay.expressad.video.module.TkayVideoView r2 = r5.a
                r2.mCurrentPlayProgressTime = r0
                com.tkay.expressad.video.module.TkayVideoView.a(r1)
                return
        }

        @Override
        public final void onPlayError(java.lang.String r3) {
                r2 = this;
                super.onPlayError(r3)
                com.tkay.expressad.video.module.TkayVideoView r0 = r2.a
                if (r0 == 0) goto Le
                com.tkay.expressad.video.module.a.a r0 = r0.e
                r1 = 12
                r0.a(r1, r3)
            Le:
                return
        }

        @Override
        public final void onPlayProgress(int r9, int r10) {
                r8 = this;
                super.onPlayProgress(r9, r10)
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                boolean r0 = r0.f
                if (r0 == 0) goto L17e
                r0 = 0
                com.tkay.expressad.foundation.d.c r1 = r8.k
                if (r1 == 0) goto L30
                int r0 = r1.i()
                com.tkay.expressad.foundation.f.b r1 = com.tkay.expressad.foundation.f.b.a()
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                com.tkay.expressad.foundation.d.c r3 = r8.k
                java.lang.String r3 = r3.K()
                r2.append(r3)
                java.lang.String r3 = "_1"
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                r1.a(r2, r9)
            L30:
                com.tkay.expressad.foundation.d.c r1 = r8.k
                boolean r1 = r1.j()
                java.lang.String r2 = "0"
                java.lang.String r3 = "tkay_reward_video_view_reward_time_complete"
                java.lang.String r4 = "tkay_reward_video_view_reward_time_left"
                java.lang.String r5 = "string"
                if (r1 == 0) goto Lf0
                com.tkay.expressad.foundation.d.c r1 = r8.k
                int r1 = r1.k()
                r6 = 5
                if (r1 != r6) goto Lf0
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a     // Catch: java.lang.Exception -> Lea
                int r1 = com.tkay.expressad.video.module.TkayVideoView.B(r1)     // Catch: java.lang.Exception -> Lea
                com.tkay.expressad.video.module.TkayVideoView r6 = r8.a     // Catch: java.lang.Exception -> Lea
                if (r6 == 0) goto L17e
                com.tkay.expressad.video.module.TkayVideoView r6 = r8.a     // Catch: java.lang.Exception -> Lea
                android.content.Context r6 = r6.getContext()     // Catch: java.lang.Exception -> Lea
                android.content.res.Resources r6 = r6.getResources()     // Catch: java.lang.Exception -> Lea
                com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lea
                android.content.Context r7 = r7.f()     // Catch: java.lang.Exception -> Lea
                int r3 = com.tkay.expressad.foundation.h.i.a(r7, r3, r5)     // Catch: java.lang.Exception -> Lea
                java.lang.CharSequence r3 = r6.getText(r3)     // Catch: java.lang.Exception -> Lea
                java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> Lea
                com.tkay.expressad.video.module.TkayVideoView r6 = r8.a     // Catch: java.lang.Exception -> Lea
                android.content.Context r6 = r6.getContext()     // Catch: java.lang.Exception -> Lea
                android.content.res.Resources r6 = r6.getResources()     // Catch: java.lang.Exception -> Lea
                com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lea
                android.content.Context r7 = r7.f()     // Catch: java.lang.Exception -> Lea
                int r4 = com.tkay.expressad.foundation.h.i.a(r7, r4, r5)     // Catch: java.lang.Exception -> Lea
                java.lang.CharSequence r4 = r6.getText(r4)     // Catch: java.lang.Exception -> Lea
                java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> Lea
                if (r0 < 0) goto La1
                int r0 = r0 - r9
                if (r0 > 0) goto L91
                goto Lbd
            L91:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lea
                r1.<init>()     // Catch: java.lang.Exception -> Lea
                r1.append(r0)     // Catch: java.lang.Exception -> Lea
                r1.append(r4)     // Catch: java.lang.Exception -> Lea
                java.lang.String r3 = r1.toString()     // Catch: java.lang.Exception -> Lea
                goto Lbd
            La1:
                int r1 = r1 - r9
                if (r1 > 0) goto La7
                if (r0 > 0) goto Lbd
                goto Lbe
            La7:
                if (r0 > 0) goto Lae
                java.lang.String r3 = java.lang.String.valueOf(r1)     // Catch: java.lang.Exception -> Lea
                goto Lbd
            Lae:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lea
                r0.<init>()     // Catch: java.lang.Exception -> Lea
                r0.append(r1)     // Catch: java.lang.Exception -> Lea
                r0.append(r4)     // Catch: java.lang.Exception -> Lea
                java.lang.String r3 = r0.toString()     // Catch: java.lang.Exception -> Lea
            Lbd:
                r2 = r3
            Lbe:
                com.tkay.expressad.video.module.TkayVideoView$a r0 = r8.e     // Catch: java.lang.Exception -> Lea
                r0.a = r9     // Catch: java.lang.Exception -> Lea
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a     // Catch: java.lang.Exception -> Lea
                android.widget.TextView r0 = com.tkay.expressad.video.module.TkayVideoView.t(r0)     // Catch: java.lang.Exception -> Lea
                r0.setText(r2)     // Catch: java.lang.Exception -> Lea
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a     // Catch: java.lang.Exception -> Lea
                android.widget.ProgressBar r0 = com.tkay.expressad.video.module.TkayVideoView.r(r0)     // Catch: java.lang.Exception -> Lea
                if (r0 == 0) goto L17e
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a     // Catch: java.lang.Exception -> Lea
                android.widget.ProgressBar r0 = com.tkay.expressad.video.module.TkayVideoView.r(r0)     // Catch: java.lang.Exception -> Lea
                int r0 = r0.getVisibility()     // Catch: java.lang.Exception -> Lea
                if (r0 != 0) goto L17e
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a     // Catch: java.lang.Exception -> Lea
                android.widget.ProgressBar r0 = com.tkay.expressad.video.module.TkayVideoView.r(r0)     // Catch: java.lang.Exception -> Lea
                r0.setProgress(r9)     // Catch: java.lang.Exception -> Lea
                goto L17e
            Lea:
                r0 = move-exception
                r0.getMessage()
                goto L17e
            Lf0:
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a
                if (r1 == 0) goto L17a
                if (r0 <= r10) goto Lf7
                r0 = r10
            Lf7:
                if (r0 > 0) goto Lfc
                int r1 = r10 - r9
                goto Lfe
            Lfc:
                int r1 = r0 - r9
            Lfe:
                if (r1 > 0) goto L121
                if (r0 > 0) goto L103
                goto L154
            L103:
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                android.content.Context r0 = r0.getContext()
                android.content.res.Resources r0 = r0.getResources()
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r5)
                java.lang.CharSequence r0 = r0.getText(r1)
                r2 = r0
                java.lang.String r2 = (java.lang.String) r2
                goto L154
            L121:
                if (r0 > 0) goto L128
                java.lang.String r0 = java.lang.String.valueOf(r1)
                goto L153
            L128:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r1)
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a
                android.content.Context r1 = r1.getContext()
                android.content.res.Resources r1 = r1.getResources()
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
                android.content.Context r2 = r2.f()
                int r2 = com.tkay.expressad.foundation.h.i.a(r2, r4, r5)
                java.lang.CharSequence r1 = r1.getText(r2)
                java.lang.String r1 = (java.lang.String) r1
                r0.append(r1)
                java.lang.String r0 = r0.toString()
            L153:
                r2 = r0
            L154:
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                android.widget.TextView r0 = com.tkay.expressad.video.module.TkayVideoView.t(r0)
                r0.setText(r2)
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                android.widget.ProgressBar r0 = com.tkay.expressad.video.module.TkayVideoView.r(r0)
                if (r0 == 0) goto L17a
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                android.widget.ProgressBar r0 = com.tkay.expressad.video.module.TkayVideoView.r(r0)
                int r0 = r0.getVisibility()
                if (r0 != 0) goto L17a
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                android.widget.ProgressBar r0 = com.tkay.expressad.video.module.TkayVideoView.r(r0)
                r0.setProgress(r9)
            L17a:
                com.tkay.expressad.video.module.TkayVideoView$a r0 = r8.e
                r0.a = r9
            L17e:
                r8.c = r10
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                r0.mCurrentPlayProgressTime = r9
                com.tkay.expressad.video.module.TkayVideoView$a r0 = r8.e
                r0.a = r9
                com.tkay.expressad.video.module.TkayVideoView$a r0 = r8.e
                r0.b = r10
                com.tkay.expressad.video.module.TkayVideoView$a r0 = r8.e
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a
                boolean r1 = com.tkay.expressad.video.module.TkayVideoView.C(r1)
                r0.c = r1
                r8.b = r9
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                com.tkay.expressad.video.module.a.a r0 = r0.e
                r1 = 15
                com.tkay.expressad.video.module.TkayVideoView$a r2 = r8.e
                r0.a(r1, r2)
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                boolean r0 = com.tkay.expressad.video.module.TkayVideoView.d(r0)
                if (r0 == 0) goto L1c2
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                boolean r0 = com.tkay.expressad.video.module.TkayVideoView.D(r0)
                if (r0 != 0) goto L1c2
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                int r0 = com.tkay.expressad.video.module.TkayVideoView.j(r0)
                int r1 = com.tkay.expressad.foundation.g.a.cs
                if (r0 != r1) goto L1c2
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                com.tkay.expressad.video.module.TkayVideoView.g(r0)
            L1c2:
                r0 = 1
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a     // Catch: java.lang.Throwable -> L210
                if (r1 == 0) goto L1e5
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a     // Catch: java.lang.Throwable -> L210
                com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar r1 = com.tkay.expressad.video.module.TkayVideoView.E(r1)     // Catch: java.lang.Throwable -> L210
                if (r1 == 0) goto L1e5
                int r1 = r9 * 100
                int r1 = r1 / r10
                com.tkay.expressad.video.module.TkayVideoView r2 = r8.a     // Catch: java.lang.Throwable -> L210
                com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar r2 = com.tkay.expressad.video.module.TkayVideoView.E(r2)     // Catch: java.lang.Throwable -> L210
                com.tkay.expressad.video.module.TkayVideoView r3 = r8.a     // Catch: java.lang.Throwable -> L210
                int r3 = r3.mCurrPlayNum     // Catch: java.lang.Throwable -> L210
                int r3 = r3 - r0
                r2.setProgress(r1, r3)     // Catch: java.lang.Throwable -> L210
                com.tkay.expressad.foundation.d.c r2 = r8.k     // Catch: java.lang.Throwable -> L210
                r2.n(r1)     // Catch: java.lang.Throwable -> L210
            L1e5:
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a     // Catch: java.lang.Throwable -> L210
                if (r1 == 0) goto L214
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a     // Catch: java.lang.Throwable -> L210
                int r1 = com.tkay.expressad.video.module.TkayVideoView.v(r1)     // Catch: java.lang.Throwable -> L210
                r2 = -1
                if (r1 == r2) goto L214
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a     // Catch: java.lang.Throwable -> L210
                int r1 = com.tkay.expressad.video.module.TkayVideoView.v(r1)     // Catch: java.lang.Throwable -> L210
                if (r9 != r1) goto L214
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a     // Catch: java.lang.Throwable -> L210
                com.tkay.expressad.foundation.d.c r1 = r1.b     // Catch: java.lang.Throwable -> L210
                if (r1 == 0) goto L214
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a     // Catch: java.lang.Throwable -> L210
                com.tkay.expressad.foundation.d.c r1 = r1.b     // Catch: java.lang.Throwable -> L210
                boolean r1 = r1.j()     // Catch: java.lang.Throwable -> L210
                if (r1 == 0) goto L214
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a     // Catch: java.lang.Throwable -> L210
                r1.setCTALayoutVisibleOrGone()     // Catch: java.lang.Throwable -> L210
                goto L214
            L210:
                r1 = move-exception
                r1.getMessage()
            L214:
                int r1 = r8.l
                r2 = 100
                if (r1 == r2) goto L2af
                boolean r3 = r8.n
                if (r3 != 0) goto L2af
                if (r1 != 0) goto L221
                return
            L221:
                int r3 = r8.m
                if (r3 <= r1) goto L229
                int r1 = r1 / 2
                r8.m = r1
            L229:
                int r1 = r8.m
                if (r1 < 0) goto L2af
                int r10 = r10 * r1
                int r10 = r10 / r2
                if (r9 < r10) goto L2af
                com.tkay.expressad.foundation.d.c r9 = r8.k
                int r9 = r9.w()
                r1 = 94
                if (r9 == r1) goto L26b
                com.tkay.expressad.foundation.d.c r9 = r8.k
                int r9 = r9.w()
                r1 = 287(0x11f, float:4.02E-43)
                if (r9 != r1) goto L246
                goto L26b
            L246:
                java.lang.StringBuilder r9 = new java.lang.StringBuilder
                r9.<init>()
                com.tkay.expressad.foundation.d.c r1 = r8.k
                java.lang.String r1 = r1.aZ()
                r9.append(r1)
                com.tkay.expressad.foundation.d.c r1 = r8.k
                java.lang.String r1 = r1.S()
                r9.append(r1)
                com.tkay.expressad.foundation.d.c r1 = r8.k
                java.lang.String r1 = r1.B()
                r9.append(r1)
                java.lang.String r9 = r9.toString()
                goto L28f
            L26b:
                java.lang.StringBuilder r9 = new java.lang.StringBuilder
                r9.<init>()
                com.tkay.expressad.foundation.d.c r1 = r8.k
                java.lang.String r1 = r1.Z()
                r9.append(r1)
                com.tkay.expressad.foundation.d.c r1 = r8.k
                java.lang.String r1 = r1.aZ()
                r9.append(r1)
                com.tkay.expressad.foundation.d.c r1 = r8.k
                java.lang.String r1 = r1.S()
                r9.append(r1)
                java.lang.String r9 = r9.toString()
            L28f:
                com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()
                java.lang.String r2 = r8.j
                com.tkay.expressad.videocommon.b.a r9 = r1.a(r2, r9)
                if (r9 == 0) goto L2af
                r9.i()
                r8.n = r0
                java.lang.StringBuilder r9 = new java.lang.StringBuilder
                java.lang.String r0 = "CDRate is : "
                r9.<init>(r0)
                r9.append(r10)
                java.lang.String r10 = " and start download !"
                r9.append(r10)
            L2af:
                return
        }

        @Override
        public final void onPlaySetDataSourceError(java.lang.String r1) {
                r0 = this;
                super.onPlaySetDataSourceError(r1)
                return
        }

        @Override
        public final void onPlayStarted(int r9) {
                r8 = this;
                super.onPlayStarted(r9)
                boolean r0 = r8.d
                r1 = 1
                if (r0 != 0) goto L1c
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                if (r0 == 0) goto Lf
                com.tkay.expressad.video.module.TkayVideoView.q(r0)
            Lf:
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                com.tkay.expressad.video.module.a.a r0 = r0.e
                r2 = 10
                com.tkay.expressad.video.module.TkayVideoView$a r3 = r8.e
                r0.a(r2, r3)
                r8.d = r1
            L1c:
                com.tkay.expressad.foundation.d.c r0 = r8.k
                r2 = 0
                if (r0 == 0) goto Lfd
                int r0 = r0.i()
                com.tkay.expressad.foundation.d.c r3 = r8.k
                boolean r3 = r3.j()
                java.lang.String r4 = "tkay_reward_shape_progress"
                java.lang.String r5 = "tkay_reward_video_time_count_num_bg"
                java.lang.String r6 = "drawable"
                if (r3 == 0) goto L86
                com.tkay.expressad.video.module.TkayVideoView r3 = r8.a
                if (r3 == 0) goto Lfd
                android.widget.TextView r3 = com.tkay.expressad.video.module.TkayVideoView.t(r3)
                if (r3 != 0) goto L3f
                goto Lfd
            L3f:
                com.tkay.expressad.foundation.d.c r3 = r8.k
                int r3 = r3.k()
                r7 = 5
                if (r3 != r7) goto L6a
                com.tkay.expressad.video.module.TkayVideoView r3 = r8.a
                int r3 = r3.mCurrPlayNum
                if (r3 <= r1) goto L6a
                if (r0 > 0) goto L6a
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                android.widget.TextView r0 = com.tkay.expressad.video.module.TkayVideoView.t(r0)
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                int r1 = com.tkay.expressad.foundation.h.i.a(r1, r5, r6)
                r0.setBackgroundResource(r1)
                r8.d()
                goto Lfd
            L6a:
                if (r0 <= 0) goto L70
                r8.d()
                r4 = r5
            L70:
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                android.widget.TextView r0 = com.tkay.expressad.video.module.TkayVideoView.t(r0)
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                int r1 = com.tkay.expressad.foundation.h.i.a(r1, r4, r6)
                r0.setBackgroundResource(r1)
                goto Lfd
            L86:
                if (r0 <= 0) goto Le8
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                android.widget.TextView r0 = com.tkay.expressad.video.module.TkayVideoView.t(r0)
                com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
                android.content.Context r3 = r3.f()
                int r3 = com.tkay.expressad.foundation.h.i.a(r3, r5, r6)
                r0.setBackgroundResource(r3)
                android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
                r3 = -2
                com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
                android.content.Context r4 = r4.f()
                r5 = 1106247680(0x41f00000, float:30.0)
                int r4 = com.tkay.expressad.foundation.h.t.b(r4, r5)
                r0.<init>(r3, r4)
                com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
                android.content.Context r3 = r3.f()
                r4 = 1084227584(0x40a00000, float:5.0)
                int r3 = com.tkay.expressad.foundation.h.t.b(r3, r4)
                com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
                android.content.Context r4 = r4.f()
                java.lang.String r5 = "tkay_native_endcard_feed_btn"
                java.lang.String r6 = "id"
                int r4 = com.tkay.expressad.foundation.h.i.a(r4, r5, r6)
                r0.addRule(r1, r4)
                r0.setMargins(r3, r2, r2, r2)
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a
                android.widget.TextView r1 = com.tkay.expressad.video.module.TkayVideoView.t(r1)
                r1.setPadding(r3, r2, r3, r2)
                com.tkay.expressad.video.module.TkayVideoView r1 = r8.a
                android.widget.TextView r1 = com.tkay.expressad.video.module.TkayVideoView.t(r1)
                r1.setLayoutParams(r0)
                goto Lfd
            Le8:
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                android.widget.TextView r0 = com.tkay.expressad.video.module.TkayVideoView.t(r0)
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                int r1 = com.tkay.expressad.foundation.h.i.a(r1, r4, r6)
                r0.setBackgroundResource(r1)
            Lfd:
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                android.widget.ProgressBar r0 = com.tkay.expressad.video.module.TkayVideoView.r(r0)
                if (r0 == 0) goto L10e
                com.tkay.expressad.video.module.TkayVideoView r0 = r8.a
                android.widget.ProgressBar r0 = com.tkay.expressad.video.module.TkayVideoView.r(r0)
                r0.setMax(r9)
            L10e:
                com.tkay.expressad.foundation.d.c r9 = r8.k
                if (r9 == 0) goto L122
                int r9 = r9.f()
                r0 = 2
                if (r9 != r0) goto L122
                com.tkay.expressad.video.module.TkayVideoView r9 = r8.a
                android.widget.RelativeLayout r9 = com.tkay.expressad.video.module.TkayVideoView.s(r9)
                r9.setVisibility(r2)
            L122:
                com.tkay.expressad.video.module.TkayVideoView r9 = r8.a
                android.widget.TextView r9 = com.tkay.expressad.video.module.TkayVideoView.t(r9)
                int r9 = r9.getVisibility()
                if (r9 != 0) goto L133
                com.tkay.expressad.video.module.TkayVideoView r9 = r8.a
                com.tkay.expressad.video.module.TkayVideoView.u(r9)
            L133:
                com.tkay.expressad.video.module.TkayVideoView.a(r2)
                com.tkay.expressad.video.module.TkayVideoView r9 = r8.a
                int r9 = com.tkay.expressad.video.module.TkayVideoView.v(r9)
                if (r9 != 0) goto L143
                com.tkay.expressad.video.module.TkayVideoView r9 = r8.a
                r9.setCTALayoutVisibleOrGone()
            L143:
                com.tkay.expressad.video.module.TkayVideoView r9 = r8.a
                r9.showMoreOfferInPlayTemplate()
                com.tkay.expressad.video.module.TkayVideoView r9 = r8.a
                r9.showBaitClickView()
                return
        }

        @Override
        public final void onVideoDownloadResume() {
                r3 = this;
                com.tkay.expressad.foundation.d.c r0 = r3.k
                int r0 = r0.w()
                r1 = 94
                if (r0 == r1) goto L3a
                com.tkay.expressad.foundation.d.c r0 = r3.k
                int r0 = r0.w()
                r1 = 287(0x11f, float:4.02E-43)
                if (r0 != r1) goto L15
                goto L3a
            L15:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                com.tkay.expressad.foundation.d.c r1 = r3.k
                java.lang.String r1 = r1.aZ()
                r0.append(r1)
                com.tkay.expressad.foundation.d.c r1 = r3.k
                java.lang.String r1 = r1.S()
                r0.append(r1)
                com.tkay.expressad.foundation.d.c r1 = r3.k
                java.lang.String r1 = r1.B()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                goto L5e
            L3a:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                com.tkay.expressad.foundation.d.c r1 = r3.k
                java.lang.String r1 = r1.Z()
                r0.append(r1)
                com.tkay.expressad.foundation.d.c r1 = r3.k
                java.lang.String r1 = r1.aZ()
                r0.append(r1)
                com.tkay.expressad.foundation.d.c r1 = r3.k
                java.lang.String r1 = r1.S()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
            L5e:
                com.tkay.expressad.videocommon.b.c r1 = com.tkay.expressad.videocommon.b.c.a()
                java.lang.String r2 = r3.j
                com.tkay.expressad.videocommon.b.a r0 = r1.a(r2, r0)
                if (r0 == 0) goto L70
                r0.i()
                r0 = 1
                r3.n = r0
            L70:
                return
        }
    }

    static {
            return
    }

    public TkayVideoView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r3 = 0
            r2.mMuteSwitch = r3
            r2.O = r3
            r0 = 1
            r2.mCampaignSize = r0
            r2.mCurrPlayNum = r0
            r2.mCurrentPlayProgressTime = r3
            r2.V = r3
            r2.W = r3
            java.lang.String r1 = ""
            r2.ah = r1
            r2.ak = r3
            r2.al = r3
            r2.am = r3
            r2.an = r3
            r2.ao = r3
            r2.ap = r3
            r2.aq = r3
            r2.ar = r3
            r2.as = r3
            r2.au = r3
            r1 = 2
            r2.aw = r1
            r2.aB = r3
            r2.aC = r3
            r2.aD = r3
            r2.aE = r0
            r2.aF = r3
            r2.aG = r3
            r2.aH = r3
            r2.aI = r3
            com.tkay.expressad.video.module.TkayVideoView$b r0 = new com.tkay.expressad.video.module.TkayVideoView$b
            r0.<init>(r2)
            r2.aL = r0
            r2.aM = r3
            com.tkay.expressad.video.module.TkayVideoView$3 r3 = new com.tkay.expressad.video.module.TkayVideoView$3
            r3.<init>(r2)
            r2.aN = r3
            return
    }

    public TkayVideoView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            r2 = 0
            r1.mMuteSwitch = r2
            r1.O = r2
            r3 = 1
            r1.mCampaignSize = r3
            r1.mCurrPlayNum = r3
            r1.mCurrentPlayProgressTime = r2
            r1.V = r2
            r1.W = r2
            java.lang.String r0 = ""
            r1.ah = r0
            r1.ak = r2
            r1.al = r2
            r1.am = r2
            r1.an = r2
            r1.ao = r2
            r1.ap = r2
            r1.aq = r2
            r1.ar = r2
            r1.as = r2
            r1.au = r2
            r0 = 2
            r1.aw = r0
            r1.aB = r2
            r1.aC = r2
            r1.aD = r2
            r1.aE = r3
            r1.aF = r2
            r1.aG = r2
            r1.aH = r2
            r1.aI = r2
            com.tkay.expressad.video.module.TkayVideoView$b r3 = new com.tkay.expressad.video.module.TkayVideoView$b
            r3.<init>(r1)
            r1.aL = r3
            r1.aM = r2
            com.tkay.expressad.video.module.TkayVideoView$3 r2 = new com.tkay.expressad.video.module.TkayVideoView$3
            r2.<init>(r1)
            r1.aN = r2
            return
    }

    static com.tkay.expressad.video.dynview.f.a A(com.tkay.expressad.video.module.TkayVideoView r0) {
            com.tkay.expressad.video.dynview.f.a r0 = r0.N
            return r0
    }

    static int B(com.tkay.expressad.video.module.TkayVideoView r0) {
            int r0 = r0.O
            return r0
    }

    static boolean C(com.tkay.expressad.video.module.TkayVideoView r0) {
            boolean r0 = r0.aG
            return r0
    }

    static boolean D(com.tkay.expressad.video.module.TkayVideoView r0) {
            boolean r0 = r0.aB
            return r0
    }

    static com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar E(com.tkay.expressad.video.module.TkayVideoView r0) {
            com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar r0 = r0.M
            return r0
    }

    static android.view.animation.AlphaAnimation F(com.tkay.expressad.video.module.TkayVideoView r0) {
            android.view.animation.AlphaAnimation r0 = r0.aJ
            return r0
    }

    static android.widget.ImageView G(com.tkay.expressad.video.module.TkayVideoView r0) {
            android.widget.ImageView r0 = r0.I
            return r0
    }

    static android.widget.FrameLayout H(com.tkay.expressad.video.module.TkayVideoView r0) {
            android.widget.FrameLayout r0 = r0.P
            return r0
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
            java.lang.String r2 = r3.ah
            com.tkay.expressad.videocommon.e.d r4 = r4.a(r1, r2, r0)
            int r4 = r4.v()
            goto L3c
        L26:
            com.tkay.expressad.videocommon.e.c r4 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.e()
            java.lang.String r2 = r3.ah
            com.tkay.expressad.videocommon.e.d r4 = r4.a(r1, r2, r0)
            int r4 = r4.v()
        L3c:
            return r4
    }

    static int a(com.tkay.expressad.video.module.TkayVideoView r0, int r1) {
            r0.S = r1
            return r1
    }

    static com.tkay.expressad.video.module.a.a a(com.tkay.expressad.video.module.TkayVideoView r0) {
            com.tkay.expressad.video.module.a.a r0 = r0.U
            return r0
    }

    private static java.lang.String a(int r2, int r3) {
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

    private void a() {
            r2 = this;
            java.lang.String r0 = "tkay_reward_videoview_item"
            int r0 = r2.findLayout(r0)
            if (r0 <= 0) goto L10
            android.view.LayoutInflater r1 = r2.c
            r1.inflate(r0, r2)
            r2.b()
        L10:
            r0 = 0
            com.tkay.expressad.video.module.TkayVideoView.av = r0
            return
    }

    private void a(android.view.ViewGroup r2, com.tkay.expressad.foundation.d.c r3) {
            r1 = this;
            com.tkay.expressad.video.dynview.j.c r0 = new com.tkay.expressad.video.dynview.j.c
            r0.<init>()
            com.tkay.expressad.video.dynview.c r3 = com.tkay.expressad.video.dynview.j.c.a(r2, r3)
            com.tkay.expressad.video.dynview.b.a()
            com.tkay.expressad.video.module.TkayVideoView$1 r0 = new com.tkay.expressad.video.module.TkayVideoView$1
            r0.<init>(r1, r2, r3)
            com.tkay.expressad.video.dynview.b.a(r3, r0)
            return
    }

    private void a(java.lang.String r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.video.module.TkayVideoView$2 r1 = new com.tkay.expressad.video.module.TkayVideoView$2
            r1.<init>(r2)
            r0.a(r3, r1)
            return
    }

    static boolean a(com.tkay.expressad.video.module.TkayVideoView r0, boolean r1) {
            r0.aI = r1
            return r1
    }

    static boolean a(boolean r0) {
            com.tkay.expressad.video.module.TkayVideoView.av = r0
            return r0
    }

    static java.lang.String b(com.tkay.expressad.video.module.TkayVideoView r0, boolean r1) {
            java.lang.String r0 = r0.b(r1)
            return r0
    }

    private java.lang.String b(boolean r5) {
            r4 = this;
            boolean r0 = r4.au
            java.lang.String r1 = ""
            if (r0 != 0) goto L7
            return r1
        L7:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L38
            r0.<init>()     // Catch: java.lang.Exception -> L38
            boolean r2 = r4.aB     // Catch: java.lang.Exception -> L38
            java.lang.String r3 = "Alert_window_status"
            if (r2 != 0) goto L17
            int r2 = com.tkay.expressad.foundation.g.a.cv     // Catch: java.lang.Exception -> L38
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L38
        L17:
            boolean r2 = r4.aD     // Catch: java.lang.Exception -> L38
            if (r2 == 0) goto L20
            int r2 = com.tkay.expressad.foundation.g.a.cx     // Catch: java.lang.Exception -> L38
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L38
        L20:
            boolean r2 = r4.aC     // Catch: java.lang.Exception -> L38
            if (r2 == 0) goto L29
            int r2 = com.tkay.expressad.foundation.g.a.cw     // Catch: java.lang.Exception -> L38
            r0.put(r3, r2)     // Catch: java.lang.Exception -> L38
        L29:
            java.lang.String r2 = "complete_info"
            if (r5 == 0) goto L2f
            r5 = 1
            goto L30
        L2f:
            r5 = 2
        L30:
            r0.put(r2, r5)     // Catch: java.lang.Exception -> L38
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L38
            return r5
        L38:
            return r1
    }

    private void b() {
            r3 = this;
            boolean r0 = r3.f()
            r3.f = r0
            r3.c()
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r1 = 0
            r2 = 1120403456(0x42c80000, float:100.0)
            r0.<init>(r1, r2)
            r3.aJ = r0
            r1 = 200(0xc8, double:9.9E-322)
            r0.setDuration(r1)
            return
    }

    private void b(int r4) {
            r3 = this;
            if (r4 <= 0) goto L42
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            android.content.Context r1 = r3.getContext()
            float r4 = (float) r4
            int r4 = com.tkay.expressad.foundation.h.t.b(r1, r4)
            float r4 = (float) r4
            r0.setCornerRadius(r4)
            r4 = -1
            r0.setColor(r4)
            r4 = 0
            r1 = 1
            r0.setStroke(r1, r4)
            int r4 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r4 < r2) goto L2c
            r3.setBackground(r0)
            com.tkay.expressad.playercommon.PlayerView r4 = r3.D
            r4.setBackground(r0)
            goto L34
        L2c:
            r3.setBackgroundDrawable(r0)
            com.tkay.expressad.playercommon.PlayerView r4 = r3.D
            r4.setBackgroundDrawable(r0)
        L34:
            int r4 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r4 < r0) goto L42
            r3.setClipToOutline(r1)
            com.tkay.expressad.playercommon.PlayerView r4 = r3.D
            r4.setClipToOutline(r1)
        L42:
            return
    }

    static void b(com.tkay.expressad.video.module.TkayVideoView r0) {
            r0.b()
            return
    }

    private boolean b(int r3, int r4) {
            r2 = this;
            android.content.Context r0 = r2.a
            int r0 = com.tkay.expressad.foundation.h.t.f(r0)
            android.content.Context r1 = r2.a
            int r1 = com.tkay.expressad.foundation.h.t.e(r1)
            if (r3 <= 0) goto L16
            if (r4 <= 0) goto L16
            if (r0 < r3) goto L16
            if (r1 < r4) goto L16
            r3 = 1
            return r3
        L16:
            r3 = 0
            return r3
    }

    static com.tkay.expressad.playercommon.PlayerView c(com.tkay.expressad.video.module.TkayVideoView r0) {
            com.tkay.expressad.playercommon.PlayerView r0 = r0.D
            return r0
    }

    static boolean d(com.tkay.expressad.video.module.TkayVideoView r0) {
            boolean r0 = r0.au
            return r0
    }

    private void e() {
            r9 = this;
            boolean r0 = r9.au     // Catch: java.lang.Exception -> L14e
            r1 = 8
            java.lang.String r2 = ""
            r3 = 2
            if (r0 == 0) goto Leb
            int r0 = r9.ay     // Catch: java.lang.Exception -> L14e
            int r4 = com.tkay.expressad.foundation.g.a.cr     // Catch: java.lang.Exception -> L14e
            if (r0 == r4) goto L15
            int r0 = r9.ay     // Catch: java.lang.Exception -> L14e
            int r4 = com.tkay.expressad.foundation.g.a.cs     // Catch: java.lang.Exception -> L14e
            if (r0 != r4) goto Leb
        L15:
            boolean r0 = r9.aB     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto L2f
            int r0 = r9.ay     // Catch: java.lang.Exception -> L14e
            int r1 = com.tkay.expressad.foundation.g.a.cs     // Catch: java.lang.Exception -> L14e
            if (r0 != r1) goto L2e
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto L2e
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            boolean r1 = r9.aF     // Catch: java.lang.Exception -> L14e
            java.lang.String r1 = r9.b(r1)     // Catch: java.lang.Exception -> L14e
            r0.a(r3, r1)     // Catch: java.lang.Exception -> L14e
        L2e:
            return
        L2f:
            int r0 = r9.ay     // Catch: java.lang.Exception -> L14e
            int r4 = com.tkay.expressad.foundation.g.a.cs     // Catch: java.lang.Exception -> L14e
            if (r0 != r4) goto L49
            boolean r0 = r9.aH     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto L49
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto L48
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            boolean r1 = r9.aF     // Catch: java.lang.Exception -> L14e
            java.lang.String r1 = r9.b(r1)     // Catch: java.lang.Exception -> L14e
            r0.a(r3, r1)     // Catch: java.lang.Exception -> L14e
        L48:
            return
        L49:
            boolean r0 = r9.aE     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto Lea
            com.tkay.expressad.playercommon.PlayerView r0 = r9.D     // Catch: java.lang.Exception -> L14e
            int r0 = r0.getCurPosition()     // Catch: java.lang.Exception -> L14e
            int r0 = r0 / 1000
            com.tkay.expressad.playercommon.PlayerView r4 = r9.D     // Catch: java.lang.Exception -> L14e
            int r4 = r4.getDuration()     // Catch: java.lang.Exception -> L14e
            if (r4 != 0) goto L64
            com.tkay.expressad.foundation.d.c r4 = r9.b     // Catch: java.lang.Exception -> L14e
            int r4 = r4.bi()     // Catch: java.lang.Exception -> L14e
            goto L6a
        L64:
            com.tkay.expressad.playercommon.PlayerView r4 = r9.D     // Catch: java.lang.Exception -> L14e
            int r4 = r4.getDuration()     // Catch: java.lang.Exception -> L14e
        L6a:
            float r5 = (float) r0     // Catch: java.lang.Exception -> L14e
            float r4 = (float) r4     // Catch: java.lang.Exception -> L14e
            float r5 = r5 / r4
            r4 = 1120403456(0x42c80000, float:100.0)
            float r5 = r5 * r4
            int r4 = (int) r5     // Catch: java.lang.Exception -> L14e
            int r5 = r9.ay     // Catch: java.lang.Exception -> L14e
            int r6 = com.tkay.expressad.foundation.g.a.cr     // Catch: java.lang.Exception -> L14e
            if (r5 != r6) goto Lb7
            r9.h()     // Catch: java.lang.Exception -> L14e
            int r5 = r9.az     // Catch: java.lang.Exception -> L14e
            int r6 = com.tkay.expressad.foundation.g.a.ct     // Catch: java.lang.Exception -> L14e
            if (r5 != r6) goto L94
            int r5 = r9.aA     // Catch: java.lang.Exception -> L14e
            if (r4 < r5) goto L94
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto L93
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            boolean r1 = r9.aF     // Catch: java.lang.Exception -> L14e
            java.lang.String r1 = r9.b(r1)     // Catch: java.lang.Exception -> L14e
            r0.a(r3, r1)     // Catch: java.lang.Exception -> L14e
        L93:
            return
        L94:
            int r5 = r9.az     // Catch: java.lang.Exception -> L14e
            int r6 = com.tkay.expressad.foundation.g.a.cu     // Catch: java.lang.Exception -> L14e
            if (r5 != r6) goto Lae
            int r5 = r9.aA     // Catch: java.lang.Exception -> L14e
            if (r0 < r5) goto Lae
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto Lad
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            boolean r1 = r9.aF     // Catch: java.lang.Exception -> L14e
            java.lang.String r1 = r9.b(r1)     // Catch: java.lang.Exception -> L14e
            r0.a(r3, r1)     // Catch: java.lang.Exception -> L14e
        Lad:
            return
        Lae:
            com.tkay.expressad.video.module.a.a r3 = r9.e     // Catch: java.lang.Exception -> L14e
            if (r3 == 0) goto Lb7
            com.tkay.expressad.video.module.a.a r3 = r9.e     // Catch: java.lang.Exception -> L14e
            r3.a(r1, r2)     // Catch: java.lang.Exception -> L14e
        Lb7:
            int r3 = r9.ay     // Catch: java.lang.Exception -> L14e
            int r5 = com.tkay.expressad.foundation.g.a.cs     // Catch: java.lang.Exception -> L14e
            if (r3 != r5) goto Lea
            int r3 = r9.az     // Catch: java.lang.Exception -> L14e
            int r5 = com.tkay.expressad.foundation.g.a.ct     // Catch: java.lang.Exception -> L14e
            if (r3 != r5) goto Ld4
            int r3 = r9.aA     // Catch: java.lang.Exception -> L14e
            if (r4 < r3) goto Ld4
            r9.h()     // Catch: java.lang.Exception -> L14e
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto Ld3
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L14e
        Ld3:
            return
        Ld4:
            int r3 = r9.az     // Catch: java.lang.Exception -> L14e
            int r4 = com.tkay.expressad.foundation.g.a.cu     // Catch: java.lang.Exception -> L14e
            if (r3 != r4) goto Lea
            int r3 = r9.aA     // Catch: java.lang.Exception -> L14e
            if (r0 < r3) goto Lea
            r9.h()     // Catch: java.lang.Exception -> L14e
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto Lea
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L14e
        Lea:
            return
        Leb:
            com.tkay.expressad.foundation.d.c r0 = r9.b     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto L144
            com.tkay.expressad.foundation.d.c r0 = r9.b     // Catch: java.lang.Exception -> L14e
            int r0 = r0.f()     // Catch: java.lang.Exception -> L14e
            if (r0 == r3) goto L144
            com.tkay.expressad.foundation.d.c r0 = r9.b     // Catch: java.lang.Exception -> L14e
            int r0 = r0.i()     // Catch: java.lang.Exception -> L14e
            com.tkay.expressad.playercommon.PlayerView r4 = r9.D     // Catch: java.lang.Exception -> L14e
            int r4 = r4.getCurPosition()     // Catch: java.lang.Exception -> L14e
            int r4 = r4 / 1000
            com.tkay.expressad.foundation.d.c r5 = r9.b     // Catch: java.lang.Exception -> L14e
            int r5 = r5.k()     // Catch: java.lang.Exception -> L14e
            r6 = 5
            r7 = 0
            r8 = 1
            if (r5 != r6) goto L11c
            int r5 = r9.mCurrPlayNum     // Catch: java.lang.Exception -> L14e
            if (r5 <= r8) goto L11c
            if (r0 == 0) goto L123
            if (r0 <= 0) goto L123
            if (r4 >= r0) goto L123
        L11a:
            r7 = r8
            goto L123
        L11c:
            if (r0 <= 0) goto L120
            if (r4 < r0) goto L11a
        L120:
            if (r0 != 0) goto L123
            goto L11a
        L123:
            if (r7 == 0) goto L13a
            int r0 = r9.ad     // Catch: java.lang.Exception -> L14e
            if (r0 != r8) goto L13a
            boolean r0 = r9.as     // Catch: java.lang.Exception -> L14e
            if (r0 != 0) goto L13a
            r9.h()     // Catch: java.lang.Exception -> L14e
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto L143
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            r0.a(r1, r2)     // Catch: java.lang.Exception -> L14e
            return
        L13a:
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto L143
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            r0.a(r3, r2)     // Catch: java.lang.Exception -> L14e
        L143:
            return
        L144:
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            if (r0 == 0) goto L14d
            com.tkay.expressad.video.module.a.a r0 = r9.e     // Catch: java.lang.Exception -> L14e
            r0.a(r3, r2)     // Catch: java.lang.Exception -> L14e
        L14d:
            return
        L14e:
            r0 = move-exception
            r0.getMessage()
            return
    }

    static boolean e(com.tkay.expressad.video.module.TkayVideoView r1) {
            r0 = 1
            r1.aH = r0
            return r0
    }

    private boolean f() {
            r5 = this;
            r0 = 0
            boolean r1 = r5.aI     // Catch: java.lang.Throwable -> L108
            java.lang.String r2 = "tkay_vfpv"
            int r1 = r5.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L108
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> L108
            com.tkay.expressad.playercommon.PlayerView r1 = (com.tkay.expressad.playercommon.PlayerView) r1     // Catch: java.lang.Throwable -> L108
            r5.D = r1     // Catch: java.lang.Throwable -> L108
            boolean r1 = r5.aI     // Catch: java.lang.Throwable -> L108
            java.lang.String r2 = "tkay_sound_switch"
            int r1 = r5.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L108
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> L108
            com.tkay.expressad.video.widget.SoundImageView r1 = (com.tkay.expressad.video.widget.SoundImageView) r1     // Catch: java.lang.Throwable -> L108
            r5.E = r1     // Catch: java.lang.Throwable -> L108
            boolean r1 = r5.aI     // Catch: java.lang.Throwable -> L108
            java.lang.String r2 = "tkay_tv_count"
            int r1 = r5.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L108
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> L108
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> L108
            r5.F = r1     // Catch: java.lang.Throwable -> L108
            boolean r1 = r5.aI     // Catch: java.lang.Throwable -> L108
            java.lang.String r2 = "tkay_rl_playing_close"
            int r1 = r5.filterFindViewId(r1, r2)     // Catch: java.lang.Throwable -> L108
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> L108
            r5.G = r1     // Catch: java.lang.Throwable -> L108
            r2 = 4
            r1.setVisibility(r2)     // Catch: java.lang.Throwable -> L108
            boolean r1 = r5.aI     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "tkay_top_control"
            int r1 = r5.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> L108
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> L108
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> L108
            r5.H = r1     // Catch: java.lang.Throwable -> L108
            boolean r1 = r5.aI     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "tkay_videoview_bg"
            int r1 = r5.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> L108
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> L108
            android.widget.ImageView r1 = (android.widget.ImageView) r1     // Catch: java.lang.Throwable -> L108
            r5.I = r1     // Catch: java.lang.Throwable -> L108
            boolean r1 = r5.aI     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "tkay_video_progress_bar"
            int r1 = r5.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> L108
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> L108
            android.widget.ProgressBar r1 = (android.widget.ProgressBar) r1     // Catch: java.lang.Throwable -> L108
            r5.J = r1     // Catch: java.lang.Throwable -> L108
            boolean r1 = r5.aI     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "tkay_native_endcard_feed_btn"
            int r1 = r5.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> L108
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> L108
            com.tkay.expressad.widget.FeedBackButton r1 = (com.tkay.expressad.widget.FeedBackButton) r1     // Catch: java.lang.Throwable -> L108
            r5.K = r1     // Catch: java.lang.Throwable -> L108
            boolean r1 = r5.aI     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "tkay_reward_segment_progressbar"
            int r1 = r5.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> L108
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> L108
            com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar r1 = (com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar) r1     // Catch: java.lang.Throwable -> L108
            r5.M = r1     // Catch: java.lang.Throwable -> L108
            boolean r1 = r5.aI     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "tkay_reward_cta_layout"
            int r1 = r5.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> L108
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> L108
            android.widget.FrameLayout r1 = (android.widget.FrameLayout) r1     // Catch: java.lang.Throwable -> L108
            r5.P = r1     // Catch: java.lang.Throwable -> L108
            boolean r1 = r5.aI     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "tkay_animation_click_view"
            int r1 = r5.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> L108
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> L108
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1 = (com.tkay.expressad.video.dynview.widget.TkayBaitClickView) r1     // Catch: java.lang.Throwable -> L108
            r5.aK = r1     // Catch: java.lang.Throwable -> L108
            boolean r1 = r5.aI     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = "tkay_reward_moreoffer_layout"
            int r1 = r5.filterFindViewId(r1, r3)     // Catch: java.lang.Throwable -> L108
            android.view.View r1 = r5.findViewById(r1)     // Catch: java.lang.Throwable -> L108
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Throwable -> L108
            r5.T = r1     // Catch: java.lang.Throwable -> L108
            com.tkay.expressad.foundation.d.c r1 = r5.b     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> L108
            java.lang.String r1 = r1.aE()     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> L108
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> L108
            if (r3 == 0) goto Ld1
            java.lang.String r1 = "https://mores.toponad.com/image/default/mintegral_logo.png"
        Ld1:
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> L108
            if (r3 != 0) goto Lee
            android.content.Context r3 = r5.a     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> L108
            com.tkay.expressad.foundation.g.d.b r3 = com.tkay.expressad.foundation.g.d.b.a(r3)     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> L108
            com.tkay.expressad.video.module.TkayVideoView$10 r4 = new com.tkay.expressad.video.module.TkayVideoView$10     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> L108
            r4.<init>(r5)     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> L108
            r3.a(r1, r4)     // Catch: java.lang.Exception -> Le6 java.lang.Throwable -> L108
            goto Lee
        Le6:
            r1 = move-exception
            boolean r3 = com.tkay.expressad.b.a     // Catch: java.lang.Throwable -> L108
            if (r3 == 0) goto Lee
            r1.getLocalizedMessage()     // Catch: java.lang.Throwable -> L108
        Lee:
            android.view.View[] r1 = new android.view.View[r2]     // Catch: java.lang.Throwable -> L108
            com.tkay.expressad.playercommon.PlayerView r2 = r5.D     // Catch: java.lang.Throwable -> L108
            r1[r0] = r2     // Catch: java.lang.Throwable -> L108
            r2 = 1
            com.tkay.expressad.video.widget.SoundImageView r3 = r5.E     // Catch: java.lang.Throwable -> L108
            r1[r2] = r3     // Catch: java.lang.Throwable -> L108
            r2 = 2
            android.widget.TextView r3 = r5.F     // Catch: java.lang.Throwable -> L108
            r1[r2] = r3     // Catch: java.lang.Throwable -> L108
            r2 = 3
            android.view.View r3 = r5.G     // Catch: java.lang.Throwable -> L108
            r1[r2] = r3     // Catch: java.lang.Throwable -> L108
            boolean r0 = r5.isNotNULL(r1)     // Catch: java.lang.Throwable -> L108
            return r0
        L108:
            r1 = move-exception
            r1.getMessage()
            return r0
    }

    static boolean f(com.tkay.expressad.video.module.TkayVideoView r0) {
            boolean r0 = r0.aE
            return r0
    }

    private void g() {
            r7 = this;
            com.tkay.expressad.foundation.d.c r0 = r7.b
            if (r0 == 0) goto L75
            com.tkay.expressad.foundation.d.c r0 = r7.b
            java.lang.String r0 = r0.U()
            boolean r0 = com.tkay.expressad.foundation.h.w.b(r0)
            if (r0 == 0) goto L75
            com.tkay.expressad.foundation.d.c r0 = r7.b
            java.lang.String r0 = r0.U()
            java.lang.String r1 = "x"
            java.lang.String[] r0 = r0.split(r1)
            int r1 = r0.length
            r2 = 2
            r3 = 0
            if (r1 != r2) goto L5e
            r1 = 0
            r2 = r0[r1]
            double r5 = com.tkay.expressad.foundation.h.t.b(r2)
            int r2 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r2 <= 0) goto L35
            r1 = r0[r1]
            double r1 = com.tkay.expressad.foundation.h.t.b(r1)
            r7.ai = r1
        L35:
            r1 = 1
            r2 = r0[r1]
            double r5 = com.tkay.expressad.foundation.h.t.b(r2)
            int r2 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r2 <= 0) goto L48
            r0 = r0[r1]
            double r0 = com.tkay.expressad.foundation.h.t.b(r0)
            r7.aj = r0
        L48:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "TkayBaseView mVideoW:"
            r0.<init>(r1)
            double r1 = r7.ai
            r0.append(r1)
            java.lang.String r1 = "  mVideoH:"
            r0.append(r1)
            double r1 = r7.aj
            r0.append(r1)
        L5e:
            double r0 = r7.ai
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 > 0) goto L68
            r0 = 4653344314980564992(0x4094000000000000, double:1280.0)
            r7.ai = r0
        L68:
            double r0 = r7.aj
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 > 0) goto L75
            r0 = 4649544402794971136(0x4086800000000000, double:720.0)
            r7.aj = r0
        L75:
            return
    }

    static void g(com.tkay.expressad.video.module.TkayVideoView r0) {
            r0.e()
            return
    }

    private void h() {
            r5 = this;
            com.tkay.expressad.playercommon.PlayerView r0 = r5.D     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L4d
            com.tkay.expressad.playercommon.PlayerView r0 = r5.D     // Catch: java.lang.Throwable -> L4e
            boolean r1 = r5.W     // Catch: java.lang.Throwable -> L4e
            r2 = 0
            if (r1 != 0) goto L12
            boolean r1 = r5.V     // Catch: java.lang.Throwable -> L4e
            if (r1 == 0) goto L10
            goto L12
        L10:
            r1 = r2
            goto L13
        L12:
            r1 = 1
        L13:
            r0.setIsCovered(r1)     // Catch: java.lang.Throwable -> L4e
            com.tkay.expressad.playercommon.PlayerView r0 = r5.D     // Catch: java.lang.Throwable -> L4e
            r0.onPause()     // Catch: java.lang.Throwable -> L4e
            com.tkay.expressad.foundation.d.c r0 = r5.b     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L4d
            com.tkay.expressad.foundation.d.c r0 = r5.b     // Catch: java.lang.Throwable -> L4e
            com.tkay.expressad.foundation.d.n r0 = r0.L()     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L4d
            com.tkay.expressad.foundation.d.c r0 = r5.b     // Catch: java.lang.Throwable -> L4e
            boolean r0 = r0.aw()     // Catch: java.lang.Throwable -> L4e
            if (r0 != 0) goto L4d
            com.tkay.expressad.foundation.d.c r0 = r5.b     // Catch: java.lang.Throwable -> L4e
            r0.ax()     // Catch: java.lang.Throwable -> L4e
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L4e
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L4e
            com.tkay.expressad.foundation.d.c r1 = r5.b     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = r5.ah     // Catch: java.lang.Throwable -> L4e
            com.tkay.expressad.foundation.d.c r4 = r5.b     // Catch: java.lang.Throwable -> L4e
            com.tkay.expressad.foundation.d.n r4 = r4.L()     // Catch: java.lang.Throwable -> L4e
            java.lang.String[] r4 = r4.m()     // Catch: java.lang.Throwable -> L4e
            com.tkay.expressad.a.a.a(r0, r1, r3, r4, r2)     // Catch: java.lang.Throwable -> L4e
        L4d:
            return
        L4e:
            r0 = move-exception
            r0.getMessage()
            return
    }

    static boolean h(com.tkay.expressad.video.module.TkayVideoView r1) {
            r0 = 0
            r1.V = r0
            return r0
    }

    private void i() {
            r3 = this;
            boolean r0 = r3.al     // Catch: java.lang.Exception -> L3c
            if (r0 != 0) goto L28
            com.tkay.expressad.playercommon.PlayerView r0 = r3.D     // Catch: java.lang.Exception -> L3c
            boolean r0 = r0.playVideo()     // Catch: java.lang.Exception -> L3c
            com.tkay.expressad.foundation.d.c r1 = r3.b     // Catch: java.lang.Exception -> L3c
            if (r1 == 0) goto L24
            com.tkay.expressad.foundation.d.c r1 = r3.b     // Catch: java.lang.Exception -> L3c
            int r1 = r1.J()     // Catch: java.lang.Exception -> L3c
            r2 = 2
            if (r1 == r2) goto L24
            if (r0 != 0) goto L24
            com.tkay.expressad.video.module.TkayVideoView$b r0 = r3.aL     // Catch: java.lang.Exception -> L3c
            if (r0 == 0) goto L24
            com.tkay.expressad.video.module.TkayVideoView$b r0 = r3.aL     // Catch: java.lang.Exception -> L3c
            java.lang.String r1 = "play video failed"
            r0.onPlayError(r1)     // Catch: java.lang.Exception -> L3c
        L24:
            r0 = 1
            r3.al = r0     // Catch: java.lang.Exception -> L3c
            return
        L28:
            boolean r0 = r3.W     // Catch: java.lang.Exception -> L3c
            if (r0 != 0) goto L3b
            boolean r0 = r3.V     // Catch: java.lang.Exception -> L3c
            if (r0 != 0) goto L3b
            com.tkay.expressad.playercommon.PlayerView r0 = r3.D     // Catch: java.lang.Exception -> L3c
            r1 = 0
            r0.setIsCovered(r1)     // Catch: java.lang.Exception -> L3c
            com.tkay.expressad.playercommon.PlayerView r0 = r3.D     // Catch: java.lang.Exception -> L3c
            r0.onResume()     // Catch: java.lang.Exception -> L3c
        L3b:
            return
        L3c:
            r0 = move-exception
            r0.getMessage()
            return
    }

    static boolean i(com.tkay.expressad.video.module.TkayVideoView r0) {
            boolean r0 = r0.V
            return r0
    }

    static int j(com.tkay.expressad.video.module.TkayVideoView r0) {
            int r0 = r0.ay
            return r0
    }

    private void j() {
            r2 = this;
            boolean r0 = r2.f
            if (r0 == 0) goto L1d
            android.view.View r0 = r2.G
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L1d
            boolean r0 = r2.i
            if (r0 == 0) goto L14
            boolean r0 = r2.L
            if (r0 == 0) goto L1a
        L14:
            android.view.View r0 = r2.G
            r1 = 0
            r0.setVisibility(r1)
        L1a:
            r0 = 1
            r2.ao = r0
        L1d:
            return
    }

    private void k() {
            r4 = this;
            boolean r0 = r4.aM
            if (r0 != 0) goto L2b
            boolean r0 = r4.ar
            if (r0 != 0) goto L2b
            boolean r0 = r4.ap
            if (r0 == 0) goto Ld
            goto L2b
        Ld:
            r0 = 1
            r4.aM = r0
            int r1 = r4.ab
            if (r1 < 0) goto L2b
            if (r1 != 0) goto L19
            r4.ar = r0
            return
        L19:
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            com.tkay.expressad.video.module.TkayVideoView$11 r1 = new com.tkay.expressad.video.module.TkayVideoView$11
            r1.<init>(r4)
            int r2 = r4.ab
            int r2 = r2 * 1000
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
        L2b:
            return
    }

    static boolean k(com.tkay.expressad.video.module.TkayVideoView r1) {
            r0 = 1
            r1.aC = r0
            return r0
    }

    private void l() {
            r13 = this;
            android.content.Context r0 = r13.a
            int r0 = com.tkay.expressad.foundation.h.t.f(r0)
            float r0 = (float) r0
            android.content.Context r1 = r13.a
            int r1 = com.tkay.expressad.foundation.h.t.e(r1)
            float r1 = (float) r1
            com.tkay.expressad.foundation.d.c r2 = r13.b
            com.tkay.expressad.foundation.d.c$c r2 = r2.M()
            r3 = 1
            r4 = 2
            if (r2 == 0) goto L30
            int r5 = r2.c()
            if (r5 != r3) goto L22
            int r5 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r5 > 0) goto L2c
        L22:
            int r2 = r2.c()
            if (r2 != r4) goto L30
            int r2 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r2 <= 0) goto L30
        L2c:
            float r0 = r0 + r1
            float r1 = r0 - r1
            float r0 = r0 - r1
        L30:
            android.content.Context r2 = r13.getContext()
            r5 = 1114112000(0x42680000, float:58.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r5)
            android.content.Context r5 = r13.getContext()
            r6 = 1120927744(0x42d00000, float:104.0)
            int r5 = com.tkay.expressad.foundation.h.t.b(r5, r6)
            com.tkay.expressad.foundation.d.c r6 = r13.b
            if (r6 == 0) goto L80
            com.tkay.expressad.foundation.d.c r6 = r13.b
            int r6 = r6.f()
            if (r6 != r4) goto L80
            com.tkay.expressad.foundation.d.c r6 = r13.b
            com.tkay.expressad.foundation.d.c$c r6 = r6.M()
            int r6 = r6.c()
            if (r6 != r3) goto L64
            int r7 = r2 * 2
            float r7 = (float) r7
            float r0 = r0 - r7
            int r7 = r5 * 2
            float r7 = (float) r7
            float r1 = r1 - r7
        L64:
            if (r6 != r4) goto L6e
            int r7 = r5 * 2
            float r7 = (float) r7
            float r0 = r0 - r7
            int r7 = r2 * 2
            float r7 = (float) r7
            float r1 = r1 - r7
        L6e:
            if (r6 != 0) goto L80
            int r6 = r13.d
            if (r6 != r3) goto L7a
            int r2 = r2 * r4
            float r2 = (float) r2
            float r0 = r0 - r2
            int r5 = r5 * r4
            float r2 = (float) r5
            goto L7f
        L7a:
            int r5 = r5 * r4
            float r5 = (float) r5
            float r0 = r0 - r5
            int r2 = r2 * r4
            float r2 = (float) r2
        L7f:
            float r1 = r1 - r2
        L80:
            double r4 = r13.ai
            r6 = 0
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 <= 0) goto L19e
            double r8 = r13.aj
            int r2 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            if (r2 <= 0) goto L19e
            r2 = 0
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 <= 0) goto L19e
            int r2 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r2 > 0) goto L99
            goto L19e
        L99:
            double r4 = r4 / r8
            float r2 = r0 / r1
            double r6 = (double) r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r8 = "videoWHDivide:"
            r2.<init>(r8)
            r2.append(r4)
            java.lang.String r8 = "  screenWHDivide:"
            r2.append(r8)
            r2.append(r6)
            java.lang.Double r2 = java.lang.Double.valueOf(r4)
            double r8 = com.tkay.expressad.foundation.h.t.a(r2)
            java.lang.Double r2 = java.lang.Double.valueOf(r6)
            double r6 = com.tkay.expressad.foundation.h.t.a(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r10 = "videoWHDivideFinal:"
            r2.<init>(r10)
            r2.append(r8)
            java.lang.String r10 = "  screenWHDivideFinal:"
            r2.append(r10)
            r2.append(r6)
            com.tkay.expressad.playercommon.PlayerView r2 = r13.D
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r2 = (android.widget.FrameLayout.LayoutParams) r2
            int r10 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            r11 = 17
            r12 = -1
            if (r10 <= 0) goto Lef
            double r6 = (double) r0
            double r8 = r13.aj
            double r6 = r6 * r8
            double r8 = r13.ai
            double r6 = r6 / r8
            r2.width = r12
            int r6 = (int) r6
            r2.height = r6
            r2.gravity = r11
            goto L101
        Lef:
            int r6 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            if (r6 >= 0) goto Lfd
            double r6 = (double) r1
            double r6 = r6 * r4
            int r6 = (int) r6
            r2.width = r6
            r2.height = r12
            r2.gravity = r11
            goto L101
        Lfd:
            r2.width = r12
            r2.height = r12
        L101:
            com.tkay.expressad.foundation.d.c r6 = r13.b     // Catch: java.lang.Throwable -> L191
            if (r6 == 0) goto L195
            com.tkay.expressad.foundation.d.c r6 = r13.b     // Catch: java.lang.Throwable -> L191
            boolean r6 = r6.j()     // Catch: java.lang.Throwable -> L191
            if (r6 == 0) goto L195
            com.tkay.expressad.foundation.d.c r6 = r13.b     // Catch: java.lang.Throwable -> L191
            com.tkay.expressad.foundation.d.c$c r6 = r6.M()     // Catch: java.lang.Throwable -> L191
            int r6 = r6.b()     // Catch: java.lang.Throwable -> L191
            com.tkay.expressad.foundation.d.c r7 = r13.b     // Catch: java.lang.Throwable -> L191
            com.tkay.expressad.foundation.d.c$c r7 = r7.M()     // Catch: java.lang.Throwable -> L191
            int r7 = r7.c()     // Catch: java.lang.Throwable -> L191
            r8 = 102(0x66, float:1.43E-43)
            r9 = 202(0xca, float:2.83E-43)
            if (r6 == r8) goto L129
            if (r6 != r9) goto L143
        L129:
            if (r7 != r3) goto L13a
            r2.width = r12     // Catch: java.lang.Throwable -> L191
            r2.gravity = r11     // Catch: java.lang.Throwable -> L191
            double r3 = r13.aj     // Catch: java.lang.Throwable -> L191
            double r7 = r13.ai     // Catch: java.lang.Throwable -> L191
            double r10 = (double) r0     // Catch: java.lang.Throwable -> L191
            double r7 = r7 / r10
            double r3 = r3 / r7
            int r1 = (int) r3     // Catch: java.lang.Throwable -> L191
            r2.height = r1     // Catch: java.lang.Throwable -> L191
            goto L143
        L13a:
            r2.height = r12     // Catch: java.lang.Throwable -> L191
            r2.gravity = r11     // Catch: java.lang.Throwable -> L191
            double r7 = (double) r1     // Catch: java.lang.Throwable -> L191
            double r7 = r7 * r4
            int r1 = (int) r7     // Catch: java.lang.Throwable -> L191
            r2.width = r1     // Catch: java.lang.Throwable -> L191
        L143:
            if (r6 != r9) goto L15a
            com.tkay.expressad.foundation.d.c r1 = r13.b     // Catch: java.lang.Throwable -> L191
            java.lang.String r1 = r1.be()     // Catch: java.lang.Throwable -> L191
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L191
            if (r1 != 0) goto L15a
            com.tkay.expressad.foundation.d.c r1 = r13.b     // Catch: java.lang.Throwable -> L191
            java.lang.String r1 = r1.be()     // Catch: java.lang.Throwable -> L191
            r13.a(r1)     // Catch: java.lang.Throwable -> L191
        L15a:
            r1 = 302(0x12e, float:4.23E-43)
            if (r6 == r1) goto L162
            r1 = 802(0x322, float:1.124E-42)
            if (r6 != r1) goto L195
        L162:
            double r3 = r13.ai     // Catch: java.lang.Throwable -> L191
            double r5 = r13.aj     // Catch: java.lang.Throwable -> L191
            double r3 = r3 / r5
            r5 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r1 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r1 <= 0) goto L17a
            r2.width = r12     // Catch: java.lang.Throwable -> L191
            double r3 = r13.aj     // Catch: java.lang.Throwable -> L191
            double r0 = (double) r0     // Catch: java.lang.Throwable -> L191
            double r3 = r3 * r0
            double r0 = r13.ai     // Catch: java.lang.Throwable -> L191
            double r3 = r3 / r0
            int r0 = (int) r3     // Catch: java.lang.Throwable -> L191
            r2.height = r0     // Catch: java.lang.Throwable -> L191
            goto L195
        L17a:
            android.content.Context r0 = r13.getContext()     // Catch: java.lang.Throwable -> L191
            r1 = 1130102784(0x435c0000, float:220.0)
            int r0 = com.tkay.expressad.foundation.h.t.b(r0, r1)     // Catch: java.lang.Throwable -> L191
            double r3 = r13.ai     // Catch: java.lang.Throwable -> L191
            double r5 = (double) r0     // Catch: java.lang.Throwable -> L191
            double r3 = r3 * r5
            double r5 = r13.aj     // Catch: java.lang.Throwable -> L191
            double r3 = r3 / r5
            int r1 = (int) r3     // Catch: java.lang.Throwable -> L191
            r2.width = r1     // Catch: java.lang.Throwable -> L191
            r2.height = r0     // Catch: java.lang.Throwable -> L191
            goto L195
        L191:
            r0 = move-exception
            r0.getMessage()
        L195:
            com.tkay.expressad.playercommon.PlayerView r0 = r13.D
            r0.setLayoutParams(r2)
            r13.setMatchParent()
            return
        L19e:
            r13.m()
            return
    }

    static boolean l(com.tkay.expressad.video.module.TkayVideoView r1) {
            r0 = 1
            r1.aG = r0
            return r0
    }

    private void m() {
            r3 = this;
            r0 = 0
            r1 = -1
            r3.setLayoutParam(r0, r0, r1, r1)     // Catch: java.lang.Throwable -> L2a
            boolean r0 = r3.isLandscape()     // Catch: java.lang.Throwable -> L2a
            if (r0 != 0) goto L29
            boolean r0 = r3.f     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L29
            com.tkay.expressad.playercommon.PlayerView r0 = r3.D     // Catch: java.lang.Throwable -> L2a
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Throwable -> L2a
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0     // Catch: java.lang.Throwable -> L2a
            android.content.Context r2 = r3.a     // Catch: java.lang.Throwable -> L2a
            int r2 = com.tkay.expressad.foundation.h.t.f(r2)     // Catch: java.lang.Throwable -> L2a
            r0.width = r1     // Catch: java.lang.Throwable -> L2a
            int r2 = r2 * 9
            int r2 = r2 / 16
            r0.height = r2     // Catch: java.lang.Throwable -> L2a
            r1 = 17
            r0.gravity = r1     // Catch: java.lang.Throwable -> L2a
        L29:
            return
        L2a:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    static void m(com.tkay.expressad.video.module.TkayVideoView r0) {
            r0.i()
            return
    }

    private void n() {
            r4 = this;
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            boolean r0 = r0.b()
            if (r0 == 0) goto L48
            com.tkay.expressad.foundation.d.c r0 = r4.b
            java.lang.String r1 = r4.ah
            r0.l(r1)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.ah
            r1.append(r2)
            java.lang.String r2 = "_1"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.foundation.d.c r3 = r4.b
            r0.a(r1, r3)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r4.ah
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.tkay.expressad.widget.FeedBackButton r2 = r4.K
            r0.a(r1, r2)
            return
        L48:
            com.tkay.expressad.widget.FeedBackButton r0 = r4.K
            if (r0 == 0) goto L51
            r1 = 8
            r0.setVisibility(r1)
        L51:
            return
    }

    static boolean n(com.tkay.expressad.video.module.TkayVideoView r1) {
            r0 = 1
            r1.aD = r0
            return r0
    }

    private int o() {
            r4 = this;
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.e()
            java.lang.String r2 = r4.ah
            r3 = 0
            com.tkay.expressad.videocommon.e.d r0 = r0.a(r1, r2, r3)
            int r0 = r0.x()
            return r0
    }

    static boolean o(com.tkay.expressad.video.module.TkayVideoView r0) {
            boolean r0 = r0.aF
            return r0
    }

    private void p() {
            r3 = this;
            android.widget.FrameLayout r0 = r3.P
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.video.module.TkayClickCTAView r0 = r3.Q
            if (r0 != 0) goto L35
            com.tkay.expressad.video.module.TkayClickCTAView r0 = new com.tkay.expressad.video.module.TkayClickCTAView
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            r3.Q = r0
            com.tkay.expressad.foundation.d.c r1 = r3.b
            r0.setCampaign(r1)
            com.tkay.expressad.video.module.TkayClickCTAView r0 = r3.Q
            java.lang.String r1 = r3.ah
            r0.setUnitId(r1)
            com.tkay.expressad.video.module.a.a r0 = r3.U
            if (r0 == 0) goto L2e
            com.tkay.expressad.video.module.TkayClickCTAView r1 = r3.Q
            com.tkay.expressad.video.module.a.a.i r2 = new com.tkay.expressad.video.module.a.a.i
            r2.<init>(r0)
            r1.setNotifyListener(r2)
        L2e:
            com.tkay.expressad.video.module.TkayClickCTAView r0 = r3.Q
            com.tkay.expressad.video.signal.factory.b r1 = r3.R
            r0.preLoadData(r1)
        L35:
            android.widget.FrameLayout r0 = r3.P
            com.tkay.expressad.video.module.TkayClickCTAView r1 = r3.Q
            r0.addView(r1)
            return
    }

    static boolean p(com.tkay.expressad.video.module.TkayVideoView r1) {
            r0 = 1
            r1.ar = r0
            return r0
    }

    static boolean q(com.tkay.expressad.video.module.TkayVideoView r1) {
            r0 = 1
            r1.L = r0
            return r0
    }

    static android.widget.ProgressBar r(com.tkay.expressad.video.module.TkayVideoView r0) {
            android.widget.ProgressBar r0 = r0.J
            return r0
    }

    static android.widget.RelativeLayout s(com.tkay.expressad.video.module.TkayVideoView r0) {
            android.widget.RelativeLayout r0 = r0.H
            return r0
    }

    static android.widget.TextView t(com.tkay.expressad.video.module.TkayVideoView r0) {
            android.widget.TextView r0 = r0.F
            return r0
    }

    static void u(com.tkay.expressad.video.module.TkayVideoView r0) {
            r0.n()
            return
    }

    static int v(com.tkay.expressad.video.module.TkayVideoView r0) {
            int r0 = r0.S
            return r0
    }

    static boolean w(com.tkay.expressad.video.module.TkayVideoView r1) {
            r0 = 1
            r1.aF = r0
            return r0
    }

    static android.view.View x(com.tkay.expressad.video.module.TkayVideoView r0) {
            android.view.View r0 = r0.G
            return r0
    }

    static com.tkay.expressad.widget.FeedBackButton y(com.tkay.expressad.video.module.TkayVideoView r0) {
            com.tkay.expressad.widget.FeedBackButton r0 = r0.K
            return r0
    }

    static com.tkay.expressad.video.widget.SoundImageView z(com.tkay.expressad.video.module.TkayVideoView r0) {
            com.tkay.expressad.video.widget.SoundImageView r0 = r0.E
            return r0
    }

    @Override
    public void alertWebViewShowed() {
            r1 = this;
            r0 = 1
            r1.V = r0
            r1.setShowingAlertViewCover(r0)
            return
    }

    @Override
    protected final void c() {
            r2 = this;
            super.c()
            boolean r0 = r2.f
            if (r0 == 0) goto L49
            boolean r0 = r2.i
            if (r0 == 0) goto L29
            com.tkay.expressad.foundation.d.c r0 = r2.b
            int r0 = com.tkay.expressad.video.dynview.i.c.a(r0)
            r1 = -1
            if (r0 == r1) goto L1e
            com.tkay.expressad.foundation.d.c r0 = r2.b
            int r0 = com.tkay.expressad.video.dynview.i.c.a(r0)
            r1 = 100
            if (r0 != r1) goto L33
        L1e:
            com.tkay.expressad.playercommon.PlayerView r0 = r2.D
            com.tkay.expressad.video.module.TkayVideoView$5 r1 = new com.tkay.expressad.video.module.TkayVideoView$5
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            goto L33
        L29:
            com.tkay.expressad.playercommon.PlayerView r0 = r2.D
            com.tkay.expressad.video.module.TkayVideoView$6 r1 = new com.tkay.expressad.video.module.TkayVideoView$6
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L33:
            com.tkay.expressad.video.widget.SoundImageView r0 = r2.E
            if (r0 == 0) goto L3f
            com.tkay.expressad.video.module.TkayVideoView$7 r1 = new com.tkay.expressad.video.module.TkayVideoView$7
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L3f:
            android.view.View r0 = r2.G
            com.tkay.expressad.video.module.TkayVideoView$8 r1 = new com.tkay.expressad.video.module.TkayVideoView$8
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L49:
            return
    }

    @Override
    public void closeVideoOperate(int r2, int r3) {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto Le
            r1.aH = r0
            int r2 = r1.getVisibility()
            if (r2 != 0) goto Le
            r1.e()
        Le:
            if (r3 != r0) goto L14
            r1.gonePlayingCloseView()
            return
        L14:
            r2 = 2
            if (r3 != r2) goto L3d
            boolean r2 = r1.aG
            if (r2 == 0) goto L21
            int r2 = r1.getVisibility()
            if (r2 == 0) goto L3d
        L21:
            boolean r2 = r1.f
            if (r2 == 0) goto L3d
            android.view.View r2 = r1.G
            int r2 = r2.getVisibility()
            if (r2 == 0) goto L3d
            boolean r2 = r1.i
            if (r2 == 0) goto L35
            boolean r2 = r1.L
            if (r2 == 0) goto L3b
        L35:
            android.view.View r2 = r1.G
            r3 = 0
            r2.setVisibility(r3)
        L3b:
            r1.ao = r0
        L3d:
            return
    }

    @Override
    public void defaultShow() {
            r12 = this;
            super.defaultShow()
            r0 = 1
            r12.ak = r0
            android.content.Context r1 = r12.a
            int r5 = com.tkay.expressad.foundation.h.t.f(r1)
            android.content.Context r1 = r12.a
            int r6 = com.tkay.expressad.foundation.h.t.e(r1)
            r3 = 0
            r4 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r10 = 0
            r11 = 0
            r2 = r12
            r2.showVideoLocation(r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r12.videoOperate(r0)
            int r0 = r12.ab
            if (r0 != 0) goto L29
            r0 = -1
            r1 = 2
            r12.closeVideoOperate(r0, r1)
        L29:
            return
    }

    @Override
    public void dismissAllAlert() {
            r3 = this;
            com.tkay.expressad.widget.a.b r0 = r3.af
            if (r0 == 0) goto L7
            r0.dismiss()
        L7:
            com.tkay.expressad.video.module.a.a r0 = r3.e
            if (r0 == 0) goto L14
            com.tkay.expressad.video.module.a.a r0 = r3.e
            r1 = 125(0x7d, float:1.75E-43)
            java.lang.String r2 = ""
            r0.a(r1, r2)
        L14:
            return
    }

    @Override
    public int getBorderViewHeight() {
            r1 = this;
            int r0 = com.tkay.expressad.video.module.TkayVideoView.B
            return r0
    }

    @Override
    public int getBorderViewLeft() {
            r1 = this;
            int r0 = com.tkay.expressad.video.module.TkayVideoView.z
            return r0
    }

    @Override
    public int getBorderViewRadius() {
            r1 = this;
            int r0 = com.tkay.expressad.video.module.TkayVideoView.x
            return r0
    }

    @Override
    public int getBorderViewTop() {
            r1 = this;
            int r0 = com.tkay.expressad.video.module.TkayVideoView.y
            return r0
    }

    @Override
    public int getBorderViewWidth() {
            r1 = this;
            int r0 = com.tkay.expressad.video.module.TkayVideoView.A
            return r0
    }

    public int getCloseAlert() {
            r1 = this;
            int r0 = r1.ad
            return r0
    }

    @Override
    public java.lang.String getCurrentProgress() {
            r5 = this;
            com.tkay.expressad.video.module.TkayVideoView$b r0 = r5.aL     // Catch: java.lang.Throwable -> L32
            int r0 = r0.a()     // Catch: java.lang.Throwable -> L32
            r1 = 0
            com.tkay.expressad.foundation.d.c r2 = r5.b     // Catch: java.lang.Throwable -> L32
            if (r2 == 0) goto L11
            com.tkay.expressad.foundation.d.c r1 = r5.b     // Catch: java.lang.Throwable -> L32
            int r1 = r1.bi()     // Catch: java.lang.Throwable -> L32
        L11:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L32
            r2.<init>()     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = "progress"
            java.lang.String r4 = a(r0, r1)     // Catch: java.lang.Throwable -> L32
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = "time"
            r2.put(r3, r0)     // Catch: java.lang.Throwable -> L32
            java.lang.String r0 = "duration"
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L32
            r2.put(r0, r1)     // Catch: java.lang.Throwable -> L32
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L32
            return r0
        L32:
            r0 = move-exception
            r0.getMessage()
            java.lang.String r0 = "{}"
            return r0
    }

    public int getMute() {
            r1 = this;
            int r0 = r1.aw
            return r0
    }

    public java.lang.String getUnitId() {
            r1 = this;
            java.lang.String r0 = r1.ah
            return r0
    }

    public int getVideoSkipTime() {
            r1 = this;
            int r0 = r1.ab
            return r0
    }

    public void gonePlayingCloseView() {
            r4 = this;
            boolean r0 = r4.f
            if (r0 == 0) goto L16
            android.view.View r0 = r4.G
            int r0 = r0.getVisibility()
            r1 = 8
            if (r0 == r1) goto L16
            android.view.View r0 = r4.G
            r0.setVisibility(r1)
            r0 = 0
            r4.ao = r0
        L16:
            boolean r0 = r4.aM
            if (r0 != 0) goto L41
            boolean r0 = r4.ar
            if (r0 != 0) goto L41
            boolean r0 = r4.ap
            if (r0 == 0) goto L23
            goto L41
        L23:
            r0 = 1
            r4.aM = r0
            int r1 = r4.ab
            if (r1 < 0) goto L41
            if (r1 != 0) goto L2f
            r4.ar = r0
            return
        L2f:
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            com.tkay.expressad.video.module.TkayVideoView$11 r1 = new com.tkay.expressad.video.module.TkayVideoView$11
            r1.<init>(r4)
            int r2 = r4.ab
            int r2 = r2 * 1000
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
        L41:
            return
    }

    @Override
    public void hideAlertView(int r6) {
            r5 = this;
            boolean r0 = r5.V
            if (r0 == 0) goto L7c
            r0 = 0
            r5.V = r0
            r1 = 1
            r5.aB = r1
            r5.setShowingAlertViewCover(r0)
            com.tkay.expressad.videocommon.e.c r2 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.e()
            java.lang.String r4 = r5.ah
            r2.a(r3, r4, r0)
            java.lang.String r0 = ""
            if (r6 != 0) goto L48
            r5.i()
            boolean r6 = r5.au
            if (r6 == 0) goto L7c
            int r6 = r5.ay
            int r2 = com.tkay.expressad.foundation.g.a.cs
            if (r6 == r2) goto L35
            int r6 = r5.ay
            int r2 = com.tkay.expressad.foundation.g.a.cr
            if (r6 != r2) goto L7c
        L35:
            r5.aC = r1
            com.tkay.expressad.video.module.a.a r6 = r5.e
            if (r6 == 0) goto L42
            com.tkay.expressad.video.module.a.a r6 = r5.e
            r2 = 124(0x7c, float:1.74E-43)
            r6.a(r2, r0)
        L42:
            r5.aG = r1
            r5.gonePlayingCloseView()
            return
        L48:
            r5.aD = r1
            boolean r6 = r5.au
            if (r6 == 0) goto L58
            int r6 = r5.ay
            int r1 = com.tkay.expressad.foundation.g.a.cs
            if (r6 != r1) goto L58
            r5.i()
            return
        L58:
            boolean r6 = r5.au
            r1 = 2
            if (r6 == 0) goto L73
            int r6 = r5.ay
            int r2 = com.tkay.expressad.foundation.g.a.cr
            if (r6 != r2) goto L73
            com.tkay.expressad.video.module.a.a r6 = r5.e
            if (r6 == 0) goto L72
            com.tkay.expressad.video.module.a.a r6 = r5.e
            boolean r0 = r5.aF
            java.lang.String r0 = r5.b(r0)
            r6.a(r1, r0)
        L72:
            return
        L73:
            com.tkay.expressad.video.module.a.a r6 = r5.e
            if (r6 == 0) goto L7c
            com.tkay.expressad.video.module.a.a r6 = r5.e
            r6.a(r1, r0)
        L7c:
            return
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            return
    }

    @Override
    public boolean isH5Canvas() {
            r2 = this;
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            int r0 = r0.height
            android.content.Context r1 = r2.a
            android.content.Context r1 = r1.getApplicationContext()
            int r1 = com.tkay.expressad.foundation.h.t.e(r1)
            if (r0 < r1) goto L14
            r0 = 0
            return r0
        L14:
            r0 = 1
            return r0
    }

    public boolean isInstallDialogShowing() {
            r1 = this;
            boolean r0 = r1.W
            return r0
    }

    public boolean isMiniCardShowing() {
            r1 = this;
            boolean r0 = r1.an
            return r0
    }

    public boolean isShowingAlertView() {
            r1 = this;
            boolean r0 = r1.V
            return r0
    }

    public boolean isShowingTransparent() {
            r1 = this;
            boolean r0 = r1.as
            return r0
    }

    public boolean isfront() {
            r7 = this;
            android.view.ViewParent r0 = r7.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1 = 0
            if (r0 == 0) goto L2c
            int r2 = r0.indexOfChild(r7)
            int r3 = r0.getChildCount()
            r4 = 1
            int r2 = r2 + r4
            r5 = r1
        L14:
            int r6 = r3 + (-1)
            if (r2 > r6) goto L2b
            android.view.View r5 = r0.getChildAt(r2)
            int r5 = r5.getVisibility()
            if (r5 != 0) goto L27
            boolean r5 = r7.an
            if (r5 == 0) goto L27
            goto L2c
        L27:
            int r2 = r2 + 1
            r5 = r4
            goto L14
        L2b:
            r1 = r5
        L2c:
            return r1
    }

    @Override
    public void notifyCloseBtn(int r2) {
            r1 = this;
            r0 = 1
            if (r2 != 0) goto L9
            r1.ap = r0
            r2 = 0
            r1.ar = r2
            return
        L9:
            if (r2 != r0) goto Ld
            r1.aq = r0
        Ld:
            return
    }

    public void notifyVideoClose() {
            r3 = this;
            com.tkay.expressad.video.module.a.a r0 = r3.e
            r1 = 2
            java.lang.String r2 = ""
            r0.a(r1, r2)
            return
    }

    public void onBackPress() {
            r1 = this;
            boolean r0 = r1.an
            if (r0 != 0) goto L2d
            boolean r0 = r1.V
            if (r0 == 0) goto L9
            goto L2d
        L9:
            boolean r0 = r1.aC
            if (r0 == 0) goto Le
            return
        Le:
            boolean r0 = r1.ao
            if (r0 == 0) goto L16
            r1.e()
            return
        L16:
            boolean r0 = r1.ap
            if (r0 == 0) goto L22
            boolean r0 = r1.aq
            if (r0 == 0) goto L22
            r1.e()
            return
        L22:
            boolean r0 = r1.ap
            if (r0 != 0) goto L2d
            boolean r0 = r1.ar
            if (r0 == 0) goto L2d
            r1.e()
        L2d:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            com.tkay.expressad.foundation.d.c r1 = r0.b
            if (r1 == 0) goto L10
            com.tkay.expressad.foundation.d.c r1 = r0.b
            boolean r1 = r1.j()
            if (r1 == 0) goto L10
            return
        L10:
            boolean r1 = r0.f
            if (r1 == 0) goto L1b
            boolean r1 = r0.ak
            if (r1 == 0) goto L1b
            r0.l()
        L1b:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            java.lang.Runnable r0 = r2.aN     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto L10
            android.os.Handler r0 = r2.getHandler()     // Catch: java.lang.Throwable -> L11
            java.lang.Runnable r1 = r2.aN     // Catch: java.lang.Throwable -> L11
            r0.removeCallbacks(r1)     // Catch: java.lang.Throwable -> L11
        L10:
            return
        L11:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public void preLoadData(com.tkay.expressad.video.signal.factory.b r8) {
            r7 = this;
            r7.R = r8
            boolean r8 = r7.f
            r0 = 0
            if (r8 == 0) goto Lab
            java.lang.String r8 = r7.aa
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 != 0) goto Lb8
            com.tkay.expressad.foundation.d.c r8 = r7.b
            if (r8 == 0) goto Lb8
            com.tkay.expressad.foundation.d.c r8 = r7.b
            if (r8 == 0) goto L87
            com.tkay.expressad.foundation.d.c r8 = r7.b
            java.lang.String r8 = r8.U()
            boolean r8 = com.tkay.expressad.foundation.h.w.b(r8)
            if (r8 == 0) goto L87
            com.tkay.expressad.foundation.d.c r8 = r7.b
            java.lang.String r8 = r8.U()
            java.lang.String r1 = "x"
            java.lang.String[] r8 = r8.split(r1)
            int r1 = r8.length
            r2 = 2
            r3 = 0
            if (r1 != r2) goto L70
            r1 = r8[r0]
            double r1 = com.tkay.expressad.foundation.h.t.b(r1)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L47
            r1 = r8[r0]
            double r1 = com.tkay.expressad.foundation.h.t.b(r1)
            r7.ai = r1
        L47:
            r1 = 1
            r2 = r8[r1]
            double r5 = com.tkay.expressad.foundation.h.t.b(r2)
            int r2 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r2 <= 0) goto L5a
            r8 = r8[r1]
            double r1 = com.tkay.expressad.foundation.h.t.b(r8)
            r7.aj = r1
        L5a:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r1 = "TkayBaseView mVideoW:"
            r8.<init>(r1)
            double r1 = r7.ai
            r8.append(r1)
            java.lang.String r1 = "  mVideoH:"
            r8.append(r1)
            double r1 = r7.aj
            r8.append(r1)
        L70:
            double r1 = r7.ai
            int r8 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r8 > 0) goto L7a
            r1 = 4653344314980564992(0x4094000000000000, double:1280.0)
            r7.ai = r1
        L7a:
            double r1 = r7.aj
            int r8 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r8 > 0) goto L87
            r1 = 4649544402794971136(0x4086800000000000, double:720.0)
            r7.aj = r1
        L87:
            com.tkay.expressad.playercommon.PlayerView r8 = r7.D
            int r1 = r7.ac
            r8.initBufferIngParam(r1)
            com.tkay.expressad.playercommon.PlayerView r8 = r7.D
            java.lang.String r1 = r7.aa
            com.tkay.expressad.foundation.d.c r2 = r7.b
            java.lang.String r2 = r2.S()
            com.tkay.expressad.foundation.d.c r3 = r7.b
            int r3 = r3.ao()
            com.tkay.expressad.video.module.TkayVideoView$b r4 = r7.aL
            r8.initVFPData(r1, r2, r3, r4)
            int r8 = r7.aw
            r1 = -1
            r2 = 0
            r7.soundOperate(r8, r1, r2)
            goto Lb8
        Lab:
            com.tkay.expressad.video.module.a.a r8 = r7.e
            if (r8 == 0) goto Lb8
            com.tkay.expressad.video.module.a.a r8 = r7.e
            r1 = 12
            java.lang.String r2 = "TYVideoView initSuccess false"
            r8.a(r1, r2)
        Lb8:
            com.tkay.expressad.video.module.TkayVideoView.av = r0
            return
    }

    @Override
    public void progressBarOperate(int r2) {
            r1 = this;
            boolean r0 = r1.f
            if (r0 == 0) goto L1c
            r0 = 1
            if (r2 != r0) goto L11
            android.widget.ProgressBar r2 = r1.J
            if (r2 == 0) goto L1c
            r0 = 8
            r2.setVisibility(r0)
            return
        L11:
            r0 = 2
            if (r2 != r0) goto L1c
            android.widget.ProgressBar r2 = r1.J
            if (r2 == 0) goto L1c
            r0 = 0
            r2.setVisibility(r0)
        L1c:
            return
    }

    @Override
    public void progressOperate(int r3, int r4) {
            r2 = this;
            boolean r0 = r2.f
            if (r0 == 0) goto L3c
            com.tkay.expressad.foundation.d.c r0 = r2.b
            r1 = 0
            if (r0 == 0) goto L10
            com.tkay.expressad.foundation.d.c r0 = r2.b
            int r0 = r0.bi()
            goto L11
        L10:
            r0 = r1
        L11:
            if (r3 <= 0) goto L1e
            if (r3 > r0) goto L1e
            com.tkay.expressad.playercommon.PlayerView r0 = r2.D
            if (r0 == 0) goto L1e
            int r3 = r3 * 1000
            r0.seekTo(r3)
        L1e:
            r3 = 1
            if (r4 != r3) goto L29
            android.widget.TextView r3 = r2.F
            r4 = 8
            r3.setVisibility(r4)
            goto L31
        L29:
            r3 = 2
            if (r4 != r3) goto L31
            android.widget.TextView r3 = r2.F
            r3.setVisibility(r1)
        L31:
            android.widget.TextView r3 = r2.F
            int r3 = r3.getVisibility()
            if (r3 != 0) goto L3c
            r2.n()
        L3c:
            return
    }

    public void releasePlayer() {
            r1 = this;
            com.tkay.expressad.playercommon.PlayerView r0 = r1.D     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto Ld
            boolean r0 = r1.am     // Catch: java.lang.Exception -> L1e
            if (r0 != 0) goto Ld
            com.tkay.expressad.playercommon.PlayerView r0 = r1.D     // Catch: java.lang.Exception -> L1e
            r0.release()     // Catch: java.lang.Exception -> L1e
        Ld:
            com.tkay.expressad.video.module.TkayVideoView$b r0 = r1.aL     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto L16
            com.tkay.expressad.video.module.TkayVideoView$b r0 = r1.aL     // Catch: java.lang.Exception -> L1e
            r0.b()     // Catch: java.lang.Exception -> L1e
        L16:
            com.tkay.expressad.video.module.a.a r0 = r1.U     // Catch: java.lang.Exception -> L1e
            if (r0 == 0) goto L1d
            r0 = 0
            r1.U = r0     // Catch: java.lang.Exception -> L1e
        L1d:
            return
        L1e:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void setBufferTimeout(int r1) {
            r0 = this;
            r0.ac = r1
            return
    }

    public void setCTALayoutVisibleOrGone() {
            r4 = this;
            com.tkay.expressad.foundation.d.c r0 = r4.b
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.foundation.d.c r0 = r4.b
            boolean r0 = r0.j()
            if (r0 != 0) goto Le
            return
        Le:
            android.widget.FrameLayout r0 = r4.P
            if (r0 != 0) goto L13
            return
        L13:
            int r1 = r4.S
            r2 = -1
            if (r1 >= r2) goto L19
            return
        L19:
            com.tkay.expressad.video.module.TkayClickCTAView r1 = r4.Q
            if (r1 != 0) goto L54
            if (r0 == 0) goto L54
            if (r1 != 0) goto L4d
            com.tkay.expressad.video.module.TkayClickCTAView r0 = new com.tkay.expressad.video.module.TkayClickCTAView
            android.content.Context r1 = r4.getContext()
            r0.<init>(r1)
            r4.Q = r0
            com.tkay.expressad.foundation.d.c r1 = r4.b
            r0.setCampaign(r1)
            com.tkay.expressad.video.module.TkayClickCTAView r0 = r4.Q
            java.lang.String r1 = r4.ah
            r0.setUnitId(r1)
            com.tkay.expressad.video.module.a.a r0 = r4.U
            if (r0 == 0) goto L46
            com.tkay.expressad.video.module.TkayClickCTAView r1 = r4.Q
            com.tkay.expressad.video.module.a.a.i r3 = new com.tkay.expressad.video.module.a.a.i
            r3.<init>(r0)
            r1.setNotifyListener(r3)
        L46:
            com.tkay.expressad.video.module.TkayClickCTAView r0 = r4.Q
            com.tkay.expressad.video.signal.factory.b r1 = r4.R
            r0.preLoadData(r1)
        L4d:
            android.widget.FrameLayout r0 = r4.P
            com.tkay.expressad.video.module.TkayClickCTAView r1 = r4.Q
            r0.addView(r1)
        L54:
            int r0 = r4.S
            r1 = 0
            if (r0 < 0) goto L5f
            android.widget.FrameLayout r0 = r4.P
            r0.setVisibility(r1)
            return
        L5f:
            if (r0 != r2) goto L86
            android.widget.FrameLayout r0 = r4.P
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L76
            android.widget.FrameLayout r0 = r4.P
            r0.setVisibility(r1)
            java.lang.Runnable r0 = r4.aN
            r1 = 3000(0xbb8, double:1.482E-320)
            r4.postDelayed(r0, r1)
            return
        L76:
            android.widget.FrameLayout r0 = r4.P
            r1 = 8
            r0.setVisibility(r1)
            android.os.Handler r0 = r4.getHandler()
            java.lang.Runnable r1 = r4.aN
            r0.removeCallbacks(r1)
        L86:
            return
    }

    public void setCamPlayOrderCallback(com.tkay.expressad.video.dynview.f.a r1, java.util.List<com.tkay.expressad.foundation.d.c> r2, int r3, int r4) {
            r0 = this;
            r0.N = r1
            int r1 = r2.size()
            r0.mCampaignSize = r1
            r0.mCurrPlayNum = r3
            r0.O = r4
            r0.mCampOrderViewData = r2
            com.tkay.expressad.foundation.d.c r1 = r0.b
            if (r1 != 0) goto L13
            return
        L13:
            com.tkay.expressad.foundation.d.c r1 = r0.b
            int r1 = r1.k()
            r2 = 5
            if (r1 != r2) goto L5b
            com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar r1 = r0.M
            if (r1 == 0) goto L5b
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r0.mCampOrderViewData
            if (r2 != 0) goto L25
            goto L5b
        L25:
            int r2 = r0.mCampaignSize
            r3 = 1
            if (r2 <= r3) goto L55
            r2 = 0
            r1.setVisibility(r2)
            com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar r1 = r0.M
            int r3 = r0.mCampaignSize
            r4 = 2
            r1.init(r3, r4)
        L36:
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r0.mCampOrderViewData
            int r1 = r1.size()
            if (r2 >= r1) goto L54
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r0.mCampOrderViewData
            java.lang.Object r1 = r1.get(r2)
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            int r1 = r1.aF()
            if (r1 <= 0) goto L51
            com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar r3 = r0.M
            r3.setProgress(r1, r2)
        L51:
            int r2 = r2 + 1
            goto L36
        L54:
            return
        L55:
            r2 = 8
            r1.setVisibility(r2)
        L5b:
            return
    }

    @Override
    public void setCampaign(com.tkay.expressad.foundation.d.c r6) {
            r5 = this;
            super.setCampaign(r6)
            com.tkay.expressad.video.module.TkayVideoView$b r0 = r5.aL
            if (r0 == 0) goto L61
            r0.a(r6)
            com.tkay.expressad.video.module.TkayVideoView$b r0 = r5.aL
            r1 = 0
            if (r6 == 0) goto L32
            int r2 = r6.ao()
            r3 = -1
            if (r2 == r3) goto L1b
            int r6 = r6.ao()
            goto L48
        L1b:
            com.tkay.expressad.videocommon.e.c r6 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.e()
            java.lang.String r3 = r5.ah
            com.tkay.expressad.videocommon.e.d r6 = r6.a(r2, r3, r1)
            int r6 = r6.v()
            goto L48
        L32:
            com.tkay.expressad.videocommon.e.c r6 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.e()
            java.lang.String r3 = r5.ah
            com.tkay.expressad.videocommon.e.d r6 = r6.a(r2, r3, r1)
            int r6 = r6.v()
        L48:
            com.tkay.expressad.videocommon.e.c r2 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.e()
            java.lang.String r4 = r5.ah
            com.tkay.expressad.videocommon.e.d r1 = r2.a(r3, r4, r1)
            int r1 = r1.x()
            r0.a(r6, r1)
        L61:
            return
    }

    public void setCloseAlert(int r1) {
            r0 = this;
            r0.ad = r1
            return
    }

    public void setContainerViewOnNotifyListener(com.tkay.expressad.video.module.a.a r1) {
            r0 = this;
            r0.U = r1
            return
    }

    @Override
    public void setCover(boolean r2) {
            r1 = this;
            boolean r0 = r1.f
            if (r0 == 0) goto L9
            com.tkay.expressad.playercommon.PlayerView r0 = r1.D
            r0.setIsCovered(r2)
        L9:
            return
    }

    public void setDialogRole(int r2) {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto L4
            goto L5
        L4:
            r0 = 0
        L5:
            r1.aE = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " "
            r0.append(r2)
            boolean r2 = r1.aE
            r0.append(r2)
            return
    }

    public void setIVRewardEnable(int r1, int r2, int r3) {
            r0 = this;
            r0.ay = r1
            r0.az = r2
            r0.aA = r3
            return
    }

    @Override
    public void setInstallDialogState(boolean r2) {
            r1 = this;
            r1.W = r2
            com.tkay.expressad.playercommon.PlayerView r0 = r1.D
            r0.setIsCovered(r2)
            return
    }

    public void setIsIV(boolean r2) {
            r1 = this;
            r1.au = r2
            com.tkay.expressad.video.module.TkayVideoView$b r0 = r1.aL
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    @Override
    public void setMiniEndCardState(boolean r1) {
            r0 = this;
            r0.an = r1
            return
    }

    public void setNotchPadding(int r9, int r10, int r11, int r12) {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = "NOTCH VideoView "
            r0.<init>(r1)     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = "%1s-%2s-%3s-%4s"
            r2 = 4
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L7c
            java.lang.Integer r3 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Exception -> L7c
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Exception -> L7c
            java.lang.Integer r3 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Exception -> L7c
            r5 = 1
            r2[r5] = r3     // Catch: java.lang.Exception -> L7c
            r3 = 2
            java.lang.Integer r6 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Exception -> L7c
            r2[r3] = r6     // Catch: java.lang.Exception -> L7c
            r3 = 3
            java.lang.Integer r6 = java.lang.Integer.valueOf(r12)     // Catch: java.lang.Exception -> L7c
            r2[r3] = r6     // Catch: java.lang.Exception -> L7c
            java.lang.String r1 = java.lang.String.format(r1, r2)     // Catch: java.lang.Exception -> L7c
            r0.append(r1)     // Catch: java.lang.Exception -> L7c
            android.view.ViewGroup$LayoutParams r0 = r8.getLayoutParams()     // Catch: java.lang.Exception -> L7c
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0     // Catch: java.lang.Exception -> L7c
            int r1 = r0.leftMargin     // Catch: java.lang.Exception -> L7c
            int r2 = r0.rightMargin     // Catch: java.lang.Exception -> L7c
            int r3 = r0.topMargin     // Catch: java.lang.Exception -> L7c
            int r0 = r0.bottomMargin     // Catch: java.lang.Exception -> L7c
            int r6 = java.lang.Math.max(r9, r10)     // Catch: java.lang.Exception -> L7c
            int r7 = java.lang.Math.max(r11, r12)     // Catch: java.lang.Exception -> L7c
            int r6 = java.lang.Math.max(r6, r7)     // Catch: java.lang.Exception -> L7c
            int r1 = java.lang.Math.max(r1, r2)     // Catch: java.lang.Exception -> L7c
            int r0 = java.lang.Math.max(r3, r0)     // Catch: java.lang.Exception -> L7c
            int r0 = java.lang.Math.max(r1, r0)     // Catch: java.lang.Exception -> L7c
            if (r0 <= r6) goto L58
            r4 = r5
        L58:
            if (r4 != 0) goto L70
            android.widget.RelativeLayout r0 = r8.H     // Catch: java.lang.Exception -> L7c
            if (r0 == 0) goto L70
            android.widget.RelativeLayout r0 = r8.H     // Catch: java.lang.Exception -> L7c
            com.tkay.expressad.video.module.TkayVideoView$12 r7 = new com.tkay.expressad.video.module.TkayVideoView$12     // Catch: java.lang.Exception -> L7c
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r11
            r5 = r10
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L7c
            r9 = 200(0xc8, double:9.9E-322)
            r0.postDelayed(r7, r9)     // Catch: java.lang.Exception -> L7c
        L70:
            android.widget.TextView r9 = r8.F     // Catch: java.lang.Exception -> L7c
            int r9 = r9.getVisibility()     // Catch: java.lang.Exception -> L7c
            if (r9 != 0) goto L7b
            r8.n()     // Catch: java.lang.Exception -> L7c
        L7b:
            return
        L7c:
            r9 = move-exception
            r9.getMessage()
            return
    }

    public void setPlayURL(java.lang.String r1) {
            r0 = this;
            r0.aa = r1
            return
    }

    @Override
    public void setScaleFitXY(int r1) {
            r0 = this;
            r0.at = r1
            return
    }

    public void setShowingAlertViewCover(boolean r2) {
            r1 = this;
            com.tkay.expressad.playercommon.PlayerView r0 = r1.D
            r0.setIsCovered(r2)
            return
    }

    public void setShowingTransparent(boolean r1) {
            r0 = this;
            r0.as = r1
            return
    }

    public void setSoundState(int r1) {
            r0 = this;
            r0.aw = r1
            return
    }

    public void setUnitId(java.lang.String r2) {
            r1 = this;
            r1.ah = r2
            com.tkay.expressad.video.module.TkayVideoView$b r0 = r1.aL
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    public void setVideoLayout(com.tkay.expressad.foundation.d.c r2) {
            r1 = this;
            if (r2 == 0) goto La
            r1.b = r2
            boolean r0 = r2.j()
            r1.i = r0
        La:
            boolean r0 = r1.i
            if (r0 == 0) goto L23
            com.tkay.expressad.video.dynview.j.c r0 = new com.tkay.expressad.video.dynview.j.c
            r0.<init>()
            com.tkay.expressad.video.dynview.c r2 = com.tkay.expressad.video.dynview.j.c.a(r1, r2)
            com.tkay.expressad.video.dynview.b.a()
            com.tkay.expressad.video.module.TkayVideoView$1 r0 = new com.tkay.expressad.video.module.TkayVideoView$1
            r0.<init>(r1, r1, r2)
            com.tkay.expressad.video.dynview.b.a(r2, r0)
            return
        L23:
            java.lang.String r2 = "tkay_reward_videoview_item"
            int r2 = r1.findLayout(r2)
            if (r2 <= 0) goto L33
            android.view.LayoutInflater r0 = r1.c
            r0.inflate(r2, r1)
            r1.b()
        L33:
            r2 = 0
            com.tkay.expressad.video.module.TkayVideoView.av = r2
            return
    }

    public void setVideoSkipTime(int r1) {
            r0 = this;
            r0.ab = r1
            return
    }

    @Override
    public void setVisible(int r1) {
            r0 = this;
            r0.setVisibility(r1)
            return
    }

    @Override
    public void showAlertView() {
            r4 = this;
            boolean r0 = r4.an
            if (r0 == 0) goto L5
            return
        L5:
            com.tkay.expressad.widget.a.c r0 = r4.ag
            if (r0 != 0) goto L10
            com.tkay.expressad.video.module.TkayVideoView$9 r0 = new com.tkay.expressad.video.module.TkayVideoView$9
            r0.<init>(r4)
            r4.ag = r0
        L10:
            com.tkay.expressad.widget.a.b r0 = r4.af
            if (r0 != 0) goto L21
            com.tkay.expressad.widget.a.b r0 = new com.tkay.expressad.widget.a.b
            android.content.Context r1 = r4.getContext()
            com.tkay.expressad.widget.a.c r2 = r4.ag
            r0.<init>(r1, r2)
            r4.af = r0
        L21:
            boolean r0 = r4.au
            if (r0 == 0) goto L2f
            com.tkay.expressad.widget.a.b r0 = r4.af
            int r1 = r4.ay
            java.lang.String r2 = r4.ah
            r0.a(r1, r2)
            goto L34
        L2f:
            com.tkay.expressad.widget.a.b r0 = r4.af
            r0.b()
        L34:
            com.tkay.expressad.playercommon.PlayerView r0 = r4.D
            if (r0 == 0) goto L63
            boolean r0 = r0.isComplete()
            if (r0 != 0) goto L63
            com.tkay.expressad.widget.a.b r0 = r4.af
            r0.show()
            r0 = 1
            r4.aB = r0
            r4.V = r0
            r4.setShowingAlertViewCover(r0)
            com.tkay.expressad.videocommon.e.c r0 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.e()
            java.lang.String r2 = r4.ah
            r3 = 0
            r0.a(r1, r2, r3)
            java.lang.String r0 = com.tkay.expressad.videocommon.e.d.J()
            r4.ax = r0
        L63:
            return
    }

    public void showBaitClickView() {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.b
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.foundation.d.c r0 = r3.b
            boolean r0 = r0.j()
            if (r0 != 0) goto Le
            return
        Le:
            com.tkay.expressad.foundation.d.c r0 = r3.b
            com.tkay.expressad.foundation.d.c$c r0 = r0.M()
            if (r0 != 0) goto L17
            return
        L17:
            com.tkay.expressad.foundation.d.c r0 = r3.b
            com.tkay.expressad.foundation.d.c$c r0 = r0.M()
            java.lang.String r0 = r0.e()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L28
            return
        L28:
            java.lang.String r1 = "bait_click"
            java.lang.String r0 = com.tkay.expressad.foundation.h.x.a(r0, r1)     // Catch: java.lang.Exception -> L59
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L59
            if (r1 != 0) goto L58
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L59
            if (r0 == 0) goto L58
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1 = r3.aK     // Catch: java.lang.Exception -> L59
            if (r1 == 0) goto L58
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1 = r3.aK     // Catch: java.lang.Exception -> L59
            r2 = 0
            r1.setVisibility(r2)     // Catch: java.lang.Exception -> L59
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1 = r3.aK     // Catch: java.lang.Exception -> L59
            r1.init(r0)     // Catch: java.lang.Exception -> L59
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0 = r3.aK     // Catch: java.lang.Exception -> L59
            r0.startAnimation()     // Catch: java.lang.Exception -> L59
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0 = r3.aK     // Catch: java.lang.Exception -> L59
            com.tkay.expressad.video.module.TkayVideoView$4 r1 = new com.tkay.expressad.video.module.TkayVideoView$4     // Catch: java.lang.Exception -> L59
            r1.<init>(r3)     // Catch: java.lang.Exception -> L59
            r0.setOnClickListener(r1)     // Catch: java.lang.Exception -> L59
        L58:
            return
        L59:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public void showIVRewardAlertView(java.lang.String r3) {
            r2 = this;
            com.tkay.expressad.video.module.a.a r3 = r2.e
            r0 = 8
            java.lang.String r1 = ""
            r3.a(r0, r1)
            return
    }

    public void showMoreOfferInPlayTemplate() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.b
            if (r0 == 0) goto L2b
            android.widget.RelativeLayout r0 = r1.T
            if (r0 != 0) goto L9
            goto L2b
        L9:
            com.tkay.expressad.foundation.d.c r0 = r1.b
            boolean r0 = r0.j()
            if (r0 != 0) goto L12
            return
        L12:
            com.tkay.expressad.foundation.d.c r0 = r1.b
            com.tkay.expressad.foundation.d.c$c r0 = r0.M()
            if (r0 != 0) goto L1b
            return
        L1b:
            com.tkay.expressad.foundation.d.c r0 = r1.b
            com.tkay.expressad.foundation.d.c$c r0 = r0.M()
            java.lang.String r0 = r0.e()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L2b
        L2b:
            return
    }

    @Override
    public void showVideoLocation(int r7, int r8, int r9, int r10, int r11, int r12, int r13, int r14, int r15) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "showVideoLocation marginTop:"
            r0.<init>(r1)
            r0.append(r7)
            java.lang.String r1 = " marginLeft:"
            r0.append(r1)
            r0.append(r8)
            java.lang.String r1 = " width:"
            r0.append(r1)
            r0.append(r9)
            java.lang.String r1 = "  height:"
            r0.append(r1)
            r0.append(r10)
            java.lang.String r1 = " radius:"
            r0.append(r1)
            r0.append(r11)
            java.lang.String r1 = " borderTop:"
            r0.append(r1)
            r0.append(r12)
            java.lang.String r1 = " borderLeft:"
            r0.append(r1)
            r0.append(r13)
            java.lang.String r1 = " borderWidth:"
            r0.append(r1)
            r0.append(r14)
            java.lang.String r1 = " borderHeight:"
            r0.append(r1)
            r0.append(r15)
            boolean r0 = r6.f
            if (r0 == 0) goto L12b
            android.widget.RelativeLayout r0 = r6.H
            r1 = 0
            r0.setPadding(r1, r1, r1, r1)
            r6.setVisibility(r1)
            android.widget.RelativeLayout r0 = r6.H
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L64
            android.widget.RelativeLayout r0 = r6.H
            r0.setVisibility(r1)
        L64:
            android.widget.TextView r0 = r6.F
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L6f
            r6.n()
        L6f:
            android.content.Context r0 = r6.a
            int r0 = com.tkay.expressad.foundation.h.t.f(r0)
            android.content.Context r2 = r6.a
            int r2 = com.tkay.expressad.foundation.h.t.e(r2)
            r3 = 1
            if (r9 <= 0) goto L86
            if (r10 <= 0) goto L86
            if (r0 < r9) goto L86
            if (r2 < r10) goto L86
            r0 = r3
            goto L87
        L86:
            r0 = r1
        L87:
            if (r0 == 0) goto L128
            boolean r0 = r6.ak
            if (r0 != 0) goto L128
            com.tkay.expressad.video.module.TkayVideoView.y = r12
            com.tkay.expressad.video.module.TkayVideoView.z = r13
            int r14 = r14 + 4
            com.tkay.expressad.video.module.TkayVideoView.A = r14
            int r15 = r15 + 4
            com.tkay.expressad.video.module.TkayVideoView.B = r15
            float r12 = (float) r9
            float r13 = (float) r10
            float r12 = r12 / r13
            r13 = 0
            double r14 = r6.ai     // Catch: java.lang.Throwable -> La4
            double r4 = r6.aj     // Catch: java.lang.Throwable -> La4
            double r14 = r14 / r4
            float r13 = (float) r14
            goto La8
        La4:
            r14 = move-exception
            r14.getMessage()
        La8:
            if (r11 <= 0) goto Lec
            com.tkay.expressad.video.module.TkayVideoView.x = r11
            if (r11 <= 0) goto Lec
            android.graphics.drawable.GradientDrawable r14 = new android.graphics.drawable.GradientDrawable
            r14.<init>()
            android.content.Context r15 = r6.getContext()
            float r11 = (float) r11
            int r11 = com.tkay.expressad.foundation.h.t.b(r15, r11)
            float r11 = (float) r11
            r14.setCornerRadius(r11)
            r11 = -1
            r14.setColor(r11)
            r14.setStroke(r3, r1)
            int r11 = android.os.Build.VERSION.SDK_INT
            r15 = 16
            if (r11 < r15) goto Ld6
            r6.setBackground(r14)
            com.tkay.expressad.playercommon.PlayerView r11 = r6.D
            r11.setBackground(r14)
            goto Lde
        Ld6:
            r6.setBackgroundDrawable(r14)
            com.tkay.expressad.playercommon.PlayerView r11 = r6.D
            r11.setBackgroundDrawable(r14)
        Lde:
            int r11 = android.os.Build.VERSION.SDK_INT
            r14 = 21
            if (r11 < r14) goto Lec
            r6.setClipToOutline(r3)
            com.tkay.expressad.playercommon.PlayerView r11 = r6.D
            r11.setClipToOutline(r3)
        Lec:
            float r12 = r12 - r13
            float r11 = java.lang.Math.abs(r12)
            r12 = 1036831949(0x3dcccccd, float:0.1)
            int r11 = (r11 > r12 ? 1 : (r11 == r12 ? 0 : -1))
            if (r11 <= 0) goto L104
            int r11 = r6.at
            if (r11 != r3) goto Lfd
            goto L104
        Lfd:
            r6.l()
            r6.videoOperate(r3)
            return
        L104:
            r6.l()
            boolean r11 = r6.as
            if (r11 == 0) goto L124
            r6.setLayoutCenter(r9, r10)
            boolean r7 = com.tkay.expressad.video.module.TkayVideoView.av
            java.lang.String r8 = ""
            if (r7 == 0) goto L11c
            com.tkay.expressad.video.module.a.a r7 = r6.e
            r9 = 114(0x72, float:1.6E-43)
            r7.a(r9, r8)
            return
        L11c:
            com.tkay.expressad.video.module.a.a r7 = r6.e
            r9 = 116(0x74, float:1.63E-43)
            r7.a(r9, r8)
            return
        L124:
            r6.setLayoutParam(r8, r7, r9, r10)
            return
        L128:
            r6.l()
        L12b:
            return
    }

    @Override
    public void soundOperate(int r2, int r3) {
            r1 = this;
            java.lang.String r0 = "2"
            r1.soundOperate(r2, r3, r0)
            return
    }

    @Override
    public void soundOperate(int r5, int r6, java.lang.String r7) {
            r4 = this;
            boolean r0 = r4.f
            if (r0 == 0) goto L4f
            r4.aw = r5
            r0 = 2
            r1 = 0
            r2 = 1
            if (r5 != r2) goto L18
            com.tkay.expressad.video.widget.SoundImageView r3 = r4.E
            if (r3 == 0) goto L12
            r3.setSoundStatus(r1)
        L12:
            com.tkay.expressad.playercommon.PlayerView r3 = r4.D
            r3.closeSound()
            goto L26
        L18:
            if (r5 != r0) goto L26
            com.tkay.expressad.video.widget.SoundImageView r3 = r4.E
            if (r3 == 0) goto L21
            r3.setSoundStatus(r2)
        L21:
            com.tkay.expressad.playercommon.PlayerView r3 = r4.D
            r3.openSound()
        L26:
            com.tkay.expressad.foundation.d.c r3 = r4.b
            if (r3 == 0) goto L3a
            com.tkay.expressad.foundation.d.c r3 = r4.b
            boolean r3 = r3.j()
            if (r3 == 0) goto L3a
            com.tkay.expressad.video.widget.SoundImageView r6 = r4.E
            if (r6 == 0) goto L4f
            r6.setVisibility(r1)
            goto L4f
        L3a:
            if (r6 != r2) goto L46
            com.tkay.expressad.video.widget.SoundImageView r6 = r4.E
            if (r6 == 0) goto L4f
            r0 = 8
            r6.setVisibility(r0)
            goto L4f
        L46:
            if (r6 != r0) goto L4f
            com.tkay.expressad.video.widget.SoundImageView r6 = r4.E
            if (r6 == 0) goto L4f
            r6.setVisibility(r1)
        L4f:
            if (r7 == 0) goto L67
            java.lang.String r6 = "2"
            boolean r6 = r7.equals(r6)
            if (r6 == 0) goto L67
            com.tkay.expressad.video.module.a.a r6 = r4.e
            if (r6 == 0) goto L67
            com.tkay.expressad.video.module.a.a r6 = r4.e
            r7 = 7
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r6.a(r7, r5)
        L67:
            return
    }

    @Override
    public void videoOperate(int r3) {
            r2 = this;
            boolean r0 = r2.f
            if (r0 == 0) goto L63
            r0 = 1
            if (r3 != r0) goto L27
            int r3 = r2.getVisibility()
            if (r3 != 0) goto L63
            boolean r3 = r2.isfront()
            if (r3 == 0) goto L63
            boolean r3 = r2.V
            if (r3 != 0) goto L63
            boolean r3 = r2.an
            if (r3 != 0) goto L63
            boolean r3 = r2.W
            if (r3 != 0) goto L63
            boolean r3 = com.tkay.expressad.foundation.f.b.c
            if (r3 != 0) goto L63
            r2.i()
            return
        L27:
            r1 = 2
            if (r3 != r1) goto L34
            int r3 = r2.getVisibility()
            if (r3 != 0) goto L63
            r2.h()
            return
        L34:
            r1 = 3
            if (r3 != r1) goto L43
            boolean r3 = r2.am
            if (r3 != 0) goto L63
            com.tkay.expressad.playercommon.PlayerView r3 = r2.D
            r3.release()
            r2.am = r0
            return
        L43:
            r1 = 5
            if (r3 != r1) goto L50
            r2.W = r0
            boolean r3 = r2.am
            if (r3 != 0) goto L63
            r2.h()
            return
        L50:
            r0 = 4
            if (r3 != r0) goto L63
            r3 = 0
            r2.W = r3
            boolean r3 = r2.am
            if (r3 != 0) goto L63
            boolean r3 = r2.isMiniCardShowing()
            if (r3 != 0) goto L63
            r2.i()
        L63:
            return
    }
}
