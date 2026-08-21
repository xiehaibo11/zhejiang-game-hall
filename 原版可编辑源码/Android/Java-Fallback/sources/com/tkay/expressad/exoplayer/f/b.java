package com.tkay.expressad.exoplayer.f;

public abstract class b extends com.tkay.expressad.exoplayer.a {
    private static final int A = 1;
    private static final int B = 2;
    private static final byte[] C = null;
    private static final int D = 32;
    protected static final int n = 0;
    protected static final int o = 1;
    protected static final int p = 3;
    private static final java.lang.String r = "MediaCodecRenderer";
    private static final long s = 1000;
    private static final int t = 0;
    private static final int u = 1;
    private static final int v = 2;
    private static final int w = 0;
    private static final int x = 1;
    private static final int y = 2;
    private static final int z = 0;
    private final com.tkay.expressad.exoplayer.f.c E;
    private final com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> F;
    private final boolean G;
    private final com.tkay.expressad.exoplayer.c.e H;
    private final com.tkay.expressad.exoplayer.c.e I;
    private final com.tkay.expressad.exoplayer.n J;
    private final java.util.List<java.lang.Long> K;
    private final android.media.MediaCodec.BufferInfo L;
    private com.tkay.expressad.exoplayer.m M;
    private com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> N;
    private com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> O;
    private android.media.MediaCodec P;
    private com.tkay.expressad.exoplayer.f.a Q;
    private int R;
    private boolean S;
    private boolean T;
    private boolean U;
    private boolean V;
    private boolean W;
    private boolean X;
    private boolean Y;
    private boolean Z;
    private java.nio.ByteBuffer[] aa;
    private java.nio.ByteBuffer[] ab;
    private long ac;
    private int ad;
    private int ae;
    private java.nio.ByteBuffer af;
    private boolean ag;
    private boolean ah;
    private int ai;
    private int aj;
    private boolean ak;
    private boolean al;
    private boolean am;
    private boolean an;
    private boolean ao;
    private boolean ap;
    protected com.tkay.expressad.exoplayer.c.d q;

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    private @interface a {
    }

    public static class b extends java.lang.Exception {
        private static final int e = -50000;
        private static final int f = -49999;
        private static final int g = -49998;
        public final java.lang.String a;
        public final boolean b;
        public final java.lang.String c;
        public final java.lang.String d;

        public b(com.tkay.expressad.exoplayer.m r3, java.lang.Throwable r4, boolean r5, int r6) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Decoder init failed: ["
                r0.<init>(r1)
                r0.append(r6)
                java.lang.String r1 = "], "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                r2.<init>(r0, r4)
                java.lang.String r3 = r3.h
                r2.a = r3
                r2.b = r5
                r3 = 0
                r2.c = r3
                if (r6 >= 0) goto L27
                java.lang.String r3 = "neg_"
                goto L29
            L27:
                java.lang.String r3 = ""
            L29:
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                java.lang.String r5 = "com.google.android.exoplayer.MediaCodecTrackRenderer_"
                r4.<init>(r5)
                r4.append(r3)
                int r3 = java.lang.Math.abs(r6)
                r4.append(r3)
                java.lang.String r3 = r4.toString()
                r2.d = r3
                return
        }

        public b(com.tkay.expressad.exoplayer.m r3, java.lang.Throwable r4, boolean r5, java.lang.String r6) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Decoder init failed: "
                r0.<init>(r1)
                r0.append(r6)
                java.lang.String r1 = ", "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                r2.<init>(r0, r4)
                java.lang.String r3 = r3.h
                r2.a = r3
                r2.b = r5
                r2.c = r6
                int r3 = com.tkay.expressad.exoplayer.k.af.a
                r5 = 0
                r6 = 21
                if (r3 < r6) goto L32
                boolean r3 = r4 instanceof android.media.MediaCodec.CodecException
                if (r3 == 0) goto L32
                android.media.MediaCodec$CodecException r4 = (android.media.MediaCodec.CodecException) r4
                java.lang.String r5 = r4.getDiagnosticInfo()
            L32:
                r2.d = r5
                return
        }

        private static java.lang.String a(int r3) {
                if (r3 >= 0) goto L5
                java.lang.String r0 = "neg_"
                goto L7
            L5:
                java.lang.String r0 = ""
            L7:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "com.google.android.exoplayer.MediaCodecTrackRenderer_"
                r1.<init>(r2)
                r1.append(r0)
                int r3 = java.lang.Math.abs(r3)
                r1.append(r3)
                java.lang.String r3 = r1.toString()
                return r3
        }

        private static java.lang.String a(java.lang.Throwable r1) {
                boolean r0 = r1 instanceof android.media.MediaCodec.CodecException
                if (r0 == 0) goto Lb
                android.media.MediaCodec$CodecException r1 = (android.media.MediaCodec.CodecException) r1
                java.lang.String r1 = r1.getDiagnosticInfo()
                return r1
            Lb:
                r1 = 0
                return r1
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    protected @interface c {
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    private @interface d {
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    private @interface e {
    }

    static {
            java.lang.String r0 = "0000016742C00BDA259000000168CE0F13200000016588840DCE7118A0002FBF1C31C3275D78"
            byte[] r0 = com.tkay.expressad.exoplayer.k.af.g(r0)
            com.tkay.expressad.exoplayer.f.b.C = r0
            return
    }

    public b(int r2, com.tkay.expressad.exoplayer.f.c r3, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r4, boolean r5) {
            r1 = this;
            r1.<init>(r2)
            int r2 = com.tkay.expressad.exoplayer.k.af.a
            r5 = 0
            r0 = 16
            if (r2 < r0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = r5
        Ld:
            com.tkay.expressad.exoplayer.k.a.b(r2)
            java.lang.Object r2 = com.tkay.expressad.exoplayer.k.a.a(r3)
            com.tkay.expressad.exoplayer.f.c r2 = (com.tkay.expressad.exoplayer.f.c) r2
            r1.E = r2
            r1.F = r4
            r1.G = r5
            com.tkay.expressad.exoplayer.c.e r2 = new com.tkay.expressad.exoplayer.c.e
            r2.<init>(r5)
            r1.H = r2
            com.tkay.expressad.exoplayer.c.e r2 = com.tkay.expressad.exoplayer.c.e.e()
            r1.I = r2
            com.tkay.expressad.exoplayer.n r2 = new com.tkay.expressad.exoplayer.n
            r2.<init>()
            r1.J = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1.K = r2
            android.media.MediaCodec$BufferInfo r2 = new android.media.MediaCodec$BufferInfo
            r2.<init>()
            r1.L = r2
            r1.ai = r5
            r1.aj = r5
            return
    }

    private boolean C() {
            r13 = this;
            android.media.MediaCodec r0 = r13.P
            r1 = 0
            if (r0 == 0) goto L1e5
            int r2 = r13.aj
            r3 = 2
            if (r2 == r3) goto L1e5
            boolean r2 = r13.am
            if (r2 == 0) goto L10
            goto L1e5
        L10:
            int r2 = r13.ad
            if (r2 >= 0) goto L39
            r4 = 0
            int r0 = r0.dequeueInputBuffer(r4)
            r13.ad = r0
            if (r0 >= 0) goto L1f
            return r1
        L1f:
            com.tkay.expressad.exoplayer.c.e r2 = r13.H
            int r4 = com.tkay.expressad.exoplayer.k.af.a
            r5 = 21
            if (r4 < r5) goto L2e
            android.media.MediaCodec r4 = r13.P
            java.nio.ByteBuffer r0 = r4.getInputBuffer(r0)
            goto L32
        L2e:
            java.nio.ByteBuffer[] r4 = r13.aa
            r0 = r4[r0]
        L32:
            r2.e = r0
            com.tkay.expressad.exoplayer.c.e r0 = r13.H
            r0.a()
        L39:
            int r0 = r13.aj
            r2 = 1
            if (r0 != r2) goto L56
            boolean r0 = r13.U
            if (r0 != 0) goto L53
            r13.al = r2
            android.media.MediaCodec r4 = r13.P
            int r5 = r13.ad
            r6 = 0
            r7 = 0
            r8 = 0
            r10 = 4
            r4.queueInputBuffer(r5, r6, r7, r8, r10)
            r13.G()
        L53:
            r13.aj = r3
            return r1
        L56:
            boolean r0 = r13.Y
            if (r0 == 0) goto L79
            r13.Y = r1
            com.tkay.expressad.exoplayer.c.e r0 = r13.H
            java.nio.ByteBuffer r0 = r0.e
            byte[] r1 = com.tkay.expressad.exoplayer.f.b.C
            r0.put(r1)
            android.media.MediaCodec r3 = r13.P
            int r4 = r13.ad
            r5 = 0
            byte[] r0 = com.tkay.expressad.exoplayer.f.b.C
            int r6 = r0.length
            r7 = 0
            r9 = 0
            r3.queueInputBuffer(r4, r5, r6, r7, r9)
            r13.G()
            r13.ak = r2
            return r2
        L79:
            boolean r0 = r13.ao
            if (r0 == 0) goto L80
            r0 = -4
            r4 = r1
            goto Lb8
        L80:
            int r0 = r13.ai
            if (r0 != r2) goto La5
            r0 = r1
        L85:
            com.tkay.expressad.exoplayer.m r4 = r13.M
            java.util.List<byte[]> r4 = r4.j
            int r4 = r4.size()
            if (r0 >= r4) goto La3
            com.tkay.expressad.exoplayer.m r4 = r13.M
            java.util.List<byte[]> r4 = r4.j
            java.lang.Object r4 = r4.get(r0)
            byte[] r4 = (byte[]) r4
            com.tkay.expressad.exoplayer.c.e r5 = r13.H
            java.nio.ByteBuffer r5 = r5.e
            r5.put(r4)
            int r0 = r0 + 1
            goto L85
        La3:
            r13.ai = r3
        La5:
            com.tkay.expressad.exoplayer.c.e r0 = r13.H
            java.nio.ByteBuffer r0 = r0.e
            int r0 = r0.position()
            com.tkay.expressad.exoplayer.n r4 = r13.J
            com.tkay.expressad.exoplayer.c.e r5 = r13.H
            int r4 = r13.a(r4, r5, r1)
            r12 = r4
            r4 = r0
            r0 = r12
        Lb8:
            r5 = -3
            if (r0 != r5) goto Lbc
            return r1
        Lbc:
            r5 = -5
            if (r0 != r5) goto Ld2
            int r0 = r13.ai
            if (r0 != r3) goto Lca
            com.tkay.expressad.exoplayer.c.e r0 = r13.H
            r0.a()
            r13.ai = r2
        Lca:
            com.tkay.expressad.exoplayer.n r0 = r13.J
            com.tkay.expressad.exoplayer.m r0 = r0.a
            r13.b(r0)
            return r2
        Ld2:
            com.tkay.expressad.exoplayer.c.e r0 = r13.H
            boolean r0 = r0.c()
            if (r0 == 0) goto L10f
            int r0 = r13.ai
            if (r0 != r3) goto Le5
            com.tkay.expressad.exoplayer.c.e r0 = r13.H
            r0.a()
            r13.ai = r2
        Le5:
            r13.am = r2
            boolean r0 = r13.ak
            if (r0 != 0) goto Lef
            r13.L()
            return r1
        Lef:
            boolean r0 = r13.U     // Catch: java.lang.Exception -> L105
            if (r0 != 0) goto L104
            r13.al = r2     // Catch: java.lang.Exception -> L105
            android.media.MediaCodec r3 = r13.P     // Catch: java.lang.Exception -> L105
            int r4 = r13.ad     // Catch: java.lang.Exception -> L105
            r5 = 0
            r6 = 0
            r7 = 0
            r9 = 4
            r3.queueInputBuffer(r4, r5, r6, r7, r9)     // Catch: java.lang.Exception -> L105
            r13.G()     // Catch: java.lang.Exception -> L105
        L104:
            return r1
        L105:
            r0 = move-exception
            int r1 = r13.s()
            com.tkay.expressad.exoplayer.g r0 = com.tkay.expressad.exoplayer.g.a(r0, r1)
            throw r0
        L10f:
            boolean r0 = r13.ap
            if (r0 == 0) goto L127
            com.tkay.expressad.exoplayer.c.e r0 = r13.H
            boolean r0 = r0.d()
            if (r0 != 0) goto L127
            com.tkay.expressad.exoplayer.c.e r0 = r13.H
            r0.a()
            int r0 = r13.ai
            if (r0 != r3) goto L126
            r13.ai = r2
        L126:
            return r2
        L127:
            r13.ap = r1
            com.tkay.expressad.exoplayer.c.e r0 = r13.H
            boolean r0 = r0.g()
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r3 = r13.N
            if (r3 == 0) goto L156
            if (r0 != 0) goto L13a
            boolean r3 = r13.G
            if (r3 == 0) goto L13a
            goto L156
        L13a:
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r3 = r13.N
            int r3 = r3.e()
            if (r3 == r2) goto L147
            r5 = 4
            if (r3 == r5) goto L156
            r3 = r2
            goto L157
        L147:
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r0 = r13.N
            com.tkay.expressad.exoplayer.d.f$a r0 = r0.f()
            int r1 = r13.s()
            com.tkay.expressad.exoplayer.g r0 = com.tkay.expressad.exoplayer.g.a(r0, r1)
            throw r0
        L156:
            r3 = r1
        L157:
            r13.ao = r3
            if (r3 == 0) goto L15c
            return r1
        L15c:
            boolean r3 = r13.S
            if (r3 == 0) goto L176
            if (r0 != 0) goto L176
            com.tkay.expressad.exoplayer.c.e r3 = r13.H
            java.nio.ByteBuffer r3 = r3.e
            com.tkay.expressad.exoplayer.k.p.a(r3)
            com.tkay.expressad.exoplayer.c.e r3 = r13.H
            java.nio.ByteBuffer r3 = r3.e
            int r3 = r3.position()
            if (r3 != 0) goto L174
            return r2
        L174:
            r13.S = r1
        L176:
            com.tkay.expressad.exoplayer.c.e r3 = r13.H     // Catch: java.lang.Exception -> L1db
            long r9 = r3.f     // Catch: java.lang.Exception -> L1db
            com.tkay.expressad.exoplayer.c.e r3 = r13.H     // Catch: java.lang.Exception -> L1db
            boolean r3 = r3.b()     // Catch: java.lang.Exception -> L1db
            if (r3 == 0) goto L18b
            java.util.List<java.lang.Long> r3 = r13.K     // Catch: java.lang.Exception -> L1db
            java.lang.Long r5 = java.lang.Long.valueOf(r9)     // Catch: java.lang.Exception -> L1db
            r3.add(r5)     // Catch: java.lang.Exception -> L1db
        L18b:
            com.tkay.expressad.exoplayer.c.e r3 = r13.H     // Catch: java.lang.Exception -> L1db
            r3.h()     // Catch: java.lang.Exception -> L1db
            com.tkay.expressad.exoplayer.c.e r3 = r13.H     // Catch: java.lang.Exception -> L1db
            r13.a(r3)     // Catch: java.lang.Exception -> L1db
            if (r0 == 0) goto L1bb
            com.tkay.expressad.exoplayer.c.e r0 = r13.H     // Catch: java.lang.Exception -> L1db
            com.tkay.expressad.exoplayer.c.b r0 = r0.d     // Catch: java.lang.Exception -> L1db
            android.media.MediaCodec$CryptoInfo r8 = r0.a()     // Catch: java.lang.Exception -> L1db
            if (r4 != 0) goto L1a2
            goto L1b1
        L1a2:
            int[] r0 = r8.numBytesOfClearData     // Catch: java.lang.Exception -> L1db
            if (r0 != 0) goto L1aa
            int[] r0 = new int[r2]     // Catch: java.lang.Exception -> L1db
            r8.numBytesOfClearData = r0     // Catch: java.lang.Exception -> L1db
        L1aa:
            int[] r0 = r8.numBytesOfClearData     // Catch: java.lang.Exception -> L1db
            r3 = r0[r1]     // Catch: java.lang.Exception -> L1db
            int r3 = r3 + r4
            r0[r1] = r3     // Catch: java.lang.Exception -> L1db
        L1b1:
            android.media.MediaCodec r5 = r13.P     // Catch: java.lang.Exception -> L1db
            int r6 = r13.ad     // Catch: java.lang.Exception -> L1db
            r7 = 0
            r11 = 0
            r5.queueSecureInputBuffer(r6, r7, r8, r9, r11)     // Catch: java.lang.Exception -> L1db
            goto L1cc
        L1bb:
            android.media.MediaCodec r5 = r13.P     // Catch: java.lang.Exception -> L1db
            int r6 = r13.ad     // Catch: java.lang.Exception -> L1db
            r7 = 0
            com.tkay.expressad.exoplayer.c.e r0 = r13.H     // Catch: java.lang.Exception -> L1db
            java.nio.ByteBuffer r0 = r0.e     // Catch: java.lang.Exception -> L1db
            int r8 = r0.limit()     // Catch: java.lang.Exception -> L1db
            r11 = 0
            r5.queueInputBuffer(r6, r7, r8, r9, r11)     // Catch: java.lang.Exception -> L1db
        L1cc:
            r13.G()     // Catch: java.lang.Exception -> L1db
            r13.ak = r2     // Catch: java.lang.Exception -> L1db
            r13.ai = r1     // Catch: java.lang.Exception -> L1db
            com.tkay.expressad.exoplayer.c.d r0 = r13.q     // Catch: java.lang.Exception -> L1db
            int r1 = r0.c     // Catch: java.lang.Exception -> L1db
            int r1 = r1 + r2
            r0.c = r1     // Catch: java.lang.Exception -> L1db
            return r2
        L1db:
            r0 = move-exception
            int r1 = r13.s()
            com.tkay.expressad.exoplayer.g r0 = com.tkay.expressad.exoplayer.g.a(r0, r1)
            throw r0
        L1e5:
            return r1
    }

    private void D() {
            r2 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 >= r1) goto L16
            android.media.MediaCodec r0 = r2.P
            java.nio.ByteBuffer[] r0 = r0.getInputBuffers()
            r2.aa = r0
            android.media.MediaCodec r0 = r2.P
            java.nio.ByteBuffer[] r0 = r0.getOutputBuffers()
            r2.ab = r0
        L16:
            return
    }

    private void E() {
            r2 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 >= r1) goto Lb
            r0 = 0
            r2.aa = r0
            r2.ab = r0
        Lb:
            return
    }

    private boolean F() {
            r1 = this;
            int r0 = r1.ae
            if (r0 < 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    private void G() {
            r2 = this;
            r0 = -1
            r2.ad = r0
            com.tkay.expressad.exoplayer.c.e r0 = r2.H
            r1 = 0
            r0.e = r1
            return
    }

    private void H() {
            r1 = this;
            r0 = -1
            r1.ae = r0
            r0 = 0
            r1.af = r0
            return
    }

    private static long I() {
            r0 = 0
            return r0
    }

    private void J() {
            r4 = this;
            android.media.MediaCodec r0 = r4.P
            android.media.MediaFormat r0 = r0.getOutputFormat()
            int r1 = r4.R
            r2 = 1
            if (r1 == 0) goto L20
            java.lang.String r1 = "width"
            int r1 = r0.getInteger(r1)
            r3 = 32
            if (r1 != r3) goto L20
            java.lang.String r1 = "height"
            int r1 = r0.getInteger(r1)
            if (r1 != r3) goto L20
            r4.Z = r2
            return
        L20:
            boolean r1 = r4.X
            if (r1 == 0) goto L29
            java.lang.String r1 = "channel-count"
            r0.setInteger(r1, r2)
        L29:
            android.media.MediaCodec r1 = r4.P
            r4.a(r1, r0)
            return
    }

    private void K() {
            r2 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 >= r1) goto Le
            android.media.MediaCodec r0 = r2.P
            java.nio.ByteBuffer[] r0 = r0.getOutputBuffers()
            r2.ab = r0
        Le:
            return
    }

    private void L() {
            r2 = this;
            int r0 = r2.aj
            r1 = 2
            if (r0 != r1) goto Lc
            r2.A()
            r2.x()
            return
        Lc:
            r0 = 1
            r2.an = r0
            r2.w()
            return
    }

    private static boolean M() {
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r1 = "Amazon"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L20
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "AFTM"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L1e
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "AFTB"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L20
        L1e:
            r0 = 1
            return r0
        L20:
            r0 = 0
            return r0
    }

    private static android.media.MediaCodec.CryptoInfo a(com.tkay.expressad.exoplayer.c.e r3, int r4) {
            com.tkay.expressad.exoplayer.c.b r3 = r3.d
            android.media.MediaCodec$CryptoInfo r3 = r3.a()
            if (r4 != 0) goto L9
            return r3
        L9:
            int[] r0 = r3.numBytesOfClearData
            if (r0 != 0) goto L12
            r0 = 1
            int[] r0 = new int[r0]
            r3.numBytesOfClearData = r0
        L12:
            int[] r0 = r3.numBytesOfClearData
            r1 = 0
            r2 = r0[r1]
            int r2 = r2 + r4
            r0[r1] = r2
            return r3
    }

    private void a(com.tkay.expressad.exoplayer.f.b.b r2) {
            r1 = this;
            int r0 = r1.s()
            com.tkay.expressad.exoplayer.g r2 = com.tkay.expressad.exoplayer.g.a(r2, r0)
            throw r2
    }

    private static boolean a(java.lang.String r2) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 18
            if (r0 < r1) goto L3d
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            if (r0 != r1) goto L1a
            java.lang.String r0 = "OMX.SEC.avc.dec"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L3d
            java.lang.String r0 = "OMX.SEC.avc.dec.secure"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L3d
        L1a:
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 19
            if (r0 != r1) goto L3b
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "SM-G800"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L3b
            java.lang.String r0 = "OMX.Exynos.avc.dec"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L3d
            java.lang.String r0 = "OMX.Exynos.avc.dec.secure"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L3b
            goto L3d
        L3b:
            r2 = 0
            return r2
        L3d:
            r2 = 1
            return r2
    }

    private static boolean a(java.lang.String r2, com.tkay.expressad.exoplayer.m r3) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 >= r1) goto L18
            java.util.List<byte[]> r3 = r3.j
            boolean r3 = r3.isEmpty()
            if (r3 == 0) goto L18
            java.lang.String r3 = "OMX.MTK.VIDEO.DECODER.AVC"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L18
            r2 = 1
            return r2
        L18:
            r2 = 0
            return r2
    }

    private static int b(java.lang.String r2) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 25
            if (r0 > r1) goto L38
            java.lang.String r0 = "OMX.Exynos.avc.dec.secure"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L38
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "SM-T585"
            boolean r0 = r0.startsWith(r1)
            if (r0 != 0) goto L36
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "SM-A510"
            boolean r0 = r0.startsWith(r1)
            if (r0 != 0) goto L36
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "SM-A520"
            boolean r0 = r0.startsWith(r1)
            if (r0 != 0) goto L36
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "SM-J700"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L38
        L36:
            r2 = 2
            return r2
        L38:
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 24
            if (r0 >= r1) goto L78
            java.lang.String r0 = "OMX.Nvidia.h264.decode"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L4e
            java.lang.String r0 = "OMX.Nvidia.h264.decode.secure"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L78
        L4e:
            java.lang.String r2 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r0 = "flounder"
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L76
            java.lang.String r2 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r0 = "flounder_lte"
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L76
            java.lang.String r2 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r0 = "grouper"
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto L76
            java.lang.String r2 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r0 = "tilapia"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L78
        L76:
            r2 = 1
            return r2
        L78:
            r2 = 0
            return r2
    }

    private java.nio.ByteBuffer b(int r3) {
            r2 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 < r1) goto Ld
            android.media.MediaCodec r0 = r2.P
            java.nio.ByteBuffer r3 = r0.getInputBuffer(r3)
            return r3
        Ld:
            java.nio.ByteBuffer[] r0 = r2.aa
            r3 = r0[r3]
            return r3
    }

    private boolean b(long r16, long r18) {
            r15 = this;
            r12 = r15
            boolean r0 = r15.F()
            r13 = 1
            r14 = 0
            if (r0 != 0) goto Lf8
            boolean r0 = r12.W
            r1 = 0
            if (r0 == 0) goto L27
            boolean r0 = r12.al
            if (r0 == 0) goto L27
            android.media.MediaCodec r0 = r12.P     // Catch: java.lang.IllegalStateException -> L1c
            android.media.MediaCodec$BufferInfo r3 = r12.L     // Catch: java.lang.IllegalStateException -> L1c
            int r0 = r0.dequeueOutputBuffer(r3, r1)     // Catch: java.lang.IllegalStateException -> L1c
            goto L2f
        L1c:
            r15.L()
            boolean r0 = r12.an
            if (r0 == 0) goto L26
            r15.A()
        L26:
            return r14
        L27:
            android.media.MediaCodec r0 = r12.P
            android.media.MediaCodec$BufferInfo r3 = r12.L
            int r0 = r0.dequeueOutputBuffer(r3, r1)
        L2f:
            r1 = 21
            if (r0 < 0) goto La6
            boolean r2 = r12.Z
            if (r2 == 0) goto L3f
            r12.Z = r14
            android.media.MediaCodec r1 = r12.P
            r1.releaseOutputBuffer(r0, r14)
            return r13
        L3f:
            android.media.MediaCodec$BufferInfo r2 = r12.L
            int r2 = r2.size
            if (r2 != 0) goto L51
            android.media.MediaCodec$BufferInfo r2 = r12.L
            int r2 = r2.flags
            r2 = r2 & 4
            if (r2 == 0) goto L51
            r15.L()
            return r14
        L51:
            r12.ae = r0
            int r2 = com.tkay.expressad.exoplayer.k.af.a
            if (r2 < r1) goto L5e
            android.media.MediaCodec r1 = r12.P
            java.nio.ByteBuffer r0 = r1.getOutputBuffer(r0)
            goto L62
        L5e:
            java.nio.ByteBuffer[] r1 = r12.ab
            r0 = r1[r0]
        L62:
            r12.af = r0
            if (r0 == 0) goto L7b
            android.media.MediaCodec$BufferInfo r1 = r12.L
            int r1 = r1.offset
            r0.position(r1)
            java.nio.ByteBuffer r0 = r12.af
            android.media.MediaCodec$BufferInfo r1 = r12.L
            int r1 = r1.offset
            android.media.MediaCodec$BufferInfo r2 = r12.L
            int r2 = r2.size
            int r1 = r1 + r2
            r0.limit(r1)
        L7b:
            android.media.MediaCodec$BufferInfo r0 = r12.L
            long r0 = r0.presentationTimeUs
            java.util.List<java.lang.Long> r2 = r12.K
            int r2 = r2.size()
            r3 = r14
        L86:
            if (r3 >= r2) goto La2
            java.util.List<java.lang.Long> r4 = r12.K
            java.lang.Object r4 = r4.get(r3)
            java.lang.Long r4 = (java.lang.Long) r4
            long r4 = r4.longValue()
            int r4 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r4 != 0) goto L9f
            java.util.List<java.lang.Long> r0 = r12.K
            r0.remove(r3)
            r0 = r13
            goto La3
        L9f:
            int r3 = r3 + 1
            goto L86
        La2:
            r0 = r14
        La3:
            r12.ag = r0
            goto Lf8
        La6:
            r2 = -2
            if (r0 != r2) goto Ld7
            android.media.MediaCodec r0 = r12.P
            android.media.MediaFormat r0 = r0.getOutputFormat()
            int r1 = r12.R
            if (r1 == 0) goto Lc8
            java.lang.String r1 = "width"
            int r1 = r0.getInteger(r1)
            r2 = 32
            if (r1 != r2) goto Lc8
            java.lang.String r1 = "height"
            int r1 = r0.getInteger(r1)
            if (r1 != r2) goto Lc8
            r12.Z = r13
            goto Ld6
        Lc8:
            boolean r1 = r12.X
            if (r1 == 0) goto Ld1
            java.lang.String r1 = "channel-count"
            r0.setInteger(r1, r13)
        Ld1:
            android.media.MediaCodec r1 = r12.P
            r15.a(r1, r0)
        Ld6:
            return r13
        Ld7:
            r2 = -3
            if (r0 != r2) goto Le7
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            if (r0 >= r1) goto Le6
            android.media.MediaCodec r0 = r12.P
            java.nio.ByteBuffer[] r0 = r0.getOutputBuffers()
            r12.ab = r0
        Le6:
            return r13
        Le7:
            boolean r0 = r12.U
            if (r0 == 0) goto Lf7
            boolean r0 = r12.am
            if (r0 != 0) goto Lf4
            int r0 = r12.aj
            r1 = 2
            if (r0 != r1) goto Lf7
        Lf4:
            r15.L()
        Lf7:
            return r14
        Lf8:
            boolean r0 = r12.W
            if (r0 == 0) goto L125
            boolean r0 = r12.al
            if (r0 == 0) goto L125
            android.media.MediaCodec r5 = r12.P     // Catch: java.lang.IllegalStateException -> L11a
            java.nio.ByteBuffer r6 = r12.af     // Catch: java.lang.IllegalStateException -> L11a
            int r7 = r12.ae     // Catch: java.lang.IllegalStateException -> L11a
            android.media.MediaCodec$BufferInfo r0 = r12.L     // Catch: java.lang.IllegalStateException -> L11a
            int r8 = r0.flags     // Catch: java.lang.IllegalStateException -> L11a
            android.media.MediaCodec$BufferInfo r0 = r12.L     // Catch: java.lang.IllegalStateException -> L11a
            long r9 = r0.presentationTimeUs     // Catch: java.lang.IllegalStateException -> L11a
            boolean r11 = r12.ag     // Catch: java.lang.IllegalStateException -> L11a
            r0 = r15
            r1 = r16
            r3 = r18
            boolean r0 = r0.a(r1, r3, r5, r6, r7, r8, r9, r11)     // Catch: java.lang.IllegalStateException -> L11a
            goto L13e
        L11a:
            r15.L()
            boolean r0 = r12.an
            if (r0 == 0) goto L124
            r15.A()
        L124:
            return r14
        L125:
            android.media.MediaCodec r5 = r12.P
            java.nio.ByteBuffer r6 = r12.af
            int r7 = r12.ae
            android.media.MediaCodec$BufferInfo r0 = r12.L
            int r8 = r0.flags
            android.media.MediaCodec$BufferInfo r0 = r12.L
            long r9 = r0.presentationTimeUs
            boolean r11 = r12.ag
            r0 = r15
            r1 = r16
            r3 = r18
            boolean r0 = r0.a(r1, r3, r5, r6, r7, r8, r9, r11)
        L13e:
            if (r0 == 0) goto L15b
            android.media.MediaCodec$BufferInfo r0 = r12.L
            long r0 = r0.presentationTimeUs
            r15.c(r0)
            android.media.MediaCodec$BufferInfo r0 = r12.L
            int r0 = r0.flags
            r0 = r0 & 4
            if (r0 == 0) goto L151
            r0 = r13
            goto L152
        L151:
            r0 = r14
        L152:
            r15.H()
            if (r0 != 0) goto L158
            return r13
        L158:
            r15.L()
        L15b:
            return r14
    }

    private static boolean b(com.tkay.expressad.exoplayer.f.a r3) {
            java.lang.String r0 = r3.c
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 17
            if (r1 > r2) goto L18
            java.lang.String r1 = "OMX.rk.video_decoder.avc"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L30
            java.lang.String r1 = "OMX.allwinner.video.decoder.avc"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L30
        L18:
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r1 = "Amazon"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L32
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "AFTS"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L32
            boolean r3 = r3.h
            if (r3 == 0) goto L32
        L30:
            r3 = 1
            return r3
        L32:
            r3 = 0
            return r3
    }

    private static boolean b(java.lang.String r2, com.tkay.expressad.exoplayer.m r3) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 18
            if (r0 > r1) goto L14
            int r3 = r3.u
            r0 = 1
            if (r3 != r0) goto L14
            java.lang.String r3 = "OMX.MTK.AUDIO.DECODER.MP3"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L14
            return r0
        L14:
            r2 = 0
            return r2
    }

    private boolean b(boolean r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r0 = r3.N
            r1 = 0
            if (r0 == 0) goto L29
            if (r4 != 0) goto Lc
            boolean r4 = r3.G
            if (r4 == 0) goto Lc
            goto L29
        Lc:
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r4 = r3.N
            int r4 = r4.e()
            r0 = 1
            if (r4 == r0) goto L1a
            r2 = 4
            if (r4 == r2) goto L19
            return r0
        L19:
            return r1
        L1a:
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r4 = r3.N
            com.tkay.expressad.exoplayer.d.f$a r4 = r4.f()
            int r0 = r3.s()
            com.tkay.expressad.exoplayer.g r4 = com.tkay.expressad.exoplayer.g.a(r4, r0)
            throw r4
        L29:
            return r1
    }

    private java.nio.ByteBuffer c(int r3) {
            r2 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 < r1) goto Ld
            android.media.MediaCodec r0 = r2.P
            java.nio.ByteBuffer r3 = r0.getOutputBuffer(r3)
            return r3
        Ld:
            java.nio.ByteBuffer[] r0 = r2.ab
            r3 = r0[r3]
            return r3
    }

    private static boolean c(java.lang.String r2) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 23
            if (r0 > r1) goto Le
            java.lang.String r0 = "OMX.google.vorbis.decoder"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L2e
        Le:
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 19
            if (r0 > r1) goto L30
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "hb2000"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L30
            java.lang.String r0 = "OMX.amlogic.avc.decoder.awesome"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L2e
            java.lang.String r0 = "OMX.amlogic.avc.decoder.awesome.secure"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L30
        L2e:
            r2 = 1
            return r2
        L30:
            r2 = 0
            return r2
    }

    private boolean d(long r6) {
            r5 = this;
            java.util.List<java.lang.Long> r0 = r5.K
            int r0 = r0.size()
            r1 = 0
            r2 = r1
        L8:
            if (r2 >= r0) goto L24
            java.util.List<java.lang.Long> r3 = r5.K
            java.lang.Object r3 = r3.get(r2)
            java.lang.Long r3 = (java.lang.Long) r3
            long r3 = r3.longValue()
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 != 0) goto L21
            java.util.List<java.lang.Long> r6 = r5.K
            r6.remove(r2)
            r6 = 1
            return r6
        L21:
            int r2 = r2 + 1
            goto L8
        L24:
            return r1
    }

    private static boolean d(java.lang.String r2) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 != r1) goto L10
            java.lang.String r0 = "OMX.google.aac.decoder"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L10
            r2 = 1
            return r2
        L10:
            r2 = 0
            return r2
    }

    protected void A() {
            r4 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r4.ac = r0
            r4.G()
            r4.H()
            r0 = 0
            r4.ao = r0
            r4.ag = r0
            java.util.List<java.lang.Long> r1 = r4.K
            r1.clear()
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 0
            r3 = 21
            if (r1 >= r3) goto L22
            r4.aa = r2
            r4.ab = r2
        L22:
            r4.Q = r2
            r4.ah = r0
            r4.ak = r0
            r4.S = r0
            r4.T = r0
            r4.R = r0
            r4.U = r0
            r4.V = r0
            r4.X = r0
            r4.Y = r0
            r4.Z = r0
            r4.al = r0
            r4.ai = r0
            r4.aj = r0
            android.media.MediaCodec r0 = r4.P
            if (r0 == 0) goto Lb8
            com.tkay.expressad.exoplayer.c.d r0 = r4.q
            int r1 = r0.b
            int r1 = r1 + 1
            r0.b = r1
            android.media.MediaCodec r0 = r4.P     // Catch: java.lang.Throwable -> L83
            r0.stop()     // Catch: java.lang.Throwable -> L83
            android.media.MediaCodec r0 = r4.P     // Catch: java.lang.Throwable -> L6b
            r0.release()     // Catch: java.lang.Throwable -> L6b
            r4.P = r2
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r0 = r4.N
            if (r0 == 0) goto L6a
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r1 = r4.O
            if (r1 == r0) goto L6a
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r1 = r4.F     // Catch: java.lang.Throwable -> L66
            r1.a(r0)     // Catch: java.lang.Throwable -> L66
            r4.N = r2
            return
        L66:
            r0 = move-exception
            r4.N = r2
            throw r0
        L6a:
            return
        L6b:
            r0 = move-exception
            r4.P = r2
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r1 = r4.N
            if (r1 == 0) goto L82
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r3 = r4.O
            if (r3 == r1) goto L82
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r3 = r4.F     // Catch: java.lang.Throwable -> L7e
            r3.a(r1)     // Catch: java.lang.Throwable -> L7e
            r4.N = r2
            goto L82
        L7e:
            r0 = move-exception
            r4.N = r2
            throw r0
        L82:
            throw r0
        L83:
            r0 = move-exception
            android.media.MediaCodec r1 = r4.P     // Catch: java.lang.Throwable -> La0
            r1.release()     // Catch: java.lang.Throwable -> La0
            r4.P = r2
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r1 = r4.N
            if (r1 == 0) goto L9f
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r3 = r4.O
            if (r3 == r1) goto L9f
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r3 = r4.F     // Catch: java.lang.Throwable -> L9b
            r3.a(r1)     // Catch: java.lang.Throwable -> L9b
            r4.N = r2
            goto L9f
        L9b:
            r0 = move-exception
            r4.N = r2
            throw r0
        L9f:
            throw r0
        La0:
            r0 = move-exception
            r4.P = r2
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r1 = r4.N
            if (r1 == 0) goto Lb7
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r3 = r4.O
            if (r3 == r1) goto Lb7
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r3 = r4.F     // Catch: java.lang.Throwable -> Lb3
            r3.a(r1)     // Catch: java.lang.Throwable -> Lb3
            r4.N = r2
            goto Lb7
        Lb3:
            r0 = move-exception
            r4.N = r2
            throw r0
        Lb7:
            throw r0
        Lb8:
            return
    }

    protected void B() {
            r3 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r3.ac = r0
            r3.G()
            r3.H()
            r0 = 1
            r3.ap = r0
            r1 = 0
            r3.ao = r1
            r3.ag = r1
            java.util.List<java.lang.Long> r2 = r3.K
            r2.clear()
            r3.Y = r1
            r3.Z = r1
            boolean r2 = r3.T
            if (r2 != 0) goto L3e
            boolean r2 = r3.V
            if (r2 == 0) goto L2b
            boolean r2 = r3.al
            if (r2 == 0) goto L2b
            goto L3e
        L2b:
            int r2 = r3.aj
            if (r2 == 0) goto L36
            r3.A()
            r3.x()
            goto L44
        L36:
            android.media.MediaCodec r2 = r3.P
            r2.flush()
            r3.ak = r1
            goto L44
        L3e:
            r3.A()
            r3.x()
        L44:
            boolean r1 = r3.ah
            if (r1 == 0) goto L4e
            com.tkay.expressad.exoplayer.m r1 = r3.M
            if (r1 == 0) goto L4e
            r3.ai = r0
        L4e:
            return
    }

    protected int a(com.tkay.expressad.exoplayer.f.a r1, com.tkay.expressad.exoplayer.m r2, com.tkay.expressad.exoplayer.m r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    protected abstract int a(com.tkay.expressad.exoplayer.f.c r1, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r2, com.tkay.expressad.exoplayer.m r3);

    @Override
    public final int a(com.tkay.expressad.exoplayer.m r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.f.c r0 = r2.E     // Catch: com.tkay.expressad.exoplayer.f.d.b -> L9
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r1 = r2.F     // Catch: com.tkay.expressad.exoplayer.f.d.b -> L9
            int r3 = r2.a(r0, r1, r3)     // Catch: com.tkay.expressad.exoplayer.f.d.b -> L9
            return r3
        L9:
            r3 = move-exception
            int r0 = r2.s()
            com.tkay.expressad.exoplayer.g r3 = com.tkay.expressad.exoplayer.g.a(r3, r0)
            throw r3
    }

    protected com.tkay.expressad.exoplayer.f.a a(com.tkay.expressad.exoplayer.f.c r1, com.tkay.expressad.exoplayer.m r2, boolean r3) {
            r0 = this;
            java.lang.String r2 = r2.h
            com.tkay.expressad.exoplayer.f.a r1 = r1.a(r2, r3)
            return r1
    }

    @Override
    public final void a(long r6, long r8) {
            r5 = this;
            boolean r0 = r5.an
            if (r0 == 0) goto L8
            r5.w()
            return
        L8:
            com.tkay.expressad.exoplayer.m r0 = r5.M
            r1 = -4
            r2 = -5
            r3 = 1
            if (r0 != 0) goto L37
            com.tkay.expressad.exoplayer.c.e r0 = r5.I
            r0.a()
            com.tkay.expressad.exoplayer.n r0 = r5.J
            com.tkay.expressad.exoplayer.c.e r4 = r5.I
            int r0 = r5.a(r0, r4, r3)
            if (r0 != r2) goto L26
            com.tkay.expressad.exoplayer.n r0 = r5.J
            com.tkay.expressad.exoplayer.m r0 = r0.a
            r5.b(r0)
            goto L37
        L26:
            if (r0 != r1) goto L36
            com.tkay.expressad.exoplayer.c.e r6 = r5.I
            boolean r6 = r6.c()
            com.tkay.expressad.exoplayer.k.a.b(r6)
            r5.am = r3
            r5.L()
        L36:
            return
        L37:
            r5.x()
            android.media.MediaCodec r0 = r5.P
            if (r0 == 0) goto L53
            java.lang.String r0 = "drainAndFeed"
            com.tkay.expressad.exoplayer.k.ad.a(r0)
        L43:
            boolean r0 = r5.b(r6, r8)
            if (r0 != 0) goto L43
        L49:
            boolean r6 = r5.C()
            if (r6 != 0) goto L49
            com.tkay.expressad.exoplayer.k.ad.a()
            return
        L53:
            com.tkay.expressad.exoplayer.c.d r8 = r5.q
            int r9 = r8.d
            int r6 = r5.b(r6)
            int r9 = r9 + r6
            r8.d = r9
            com.tkay.expressad.exoplayer.c.e r6 = r5.I
            r6.a()
            com.tkay.expressad.exoplayer.n r6 = r5.J
            com.tkay.expressad.exoplayer.c.e r7 = r5.I
            r8 = 0
            int r6 = r5.a(r6, r7, r8)
            if (r6 != r2) goto L76
            com.tkay.expressad.exoplayer.n r6 = r5.J
            com.tkay.expressad.exoplayer.m r6 = r6.a
            r5.b(r6)
            return
        L76:
            if (r6 != r1) goto L86
            com.tkay.expressad.exoplayer.c.e r6 = r5.I
            boolean r6 = r6.c()
            com.tkay.expressad.exoplayer.k.a.b(r6)
            r5.am = r3
            r5.L()
        L86:
            return
    }

    @Override
    protected void a(long r1, boolean r3) {
            r0 = this;
            r1 = 0
            r0.am = r1
            r0.an = r1
            android.media.MediaCodec r1 = r0.P
            if (r1 == 0) goto Lc
            r0.B()
        Lc:
            return
    }

    protected void a(android.media.MediaCodec r1, android.media.MediaFormat r2) {
            r0 = this;
            return
    }

    protected void a(com.tkay.expressad.exoplayer.c.e r1) {
            r0 = this;
            return
    }

    protected abstract void a(com.tkay.expressad.exoplayer.f.a r1, android.media.MediaCodec r2, com.tkay.expressad.exoplayer.m r3, android.media.MediaCrypto r4);

    protected void a(java.lang.String r1, long r2, long r4) {
            r0 = this;
            return
    }

    @Override
    protected void a(boolean r1) {
            r0 = this;
            com.tkay.expressad.exoplayer.c.d r1 = new com.tkay.expressad.exoplayer.c.d
            r1.<init>()
            r0.q = r1
            return
    }

    protected abstract boolean a(long r1, long r3, android.media.MediaCodec r5, java.nio.ByteBuffer r6, int r7, int r8, long r9, boolean r11);

    protected boolean a(com.tkay.expressad.exoplayer.f.a r1) {
            r0 = this;
            r1 = 1
            return r1
    }

    protected void b(com.tkay.expressad.exoplayer.m r5) {
            r4 = this;
            com.tkay.expressad.exoplayer.m r0 = r4.M
            r4.M = r5
            com.tkay.expressad.exoplayer.d.e r5 = r5.k
            r1 = 0
            if (r0 != 0) goto Lb
            r2 = r1
            goto Ld
        Lb:
            com.tkay.expressad.exoplayer.d.e r2 = r0.k
        Ld:
            boolean r5 = com.tkay.expressad.exoplayer.k.af.a(r5, r2)
            r2 = 1
            r5 = r5 ^ r2
            if (r5 == 0) goto L49
            com.tkay.expressad.exoplayer.m r5 = r4.M
            com.tkay.expressad.exoplayer.d.e r5 = r5.k
            if (r5 == 0) goto L47
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r5 = r4.F
            if (r5 == 0) goto L37
            android.os.Looper r1 = android.os.Looper.myLooper()
            com.tkay.expressad.exoplayer.m r3 = r4.M
            com.tkay.expressad.exoplayer.d.e r3 = r3.k
            com.tkay.expressad.exoplayer.d.f r5 = r5.a(r1, r3)
            r4.O = r5
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r1 = r4.N
            if (r5 != r1) goto L49
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r1 = r4.F
            r1.a(r5)
            goto L49
        L37:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r0 = "Media requires a DrmSessionManager"
            r5.<init>(r0)
            int r0 = r4.s()
            com.tkay.expressad.exoplayer.g r5 = com.tkay.expressad.exoplayer.g.a(r5, r0)
            throw r5
        L47:
            r4.O = r1
        L49:
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r5 = r4.O
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r1 = r4.N
            r3 = 0
            if (r5 != r1) goto L89
            android.media.MediaCodec r5 = r4.P
            if (r5 == 0) goto L89
            com.tkay.expressad.exoplayer.f.a r5 = r4.Q
            com.tkay.expressad.exoplayer.m r1 = r4.M
            int r5 = r4.a(r5, r0, r1)
            if (r5 == 0) goto L89
            if (r5 == r2) goto L88
            r1 = 3
            if (r5 != r1) goto L82
            r4.ah = r2
            r4.ai = r2
            int r5 = r4.R
            r1 = 2
            if (r5 == r1) goto L7e
            if (r5 != r2) goto L7f
            com.tkay.expressad.exoplayer.m r5 = r4.M
            int r5 = r5.m
            int r1 = r0.m
            if (r5 != r1) goto L7f
            com.tkay.expressad.exoplayer.m r5 = r4.M
            int r5 = r5.n
            int r0 = r0.n
            if (r5 != r0) goto L7f
        L7e:
            r3 = r2
        L7f:
            r4.Y = r3
            goto L88
        L82:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            r5.<init>()
            throw r5
        L88:
            r3 = r2
        L89:
            if (r3 != 0) goto L98
            boolean r5 = r4.ak
            if (r5 == 0) goto L92
            r4.aj = r2
            return
        L92:
            r4.A()
            r4.x()
        L98:
            return
    }

    protected void c(long r1) {
            r0 = this;
            return
    }

    @Override
    public final int m() {
            r1 = this;
            r0 = 8
            return r0
    }

    @Override
    protected void n() {
            r0 = this;
            return
    }

    @Override
    protected void o() {
            r0 = this;
            return
    }

    @Override
    protected void p() {
            r4 = this;
            r0 = 0
            r4.M = r0
            r4.A()     // Catch: java.lang.Throwable -> L4a
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r1 = r4.N     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L11
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r1 = r4.F     // Catch: java.lang.Throwable -> L2d
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r2 = r4.N     // Catch: java.lang.Throwable -> L2d
            r1.a(r2)     // Catch: java.lang.Throwable -> L2d
        L11:
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r1 = r4.O     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto L22
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r1 = r4.O     // Catch: java.lang.Throwable -> L27
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r2 = r4.N     // Catch: java.lang.Throwable -> L27
            if (r1 == r2) goto L22
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r1 = r4.F     // Catch: java.lang.Throwable -> L27
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r2 = r4.O     // Catch: java.lang.Throwable -> L27
            r1.a(r2)     // Catch: java.lang.Throwable -> L27
        L22:
            r4.N = r0
            r4.O = r0
            return
        L27:
            r1 = move-exception
            r4.N = r0
            r4.O = r0
            throw r1
        L2d:
            r1 = move-exception
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r2 = r4.O     // Catch: java.lang.Throwable -> L44
            if (r2 == 0) goto L3f
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r2 = r4.O     // Catch: java.lang.Throwable -> L44
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r3 = r4.N     // Catch: java.lang.Throwable -> L44
            if (r2 == r3) goto L3f
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r2 = r4.F     // Catch: java.lang.Throwable -> L44
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r3 = r4.O     // Catch: java.lang.Throwable -> L44
            r2.a(r3)     // Catch: java.lang.Throwable -> L44
        L3f:
            r4.N = r0
            r4.O = r0
            throw r1
        L44:
            r1 = move-exception
            r4.N = r0
            r4.O = r0
            throw r1
        L4a:
            r1 = move-exception
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r2 = r4.N     // Catch: java.lang.Throwable -> L72
            if (r2 == 0) goto L56
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r2 = r4.F     // Catch: java.lang.Throwable -> L72
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r3 = r4.N     // Catch: java.lang.Throwable -> L72
            r2.a(r3)     // Catch: java.lang.Throwable -> L72
        L56:
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r2 = r4.O     // Catch: java.lang.Throwable -> L6c
            if (r2 == 0) goto L67
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r2 = r4.O     // Catch: java.lang.Throwable -> L6c
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r3 = r4.N     // Catch: java.lang.Throwable -> L6c
            if (r2 == r3) goto L67
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r2 = r4.F     // Catch: java.lang.Throwable -> L6c
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r3 = r4.O     // Catch: java.lang.Throwable -> L6c
            r2.a(r3)     // Catch: java.lang.Throwable -> L6c
        L67:
            r4.N = r0
            r4.O = r0
            throw r1
        L6c:
            r1 = move-exception
            r4.N = r0
            r4.O = r0
            throw r1
        L72:
            r1 = move-exception
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r2 = r4.O     // Catch: java.lang.Throwable -> L89
            if (r2 == 0) goto L84
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r2 = r4.O     // Catch: java.lang.Throwable -> L89
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r3 = r4.N     // Catch: java.lang.Throwable -> L89
            if (r2 == r3) goto L84
            com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r2 = r4.F     // Catch: java.lang.Throwable -> L89
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r3 = r4.O     // Catch: java.lang.Throwable -> L89
            r2.a(r3)     // Catch: java.lang.Throwable -> L89
        L84:
            r4.N = r0
            r4.O = r0
            throw r1
        L89:
            r1 = move-exception
            r4.N = r0
            r4.O = r0
            throw r1
    }

    @Override
    public boolean u() {
            r4 = this;
            com.tkay.expressad.exoplayer.m r0 = r4.M
            if (r0 == 0) goto L2b
            boolean r0 = r4.ao
            if (r0 != 0) goto L2b
            boolean r0 = r4.t()
            if (r0 != 0) goto L29
            boolean r0 = r4.F()
            if (r0 != 0) goto L29
            long r0 = r4.ac
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2b
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r4.ac
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L2b
        L29:
            r0 = 1
            return r0
        L2b:
            r0 = 0
            return r0
    }

    @Override
    public boolean v() {
            r1 = this;
            boolean r0 = r1.an
            return r0
    }

    protected void w() {
            r0 = this;
            return
    }

    protected final void x() {
            r15 = this;
            android.media.MediaCodec r0 = r15.P
            if (r0 != 0) goto L2cc
            com.tkay.expressad.exoplayer.m r0 = r15.M
            if (r0 != 0) goto La
            goto L2cc
        La:
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r1 = r15.O
            r15.N = r1
            java.lang.String r0 = r0.h
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r1 = r15.N
            java.lang.String r2 = "Amazon"
            r3 = 0
            r4 = 0
            r5 = 1
            if (r1 == 0) goto L71
            com.tkay.expressad.exoplayer.d.i r1 = r1.g()
            com.tkay.expressad.exoplayer.d.k r1 = (com.tkay.expressad.exoplayer.d.k) r1
            if (r1 != 0) goto L2d
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r1 = r15.N
            com.tkay.expressad.exoplayer.d.f$a r1 = r1.f()
            if (r1 != 0) goto L2a
            return
        L2a:
            r6 = r3
            r1 = r4
            goto L35
        L2d:
            android.media.MediaCrypto r6 = r1.a()
            boolean r1 = r1.a(r0)
        L35:
            java.lang.String r7 = com.tkay.expressad.exoplayer.k.af.c
            boolean r7 = r2.equals(r7)
            if (r7 == 0) goto L53
            java.lang.String r7 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r8 = "AFTM"
            boolean r7 = r8.equals(r7)
            if (r7 != 0) goto L51
            java.lang.String r7 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r8 = "AFTB"
            boolean r7 = r8.equals(r7)
            if (r7 == 0) goto L53
        L51:
            r7 = r5
            goto L54
        L53:
            r7 = r4
        L54:
            if (r7 == 0) goto L73
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r7 = r15.N
            int r7 = r7.e()
            if (r7 == r5) goto L62
            r8 = 4
            if (r7 == r8) goto L73
            return
        L62:
            com.tkay.expressad.exoplayer.d.f<com.tkay.expressad.exoplayer.d.k> r0 = r15.N
            com.tkay.expressad.exoplayer.d.f$a r0 = r0.f()
            int r1 = r15.s()
            com.tkay.expressad.exoplayer.g r0 = com.tkay.expressad.exoplayer.g.a(r0, r1)
            throw r0
        L71:
            r6 = r3
            r1 = r4
        L73:
            com.tkay.expressad.exoplayer.f.a r7 = r15.Q
            if (r7 != 0) goto Ld5
            com.tkay.expressad.exoplayer.f.c r7 = r15.E     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            com.tkay.expressad.exoplayer.m r8 = r15.M     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            com.tkay.expressad.exoplayer.f.a r7 = r15.a(r7, r8, r1)     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            r15.Q = r7     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            if (r7 != 0) goto Lc4
            if (r1 == 0) goto Lc4
            com.tkay.expressad.exoplayer.f.c r7 = r15.E     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            com.tkay.expressad.exoplayer.m r8 = r15.M     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            com.tkay.expressad.exoplayer.f.a r7 = r15.a(r7, r8, r4)     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            r15.Q = r7     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            if (r7 == 0) goto Lc4
            java.lang.String r7 = "MediaCodecRenderer"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            java.lang.String r9 = "Drm session requires secure decoder for "
            r8.<init>(r9)     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            r8.append(r0)     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            java.lang.String r0 = ", but no secure decoder available. Trying to proceed with "
            r8.append(r0)     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            com.tkay.expressad.exoplayer.f.a r0 = r15.Q     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            java.lang.String r0 = r0.c     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            r8.append(r0)     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            java.lang.String r0 = "."
            r8.append(r0)     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            java.lang.String r0 = r8.toString()     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            android.util.Log.w(r7, r0)     // Catch: com.tkay.expressad.exoplayer.f.d.b -> Lb6
            goto Lc4
        Lb6:
            r0 = move-exception
            com.tkay.expressad.exoplayer.f.b$b r7 = new com.tkay.expressad.exoplayer.f.b$b
            com.tkay.expressad.exoplayer.m r8 = r15.M
            r9 = -49998(0xffffffffffff3cb2, float:NaN)
            r7.<init>(r8, r0, r1, r9)
            r15.a(r7)
        Lc4:
            com.tkay.expressad.exoplayer.f.a r0 = r15.Q
            if (r0 != 0) goto Ld5
            com.tkay.expressad.exoplayer.f.b$b r0 = new com.tkay.expressad.exoplayer.f.b$b
            com.tkay.expressad.exoplayer.m r7 = r15.M
            r8 = -49999(0xffffffffffff3cb1, float:NaN)
            r0.<init>(r7, r3, r1, r8)
            r15.a(r0)
        Ld5:
            com.tkay.expressad.exoplayer.f.a r0 = r15.Q
            boolean r0 = r15.a(r0)
            if (r0 != 0) goto Lde
            return
        Lde:
            com.tkay.expressad.exoplayer.f.a r0 = r15.Q
            java.lang.String r0 = r0.c
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            r7 = 25
            r13 = 2
            java.lang.String r8 = "OMX.Exynos.avc.dec.secure"
            if (r3 > r7) goto L11b
            boolean r3 = r8.equals(r0)
            if (r3 == 0) goto L11b
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r7 = "SM-T585"
            boolean r3 = r3.startsWith(r7)
            if (r3 != 0) goto L119
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r7 = "SM-A510"
            boolean r3 = r3.startsWith(r7)
            if (r3 != 0) goto L119
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r7 = "SM-A520"
            boolean r3 = r3.startsWith(r7)
            if (r3 != 0) goto L119
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r7 = "SM-J700"
            boolean r3 = r3.startsWith(r7)
            if (r3 == 0) goto L11b
        L119:
            r3 = r13
            goto L15c
        L11b:
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            r7 = 24
            if (r3 >= r7) goto L15b
            java.lang.String r3 = "OMX.Nvidia.h264.decode"
            boolean r3 = r3.equals(r0)
            if (r3 != 0) goto L131
            java.lang.String r3 = "OMX.Nvidia.h264.decode.secure"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L15b
        L131:
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r7 = "flounder"
            boolean r3 = r7.equals(r3)
            if (r3 != 0) goto L159
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r7 = "flounder_lte"
            boolean r3 = r7.equals(r3)
            if (r3 != 0) goto L159
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r7 = "grouper"
            boolean r3 = r7.equals(r3)
            if (r3 != 0) goto L159
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r7 = "tilapia"
            boolean r3 = r7.equals(r3)
            if (r3 == 0) goto L15b
        L159:
            r3 = r5
            goto L15c
        L15b:
            r3 = r4
        L15c:
            r15.R = r3
            com.tkay.expressad.exoplayer.m r3 = r15.M
            int r7 = com.tkay.expressad.exoplayer.k.af.a
            r14 = 21
            if (r7 >= r14) goto L178
            java.util.List<byte[]> r3 = r3.j
            boolean r3 = r3.isEmpty()
            if (r3 == 0) goto L178
            java.lang.String r3 = "OMX.MTK.VIDEO.DECODER.AVC"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L178
            r3 = r5
            goto L179
        L178:
            r3 = r4
        L179:
            r15.S = r3
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            r7 = 19
            r9 = 18
            if (r3 < r9) goto L1b6
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            if (r3 != r9) goto L197
            java.lang.String r3 = "OMX.SEC.avc.dec"
            boolean r3 = r3.equals(r0)
            if (r3 != 0) goto L1b6
            java.lang.String r3 = "OMX.SEC.avc.dec.secure"
            boolean r3 = r3.equals(r0)
            if (r3 != 0) goto L1b6
        L197:
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            if (r3 != r7) goto L1b4
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r10 = "SM-G800"
            boolean r3 = r3.startsWith(r10)
            if (r3 == 0) goto L1b4
            java.lang.String r3 = "OMX.Exynos.avc.dec"
            boolean r3 = r3.equals(r0)
            if (r3 != 0) goto L1b6
            boolean r3 = r8.equals(r0)
            if (r3 == 0) goto L1b4
            goto L1b6
        L1b4:
            r3 = r4
            goto L1b7
        L1b6:
            r3 = r5
        L1b7:
            r15.T = r3
            com.tkay.expressad.exoplayer.f.a r3 = r15.Q
            java.lang.String r8 = r3.c
            int r10 = com.tkay.expressad.exoplayer.k.af.a
            r11 = 17
            if (r10 > r11) goto L1d3
            java.lang.String r10 = "OMX.rk.video_decoder.avc"
            boolean r10 = r10.equals(r8)
            if (r10 != 0) goto L1e9
            java.lang.String r10 = "OMX.allwinner.video.decoder.avc"
            boolean r8 = r10.equals(r8)
            if (r8 != 0) goto L1e9
        L1d3:
            java.lang.String r8 = com.tkay.expressad.exoplayer.k.af.c
            boolean r2 = r2.equals(r8)
            if (r2 == 0) goto L1eb
            java.lang.String r2 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r8 = "AFTS"
            boolean r2 = r8.equals(r2)
            if (r2 == 0) goto L1eb
            boolean r2 = r3.h
            if (r2 == 0) goto L1eb
        L1e9:
            r2 = r5
            goto L1ec
        L1eb:
            r2 = r4
        L1ec:
            r15.U = r2
            int r2 = com.tkay.expressad.exoplayer.k.af.a
            r3 = 23
            if (r2 > r3) goto L1fc
            java.lang.String r2 = "OMX.google.vorbis.decoder"
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L21a
        L1fc:
            int r2 = com.tkay.expressad.exoplayer.k.af.a
            if (r2 > r7) goto L21c
            java.lang.String r2 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r3 = "hb2000"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L21c
            java.lang.String r2 = "OMX.amlogic.avc.decoder.awesome"
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L21a
            java.lang.String r2 = "OMX.amlogic.avc.decoder.awesome.secure"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L21c
        L21a:
            r2 = r5
            goto L21d
        L21c:
            r2 = r4
        L21d:
            r15.V = r2
            int r2 = com.tkay.expressad.exoplayer.k.af.a
            if (r2 != r14) goto L22d
            java.lang.String r2 = "OMX.google.aac.decoder"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L22d
            r2 = r5
            goto L22e
        L22d:
            r2 = r4
        L22e:
            r15.W = r2
            com.tkay.expressad.exoplayer.m r2 = r15.M
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            if (r3 > r9) goto L243
            int r2 = r2.u
            if (r2 != r5) goto L243
            java.lang.String r2 = "OMX.MTK.AUDIO.DECODER.MP3"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L243
            r4 = r5
        L243:
            r15.X = r4
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Exception -> L29d
            java.lang.String r4 = "createCodec:"
            java.lang.String r7 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> L29d
            java.lang.String r4 = r4.concat(r7)     // Catch: java.lang.Exception -> L29d
            com.tkay.expressad.exoplayer.k.ad.a(r4)     // Catch: java.lang.Exception -> L29d
            android.media.MediaCodec r4 = android.media.MediaCodec.createByCodecName(r0)     // Catch: java.lang.Exception -> L29d
            r15.P = r4     // Catch: java.lang.Exception -> L29d
            com.tkay.expressad.exoplayer.k.ad.a()     // Catch: java.lang.Exception -> L29d
            java.lang.String r4 = "configureCodec"
            com.tkay.expressad.exoplayer.k.ad.a(r4)     // Catch: java.lang.Exception -> L29d
            com.tkay.expressad.exoplayer.f.a r4 = r15.Q     // Catch: java.lang.Exception -> L29d
            android.media.MediaCodec r7 = r15.P     // Catch: java.lang.Exception -> L29d
            com.tkay.expressad.exoplayer.m r8 = r15.M     // Catch: java.lang.Exception -> L29d
            r15.a(r4, r7, r8, r6)     // Catch: java.lang.Exception -> L29d
            com.tkay.expressad.exoplayer.k.ad.a()     // Catch: java.lang.Exception -> L29d
            java.lang.String r4 = "startCodec"
            com.tkay.expressad.exoplayer.k.ad.a(r4)     // Catch: java.lang.Exception -> L29d
            android.media.MediaCodec r4 = r15.P     // Catch: java.lang.Exception -> L29d
            r4.start()     // Catch: java.lang.Exception -> L29d
            com.tkay.expressad.exoplayer.k.ad.a()     // Catch: java.lang.Exception -> L29d
            long r9 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Exception -> L29d
            long r11 = r9 - r2
            r7 = r15
            r8 = r0
            r7.a(r8, r9, r11)     // Catch: java.lang.Exception -> L29d
            int r2 = com.tkay.expressad.exoplayer.k.af.a     // Catch: java.lang.Exception -> L29d
            if (r2 >= r14) goto L2a8
            android.media.MediaCodec r2 = r15.P     // Catch: java.lang.Exception -> L29d
            java.nio.ByteBuffer[] r2 = r2.getInputBuffers()     // Catch: java.lang.Exception -> L29d
            r15.aa = r2     // Catch: java.lang.Exception -> L29d
            android.media.MediaCodec r2 = r15.P     // Catch: java.lang.Exception -> L29d
            java.nio.ByteBuffer[] r2 = r2.getOutputBuffers()     // Catch: java.lang.Exception -> L29d
            r15.ab = r2     // Catch: java.lang.Exception -> L29d
            goto L2a8
        L29d:
            r2 = move-exception
            com.tkay.expressad.exoplayer.f.b$b r3 = new com.tkay.expressad.exoplayer.f.b$b
            com.tkay.expressad.exoplayer.m r4 = r15.M
            r3.<init>(r4, r2, r1, r0)
            r15.a(r3)
        L2a8:
            int r0 = r15.a_()
            if (r0 != r13) goto L2b6
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 + r2
            goto L2bb
        L2b6:
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L2bb:
            r15.ac = r0
            r15.G()
            r15.H()
            r15.ap = r5
            com.tkay.expressad.exoplayer.c.d r0 = r15.q
            int r1 = r0.a
            int r1 = r1 + r5
            r0.a = r1
        L2cc:
            return
    }

    protected final android.media.MediaCodec y() {
            r1 = this;
            android.media.MediaCodec r0 = r1.P
            return r0
    }

    protected final com.tkay.expressad.exoplayer.f.a z() {
            r1 = this;
            com.tkay.expressad.exoplayer.f.a r0 = r1.Q
            return r0
    }
}
