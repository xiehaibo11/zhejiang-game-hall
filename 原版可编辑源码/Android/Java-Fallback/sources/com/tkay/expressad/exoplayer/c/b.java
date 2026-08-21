package com.tkay.expressad.exoplayer.c;

public final class b {
    public byte[] a;
    public byte[] b;
    public int c;
    public int[] d;
    public int[] e;
    public int f;
    public int g;
    public int h;
    private final android.media.MediaCodec.CryptoInfo i;
    private final com.tkay.expressad.exoplayer.c.b.a j;

    static class 1 {
    }

    private static final class a {
        private final android.media.MediaCodec.CryptoInfo a;
        private final android.media.MediaCodec.CryptoInfo.Pattern b;

        private a(android.media.MediaCodec.CryptoInfo r2) {
                r1 = this;
                r1.<init>()
                r1.a = r2
                android.media.MediaCodec$CryptoInfo$Pattern r2 = new android.media.MediaCodec$CryptoInfo$Pattern
                r0 = 0
                r2.<init>(r0, r0)
                r1.b = r2
                return
        }

        a(android.media.MediaCodec.CryptoInfo r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private void a(int r2, int r3) {
                r1 = this;
                android.media.MediaCodec$CryptoInfo$Pattern r0 = r1.b
                r0.set(r2, r3)
                android.media.MediaCodec$CryptoInfo r2 = r1.a
                android.media.MediaCodec$CryptoInfo$Pattern r3 = r1.b
                r2.setPattern(r3)
                return
        }

        static void a(com.tkay.expressad.exoplayer.c.b.a r1, int r2, int r3) {
                android.media.MediaCodec$CryptoInfo$Pattern r0 = r1.b
                r0.set(r2, r3)
                android.media.MediaCodec$CryptoInfo r2 = r1.a
                android.media.MediaCodec$CryptoInfo$Pattern r1 = r1.b
                r2.setPattern(r1)
                return
        }
    }

    public b() {
            r3 = this;
            r3.<init>()
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 0
            r2 = 16
            if (r0 < r2) goto L10
            android.media.MediaCodec$CryptoInfo r0 = new android.media.MediaCodec$CryptoInfo
            r0.<init>()
            goto L11
        L10:
            r0 = r1
        L11:
            r3.i = r0
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 24
            if (r0 < r2) goto L21
            com.tkay.expressad.exoplayer.c.b$a r1 = new com.tkay.expressad.exoplayer.c.b$a
            android.media.MediaCodec$CryptoInfo r0 = r3.i
            r2 = 0
            r1.<init>(r0, r2)
        L21:
            r3.j = r1
            return
    }

    private static android.media.MediaCodec.CryptoInfo b() {
            android.media.MediaCodec$CryptoInfo r0 = new android.media.MediaCodec$CryptoInfo
            r0.<init>()
            return r0
    }

    private void c() {
            r3 = this;
            android.media.MediaCodec$CryptoInfo r0 = r3.i
            int r1 = r3.f
            r0.numSubSamples = r1
            android.media.MediaCodec$CryptoInfo r0 = r3.i
            int[] r1 = r3.d
            r0.numBytesOfClearData = r1
            android.media.MediaCodec$CryptoInfo r0 = r3.i
            int[] r1 = r3.e
            r0.numBytesOfEncryptedData = r1
            android.media.MediaCodec$CryptoInfo r0 = r3.i
            byte[] r1 = r3.b
            r0.key = r1
            android.media.MediaCodec$CryptoInfo r0 = r3.i
            byte[] r1 = r3.a
            r0.iv = r1
            android.media.MediaCodec$CryptoInfo r0 = r3.i
            int r1 = r3.c
            r0.mode = r1
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 24
            if (r0 < r1) goto L33
            com.tkay.expressad.exoplayer.c.b$a r0 = r3.j
            int r1 = r3.g
            int r2 = r3.h
            com.tkay.expressad.exoplayer.c.b.a.a(r0, r1, r2)
        L33:
            return
    }

    public final android.media.MediaCodec.CryptoInfo a() {
            r1 = this;
            android.media.MediaCodec$CryptoInfo r0 = r1.i
            return r0
    }

    public final void a(int r1, int[] r2, int[] r3, byte[] r4, byte[] r5, int r6, int r7, int r8) {
            r0 = this;
            r0.f = r1
            r0.d = r2
            r0.e = r3
            r0.b = r4
            r0.a = r5
            r0.c = r6
            r0.g = r7
            r0.h = r8
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 16
            if (r1 < r2) goto L49
            android.media.MediaCodec$CryptoInfo r1 = r0.i
            int r2 = r0.f
            r1.numSubSamples = r2
            android.media.MediaCodec$CryptoInfo r1 = r0.i
            int[] r2 = r0.d
            r1.numBytesOfClearData = r2
            android.media.MediaCodec$CryptoInfo r1 = r0.i
            int[] r2 = r0.e
            r1.numBytesOfEncryptedData = r2
            android.media.MediaCodec$CryptoInfo r1 = r0.i
            byte[] r2 = r0.b
            r1.key = r2
            android.media.MediaCodec$CryptoInfo r1 = r0.i
            byte[] r2 = r0.a
            r1.iv = r2
            android.media.MediaCodec$CryptoInfo r1 = r0.i
            int r2 = r0.c
            r1.mode = r2
            int r1 = com.tkay.expressad.exoplayer.k.af.a
            r2 = 24
            if (r1 < r2) goto L49
            com.tkay.expressad.exoplayer.c.b$a r1 = r0.j
            int r2 = r0.g
            int r3 = r0.h
            com.tkay.expressad.exoplayer.c.b.a.a(r1, r2, r3)
        L49:
            return
    }
}
