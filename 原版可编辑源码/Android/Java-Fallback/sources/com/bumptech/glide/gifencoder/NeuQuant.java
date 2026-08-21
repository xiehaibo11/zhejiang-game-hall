package com.bumptech.glide.gifencoder;

class NeuQuant {
    protected static final int alphabiasshift = 10;
    protected static final int alpharadbias = 262144;
    protected static final int alpharadbshift = 18;
    protected static final int beta = 64;
    protected static final int betagamma = 65536;
    protected static final int betashift = 10;
    protected static final int gamma = 1024;
    protected static final int gammashift = 10;
    protected static final int initalpha = 1024;
    protected static final int initrad = 32;
    protected static final int initradius = 2048;
    protected static final int intbias = 65536;
    protected static final int intbiasshift = 16;
    protected static final int maxnetpos = 255;
    protected static final int minpicturebytes = 1509;
    protected static final int ncycles = 100;
    protected static final int netbiasshift = 4;
    protected static final int netsize = 256;
    protected static final int prime1 = 499;
    protected static final int prime2 = 491;
    protected static final int prime3 = 487;
    protected static final int prime4 = 503;
    protected static final int radbias = 256;
    protected static final int radbiasshift = 8;
    protected static final int radiusbias = 64;
    protected static final int radiusbiasshift = 6;
    protected static final int radiusdec = 30;
    protected int alphadec;
    protected int[] bias;
    protected int[] freq;
    protected int lengthcount;
    protected int[] netindex;
    protected int[][] network;
    protected int[] radpower;
    protected int samplefac;
    protected byte[] thepicture;

    public NeuQuant(byte[] r4, int r5, int r6) {
            r3 = this;
            r3.<init>()
            r0 = 256(0x100, float:3.59E-43)
            int[] r1 = new int[r0]
            r3.netindex = r1
            int[] r1 = new int[r0]
            r3.bias = r1
            int[] r1 = new int[r0]
            r3.freq = r1
            r1 = 32
            int[] r1 = new int[r1]
            r3.radpower = r1
            r3.thepicture = r4
            r3.lengthcount = r5
            r3.samplefac = r6
            int[][] r4 = new int[r0][]
            r3.network = r4
            r4 = 0
            r5 = 0
        L23:
            if (r5 >= r0) goto L44
            int[][] r6 = r3.network
            r1 = 4
            int[] r1 = new int[r1]
            r6[r5] = r1
            r6 = r6[r5]
            r1 = 2
            int r2 = r5 << 12
            int r2 = r2 / r0
            r6[r1] = r2
            r1 = 1
            r6[r1] = r2
            r6[r4] = r2
            int[] r6 = r3.freq
            r6[r5] = r0
            int[] r6 = r3.bias
            r6[r5] = r4
            int r5 = r5 + 1
            goto L23
        L44:
            return
    }

    protected void alterneigh(int r15, int r16, int r17, int r18, int r19) {
            r14 = this;
            r0 = r14
            int r1 = r16 - r15
            r2 = -1
            if (r1 >= r2) goto L7
            r1 = -1
        L7:
            int r2 = r16 + r15
            r3 = 256(0x100, float:3.59E-43)
            if (r2 <= r3) goto Lf
            r2 = 256(0x100, float:3.59E-43)
        Lf:
            int r3 = r16 + 1
            r4 = 1
            int r5 = r16 + (-1)
            r6 = 1
        L15:
            if (r3 < r2) goto L1b
            if (r5 <= r1) goto L1a
            goto L1b
        L1a:
            return
        L1b:
            int[] r7 = r0.radpower
            int r8 = r6 + 1
            r6 = r7[r6]
            r7 = 2
            r9 = 0
            r10 = 262144(0x40000, float:3.67342E-40)
            if (r3 >= r2) goto L52
            int[][] r11 = r0.network
            int r12 = r3 + 1
            r3 = r11[r3]
            r11 = r3[r9]     // Catch: java.lang.Exception -> L51
            r13 = r3[r9]     // Catch: java.lang.Exception -> L51
            int r13 = r13 - r17
            int r13 = r13 * r6
            int r13 = r13 / r10
            int r11 = r11 - r13
            r3[r9] = r11     // Catch: java.lang.Exception -> L51
            r11 = r3[r4]     // Catch: java.lang.Exception -> L51
            r13 = r3[r4]     // Catch: java.lang.Exception -> L51
            int r13 = r13 - r18
            int r13 = r13 * r6
            int r13 = r13 / r10
            int r11 = r11 - r13
            r3[r4] = r11     // Catch: java.lang.Exception -> L51
            r11 = r3[r7]     // Catch: java.lang.Exception -> L51
            r13 = r3[r7]     // Catch: java.lang.Exception -> L51
            int r13 = r13 - r19
            int r13 = r13 * r6
            int r13 = r13 / r10
            int r11 = r11 - r13
            r3[r7] = r11     // Catch: java.lang.Exception -> L51
        L51:
            r3 = r12
        L52:
            if (r5 <= r1) goto L81
            int[][] r11 = r0.network
            int r12 = r5 + (-1)
            r5 = r11[r5]
            r11 = r5[r9]     // Catch: java.lang.Exception -> L7e
            r13 = r5[r9]     // Catch: java.lang.Exception -> L7e
            int r13 = r13 - r17
            int r13 = r13 * r6
            int r13 = r13 / r10
            int r11 = r11 - r13
            r5[r9] = r11     // Catch: java.lang.Exception -> L7e
            r9 = r5[r4]     // Catch: java.lang.Exception -> L7e
            r11 = r5[r4]     // Catch: java.lang.Exception -> L7e
            int r11 = r11 - r18
            int r11 = r11 * r6
            int r11 = r11 / r10
            int r9 = r9 - r11
            r5[r4] = r9     // Catch: java.lang.Exception -> L7e
            r9 = r5[r7]     // Catch: java.lang.Exception -> L7e
            r11 = r5[r7]     // Catch: java.lang.Exception -> L7e
            int r11 = r11 - r19
            int r6 = r6 * r11
            int r6 = r6 / r10
            int r9 = r9 - r6
            r5[r7] = r9     // Catch: java.lang.Exception -> L7e
        L7e:
            r6 = r8
            r5 = r12
            goto L15
        L81:
            r6 = r8
            goto L15
    }

    protected void altersingle(int r4, int r5, int r6, int r7, int r8) {
            r3 = this;
            int[][] r0 = r3.network
            r5 = r0[r5]
            r0 = 0
            r1 = r5[r0]
            r2 = r5[r0]
            int r2 = r2 - r6
            int r2 = r2 * r4
            int r2 = r2 / 1024
            int r1 = r1 - r2
            r5[r0] = r1
            r6 = 1
            r0 = r5[r6]
            r1 = r5[r6]
            int r1 = r1 - r7
            int r1 = r1 * r4
            int r1 = r1 / 1024
            int r0 = r0 - r1
            r5[r6] = r0
            r6 = 2
            r7 = r5[r6]
            r0 = r5[r6]
            int r0 = r0 - r8
            int r4 = r4 * r0
            int r4 = r4 / 1024
            int r7 = r7 - r4
            r5[r6] = r7
            return
    }

    public byte[] colorMap() {
            r11 = this;
            r0 = 768(0x300, float:1.076E-42)
            byte[] r0 = new byte[r0]
            r1 = 256(0x100, float:3.59E-43)
            int[] r2 = new int[r1]
            r3 = 0
            r4 = 0
        La:
            if (r4 >= r1) goto L18
            int[][] r5 = r11.network
            r5 = r5[r4]
            r6 = 3
            r5 = r5[r6]
            r2[r5] = r4
            int r4 = r4 + 1
            goto La
        L18:
            r4 = 0
            r5 = 0
        L1a:
            if (r4 >= r1) goto L41
            r6 = r2[r4]
            int r7 = r5 + 1
            int[][] r8 = r11.network
            r9 = r8[r6]
            r9 = r9[r3]
            byte r9 = (byte) r9
            r0[r5] = r9
            int r5 = r7 + 1
            r9 = r8[r6]
            r10 = 1
            r9 = r9[r10]
            byte r9 = (byte) r9
            r0[r7] = r9
            int r7 = r5 + 1
            r6 = r8[r6]
            r8 = 2
            r6 = r6[r8]
            byte r6 = (byte) r6
            r0[r5] = r6
            int r4 = r4 + 1
            r5 = r7
            goto L1a
        L41:
            return r0
    }

    protected int contest(int r10, int r11, int r12) {
            r9 = this;
            r0 = 0
            r1 = 2147483647(0x7fffffff, float:NaN)
            r2 = -1
            r2 = 2147483647(0x7fffffff, float:NaN)
            r3 = -1
            r4 = -1
            r5 = 0
        Lb:
            r6 = 256(0x100, float:3.59E-43)
            if (r5 >= r6) goto L4f
            int[][] r6 = r9.network
            r6 = r6[r5]
            r7 = r6[r0]
            int r7 = r7 - r10
            if (r7 >= 0) goto L19
            int r7 = -r7
        L19:
            r8 = 1
            r8 = r6[r8]
            int r8 = r8 - r11
            if (r8 >= 0) goto L20
            int r8 = -r8
        L20:
            int r7 = r7 + r8
            r8 = 2
            r6 = r6[r8]
            int r6 = r6 - r12
            if (r6 >= 0) goto L28
            int r6 = -r6
        L28:
            int r7 = r7 + r6
            if (r7 >= r1) goto L2d
            r3 = r5
            r1 = r7
        L2d:
            int[] r6 = r9.bias
            r6 = r6[r5]
            int r6 = r6 >> 12
            int r7 = r7 - r6
            if (r7 >= r2) goto L38
            r4 = r5
            r2 = r7
        L38:
            int[] r6 = r9.freq
            r7 = r6[r5]
            int r7 = r7 >> 10
            r8 = r6[r5]
            int r8 = r8 - r7
            r6[r5] = r8
            int[] r6 = r9.bias
            r8 = r6[r5]
            int r7 = r7 << 10
            int r8 = r8 + r7
            r6[r5] = r8
            int r5 = r5 + 1
            goto Lb
        L4f:
            int[] r10 = r9.freq
            r11 = r10[r3]
            int r11 = r11 + 64
            r10[r3] = r11
            int[] r10 = r9.bias
            r11 = r10[r3]
            r12 = 65536(0x10000, float:9.1835E-41)
            int r11 = r11 - r12
            r10[r3] = r11
            return r4
    }

    public void inxbuild() {
            r13 = this;
            r0 = 0
            r1 = 0
            r2 = 0
            r3 = 0
        L4:
            r4 = 256(0x100, float:3.59E-43)
            r5 = 1
            if (r1 >= r4) goto L60
            int[][] r6 = r13.network
            r6 = r6[r1]
            r7 = r6[r5]
            int r8 = r1 + 1
            r10 = r1
            r9 = r8
        L13:
            if (r9 >= r4) goto L23
            int[][] r11 = r13.network
            r11 = r11[r9]
            r12 = r11[r5]
            if (r12 >= r7) goto L20
            r7 = r11[r5]
            r10 = r9
        L20:
            int r9 = r9 + 1
            goto L13
        L23:
            int[][] r4 = r13.network
            r4 = r4[r10]
            if (r1 == r10) goto L4b
            r9 = r4[r0]
            r10 = r6[r0]
            r4[r0] = r10
            r6[r0] = r9
            r9 = r4[r5]
            r10 = r6[r5]
            r4[r5] = r10
            r6[r5] = r9
            r9 = 2
            r10 = r4[r9]
            r11 = r6[r9]
            r4[r9] = r11
            r6[r9] = r10
            r9 = 3
            r10 = r4[r9]
            r11 = r6[r9]
            r4[r9] = r11
            r6[r9] = r10
        L4b:
            if (r7 == r2) goto L5e
            int[] r4 = r13.netindex
            int r3 = r3 + r1
            int r3 = r3 >> r5
            r4[r2] = r3
        L53:
            int r2 = r2 + 1
            if (r2 >= r7) goto L5c
            int[] r3 = r13.netindex
            r3[r2] = r1
            goto L53
        L5c:
            r3 = r1
            r2 = r7
        L5e:
            r1 = r8
            goto L4
        L60:
            int[] r0 = r13.netindex
            r1 = 255(0xff, float:3.57E-43)
            int r3 = r3 + r1
            int r3 = r3 >> r5
            r0[r2] = r3
            int r2 = r2 + r5
        L69:
            if (r2 >= r4) goto L72
            int[] r0 = r13.netindex
            r0[r2] = r1
            int r2 = r2 + 1
            goto L69
        L72:
            return
    }

    public void learn() {
            r23 = this;
            r6 = r23
            int r0 = r6.lengthcount
            r1 = 1509(0x5e5, float:2.115E-42)
            r7 = 1
            if (r0 >= r1) goto Lb
            r6.samplefac = r7
        Lb:
            int r0 = r6.samplefac
            int r2 = r0 + (-1)
            r3 = 3
            int r2 = r2 / r3
            int r2 = r2 + 30
            r6.alphadec = r2
            byte[] r8 = r6.thepicture
            int r9 = r6.lengthcount
            int r0 = r0 * 3
            int r10 = r9 / r0
            int r0 = r10 / 100
            r2 = 2048(0x800, float:2.87E-42)
            r4 = 32
            r11 = 0
            r5 = 0
        L25:
            r12 = 1024(0x400, float:1.435E-42)
            if (r5 >= r4) goto L39
            int[] r13 = r6.radpower
            int r14 = r5 * r5
            int r14 = 1024 - r14
            int r14 = r14 * 256
            int r14 = r14 / r12
            int r12 = r12 * r14
            r13[r5] = r12
            int r5 = r5 + 1
            goto L25
        L39:
            int r5 = r6.lengthcount
            if (r5 >= r1) goto L3f
            r13 = 3
            goto L5c
        L3f:
            int r3 = r5 % 499
            if (r3 == 0) goto L48
            r1 = 1497(0x5d9, float:2.098E-42)
            r13 = 1497(0x5d9, float:2.098E-42)
            goto L5c
        L48:
            int r3 = r5 % 491
            if (r3 == 0) goto L51
            r1 = 1473(0x5c1, float:2.064E-42)
            r13 = 1473(0x5c1, float:2.064E-42)
            goto L5c
        L51:
            int r5 = r5 % 487
            if (r5 == 0) goto L5a
            r1 = 1461(0x5b5, float:2.047E-42)
            r13 = 1461(0x5b5, float:2.047E-42)
            goto L5c
        L5a:
            r13 = 1509(0x5e5, float:2.115E-42)
        L5c:
            r12 = r0
            r5 = 0
            r14 = 2048(0x800, float:2.87E-42)
            r15 = 32
            r16 = 1024(0x400, float:1.435E-42)
            r17 = 0
        L66:
            if (r5 >= r10) goto Le1
            int r0 = r17 + 0
            r0 = r8[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r4 = r0 << 4
            int r0 = r17 + 1
            r0 = r8[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r3 = r0 << 4
            int r0 = r17 + 2
            r0 = r8[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r2 = r0 << 4
            int r18 = r6.contest(r4, r3, r2)
            r0 = r23
            r1 = r16
            r19 = r2
            r2 = r18
            r20 = r3
            r3 = r4
            r21 = r4
            r4 = r20
            r22 = r5
            r5 = r19
            r0.altersingle(r1, r2, r3, r4, r5)
            if (r15 == 0) goto Laa
            r0 = r23
            r1 = r15
            r2 = r18
            r3 = r21
            r4 = r20
            r5 = r19
            r0.alterneigh(r1, r2, r3, r4, r5)
        Laa:
            int r0 = r17 + r13
            if (r0 < r9) goto Lb1
            int r1 = r6.lengthcount
            int r0 = r0 - r1
        Lb1:
            r17 = r0
            int r5 = r22 + 1
            if (r12 != 0) goto Lb8
            r12 = 1
        Lb8:
            int r0 = r5 % r12
            if (r0 != 0) goto L66
            int r0 = r6.alphadec
            int r0 = r16 / r0
            int r16 = r16 - r0
            int r0 = r14 / 30
            int r14 = r14 - r0
            int r0 = r14 >> 6
            if (r0 > r7) goto Lcb
            r15 = 0
            goto Lcc
        Lcb:
            r15 = r0
        Lcc:
            r0 = 0
        Lcd:
            if (r0 >= r15) goto L66
            int[] r1 = r6.radpower
            int r2 = r15 * r15
            int r3 = r0 * r0
            int r3 = r2 - r3
            int r3 = r3 * 256
            int r3 = r3 / r2
            int r3 = r3 * r16
            r1[r0] = r3
            int r0 = r0 + 1
            goto Lcd
        Le1:
            return
    }

    public int map(int r13, int r14, int r15) {
            r12 = this;
            int[] r0 = r12.netindex
            r0 = r0[r14]
            int r1 = r0 + (-1)
            r2 = -1
            r3 = 1000(0x3e8, float:1.401E-42)
            r4 = -1
        La:
            r5 = 256(0x100, float:3.59E-43)
            if (r0 < r5) goto L12
            if (r1 < 0) goto L11
            goto L12
        L11:
            return r4
        L12:
            r6 = 3
            r7 = 2
            r8 = 0
            r9 = 1
            if (r0 >= r5) goto L3e
            int[][] r10 = r12.network
            r10 = r10[r0]
            r11 = r10[r9]
            int r11 = r11 - r14
            if (r11 < r3) goto L24
            r0 = 256(0x100, float:3.59E-43)
            goto L3e
        L24:
            int r0 = r0 + 1
            if (r11 >= 0) goto L29
            int r11 = -r11
        L29:
            r5 = r10[r8]
            int r5 = r5 - r13
            if (r5 >= 0) goto L2f
            int r5 = -r5
        L2f:
            int r11 = r11 + r5
            if (r11 >= r3) goto L3e
            r5 = r10[r7]
            int r5 = r5 - r15
            if (r5 >= 0) goto L38
            int r5 = -r5
        L38:
            int r11 = r11 + r5
            if (r11 >= r3) goto L3e
            r4 = r10[r6]
            r3 = r11
        L3e:
            if (r1 < 0) goto La
            int[][] r5 = r12.network
            r5 = r5[r1]
            r9 = r5[r9]
            int r9 = r14 - r9
            if (r9 < r3) goto L4c
            r1 = -1
            goto La
        L4c:
            int r1 = r1 + (-1)
            if (r9 >= 0) goto L51
            int r9 = -r9
        L51:
            r8 = r5[r8]
            int r8 = r8 - r13
            if (r8 >= 0) goto L57
            int r8 = -r8
        L57:
            int r9 = r9 + r8
            if (r9 >= r3) goto La
            r7 = r5[r7]
            int r7 = r7 - r15
            if (r7 >= 0) goto L60
            int r7 = -r7
        L60:
            int r7 = r7 + r9
            if (r7 >= r3) goto La
            r4 = r5[r6]
            r3 = r7
            goto La
    }

    public byte[] process() {
            r1 = this;
            r1.learn()
            r1.unbiasnet()
            r1.inxbuild()
            byte[] r0 = r1.colorMap()
            return r0
    }

    public void unbiasnet() {
            r6 = this;
            r0 = 0
            r1 = 0
        L2:
            r2 = 256(0x100, float:3.59E-43)
            if (r1 >= r2) goto L2a
            int[][] r2 = r6.network
            r3 = r2[r1]
            r4 = r3[r0]
            int r4 = r4 >> 4
            r3[r0] = r4
            r3 = r2[r1]
            r4 = 1
            r5 = r3[r4]
            int r5 = r5 >> 4
            r3[r4] = r5
            r3 = r2[r1]
            r4 = 2
            r5 = r3[r4]
            int r5 = r5 >> 4
            r3[r4] = r5
            r2 = r2[r1]
            r3 = 3
            r2[r3] = r1
            int r1 = r1 + 1
            goto L2
        L2a:
            return
    }
}
