package com.mbridge.msdk.nativex.view;

public class MBMediaView extends android.widget.LinearLayout implements com.mbridge.msdk.playercommon.VideoPlayerStatusListener, com.mbridge.msdk.video.js.bridge.IRewardBridge {
    public static final int OPEN_FULLSCREEN_ON_VIDEO_TYPE_1_LANDING_PAGE = 1;
    public static final int OPEN_FULLSCREEN_ON_VIDEO_TYPE_2_NORMAL_FULLSCREEN = 2;
    public static final int OPEN_FULLSCREEN_ON_VIDEO_TYPE_3_NORMAL_FULLSCREEN_ENDCARD = 3;
    public static final int OPEN_FULLSCREEN_ON_VIDEO_TYPE_4_NORMAL_FULLSCREEN_LP = 4;
    public static final int OPEN_FULLSCREEN_ON_VIDEO_TYPE_6_SMALLVIDEO = 6;
    public static final java.lang.String TAG = "MBMediaView";
    public static final int WHAT_VIEW_FULL_SCREEN = 2;
    public static final int WHAT_VIEW_SMALL_SCREEN = 1;
    private static int o = 2;
    private static int p = 1;
    private com.mbridge.msdk.nativex.view.WindVaneWebViewForNV A;
    private com.mbridge.msdk.nativex.view.WindVaneWebViewForNV B;
    private com.mbridge.msdk.videocommon.view.MyImageView C;
    private android.widget.ProgressBar D;
    private android.view.View E;
    private com.mbridge.msdk.nativex.view.mbfullview.BaseView F;
    private android.widget.RelativeLayout G;
    private android.widget.RelativeLayout H;
    private android.widget.TextView I;
    private android.widget.ProgressBar J;
    private android.widget.RelativeLayout K;
    private int L;
    private android.os.Handler M;
    private com.mbridge.msdk.foundation.entity.CampaignEx N;
    private int O;
    private int P;
    private double Q;
    private double R;
    private int S;
    private int T;
    private com.mbridge.msdk.nativex.view.MBMediaView.e U;
    private android.hardware.SensorManager V;
    private android.hardware.Sensor W;
    private boolean a;
    private com.mbridge.msdk.videocommon.download.a aa;
    private com.mbridge.msdk.nativex.view.MBMediaView.a ab;
    private com.mbridge.msdk.out.OnMBMediaViewListener ac;
    private com.mbridge.msdk.out.OnMBMediaViewListenerPlus ad;
    private int ae;
    private boolean af;
    private boolean ag;
    private android.widget.RelativeLayout ah;
    private android.widget.ImageView ai;
    private int aj;
    private boolean ak;
    private android.content.Context al;
    private boolean am;
    private java.lang.Runnable an;
    private boolean b;
    private boolean c;
    private boolean d;
    private boolean e;
    private boolean f;
    private boolean g;
    private boolean h;
    private volatile boolean i;
    private volatile boolean j;
    private boolean k;
    private boolean l;
    private java.util.ArrayList<java.lang.String> m;
    private java.util.ArrayList<java.lang.String> n;
    private boolean q;
    private boolean r;
    private com.iab.omid.library.mmadbridge.adsession.AdSession s;
    private com.iab.omid.library.mmadbridge.adsession.AdEvents t;
    private com.iab.omid.library.mmadbridge.adsession.media.MediaEvents u;
    private int v;
    private com.mbridge.msdk.nativex.view.MediaViewPlayerView w;
    private android.widget.RelativeLayout x;
    private android.widget.RelativeLayout y;
    private android.widget.RelativeLayout z;



    static class 11 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a[] r0 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.nativex.view.MBMediaView.11.a = r0
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r1 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.b     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.nativex.view.MBMediaView.11.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r1 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.a     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }

















    private enum a extends java.lang.Enum<com.mbridge.msdk.nativex.view.MBMediaView.a> {
        public static final com.mbridge.msdk.nativex.view.MBMediaView.a a = null;
        public static final com.mbridge.msdk.nativex.view.MBMediaView.a b = null;
        public static final com.mbridge.msdk.nativex.view.MBMediaView.a c = null;
        private static final com.mbridge.msdk.nativex.view.MBMediaView.a[] d = null;

        static {
                com.mbridge.msdk.nativex.view.MBMediaView$a r0 = new com.mbridge.msdk.nativex.view.MBMediaView$a
                r1 = 0
                java.lang.String r2 = "BIG_IMAGE"
                r0.<init>(r2, r1)
                com.mbridge.msdk.nativex.view.MBMediaView.a.a = r0
                com.mbridge.msdk.nativex.view.MBMediaView$a r0 = new com.mbridge.msdk.nativex.view.MBMediaView$a
                r2 = 1
                java.lang.String r3 = "VIDEO"
                r0.<init>(r3, r2)
                com.mbridge.msdk.nativex.view.MBMediaView.a.b = r0
                com.mbridge.msdk.nativex.view.MBMediaView$a r0 = new com.mbridge.msdk.nativex.view.MBMediaView$a
                r3 = 2
                java.lang.String r4 = "GIF"
                r0.<init>(r4, r3)
                com.mbridge.msdk.nativex.view.MBMediaView.a.c = r0
                r4 = 3
                com.mbridge.msdk.nativex.view.MBMediaView$a[] r4 = new com.mbridge.msdk.nativex.view.MBMediaView.a[r4]
                com.mbridge.msdk.nativex.view.MBMediaView$a r5 = com.mbridge.msdk.nativex.view.MBMediaView.a.a
                r4[r1] = r5
                com.mbridge.msdk.nativex.view.MBMediaView$a r1 = com.mbridge.msdk.nativex.view.MBMediaView.a.b
                r4[r2] = r1
                r4[r3] = r0
                com.mbridge.msdk.nativex.view.MBMediaView.a.d = r4
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.mbridge.msdk.nativex.view.MBMediaView.a valueOf(java.lang.String r1) {
                java.lang.Class<com.mbridge.msdk.nativex.view.MBMediaView$a> r0 = com.mbridge.msdk.nativex.view.MBMediaView.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.mbridge.msdk.nativex.view.MBMediaView$a r1 = (com.mbridge.msdk.nativex.view.MBMediaView.a) r1
                return r1
        }

        public static com.mbridge.msdk.nativex.view.MBMediaView.a[] values() {
                com.mbridge.msdk.nativex.view.MBMediaView$a[] r0 = com.mbridge.msdk.nativex.view.MBMediaView.a.d
                java.lang.Object r0 = r0.clone()
                com.mbridge.msdk.nativex.view.MBMediaView$a[] r0 = (com.mbridge.msdk.nativex.view.MBMediaView.a[]) r0
                return r0
        }
    }

    private static final class b implements java.lang.Runnable {
        java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> a;

        public b(com.mbridge.msdk.nativex.view.MBMediaView r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                return
        }

        @Override
        public final void run() {
                r3 = this;
                java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> r0 = r3.a
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.nativex.view.MBMediaView r0 = (com.mbridge.msdk.nativex.view.MBMediaView) r0
                if (r0 == 0) goto L2e
                com.mbridge.msdk.nativex.view.MBMediaView$a r1 = com.mbridge.msdk.nativex.view.MBMediaView.l(r0)     // Catch: java.lang.Throwable -> L24
                if (r1 == 0) goto L2e
                com.mbridge.msdk.nativex.view.MBMediaView$a r1 = com.mbridge.msdk.nativex.view.MBMediaView.l(r0)     // Catch: java.lang.Throwable -> L24
                com.mbridge.msdk.nativex.view.MBMediaView$a r2 = com.mbridge.msdk.nativex.view.MBMediaView.a.a     // Catch: java.lang.Throwable -> L24
                if (r1 != r2) goto L2e
                com.mbridge.msdk.nativex.view.MBMediaView.M(r0)     // Catch: java.lang.Throwable -> L24
                com.mbridge.msdk.nativex.view.MBMediaView$a r1 = com.mbridge.msdk.nativex.view.MBMediaView.a.b     // Catch: java.lang.Throwable -> L24
                com.mbridge.msdk.nativex.view.MBMediaView.a(r0, r1)     // Catch: java.lang.Throwable -> L24
                r0.changeNoticeURL()     // Catch: java.lang.Throwable -> L24
                goto L2e
            L24:
                r0 = move-exception
                java.lang.String r1 = r0.getMessage()
                java.lang.String r2 = "MBMediaView"
                com.mbridge.msdk.foundation.tools.z.c(r2, r1, r0)
            L2e:
                return
        }
    }

    private static final class c implements com.mbridge.msdk.nativex.listener.a {
        java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> a;

        public c(com.mbridge.msdk.nativex.view.MBMediaView r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                return
        }

        @Override
        public final void a() {
                r1 = this;
                java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> r0 = r1.a
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.nativex.view.MBMediaView r0 = (com.mbridge.msdk.nativex.view.MBMediaView) r0
                if (r0 == 0) goto Ld
                com.mbridge.msdk.nativex.view.MBMediaView.N(r0)
            Ld:
                return
        }

        @Override
        public final void a(java.lang.String r2) {
                r1 = this;
                java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> r0 = r1.a
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.nativex.view.MBMediaView r0 = (com.mbridge.msdk.nativex.view.MBMediaView) r0
                if (r0 == 0) goto Ld
                r0.a(r2)
            Ld:
                return
        }

        @Override
        public final void b() {
                r1 = this;
                java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> r0 = r1.a
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.nativex.view.MBMediaView r0 = (com.mbridge.msdk.nativex.view.MBMediaView) r0
                if (r0 == 0) goto Ld
                com.mbridge.msdk.nativex.view.MBMediaView.O(r0)
            Ld:
                return
        }

        @Override
        public final void b(java.lang.String r2) {
                r1 = this;
                java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> r0 = r1.a
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.nativex.view.MBMediaView r0 = (com.mbridge.msdk.nativex.view.MBMediaView) r0
                if (r0 == 0) goto Ld
                r0.b(r2)
            Ld:
                return
        }

        @Override
        public final void c() {
                r1 = this;
                java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> r0 = r1.a
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.nativex.view.MBMediaView r0 = (com.mbridge.msdk.nativex.view.MBMediaView) r0
                if (r0 == 0) goto Ld
                com.mbridge.msdk.nativex.view.MBMediaView.P(r0)
            Ld:
                return
        }

        @Override
        public final void d() {
                r1 = this;
                java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> r0 = r1.a
                java.lang.Object r0 = r0.get()
                com.mbridge.msdk.nativex.view.MBMediaView r0 = (com.mbridge.msdk.nativex.view.MBMediaView) r0
                if (r0 == 0) goto Ld
                com.mbridge.msdk.nativex.view.MBMediaView.Q(r0)
            Ld:
                return
        }
    }

    private static final class d implements com.mbridge.msdk.mbjscommon.base.a {
        private d() {
                r0 = this;
                r0.<init>()
                return
        }

        d(com.mbridge.msdk.nativex.view.MBMediaView.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final boolean a(java.lang.String r5) {
                r4 = this;
                r0 = 0
                boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L2e
                if (r1 != 0) goto L38
                boolean r1 = com.mbridge.msdk.foundation.tools.ad.a.a(r5)     // Catch: java.lang.Exception -> L2e
                r2 = 1
                r3 = 0
                if (r1 == 0) goto L1b
                com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L2e
                android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L2e
                com.mbridge.msdk.foundation.tools.ad.a(r1, r5, r3)     // Catch: java.lang.Exception -> L2e
                return r2
            L1b:
                boolean r1 = android.webkit.URLUtil.isNetworkUrl(r5)     // Catch: java.lang.Exception -> L2e
                if (r1 == 0) goto L22
                return r0
            L22:
                com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L2e
                android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L2e
                com.mbridge.msdk.foundation.tools.ad.a(r1, r5, r3)     // Catch: java.lang.Exception -> L2e
                return r2
            L2e:
                r5 = move-exception
                java.lang.String r5 = r5.getMessage()
                java.lang.String r1 = "MBMediaView"
                com.mbridge.msdk.foundation.tools.z.d(r1, r5)
            L38:
                return r0
        }
    }

    private class e implements android.hardware.SensorEventListener {
        final com.mbridge.msdk.nativex.view.MBMediaView a;



        private e(com.mbridge.msdk.nativex.view.MBMediaView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        e(com.mbridge.msdk.nativex.view.MBMediaView r1, com.mbridge.msdk.nativex.view.MBMediaView.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onAccuracyChanged(android.hardware.Sensor r1, int r2) {
                r0 = this;
                return
        }

        @Override
        public final void onSensorChanged(android.hardware.SensorEvent r14) {
                r13 = this;
                java.lang.String r0 = "MBMediaView"
                com.mbridge.msdk.nativex.view.MBMediaView r1 = r13.a
                boolean r1 = com.mbridge.msdk.nativex.view.MBMediaView.C(r1)
                if (r1 == 0) goto Lb
                return
            Lb:
                float[] r14 = r14.values     // Catch: java.lang.Throwable -> Lcc
                r1 = 0
                r2 = r14[r1]     // Catch: java.lang.Throwable -> Lcc
                float r2 = -r2
                r3 = 1
                r4 = r14[r3]     // Catch: java.lang.Throwable -> Lcc
                float r4 = -r4
                r5 = 2
                r14 = r14[r5]     // Catch: java.lang.Throwable -> Lcc
                float r14 = -r14
                float r5 = r2 * r2
                float r6 = r4 * r4
                float r5 = r5 + r6
                r6 = 1082130432(0x40800000, float:4.0)
                float r5 = r5 * r6
                float r14 = r14 * r14
                int r14 = (r5 > r14 ? 1 : (r5 == r14 ? 0 : -1))
                r5 = -1
                r6 = 360(0x168, float:5.04E-43)
                if (r14 < 0) goto L45
                r14 = 1113927393(0x42652ee1, float:57.29578)
                float r4 = -r4
                double r7 = (double) r4     // Catch: java.lang.Throwable -> Lcc
                double r9 = (double) r2     // Catch: java.lang.Throwable -> Lcc
                double r7 = java.lang.Math.atan2(r7, r9)     // Catch: java.lang.Throwable -> Lcc
                float r2 = (float) r7     // Catch: java.lang.Throwable -> Lcc
                float r2 = r2 * r14
                int r14 = java.lang.Math.round(r2)     // Catch: java.lang.Throwable -> Lcc
                int r14 = 90 - r14
            L3b:
                if (r14 < r6) goto L40
                int r14 = r14 + (-360)
                goto L3b
            L40:
                if (r14 >= 0) goto L46
                int r14 = r14 + 360
                goto L40
            L45:
                r14 = r5
            L46:
                com.mbridge.msdk.nativex.view.MBMediaView r2 = r13.a     // Catch: java.lang.Throwable -> Lcc
                float r2 = com.mbridge.msdk.nativex.view.MBMediaView.D(r2)     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView r4 = r13.a     // Catch: java.lang.Throwable -> Lcc
                android.content.Context r4 = r4.getContext()     // Catch: java.lang.Throwable -> Lcc
                int r4 = com.mbridge.msdk.foundation.tools.ae.j(r4)     // Catch: java.lang.Throwable -> Lcc
                r7 = 200(0xc8, double:9.9E-322)
                r9 = 135(0x87, float:1.89E-43)
                r10 = 45
                if (r14 <= r10) goto L60
                if (r14 < r9) goto L68
            L60:
                r11 = 315(0x13b, float:4.41E-43)
                r12 = 225(0xe1, float:3.15E-43)
                if (r14 <= r12) goto L93
                if (r14 >= r11) goto L93
            L68:
                float r14 = (float) r4     // Catch: java.lang.Throwable -> Lcc
                int r14 = (r2 > r14 ? 1 : (r2 == r14 ? 0 : -1))
                if (r14 < 0) goto Ld4
                com.mbridge.msdk.nativex.view.MBMediaView r14 = r13.a     // Catch: java.lang.Throwable -> Lcc
                boolean r14 = com.mbridge.msdk.nativex.view.MBMediaView.E(r14)     // Catch: java.lang.Throwable -> Lcc
                if (r14 != 0) goto Ld4
                java.lang.String r14 = "onSensorChanged: to LandScape: --------------"
                com.mbridge.msdk.foundation.tools.z.b(r0, r14)     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView r14 = r13.a     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView.b(r14, r3)     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView r14 = r13.a     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView.c(r14, r3)     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView r14 = r13.a     // Catch: java.lang.Throwable -> Lcc
                android.os.Handler r14 = com.mbridge.msdk.nativex.view.MBMediaView.J(r14)     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView$e$1 r1 = new com.mbridge.msdk.nativex.view.MBMediaView$e$1     // Catch: java.lang.Throwable -> Lcc
                r1.<init>(r13)     // Catch: java.lang.Throwable -> Lcc
                r14.postDelayed(r1, r7)     // Catch: java.lang.Throwable -> Lcc
                goto Ld4
            L93:
                if (r14 <= r9) goto L97
                if (r14 < r12) goto La1
            L97:
                if (r14 <= r11) goto L9b
                if (r14 < r6) goto La1
            L9b:
                if (r14 < 0) goto L9f
                if (r14 <= r10) goto La1
            L9f:
                if (r14 != r5) goto Ld4
            La1:
                float r14 = (float) r4     // Catch: java.lang.Throwable -> Lcc
                int r14 = (r2 > r14 ? 1 : (r2 == r14 ? 0 : -1))
                if (r14 > 0) goto Ld4
                com.mbridge.msdk.nativex.view.MBMediaView r14 = r13.a     // Catch: java.lang.Throwable -> Lcc
                boolean r14 = com.mbridge.msdk.nativex.view.MBMediaView.E(r14)     // Catch: java.lang.Throwable -> Lcc
                if (r14 == 0) goto Ld4
                java.lang.String r14 = "onSensorChanged: to protrait: |||||||||||||||||"
                com.mbridge.msdk.foundation.tools.z.b(r0, r14)     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView r14 = r13.a     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView.b(r14, r1)     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView r14 = r13.a     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView.c(r14, r1)     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView r14 = r13.a     // Catch: java.lang.Throwable -> Lcc
                android.os.Handler r14 = com.mbridge.msdk.nativex.view.MBMediaView.J(r14)     // Catch: java.lang.Throwable -> Lcc
                com.mbridge.msdk.nativex.view.MBMediaView$e$2 r1 = new com.mbridge.msdk.nativex.view.MBMediaView$e$2     // Catch: java.lang.Throwable -> Lcc
                r1.<init>(r13)     // Catch: java.lang.Throwable -> Lcc
                r14.postDelayed(r1, r7)     // Catch: java.lang.Throwable -> Lcc
                goto Ld4
            Lcc:
                r14 = move-exception
                java.lang.String r1 = r14.getMessage()
                com.mbridge.msdk.foundation.tools.z.c(r0, r1, r14)
            Ld4:
                return
        }
    }

    private static final class f implements com.mbridge.msdk.videocommon.listener.a {
        java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> a;

        public f(com.mbridge.msdk.nativex.view.MBMediaView r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                return
        }

        @Override
        public final void a(java.lang.String r3) {
                r2 = this;
                java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> r3 = r2.a
                java.lang.Object r3 = r3.get()
                com.mbridge.msdk.nativex.view.MBMediaView r3 = (com.mbridge.msdk.nativex.view.MBMediaView) r3
                if (r3 == 0) goto L16
                android.os.Handler r0 = com.mbridge.msdk.nativex.view.MBMediaView.J(r3)
                com.mbridge.msdk.nativex.view.MBMediaView$b r1 = new com.mbridge.msdk.nativex.view.MBMediaView$b
                r1.<init>(r3)
                r0.post(r1)
            L16:
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }
    }

    private static final class g extends android.webkit.WebViewClient {
        java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> a;

        public g(com.mbridge.msdk.nativex.view.MBMediaView r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                return
        }

        @Override
        public final void onPageFinished(android.webkit.WebView r2, java.lang.String r3) {
                r1 = this;
                super.onPageFinished(r2, r3)
                java.lang.ref.WeakReference<com.mbridge.msdk.nativex.view.MBMediaView> r2 = r1.a     // Catch: java.lang.Exception -> L27
                java.lang.Object r2 = r2.get()     // Catch: java.lang.Exception -> L27
                com.mbridge.msdk.nativex.view.MBMediaView r2 = (com.mbridge.msdk.nativex.view.MBMediaView) r2     // Catch: java.lang.Exception -> L27
                if (r2 == 0) goto L31
                com.mbridge.msdk.nativex.view.MBMediaView$a r3 = com.mbridge.msdk.nativex.view.MBMediaView.l(r2)     // Catch: java.lang.Exception -> L27
                if (r3 == 0) goto L31
                com.mbridge.msdk.nativex.view.MBMediaView$a r3 = com.mbridge.msdk.nativex.view.MBMediaView.l(r2)     // Catch: java.lang.Exception -> L27
                com.mbridge.msdk.nativex.view.MBMediaView$a r0 = com.mbridge.msdk.nativex.view.MBMediaView.a.a     // Catch: java.lang.Exception -> L27
                if (r3 != r0) goto L31
                com.mbridge.msdk.nativex.view.MBMediaView.L(r2)     // Catch: java.lang.Exception -> L27
                com.mbridge.msdk.nativex.view.MBMediaView$a r3 = com.mbridge.msdk.nativex.view.MBMediaView.a.c     // Catch: java.lang.Exception -> L27
                com.mbridge.msdk.nativex.view.MBMediaView.a(r2, r3)     // Catch: java.lang.Exception -> L27
                r2.changeNoticeURL()     // Catch: java.lang.Exception -> L27
                goto L31
            L27:
                r2 = move-exception
                java.lang.String r2 = r2.getMessage()
                java.lang.String r3 = "MBMediaView"
                com.mbridge.msdk.foundation.tools.z.d(r3, r2)
            L31:
                return
        }
    }

    static {
            return
    }

    public MBMediaView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r0 = 1
            r2.a = r0
            r2.b = r0
            r2.c = r0
            r2.d = r0
            r2.e = r0
            r1 = 0
            r2.f = r1
            r2.g = r0
            r2.h = r1
            r2.i = r1
            r2.j = r1
            r2.k = r0
            r2.l = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.m = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.n = r0
            r2.q = r1
            r2.r = r1
            r0 = 0
            r2.s = r0
            r2.t = r0
            r2.u = r0
            r2.v = r1
            r2.aa = r0
            r2.ab = r0
            r2.af = r1
            r2.ag = r1
            r2.ak = r1
            r2.am = r1
            com.mbridge.msdk.nativex.view.MBMediaView$10 r0 = new com.mbridge.msdk.nativex.view.MBMediaView$10
            r0.<init>(r2)
            r2.an = r0
            r2.a(r3)
            return
    }

    public MBMediaView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            r3 = 1
            r1.a = r3
            r1.b = r3
            r1.c = r3
            r1.d = r3
            r1.e = r3
            r0 = 0
            r1.f = r0
            r1.g = r3
            r1.h = r0
            r1.i = r0
            r1.j = r0
            r1.k = r3
            r1.l = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r1.m = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r1.n = r3
            r1.q = r0
            r1.r = r0
            r3 = 0
            r1.s = r3
            r1.t = r3
            r1.u = r3
            r1.v = r0
            r1.aa = r3
            r1.ab = r3
            r1.af = r0
            r1.ag = r0
            r1.ak = r0
            r1.am = r0
            com.mbridge.msdk.nativex.view.MBMediaView$10 r3 = new com.mbridge.msdk.nativex.view.MBMediaView$10
            r3.<init>(r1)
            r1.an = r3
            r1.a(r2)
            return
    }

    private void A() {
            r8 = this;
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N     // Catch: java.lang.Throwable -> L5c
            if (r1 == 0) goto L56
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N     // Catch: java.lang.Throwable -> L5c
            java.lang.String r1 = r1.getVideoResolution()     // Catch: java.lang.Throwable -> L5c
            boolean r1 = com.mbridge.msdk.foundation.tools.ai.a(r1)     // Catch: java.lang.Throwable -> L5c
            if (r1 == 0) goto L13
            goto L56
        L13:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N     // Catch: java.lang.Throwable -> L5c
            java.lang.String r1 = r1.getVideoResolution()     // Catch: java.lang.Throwable -> L5c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5c
            r2.<init>()     // Catch: java.lang.Throwable -> L5c
            java.lang.String r3 = "videoResolution:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L5c
            r2.append(r1)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L5c
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r2 = "x"
            java.lang.String[] r1 = r1.split(r2)     // Catch: java.lang.Throwable -> L5c
            if (r1 == 0) goto L64
            int r2 = r1.length     // Catch: java.lang.Throwable -> L5c
            r3 = 2
            if (r2 != r3) goto L64
            r2 = 0
            r2 = r1[r2]     // Catch: java.lang.Throwable -> L5c
            r3 = 1
            r1 = r1[r3]     // Catch: java.lang.Throwable -> L5c
            double r2 = com.mbridge.msdk.foundation.tools.ae.b(r2)     // Catch: java.lang.Throwable -> L5c
            double r4 = com.mbridge.msdk.foundation.tools.ae.b(r1)     // Catch: java.lang.Throwable -> L5c
            r6 = 0
            int r1 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r1 <= 0) goto L64
            int r1 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r1 <= 0) goto L64
            r8.Q = r2     // Catch: java.lang.Throwable -> L5c
            r8.R = r4     // Catch: java.lang.Throwable -> L5c
            goto L64
        L56:
            java.lang.String r1 = "campaign is null initVideoWH return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L5c
            return
        L5c:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L64:
            return
    }

    static void A(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            r0.x()
            return
    }

    private float B() {
            r2 = this;
            android.content.Context r0 = r2.getContext()     // Catch: java.lang.Throwable -> L18
            int r0 = com.mbridge.msdk.foundation.tools.ae.i(r0)     // Catch: java.lang.Throwable -> L18
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L18
            boolean r1 = r2.i     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L17
            android.content.Context r1 = r2.getContext()     // Catch: java.lang.Throwable -> L18
            int r1 = com.mbridge.msdk.foundation.tools.ae.k(r1)     // Catch: java.lang.Throwable -> L18
            float r1 = (float) r1
            float r0 = r0 + r1
        L17:
            return r0
        L18:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            r0 = 0
            return r0
    }

    static android.widget.TextView B(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            android.widget.TextView r0 = r0.I
            return r0
    }

    private float C() {
            r2 = this;
            android.content.Context r0 = r2.getContext()     // Catch: java.lang.Throwable -> L18
            int r0 = com.mbridge.msdk.foundation.tools.ae.j(r0)     // Catch: java.lang.Throwable -> L18
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L18
            boolean r1 = r2.i     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L17
            android.content.Context r1 = r2.getContext()     // Catch: java.lang.Throwable -> L18
            int r1 = com.mbridge.msdk.foundation.tools.ae.k(r1)     // Catch: java.lang.Throwable -> L18
            float r1 = (float) r1
            float r0 = r0 + r1
        L17:
            return r0
        L18:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            r0 = 0
            return r0
    }

    static boolean C(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            boolean r0 = r0.ak
            return r0
    }

    static float D(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            float r0 = r0.B()
            return r0
    }

    private void D() {
            r4 = this;
            android.widget.RelativeLayout r0 = r4.H     // Catch: java.lang.Throwable -> L56
            if (r0 != 0) goto L8
            android.widget.ImageView r0 = r4.ai     // Catch: java.lang.Throwable -> L56
            if (r0 == 0) goto L60
        L8:
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L56
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> L56
            r2 = 1106247680(0x41f00000, float:30.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)     // Catch: java.lang.Throwable -> L56
            android.content.Context r3 = r4.getContext()     // Catch: java.lang.Throwable -> L56
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r3, r2)     // Catch: java.lang.Throwable -> L56
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L56
            r1 = 11
            r0.addRule(r1)     // Catch: java.lang.Throwable -> L56
            r1 = 10
            r0.addRule(r1)     // Catch: java.lang.Throwable -> L56
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> L56
            r2 = 1090519040(0x41000000, float:8.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)     // Catch: java.lang.Throwable -> L56
            r0.topMargin = r1     // Catch: java.lang.Throwable -> L56
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> L56
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)     // Catch: java.lang.Throwable -> L56
            r0.rightMargin = r1     // Catch: java.lang.Throwable -> L56
            android.widget.RelativeLayout r1 = r4.H     // Catch: java.lang.Throwable -> L56
            if (r1 == 0) goto L48
            android.widget.RelativeLayout r1 = r4.H     // Catch: java.lang.Throwable -> L56
            r1.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L56
        L48:
            android.widget.ImageView r1 = r4.ai     // Catch: java.lang.Throwable -> L56
            if (r1 == 0) goto L51
            android.widget.ImageView r1 = r4.ai     // Catch: java.lang.Throwable -> L56
            r1.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L56
        L51:
            r0 = 0
            r4.updateViewManger(r0)     // Catch: java.lang.Throwable -> L56
            goto L60
        L56:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L60:
            return
    }

    private void E() {
            r4 = this;
            android.widget.RelativeLayout r0 = r4.H     // Catch: java.lang.Throwable -> L78
            if (r0 != 0) goto L8
            android.widget.ImageView r0 = r4.ai     // Catch: java.lang.Throwable -> L78
            if (r0 == 0) goto L82
        L8:
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L78
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> L78
            r2 = 1106247680(0x41f00000, float:30.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)     // Catch: java.lang.Throwable -> L78
            android.content.Context r3 = r4.getContext()     // Catch: java.lang.Throwable -> L78
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r3, r2)     // Catch: java.lang.Throwable -> L78
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L78
            r1 = 11
            r0.addRule(r1)     // Catch: java.lang.Throwable -> L78
            r1 = 10
            r0.addRule(r1)     // Catch: java.lang.Throwable -> L78
            int r1 = r4.ae     // Catch: java.lang.Throwable -> L78
            r2 = 1090519040(0x41000000, float:8.0)
            if (r1 != 0) goto L4d
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> L78
            boolean r1 = com.mbridge.msdk.foundation.tools.ae.a(r1)     // Catch: java.lang.Throwable -> L78
            if (r1 == 0) goto L4d
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> L78
            int r1 = com.mbridge.msdk.foundation.tools.ae.k(r1)     // Catch: java.lang.Throwable -> L78
            android.content.Context r3 = r4.getContext()     // Catch: java.lang.Throwable -> L78
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r3, r2)     // Catch: java.lang.Throwable -> L78
            int r1 = r1 + r3
            r0.rightMargin = r1     // Catch: java.lang.Throwable -> L78
            goto L57
        L4d:
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> L78
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)     // Catch: java.lang.Throwable -> L78
            r0.rightMargin = r1     // Catch: java.lang.Throwable -> L78
        L57:
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> L78
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)     // Catch: java.lang.Throwable -> L78
            r0.topMargin = r1     // Catch: java.lang.Throwable -> L78
            android.widget.RelativeLayout r1 = r4.H     // Catch: java.lang.Throwable -> L78
            if (r1 == 0) goto L6a
            android.widget.RelativeLayout r1 = r4.H     // Catch: java.lang.Throwable -> L78
            r1.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L78
        L6a:
            android.widget.ImageView r1 = r4.ai     // Catch: java.lang.Throwable -> L78
            if (r1 == 0) goto L73
            android.widget.ImageView r1 = r4.ai     // Catch: java.lang.Throwable -> L78
            r1.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L78
        L73:
            r0 = 1
            r4.updateViewManger(r0)     // Catch: java.lang.Throwable -> L78
            goto L82
        L78:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L82:
            return
    }

    static boolean E(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            boolean r0 = r0.j
            return r0
    }

    private void F() {
            r7 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.N
            boolean r0 = r0.isReportClick()
            if (r0 != 0) goto L3d
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.N
            r1 = 1
            r0.setReportClick(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.N
            if (r0 == 0) goto L3d
            com.mbridge.msdk.foundation.entity.l r0 = r0.getNativeVideoTracking()
            if (r0 == 0) goto L3d
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.N
            com.mbridge.msdk.foundation.entity.l r0 = r0.getNativeVideoTracking()
            java.lang.String[] r0 = r0.h()
            if (r0 == 0) goto L3d
            android.content.Context r1 = r7.getContext()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.N
            java.lang.String r3 = r2.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.N
            com.mbridge.msdk.foundation.entity.l r0 = r0.getNativeVideoTracking()
            java.lang.String[] r4 = r0.h()
            r5 = 0
            r6 = 0
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L3d:
            return
    }

    static void F(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            r0.E()
            return
    }

    private void G() {
            r12 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.N     // Catch: java.lang.Exception -> L53
            if (r0 == 0) goto L5d
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.N     // Catch: java.lang.Exception -> L53
            com.mbridge.msdk.foundation.entity.l r0 = r0.getNativeVideoTracking()     // Catch: java.lang.Exception -> L53
            if (r0 == 0) goto L5d
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r12.N     // Catch: java.lang.Exception -> L53
            com.mbridge.msdk.foundation.entity.l r0 = r0.getNativeVideoTracking()     // Catch: java.lang.Exception -> L53
            java.lang.String[] r0 = r0.d()     // Catch: java.lang.Exception -> L53
            boolean r1 = r12.i     // Catch: java.lang.Exception -> L53
            if (r1 == 0) goto L1d
            int r1 = com.mbridge.msdk.nativex.view.MBMediaView.o     // Catch: java.lang.Exception -> L53
            goto L1f
        L1d:
            int r1 = com.mbridge.msdk.nativex.view.MBMediaView.p     // Catch: java.lang.Exception -> L53
        L1f:
            int r2 = r0.length     // Catch: java.lang.Exception -> L53
            r3 = 0
        L21:
            if (r3 >= r2) goto L5d
            r4 = r0[r3]     // Catch: java.lang.Exception -> L53
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L53
            if (r5 != 0) goto L50
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L53
            r5.<init>()     // Catch: java.lang.Exception -> L53
            r5.append(r4)     // Catch: java.lang.Exception -> L53
            java.lang.String r4 = "&orienation="
            r5.append(r4)     // Catch: java.lang.Exception -> L53
            r5.append(r1)     // Catch: java.lang.Exception -> L53
            java.lang.String r9 = r5.toString()     // Catch: java.lang.Exception -> L53
            android.content.Context r6 = r12.getContext()     // Catch: java.lang.Exception -> L53
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r12.N     // Catch: java.lang.Exception -> L53
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r12.N     // Catch: java.lang.Exception -> L53
            java.lang.String r8 = r4.getCampaignUnitId()     // Catch: java.lang.Exception -> L53
            r10 = 0
            r11 = 0
            com.mbridge.msdk.click.b.a(r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L53
        L50:
            int r3 = r3 + 1
            goto L21
        L53:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L5d:
            return
    }

    static void G(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            r0.h()
            return
    }

    private com.mbridge.msdk.nativex.view.WindVaneWebViewForNV H() {
            r3 = this;
            java.lang.String r0 = "MBMediaView"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L36
            r1.<init>()     // Catch: java.lang.Exception -> L36
            java.lang.String r2 = "getEndCardWebview hadStarLoad:"
            r1.append(r2)     // Catch: java.lang.Exception -> L36
            boolean r2 = r3.ag     // Catch: java.lang.Exception -> L36
            r1.append(r2)     // Catch: java.lang.Exception -> L36
            java.lang.String r2 = "-endCardWebview:"
            r1.append(r2)     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r2 = r3.B     // Catch: java.lang.Exception -> L36
            r1.append(r2)     // Catch: java.lang.Exception -> L36
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r1 = r3.B     // Catch: java.lang.Exception -> L36
            if (r1 == 0) goto L2d
            boolean r1 = r3.ag     // Catch: java.lang.Exception -> L36
            if (r1 == 0) goto L2d
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r0 = r3.B     // Catch: java.lang.Exception -> L36
            return r0
        L2d:
            boolean r1 = r3.ag     // Catch: java.lang.Exception -> L36
            if (r1 != 0) goto L3e
            r1 = 1
            r3.b(r1)     // Catch: java.lang.Exception -> L36
            goto L3e
        L36:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L3e:
            r0 = 0
            return r0
    }

    static void H(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            r0.f()
            return
    }

    static void I(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            r0.g()
            return
    }

    static android.os.Handler J(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            android.os.Handler r0 = r0.M
            return r0
    }

    static void K(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            r0.D()
            return
    }

    static void L(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            r0.m()
            return
    }

    static void M(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            r0.e()
            return
    }

    static void N(com.mbridge.msdk.nativex.view.MBMediaView r8) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            if (r0 == 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx$b r0 = r0.getMediaViewHolder()
            if (r0 == 0) goto L3e
            boolean r1 = r0.b
            if (r1 != 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N
            com.mbridge.msdk.foundation.entity.l r1 = r1.getNativeVideoTracking()
            if (r1 == 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N
            com.mbridge.msdk.foundation.entity.l r1 = r1.getNativeVideoTracking()
            java.lang.String[] r1 = r1.f()
            if (r1 == 0) goto L3e
            r1 = 1
            r0.b = r1
            android.content.Context r2 = r8.getContext()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.N
            java.lang.String r4 = r3.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r8.N
            com.mbridge.msdk.foundation.entity.l r8 = r8.getNativeVideoTracking()
            java.lang.String[] r5 = r8.f()
            r6 = 0
            r7 = 0
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)
        L3e:
            return
    }

    static void O(com.mbridge.msdk.nativex.view.MBMediaView r8) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            if (r0 == 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx$b r0 = r0.getMediaViewHolder()
            if (r0 == 0) goto L3e
            boolean r1 = r0.c
            if (r1 != 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N
            com.mbridge.msdk.foundation.entity.l r1 = r1.getNativeVideoTracking()
            if (r1 == 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N
            com.mbridge.msdk.foundation.entity.l r1 = r1.getNativeVideoTracking()
            java.lang.String[] r1 = r1.g()
            if (r1 == 0) goto L3e
            r1 = 1
            r0.c = r1
            android.content.Context r2 = r8.getContext()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.N
            java.lang.String r4 = r3.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r8.N
            com.mbridge.msdk.foundation.entity.l r8 = r8.getNativeVideoTracking()
            java.lang.String[] r5 = r8.g()
            r6 = 0
            r7 = 0
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)
        L3e:
            return
    }

    static void P(com.mbridge.msdk.nativex.view.MBMediaView r8) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            if (r0 == 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx$b r0 = r0.getMediaViewHolder()
            if (r0 == 0) goto L3e
            boolean r1 = r0.e
            if (r1 != 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N
            com.mbridge.msdk.foundation.entity.l r1 = r1.getNativeVideoTracking()
            if (r1 == 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N
            com.mbridge.msdk.foundation.entity.l r1 = r1.getNativeVideoTracking()
            java.lang.String[] r1 = r1.i()
            if (r1 == 0) goto L3e
            r1 = 1
            r0.e = r1
            android.content.Context r2 = r8.getContext()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.N
            java.lang.String r4 = r3.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r8.N
            com.mbridge.msdk.foundation.entity.l r8 = r8.getNativeVideoTracking()
            java.lang.String[] r5 = r8.i()
            r6 = 0
            r7 = 0
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)
        L3e:
            return
    }

    static void Q(com.mbridge.msdk.nativex.view.MBMediaView r8) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            if (r0 == 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx$b r0 = r0.getMediaViewHolder()
            if (r0 == 0) goto L3e
            boolean r1 = r0.f
            if (r1 != 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N
            com.mbridge.msdk.foundation.entity.l r1 = r1.getNativeVideoTracking()
            if (r1 == 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N
            com.mbridge.msdk.foundation.entity.l r1 = r1.getNativeVideoTracking()
            java.lang.String[] r1 = r1.j()
            if (r1 == 0) goto L3e
            r1 = 1
            r0.f = r1
            android.content.Context r2 = r8.getContext()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.N
            java.lang.String r4 = r3.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r8.N
            com.mbridge.msdk.foundation.entity.l r8 = r8.getNativeVideoTracking()
            java.lang.String[] r5 = r8.j()
            r6 = 0
            r7 = 0
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)
        L3e:
            return
    }

    static int R(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            int r0 = r0.aj
            return r0
    }

    static void S(com.mbridge.msdk.nativex.view.MBMediaView r2) {
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r2.w     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L36
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r2.w     // Catch: java.lang.Throwable -> L2e
            boolean r1 = r1.hasPrepare()     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L36
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r2.w     // Catch: java.lang.Throwable -> L2e
            boolean r1 = r1.isPlaying()     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L36
            java.lang.String r1 = "isPlaying pasue======"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L2e
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r2.w     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L36
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r2.w     // Catch: java.lang.Throwable -> L25
            r2.pause()     // Catch: java.lang.Throwable -> L25
            goto L36
        L25:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L2e
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Throwable -> L2e
            goto L36
        L2e:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L36:
            return
    }

    static void T(com.mbridge.msdk.nativex.view.MBMediaView r1) {
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.w     // Catch: java.lang.Throwable -> L2e
            if (r0 != 0) goto L5
            goto L38
        L5:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.w     // Catch: java.lang.Throwable -> L2e
            boolean r0 = r0.hasPrepare()     // Catch: java.lang.Throwable -> L2e
            if (r0 != 0) goto Le
            goto L38
        Le:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.w     // Catch: java.lang.Throwable -> L2e
            boolean r0 = r0.isPlaying()     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L17
            goto L38
        L17:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.w     // Catch: java.lang.Throwable -> L2e
            boolean r0 = r0.isComplete()     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L20
            goto L38
        L20:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.w     // Catch: java.lang.Throwable -> L2e
            boolean r0 = r0.hasPrepare()     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L38
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r1.w     // Catch: java.lang.Throwable -> L2e
            r1.startOrPlayVideo()     // Catch: java.lang.Throwable -> L2e
            goto L38
        L2e:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L38:
            return
    }

    static int a(com.mbridge.msdk.nativex.view.MBMediaView r0, int r1) {
            r0.S = r1
            return r1
    }

    static com.mbridge.msdk.nativex.view.MBMediaView.a a(com.mbridge.msdk.nativex.view.MBMediaView r0, com.mbridge.msdk.nativex.view.MBMediaView.a r1) {
            r0.ab = r1
            return r1
    }

    private com.mbridge.msdk.nativex.view.MBMediaView.a a(boolean r5) {
            r4 = this;
            java.lang.String r0 = "MBMediaView"
            r1 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.N     // Catch: java.lang.Throwable -> L134
            if (r2 == 0) goto L133
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L134
            r2.<init>()     // Catch: java.lang.Throwable -> L134
            java.lang.String r3 = "initCurDisplayMode appname:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r4.N     // Catch: java.lang.Throwable -> L134
            java.lang.String r3 = r3.getAppName()     // Catch: java.lang.Throwable -> L134
            r2.append(r3)     // Catch: java.lang.Throwable -> L134
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.N     // Catch: java.lang.Throwable -> L134
            java.lang.String r2 = r2.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L134
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.a(r2)     // Catch: java.lang.Throwable -> L134
            if (r2 == 0) goto L74
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.N     // Catch: java.lang.Throwable -> L134
            java.lang.String r5 = r5.getImageUrl()     // Catch: java.lang.Throwable -> L134
            boolean r5 = com.mbridge.msdk.foundation.tools.ai.b(r5)     // Catch: java.lang.Throwable -> L134
            if (r5 == 0) goto L40
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = com.mbridge.msdk.nativex.view.MBMediaView.a.a     // Catch: java.lang.Throwable -> L134
            java.lang.String r5 = "没有视频 只有大图 显示大图"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L134
        L40:
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.N     // Catch: java.lang.Throwable -> L134
            java.lang.String r5 = r5.getGifUrl()     // Catch: java.lang.Throwable -> L134
            boolean r5 = com.mbridge.msdk.foundation.tools.ai.b(r5)     // Catch: java.lang.Throwable -> L134
            if (r5 == 0) goto L133
            java.lang.String r5 = "没有视频 有gif图 显示gif图"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.N     // Catch: java.lang.Throwable -> L134
            java.lang.String r5 = r5.getImageUrl()     // Catch: java.lang.Throwable -> L134
            boolean r5 = com.mbridge.msdk.foundation.tools.ai.a(r5)     // Catch: java.lang.Throwable -> L134
            if (r5 == 0) goto L65
            java.lang.String r5 = "没有视频 没有大图 有gif图 显示gif图"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.nativex.view.MBMediaView$a r5 = com.mbridge.msdk.nativex.view.MBMediaView.a.c     // Catch: java.lang.Throwable -> L134
            r1 = r5
        L65:
            com.mbridge.msdk.nativex.view.MBMediaView$g r5 = new com.mbridge.msdk.nativex.view.MBMediaView$g     // Catch: java.lang.Throwable -> L134
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r2 = r4.A     // Catch: java.lang.Throwable -> L134
            r2.setWebViewClient(r5)     // Catch: java.lang.Throwable -> L134
            r4.o()     // Catch: java.lang.Throwable -> L134
            goto L133
        L74:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L134
            r3 = 14
            if (r2 < r3) goto L10c
            boolean r2 = r4.g     // Catch: java.lang.Throwable -> L134
            if (r2 == 0) goto L10c
            com.mbridge.msdk.videocommon.download.a r2 = r4.aa     // Catch: java.lang.Throwable -> L134
            if (r2 == 0) goto L10c
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.N     // Catch: java.lang.Throwable -> L134
            java.lang.String r2 = r2.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L134
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.b(r2)     // Catch: java.lang.Throwable -> L134
            if (r2 == 0) goto La3
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.N     // Catch: java.lang.Throwable -> L134
            java.lang.String r2 = r2.getImageUrl()     // Catch: java.lang.Throwable -> L134
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.a(r2)     // Catch: java.lang.Throwable -> L134
            if (r2 == 0) goto La3
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = com.mbridge.msdk.nativex.view.MBMediaView.a.b     // Catch: java.lang.Throwable -> L134
            java.lang.String r5 = "只有视频 没有大图 显示视频"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L134
            goto L133
        La3:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.N     // Catch: java.lang.Throwable -> L134
            java.lang.String r2 = r2.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L134
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.b(r2)     // Catch: java.lang.Throwable -> L134
            if (r2 == 0) goto L133
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.N     // Catch: java.lang.Throwable -> L134
            java.lang.String r2 = r2.getImageUrl()     // Catch: java.lang.Throwable -> L134
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.b(r2)     // Catch: java.lang.Throwable -> L134
            if (r2 == 0) goto L133
            java.lang.String r1 = "有视频 又有大图 进入判断逻辑"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L134
            int r1 = r4.t()     // Catch: java.lang.Throwable -> L134
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L134
            r2.<init>()     // Catch: java.lang.Throwable -> L134
            java.lang.String r3 = "readyRate:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L134
            r2.append(r1)     // Catch: java.lang.Throwable -> L134
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.videocommon.download.a r2 = r4.aa     // Catch: java.lang.Throwable -> L134
            boolean r1 = com.mbridge.msdk.videocommon.download.d.a(r2, r1)     // Catch: java.lang.Throwable -> L134
            if (r1 == 0) goto Le9
            com.mbridge.msdk.nativex.view.MBMediaView$a r5 = com.mbridge.msdk.nativex.view.MBMediaView.a.b     // Catch: java.lang.Throwable -> L134
            java.lang.String r1 = "满足readyrate 显示视频"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L134
            r1 = r5
            goto L133
        Le9:
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = com.mbridge.msdk.nativex.view.MBMediaView.a.a     // Catch: java.lang.Throwable -> L134
            java.lang.String r2 = "没有满足readyrate 暂时显示大图 判断是否监听下载"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L134
            if (r5 == 0) goto L133
            boolean r5 = r4.a     // Catch: java.lang.Throwable -> L134
            if (r5 == 0) goto L106
            java.lang.String r5 = "可以监听下载 下载满足readyrate之后 显示大图"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.nativex.view.MBMediaView$f r5 = new com.mbridge.msdk.nativex.view.MBMediaView$f     // Catch: java.lang.Throwable -> L134
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.videocommon.download.a r2 = r4.aa     // Catch: java.lang.Throwable -> L134
            r2.b(r5)     // Catch: java.lang.Throwable -> L134
            goto L133
        L106:
            java.lang.String r5 = "开发者禁止监听下载 一直显示大图"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Throwable -> L134
            goto L133
        L10c:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L134
            r5.<init>()     // Catch: java.lang.Throwable -> L134
            java.lang.String r1 = "版本小于4.0或者没有开启硬件加速 显示大图 isHard:"
            r5.append(r1)     // Catch: java.lang.Throwable -> L134
            boolean r1 = r4.g     // Catch: java.lang.Throwable -> L134
            r5.append(r1)     // Catch: java.lang.Throwable -> L134
            java.lang.String r1 = " downloadtask:"
            r5.append(r1)     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.videocommon.download.a r1 = r4.aa     // Catch: java.lang.Throwable -> L134
            if (r1 == 0) goto L126
            r1 = 1
            goto L127
        L126:
            r1 = 0
        L127:
            r5.append(r1)     // Catch: java.lang.Throwable -> L134
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Throwable -> L134
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = com.mbridge.msdk.nativex.view.MBMediaView.a.a     // Catch: java.lang.Throwable -> L134
        L133:
            return r1
        L134:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            java.lang.String r5 = "默认显示大图"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)
            com.mbridge.msdk.nativex.view.MBMediaView$a r5 = com.mbridge.msdk.nativex.view.MBMediaView.a.a
            return r5
    }

    private java.lang.String a(int r4) {
            r3 = this;
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L21
            r1.<init>()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = "code"
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L21
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L21
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L21
            if (r1 != 0) goto L28
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> L21
            r1 = 2
            java.lang.String r4 = android.util.Base64.encodeToString(r4, r1)     // Catch: java.lang.Throwable -> L21
            r0 = r4
            goto L28
        L21:
            java.lang.String r4 = "MBMediaView"
            java.lang.String r1 = "code to string is error"
            com.mbridge.msdk.foundation.tools.z.d(r4, r1)
        L28:
            return r0
    }

    private java.lang.String a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L31
            int r1 = r4.size()     // Catch: java.lang.Exception -> L27
            if (r1 <= 0) goto L31
            org.json.JSONArray r4 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCamplistToJson(r4)     // Catch: java.lang.Exception -> L27
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L27
            r1.<init>()     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = "campaignList"
            r1.put(r2, r4)     // Catch: java.lang.Exception -> L27
            java.lang.String r4 = "unit_id"
            r1.put(r4, r5)     // Catch: java.lang.Exception -> L27
            java.lang.String r4 = "sdk_info"
            r1.put(r4, r6)     // Catch: java.lang.Exception -> L27
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L27
            r0 = r4
            goto L31
        L27:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r5 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        L31:
            return r0
    }

    private void a() {
            r2 = this;
            com.mbridge.msdk.videocommon.download.a r0 = r2.aa
            if (r0 == 0) goto L8
            r1 = 0
            r0.b(r1)
        L8:
            return
    }

    private void a(int r14, int r15) {
            r13 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r13.N     // Catch: java.lang.Throwable -> L8e
            if (r0 == 0) goto L95
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r13.N     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.foundation.entity.CampaignEx$b r0 = r0.getMediaViewHolder()     // Catch: java.lang.Throwable -> L8e
            if (r0 == 0) goto L95
            boolean r1 = r0.i     // Catch: java.lang.Throwable -> L8e
            if (r1 != 0) goto L95
            if (r15 == 0) goto L95
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r13.N     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.foundation.entity.l r1 = r1.getNativeVideoTracking()     // Catch: java.lang.Throwable -> L8e
            java.util.List r1 = r1.e()     // Catch: java.lang.Throwable -> L8e
            r2 = 1
            int r14 = r14 + r2
            int r14 = r14 * 100
            int r14 = r14 / r15
            if (r1 == 0) goto L95
            r15 = 0
            r3 = r15
        L25:
            int r4 = r1.size()     // Catch: java.lang.Throwable -> L8e
            if (r3 >= r4) goto L85
            java.lang.Object r4 = r1.get(r3)     // Catch: java.lang.Throwable -> L8e
            java.util.Map r4 = (java.util.Map) r4     // Catch: java.lang.Throwable -> L8e
            if (r4 == 0) goto L83
            int r5 = r4.size()     // Catch: java.lang.Throwable -> L8e
            if (r5 <= 0) goto L83
            java.util.Set r4 = r4.entrySet()     // Catch: java.lang.Throwable -> L8e
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L8e
        L41:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L8e
            if (r5 == 0) goto L83
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L8e
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5     // Catch: java.lang.Throwable -> L8e
            java.lang.Object r6 = r5.getKey()     // Catch: java.lang.Throwable -> L8e
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Throwable -> L8e
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> L8e
            java.lang.Object r5 = r5.getValue()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L8e
            if (r6 > r14) goto L41
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L8e
            if (r6 != 0) goto L41
            java.lang.String[] r10 = new java.lang.String[r2]     // Catch: java.lang.Throwable -> L8e
            r10[r15] = r5     // Catch: java.lang.Throwable -> L8e
            r11 = 0
            r12 = 1
            android.content.Context r7 = r13.getContext()     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r13.N     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r13.N     // Catch: java.lang.Throwable -> L8e
            java.lang.String r9 = r5.getCampaignUnitId()     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.click.b.a(r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L8e
            r4.remove()     // Catch: java.lang.Throwable -> L8e
            r1.remove(r3)     // Catch: java.lang.Throwable -> L8e
            int r3 = r3 + (-1)
            goto L41
        L83:
            int r3 = r3 + r2
            goto L25
        L85:
            int r14 = r1.size()     // Catch: java.lang.Throwable -> L8e
            if (r14 > 0) goto L95
            r0.i = r2     // Catch: java.lang.Throwable -> L8e
            goto L95
        L8e:
            java.lang.String r14 = "MBMediaView"
            java.lang.String r15 = "reportPlayPercentageData error"
            com.mbridge.msdk.foundation.tools.z.d(r14, r15)
        L95:
            return
    }

    private void a(android.content.Context r2) {
            r1 = this;
            r1.c()     // Catch: java.lang.Throwable -> L9
            r1.b()     // Catch: java.lang.Throwable -> L9
            r1.al = r2     // Catch: java.lang.Throwable -> L9
            goto L13
        L9:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L13:
            return
    }

    private void a(android.view.View r17, float r18, float r19) {
            r16 = this;
            r1 = r16
            r0 = r17
            r2 = r18
            r3 = r19
            java.lang.String r4 = "MBMediaView"
            if (r0 != 0) goto L12
            java.lang.String r0 = "setPlayViewParamsByVidoWH view is null"
            com.mbridge.msdk.foundation.tools.z.b(r4, r0)     // Catch: java.lang.Throwable -> L133
            return
        L12:
            double r5 = r1.Q     // Catch: java.lang.Throwable -> L133
            r7 = 0
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 <= 0) goto L12f
            double r5 = r1.R     // Catch: java.lang.Throwable -> L133
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 > 0) goto L22
            goto L12f
        L22:
            double r5 = r1.Q     // Catch: java.lang.Throwable -> L133
            double r9 = r1.R     // Catch: java.lang.Throwable -> L133
            double r5 = r5 / r9
            r9 = 0
            int r10 = (r2 > r9 ? 1 : (r2 == r9 ? 0 : -1))
            if (r10 <= 0) goto L33
            int r9 = (r3 > r9 ? 1 : (r3 == r9 ? 0 : -1))
            if (r9 <= 0) goto L33
            float r7 = r2 / r3
            double r7 = (double) r7     // Catch: java.lang.Throwable -> L133
        L33:
            java.lang.Double r9 = java.lang.Double.valueOf(r5)     // Catch: java.lang.Throwable -> L133
            double r9 = com.mbridge.msdk.foundation.tools.ae.a(r9)     // Catch: java.lang.Throwable -> L133
            java.lang.Double r7 = java.lang.Double.valueOf(r7)     // Catch: java.lang.Throwable -> L133
            double r7 = com.mbridge.msdk.foundation.tools.ae.a(r7)     // Catch: java.lang.Throwable -> L133
            android.widget.RelativeLayout r11 = r1.x     // Catch: java.lang.Throwable -> L133
            android.view.ViewGroup$LayoutParams r11 = r11.getLayoutParams()     // Catch: java.lang.Throwable -> L133
            android.widget.RelativeLayout$LayoutParams r11 = (android.widget.RelativeLayout.LayoutParams) r11     // Catch: java.lang.Throwable -> L133
            android.view.ViewGroup$LayoutParams r12 = r17.getLayoutParams()     // Catch: java.lang.Throwable -> L133
            android.widget.RelativeLayout$LayoutParams r12 = (android.widget.RelativeLayout.LayoutParams) r12     // Catch: java.lang.Throwable -> L133
            android.content.Context r13 = r16.getContext()     // Catch: java.lang.Throwable -> L133
            boolean r13 = r1.c(r13)     // Catch: java.lang.Throwable -> L133
            if (r13 == 0) goto L61
            boolean r13 = r1.i     // Catch: java.lang.Throwable -> L133
            if (r13 == 0) goto L61
            r13 = 1
            goto L62
        L61:
            r13 = 0
        L62:
            int r14 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            java.lang.String r15 = " * mDevHeight *****"
            r0 = -1
            if (r14 <= 0) goto Lae
            double r2 = (double) r2
            double r5 = r1.R     // Catch: java.lang.Throwable -> L133
            double r2 = r2 * r5
            double r5 = r1.Q     // Catch: java.lang.Throwable -> L133
            double r2 = r2 / r5
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L133
            r5.<init>()     // Catch: java.lang.Throwable -> L133
            java.lang.String r6 = " setPlayView 宽铺满 playerViewHeight:"
            r5.append(r6)     // Catch: java.lang.Throwable -> L133
            r5.append(r2)     // Catch: java.lang.Throwable -> L133
            java.lang.String r6 = " onMeasure mDevWidth "
            r5.append(r6)     // Catch: java.lang.Throwable -> L133
            int r6 = r1.P     // Catch: java.lang.Throwable -> L133
            r5.append(r6)     // Catch: java.lang.Throwable -> L133
            r5.append(r15)     // Catch: java.lang.Throwable -> L133
            int r6 = r1.O     // Catch: java.lang.Throwable -> L133
            r5.append(r6)     // Catch: java.lang.Throwable -> L133
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L133
            com.mbridge.msdk.foundation.tools.z.b(r4, r5)     // Catch: java.lang.Throwable -> L133
            r12.width = r0     // Catch: java.lang.Throwable -> L133
            if (r13 == 0) goto L9b
            goto L9c
        L9b:
            int r0 = (int) r2     // Catch: java.lang.Throwable -> L133
        L9c:
            r12.height = r0     // Catch: java.lang.Throwable -> L133
            r0 = 13
            r12.addRule(r0)     // Catch: java.lang.Throwable -> L133
            int r5 = r1.P     // Catch: java.lang.Throwable -> L133
            r11.width = r5     // Catch: java.lang.Throwable -> L133
            int r2 = (int) r2     // Catch: java.lang.Throwable -> L133
            r11.height = r2     // Catch: java.lang.Throwable -> L133
            r11.addRule(r0)     // Catch: java.lang.Throwable -> L133
            goto L120
        Lae:
            int r2 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r2 >= 0) goto Lf3
            double r2 = (double) r3     // Catch: java.lang.Throwable -> L133
            double r2 = r2 * r5
            if (r13 == 0) goto Lb8
            r5 = r0
            goto Lb9
        Lb8:
            int r5 = (int) r2     // Catch: java.lang.Throwable -> L133
        Lb9:
            r12.width = r5     // Catch: java.lang.Throwable -> L133
            r12.height = r0     // Catch: java.lang.Throwable -> L133
            r0 = 13
            r12.addRule(r0)     // Catch: java.lang.Throwable -> L133
            int r5 = (int) r2     // Catch: java.lang.Throwable -> L133
            r11.width = r5     // Catch: java.lang.Throwable -> L133
            int r5 = r1.O     // Catch: java.lang.Throwable -> L133
            r11.height = r5     // Catch: java.lang.Throwable -> L133
            r11.addRule(r0)     // Catch: java.lang.Throwable -> L133
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L133
            r0.<init>()     // Catch: java.lang.Throwable -> L133
            java.lang.String r5 = "setPlayView 高铺满 playerViewWidth:"
            r0.append(r5)     // Catch: java.lang.Throwable -> L133
            r0.append(r2)     // Catch: java.lang.Throwable -> L133
            java.lang.String r2 = " mDevWidth "
            r0.append(r2)     // Catch: java.lang.Throwable -> L133
            int r2 = r1.P     // Catch: java.lang.Throwable -> L133
            r0.append(r2)     // Catch: java.lang.Throwable -> L133
            r0.append(r15)     // Catch: java.lang.Throwable -> L133
            int r2 = r1.O     // Catch: java.lang.Throwable -> L133
            r0.append(r2)     // Catch: java.lang.Throwable -> L133
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L133
            com.mbridge.msdk.foundation.tools.z.b(r4, r0)     // Catch: java.lang.Throwable -> L133
            goto L120
        Lf3:
            r12.width = r0     // Catch: java.lang.Throwable -> L133
            r12.height = r0     // Catch: java.lang.Throwable -> L133
            int r0 = r1.P     // Catch: java.lang.Throwable -> L133
            r11.width = r0     // Catch: java.lang.Throwable -> L133
            int r0 = r1.O     // Catch: java.lang.Throwable -> L133
            r11.height = r0     // Catch: java.lang.Throwable -> L133
            r0 = 13
            r11.addRule(r0)     // Catch: java.lang.Throwable -> L133
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L133
            r0.<init>()     // Catch: java.lang.Throwable -> L133
            java.lang.String r2 = "setPlayView 铺满父布局  videoWHDivide_final："
            r0.append(r2)     // Catch: java.lang.Throwable -> L133
            r0.append(r9)     // Catch: java.lang.Throwable -> L133
            java.lang.String r2 = "  screenWHDivide_final："
            r0.append(r2)     // Catch: java.lang.Throwable -> L133
            r0.append(r7)     // Catch: java.lang.Throwable -> L133
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L133
            com.mbridge.msdk.foundation.tools.z.b(r4, r0)     // Catch: java.lang.Throwable -> L133
        L120:
            boolean r0 = r1.h     // Catch: java.lang.Throwable -> L133
            if (r0 != 0) goto L129
            android.widget.RelativeLayout r0 = r1.x     // Catch: java.lang.Throwable -> L133
            r0.setLayoutParams(r11)     // Catch: java.lang.Throwable -> L133
        L129:
            r0 = r17
            r0.setLayoutParams(r12)     // Catch: java.lang.Throwable -> L133
            goto L13b
        L12f:
            r16.b(r17)     // Catch: java.lang.Throwable -> L133
            return
        L133:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r4, r0)
        L13b:
            return
    }

    private void a(com.mbridge.msdk.click.b r2) {
            r1 = this;
            r1.j()     // Catch: java.lang.Exception -> L24
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.N     // Catch: java.lang.Exception -> L24
            if (r0 == 0) goto L23
            java.lang.String r0 = r1.p()     // Catch: java.lang.Exception -> L24
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.a(r0)     // Catch: java.lang.Exception -> L24
            if (r0 == 0) goto L12
            goto L23
        L12:
            r1.F()     // Catch: java.lang.Exception -> L24
            com.mbridge.msdk.nativex.view.MBMediaView$16 r0 = new com.mbridge.msdk.nativex.view.MBMediaView$16     // Catch: java.lang.Exception -> L24
            r0.<init>(r1)     // Catch: java.lang.Exception -> L24
            r2.a(r0)     // Catch: java.lang.Exception -> L24
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.N     // Catch: java.lang.Exception -> L24
            r2.c(r0)     // Catch: java.lang.Exception -> L24
            goto L2e
        L23:
            return
        L24:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L2e:
            return
    }

    static void a(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            r0.r()
            return
    }

    static void a(com.mbridge.msdk.nativex.view.MBMediaView r0, android.content.Context r1) {
            r0.b(r1)
            return
    }

    static void a(com.mbridge.msdk.nativex.view.MBMediaView r0, com.mbridge.msdk.click.b r1) {
            r0.a(r1)
            return
    }

    static void a(com.mbridge.msdk.nativex.view.MBMediaView r1, com.mbridge.msdk.out.Campaign r2, java.lang.String r3) {
            com.mbridge.msdk.out.OnMBMediaViewListener r0 = r1.ac     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto L9
            com.mbridge.msdk.out.OnMBMediaViewListener r0 = r1.ac     // Catch: java.lang.Exception -> L13
            r0.onStartRedirection(r2, r3)     // Catch: java.lang.Exception -> L13
        L9:
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r0 = r1.ad     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto L1d
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r1 = r1.ad     // Catch: java.lang.Exception -> L13
            r1.onStartRedirection(r2, r3)     // Catch: java.lang.Exception -> L13
            goto L1d
        L13:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L1d:
            return
    }

    static void a(com.mbridge.msdk.nativex.view.MBMediaView r8, java.lang.String r9) {
            android.content.Context r0 = r8.getContext()     // Catch: java.lang.Exception -> L98
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> L98
            com.mbridge.msdk.foundation.db.t r0 = com.mbridge.msdk.foundation.db.t.a(r0)     // Catch: java.lang.Exception -> L98
            r1 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.N     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = r2.getNoticeUrl()     // Catch: java.lang.Exception -> L98
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L98
            if (r2 != 0) goto L39
            android.content.Context r1 = r8.getContext()     // Catch: java.lang.Exception -> L98
            int r4 = com.mbridge.msdk.foundation.tools.v.D(r1)     // Catch: java.lang.Exception -> L98
            com.mbridge.msdk.foundation.entity.p r1 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L98
            java.lang.String r3 = "2000021"
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.N     // Catch: java.lang.Exception -> L98
            java.lang.String r5 = r2.getNoticeUrl()     // Catch: java.lang.Exception -> L98
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Exception -> L98
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.a(r2, r4)     // Catch: java.lang.Exception -> L98
            r2 = r1
            r6 = r9
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L98
            goto L64
        L39:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.N     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = r2.getClickURL()     // Catch: java.lang.Exception -> L98
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L98
            if (r2 != 0) goto L64
            android.content.Context r1 = r8.getContext()     // Catch: java.lang.Exception -> L98
            int r4 = com.mbridge.msdk.foundation.tools.v.D(r1)     // Catch: java.lang.Exception -> L98
            com.mbridge.msdk.foundation.entity.p r1 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L98
            java.lang.String r3 = "2000021"
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.N     // Catch: java.lang.Exception -> L98
            java.lang.String r5 = r2.getClickURL()     // Catch: java.lang.Exception -> L98
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Exception -> L98
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.a(r2, r4)     // Catch: java.lang.Exception -> L98
            r2 = r1
            r6 = r9
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L98
        L64:
            if (r1 == 0) goto La2
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.N     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = r2.getId()     // Catch: java.lang.Exception -> L98
            r1.n(r2)     // Catch: java.lang.Exception -> L98
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.N     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = r2.getVideoUrlEncode()     // Catch: java.lang.Exception -> L98
            r1.e(r2)     // Catch: java.lang.Exception -> L98
            r1.p(r9)     // Catch: java.lang.Exception -> L98
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.N     // Catch: java.lang.Exception -> L98
            java.lang.String r9 = r9.getRequestId()     // Catch: java.lang.Exception -> L98
            r1.k(r9)     // Catch: java.lang.Exception -> L98
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r8.N     // Catch: java.lang.Exception -> L98
            java.lang.String r9 = r9.getRequestIdNotice()     // Catch: java.lang.Exception -> L98
            r1.l(r9)     // Catch: java.lang.Exception -> L98
            java.lang.String r8 = r8.p()     // Catch: java.lang.Exception -> L98
            r1.m(r8)     // Catch: java.lang.Exception -> L98
            r0.a(r1)     // Catch: java.lang.Exception -> L98
            goto La2
        L98:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            java.lang.String r9 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r9, r8)
        La2:
            return
    }

    private boolean a(android.view.View r10) {
            r9 = this;
            r0 = 0
            if (r10 == 0) goto L5c
            int r1 = r10.getVisibility()     // Catch: java.lang.Throwable -> L52
            if (r1 == 0) goto La
            goto L5c
        La:
            android.graphics.Rect r1 = new android.graphics.Rect     // Catch: java.lang.Throwable -> L52
            r1.<init>()     // Catch: java.lang.Throwable -> L52
            boolean r2 = r10.getLocalVisibleRect(r1)     // Catch: java.lang.Throwable -> L52
            if (r2 != 0) goto L16
            return r0
        L16:
            int r2 = r1.height()     // Catch: java.lang.Throwable -> L52
            int r1 = r1.width()     // Catch: java.lang.Throwable -> L52
            int r2 = r2 * r1
            long r1 = (long) r2     // Catch: java.lang.Throwable -> L52
            int r3 = r10.getHeight()     // Catch: java.lang.Throwable -> L52
            int r10 = r10.getWidth()     // Catch: java.lang.Throwable -> L52
            int r3 = r3 * r10
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L52
            float r10 = (float) r3     // Catch: java.lang.Throwable -> L52
            r5 = 1056964608(0x3f000000, float:0.5)
            float r10 = r10 * r5
            long r5 = (long) r10     // Catch: java.lang.Throwable -> L52
            r7 = 0
            int r10 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r10 > 0) goto L36
            return r0
        L36:
            android.content.Context r10 = r9.getContext()     // Catch: java.lang.Throwable -> L52
            boolean r10 = com.mbridge.msdk.foundation.tools.ae.l(r10)     // Catch: java.lang.Throwable -> L52
            if (r10 != 0) goto L41
            return r0
        L41:
            boolean r10 = r9.e     // Catch: java.lang.Throwable -> L52
            if (r10 != 0) goto L46
            return r0
        L46:
            int r10 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r10 < 0) goto L5c
            boolean r10 = r9.isShown()     // Catch: java.lang.Throwable -> L52
            if (r10 == 0) goto L5c
            r10 = 1
            return r10
        L52:
            r10 = move-exception
            java.lang.String r10 = r10.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r10)
        L5c:
            return r0
    }

    static boolean a(com.mbridge.msdk.nativex.view.MBMediaView r0, android.view.View r1) {
            boolean r0 = r0.a(r1)
            return r0
    }

    static boolean a(com.mbridge.msdk.nativex.view.MBMediaView r0, boolean r1) {
            r0.r = r1
            return r1
    }

    static int b(com.mbridge.msdk.nativex.view.MBMediaView r0, int r1) {
            r0.T = r1
            return r1
    }

    private void b() {
            r5 = this;
            java.lang.String r0 = "MBMediaView"
            java.lang.String r1 = "initView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            android.content.Context r1 = r5.getContext()
            java.lang.String r2 = "mbridge_nativex_mbmediaview"
            java.lang.String r3 = "layout"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r2, r3)
            r2 = -1
            if (r1 != r2) goto L1c
            java.lang.String r1 = "can not find mediaview resource"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            return
        L1c:
            android.content.Context r0 = r5.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            r3 = 0
            android.view.View r0 = r0.inflate(r1, r3)
            android.content.Context r1 = r5.getContext()
            java.lang.String r3 = "id"
            java.lang.String r4 = "mbridge_rl_mediaview_root"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r3)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1
            r5.y = r1
            android.content.Context r1 = r5.getContext()
            java.lang.String r4 = "mbridge_ll_playerview_container"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r3)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1
            r5.x = r1
            android.content.Context r1 = r5.getContext()
            java.lang.String r4 = "mbridge_my_big_img"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r3)
            android.view.View r1 = r0.findViewById(r1)
            com.mbridge.msdk.videocommon.view.MyImageView r1 = (com.mbridge.msdk.videocommon.view.MyImageView) r1
            r5.C = r1
            android.content.Context r1 = r5.getContext()
            java.lang.String r4 = "mbridge_native_pb"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r3)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.ProgressBar r1 = (android.widget.ProgressBar) r1
            r5.D = r1
            android.content.Context r1 = r5.getContext()
            java.lang.String r4 = "mbridge_nativex_webview_layout"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r3)
            android.view.View r1 = r0.findViewById(r1)
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1
            r5.z = r1
            android.content.Context r1 = r5.getContext()
            java.lang.String r4 = "mbridge_nativex_webview_layout_webview"
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r1, r4, r3)
            android.view.View r1 = r0.findViewById(r1)
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r1 = (com.mbridge.msdk.nativex.view.WindVaneWebViewForNV) r1
            r5.A = r1
            android.widget.RelativeLayout r1 = r5.y
            r3 = 1
            r1.setClickable(r3)
            r5.addView(r0, r2, r2)
            return
    }

    private void b(android.content.Context r9) {
            r8 = this;
            com.mbridge.msdk.click.b r0 = new com.mbridge.msdk.click.b
            android.content.Context r1 = r8.getContext()
            java.lang.String r2 = r8.p()
            r0.<init>(r1, r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N     // Catch: java.lang.Throwable -> L4e
            if (r1 == 0) goto L58
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N     // Catch: java.lang.Throwable -> L4e
            boolean r1 = r1.needShowIDialog()     // Catch: java.lang.Throwable -> L4e
            if (r1 == 0) goto L58
            com.mbridge.msdk.nativex.view.MBMediaView$15 r7 = new com.mbridge.msdk.nativex.view.MBMediaView$15     // Catch: java.lang.Throwable -> L4e
            r7.<init>(r8, r0)     // Catch: java.lang.Throwable -> L4e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N     // Catch: java.lang.Throwable -> L4e
            boolean r1 = com.mbridge.msdk.click.c.a(r1)     // Catch: java.lang.Throwable -> L4e
            if (r1 == 0) goto L58
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N     // Catch: java.lang.Throwable -> L4e
            boolean r1 = r1.needShowIDialog()     // Catch: java.lang.Throwable -> L4e
            if (r1 == 0) goto L58
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N     // Catch: java.lang.Throwable -> L4e
            boolean r1 = r0.b(r1)     // Catch: java.lang.Throwable -> L4e
            if (r1 != 0) goto L47
            com.mbridge.msdk.mbjscommon.confirmation.e r2 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r3 = ""
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r8.N     // Catch: java.lang.Throwable -> L4e
            java.lang.String r6 = r8.p()     // Catch: java.lang.Throwable -> L4e
            r5 = r9
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L4e
            goto L4d
        L47:
            r8.F()     // Catch: java.lang.Throwable -> L4e
            r8.j()     // Catch: java.lang.Throwable -> L4e
        L4d:
            return
        L4e:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.a(r1, r9)
        L58:
            r8.a(r0)
            return
    }

    private void b(android.view.View r5) {
            r4 = this;
            java.lang.String r0 = "MBMediaView"
            if (r5 != 0) goto La
            java.lang.String r5 = "setPlayViewParamsDefault view is null"
            com.mbridge.msdk.foundation.tools.z.b(r0, r5)     // Catch: java.lang.Exception -> L2e
            return
        La:
            android.view.ViewGroup$LayoutParams r1 = r5.getLayoutParams()     // Catch: java.lang.Exception -> L2e
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1     // Catch: java.lang.Exception -> L2e
            r2 = -1
            r1.width = r2     // Catch: java.lang.Exception -> L2e
            boolean r3 = r4.i     // Catch: java.lang.Exception -> L2e
            if (r3 == 0) goto L1a
            r1.height = r2     // Catch: java.lang.Exception -> L2e
            goto L2a
        L1a:
            float r2 = r4.B()     // Catch: java.lang.Exception -> L2e
            int r2 = (int) r2     // Catch: java.lang.Exception -> L2e
            int r2 = r2 * 9
            int r2 = r2 / 16
            r1.height = r2     // Catch: java.lang.Exception -> L2e
            r2 = 13
            r1.addRule(r2)     // Catch: java.lang.Exception -> L2e
        L2a:
            r5.setLayoutParams(r1)     // Catch: java.lang.Exception -> L2e
            goto L36
        L2e:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
        L36:
            return
    }

    static void b(com.mbridge.msdk.nativex.view.MBMediaView r8) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            if (r0 == 0) goto L94
            com.mbridge.msdk.foundation.entity.CampaignEx$b r0 = r0.getMediaViewHolder()
            if (r0 == 0) goto L94
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r8.getContext()
            r0.a(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            android.content.Context r1 = r8.getContext()
            java.lang.String r2 = r8.p()
            r3 = 0
            com.mbridge.msdk.mbnative.d.b.a(r0, r1, r2, r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            com.mbridge.msdk.foundation.entity.CampaignEx$b r0 = r0.getMediaViewHolder()
            boolean r1 = r0.a
            if (r1 != 0) goto L94
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = r8.ab
            com.mbridge.msdk.nativex.view.MBMediaView$a r2 = com.mbridge.msdk.nativex.view.MBMediaView.a.b
            if (r1 != r2) goto L94
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N
            java.lang.String r1 = r1.getImpressionURL()
            boolean r1 = com.mbridge.msdk.foundation.tools.ai.b(r1)
            if (r1 == 0) goto L94
            r1 = 1
            r0.a = r1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            java.lang.String r0 = r0.getImpressionURL()
            java.lang.String r1 = "is_video=1"
            boolean r1 = r0.contains(r1)
            if (r1 != 0) goto L6c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            java.lang.String r2 = "?"
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto L63
            java.lang.String r0 = "&is_video=1"
            r1.append(r0)
            goto L68
        L63:
            java.lang.String r0 = "?is_video=1"
            r1.append(r0)
        L68:
            java.lang.String r0 = r1.toString()
        L6c:
            r4 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "change impressionurl:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.b(r1, r0)
            r5 = 0
            r6 = 1
            android.content.Context r1 = r8.getContext()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.N
            java.lang.String r3 = r2.getCampaignUnitId()
            int r7 = com.mbridge.msdk.click.a.a.g
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6, r7)
        L94:
            return
    }

    static void b(com.mbridge.msdk.nativex.view.MBMediaView r1, com.mbridge.msdk.out.Campaign r2, java.lang.String r3) {
            com.mbridge.msdk.out.OnMBMediaViewListener r0 = r1.ac     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto L9
            com.mbridge.msdk.out.OnMBMediaViewListener r0 = r1.ac     // Catch: java.lang.Exception -> L13
            r0.onRedirectionFailed(r2, r3)     // Catch: java.lang.Exception -> L13
        L9:
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r0 = r1.ad     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto L1d
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r1 = r1.ad     // Catch: java.lang.Exception -> L13
            r1.onRedirectionFailed(r2, r3)     // Catch: java.lang.Exception -> L13
            goto L1d
        L13:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L1d:
            return
    }

    private void b(boolean r10) {
            r9 = this;
            java.lang.String r10 = "MBMediaView"
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.N     // Catch: java.lang.Exception -> Lb3
            int r0 = r0.getNvT2()     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r1 = r9.B     // Catch: java.lang.Exception -> Lb3
            if (r1 != 0) goto L2e
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r1 = new com.mbridge.msdk.nativex.view.WindVaneWebViewForNV     // Catch: java.lang.Exception -> Lb3
            android.content.Context r2 = r9.getContext()     // Catch: java.lang.Exception -> Lb3
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lb3
            r9.B = r1     // Catch: java.lang.Exception -> Lb3
            r1.setObject(r9)     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r1 = r9.B     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.nativex.view.MBMediaView$7 r2 = new com.mbridge.msdk.nativex.view.MBMediaView$7     // Catch: java.lang.Exception -> Lb3
            r2.<init>(r9)     // Catch: java.lang.Exception -> Lb3
            r1.setBackListener(r2)     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r1 = r9.B     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.nativex.view.MBMediaView$8 r2 = new com.mbridge.msdk.nativex.view.MBMediaView$8     // Catch: java.lang.Exception -> Lb3
            r2.<init>(r9)     // Catch: java.lang.Exception -> Lb3
            r1.setWebViewListener(r2)     // Catch: java.lang.Exception -> Lb3
        L2e:
            r1 = 3
            r2 = 1
            if (r0 != r1) goto L89
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.N     // Catch: java.lang.Exception -> Lb3
            java.lang.String r4 = r0.getendcard_url()     // Catch: java.lang.Exception -> Lb3
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> Lb3
            if (r0 != 0) goto Lbb
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.N     // Catch: java.lang.Exception -> Lb3
            r0.getMediaViewHolder()     // Catch: java.lang.Exception -> Lb3
            java.lang.String r0 = ".zip"
            boolean r0 = r4.contains(r0)     // Catch: java.lang.Exception -> Lb3
            if (r0 == 0) goto L69
            java.lang.String r0 = "md5filename"
            boolean r0 = r4.contains(r0)     // Catch: java.lang.Exception -> Lb3
            if (r0 == 0) goto L69
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r0 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()     // Catch: java.lang.Exception -> Lb3
            java.lang.String r0 = r0.getH5ResAddress(r4)     // Catch: java.lang.Exception -> Lb3
            boolean r1 = com.mbridge.msdk.foundation.tools.ai.b(r0)     // Catch: java.lang.Exception -> Lb3
            if (r1 == 0) goto Lbb
            r9.ag = r2     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r1 = r9.B     // Catch: java.lang.Exception -> Lb3
            r1.loadUrl(r0)     // Catch: java.lang.Exception -> Lb3
            goto Lbb
        L69:
            com.mbridge.msdk.foundation.download.download.HTMLResourceManager r0 = com.mbridge.msdk.foundation.download.download.HTMLResourceManager.getInstance()     // Catch: java.lang.Exception -> Lb3
            java.lang.String r5 = r0.getHtmlContentFromUrl(r4)     // Catch: java.lang.Exception -> Lb3
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.b(r5)     // Catch: java.lang.Exception -> Lb3
            if (r0 == 0) goto Lbb
            java.lang.String r0 = "load html..."
            com.mbridge.msdk.foundation.tools.z.a(r10, r0)     // Catch: java.lang.Exception -> Lb3
            r9.ag = r2     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r3 = r9.B     // Catch: java.lang.Exception -> Lb3
            java.lang.String r6 = "text/html"
            java.lang.String r7 = "UTF-8"
            r8 = 0
            r3.loadDataWithBaseURL(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> Lb3
            goto Lbb
        L89:
            r1 = 4
            if (r0 != r1) goto Lbb
            r9.ag = r2     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.N     // Catch: java.lang.Exception -> Lb3
            if (r0 == 0) goto Lbb
            com.mbridge.msdk.foundation.webview.BrowserView$MBDownloadListener r0 = new com.mbridge.msdk.foundation.webview.BrowserView$MBDownloadListener     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.N     // Catch: java.lang.Exception -> Lb3
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.N     // Catch: java.lang.Exception -> Lb3
            java.lang.String r1 = r1.getAppName()     // Catch: java.lang.Exception -> Lb3
            r0.setTitle(r1)     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r1 = r9.B     // Catch: java.lang.Exception -> Lb3
            r1.setDownloadListener(r0)     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.nativex.view.MBMediaView$d r0 = new com.mbridge.msdk.nativex.view.MBMediaView$d     // Catch: java.lang.Exception -> Lb3
            r1 = 0
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lb3
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r1 = r9.B     // Catch: java.lang.Exception -> Lb3
            r1.setFilter(r0)     // Catch: java.lang.Exception -> Lb3
            goto Lbb
        Lb3:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r10, r0)
        Lbb:
            return
    }

    static boolean b(com.mbridge.msdk.nativex.view.MBMediaView r0, boolean r1) {
            r0.i = r1
            return r1
    }

    private void c() {
            r1 = this;
            com.mbridge.msdk.nativex.view.MBMediaView$1 r0 = new com.mbridge.msdk.nativex.view.MBMediaView$1
            r0.<init>(r1)
            r1.M = r0
            return
    }

    static void c(com.mbridge.msdk.nativex.view.MBMediaView r1, com.mbridge.msdk.out.Campaign r2, java.lang.String r3) {
            com.mbridge.msdk.out.OnMBMediaViewListener r0 = r1.ac     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto L9
            com.mbridge.msdk.out.OnMBMediaViewListener r0 = r1.ac     // Catch: java.lang.Exception -> L13
            r0.onFinishRedirection(r2, r3)     // Catch: java.lang.Exception -> L13
        L9:
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r0 = r1.ad     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto L1d
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r1 = r1.ad     // Catch: java.lang.Exception -> L13
            r1.onFinishRedirection(r2, r3)     // Catch: java.lang.Exception -> L13
            goto L1d
        L13:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L1d:
            return
    }

    private boolean c(android.content.Context r2) {
            r1 = this;
            android.content.res.Resources r2 = r2.getResources()
            android.content.res.Configuration r2 = r2.getConfiguration()
            int r2 = r2.screenLayout
            r2 = r2 & 15
            r0 = 3
            if (r2 < r0) goto L11
            r2 = 1
            goto L12
        L11:
            r2 = 0
        L12:
            return r2
    }

    static boolean c(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            boolean r0 = r0.h
            return r0
    }

    static boolean c(com.mbridge.msdk.nativex.view.MBMediaView r0, boolean r1) {
            r0.j = r1
            return r1
    }

    private void d() {
            r5 = this;
            java.lang.String r0 = "omsdk"
            java.lang.String r1 = "MBMediaView"
            r2 = 1
            com.mbridge.msdk.nativex.view.MBMediaView$a r3 = r5.a(r2)     // Catch: java.lang.Throwable -> L89
            r5.ab = r3     // Catch: java.lang.Throwable -> L89
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L89
            r3.<init>()     // Catch: java.lang.Throwable -> L89
            java.lang.String r4 = "setDisplay mCurDisplayMode:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.nativex.view.MBMediaView$a r4 = r5.ab     // Catch: java.lang.Throwable -> L89
            r3.append(r4)     // Catch: java.lang.Throwable -> L89
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.foundation.tools.z.d(r1, r3)     // Catch: java.lang.Throwable -> L89
            r5.changeNoticeURL()     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.nativex.view.MBMediaView$a r3 = r5.ab     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.nativex.view.MBMediaView$a r4 = com.mbridge.msdk.nativex.view.MBMediaView.a.a     // Catch: java.lang.Throwable -> L89
            if (r3 != r4) goto L70
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r5.N     // Catch: java.lang.Throwable -> L89
            if (r3 == 0) goto L69
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r5.N     // Catch: java.lang.Throwable -> L89
            java.lang.String r3 = r3.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L89
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L89
            if (r3 == 0) goto L69
            com.iab.omid.library.mmadbridge.adsession.AdSession r3 = r5.s     // Catch: java.lang.Throwable -> L89
            if (r3 == 0) goto L69
            com.iab.omid.library.mmadbridge.adsession.AdSession r3 = r5.s     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L89
            com.mbridge.msdk.videocommon.view.MyImageView r4 = r5.C     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L89
            r3.registerAdView(r4)     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L89
            com.iab.omid.library.mmadbridge.adsession.AdSession r3 = r5.s     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L89
            com.iab.omid.library.mmadbridge.adsession.AdEvents r3 = com.iab.omid.library.mmadbridge.adsession.AdEvents.createAdEvents(r3)     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L89
            r5.t = r3     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L89
            com.iab.omid.library.mmadbridge.adsession.AdSession r3 = r5.s     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L89
            r3.start()     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L89
            com.iab.omid.library.mmadbridge.adsession.AdEvents r3 = r5.t     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L89
            if (r3 == 0) goto L64
            com.iab.omid.library.mmadbridge.adsession.AdEvents r3 = r5.t     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L89
            r3.impressionOccurred()     // Catch: java.lang.Exception -> L5c java.lang.Throwable -> L89
            goto L64
        L5c:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)     // Catch: java.lang.Throwable -> L89
        L64:
            java.lang.String r3 = "native adSession start, impressionOccurred"
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)     // Catch: java.lang.Throwable -> L89
        L69:
            r5.k()     // Catch: java.lang.Throwable -> L89
            r5.n()     // Catch: java.lang.Throwable -> L89
            goto L86
        L70:
            com.mbridge.msdk.nativex.view.MBMediaView$a r0 = r5.ab     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.nativex.view.MBMediaView$a r3 = com.mbridge.msdk.nativex.view.MBMediaView.a.b     // Catch: java.lang.Throwable -> L89
            if (r0 != r3) goto L7a
            r5.e()     // Catch: java.lang.Throwable -> L89
            goto L86
        L7a:
            com.mbridge.msdk.nativex.view.MBMediaView$a r0 = r5.ab     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.nativex.view.MBMediaView$a r3 = com.mbridge.msdk.nativex.view.MBMediaView.a.c     // Catch: java.lang.Throwable -> L89
            if (r0 != r3) goto L86
            r5.o()     // Catch: java.lang.Throwable -> L89
            r5.m()     // Catch: java.lang.Throwable -> L89
        L86:
            r5.q = r2     // Catch: java.lang.Throwable -> L89
            goto L91
        L89:
            r0 = move-exception
            java.lang.String r2 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r1, r2, r0)
        L91:
            return
    }

    static void d(com.mbridge.msdk.nativex.view.MBMediaView r8) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            if (r0 == 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx$b r0 = r0.getMediaViewHolder()
            if (r0 == 0) goto L3e
            boolean r1 = r0.g
            if (r1 != 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N
            com.mbridge.msdk.foundation.entity.l r1 = r1.getNativeVideoTracking()
            if (r1 == 0) goto L3e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.N
            com.mbridge.msdk.foundation.entity.l r1 = r1.getNativeVideoTracking()
            java.lang.String[] r1 = r1.o()
            if (r1 == 0) goto L3e
            r1 = 1
            r0.g = r1
            r6 = 0
            r7 = 0
            android.content.Context r2 = r8.getContext()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.N
            java.lang.String r4 = r3.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r8.N
            com.mbridge.msdk.foundation.entity.l r8 = r8.getNativeVideoTracking()
            java.lang.String[] r5 = r8.o()
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)
        L3e:
            return
    }

    static boolean d(com.mbridge.msdk.nativex.view.MBMediaView r0, boolean r1) {
            r0.af = r1
            return r1
    }

    static com.mbridge.msdk.nativex.view.MediaViewPlayerView e(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r0.w
            return r0
    }

    private void e() {
            r0 = this;
            r0.A()
            r0.l()
            return
    }

    private void f() {
            r4 = this;
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = r4.ab     // Catch: java.lang.Throwable -> L5e
            com.mbridge.msdk.nativex.view.MBMediaView$a r2 = com.mbridge.msdk.nativex.view.MBMediaView.a.a     // Catch: java.lang.Throwable -> L5e
            if (r1 != r2) goto L66
            int r1 = r4.P     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L66
            int r1 = r4.T     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L66
            int r1 = r4.S     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L66
            int r1 = r4.P     // Catch: java.lang.Throwable -> L5e
            int r2 = r4.T     // Catch: java.lang.Throwable -> L5e
            int r1 = r1 * r2
            int r2 = r4.S     // Catch: java.lang.Throwable -> L5e
            int r1 = r1 / r2
            com.mbridge.msdk.videocommon.view.MyImageView r2 = r4.C     // Catch: java.lang.Throwable -> L5e
            if (r2 == 0) goto L66
            if (r1 == 0) goto L66
            com.mbridge.msdk.videocommon.view.MyImageView r2 = r4.C     // Catch: java.lang.Throwable -> L5e
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()     // Catch: java.lang.Throwable -> L5e
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2     // Catch: java.lang.Throwable -> L5e
            int r3 = r4.P     // Catch: java.lang.Throwable -> L5e
            r2.width = r3     // Catch: java.lang.Throwable -> L5e
            r2.height = r1     // Catch: java.lang.Throwable -> L5e
            com.mbridge.msdk.videocommon.view.MyImageView r3 = r4.C     // Catch: java.lang.Throwable -> L5e
            r3.setLayoutParams(r2)     // Catch: java.lang.Throwable -> L5e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e
            r2.<init>()     // Catch: java.lang.Throwable -> L5e
            java.lang.String r3 = "initBitImageViewWHByDevWh onMeasure mdevWidth:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L5e
            int r3 = r4.P     // Catch: java.lang.Throwable -> L5e
            r2.append(r3)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r3 = " mDevHeight:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L5e
            int r3 = r4.O     // Catch: java.lang.Throwable -> L5e
            r2.append(r3)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r3 = " finalHeigt:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L5e
            r2.append(r1)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L5e
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L5e
            goto L66
        L5e:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L66:
            return
    }

    static boolean f(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            boolean r0 = r0.d
            return r0
    }

    static android.view.View g(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            android.view.View r0 = r0.E
            return r0
    }

    private void g() {
            r7 = this;
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = r7.ab     // Catch: java.lang.Throwable -> Lb6
            com.mbridge.msdk.nativex.view.MBMediaView$a r2 = com.mbridge.msdk.nativex.view.MBMediaView.a.c     // Catch: java.lang.Throwable -> Lb6
            if (r1 != r2) goto Lbe
            int r1 = r7.P     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r2 = " mDevHeight:"
            java.lang.String r3 = "initGifImageViewWHByDevWh onMeasure mdevWidth:"
            r4 = 13
            if (r1 == 0) goto L6c
            int r1 = r7.T     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto L6c
            int r1 = r7.S     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto L6c
            int r1 = r7.P     // Catch: java.lang.Throwable -> Lb6
            int r5 = r7.T     // Catch: java.lang.Throwable -> Lb6
            int r1 = r1 * r5
            int r5 = r7.S     // Catch: java.lang.Throwable -> Lb6
            int r1 = r1 / r5
            android.widget.RelativeLayout r5 = r7.z     // Catch: java.lang.Throwable -> Lb6
            if (r5 == 0) goto Lbe
            if (r1 == 0) goto Lbe
            android.widget.RelativeLayout r5 = r7.z     // Catch: java.lang.Throwable -> Lb6
            android.view.ViewGroup$LayoutParams r5 = r5.getLayoutParams()     // Catch: java.lang.Throwable -> Lb6
            android.widget.RelativeLayout$LayoutParams r5 = (android.widget.RelativeLayout.LayoutParams) r5     // Catch: java.lang.Throwable -> Lb6
            int r6 = r7.P     // Catch: java.lang.Throwable -> Lb6
            r5.width = r6     // Catch: java.lang.Throwable -> Lb6
            r5.height = r1     // Catch: java.lang.Throwable -> Lb6
            r5.addRule(r4)     // Catch: java.lang.Throwable -> Lb6
            android.widget.RelativeLayout r4 = r7.z     // Catch: java.lang.Throwable -> Lb6
            r4.setLayoutParams(r5)     // Catch: java.lang.Throwable -> Lb6
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb6
            r4.<init>()     // Catch: java.lang.Throwable -> Lb6
            r4.append(r3)     // Catch: java.lang.Throwable -> Lb6
            int r3 = r7.P     // Catch: java.lang.Throwable -> Lb6
            r4.append(r3)     // Catch: java.lang.Throwable -> Lb6
            r4.append(r2)     // Catch: java.lang.Throwable -> Lb6
            int r2 = r7.O     // Catch: java.lang.Throwable -> Lb6
            r4.append(r2)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r2 = " finalHeigt:"
            r4.append(r2)     // Catch: java.lang.Throwable -> Lb6
            r4.append(r1)     // Catch: java.lang.Throwable -> Lb6
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.N     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r1 = r1.getAppName()     // Catch: java.lang.Throwable -> Lb6
            r4.append(r1)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> Lb6
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> Lb6
            goto Lbe
        L6c:
            int r1 = r7.P     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto Lbe
            android.widget.RelativeLayout r1 = r7.z     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto Lbe
            android.widget.RelativeLayout r1 = r7.z     // Catch: java.lang.Throwable -> Lb6
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()     // Catch: java.lang.Throwable -> Lb6
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1     // Catch: java.lang.Throwable -> Lb6
            int r5 = r7.P     // Catch: java.lang.Throwable -> Lb6
            r1.width = r5     // Catch: java.lang.Throwable -> Lb6
            int r5 = r7.P     // Catch: java.lang.Throwable -> Lb6
            int r5 = r5 * 627
            int r5 = r5 / 1200
            r1.height = r5     // Catch: java.lang.Throwable -> Lb6
            r1.addRule(r4)     // Catch: java.lang.Throwable -> Lb6
            android.widget.RelativeLayout r4 = r7.z     // Catch: java.lang.Throwable -> Lb6
            r4.setLayoutParams(r1)     // Catch: java.lang.Throwable -> Lb6
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb6
            r1.<init>()     // Catch: java.lang.Throwable -> Lb6
            r1.append(r3)     // Catch: java.lang.Throwable -> Lb6
            int r3 = r7.P     // Catch: java.lang.Throwable -> Lb6
            r1.append(r3)     // Catch: java.lang.Throwable -> Lb6
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb6
            int r2 = r7.O     // Catch: java.lang.Throwable -> Lb6
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb6
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.N     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r2 = r2.getAppName()     // Catch: java.lang.Throwable -> Lb6
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lb6
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> Lb6
            goto Lbe
        Lb6:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        Lbe:
            return
    }

    private void h() {
            r5 = this;
            com.mbridge.msdk.nativex.view.MBMediaView$a r0 = r5.ab     // Catch: java.lang.Exception -> L65
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = com.mbridge.msdk.nativex.view.MBMediaView.a.b     // Catch: java.lang.Exception -> L65
            if (r0 != r1) goto L6f
            android.widget.RelativeLayout r0 = r5.x     // Catch: java.lang.Exception -> L65
            if (r0 == 0) goto L6f
            float r0 = r5.B()     // Catch: java.lang.Exception -> L65
            int r0 = (int) r0     // Catch: java.lang.Exception -> L65
            android.content.Context r1 = r5.getContext()     // Catch: java.lang.Exception -> L65
            int r1 = com.mbridge.msdk.foundation.tools.ae.j(r1)     // Catch: java.lang.Exception -> L65
            boolean r2 = r5.h     // Catch: java.lang.Exception -> L65
            r3 = 13
            if (r2 != 0) goto L36
            android.widget.RelativeLayout r2 = r5.x     // Catch: java.lang.Exception -> L65
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()     // Catch: java.lang.Exception -> L65
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2     // Catch: java.lang.Exception -> L65
            int r4 = r5.P     // Catch: java.lang.Exception -> L65
            r2.width = r4     // Catch: java.lang.Exception -> L65
            int r4 = r5.O     // Catch: java.lang.Exception -> L65
            r2.height = r4     // Catch: java.lang.Exception -> L65
            r2.addRule(r3)     // Catch: java.lang.Exception -> L65
            android.widget.RelativeLayout r3 = r5.x     // Catch: java.lang.Exception -> L65
            r3.setLayoutParams(r2)     // Catch: java.lang.Exception -> L65
            goto L4a
        L36:
            android.widget.RelativeLayout r2 = r5.G     // Catch: java.lang.Exception -> L65
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()     // Catch: java.lang.Exception -> L65
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2     // Catch: java.lang.Exception -> L65
            r2.width = r0     // Catch: java.lang.Exception -> L65
            r2.height = r1     // Catch: java.lang.Exception -> L65
            r2.addRule(r3)     // Catch: java.lang.Exception -> L65
            android.widget.RelativeLayout r3 = r5.G     // Catch: java.lang.Exception -> L65
            r3.setLayoutParams(r2)     // Catch: java.lang.Exception -> L65
        L4a:
            r5.r()     // Catch: java.lang.Exception -> L65
            boolean r2 = r5.h     // Catch: java.lang.Exception -> L65
            if (r2 != 0) goto L5d
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r5.w     // Catch: java.lang.Exception -> L65
            int r1 = r5.P     // Catch: java.lang.Exception -> L65
            float r1 = (float) r1     // Catch: java.lang.Exception -> L65
            int r2 = r5.O     // Catch: java.lang.Exception -> L65
            float r2 = (float) r2     // Catch: java.lang.Exception -> L65
            r5.a(r0, r1, r2)     // Catch: java.lang.Exception -> L65
            goto L6f
        L5d:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r5.w     // Catch: java.lang.Exception -> L65
            float r0 = (float) r0     // Catch: java.lang.Exception -> L65
            float r1 = (float) r1     // Catch: java.lang.Exception -> L65
            r5.a(r2, r0, r1)     // Catch: java.lang.Exception -> L65
            goto L6f
        L65:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L6f:
            return
    }

    static void h(com.mbridge.msdk.nativex.view.MBMediaView r11) {
            java.lang.String r0 = "MBMediaView"
            android.view.View r1 = r11.getRootView()     // Catch: java.lang.Exception -> L263
            if (r1 == 0) goto L25d
            android.view.View r1 = r11.getRootView()     // Catch: java.lang.Exception -> L263
            boolean r1 = r1 instanceof android.view.ViewGroup     // Catch: java.lang.Exception -> L263
            if (r1 != 0) goto L12
            goto L25d
        L12:
            android.content.Context r1 = r11.getContext()     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r1 = r11.handleViewStyleResult(r1)     // Catch: java.lang.Exception -> L263
            if (r1 != 0) goto L1e
            goto L26b
        L1e:
            android.content.Context r2 = r11.getContext()     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r1 = r11.getFullScreenViewByStyle(r2, r1)     // Catch: java.lang.Exception -> L263
            r11.F = r1     // Catch: java.lang.Exception -> L263
            if (r1 != 0) goto L31
            java.lang.String r11 = "mFullScreenViewUI is null"
            com.mbridge.msdk.foundation.tools.z.b(r0, r11)     // Catch: java.lang.Exception -> L263
            goto L26b
        L31:
            boolean r1 = r11.y()     // Catch: java.lang.Exception -> L263
            if (r1 != 0) goto L3e
            java.lang.String r11 = "fullViewFailed return"
            com.mbridge.msdk.foundation.tools.z.d(r0, r11)     // Catch: java.lang.Exception -> L263
            goto L26b
        L3e:
            android.content.Context r1 = r11.getContext()     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.mbfullview.a r1 = com.mbridge.msdk.nativex.view.mbfullview.a.a(r1)     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r2 = r11.F     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r2 = r2.style     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r11.N     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r4 = r11.F     // Catch: java.lang.Exception -> L263
            r1.a(r2, r3, r4)     // Catch: java.lang.Exception -> L263
            r1 = 1
            r11.h = r1     // Catch: java.lang.Exception -> L263
            r2 = 0
            r11.r = r2     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r3 = r11.w     // Catch: java.lang.Exception -> L263
            if (r3 == 0) goto L65
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r3 = r11.w     // Catch: java.lang.Exception -> L263
            r3.setEnterFullScreen()     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r3 = r11.w     // Catch: java.lang.Exception -> L263
            r3.setIsActivePause(r2)     // Catch: java.lang.Exception -> L263
        L65:
            com.mbridge.msdk.out.OnMBMediaViewListener r3 = r11.ac     // Catch: java.lang.Exception -> L8a
            if (r3 == 0) goto L6e
            com.mbridge.msdk.out.OnMBMediaViewListener r3 = r11.ac     // Catch: java.lang.Exception -> L8a
            r3.onEnterFullscreen()     // Catch: java.lang.Exception -> L8a
        L6e:
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r3 = r11.ad     // Catch: java.lang.Exception -> L8a
            if (r3 == 0) goto L77
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r3 = r11.ad     // Catch: java.lang.Exception -> L8a
            r3.onEnterFullscreen()     // Catch: java.lang.Exception -> L8a
        L77:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r3 = r11.u     // Catch: java.lang.Exception -> L8a
            if (r3 == 0) goto L92
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r3 = r11.u     // Catch: java.lang.Exception -> L8a
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState r4 = com.iab.omid.library.mmadbridge.adsession.media.PlayerState.FULLSCREEN     // Catch: java.lang.Exception -> L8a
            r3.playerStateChange(r4)     // Catch: java.lang.Exception -> L8a
            java.lang.String r3 = "omsdk"
            java.lang.String r4 = "NV playerStateChange, FULLSCREEN"
            com.mbridge.msdk.foundation.tools.z.a(r3, r4)     // Catch: java.lang.Exception -> L8a
            goto L92
        L8a:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)     // Catch: java.lang.Exception -> L263
        L92:
            android.view.View r3 = r11.getRootView()     // Catch: java.lang.Exception -> L263
            r4 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r3 = r3.findViewById(r4)     // Catch: java.lang.Exception -> L263
            android.widget.FrameLayout r3 = (android.widget.FrameLayout) r3     // Catch: java.lang.Exception -> L263
            android.widget.RelativeLayout r4 = new android.widget.RelativeLayout     // Catch: java.lang.Exception -> L263
            android.content.Context r5 = r11.getContext()     // Catch: java.lang.Exception -> L263
            r4.<init>(r5)     // Catch: java.lang.Exception -> L263
            r11.E = r4     // Catch: java.lang.Exception -> L263
            r4.setClickable(r1)     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r5 = r11.w     // Catch: java.lang.Exception -> L263
            android.view.ViewParent r5 = r5.getParent()     // Catch: java.lang.Exception -> L263
            android.view.ViewGroup r5 = (android.view.ViewGroup) r5     // Catch: java.lang.Exception -> L263
            int r6 = r5.getChildCount()     // Catch: java.lang.Exception -> L263
            r7 = r2
        Lba:
            if (r7 >= r6) goto Lc8
            android.view.View r8 = r5.getChildAt(r7)     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r9 = r11.w     // Catch: java.lang.Exception -> L263
            if (r8 != r9) goto Lc5
            goto Lc8
        Lc5:
            int r7 = r7 + 1
            goto Lba
        Lc8:
            r11.L = r7     // Catch: java.lang.Exception -> L263
            android.widget.FrameLayout r6 = new android.widget.FrameLayout     // Catch: java.lang.Exception -> L263
            android.content.Context r8 = r11.getContext()     // Catch: java.lang.Exception -> L263
            r6.<init>(r8)     // Catch: java.lang.Exception -> L263
            r8 = 100
            r6.setId(r8)     // Catch: java.lang.Exception -> L263
            android.view.ViewGroup$LayoutParams r8 = new android.view.ViewGroup$LayoutParams     // Catch: java.lang.Exception -> L263
            int r9 = r11.getWidth()     // Catch: java.lang.Exception -> L263
            int r10 = r11.getHeight()     // Catch: java.lang.Exception -> L263
            r8.<init>(r9, r10)     // Catch: java.lang.Exception -> L263
            r5.addView(r6, r7, r8)     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r6 = r11.w     // Catch: java.lang.Exception -> L263
            r5.removeView(r6)     // Catch: java.lang.Exception -> L263
            android.widget.FrameLayout$LayoutParams r5 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Exception -> L263
            r6 = -1
            r5.<init>(r6, r6)     // Catch: java.lang.Exception -> L263
            r7 = 101(0x65, float:1.42E-43)
            r4.setId(r7)     // Catch: java.lang.Exception -> L263
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> L263
            r7.<init>(r6, r6)     // Catch: java.lang.Exception -> L263
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> L263
            r7.<init>(r6, r6)     // Catch: java.lang.Exception -> L263
            android.widget.RelativeLayout r8 = r11.K     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r9 = r11.w     // Catch: java.lang.Exception -> L263
            r8.addView(r9, r7)     // Catch: java.lang.Exception -> L263
            r3.addView(r4, r5)     // Catch: java.lang.Exception -> L263
            r5 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            int[] r7 = com.mbridge.msdk.nativex.view.MBMediaView.11.a     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r8 = r11.F     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r8 = r8.style     // Catch: java.lang.Exception -> L263
            int r8 = r8.ordinal()     // Catch: java.lang.Exception -> L263
            r7 = r7[r8]     // Catch: java.lang.Exception -> L263
            r8 = 2
            if (r7 == r8) goto L11e
            goto L11f
        L11e:
            r5 = r6
        L11f:
            int r7 = r11.v     // Catch: java.lang.Exception -> L263
            if (r7 == 0) goto L129
            int r5 = r11.v     // Catch: java.lang.Exception -> L263
            r4.setBackgroundColor(r5)     // Catch: java.lang.Exception -> L263
            goto L12c
        L129:
            r4.setBackgroundColor(r5)     // Catch: java.lang.Exception -> L263
        L12c:
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r5 = r11.F     // Catch: java.lang.Exception -> L263
            r7 = 103(0x67, float:1.44E-43)
            r5.setId(r7)     // Catch: java.lang.Exception -> L263
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> L263
            r5.<init>(r6, r6)     // Catch: java.lang.Exception -> L263
            int[] r6 = new int[r8]     // Catch: java.lang.Exception -> L263
            r3.getLocationInWindow(r6)     // Catch: java.lang.Exception -> L263
            r3 = r6[r1]     // Catch: java.lang.Exception -> L263
            r11.ae = r3     // Catch: java.lang.Exception -> L263
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L263
            r3.<init>()     // Catch: java.lang.Exception -> L263
            java.lang.String r6 = "mFullViewStartY:"
            r3.append(r6)     // Catch: java.lang.Exception -> L263
            int r6 = r11.ae     // Catch: java.lang.Exception -> L263
            r3.append(r6)     // Catch: java.lang.Exception -> L263
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)     // Catch: java.lang.Exception -> L263
            int r3 = r11.ae     // Catch: java.lang.Exception -> L263
            if (r3 != 0) goto L17f
            java.lang.String r3 = "addfullview 增加状态栏高度 沉浸式时contentview的高度和屏幕高度一样"
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)     // Catch: java.lang.Exception -> L263
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L263
            r6 = 23
            if (r3 < r6) goto L174
            android.view.WindowInsets r3 = r11.getRootWindowInsets()     // Catch: java.lang.Exception -> L263
            if (r3 == 0) goto L17f
            int r3 = r3.getStableInsetTop()     // Catch: java.lang.Exception -> L263
            r5.setMargins(r2, r3, r2, r2)     // Catch: java.lang.Exception -> L263
            goto L17f
        L174:
            android.content.Context r3 = r11.getContext()     // Catch: java.lang.Exception -> L263
            int r3 = com.mbridge.msdk.foundation.tools.ae.e(r3)     // Catch: java.lang.Exception -> L263
            r5.setMargins(r2, r3, r2, r2)     // Catch: java.lang.Exception -> L263
        L17f:
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r3 = r11.F     // Catch: java.lang.Exception -> L263
            r4.addView(r3, r5)     // Catch: java.lang.Exception -> L263
            r11.z()     // Catch: java.lang.Throwable -> L1bb
            android.widget.RelativeLayout r3 = r11.G     // Catch: java.lang.Throwable -> L1bb
            float r4 = r11.B()     // Catch: java.lang.Throwable -> L1bb
            float r5 = r11.C()     // Catch: java.lang.Throwable -> L1bb
            r11.a(r3, r4, r5)     // Catch: java.lang.Throwable -> L1bb
            android.content.Context r3 = r11.getContext()     // Catch: java.lang.Throwable -> L1bb
            com.mbridge.msdk.nativex.view.mbfullview.a r3 = com.mbridge.msdk.nativex.view.mbfullview.a.a(r3)     // Catch: java.lang.Throwable -> L1bb
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r4 = r11.F     // Catch: java.lang.Throwable -> L1bb
            boolean r5 = r11.i     // Catch: java.lang.Throwable -> L1bb
            r3.a(r4, r5)     // Catch: java.lang.Throwable -> L1bb
            boolean r3 = r11.i     // Catch: java.lang.Throwable -> L1bb
            if (r3 == 0) goto L1ab
            r11.E()     // Catch: java.lang.Throwable -> L1bb
            goto L1ae
        L1ab:
            r11.D()     // Catch: java.lang.Throwable -> L1bb
        L1ae:
            android.os.Handler r3 = r11.M     // Catch: java.lang.Throwable -> L1bb
            com.mbridge.msdk.nativex.view.MBMediaView$6 r4 = new com.mbridge.msdk.nativex.view.MBMediaView$6     // Catch: java.lang.Throwable -> L1bb
            r4.<init>(r11)     // Catch: java.lang.Throwable -> L1bb
            r5 = 3000(0xbb8, double:1.482E-320)
            r3.postDelayed(r4, r5)     // Catch: java.lang.Throwable -> L1bb
            goto L1c3
        L1bb:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)     // Catch: java.lang.Exception -> L263
        L1c3:
            android.view.View r3 = r11.E     // Catch: java.lang.Exception -> L1f6
            r3.setFocusableInTouchMode(r1)     // Catch: java.lang.Exception -> L1f6
            android.view.View r3 = r11.E     // Catch: java.lang.Exception -> L1f6
            r3.requestFocus()     // Catch: java.lang.Exception -> L1f6
            android.view.View r3 = r11.E     // Catch: java.lang.Exception -> L1f6
            com.mbridge.msdk.nativex.view.MBMediaView$2 r4 = new com.mbridge.msdk.nativex.view.MBMediaView$2     // Catch: java.lang.Exception -> L1f6
            r4.<init>(r11)     // Catch: java.lang.Exception -> L1f6
            r3.setOnKeyListener(r4)     // Catch: java.lang.Exception -> L1f6
            android.view.View r3 = r11.E     // Catch: java.lang.Exception -> L1f6
            com.mbridge.msdk.nativex.view.MBMediaView$3 r4 = new com.mbridge.msdk.nativex.view.MBMediaView$3     // Catch: java.lang.Exception -> L1f6
            r4.<init>(r11)     // Catch: java.lang.Exception -> L1f6
            r3.setOnClickListener(r4)     // Catch: java.lang.Exception -> L1f6
            android.widget.RelativeLayout r3 = r11.H     // Catch: java.lang.Exception -> L1f6
            com.mbridge.msdk.nativex.view.MBMediaView$4 r4 = new com.mbridge.msdk.nativex.view.MBMediaView$4     // Catch: java.lang.Exception -> L1f6
            r4.<init>(r11)     // Catch: java.lang.Exception -> L1f6
            r3.setOnClickListener(r4)     // Catch: java.lang.Exception -> L1f6
            android.widget.TextView r3 = r11.I     // Catch: java.lang.Exception -> L1f6
            com.mbridge.msdk.nativex.view.MBMediaView$5 r4 = new com.mbridge.msdk.nativex.view.MBMediaView$5     // Catch: java.lang.Exception -> L1f6
            r4.<init>(r11)     // Catch: java.lang.Exception -> L1f6
            r3.setOnClickListener(r4)     // Catch: java.lang.Exception -> L1f6
            goto L1fe
        L1f6:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)     // Catch: java.lang.Exception -> L263
        L1fe:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r3 = r11.w     // Catch: java.lang.Exception -> L263
            if (r3 == 0) goto L207
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r3 = r11.w     // Catch: java.lang.Exception -> L263
            r3.openSound()     // Catch: java.lang.Exception -> L263
        L207:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r3 = r11.w     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.MBMediaView$18 r4 = new com.mbridge.msdk.nativex.view.MBMediaView$18     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r5 = r11.w     // Catch: java.lang.Exception -> L263
            r4.<init>(r11, r5)     // Catch: java.lang.Exception -> L263
            r3.setMediaViewPlayListener(r4)     // Catch: java.lang.Exception -> L263
            r11.b(r2)     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Exception -> L263
            if (r2 == 0) goto L257
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.foundation.entity.CampaignEx$b r2 = r2.getMediaViewHolder()     // Catch: java.lang.Exception -> L263
            if (r2 == 0) goto L257
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.foundation.entity.CampaignEx$b r2 = r2.getMediaViewHolder()     // Catch: java.lang.Exception -> L263
            boolean r2 = r2.k     // Catch: java.lang.Exception -> L263
            if (r2 != 0) goto L257
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Exception -> L263
            java.lang.String r2 = r2.getCampaignUnitId()     // Catch: java.lang.Exception -> L263
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L263
            if (r2 != 0) goto L257
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.foundation.entity.l r2 = r2.getNativeVideoTracking()     // Catch: java.lang.Exception -> L263
            if (r2 == 0) goto L257
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.foundation.entity.l r2 = r2.getNativeVideoTracking()     // Catch: java.lang.Exception -> L263
            java.lang.String[] r2 = r2.d()     // Catch: java.lang.Exception -> L263
            if (r2 == 0) goto L257
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Exception -> L263
            com.mbridge.msdk.foundation.entity.CampaignEx$b r2 = r2.getMediaViewHolder()     // Catch: java.lang.Exception -> L263
            r2.k = r1     // Catch: java.lang.Exception -> L263
            r11.G()     // Catch: java.lang.Exception -> L263
        L257:
            java.lang.String r11 = "mediaview add to full screen"
            com.mbridge.msdk.foundation.tools.z.b(r0, r11)     // Catch: java.lang.Exception -> L263
            goto L26b
        L25d:
            java.lang.String r11 = "rootView is null"
            com.mbridge.msdk.foundation.tools.z.b(r0, r11)     // Catch: java.lang.Exception -> L263
            goto L26b
        L263:
            r11 = move-exception
            java.lang.String r11 = r11.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r11)
        L26b:
            return
    }

    private void i() {
            r2 = this;
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r2.w     // Catch: java.lang.Exception -> L33
            boolean r1 = r2.l     // Catch: java.lang.Exception -> L33
            r0.showSoundIndicator(r1)     // Catch: java.lang.Exception -> L33
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r2.w     // Catch: java.lang.Exception -> L33
            boolean r1 = r2.k     // Catch: java.lang.Exception -> L33
            r0.showProgressView(r1)     // Catch: java.lang.Exception -> L33
            com.mbridge.msdk.out.OnMBMediaViewListener r0 = r2.ac     // Catch: java.lang.Exception -> L33
            if (r0 == 0) goto L17
            com.mbridge.msdk.out.OnMBMediaViewListener r0 = r2.ac     // Catch: java.lang.Exception -> L33
            r0.onExitFullscreen()     // Catch: java.lang.Exception -> L33
        L17:
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r0 = r2.ad     // Catch: java.lang.Exception -> L33
            if (r0 == 0) goto L20
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r0 = r2.ad     // Catch: java.lang.Exception -> L33
            r0.onExitFullscreen()     // Catch: java.lang.Exception -> L33
        L20:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r2.u     // Catch: java.lang.Exception -> L33
            if (r0 == 0) goto L3d
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r2.u     // Catch: java.lang.Exception -> L33
            com.iab.omid.library.mmadbridge.adsession.media.PlayerState r1 = com.iab.omid.library.mmadbridge.adsession.media.PlayerState.NORMAL     // Catch: java.lang.Exception -> L33
            r0.playerStateChange(r1)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "omsdk"
            java.lang.String r1 = "NV playerStateChange, NORMAL"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> L33
            goto L3d
        L33:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L3d:
            return
    }

    static void i(com.mbridge.msdk.nativex.view.MBMediaView r2) {
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r2.w     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Lc
            java.lang.String r2 = "playerview is null return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L12
            goto L1a
        Lc:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r2.w     // Catch: java.lang.Throwable -> L12
            r2.onClickPlayerView()     // Catch: java.lang.Throwable -> L12
            goto L1a
        L12:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L1a:
            return
    }

    static android.content.Context j(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            android.content.Context r0 = r0.al
            return r0
    }

    private void j() {
            r2 = this;
            com.mbridge.msdk.out.OnMBMediaViewListener r0 = r2.ac     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto Lb
            com.mbridge.msdk.out.OnMBMediaViewListener r0 = r2.ac     // Catch: java.lang.Exception -> L17
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.N     // Catch: java.lang.Exception -> L17
            r0.onVideoAdClicked(r1)     // Catch: java.lang.Exception -> L17
        Lb:
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r0 = r2.ad     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L21
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r0 = r2.ad     // Catch: java.lang.Exception -> L17
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.N     // Catch: java.lang.Exception -> L17
            r0.onVideoAdClicked(r1)     // Catch: java.lang.Exception -> L17
            goto L21
        L17:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L21:
            return
    }

    static com.iab.omid.library.mmadbridge.adsession.media.MediaEvents k(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r0.u
            return r0
    }

    private void k() {
            r2 = this;
            com.mbridge.msdk.videocommon.view.MyImageView r0 = r2.C     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.foundation.tools.ae.a(r0)     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.videocommon.view.MyImageView r0 = r2.C     // Catch: java.lang.Throwable -> L18
            r1 = 0
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L18
            android.widget.RelativeLayout r0 = r2.x     // Catch: java.lang.Throwable -> L18
            r1 = 8
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L18
            android.widget.RelativeLayout r0 = r2.z     // Catch: java.lang.Throwable -> L18
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L18
            goto L22
        L18:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L22:
            return
    }

    static com.mbridge.msdk.nativex.view.MBMediaView.a l(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            com.mbridge.msdk.nativex.view.MBMediaView$a r0 = r0.ab
            return r0
    }

    private void l() {
            r2 = this;
            android.widget.RelativeLayout r0 = r2.x     // Catch: java.lang.Throwable -> L13
            r1 = 0
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L13
            com.mbridge.msdk.videocommon.view.MyImageView r0 = r2.C     // Catch: java.lang.Throwable -> L13
            r1 = 8
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L13
            android.widget.RelativeLayout r0 = r2.z     // Catch: java.lang.Throwable -> L13
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L13
            goto L1d
        L13:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L1d:
            return
    }

    static com.mbridge.msdk.videocommon.view.MyImageView m(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            com.mbridge.msdk.videocommon.view.MyImageView r0 = r0.C
            return r0
    }

    private void m() {
            r2 = this;
            android.widget.RelativeLayout r0 = r2.x     // Catch: java.lang.Throwable -> L18
            r1 = 8
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.videocommon.view.MyImageView r0 = r2.C     // Catch: java.lang.Throwable -> L18
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L18
            android.widget.RelativeLayout r0 = r2.z     // Catch: java.lang.Throwable -> L18
            r1 = 0
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r0 = r2.A     // Catch: java.lang.Throwable -> L18
            r0.setVisibility(r1)     // Catch: java.lang.Throwable -> L18
            goto L22
        L18:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L22:
            return
    }

    private void n() {
            r4 = this;
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.N     // Catch: java.lang.Throwable -> L35
            if (r1 != 0) goto L7
            return
        L7:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.N     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = r1.getImageUrl()     // Catch: java.lang.Throwable -> L35
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.a(r1)     // Catch: java.lang.Throwable -> L35
            if (r2 == 0) goto L14
            return
        L14:
            android.content.Context r2 = r4.getContext()     // Catch: java.lang.Throwable -> L35
            if (r2 != 0) goto L1b
            return
        L1b:
            java.lang.String r2 = "fillBigimage startOrPlayVideo"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L35
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.foundation.same.c.b r2 = com.mbridge.msdk.foundation.same.c.b.a(r2)     // Catch: java.lang.Throwable -> L35
            com.mbridge.msdk.nativex.view.MBMediaView$13 r3 = new com.mbridge.msdk.nativex.view.MBMediaView$13     // Catch: java.lang.Throwable -> L35
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L35
            r2.a(r1, r3)     // Catch: java.lang.Throwable -> L35
            goto L3d
        L35:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L3d:
            return
    }

    static void n(com.mbridge.msdk.nativex.view.MBMediaView r1) {
            android.widget.ProgressBar r0 = r1.D     // Catch: java.lang.Exception -> Lb
            if (r0 == 0) goto L15
            android.widget.ProgressBar r1 = r1.D     // Catch: java.lang.Exception -> Lb
            r0 = 0
            r1.setVisibility(r0)     // Catch: java.lang.Exception -> Lb
            goto L15
        Lb:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L15:
            return
    }

    private void o() {
            r10 = this;
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.N     // Catch: java.lang.Throwable -> L44
            if (r1 != 0) goto L7
            return
        L7:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r10.N     // Catch: java.lang.Throwable -> L44
            java.lang.String r1 = r1.getGifUrl()     // Catch: java.lang.Throwable -> L44
            boolean r2 = com.mbridge.msdk.foundation.tools.ai.a(r1)     // Catch: java.lang.Throwable -> L44
            if (r2 == 0) goto L14
            return
        L14:
            android.content.Context r2 = r10.getContext()     // Catch: java.lang.Throwable -> L44
            if (r2 != 0) goto L1b
            return
        L1b:
            java.lang.String r2 = "fillGifimage"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L44
            java.lang.String r2 = "<!DOCTYPE html><html lang=\"en\"><head>  <meta charset=\"UTF-8\">  <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"><meta http-equiv=\"X-UA-Compatible\" content=\"ie=edge\">  <title>Document</title>  <style>  *{    margin: 0;    padding: 0;  }  html, body{    width: 100%;    height: 100%;  }  body{    background-image: url('gifUrl');    background-position: center;    background-size: contain;    background-repeat: no-repeat;  }  </style></head><body></body></html>"
            java.lang.String r3 = "gifUrl"
            java.lang.String r6 = r2.replace(r3, r1)     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r4 = r10.A     // Catch: java.lang.Throwable -> L44
            r5 = 0
            java.lang.String r7 = "text/html"
            java.lang.String r8 = "utf-8"
            r9 = 0
            r4.loadDataWithBaseURL(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r1 = r10.A     // Catch: java.lang.Throwable -> L44
            r2 = 1
            r1.setInterceptTouch(r2)     // Catch: java.lang.Throwable -> L44
            android.widget.RelativeLayout r1 = r10.z     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.nativex.view.MBMediaView$14 r2 = new com.mbridge.msdk.nativex.view.MBMediaView$14     // Catch: java.lang.Throwable -> L44
            r2.<init>(r10)     // Catch: java.lang.Throwable -> L44
            r1.setOnClickListener(r2)     // Catch: java.lang.Throwable -> L44
            goto L4c
        L44:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L4c:
            return
    }

    static void o(com.mbridge.msdk.nativex.view.MBMediaView r1) {
            android.widget.ProgressBar r0 = r1.J     // Catch: java.lang.Exception -> Lb
            if (r0 == 0) goto L15
            android.widget.ProgressBar r1 = r1.J     // Catch: java.lang.Exception -> Lb
            r0 = 0
            r1.setVisibility(r0)     // Catch: java.lang.Exception -> Lb
            goto L15
        Lb:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L15:
            return
    }

    private java.lang.String p() {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.N     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L21
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.N     // Catch: java.lang.Exception -> L17
            java.lang.String r0 = r0.getCampaignUnitId()     // Catch: java.lang.Exception -> L17
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.b(r0)     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L21
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.N     // Catch: java.lang.Exception -> L17
            java.lang.String r0 = r0.getCampaignUnitId()     // Catch: java.lang.Exception -> L17
            return r0
        L17:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L21:
            r0 = 0
            return r0
    }

    static void p(com.mbridge.msdk.nativex.view.MBMediaView r1) {
            android.widget.ProgressBar r0 = r1.D     // Catch: java.lang.Exception -> Lc
            if (r0 == 0) goto L16
            android.widget.ProgressBar r1 = r1.D     // Catch: java.lang.Exception -> Lc
            r0 = 8
            r1.setVisibility(r0)     // Catch: java.lang.Exception -> Lc
            goto L16
        Lc:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L16:
            return
    }

    private void q() {
            r11 = this;
            java.lang.String r0 = "omsdk"
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Throwable -> Lef
            if (r2 != 0) goto Ld
            java.lang.String r2 = "campaign is null addPlayerView return"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Throwable -> Lef
        Ld:
            java.lang.String r2 = "specSize addPlayerView"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> Lef
            if (r2 == 0) goto L2b
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> Lef
            android.view.ViewParent r2 = r2.getParent()     // Catch: java.lang.Throwable -> Lef
            if (r2 == 0) goto L2b
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> Lef
            android.view.ViewParent r2 = r2.getParent()     // Catch: java.lang.Throwable -> Lef
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r3 = r11.w     // Catch: java.lang.Throwable -> Lef
            r2.removeView(r3)     // Catch: java.lang.Throwable -> Lef
        L2b:
            r11.l()     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = new com.mbridge.msdk.nativex.view.MediaViewPlayerView     // Catch: java.lang.Throwable -> Lef
            android.content.Context r3 = r11.getContext()     // Catch: java.lang.Throwable -> Lef
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lef
            r11.w = r2     // Catch: java.lang.Throwable -> Lef
            boolean r3 = r11.k     // Catch: java.lang.Throwable -> Lef
            r2.showProgressView(r3)     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> Lef
            boolean r3 = r11.l     // Catch: java.lang.Throwable -> Lef
            r2.showSoundIndicator(r3)     // Catch: java.lang.Throwable -> Lef
            boolean r2 = r11.f     // Catch: java.lang.Throwable -> Lef
            if (r2 == 0) goto L4f
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> Lef
            r2.openSound()     // Catch: java.lang.Throwable -> Lef
            goto L54
        L4f:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> Lef
            r2.closeSound()     // Catch: java.lang.Throwable -> Lef
        L54:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> Lef
            boolean r3 = r11.b     // Catch: java.lang.Throwable -> Lef
            r2.setAllowLoopPlay(r3)     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r11.w     // Catch: java.lang.Throwable -> Lef
            java.lang.String r5 = r11.s()     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r11.N     // Catch: java.lang.Throwable -> Lef
            boolean r7 = r11.v()     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.videocommon.download.a r9 = r11.aa     // Catch: java.lang.Throwable -> Lef
            java.lang.String r10 = r11.p()     // Catch: java.lang.Throwable -> Lef
            r8 = r11
            r4.initPlayerViewData(r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.nativex.view.MBMediaView$c r3 = new com.mbridge.msdk.nativex.view.MBMediaView$c     // Catch: java.lang.Throwable -> Lef
            r3.<init>(r11)     // Catch: java.lang.Throwable -> Lef
            r2.setOnMediaViewPlayerViewListener(r3)     // Catch: java.lang.Throwable -> Lef
            android.widget.RelativeLayout r2 = r11.x     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r3 = r11.w     // Catch: java.lang.Throwable -> Lef
            r4 = -1
            r2.addView(r3, r4, r4)     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> L98
            if (r2 != 0) goto L8d
            java.lang.String r2 = "setPlayerViewListener playerview is null return"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Throwable -> L98
            goto La0
        L8d:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> L98
            com.mbridge.msdk.nativex.view.MBMediaView$12 r3 = new com.mbridge.msdk.nativex.view.MBMediaView$12     // Catch: java.lang.Throwable -> L98
            r3.<init>(r11)     // Catch: java.lang.Throwable -> L98
            r2.setOnClickListener(r3)     // Catch: java.lang.Throwable -> L98
            goto La0
        L98:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Throwable -> Lef
        La0:
            com.iab.omid.library.mmadbridge.adsession.AdSession r2 = r11.s     // Catch: java.lang.Throwable -> Lef
            if (r2 == 0) goto Lf7
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> Lef
            if (r2 == 0) goto Laf
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> Lef
            com.iab.omid.library.mmadbridge.adsession.AdSession r3 = r11.s     // Catch: java.lang.Throwable -> Lef
            r2.registerView(r3)     // Catch: java.lang.Throwable -> Lef
        Laf:
            com.iab.omid.library.mmadbridge.adsession.AdSession r2 = r11.s     // Catch: java.lang.Throwable -> Lef
            com.iab.omid.library.mmadbridge.adsession.AdEvents r2 = com.iab.omid.library.mmadbridge.adsession.AdEvents.createAdEvents(r2)     // Catch: java.lang.Throwable -> Lef
            r11.t = r2     // Catch: java.lang.Throwable -> Lef
            com.iab.omid.library.mmadbridge.adsession.AdSession r2 = r11.s     // Catch: java.lang.Throwable -> Lef
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r2 = com.iab.omid.library.mmadbridge.adsession.media.MediaEvents.createMediaEvents(r2)     // Catch: java.lang.Throwable -> Lef
            r11.u = r2     // Catch: java.lang.Throwable -> Lef
            com.iab.omid.library.mmadbridge.adsession.AdSession r2 = r11.s     // Catch: java.lang.Throwable -> Lef
            r2.start()     // Catch: java.lang.Throwable -> Lef
            r2 = 1
            com.iab.omid.library.mmadbridge.adsession.media.Position r3 = com.iab.omid.library.mmadbridge.adsession.media.Position.STANDALONE     // Catch: java.lang.Throwable -> Lef
            com.iab.omid.library.mmadbridge.adsession.media.VastProperties r2 = com.iab.omid.library.mmadbridge.adsession.media.VastProperties.createVastPropertiesForNonSkippableMedia(r2, r3)     // Catch: java.lang.Throwable -> Lef
            com.iab.omid.library.mmadbridge.adsession.AdEvents r3 = r11.t     // Catch: java.lang.Throwable -> Lef
            r3.loaded(r2)     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r11.w     // Catch: java.lang.Throwable -> Lef
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r3 = r11.u     // Catch: java.lang.Throwable -> Lef
            r2.setVideoEvents(r3)     // Catch: java.lang.Throwable -> Lef
            com.iab.omid.library.mmadbridge.adsession.AdEvents r2 = r11.t     // Catch: java.lang.Exception -> Le1 java.lang.Throwable -> Lef
            if (r2 == 0) goto Le9
            com.iab.omid.library.mmadbridge.adsession.AdEvents r2 = r11.t     // Catch: java.lang.Exception -> Le1 java.lang.Throwable -> Lef
            r2.impressionOccurred()     // Catch: java.lang.Exception -> Le1 java.lang.Throwable -> Lef
            goto Le9
        Le1:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> Lef
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)     // Catch: java.lang.Throwable -> Lef
        Le9:
            java.lang.String r2 = "NV adSession start, impressionOccurred"
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)     // Catch: java.lang.Throwable -> Lef
            goto Lf7
        Lef:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        Lf7:
            return
    }

    static void q(com.mbridge.msdk.nativex.view.MBMediaView r1) {
            android.widget.ProgressBar r0 = r1.J     // Catch: java.lang.Exception -> Lc
            if (r0 == 0) goto L16
            android.widget.ProgressBar r1 = r1.J     // Catch: java.lang.Exception -> Lc
            r0 = 8
            r1.setVisibility(r0)     // Catch: java.lang.Exception -> Lc
            goto L16
        Lc:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L16:
            return
    }

    private void r() {
            r6 = this;
            java.lang.String r0 = "MBMediaView"
            int r1 = r6.getVisibility()     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L9
            return
        L9:
            boolean r1 = r6.a(r6)     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L2f
            r1 = 0
            com.mbridge.msdk.c.d r2 = r6.u()     // Catch: java.lang.Throwable -> L6c
            if (r2 == 0) goto L1a
            int r1 = r2.d()     // Catch: java.lang.Throwable -> L6c
        L1a:
            android.os.Handler r2 = r6.M     // Catch: java.lang.Throwable -> L6c
            android.os.Message r2 = r2.obtainMessage()     // Catch: java.lang.Throwable -> L6c
            r3 = 3
            r2.what = r3     // Catch: java.lang.Throwable -> L6c
            r2.obj = r6     // Catch: java.lang.Throwable -> L6c
            android.os.Handler r3 = r6.M     // Catch: java.lang.Throwable -> L6c
            int r1 = r1 * 1000
            int r1 = r1 + 300
            long r4 = (long) r1     // Catch: java.lang.Throwable -> L6c
            r3.sendMessageDelayed(r2, r4)     // Catch: java.lang.Throwable -> L6c
        L2f:
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = r6.ab     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.nativex.view.MBMediaView$a r2 = com.mbridge.msdk.nativex.view.MBMediaView.a.b     // Catch: java.lang.Throwable -> L6c
            if (r1 != r2) goto L74
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r6.w     // Catch: java.lang.Throwable -> L6c
            if (r1 != 0) goto L42
            java.lang.String r1 = "setPlayerByVisibilityChange : player is null and addPlayerView"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L6c
            r6.q()     // Catch: java.lang.Throwable -> L6c
            goto L74
        L42:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r6.N     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r6.w     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.out.Campaign r2 = r2.getCampaign()     // Catch: java.lang.Throwable -> L6c
            if (r1 == r2) goto L74
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r6.w     // Catch: java.lang.Throwable -> L6c
            r1.release()     // Catch: java.lang.Throwable -> L6c
            r6.q()     // Catch: java.lang.Throwable -> L6c
            android.view.ViewParent r1 = r6.getParent()     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L63
            android.view.ViewParent r1 = r6.getParent()     // Catch: java.lang.Throwable -> L6c
            android.view.View r1 = (android.view.View) r1     // Catch: java.lang.Throwable -> L6c
            r1.invalidate()     // Catch: java.lang.Throwable -> L6c
        L63:
            r6.requestLayout()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r1 = "setPlayerByVisibilityChange : addplayerview andr requestLayout"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L6c
            goto L74
        L6c:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L74:
            return
    }

    static void r(com.mbridge.msdk.nativex.view.MBMediaView r8) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            if (r0 == 0) goto L56
            com.mbridge.msdk.foundation.entity.CampaignEx$b r0 = r0.getMediaViewHolder()
            if (r0 == 0) goto L56
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            com.mbridge.msdk.foundation.entity.CampaignEx$b r0 = r0.getMediaViewHolder()
            boolean r0 = r0.d
            if (r0 != 0) goto L56
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            java.lang.String r0 = r0.getCampaignUnitId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L56
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            com.mbridge.msdk.foundation.entity.l r0 = r0.getNativeVideoTracking()
            if (r0 == 0) goto L56
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            com.mbridge.msdk.foundation.entity.l r0 = r0.getNativeVideoTracking()
            java.lang.String[] r0 = r0.k()
            if (r0 == 0) goto L56
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.N
            com.mbridge.msdk.foundation.entity.CampaignEx$b r0 = r0.getMediaViewHolder()
            r1 = 1
            r0.d = r1
            android.content.Context r2 = r8.getContext()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.N
            java.lang.String r4 = r3.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r8.N
            com.mbridge.msdk.foundation.entity.l r8 = r8.getNativeVideoTracking()
            java.lang.String[] r5 = r8.k()
            r6 = 0
            r7 = 0
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)
        L56:
            return
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx s(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.N
            return r0
    }

    private java.lang.String s() {
            r8 = this;
            java.lang.String r0 = "MBMediaView"
            r1 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.N     // Catch: java.lang.Exception -> La1
            if (r2 != 0) goto L8
            return r1
        L8:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La1
            r2.<init>()     // Catch: java.lang.Exception -> La1
            java.lang.String r3 = "getPlayUrl curDisplay:"
            r2.append(r3)     // Catch: java.lang.Exception -> La1
            com.mbridge.msdk.nativex.view.MBMediaView$a r3 = r8.ab     // Catch: java.lang.Exception -> La1
            r2.append(r3)     // Catch: java.lang.Exception -> La1
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> La1
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Exception -> La1
            com.mbridge.msdk.videocommon.download.a r2 = r8.aa     // Catch: java.lang.Exception -> La1
            if (r2 == 0) goto L80
            com.mbridge.msdk.videocommon.download.a r2 = r8.aa     // Catch: java.lang.Exception -> La1
            int r2 = r2.f()     // Catch: java.lang.Exception -> La1
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La1
            r3.<init>()     // Catch: java.lang.Exception -> La1
            java.lang.String r4 = "downloadState:"
            r3.append(r4)     // Catch: java.lang.Exception -> La1
            r3.append(r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> La1
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)     // Catch: java.lang.Exception -> La1
            r3 = 5
            if (r2 != r3) goto L80
            com.mbridge.msdk.videocommon.download.a r3 = r8.aa     // Catch: java.lang.Exception -> La1
            java.lang.String r3 = r3.d()     // Catch: java.lang.Exception -> La1
            java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> La1
            r4.<init>(r3)     // Catch: java.lang.Exception -> La1
            boolean r4 = r4.exists()     // Catch: java.lang.Exception -> La1
            if (r4 == 0) goto L80
            com.mbridge.msdk.videocommon.download.a r4 = r8.aa     // Catch: java.lang.Exception -> La1
            long r4 = r4.e()     // Catch: java.lang.Exception -> La1
            java.io.File r6 = new java.io.File     // Catch: java.lang.Exception -> La1
            r6.<init>(r3)     // Catch: java.lang.Exception -> La1
            long r6 = com.mbridge.msdk.foundation.tools.ae.a(r6)     // Catch: java.lang.Exception -> La1
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 != 0) goto L80
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La1
            r4.<init>()     // Catch: java.lang.Exception -> La1
            java.lang.String r5 = "本地已下载完 拿本地播放地址："
            r4.append(r5)     // Catch: java.lang.Exception -> La1
            r4.append(r3)     // Catch: java.lang.Exception -> La1
            java.lang.String r5 = " state："
            r4.append(r5)     // Catch: java.lang.Exception -> La1
            r4.append(r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Exception -> La1
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Exception -> La1
            return r3
        L80:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.N     // Catch: java.lang.Exception -> La1
            java.lang.String r2 = r2.getVideoUrlEncode()     // Catch: java.lang.Exception -> La1
            boolean r3 = com.mbridge.msdk.foundation.tools.ai.b(r2)     // Catch: java.lang.Exception -> La1
            if (r3 == 0) goto La9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La1
            r3.<init>()     // Catch: java.lang.Exception -> La1
            java.lang.String r4 = "本地尚未下载完 拿网络地址："
            r3.append(r4)     // Catch: java.lang.Exception -> La1
            r3.append(r2)     // Catch: java.lang.Exception -> La1
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> La1
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)     // Catch: java.lang.Exception -> La1
            return r2
        La1:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        La9:
            return r1
    }

    private int t() {
            r1 = this;
            com.mbridge.msdk.c.d r0 = r1.u()
            if (r0 == 0) goto Lf
            com.mbridge.msdk.c.d r0 = r1.u()
            int r0 = r0.f()
            goto L11
        Lf:
            r0 = 100
        L11:
            return r0
    }

    static com.mbridge.msdk.nativex.view.WindVaneWebViewForNV t(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r0 = r0.H()
            return r0
    }

    static android.view.View u(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            android.view.View r0 = r0.w()
            return r0
    }

    private com.mbridge.msdk.c.d u() {
            r4 = this;
            r0 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.N     // Catch: java.lang.Exception -> L42
            if (r1 == 0) goto L41
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.N     // Catch: java.lang.Exception -> L42
            java.lang.String r1 = r1.getCampaignUnitId()     // Catch: java.lang.Exception -> L42
            boolean r1 = com.mbridge.msdk.foundation.tools.ai.a(r1)     // Catch: java.lang.Exception -> L42
            if (r1 == 0) goto L12
            goto L41
        L12:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.N     // Catch: java.lang.Exception -> L42
            java.lang.String r1 = r1.getCampaignUnitId()     // Catch: java.lang.Exception -> L42
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L42
            java.lang.String r2 = r2.k()     // Catch: java.lang.Exception -> L42
            boolean r3 = com.mbridge.msdk.foundation.tools.ai.a(r1)     // Catch: java.lang.Exception -> L42
            if (r3 != 0) goto L3d
            boolean r3 = com.mbridge.msdk.foundation.tools.ai.a(r2)     // Catch: java.lang.Exception -> L42
            if (r3 == 0) goto L2d
            goto L3d
        L2d:
            com.mbridge.msdk.c.b r3 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L42
            com.mbridge.msdk.c.d r2 = r3.e(r2, r1)     // Catch: java.lang.Exception -> L42
            if (r2 == 0) goto L38
            return r2
        L38:
            com.mbridge.msdk.c.d r0 = com.mbridge.msdk.c.d.d(r1)     // Catch: java.lang.Exception -> L42
            return r0
        L3d:
            com.mbridge.msdk.c.d r0 = com.mbridge.msdk.c.d.d(r1)     // Catch: java.lang.Exception -> L42
        L41:
            return r0
        L42:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
            return r0
    }

    private boolean v() {
            r5 = this;
            java.lang.String r0 = "MBMediaView"
            r1 = 0
            com.mbridge.msdk.c.d r2 = r5.u()     // Catch: java.lang.Throwable -> L6d
            if (r2 != 0) goto La
            return r1
        La:
            int r2 = r2.j()     // Catch: java.lang.Throwable -> L6d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6d
            r3.<init>()     // Catch: java.lang.Throwable -> L6d
            java.lang.String r4 = "========autoPlayType："
            r3.append(r4)     // Catch: java.lang.Throwable -> L6d
            r3.append(r2)     // Catch: java.lang.Throwable -> L6d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L6d
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)     // Catch: java.lang.Throwable -> L6d
            r3 = 1
            if (r2 != r3) goto L3b
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> L6d
            boolean r2 = com.mbridge.msdk.foundation.tools.ae.b(r2)     // Catch: java.lang.Throwable -> L6d
            if (r2 == 0) goto L35
            java.lang.String r2 = "========wifi下自动播放"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L6d
            return r3
        L35:
            java.lang.String r2 = "========wifi下自动播放 但目前不是wifi环境 现在为点击播放"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L6d
            return r1
        L3b:
            r4 = 2
            if (r2 != r4) goto L44
            java.lang.String r2 = "========点击播放"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L6d
            return r1
        L44:
            r4 = 3
            if (r2 != r4) goto L57
            java.lang.String r2 = "========有网自动播放"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L6d
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> L6d
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.c(r2)     // Catch: java.lang.Throwable -> L6d
            if (r0 == 0) goto L75
            return r3
        L57:
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> L6d
            boolean r2 = com.mbridge.msdk.foundation.tools.ae.b(r2)     // Catch: java.lang.Throwable -> L6d
            if (r2 == 0) goto L67
            java.lang.String r2 = "========else wifi下自动播放"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L6d
            return r3
        L67:
            java.lang.String r2 = "========else wifi下自动播放 但目前不是wifi环境 现在为点击播放"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L6d
            return r1
        L6d:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L75:
            return r1
    }

    static boolean v(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            boolean r0 = r0.af
            return r0
    }

    private android.view.View w() {
            r5 = this;
            android.widget.RelativeLayout r0 = new android.widget.RelativeLayout     // Catch: java.lang.Exception -> L98
            android.content.Context r1 = r5.getContext()     // Catch: java.lang.Exception -> L98
            r0.<init>(r1)     // Catch: java.lang.Exception -> L98
            r5.ah = r0     // Catch: java.lang.Exception -> L98
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> L98
            r1 = -1
            r0.<init>(r1, r1)     // Catch: java.lang.Exception -> L98
            android.widget.RelativeLayout r2 = r5.ah     // Catch: java.lang.Exception -> L98
            r2.setLayoutParams(r0)     // Catch: java.lang.Exception -> L98
            android.widget.ImageView r0 = new android.widget.ImageView     // Catch: java.lang.Exception -> L98
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Exception -> L98
            r0.<init>(r2)     // Catch: java.lang.Exception -> L98
            r5.ai = r0     // Catch: java.lang.Exception -> L98
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.FIT_XY     // Catch: java.lang.Exception -> L98
            r0.setScaleType(r2)     // Catch: java.lang.Exception -> L98
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> L98
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Exception -> L98
            r3 = 1106247680(0x41f00000, float:30.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)     // Catch: java.lang.Exception -> L98
            android.content.Context r4 = r5.getContext()     // Catch: java.lang.Exception -> L98
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r4, r3)     // Catch: java.lang.Exception -> L98
            r0.<init>(r2, r3)     // Catch: java.lang.Exception -> L98
            r2 = 11
            r0.addRule(r2)     // Catch: java.lang.Exception -> L98
            r2 = 10
            r0.addRule(r2)     // Catch: java.lang.Exception -> L98
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Exception -> L98
            r3 = 1090519040(0x41000000, float:8.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)     // Catch: java.lang.Exception -> L98
            r0.topMargin = r2     // Catch: java.lang.Exception -> L98
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Exception -> L98
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)     // Catch: java.lang.Exception -> L98
            r0.rightMargin = r2     // Catch: java.lang.Exception -> L98
            android.widget.ImageView r2 = r5.ai     // Catch: java.lang.Exception -> L98
            r2.setLayoutParams(r0)     // Catch: java.lang.Exception -> L98
            android.widget.ImageView r0 = r5.ai     // Catch: java.lang.Exception -> L98
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Exception -> L98
            java.lang.String r3 = "mbridge_nativex_close"
            java.lang.String r4 = "drawable"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r4)     // Catch: java.lang.Exception -> L98
            r0.setBackgroundResource(r2)     // Catch: java.lang.Exception -> L98
            android.widget.ImageView r0 = r5.ai     // Catch: java.lang.Exception -> L98
            com.mbridge.msdk.nativex.view.MBMediaView$19 r2 = new com.mbridge.msdk.nativex.view.MBMediaView$19     // Catch: java.lang.Exception -> L98
            r2.<init>(r5)     // Catch: java.lang.Exception -> L98
            r0.setOnClickListener(r2)     // Catch: java.lang.Exception -> L98
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> L98
            r0.<init>(r1, r1)     // Catch: java.lang.Exception -> L98
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r1 = r5.B     // Catch: java.lang.Exception -> L98
            r1.setLayoutParams(r0)     // Catch: java.lang.Exception -> L98
            android.widget.RelativeLayout r0 = r5.ah     // Catch: java.lang.Exception -> L98
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r1 = r5.B     // Catch: java.lang.Exception -> L98
            r0.addView(r1)     // Catch: java.lang.Exception -> L98
            android.widget.RelativeLayout r0 = r5.ah     // Catch: java.lang.Exception -> L98
            android.widget.ImageView r1 = r5.ai     // Catch: java.lang.Exception -> L98
            r0.addView(r1)     // Catch: java.lang.Exception -> L98
            android.widget.RelativeLayout r0 = r5.ah     // Catch: java.lang.Exception -> L98
            return r0
        L98:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            r0 = 0
            return r0
    }

    static com.mbridge.msdk.nativex.view.mbfullview.BaseView w(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r0 = r0.F
            return r0
    }

    static java.lang.String x(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            java.lang.String r0 = r0.p()
            return r0
    }

    private void x() {
            r12 = this;
            java.lang.String r0 = "mbridge_full_player_parent"
            java.lang.String r1 = "mbridge_full_rl_playcontainer"
            java.lang.String r2 = "id"
            android.view.View r3 = r12.getRootView()     // Catch: java.lang.Exception -> L23e
            r4 = 16908290(0x1020002, float:2.3877235E-38)
            android.view.View r3 = r3.findViewById(r4)     // Catch: java.lang.Exception -> L23e
            android.widget.FrameLayout r3 = (android.widget.FrameLayout) r3     // Catch: java.lang.Exception -> L23e
            android.view.View r4 = r12.getRootView()     // Catch: java.lang.Exception -> L23e
            r5 = 100
            android.view.View r4 = r4.findViewById(r5)     // Catch: java.lang.Exception -> L23e
            android.widget.FrameLayout r4 = (android.widget.FrameLayout) r4     // Catch: java.lang.Exception -> L23e
            android.view.View r5 = r12.getRootView()     // Catch: java.lang.Exception -> L23e
            r6 = 101(0x65, float:1.42E-43)
            android.view.View r5 = r5.findViewById(r6)     // Catch: java.lang.Exception -> L23e
            android.widget.RelativeLayout r5 = (android.widget.RelativeLayout) r5     // Catch: java.lang.Exception -> L23e
            android.view.View r6 = r12.getRootView()     // Catch: java.lang.Exception -> L23e
            r7 = 103(0x67, float:1.44E-43)
            android.view.View r6 = r6.findViewById(r7)     // Catch: java.lang.Exception -> L23e
            android.widget.RelativeLayout r6 = (android.widget.RelativeLayout) r6     // Catch: java.lang.Exception -> L23e
            if (r6 != 0) goto L41
            if (r5 == 0) goto L41
            android.view.View r6 = r5.findViewById(r7)     // Catch: java.lang.Exception -> L23e
            android.widget.RelativeLayout r6 = (android.widget.RelativeLayout) r6     // Catch: java.lang.Exception -> L23e
        L41:
            android.view.View r7 = r12.getRootView()     // Catch: java.lang.Exception -> L23e
            android.content.Context r8 = r12.getContext()     // Catch: java.lang.Exception -> L23e
            int r8 = com.mbridge.msdk.foundation.tools.s.a(r8, r1, r2)     // Catch: java.lang.Exception -> L23e
            android.view.View r7 = r7.findViewById(r8)     // Catch: java.lang.Exception -> L23e
            android.widget.RelativeLayout r7 = (android.widget.RelativeLayout) r7     // Catch: java.lang.Exception -> L23e
            if (r7 != 0) goto L66
            if (r6 == 0) goto L66
            android.content.Context r7 = r12.getContext()     // Catch: java.lang.Exception -> L23e
            int r1 = com.mbridge.msdk.foundation.tools.s.a(r7, r1, r2)     // Catch: java.lang.Exception -> L23e
            android.view.View r1 = r6.findViewById(r1)     // Catch: java.lang.Exception -> L23e
            r7 = r1
            android.widget.RelativeLayout r7 = (android.widget.RelativeLayout) r7     // Catch: java.lang.Exception -> L23e
        L66:
            android.view.View r1 = r12.getRootView()     // Catch: java.lang.Exception -> L23e
            android.content.Context r8 = r12.getContext()     // Catch: java.lang.Exception -> L23e
            int r8 = com.mbridge.msdk.foundation.tools.s.a(r8, r0, r2)     // Catch: java.lang.Exception -> L23e
            android.view.View r1 = r1.findViewById(r8)     // Catch: java.lang.Exception -> L23e
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Exception -> L23e
            if (r1 != 0) goto L8b
            if (r7 == 0) goto L8b
            android.content.Context r1 = r12.getContext()     // Catch: java.lang.Exception -> L23e
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r1, r0, r2)     // Catch: java.lang.Exception -> L23e
            android.view.View r0 = r7.findViewById(r0)     // Catch: java.lang.Exception -> L23e
            r1 = r0
            android.widget.RelativeLayout r1 = (android.widget.RelativeLayout) r1     // Catch: java.lang.Exception -> L23e
        L8b:
            android.view.View r0 = r12.getRootView()     // Catch: java.lang.Exception -> L23e
            android.content.Context r8 = r12.getContext()     // Catch: java.lang.Exception -> L23e
            java.lang.String r9 = "mbridge_full_pb_loading"
            int r8 = com.mbridge.msdk.foundation.tools.s.a(r8, r9, r2)     // Catch: java.lang.Exception -> L23e
            android.view.View r0 = r0.findViewById(r8)     // Catch: java.lang.Exception -> L23e
            android.widget.ProgressBar r0 = (android.widget.ProgressBar) r0     // Catch: java.lang.Exception -> L23e
            android.view.View r8 = r12.getRootView()     // Catch: java.lang.Exception -> L23e
            android.content.Context r9 = r12.getContext()     // Catch: java.lang.Exception -> L23e
            java.lang.String r10 = "mbridge_full_rl_install"
            int r9 = com.mbridge.msdk.foundation.tools.s.a(r9, r10, r2)     // Catch: java.lang.Exception -> L23e
            android.view.View r8 = r8.findViewById(r9)     // Catch: java.lang.Exception -> L23e
            android.widget.RelativeLayout r8 = (android.widget.RelativeLayout) r8     // Catch: java.lang.Exception -> L23e
            android.view.View r9 = r12.getRootView()     // Catch: java.lang.Exception -> L23e
            android.content.Context r10 = r12.getContext()     // Catch: java.lang.Exception -> L23e
            java.lang.String r11 = "mbridge_full_ll_pro_dur"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r10, r11, r2)     // Catch: java.lang.Exception -> L23e
            android.view.View r2 = r9.findViewById(r2)     // Catch: java.lang.Exception -> L23e
            android.widget.LinearLayout r2 = (android.widget.LinearLayout) r2     // Catch: java.lang.Exception -> L23e
            r9 = 0
            if (r4 == 0) goto Ld1
            android.view.ViewParent r10 = r4.getParent()     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r10 = (android.view.ViewGroup) r10     // Catch: java.lang.Exception -> L23e
            goto Ld2
        Ld1:
            r10 = r9
        Ld2:
            if (r6 == 0) goto Ld8
            r6.removeView(r2)     // Catch: java.lang.Exception -> L23e
            goto Le9
        Ld8:
            if (r2 == 0) goto Le9
            android.view.ViewParent r11 = r2.getParent()     // Catch: java.lang.Exception -> L23e
            if (r11 == 0) goto Le9
            android.view.ViewParent r11 = r2.getParent()     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r11 = (android.view.ViewGroup) r11     // Catch: java.lang.Exception -> L23e
            r11.removeView(r2)     // Catch: java.lang.Exception -> L23e
        Le9:
            android.widget.RelativeLayout r2 = r12.ah     // Catch: java.lang.Exception -> L23e
            if (r2 == 0) goto L118
            if (r6 == 0) goto Lf5
            android.widget.RelativeLayout r2 = r12.ah     // Catch: java.lang.Exception -> L23e
            r6.removeView(r2)     // Catch: java.lang.Exception -> L23e
            goto L10a
        Lf5:
            android.widget.RelativeLayout r2 = r12.ah     // Catch: java.lang.Exception -> L23e
            android.view.ViewParent r2 = r2.getParent()     // Catch: java.lang.Exception -> L23e
            if (r2 == 0) goto L10a
            android.widget.RelativeLayout r2 = r12.ah     // Catch: java.lang.Exception -> L23e
            android.view.ViewParent r2 = r2.getParent()     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2     // Catch: java.lang.Exception -> L23e
            android.widget.RelativeLayout r11 = r12.ah     // Catch: java.lang.Exception -> L23e
            r2.removeView(r11)     // Catch: java.lang.Exception -> L23e
        L10a:
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r2 = r12.B     // Catch: java.lang.Exception -> L23e
            r2.setBackListener(r9)     // Catch: java.lang.Exception -> L23e
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r2 = r12.B     // Catch: java.lang.Exception -> L23e
            r2.setObject(r9)     // Catch: java.lang.Exception -> L23e
            r12.B = r9     // Catch: java.lang.Exception -> L23e
            r12.ah = r9     // Catch: java.lang.Exception -> L23e
        L118:
            if (r6 == 0) goto L11e
            r6.removeView(r8)     // Catch: java.lang.Exception -> L23e
            goto L12f
        L11e:
            if (r8 == 0) goto L12f
            android.view.ViewParent r2 = r8.getParent()     // Catch: java.lang.Exception -> L23e
            if (r2 == 0) goto L12f
            android.view.ViewParent r2 = r8.getParent()     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2     // Catch: java.lang.Exception -> L23e
            r2.removeView(r8)     // Catch: java.lang.Exception -> L23e
        L12f:
            if (r6 == 0) goto L135
            r6.removeView(r0)     // Catch: java.lang.Exception -> L23e
            goto L146
        L135:
            if (r0 == 0) goto L146
            android.view.ViewParent r2 = r0.getParent()     // Catch: java.lang.Exception -> L23e
            if (r2 == 0) goto L146
            android.view.ViewParent r2 = r0.getParent()     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2     // Catch: java.lang.Exception -> L23e
            r2.removeView(r0)     // Catch: java.lang.Exception -> L23e
        L146:
            if (r1 == 0) goto L14d
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r12.w     // Catch: java.lang.Exception -> L23e
            r1.removeView(r0)     // Catch: java.lang.Exception -> L23e
        L14d:
            if (r7 == 0) goto L153
            r7.removeView(r1)     // Catch: java.lang.Exception -> L23e
            goto L166
        L153:
            if (r1 == 0) goto L166
            android.view.ViewParent r0 = r1.getParent()     // Catch: java.lang.Exception -> L23e
            if (r0 == 0) goto L166
            android.view.ViewParent r0 = r1.getParent()     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Exception -> L23e
            r0.removeView(r1)     // Catch: java.lang.Exception -> L23e
        L166:
            if (r6 == 0) goto L16c
            r6.removeView(r7)     // Catch: java.lang.Exception -> L23e
            goto L18b
        L16c:
            if (r7 == 0) goto L180
            android.view.ViewParent r0 = r7.getParent()     // Catch: java.lang.Exception -> L23e
            if (r0 == 0) goto L180
            android.view.ViewParent r0 = r7.getParent()     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Exception -> L23e
            r0.removeView(r7)     // Catch: java.lang.Exception -> L23e
            goto L18b
        L180:
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r0 = r12.F     // Catch: java.lang.Exception -> L23e
            if (r0 == 0) goto L18b
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r0 = r12.F     // Catch: java.lang.Exception -> L23e
            android.widget.RelativeLayout r1 = r12.G     // Catch: java.lang.Exception -> L23e
            r0.removeView(r1)     // Catch: java.lang.Exception -> L23e
        L18b:
            if (r5 == 0) goto L191
            r5.removeView(r6)     // Catch: java.lang.Exception -> L23e
            goto L1bf
        L191:
            if (r6 == 0) goto L1a5
            android.view.ViewParent r0 = r6.getParent()     // Catch: java.lang.Exception -> L23e
            if (r0 == 0) goto L1a5
            android.view.ViewParent r0 = r6.getParent()     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Exception -> L23e
            r0.removeView(r6)     // Catch: java.lang.Exception -> L23e
            goto L1bf
        L1a5:
            android.view.View r0 = r12.E     // Catch: java.lang.Exception -> L23e
            if (r0 == 0) goto L1bf
            android.view.View r0 = r12.E     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Exception -> L23e
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r1 = r12.F     // Catch: java.lang.Exception -> L23e
            r0.removeView(r1)     // Catch: java.lang.Exception -> L23e
            android.view.View r0 = r12.E     // Catch: java.lang.Exception -> L23e
            android.view.ViewParent r0 = r0.getParent()     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Exception -> L23e
            android.view.View r1 = r12.E     // Catch: java.lang.Exception -> L23e
            r0.removeView(r1)     // Catch: java.lang.Exception -> L23e
        L1bf:
            if (r3 == 0) goto L1e8
            if (r5 == 0) goto L1c7
            r3.removeView(r5)     // Catch: java.lang.Exception -> L23e
            goto L1e8
        L1c7:
            android.view.View r0 = r12.E     // Catch: java.lang.Exception -> L23e
            r3.removeView(r0)     // Catch: java.lang.Exception -> L23e
            android.view.View r0 = r12.E     // Catch: java.lang.Exception -> L23e
            android.view.ViewParent r0 = r0.getParent()     // Catch: java.lang.Exception -> L23e
            if (r0 == 0) goto L1e8
            android.view.View r0 = r12.E     // Catch: java.lang.Exception -> L23e
            android.view.ViewParent r0 = r0.getParent()     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Exception -> L23e
            android.view.View r1 = r12.E     // Catch: java.lang.Exception -> L23e
            r0.removeView(r1)     // Catch: java.lang.Exception -> L23e
            android.view.View r0 = r12.E     // Catch: java.lang.Exception -> L23e
            r1 = 8
            r0.setVisibility(r1)     // Catch: java.lang.Exception -> L23e
        L1e8:
            r0 = 0
            r12.setVisibility(r0)     // Catch: java.lang.Exception -> L23e
            r12.requestLayout()     // Catch: java.lang.Exception -> L23e
            if (r10 == 0) goto L21b
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r12.w     // Catch: java.lang.Exception -> L23e
            android.view.ViewParent r1 = r1.getParent()     // Catch: java.lang.Exception -> L23e
            if (r1 == 0) goto L20e
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r12.w     // Catch: java.lang.Exception -> L23e
            android.view.ViewParent r1 = r1.getParent()     // Catch: java.lang.Exception -> L23e
            if (r1 == r10) goto L20e
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r12.w     // Catch: java.lang.Exception -> L23e
            android.view.ViewParent r1 = r1.getParent()     // Catch: java.lang.Exception -> L23e
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Exception -> L23e
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r2 = r12.w     // Catch: java.lang.Exception -> L23e
            r1.removeView(r2)     // Catch: java.lang.Exception -> L23e
        L20e:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r12.w     // Catch: java.lang.Exception -> L23e
            int r2 = r12.L     // Catch: java.lang.Exception -> L23e
            r10.addView(r1, r2)     // Catch: java.lang.Exception -> L23e
            r10.removeView(r4)     // Catch: java.lang.Exception -> L23e
            r10.invalidate()     // Catch: java.lang.Exception -> L23e
        L21b:
            r12.i()     // Catch: java.lang.Exception -> L23e
            r12.h = r0     // Catch: java.lang.Exception -> L23e
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r12.w     // Catch: java.lang.Exception -> L23e
            if (r0 == 0) goto L248
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r12.w     // Catch: java.lang.Exception -> L23e
            r0.setExitFullScreen()     // Catch: java.lang.Exception -> L23e
            boolean r0 = r12.f     // Catch: java.lang.Exception -> L23e
            if (r0 == 0) goto L233
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r12.w     // Catch: java.lang.Exception -> L23e
            r0.openSound()     // Catch: java.lang.Exception -> L23e
            goto L238
        L233:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r12.w     // Catch: java.lang.Exception -> L23e
            r0.closeSound()     // Catch: java.lang.Exception -> L23e
        L238:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r12.w     // Catch: java.lang.Exception -> L23e
            r0.gonePauseView()     // Catch: java.lang.Exception -> L23e
            goto L248
        L23e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L248:
            return
    }

    static com.mbridge.msdk.nativex.view.WindVaneWebViewForNV y(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            com.mbridge.msdk.nativex.view.WindVaneWebViewForNV r0 = r0.B
            return r0
    }

    private boolean y() {
            r2 = this;
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r0 = r2.F     // Catch: java.lang.Throwable -> L2a
            android.widget.RelativeLayout r0 = r0.getMBridgeFullPlayContainer()     // Catch: java.lang.Throwable -> L2a
            r2.G = r0     // Catch: java.lang.Throwable -> L2a
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r0 = r2.F     // Catch: java.lang.Throwable -> L2a
            android.widget.RelativeLayout r0 = r0.getMBridgeFullPlayerParent()     // Catch: java.lang.Throwable -> L2a
            r2.K = r0     // Catch: java.lang.Throwable -> L2a
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r0 = r2.F     // Catch: java.lang.Throwable -> L2a
            android.widget.RelativeLayout r0 = r0.getMBridgeFullClose()     // Catch: java.lang.Throwable -> L2a
            r2.H = r0     // Catch: java.lang.Throwable -> L2a
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r0 = r2.F     // Catch: java.lang.Throwable -> L2a
            android.widget.TextView r0 = r0.getMBridgeFullTvInstall()     // Catch: java.lang.Throwable -> L2a
            r2.I = r0     // Catch: java.lang.Throwable -> L2a
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r0 = r2.F     // Catch: java.lang.Throwable -> L2a
            android.widget.ProgressBar r0 = r0.getMBridgeFullPb()     // Catch: java.lang.Throwable -> L2a
            r2.J = r0     // Catch: java.lang.Throwable -> L2a
            r0 = 1
            return r0
        L2a:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            r0 = 0
            return r0
    }

    private void z() {
            r2 = this;
            android.content.Context r0 = r2.getContext()     // Catch: java.lang.Throwable -> L1c
            int r0 = com.mbridge.msdk.foundation.tools.ae.i(r0)     // Catch: java.lang.Throwable -> L1c
            android.content.Context r1 = r2.getContext()     // Catch: java.lang.Throwable -> L1c
            int r1 = com.mbridge.msdk.foundation.tools.ae.j(r1)     // Catch: java.lang.Throwable -> L1c
            if (r0 < r1) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            r2.i = r0     // Catch: java.lang.Throwable -> L1c
            boolean r0 = r2.i     // Catch: java.lang.Throwable -> L1c
            r2.j = r0     // Catch: java.lang.Throwable -> L1c
            goto L26
        L1c:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L26:
            return
    }

    static boolean z(com.mbridge.msdk.nativex.view.MBMediaView r0) {
            boolean r0 = r0.i
            return r0
    }

    protected final void a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L26
            if (r0 != 0) goto L30
            java.util.ArrayList<java.lang.String> r0 = r1.m     // Catch: java.lang.Exception -> L26
            boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L26
            if (r0 != 0) goto L30
            java.util.ArrayList<java.lang.String> r0 = r1.m     // Catch: java.lang.Exception -> L26
            r0.add(r2)     // Catch: java.lang.Exception -> L26
            com.mbridge.msdk.out.OnMBMediaViewListener r2 = r1.ac     // Catch: java.lang.Exception -> L26
            if (r2 == 0) goto L1c
            com.mbridge.msdk.out.OnMBMediaViewListener r2 = r1.ac     // Catch: java.lang.Exception -> L26
            r2.onVideoStart()     // Catch: java.lang.Exception -> L26
        L1c:
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r2 = r1.ad     // Catch: java.lang.Exception -> L26
            if (r2 == 0) goto L30
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r2 = r1.ad     // Catch: java.lang.Exception -> L26
            r2.onVideoStart()     // Catch: java.lang.Exception -> L26
            goto L30
        L26:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L30:
            return
    }

    protected final void b(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L1d
            if (r0 != 0) goto L27
            java.util.ArrayList<java.lang.String> r0 = r1.n     // Catch: java.lang.Exception -> L1d
            boolean r0 = r0.contains(r2)     // Catch: java.lang.Exception -> L1d
            if (r0 != 0) goto L27
            java.util.ArrayList<java.lang.String> r0 = r1.n     // Catch: java.lang.Exception -> L1d
            r0.add(r2)     // Catch: java.lang.Exception -> L1d
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r2 = r1.ad     // Catch: java.lang.Exception -> L1d
            if (r2 == 0) goto L27
            com.mbridge.msdk.out.OnMBMediaViewListenerPlus r2 = r1.ad     // Catch: java.lang.Exception -> L1d
            r2.onVideoComplete()     // Catch: java.lang.Exception -> L1d
            goto L27
        L1d:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L27:
            return
    }

    @Override
    public void cai(java.lang.Object r8, java.lang.String r9) {
            r7 = this;
            java.lang.String r0 = "cai"
            java.lang.String r1 = "exception: "
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "cai:"
            r2.append(r3)
            r2.append(r9)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.a(r3, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r9)
            if (r2 == 0) goto L26
            java.lang.String r9 = "params is null"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r9)
            return
        L26:
            boolean r2 = android.text.TextUtils.isEmpty(r9)
            if (r2 != 0) goto Lc8
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            r2.<init>(r9)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r9 = "packageName"
            java.lang.String r9 = r2.optString(r9)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            boolean r2 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            if (r2 == 0) goto L42
            java.lang.String r2 = "packageName is empty"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r2)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
        L42:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            boolean r9 = com.mbridge.msdk.foundation.tools.ae.c(r2, r9)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            r2 = 2
            if (r9 == 0) goto L53
            r9 = 1
            goto L54
        L53:
            r9 = r2
        L54:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            r4.<init>()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r5 = "code"
            int r6 = com.mbridge.msdk.mbjscommon.bridge.b.b     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            r4.put(r5, r6)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            r5.<init>()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r6 = "result"
            r5.put(r6, r9)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r9 = "data"
            r4.put(r9, r5)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            com.mbridge.msdk.mbjscommon.windvane.h r9 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r2 = android.util.Base64.encodeToString(r4, r2)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            r9.a(r8, r2)     // Catch: java.lang.Exception -> L83 java.lang.Throwable -> L93 org.json.JSONException -> Lae
            goto Lc8
        L83:
            r9 = move-exception
            java.lang.String r2 = r9.getMessage()     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r2)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            com.mbridge.msdk.foundation.tools.z.a(r3, r9)     // Catch: java.lang.Throwable -> L93 org.json.JSONException -> Lae
            goto Lc8
        L93:
            r9 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = r9.getLocalizedMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r1)
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r9)
            goto Lc8
        Lae:
            r9 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = r9.getLocalizedMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r1)
            com.mbridge.msdk.foundation.tools.z.c(r3, r0, r9)
        Lc8:
            return
    }

    public boolean canShowVideo() {
            r3 = this;
            r0 = 0
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = r3.a(r0)
            com.mbridge.msdk.nativex.view.MBMediaView$a r2 = com.mbridge.msdk.nativex.view.MBMediaView.a.b
            if (r1 != r2) goto La
            r0 = 1
        La:
            return r0
    }

    public void changeNoticeURL() {
            r5 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.N
            if (r0 == 0) goto L77
            java.lang.String r0 = r0.getNoticeUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L77
            java.lang.String r1 = "is_video"
            boolean r1 = r0.contains(r1)
            if (r1 == 0) goto L3c
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = r5.ab
            com.mbridge.msdk.nativex.view.MBMediaView$a r2 = com.mbridge.msdk.nativex.view.MBMediaView.a.b
            java.lang.String r3 = "is_video=1"
            java.lang.String r4 = "is_video=2"
            if (r1 != r2) goto L2b
            boolean r1 = r0.contains(r4)
            if (r1 == 0) goto L72
            java.lang.String r0 = r0.replace(r4, r3)
            goto L72
        L2b:
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = r5.ab
            com.mbridge.msdk.nativex.view.MBMediaView$a r2 = com.mbridge.msdk.nativex.view.MBMediaView.a.a
            if (r1 != r2) goto L72
            boolean r1 = r0.contains(r3)
            if (r1 == 0) goto L72
            java.lang.String r0 = r0.replace(r3, r4)
            goto L72
        L3c:
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = r5.ab
            com.mbridge.msdk.nativex.view.MBMediaView$a r2 = com.mbridge.msdk.nativex.view.MBMediaView.a.b
            if (r1 != r2) goto L45
            java.lang.String r1 = "1"
            goto L50
        L45:
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = r5.ab
            com.mbridge.msdk.nativex.view.MBMediaView$a r2 = com.mbridge.msdk.nativex.view.MBMediaView.a.a
            if (r1 != r2) goto L4e
            java.lang.String r1 = "2"
            goto L50
        L4e:
            java.lang.String r1 = ""
        L50:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r0)
            java.lang.String r3 = "?"
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto L66
            java.lang.String r0 = "&is_video="
            r2.append(r0)
            r2.append(r1)
            goto L6e
        L66:
            java.lang.String r0 = "?is_video="
            r2.append(r0)
            r2.append(r1)
        L6e:
            java.lang.String r0 = r2.toString()
        L72:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.N
            r1.setNoticeUrl(r0)
        L77:
            return
    }

    public void destory() {
            r2 = this;
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r2.w     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L9
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r2.w     // Catch: java.lang.Throwable -> Ld
            r0.release()     // Catch: java.lang.Throwable -> Ld
        L9:
            r2.a()     // Catch: java.lang.Throwable -> Ld
            goto L17
        Ld:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L17:
            return
    }

    public void exitFullScreen() {
            r3 = this;
            java.lang.String r0 = "MBMediaView"
            r3.x()     // Catch: java.lang.Exception -> L2a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2a
            r1.<init>()     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "=========webview close mAllowLoopPlay:"
            r1.append(r2)     // Catch: java.lang.Exception -> L2a
            boolean r2 = r3.b     // Catch: java.lang.Exception -> L2a
            r1.append(r2)     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L2a
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L2a
            boolean r1 = r3.b     // Catch: java.lang.Exception -> L2a
            if (r1 == 0) goto L32
            java.lang.String r1 = "播放结束 调用onClickPlayButton"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L2a
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r3.w     // Catch: java.lang.Exception -> L2a
            r1.onClickPlayButton()     // Catch: java.lang.Exception -> L2a
            goto L32
        L2a:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L32:
            return
    }

    public java.lang.String getAddNVT2ToNoticeURL() {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.N
            if (r0 == 0) goto L2e
            java.lang.String r0 = r0.getNoticeUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L2d
            java.lang.String r1 = "nv_t2"
            boolean r1 = r0.contains(r1)
            if (r1 != 0) goto L2d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            java.lang.String r0 = "&nv_t2="
            r1.append(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.N
            int r0 = r0.getNvT2()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
        L2d:
            return r0
        L2e:
            r0 = 0
            return r0
    }

    @Override
    public void getEndScreenInfo(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r5 = "MBMediaView"
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L4a
            r0.<init>()     // Catch: java.lang.Throwable -> L4a
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.N     // Catch: java.lang.Throwable -> L4a
            r0.add(r1)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = r3.p()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = "MAL_16.3.67,3.0.1"
            java.lang.String r0 = r3.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L4a
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L4a
            if (r1 != 0) goto L26
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L4a
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Throwable -> L4a
            goto L28
        L26:
            java.lang.String r0 = ""
        L28:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a
            r1.<init>()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = "====getEndScreenInfo-mCampaign.name:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L4a
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r3.N     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = r2.getAppName()     // Catch: java.lang.Throwable -> L4a
            r1.append(r2)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L4a
            com.mbridge.msdk.foundation.tools.z.d(r5, r1)     // Catch: java.lang.Throwable -> L4a
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L4a
            r1.a(r4, r0)     // Catch: java.lang.Throwable -> L4a
            goto L52
        L4a:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        L52:
            return
    }

    public com.mbridge.msdk.nativex.view.mbfullview.BaseView getFullScreenViewByStyle(android.content.Context r3, com.mbridge.msdk.nativex.view.mbfullview.BaseView.a r4) {
            r2 = this;
            int[] r0 = com.mbridge.msdk.nativex.view.MBMediaView.11.a
            int r1 = r4.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L16
            r1 = 2
            if (r0 == r1) goto L10
            r3 = 0
            goto L1c
        L10:
            com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView r0 = new com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView
            r0.<init>(r3)
            goto L1b
        L16:
            com.mbridge.msdk.nativex.view.mbfullview.MBridgeFullView r0 = new com.mbridge.msdk.nativex.view.mbfullview.MBridgeFullView
            r0.<init>(r3)
        L1b:
            r3 = r0
        L1c:
            r3.setStytle(r4)
            return r3
    }

    @Override
    public void gial(java.lang.Object r8, java.lang.String r9) {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "gial:"
            r0.append(r1)
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.a(r0, r9)
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r9.<init>()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.mbjscommon.bridge.b.b     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r9.put(r1, r2)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r1.<init>()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            java.util.List<java.lang.String> r2 = com.mbridge.msdk.foundation.controller.a.c     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r3.<init>()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            if (r2 == 0) goto L47
            int r4 = r2.size()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            if (r4 <= 0) goto L47
            int r4 = r2.size()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r5 = 0
        L3b:
            if (r5 >= r4) goto L47
            java.lang.Object r6 = r2.get(r5)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r3.put(r6)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            int r5 = r5 + 1
            goto L3b
        L47:
            java.lang.String r2 = "packageNameList"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            java.lang.String r2 = "data"
            r9.put(r2, r1)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            com.mbridge.msdk.mbjscommon.windvane.h r1 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            byte[] r9 = r9.getBytes()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r2 = 2
            java.lang.String r9 = android.util.Base64.encodeToString(r9, r2)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            r1.a(r8, r9)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L76
            goto L85
        L66:
            r9 = move-exception
            java.lang.String r1 = r9.getMessage()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r1)
            java.lang.String r8 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
            goto L85
        L76:
            r9 = move-exception
            java.lang.String r1 = r9.getMessage()
            com.mbridge.msdk.mbjscommon.bridge.b.a(r8, r1)
            java.lang.String r8 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
        L85:
            return
    }

    public com.mbridge.msdk.nativex.view.mbfullview.BaseView.a handleViewStyleResult(android.content.Context r3) {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.N
            int r0 = r0.getNvT2()
            r1 = 1
            if (r0 == r1) goto L1c
            r3 = 2
            if (r0 == r3) goto L19
            r3 = 3
            if (r0 == r3) goto L19
            r3 = 4
            if (r0 == r3) goto L19
            r3 = 6
            if (r0 == r3) goto L16
            goto L1f
        L16:
            com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r3 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.a
            goto L20
        L19:
            com.mbridge.msdk.nativex.view.mbfullview.BaseView$a r3 = com.mbridge.msdk.nativex.view.mbfullview.BaseView.a.b
            goto L20
        L1c:
            r2.b(r3)
        L1f:
            r3 = 0
        L20:
            return r3
    }

    @Override
    public void handlerPlayableException(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void hideEndCardWebViewCloseBtn() {
            r2 = this;
            android.widget.ImageView r0 = r2.ai
            if (r0 == 0) goto L11
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L11
            android.widget.ImageView r0 = r2.ai
            r1 = 8
            r0.setVisibility(r1)
        L11:
            return
    }

    @Override
    public void install(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            android.content.Context r2 = r0.al     // Catch: java.lang.Exception -> L1c
            if (r2 == 0) goto La
            android.content.Context r1 = r0.al     // Catch: java.lang.Exception -> L1c
            r0.b(r1)     // Catch: java.lang.Exception -> L1c
            return
        La:
            boolean r2 = r1 instanceof com.mbridge.msdk.mbjscommon.windvane.a     // Catch: java.lang.Exception -> L1c
            if (r2 == 0) goto L26
            com.mbridge.msdk.mbjscommon.windvane.a r1 = (com.mbridge.msdk.mbjscommon.windvane.a) r1     // Catch: java.lang.Exception -> L1c
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r1.a     // Catch: java.lang.Exception -> L1c
            if (r1 == 0) goto L26
            android.content.Context r1 = r1.getContext()     // Catch: java.lang.Exception -> L1c
            r0.b(r1)     // Catch: java.lang.Exception -> L1c
            goto L26
        L1c:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L26:
            return
    }

    public boolean ismCurIsFullScreen() {
            r1 = this;
            boolean r0 = r1.h
            return r0
    }

    @Override
    public void notifyCloseBtn(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r5 = this;
            java.lang.String r0 = "MBMediaView"
            super.onAttachedToWindow()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L92
            r1.<init>()     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = "onAttachedToWindow start:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r5.N     // Catch: java.lang.Throwable -> L92
            if (r2 != 0) goto L16
            java.lang.String r2 = ""
            goto L1c
        L16:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r5.N     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = r2.getAppName()     // Catch: java.lang.Throwable -> L92
        L1c:
            r1.append(r2)     // Catch: java.lang.Throwable -> L92
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L92
            boolean r1 = r5.c     // Catch: java.lang.Throwable -> L92
            if (r1 == 0) goto L5d
            android.content.Context r1 = r5.getContext()     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = "sensor"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Throwable -> L55
            android.hardware.SensorManager r1 = (android.hardware.SensorManager) r1     // Catch: java.lang.Throwable -> L55
            r5.V = r1     // Catch: java.lang.Throwable -> L55
            r2 = 1
            android.hardware.Sensor r1 = r1.getDefaultSensor(r2)     // Catch: java.lang.Throwable -> L55
            r5.W = r1     // Catch: java.lang.Throwable -> L55
            com.mbridge.msdk.nativex.view.MBMediaView$e r1 = new com.mbridge.msdk.nativex.view.MBMediaView$e     // Catch: java.lang.Throwable -> L55
            r2 = 0
            r1.<init>(r5, r2)     // Catch: java.lang.Throwable -> L55
            r5.U = r1     // Catch: java.lang.Throwable -> L55
            android.hardware.SensorManager r2 = r5.V     // Catch: java.lang.Throwable -> L55
            android.hardware.Sensor r3 = r5.W     // Catch: java.lang.Throwable -> L55
            r4 = 2
            r2.registerListener(r1, r3, r4)     // Catch: java.lang.Throwable -> L55
            java.lang.String r1 = "register sensorlistener"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L55
            goto L5d
        L55:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L92
        L5d:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L92
            r2 = 11
            if (r1 < r2) goto L69
            boolean r1 = r5.isHardwareAccelerated()     // Catch: java.lang.Throwable -> L92
            r5.g = r1     // Catch: java.lang.Throwable -> L92
        L69:
            int r1 = r5.getOrientation()     // Catch: java.lang.Throwable -> L92
            r5.aj = r1     // Catch: java.lang.Throwable -> L92
            r5.d()     // Catch: java.lang.Throwable -> L92
            android.os.Handler r1 = r5.M     // Catch: java.lang.Throwable -> L92
            java.lang.Runnable r2 = r5.an     // Catch: java.lang.Throwable -> L92
            r3 = 300(0x12c, double:1.48E-321)
            r1.postDelayed(r2, r3)     // Catch: java.lang.Throwable -> L92
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L92
            r1.<init>()     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = "onAttachedToWindow setDisplay finalmCurDisplayMode:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.nativex.view.MBMediaView$a r2 = r5.ab     // Catch: java.lang.Throwable -> L92
            r1.append(r2)     // Catch: java.lang.Throwable -> L92
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L92
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L92
            goto L9a
        L92:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L9a:
            return
    }

    @Override
    public void onBufferingEnd() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r2.u
            if (r0 == 0) goto Le
            r0.bufferFinish()
            java.lang.String r0 = "omsdk"
            java.lang.String r1 = "videoEvents.bufferFinish()"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        Le:
            java.lang.String r0 = "bufferend"
            com.mbridge.msdk.foundation.tools.z.b(r0, r0)
            return
    }

    @Override
    public void onBufferingStart(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "bufferMsg"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r2 = r1.u
            if (r2 == 0) goto L13
            r2.bufferStart()
            java.lang.String r2 = "omsdk"
            java.lang.String r0 = "videoEvents.bufferStart()"
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
        L13:
            return
    }

    @Override
    protected void onConfigurationChanged(android.content.res.Configuration r4) {
            r3 = this;
            super.onConfigurationChanged(r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onConfigurationChange "
            r0.append(r1)
            int r1 = r4.orientation
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            boolean r0 = r3.ak
            if (r0 == 0) goto L47
            int r0 = r3.aj
            int r1 = r4.orientation
            if (r0 != r1) goto L26
            return
        L26:
            int r4 = r4.orientation
            r3.aj = r4
            r0 = 1
            r1 = 0
            if (r4 != 0) goto L30
            r4 = r0
            goto L31
        L30:
            r4 = r1
        L31:
            r3.i = r4
            int r4 = r3.aj
            if (r4 != 0) goto L38
            goto L39
        L38:
            r0 = r1
        L39:
            r3.j = r0
            android.os.Handler r4 = r3.M
            com.mbridge.msdk.nativex.view.MBMediaView$9 r0 = new com.mbridge.msdk.nativex.view.MBMediaView$9
            r0.<init>(r3)
            r1 = 200(0xc8, double:9.9E-322)
            r4.postDelayed(r0, r1)
        L47:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r4 = this;
            java.lang.String r0 = "MBMediaView"
            super.onDetachedFromWindow()
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r4.s     // Catch: java.lang.Throwable -> L5e
            r2 = 0
            if (r1 == 0) goto L21
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r4.w     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L13
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r4.w     // Catch: java.lang.Throwable -> L5e
            r1.unregisterView()     // Catch: java.lang.Throwable -> L5e
        L13:
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r4.s     // Catch: java.lang.Throwable -> L5e
            r1.finish()     // Catch: java.lang.Throwable -> L5e
            r4.s = r2     // Catch: java.lang.Throwable -> L5e
            java.lang.String r1 = "omsdk"
            java.lang.String r3 = "adSession finish"
            com.mbridge.msdk.foundation.tools.z.a(r1, r3)     // Catch: java.lang.Throwable -> L5e
        L21:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r4.u     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L27
            r4.u = r2     // Catch: java.lang.Throwable -> L5e
        L27:
            com.iab.omid.library.mmadbridge.adsession.AdEvents r1 = r4.t     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L2d
            r4.t = r2     // Catch: java.lang.Throwable -> L5e
        L2d:
            android.os.Handler r1 = r4.M     // Catch: java.lang.Throwable -> L5e
            java.lang.Runnable r3 = r4.an     // Catch: java.lang.Throwable -> L5e
            r1.removeCallbacks(r3)     // Catch: java.lang.Throwable -> L5e
            android.os.Handler r1 = r4.M     // Catch: java.lang.Throwable -> L5e
            if (r1 == 0) goto L3d
            android.os.Handler r1 = r4.M     // Catch: java.lang.Throwable -> L5e
            r1.removeCallbacksAndMessages(r2)     // Catch: java.lang.Throwable -> L5e
        L3d:
            android.hardware.SensorManager r1 = r4.V     // Catch: java.lang.Throwable -> L52
            if (r1 == 0) goto L5a
            com.mbridge.msdk.nativex.view.MBMediaView$e r1 = r4.U     // Catch: java.lang.Throwable -> L52
            if (r1 == 0) goto L5a
            android.hardware.SensorManager r1 = r4.V     // Catch: java.lang.Throwable -> L52
            com.mbridge.msdk.nativex.view.MBMediaView$e r2 = r4.U     // Catch: java.lang.Throwable -> L52
            r1.unregisterListener(r2)     // Catch: java.lang.Throwable -> L52
            java.lang.String r1 = "unRegister sensorlistener"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L52
            goto L5a
        L52:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> L5e
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L5e
        L5a:
            r4.a()     // Catch: java.lang.Throwable -> L5e
            goto L66
        L5e:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L66:
            return
    }

    @Override
    protected void onMeasure(int r4, int r5) {
            r3 = this;
            java.lang.String r0 = "MBMediaView"
            super.onMeasure(r4, r5)
            int r4 = r3.getHeight()     // Catch: java.lang.Throwable -> L12a
            r3.O = r4     // Catch: java.lang.Throwable -> L12a
            int r4 = r3.getWidth()     // Catch: java.lang.Throwable -> L12a
            r3.P = r4     // Catch: java.lang.Throwable -> L12a
            if (r4 != 0) goto L2f
            int r4 = r3.getMeasuredWidth()     // Catch: java.lang.Throwable -> L12a
            r3.P = r4     // Catch: java.lang.Throwable -> L12a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12a
            r4.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r5 = "onMeasure 宽度为0 调用getMeasuredWidth mDevWidth:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            int r5 = r3.P     // Catch: java.lang.Throwable -> L12a
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L12a
            com.mbridge.msdk.foundation.tools.z.c(r0, r4)     // Catch: java.lang.Throwable -> L12a
        L2f:
            int r4 = r3.O     // Catch: java.lang.Throwable -> L12a
            if (r4 != 0) goto L4f
            int r4 = r3.getMeasuredHeight()     // Catch: java.lang.Throwable -> L12a
            r3.O = r4     // Catch: java.lang.Throwable -> L12a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12a
            r4.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r5 = "onMeasure 高度为0 调用getMeasuredHeight mDevWidth:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            int r5 = r3.O     // Catch: java.lang.Throwable -> L12a
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L12a
            com.mbridge.msdk.foundation.tools.z.c(r0, r4)     // Catch: java.lang.Throwable -> L12a
        L4f:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12a
            r4.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r5 = "onMeasure pre mDevWidth "
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            int r5 = r3.P     // Catch: java.lang.Throwable -> L12a
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r5 = " mDevHeight:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            int r5 = r3.O     // Catch: java.lang.Throwable -> L12a
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r5 = " mCurDisplayMode:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            com.mbridge.msdk.nativex.view.MBMediaView$a r5 = r3.ab     // Catch: java.lang.Throwable -> L12a
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r5 = " mCurIsLandScape:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            boolean r5 = r3.i     // Catch: java.lang.Throwable -> L12a
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L12a
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L12a
            int r4 = r3.P     // Catch: java.lang.Throwable -> L12a
            if (r4 != 0) goto La8
            int r4 = r3.O     // Catch: java.lang.Throwable -> L12a
            if (r4 != 0) goto La8
            float r4 = r3.B()     // Catch: java.lang.Throwable -> L12a
            int r4 = (int) r4     // Catch: java.lang.Throwable -> L12a
            r3.P = r4     // Catch: java.lang.Throwable -> L12a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12a
            r4.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r5 = "onMeasure 宽度和高度都为0 宽度取屏幕宽度mDevWidth:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            int r5 = r3.P     // Catch: java.lang.Throwable -> L12a
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L12a
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Throwable -> L12a
        La8:
            com.mbridge.msdk.nativex.view.MBMediaView$a r4 = r3.ab     // Catch: java.lang.Throwable -> L12a
            com.mbridge.msdk.nativex.view.MBMediaView$a r5 = com.mbridge.msdk.nativex.view.MBMediaView.a.b     // Catch: java.lang.Throwable -> L12a
            if (r4 != r5) goto L10e
            boolean r4 = r3.h     // Catch: java.lang.Throwable -> L12a
            if (r4 != 0) goto L10e
            android.view.ViewGroup$LayoutParams r4 = r3.getLayoutParams()     // Catch: java.lang.Throwable -> L12a
            int r5 = r3.O     // Catch: java.lang.Throwable -> L12a
            if (r5 == 0) goto Lc8
            if (r4 == 0) goto Lc1
            int r5 = r4.height     // Catch: java.lang.Throwable -> L12a
            r1 = -2
            if (r5 == r1) goto Lc8
        Lc1:
            if (r4 == 0) goto Lea
            int r4 = r4.height     // Catch: java.lang.Throwable -> L12a
            r5 = -1
            if (r4 != r5) goto Lea
        Lc8:
            int r4 = r3.P     // Catch: java.lang.Throwable -> L12a
            double r4 = (double) r4     // Catch: java.lang.Throwable -> L12a
            double r1 = r3.R     // Catch: java.lang.Throwable -> L12a
            double r4 = r4 * r1
            double r1 = r3.Q     // Catch: java.lang.Throwable -> L12a
            double r4 = r4 / r1
            int r4 = (int) r4     // Catch: java.lang.Throwable -> L12a
            r3.O = r4     // Catch: java.lang.Throwable -> L12a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12a
            r4.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r5 = "onMeasure mDevHeight为0并且设置WRAP_CONTENT 拿视频宽高算高度mDevHeight:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            int r5 = r3.O     // Catch: java.lang.Throwable -> L12a
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L12a
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L12a
        Lea:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12a
            r4.<init>()     // Catch: java.lang.Throwable -> L12a
            java.lang.String r5 = "onMeasure after mDevWidth "
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            int r5 = r3.P     // Catch: java.lang.Throwable -> L12a
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r5 = " * mDevHeight *****"
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            int r5 = r3.O     // Catch: java.lang.Throwable -> L12a
            r4.append(r5)     // Catch: java.lang.Throwable -> L12a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L12a
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L12a
            r3.h()     // Catch: java.lang.Throwable -> L12a
            goto L132
        L10e:
            com.mbridge.msdk.nativex.view.MBMediaView$a r4 = r3.ab     // Catch: java.lang.Throwable -> L12a
            com.mbridge.msdk.nativex.view.MBMediaView$a r5 = com.mbridge.msdk.nativex.view.MBMediaView.a.a     // Catch: java.lang.Throwable -> L12a
            if (r4 != r5) goto L11c
            boolean r4 = r3.h     // Catch: java.lang.Throwable -> L12a
            if (r4 != 0) goto L11c
            r3.f()     // Catch: java.lang.Throwable -> L12a
            goto L132
        L11c:
            com.mbridge.msdk.nativex.view.MBMediaView$a r4 = r3.ab     // Catch: java.lang.Throwable -> L12a
            com.mbridge.msdk.nativex.view.MBMediaView$a r5 = com.mbridge.msdk.nativex.view.MBMediaView.a.c     // Catch: java.lang.Throwable -> L12a
            if (r4 != r5) goto L132
            boolean r4 = r3.h     // Catch: java.lang.Throwable -> L12a
            if (r4 != 0) goto L132
            r3.g()     // Catch: java.lang.Throwable -> L12a
            goto L132
        L12a:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L132:
            return
    }

    @Override
    public void onPlayCompleted() {
            r2 = this;
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r2.u
            if (r0 == 0) goto Le
            r0.complete()
            java.lang.String r0 = "omsdk"
            java.lang.String r1 = "videoEvents.complete()"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
        Le:
            return
    }

    @Override
    public void onPlayError(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "error"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)     // Catch: java.lang.Throwable -> L20
            com.mbridge.msdk.nativex.view.MBMediaView$17 r0 = new com.mbridge.msdk.nativex.view.MBMediaView$17     // Catch: java.lang.Throwable -> L20
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L20
            com.mbridge.msdk.foundation.controller.b r2 = com.mbridge.msdk.foundation.controller.b.a()     // Catch: java.lang.Throwable -> L20
            boolean r2 = r2.d()     // Catch: java.lang.Throwable -> L20
            if (r2 == 0) goto L1c
            java.util.concurrent.ThreadPoolExecutor r2 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Throwable -> L20
            r2.execute(r0)     // Catch: java.lang.Throwable -> L20
            goto L2a
        L1c:
            r0.run()     // Catch: java.lang.Throwable -> L20
            goto L2a
        L20:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L2a:
            return
    }

    @Override
    public void onPlayProgress(int r17, int r18) {
            r16 = this;
            r1 = r16
            r2 = r17
            java.lang.String r3 = "MBMediaView"
            r4 = 1
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.N     // Catch: java.lang.Exception -> Lb7
            if (r0 == 0) goto Lbf
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.N     // Catch: java.lang.Exception -> Lb7
            com.mbridge.msdk.foundation.entity.CampaignEx$b r0 = r0.getMediaViewHolder()     // Catch: java.lang.Exception -> Lb7
            if (r0 == 0) goto Lbf
            boolean r5 = r0.h     // Catch: java.lang.Exception -> Lb7
            if (r5 != 0) goto Lbf
            java.util.Map<java.lang.Integer, java.lang.String> r5 = r0.l     // Catch: java.lang.Exception -> Lb7
            if (r5 == 0) goto Lbf
            java.util.Map<java.lang.Integer, java.lang.String> r5 = r0.l     // Catch: java.lang.Exception -> Lb7
            int r5 = r5.size()     // Catch: java.lang.Exception -> Lb7
            if (r5 <= 0) goto Lbf
            java.util.Map<java.lang.Integer, java.lang.String> r5 = r0.l     // Catch: java.lang.Exception -> Lb7
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb7
            r6.<init>()     // Catch: java.lang.Exception -> Lb7
            java.lang.String r7 = "reportAdvImp pre advImpMap.size:"
            r6.append(r7)     // Catch: java.lang.Exception -> Lb7
            int r7 = r5.size()     // Catch: java.lang.Exception -> Lb7
            r6.append(r7)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Lb7
            com.mbridge.msdk.foundation.tools.z.b(r3, r6)     // Catch: java.lang.Exception -> Lb7
            java.util.Set r6 = r5.entrySet()     // Catch: java.lang.Exception -> Lb7
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Exception -> Lb7
            r13 = 0
            r14 = 0
        L47:
            boolean r7 = r6.hasNext()     // Catch: java.lang.Exception -> Lb7
            if (r7 == 0) goto L96
            java.lang.Object r7 = r6.next()     // Catch: java.lang.Exception -> Lb7
            java.util.Map$Entry r7 = (java.util.Map.Entry) r7     // Catch: java.lang.Exception -> Lb7
            java.lang.Object r8 = r7.getKey()     // Catch: java.lang.Exception -> Lb7
            java.lang.Integer r8 = (java.lang.Integer) r8     // Catch: java.lang.Exception -> Lb7
            java.lang.Object r7 = r7.getValue()     // Catch: java.lang.Exception -> Lb7
            r15 = r7
            java.lang.String r15 = (java.lang.String) r15     // Catch: java.lang.Exception -> Lb7
            int r7 = r8.intValue()     // Catch: java.lang.Exception -> Lb7
            if (r2 < r7) goto L47
            boolean r7 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Exception -> Lb7
            if (r7 != 0) goto L47
            android.content.Context r7 = r16.getContext()     // Catch: java.lang.Exception -> Lb7
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r1.N     // Catch: java.lang.Exception -> Lb7
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = r1.N     // Catch: java.lang.Exception -> Lb7
            java.lang.String r9 = r9.getCampaignUnitId()     // Catch: java.lang.Exception -> Lb7
            r10 = r15
            r11 = r13
            r12 = r14
            com.mbridge.msdk.click.b.a(r7, r8, r9, r10, r11, r12)     // Catch: java.lang.Exception -> Lb7
            r6.remove()     // Catch: java.lang.Exception -> Lb7
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb7
            r7.<init>()     // Catch: java.lang.Exception -> Lb7
            java.lang.String r8 = "reportAdvImp remove value:"
            r7.append(r8)     // Catch: java.lang.Exception -> Lb7
            r7.append(r15)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> Lb7
            com.mbridge.msdk.foundation.tools.z.b(r3, r7)     // Catch: java.lang.Exception -> Lb7
            goto L47
        L96:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb7
            r6.<init>()     // Catch: java.lang.Exception -> Lb7
            java.lang.String r7 = "reportAdvImp advImpMap after size:"
            r6.append(r7)     // Catch: java.lang.Exception -> Lb7
            int r7 = r5.size()     // Catch: java.lang.Exception -> Lb7
            r6.append(r7)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Lb7
            com.mbridge.msdk.foundation.tools.z.b(r3, r6)     // Catch: java.lang.Exception -> Lb7
            int r5 = r5.size()     // Catch: java.lang.Exception -> Lb7
            if (r5 > 0) goto Lbf
            r0.h = r4     // Catch: java.lang.Exception -> Lb7
            goto Lbf
        Lb7:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r0)
        Lbf:
            r16.a(r17, r18)
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r1.u
            r5 = 100
            if (r0 == 0) goto L129
            int r0 = r2 * 100
            int r0 = r0 / r18
            int r6 = r2 + 1
            int r6 = r6 * r5
            int r6 = r6 / r18
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "onPlayProgress: mCurPlayPosition = "
            r7.append(r8)
            r7.append(r2)
            java.lang.String r8 = " percent = "
            r7.append(r8)
            r7.append(r0)
            java.lang.String r8 = " nextPercent = "
            r7.append(r8)
            r7.append(r6)
            java.lang.String r7 = r7.toString()
            java.lang.String r8 = "omsdk"
            com.mbridge.msdk.foundation.tools.z.a(r8, r7)
            r7 = 25
            if (r0 > r7) goto L108
            if (r7 >= r6) goto L108
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r1.u
            r0.firstQuartile()
            java.lang.String r0 = "videoEvents.firstQuartile()"
            com.mbridge.msdk.foundation.tools.z.a(r8, r0)
            goto L129
        L108:
            r7 = 50
            if (r0 > r7) goto L119
            if (r7 >= r6) goto L119
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r1.u
            r0.midpoint()
            java.lang.String r0 = "videoEvents.midpoint()"
            com.mbridge.msdk.foundation.tools.z.a(r8, r0)
            goto L129
        L119:
            r7 = 75
            if (r0 > r7) goto L129
            if (r7 >= r6) goto L129
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r0 = r1.u
            r0.thirdQuartile()
            java.lang.String r0 = "videoEvents.thirdQuartile()"
            com.mbridge.msdk.foundation.tools.z.a(r8, r0)
        L129:
            int r0 = r16.t()
            if (r0 == r5) goto L1de
            boolean r0 = r1.am
            if (r0 != 0) goto L1de
            r0 = 0
            com.mbridge.msdk.c.d r6 = r16.u()
            if (r6 == 0) goto L142
            com.mbridge.msdk.c.d r0 = r16.u()
            int r0 = r0.g()
        L142:
            int r6 = r16.t()
            if (r6 != 0) goto L149
            return
        L149:
            if (r0 <= r6) goto L14d
            int r0 = r6 / 2
        L14d:
            if (r0 < 0) goto L1de
            int r0 = r0 * r18
            int r0 = r0 / r5
            if (r2 < r0) goto L1de
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.N
            int r2 = r2.getAdType()
            r5 = 94
            if (r2 == r5) goto L18e
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.N
            int r2 = r2.getAdType()
            r5 = 287(0x11f, float:4.02E-43)
            if (r2 != r5) goto L169
            goto L18e
        L169:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r1.N
            java.lang.String r5 = r5.getId()
            r2.append(r5)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r1.N
            java.lang.String r5 = r5.getVideoUrlEncode()
            r2.append(r5)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r1.N
            java.lang.String r5 = r5.getBidToken()
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            goto L1b2
        L18e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r1.N
            java.lang.String r5 = r5.getRequestId()
            r2.append(r5)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r1.N
            java.lang.String r5 = r5.getId()
            r2.append(r5)
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r1.N
            java.lang.String r5 = r5.getVideoUrlEncode()
            r2.append(r5)
            java.lang.String r2 = r2.toString()
        L1b2:
            com.mbridge.msdk.videocommon.download.b r5 = com.mbridge.msdk.videocommon.download.b.getInstance()
            java.lang.String r6 = r16.p()
            com.mbridge.msdk.videocommon.download.a r2 = r5.a(r6, r2)
            if (r2 == 0) goto L1de
            r2.j()
            r1.am = r4
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "CDRate is : "
            r2.append(r4)
            r2.append(r0)
            java.lang.String r0 = " and start download !"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.d(r3, r0)
        L1de:
            return
    }

    @Override
    public void onPlayProgressMS(int r1, int r2) {
            r0 = this;
            return
    }

    @Override
    public void onPlaySetDataSourceError(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "errorstr"
            com.mbridge.msdk.foundation.tools.z.b(r0, r2)
            return
    }

    @Override
    public void onPlayStarted(int r4) {
            r3 = this;
            java.lang.String r0 = "omsdk"
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r3.u
            if (r1 == 0) goto L20
            float r4 = (float) r4
            boolean r2 = r3.f     // Catch: java.lang.IllegalArgumentException -> L13
            if (r2 == 0) goto Le
            r2 = 1065353216(0x3f800000, float:1.0)
            goto Lf
        Le:
            r2 = 0
        Lf:
            r1.start(r4, r2)     // Catch: java.lang.IllegalArgumentException -> L13
            goto L1b
        L13:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)
        L1b:
            java.lang.String r4 = "videoEvents.start()"
            com.mbridge.msdk.foundation.tools.z.a(r0, r4)
        L20:
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            java.lang.String r1 = "MBMediaView"
            java.lang.String r2 = "onVisibilityChanged invoked"
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r4) {
            r3 = this;
            java.lang.String r0 = "MBMediaView"
            super.onWindowFocusChanged(r4)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8b
            r1.<init>()     // Catch: java.lang.Throwable -> L8b
            java.lang.String r2 = "hasWindowFocus:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L8b
            r1.append(r4)     // Catch: java.lang.Throwable -> L8b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L8b
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L8b
            r3.e = r4     // Catch: java.lang.Throwable -> L8b
            com.mbridge.msdk.nativex.view.MBMediaView$a r1 = r3.ab     // Catch: java.lang.Throwable -> L8b
            com.mbridge.msdk.nativex.view.MBMediaView$a r2 = com.mbridge.msdk.nativex.view.MBMediaView.a.b     // Catch: java.lang.Throwable -> L8b
            if (r1 != r2) goto L2a
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r3.w     // Catch: java.lang.Throwable -> L8b
            if (r1 == 0) goto L2a
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r3.w     // Catch: java.lang.Throwable -> L8b
            r1.setIsFrontDesk(r4)     // Catch: java.lang.Throwable -> L8b
        L2a:
            boolean r4 = r3.h     // Catch: java.lang.Throwable -> L7a
            if (r4 != 0) goto L34
            java.lang.String r4 = "initFullPlayerOnWindowFocus 在半屏 return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L7a
            goto L82
        L34:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r3.w     // Catch: java.lang.Throwable -> L7a
            if (r4 == 0) goto L74
            boolean r4 = r3.e     // Catch: java.lang.Throwable -> L7a
            if (r4 == 0) goto L69
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r3.w     // Catch: java.lang.Throwable -> L7a
            boolean r4 = r4.isPlaying()     // Catch: java.lang.Throwable -> L7a
            if (r4 == 0) goto L4a
            java.lang.String r4 = "fullscreen windowfocuse true isPlaying do nothing return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L7a
            goto L82
        L4a:
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r3.w     // Catch: java.lang.Throwable -> L7a
            if (r4 == 0) goto L82
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r3.w     // Catch: java.lang.Throwable -> L7a
            boolean r4 = r4.isComplete()     // Catch: java.lang.Throwable -> L7a
            if (r4 != 0) goto L82
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r3.w     // Catch: java.lang.Throwable -> L7a
            boolean r4 = r4.getIsActiviePause()     // Catch: java.lang.Throwable -> L7a
            if (r4 != 0) goto L82
            java.lang.String r4 = "fullscreen windowfocuse true startOrPlayVideo"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Throwable -> L7a
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r3.w     // Catch: java.lang.Throwable -> L7a
            r4.onClickPlayButton()     // Catch: java.lang.Throwable -> L7a
            goto L82
        L69:
            java.lang.String r4 = "fullscreen windowfocuse false pasue======"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L7a
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r4 = r3.w     // Catch: java.lang.Throwable -> L7a
            r4.pause()     // Catch: java.lang.Throwable -> L7a
            goto L82
        L74:
            java.lang.String r4 = "fullscreen playerview is null return"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Throwable -> L7a
            goto L82
        L7a:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> L8b
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)     // Catch: java.lang.Throwable -> L8b
        L82:
            r3.requestLayout()     // Catch: java.lang.Throwable -> L8b
            java.lang.String r4 = "onWindowFocusChanged reqeusetlaytout"
            com.mbridge.msdk.foundation.tools.z.b(r0, r4)     // Catch: java.lang.Throwable -> L8b
            goto L93
        L8b:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L93:
            return
    }

    @Override
    public void openURL(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "openURL:"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L22
            java.lang.String r5 = "params is null"
            com.mbridge.msdk.mbjscommon.bridge.b.a(r4, r5)
            return
        L22:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 != 0) goto L7d
            if (r0 != 0) goto L4a
            boolean r2 = r4 instanceof com.mbridge.msdk.mbjscommon.windvane.a     // Catch: java.lang.Exception -> L42
            if (r2 == 0) goto L4a
            com.mbridge.msdk.mbjscommon.windvane.a r4 = (com.mbridge.msdk.mbjscommon.windvane.a) r4     // Catch: java.lang.Exception -> L42
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r4 = r4.a     // Catch: java.lang.Exception -> L42
            if (r4 == 0) goto L4a
            android.content.Context r4 = r4.getContext()     // Catch: java.lang.Exception -> L42
            r0 = r4
            goto L4a
        L42:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)
        L4a:
            if (r0 != 0) goto L4d
            return
        L4d:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L6c org.json.JSONException -> L75
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L6c org.json.JSONException -> L75
            java.lang.String r5 = "url"
            java.lang.String r5 = r4.optString(r5)     // Catch: java.lang.Throwable -> L6c org.json.JSONException -> L75
            java.lang.String r2 = "type"
            int r4 = r4.optInt(r2)     // Catch: java.lang.Throwable -> L6c org.json.JSONException -> L75
            r2 = 1
            if (r4 != r2) goto L65
            com.mbridge.msdk.click.c.a(r0, r5)     // Catch: java.lang.Throwable -> L6c org.json.JSONException -> L75
            goto L7d
        L65:
            r2 = 2
            if (r4 != r2) goto L7d
            com.mbridge.msdk.click.c.b(r0, r5)     // Catch: java.lang.Throwable -> L6c org.json.JSONException -> L75
            goto L7d
        L6c:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)
            goto L7d
        L75:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)
        L7d:
            return
    }

    public void setAllowLoopPlay(boolean r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setAllowScreenChange(boolean r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setAllowVideoRefresh(boolean r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setFollowActivityOrientation(boolean r1) {
            r0 = this;
            r0.ak = r1
            return
    }

    public void setFullScreenViewBackgroundColor(int r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public void setIsAllowFullScreen(boolean r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setNativeAd(com.mbridge.msdk.out.Campaign r12) {
            r11 = this;
            java.lang.String r0 = "MBMediaView"
            if (r12 != 0) goto La
            java.lang.String r12 = "setNativeAd campaign is null return"
            com.mbridge.msdk.foundation.tools.z.d(r0, r12)     // Catch: java.lang.Throwable -> L196
            return
        La:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.N     // Catch: java.lang.Throwable -> L196
            if (r1 == 0) goto L18
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.N     // Catch: java.lang.Throwable -> L196
            if (r1 != r12) goto L18
            java.lang.String r12 = "setNativeAd has init return"
            com.mbridge.msdk.foundation.tools.z.b(r0, r12)     // Catch: java.lang.Throwable -> L196
            return
        L18:
            r1 = 1
            r11.e = r1     // Catch: java.lang.Throwable -> L196
            r11.g = r1     // Catch: java.lang.Throwable -> L196
            r1 = 0
            r11.h = r1     // Catch: java.lang.Throwable -> L196
            r11.i = r1     // Catch: java.lang.Throwable -> L196
            r11.j = r1     // Catch: java.lang.Throwable -> L196
            r11.r = r1     // Catch: java.lang.Throwable -> L196
            r11.z()     // Catch: java.lang.Throwable -> L196
            r1 = r12
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = (com.mbridge.msdk.foundation.entity.CampaignEx) r1     // Catch: java.lang.Throwable -> L196
            r11.N = r1     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx$b r1 = r1.getMediaViewHolder()     // Catch: java.lang.Throwable -> L196
            if (r1 != 0) goto L60
            com.mbridge.msdk.foundation.entity.CampaignEx$b r1 = new com.mbridge.msdk.foundation.entity.CampaignEx$b     // Catch: java.lang.Throwable -> L196
            r1.<init>()     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Throwable -> L196
            java.util.Map r2 = r2.getAdvImpList()     // Catch: java.lang.Throwable -> L196
            r1.l = r2     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Throwable -> L196
            r2.setMediaViewHolder(r1)     // Catch: java.lang.Throwable -> L196
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L196
            r1.<init>()     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = "setNativeAd mediaViewHolder appname:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = r2.getAppName()     // Catch: java.lang.Throwable -> L196
            r1.append(r2)     // Catch: java.lang.Throwable -> L196
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Throwable -> L196
        L60:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.N     // Catch: java.lang.Throwable -> L196
            int r1 = r1.getAdType()     // Catch: java.lang.Throwable -> L196
            r2 = 94
            if (r1 == r2) goto L9a
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.N     // Catch: java.lang.Throwable -> L196
            int r1 = r1.getAdType()     // Catch: java.lang.Throwable -> L196
            r2 = 287(0x11f, float:4.02E-43)
            if (r1 != r2) goto L75
            goto L9a
        L75:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L196
            r1.<init>()     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = r2.getId()     // Catch: java.lang.Throwable -> L196
            r1.append(r2)     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = r2.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L196
            r1.append(r2)     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = r2.getBidToken()     // Catch: java.lang.Throwable -> L196
            r1.append(r2)     // Catch: java.lang.Throwable -> L196
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L196
            goto Lbe
        L9a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L196
            r1.<init>()     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = r2.getRequestId()     // Catch: java.lang.Throwable -> L196
            r1.append(r2)     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = r2.getId()     // Catch: java.lang.Throwable -> L196
            r1.append(r2)     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = r2.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L196
            r1.append(r2)     // Catch: java.lang.Throwable -> L196
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L196
        Lbe:
            com.mbridge.msdk.videocommon.download.b r2 = com.mbridge.msdk.videocommon.download.b.getInstance()     // Catch: java.lang.Throwable -> L196
            java.lang.String r3 = r11.p()     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.videocommon.download.a r1 = r2.a(r3, r1)     // Catch: java.lang.Throwable -> L196
            r11.aa = r1     // Catch: java.lang.Throwable -> L196
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L196
            r1.<init>()     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = "setNativeAd cid"
            r1.append(r2)     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = r2.getId()     // Catch: java.lang.Throwable -> L196
            r1.append(r2)     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = " appname:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = r2.getAppName()     // Catch: java.lang.Throwable -> L196
            r1.append(r2)     // Catch: java.lang.Throwable -> L196
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L196
            boolean r1 = r11.q     // Catch: java.lang.Throwable -> L196
            java.lang.String r2 = "omsdk"
            if (r1 == 0) goto L120
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r11.s     // Catch: java.lang.Throwable -> L196
            r3 = 0
            if (r1 == 0) goto L114
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r11.w     // Catch: java.lang.Throwable -> L196
            if (r1 == 0) goto L108
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r1 = r11.w     // Catch: java.lang.Throwable -> L196
            r1.unregisterView()     // Catch: java.lang.Throwable -> L196
        L108:
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r11.s     // Catch: java.lang.Throwable -> L196
            r1.finish()     // Catch: java.lang.Throwable -> L196
            r11.s = r3     // Catch: java.lang.Throwable -> L196
            java.lang.String r1 = "adSession finish"
            com.mbridge.msdk.foundation.tools.z.a(r2, r1)     // Catch: java.lang.Throwable -> L196
        L114:
            com.iab.omid.library.mmadbridge.adsession.media.MediaEvents r1 = r11.u     // Catch: java.lang.Throwable -> L196
            if (r1 == 0) goto L11a
            r11.u = r3     // Catch: java.lang.Throwable -> L196
        L11a:
            com.iab.omid.library.mmadbridge.adsession.AdEvents r1 = r11.t     // Catch: java.lang.Throwable -> L196
            if (r1 == 0) goto L120
            r11.t = r3     // Catch: java.lang.Throwable -> L196
        L120:
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.N     // Catch: java.lang.Throwable -> L196
            if (r1 == 0) goto L174
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.N     // Catch: java.lang.Throwable -> L196
            boolean r1 = r1.isActiveOm()     // Catch: java.lang.Throwable -> L196
            if (r1 == 0) goto L174
            android.content.Context r3 = r11.getContext()     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r1 = r1.getVideoUrlEncode()     // Catch: java.lang.Throwable -> L196
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r5 = r1.getOmid()     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r6 = r1.getRequestId()     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r7 = r1.getId()     // Catch: java.lang.Throwable -> L196
            java.lang.String r8 = r11.p()     // Catch: java.lang.Throwable -> L196
            java.lang.String r9 = ""
            com.mbridge.msdk.foundation.entity.CampaignEx r12 = (com.mbridge.msdk.foundation.entity.CampaignEx) r12     // Catch: java.lang.Throwable -> L196
            java.lang.String r10 = r12.getRequestIdNotice()     // Catch: java.lang.Throwable -> L196
            com.iab.omid.library.mmadbridge.adsession.AdSession r12 = com.mbridge.msdk.a.b.a(r3, r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L196
            r11.s = r12     // Catch: java.lang.Throwable -> L196
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L196
            r12.<init>()     // Catch: java.lang.Throwable -> L196
            java.lang.String r1 = "adSession.Create "
            r12.append(r1)     // Catch: java.lang.Throwable -> L196
            com.iab.omid.library.mmadbridge.adsession.AdSession r1 = r11.s     // Catch: java.lang.Throwable -> L196
            r12.append(r1)     // Catch: java.lang.Throwable -> L196
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.tools.z.a(r2, r12)     // Catch: java.lang.Throwable -> L196
        L174:
            boolean r12 = r11.q     // Catch: java.lang.Throwable -> L196
            if (r12 == 0) goto L19e
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L196
            r12.<init>()     // Catch: java.lang.Throwable -> L196
            java.lang.String r1 = "setNativeAd setDisplay appname:"
            r12.append(r1)     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r11.N     // Catch: java.lang.Throwable -> L196
            java.lang.String r1 = r1.getAppName()     // Catch: java.lang.Throwable -> L196
            r12.append(r1)     // Catch: java.lang.Throwable -> L196
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L196
            com.mbridge.msdk.foundation.tools.z.b(r0, r12)     // Catch: java.lang.Throwable -> L196
            r11.d()     // Catch: java.lang.Throwable -> L196
            goto L19e
        L196:
            r12 = move-exception
            java.lang.String r12 = r12.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r12)
        L19e:
            return
    }

    public void setOnMediaViewListener(com.mbridge.msdk.out.OnMBMediaViewListener r1) {
            r0 = this;
            r0.ac = r1
            return
    }

    public void setOnMediaViewListener(com.mbridge.msdk.out.OnMBMediaViewListenerPlus r1) {
            r0 = this;
            r0.ad = r1
            return
    }

    @Override
    public void setOrientation(java.lang.Object r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void setProgressVisibility(boolean r2) {
            r1 = this;
            r1.k = r2
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.w
            if (r0 == 0) goto L9
            r0.showProgressView(r2)
        L9:
            return
    }

    public void setSoundIndicatorVisibility(boolean r2) {
            r1 = this;
            r1.l = r2
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.w
            if (r0 == 0) goto L9
            r0.showSoundIndicator(r2)
        L9:
            return
    }

    public void setVideoSoundOnOff(boolean r2) {
            r1 = this;
            r1.f = r2
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r0 = r1.w
            if (r0 == 0) goto Lf
            if (r2 == 0) goto Lc
            r0.openSound()
            goto Lf
        Lc:
            r0.closeSound()
        Lf:
            return
    }

    public void showEndCardWebViewCloseBtn() {
            r2 = this;
            android.widget.ImageView r0 = r2.ai
            if (r0 == 0) goto L10
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L10
            android.widget.ImageView r0 = r2.ai
            r1 = 0
            r0.setVisibility(r1)
        L10:
            return
    }

    @Override
    public void toggleCloseBtn(java.lang.Object r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "MBMediaView"
            r1 = 1
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L28
            if (r2 != 0) goto L13
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L13
            r2.<init>(r5)     // Catch: java.lang.Exception -> L13
            java.lang.String r5 = "state"
            r2.optInt(r5, r1)     // Catch: java.lang.Exception -> L13
        L13:
            java.lang.String r5 = "SHOW CLOSE BTN "
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)     // Catch: java.lang.Exception -> L28
            r3.showEndCardWebViewCloseBtn()     // Catch: java.lang.Exception -> L28
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L28
            r2 = 0
            java.lang.String r2 = r3.a(r2)     // Catch: java.lang.Exception -> L28
            r5.a(r4, r2)     // Catch: java.lang.Exception -> L28
            return
        L28:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            java.lang.String r0 = r3.a(r1)
            r5.b(r4, r0)
            return
    }

    @Override
    public void triggerCloseBtn(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            r1.exitFullScreen()     // Catch: java.lang.Exception -> L10
            com.mbridge.msdk.mbjscommon.windvane.h r3 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L10
            r0 = 0
            java.lang.String r0 = r1.a(r0)     // Catch: java.lang.Exception -> L10
            r3.a(r2, r0)     // Catch: java.lang.Exception -> L10
            return
        L10:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r0 = "MBMediaView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            com.mbridge.msdk.mbjscommon.windvane.h r3 = com.mbridge.msdk.mbjscommon.windvane.h.a()
            r0 = 1
            java.lang.String r0 = r1.a(r0)
            r3.b(r2, r0)
            return
    }

    public void updateViewManger(boolean r6) {
            r5 = this;
            android.content.Context r0 = r5.getContext()
            com.mbridge.msdk.nativex.view.mbfullview.a r0 = com.mbridge.msdk.nativex.view.mbfullview.a.a(r0)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L2c
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r3 = r5.F     // Catch: java.lang.NullPointerException -> L62
            android.widget.LinearLayout r3 = r3.getmAnimationPlayer()     // Catch: java.lang.NullPointerException -> L62
            r3.clearAnimation()     // Catch: java.lang.NullPointerException -> L62
            com.mbridge.msdk.nativex.view.MediaViewPlayerView r3 = r5.w     // Catch: java.lang.NullPointerException -> L62
            boolean r3 = r3.isComplete()     // Catch: java.lang.NullPointerException -> L62
            if (r3 != 0) goto L1f
            r3 = r1
            goto L20
        L1f:
            r3 = r2
        L20:
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r4 = r5.F     // Catch: java.lang.NullPointerException -> L62
            r0.a(r6, r3, r4)     // Catch: java.lang.NullPointerException -> L62
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r3 = r5.F     // Catch: java.lang.NullPointerException -> L62
            int r4 = r5.ae     // Catch: java.lang.NullPointerException -> L62
            r0.a(r6, r3, r4)     // Catch: java.lang.NullPointerException -> L62
        L2c:
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r3 = r5.F     // Catch: java.lang.NullPointerException -> L62
            boolean r3 = r3 instanceof com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView     // Catch: java.lang.NullPointerException -> L62
            if (r3 == 0) goto L66
            if (r0 == 0) goto L66
            if (r6 != 0) goto L37
            goto L38
        L37:
            r1 = r2
        L38:
            com.mbridge.msdk.nativex.view.mbfullview.BaseView r6 = r5.F     // Catch: java.lang.NullPointerException -> L62
            boolean r0 = r6 instanceof com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView     // Catch: java.lang.NullPointerException -> L62
            if (r0 == 0) goto L66
            com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView r6 = (com.mbridge.msdk.nativex.view.mbfullview.MBridgeTopFullView) r6     // Catch: java.lang.NullPointerException -> L62
            if (r1 == 0) goto L43
            goto L45
        L43:
            r2 = 8
        L45:
            android.widget.ImageView r0 = r6.getMBridgeFullViewDisplayIcon()     // Catch: java.lang.NullPointerException -> L62
            r0.setVisibility(r2)     // Catch: java.lang.NullPointerException -> L62
            android.widget.TextView r0 = r6.getMBridgeFullViewDisplayTitle()     // Catch: java.lang.NullPointerException -> L62
            r0.setVisibility(r2)     // Catch: java.lang.NullPointerException -> L62
            android.widget.TextView r0 = r6.getMBridgeFullViewDisplayDscription()     // Catch: java.lang.NullPointerException -> L62
            r0.setVisibility(r2)     // Catch: java.lang.NullPointerException -> L62
            com.mbridge.msdk.nativex.view.mbfullview.StarLevelLayoutView r6 = r6.getStarLevelLayoutView()     // Catch: java.lang.NullPointerException -> L62
            r6.setVisibility(r2)     // Catch: java.lang.NullPointerException -> L62
            goto L66
        L62:
            r6 = move-exception
            r6.printStackTrace()
        L66:
            return
    }
}
