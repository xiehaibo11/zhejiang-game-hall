package com.tkay.expressad.exoplayer;

public interface w {
    public static final int h = 1;
    public static final int i = 2;
    public static final int j = 3;
    public static final int k = 4;
    public static final int l = 0;
    public static final int m = 1;
    public static final int n = 2;
    public static final int o = 0;
    public static final int p = 1;
    public static final int q = 2;
    public static final int r = 3;
    public static final int s = 4;
    public static final int t = 0;
    public static final int u = 1;
    public static final int v = 2;

    public static abstract class a implements com.tkay.expressad.exoplayer.w.c {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        @java.lang.Deprecated
        private static void a() {
                return
        }

        @Override
        public void onLoadingChanged(boolean r1) {
                r0 = this;
                return
        }

        @Override
        public void onPlaybackParametersChanged(com.tkay.expressad.exoplayer.v r1) {
                r0 = this;
                return
        }

        @Override
        public void onPlayerError(com.tkay.expressad.exoplayer.g r1) {
                r0 = this;
                return
        }

        @Override
        public void onPlayerStateChanged(boolean r1, int r2) {
                r0 = this;
                return
        }

        @Override
        public void onPositionDiscontinuity(int r1) {
                r0 = this;
                return
        }

        @Override
        public void onRepeatModeChanged(int r1) {
                r0 = this;
                return
        }

        @Override
        public void onSeekProcessed() {
                r0 = this;
                return
        }

        @Override
        public void onShuffleModeEnabledChanged(boolean r1) {
                r0 = this;
                return
        }

        @Override
        public void onTimelineChanged(com.tkay.expressad.exoplayer.ae r1, java.lang.Object r2, int r3) {
                r0 = this;
                return
        }

        @Override
        public void onTracksChanged(com.tkay.expressad.exoplayer.h.af r1, com.tkay.expressad.exoplayer.i.g r2) {
                r0 = this;
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface b {
    }

    public interface c {
        void onLoadingChanged(boolean r1);

        void onPlaybackParametersChanged(com.tkay.expressad.exoplayer.v r1);

        void onPlayerError(com.tkay.expressad.exoplayer.g r1);

        void onPlayerStateChanged(boolean r1, int r2);

        void onPositionDiscontinuity(int r1);

        void onRepeatModeChanged(int r1);

        void onSeekProcessed();

        void onShuffleModeEnabledChanged(boolean r1);

        void onTimelineChanged(com.tkay.expressad.exoplayer.ae r1, java.lang.Object r2, int r3);

        void onTracksChanged(com.tkay.expressad.exoplayer.h.af r1, com.tkay.expressad.exoplayer.i.g r2);
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface d {
    }

    public interface e {
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface f {
    }

    public interface g {
        int H();

        void I();

        void a(android.view.Surface r1);

        void a(android.view.SurfaceHolder r1);

        void a(android.view.SurfaceView r1);

        void a(android.view.TextureView r1);

        void a(com.tkay.expressad.exoplayer.l.g r1);

        void b(android.view.Surface r1);

        void b(android.view.SurfaceHolder r1);

        void b(android.view.SurfaceView r1);

        void b(android.view.TextureView r1);

        void b(com.tkay.expressad.exoplayer.l.g r1);

        void d(int r1);
    }

    int A();

    long B();

    int C();

    com.tkay.expressad.exoplayer.h.af D();

    com.tkay.expressad.exoplayer.i.g E();

    com.tkay.expressad.exoplayer.ae F();

    java.lang.Object G();

    void a(int r1);

    void a(int r1, long r2);

    void a(long r1);

    void a(com.tkay.expressad.exoplayer.v r1);

    void a(com.tkay.expressad.exoplayer.w.c r1);

    void a(boolean r1);

    com.tkay.expressad.exoplayer.w.g b();

    void b(int r1);

    void b(com.tkay.expressad.exoplayer.w.c r1);

    void b(boolean r1);

    int c(int r1);

    com.tkay.expressad.exoplayer.w.e c();

    void c(boolean r1);

    int d();

    com.tkay.expressad.exoplayer.g e();

    boolean f();

    int g();

    boolean h();

    boolean i();

    void j();

    com.tkay.expressad.exoplayer.v k();

    java.lang.Object l();

    void m();

    void n();

    int o();

    int p();

    int q();

    int r();

    long s();

    long t();

    long u();

    int v();

    boolean w();

    boolean x();

    boolean y();

    int z();
}
