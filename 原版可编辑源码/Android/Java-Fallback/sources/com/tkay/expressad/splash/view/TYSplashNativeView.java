package com.tkay.expressad.splash.view;

public class TYSplashNativeView extends android.widget.RelativeLayout {
    private static final java.lang.String a = "MBSplashNativeView";
    private int A;
    private int B;
    private float C;
    private float D;
    private boolean E;
    private boolean F;
    private boolean G;
    private boolean H;
    private boolean I;
    private java.lang.String J;
    private java.lang.String K;
    private com.tkay.expressad.splash.view.TYSplashView L;
    private com.tkay.expressad.foundation.d.c M;
    private com.tkay.expressad.shake.MBShakeView N;
    private java.lang.String O;
    private java.lang.String P;
    private java.lang.String Q;
    private com.tkay.expressad.shake.b R;
    private com.tkay.expressad.splash.view.MBNoRecycledCrashImageView b;
    private com.tkay.expressad.splash.view.MBNoRecycledCrashImageView c;
    private android.widget.RelativeLayout d;
    private android.widget.ImageView e;
    private com.tkay.expressad.widget.FeedBackButton f;
    private android.widget.TextView g;
    private android.widget.RelativeLayout h;
    private com.tkay.expressad.splash.view.MBNoRecycledCrashImageView i;
    private android.widget.TextView j;
    private com.tkay.expressad.splash.view.MBNoRecycledCrashImageView k;
    private android.widget.TextView l;
    private android.widget.TextView m;
    private android.widget.RelativeLayout n;
    private android.widget.TextView o;
    private android.widget.TextView p;
    private android.widget.TextView q;
    private com.tkay.expressad.splash.view.MBSplashClickView r;
    private int s;
    private int t;
    private int u;
    private int v;
    private int w;
    private int x;
    private int y;
    private int z;

    final class 1 implements com.tkay.expressad.foundation.g.d.c {
        final com.tkay.expressad.splash.view.TYSplashNativeView a;

        1(com.tkay.expressad.splash.view.TYSplashNativeView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(android.graphics.Bitmap r3, java.lang.String r4) {
                r2 = this;
                if (r3 == 0) goto L11f
                boolean r4 = r3.isRecycled()     // Catch: java.lang.Throwable -> L11b
                if (r4 != 0) goto L11f
                int r4 = r3.getWidth()     // Catch: java.lang.Throwable -> L11b
                int r0 = r3.getHeight()     // Catch: java.lang.Throwable -> L11b
                r1 = 4
                if (r4 >= r0) goto L37
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.TYSplashNativeView.a(r4)     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L11b
                android.widget.RelativeLayout r4 = com.tkay.expressad.splash.view.TYSplashNativeView.b(r4)     // Catch: java.lang.Throwable -> L11b
                r4.setVisibility(r1)     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r4 = com.tkay.expressad.splash.view.TYSplashNativeView.c(r4)     // Catch: java.lang.Throwable -> L11b
                android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.FIT_CENTER     // Catch: java.lang.Throwable -> L11b
                r4.setScaleType(r0)     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r4 = com.tkay.expressad.splash.view.TYSplashNativeView.c(r4)     // Catch: java.lang.Throwable -> L11b
                r4.setImageBitmap(r3)     // Catch: java.lang.Throwable -> L11b
                goto Lf0
            L37:
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L11b
                int r4 = com.tkay.expressad.splash.view.TYSplashNativeView.d(r4)     // Catch: java.lang.Throwable -> L11b
                r0 = 1
                if (r4 != r0) goto Ld3
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L11b
                android.widget.RelativeLayout r4 = com.tkay.expressad.splash.view.TYSplashNativeView.b(r4)     // Catch: java.lang.Throwable -> L11b
                r0 = 0
                r4.setVisibility(r0)     // Catch: java.lang.Throwable -> L11b
                com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L79
                android.content.Context r4 = r4.f()     // Catch: java.lang.Throwable -> L79
                r0 = 1092616192(0x41200000, float:10.0)
                int r4 = com.tkay.expressad.foundation.h.t.b(r4, r0)     // Catch: java.lang.Throwable -> L79
                android.graphics.Bitmap r4 = com.tkay.expressad.foundation.h.n.a(r3, r4)     // Catch: java.lang.Throwable -> L79
                if (r4 == 0) goto L8b
                boolean r0 = r4.isRecycled()     // Catch: java.lang.Throwable -> L79
                if (r0 != 0) goto L8b
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a     // Catch: java.lang.Throwable -> L79
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = com.tkay.expressad.splash.view.TYSplashNativeView.e(r0)     // Catch: java.lang.Throwable -> L79
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_XY     // Catch: java.lang.Throwable -> L79
                r0.setScaleType(r1)     // Catch: java.lang.Throwable -> L79
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a     // Catch: java.lang.Throwable -> L79
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = com.tkay.expressad.splash.view.TYSplashNativeView.e(r0)     // Catch: java.lang.Throwable -> L79
                r0.setImageBitmap(r4)     // Catch: java.lang.Throwable -> L79
                goto L8b
            L79:
                r4 = move-exception
                r4.getMessage()     // Catch: java.lang.Throwable -> L87
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L87
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r4 = com.tkay.expressad.splash.view.TYSplashNativeView.e(r4)     // Catch: java.lang.Throwable -> L87
                r4.setImageBitmap(r3)     // Catch: java.lang.Throwable -> L87
                goto L8b
            L87:
                r4 = move-exception
                r4.getMessage()     // Catch: java.lang.Throwable -> L11b
            L8b:
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L11b
                android.widget.TextView r4 = com.tkay.expressad.splash.view.TYSplashNativeView.g(r4)     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.foundation.d.c r0 = com.tkay.expressad.splash.view.TYSplashNativeView.f(r0)     // Catch: java.lang.Throwable -> L11b
                java.lang.String r0 = r0.bb()     // Catch: java.lang.Throwable -> L11b
                r4.setText(r0)     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.TYSplashNativeView.h(r4)     // Catch: java.lang.Throwable -> L11b
                android.graphics.Bitmap r4 = com.tkay.expressad.foundation.h.n.b(r3)     // Catch: java.lang.Throwable -> Lc4
                if (r4 == 0) goto Lf0
                boolean r0 = r4.isRecycled()     // Catch: java.lang.Throwable -> Lc4
                if (r0 != 0) goto Lf0
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a     // Catch: java.lang.Throwable -> Lc4
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = com.tkay.expressad.splash.view.TYSplashNativeView.c(r0)     // Catch: java.lang.Throwable -> Lc4
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_CROP     // Catch: java.lang.Throwable -> Lc4
                r0.setScaleType(r1)     // Catch: java.lang.Throwable -> Lc4
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a     // Catch: java.lang.Throwable -> Lc4
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = com.tkay.expressad.splash.view.TYSplashNativeView.c(r0)     // Catch: java.lang.Throwable -> Lc4
                r0.setImageBitmap(r4)     // Catch: java.lang.Throwable -> Lc4
                goto Lf0
            Lc4:
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> Lce
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r4 = com.tkay.expressad.splash.view.TYSplashNativeView.c(r4)     // Catch: java.lang.Throwable -> Lce
                r4.setImageBitmap(r3)     // Catch: java.lang.Throwable -> Lce
                goto Lf0
            Lce:
                r4 = move-exception
                r4.getMessage()     // Catch: java.lang.Throwable -> L11b
                goto Lf0
            Ld3:
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L11b
                android.widget.RelativeLayout r4 = com.tkay.expressad.splash.view.TYSplashNativeView.b(r4)     // Catch: java.lang.Throwable -> L11b
                r4.setVisibility(r1)     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r4 = com.tkay.expressad.splash.view.TYSplashNativeView.c(r4)     // Catch: java.lang.Throwable -> L11b
                android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.FIT_CENTER     // Catch: java.lang.Throwable -> L11b
                r4.setScaleType(r0)     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r4 = com.tkay.expressad.splash.view.TYSplashNativeView.c(r4)     // Catch: java.lang.Throwable -> L11b
                r4.setImageBitmap(r3)     // Catch: java.lang.Throwable -> L11b
            Lf0:
                android.graphics.Bitmap r4 = com.tkay.expressad.foundation.h.n.b(r3)     // Catch: java.lang.Throwable -> L111
                if (r4 == 0) goto L110
                boolean r0 = r4.isRecycled()     // Catch: java.lang.Throwable -> L111
                if (r0 != 0) goto L110
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a     // Catch: java.lang.Throwable -> L111
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = com.tkay.expressad.splash.view.TYSplashNativeView.i(r0)     // Catch: java.lang.Throwable -> L111
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_CROP     // Catch: java.lang.Throwable -> L111
                r0.setScaleType(r1)     // Catch: java.lang.Throwable -> L111
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a     // Catch: java.lang.Throwable -> L111
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = com.tkay.expressad.splash.view.TYSplashNativeView.i(r0)     // Catch: java.lang.Throwable -> L111
                r0.setImageBitmap(r4)     // Catch: java.lang.Throwable -> L111
            L110:
                return
            L111:
                com.tkay.expressad.splash.view.TYSplashNativeView r4 = r2.a     // Catch: java.lang.Throwable -> L11b
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r4 = com.tkay.expressad.splash.view.TYSplashNativeView.c(r4)     // Catch: java.lang.Throwable -> L11b
                r4.setImageBitmap(r3)     // Catch: java.lang.Throwable -> L11b
                goto L11f
            L11b:
                r3 = move-exception
                r3.getMessage()
            L11f:
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                return
        }
    }

    final class 10 implements android.view.View.OnClickListener {
        final com.tkay.expressad.splash.view.TYSplashNativeView a;

        10(com.tkay.expressad.splash.view.TYSplashNativeView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.expressad.splash.view.TYSplashNativeView r2 = r1.a
                boolean r2 = com.tkay.expressad.splash.view.TYSplashNativeView.k(r2)
                if (r2 == 0) goto L49
                com.tkay.expressad.splash.view.TYSplashNativeView r2 = r1.a
                com.tkay.expressad.splash.view.TYSplashView r2 = com.tkay.expressad.splash.view.TYSplashNativeView.l(r2)
                com.tkay.expressad.splash.js.SplashJSBridgeImpl r2 = r2.getSplashJSBridgeImpl()
                if (r2 == 0) goto L35
                com.tkay.expressad.splash.view.TYSplashNativeView r2 = r1.a
                com.tkay.expressad.splash.view.TYSplashView r2 = com.tkay.expressad.splash.view.TYSplashNativeView.l(r2)
                com.tkay.expressad.splash.js.SplashJSBridgeImpl r2 = r2.getSplashJSBridgeImpl()
                com.tkay.expressad.splash.d.a r2 = r2.getSplashBridgeListener()
                if (r2 == 0) goto L35
                com.tkay.expressad.splash.view.TYSplashNativeView r2 = r1.a
                com.tkay.expressad.splash.view.TYSplashView r2 = com.tkay.expressad.splash.view.TYSplashNativeView.l(r2)
                com.tkay.expressad.splash.js.SplashJSBridgeImpl r2 = r2.getSplashJSBridgeImpl()
                com.tkay.expressad.splash.d.a r2 = r2.getSplashBridgeListener()
                r2.c()
            L35:
                com.tkay.expressad.splash.view.TYSplashNativeView r2 = r1.a
                android.widget.TextView r2 = com.tkay.expressad.splash.view.TYSplashNativeView.m(r2)
                r0 = 4
                r2.setVisibility(r0)
                com.tkay.expressad.splash.view.TYSplashNativeView r2 = r1.a
                android.widget.TextView r2 = com.tkay.expressad.splash.view.TYSplashNativeView.m(r2)
                r0 = 0
                r2.setEnabled(r0)
            L49:
                return
        }
    }

    final class 11 implements com.tkay.expressad.foundation.f.a {
        final com.tkay.expressad.splash.view.TYSplashNativeView a;

        11(com.tkay.expressad.splash.view.TYSplashNativeView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r2 = this;
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a
                r1 = 1
                com.tkay.expressad.splash.view.TYSplashNativeView.a(r0, r1)
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a
                r1 = 0
                com.tkay.expressad.splash.view.TYSplashNativeView.b(r0, r1)
                return
        }

        @Override
        public final void b() {
                r2 = this;
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a
                r1 = 0
                com.tkay.expressad.splash.view.TYSplashNativeView.a(r0, r1)
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a
                r1 = 1
                com.tkay.expressad.splash.view.TYSplashNativeView.b(r0, r1)
                return
        }

        @Override
        public final void c() {
                r2 = this;
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a
                r1 = 0
                com.tkay.expressad.splash.view.TYSplashNativeView.a(r0, r1)
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.a
                r1 = 1
                com.tkay.expressad.splash.view.TYSplashNativeView.b(r0, r1)
                return
        }
    }

    final class 2 implements android.view.View.OnClickListener {
        final com.tkay.expressad.splash.view.TYSplashNativeView a;

        2(com.tkay.expressad.splash.view.TYSplashNativeView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.expressad.splash.view.TYSplashNativeView r2 = r1.a
                r0 = 0
                com.tkay.expressad.splash.view.TYSplashNativeView.a(r2, r0)
                return
        }
    }

    final class 3 extends com.tkay.expressad.shake.b {
        final com.tkay.expressad.splash.view.TYSplashNativeView h;

        3(com.tkay.expressad.splash.view.TYSplashNativeView r1, int r2, int r3) {
                r0 = this;
                r0.h = r1
                r0.<init>(r2, r3)
                return
        }

        @Override
        public final void a() {
                r2 = this;
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.h
                boolean r0 = com.tkay.expressad.splash.view.TYSplashNativeView.n(r0)
                if (r0 == 0) goto L9
                return
            L9:
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.h
                boolean r0 = com.tkay.expressad.splash.view.TYSplashNativeView.o(r0)
                if (r0 == 0) goto L12
                return
            L12:
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r2.h
                r1 = 4
                com.tkay.expressad.splash.view.TYSplashNativeView.a(r0, r1)
                return
        }
    }

    final class 4 implements com.tkay.expressad.foundation.g.d.c {
        final com.tkay.expressad.splash.view.TYSplashNativeView a;

        4(com.tkay.expressad.splash.view.TYSplashNativeView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(android.graphics.Bitmap r2, java.lang.String r3) {
                r1 = this;
                if (r2 == 0) goto L46
                boolean r3 = r2.isRecycled()     // Catch: java.lang.Throwable -> L42
                if (r3 != 0) goto L46
                com.tkay.expressad.splash.view.TYSplashNativeView r3 = r1.a     // Catch: java.lang.Throwable -> L34
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r3 = com.tkay.expressad.splash.view.TYSplashNativeView.j(r3)     // Catch: java.lang.Throwable -> L34
                if (r3 == 0) goto L33
                com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L34
                android.content.Context r3 = r3.f()     // Catch: java.lang.Throwable -> L34
                r0 = 1109393408(0x42200000, float:40.0)
                int r3 = com.tkay.expressad.foundation.h.t.b(r3, r0)     // Catch: java.lang.Throwable -> L34
                android.graphics.Bitmap r3 = com.tkay.expressad.foundation.h.n.a(r2, r3)     // Catch: java.lang.Throwable -> L34
                if (r3 == 0) goto L33
                boolean r0 = r3.isRecycled()     // Catch: java.lang.Throwable -> L34
                if (r0 != 0) goto L33
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r1.a     // Catch: java.lang.Throwable -> L34
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = com.tkay.expressad.splash.view.TYSplashNativeView.j(r0)     // Catch: java.lang.Throwable -> L34
                r0.setImageBitmap(r3)     // Catch: java.lang.Throwable -> L34
            L33:
                return
            L34:
                r3 = move-exception
                r3.getMessage()     // Catch: java.lang.Throwable -> L42
                com.tkay.expressad.splash.view.TYSplashNativeView r3 = r1.a     // Catch: java.lang.Throwable -> L42
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r3 = com.tkay.expressad.splash.view.TYSplashNativeView.j(r3)     // Catch: java.lang.Throwable -> L42
                r3.setImageBitmap(r2)     // Catch: java.lang.Throwable -> L42
                goto L46
            L42:
                r2 = move-exception
                r2.getMessage()
            L46:
                return
        }

        @Override
        public final void a(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                com.tkay.expressad.splash.view.TYSplashNativeView r1 = r0.a
                com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r1 = com.tkay.expressad.splash.view.TYSplashNativeView.j(r1)
                r2 = 4
                r1.setVisibility(r2)
                return
        }
    }


    final class 6 implements android.view.View.OnClickListener {
        final com.tkay.expressad.splash.view.TYSplashNativeView a;

        6(com.tkay.expressad.splash.view.TYSplashNativeView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.expressad.splash.view.TYSplashNativeView r2 = r1.a
                r0 = 1
                com.tkay.expressad.splash.view.TYSplashNativeView.a(r2, r0)
                return
        }
    }

    final class 7 implements android.view.View.OnClickListener {
        final com.tkay.expressad.splash.view.TYSplashNativeView a;

        7(com.tkay.expressad.splash.view.TYSplashNativeView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.expressad.splash.view.TYSplashNativeView r2 = r1.a
                r0 = 0
                com.tkay.expressad.splash.view.TYSplashNativeView.a(r2, r0)
                return
        }
    }

    final class 8 implements android.view.View.OnClickListener {
        final com.tkay.expressad.splash.view.TYSplashNativeView a;

        8(com.tkay.expressad.splash.view.TYSplashNativeView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.expressad.splash.view.TYSplashNativeView r2 = r1.a
                com.tkay.expressad.foundation.d.c r2 = com.tkay.expressad.splash.view.TYSplashNativeView.f(r2)
                com.tkay.expressad.foundation.d.a r2 = r2.aG()
                if (r2 == 0) goto L29
                com.tkay.expressad.splash.view.TYSplashNativeView r2 = r1.a
                com.tkay.expressad.foundation.d.c r2 = com.tkay.expressad.splash.view.TYSplashNativeView.f(r2)
                com.tkay.expressad.foundation.d.a r2 = r2.aG()
                java.lang.String r2 = r2.c()
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 != 0) goto L29
                com.tkay.expressad.splash.view.TYSplashNativeView r0 = r1.a
                android.content.Context r0 = r0.getContext()
                com.tkay.core.common.l.l.a(r0, r2)
            L29:
                return
        }
    }

    final class 9 implements android.view.View.OnClickListener {
        final com.tkay.expressad.splash.view.TYSplashNativeView a;

        9(com.tkay.expressad.splash.view.TYSplashNativeView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r2) {
                r1 = this;
                com.tkay.expressad.splash.view.TYSplashNativeView r2 = r1.a
                com.tkay.expressad.foundation.d.c r2 = com.tkay.expressad.splash.view.TYSplashNativeView.f(r2)
                com.tkay.expressad.foundation.d.a r2 = r2.aG()
                if (r2 == 0) goto L1b
                com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
                android.content.Context r0 = r0.f()
                java.lang.String r2 = r2.a()
                com.tkay.core.common.l.l.a(r0, r2)
            L1b:
                return
        }
    }

    public TYSplashNativeView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.H = r1
            r0.I = r1
            return
    }

    public TYSplashNativeView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public TYSplashNativeView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.H = r1
            r0.I = r1
            return
    }

    public TYSplashNativeView(android.content.Context r9, com.tkay.expressad.splash.view.TYSplashView r10, com.tkay.expressad.splash.a.b r11) {
            r8 = this;
            java.lang.String r0 = "string"
            java.lang.String r1 = "id"
            r8.<init>(r9)
            r9 = 0
            r8.H = r9
            r8.I = r9
            if (r11 == 0) goto L411
            java.lang.String r2 = r11.b()
            r8.J = r2
            java.lang.String r2 = r11.a()
            r8.K = r2
            com.tkay.expressad.foundation.d.c r2 = r11.c()
            r8.M = r2
            r8.L = r10
            int r10 = r11.e()
            r8.s = r10
            int r10 = r11.f()
            r8.v = r10
            int r10 = r11.g()
            r8.u = r10
            int r10 = r11.h()
            r8.w = r10
            int r10 = r11.i()
            r8.x = r10
            int r10 = r11.j()
            r8.y = r10
            int r10 = r11.k()
            r8.z = r10
            int r10 = r11.l()
            r8.A = r10
            boolean r10 = r11.d()
            r8.G = r10
            int r10 = r11.m()
            r8.B = r10
            r10 = 1
            int r11 = r8.A     // Catch: java.lang.Throwable -> L25d
            java.lang.String r2 = "layout"
            if (r11 != r10) goto L74
            android.content.Context r11 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r11 = r11.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_portrait"
            int r11 = com.tkay.expressad.foundation.h.i.a(r11, r3, r2)     // Catch: java.lang.Throwable -> L25d
            goto L82
        L74:
            android.content.Context r11 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r11 = r11.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_landscape"
            int r11 = com.tkay.expressad.foundation.h.i.a(r11, r3, r2)     // Catch: java.lang.Throwable -> L25d
        L82:
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r2)     // Catch: java.lang.Throwable -> L25d
            r3 = 0
            android.view.View r11 = r2.inflate(r11, r3)     // Catch: java.lang.Throwable -> L25d
            r8.addView(r11)     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_iv_image_bg"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r2 = (com.tkay.expressad.splash.view.MBNoRecycledCrashImageView) r2     // Catch: java.lang.Throwable -> L25d
            r8.b = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_iv_image"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r2 = (com.tkay.expressad.splash.view.MBNoRecycledCrashImageView) r2     // Catch: java.lang.Throwable -> L25d
            r8.c = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_topcontroller"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            android.widget.RelativeLayout r2 = (android.widget.RelativeLayout) r2     // Catch: java.lang.Throwable -> L25d
            r8.d = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_iv_link"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            android.widget.ImageView r2 = (android.widget.ImageView) r2     // Catch: java.lang.Throwable -> L25d
            r8.e = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_feedback"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            com.tkay.expressad.widget.FeedBackButton r2 = (com.tkay.expressad.widget.FeedBackButton) r2     // Catch: java.lang.Throwable -> L25d
            r8.f = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_tv_skip"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Throwable -> L25d
            r8.g = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_landscape_foreground"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            android.widget.RelativeLayout r2 = (android.widget.RelativeLayout) r2     // Catch: java.lang.Throwable -> L25d
            r8.h = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_iv_icon"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r2 = (com.tkay.expressad.splash.view.MBNoRecycledCrashImageView) r2     // Catch: java.lang.Throwable -> L25d
            r8.i = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_tv_title"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Throwable -> L25d
            r8.j = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_iv_foregroundimage"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r2 = (com.tkay.expressad.splash.view.MBNoRecycledCrashImageView) r2     // Catch: java.lang.Throwable -> L25d
            r8.k = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_tv_adrect"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Throwable -> L25d
            r8.l = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_layout_appinfo"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            android.widget.RelativeLayout r2 = (android.widget.RelativeLayout) r2     // Catch: java.lang.Throwable -> L25d
            r8.n = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_tv_appinfo"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Throwable -> L25d
            r8.o = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_tv_privacy"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Throwable -> L25d
            r8.p = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_tv_permission"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            android.widget.TextView r2 = (android.widget.TextView) r2     // Catch: java.lang.Throwable -> L25d
            r8.q = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_tv_click"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r2 = r11.findViewById(r2)     // Catch: java.lang.Throwable -> L25d
            com.tkay.expressad.splash.view.MBSplashClickView r2 = (com.tkay.expressad.splash.view.MBSplashClickView) r2     // Catch: java.lang.Throwable -> L25d
            r8.r = r2     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_tv_adcircle"
            int r1 = com.tkay.expressad.foundation.h.i.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L25d
            android.view.View r11 = r11.findViewById(r1)     // Catch: java.lang.Throwable -> L25d
            android.widget.TextView r11 = (android.widget.TextView) r11     // Catch: java.lang.Throwable -> L25d
            r8.m = r11     // Catch: java.lang.Throwable -> L25d
            android.content.Context r11 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r11 = r11.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r1 = "tkay_splash_count_time_can_skip"
            int r11 = com.tkay.expressad.foundation.h.i.a(r11, r1, r0)     // Catch: java.lang.Throwable -> L25d
            android.content.Context r1 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r2 = "tkay_splash_count_time_can_skip_not"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r3 = "tkay_splash_count_time_can_skip_s"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r0)     // Catch: java.lang.Throwable -> L25d
            android.content.Context r3 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r11 = r3.getString(r11)     // Catch: java.lang.Throwable -> L25d
            r8.P = r11     // Catch: java.lang.Throwable -> L25d
            android.content.Context r11 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.res.Resources r11 = r11.getResources()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r11 = r11.getString(r1)     // Catch: java.lang.Throwable -> L25d
            r8.Q = r11     // Catch: java.lang.Throwable -> L25d
            android.content.Context r11 = r8.getContext()     // Catch: java.lang.Throwable -> L25d
            android.content.res.Resources r11 = r11.getResources()     // Catch: java.lang.Throwable -> L25d
            java.lang.String r11 = r11.getString(r2)     // Catch: java.lang.Throwable -> L25d
            r8.O = r11     // Catch: java.lang.Throwable -> L25d
            goto L261
        L25d:
            r11 = move-exception
            r11.getMessage()
        L261:
            com.tkay.expressad.foundation.f.b r11 = com.tkay.expressad.foundation.f.b.a()
            boolean r11 = r11.b()
            r1 = 8
            if (r11 == 0) goto L299
            com.tkay.expressad.foundation.d.c r11 = r8.M
            java.lang.String r2 = r8.J
            r11.l(r2)
            com.tkay.expressad.foundation.f.b r11 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r2 = r8.J
            com.tkay.expressad.splash.view.TYSplashNativeView$11 r3 = new com.tkay.expressad.splash.view.TYSplashNativeView$11
            r3.<init>(r8)
            r11.a(r2, r3)
            com.tkay.expressad.foundation.f.b r11 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r2 = r8.J
            com.tkay.expressad.widget.FeedBackButton r3 = r8.f
            r11.a(r2, r3)
            com.tkay.expressad.foundation.f.b r11 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r2 = r8.J
            com.tkay.expressad.foundation.d.c r3 = r8.M
            r11.a(r2, r3)
            goto L2a0
        L299:
            com.tkay.expressad.widget.FeedBackButton r11 = r8.f
            if (r11 == 0) goto L2a0
            r11.setVisibility(r1)
        L2a0:
            com.tkay.expressad.foundation.d.c r11 = r8.M
            java.lang.String r11 = r11.be()
            boolean r11 = android.text.TextUtils.isEmpty(r11)
            r2 = 4
            if (r11 != 0) goto L2c8
            com.tkay.core.common.b.m r11 = com.tkay.core.common.b.m.a()
            android.content.Context r11 = r11.f()
            com.tkay.expressad.foundation.g.d.b r11 = com.tkay.expressad.foundation.g.d.b.a(r11)
            com.tkay.expressad.foundation.d.c r3 = r8.M
            java.lang.String r3 = r3.be()
            com.tkay.expressad.splash.view.TYSplashNativeView$1 r4 = new com.tkay.expressad.splash.view.TYSplashNativeView$1
            r4.<init>(r8)
            r11.a(r3, r4)
            goto L2cd
        L2c8:
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r11 = r8.c
            r11.setVisibility(r2)
        L2cd:
            r8.e()
            com.tkay.expressad.foundation.d.c r11 = r8.M
            com.tkay.expressad.foundation.d.a r11 = r11.aG()
            if (r11 == 0) goto L368
            int r11 = r8.w
            if (r11 != 0) goto L368
            com.tkay.expressad.foundation.d.c r11 = r8.M
            com.tkay.expressad.foundation.d.a r11 = r11.aG()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            android.content.Context r4 = r8.getContext()
            android.content.Context r5 = r8.getContext()
            java.lang.String r6 = "tkay_cm_app_info_app_name"
            int r5 = com.tkay.expressad.foundation.h.i.a(r5, r6, r0)
            java.lang.String r4 = r4.getString(r5)
            r3.append(r4)
            java.lang.String r4 = r11.b()
            r3.append(r4)
            java.lang.String r4 = "\n"
            r3.append(r4)
            android.content.Context r5 = r8.getContext()
            android.content.Context r6 = r8.getContext()
            java.lang.String r7 = "tkay_cm_app_info_version"
            int r6 = com.tkay.expressad.foundation.h.i.a(r6, r7, r0)
            java.lang.String r5 = r5.getString(r6)
            r3.append(r5)
            java.lang.String r5 = r11.e()
            r3.append(r5)
            r3.append(r4)
            android.content.Context r5 = r8.getContext()
            android.content.Context r6 = r8.getContext()
            java.lang.String r7 = "tkay_cm_app_info_publish"
            int r6 = com.tkay.expressad.foundation.h.i.a(r6, r7, r0)
            java.lang.String r5 = r5.getString(r6)
            r3.append(r5)
            java.lang.String r5 = r11.f()
            r3.append(r5)
            r3.append(r4)
            android.content.Context r4 = r8.getContext()
            android.content.Context r5 = r8.getContext()
            java.lang.String r6 = "tkay_cm_app_info_update_time"
            int r0 = com.tkay.expressad.foundation.h.i.a(r5, r6, r0)
            java.lang.String r0 = r4.getString(r0)
            r3.append(r0)
            java.lang.String r11 = r11.d()
            r3.append(r11)
            android.widget.TextView r11 = r8.o
            r11.setText(r3)
            goto L36d
        L368:
            android.widget.RelativeLayout r11 = r8.n
            r11.setVisibility(r1)
        L36d:
            int r11 = r8.v
            if (r11 != r10) goto L377
            com.tkay.expressad.splash.view.MBSplashClickView r11 = r8.r
            r11.setVisibility(r1)
            goto L38a
        L377:
            int r11 = r8.x
            if (r11 != r10) goto L381
            com.tkay.expressad.splash.view.MBSplashClickView r11 = r8.r
            r11.setVisibility(r1)
            goto L38a
        L381:
            com.tkay.expressad.splash.view.MBSplashClickView r11 = r8.r
            com.tkay.expressad.foundation.d.c r0 = r8.M
            java.lang.String r0 = r0.cU
            r11.initView(r0)
        L38a:
            int r11 = r8.u
            if (r11 != r10) goto L397
            com.tkay.expressad.splash.view.TYSplashNativeView$6 r11 = new com.tkay.expressad.splash.view.TYSplashNativeView$6
            r11.<init>(r8)
            r8.setOnClickListener(r11)
            goto L3a1
        L397:
            com.tkay.expressad.splash.view.MBSplashClickView r11 = r8.r
            com.tkay.expressad.splash.view.TYSplashNativeView$7 r0 = new com.tkay.expressad.splash.view.TYSplashNativeView$7
            r0.<init>(r8)
            r11.setOnClickListener(r0)
        L3a1:
            android.widget.TextView r11 = r8.p
            com.tkay.expressad.splash.view.TYSplashNativeView$8 r0 = new com.tkay.expressad.splash.view.TYSplashNativeView$8
            r0.<init>(r8)
            r11.setOnClickListener(r0)
            android.widget.TextView r11 = r8.q
            com.tkay.expressad.splash.view.TYSplashNativeView$9 r0 = new com.tkay.expressad.splash.view.TYSplashNativeView$9
            r0.<init>(r8)
            r11.setOnClickListener(r0)
            android.widget.TextView r11 = r8.g
            com.tkay.expressad.splash.view.TYSplashNativeView$10 r0 = new com.tkay.expressad.splash.view.TYSplashNativeView$10
            r0.<init>(r8)
            r11.setOnClickListener(r0)
            int r11 = r8.x
            if (r11 != r10) goto L40b
            com.tkay.expressad.shake.MBShakeView r10 = new com.tkay.expressad.shake.MBShakeView
            android.content.Context r11 = r8.getContext()
            r10.<init>(r11)
            r8.N = r10
            com.tkay.expressad.foundation.d.c r11 = r8.M
            java.lang.String r11 = r11.cU
            r10.initView(r11)
            android.widget.RelativeLayout$LayoutParams r10 = new android.widget.RelativeLayout$LayoutParams
            r11 = -2
            r10.<init>(r11, r11)
            r11 = 13
            r10.addRule(r11)
            com.tkay.expressad.shake.MBShakeView r11 = r8.N
            r11.setLayoutParams(r10)
            com.tkay.expressad.shake.MBShakeView r10 = r8.N
            r8.addView(r10)
            com.tkay.expressad.splash.view.MBSplashClickView r10 = r8.r
            r10.setVisibility(r2)
            com.tkay.expressad.splash.view.MBSplashClickView r10 = r8.r
            r10.setEnabled(r9)
            com.tkay.expressad.shake.MBShakeView r9 = r8.N
            com.tkay.expressad.splash.view.TYSplashNativeView$2 r10 = new com.tkay.expressad.splash.view.TYSplashNativeView$2
            r10.<init>(r8)
            r9.setOnClickListener(r10)
            com.tkay.expressad.splash.view.TYSplashNativeView$3 r9 = new com.tkay.expressad.splash.view.TYSplashNativeView$3
            int r10 = r8.y
            int r11 = r8.z
            int r11 = r11 * 1000
            r9.<init>(r8, r10, r11)
            r8.R = r9
        L40b:
            int r9 = r8.s
            r8.updateCountDown(r9)
            return
        L411:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r10 = "Parameters is NULL, can't gen view."
            r9.<init>(r10)
            throw r9
    }

    private void a() {
            r5 = this;
            java.lang.String r0 = "string"
            java.lang.String r1 = "id"
            int r2 = r5.A     // Catch: java.lang.Throwable -> L203
            r3 = 1
            java.lang.String r4 = "layout"
            if (r2 != r3) goto L1a
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r3 = "tkay_splash_portrait"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L203
            goto L28
        L1a:
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r3 = "tkay_splash_landscape"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L203
        L28:
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.view.LayoutInflater r3 = android.view.LayoutInflater.from(r3)     // Catch: java.lang.Throwable -> L203
            r4 = 0
            android.view.View r2 = r3.inflate(r2, r4)     // Catch: java.lang.Throwable -> L203
            r5.addView(r2)     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_iv_image_bg"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r3 = (com.tkay.expressad.splash.view.MBNoRecycledCrashImageView) r3     // Catch: java.lang.Throwable -> L203
            r5.b = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_iv_image"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r3 = (com.tkay.expressad.splash.view.MBNoRecycledCrashImageView) r3     // Catch: java.lang.Throwable -> L203
            r5.c = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_topcontroller"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            android.widget.RelativeLayout r3 = (android.widget.RelativeLayout) r3     // Catch: java.lang.Throwable -> L203
            r5.d = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_iv_link"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            android.widget.ImageView r3 = (android.widget.ImageView) r3     // Catch: java.lang.Throwable -> L203
            r5.e = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_feedback"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            com.tkay.expressad.widget.FeedBackButton r3 = (com.tkay.expressad.widget.FeedBackButton) r3     // Catch: java.lang.Throwable -> L203
            r5.f = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_tv_skip"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            android.widget.TextView r3 = (android.widget.TextView) r3     // Catch: java.lang.Throwable -> L203
            r5.g = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_landscape_foreground"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            android.widget.RelativeLayout r3 = (android.widget.RelativeLayout) r3     // Catch: java.lang.Throwable -> L203
            r5.h = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_iv_icon"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r3 = (com.tkay.expressad.splash.view.MBNoRecycledCrashImageView) r3     // Catch: java.lang.Throwable -> L203
            r5.i = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_tv_title"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            android.widget.TextView r3 = (android.widget.TextView) r3     // Catch: java.lang.Throwable -> L203
            r5.j = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_iv_foregroundimage"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r3 = (com.tkay.expressad.splash.view.MBNoRecycledCrashImageView) r3     // Catch: java.lang.Throwable -> L203
            r5.k = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_tv_adrect"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            android.widget.TextView r3 = (android.widget.TextView) r3     // Catch: java.lang.Throwable -> L203
            r5.l = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_layout_appinfo"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            android.widget.RelativeLayout r3 = (android.widget.RelativeLayout) r3     // Catch: java.lang.Throwable -> L203
            r5.n = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_tv_appinfo"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            android.widget.TextView r3 = (android.widget.TextView) r3     // Catch: java.lang.Throwable -> L203
            r5.o = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_tv_privacy"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            android.widget.TextView r3 = (android.widget.TextView) r3     // Catch: java.lang.Throwable -> L203
            r5.p = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_tv_permission"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            android.widget.TextView r3 = (android.widget.TextView) r3     // Catch: java.lang.Throwable -> L203
            r5.q = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_tv_click"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Throwable -> L203
            com.tkay.expressad.splash.view.MBSplashClickView r3 = (com.tkay.expressad.splash.view.MBSplashClickView) r3     // Catch: java.lang.Throwable -> L203
            r5.r = r3     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_tv_adcircle"
            int r1 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L203
            android.view.View r1 = r2.findViewById(r1)     // Catch: java.lang.Throwable -> L203
            android.widget.TextView r1 = (android.widget.TextView) r1     // Catch: java.lang.Throwable -> L203
            r5.m = r1     // Catch: java.lang.Throwable -> L203
            android.content.Context r1 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r2 = "tkay_splash_count_time_can_skip"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L203
            android.content.Context r2 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r3 = "tkay_splash_count_time_can_skip_not"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r0)     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L203
            java.lang.String r4 = "tkay_splash_count_time_can_skip_s"
            int r0 = com.tkay.expressad.foundation.h.i.a(r3, r4, r0)     // Catch: java.lang.Throwable -> L203
            android.content.Context r3 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.res.Resources r3 = r3.getResources()     // Catch: java.lang.Throwable -> L203
            java.lang.String r1 = r3.getString(r1)     // Catch: java.lang.Throwable -> L203
            r5.P = r1     // Catch: java.lang.Throwable -> L203
            android.content.Context r1 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Throwable -> L203
            java.lang.String r1 = r1.getString(r2)     // Catch: java.lang.Throwable -> L203
            r5.Q = r1     // Catch: java.lang.Throwable -> L203
            android.content.Context r1 = r5.getContext()     // Catch: java.lang.Throwable -> L203
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Throwable -> L203
            java.lang.String r0 = r1.getString(r0)     // Catch: java.lang.Throwable -> L203
            r5.O = r0     // Catch: java.lang.Throwable -> L203
            return
        L203:
            r0 = move-exception
            r0.getMessage()
            return
    }

    private void a(int r3) {
            r2 = this;
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.L
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            if (r0 == 0) goto L43
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.L
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            com.tkay.expressad.splash.d.a r0 = r0.getSplashBridgeListener()
            if (r0 == 0) goto L43
            float r0 = r2.C     // Catch: java.lang.Throwable -> L30
            float r1 = r2.D     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = com.tkay.expressad.splash.a.a.a.a(r3, r0, r1)     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.foundation.d.c r0 = r2.M     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.foundation.d.c r3 = com.tkay.expressad.splash.a.a.a.a(r3, r0)     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.L     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.splash.d.a r0 = r0.getSplashBridgeListener()     // Catch: java.lang.Throwable -> L30
            r0.a(r3)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r3 = move-exception
            r3.getMessage()
            com.tkay.expressad.splash.view.TYSplashView r3 = r2.L
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r3 = r3.getSplashJSBridgeImpl()
            com.tkay.expressad.splash.d.a r3 = r3.getSplashBridgeListener()
            com.tkay.expressad.foundation.d.c r0 = r2.M
            r3.a(r0)
        L43:
            return
    }

    static void a(com.tkay.expressad.splash.view.TYSplashNativeView r2, int r3) {
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.L
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            if (r0 == 0) goto L43
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.L
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            com.tkay.expressad.splash.d.a r0 = r0.getSplashBridgeListener()
            if (r0 == 0) goto L43
            float r0 = r2.C     // Catch: java.lang.Throwable -> L30
            float r1 = r2.D     // Catch: java.lang.Throwable -> L30
            java.lang.String r3 = com.tkay.expressad.splash.a.a.a.a(r3, r0, r1)     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.foundation.d.c r0 = r2.M     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.foundation.d.c r3 = com.tkay.expressad.splash.a.a.a.a(r3, r0)     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.L     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()     // Catch: java.lang.Throwable -> L30
            com.tkay.expressad.splash.d.a r0 = r0.getSplashBridgeListener()     // Catch: java.lang.Throwable -> L30
            r0.a(r3)     // Catch: java.lang.Throwable -> L30
            return
        L30:
            r3 = move-exception
            r3.getMessage()
            com.tkay.expressad.splash.view.TYSplashView r3 = r2.L
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r3 = r3.getSplashJSBridgeImpl()
            com.tkay.expressad.splash.d.a r3 = r3.getSplashBridgeListener()
            com.tkay.expressad.foundation.d.c r2 = r2.M
            r3.a(r2)
        L43:
            return
    }

    private void a(boolean r3) {
            r2 = this;
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.L
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            if (r0 == 0) goto L28
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.L
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            com.tkay.expressad.splash.d.a r0 = r0.getSplashBridgeListener()
            if (r0 == 0) goto L28
            com.tkay.expressad.splash.view.TYSplashView r0 = r2.L
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            com.tkay.expressad.splash.d.a r0 = r0.getSplashBridgeListener()
            if (r3 == 0) goto L22
            r3 = 2
            goto L23
        L22:
            r3 = 1
        L23:
            int r1 = r2.t
            r0.a(r3, r1)
        L28:
            return
    }

    static boolean a(com.tkay.expressad.splash.view.TYSplashNativeView r1) {
            r0 = 1
            r1.F = r0
            return r0
    }

    static boolean a(com.tkay.expressad.splash.view.TYSplashNativeView r0, boolean r1) {
            r0.I = r1
            return r1
    }

    static android.widget.RelativeLayout b(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            android.widget.RelativeLayout r0 = r0.h
            return r0
    }

    private void b() {
            r9 = this;
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            boolean r0 = r0.b()
            r1 = 8
            if (r0 == 0) goto L38
            com.tkay.expressad.foundation.d.c r0 = r9.M
            java.lang.String r2 = r9.J
            r0.l(r2)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r2 = r9.J
            com.tkay.expressad.splash.view.TYSplashNativeView$11 r3 = new com.tkay.expressad.splash.view.TYSplashNativeView$11
            r3.<init>(r9)
            r0.a(r2, r3)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r2 = r9.J
            com.tkay.expressad.widget.FeedBackButton r3 = r9.f
            r0.a(r2, r3)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r2 = r9.J
            com.tkay.expressad.foundation.d.c r3 = r9.M
            r0.a(r2, r3)
            goto L3f
        L38:
            com.tkay.expressad.widget.FeedBackButton r0 = r9.f
            if (r0 == 0) goto L3f
            r0.setVisibility(r1)
        L3f:
            com.tkay.expressad.foundation.d.c r0 = r9.M
            java.lang.String r0 = r0.be()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r2 = 4
            if (r0 != 0) goto L67
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.foundation.d.c r3 = r9.M
            java.lang.String r3 = r3.be()
            com.tkay.expressad.splash.view.TYSplashNativeView$1 r4 = new com.tkay.expressad.splash.view.TYSplashNativeView$1
            r4.<init>(r9)
            r0.a(r3, r4)
            goto L6c
        L67:
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = r9.c
            r0.setVisibility(r2)
        L6c:
            r9.e()
            com.tkay.expressad.foundation.d.c r0 = r9.M
            com.tkay.expressad.foundation.d.a r0 = r0.aG()
            if (r0 == 0) goto L109
            int r0 = r9.w
            if (r0 != 0) goto L109
            com.tkay.expressad.foundation.d.c r0 = r9.M
            com.tkay.expressad.foundation.d.a r0 = r0.aG()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            android.content.Context r4 = r9.getContext()
            android.content.Context r5 = r9.getContext()
            java.lang.String r6 = "string"
            java.lang.String r7 = "tkay_cm_app_info_app_name"
            int r5 = com.tkay.expressad.foundation.h.i.a(r5, r7, r6)
            java.lang.String r4 = r4.getString(r5)
            r3.append(r4)
            java.lang.String r4 = r0.b()
            r3.append(r4)
            java.lang.String r4 = "\n"
            r3.append(r4)
            android.content.Context r5 = r9.getContext()
            android.content.Context r7 = r9.getContext()
            java.lang.String r8 = "tkay_cm_app_info_version"
            int r7 = com.tkay.expressad.foundation.h.i.a(r7, r8, r6)
            java.lang.String r5 = r5.getString(r7)
            r3.append(r5)
            java.lang.String r5 = r0.e()
            r3.append(r5)
            r3.append(r4)
            android.content.Context r5 = r9.getContext()
            android.content.Context r7 = r9.getContext()
            java.lang.String r8 = "tkay_cm_app_info_publish"
            int r7 = com.tkay.expressad.foundation.h.i.a(r7, r8, r6)
            java.lang.String r5 = r5.getString(r7)
            r3.append(r5)
            java.lang.String r5 = r0.f()
            r3.append(r5)
            r3.append(r4)
            android.content.Context r4 = r9.getContext()
            android.content.Context r5 = r9.getContext()
            java.lang.String r7 = "tkay_cm_app_info_update_time"
            int r5 = com.tkay.expressad.foundation.h.i.a(r5, r7, r6)
            java.lang.String r4 = r4.getString(r5)
            r3.append(r4)
            java.lang.String r0 = r0.d()
            r3.append(r0)
            android.widget.TextView r0 = r9.o
            r0.setText(r3)
            goto L10e
        L109:
            android.widget.RelativeLayout r0 = r9.n
            r0.setVisibility(r1)
        L10e:
            int r0 = r9.v
            r3 = 1
            if (r0 != r3) goto L119
            com.tkay.expressad.splash.view.MBSplashClickView r0 = r9.r
            r0.setVisibility(r1)
            goto L12c
        L119:
            int r0 = r9.x
            if (r0 != r3) goto L123
            com.tkay.expressad.splash.view.MBSplashClickView r0 = r9.r
            r0.setVisibility(r1)
            goto L12c
        L123:
            com.tkay.expressad.splash.view.MBSplashClickView r0 = r9.r
            com.tkay.expressad.foundation.d.c r1 = r9.M
            java.lang.String r1 = r1.cU
            r0.initView(r1)
        L12c:
            int r0 = r9.u
            if (r0 != r3) goto L139
            com.tkay.expressad.splash.view.TYSplashNativeView$6 r0 = new com.tkay.expressad.splash.view.TYSplashNativeView$6
            r0.<init>(r9)
            r9.setOnClickListener(r0)
            goto L143
        L139:
            com.tkay.expressad.splash.view.MBSplashClickView r0 = r9.r
            com.tkay.expressad.splash.view.TYSplashNativeView$7 r1 = new com.tkay.expressad.splash.view.TYSplashNativeView$7
            r1.<init>(r9)
            r0.setOnClickListener(r1)
        L143:
            android.widget.TextView r0 = r9.p
            com.tkay.expressad.splash.view.TYSplashNativeView$8 r1 = new com.tkay.expressad.splash.view.TYSplashNativeView$8
            r1.<init>(r9)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r9.q
            com.tkay.expressad.splash.view.TYSplashNativeView$9 r1 = new com.tkay.expressad.splash.view.TYSplashNativeView$9
            r1.<init>(r9)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r9.g
            com.tkay.expressad.splash.view.TYSplashNativeView$10 r1 = new com.tkay.expressad.splash.view.TYSplashNativeView$10
            r1.<init>(r9)
            r0.setOnClickListener(r1)
            int r0 = r9.x
            if (r0 != r3) goto L1ae
            com.tkay.expressad.shake.MBShakeView r0 = new com.tkay.expressad.shake.MBShakeView
            android.content.Context r1 = r9.getContext()
            r0.<init>(r1)
            r9.N = r0
            com.tkay.expressad.foundation.d.c r1 = r9.M
            java.lang.String r1 = r1.cU
            r0.initView(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            r1 = 13
            r0.addRule(r1)
            com.tkay.expressad.shake.MBShakeView r1 = r9.N
            r1.setLayoutParams(r0)
            com.tkay.expressad.shake.MBShakeView r0 = r9.N
            r9.addView(r0)
            com.tkay.expressad.splash.view.MBSplashClickView r0 = r9.r
            r0.setVisibility(r2)
            com.tkay.expressad.splash.view.MBSplashClickView r0 = r9.r
            r1 = 0
            r0.setEnabled(r1)
            com.tkay.expressad.shake.MBShakeView r0 = r9.N
            com.tkay.expressad.splash.view.TYSplashNativeView$2 r1 = new com.tkay.expressad.splash.view.TYSplashNativeView$2
            r1.<init>(r9)
            r0.setOnClickListener(r1)
            com.tkay.expressad.splash.view.TYSplashNativeView$3 r0 = new com.tkay.expressad.splash.view.TYSplashNativeView$3
            int r1 = r9.y
            int r2 = r9.z
            int r2 = r2 * 1000
            r0.<init>(r9, r1, r2)
            r9.R = r0
        L1ae:
            int r0 = r9.s
            r9.updateCountDown(r0)
            return
    }

    static void b(com.tkay.expressad.splash.view.TYSplashNativeView r1, boolean r2) {
            com.tkay.expressad.splash.view.TYSplashView r0 = r1.L
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            if (r0 == 0) goto L28
            com.tkay.expressad.splash.view.TYSplashView r0 = r1.L
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            com.tkay.expressad.splash.d.a r0 = r0.getSplashBridgeListener()
            if (r0 == 0) goto L28
            com.tkay.expressad.splash.view.TYSplashView r0 = r1.L
            com.tkay.expressad.splash.js.SplashJSBridgeImpl r0 = r0.getSplashJSBridgeImpl()
            com.tkay.expressad.splash.d.a r0 = r0.getSplashBridgeListener()
            if (r2 == 0) goto L22
            r2 = 2
            goto L23
        L22:
            r2 = 1
        L23:
            int r1 = r1.t
            r0.a(r2, r1)
        L28:
            return
    }

    static com.tkay.expressad.splash.view.MBNoRecycledCrashImageView c(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = r0.c
            return r0
    }

    private void c() {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.M
            java.lang.String r0 = r0.be()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L27
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.foundation.d.c r1 = r3.M
            java.lang.String r1 = r1.be()
            com.tkay.expressad.splash.view.TYSplashNativeView$1 r2 = new com.tkay.expressad.splash.view.TYSplashNativeView$1
            r2.<init>(r3)
            r0.a(r1, r2)
            return
        L27:
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = r3.c
            r1 = 4
            r0.setVisibility(r1)
            return
    }

    static int d(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            int r0 = r0.A
            return r0
    }

    private void d() {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.M
            java.lang.String r0 = r0.bd()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L27
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.foundation.d.c r1 = r3.M
            java.lang.String r1 = r1.bd()
            com.tkay.expressad.splash.view.TYSplashNativeView$4 r2 = new com.tkay.expressad.splash.view.TYSplashNativeView$4
            r2.<init>(r3)
            r0.a(r1, r2)
            return
        L27:
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = r3.i
            r1 = 4
            r0.setVisibility(r1)
            return
    }

    static com.tkay.expressad.splash.view.MBNoRecycledCrashImageView e(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = r0.k
            return r0
    }

    private void e() {
            r7 = this;
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.e()
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.b()
            r1 = 8
            if (r0 == 0) goto L2c
            java.lang.String r0 = r0.J()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L21
            android.widget.ImageView r2 = r7.e
            r2.setVisibility(r1)
        L21:
            android.widget.ImageView r1 = r7.e
            com.tkay.expressad.splash.view.TYSplashNativeView$5 r2 = new com.tkay.expressad.splash.view.TYSplashNativeView$5
            r2.<init>(r7, r0)
            r1.setOnClickListener(r2)
            goto L31
        L2c:
            android.widget.ImageView r0 = r7.e
            r0.setVisibility(r1)
        L31:
            android.content.Context r0 = r7.getContext()
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = "tkay_splash_m_circle"
            java.lang.String r2 = "drawable"
            int r0 = com.tkay.expressad.foundation.h.i.a(r0, r1, r2)
            r1 = 0
            android.content.res.Resources r2 = r7.getResources()     // Catch: java.lang.Throwable -> L63
            android.graphics.drawable.Drawable r0 = r2.getDrawable(r0)     // Catch: java.lang.Throwable -> L63
            android.content.Context r2 = r7.getContext()     // Catch: java.lang.Throwable -> L61
            r3 = 1092616192(0x41200000, float:10.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)     // Catch: java.lang.Throwable -> L61
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Throwable -> L61
            int r3 = com.tkay.expressad.foundation.h.t.b(r4, r3)     // Catch: java.lang.Throwable -> L61
            r4 = 0
            r0.setBounds(r4, r4, r2, r3)     // Catch: java.lang.Throwable -> L61
            goto L68
        L61:
            r2 = move-exception
            goto L65
        L63:
            r2 = move-exception
            r0 = r1
        L65:
            r2.getMessage()
        L68:
            int r2 = r7.A
            r3 = 1
            r4 = 4
            java.lang.String r5 = "string"
            java.lang.String r6 = "tkay_cm_app_info_app_label"
            if (r2 != r3) goto L9c
            boolean r2 = r7.F
            if (r2 == 0) goto L9c
            int r2 = r7.B
            if (r2 == 0) goto L81
            if (r0 == 0) goto L81
            android.widget.TextView r2 = r7.m
            r2.setCompoundDrawables(r0, r1, r1, r1)
        L81:
            android.widget.TextView r0 = r7.m
            android.content.Context r1 = r7.getContext()
            android.content.Context r2 = r7.getContext()
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r6, r5)
            java.lang.String r1 = r1.getString(r2)
            r0.setText(r1)
            android.widget.TextView r0 = r7.l
            r0.setVisibility(r4)
            return
        L9c:
            int r2 = r7.B
            if (r2 == 0) goto La7
            if (r0 == 0) goto La7
            android.widget.TextView r2 = r7.l
            r2.setCompoundDrawables(r0, r1, r1, r1)
        La7:
            android.widget.TextView r0 = r7.l
            android.content.Context r1 = r7.getContext()
            android.content.Context r2 = r7.getContext()
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r6, r5)
            java.lang.String r1 = r1.getString(r2)
            r0.setText(r1)
            android.widget.TextView r0 = r7.m
            r0.setVisibility(r4)
            return
    }

    static com.tkay.expressad.foundation.d.c f(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            com.tkay.expressad.foundation.d.c r0 = r0.M
            return r0
    }

    private void f() {
            r7 = this;
            com.tkay.expressad.foundation.d.c r0 = r7.M
            com.tkay.expressad.foundation.d.a r0 = r0.aG()
            if (r0 == 0) goto L9a
            int r0 = r7.w
            if (r0 != 0) goto L9a
            com.tkay.expressad.foundation.d.c r0 = r7.M
            com.tkay.expressad.foundation.d.a r0 = r0.aG()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.content.Context r2 = r7.getContext()
            android.content.Context r3 = r7.getContext()
            java.lang.String r4 = "string"
            java.lang.String r5 = "tkay_cm_app_info_app_name"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r5, r4)
            java.lang.String r2 = r2.getString(r3)
            r1.append(r2)
            java.lang.String r2 = r0.b()
            r1.append(r2)
            java.lang.String r2 = "\n"
            r1.append(r2)
            android.content.Context r3 = r7.getContext()
            android.content.Context r5 = r7.getContext()
            java.lang.String r6 = "tkay_cm_app_info_version"
            int r5 = com.tkay.expressad.foundation.h.i.a(r5, r6, r4)
            java.lang.String r3 = r3.getString(r5)
            r1.append(r3)
            java.lang.String r3 = r0.e()
            r1.append(r3)
            r1.append(r2)
            android.content.Context r3 = r7.getContext()
            android.content.Context r5 = r7.getContext()
            java.lang.String r6 = "tkay_cm_app_info_publish"
            int r5 = com.tkay.expressad.foundation.h.i.a(r5, r6, r4)
            java.lang.String r3 = r3.getString(r5)
            r1.append(r3)
            java.lang.String r3 = r0.f()
            r1.append(r3)
            r1.append(r2)
            android.content.Context r2 = r7.getContext()
            android.content.Context r3 = r7.getContext()
            java.lang.String r5 = "tkay_cm_app_info_update_time"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r5, r4)
            java.lang.String r2 = r2.getString(r3)
            r1.append(r2)
            java.lang.String r0 = r0.d()
            r1.append(r0)
            android.widget.TextView r0 = r7.o
            r0.setText(r1)
            return
        L9a:
            android.widget.RelativeLayout r0 = r7.n
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    static android.widget.TextView g(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            android.widget.TextView r0 = r0.j
            return r0
    }

    private void g() {
            r3 = this;
            int r0 = r3.v
            r1 = 8
            r2 = 1
            if (r0 != r2) goto Ld
            com.tkay.expressad.splash.view.MBSplashClickView r0 = r3.r
            r0.setVisibility(r1)
            return
        Ld:
            int r0 = r3.x
            if (r0 != r2) goto L17
            com.tkay.expressad.splash.view.MBSplashClickView r0 = r3.r
            r0.setVisibility(r1)
            return
        L17:
            com.tkay.expressad.splash.view.MBSplashClickView r0 = r3.r
            com.tkay.expressad.foundation.d.c r1 = r3.M
            java.lang.String r1 = r1.cU
            r0.initView(r1)
            return
    }

    private void h() {
            r2 = this;
            int r0 = r2.u
            r1 = 1
            if (r0 != r1) goto Le
            com.tkay.expressad.splash.view.TYSplashNativeView$6 r0 = new com.tkay.expressad.splash.view.TYSplashNativeView$6
            r0.<init>(r2)
            r2.setOnClickListener(r0)
            goto L18
        Le:
            com.tkay.expressad.splash.view.MBSplashClickView r0 = r2.r
            com.tkay.expressad.splash.view.TYSplashNativeView$7 r1 = new com.tkay.expressad.splash.view.TYSplashNativeView$7
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L18:
            android.widget.TextView r0 = r2.p
            com.tkay.expressad.splash.view.TYSplashNativeView$8 r1 = new com.tkay.expressad.splash.view.TYSplashNativeView$8
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.q
            com.tkay.expressad.splash.view.TYSplashNativeView$9 r1 = new com.tkay.expressad.splash.view.TYSplashNativeView$9
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r2.g
            com.tkay.expressad.splash.view.TYSplashNativeView$10 r1 = new com.tkay.expressad.splash.view.TYSplashNativeView$10
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            return
    }

    static void h(com.tkay.expressad.splash.view.TYSplashNativeView r3) {
            com.tkay.expressad.foundation.d.c r0 = r3.M
            java.lang.String r0 = r0.bd()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L27
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.expressad.foundation.g.d.b r0 = com.tkay.expressad.foundation.g.d.b.a(r0)
            com.tkay.expressad.foundation.d.c r1 = r3.M
            java.lang.String r1 = r1.bd()
            com.tkay.expressad.splash.view.TYSplashNativeView$4 r2 = new com.tkay.expressad.splash.view.TYSplashNativeView$4
            r2.<init>(r3)
            r0.a(r1, r2)
            return
        L27:
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r3 = r3.i
            r0 = 4
            r3.setVisibility(r0)
            return
    }

    static com.tkay.expressad.splash.view.MBNoRecycledCrashImageView i(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = r0.b
            return r0
    }

    private void i() {
            r3 = this;
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            boolean r0 = r0.b()
            if (r0 == 0) goto L36
            com.tkay.expressad.foundation.d.c r0 = r3.M
            java.lang.String r1 = r3.J
            r0.l(r1)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r1 = r3.J
            com.tkay.expressad.splash.view.TYSplashNativeView$11 r2 = new com.tkay.expressad.splash.view.TYSplashNativeView$11
            r2.<init>(r3)
            r0.a(r1, r2)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r1 = r3.J
            com.tkay.expressad.widget.FeedBackButton r2 = r3.f
            r0.a(r1, r2)
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()
            java.lang.String r1 = r3.J
            com.tkay.expressad.foundation.d.c r2 = r3.M
            r0.a(r1, r2)
            return
        L36:
            com.tkay.expressad.widget.FeedBackButton r0 = r3.f
            if (r0 == 0) goto L3f
            r1 = 8
            r0.setVisibility(r1)
        L3f:
            return
    }

    static com.tkay.expressad.splash.view.MBNoRecycledCrashImageView j(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            com.tkay.expressad.splash.view.MBNoRecycledCrashImageView r0 = r0.i
            return r0
    }

    private void j() {
            r3 = this;
            int r0 = r3.x
            r1 = 1
            if (r0 != r1) goto L4f
            com.tkay.expressad.shake.MBShakeView r0 = new com.tkay.expressad.shake.MBShakeView
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            r3.N = r0
            com.tkay.expressad.foundation.d.c r1 = r3.M
            java.lang.String r1 = r1.cU
            r0.initView(r1)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -2
            r0.<init>(r1, r1)
            r1 = 13
            r0.addRule(r1)
            com.tkay.expressad.shake.MBShakeView r1 = r3.N
            r1.setLayoutParams(r0)
            com.tkay.expressad.shake.MBShakeView r0 = r3.N
            r3.addView(r0)
            com.tkay.expressad.splash.view.MBSplashClickView r0 = r3.r
            r1 = 4
            r0.setVisibility(r1)
            com.tkay.expressad.splash.view.MBSplashClickView r0 = r3.r
            r1 = 0
            r0.setEnabled(r1)
            com.tkay.expressad.shake.MBShakeView r0 = r3.N
            com.tkay.expressad.splash.view.TYSplashNativeView$2 r1 = new com.tkay.expressad.splash.view.TYSplashNativeView$2
            r1.<init>(r3)
            r0.setOnClickListener(r1)
            com.tkay.expressad.splash.view.TYSplashNativeView$3 r0 = new com.tkay.expressad.splash.view.TYSplashNativeView$3
            int r1 = r3.y
            int r2 = r3.z
            int r2 = r2 * 1000
            r0.<init>(r3, r1, r2)
            r3.R = r0
        L4f:
            return
    }

    static boolean k(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            boolean r0 = r0.G
            return r0
    }

    static com.tkay.expressad.splash.view.TYSplashView l(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            com.tkay.expressad.splash.view.TYSplashView r0 = r0.L
            return r0
    }

    static android.widget.TextView m(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            android.widget.TextView r0 = r0.g
            return r0
    }

    static boolean n(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            boolean r0 = r0.I
            return r0
    }

    static boolean o(com.tkay.expressad.splash.view.TYSplashNativeView r0) {
            boolean r0 = r0.H
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r2 = this;
            super.onAttachedToWindow()
            int r0 = r2.x     // Catch: java.lang.Throwable -> L1a
            r1 = 1
            if (r0 != r1) goto L19
            com.tkay.expressad.shake.MBShakeView r0 = r2.N     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L19
            com.tkay.expressad.shake.b r0 = r2.R     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L19
            com.tkay.expressad.shake.a r0 = com.tkay.expressad.shake.a.a()     // Catch: java.lang.Throwable -> L1a
            com.tkay.expressad.shake.b r1 = r2.R     // Catch: java.lang.Throwable -> L1a
            r0.a(r1)     // Catch: java.lang.Throwable -> L1a
        L19:
            return
        L1a:
            r0 = move-exception
            r0.getMessage()
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
    public boolean onInterceptTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            float r0 = r2.getRawX()
            r1.C = r0
            float r0 = r2.getRawY()
            r1.D = r0
            boolean r2 = super.onInterceptTouchEvent(r2)
            return r2
    }

    @Override
    protected void onLayout(boolean r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            super.onLayout(r2, r3, r4, r5, r6)
            android.widget.TextView r2 = r1.g
            if (r2 == 0) goto L65
            android.view.ViewParent r2 = r2.getParent()
            if (r2 == 0) goto L65
            android.widget.TextView r2 = r1.g
            android.view.ViewParent r2 = r2.getParent()
            boolean r2 = r2 instanceof android.view.ViewGroup
            if (r2 == 0) goto L65
            android.widget.TextView r2 = r1.g
            android.view.ViewParent r2 = r2.getParent()
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            boolean r3 = r2 instanceof android.widget.RelativeLayout.LayoutParams
            if (r3 == 0) goto L65
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2
            int r2 = r2.topMargin
            android.content.Context r3 = r1.getContext()
            int r3 = com.tkay.core.common.l.h.b(r3)
            int r2 = r2 + r3
            r3 = 2
            int[] r3 = new int[r3]
            android.widget.TextView r4 = r1.g
            r4.getLocationOnScreen(r3)
            r4 = 1
            r5 = r3[r4]
            if (r5 >= r2) goto L65
            r3 = r3[r4]
            int r2 = r2 - r3
            android.widget.TextView r3 = r1.g
            android.view.ViewParent r3 = r3.getParent()
            boolean r4 = r3 instanceof android.view.ViewGroup
            if (r4 == 0) goto L65
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            int r4 = r3.getPaddingLeft()
            int r5 = r3.getPaddingTop()
            int r5 = r5 + r2
            int r6 = r3.getPaddingRight()
            int r0 = r3.getPaddingBottom()
            int r0 = r0 + r2
            r3.setPadding(r4, r5, r6, r0)
        L65:
            return
    }

    public void release() {
            r2 = this;
            com.tkay.expressad.shake.b r0 = r2.R     // Catch: java.lang.Exception -> L1d
            if (r0 == 0) goto L10
            com.tkay.expressad.shake.a r0 = com.tkay.expressad.shake.a.a()     // Catch: java.lang.Exception -> L1d
            com.tkay.expressad.shake.b r1 = r2.R     // Catch: java.lang.Exception -> L1d
            r0.b(r1)     // Catch: java.lang.Exception -> L1d
            r0 = 0
            r2.R = r0     // Catch: java.lang.Exception -> L1d
        L10:
            com.tkay.expressad.foundation.f.b r0 = com.tkay.expressad.foundation.f.b.a()     // Catch: java.lang.Exception -> L1d
            java.lang.String r1 = r2.J     // Catch: java.lang.Exception -> L1d
            r0.c(r1)     // Catch: java.lang.Exception -> L1d
            r2.detachAllViewsFromParent()     // Catch: java.lang.Exception -> L1d
            return
        L1d:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void setIsPause(boolean r1) {
            r0 = this;
            r0.H = r1
            return
    }

    public void setNotchPadding(int r2, int r3, int r4, int r5) {
            r1 = this;
            android.widget.RelativeLayout r0 = r1.d
            r0.setPadding(r2, r4, r3, r5)
            return
    }

    public void updateCountDown(int r4) {
            r3 = this;
            android.widget.TextView r0 = r3.g
            if (r0 == 0) goto L44
            r3.t = r4
            boolean r0 = r3.G
            java.lang.String r1 = " "
            if (r0 == 0) goto L26
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r3.P
            r0.append(r2)
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r3.O
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            goto L3f
        L26:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = r3.O
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = r3.Q
            r0.append(r4)
            java.lang.String r4 = r0.toString()
        L3f:
            android.widget.TextView r0 = r3.g
            r0.setText(r4)
        L44:
            return
    }
}
