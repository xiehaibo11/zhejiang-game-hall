package com.tkay.expressad.exoplayer;

public class ad implements com.tkay.expressad.exoplayer.h, com.tkay.expressad.exoplayer.w.e, com.tkay.expressad.exoplayer.w.g {
    private static final java.lang.String x = "SimpleExoPlayer";
    private final com.tkay.expressad.exoplayer.ad.a A;
    private final java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.g> B;
    private final java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.g.f> C;
    private final java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.h> D;
    private final java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.b.g> E;
    private final com.tkay.expressad.exoplayer.a.a F;
    private com.tkay.expressad.exoplayer.m G;
    private com.tkay.expressad.exoplayer.m H;
    private android.view.Surface I;
    private boolean J;
    private int K;
    private android.view.SurfaceHolder L;
    private android.view.TextureView M;
    private com.tkay.expressad.exoplayer.c.d N;
    private com.tkay.expressad.exoplayer.c.d O;
    private int P;
    private com.tkay.expressad.exoplayer.b.b Q;
    private float R;
    private com.tkay.expressad.exoplayer.h.s S;
    protected final com.tkay.expressad.exoplayer.y[] w;
    private final com.tkay.expressad.exoplayer.h y;
    private final android.os.Handler z;

    static class 1 {
    }

    private final class a implements android.view.SurfaceHolder.Callback, android.view.TextureView.SurfaceTextureListener, com.tkay.expressad.exoplayer.b.g, com.tkay.expressad.exoplayer.g.f, com.tkay.expressad.exoplayer.l.h {
        final com.tkay.expressad.exoplayer.ad a;

        private a(com.tkay.expressad.exoplayer.ad r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        a(com.tkay.expressad.exoplayer.ad r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void a(int r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                com.tkay.expressad.exoplayer.ad.a(r0, r3)
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.d(r0)
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.b.g r1 = (com.tkay.expressad.exoplayer.b.g) r1
                r1.a(r3)
                goto Lf
            L1f:
                return
        }

        @Override
        public final void a(int r3, int r4, int r5, float r6) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.b(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1a
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.l.g r1 = (com.tkay.expressad.exoplayer.l.g) r1
                r1.a(r3, r4)
                goto La
            L1a:
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.a(r0)
                java.util.Iterator r0 = r0.iterator()
            L24:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L34
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.l.h r1 = (com.tkay.expressad.exoplayer.l.h) r1
                r1.a(r3, r4, r5, r6)
                goto L24
            L34:
                return
        }

        @Override
        public final void a(int r3, long r4) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.a(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1a
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.l.h r1 = (com.tkay.expressad.exoplayer.l.h) r1
                r1.a(r3, r4)
                goto La
            L1a:
                return
        }

        @Override
        public final void a(int r9, long r10, long r12) {
                r8 = this;
                com.tkay.expressad.exoplayer.ad r0 = r8.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.d(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1e
                java.lang.Object r1 = r0.next()
                r2 = r1
                com.tkay.expressad.exoplayer.b.g r2 = (com.tkay.expressad.exoplayer.b.g) r2
                r3 = r9
                r4 = r10
                r6 = r12
                r2.a(r3, r4, r6)
                goto La
            L1e:
                return
        }

        @Override
        public final void a(android.view.Surface r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                android.view.Surface r0 = com.tkay.expressad.exoplayer.ad.c(r0)
                if (r0 != r3) goto L1c
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.b(r0)
                java.util.Iterator r0 = r0.iterator()
            L12:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1c
                r0.next()
                goto L12
            L1c:
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.a(r0)
                java.util.Iterator r0 = r0.iterator()
            L26:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L36
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.l.h r1 = (com.tkay.expressad.exoplayer.l.h) r1
                r1.a(r3)
                goto L26
            L36:
                return
        }

        @Override
        public final void a(com.tkay.expressad.exoplayer.c.d r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                com.tkay.expressad.exoplayer.ad.a(r0, r3)
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.a(r0)
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.l.h r1 = (com.tkay.expressad.exoplayer.l.h) r1
                r1.a(r3)
                goto Lf
            L1f:
                return
        }

        @Override
        public final void a(com.tkay.expressad.exoplayer.g.a r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.e(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1a
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.g.f r1 = (com.tkay.expressad.exoplayer.g.f) r1
                r1.a(r3)
                goto La
            L1a:
                return
        }

        @Override
        public final void a(com.tkay.expressad.exoplayer.m r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                com.tkay.expressad.exoplayer.ad.a(r0, r3)
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.a(r0)
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.l.h r1 = (com.tkay.expressad.exoplayer.l.h) r1
                r1.a(r3)
                goto Lf
            L1f:
                return
        }

        @Override
        public final void a(java.lang.String r9, long r10, long r12) {
                r8 = this;
                com.tkay.expressad.exoplayer.ad r0 = r8.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.a(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1e
                java.lang.Object r1 = r0.next()
                r2 = r1
                com.tkay.expressad.exoplayer.l.h r2 = (com.tkay.expressad.exoplayer.l.h) r2
                r3 = r9
                r4 = r10
                r6 = r12
                r2.a(r3, r4, r6)
                goto La
            L1e:
                return
        }

        @Override
        public final void b(com.tkay.expressad.exoplayer.c.d r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.a(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1a
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.l.h r1 = (com.tkay.expressad.exoplayer.l.h) r1
                r1.b(r3)
                goto La
            L1a:
                com.tkay.expressad.exoplayer.ad r3 = r2.a
                r0 = 0
                com.tkay.expressad.exoplayer.ad.a(r3, r0)
                com.tkay.expressad.exoplayer.ad r3 = r2.a
                com.tkay.expressad.exoplayer.ad.a(r3, r0)
                return
        }

        @Override
        public final void b(com.tkay.expressad.exoplayer.m r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                com.tkay.expressad.exoplayer.ad.b(r0, r3)
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.d(r0)
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.b.g r1 = (com.tkay.expressad.exoplayer.b.g) r1
                r1.b(r3)
                goto Lf
            L1f:
                return
        }

        @Override
        public final void b(java.lang.String r9, long r10, long r12) {
                r8 = this;
                com.tkay.expressad.exoplayer.ad r0 = r8.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.d(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1e
                java.lang.Object r1 = r0.next()
                r2 = r1
                com.tkay.expressad.exoplayer.b.g r2 = (com.tkay.expressad.exoplayer.b.g) r2
                r3 = r9
                r4 = r10
                r6 = r12
                r2.b(r3, r4, r6)
                goto La
            L1e:
                return
        }

        @Override
        public final void c(com.tkay.expressad.exoplayer.c.d r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                com.tkay.expressad.exoplayer.ad.b(r0, r3)
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.d(r0)
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.b.g r1 = (com.tkay.expressad.exoplayer.b.g) r1
                r1.c(r3)
                goto Lf
            L1f:
                return
        }

        @Override
        public final void d(com.tkay.expressad.exoplayer.c.d r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                java.util.concurrent.CopyOnWriteArraySet r0 = com.tkay.expressad.exoplayer.ad.d(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1a
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.b.g r1 = (com.tkay.expressad.exoplayer.b.g) r1
                r1.d(r3)
                goto La
            L1a:
                com.tkay.expressad.exoplayer.ad r3 = r2.a
                r0 = 0
                com.tkay.expressad.exoplayer.ad.b(r3, r0)
                com.tkay.expressad.exoplayer.ad r3 = r2.a
                com.tkay.expressad.exoplayer.ad.b(r3, r0)
                com.tkay.expressad.exoplayer.ad r3 = r2.a
                r0 = 0
                com.tkay.expressad.exoplayer.ad.a(r3, r0)
                return
        }

        @Override
        public final void onSurfaceTextureAvailable(android.graphics.SurfaceTexture r1, int r2, int r3) {
                r0 = this;
                com.tkay.expressad.exoplayer.ad r2 = r0.a
                android.view.Surface r3 = new android.view.Surface
                r3.<init>(r1)
                r1 = 1
                com.tkay.expressad.exoplayer.ad.a(r2, r3, r1)
                return
        }

        @Override
        public final boolean onSurfaceTextureDestroyed(android.graphics.SurfaceTexture r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r3 = r2.a
                r0 = 1
                r1 = 0
                com.tkay.expressad.exoplayer.ad.a(r3, r1, r0)
                return r0
        }

        @Override
        public final void onSurfaceTextureSizeChanged(android.graphics.SurfaceTexture r1, int r2, int r3) {
                r0 = this;
                return
        }

        @Override
        public final void onSurfaceTextureUpdated(android.graphics.SurfaceTexture r1) {
                r0 = this;
                return
        }

        @Override
        public final void surfaceChanged(android.view.SurfaceHolder r1, int r2, int r3, int r4) {
                r0 = this;
                return
        }

        @Override
        public final void surfaceCreated(android.view.SurfaceHolder r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r0 = r2.a
                android.view.Surface r3 = r3.getSurface()
                r1 = 0
                com.tkay.expressad.exoplayer.ad.a(r0, r3, r1)
                return
        }

        @Override
        public final void surfaceDestroyed(android.view.SurfaceHolder r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ad r3 = r2.a
                r0 = 0
                r1 = 0
                com.tkay.expressad.exoplayer.ad.a(r3, r0, r1)
                return
        }
    }

    @java.lang.Deprecated
    public interface b extends com.tkay.expressad.exoplayer.l.g {
    }

    protected ad(com.tkay.expressad.exoplayer.ab r8, com.tkay.expressad.exoplayer.i.h r9, com.tkay.expressad.exoplayer.p r10, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r11) {
            r7 = this;
            com.tkay.expressad.exoplayer.a.a$a r0 = new com.tkay.expressad.exoplayer.a.a$a
            r0.<init>()
            r6 = 0
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            return
    }

    protected ad(com.tkay.expressad.exoplayer.ab r7, com.tkay.expressad.exoplayer.i.h r8, com.tkay.expressad.exoplayer.p r9, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r10, byte r11) {
            r6 = this;
            com.tkay.expressad.exoplayer.k.c r5 = com.tkay.expressad.exoplayer.k.c.a
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    private ad(com.tkay.expressad.exoplayer.ab r9, com.tkay.expressad.exoplayer.i.h r10, com.tkay.expressad.exoplayer.p r11, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r12, com.tkay.expressad.exoplayer.k.c r13) {
            r8 = this;
            r8.<init>()
            com.tkay.expressad.exoplayer.ad$a r0 = new com.tkay.expressad.exoplayer.ad$a
            r1 = 0
            r0.<init>(r8, r1)
            r8.A = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r8.B = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r8.C = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r8.D = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r8.E = r0
            android.os.Looper r0 = android.os.Looper.myLooper()
            if (r0 == 0) goto L32
            android.os.Looper r0 = android.os.Looper.myLooper()
            goto L36
        L32:
            android.os.Looper r0 = android.os.Looper.getMainLooper()
        L36:
            android.os.Handler r3 = new android.os.Handler
            r3.<init>(r0)
            r8.z = r3
            com.tkay.expressad.exoplayer.ad$a r6 = r8.A
            r2 = r9
            r4 = r6
            r5 = r6
            r7 = r12
            com.tkay.expressad.exoplayer.y[] r9 = r2.a(r3, r4, r5, r6, r7)
            r8.w = r9
            r9 = 1065353216(0x3f800000, float:1.0)
            r8.R = r9
            r8.P = r1
            com.tkay.expressad.exoplayer.b.b r9 = com.tkay.expressad.exoplayer.b.b.a
            r8.Q = r9
            r9 = 1
            r8.K = r9
            com.tkay.expressad.exoplayer.y[] r9 = r8.w
            com.tkay.expressad.exoplayer.j r0 = new com.tkay.expressad.exoplayer.j
            r0.<init>(r9, r10, r11, r13)
            r8.y = r0
            com.tkay.expressad.exoplayer.a.a r9 = com.tkay.expressad.exoplayer.a.a.a.a(r0, r13)
            r8.F = r9
            r8.a(r9)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.h> r9 = r8.D
            com.tkay.expressad.exoplayer.a.a r10 = r8.F
            r9.add(r10)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.b.g> r9 = r8.E
            com.tkay.expressad.exoplayer.a.a r10 = r8.F
            r9.add(r10)
            com.tkay.expressad.exoplayer.a.a r9 = r8.F
            r8.a(r9)
            boolean r9 = r12 instanceof com.tkay.expressad.exoplayer.d.d
            if (r9 == 0) goto L88
            com.tkay.expressad.exoplayer.d.d r12 = (com.tkay.expressad.exoplayer.d.d) r12
            android.os.Handler r9 = r8.z
            com.tkay.expressad.exoplayer.a.a r10 = r8.F
            r12.a(r9, r10)
        L88:
            return
    }

    @java.lang.Deprecated
    private int K() {
            r1 = this;
            com.tkay.expressad.exoplayer.b.b r0 = r1.Q
            int r0 = r0.d
            int r0 = com.tkay.expressad.exoplayer.k.af.f(r0)
            return r0
    }

    private com.tkay.expressad.exoplayer.a.a L() {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a r0 = r1.F
            return r0
    }

    private com.tkay.expressad.exoplayer.b.b M() {
            r1 = this;
            com.tkay.expressad.exoplayer.b.b r0 = r1.Q
            return r0
    }

    private float N() {
            r1 = this;
            float r0 = r1.R
            return r0
    }

    private com.tkay.expressad.exoplayer.m O() {
            r1 = this;
            com.tkay.expressad.exoplayer.m r0 = r1.G
            return r0
    }

    private com.tkay.expressad.exoplayer.m P() {
            r1 = this;
            com.tkay.expressad.exoplayer.m r0 = r1.H
            return r0
    }

    private int Q() {
            r1 = this;
            int r0 = r1.P
            return r0
    }

    private com.tkay.expressad.exoplayer.c.d R() {
            r1 = this;
            com.tkay.expressad.exoplayer.c.d r0 = r1.N
            return r0
    }

    private com.tkay.expressad.exoplayer.c.d S() {
            r1 = this;
            com.tkay.expressad.exoplayer.c.d r0 = r1.O
            return r0
    }

    private void T() {
            r3 = this;
            android.view.TextureView r0 = r3.M
            r1 = 0
            if (r0 == 0) goto L1c
            android.view.TextureView$SurfaceTextureListener r0 = r0.getSurfaceTextureListener()
            com.tkay.expressad.exoplayer.ad$a r2 = r3.A
            if (r0 == r2) goto L15
            java.lang.String r0 = "SimpleExoPlayer"
            java.lang.String r2 = "SurfaceTextureListener already unset or replaced."
            android.util.Log.w(r0, r2)
            goto L1a
        L15:
            android.view.TextureView r0 = r3.M
            r0.setSurfaceTextureListener(r1)
        L1a:
            r3.M = r1
        L1c:
            android.view.SurfaceHolder r0 = r3.L
            if (r0 == 0) goto L27
            com.tkay.expressad.exoplayer.ad$a r2 = r3.A
            r0.removeCallback(r2)
            r3.L = r1
        L27:
            return
    }

    static int a(com.tkay.expressad.exoplayer.ad r0, int r1) {
            r0.P = r1
            return r1
    }

    static com.tkay.expressad.exoplayer.c.d a(com.tkay.expressad.exoplayer.ad r0, com.tkay.expressad.exoplayer.c.d r1) {
            r0.N = r1
            return r1
    }

    private static com.tkay.expressad.exoplayer.h a(com.tkay.expressad.exoplayer.y[] r1, com.tkay.expressad.exoplayer.i.h r2, com.tkay.expressad.exoplayer.p r3, com.tkay.expressad.exoplayer.k.c r4) {
            com.tkay.expressad.exoplayer.j r0 = new com.tkay.expressad.exoplayer.j
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    static com.tkay.expressad.exoplayer.m a(com.tkay.expressad.exoplayer.ad r0, com.tkay.expressad.exoplayer.m r1) {
            r0.G = r1
            return r1
    }

    static java.util.concurrent.CopyOnWriteArraySet a(com.tkay.expressad.exoplayer.ad r0) {
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.h> r0 = r0.D
            return r0
    }

    @java.lang.Deprecated
    private void a(android.media.PlaybackParams r3) {
            r2 = this;
            if (r3 == 0) goto L13
            r3.allowDefaults()
            com.tkay.expressad.exoplayer.v r0 = new com.tkay.expressad.exoplayer.v
            float r1 = r3.getSpeed()
            float r3 = r3.getPitch()
            r0.<init>(r1, r3)
            goto L14
        L13:
            r0 = 0
        L14:
            r2.a(r0)
            return
    }

    private void a(android.view.Surface r9, boolean r10) {
            r8 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tkay.expressad.exoplayer.y[] r1 = r8.w
            int r2 = r1.length
            r3 = 0
            r4 = r3
        La:
            if (r4 >= r2) goto L2e
            r5 = r1[r4]
            int r6 = r5.a()
            r7 = 2
            if (r6 != r7) goto L2b
            com.tkay.expressad.exoplayer.h r6 = r8.y
            com.tkay.expressad.exoplayer.x r5 = r6.a(r5)
            r6 = 1
            com.tkay.expressad.exoplayer.x r5 = r5.a(r6)
            com.tkay.expressad.exoplayer.x r5 = r5.a(r9)
            com.tkay.expressad.exoplayer.x r5 = r5.i()
            r0.add(r5)
        L2b:
            int r4 = r4 + 1
            goto La
        L2e:
            android.view.Surface r1 = r8.I
            if (r1 == 0) goto L5e
            if (r1 == r9) goto L5e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.util.concurrent.TimeoutException -> L48 java.lang.InterruptedException -> L4e
        L38:
            boolean r1 = r0.hasNext()     // Catch: java.util.concurrent.TimeoutException -> L48 java.lang.InterruptedException -> L4e
            if (r1 == 0) goto L55
            java.lang.Object r1 = r0.next()     // Catch: java.util.concurrent.TimeoutException -> L48 java.lang.InterruptedException -> L4e
            com.tkay.expressad.exoplayer.x r1 = (com.tkay.expressad.exoplayer.x) r1     // Catch: java.util.concurrent.TimeoutException -> L48 java.lang.InterruptedException -> L4e
            r1.k()     // Catch: java.util.concurrent.TimeoutException -> L48 java.lang.InterruptedException -> L4e
            goto L38
        L48:
            com.tkay.expressad.exoplayer.h r0 = r8.y
            r0.c(r3)
            goto L55
        L4e:
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
        L55:
            boolean r0 = r8.J
            if (r0 == 0) goto L5e
            android.view.Surface r0 = r8.I
            r0.release()
        L5e:
            r8.I = r9
            r8.J = r10
            return
    }

    private void a(com.tkay.expressad.exoplayer.a.b r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a r0 = r1.F
            r0.a(r2)
            return
    }

    @java.lang.Deprecated
    private void a(com.tkay.expressad.exoplayer.ad.b r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.g> r0 = r1.B
            r0.clear()
            if (r2 == 0) goto La
            r1.a(r2)
        La:
            return
    }

    static void a(com.tkay.expressad.exoplayer.ad r0, android.view.Surface r1, boolean r2) {
            r0.a(r1, r2)
            return
    }

    private void a(com.tkay.expressad.exoplayer.b.b r7) {
            r6 = this;
            r6.Q = r7
            com.tkay.expressad.exoplayer.y[] r0 = r6.w
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L26
            r3 = r0[r2]
            int r4 = r3.a()
            r5 = 1
            if (r4 != r5) goto L23
            com.tkay.expressad.exoplayer.h r4 = r6.y
            com.tkay.expressad.exoplayer.x r3 = r4.a(r3)
            r4 = 3
            com.tkay.expressad.exoplayer.x r3 = r3.a(r4)
            com.tkay.expressad.exoplayer.x r3 = r3.a(r7)
            r3.i()
        L23:
            int r2 = r2 + 1
            goto L6
        L26:
            return
    }

    @java.lang.Deprecated
    private void a(com.tkay.expressad.exoplayer.b.g r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.b.g> r0 = r2.E
            com.tkay.expressad.exoplayer.a.a r1 = r2.F
            java.util.Set r1 = java.util.Collections.singleton(r1)
            r0.retainAll(r1)
            if (r3 == 0) goto L12
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.b.g> r0 = r2.E
            r0.add(r3)
        L12:
            return
    }

    private void a(com.tkay.expressad.exoplayer.g.f r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.g.f> r0 = r1.C
            r0.add(r2)
            return
    }

    @java.lang.Deprecated
    private void a(com.tkay.expressad.exoplayer.l.h r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.h> r0 = r2.D
            com.tkay.expressad.exoplayer.a.a r1 = r2.F
            java.util.Set r1 = java.util.Collections.singleton(r1)
            r0.retainAll(r1)
            if (r3 == 0) goto L12
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.h> r0 = r2.D
            r0.add(r3)
        L12:
            return
    }

    static com.tkay.expressad.exoplayer.c.d b(com.tkay.expressad.exoplayer.ad r0, com.tkay.expressad.exoplayer.c.d r1) {
            r0.O = r1
            return r1
    }

    static com.tkay.expressad.exoplayer.m b(com.tkay.expressad.exoplayer.ad r0, com.tkay.expressad.exoplayer.m r1) {
            r0.H = r1
            return r1
    }

    static java.util.concurrent.CopyOnWriteArraySet b(com.tkay.expressad.exoplayer.ad r0) {
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.g> r0 = r0.B
            return r0
    }

    private void b(com.tkay.expressad.exoplayer.a.b r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a r0 = r1.F
            r0.b(r2)
            return
    }

    @java.lang.Deprecated
    private void b(com.tkay.expressad.exoplayer.ad.b r1) {
            r0 = this;
            r0.b(r1)
            return
    }

    @java.lang.Deprecated
    private void b(com.tkay.expressad.exoplayer.b.g r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.b.g> r0 = r1.E
            r0.add(r2)
            return
    }

    private void b(com.tkay.expressad.exoplayer.g.f r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.g.f> r0 = r1.C
            r0.remove(r2)
            return
    }

    @java.lang.Deprecated
    private void b(com.tkay.expressad.exoplayer.l.h r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.h> r0 = r1.D
            r0.add(r2)
            return
    }

    static android.view.Surface c(com.tkay.expressad.exoplayer.ad r0) {
            android.view.Surface r0 = r0.I
            return r0
    }

    @java.lang.Deprecated
    private void c(com.tkay.expressad.exoplayer.b.g r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.b.g> r0 = r1.E
            r0.remove(r2)
            return
    }

    @java.lang.Deprecated
    private void c(com.tkay.expressad.exoplayer.g.f r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.g.f> r0 = r2.C
            com.tkay.expressad.exoplayer.a.a r1 = r2.F
            java.util.Set r1 = java.util.Collections.singleton(r1)
            r0.retainAll(r1)
            if (r3 == 0) goto L10
            r2.a(r3)
        L10:
            return
    }

    @java.lang.Deprecated
    private void c(com.tkay.expressad.exoplayer.l.h r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.h> r0 = r1.D
            r0.remove(r2)
            return
    }

    static java.util.concurrent.CopyOnWriteArraySet d(com.tkay.expressad.exoplayer.ad r0) {
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.b.g> r0 = r0.E
            return r0
    }

    @java.lang.Deprecated
    private void d(com.tkay.expressad.exoplayer.g.f r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.g.f> r0 = r1.C
            r0.remove(r2)
            return
    }

    static java.util.concurrent.CopyOnWriteArraySet e(com.tkay.expressad.exoplayer.ad r0) {
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.g.f> r0 = r0.C
            return r0
    }

    @java.lang.Deprecated
    private void e(int r7) {
            r6 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.d(r7)
            int r7 = com.tkay.expressad.exoplayer.k.af.e(r7)
            com.tkay.expressad.exoplayer.b.b$a r1 = new com.tkay.expressad.exoplayer.b.b$a
            r1.<init>()
            com.tkay.expressad.exoplayer.b.b$a r0 = r1.b(r0)
            com.tkay.expressad.exoplayer.b.b$a r7 = r0.a(r7)
            com.tkay.expressad.exoplayer.b.b r7 = r7.a()
            r6.Q = r7
            com.tkay.expressad.exoplayer.y[] r0 = r6.w
            int r1 = r0.length
            r2 = 0
        L1f:
            if (r2 >= r1) goto L3f
            r3 = r0[r2]
            int r4 = r3.a()
            r5 = 1
            if (r4 != r5) goto L3c
            com.tkay.expressad.exoplayer.h r4 = r6.y
            com.tkay.expressad.exoplayer.x r3 = r4.a(r3)
            r4 = 3
            com.tkay.expressad.exoplayer.x r3 = r3.a(r4)
            com.tkay.expressad.exoplayer.x r3 = r3.a(r7)
            r3.i()
        L3c:
            int r2 = r2 + 1
            goto L1f
        L3f:
            return
    }

    @Override
    public final int A() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            int r0 = r0.A()
            return r0
    }

    @Override
    public final long B() {
            r2 = this;
            com.tkay.expressad.exoplayer.h r0 = r2.y
            long r0 = r0.B()
            return r0
    }

    @Override
    public final int C() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            int r0 = r0.C()
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.af D() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            com.tkay.expressad.exoplayer.h.af r0 = r0.D()
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.i.g E() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            com.tkay.expressad.exoplayer.i.g r0 = r0.E()
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.ae F() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            com.tkay.expressad.exoplayer.ae r0 = r0.F()
            return r0
    }

    @Override
    public final java.lang.Object G() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            java.lang.Object r0 = r0.G()
            return r0
    }

    @Override
    public final int H() {
            r1 = this;
            int r0 = r1.K
            return r0
    }

    @Override
    public final void I() {
            r1 = this;
            r0 = 0
            r1.a(r0)
            return
    }

    public final boolean J() {
            r2 = this;
            int r0 = r2.d()
            r1 = 3
            if (r0 != r1) goto Lf
            boolean r0 = r2.f()
            if (r0 == 0) goto Lf
            r0 = 1
            return r0
        Lf:
            r0 = 0
            return r0
    }

    @Override
    public final android.os.Looper a() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            android.os.Looper r0 = r0.a()
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.x a(com.tkay.expressad.exoplayer.x.b r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            com.tkay.expressad.exoplayer.x r2 = r0.a(r2)
            return r2
    }

    public final void a(float r7) {
            r6 = this;
            r6.R = r7
            com.tkay.expressad.exoplayer.y[] r0 = r6.w
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L2a
            r3 = r0[r2]
            int r4 = r3.a()
            r5 = 1
            if (r4 != r5) goto L27
            com.tkay.expressad.exoplayer.h r4 = r6.y
            com.tkay.expressad.exoplayer.x r3 = r4.a(r3)
            r4 = 2
            com.tkay.expressad.exoplayer.x r3 = r3.a(r4)
            java.lang.Float r4 = java.lang.Float.valueOf(r7)
            com.tkay.expressad.exoplayer.x r3 = r3.a(r4)
            r3.i()
        L27:
            int r2 = r2 + 1
            goto L6
        L2a:
            return
    }

    @Override
    public final void a(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.a(r2)
            return
    }

    @Override
    public final void a(int r2, long r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a r0 = r1.F
            r0.a()
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.a(r2, r3)
            return
    }

    @Override
    public final void a(long r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a r0 = r1.F
            r0.a()
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.a(r2)
            return
    }

    @Override
    public final void a(android.view.Surface r2) {
            r1 = this;
            r1.T()
            r0 = 0
            r1.a(r2, r0)
            return
    }

    @Override
    public final void a(android.view.SurfaceHolder r2) {
            r1 = this;
            r1.T()
            r1.L = r2
            if (r2 != 0) goto L8
            goto L1a
        L8:
            com.tkay.expressad.exoplayer.ad$a r0 = r1.A
            r2.addCallback(r0)
            android.view.Surface r2 = r2.getSurface()
            if (r2 == 0) goto L1a
            boolean r0 = r2.isValid()
            if (r0 == 0) goto L1a
            goto L1b
        L1a:
            r2 = 0
        L1b:
            r0 = 0
            r1.a(r2, r0)
            return
    }

    @Override
    public final void a(android.view.SurfaceView r1) {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            goto L8
        L4:
            android.view.SurfaceHolder r1 = r1.getHolder()
        L8:
            r0.a(r1)
            return
    }

    @Override
    public final void a(android.view.TextureView r4) {
            r3 = this;
            r3.T()
            r3.M = r4
            r0 = 0
            if (r4 != 0) goto L9
            goto L2f
        L9:
            android.view.TextureView$SurfaceTextureListener r1 = r4.getSurfaceTextureListener()
            if (r1 == 0) goto L16
            java.lang.String r1 = "SimpleExoPlayer"
            java.lang.String r2 = "Replacing existing SurfaceTextureListener."
            android.util.Log.w(r1, r2)
        L16:
            com.tkay.expressad.exoplayer.ad$a r1 = r3.A
            r4.setSurfaceTextureListener(r1)
            boolean r1 = r4.isAvailable()
            if (r1 == 0) goto L26
            android.graphics.SurfaceTexture r4 = r4.getSurfaceTexture()
            goto L27
        L26:
            r4 = r0
        L27:
            if (r4 != 0) goto L2a
            goto L2f
        L2a:
            android.view.Surface r0 = new android.view.Surface
            r0.<init>(r4)
        L2f:
            r4 = 1
            r3.a(r0, r4)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.ac r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.a(r2)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.s r2) {
            r1 = this;
            r0 = 1
            r1.a(r2, r0, r0)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.s r3, boolean r4, boolean r5) {
            r2 = this;
            com.tkay.expressad.exoplayer.h.s r0 = r2.S
            if (r0 == r3) goto L19
            if (r0 == 0) goto L10
            com.tkay.expressad.exoplayer.a.a r1 = r2.F
            r0.a(r1)
            com.tkay.expressad.exoplayer.a.a r0 = r2.F
            r0.b()
        L10:
            android.os.Handler r0 = r2.z
            com.tkay.expressad.exoplayer.a.a r1 = r2.F
            r3.a(r0, r1)
            r2.S = r3
        L19:
            com.tkay.expressad.exoplayer.h r0 = r2.y
            r0.a(r3, r4, r5)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.l.g r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.g> r0 = r1.B
            r0.add(r2)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.v r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.a(r2)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.w.c r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.a(r2)
            return
    }

    @Override
    public final void a(boolean r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.a(r2)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.c... r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.a(r2)
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.w.g b() {
            r0 = this;
            return r0
    }

    @Override
    public final void b(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a r0 = r1.F
            r0.a()
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.b(r2)
            return
    }

    @Override
    public final void b(android.view.Surface r2) {
            r1 = this;
            if (r2 == 0) goto La
            android.view.Surface r0 = r1.I
            if (r2 != r0) goto La
            r2 = 0
            r1.a(r2)
        La:
            return
    }

    @Override
    public final void b(android.view.SurfaceHolder r2) {
            r1 = this;
            if (r2 == 0) goto La
            android.view.SurfaceHolder r0 = r1.L
            if (r2 != r0) goto La
            r2 = 0
            r1.a(r2)
        La:
            return
    }

    @Override
    public final void b(android.view.SurfaceView r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L5
            r3 = r0
            goto L9
        L5:
            android.view.SurfaceHolder r3 = r3.getHolder()
        L9:
            if (r3 == 0) goto L12
            android.view.SurfaceHolder r1 = r2.L
            if (r3 != r1) goto L12
            r2.a(r0)
        L12:
            return
    }

    @Override
    public final void b(android.view.TextureView r2) {
            r1 = this;
            if (r2 == 0) goto La
            android.view.TextureView r0 = r1.M
            if (r2 != r0) goto La
            r2 = 0
            r1.a(r2)
        La:
            return
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.l.g r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.l.g> r0 = r1.B
            r0.remove(r2)
            return
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.w.c r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.b(r2)
            return
    }

    @Override
    public final void b(boolean r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.b(r2)
            return
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.h.c... r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.b(r2)
            return
    }

    @Override
    public final int c(int r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            int r2 = r0.c(r2)
            return r2
    }

    @Override
    public final com.tkay.expressad.exoplayer.w.e c() {
            r0 = this;
            return r0
    }

    @Override
    public final void c(boolean r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.c(r2)
            com.tkay.expressad.exoplayer.h.s r2 = r1.S
            if (r2 == 0) goto L16
            com.tkay.expressad.exoplayer.a.a r0 = r1.F
            r2.a(r0)
            r2 = 0
            r1.S = r2
            com.tkay.expressad.exoplayer.a.a r2 = r1.F
            r2.b()
        L16:
            return
    }

    @Override
    public final int d() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            int r0 = r0.d()
            return r0
    }

    @Override
    public final void d(int r7) {
            r6 = this;
            r6.K = r7
            com.tkay.expressad.exoplayer.y[] r0 = r6.w
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L2a
            r3 = r0[r2]
            int r4 = r3.a()
            r5 = 2
            if (r4 != r5) goto L27
            com.tkay.expressad.exoplayer.h r4 = r6.y
            com.tkay.expressad.exoplayer.x r3 = r4.a(r3)
            r4 = 4
            com.tkay.expressad.exoplayer.x r3 = r3.a(r4)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r7)
            com.tkay.expressad.exoplayer.x r3 = r3.a(r4)
            r3.i()
        L27:
            int r2 = r2 + 1
            goto L6
        L2a:
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.g e() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            com.tkay.expressad.exoplayer.g r0 = r0.e()
            return r0
    }

    @Override
    public final boolean f() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            boolean r0 = r0.f()
            return r0
    }

    @Override
    public final int g() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            int r0 = r0.g()
            return r0
    }

    @Override
    public final boolean h() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            boolean r0 = r0.h()
            return r0
    }

    @Override
    public final boolean i() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            boolean r0 = r0.i()
            return r0
    }

    @Override
    public final void j() {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a r0 = r1.F
            r0.a()
            com.tkay.expressad.exoplayer.h r0 = r1.y
            r0.j()
            return
    }

    @Override
    public final com.tkay.expressad.exoplayer.v k() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            com.tkay.expressad.exoplayer.v r0 = r0.k()
            return r0
    }

    @Override
    public final java.lang.Object l() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            java.lang.Object r0 = r0.l()
            return r0
    }

    @Override
    public final void m() {
            r1 = this;
            r0 = 0
            r1.c(r0)
            return
    }

    @Override
    public final void n() {
            r2 = this;
            com.tkay.expressad.exoplayer.h r0 = r2.y
            r0.n()
            r2.T()
            android.view.Surface r0 = r2.I
            if (r0 == 0) goto L16
            boolean r1 = r2.J
            if (r1 == 0) goto L13
            r0.release()
        L13:
            r0 = 0
            r2.I = r0
        L16:
            com.tkay.expressad.exoplayer.h.s r0 = r2.S
            if (r0 == 0) goto L1f
            com.tkay.expressad.exoplayer.a.a r1 = r2.F
            r0.a(r1)
        L1f:
            return
    }

    @Override
    public final int o() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            int r0 = r0.o()
            return r0
    }

    @Override
    public final int p() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            int r0 = r0.p()
            return r0
    }

    @Override
    public final int q() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            int r0 = r0.q()
            return r0
    }

    @Override
    public final int r() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            int r0 = r0.r()
            return r0
    }

    @Override
    public final long s() {
            r2 = this;
            com.tkay.expressad.exoplayer.h r0 = r2.y
            long r0 = r0.s()
            return r0
    }

    @Override
    public final long t() {
            r2 = this;
            com.tkay.expressad.exoplayer.h r0 = r2.y
            long r0 = r0.t()
            return r0
    }

    @Override
    public final long u() {
            r2 = this;
            com.tkay.expressad.exoplayer.h r0 = r2.y
            long r0 = r0.u()
            return r0
    }

    @Override
    public final int v() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            int r0 = r0.v()
            return r0
    }

    @Override
    public final boolean w() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            boolean r0 = r0.w()
            return r0
    }

    @Override
    public final boolean x() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            boolean r0 = r0.x()
            return r0
    }

    @Override
    public final boolean y() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            boolean r0 = r0.y()
            return r0
    }

    @Override
    public final int z() {
            r1 = this;
            com.tkay.expressad.exoplayer.h r0 = r1.y
            int r0 = r0.z()
            return r0
    }
}
