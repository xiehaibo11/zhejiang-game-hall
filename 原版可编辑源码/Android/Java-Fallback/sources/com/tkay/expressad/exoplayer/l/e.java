package com.tkay.expressad.exoplayer.l;

public class e extends com.tkay.expressad.exoplayer.f.b {
    private static boolean A = false;
    private static final java.lang.String s = "MediaCodecVideoRenderer";
    private static final java.lang.String t = "crop-left";
    private static final java.lang.String u = "crop-right";
    private static final java.lang.String v = "crop-bottom";
    private static final java.lang.String w = "crop-top";
    private static final int[] x = null;
    private static final int y = 10;
    private static boolean z;
    private final android.content.Context B;
    private final com.tkay.expressad.exoplayer.l.f C;
    private final com.tkay.expressad.exoplayer.l.h.a D;
    private final long E;
    private final int F;
    private final boolean G;
    private final long[] H;
    private final long[] I;
    private com.tkay.expressad.exoplayer.l.e.a J;
    private boolean K;
    private android.view.Surface L;
    private android.view.Surface M;
    private int N;
    private boolean O;
    private long P;
    private long Q;
    private long R;
    private int S;
    private int T;
    private int U;
    private long V;
    private int W;
    private float X;
    private int Y;
    private int Z;
    private int aa;
    private float ab;
    private int ac;
    private int ad;
    private int ae;
    private float af;
    private boolean ag;
    private int ah;
    private long ai;
    private long aj;
    private int ak;
    com.tkay.expressad.exoplayer.l.e.b r;

    static class 1 {
    }

    protected static final class a {
        public final int a;
        public final int b;
        public final int c;

        public a(int r1, int r2, int r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }
    }

    private final class b implements android.media.MediaCodec.OnFrameRenderedListener {
        final com.tkay.expressad.exoplayer.l.e a;

        private b(com.tkay.expressad.exoplayer.l.e r1, android.media.MediaCodec r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                android.os.Handler r1 = new android.os.Handler
                r1.<init>()
                r2.setOnFrameRenderedListener(r0, r1)
                return
        }

        b(com.tkay.expressad.exoplayer.l.e r1, android.media.MediaCodec r2, byte r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        @Override
        public final void onFrameRendered(android.media.MediaCodec r1, long r2, long r4) {
                r0 = this;
                com.tkay.expressad.exoplayer.l.e r1 = r0.a
                com.tkay.expressad.exoplayer.l.e$b r1 = r1.r
                if (r0 == r1) goto L7
                return
            L7:
                com.tkay.expressad.exoplayer.l.e r1 = r0.a
                r1.C()
                return
        }
    }

    static {
            r0 = 9
            int[] r0 = new int[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [1920, 1600, 1440, 1280, 960, 854, 640, 540, 480} // fill-array
            com.tkay.expressad.exoplayer.l.e.x = r0
            return
    }

    private e(android.content.Context r2, com.tkay.expressad.exoplayer.f.c r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    private e(android.content.Context r1, com.tkay.expressad.exoplayer.f.c r2, byte r3) {
            r0 = this;
            r3 = 0
            r0.<init>(r1, r2, r3, r3)
            return
    }

    public e(android.content.Context r3, com.tkay.expressad.exoplayer.f.c r4, long r5, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r7, android.os.Handler r8, com.tkay.expressad.exoplayer.l.h r9, int r10) {
            r2 = this;
            r0 = 0
            r1 = 2
            r2.<init>(r1, r4, r7, r0)
            r2.E = r5
            r2.F = r10
            android.content.Context r3 = r3.getApplicationContext()
            r2.B = r3
            com.tkay.expressad.exoplayer.l.f r4 = new com.tkay.expressad.exoplayer.l.f
            r4.<init>(r3)
            r2.C = r4
            com.tkay.expressad.exoplayer.l.h$a r3 = new com.tkay.expressad.exoplayer.l.h$a
            r3.<init>(r8, r9)
            r2.D = r3
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            r4 = 1
            r5 = 22
            if (r3 > r5) goto L39
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r5 = "foster"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L39
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r5 = "NVIDIA"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L39
            r0 = r4
        L39:
            r2.G = r0
            r3 = 10
            long[] r5 = new long[r3]
            r2.H = r5
            long[] r3 = new long[r3]
            r2.I = r3
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.aj = r5
            r2.ai = r5
            r2.Q = r5
            r3 = -1
            r2.Y = r3
            r2.Z = r3
            r3 = -1082130432(0xffffffffbf800000, float:-1.0)
            r2.ab = r3
            r2.X = r3
            r2.N = r4
            r2.G()
            return
    }

    private e(android.content.Context r10, com.tkay.expressad.exoplayer.f.c r11, android.os.Handler r12, com.tkay.expressad.exoplayer.l.h r13) {
            r9 = this;
            r3 = 0
            r5 = 0
            r8 = -1
            r0 = r9
            r1 = r10
            r2 = r11
            r6 = r12
            r7 = r13
            r0.<init>(r1, r2, r3, r5, r6, r7, r8)
            return
    }

    private void D() {
            r4 = this;
            long r0 = r4.E
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L10
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r4.E
            long r0 = r0 + r2
            goto L15
        L10:
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L15:
            r4.Q = r0
            return
    }

    private void E() {
            r3 = this;
            r0 = 0
            r3.O = r0
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 23
            if (r1 < r2) goto L1a
            boolean r1 = r3.ag
            if (r1 == 0) goto L1a
            android.media.MediaCodec r1 = r3.y()
            if (r1 == 0) goto L1a
            com.tkay.expressad.exoplayer.l.e$b r2 = new com.tkay.expressad.exoplayer.l.e$b
            r2.<init>(r3, r1, r0)
            r3.r = r2
        L1a:
            return
    }

    private void F() {
            r2 = this;
            boolean r0 = r2.O
            if (r0 == 0) goto Lb
            com.tkay.expressad.exoplayer.l.h$a r0 = r2.D
            android.view.Surface r1 = r2.L
            r0.a(r1)
        Lb:
            return
    }

    private void G() {
            r2 = this;
            r0 = -1
            r2.ac = r0
            r2.ad = r0
            r1 = -1082130432(0xffffffffbf800000, float:-1.0)
            r2.af = r1
            r2.ae = r0
            return
    }

    private void H() {
            r5 = this;
            int r0 = r5.Y
            r1 = -1
            if (r0 != r1) goto L9
            int r0 = r5.Z
            if (r0 == r1) goto L40
        L9:
            int r0 = r5.ac
            int r1 = r5.Y
            if (r0 != r1) goto L23
            int r0 = r5.ad
            int r1 = r5.Z
            if (r0 != r1) goto L23
            int r0 = r5.ae
            int r1 = r5.aa
            if (r0 != r1) goto L23
            float r0 = r5.af
            float r1 = r5.ab
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 == 0) goto L40
        L23:
            com.tkay.expressad.exoplayer.l.h$a r0 = r5.D
            int r1 = r5.Y
            int r2 = r5.Z
            int r3 = r5.aa
            float r4 = r5.ab
            r0.a(r1, r2, r3, r4)
            int r0 = r5.Y
            r5.ac = r0
            int r0 = r5.Z
            r5.ad = r0
            int r0 = r5.aa
            r5.ae = r0
            float r0 = r5.ab
            r5.af = r0
        L40:
            return
    }

    private void I() {
            r5 = this;
            int r0 = r5.ac
            r1 = -1
            if (r0 != r1) goto L9
            int r0 = r5.ad
            if (r0 == r1) goto L16
        L9:
            com.tkay.expressad.exoplayer.l.h$a r0 = r5.D
            int r1 = r5.ac
            int r2 = r5.ad
            int r3 = r5.ae
            float r4 = r5.af
            r0.a(r1, r2, r3, r4)
        L16:
            return
    }

    private void J() {
            r6 = this;
            int r0 = r6.S
            if (r0 <= 0) goto L18
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r6.R
            long r2 = r0 - r2
            com.tkay.expressad.exoplayer.l.h$a r4 = r6.D
            int r5 = r6.S
            r4.a(r5, r2)
            r2 = 0
            r6.S = r2
            r6.R = r0
        L18:
            return
    }

    private static boolean K() {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 22
            if (r0 > r1) goto L1c
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b
            java.lang.String r1 = "foster"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L1c
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r1 = "NVIDIA"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L1c
            r0 = 1
            return r0
        L1c:
            r0 = 0
            return r0
    }

    private static int a(com.tkay.expressad.exoplayer.f.a r7, java.lang.String r8, int r9, int r10) {
            r0 = -1
            if (r9 == r0) goto La3
            if (r10 != r0) goto L7
            goto La3
        L7:
            int r1 = r8.hashCode()
            r2 = 5
            r3 = 1
            r4 = 4
            r5 = 3
            r6 = 2
            switch(r1) {
                case -1664118616: goto L46;
                case -1662541442: goto L3c;
                case 1187890754: goto L32;
                case 1331836730: goto L28;
                case 1599127256: goto L1e;
                case 1599127257: goto L14;
                default: goto L13;
            }
        L13:
            goto L50
        L14:
            java.lang.String r1 = "video/x-vnd.on2.vp9"
            boolean r8 = r8.equals(r1)
            if (r8 == 0) goto L50
            r8 = r2
            goto L51
        L1e:
            java.lang.String r1 = "video/x-vnd.on2.vp8"
            boolean r8 = r8.equals(r1)
            if (r8 == 0) goto L50
            r8 = r5
            goto L51
        L28:
            java.lang.String r1 = "video/avc"
            boolean r8 = r8.equals(r1)
            if (r8 == 0) goto L50
            r8 = r6
            goto L51
        L32:
            java.lang.String r1 = "video/mp4v-es"
            boolean r8 = r8.equals(r1)
            if (r8 == 0) goto L50
            r8 = r3
            goto L51
        L3c:
            java.lang.String r1 = "video/hevc"
            boolean r8 = r8.equals(r1)
            if (r8 == 0) goto L50
            r8 = r4
            goto L51
        L46:
            java.lang.String r1 = "video/3gpp"
            boolean r8 = r8.equals(r1)
            if (r8 == 0) goto L50
            r8 = 0
            goto L51
        L50:
            r8 = r0
        L51:
            if (r8 == 0) goto L9d
            if (r8 == r3) goto L9d
            if (r8 == r6) goto L60
            if (r8 == r5) goto L9d
            if (r8 == r4) goto L5e
            if (r8 == r2) goto L5e
            return r0
        L5e:
            int r9 = r9 * r10
            goto L9f
        L60:
            java.lang.String r8 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "BRAVIA 4K 2015"
            boolean r8 = r1.equals(r8)
            if (r8 != 0) goto L9c
            java.lang.String r8 = com.tkay.expressad.exoplayer.k.af.c
            java.lang.String r1 = "Amazon"
            boolean r8 = r1.equals(r8)
            if (r8 == 0) goto L8d
            java.lang.String r8 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "KFSOWI"
            boolean r8 = r1.equals(r8)
            if (r8 != 0) goto L9c
            java.lang.String r8 = com.tkay.expressad.exoplayer.k.af.d
            java.lang.String r1 = "AFTS"
            boolean r8 = r1.equals(r8)
            if (r8 == 0) goto L8d
            boolean r7 = r7.h
            if (r7 == 0) goto L8d
            goto L9c
        L8d:
            r7 = 16
            int r8 = com.tkay.expressad.exoplayer.k.af.a(r9, r7)
            int r9 = com.tkay.expressad.exoplayer.k.af.a(r10, r7)
            int r8 = r8 * r9
            int r8 = r8 * r7
            int r9 = r8 * 16
            goto L9e
        L9c:
            return r0
        L9d:
            int r9 = r9 * r10
        L9e:
            r4 = r6
        L9f:
            int r9 = r9 * r5
            int r4 = r4 * r6
            int r9 = r9 / r4
            return r9
        La3:
            return r0
    }

    private static android.graphics.Point a(com.tkay.expressad.exoplayer.f.a r13, com.tkay.expressad.exoplayer.m r14) {
            int r0 = r14.n
            int r1 = r14.m
            r2 = 0
            if (r0 <= r1) goto L9
            r0 = 1
            goto La
        L9:
            r0 = r2
        La:
            if (r0 == 0) goto Lf
            int r1 = r14.n
            goto L11
        Lf:
            int r1 = r14.m
        L11:
            if (r0 == 0) goto L16
            int r3 = r14.m
            goto L18
        L16:
            int r3 = r14.n
        L18:
            float r4 = (float) r3
            float r5 = (float) r1
            float r4 = r4 / r5
            int[] r5 = com.tkay.expressad.exoplayer.l.e.x
            int r6 = r5.length
        L1e:
            r7 = 0
            if (r2 >= r6) goto L72
            r8 = r5[r2]
            float r9 = (float) r8
            float r9 = r9 * r4
            int r9 = (int) r9
            if (r8 <= r1) goto L72
            if (r9 > r3) goto L2b
            goto L72
        L2b:
            int r7 = com.tkay.expressad.exoplayer.k.af.a
            r10 = 21
            if (r7 < r10) goto L4c
            if (r0 == 0) goto L35
            r7 = r9
            goto L36
        L35:
            r7 = r8
        L36:
            if (r0 == 0) goto L39
            goto L3a
        L39:
            r8 = r9
        L3a:
            android.graphics.Point r7 = r13.a(r7, r8)
            float r8 = r14.o
            int r9 = r7.x
            int r10 = r7.y
            double r11 = (double) r8
            boolean r8 = r13.a(r9, r10, r11)
            if (r8 == 0) goto L6f
            return r7
        L4c:
            r7 = 16
            int r8 = com.tkay.expressad.exoplayer.k.af.a(r8, r7)
            int r8 = r8 * r7
            int r9 = com.tkay.expressad.exoplayer.k.af.a(r9, r7)
            int r9 = r9 * r7
            int r7 = r8 * r9
            int r10 = com.tkay.expressad.exoplayer.f.d.b()
            if (r7 > r10) goto L6f
            android.graphics.Point r13 = new android.graphics.Point
            if (r0 == 0) goto L66
            r14 = r9
            goto L67
        L66:
            r14 = r8
        L67:
            if (r0 == 0) goto L6a
            goto L6b
        L6a:
            r8 = r9
        L6b:
            r13.<init>(r14, r8)
            return r13
        L6f:
            int r2 = r2 + 1
            goto L1e
        L72:
            return r7
    }

    private static android.media.MediaFormat a(com.tkay.expressad.exoplayer.m r3, com.tkay.expressad.exoplayer.l.e.a r4, boolean r5, int r6) {
            android.media.MediaFormat r0 = new android.media.MediaFormat
            r0.<init>()
            java.lang.String r1 = r3.h
            java.lang.String r2 = "mime"
            r0.setString(r2, r1)
            int r1 = r3.m
            java.lang.String r2 = "width"
            r0.setInteger(r2, r1)
            int r1 = r3.n
            java.lang.String r2 = "height"
            r0.setInteger(r2, r1)
            java.util.List<byte[]> r1 = r3.j
            com.tkay.expressad.exoplayer.f.e.a(r0, r1)
            float r1 = r3.o
            r2 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r2 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r2 == 0) goto L2c
            java.lang.String r2 = "frame-rate"
            r0.setFloat(r2, r1)
        L2c:
            int r1 = r3.p
            java.lang.String r2 = "rotation-degrees"
            com.tkay.expressad.exoplayer.f.e.a(r0, r2, r1)
            com.tkay.expressad.exoplayer.l.b r3 = r3.t
            if (r3 == 0) goto L59
            int r1 = r3.c
            java.lang.String r2 = "color-transfer"
            com.tkay.expressad.exoplayer.f.e.a(r0, r2, r1)
            int r1 = r3.a
            java.lang.String r2 = "color-standard"
            com.tkay.expressad.exoplayer.f.e.a(r0, r2, r1)
            int r1 = r3.b
            java.lang.String r2 = "color-range"
            com.tkay.expressad.exoplayer.f.e.a(r0, r2, r1)
            byte[] r3 = r3.d
            if (r3 == 0) goto L59
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.wrap(r3)
            java.lang.String r1 = "hdr-static-info"
            r0.setByteBuffer(r1, r3)
        L59:
            int r3 = r4.a
            java.lang.String r1 = "max-width"
            r0.setInteger(r1, r3)
            int r3 = r4.b
            java.lang.String r1 = "max-height"
            r0.setInteger(r1, r3)
            int r3 = r4.c
            java.lang.String r4 = "max-input-size"
            com.tkay.expressad.exoplayer.f.e.a(r0, r4, r3)
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            r4 = 23
            r1 = 0
            if (r3 < r4) goto L7a
            java.lang.String r3 = "priority"
            r0.setInteger(r3, r1)
        L7a:
            if (r5 == 0) goto L81
            java.lang.String r3 = "auto-frc"
            r0.setInteger(r3, r1)
        L81:
            if (r6 == 0) goto L8e
            r3 = 1
            java.lang.String r4 = "tunneled-playback"
            r0.setFeatureEnabled(r4, r3)
            java.lang.String r3 = "audio-session-id"
            r0.setInteger(r3, r6)
        L8e:
            return r0
    }

    private static com.tkay.expressad.exoplayer.l.e.a a(com.tkay.expressad.exoplayer.f.a r11, com.tkay.expressad.exoplayer.m r12, com.tkay.expressad.exoplayer.m[] r13) {
            int r0 = r12.m
            int r1 = r12.n
            int r2 = b(r11, r12)
            int r3 = r13.length
            r4 = 1
            if (r3 != r4) goto L12
            com.tkay.expressad.exoplayer.l.e$a r11 = new com.tkay.expressad.exoplayer.l.e$a
            r11.<init>(r0, r1, r2)
            return r11
        L12:
            int r3 = r13.length
            r5 = 0
            r6 = r5
            r7 = r6
        L16:
            if (r6 >= r3) goto L47
            r8 = r13[r6]
            boolean r9 = r11.f
            boolean r9 = a(r9, r12, r8)
            if (r9 == 0) goto L44
            int r9 = r8.m
            r10 = -1
            if (r9 == r10) goto L2e
            int r9 = r8.n
            if (r9 != r10) goto L2c
            goto L2e
        L2c:
            r9 = r5
            goto L2f
        L2e:
            r9 = r4
        L2f:
            r7 = r7 | r9
            int r9 = r8.m
            int r0 = java.lang.Math.max(r0, r9)
            int r9 = r8.n
            int r1 = java.lang.Math.max(r1, r9)
            int r8 = b(r11, r8)
            int r2 = java.lang.Math.max(r2, r8)
        L44:
            int r6 = r6 + 1
            goto L16
        L47:
            if (r7 == 0) goto L97
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            java.lang.String r3 = "Resolutions unknown. Codec max resolution: "
            r13.<init>(r3)
            r13.append(r0)
            java.lang.String r3 = "x"
            r13.append(r3)
            r13.append(r1)
            java.lang.String r13 = r13.toString()
            java.lang.String r4 = "MediaCodecVideoRenderer"
            android.util.Log.w(r4, r13)
            android.graphics.Point r13 = a(r11, r12)
            if (r13 == 0) goto L97
            int r5 = r13.x
            int r0 = java.lang.Math.max(r0, r5)
            int r13 = r13.y
            int r1 = java.lang.Math.max(r1, r13)
            java.lang.String r12 = r12.h
            int r11 = a(r11, r12, r0, r1)
            int r2 = java.lang.Math.max(r2, r11)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r12 = "Codec max resolution adjusted to: "
            r11.<init>(r12)
            r11.append(r0)
            r11.append(r3)
            r11.append(r1)
            java.lang.String r11 = r11.toString()
            android.util.Log.w(r4, r11)
        L97:
            com.tkay.expressad.exoplayer.l.e$a r11 = new com.tkay.expressad.exoplayer.l.e$a
            r11.<init>(r0, r1, r2)
            return r11
    }

    private void a(android.media.MediaCodec r2, int r3) {
            r1 = this;
            java.lang.String r0 = "skipVideoBuffer"
            com.tkay.expressad.exoplayer.k.ad.a(r0)
            r0 = 0
            r2.releaseOutputBuffer(r3, r0)
            com.tkay.expressad.exoplayer.k.ad.a()
            com.tkay.expressad.exoplayer.c.d r2 = r1.q
            int r3 = r2.f
            int r3 = r3 + 1
            r2.f = r3
            return
    }

    private void a(android.media.MediaCodec r2, int r3, long r4) {
            r1 = this;
            r1.H()
            java.lang.String r0 = "releaseOutputBuffer"
            com.tkay.expressad.exoplayer.k.ad.a(r0)
            r2.releaseOutputBuffer(r3, r4)
            com.tkay.expressad.exoplayer.k.ad.a()
            long r2 = android.os.SystemClock.elapsedRealtime()
            r4 = 1000(0x3e8, double:4.94E-321)
            long r2 = r2 * r4
            r1.V = r2
            com.tkay.expressad.exoplayer.c.d r2 = r1.q
            int r3 = r2.e
            int r3 = r3 + 1
            r2.e = r3
            r2 = 0
            r1.T = r2
            r1.C()
            return
    }

    private static void a(android.media.MediaCodec r0, android.view.Surface r1) {
            r0.setOutputSurface(r1)
            return
    }

    private static void a(android.media.MediaFormat r2, int r3) {
            java.lang.String r0 = "tunneled-playback"
            r1 = 1
            r2.setFeatureEnabled(r0, r1)
            java.lang.String r0 = "audio-session-id"
            r2.setInteger(r0, r3)
            return
    }

    private void a(android.view.Surface r6) {
            r5 = this;
            if (r6 != 0) goto L1e
            android.view.Surface r0 = r5.M
            if (r0 == 0) goto L8
            r6 = r0
            goto L1e
        L8:
            com.tkay.expressad.exoplayer.f.a r0 = r5.z()
            if (r0 == 0) goto L1e
            boolean r1 = r5.b(r0)
            if (r1 == 0) goto L1e
            android.content.Context r6 = r5.B
            boolean r0 = r0.h
            com.tkay.expressad.exoplayer.l.c r6 = com.tkay.expressad.exoplayer.l.c.a(r6, r0)
            r5.M = r6
        L1e:
            android.view.Surface r0 = r5.L
            if (r0 == r6) goto L63
            r5.L = r6
            int r0 = r5.a_()
            r1 = 1
            r2 = 2
            if (r0 == r1) goto L2e
            if (r0 != r2) goto L4a
        L2e:
            android.media.MediaCodec r1 = r5.y()
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            r4 = 23
            if (r3 < r4) goto L44
            if (r1 == 0) goto L44
            if (r6 == 0) goto L44
            boolean r3 = r5.K
            if (r3 != 0) goto L44
            r1.setOutputSurface(r6)
            goto L4a
        L44:
            r5.A()
            r5.x()
        L4a:
            if (r6 == 0) goto L5c
            android.view.Surface r1 = r5.M
            if (r6 == r1) goto L5c
            r5.I()
            r5.E()
            if (r0 != r2) goto L62
            r5.D()
            return
        L5c:
            r5.G()
            r5.E()
        L62:
            return
        L63:
            if (r6 == 0) goto L77
            android.view.Surface r0 = r5.M
            if (r6 == r0) goto L77
            r5.I()
            boolean r6 = r5.O
            if (r6 == 0) goto L77
            com.tkay.expressad.exoplayer.l.h$a r6 = r5.D
            android.view.Surface r0 = r5.L
            r6.a(r0)
        L77:
            return
    }

    private static boolean a(java.lang.String r6) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 27
            r2 = 0
            if (r0 >= r1) goto L5d6
            java.lang.String r0 = "OMX.google"
            boolean r6 = r6.startsWith(r0)
            if (r6 == 0) goto L11
            goto L5d6
        L11:
            java.lang.Class<com.tkay.expressad.exoplayer.l.e> r6 = com.tkay.expressad.exoplayer.l.e.class
            monitor-enter(r6)
            boolean r0 = com.tkay.expressad.exoplayer.l.e.z     // Catch: java.lang.Throwable -> L5d3
            if (r0 != 0) goto L5cf
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.b     // Catch: java.lang.Throwable -> L5d3
            int r3 = r0.hashCode()     // Catch: java.lang.Throwable -> L5d3
            r4 = -1
            r5 = 1
            switch(r3) {
                case -2144781245: goto L58f;
                case -2144781185: goto L584;
                case -2144781160: goto L579;
                case -2097309513: goto L56e;
                case -2022874474: goto L563;
                case -1978993182: goto L558;
                case -1978990237: goto L54d;
                case -1936688988: goto L542;
                case -1936688066: goto L537;
                case -1936688065: goto L52b;
                case -1931988508: goto L51f;
                case -1696512866: goto L513;
                case -1680025915: goto L507;
                case -1615810839: goto L4fb;
                case -1554255044: goto L4ef;
                case -1481772737: goto L4e3;
                case -1481772730: goto L4d7;
                case -1481772729: goto L4cb;
                case -1320080169: goto L4bf;
                case -1217592143: goto L4b3;
                case -1180384755: goto L4a7;
                case -1139198265: goto L49b;
                case -1052835013: goto L48f;
                case -993250464: goto L484;
                case -965403638: goto L478;
                case -958336948: goto L46c;
                case -879245230: goto L460;
                case -842500323: goto L454;
                case -821392978: goto L449;
                case -797483286: goto L43d;
                case -794946968: goto L431;
                case -788334647: goto L425;
                case -782144577: goto L419;
                case -575125681: goto L40d;
                case -521118391: goto L401;
                case -430914369: goto L3f5;
                case -290434366: goto L3e9;
                case -282781963: goto L3dd;
                case -277133239: goto L3d1;
                case -173639913: goto L3c5;
                case -56598463: goto L3b9;
                case 2126: goto L3ad;
                case 2564: goto L3a1;
                case 2715: goto L395;
                case 2719: goto L389;
                case 3483: goto L37d;
                case 73405: goto L371;
                case 75739: goto L365;
                case 76779: goto L359;
                case 78669: goto L34d;
                case 79305: goto L341;
                case 80618: goto L335;
                case 88274: goto L329;
                case 98846: goto L31d;
                case 98848: goto L311;
                case 99329: goto L305;
                case 101481: goto L2f9;
                case 1513190: goto L2ee;
                case 1514184: goto L2e3;
                case 1514185: goto L2d8;
                case 2436959: goto L2cc;
                case 2463773: goto L2c0;
                case 2464648: goto L2b4;
                case 2689555: goto L2a8;
                case 3351335: goto L29c;
                case 3386211: goto L290;
                case 41325051: goto L284;
                case 55178625: goto L278;
                case 61542055: goto L26d;
                case 65355429: goto L261;
                case 66214468: goto L255;
                case 66214470: goto L249;
                case 66214473: goto L23d;
                case 66215429: goto L231;
                case 66215431: goto L225;
                case 66215433: goto L219;
                case 66216390: goto L20d;
                case 76402249: goto L201;
                case 76404105: goto L1f5;
                case 76404911: goto L1e9;
                case 80963634: goto L1dd;
                case 82882791: goto L1d1;
                case 102844228: goto L1c5;
                case 165221241: goto L1ba;
                case 182191441: goto L1ae;
                case 245388979: goto L1a2;
                case 287431619: goto L196;
                case 307593612: goto L18a;
                case 308517133: goto L17e;
                case 316215098: goto L172;
                case 316215116: goto L166;
                case 316246811: goto L15a;
                case 316246818: goto L14e;
                case 407160593: goto L142;
                case 507412548: goto L136;
                case 793982701: goto L12a;
                case 794038622: goto L11e;
                case 794040393: goto L112;
                case 835649806: goto L106;
                case 917340916: goto Lfb;
                case 958008161: goto Lef;
                case 1060579533: goto Le3;
                case 1150207623: goto Ld7;
                case 1176899427: goto Lcb;
                case 1280332038: goto Lbf;
                case 1306947716: goto Lb5;
                case 1349174697: goto La9;
                case 1522194893: goto L9d;
                case 1691543273: goto L91;
                case 1709443163: goto L85;
                case 1865889110: goto L79;
                case 1906253259: goto L6d;
                case 1977196784: goto L61;
                case 2029784656: goto L55;
                case 2030379515: goto L49;
                case 2047190025: goto L3d;
                case 2047252157: goto L31;
                case 2048319463: goto L25;
                default: goto L23;
            }     // Catch: java.lang.Throwable -> L5d3
        L23:
            goto L59a
        L25:
            java.lang.String r1 = "HWVNS-H"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 50
            goto L59b
        L31:
            java.lang.String r1 = "ELUGA_Prim"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 25
            goto L59b
        L3d:
            java.lang.String r1 = "ELUGA_Note"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 24
            goto L59b
        L49:
            java.lang.String r1 = "HWCAM-H"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 49
            goto L59b
        L55:
            java.lang.String r1 = "HWBLN-H"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 48
            goto L59b
        L61:
            java.lang.String r1 = "Infinix-X572"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 52
            goto L59b
        L6d:
            java.lang.String r1 = "PB2-670M"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 79
            goto L59b
        L79:
            java.lang.String r1 = "santoni"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 95
            goto L59b
        L85:
            java.lang.String r1 = "iball8735_9806"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 51
            goto L59b
        L91:
            java.lang.String r1 = "CPH1609"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 17
            goto L59b
        L9d:
            java.lang.String r1 = "woods_f"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 111(0x6f, float:1.56E-43)
            goto L59b
        La9:
            java.lang.String r1 = "htc_e56ml_dtul"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 46
            goto L59b
        Lb5:
            java.lang.String r3 = "EverStar_S"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            goto L59b
        Lbf:
            java.lang.String r1 = "hwALE-H"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 47
            goto L59b
        Lcb:
            java.lang.String r1 = "itel_S41"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 54
            goto L59b
        Ld7:
            java.lang.String r1 = "LS-5017"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 59
            goto L59b
        Le3:
            java.lang.String r1 = "panell_d"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 75
            goto L59b
        Lef:
            java.lang.String r1 = "j2xlteins"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 55
            goto L59b
        Lfb:
            java.lang.String r1 = "A7000plus"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 7
            goto L59b
        L106:
            java.lang.String r1 = "manning"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 61
            goto L59b
        L112:
            java.lang.String r1 = "GIONEE_WBL7519"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 44
            goto L59b
        L11e:
            java.lang.String r1 = "GIONEE_WBL7365"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 43
            goto L59b
        L12a:
            java.lang.String r1 = "GIONEE_WBL5708"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 42
            goto L59b
        L136:
            java.lang.String r1 = "QM16XE_U"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 93
            goto L59b
        L142:
            java.lang.String r1 = "Pixi5-10_4G"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 85
            goto L59b
        L14e:
            java.lang.String r1 = "TB3-850M"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 103(0x67, float:1.44E-43)
            goto L59b
        L15a:
            java.lang.String r1 = "TB3-850F"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 102(0x66, float:1.43E-43)
            goto L59b
        L166:
            java.lang.String r1 = "TB3-730X"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 101(0x65, float:1.42E-43)
            goto L59b
        L172:
            java.lang.String r1 = "TB3-730F"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 100
            goto L59b
        L17e:
            java.lang.String r1 = "A7020a48"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 9
            goto L59b
        L18a:
            java.lang.String r1 = "A7010a48"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 8
            goto L59b
        L196:
            java.lang.String r1 = "griffin"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 45
            goto L59b
        L1a2:
            java.lang.String r1 = "marino_f"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 62
            goto L59b
        L1ae:
            java.lang.String r1 = "CPY83_I00"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 18
            goto L59b
        L1ba:
            java.lang.String r1 = "A2016a40"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 5
            goto L59b
        L1c5:
            java.lang.String r1 = "le_x6"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 58
            goto L59b
        L1d1:
            java.lang.String r1 = "X3_HK"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 113(0x71, float:1.58E-43)
            goto L59b
        L1dd:
            java.lang.String r1 = "V23GB"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 106(0x6a, float:1.49E-43)
            goto L59b
        L1e9:
            java.lang.String r1 = "Q4310"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 91
            goto L59b
        L1f5:
            java.lang.String r1 = "Q4260"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 89
            goto L59b
        L201:
            java.lang.String r1 = "PRO7S"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 87
            goto L59b
        L20d:
            java.lang.String r1 = "F3311"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 34
            goto L59b
        L219:
            java.lang.String r1 = "F3215"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 33
            goto L59b
        L225:
            java.lang.String r1 = "F3213"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 32
            goto L59b
        L231:
            java.lang.String r1 = "F3211"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 31
            goto L59b
        L23d:
            java.lang.String r1 = "F3116"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 30
            goto L59b
        L249:
            java.lang.String r1 = "F3113"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 29
            goto L59b
        L255:
            java.lang.String r1 = "F3111"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 28
            goto L59b
        L261:
            java.lang.String r1 = "E5643"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 22
            goto L59b
        L26d:
            java.lang.String r1 = "A1601"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 4
            goto L59b
        L278:
            java.lang.String r1 = "Aura_Note_2"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 11
            goto L59b
        L284:
            java.lang.String r1 = "MEIZU_M5"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 63
            goto L59b
        L290:
            java.lang.String r1 = "p212"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 72
            goto L59b
        L29c:
            java.lang.String r1 = "mido"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 65
            goto L59b
        L2a8:
            java.lang.String r1 = "XE2X"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 114(0x72, float:1.6E-43)
            goto L59b
        L2b4:
            java.lang.String r1 = "Q427"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 90
            goto L59b
        L2c0:
            java.lang.String r1 = "Q350"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 88
            goto L59b
        L2cc:
            java.lang.String r1 = "P681"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 73
            goto L59b
        L2d8:
            java.lang.String r1 = "1714"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 2
            goto L59b
        L2e3:
            java.lang.String r1 = "1713"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = r5
            goto L59b
        L2ee:
            java.lang.String r1 = "1601"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = r2
            goto L59b
        L2f9:
            java.lang.String r1 = "flo"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 35
            goto L59b
        L305:
            java.lang.String r1 = "deb"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 21
            goto L59b
        L311:
            java.lang.String r1 = "cv3"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 20
            goto L59b
        L31d:
            java.lang.String r1 = "cv1"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 19
            goto L59b
        L329:
            java.lang.String r1 = "Z80"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 117(0x75, float:1.64E-43)
            goto L59b
        L335:
            java.lang.String r1 = "QX1"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 94
            goto L59b
        L341:
            java.lang.String r1 = "PLE"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 86
            goto L59b
        L34d:
            java.lang.String r1 = "P85"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 74
            goto L59b
        L359:
            java.lang.String r1 = "MX6"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 66
            goto L59b
        L365:
            java.lang.String r1 = "M5c"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 60
            goto L59b
        L371:
            java.lang.String r1 = "JGZ"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 56
            goto L59b
        L37d:
            java.lang.String r1 = "mh"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 64
            goto L59b
        L389:
            java.lang.String r1 = "V5"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 107(0x6b, float:1.5E-43)
            goto L59b
        L395:
            java.lang.String r1 = "V1"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 105(0x69, float:1.47E-43)
            goto L59b
        L3a1:
            java.lang.String r1 = "Q5"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 92
            goto L59b
        L3ad:
            java.lang.String r1 = "C1"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 14
            goto L59b
        L3b9:
            java.lang.String r1 = "woods_fn"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 112(0x70, float:1.57E-43)
            goto L59b
        L3c5:
            java.lang.String r1 = "ELUGA_A3_Pro"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 23
            goto L59b
        L3d1:
            java.lang.String r1 = "Z12_PRO"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 116(0x74, float:1.63E-43)
            goto L59b
        L3dd:
            java.lang.String r1 = "BLACK-1X"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 12
            goto L59b
        L3e9:
            java.lang.String r1 = "taido_row"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 99
            goto L59b
        L3f5:
            java.lang.String r1 = "Pixi4-7_3G"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 84
            goto L59b
        L401:
            java.lang.String r1 = "GIONEE_GBL7360"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 38
            goto L59b
        L40d:
            java.lang.String r1 = "GiONEE_CBL7513"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 36
            goto L59b
        L419:
            java.lang.String r1 = "OnePlus5T"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 71
            goto L59b
        L425:
            java.lang.String r1 = "whyred"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 110(0x6e, float:1.54E-43)
            goto L59b
        L431:
            java.lang.String r1 = "watson"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 109(0x6d, float:1.53E-43)
            goto L59b
        L43d:
            java.lang.String r1 = "SVP-DTV15"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 97
            goto L59b
        L449:
            java.lang.String r1 = "A7000-a"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 6
            goto L59b
        L454:
            java.lang.String r1 = "nicklaus_f"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 68
            goto L59b
        L460:
            java.lang.String r1 = "tcl_eu"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 104(0x68, float:1.46E-43)
            goto L59b
        L46c:
            java.lang.String r1 = "ELUGA_Ray_X"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 26
            goto L59b
        L478:
            java.lang.String r1 = "s905x018"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 98
            goto L59b
        L484:
            java.lang.String r1 = "A10-70F"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 3
            goto L59b
        L48f:
            java.lang.String r1 = "namath"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 67
            goto L59b
        L49b:
            java.lang.String r1 = "Slate_Pro"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 96
            goto L59b
        L4a7:
            java.lang.String r1 = "iris60"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 53
            goto L59b
        L4b3:
            java.lang.String r1 = "BRAVIA_ATV2"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 13
            goto L59b
        L4bf:
            java.lang.String r1 = "GiONEE_GBL7319"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 37
            goto L59b
        L4cb:
            java.lang.String r1 = "panell_dt"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 78
            goto L59b
        L4d7:
            java.lang.String r1 = "panell_ds"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 77
            goto L59b
        L4e3:
            java.lang.String r1 = "panell_dl"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 76
            goto L59b
        L4ef:
            java.lang.String r1 = "vernee_M5"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 108(0x6c, float:1.51E-43)
            goto L59b
        L4fb:
            java.lang.String r1 = "Phantom6"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 83
            goto L59b
        L507:
            java.lang.String r1 = "ComioS1"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 15
            goto L59b
        L513:
            java.lang.String r1 = "XT1663"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 115(0x73, float:1.61E-43)
            goto L59b
        L51f:
            java.lang.String r1 = "AquaPowerM"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 10
            goto L59b
        L52b:
            java.lang.String r1 = "PGN611"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 82
            goto L59b
        L537:
            java.lang.String r1 = "PGN610"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 81
            goto L59b
        L542:
            java.lang.String r1 = "PGN528"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 80
            goto L59b
        L54d:
            java.lang.String r1 = "NX573J"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 70
            goto L59b
        L558:
            java.lang.String r1 = "NX541J"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 69
            goto L59b
        L563:
            java.lang.String r1 = "CP8676_I02"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 16
            goto L59b
        L56e:
            java.lang.String r1 = "K50a40"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 57
            goto L59b
        L579:
            java.lang.String r1 = "GIONEE_SWW1631"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 41
            goto L59b
        L584:
            java.lang.String r1 = "GIONEE_SWW1627"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 40
            goto L59b
        L58f:
            java.lang.String r1 = "GIONEE_SWW1609"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 39
            goto L59b
        L59a:
            r1 = r4
        L59b:
            switch(r1) {
                case 0: goto L59f;
                case 1: goto L59f;
                case 2: goto L59f;
                case 3: goto L59f;
                case 4: goto L59f;
                case 5: goto L59f;
                case 6: goto L59f;
                case 7: goto L59f;
                case 8: goto L59f;
                case 9: goto L59f;
                case 10: goto L59f;
                case 11: goto L59f;
                case 12: goto L59f;
                case 13: goto L59f;
                case 14: goto L59f;
                case 15: goto L59f;
                case 16: goto L59f;
                case 17: goto L59f;
                case 18: goto L59f;
                case 19: goto L59f;
                case 20: goto L59f;
                case 21: goto L59f;
                case 22: goto L59f;
                case 23: goto L59f;
                case 24: goto L59f;
                case 25: goto L59f;
                case 26: goto L59f;
                case 27: goto L59f;
                case 28: goto L59f;
                case 29: goto L59f;
                case 30: goto L59f;
                case 31: goto L59f;
                case 32: goto L59f;
                case 33: goto L59f;
                case 34: goto L59f;
                case 35: goto L59f;
                case 36: goto L59f;
                case 37: goto L59f;
                case 38: goto L59f;
                case 39: goto L59f;
                case 40: goto L59f;
                case 41: goto L59f;
                case 42: goto L59f;
                case 43: goto L59f;
                case 44: goto L59f;
                case 45: goto L59f;
                case 46: goto L59f;
                case 47: goto L59f;
                case 48: goto L59f;
                case 49: goto L59f;
                case 50: goto L59f;
                case 51: goto L59f;
                case 52: goto L59f;
                case 53: goto L59f;
                case 54: goto L59f;
                case 55: goto L59f;
                case 56: goto L59f;
                case 57: goto L59f;
                case 58: goto L59f;
                case 59: goto L59f;
                case 60: goto L59f;
                case 61: goto L59f;
                case 62: goto L59f;
                case 63: goto L59f;
                case 64: goto L59f;
                case 65: goto L59f;
                case 66: goto L59f;
                case 67: goto L59f;
                case 68: goto L59f;
                case 69: goto L59f;
                case 70: goto L59f;
                case 71: goto L59f;
                case 72: goto L59f;
                case 73: goto L59f;
                case 74: goto L59f;
                case 75: goto L59f;
                case 76: goto L59f;
                case 77: goto L59f;
                case 78: goto L59f;
                case 79: goto L59f;
                case 80: goto L59f;
                case 81: goto L59f;
                case 82: goto L59f;
                case 83: goto L59f;
                case 84: goto L59f;
                case 85: goto L59f;
                case 86: goto L59f;
                case 87: goto L59f;
                case 88: goto L59f;
                case 89: goto L59f;
                case 90: goto L59f;
                case 91: goto L59f;
                case 92: goto L59f;
                case 93: goto L59f;
                case 94: goto L59f;
                case 95: goto L59f;
                case 96: goto L59f;
                case 97: goto L59f;
                case 98: goto L59f;
                case 99: goto L59f;
                case 100: goto L59f;
                case 101: goto L59f;
                case 102: goto L59f;
                case 103: goto L59f;
                case 104: goto L59f;
                case 105: goto L59f;
                case 106: goto L59f;
                case 107: goto L59f;
                case 108: goto L59f;
                case 109: goto L59f;
                case 110: goto L59f;
                case 111: goto L59f;
                case 112: goto L59f;
                case 113: goto L59f;
                case 114: goto L59f;
                case 115: goto L59f;
                case 116: goto L59f;
                case 117: goto L59f;
                default: goto L59e;
            }     // Catch: java.lang.Throwable -> L5d3
        L59e:
            goto L5a1
        L59f:
            com.tkay.expressad.exoplayer.l.e.A = r5     // Catch: java.lang.Throwable -> L5d3
        L5a1:
            java.lang.String r0 = com.tkay.expressad.exoplayer.k.af.d     // Catch: java.lang.Throwable -> L5d3
            int r1 = r0.hashCode()     // Catch: java.lang.Throwable -> L5d3
            r3 = 2006354(0x1e9d52, float:2.811501E-39)
            if (r1 == r3) goto L5bc
            r2 = 2006367(0x1e9d5f, float:2.811519E-39)
            if (r1 == r2) goto L5b2
            goto L5c5
        L5b2:
            java.lang.String r1 = "AFTN"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L5c5
            r2 = r5
            goto L5c6
        L5bc:
            java.lang.String r1 = "AFTA"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L5c5
            goto L5c6
        L5c5:
            r2 = r4
        L5c6:
            if (r2 == 0) goto L5cb
            if (r2 == r5) goto L5cb
            goto L5cd
        L5cb:
            com.tkay.expressad.exoplayer.l.e.A = r5     // Catch: java.lang.Throwable -> L5d3
        L5cd:
            com.tkay.expressad.exoplayer.l.e.z = r5     // Catch: java.lang.Throwable -> L5d3
        L5cf:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L5d3
            boolean r6 = com.tkay.expressad.exoplayer.l.e.A
            return r6
        L5d3:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
        L5d6:
            return r2
    }

    private static boolean a(boolean r2, com.tkay.expressad.exoplayer.m r3, com.tkay.expressad.exoplayer.m r4) {
            java.lang.String r0 = r3.h
            java.lang.String r1 = r4.h
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L2a
            int r0 = r3.p
            int r1 = r4.p
            if (r0 != r1) goto L2a
            if (r2 != 0) goto L1e
            int r2 = r3.m
            int r0 = r4.m
            if (r2 != r0) goto L2a
            int r2 = r3.n
            int r0 = r4.n
            if (r2 != r0) goto L2a
        L1e:
            com.tkay.expressad.exoplayer.l.b r2 = r3.t
            com.tkay.expressad.exoplayer.l.b r3 = r4.t
            boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r3)
            if (r2 == 0) goto L2a
            r2 = 1
            return r2
        L2a:
            r2 = 0
            return r2
    }

    private static int b(com.tkay.expressad.exoplayer.f.a r3, com.tkay.expressad.exoplayer.m r4) {
            int r0 = r4.i
            r1 = -1
            if (r0 == r1) goto L20
            java.util.List<byte[]> r3 = r4.j
            int r3 = r3.size()
            r0 = 0
            r1 = r0
        Ld:
            if (r0 >= r3) goto L1c
            java.util.List<byte[]> r2 = r4.j
            java.lang.Object r2 = r2.get(r0)
            byte[] r2 = (byte[]) r2
            int r2 = r2.length
            int r1 = r1 + r2
            int r0 = r0 + 1
            goto Ld
        L1c:
            int r3 = r4.i
            int r3 = r3 + r1
            return r3
        L20:
            java.lang.String r0 = r4.h
            int r1 = r4.m
            int r4 = r4.n
            int r3 = a(r3, r0, r1, r4)
            return r3
    }

    private void b(int r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.c.d r0 = r2.q
            int r1 = r0.g
            int r1 = r1 + r3
            r0.g = r1
            int r0 = r2.S
            int r0 = r0 + r3
            r2.S = r0
            int r0 = r2.T
            int r0 = r0 + r3
            r2.T = r0
            com.tkay.expressad.exoplayer.c.d r3 = r2.q
            int r0 = r2.T
            com.tkay.expressad.exoplayer.c.d r1 = r2.q
            int r1 = r1.h
            int r0 = java.lang.Math.max(r0, r1)
            r3.h = r0
            int r3 = r2.S
            int r0 = r2.F
            if (r3 < r0) goto L28
            r2.J()
        L28:
            return
    }

    private void b(android.media.MediaCodec r2, int r3) {
            r1 = this;
            java.lang.String r0 = "dropVideoBuffer"
            com.tkay.expressad.exoplayer.k.ad.a(r0)
            r0 = 0
            r2.releaseOutputBuffer(r3, r0)
            com.tkay.expressad.exoplayer.k.ad.a()
            r2 = 1
            r1.b(r2)
            return
    }

    private static boolean b(long r0, long r2) {
            boolean r0 = g(r0)
            if (r0 == 0) goto Lf
            r0 = 100000(0x186a0, double:4.94066E-319)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto Lf
            r0 = 1
            return r0
        Lf:
            r0 = 0
            return r0
    }

    private boolean b(com.tkay.expressad.exoplayer.f.a r3) {
            r2 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 23
            if (r0 < r1) goto L20
            boolean r0 = r2.ag
            if (r0 != 0) goto L20
            java.lang.String r0 = r3.c
            boolean r0 = a(r0)
            if (r0 != 0) goto L20
            boolean r3 = r3.h
            if (r3 == 0) goto L1e
            android.content.Context r3 = r2.B
            boolean r3 = com.tkay.expressad.exoplayer.l.c.a(r3)
            if (r3 == 0) goto L20
        L1e:
            r3 = 1
            return r3
        L20:
            r3 = 0
            return r3
    }

    private void c(android.media.MediaCodec r4, int r5) {
            r3 = this;
            r3.H()
            java.lang.String r0 = "releaseOutputBuffer"
            com.tkay.expressad.exoplayer.k.ad.a(r0)
            r0 = 1
            r4.releaseOutputBuffer(r5, r0)
            com.tkay.expressad.exoplayer.k.ad.a()
            long r4 = android.os.SystemClock.elapsedRealtime()
            r1 = 1000(0x3e8, double:4.94E-321)
            long r4 = r4 * r1
            r3.V = r4
            com.tkay.expressad.exoplayer.c.d r4 = r3.q
            int r5 = r4.e
            int r5 = r5 + r0
            r4.e = r5
            r4 = 0
            r3.T = r4
            r3.C()
            return
    }

    private static boolean d(long r0) {
            boolean r0 = g(r0)
            return r0
    }

    private static boolean e(long r2) {
            r0 = -500000(0xfffffffffff85ee0, double:NaN)
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 >= 0) goto L9
            r2 = 1
            return r2
        L9:
            r2 = 0
            return r2
    }

    private boolean f(long r3) {
            r2 = this;
            int r3 = r2.b(r3)
            if (r3 != 0) goto L8
            r3 = 0
            return r3
        L8:
            com.tkay.expressad.exoplayer.c.d r4 = r2.q
            int r0 = r4.i
            r1 = 1
            int r0 = r0 + r1
            r4.i = r0
            int r4 = r2.U
            int r4 = r4 + r3
            r2.b(r4)
            r2.B()
            return r1
    }

    private static boolean g(long r2) {
            r0 = -30000(0xffffffffffff8ad0, double:NaN)
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 >= 0) goto L8
            r2 = 1
            return r2
        L8:
            r2 = 0
            return r2
    }

    private static boolean h(long r2) {
            r0 = -500000(0xfffffffffff85ee0, double:NaN)
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 >= 0) goto L9
            r2 = 1
            return r2
        L9:
            r2 = 0
            return r2
    }

    @Override
    protected final void A() {
            r4 = this;
            r0 = 0
            r1 = 0
            super.A()     // Catch: java.lang.Throwable -> L19
            r4.U = r0
            android.view.Surface r0 = r4.M
            if (r0 == 0) goto L18
            android.view.Surface r2 = r4.L
            if (r2 != r0) goto L11
            r4.L = r1
        L11:
            android.view.Surface r0 = r4.M
            r0.release()
            r4.M = r1
        L18:
            return
        L19:
            r2 = move-exception
            r4.U = r0
            android.view.Surface r0 = r4.M
            if (r0 == 0) goto L2d
            android.view.Surface r3 = r4.L
            if (r3 != r0) goto L26
            r4.L = r1
        L26:
            android.view.Surface r0 = r4.M
            r0.release()
            r4.M = r1
        L2d:
            throw r2
    }

    @Override
    protected final void B() {
            r1 = this;
            super.B()
            r0 = 0
            r1.U = r0
            return
    }

    final void C() {
            r2 = this;
            boolean r0 = r2.O
            if (r0 != 0) goto Le
            r0 = 1
            r2.O = r0
            com.tkay.expressad.exoplayer.l.h$a r0 = r2.D
            android.view.Surface r1 = r2.L
            r0.a(r1)
        Le:
            return
    }

    @Override
    protected final int a(com.tkay.expressad.exoplayer.f.a r3, com.tkay.expressad.exoplayer.m r4, com.tkay.expressad.exoplayer.m r5) {
            r2 = this;
            boolean r0 = r3.f
            boolean r0 = a(r0, r4, r5)
            if (r0 == 0) goto L2c
            int r0 = r5.m
            com.tkay.expressad.exoplayer.l.e$a r1 = r2.J
            int r1 = r1.a
            if (r0 > r1) goto L2c
            int r0 = r5.n
            com.tkay.expressad.exoplayer.l.e$a r1 = r2.J
            int r1 = r1.b
            if (r0 > r1) goto L2c
            int r3 = b(r3, r5)
            com.tkay.expressad.exoplayer.l.e$a r0 = r2.J
            int r0 = r0.c
            if (r3 > r0) goto L2c
            boolean r3 = r4.b(r5)
            if (r3 == 0) goto L2a
            r3 = 1
            return r3
        L2a:
            r3 = 3
            return r3
        L2c:
            r3 = 0
            return r3
    }

    @Override
    protected final int a(com.tkay.expressad.exoplayer.f.c r8, com.tkay.expressad.exoplayer.d.g<com.tkay.expressad.exoplayer.d.k> r9, com.tkay.expressad.exoplayer.m r10) {
            r7 = this;
            java.lang.String r0 = r10.h
            boolean r1 = com.tkay.expressad.exoplayer.k.o.b(r0)
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.tkay.expressad.exoplayer.d.e r1 = r10.k
            if (r1 == 0) goto L1e
            r3 = r2
            r4 = r3
        L10:
            int r5 = r1.b
            if (r3 >= r5) goto L1f
            com.tkay.expressad.exoplayer.d.e$a r5 = r1.a(r3)
            boolean r5 = r5.d
            r4 = r4 | r5
            int r3 = r3 + 1
            goto L10
        L1e:
            r4 = r2
        L1f:
            com.tkay.expressad.exoplayer.f.a r3 = r8.a(r0, r4)
            r5 = 2
            r6 = 1
            if (r3 != 0) goto L31
            if (r4 == 0) goto L30
            com.tkay.expressad.exoplayer.f.a r8 = r8.a(r0, r2)
            if (r8 == 0) goto L30
            return r5
        L30:
            return r6
        L31:
            boolean r8 = a(r9, r1)
            if (r8 != 0) goto L38
            return r5
        L38:
            java.lang.String r8 = r10.e
            boolean r8 = r3.b(r8)
            if (r8 == 0) goto L98
            int r9 = r10.m
            if (r9 <= 0) goto L98
            int r9 = r10.n
            if (r9 <= 0) goto L98
            int r8 = com.tkay.expressad.exoplayer.k.af.a
            r9 = 21
            if (r8 < r9) goto L5a
            int r8 = r10.m
            int r9 = r10.n
            float r10 = r10.o
            double r0 = (double) r10
            boolean r8 = r3.a(r8, r9, r0)
            goto L98
        L5a:
            int r8 = r10.m
            int r9 = r10.n
            int r8 = r8 * r9
            int r9 = com.tkay.expressad.exoplayer.f.d.b()
            if (r8 > r9) goto L66
            goto L67
        L66:
            r6 = r2
        L67:
            if (r6 != 0) goto L97
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r9 = "FalseCheck [legacyFrameSize, "
            r8.<init>(r9)
            int r9 = r10.m
            r8.append(r9)
            java.lang.String r9 = "x"
            r8.append(r9)
            int r9 = r10.n
            r8.append(r9)
            java.lang.String r9 = "] ["
            r8.append(r9)
            java.lang.String r9 = com.tkay.expressad.exoplayer.k.af.e
            r8.append(r9)
            java.lang.String r9 = "]"
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            java.lang.String r9 = "MediaCodecVideoRenderer"
            android.util.Log.d(r9, r8)
        L97:
            r8 = r6
        L98:
            boolean r9 = r3.f
            if (r9 == 0) goto L9f
            r9 = 16
            goto La1
        L9f:
            r9 = 8
        La1:
            boolean r10 = r3.g
            if (r10 == 0) goto La7
            r2 = 32
        La7:
            if (r8 == 0) goto Lab
            r8 = 4
            goto Lac
        Lab:
            r8 = 3
        Lac:
            r9 = r9 | r2
            r8 = r8 | r9
            return r8
    }

    @Override
    public final void a(int r5, java.lang.Object r6) {
            r4 = this;
            r0 = 1
            if (r5 != r0) goto L7c
            android.view.Surface r6 = (android.view.Surface) r6
            if (r6 != 0) goto L23
            android.view.Surface r5 = r4.M
            if (r5 == 0) goto Ld
            r6 = r5
            goto L23
        Ld:
            com.tkay.expressad.exoplayer.f.a r5 = r4.z()
            if (r5 == 0) goto L23
            boolean r1 = r4.b(r5)
            if (r1 == 0) goto L23
            android.content.Context r6 = r4.B
            boolean r5 = r5.h
            com.tkay.expressad.exoplayer.l.c r6 = com.tkay.expressad.exoplayer.l.c.a(r6, r5)
            r4.M = r6
        L23:
            android.view.Surface r5 = r4.L
            if (r5 == r6) goto L67
            r4.L = r6
            int r5 = r4.a_()
            r1 = 2
            if (r5 == r0) goto L32
            if (r5 != r1) goto L4e
        L32:
            android.media.MediaCodec r0 = r4.y()
            int r2 = com.tkay.expressad.exoplayer.k.af.a
            r3 = 23
            if (r2 < r3) goto L48
            if (r0 == 0) goto L48
            if (r6 == 0) goto L48
            boolean r2 = r4.K
            if (r2 != 0) goto L48
            r0.setOutputSurface(r6)
            goto L4e
        L48:
            r4.A()
            r4.x()
        L4e:
            if (r6 == 0) goto L60
            android.view.Surface r0 = r4.M
            if (r6 == r0) goto L60
            r4.I()
            r4.E()
            if (r5 != r1) goto L66
            r4.D()
            return
        L60:
            r4.G()
            r4.E()
        L66:
            return
        L67:
            if (r6 == 0) goto L7b
            android.view.Surface r5 = r4.M
            if (r6 == r5) goto L7b
            r4.I()
            boolean r5 = r4.O
            if (r5 == 0) goto L7b
            com.tkay.expressad.exoplayer.l.h$a r5 = r4.D
            android.view.Surface r6 = r4.L
            r5.a(r6)
        L7b:
            return
        L7c:
            r0 = 4
            if (r5 != r0) goto L93
            java.lang.Integer r6 = (java.lang.Integer) r6
            int r5 = r6.intValue()
            r4.N = r5
            android.media.MediaCodec r5 = r4.y()
            if (r5 == 0) goto L92
            int r6 = r4.N
            r5.setVideoScalingMode(r6)
        L92:
            return
        L93:
            super.a(r5, r6)
            return
    }

    @Override
    protected final void a(long r4, boolean r6) {
            r3 = this;
            super.a(r4, r6)
            r3.E()
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r3.P = r4
            r0 = 0
            r3.T = r0
            r3.ai = r4
            int r1 = r3.ak
            if (r1 == 0) goto L20
            long[] r2 = r3.H
            int r1 = r1 + (-1)
            r1 = r2[r1]
            r3.aj = r1
            r3.ak = r0
        L20:
            if (r6 == 0) goto L26
            r3.D()
            return
        L26:
            r3.Q = r4
            return
    }

    @Override
    protected final void a(android.media.MediaCodec r7, android.media.MediaFormat r8) {
            r6 = this;
            java.lang.String r0 = "crop-right"
            boolean r1 = r8.containsKey(r0)
            java.lang.String r2 = "crop-top"
            java.lang.String r3 = "crop-bottom"
            java.lang.String r4 = "crop-left"
            r5 = 1
            if (r1 == 0) goto L23
            boolean r1 = r8.containsKey(r4)
            if (r1 == 0) goto L23
            boolean r1 = r8.containsKey(r3)
            if (r1 == 0) goto L23
            boolean r1 = r8.containsKey(r2)
            if (r1 == 0) goto L23
            r1 = r5
            goto L24
        L23:
            r1 = 0
        L24:
            if (r1 == 0) goto L31
            int r0 = r8.getInteger(r0)
            int r4 = r8.getInteger(r4)
            int r0 = r0 - r4
            int r0 = r0 + r5
            goto L37
        L31:
            java.lang.String r0 = "width"
            int r0 = r8.getInteger(r0)
        L37:
            r6.Y = r0
            if (r1 == 0) goto L46
            int r0 = r8.getInteger(r3)
            int r8 = r8.getInteger(r2)
            int r0 = r0 - r8
            int r0 = r0 + r5
            goto L4c
        L46:
            java.lang.String r0 = "height"
            int r0 = r8.getInteger(r0)
        L4c:
            r6.Z = r0
            float r8 = r6.X
            r6.ab = r8
            int r8 = com.tkay.expressad.exoplayer.k.af.a
            r0 = 21
            if (r8 < r0) goto L72
            int r8 = r6.W
            r0 = 90
            if (r8 == r0) goto L62
            r0 = 270(0x10e, float:3.78E-43)
            if (r8 != r0) goto L76
        L62:
            int r8 = r6.Y
            int r0 = r6.Z
            r6.Y = r0
            r6.Z = r8
            r8 = 1065353216(0x3f800000, float:1.0)
            float r0 = r6.ab
            float r8 = r8 / r0
            r6.ab = r8
            goto L76
        L72:
            int r8 = r6.W
            r6.aa = r8
        L76:
            int r8 = r6.N
            r7.setVideoScalingMode(r8)
            return
    }

    @Override
    protected final void a(com.tkay.expressad.exoplayer.c.e r5) {
            r4 = this;
            int r0 = r4.U
            int r0 = r0 + 1
            r4.U = r0
            long r0 = r5.f
            long r2 = r4.ai
            long r0 = java.lang.Math.max(r0, r2)
            r4.ai = r0
            int r5 = com.tkay.expressad.exoplayer.k.af.a
            r0 = 23
            if (r5 >= r0) goto L1d
            boolean r5 = r4.ag
            if (r5 == 0) goto L1d
            r4.C()
        L1d:
            return
    }

    @Override
    protected final void a(com.tkay.expressad.exoplayer.f.a r17, android.media.MediaCodec r18, com.tkay.expressad.exoplayer.m r19, android.media.MediaCrypto r20) {
            r16 = this;
            r0 = r16
            r1 = r17
            r2 = r18
            r3 = r19
            com.tkay.expressad.exoplayer.m[] r4 = r16.q()
            int r5 = r3.m
            int r6 = r3.n
            int r7 = b(r1, r3)
            int r8 = r4.length
            r9 = 1
            r10 = 0
            if (r8 != r9) goto L20
            com.tkay.expressad.exoplayer.l.e$a r4 = new com.tkay.expressad.exoplayer.l.e$a
            r4.<init>(r5, r6, r7)
            goto La9
        L20:
            int r8 = r4.length
            r11 = r10
            r12 = r11
        L23:
            if (r11 >= r8) goto L54
            r13 = r4[r11]
            boolean r14 = r1.f
            boolean r14 = a(r14, r3, r13)
            if (r14 == 0) goto L51
            int r14 = r13.m
            r15 = -1
            if (r14 == r15) goto L3b
            int r14 = r13.n
            if (r14 != r15) goto L39
            goto L3b
        L39:
            r14 = r10
            goto L3c
        L3b:
            r14 = r9
        L3c:
            r12 = r12 | r14
            int r14 = r13.m
            int r5 = java.lang.Math.max(r5, r14)
            int r14 = r13.n
            int r6 = java.lang.Math.max(r6, r14)
            int r13 = b(r1, r13)
            int r7 = java.lang.Math.max(r7, r13)
        L51:
            int r11 = r11 + 1
            goto L23
        L54:
            if (r12 == 0) goto La4
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r8 = "Resolutions unknown. Codec max resolution: "
            r4.<init>(r8)
            r4.append(r5)
            java.lang.String r8 = "x"
            r4.append(r8)
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            java.lang.String r11 = "MediaCodecVideoRenderer"
            android.util.Log.w(r11, r4)
            android.graphics.Point r4 = a(r1, r3)
            if (r4 == 0) goto La4
            int r12 = r4.x
            int r5 = java.lang.Math.max(r5, r12)
            int r4 = r4.y
            int r6 = java.lang.Math.max(r6, r4)
            java.lang.String r4 = r3.h
            int r4 = a(r1, r4, r5, r6)
            int r7 = java.lang.Math.max(r7, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r12 = "Codec max resolution adjusted to: "
            r4.<init>(r12)
            r4.append(r5)
            r4.append(r8)
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            android.util.Log.w(r11, r4)
        La4:
            com.tkay.expressad.exoplayer.l.e$a r4 = new com.tkay.expressad.exoplayer.l.e$a
            r4.<init>(r5, r6, r7)
        La9:
            r0.J = r4
            boolean r5 = r0.G
            int r6 = r0.ah
            android.media.MediaFormat r7 = new android.media.MediaFormat
            r7.<init>()
            java.lang.String r8 = r3.h
            java.lang.String r11 = "mime"
            r7.setString(r11, r8)
            int r8 = r3.m
            java.lang.String r11 = "width"
            r7.setInteger(r11, r8)
            int r8 = r3.n
            java.lang.String r11 = "height"
            r7.setInteger(r11, r8)
            java.util.List<byte[]> r8 = r3.j
            com.tkay.expressad.exoplayer.f.e.a(r7, r8)
            float r8 = r3.o
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r11 = (r8 > r11 ? 1 : (r8 == r11 ? 0 : -1))
            if (r11 == 0) goto Ldb
            java.lang.String r11 = "frame-rate"
            r7.setFloat(r11, r8)
        Ldb:
            int r8 = r3.p
            java.lang.String r11 = "rotation-degrees"
            com.tkay.expressad.exoplayer.f.e.a(r7, r11, r8)
            com.tkay.expressad.exoplayer.l.b r3 = r3.t
            if (r3 == 0) goto L108
            int r8 = r3.c
            java.lang.String r11 = "color-transfer"
            com.tkay.expressad.exoplayer.f.e.a(r7, r11, r8)
            int r8 = r3.a
            java.lang.String r11 = "color-standard"
            com.tkay.expressad.exoplayer.f.e.a(r7, r11, r8)
            int r8 = r3.b
            java.lang.String r11 = "color-range"
            com.tkay.expressad.exoplayer.f.e.a(r7, r11, r8)
            byte[] r3 = r3.d
            if (r3 == 0) goto L108
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.wrap(r3)
            java.lang.String r8 = "hdr-static-info"
            r7.setByteBuffer(r8, r3)
        L108:
            int r3 = r4.a
            java.lang.String r8 = "max-width"
            r7.setInteger(r8, r3)
            int r3 = r4.b
            java.lang.String r8 = "max-height"
            r7.setInteger(r8, r3)
            int r3 = r4.c
            java.lang.String r4 = "max-input-size"
            com.tkay.expressad.exoplayer.f.e.a(r7, r4, r3)
            int r3 = com.tkay.expressad.exoplayer.k.af.a
            r4 = 23
            if (r3 < r4) goto L128
            java.lang.String r3 = "priority"
            r7.setInteger(r3, r10)
        L128:
            if (r5 == 0) goto L12f
            java.lang.String r3 = "auto-frc"
            r7.setInteger(r3, r10)
        L12f:
            if (r6 == 0) goto L13b
            java.lang.String r3 = "tunneled-playback"
            r7.setFeatureEnabled(r3, r9)
            java.lang.String r3 = "audio-session-id"
            r7.setInteger(r3, r6)
        L13b:
            android.view.Surface r3 = r0.L
            if (r3 != 0) goto L158
            boolean r3 = r16.b(r17)
            com.tkay.expressad.exoplayer.k.a.b(r3)
            android.view.Surface r3 = r0.M
            if (r3 != 0) goto L154
            android.content.Context r3 = r0.B
            boolean r1 = r1.h
            com.tkay.expressad.exoplayer.l.c r1 = com.tkay.expressad.exoplayer.l.c.a(r3, r1)
            r0.M = r1
        L154:
            android.view.Surface r1 = r0.M
            r0.L = r1
        L158:
            android.view.Surface r1 = r0.L
            r3 = r20
            r2.configure(r7, r1, r3, r10)
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            if (r1 < r4) goto L16e
            boolean r1 = r0.ag
            if (r1 == 0) goto L16e
            com.tkay.expressad.exoplayer.l.e$b r1 = new com.tkay.expressad.exoplayer.l.e$b
            r1.<init>(r0, r2, r10)
            r0.r = r1
        L16e:
            return
    }

    @Override
    protected final void a(java.lang.String r7, long r8, long r10) {
            r6 = this;
            com.tkay.expressad.exoplayer.l.h$a r0 = r6.D
            r1 = r7
            r2 = r8
            r4 = r10
            r0.a(r1, r2, r4)
            boolean r7 = a(r7)
            r6.K = r7
            return
    }

    @Override
    protected final void a(boolean r2) {
            r1 = this;
            super.a(r2)
            com.tkay.expressad.exoplayer.aa r2 = r1.r()
            int r2 = r2.b
            r1.ah = r2
            if (r2 == 0) goto Lf
            r2 = 1
            goto L10
        Lf:
            r2 = 0
        L10:
            r1.ag = r2
            com.tkay.expressad.exoplayer.l.h$a r2 = r1.D
            com.tkay.expressad.exoplayer.c.d r0 = r1.q
            r2.a(r0)
            com.tkay.expressad.exoplayer.l.f r2 = r1.C
            r2.a()
            return
    }

    @Override
    protected final void a(com.tkay.expressad.exoplayer.m[] r5, long r6) {
            r4 = this;
            long r0 = r4.aj
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Le
            r4.aj = r6
            goto L45
        Le:
            int r0 = r4.ak
            long[] r1 = r4.H
            int r1 = r1.length
            if (r0 != r1) goto L31
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Too many stream changes, so dropping offset: "
            r0.<init>(r1)
            long[] r1 = r4.H
            int r2 = r4.ak
            int r2 = r2 + (-1)
            r2 = r1[r2]
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MediaCodecVideoRenderer"
            android.util.Log.w(r1, r0)
            goto L35
        L31:
            int r0 = r0 + 1
            r4.ak = r0
        L35:
            long[] r0 = r4.H
            int r1 = r4.ak
            int r2 = r1 + (-1)
            r0[r2] = r6
            long[] r0 = r4.I
            int r1 = r1 + (-1)
            long r2 = r4.ai
            r0[r1] = r2
        L45:
            super.a(r5, r6)
            return
    }

    @Override
    protected final boolean a(long r19, long r21, android.media.MediaCodec r23, java.nio.ByteBuffer r24, int r25, int r26, long r27, boolean r29) {
            r18 = this;
            r0 = r18
            r1 = r19
            r3 = r23
            r4 = r25
            r5 = r27
            long r7 = r0.P
            r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r7 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r7 != 0) goto L17
            r0.P = r1
        L17:
            r7 = 1
            if (r29 == 0) goto L1e
            r0.a(r3, r4)
            return r7
        L1e:
            long r8 = r5 - r1
            android.view.Surface r10 = r0.L
            android.view.Surface r11 = r0.M
            r12 = 0
            if (r10 != r11) goto L32
            boolean r1 = g(r8)
            if (r1 == 0) goto L31
            r0.a(r3, r4)
            return r7
        L31:
            return r12
        L32:
            long r10 = android.os.SystemClock.elapsedRealtime()
            r13 = 1000(0x3e8, double:4.94E-321)
            long r10 = r10 * r13
            int r15 = r18.a_()
            r12 = 2
            if (r15 != r12) goto L42
            r12 = r7
            goto L43
        L42:
            r12 = 0
        L43:
            boolean r15 = r0.O
            r7 = 21
            if (r15 == 0) goto Lfa
            if (r12 == 0) goto L63
            long r13 = r0.V
            long r13 = r10 - r13
            boolean r16 = g(r8)
            if (r16 == 0) goto L5e
            r16 = 100000(0x186a0, double:4.94066E-319)
            int r13 = (r13 > r16 ? 1 : (r13 == r16 ? 0 : -1))
            if (r13 <= 0) goto L5e
            r13 = 1
            goto L5f
        L5e:
            r13 = 0
        L5f:
            if (r13 == 0) goto L63
            goto Lfa
        L63:
            if (r12 == 0) goto Lf8
            long r12 = r0.P
            int r12 = (r1 > r12 ? 1 : (r1 == r12 ? 0 : -1))
            if (r12 != 0) goto L6d
            goto Lf8
        L6d:
            long r10 = r10 - r21
            long r8 = r8 - r10
            long r10 = java.lang.System.nanoTime()
            r12 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 * r12
            long r8 = r8 + r10
            com.tkay.expressad.exoplayer.l.f r14 = r0.C
            long r5 = r14.a(r5, r8)
            long r8 = r5 - r10
            long r8 = r8 / r12
            r10 = -500000(0xfffffffffff85ee0, double:NaN)
            int r10 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r10 >= 0) goto L8a
            r10 = 1
            goto L8b
        L8a:
            r10 = 0
        L8b:
            if (r10 == 0) goto Lab
            int r1 = r18.b(r19)
            if (r1 != 0) goto L95
            r1 = 0
            goto La7
        L95:
            com.tkay.expressad.exoplayer.c.d r2 = r0.q
            int r10 = r2.i
            r11 = 1
            int r10 = r10 + r11
            r2.i = r10
            int r2 = r0.U
            int r2 = r2 + r1
            r0.b(r2)
            r18.B()
            r1 = 1
        La7:
            if (r1 == 0) goto Lab
            r1 = 0
            return r1
        Lab:
            r1 = 0
            boolean r2 = g(r8)
            if (r2 == 0) goto Lc2
            java.lang.String r2 = "dropVideoBuffer"
            com.tkay.expressad.exoplayer.k.ad.a(r2)
            r3.releaseOutputBuffer(r4, r1)
            com.tkay.expressad.exoplayer.k.ad.a()
            r1 = 1
            r0.b(r1)
            return r1
        Lc2:
            r1 = 1
            int r2 = com.tkay.expressad.exoplayer.k.af.a
            if (r2 < r7) goto Ld2
            r10 = 50000(0xc350, double:2.47033E-319)
            int r2 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r2 >= 0) goto Lf6
            r0.a(r3, r4, r5)
            return r1
        Ld2:
            r1 = 30000(0x7530, double:1.4822E-319)
            int r1 = (r8 > r1 ? 1 : (r8 == r1 ? 0 : -1))
            if (r1 >= 0) goto Lf6
            r1 = 11000(0x2af8, double:5.4347E-320)
            int r1 = (r8 > r1 ? 1 : (r8 == r1 ? 0 : -1))
            if (r1 <= 0) goto Lf1
            r1 = 10000(0x2710, double:4.9407E-320)
            long r8 = r8 - r1
            r1 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 / r1
            java.lang.Thread.sleep(r8)     // Catch: java.lang.InterruptedException -> Le8
            goto Lf1
        Le8:
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            r1.interrupt()
            r1 = 0
            return r1
        Lf1:
            r0.c(r3, r4)
            r1 = 1
            return r1
        Lf6:
            r1 = 0
            return r1
        Lf8:
            r1 = 0
            return r1
        Lfa:
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            if (r1 < r7) goto L106
            long r1 = java.lang.System.nanoTime()
            r0.a(r3, r4, r1)
            goto L109
        L106:
            r0.c(r3, r4)
        L109:
            r1 = 1
            return r1
    }

    @Override
    protected final boolean a(com.tkay.expressad.exoplayer.f.a r2) {
            r1 = this;
            android.view.Surface r0 = r1.L
            if (r0 != 0) goto Ld
            boolean r2 = r1.b(r2)
            if (r2 == 0) goto Lb
            goto Ld
        Lb:
            r2 = 0
            return r2
        Ld:
            r2 = 1
            return r2
    }

    @Override
    protected final void b(com.tkay.expressad.exoplayer.m r2) {
            r1 = this;
            super.b(r2)
            com.tkay.expressad.exoplayer.l.h$a r0 = r1.D
            r0.a(r2)
            float r0 = r2.q
            r1.X = r0
            int r2 = r2.p
            r1.W = r2
            return
    }

    @Override
    protected final void c(long r7) {
            r6 = this;
            int r0 = r6.U
            r1 = 1
            int r0 = r0 - r1
            r6.U = r0
        L6:
            int r0 = r6.ak
            if (r0 == 0) goto L28
            long[] r2 = r6.I
            r3 = 0
            r4 = r2[r3]
            int r2 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r2 < 0) goto L28
            long[] r2 = r6.H
            r4 = r2[r3]
            r6.aj = r4
            int r0 = r0 + (-1)
            r6.ak = r0
            java.lang.System.arraycopy(r2, r1, r2, r3, r0)
            long[] r0 = r6.I
            int r2 = r6.ak
            java.lang.System.arraycopy(r0, r1, r0, r3, r2)
            goto L6
        L28:
            return
    }

    @Override
    protected final void n() {
            r4 = this;
            super.n()
            r0 = 0
            r4.S = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r4.R = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            r4.V = r0
            return
    }

    @Override
    protected final void o() {
            r2 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.Q = r0
            r2.J()
            super.o()
            return
    }

    @Override
    protected final void p() {
            r3 = this;
            r0 = -1
            r3.Y = r0
            r3.Z = r0
            r0 = -1082130432(0xffffffffbf800000, float:-1.0)
            r3.ab = r0
            r3.X = r0
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r3.aj = r0
            r3.ai = r0
            r0 = 0
            r3.ak = r0
            r3.G()
            r3.E()
            com.tkay.expressad.exoplayer.l.f r1 = r3.C
            r1.b()
            r1 = 0
            r3.r = r1
            r3.ag = r0
            super.p()     // Catch: java.lang.Throwable -> L32
            com.tkay.expressad.exoplayer.l.h$a r0 = r3.D
            com.tkay.expressad.exoplayer.c.d r1 = r3.q
            r0.b(r1)
            return
        L32:
            r0 = move-exception
            com.tkay.expressad.exoplayer.l.h$a r1 = r3.D
            com.tkay.expressad.exoplayer.c.d r2 = r3.q
            r1.b(r2)
            throw r0
    }

    @Override
    public final boolean u() {
            r9 = this;
            boolean r0 = super.u()
            r1 = 1
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r0 == 0) goto L25
            boolean r0 = r9.O
            if (r0 != 0) goto L22
            android.view.Surface r0 = r9.M
            if (r0 == 0) goto L18
            android.view.Surface r4 = r9.L
            if (r4 == r0) goto L22
        L18:
            android.media.MediaCodec r0 = r9.y()
            if (r0 == 0) goto L22
            boolean r0 = r9.ag
            if (r0 == 0) goto L25
        L22:
            r9.Q = r2
            return r1
        L25:
            long r4 = r9.Q
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            r4 = 0
            if (r0 != 0) goto L2d
            return r4
        L2d:
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r7 = r9.Q
            int r0 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r0 >= 0) goto L38
            return r1
        L38:
            r9.Q = r2
            return r4
    }
}
