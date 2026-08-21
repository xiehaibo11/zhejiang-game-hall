package org.bouncycastle.crypto.digests;

public abstract class LongDigest implements org.bouncycastle.crypto.ExtendedDigest {
    private static final int BYTE_LENGTH = 128;
    static final long[] K = null;
    protected long H1;
    protected long H2;
    protected long H3;
    protected long H4;
    protected long H5;
    protected long H6;
    protected long H7;
    protected long H8;
    private long[] W;
    private long byteCount1;
    private long byteCount2;
    private int wOff;
    private byte[] xBuf;
    private int xBufOff;

    static {
            r0 = 80
            long[] r0 = new long[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [4794697086780616226, 8158064640168781261, -5349999486874862801, -1606136188198331460, 4131703408338449720, 6480981068601479193, -7908458776815382629, -6116909921290321640, -2880145864133508542, 1334009975649890238, 2608012711638119052, 6128411473006802146, 8268148722764581231, -9160688886553864527, -7215885187991268811, -4495734319001033068, -1973867731355612462, -1171420211273849373, 1135362057144423861, 2597628984639134821, 3308224258029322869, 5365058923640841347, 6679025012923562964, 8573033837759648693, -7476448914759557205, -6327057829258317296, -5763719355590565569, -4658551843659510044, -4116276920077217854, -3051310485924567259, 489312712824947311, 1452737877330783856, 2861767655752347644, 3322285676063803686, 5560940570517711597, 5996557281743188959, 7280758554555802590, 8532644243296465576, -9096487096722542874, -7894198246740708037, -6719396339535248540, -6333637450476146687, -4446306890439682159, -4076793802049405392, -3345356375505022440, -2983346525034927856, -860691631967231958, 1182934255886127544, 1847814050463011016, 2177327727835720531, 2830643537854262169, 3796741975233480872, 4115178125766777443, 5681478168544905931, 6601373596472566643, 7507060721942968483, 8399075790359081724, 8693463985226723168, -8878714635349349518, -8302665154208450068, -8016688836872298968, -6606660893046293015, -4685533653050689259, -4147400797238176981, -3880063495543823972, -3348786107499101689, -1523767162380948706, -757361751448694408, 500013540394364858, 748580250866718886, 1242879168328830382, 1977374033974150939, 2944078676154940804, 3659926193048069267, 4368137639120453308, 4836135668995329356, 5532061633213252278, 6448918945643986474, 6902733635092675308, 7801388544844847127} // fill-array
            org.bouncycastle.crypto.digests.LongDigest.K = r0
            return
    }

    protected LongDigest() {
            r1 = this;
            r1.<init>()
            r0 = 80
            long[] r0 = new long[r0]
            r1.W = r0
            r0 = 8
            byte[] r0 = new byte[r0]
            r1.xBuf = r0
            r0 = 0
            r1.xBufOff = r0
            r1.reset()
            return
    }

    protected LongDigest(org.bouncycastle.crypto.digests.LongDigest r5) {
            r4 = this;
            r4.<init>()
            r0 = 80
            long[] r0 = new long[r0]
            r4.W = r0
            byte[] r0 = r5.xBuf
            int r0 = r0.length
            byte[] r0 = new byte[r0]
            r4.xBuf = r0
            byte[] r1 = r5.xBuf
            int r2 = r1.length
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r0, r3, r2)
            int r0 = r5.xBufOff
            r4.xBufOff = r0
            long r0 = r5.byteCount1
            r4.byteCount1 = r0
            long r0 = r5.byteCount2
            r4.byteCount2 = r0
            long r0 = r5.H1
            r4.H1 = r0
            long r0 = r5.H2
            r4.H2 = r0
            long r0 = r5.H3
            r4.H3 = r0
            long r0 = r5.H4
            r4.H4 = r0
            long r0 = r5.H5
            r4.H5 = r0
            long r0 = r5.H6
            r4.H6 = r0
            long r0 = r5.H7
            r4.H7 = r0
            long r0 = r5.H8
            r4.H8 = r0
            long[] r0 = r5.W
            long[] r1 = r4.W
            int r2 = r0.length
            java.lang.System.arraycopy(r0, r3, r1, r3, r2)
            int r5 = r5.wOff
            r4.wOff = r5
            return
    }

    private long Ch(long r1, long r3, long r5) {
            r0 = this;
            long r3 = r3 & r1
            long r1 = ~r1
            long r1 = r1 & r5
            long r1 = r1 ^ r3
            return r1
    }

    private long Maj(long r3, long r5, long r7) {
            r2 = this;
            long r0 = r3 & r5
            long r3 = r3 & r7
            long r3 = r3 ^ r0
            long r5 = r5 & r7
            long r3 = r3 ^ r5
            return r3
    }

    private long Sigma0(long r7) {
            r6 = this;
            r0 = 63
            long r0 = r7 << r0
            r2 = 1
            long r2 = r7 >>> r2
            long r0 = r0 | r2
            r2 = 56
            long r2 = r7 << r2
            r4 = 8
            long r4 = r7 >>> r4
            long r2 = r2 | r4
            long r0 = r0 ^ r2
            r2 = 7
            long r7 = r7 >>> r2
            long r7 = r7 ^ r0
            return r7
    }

    private long Sigma1(long r7) {
            r6 = this;
            r0 = 45
            long r0 = r7 << r0
            r2 = 19
            long r2 = r7 >>> r2
            long r0 = r0 | r2
            r2 = 3
            long r2 = r7 << r2
            r4 = 61
            long r4 = r7 >>> r4
            long r2 = r2 | r4
            long r0 = r0 ^ r2
            r2 = 6
            long r7 = r7 >>> r2
            long r7 = r7 ^ r0
            return r7
    }

    private long Sum0(long r7) {
            r6 = this;
            r0 = 36
            long r0 = r7 << r0
            r2 = 28
            long r2 = r7 >>> r2
            long r0 = r0 | r2
            r2 = 30
            long r2 = r7 << r2
            r4 = 34
            long r4 = r7 >>> r4
            long r2 = r2 | r4
            long r0 = r0 ^ r2
            r2 = 25
            long r2 = r7 << r2
            r4 = 39
            long r7 = r7 >>> r4
            long r7 = r7 | r2
            long r7 = r7 ^ r0
            return r7
    }

    private long Sum1(long r7) {
            r6 = this;
            r0 = 50
            long r0 = r7 << r0
            r2 = 14
            long r2 = r7 >>> r2
            long r0 = r0 | r2
            r2 = 46
            long r2 = r7 << r2
            r4 = 18
            long r4 = r7 >>> r4
            long r2 = r2 | r4
            long r0 = r0 ^ r2
            r2 = 23
            long r2 = r7 << r2
            r4 = 41
            long r7 = r7 >>> r4
            long r7 = r7 | r2
            long r7 = r7 ^ r0
            return r7
    }

    private void adjustByteCounts() {
            r8 = this;
            long r0 = r8.byteCount1
            r2 = 2305843009213693951(0x1fffffffffffffff, double:1.4916681462400412E-154)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L17
            long r4 = r8.byteCount2
            r6 = 61
            long r6 = r0 >>> r6
            long r4 = r4 + r6
            r8.byteCount2 = r4
            long r0 = r0 & r2
            r8.byteCount1 = r0
        L17:
            return
    }

    public void finish() {
            r5 = this;
            r5.adjustByteCounts()
            long r0 = r5.byteCount1
            r2 = 3
            long r0 = r0 << r2
            long r2 = r5.byteCount2
            r4 = -128(0xffffffffffffff80, float:NaN)
        Lb:
            r5.update(r4)
            int r4 = r5.xBufOff
            if (r4 == 0) goto L14
            r4 = 0
            goto Lb
        L14:
            r5.processLength(r0, r2)
            r5.processBlock()
            return
    }

    @Override
    public int getByteLength() {
            r1 = this;
            r0 = 128(0x80, float:1.8E-43)
            return r0
    }

    protected void processBlock() {
            r34 = this;
            r7 = r34
            r34.adjustByteCounts()
            r0 = 16
        L7:
            r1 = 79
            if (r0 > r1) goto L31
            long[] r1 = r7.W
            int r2 = r0 + (-2)
            r2 = r1[r2]
            long r2 = r7.Sigma1(r2)
            long[] r4 = r7.W
            int r5 = r0 + (-7)
            r5 = r4[r5]
            long r2 = r2 + r5
            int r5 = r0 + (-15)
            r5 = r4[r5]
            long r4 = r7.Sigma0(r5)
            long r2 = r2 + r4
            long[] r4 = r7.W
            int r5 = r0 + (-16)
            r5 = r4[r5]
            long r2 = r2 + r5
            r1[r0] = r2
            int r0 = r0 + 1
            goto L7
        L31:
            long r0 = r7.H1
            long r2 = r7.H2
            long r4 = r7.H3
            long r9 = r7.H4
            long r11 = r7.H5
            long r13 = r7.H6
            r15 = r9
            long r8 = r7.H7
            r17 = r0
            long r0 = r7.H8
            r21 = r13
            r19 = r15
            r23 = 0
            r13 = r2
            r15 = r4
            r5 = r11
            r3 = 0
            r11 = r0
            r32 = r8
            r8 = r17
            r17 = r32
        L55:
            r0 = 10
            if (r3 >= r0) goto L218
            long r24 = r7.Sum1(r5)
            r0 = r34
            r1 = r5
            r26 = r3
            r3 = r21
            r27 = r5
            r5 = r17
            long r0 = r0.Ch(r1, r3, r5)
            long r24 = r24 + r0
            long[] r0 = org.bouncycastle.crypto.digests.LongDigest.K
            r1 = r0[r23]
            long r24 = r24 + r1
            long[] r0 = r7.W
            int r29 = r23 + 1
            r1 = r0[r23]
            long r24 = r24 + r1
            long r11 = r11 + r24
            long r5 = r19 + r11
            long r19 = r7.Sum0(r8)
            r0 = r34
            r1 = r8
            r3 = r13
            r30 = r5
            r5 = r15
            long r0 = r0.Maj(r1, r3, r5)
            long r19 = r19 + r0
            long r11 = r11 + r19
            r5 = r30
            long r19 = r7.Sum1(r5)
            r0 = r34
            r1 = r5
            r3 = r27
            r23 = r5
            r5 = r21
            long r0 = r0.Ch(r1, r3, r5)
            long r19 = r19 + r0
            long[] r0 = org.bouncycastle.crypto.digests.LongDigest.K
            r1 = r0[r29]
            long r19 = r19 + r1
            long[] r0 = r7.W
            int r25 = r29 + 1
            r1 = r0[r29]
            long r19 = r19 + r1
            long r17 = r17 + r19
            long r5 = r15 + r17
            long r15 = r7.Sum0(r11)
            r0 = r34
            r1 = r11
            r3 = r8
            r19 = r11
            r10 = r5
            r5 = r13
            long r0 = r0.Maj(r1, r3, r5)
            long r15 = r15 + r0
            long r5 = r17 + r15
            long r15 = r7.Sum1(r10)
            r0 = r34
            r1 = r10
            r3 = r23
            r17 = r10
            r10 = r5
            r5 = r27
            long r0 = r0.Ch(r1, r3, r5)
            long r15 = r15 + r0
            long[] r0 = org.bouncycastle.crypto.digests.LongDigest.K
            r1 = r0[r25]
            long r15 = r15 + r1
            long[] r0 = r7.W
            int r12 = r25 + 1
            r1 = r0[r25]
            long r15 = r15 + r1
            long r21 = r21 + r15
            long r13 = r13 + r21
            long r15 = r7.Sum0(r10)
            r0 = r34
            r1 = r10
            r3 = r19
            r5 = r8
            long r0 = r0.Maj(r1, r3, r5)
            long r15 = r15 + r0
            long r5 = r21 + r15
            long r15 = r7.Sum1(r13)
            r0 = r34
            r1 = r13
            r3 = r17
            r21 = r13
            r13 = r5
            r5 = r23
            long r0 = r0.Ch(r1, r3, r5)
            long r15 = r15 + r0
            long[] r0 = org.bouncycastle.crypto.digests.LongDigest.K
            r1 = r0[r12]
            long r15 = r15 + r1
            long[] r0 = r7.W
            int r25 = r12 + 1
            r1 = r0[r12]
            long r15 = r15 + r1
            long r15 = r27 + r15
            long r8 = r8 + r15
            long r27 = r7.Sum0(r13)
            r0 = r34
            r1 = r13
            r3 = r10
            r5 = r19
            long r0 = r0.Maj(r1, r3, r5)
            long r27 = r27 + r0
            long r5 = r15 + r27
            long r15 = r7.Sum1(r8)
            r0 = r34
            r1 = r8
            r3 = r21
            r27 = r8
            r8 = r5
            r5 = r17
            long r0 = r0.Ch(r1, r3, r5)
            long r15 = r15 + r0
            long[] r0 = org.bouncycastle.crypto.digests.LongDigest.K
            r1 = r0[r25]
            long r15 = r15 + r1
            long[] r0 = r7.W
            int r12 = r25 + 1
            r1 = r0[r25]
            long r15 = r15 + r1
            long r15 = r23 + r15
            long r5 = r19 + r15
            long r19 = r7.Sum0(r8)
            r0 = r34
            r1 = r8
            r3 = r13
            r23 = r13
            r13 = r5
            r5 = r10
            long r0 = r0.Maj(r1, r3, r5)
            long r19 = r19 + r0
            long r5 = r15 + r19
            long r15 = r7.Sum1(r13)
            r0 = r34
            r1 = r13
            r3 = r27
            r19 = r13
            r13 = r5
            r5 = r21
            long r0 = r0.Ch(r1, r3, r5)
            long r15 = r15 + r0
            long[] r0 = org.bouncycastle.crypto.digests.LongDigest.K
            r1 = r0[r12]
            long r15 = r15 + r1
            long[] r0 = r7.W
            int r25 = r12 + 1
            r1 = r0[r12]
            long r15 = r15 + r1
            long r15 = r17 + r15
            long r10 = r10 + r15
            long r17 = r7.Sum0(r13)
            r0 = r34
            r1 = r13
            r3 = r8
            r5 = r23
            long r0 = r0.Maj(r1, r3, r5)
            long r17 = r17 + r0
            long r5 = r15 + r17
            long r15 = r7.Sum1(r10)
            r0 = r34
            r1 = r10
            r3 = r19
            r17 = r10
            r10 = r5
            r5 = r27
            long r0 = r0.Ch(r1, r3, r5)
            long r15 = r15 + r0
            long[] r0 = org.bouncycastle.crypto.digests.LongDigest.K
            r1 = r0[r25]
            long r15 = r15 + r1
            long[] r0 = r7.W
            int r12 = r25 + 1
            r1 = r0[r25]
            long r15 = r15 + r1
            long r15 = r21 + r15
            long r5 = r23 + r15
            long r21 = r7.Sum0(r10)
            r0 = r34
            r1 = r10
            r3 = r13
            r23 = r13
            r13 = r5
            r5 = r8
            long r0 = r0.Maj(r1, r3, r5)
            long r21 = r21 + r0
            long r5 = r15 + r21
            long r15 = r7.Sum1(r13)
            r0 = r34
            r1 = r13
            r3 = r17
            r21 = r13
            r13 = r5
            r5 = r19
            long r0 = r0.Ch(r1, r3, r5)
            long r15 = r15 + r0
            long[] r0 = org.bouncycastle.crypto.digests.LongDigest.K
            r1 = r0[r12]
            long r15 = r15 + r1
            long[] r0 = r7.W
            int r25 = r12 + 1
            r1 = r0[r12]
            long r15 = r15 + r1
            long r15 = r27 + r15
            long r8 = r8 + r15
            long r27 = r7.Sum0(r13)
            r0 = r34
            r1 = r13
            r3 = r10
            r5 = r23
            long r0 = r0.Maj(r1, r3, r5)
            long r27 = r27 + r0
            long r0 = r15 + r27
            int r3 = r26 + 1
            r5 = r8
            r15 = r10
            r11 = r19
            r19 = r23
            r23 = r25
            r8 = r0
            goto L55
        L218:
            r27 = r5
            long r0 = r7.H1
            long r0 = r0 + r8
            r7.H1 = r0
            long r0 = r7.H2
            long r0 = r0 + r13
            r7.H2 = r0
            long r0 = r7.H3
            long r0 = r0 + r15
            r7.H3 = r0
            long r0 = r7.H4
            long r0 = r0 + r19
            r7.H4 = r0
            long r0 = r7.H5
            long r0 = r0 + r27
            r7.H5 = r0
            long r0 = r7.H6
            long r0 = r0 + r21
            r7.H6 = r0
            long r0 = r7.H7
            long r0 = r0 + r17
            r7.H7 = r0
            long r0 = r7.H8
            long r0 = r0 + r11
            r7.H8 = r0
            r0 = 0
            r7.wOff = r0
            r0 = 16
            r10 = 0
        L24c:
            if (r10 >= r0) goto L257
            long[] r1 = r7.W
            r2 = 0
            r1[r10] = r2
            int r10 = r10 + 1
            goto L24c
        L257:
            return
    }

    protected void processLength(long r3, long r5) {
            r2 = this;
            int r0 = r2.wOff
            r1 = 14
            if (r0 <= r1) goto L9
            r2.processBlock()
        L9:
            long[] r0 = r2.W
            r0[r1] = r5
            r5 = 15
            r0[r5] = r3
            return
    }

    protected void processWord(byte[] r10, int r11) {
            r9 = this;
            long[] r0 = r9.W
            int r1 = r9.wOff
            int r2 = r1 + 1
            r9.wOff = r2
            r3 = r10[r11]
            r3 = r3 & 255(0xff, float:3.57E-43)
            long r3 = (long) r3
            r5 = 56
            long r3 = r3 << r5
            int r5 = r11 + 1
            r5 = r10[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            long r5 = (long) r5
            r7 = 48
            long r5 = r5 << r7
            long r3 = r3 | r5
            int r5 = r11 + 2
            r5 = r10[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            long r5 = (long) r5
            r7 = 40
            long r5 = r5 << r7
            long r3 = r3 | r5
            int r5 = r11 + 3
            r5 = r10[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            long r5 = (long) r5
            r7 = 32
            long r5 = r5 << r7
            long r3 = r3 | r5
            int r5 = r11 + 4
            r5 = r10[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            long r5 = (long) r5
            r7 = 24
            long r5 = r5 << r7
            long r3 = r3 | r5
            int r5 = r11 + 5
            r5 = r10[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            long r5 = (long) r5
            r7 = 16
            long r5 = r5 << r7
            long r3 = r3 | r5
            int r5 = r11 + 6
            r5 = r10[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            long r5 = (long) r5
            r8 = 8
            long r5 = r5 << r8
            long r3 = r3 | r5
            int r11 = r11 + 7
            r10 = r10[r11]
            r10 = r10 & 255(0xff, float:3.57E-43)
            long r10 = (long) r10
            long r10 = r10 | r3
            r0[r1] = r10
            if (r2 != r7) goto L61
            r9.processBlock()
        L61:
            return
    }

    @Override
    public void reset() {
            r6 = this;
            r0 = 0
            r6.byteCount1 = r0
            r6.byteCount2 = r0
            r2 = 0
            r6.xBufOff = r2
            r3 = 0
        La:
            byte[] r4 = r6.xBuf
            int r5 = r4.length
            if (r3 >= r5) goto L14
            r4[r3] = r2
            int r3 = r3 + 1
            goto La
        L14:
            r6.wOff = r2
        L16:
            long[] r3 = r6.W
            int r4 = r3.length
            if (r2 == r4) goto L20
            r3[r2] = r0
            int r2 = r2 + 1
            goto L16
        L20:
            return
    }

    protected void unpackWord(long r4, byte[] r6, int r7) {
            r3 = this;
            r0 = 56
            long r0 = r4 >>> r0
            int r1 = (int) r0
            byte r0 = (byte) r1
            r6[r7] = r0
            int r0 = r7 + 1
            r1 = 48
            long r1 = r4 >>> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r0 = r7 + 2
            r1 = 40
            long r1 = r4 >>> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r0 = r7 + 3
            r1 = 32
            long r1 = r4 >>> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r0 = r7 + 4
            r1 = 24
            long r1 = r4 >>> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r0 = r7 + 5
            r1 = 16
            long r1 = r4 >>> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r0 = r7 + 6
            r1 = 8
            long r1 = r4 >>> r1
            int r2 = (int) r1
            byte r1 = (byte) r2
            r6[r0] = r1
            int r7 = r7 + 7
            int r5 = (int) r4
            byte r4 = (byte) r5
            r6[r7] = r4
            return
    }

    @Override
    public void update(byte r5) {
            r4 = this;
            byte[] r0 = r4.xBuf
            int r1 = r4.xBufOff
            int r2 = r1 + 1
            r4.xBufOff = r2
            r0[r1] = r5
            int r5 = r0.length
            if (r2 != r5) goto L13
            r5 = 0
            r4.processWord(r0, r5)
            r4.xBufOff = r5
        L13:
            long r0 = r4.byteCount1
            r2 = 1
            long r0 = r0 + r2
            r4.byteCount1 = r0
            return
    }

    @Override
    public void update(byte[] r6, int r7, int r8) {
            r5 = this;
        L0:
            int r0 = r5.xBufOff
            if (r0 == 0) goto L10
            if (r8 <= 0) goto L10
            r0 = r6[r7]
            r5.update(r0)
            int r7 = r7 + 1
            int r8 = r8 + (-1)
            goto L0
        L10:
            byte[] r0 = r5.xBuf
            int r0 = r0.length
            if (r8 <= r0) goto L26
            r5.processWord(r6, r7)
            byte[] r0 = r5.xBuf
            int r1 = r0.length
            int r7 = r7 + r1
            int r1 = r0.length
            int r8 = r8 - r1
            long r1 = r5.byteCount1
            int r0 = r0.length
            long r3 = (long) r0
            long r1 = r1 + r3
            r5.byteCount1 = r1
            goto L10
        L26:
            if (r8 <= 0) goto L32
            r0 = r6[r7]
            r5.update(r0)
            int r7 = r7 + 1
            int r8 = r8 + (-1)
            goto L26
        L32:
            return
    }
}
