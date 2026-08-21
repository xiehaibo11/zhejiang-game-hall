package com.tkay.expressad.exoplayer.b;

public final class l implements com.tkay.expressad.exoplayer.b.h {
    public static boolean b = false;
    public static boolean c = false;
    private static final long d = 250000;
    private static final long e = 750000;
    private static final long f = 250000;
    private static final int g = 4;
    private static final int h = -2;
    private static final int i = 0;
    private static final int j = 1;
    private static final int k = 1;
    private static final int l = 1;
    private static final java.lang.String m = "AudioTrack";
    private static final int n = 0;
    private static final int o = 1;
    private static final int p = 2;
    private com.tkay.expressad.exoplayer.b.h.c A;
    private android.media.AudioTrack B;
    private android.media.AudioTrack C;
    private boolean D;
    private boolean E;
    private int F;
    private int G;
    private int H;
    private int I;
    private com.tkay.expressad.exoplayer.b.b J;
    private boolean K;
    private boolean L;
    private int M;
    private com.tkay.expressad.exoplayer.v N;
    private com.tkay.expressad.exoplayer.v O;
    private long P;
    private long Q;
    private java.nio.ByteBuffer R;
    private int S;
    private int T;
    private long U;
    private long V;
    private int W;
    private long X;
    private long Y;
    private int Z;
    private int aa;
    private long ab;
    private float ac;
    private com.tkay.expressad.exoplayer.b.f[] ad;
    private java.nio.ByteBuffer[] ae;
    private java.nio.ByteBuffer af;
    private java.nio.ByteBuffer ag;
    private byte[] ah;
    private int ai;
    private int aj;
    private boolean ak;
    private boolean al;
    private int am;
    private boolean an;
    private long ao;
    private final com.tkay.expressad.exoplayer.b.c q;
    private final com.tkay.expressad.exoplayer.b.l.a r;
    private final boolean s;
    private final com.tkay.expressad.exoplayer.b.k t;
    private final com.tkay.expressad.exoplayer.b.u u;
    private final com.tkay.expressad.exoplayer.b.f[] v;
    private final com.tkay.expressad.exoplayer.b.f[] w;
    private final android.os.ConditionVariable x;
    private final com.tkay.expressad.exoplayer.b.j y;
    private final java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l.d> z;



    public interface a {
        long a(long r1);

        com.tkay.expressad.exoplayer.v a(com.tkay.expressad.exoplayer.v r1);

        com.tkay.expressad.exoplayer.b.f[] a();

        long b();
    }

    public static class b implements com.tkay.expressad.exoplayer.b.l.a {
        private final com.tkay.expressad.exoplayer.b.f[] a;
        private final com.tkay.expressad.exoplayer.b.q b;
        private final com.tkay.expressad.exoplayer.b.t c;

        public b(com.tkay.expressad.exoplayer.b.f... r5) {
                r4 = this;
                r4.<init>()
                int r0 = r5.length
                int r0 = r0 + 2
                java.lang.Object[] r0 = java.util.Arrays.copyOf(r5, r0)
                com.tkay.expressad.exoplayer.b.f[] r0 = (com.tkay.expressad.exoplayer.b.f[]) r0
                r4.a = r0
                com.tkay.expressad.exoplayer.b.q r0 = new com.tkay.expressad.exoplayer.b.q
                r0.<init>()
                r4.b = r0
                com.tkay.expressad.exoplayer.b.t r0 = new com.tkay.expressad.exoplayer.b.t
                r0.<init>()
                r4.c = r0
                com.tkay.expressad.exoplayer.b.f[] r1 = r4.a
                int r2 = r5.length
                com.tkay.expressad.exoplayer.b.q r3 = r4.b
                r1[r2] = r3
                int r5 = r5.length
                int r5 = r5 + 1
                r1[r5] = r0
                return
        }

        @Override
        public final long a(long r2) {
                r1 = this;
                com.tkay.expressad.exoplayer.b.t r0 = r1.c
                long r2 = r0.a(r2)
                return r2
        }

        @Override
        public final com.tkay.expressad.exoplayer.v a(com.tkay.expressad.exoplayer.v r5) {
                r4 = this;
                com.tkay.expressad.exoplayer.b.q r0 = r4.b
                boolean r1 = r5.d
                r0.a(r1)
                com.tkay.expressad.exoplayer.v r0 = new com.tkay.expressad.exoplayer.v
                com.tkay.expressad.exoplayer.b.t r1 = r4.c
                float r2 = r5.b
                float r1 = r1.a(r2)
                com.tkay.expressad.exoplayer.b.t r2 = r4.c
                float r3 = r5.c
                float r2 = r2.b(r3)
                boolean r5 = r5.d
                r0.<init>(r1, r2, r5)
                return r0
        }

        @Override
        public final com.tkay.expressad.exoplayer.b.f[] a() {
                r1 = this;
                com.tkay.expressad.exoplayer.b.f[] r0 = r1.a
                return r0
        }

        @Override
        public final long b() {
                r2 = this;
                com.tkay.expressad.exoplayer.b.q r0 = r2.b
                long r0 = r0.j()
                return r0
        }
    }

    public static final class c extends java.lang.RuntimeException {
        private c(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        c(java.lang.String r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    private static final class d {
        private final com.tkay.expressad.exoplayer.v a;
        private final long b;
        private final long c;

        private d(com.tkay.expressad.exoplayer.v r1, long r2, long r4) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r4
                return
        }

        d(com.tkay.expressad.exoplayer.v r1, long r2, long r4, byte r6) {
                r0 = this;
                r0.<init>(r1, r2, r4)
                return
        }

        static com.tkay.expressad.exoplayer.v a(com.tkay.expressad.exoplayer.b.l.d r0) {
                com.tkay.expressad.exoplayer.v r0 = r0.a
                return r0
        }

        static long b(com.tkay.expressad.exoplayer.b.l.d r2) {
                long r0 = r2.c
                return r0
        }

        static long c(com.tkay.expressad.exoplayer.b.l.d r2) {
                long r0 = r2.b
                return r0
        }
    }

    private final class e implements com.tkay.expressad.exoplayer.b.j.a {
        final com.tkay.expressad.exoplayer.b.l a;

        private e(com.tkay.expressad.exoplayer.b.l r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        e(com.tkay.expressad.exoplayer.b.l r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void a(int r11, long r12) {
                r10 = this;
                com.tkay.expressad.exoplayer.b.l r0 = r10.a
                com.tkay.expressad.exoplayer.b.h$c r0 = com.tkay.expressad.exoplayer.b.l.d(r0)
                if (r0 == 0) goto L1f
                long r0 = android.os.SystemClock.elapsedRealtime()
                com.tkay.expressad.exoplayer.b.l r2 = r10.a
                long r2 = com.tkay.expressad.exoplayer.b.l.e(r2)
                long r8 = r0 - r2
                com.tkay.expressad.exoplayer.b.l r0 = r10.a
                com.tkay.expressad.exoplayer.b.h$c r4 = com.tkay.expressad.exoplayer.b.l.d(r0)
                r5 = r11
                r6 = r12
                r4.a(r5, r6, r8)
            L1f:
                return
        }

        @Override
        public final void a(long r1) {
                r0 = this;
                java.lang.String r1 = java.lang.String.valueOf(r1)
                java.lang.String r2 = "Ignoring impossibly large audio latency: "
                java.lang.String r1 = r2.concat(r1)
                java.lang.String r2 = "AudioTrack"
                android.util.Log.w(r2, r1)
                return
        }

        @Override
        public final void a(long r3, long r5, long r7, long r9) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Spurious audio timestamp (frame position mismatch): "
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = ", "
                r0.append(r3)
                r0.append(r5)
                r0.append(r3)
                r0.append(r7)
                r0.append(r3)
                r0.append(r9)
                r0.append(r3)
                com.tkay.expressad.exoplayer.b.l r4 = r2.a
                long r4 = com.tkay.expressad.exoplayer.b.l.b(r4)
                r0.append(r4)
                r0.append(r3)
                com.tkay.expressad.exoplayer.b.l r3 = r2.a
                long r3 = com.tkay.expressad.exoplayer.b.l.c(r3)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                boolean r4 = com.tkay.expressad.exoplayer.b.l.c
                if (r4 != 0) goto L44
                java.lang.String r4 = "AudioTrack"
                android.util.Log.w(r4, r3)
                return
            L44:
                com.tkay.expressad.exoplayer.b.l$c r4 = new com.tkay.expressad.exoplayer.b.l$c
                r5 = 0
                r4.<init>(r3, r5)
                throw r4
        }

        @Override
        public final void b(long r3, long r5, long r7, long r9) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Spurious audio timestamp (system clock mismatch): "
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = ", "
                r0.append(r3)
                r0.append(r5)
                r0.append(r3)
                r0.append(r7)
                r0.append(r3)
                r0.append(r9)
                r0.append(r3)
                com.tkay.expressad.exoplayer.b.l r4 = r2.a
                long r4 = com.tkay.expressad.exoplayer.b.l.b(r4)
                r0.append(r4)
                r0.append(r3)
                com.tkay.expressad.exoplayer.b.l r3 = r2.a
                long r3 = com.tkay.expressad.exoplayer.b.l.c(r3)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                boolean r4 = com.tkay.expressad.exoplayer.b.l.c
                if (r4 != 0) goto L44
                java.lang.String r4 = "AudioTrack"
                android.util.Log.w(r4, r3)
                return
            L44:
                com.tkay.expressad.exoplayer.b.l$c r4 = new com.tkay.expressad.exoplayer.b.l$c
                r5 = 0
                r4.<init>(r3, r5)
                throw r4
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    private @interface f {
    }

    static {
            return
    }

    private l(com.tkay.expressad.exoplayer.b.c r6, com.tkay.expressad.exoplayer.b.l.a r7) {
            r5 = this;
            r5.<init>()
            r5.q = r6
            java.lang.Object r6 = com.tkay.expressad.exoplayer.k.a.a(r7)
            com.tkay.expressad.exoplayer.b.l$a r6 = (com.tkay.expressad.exoplayer.b.l.a) r6
            r5.r = r6
            r6 = 0
            r5.s = r6
            android.os.ConditionVariable r0 = new android.os.ConditionVariable
            r1 = 1
            r0.<init>(r1)
            r5.x = r0
            com.tkay.expressad.exoplayer.b.j r0 = new com.tkay.expressad.exoplayer.b.j
            com.tkay.expressad.exoplayer.b.l$e r2 = new com.tkay.expressad.exoplayer.b.l$e
            r2.<init>(r5, r6)
            r0.<init>(r2)
            r5.y = r0
            com.tkay.expressad.exoplayer.b.k r0 = new com.tkay.expressad.exoplayer.b.k
            r0.<init>()
            r5.t = r0
            com.tkay.expressad.exoplayer.b.u r0 = new com.tkay.expressad.exoplayer.b.u
            r0.<init>()
            r5.u = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2 = 3
            com.tkay.expressad.exoplayer.b.f[] r2 = new com.tkay.expressad.exoplayer.b.f[r2]
            com.tkay.expressad.exoplayer.b.p r3 = new com.tkay.expressad.exoplayer.b.p
            r3.<init>()
            r2[r6] = r3
            com.tkay.expressad.exoplayer.b.k r3 = r5.t
            r2[r1] = r3
            com.tkay.expressad.exoplayer.b.u r3 = r5.u
            r4 = 2
            r2[r4] = r3
            java.util.Collections.addAll(r0, r2)
            com.tkay.expressad.exoplayer.b.f[] r7 = r7.a()
            java.util.Collections.addAll(r0, r7)
            int r7 = r0.size()
            com.tkay.expressad.exoplayer.b.f[] r7 = new com.tkay.expressad.exoplayer.b.f[r7]
            java.lang.Object[] r7 = r0.toArray(r7)
            com.tkay.expressad.exoplayer.b.f[] r7 = (com.tkay.expressad.exoplayer.b.f[]) r7
            r5.v = r7
            com.tkay.expressad.exoplayer.b.f[] r7 = new com.tkay.expressad.exoplayer.b.f[r1]
            com.tkay.expressad.exoplayer.b.n r0 = new com.tkay.expressad.exoplayer.b.n
            r0.<init>()
            r7[r6] = r0
            r5.w = r7
            r7 = 1065353216(0x3f800000, float:1.0)
            r5.ac = r7
            r5.aa = r6
            com.tkay.expressad.exoplayer.b.b r7 = com.tkay.expressad.exoplayer.b.b.a
            r5.J = r7
            r5.am = r6
            com.tkay.expressad.exoplayer.v r7 = com.tkay.expressad.exoplayer.v.a
            r5.O = r7
            r7 = -1
            r5.aj = r7
            com.tkay.expressad.exoplayer.b.f[] r7 = new com.tkay.expressad.exoplayer.b.f[r6]
            r5.ad = r7
            java.nio.ByteBuffer[] r6 = new java.nio.ByteBuffer[r6]
            r5.ae = r6
            java.util.ArrayDeque r6 = new java.util.ArrayDeque
            r6.<init>()
            r5.z = r6
            return
    }

    public l(com.tkay.expressad.exoplayer.b.c r2, com.tkay.expressad.exoplayer.b.f[] r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    private l(com.tkay.expressad.exoplayer.b.c r1, com.tkay.expressad.exoplayer.b.f[] r2, byte r3) {
            r0 = this;
            com.tkay.expressad.exoplayer.b.l$b r3 = new com.tkay.expressad.exoplayer.b.l$b
            r3.<init>(r2)
            r0.<init>(r1, r3)
            return
    }

    private static int a(int r1, java.nio.ByteBuffer r2) {
            r0 = 7
            if (r1 == r0) goto L3c
            r0 = 8
            if (r1 != r0) goto L8
            goto L3c
        L8:
            r0 = 5
            if (r1 != r0) goto L10
            int r1 = com.tkay.expressad.exoplayer.b.a.a()
            return r1
        L10:
            r0 = 6
            if (r1 != r0) goto L18
            int r1 = com.tkay.expressad.exoplayer.b.a.a(r2)
            return r1
        L18:
            r0 = 14
            if (r1 != r0) goto L2c
            int r1 = com.tkay.expressad.exoplayer.b.a.b(r2)
            r0 = -1
            if (r1 != r0) goto L25
            r1 = 0
            return r1
        L25:
            int r1 = com.tkay.expressad.exoplayer.b.a.a(r2, r1)
            int r1 = r1 * 16
            return r1
        L2c:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r0 = "Unexpected audio encoding: "
            java.lang.String r1 = r0.concat(r1)
            r2.<init>(r1)
            throw r2
        L3c:
            int r1 = com.tkay.expressad.exoplayer.b.m.a(r2)
            return r1
    }

    private static int a(android.media.AudioTrack r1, java.nio.ByteBuffer r2, int r3) {
            r0 = 1
            int r1 = r1.write(r2, r3, r0)
            return r1
    }

    private int a(android.media.AudioTrack r6, java.nio.ByteBuffer r7, int r8, long r9) {
            r5 = this;
            java.nio.ByteBuffer r0 = r5.R
            if (r0 != 0) goto L19
            r0 = 16
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r5.R = r0
            java.nio.ByteOrder r1 = java.nio.ByteOrder.BIG_ENDIAN
            r0.order(r1)
            java.nio.ByteBuffer r0 = r5.R
            r1 = 1431633921(0x55550001, float:1.463725E13)
            r0.putInt(r1)
        L19:
            int r0 = r5.S
            r1 = 0
            if (r0 != 0) goto L35
            java.nio.ByteBuffer r0 = r5.R
            r2 = 4
            r0.putInt(r2, r8)
            java.nio.ByteBuffer r0 = r5.R
            r2 = 8
            r3 = 1000(0x3e8, double:4.94E-321)
            long r9 = r9 * r3
            r0.putLong(r2, r9)
            java.nio.ByteBuffer r9 = r5.R
            r9.position(r1)
            r5.S = r8
        L35:
            java.nio.ByteBuffer r9 = r5.R
            int r9 = r9.remaining()
            r10 = 1
            if (r9 <= 0) goto L4c
            java.nio.ByteBuffer r0 = r5.R
            int r0 = r6.write(r0, r9, r10)
            if (r0 >= 0) goto L49
            r5.S = r1
            return r0
        L49:
            if (r0 >= r9) goto L4c
            return r1
        L4c:
            int r6 = r6.write(r7, r8, r10)
            if (r6 >= 0) goto L55
            r5.S = r1
            return r6
        L55:
            int r7 = r5.S
            int r7 = r7 - r6
            r5.S = r7
            return r6
    }

    static android.os.ConditionVariable a(com.tkay.expressad.exoplayer.b.l r0) {
            android.os.ConditionVariable r0 = r0.x
            return r0
    }

    private void a(long r6) {
            r5 = this;
            com.tkay.expressad.exoplayer.b.f[] r0 = r5.ad
            int r0 = r0.length
            r1 = r0
        L4:
            if (r1 < 0) goto L3e
            if (r1 <= 0) goto Lf
            java.nio.ByteBuffer[] r2 = r5.ae
            int r3 = r1 + (-1)
            r2 = r2[r3]
            goto L16
        Lf:
            java.nio.ByteBuffer r2 = r5.af
            if (r2 == 0) goto L14
            goto L16
        L14:
            java.nio.ByteBuffer r2 = com.tkay.expressad.exoplayer.b.f.a
        L16:
            if (r1 != r0) goto L1c
            r5.b(r2, r6)
            goto L34
        L1c:
            com.tkay.expressad.exoplayer.b.f[] r3 = r5.ad
            r3 = r3[r1]
            r3.a(r2)
            java.nio.ByteBuffer r3 = r3.f()
            java.nio.ByteBuffer[] r4 = r5.ae
            r4[r1] = r3
            boolean r3 = r3.hasRemaining()
            if (r3 == 0) goto L34
            int r1 = r1 + 1
            goto L4
        L34:
            boolean r2 = r2.hasRemaining()
            if (r2 == 0) goto L3b
            return
        L3b:
            int r1 = r1 + (-1)
            goto L4
        L3e:
            return
    }

    private static void a(android.media.AudioTrack r0, float r1) {
            r0.setVolume(r1)
            return
    }

    private long b(long r6) {
            r5 = this;
            r0 = 0
        L1:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r1 = r5.z
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L22
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r1 = r5.z
            java.lang.Object r1 = r1.getFirst()
            com.tkay.expressad.exoplayer.b.l$d r1 = (com.tkay.expressad.exoplayer.b.l.d) r1
            long r1 = com.tkay.expressad.exoplayer.b.l.d.b(r1)
            int r1 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
            if (r1 < 0) goto L22
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r0 = r5.z
            java.lang.Object r0 = r0.remove()
            com.tkay.expressad.exoplayer.b.l$d r0 = (com.tkay.expressad.exoplayer.b.l.d) r0
            goto L1
        L22:
            if (r0 == 0) goto L39
            com.tkay.expressad.exoplayer.v r1 = com.tkay.expressad.exoplayer.b.l.d.a(r0)
            r5.O = r1
            long r1 = com.tkay.expressad.exoplayer.b.l.d.b(r0)
            r5.Q = r1
            long r0 = com.tkay.expressad.exoplayer.b.l.d.c(r0)
            long r2 = r5.ab
            long r0 = r0 - r2
            r5.P = r0
        L39:
            com.tkay.expressad.exoplayer.v r0 = r5.O
            float r0 = r0.b
            r1 = 1065353216(0x3f800000, float:1.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto L4a
            long r0 = r5.P
            long r6 = r6 + r0
            long r0 = r5.Q
            long r6 = r6 - r0
            return r6
        L4a:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r0 = r5.z
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L5f
            long r0 = r5.P
            com.tkay.expressad.exoplayer.b.l$a r2 = r5.r
            long r3 = r5.Q
            long r6 = r6 - r3
            long r6 = r2.a(r6)
        L5d:
            long r0 = r0 + r6
            return r0
        L5f:
            long r0 = r5.P
            long r2 = r5.Q
            long r6 = r6 - r2
            com.tkay.expressad.exoplayer.v r2 = r5.O
            float r2 = r2.b
            long r6 = com.tkay.expressad.exoplayer.k.af.a(r6, r2)
            goto L5d
    }

    static long b(com.tkay.expressad.exoplayer.b.l r2) {
            long r0 = r2.r()
            return r0
    }

    private static void b(android.media.AudioTrack r0, float r1) {
            r0.setStereoVolume(r1, r1)
            return
    }

    private void b(java.nio.ByteBuffer r13, long r14) {
            r12 = this;
            boolean r0 = r13.hasRemaining()
            if (r0 != 0) goto L7
            return
        L7:
            java.nio.ByteBuffer r0 = r12.ag
            r1 = 21
            r2 = 1
            r3 = 0
            if (r0 == 0) goto L18
            if (r0 != r13) goto L13
            r0 = r2
            goto L14
        L13:
            r0 = r3
        L14:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            goto L3b
        L18:
            r12.ag = r13
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            if (r0 >= r1) goto L3b
            int r0 = r13.remaining()
            byte[] r4 = r12.ah
            if (r4 == 0) goto L29
            int r4 = r4.length
            if (r4 >= r0) goto L2d
        L29:
            byte[] r4 = new byte[r0]
            r12.ah = r4
        L2d:
            int r4 = r13.position()
            byte[] r5 = r12.ah
            r13.get(r5, r3, r0)
            r13.position(r4)
            r12.ai = r3
        L3b:
            int r0 = r13.remaining()
            int r4 = com.tkay.expressad.exoplayer.k.af.a
            if (r4 >= r1) goto L6b
            com.tkay.expressad.exoplayer.b.j r14 = r12.y
            long r1 = r12.X
            int r14 = r14.b(r1)
            if (r14 <= 0) goto L8e
            int r14 = java.lang.Math.min(r0, r14)
            android.media.AudioTrack r15 = r12.C
            byte[] r1 = r12.ah
            int r2 = r12.ai
            int r3 = r15.write(r1, r2, r14)
            if (r3 <= 0) goto L8e
            int r14 = r12.ai
            int r14 = r14 + r3
            r12.ai = r14
            int r14 = r13.position()
            int r14 = r14 + r3
            r13.position(r14)
            goto L8e
        L6b:
            boolean r1 = r12.an
            if (r1 == 0) goto L88
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r1 = (r14 > r4 ? 1 : (r14 == r4 ? 0 : -1))
            if (r1 == 0) goto L79
            goto L7a
        L79:
            r2 = r3
        L7a:
            com.tkay.expressad.exoplayer.k.a.b(r2)
            android.media.AudioTrack r7 = r12.C
            r6 = r12
            r8 = r13
            r9 = r0
            r10 = r14
            int r3 = r6.a(r7, r8, r9, r10)
            goto L8e
        L88:
            android.media.AudioTrack r14 = r12.C
            int r3 = r14.write(r13, r0, r2)
        L8e:
            long r13 = android.os.SystemClock.elapsedRealtime()
            r12.ao = r13
            if (r3 < 0) goto Lb2
            boolean r13 = r12.D
            if (r13 == 0) goto La0
            long r13 = r12.X
            long r1 = (long) r3
            long r13 = r13 + r1
            r12.X = r13
        La0:
            if (r3 != r0) goto Lb1
            boolean r13 = r12.D
            if (r13 != 0) goto Lae
            long r13 = r12.Y
            int r15 = r12.Z
            long r0 = (long) r15
            long r13 = r13 + r0
            r12.Y = r13
        Lae:
            r13 = 0
            r12.ag = r13
        Lb1:
            return
        Lb2:
            com.tkay.expressad.exoplayer.b.h$d r13 = new com.tkay.expressad.exoplayer.b.h$d
            r13.<init>(r3)
            throw r13
    }

    private long c(long r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.b.l$a r0 = r2.r
            long r0 = r0.b()
            long r0 = r2.e(r0)
            long r3 = r3 + r0
            return r3
    }

    static long c(com.tkay.expressad.exoplayer.b.l r2) {
            long r0 = r2.s()
            return r0
    }

    private long d(long r3) {
            r2 = this;
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = r3 * r0
            int r0 = r2.F
            long r0 = (long) r0
            long r3 = r3 / r0
            return r3
    }

    private static android.media.AudioTrack d(int r9) {
            android.media.AudioTrack r8 = new android.media.AudioTrack
            r1 = 3
            r2 = 4000(0xfa0, float:5.605E-42)
            r3 = 4
            r4 = 2
            r5 = 2
            r6 = 0
            r0 = r8
            r7 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r8
    }

    static com.tkay.expressad.exoplayer.b.h.c d(com.tkay.expressad.exoplayer.b.l r0) {
            com.tkay.expressad.exoplayer.b.h$c r0 = r0.A
            return r0
    }

    private long e(long r3) {
            r2 = this;
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = r3 * r0
            int r0 = r2.G
            long r0 = (long) r0
            long r3 = r3 / r0
            return r3
    }

    static long e(com.tkay.expressad.exoplayer.b.l r2) {
            long r0 = r2.ao
            return r0
    }

    private long f(long r3) {
            r2 = this;
            int r0 = r2.G
            long r0 = (long) r0
            long r3 = r3 * r0
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = r3 / r0
            return r3
    }

    private void k() {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tkay.expressad.exoplayer.b.f[] r1 = r6.v()
            int r2 = r1.length
            r3 = 0
        Lb:
            if (r3 >= r2) goto L1f
            r4 = r1[r3]
            boolean r5 = r4.a()
            if (r5 == 0) goto L19
            r0.add(r4)
            goto L1c
        L19:
            r4.h()
        L1c:
            int r3 = r3 + 1
            goto Lb
        L1f:
            int r1 = r0.size()
            com.tkay.expressad.exoplayer.b.f[] r2 = new com.tkay.expressad.exoplayer.b.f[r1]
            java.lang.Object[] r0 = r0.toArray(r2)
            com.tkay.expressad.exoplayer.b.f[] r0 = (com.tkay.expressad.exoplayer.b.f[]) r0
            r6.ad = r0
            java.nio.ByteBuffer[] r0 = new java.nio.ByteBuffer[r1]
            r6.ae = r0
            r6.l()
            return
    }

    private void l() {
            r3 = this;
            r0 = 0
        L1:
            com.tkay.expressad.exoplayer.b.f[] r1 = r3.ad
            int r2 = r1.length
            if (r0 >= r2) goto L16
            r1 = r1[r0]
            r1.h()
            java.nio.ByteBuffer[] r2 = r3.ae
            java.nio.ByteBuffer r1 = r1.f()
            r2[r0] = r1
            int r0 = r0 + 1
            goto L1
        L16:
            return
    }

    private void m() {
            r10 = this;
            android.os.ConditionVariable r0 = r10.x
            r0.block()
            android.media.AudioTrack r0 = r10.t()
            r10.C = r0
            int r0 = r0.getAudioSessionId()
            boolean r1 = com.tkay.expressad.exoplayer.b.l.b
            if (r1 == 0) goto L3a
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 21
            if (r1 >= r2) goto L3a
            android.media.AudioTrack r1 = r10.B
            if (r1 == 0) goto L26
            int r1 = r1.getAudioSessionId()
            if (r0 == r1) goto L26
            r10.p()
        L26:
            android.media.AudioTrack r1 = r10.B
            if (r1 != 0) goto L3a
            android.media.AudioTrack r9 = new android.media.AudioTrack
            r2 = 3
            r3 = 4000(0xfa0, float:5.605E-42)
            r4 = 4
            r5 = 2
            r6 = 2
            r7 = 0
            r1 = r9
            r8 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            r10.B = r9
        L3a:
            int r1 = r10.am
            if (r1 == r0) goto L47
            r10.am = r0
            com.tkay.expressad.exoplayer.b.h$c r1 = r10.A
            if (r1 == 0) goto L47
            r1.a(r0)
        L47:
            boolean r0 = r10.L
            if (r0 == 0) goto L54
            com.tkay.expressad.exoplayer.b.l$a r0 = r10.r
            com.tkay.expressad.exoplayer.v r1 = r10.O
            com.tkay.expressad.exoplayer.v r0 = r0.a(r1)
            goto L56
        L54:
            com.tkay.expressad.exoplayer.v r0 = com.tkay.expressad.exoplayer.v.a
        L56:
            r10.O = r0
            r10.k()
            com.tkay.expressad.exoplayer.b.j r0 = r10.y
            android.media.AudioTrack r1 = r10.C
            int r2 = r10.I
            int r3 = r10.W
            int r4 = r10.M
            r0.a(r1, r2, r3, r4)
            r10.o()
            return
    }

    private boolean n() {
            r9 = this;
            int r0 = r9.aj
            r1 = -1
            r2 = 1
            r3 = 0
            if (r0 != r1) goto L14
            boolean r0 = r9.K
            if (r0 == 0) goto Ld
            r0 = r3
            goto L10
        Ld:
            com.tkay.expressad.exoplayer.b.f[] r0 = r9.ad
            int r0 = r0.length
        L10:
            r9.aj = r0
        L12:
            r0 = r2
            goto L15
        L14:
            r0 = r3
        L15:
            int r4 = r9.aj
            com.tkay.expressad.exoplayer.b.f[] r5 = r9.ad
            int r6 = r5.length
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r4 >= r6) goto L38
            r4 = r5[r4]
            if (r0 == 0) goto L28
            r4.e()
        L28:
            r9.a(r7)
            boolean r0 = r4.g()
            if (r0 != 0) goto L32
            return r3
        L32:
            int r0 = r9.aj
            int r0 = r0 + r2
            r9.aj = r0
            goto L12
        L38:
            java.nio.ByteBuffer r0 = r9.ag
            if (r0 == 0) goto L44
            r9.b(r0, r7)
            java.nio.ByteBuffer r0 = r9.ag
            if (r0 == 0) goto L44
            return r3
        L44:
            r9.aj = r1
            return r2
    }

    private void o() {
            r2 = this;
            boolean r0 = r2.q()
            if (r0 == 0) goto L1b
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 < r1) goto L14
            android.media.AudioTrack r0 = r2.C
            float r1 = r2.ac
            r0.setVolume(r1)
            return
        L14:
            android.media.AudioTrack r0 = r2.C
            float r1 = r2.ac
            r0.setStereoVolume(r1, r1)
        L1b:
            return
    }

    private void p() {
            r2 = this;
            android.media.AudioTrack r0 = r2.B
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 0
            r2.B = r1
            com.tkay.expressad.exoplayer.b.l$2 r1 = new com.tkay.expressad.exoplayer.b.l$2
            r1.<init>(r2, r0)
            r1.start()
            return
    }

    private boolean q() {
            r1 = this;
            android.media.AudioTrack r0 = r1.C
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    private long r() {
            r4 = this;
            boolean r0 = r4.D
            if (r0 == 0) goto Lb
            long r0 = r4.U
            int r2 = r4.T
            long r2 = (long) r2
            long r0 = r0 / r2
            return r0
        Lb:
            long r0 = r4.V
            return r0
    }

    private long s() {
            r4 = this;
            boolean r0 = r4.D
            if (r0 == 0) goto Lb
            long r0 = r4.X
            int r2 = r4.W
            long r2 = (long) r2
            long r0 = r0 / r2
            return r0
        Lb:
            long r0 = r4.Y
            return r0
    }

    private android.media.AudioTrack t() {
            r10 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 1
            r2 = 21
            if (r0 < r2) goto L57
            boolean r0 = r10.an
            if (r0 == 0) goto L24
            android.media.AudioAttributes$Builder r0 = new android.media.AudioAttributes$Builder
            r0.<init>()
            r2 = 3
            android.media.AudioAttributes$Builder r0 = r0.setContentType(r2)
            r2 = 16
            android.media.AudioAttributes$Builder r0 = r0.setFlags(r2)
            android.media.AudioAttributes$Builder r0 = r0.setUsage(r1)
            android.media.AudioAttributes r0 = r0.build()
            goto L2a
        L24:
            com.tkay.expressad.exoplayer.b.b r0 = r10.J
            android.media.AudioAttributes r0 = r0.a()
        L2a:
            r3 = r0
            android.media.AudioFormat$Builder r0 = new android.media.AudioFormat$Builder
            r0.<init>()
            int r2 = r10.H
            android.media.AudioFormat$Builder r0 = r0.setChannelMask(r2)
            int r2 = r10.I
            android.media.AudioFormat$Builder r0 = r0.setEncoding(r2)
            int r2 = r10.G
            android.media.AudioFormat$Builder r0 = r0.setSampleRate(r2)
            android.media.AudioFormat r4 = r0.build()
            int r0 = r10.am
            if (r0 == 0) goto L4b
            goto L4c
        L4b:
            r0 = 0
        L4c:
            r7 = r0
            android.media.AudioTrack r0 = new android.media.AudioTrack
            int r5 = r10.M
            r6 = 1
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7)
            goto L84
        L57:
            com.tkay.expressad.exoplayer.b.b r0 = r10.J
            int r0 = r0.d
            int r3 = com.tkay.expressad.exoplayer.k.af.f(r0)
            int r0 = r10.am
            if (r0 != 0) goto L73
            android.media.AudioTrack r0 = new android.media.AudioTrack
            int r4 = r10.G
            int r5 = r10.H
            int r6 = r10.I
            int r7 = r10.M
            r8 = 1
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7, r8)
            goto L84
        L73:
            android.media.AudioTrack r0 = new android.media.AudioTrack
            int r4 = r10.G
            int r5 = r10.H
            int r6 = r10.I
            int r7 = r10.M
            r8 = 1
            int r9 = r10.am
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7, r8, r9)
        L84:
            int r2 = r0.getState()
            if (r2 != r1) goto L8b
            return r0
        L8b:
            r0.release()     // Catch: java.lang.Exception -> L8e
        L8e:
            com.tkay.expressad.exoplayer.b.h$b r0 = new com.tkay.expressad.exoplayer.b.h$b
            int r1 = r10.G
            int r3 = r10.H
            int r4 = r10.M
            r0.<init>(r2, r1, r3, r4)
            throw r0
    }

    private android.media.AudioTrack u() {
            r7 = this;
            boolean r0 = r7.an
            if (r0 == 0) goto L1e
            android.media.AudioAttributes$Builder r0 = new android.media.AudioAttributes$Builder
            r0.<init>()
            r1 = 3
            android.media.AudioAttributes$Builder r0 = r0.setContentType(r1)
            r1 = 16
            android.media.AudioAttributes$Builder r0 = r0.setFlags(r1)
            r1 = 1
            android.media.AudioAttributes$Builder r0 = r0.setUsage(r1)
            android.media.AudioAttributes r0 = r0.build()
            goto L24
        L1e:
            com.tkay.expressad.exoplayer.b.b r0 = r7.J
            android.media.AudioAttributes r0 = r0.a()
        L24:
            r2 = r0
            android.media.AudioFormat$Builder r0 = new android.media.AudioFormat$Builder
            r0.<init>()
            int r1 = r7.H
            android.media.AudioFormat$Builder r0 = r0.setChannelMask(r1)
            int r1 = r7.I
            android.media.AudioFormat$Builder r0 = r0.setEncoding(r1)
            int r1 = r7.G
            android.media.AudioFormat$Builder r0 = r0.setSampleRate(r1)
            android.media.AudioFormat r3 = r0.build()
            int r0 = r7.am
            if (r0 == 0) goto L45
            goto L46
        L45:
            r0 = 0
        L46:
            r6 = r0
            android.media.AudioTrack r0 = new android.media.AudioTrack
            int r4 = r7.M
            r5 = 1
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            return r0
    }

    private com.tkay.expressad.exoplayer.b.f[] v() {
            r1 = this;
            boolean r0 = r1.E
            if (r0 == 0) goto L7
            com.tkay.expressad.exoplayer.b.f[] r0 = r1.w
            return r0
        L7:
            com.tkay.expressad.exoplayer.b.f[] r0 = r1.v
            return r0
    }

    @Override
    public final long a(boolean r9) {
            r8 = this;
            boolean r0 = r8.q()
            if (r0 == 0) goto L99
            int r0 = r8.aa
            if (r0 != 0) goto Lc
            goto L99
        Lc:
            com.tkay.expressad.exoplayer.b.j r0 = r8.y
            long r0 = r0.a(r9)
            long r2 = r8.s()
            long r2 = r8.e(r2)
            long r0 = java.lang.Math.min(r0, r2)
            long r2 = r8.ab
            r9 = 0
        L21:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r4 = r8.z
            boolean r4 = r4.isEmpty()
            if (r4 != 0) goto L42
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r4 = r8.z
            java.lang.Object r4 = r4.getFirst()
            com.tkay.expressad.exoplayer.b.l$d r4 = (com.tkay.expressad.exoplayer.b.l.d) r4
            long r4 = com.tkay.expressad.exoplayer.b.l.d.b(r4)
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 < 0) goto L42
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r9 = r8.z
            java.lang.Object r9 = r9.remove()
            com.tkay.expressad.exoplayer.b.l$d r9 = (com.tkay.expressad.exoplayer.b.l.d) r9
            goto L21
        L42:
            if (r9 == 0) goto L59
            com.tkay.expressad.exoplayer.v r4 = com.tkay.expressad.exoplayer.b.l.d.a(r9)
            r8.O = r4
            long r4 = com.tkay.expressad.exoplayer.b.l.d.b(r9)
            r8.Q = r4
            long r4 = com.tkay.expressad.exoplayer.b.l.d.c(r9)
            long r6 = r8.ab
            long r4 = r4 - r6
            r8.P = r4
        L59:
            com.tkay.expressad.exoplayer.v r9 = r8.O
            float r9 = r9.b
            r4 = 1065353216(0x3f800000, float:1.0)
            int r9 = (r9 > r4 ? 1 : (r9 == r4 ? 0 : -1))
            if (r9 != 0) goto L6a
            long r4 = r8.P
            long r0 = r0 + r4
            long r4 = r8.Q
            long r0 = r0 - r4
            goto L8c
        L6a:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r9 = r8.z
            boolean r9 = r9.isEmpty()
            if (r9 == 0) goto L7e
            long r4 = r8.P
            com.tkay.expressad.exoplayer.b.l$a r9 = r8.r
            long r6 = r8.Q
            long r0 = r0 - r6
            long r0 = r9.a(r0)
            goto L8b
        L7e:
            long r4 = r8.P
            long r6 = r8.Q
            long r0 = r0 - r6
            com.tkay.expressad.exoplayer.v r9 = r8.O
            float r9 = r9.b
            long r0 = com.tkay.expressad.exoplayer.k.af.a(r0, r9)
        L8b:
            long r0 = r0 + r4
        L8c:
            com.tkay.expressad.exoplayer.b.l$a r9 = r8.r
            long r4 = r9.b()
            long r4 = r8.e(r4)
            long r0 = r0 + r4
            long r2 = r2 + r0
            return r2
        L99:
            r0 = -9223372036854775808
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.v a(com.tkay.expressad.exoplayer.v r2) {
            r1 = this;
            boolean r0 = r1.q()
            if (r0 == 0) goto Lf
            boolean r0 = r1.L
            if (r0 != 0) goto Lf
            com.tkay.expressad.exoplayer.v r2 = com.tkay.expressad.exoplayer.v.a
            r1.O = r2
            return r2
        Lf:
            com.tkay.expressad.exoplayer.v r0 = r1.N
            if (r0 == 0) goto L14
            goto L2b
        L14:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r0 = r1.z
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L29
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r0 = r1.z
            java.lang.Object r0 = r0.getLast()
            com.tkay.expressad.exoplayer.b.l$d r0 = (com.tkay.expressad.exoplayer.b.l.d) r0
            com.tkay.expressad.exoplayer.v r0 = com.tkay.expressad.exoplayer.b.l.d.a(r0)
            goto L2b
        L29:
            com.tkay.expressad.exoplayer.v r0 = r1.O
        L2b:
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L42
            boolean r0 = r1.q()
            if (r0 == 0) goto L3a
            r1.N = r2
            goto L42
        L3a:
            com.tkay.expressad.exoplayer.b.l$a r0 = r1.r
            com.tkay.expressad.exoplayer.v r2 = r0.a(r2)
            r1.O = r2
        L42:
            com.tkay.expressad.exoplayer.v r2 = r1.O
            return r2
    }

    @Override
    public final void a() {
            r1 = this;
            r0 = 1
            r1.al = r0
            boolean r0 = r1.q()
            if (r0 == 0) goto L13
            com.tkay.expressad.exoplayer.b.j r0 = r1.y
            r0.a()
            android.media.AudioTrack r0 = r1.C
            r0.play()
        L13:
            return
    }

    @Override
    public final void a(float r2) {
            r1 = this;
            float r0 = r1.ac
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lb
            r1.ac = r2
            r1.o()
        Lb:
            return
    }

    @Override
    public final void a(int r10, int r11, int r12, int[] r13, int r14, int r15) {
            r9 = this;
            r9.F = r12
            boolean r0 = com.tkay.expressad.exoplayer.k.af.b(r10)
            r9.D = r0
            boolean r0 = r9.s
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L1e
            r0 = 1073741824(0x40000000, float:2.0)
            boolean r0 = r9.a(r0)
            if (r0 == 0) goto L1e
            boolean r0 = com.tkay.expressad.exoplayer.k.af.c(r10)
            if (r0 == 0) goto L1e
            r0 = r1
            goto L1f
        L1e:
            r0 = r2
        L1f:
            r9.E = r0
            boolean r0 = r9.D
            if (r0 == 0) goto L2b
            int r0 = com.tkay.expressad.exoplayer.k.af.b(r10, r11)
            r9.T = r0
        L2b:
            boolean r0 = r9.D
            r3 = 4
            if (r0 == 0) goto L34
            if (r10 == r3) goto L34
            r0 = r1
            goto L35
        L34:
            r0 = r2
        L35:
            if (r0 == 0) goto L3d
            boolean r4 = r9.E
            if (r4 != 0) goto L3d
            r4 = r1
            goto L3e
        L3d:
            r4 = r2
        L3e:
            r9.L = r4
            if (r0 == 0) goto L7b
            com.tkay.expressad.exoplayer.b.u r4 = r9.u
            r4.a(r14, r15)
            com.tkay.expressad.exoplayer.b.k r14 = r9.t
            r14.a(r13)
            com.tkay.expressad.exoplayer.b.f[] r13 = r9.v()
            int r14 = r13.length
            r15 = r2
            r4 = r15
        L53:
            if (r15 >= r14) goto L7c
            r5 = r13[r15]
            boolean r6 = r5.a(r12, r11, r10)     // Catch: com.tkay.expressad.exoplayer.b.f.a -> L74
            r4 = r4 | r6
            boolean r6 = r5.a()
            if (r6 == 0) goto L71
            int r11 = r5.b()
            int r10 = r5.d()
            int r12 = r5.c()
            r8 = r12
            r12 = r10
            r10 = r8
        L71:
            int r15 = r15 + 1
            goto L53
        L74:
            r10 = move-exception
            com.tkay.expressad.exoplayer.b.h$a r11 = new com.tkay.expressad.exoplayer.b.h$a
            r11.<init>(r10)
            throw r11
        L7b:
            r4 = r2
        L7c:
            r13 = 252(0xfc, float:3.53E-43)
            r14 = 12
            switch(r11) {
                case 1: goto La5;
                case 2: goto La4;
                case 3: goto La1;
                case 4: goto L9e;
                case 5: goto L9b;
                case 6: goto L99;
                case 7: goto L96;
                case 8: goto L93;
                default: goto L83;
            }
        L83:
            com.tkay.expressad.exoplayer.b.h$a r10 = new com.tkay.expressad.exoplayer.b.h$a
            java.lang.String r11 = java.lang.String.valueOf(r11)
            java.lang.String r12 = "Unsupported channel count: "
            java.lang.String r11 = r12.concat(r11)
            r10.<init>(r11)
            throw r10
        L93:
            int r3 = com.tkay.expressad.exoplayer.b.C
            goto La5
        L96:
            r3 = 1276(0x4fc, float:1.788E-42)
            goto La5
        L99:
            r3 = r13
            goto La5
        L9b:
            r3 = 220(0xdc, float:3.08E-43)
            goto La5
        L9e:
            r3 = 204(0xcc, float:2.86E-43)
            goto La5
        La1:
            r3 = 28
            goto La5
        La4:
            r3 = r14
        La5:
            int r15 = com.tkay.expressad.exoplayer.k.af.a
            r5 = 23
            r6 = 7
            r7 = 5
            if (r15 > r5) goto Lcc
            java.lang.String r15 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "foster"
            boolean r15 = r5.equals(r15)
            if (r15 == 0) goto Lcc
            java.lang.String r15 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r5 = "NVIDIA"
            boolean r15 = r5.equals(r15)
            if (r15 == 0) goto Lcc
            r15 = 3
            if (r11 == r15) goto Lcd
            if (r11 == r7) goto Lcd
            if (r11 == r6) goto Lc9
            goto Lcc
        Lc9:
            int r13 = com.tkay.expressad.exoplayer.b.C
            goto Lcd
        Lcc:
            r13 = r3
        Lcd:
            int r15 = com.tkay.expressad.exoplayer.k.af.a
            r3 = 25
            if (r15 > r3) goto Le4
            java.lang.String r15 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r3 = "fugu"
            boolean r15 = r3.equals(r15)
            if (r15 == 0) goto Le4
            boolean r15 = r9.D
            if (r15 != 0) goto Le4
            if (r11 != r1) goto Le4
            goto Le5
        Le4:
            r14 = r13
        Le5:
            if (r4 != 0) goto Lfa
            boolean r13 = r9.q()
            if (r13 == 0) goto Lfa
            int r13 = r9.I
            if (r13 != r10) goto Lfa
            int r13 = r9.G
            if (r13 != r12) goto Lfa
            int r13 = r9.H
            if (r13 != r14) goto Lfa
            return
        Lfa:
            r9.i()
            r9.K = r0
            r9.G = r12
            r9.H = r14
            r9.I = r10
            boolean r13 = r9.D
            if (r13 == 0) goto L10e
            int r10 = com.tkay.expressad.exoplayer.k.af.b(r10, r11)
            goto L10f
        L10e:
            r10 = -1
        L10f:
            r9.W = r10
            boolean r10 = r9.D
            if (r10 == 0) goto L148
            int r10 = r9.I
            int r10 = android.media.AudioTrack.getMinBufferSize(r12, r14, r10)
            r11 = -2
            if (r10 == r11) goto L11f
            goto L120
        L11f:
            r1 = r2
        L120:
            com.tkay.expressad.exoplayer.k.a.b(r1)
            int r11 = r10 * 4
            r12 = 250000(0x3d090, double:1.235164E-318)
            long r12 = r9.f(r12)
            int r12 = (int) r12
            int r13 = r9.W
            int r12 = r12 * r13
            long r13 = (long) r10
            r0 = 750000(0xb71b0, double:3.70549E-318)
            long r0 = r9.f(r0)
            int r10 = r9.W
            long r2 = (long) r10
            long r0 = r0 * r2
            long r13 = java.lang.Math.max(r13, r0)
            int r10 = (int) r13
            int r10 = com.tkay.expressad.exoplayer.k.af.a(r11, r12, r10)
            r9.M = r10
            return
        L148:
            int r10 = r9.I
            if (r10 == r7) goto L15e
            r11 = 6
            if (r10 != r11) goto L150
            goto L15e
        L150:
            if (r10 != r6) goto L158
            r10 = 49152(0xc000, float:6.8877E-41)
            r9.M = r10
            return
        L158:
            r10 = 294912(0x48000, float:4.1326E-40)
            r9.M = r10
            return
        L15e:
            r10 = 20480(0x5000, float:2.8699E-41)
            r9.M = r10
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.b.b r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.b.b r0 = r1.J
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L9
            return
        L9:
            r1.J = r2
            boolean r2 = r1.an
            if (r2 == 0) goto L10
            return
        L10:
            r1.i()
            r2 = 0
            r1.am = r2
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.b.h.c r1) {
            r0 = this;
            r0.A = r1
            return
    }

    @Override
    public final boolean a(int r4) {
            r3 = this;
            boolean r0 = com.tkay.expressad.exoplayer.k.af.b(r4)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L14
            r0 = 4
            if (r4 != r0) goto L13
            int r4 = com.tkay.expressad.exoplayer.k.af.a
            r0 = 21
            if (r4 < r0) goto L12
            goto L13
        L12:
            return r2
        L13:
            return r1
        L14:
            com.tkay.expressad.exoplayer.b.c r0 = r3.q
            if (r0 == 0) goto L1f
            boolean r4 = r0.a(r4)
            if (r4 == 0) goto L1f
            return r1
        L1f:
            return r2
    }

    @Override
    public final boolean a(java.nio.ByteBuffer r20, long r21) {
            r19 = this;
            r0 = r19
            r1 = r20
            r2 = r21
            java.nio.ByteBuffer r4 = r0.af
            r5 = 0
            r6 = 1
            if (r4 == 0) goto L11
            if (r1 != r4) goto Lf
            goto L11
        Lf:
            r4 = r5
            goto L12
        L11:
            r4 = r6
        L12:
            com.tkay.expressad.exoplayer.k.a.a(r4)
            boolean r4 = r19.q()
            if (r4 != 0) goto L8d
            android.os.ConditionVariable r4 = r0.x
            r4.block()
            android.media.AudioTrack r4 = r19.t()
            r0.C = r4
            int r4 = r4.getAudioSessionId()
            boolean r7 = com.tkay.expressad.exoplayer.b.l.b
            if (r7 == 0) goto L55
            int r7 = com.tkay.expressad.exoplayer.k.af.a
            r8 = 21
            if (r7 >= r8) goto L55
            android.media.AudioTrack r7 = r0.B
            if (r7 == 0) goto L41
            int r7 = r7.getAudioSessionId()
            if (r4 == r7) goto L41
            r19.p()
        L41:
            android.media.AudioTrack r7 = r0.B
            if (r7 != 0) goto L55
            android.media.AudioTrack r15 = new android.media.AudioTrack
            r8 = 3
            r9 = 4000(0xfa0, float:5.605E-42)
            r10 = 4
            r11 = 2
            r12 = 2
            r13 = 0
            r7 = r15
            r14 = r4
            r7.<init>(r8, r9, r10, r11, r12, r13, r14)
            r0.B = r15
        L55:
            int r7 = r0.am
            if (r7 == r4) goto L62
            r0.am = r4
            com.tkay.expressad.exoplayer.b.h$c r7 = r0.A
            if (r7 == 0) goto L62
            r7.a(r4)
        L62:
            boolean r4 = r0.L
            if (r4 == 0) goto L6f
            com.tkay.expressad.exoplayer.b.l$a r4 = r0.r
            com.tkay.expressad.exoplayer.v r7 = r0.O
            com.tkay.expressad.exoplayer.v r4 = r4.a(r7)
            goto L71
        L6f:
            com.tkay.expressad.exoplayer.v r4 = com.tkay.expressad.exoplayer.v.a
        L71:
            r0.O = r4
            r19.k()
            com.tkay.expressad.exoplayer.b.j r4 = r0.y
            android.media.AudioTrack r7 = r0.C
            int r8 = r0.I
            int r9 = r0.W
            int r10 = r0.M
            r4.a(r7, r8, r9, r10)
            r19.o()
            boolean r4 = r0.al
            if (r4 == 0) goto L8d
            r19.a()
        L8d:
            com.tkay.expressad.exoplayer.b.j r4 = r0.y
            long r7 = r19.s()
            boolean r4 = r4.a(r7)
            if (r4 != 0) goto L9a
            return r5
        L9a:
            java.nio.ByteBuffer r4 = r0.af
            java.lang.String r7 = "AudioTrack"
            r8 = 0
            if (r4 != 0) goto L1a8
            boolean r4 = r20.hasRemaining()
            if (r4 != 0) goto La8
            return r6
        La8:
            boolean r4 = r0.D
            if (r4 != 0) goto Lf7
            int r4 = r0.Z
            if (r4 != 0) goto Lf7
            int r4 = r0.I
            r9 = 7
            if (r4 == r9) goto Lee
            r9 = 8
            if (r4 != r9) goto Lba
            goto Lee
        Lba:
            r9 = 5
            if (r4 != r9) goto Lc2
            int r4 = com.tkay.expressad.exoplayer.b.a.a()
            goto Lf2
        Lc2:
            r9 = 6
            if (r4 != r9) goto Lca
            int r4 = com.tkay.expressad.exoplayer.b.a.a(r20)
            goto Lf2
        Lca:
            r9 = 14
            if (r4 != r9) goto Lde
            int r4 = com.tkay.expressad.exoplayer.b.a.b(r20)
            r9 = -1
            if (r4 != r9) goto Ld7
            r4 = r5
            goto Lf2
        Ld7:
            int r4 = com.tkay.expressad.exoplayer.b.a.a(r1, r4)
            int r4 = r4 * 16
            goto Lf2
        Lde:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = java.lang.String.valueOf(r4)
            java.lang.String r3 = "Unexpected audio encoding: "
            java.lang.String r2 = r3.concat(r2)
            r1.<init>(r2)
            throw r1
        Lee:
            int r4 = com.tkay.expressad.exoplayer.b.m.a(r20)
        Lf2:
            r0.Z = r4
            if (r4 != 0) goto Lf7
            return r6
        Lf7:
            com.tkay.expressad.exoplayer.v r4 = r0.N
            r9 = 0
            if (r4 == 0) goto L12a
            boolean r4 = r19.n()
            if (r4 != 0) goto L104
            return r5
        L104:
            com.tkay.expressad.exoplayer.v r4 = r0.N
            r0.N = r8
            com.tkay.expressad.exoplayer.b.l$a r11 = r0.r
            com.tkay.expressad.exoplayer.v r13 = r11.a(r4)
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r4 = r0.z
            com.tkay.expressad.exoplayer.b.l$d r11 = new com.tkay.expressad.exoplayer.b.l$d
            long r14 = java.lang.Math.max(r9, r2)
            long r5 = r19.s()
            long r16 = r0.e(r5)
            r18 = 0
            r12 = r11
            r12.<init>(r13, r14, r16, r18)
            r4.add(r11)
            r19.k()
        L12a:
            int r4 = r0.aa
            if (r4 != 0) goto L138
            long r4 = java.lang.Math.max(r9, r2)
            r0.ab = r4
            r4 = 1
            r0.aa = r4
            goto L18f
        L138:
            long r4 = r0.ab
            long r9 = r19.r()
            r11 = 1000000(0xf4240, double:4.940656E-318)
            long r9 = r9 * r11
            int r6 = r0.F
            long r11 = (long) r6
            long r9 = r9 / r11
            long r4 = r4 + r9
            int r6 = r0.aa
            r9 = 2
            r10 = 1
            if (r6 != r10) goto L17a
            long r10 = r4 - r2
            long r10 = java.lang.Math.abs(r10)
            r12 = 200000(0x30d40, double:9.8813E-319)
            int r6 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r6 <= 0) goto L17a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r10 = "Discontinuity detected [expected "
            r6.<init>(r10)
            r6.append(r4)
            java.lang.String r10 = ", got "
            r6.append(r10)
            r6.append(r2)
            java.lang.String r10 = "]"
            r6.append(r10)
            java.lang.String r6 = r6.toString()
            android.util.Log.e(r7, r6)
            r0.aa = r9
        L17a:
            int r6 = r0.aa
            if (r6 != r9) goto L18f
            long r9 = r0.ab
            long r4 = r2 - r4
            long r9 = r9 + r4
            r0.ab = r9
            r4 = 1
            r0.aa = r4
            com.tkay.expressad.exoplayer.b.h$c r4 = r0.A
            if (r4 == 0) goto L18f
            r4.a()
        L18f:
            boolean r4 = r0.D
            if (r4 == 0) goto L19e
            long r4 = r0.U
            int r6 = r20.remaining()
            long r9 = (long) r6
            long r4 = r4 + r9
            r0.U = r4
            goto L1a6
        L19e:
            long r4 = r0.V
            int r6 = r0.Z
            long r9 = (long) r6
            long r4 = r4 + r9
            r0.V = r4
        L1a6:
            r0.af = r1
        L1a8:
            boolean r1 = r0.K
            if (r1 == 0) goto L1b0
            r0.a(r2)
            goto L1b5
        L1b0:
            java.nio.ByteBuffer r1 = r0.af
            r0.b(r1, r2)
        L1b5:
            java.nio.ByteBuffer r1 = r0.af
            boolean r1 = r1.hasRemaining()
            if (r1 != 0) goto L1c1
            r0.af = r8
            r1 = 1
            return r1
        L1c1:
            r1 = 1
            com.tkay.expressad.exoplayer.b.j r2 = r0.y
            long r3 = r19.s()
            boolean r2 = r2.c(r3)
            if (r2 == 0) goto L1d7
            java.lang.String r2 = "Resetting stalled audio track"
            android.util.Log.w(r7, r2)
            r19.i()
            return r1
        L1d7:
            r1 = 0
            return r1
    }

    @Override
    public final void b() {
            r2 = this;
            int r0 = r2.aa
            r1 = 1
            if (r0 != r1) goto L8
            r0 = 2
            r2.aa = r0
        L8:
            return
    }

    @Override
    public final void b(int r2) {
            r1 = this;
            int r0 = r1.am
            if (r0 == r2) goto L9
            r1.am = r2
            r1.i()
        L9:
            return
    }

    @Override
    public final void c() {
            r3 = this;
            boolean r0 = r3.ak
            if (r0 != 0) goto L25
            boolean r0 = r3.q()
            if (r0 != 0) goto Lb
            goto L25
        Lb:
            boolean r0 = r3.n()
            if (r0 == 0) goto L25
            com.tkay.expressad.exoplayer.b.j r0 = r3.y
            long r1 = r3.s()
            r0.d(r1)
            android.media.AudioTrack r0 = r3.C
            r0.stop()
            r0 = 0
            r3.S = r0
            r0 = 1
            r3.ak = r0
        L25:
            return
    }

    @Override
    public final void c(int r4) {
            r3 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 1
            r2 = 21
            if (r0 < r2) goto L9
            r0 = r1
            goto La
        L9:
            r0 = 0
        La:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            boolean r0 = r3.an
            if (r0 == 0) goto L15
            int r0 = r3.am
            if (r0 == r4) goto L1c
        L15:
            r3.an = r1
            r3.am = r4
            r3.i()
        L1c:
            return
    }

    @Override
    public final boolean d() {
            r1 = this;
            boolean r0 = r1.q()
            if (r0 == 0) goto L13
            boolean r0 = r1.ak
            if (r0 == 0) goto L11
            boolean r0 = r1.e()
            if (r0 != 0) goto L11
            goto L13
        L11:
            r0 = 0
            return r0
        L13:
            r0 = 1
            return r0
    }

    @Override
    public final boolean e() {
            r3 = this;
            boolean r0 = r3.q()
            if (r0 == 0) goto L14
            com.tkay.expressad.exoplayer.b.j r0 = r3.y
            long r1 = r3.s()
            boolean r0 = r0.e(r1)
            if (r0 == 0) goto L14
            r0 = 1
            return r0
        L14:
            r0 = 0
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.v f() {
            r1 = this;
            com.tkay.expressad.exoplayer.v r0 = r1.O
            return r0
    }

    @Override
    public final void g() {
            r1 = this;
            boolean r0 = r1.an
            if (r0 == 0) goto Lc
            r0 = 0
            r1.an = r0
            r1.am = r0
            r1.i()
        Lc:
            return
    }

    @Override
    public final void h() {
            r1 = this;
            r0 = 0
            r1.al = r0
            boolean r0 = r1.q()
            if (r0 == 0) goto L16
            com.tkay.expressad.exoplayer.b.j r0 = r1.y
            boolean r0 = r0.c()
            if (r0 == 0) goto L16
            android.media.AudioTrack r0 = r1.C
            r0.pause()
        L16:
            return
    }

    @Override
    public final void i() {
            r5 = this;
            boolean r0 = r5.q()
            if (r0 == 0) goto L71
            r0 = 0
            r5.U = r0
            r5.V = r0
            r5.X = r0
            r5.Y = r0
            r2 = 0
            r5.Z = r2
            com.tkay.expressad.exoplayer.v r3 = r5.N
            r4 = 0
            if (r3 == 0) goto L1d
            r5.O = r3
            r5.N = r4
            goto L33
        L1d:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r3 = r5.z
            boolean r3 = r3.isEmpty()
            if (r3 != 0) goto L33
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r3 = r5.z
            java.lang.Object r3 = r3.getLast()
            com.tkay.expressad.exoplayer.b.l$d r3 = (com.tkay.expressad.exoplayer.b.l.d) r3
            com.tkay.expressad.exoplayer.v r3 = com.tkay.expressad.exoplayer.b.l.d.a(r3)
            r5.O = r3
        L33:
            java.util.ArrayDeque<com.tkay.expressad.exoplayer.b.l$d> r3 = r5.z
            r3.clear()
            r5.P = r0
            r5.Q = r0
            r5.af = r4
            r5.ag = r4
            r5.l()
            r5.ak = r2
            r0 = -1
            r5.aj = r0
            r5.R = r4
            r5.S = r2
            r5.aa = r2
            com.tkay.expressad.exoplayer.b.j r0 = r5.y
            boolean r0 = r0.b()
            if (r0 == 0) goto L5b
            android.media.AudioTrack r0 = r5.C
            r0.pause()
        L5b:
            android.media.AudioTrack r0 = r5.C
            r5.C = r4
            com.tkay.expressad.exoplayer.b.j r1 = r5.y
            r1.d()
            android.os.ConditionVariable r1 = r5.x
            r1.close()
            com.tkay.expressad.exoplayer.b.l$1 r1 = new com.tkay.expressad.exoplayer.b.l$1
            r1.<init>(r5, r0)
            r1.start()
        L71:
            return
    }

    @Override
    public final void j() {
            r5 = this;
            r5.i()
            r5.p()
            com.tkay.expressad.exoplayer.b.f[] r0 = r5.v
            int r1 = r0.length
            r2 = 0
            r3 = r2
        Lb:
            if (r3 >= r1) goto L15
            r4 = r0[r3]
            r4.i()
            int r3 = r3 + 1
            goto Lb
        L15:
            com.tkay.expressad.exoplayer.b.f[] r0 = r5.w
            int r1 = r0.length
            r3 = r2
        L19:
            if (r3 >= r1) goto L23
            r4 = r0[r3]
            r4.i()
            int r3 = r3 + 1
            goto L19
        L23:
            r5.am = r2
            r5.al = r2
            return
    }
}
