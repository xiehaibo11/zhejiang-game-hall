package com.tkay.basead.ui;

public class PlayerView extends android.widget.RelativeLayout {
    public static final java.lang.String TAG = null;
    private com.tkay.basead.ui.PlayerView.a A;
    private android.os.Handler B;
    private boolean C;
    private java.lang.Thread D;
    private int E;
    private int F;
    private boolean G;
    private boolean H;
    private android.view.View I;
    private com.tkay.expressad.exoplayer.w.c J;
    private com.tkay.expressad.exoplayer.l.g K;
    private final long L;
    private long M;
    int a;
    int b;
    int c;
    boolean d;
    java.lang.String e;
    java.lang.String f;
    private com.tkay.expressad.exoplayer.ad g;
    private com.tkay.expressad.exoplayer.h.s h;
    private android.view.TextureView i;
    private java.lang.String j;
    private java.lang.String k;
    private int l;
    private int m;
    private int n;
    private int o;
    private int p;
    private int q;
    private int r;
    private boolean s;
    private boolean t;
    private boolean u;
    private boolean v;
    private boolean w;
    private boolean x;
    private boolean y;
    private boolean z;



    final class 3 extends com.tkay.expressad.exoplayer.w.a {
        final com.tkay.basead.ui.PlayerView a;

        3(com.tkay.basead.ui.PlayerView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onPlayerError(com.tkay.expressad.exoplayer.g r7) {
                r6 = this;
                super.onPlayerError(r7)
                r0 = 0
                java.lang.String r1 = "Play error and ExoPlayer have not message."
                if (r7 == 0) goto L4d
                int r2 = r7.d
                r3 = 1
                if (r2 == 0) goto L1a
                if (r2 == r3) goto L17
                r3 = 2
                if (r2 == r3) goto L14
            L12:
                r3 = r0
                goto L1c
            L14:
                java.lang.String r1 = "Play error, because have a UnexpectedException."
                goto L12
            L17:
                java.lang.String r1 = "Play error, because have a RendererException."
                goto L12
            L1a:
                java.lang.String r1 = "Play error, because have a SourceException."
            L1c:
                java.lang.Throwable r2 = r7.getCause()
                if (r2 == 0) goto L4e
                java.lang.Throwable r2 = r7.getCause()
                java.lang.String r2 = r2.getMessage()
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 != 0) goto L4e
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r1)
                java.lang.String r1 = ",eception:"
                r2.append(r1)
                java.lang.Throwable r7 = r7.getCause()
                java.lang.String r7 = r7.getMessage()
                r2.append(r7)
                java.lang.String r1 = r2.toString()
                goto L4e
            L4d:
                r3 = r0
            L4e:
                com.tkay.basead.ui.PlayerView r7 = r6.a
                boolean r7 = r7.d
                if (r7 == 0) goto L75
                if (r3 == 0) goto L75
                com.tkay.basead.ui.PlayerView r7 = r6.a
                r7.f = r1
                java.lang.String r7 = com.tkay.basead.ui.PlayerView.TAG
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                java.lang.String r2 = "ExoPlayer onPlayerError()...error:"
                r7.<init>(r2)
                r7.append(r1)
                java.lang.String r1 = ",and rePrepareVideoSourceAgain"
                r7.append(r1)
                com.tkay.basead.ui.PlayerView r7 = r6.a
                r7.d = r0
                com.tkay.basead.ui.PlayerView r7 = r6.a
                com.tkay.basead.ui.PlayerView.p(r7)
                return
            L75:
                java.lang.String r7 = com.tkay.basead.ui.PlayerView.TAG
                com.tkay.basead.ui.PlayerView r7 = r6.a
                com.tkay.basead.ui.PlayerView.q(r7)
                com.tkay.basead.ui.PlayerView r7 = r6.a
                com.tkay.basead.ui.PlayerView$a r7 = com.tkay.basead.ui.PlayerView.d(r7)
                if (r7 == 0) goto L143
                r2 = 0
                com.tkay.basead.ui.PlayerView r7 = r6.a     // Catch: java.lang.Throwable -> L91
                com.tkay.expressad.exoplayer.ad r7 = com.tkay.basead.ui.PlayerView.r(r7)     // Catch: java.lang.Throwable -> L91
                long r4 = r7.t()     // Catch: java.lang.Throwable -> L91
                goto L92
            L91:
                r4 = r2
            L92:
                int r7 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
                if (r7 > 0) goto L99
                java.lang.String r7 = "50001"
                goto L9b
            L99:
                java.lang.String r7 = "40002"
            L9b:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r2 = "videoUrl:"
                r0.<init>(r2)
                com.tkay.basead.ui.PlayerView r2 = r6.a
                java.lang.String r2 = com.tkay.basead.ui.PlayerView.s(r2)
                r0.append(r2)
                java.lang.String r2 = ",readyRate:"
                r0.append(r2)
                com.tkay.basead.ui.PlayerView r2 = r6.a
                int r2 = r2.c
                r0.append(r2)
                java.lang.String r2 = ",cdRate:"
                r0.append(r2)
                com.tkay.basead.ui.PlayerView r2 = r6.a
                int r2 = r2.b
                r0.append(r2)
                java.lang.String r2 = ",play process:"
                r0.append(r2)
                r0.append(r4)
                java.lang.String r0 = r0.toString()
                com.tkay.basead.ui.PlayerView r2 = r6.a
                java.lang.String r2 = r2.f
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                java.lang.String r3 = ",localFileErrorMsg:"
                if (r2 == 0) goto Lee
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r0)
                r2.append(r3)
                r2.append(r1)
                java.lang.String r0 = r2.toString()
                goto L10c
            Lee:
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                r2.append(r0)
                r2.append(r3)
                com.tkay.basead.ui.PlayerView r0 = r6.a
                java.lang.String r0 = r0.f
                r2.append(r0)
                java.lang.String r0 = ",errorMsg:"
                r2.append(r0)
                r2.append(r1)
                java.lang.String r0 = r2.toString()
            L10c:
                com.tkay.basead.ui.PlayerView r1 = r6.a
                boolean r1 = com.tkay.basead.ui.PlayerView.t(r1)
                if (r1 == 0) goto L12c
                com.tkay.basead.ui.PlayerView r1 = r6.a
                com.tkay.basead.ui.PlayerView$a r1 = com.tkay.basead.ui.PlayerView.d(r1)
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r2 = "Video player error!"
                java.lang.String r0 = r2.concat(r0)
                com.tkay.basead.c.e r7 = com.tkay.basead.c.f.a(r7, r0)
                r1.a(r7)
                return
            L12c:
                com.tkay.basead.ui.PlayerView r1 = r6.a
                com.tkay.basead.ui.PlayerView$a r1 = com.tkay.basead.ui.PlayerView.d(r1)
                java.lang.String r0 = java.lang.String.valueOf(r0)
                java.lang.String r2 = "Video player prepare fail!"
                java.lang.String r0 = r2.concat(r0)
                com.tkay.basead.c.e r7 = com.tkay.basead.c.f.a(r7, r0)
                r1.a(r7)
            L143:
                return
        }

        @Override
        public final void onPlayerStateChanged(boolean r5, int r6) {
                r4 = this;
                super.onPlayerStateChanged(r5, r6)
                java.lang.String r5 = com.tkay.basead.ui.PlayerView.TAG
                r5 = 1
                r0 = 2
                if (r6 == r0) goto L12a
                r1 = 3
                if (r6 == r1) goto L3f
                r5 = 4
                if (r6 == r5) goto L11
                goto L13c
            L11:
                com.tkay.basead.ui.PlayerView r5 = r4.a
                com.tkay.basead.ui.PlayerView.q(r5)
                com.tkay.basead.ui.PlayerView r5 = r4.a
                boolean r5 = com.tkay.basead.ui.PlayerView.b(r5)
                if (r5 != 0) goto L13c
                com.tkay.basead.ui.PlayerView r5 = r4.a
                com.tkay.basead.ui.PlayerView.y(r5)
                com.tkay.basead.ui.PlayerView r5 = r4.a
                int r6 = com.tkay.basead.ui.PlayerView.x(r5)
                com.tkay.basead.ui.PlayerView.a(r5, r6)
                com.tkay.basead.ui.PlayerView r5 = r4.a
                com.tkay.basead.ui.PlayerView$a r5 = com.tkay.basead.ui.PlayerView.d(r5)
                if (r5 == 0) goto L13c
                com.tkay.basead.ui.PlayerView r5 = r4.a
                com.tkay.basead.ui.PlayerView$a r5 = com.tkay.basead.ui.PlayerView.d(r5)
                r5.c()
                goto L13c
            L3f:
                com.tkay.basead.ui.PlayerView r6 = r4.a
                boolean r6 = com.tkay.basead.ui.PlayerView.t(r6)
                if (r6 != 0) goto Lf5
                com.tkay.basead.ui.PlayerView r6 = r4.a
                com.tkay.basead.ui.PlayerView.w(r6)
                com.tkay.basead.ui.PlayerView r6 = r4.a
                r1 = 0
                com.tkay.basead.ui.PlayerView.b(r6, r1)
                com.tkay.basead.ui.PlayerView r6 = r4.a
                com.tkay.expressad.exoplayer.ad r2 = com.tkay.basead.ui.PlayerView.r(r6)
                long r2 = r2.s()
                int r2 = (int) r2
                com.tkay.basead.ui.PlayerView.b(r6, r2)
                com.tkay.basead.ui.PlayerView r6 = r4.a
                com.tkay.basead.ui.PlayerView$a r6 = com.tkay.basead.ui.PlayerView.d(r6)
                if (r6 == 0) goto L77
                com.tkay.basead.ui.PlayerView r6 = r4.a
                com.tkay.basead.ui.PlayerView$a r6 = com.tkay.basead.ui.PlayerView.d(r6)
                com.tkay.basead.ui.PlayerView r2 = r4.a
                int r2 = com.tkay.basead.ui.PlayerView.x(r2)
                r6.c(r2)
            L77:
                com.tkay.basead.ui.PlayerView r6 = r4.a
                r2 = 1048576000(0x3e800000, float:0.25)
                int r3 = com.tkay.basead.ui.PlayerView.x(r6)
                float r3 = (float) r3
                float r3 = r3 * r2
                int r2 = java.lang.Math.round(r3)
                com.tkay.basead.ui.PlayerView.c(r6, r2)
                com.tkay.basead.ui.PlayerView r6 = r4.a
                r2 = 1056964608(0x3f000000, float:0.5)
                int r3 = com.tkay.basead.ui.PlayerView.x(r6)
                float r3 = (float) r3
                float r3 = r3 * r2
                int r2 = java.lang.Math.round(r3)
                com.tkay.basead.ui.PlayerView.d(r6, r2)
                com.tkay.basead.ui.PlayerView r6 = r4.a
                r2 = 1061158912(0x3f400000, float:0.75)
                int r3 = com.tkay.basead.ui.PlayerView.x(r6)
                float r3 = (float) r3
                float r3 = r3 * r2
                int r2 = java.lang.Math.round(r3)
                com.tkay.basead.ui.PlayerView.e(r6, r2)
                com.tkay.basead.ui.PlayerView r6 = r4.a
                int r6 = r6.c
                if (r6 <= 0) goto Lf0
                com.tkay.basead.ui.PlayerView r6 = r4.a
                int r6 = r6.c
                r2 = 100
                if (r6 >= r2) goto Lf0
                com.tkay.basead.ui.PlayerView r6 = r4.a
                int r6 = r6.b
                com.tkay.basead.ui.PlayerView r1 = r4.a
                int r1 = r1.c
                if (r6 <= r1) goto Lc9
                com.tkay.basead.ui.PlayerView r6 = r4.a
                int r1 = r6.c
                int r1 = r1 / r0
                r6.b = r1
            Lc9:
                com.tkay.basead.ui.PlayerView r6 = r4.a
                r0 = 1065353216(0x3f800000, float:1.0)
                int r1 = r6.b
                float r1 = (float) r1
                float r1 = r1 * r0
                r0 = 1120403456(0x42c80000, float:100.0)
                float r1 = r1 / r0
                com.tkay.basead.ui.PlayerView r0 = r4.a
                int r0 = com.tkay.basead.ui.PlayerView.x(r0)
                float r0 = (float) r0
                float r1 = r1 * r0
                int r0 = java.lang.Math.round(r1)
                r6.a = r0
                com.tkay.basead.ui.PlayerView r6 = r4.a
                int r0 = r6.a
                int r0 = r0 + (-2000)
                r6.a = r0
                com.tkay.basead.ui.PlayerView r6 = r4.a
                com.tkay.basead.ui.PlayerView.a(r6, r5)
                goto Lf5
            Lf0:
                com.tkay.basead.ui.PlayerView r5 = r4.a
                com.tkay.basead.ui.PlayerView.a(r5, r1)
            Lf5:
                com.tkay.basead.ui.PlayerView r5 = r4.a
                int r5 = com.tkay.basead.ui.PlayerView.e(r5)
                if (r5 <= 0) goto L13c
                com.tkay.basead.ui.PlayerView r5 = r4.a
                int r5 = com.tkay.basead.ui.PlayerView.e(r5)
                long r5 = (long) r5
                com.tkay.basead.ui.PlayerView r0 = r4.a
                com.tkay.expressad.exoplayer.ad r0 = com.tkay.basead.ui.PlayerView.r(r0)
                long r0 = r0.t()
                long r5 = r5 - r0
                long r5 = java.lang.Math.abs(r5)
                r0 = 500(0x1f4, double:2.47E-321)
                int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
                if (r5 <= 0) goto L13c
                com.tkay.basead.ui.PlayerView r5 = r4.a
                com.tkay.expressad.exoplayer.ad r5 = com.tkay.basead.ui.PlayerView.r(r5)
                com.tkay.basead.ui.PlayerView r6 = r4.a
                int r6 = com.tkay.basead.ui.PlayerView.e(r6)
                long r0 = (long) r6
                r5.a(r0)
                return
            L12a:
                com.tkay.basead.ui.PlayerView r6 = r4.a
                boolean r6 = com.tkay.basead.ui.PlayerView.u(r6)
                if (r6 != 0) goto L13c
                com.tkay.basead.ui.PlayerView r6 = r4.a
                com.tkay.basead.ui.PlayerView.b(r6, r5)
                com.tkay.basead.ui.PlayerView r5 = r4.a
                com.tkay.basead.ui.PlayerView.v(r5)
            L13c:
                return
        }
    }

    final class 4 implements com.tkay.expressad.exoplayer.l.g {
        final com.tkay.basead.ui.PlayerView a;

        4(com.tkay.basead.ui.PlayerView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r0 = this;
                return
        }

        @Override
        public final void a(int r3, int r4) {
                r2 = this;
                com.tkay.basead.ui.PlayerView r0 = r2.a
                android.view.TextureView r1 = com.tkay.basead.ui.PlayerView.z(r0)
                r0.autoFitVideoSize(r3, r4, r1)
                return
        }
    }

    public interface a {
        void a();

        void a(int r1);

        void a(com.tkay.basead.c.e r1);

        void b();

        void b(int r1);

        void c();

        void c(int r1);

        void d();

        void e();

        void f();

        void g();
    }

    static class b extends android.view.View.BaseSavedState {
        public static final android.os.Parcelable.Creator<com.tkay.basead.ui.PlayerView.b> CREATOR = null;
        int a;
        boolean b;
        boolean c;
        boolean d;
        boolean e;
        boolean f;
        boolean g;
        boolean h;


        static {
                com.tkay.basead.ui.PlayerView$b$1 r0 = new com.tkay.basead.ui.PlayerView$b$1
                r0.<init>()
                com.tkay.basead.ui.PlayerView.b.CREATOR = r0
                return
        }

        public b(android.os.Parcel r2) {
                r1 = this;
                r1.<init>(r2)
                int r0 = r2.readInt()
                r1.a = r0
                r0 = 7
                boolean[] r0 = new boolean[r0]
                r2.readBooleanArray(r0)
                r2 = 0
                boolean r2 = r0[r2]
                r1.b = r2
                r2 = 1
                boolean r2 = r0[r2]
                r1.c = r2
                r2 = 2
                boolean r2 = r0[r2]
                r1.d = r2
                r2 = 3
                boolean r2 = r0[r2]
                r1.e = r2
                r2 = 4
                boolean r2 = r0[r2]
                r1.f = r2
                r2 = 5
                boolean r2 = r0[r2]
                r1.g = r2
                r2 = 6
                boolean r2 = r0[r2]
                r1.h = r2
                return
        }

        public b(android.os.Parcelable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public final java.lang.String a() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "SavedState(\nsavePosition - "
                r0.<init>(r1)
                int r1 = r2.a
                r0.append(r1)
                java.lang.String r1 = "\nsaveVideoPlay25 - "
                r0.append(r1)
                boolean r1 = r2.b
                r0.append(r1)
                java.lang.String r1 = "\nsaveVideoPlay50 - "
                r0.append(r1)
                boolean r1 = r2.c
                r0.append(r1)
                java.lang.String r1 = "\nsaveVideoPlay75 - "
                r0.append(r1)
                boolean r1 = r2.d
                r0.append(r1)
                java.lang.String r1 = "\nsaveIsVideoStart - "
                r0.append(r1)
                boolean r1 = r2.e
                r0.append(r1)
                java.lang.String r1 = "\nsaveIsVideoPlayCompletion - "
                r0.append(r1)
                boolean r1 = r2.f
                r0.append(r1)
                java.lang.String r1 = "\nsaveIsMute - "
                r0.append(r1)
                boolean r1 = r2.g
                r0.append(r1)
                java.lang.String r1 = "\nsaveVideoNeedResumeByCdRate - "
                r0.append(r1)
                boolean r1 = r2.h
                r0.append(r1)
                java.lang.String r1 = "\n)"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        @Override
        public final void writeToParcel(android.os.Parcel r3, int r4) {
                r2 = this;
                super.writeToParcel(r3, r4)
                int r4 = r2.a
                r3.writeInt(r4)
                r4 = 7
                boolean[] r4 = new boolean[r4]
                boolean r0 = r2.b
                r1 = 0
                r4[r1] = r0
                boolean r0 = r2.c
                r1 = 1
                r4[r1] = r0
                boolean r0 = r2.d
                r1 = 2
                r4[r1] = r0
                boolean r0 = r2.e
                r1 = 3
                r4[r1] = r0
                boolean r0 = r2.f
                r1 = 4
                r4[r1] = r0
                boolean r0 = r2.g
                r1 = 5
                r4[r1] = r0
                boolean r0 = r2.h
                r1 = 6
                r4[r1] = r0
                r3.writeBooleanArray(r4)
                return
        }
    }

    static {
            java.lang.Class<com.tkay.basead.ui.PlayerView> r0 = com.tkay.basead.ui.PlayerView.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.ui.PlayerView.TAG = r0
            return
    }

    public PlayerView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = ""
            r0.j = r1
            r0.k = r1
            r2 = -1
            r0.n = r2
            r2 = 0
            r0.v = r2
            r0.w = r2
            r0.x = r2
            r0.y = r2
            r0.z = r2
            r0.b = r2
            r0.c = r2
            r0.d = r2
            r0.e = r1
            r0.f = r1
            r1 = 5000(0x1388, double:2.4703E-320)
            r0.L = r1
            r1 = 0
            r0.M = r1
            r1 = 1
            r0.setSaveEnabled(r1)
            com.tkay.basead.ui.PlayerView$1 r1 = new com.tkay.basead.ui.PlayerView$1
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r0, r2)
            r0.B = r1
            r1 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0.setBackgroundColor(r1)
            return
    }

    static int a(com.tkay.basead.ui.PlayerView r0, int r1) {
            r0.n = r1
            return r1
    }

    private void a() {
            r8 = this;
            java.lang.String r0 = ", "
            int r1 = r8.l
            if (r1 == 0) goto Lb
            int r1 = r8.m
            if (r1 == 0) goto Lb
            return
        Lb:
            java.lang.String r1 = r8.g()     // Catch: java.lang.Exception -> Lba
            int r2 = r8.E     // Catch: java.lang.Exception -> Lba
            int r3 = r8.F     // Catch: java.lang.Exception -> Lba
            com.tkay.basead.a.b.g$a r1 = com.tkay.basead.a.b.g.a(r1)     // Catch: java.lang.Exception -> Lba
            r4 = 1065353216(0x3f800000, float:1.0)
            if (r1 != 0) goto L1d
            r1 = 0
            goto L40
        L1d:
            int r5 = r1.a     // Catch: java.lang.Exception -> Lba
            int r6 = r1.b     // Catch: java.lang.Exception -> Lba
            float r5 = (float) r5     // Catch: java.lang.Exception -> Lba
            float r5 = r5 * r4
            float r6 = (float) r6     // Catch: java.lang.Exception -> Lba
            float r5 = r5 / r6
            float r6 = (float) r2     // Catch: java.lang.Exception -> Lba
            float r6 = r6 * r4
            float r7 = (float) r3     // Catch: java.lang.Exception -> Lba
            float r6 = r6 / r7
            int r6 = (r5 > r6 ? 1 : (r5 == r6 ? 0 : -1))
            if (r6 >= 0) goto L37
            r1.b = r3     // Catch: java.lang.Exception -> Lba
            int r2 = r1.b     // Catch: java.lang.Exception -> Lba
            float r2 = (float) r2     // Catch: java.lang.Exception -> Lba
            float r2 = r2 * r5
            int r2 = (int) r2     // Catch: java.lang.Exception -> Lba
            r1.a = r2     // Catch: java.lang.Exception -> Lba
            goto L40
        L37:
            r1.a = r2     // Catch: java.lang.Exception -> Lba
            int r2 = r1.a     // Catch: java.lang.Exception -> Lba
            float r2 = (float) r2     // Catch: java.lang.Exception -> Lba
            float r2 = r2 / r5
            int r2 = (int) r2     // Catch: java.lang.Exception -> Lba
            r1.b = r2     // Catch: java.lang.Exception -> Lba
        L40:
            if (r1 == 0) goto L4a
            int r2 = r1.a     // Catch: java.lang.Exception -> Lba
            r8.l = r2     // Catch: java.lang.Exception -> Lba
            int r1 = r1.b     // Catch: java.lang.Exception -> Lba
            r8.m = r1     // Catch: java.lang.Exception -> Lba
        L4a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lba
            java.lang.String r2 = "computeVideoSize: "
            r1.<init>(r2)     // Catch: java.lang.Exception -> Lba
            int r2 = r8.E     // Catch: java.lang.Exception -> Lba
            r1.append(r2)     // Catch: java.lang.Exception -> Lba
            r1.append(r0)     // Catch: java.lang.Exception -> Lba
            int r2 = r8.F     // Catch: java.lang.Exception -> Lba
            r1.append(r2)     // Catch: java.lang.Exception -> Lba
            r1.append(r0)     // Catch: java.lang.Exception -> Lba
            int r2 = r8.l     // Catch: java.lang.Exception -> Lba
            r1.append(r2)     // Catch: java.lang.Exception -> Lba
            r1.append(r0)     // Catch: java.lang.Exception -> Lba
            int r0 = r8.m     // Catch: java.lang.Exception -> Lba
            r1.append(r0)     // Catch: java.lang.Exception -> Lba
            int r0 = r8.E     // Catch: java.lang.Exception -> Lba
            int r1 = r8.l     // Catch: java.lang.Exception -> Lba
            if (r0 != r1) goto L94
            int r0 = r8.F     // Catch: java.lang.Exception -> Lba
            int r1 = r8.m     // Catch: java.lang.Exception -> Lba
            int r0 = r0 - r1
            android.content.Context r1 = r8.getContext()     // Catch: java.lang.Exception -> Lba
            int r1 = com.tkay.core.common.l.h.a(r1, r4)     // Catch: java.lang.Exception -> Lba
            if (r0 > r1) goto Lb9
            int r0 = r8.F     // Catch: java.lang.Exception -> Lba
            r8.m = r0     // Catch: java.lang.Exception -> Lba
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lba
            java.lang.String r1 = "computeVideoSize: update height -> "
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lba
            int r1 = r8.m     // Catch: java.lang.Exception -> Lba
            r0.append(r1)     // Catch: java.lang.Exception -> Lba
            return
        L94:
            int r0 = r8.F     // Catch: java.lang.Exception -> Lba
            int r1 = r8.m     // Catch: java.lang.Exception -> Lba
            if (r0 != r1) goto Lb9
            int r0 = r8.E     // Catch: java.lang.Exception -> Lba
            int r1 = r8.l     // Catch: java.lang.Exception -> Lba
            int r0 = r0 - r1
            android.content.Context r1 = r8.getContext()     // Catch: java.lang.Exception -> Lba
            int r1 = com.tkay.core.common.l.h.a(r1, r4)     // Catch: java.lang.Exception -> Lba
            if (r0 > r1) goto Lb9
            int r0 = r8.E     // Catch: java.lang.Exception -> Lba
            r8.l = r0     // Catch: java.lang.Exception -> Lba
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lba
            java.lang.String r1 = "computeVideoSize: update width -> "
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lba
            int r1 = r8.l     // Catch: java.lang.Exception -> Lba
            r0.append(r1)     // Catch: java.lang.Exception -> Lba
        Lb9:
            return
        Lba:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private void a(android.view.View r1) {
            r0 = this;
            com.tkay.basead.ui.PlayerView$a r1 = r0.A
            if (r1 == 0) goto L7
            r1.d()
        L7:
            return
    }

    private void a(java.lang.String r8, boolean r9) {
            r7 = this;
            java.lang.String r0 = "40002"
        L2:
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L103
            if (r1 != 0) goto L102
            com.tkay.expressad.exoplayer.ad r1 = r7.g     // Catch: java.lang.Throwable -> L103
            if (r1 != 0) goto L1c
            com.tkay.basead.ui.PlayerView$a r1 = r7.A     // Catch: java.lang.Throwable -> L103
            if (r1 == 0) goto L1b
            com.tkay.basead.ui.PlayerView$a r1 = r7.A     // Catch: java.lang.Throwable -> L103
            java.lang.String r2 = "Player show fail with some internal error"
            com.tkay.basead.c.e r2 = com.tkay.basead.c.f.a(r0, r2)     // Catch: java.lang.Throwable -> L103
            r1.a(r2)     // Catch: java.lang.Throwable -> L103
        L1b:
            return
        L1c:
            java.lang.String r1 = r7.j     // Catch: java.lang.Throwable -> L103
            boolean r1 = android.text.TextUtils.equals(r8, r1)     // Catch: java.lang.Throwable -> L103
            r7.d = r1     // Catch: java.lang.Throwable -> L103
            java.lang.String r1 = r7.k     // Catch: java.lang.Throwable -> L103
            boolean r1 = android.text.TextUtils.equals(r8, r1)     // Catch: java.lang.Throwable -> L103
            if (r1 == 0) goto Lbd
            int r1 = r7.c     // Catch: java.lang.Throwable -> L103
            if (r1 <= 0) goto Lbd
            java.lang.String r1 = ",lastRecycleCheckDownloadedFileSize:"
            java.lang.String r2 = ",maxVideoCacheSize:"
            java.lang.String r3 = ",readyRate:"
            java.lang.String r4 = "AdxPlayer videoUrl:"
            java.lang.String r5 = "Video Play Fail:Play Network Url"
            if (r9 == 0) goto L82
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L103
            r6.<init>(r4)     // Catch: java.lang.Throwable -> L103
            r6.append(r8)     // Catch: java.lang.Throwable -> L103
            r6.append(r3)     // Catch: java.lang.Throwable -> L103
            int r3 = r7.c     // Catch: java.lang.Throwable -> L103
            r6.append(r3)     // Catch: java.lang.Throwable -> L103
            r6.append(r2)     // Catch: java.lang.Throwable -> L103
            com.tkay.core.common.a.j r2 = com.tkay.core.common.a.j.a()     // Catch: java.lang.Throwable -> L103
            long r2 = r2.c()     // Catch: java.lang.Throwable -> L103
            r6.append(r2)     // Catch: java.lang.Throwable -> L103
            r6.append(r1)     // Catch: java.lang.Throwable -> L103
            com.tkay.core.common.a.j r1 = com.tkay.core.common.a.j.a()     // Catch: java.lang.Throwable -> L103
            long r1 = r1.d()     // Catch: java.lang.Throwable -> L103
            r6.append(r1)     // Catch: java.lang.Throwable -> L103
            java.lang.String r1 = ",isChaoDi:true,ChaoDiThrowableMsg:"
            r6.append(r1)     // Catch: java.lang.Throwable -> L103
            java.lang.String r1 = r7.e     // Catch: java.lang.Throwable -> L103
            r6.append(r1)     // Catch: java.lang.Throwable -> L103
            java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> L103
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L103
            java.lang.String r2 = r2.q()     // Catch: java.lang.Throwable -> L103
            com.tkay.core.common.k.c.a(r5, r1, r2)     // Catch: java.lang.Throwable -> L103
            goto Lbd
        L82:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L103
            r6.<init>(r4)     // Catch: java.lang.Throwable -> L103
            r6.append(r8)     // Catch: java.lang.Throwable -> L103
            r6.append(r3)     // Catch: java.lang.Throwable -> L103
            int r3 = r7.c     // Catch: java.lang.Throwable -> L103
            r6.append(r3)     // Catch: java.lang.Throwable -> L103
            r6.append(r2)     // Catch: java.lang.Throwable -> L103
            com.tkay.core.common.a.j r2 = com.tkay.core.common.a.j.a()     // Catch: java.lang.Throwable -> L103
            long r2 = r2.c()     // Catch: java.lang.Throwable -> L103
            r6.append(r2)     // Catch: java.lang.Throwable -> L103
            r6.append(r1)     // Catch: java.lang.Throwable -> L103
            com.tkay.core.common.a.j r1 = com.tkay.core.common.a.j.a()     // Catch: java.lang.Throwable -> L103
            long r1 = r1.d()     // Catch: java.lang.Throwable -> L103
            r6.append(r1)     // Catch: java.lang.Throwable -> L103
            java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> L103
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L103
            java.lang.String r2 = r2.q()     // Catch: java.lang.Throwable -> L103
            com.tkay.core.common.k.c.a(r5, r1, r2)     // Catch: java.lang.Throwable -> L103
        Lbd:
            android.net.Uri r1 = android.net.Uri.parse(r8)     // Catch: java.lang.Throwable -> L103
            java.lang.String r2 = r8.toLowerCase()     // Catch: java.lang.Throwable -> L103
            java.lang.String r3 = "http"
            boolean r2 = r2.startsWith(r3)     // Catch: java.lang.Throwable -> L103
            java.lang.String r3 = "Tkay_ExoPlayer"
            if (r2 == 0) goto Le0
            com.tkay.expressad.exoplayer.h.o$c r2 = new com.tkay.expressad.exoplayer.h.o$c     // Catch: java.lang.Throwable -> L103
            com.tkay.expressad.exoplayer.j.q r4 = new com.tkay.expressad.exoplayer.j.q     // Catch: java.lang.Throwable -> L103
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L103
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L103
            com.tkay.expressad.exoplayer.h.o r1 = r2.a(r1)     // Catch: java.lang.Throwable -> L103
            r7.h = r1     // Catch: java.lang.Throwable -> L103
            goto Lf4
        Le0:
            com.tkay.expressad.exoplayer.h.o$c r2 = new com.tkay.expressad.exoplayer.h.o$c     // Catch: java.lang.Throwable -> L103
            com.tkay.expressad.exoplayer.j.o r4 = new com.tkay.expressad.exoplayer.j.o     // Catch: java.lang.Throwable -> L103
            android.content.Context r5 = r7.getContext()     // Catch: java.lang.Throwable -> L103
            r4.<init>(r5, r3)     // Catch: java.lang.Throwable -> L103
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L103
            com.tkay.expressad.exoplayer.h.o r1 = r2.a(r1)     // Catch: java.lang.Throwable -> L103
            r7.h = r1     // Catch: java.lang.Throwable -> L103
        Lf4:
            com.tkay.expressad.exoplayer.ad r1 = r7.g     // Catch: java.lang.Throwable -> L103
            android.view.TextureView r2 = r7.i     // Catch: java.lang.Throwable -> L103
            r1.a(r2)     // Catch: java.lang.Throwable -> L103
            com.tkay.expressad.exoplayer.ad r1 = r7.g     // Catch: java.lang.Throwable -> L103
            com.tkay.expressad.exoplayer.h.s r2 = r7.h     // Catch: java.lang.Throwable -> L103
            r1.a(r2)     // Catch: java.lang.Throwable -> L103
        L102:
            return
        L103:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.String r2 = r7.k
            boolean r8 = android.text.TextUtils.equals(r8, r2)
            if (r8 != 0) goto L11d
            if (r9 == 0) goto L112
            goto L11d
        L112:
            java.lang.String r8 = r1.getMessage()
            r7.e = r8
            java.lang.String r8 = r7.k
            r9 = 1
            goto L2
        L11d:
            com.tkay.basead.ui.PlayerView$a r8 = r7.A
            if (r8 == 0) goto L12c
            java.lang.String r9 = r1.getMessage()
            com.tkay.basead.c.e r9 = com.tkay.basead.c.f.a(r0, r9)
            r8.a(r9)
        L12c:
            return
    }

    private void a(boolean r11) {
            r10 = this;
            java.lang.String r0 = ", "
            java.io.File r1 = new java.io.File
            java.lang.String r2 = r10.j
            r1.<init>(r2)
            boolean r1 = r1.exists()
            r2 = 0
            r3 = 1
            if (r1 != 0) goto L1b
            java.lang.String r1 = r10.k
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L1b
            r1 = r3
            goto L1e
        L1b:
            r10.G = r3
            r1 = r2
        L1e:
            if (r1 == 0) goto L30
            com.tkay.basead.ui.PlayerView$a r11 = r10.A
            if (r11 == 0) goto L2f
            java.lang.String r0 = "40002"
            java.lang.String r1 = "Video file and net url is empty!"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r0, r1)
            r11.a(r0)
        L2f:
            return
        L30:
            int r1 = r10.l
            r4 = 1065353216(0x3f800000, float:1.0)
            if (r1 == 0) goto L3a
            int r1 = r10.m
            if (r1 != 0) goto Leb
        L3a:
            java.lang.String r1 = r10.g()     // Catch: java.lang.Exception -> Le7
            int r5 = r10.E     // Catch: java.lang.Exception -> Le7
            int r6 = r10.F     // Catch: java.lang.Exception -> Le7
            com.tkay.basead.a.b.g$a r1 = com.tkay.basead.a.b.g.a(r1)     // Catch: java.lang.Exception -> Le7
            if (r1 != 0) goto L4a
            r1 = 0
            goto L6d
        L4a:
            int r7 = r1.a     // Catch: java.lang.Exception -> Le7
            int r8 = r1.b     // Catch: java.lang.Exception -> Le7
            float r7 = (float) r7     // Catch: java.lang.Exception -> Le7
            float r7 = r7 * r4
            float r8 = (float) r8     // Catch: java.lang.Exception -> Le7
            float r7 = r7 / r8
            float r8 = (float) r5     // Catch: java.lang.Exception -> Le7
            float r8 = r8 * r4
            float r9 = (float) r6     // Catch: java.lang.Exception -> Le7
            float r8 = r8 / r9
            int r8 = (r7 > r8 ? 1 : (r7 == r8 ? 0 : -1))
            if (r8 >= 0) goto L64
            r1.b = r6     // Catch: java.lang.Exception -> Le7
            int r5 = r1.b     // Catch: java.lang.Exception -> Le7
            float r5 = (float) r5     // Catch: java.lang.Exception -> Le7
            float r5 = r5 * r7
            int r5 = (int) r5     // Catch: java.lang.Exception -> Le7
            r1.a = r5     // Catch: java.lang.Exception -> Le7
            goto L6d
        L64:
            r1.a = r5     // Catch: java.lang.Exception -> Le7
            int r5 = r1.a     // Catch: java.lang.Exception -> Le7
            float r5 = (float) r5     // Catch: java.lang.Exception -> Le7
            float r5 = r5 / r7
            int r5 = (int) r5     // Catch: java.lang.Exception -> Le7
            r1.b = r5     // Catch: java.lang.Exception -> Le7
        L6d:
            if (r1 == 0) goto L77
            int r5 = r1.a     // Catch: java.lang.Exception -> Le7
            r10.l = r5     // Catch: java.lang.Exception -> Le7
            int r1 = r1.b     // Catch: java.lang.Exception -> Le7
            r10.m = r1     // Catch: java.lang.Exception -> Le7
        L77:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le7
            java.lang.String r5 = "computeVideoSize: "
            r1.<init>(r5)     // Catch: java.lang.Exception -> Le7
            int r5 = r10.E     // Catch: java.lang.Exception -> Le7
            r1.append(r5)     // Catch: java.lang.Exception -> Le7
            r1.append(r0)     // Catch: java.lang.Exception -> Le7
            int r5 = r10.F     // Catch: java.lang.Exception -> Le7
            r1.append(r5)     // Catch: java.lang.Exception -> Le7
            r1.append(r0)     // Catch: java.lang.Exception -> Le7
            int r5 = r10.l     // Catch: java.lang.Exception -> Le7
            r1.append(r5)     // Catch: java.lang.Exception -> Le7
            r1.append(r0)     // Catch: java.lang.Exception -> Le7
            int r0 = r10.m     // Catch: java.lang.Exception -> Le7
            r1.append(r0)     // Catch: java.lang.Exception -> Le7
            int r0 = r10.E     // Catch: java.lang.Exception -> Le7
            int r1 = r10.l     // Catch: java.lang.Exception -> Le7
            if (r0 != r1) goto Lc1
            int r0 = r10.F     // Catch: java.lang.Exception -> Le7
            int r1 = r10.m     // Catch: java.lang.Exception -> Le7
            int r0 = r0 - r1
            android.content.Context r1 = r10.getContext()     // Catch: java.lang.Exception -> Le7
            int r1 = com.tkay.core.common.l.h.a(r1, r4)     // Catch: java.lang.Exception -> Le7
            if (r0 > r1) goto Leb
            int r0 = r10.F     // Catch: java.lang.Exception -> Le7
            r10.m = r0     // Catch: java.lang.Exception -> Le7
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le7
            java.lang.String r1 = "computeVideoSize: update height -> "
            r0.<init>(r1)     // Catch: java.lang.Exception -> Le7
            int r1 = r10.m     // Catch: java.lang.Exception -> Le7
            r0.append(r1)     // Catch: java.lang.Exception -> Le7
            goto Leb
        Lc1:
            int r0 = r10.F     // Catch: java.lang.Exception -> Le7
            int r1 = r10.m     // Catch: java.lang.Exception -> Le7
            if (r0 != r1) goto Leb
            int r0 = r10.E     // Catch: java.lang.Exception -> Le7
            int r1 = r10.l     // Catch: java.lang.Exception -> Le7
            int r0 = r0 - r1
            android.content.Context r1 = r10.getContext()     // Catch: java.lang.Exception -> Le7
            int r1 = com.tkay.core.common.l.h.a(r1, r4)     // Catch: java.lang.Exception -> Le7
            if (r0 > r1) goto Leb
            int r0 = r10.E     // Catch: java.lang.Exception -> Le7
            r10.l = r0     // Catch: java.lang.Exception -> Le7
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le7
            java.lang.String r1 = "computeVideoSize: update width -> "
            r0.<init>(r1)     // Catch: java.lang.Exception -> Le7
            int r1 = r10.l     // Catch: java.lang.Exception -> Le7
            r0.append(r1)     // Catch: java.lang.Exception -> Le7
            goto Leb
        Le7:
            r0 = move-exception
            r0.printStackTrace()
        Leb:
            android.view.TextureView r0 = r10.i
            if (r0 != 0) goto L11e
            android.view.TextureView r0 = new android.view.TextureView
            android.content.Context r1 = r10.getContext()
            r0.<init>(r1)
            r10.i = r0
            r0.setKeepScreenOn(r3)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            int r1 = r10.l
            if (r1 == 0) goto L111
            int r3 = r10.m
            if (r3 == 0) goto L111
            r0.width = r1
            int r1 = r10.m
            r0.height = r1
        L111:
            r1 = 13
            r0.addRule(r1)
            r10.removeAllViews()
            android.view.TextureView r1 = r10.i
            r10.addView(r1, r0)
        L11e:
            com.tkay.expressad.exoplayer.ad r0 = r10.g
            if (r0 != 0) goto L169
            com.tkay.expressad.exoplayer.f r0 = new com.tkay.expressad.exoplayer.f
            android.content.Context r1 = r10.getContext()
            r0.<init>(r1)
            com.tkay.expressad.exoplayer.i.c r1 = new com.tkay.expressad.exoplayer.i.c
            r1.<init>()
            com.tkay.expressad.exoplayer.d r3 = new com.tkay.expressad.exoplayer.d
            r3.<init>()
            com.tkay.expressad.exoplayer.ad r0 = com.tkay.expressad.exoplayer.i.a(r0, r1, r3)
            r10.g = r0
            com.tkay.basead.ui.PlayerView$3 r0 = new com.tkay.basead.ui.PlayerView$3
            r0.<init>(r10)
            r10.J = r0
            com.tkay.expressad.exoplayer.ad r1 = r10.g
            r1.a(r0)
            com.tkay.basead.ui.PlayerView$4 r0 = new com.tkay.basead.ui.PlayerView$4
            r0.<init>(r10)
            r10.K = r0
            com.tkay.expressad.exoplayer.ad r1 = r10.g
            r1.a(r0)
            com.tkay.expressad.exoplayer.ad r0 = r10.g
            boolean r1 = r10.C
            if (r1 == 0) goto L15a
            r4 = 0
        L15a:
            r0.a(r4)
            com.tkay.expressad.exoplayer.ad r0 = r10.g
            r0.a(r11)
            java.lang.String r11 = r10.g()
            r10.a(r11, r2)
        L169:
            com.tkay.basead.ui.-$$Lambda$PlayerView$4-s3xspIf8SMNa8DRmWjbBihJyo r11 = new com.tkay.basead.ui.-$$Lambda$PlayerView$4-s3xspIf8SMNa8DRmWjbBihJyo
            r11.<init>(r10)
            r10.setOnClickListener(r11)
            return
    }

    static boolean a(com.tkay.basead.ui.PlayerView r0) {
            boolean r0 = r0.w
            return r0
    }

    static boolean a(com.tkay.basead.ui.PlayerView r0, boolean r1) {
            r0.H = r1
            return r1
    }

    static int b(com.tkay.basead.ui.PlayerView r0, int r1) {
            r0.o = r1
            return r1
    }

    private void b() {
            r2 = this;
            android.view.View r0 = r2.I
            if (r0 == 0) goto L8
            r1 = 0
            r0.setVisibility(r1)
        L8:
            return
    }

    private void b(boolean r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.ad r0 = r3.g
            if (r0 != 0) goto L4f
            com.tkay.expressad.exoplayer.f r0 = new com.tkay.expressad.exoplayer.f
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            com.tkay.expressad.exoplayer.i.c r1 = new com.tkay.expressad.exoplayer.i.c
            r1.<init>()
            com.tkay.expressad.exoplayer.d r2 = new com.tkay.expressad.exoplayer.d
            r2.<init>()
            com.tkay.expressad.exoplayer.ad r0 = com.tkay.expressad.exoplayer.i.a(r0, r1, r2)
            r3.g = r0
            com.tkay.basead.ui.PlayerView$3 r0 = new com.tkay.basead.ui.PlayerView$3
            r0.<init>(r3)
            r3.J = r0
            com.tkay.expressad.exoplayer.ad r1 = r3.g
            r1.a(r0)
            com.tkay.basead.ui.PlayerView$4 r0 = new com.tkay.basead.ui.PlayerView$4
            r0.<init>(r3)
            r3.K = r0
            com.tkay.expressad.exoplayer.ad r1 = r3.g
            r1.a(r0)
            com.tkay.expressad.exoplayer.ad r0 = r3.g
            boolean r1 = r3.C
            if (r1 == 0) goto L3d
            r1 = 0
            goto L3f
        L3d:
            r1 = 1065353216(0x3f800000, float:1.0)
        L3f:
            r0.a(r1)
            com.tkay.expressad.exoplayer.ad r0 = r3.g
            r0.a(r4)
            java.lang.String r4 = r3.g()
            r0 = 0
            r3.a(r4, r0)
        L4f:
            return
    }

    static boolean b(com.tkay.basead.ui.PlayerView r0) {
            boolean r0 = r0.x
            return r0
    }

    static boolean b(com.tkay.basead.ui.PlayerView r0, boolean r1) {
            r0.z = r1
            return r1
    }

    static int c(com.tkay.basead.ui.PlayerView r0, int r1) {
            r0.p = r1
            return r1
    }

    private void c() {
            r2 = this;
            android.view.View r0 = r2.I
            if (r0 == 0) goto L9
            r1 = 8
            r0.setVisibility(r1)
        L9:
            return
    }

    static boolean c(com.tkay.basead.ui.PlayerView r1) {
            r0 = 1
            r1.w = r0
            return r0
    }

    static int d(com.tkay.basead.ui.PlayerView r0, int r1) {
            r0.q = r1
            return r1
    }

    static com.tkay.basead.ui.PlayerView.a d(com.tkay.basead.ui.PlayerView r0) {
            com.tkay.basead.ui.PlayerView$a r0 = r0.A
            return r0
    }

    private void d() {
            r2 = this;
            java.lang.Thread r0 = r2.D
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r2.v = r0
            r0 = 0
            r2.M = r0
            java.lang.Thread r0 = new java.lang.Thread
            com.tkay.basead.ui.-$$Lambda$PlayerView$gv6bnwmnbsoWKbwvRSk5hN5g4h4 r1 = new com.tkay.basead.ui.-$$Lambda$PlayerView$gv6bnwmnbsoWKbwvRSk5hN5g4h4
            r1.<init>(r2)
            r0.<init>(r1)
            r2.D = r0
            r0.start()
            return
    }

    static int e(com.tkay.basead.ui.PlayerView r0) {
            int r0 = r0.n
            return r0
    }

    static int e(com.tkay.basead.ui.PlayerView r0, int r1) {
            r0.r = r1
            return r1
    }

    private void e() {
            r1 = this;
            r0 = 0
            r1.v = r0
            r0 = 0
            r1.D = r0
            return
    }

    private boolean f() {
            r2 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r2.j
            r0.<init>(r1)
            boolean r0 = r0.exists()
            r1 = 1
            if (r0 != 0) goto L17
            java.lang.String r0 = r2.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L17
            goto L1a
        L17:
            r2.G = r1
            r1 = 0
        L1a:
            return r1
    }

    static boolean f(com.tkay.basead.ui.PlayerView r0) {
            boolean r0 = r0.s
            return r0
    }

    static int g(com.tkay.basead.ui.PlayerView r0) {
            int r0 = r0.p
            return r0
    }

    private java.lang.String g() {
            r2 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r2.j
            r0.<init>(r1)
            boolean r0 = r0.exists()
            if (r0 == 0) goto L10
            java.lang.String r0 = r2.j
            return r0
        L10:
            java.lang.String r0 = r2.k
            return r0
    }

    private void h() {
            r3 = this;
            android.view.TextureView r0 = r3.i
            if (r0 != 0) goto L34
            android.view.TextureView r0 = new android.view.TextureView
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            r3.i = r0
            r1 = 1
            r0.setKeepScreenOn(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            int r1 = r3.l
            if (r1 == 0) goto L27
            int r2 = r3.m
            if (r2 == 0) goto L27
            r0.width = r1
            int r1 = r3.m
            r0.height = r1
        L27:
            r1 = 13
            r0.addRule(r1)
            r3.removeAllViews()
            android.view.TextureView r1 = r3.i
            r3.addView(r1, r0)
        L34:
            return
    }

    static boolean h(com.tkay.basead.ui.PlayerView r1) {
            r0 = 1
            r1.s = r0
            return r0
    }

    private void i() {
            r2 = this;
            com.tkay.basead.ui.PlayerView$a r0 = r2.A
            if (r0 == 0) goto L7
            r0.g()
        L7:
            com.tkay.expressad.exoplayer.ad r0 = r2.g
            com.tkay.expressad.exoplayer.h.s r1 = r2.h
            r0.a(r1)
            return
    }

    static boolean i(com.tkay.basead.ui.PlayerView r0) {
            boolean r0 = r0.t
            return r0
    }

    static int j(com.tkay.basead.ui.PlayerView r0) {
            int r0 = r0.q
            return r0
    }

    private void j() {
            r5 = this;
        L0:
            boolean r0 = r5.v
            if (r0 == 0) goto L62
            boolean r0 = r5.x
            r1 = 0
            if (r0 != 0) goto L2b
            boolean r0 = r5.isPlaying()
            if (r0 == 0) goto L2b
            android.os.Handler r0 = r5.B
            if (r0 == 0) goto L2b
            r5.M = r1
            com.tkay.expressad.exoplayer.ad r1 = r5.g     // Catch: java.lang.Throwable -> L20
            long r1 = r1.t()     // Catch: java.lang.Throwable -> L20
            int r1 = (int) r1     // Catch: java.lang.Throwable -> L20
            r0.sendEmptyMessage(r1)     // Catch: java.lang.Throwable -> L20
        L20:
            r0 = 200(0xc8, double:9.9E-322)
            java.lang.Thread.sleep(r0)     // Catch: java.lang.Throwable -> L26
            goto L0
        L26:
            r0 = move-exception
            r0.printStackTrace()
            goto L0
        L2b:
            long r3 = r5.M
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L37
            long r0 = android.os.SystemClock.elapsedRealtime()
            r5.M = r0
        L37:
            r0 = 10
            java.lang.Thread.sleep(r0)     // Catch: java.lang.Throwable -> L3d
            goto L41
        L3d:
            r0 = move-exception
            r0.printStackTrace()
        L41:
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r5.M
            long r0 = r0 - r2
            r2 = 5000(0x1388, double:2.4703E-320)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L0
            com.tkay.basead.ui.PlayerView$a r0 = r5.A
            if (r0 == 0) goto L5e
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.basead.ui.PlayerView$2 r1 = new com.tkay.basead.ui.PlayerView$2
            r1.<init>(r5)
            r0.a(r1)
        L5e:
            r5.e()
            goto L0
        L62:
            return
    }

    static boolean k(com.tkay.basead.ui.PlayerView r1) {
            r0 = 1
            r1.t = r0
            return r0
    }

    static boolean l(com.tkay.basead.ui.PlayerView r0) {
            boolean r0 = r0.u
            return r0
    }

    public static void lambda$4-s3xspIf8SMNa8DRmWjbBihJyo(com.tkay.basead.ui.PlayerView r0, android.view.View r1) {
            r0.a(r1)
            return
    }

    public static void lambda$gv6bnwmnbsoWKbwvRSk5hN5g4h4(com.tkay.basead.ui.PlayerView r0) {
            r0.j()
            return
    }

    static int m(com.tkay.basead.ui.PlayerView r0) {
            int r0 = r0.r
            return r0
    }

    static boolean n(com.tkay.basead.ui.PlayerView r1) {
            r0 = 1
            r1.u = r0
            return r0
    }

    static boolean o(com.tkay.basead.ui.PlayerView r0) {
            boolean r0 = r0.H
            return r0
    }

    static void p(com.tkay.basead.ui.PlayerView r1) {
            com.tkay.basead.ui.PlayerView$a r0 = r1.A
            if (r0 == 0) goto L7
            r0.g()
        L7:
            com.tkay.expressad.exoplayer.ad r0 = r1.g
            com.tkay.expressad.exoplayer.h.s r1 = r1.h
            r0.a(r1)
            return
    }

    static void q(com.tkay.basead.ui.PlayerView r0) {
            r0.e()
            return
    }

    static com.tkay.expressad.exoplayer.ad r(com.tkay.basead.ui.PlayerView r0) {
            com.tkay.expressad.exoplayer.ad r0 = r0.g
            return r0
    }

    static java.lang.String s(com.tkay.basead.ui.PlayerView r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static boolean t(com.tkay.basead.ui.PlayerView r0) {
            boolean r0 = r0.y
            return r0
    }

    static boolean u(com.tkay.basead.ui.PlayerView r0) {
            boolean r0 = r0.z
            return r0
    }

    static void v(com.tkay.basead.ui.PlayerView r1) {
            android.view.View r1 = r1.I
            if (r1 == 0) goto L8
            r0 = 0
            r1.setVisibility(r0)
        L8:
            return
    }

    static boolean w(com.tkay.basead.ui.PlayerView r1) {
            r0 = 1
            r1.y = r0
            return r0
    }

    static int x(com.tkay.basead.ui.PlayerView r0) {
            int r0 = r0.o
            return r0
    }

    static boolean y(com.tkay.basead.ui.PlayerView r1) {
            r0 = 1
            r1.x = r0
            return r0
    }

    static android.view.TextureView z(com.tkay.basead.ui.PlayerView r0) {
            android.view.TextureView r0 = r0.i
            return r0
    }

    public void autoFitVideoSize(int r4, int r5, android.view.View r6) {
            r3 = this;
            int r0 = r6.getMeasuredWidth()
            int r1 = r6.getMeasuredHeight()
            float r4 = (float) r4
            float r0 = (float) r0
            float r0 = r4 / r0
            float r5 = (float) r5
            float r1 = (float) r1
            float r1 = r5 / r1
            float r0 = java.lang.Math.max(r0, r1)
            float r4 = r4 / r0
            double r1 = (double) r4
            double r1 = java.lang.Math.ceil(r1)
            int r4 = (int) r1
            float r5 = r5 / r0
            double r0 = (double) r5
            double r0 = java.lang.Math.ceil(r0)
            int r5 = (int) r0
            android.view.ViewGroup$LayoutParams r0 = r6.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            r0.width = r4
            r0.height = r5
            r6.setLayoutParams(r0)
            return
    }

    public int getCurrentPosition() {
            r2 = this;
            int r0 = r2.n
            r1 = 0
            int r0 = java.lang.Math.max(r0, r1)
            return r0
    }

    public int getVideoLength() {
            r1 = this;
            int r0 = r1.o
            return r0
    }

    public boolean hasVideo() {
            r1 = this;
            boolean r0 = r1.G
            return r0
    }

    public void initMuteStatus(boolean r1) {
            r0 = this;
            r0.C = r1
            return
    }

    public boolean isComplete() {
            r1 = this;
            boolean r0 = r1.x
            return r0
    }

    public boolean isMute() {
            r1 = this;
            boolean r0 = r1.C
            return r0
    }

    public boolean isPlaying() {
            r1 = this;
            com.tkay.expressad.exoplayer.ad r0 = r1.g
            if (r0 == 0) goto Lc
            boolean r0 = r0.J()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public void load(java.lang.String r10, boolean r11) {
            r9 = this;
            java.lang.String r0 = ", "
            r9.k = r10
            com.tkay.basead.a.f.a()
            r1 = 4
            java.lang.String r10 = com.tkay.basead.a.f.a(r1, r10)
            r9.j = r10
            java.io.File r10 = new java.io.File
            java.lang.String r1 = r9.j
            r10.<init>(r1)
            boolean r10 = r10.exists()
            r1 = 0
            r2 = 1
            if (r10 != 0) goto L27
            java.lang.String r10 = r9.k
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 == 0) goto L27
            r10 = r2
            goto L2a
        L27:
            r9.G = r2
            r10 = r1
        L2a:
            if (r10 == 0) goto L3c
            com.tkay.basead.ui.PlayerView$a r10 = r9.A
            if (r10 == 0) goto L3b
            java.lang.String r11 = "40002"
            java.lang.String r0 = "Video file and net url is empty!"
            com.tkay.basead.c.e r11 = com.tkay.basead.c.f.a(r11, r0)
            r10.a(r11)
        L3b:
            return
        L3c:
            int r10 = r9.l
            r3 = 1065353216(0x3f800000, float:1.0)
            if (r10 == 0) goto L46
            int r10 = r9.m
            if (r10 != 0) goto Lf7
        L46:
            java.lang.String r10 = r9.g()     // Catch: java.lang.Exception -> Lf3
            int r4 = r9.E     // Catch: java.lang.Exception -> Lf3
            int r5 = r9.F     // Catch: java.lang.Exception -> Lf3
            com.tkay.basead.a.b.g$a r10 = com.tkay.basead.a.b.g.a(r10)     // Catch: java.lang.Exception -> Lf3
            if (r10 != 0) goto L56
            r10 = 0
            goto L79
        L56:
            int r6 = r10.a     // Catch: java.lang.Exception -> Lf3
            int r7 = r10.b     // Catch: java.lang.Exception -> Lf3
            float r6 = (float) r6     // Catch: java.lang.Exception -> Lf3
            float r6 = r6 * r3
            float r7 = (float) r7     // Catch: java.lang.Exception -> Lf3
            float r6 = r6 / r7
            float r7 = (float) r4     // Catch: java.lang.Exception -> Lf3
            float r7 = r7 * r3
            float r8 = (float) r5     // Catch: java.lang.Exception -> Lf3
            float r7 = r7 / r8
            int r7 = (r6 > r7 ? 1 : (r6 == r7 ? 0 : -1))
            if (r7 >= 0) goto L70
            r10.b = r5     // Catch: java.lang.Exception -> Lf3
            int r4 = r10.b     // Catch: java.lang.Exception -> Lf3
            float r4 = (float) r4     // Catch: java.lang.Exception -> Lf3
            float r4 = r4 * r6
            int r4 = (int) r4     // Catch: java.lang.Exception -> Lf3
            r10.a = r4     // Catch: java.lang.Exception -> Lf3
            goto L79
        L70:
            r10.a = r4     // Catch: java.lang.Exception -> Lf3
            int r4 = r10.a     // Catch: java.lang.Exception -> Lf3
            float r4 = (float) r4     // Catch: java.lang.Exception -> Lf3
            float r4 = r4 / r6
            int r4 = (int) r4     // Catch: java.lang.Exception -> Lf3
            r10.b = r4     // Catch: java.lang.Exception -> Lf3
        L79:
            if (r10 == 0) goto L83
            int r4 = r10.a     // Catch: java.lang.Exception -> Lf3
            r9.l = r4     // Catch: java.lang.Exception -> Lf3
            int r10 = r10.b     // Catch: java.lang.Exception -> Lf3
            r9.m = r10     // Catch: java.lang.Exception -> Lf3
        L83:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf3
            java.lang.String r4 = "computeVideoSize: "
            r10.<init>(r4)     // Catch: java.lang.Exception -> Lf3
            int r4 = r9.E     // Catch: java.lang.Exception -> Lf3
            r10.append(r4)     // Catch: java.lang.Exception -> Lf3
            r10.append(r0)     // Catch: java.lang.Exception -> Lf3
            int r4 = r9.F     // Catch: java.lang.Exception -> Lf3
            r10.append(r4)     // Catch: java.lang.Exception -> Lf3
            r10.append(r0)     // Catch: java.lang.Exception -> Lf3
            int r4 = r9.l     // Catch: java.lang.Exception -> Lf3
            r10.append(r4)     // Catch: java.lang.Exception -> Lf3
            r10.append(r0)     // Catch: java.lang.Exception -> Lf3
            int r0 = r9.m     // Catch: java.lang.Exception -> Lf3
            r10.append(r0)     // Catch: java.lang.Exception -> Lf3
            int r10 = r9.E     // Catch: java.lang.Exception -> Lf3
            int r0 = r9.l     // Catch: java.lang.Exception -> Lf3
            if (r10 != r0) goto Lcd
            int r10 = r9.F     // Catch: java.lang.Exception -> Lf3
            int r0 = r9.m     // Catch: java.lang.Exception -> Lf3
            int r10 = r10 - r0
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.Exception -> Lf3
            int r0 = com.tkay.core.common.l.h.a(r0, r3)     // Catch: java.lang.Exception -> Lf3
            if (r10 > r0) goto Lf7
            int r10 = r9.F     // Catch: java.lang.Exception -> Lf3
            r9.m = r10     // Catch: java.lang.Exception -> Lf3
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf3
            java.lang.String r0 = "computeVideoSize: update height -> "
            r10.<init>(r0)     // Catch: java.lang.Exception -> Lf3
            int r0 = r9.m     // Catch: java.lang.Exception -> Lf3
            r10.append(r0)     // Catch: java.lang.Exception -> Lf3
            goto Lf7
        Lcd:
            int r10 = r9.F     // Catch: java.lang.Exception -> Lf3
            int r0 = r9.m     // Catch: java.lang.Exception -> Lf3
            if (r10 != r0) goto Lf7
            int r10 = r9.E     // Catch: java.lang.Exception -> Lf3
            int r0 = r9.l     // Catch: java.lang.Exception -> Lf3
            int r10 = r10 - r0
            android.content.Context r0 = r9.getContext()     // Catch: java.lang.Exception -> Lf3
            int r0 = com.tkay.core.common.l.h.a(r0, r3)     // Catch: java.lang.Exception -> Lf3
            if (r10 > r0) goto Lf7
            int r10 = r9.E     // Catch: java.lang.Exception -> Lf3
            r9.l = r10     // Catch: java.lang.Exception -> Lf3
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf3
            java.lang.String r0 = "computeVideoSize: update width -> "
            r10.<init>(r0)     // Catch: java.lang.Exception -> Lf3
            int r0 = r9.l     // Catch: java.lang.Exception -> Lf3
            r10.append(r0)     // Catch: java.lang.Exception -> Lf3
            goto Lf7
        Lf3:
            r10 = move-exception
            r10.printStackTrace()
        Lf7:
            android.view.TextureView r10 = r9.i
            if (r10 != 0) goto L12a
            android.view.TextureView r10 = new android.view.TextureView
            android.content.Context r0 = r9.getContext()
            r10.<init>(r0)
            r9.i = r10
            r10.setKeepScreenOn(r2)
            android.widget.RelativeLayout$LayoutParams r10 = new android.widget.RelativeLayout$LayoutParams
            r0 = -1
            r10.<init>(r0, r0)
            int r0 = r9.l
            if (r0 == 0) goto L11d
            int r2 = r9.m
            if (r2 == 0) goto L11d
            r10.width = r0
            int r0 = r9.m
            r10.height = r0
        L11d:
            r0 = 13
            r10.addRule(r0)
            r9.removeAllViews()
            android.view.TextureView r0 = r9.i
            r9.addView(r0, r10)
        L12a:
            com.tkay.expressad.exoplayer.ad r10 = r9.g
            if (r10 != 0) goto L175
            com.tkay.expressad.exoplayer.f r10 = new com.tkay.expressad.exoplayer.f
            android.content.Context r0 = r9.getContext()
            r10.<init>(r0)
            com.tkay.expressad.exoplayer.i.c r0 = new com.tkay.expressad.exoplayer.i.c
            r0.<init>()
            com.tkay.expressad.exoplayer.d r2 = new com.tkay.expressad.exoplayer.d
            r2.<init>()
            com.tkay.expressad.exoplayer.ad r10 = com.tkay.expressad.exoplayer.i.a(r10, r0, r2)
            r9.g = r10
            com.tkay.basead.ui.PlayerView$3 r10 = new com.tkay.basead.ui.PlayerView$3
            r10.<init>(r9)
            r9.J = r10
            com.tkay.expressad.exoplayer.ad r0 = r9.g
            r0.a(r10)
            com.tkay.basead.ui.PlayerView$4 r10 = new com.tkay.basead.ui.PlayerView$4
            r10.<init>(r9)
            r9.K = r10
            com.tkay.expressad.exoplayer.ad r0 = r9.g
            r0.a(r10)
            com.tkay.expressad.exoplayer.ad r10 = r9.g
            boolean r0 = r9.C
            if (r0 == 0) goto L166
            r3 = 0
        L166:
            r10.a(r3)
            com.tkay.expressad.exoplayer.ad r10 = r9.g
            r10.a(r11)
            java.lang.String r10 = r9.g()
            r9.a(r10, r1)
        L175:
            com.tkay.basead.ui.-$$Lambda$PlayerView$4-s3xspIf8SMNa8DRmWjbBihJyo r10 = new com.tkay.basead.ui.-$$Lambda$PlayerView$4-s3xspIf8SMNa8DRmWjbBihJyo
            r10.<init>(r9)
            r9.setOnClickListener(r10)
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            r0.release()
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Parcelable r3) {
            r2 = this;
            com.tkay.basead.ui.PlayerView$b r3 = (com.tkay.basead.ui.PlayerView.b) r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "onRestoreInstanceState..."
            r0.<init>(r1)
            java.lang.String r1 = r3.a()
            r0.append(r1)
            android.os.Parcelable r0 = r3.getSuperState()
            super.onRestoreInstanceState(r0)
            int r0 = r3.a
            r2.n = r0
            boolean r0 = r3.b
            r2.s = r0
            boolean r0 = r3.c
            r2.t = r0
            boolean r0 = r3.d
            r2.u = r0
            boolean r0 = r3.e
            r2.w = r0
            boolean r0 = r3.f
            r2.x = r0
            boolean r0 = r3.g
            r2.C = r0
            boolean r3 = r3.h
            r2.H = r3
            com.tkay.expressad.exoplayer.ad r3 = r2.g
            if (r3 == 0) goto L46
            boolean r0 = r2.C
            if (r0 == 0) goto L41
            r0 = 0
            goto L43
        L41:
            r0 = 1065353216(0x3f800000, float:1.0)
        L43:
            r3.a(r0)
        L46:
            return
    }

    @Override
    protected android.os.Parcelable onSaveInstanceState() {
            r3 = this;
            android.os.Parcelable r0 = super.onSaveInstanceState()
            com.tkay.basead.ui.PlayerView$b r1 = new com.tkay.basead.ui.PlayerView$b
            r1.<init>(r0)
            int r0 = r3.n
            r1.a = r0
            boolean r0 = r3.s
            r1.b = r0
            boolean r0 = r3.t
            r1.c = r0
            boolean r0 = r3.u
            r1.d = r0
            boolean r0 = r3.w
            r1.e = r0
            boolean r0 = r3.x
            r1.f = r0
            boolean r0 = r3.C
            r1.g = r0
            boolean r0 = r3.H
            r1.h = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "onSaveInstanceState..."
            r0.<init>(r2)
            java.lang.String r2 = r1.a()
            r0.append(r2)
            return r1
    }

    public void pause() {
            r2 = this;
            r2.e()
            com.tkay.expressad.exoplayer.ad r0 = r2.g
            if (r0 == 0) goto Lb
            r1 = 0
            r0.a(r1)
        Lb:
            return
    }

    public void release() {
            r3 = this;
            r3.e()
            boolean r0 = r3.y
            if (r0 != 0) goto L8
            return
        L8:
            com.tkay.expressad.exoplayer.ad r0 = r3.g
            r1 = 0
            if (r0 == 0) goto L31
            boolean r0 = r0.J()
            if (r0 == 0) goto L18
            com.tkay.expressad.exoplayer.ad r0 = r3.g
            r0.m()
        L18:
            com.tkay.expressad.exoplayer.w$c r0 = r3.J
            if (r0 == 0) goto L21
            com.tkay.expressad.exoplayer.ad r2 = r3.g
            r2.b(r0)
        L21:
            com.tkay.expressad.exoplayer.l.g r0 = r3.K
            if (r0 == 0) goto L2a
            com.tkay.expressad.exoplayer.ad r2 = r3.g
            r2.b(r0)
        L2a:
            com.tkay.expressad.exoplayer.ad r0 = r3.g
            r0.n()
            r3.g = r1
        L31:
            android.os.Handler r0 = r3.B
            if (r0 == 0) goto L38
            r0.removeCallbacksAndMessages(r1)
        L38:
            r0 = 0
            r3.y = r0
            return
    }

    public void setListener(com.tkay.basead.ui.PlayerView.a r1) {
            r0 = this;
            r0.A = r1
            return
    }

    public void setLoadingView(android.view.View r1) {
            r0 = this;
            r0.I = r1
            return
    }

    public void setMute(boolean r2) {
            r1 = this;
            r1.C = r2
            if (r2 == 0) goto L14
            com.tkay.expressad.exoplayer.ad r2 = r1.g
            if (r2 == 0) goto Lc
            r0 = 0
            r2.a(r0)
        Lc:
            com.tkay.basead.ui.PlayerView$a r2 = r1.A
            if (r2 == 0) goto L24
            r2.e()
            return
        L14:
            com.tkay.expressad.exoplayer.ad r2 = r1.g
            if (r2 == 0) goto L1d
            r0 = 1065353216(0x3f800000, float:1.0)
            r2.a(r0)
        L1d:
            com.tkay.basead.ui.PlayerView$a r2 = r1.A
            if (r2 == 0) goto L24
            r2.f()
        L24:
            return
    }

    public void setVideoRateConfig(int r1, int r2) {
            r0 = this;
            r0.c = r1
            r0.b = r2
            return
    }

    public void setVideoSize(int r1, int r2) {
            r0 = this;
            r0.E = r1
            r0.F = r2
            return
    }

    public void start() {
            r2 = this;
            android.view.View r0 = r2.I
            if (r0 == 0) goto L9
            r1 = 8
            r0.setVisibility(r1)
        L9:
            com.tkay.expressad.exoplayer.ad r0 = r2.g
            r1 = 1
            if (r0 == 0) goto L11
            r0.a(r1)
        L11:
            java.lang.Thread r0 = r2.D
            if (r0 != 0) goto L2a
            r2.v = r1
            r0 = 0
            r2.M = r0
            java.lang.Thread r0 = new java.lang.Thread
            com.tkay.basead.ui.-$$Lambda$PlayerView$gv6bnwmnbsoWKbwvRSk5hN5g4h4 r1 = new com.tkay.basead.ui.-$$Lambda$PlayerView$gv6bnwmnbsoWKbwvRSk5hN5g4h4
            r1.<init>(r2)
            r0.<init>(r1)
            r2.D = r0
            r0.start()
        L2a:
            return
    }

    public void stop() {
            r1 = this;
            com.tkay.expressad.exoplayer.ad r0 = r1.g
            if (r0 == 0) goto L7
            r0.m()
        L7:
            com.tkay.basead.ui.PlayerView$a r0 = r1.A
            if (r0 == 0) goto Le
            r0.b()
        Le:
            return
    }
}
