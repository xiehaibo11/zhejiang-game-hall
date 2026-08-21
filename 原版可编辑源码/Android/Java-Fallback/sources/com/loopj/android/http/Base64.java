package com.loopj.android.http;

public class Base64 {
    public static final int CRLF = 4;
    public static final int DEFAULT = 0;
    public static final int NO_CLOSE = 16;
    public static final int NO_PADDING = 1;
    public static final int NO_WRAP = 2;
    public static final int URL_SAFE = 8;

    static abstract class Coder {
        public int op;
        public byte[] output;

        Coder() {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract int maxOutputSize(int r1);

        public abstract boolean process(byte[] r1, int r2, int r3, boolean r4);
    }

    static class Decoder extends com.loopj.android.http.Base64.Coder {
        private static final int[] DECODE = null;
        private static final int[] DECODE_WEBSAFE = null;
        private static final int EQUALS = -2;
        private static final int SKIP = -1;
        private final int[] alphabet;
        private int state;
        private int value;

        static {
                r0 = 256(0x100, float:3.59E-43)
                int[] r1 = new int[r0]
                r1 = {x0012: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -2, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1} // fill-array
                com.loopj.android.http.Base64.Decoder.DECODE = r1
                int[] r0 = new int[r0]
                r0 = {x0216: FILL_ARRAY_DATA , data: [-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -2, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, 63, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1} // fill-array
                com.loopj.android.http.Base64.Decoder.DECODE_WEBSAFE = r0
                return
        }

        public Decoder(int r1, byte[] r2) {
                r0 = this;
                r0.<init>()
                r0.output = r2
                r1 = r1 & 8
                if (r1 != 0) goto Lc
                int[] r1 = com.loopj.android.http.Base64.Decoder.DECODE
                goto Le
            Lc:
                int[] r1 = com.loopj.android.http.Base64.Decoder.DECODE_WEBSAFE
            Le:
                r0.alphabet = r1
                r1 = 0
                r0.state = r1
                r0.value = r1
                return
        }

        @Override
        public int maxOutputSize(int r1) {
                r0 = this;
                int r1 = r1 * 3
                int r1 = r1 / 4
                int r1 = r1 + 10
                return r1
        }

        @Override
        public boolean process(byte[] r17, int r18, int r19, boolean r20) {
                r16 = this;
                r0 = r16
                int r1 = r0.state
                r2 = 0
                r3 = 6
                if (r1 != r3) goto L9
                return r2
            L9:
                int r4 = r19 + r18
                int r5 = r0.value
                byte[] r6 = r0.output
                int[] r7 = r0.alphabet
                r8 = r5
                r9 = 0
                r5 = r1
                r1 = r18
            L16:
                r10 = 3
                r11 = 4
                r12 = 2
                r13 = 1
                if (r1 >= r4) goto Lf1
                if (r5 != 0) goto L63
            L1e:
                int r14 = r1 + 4
                if (r14 > r4) goto L5f
                r8 = r17[r1]
                r8 = r8 & 255(0xff, float:3.57E-43)
                r8 = r7[r8]
                int r8 = r8 << 18
                int r15 = r1 + 1
                r15 = r17[r15]
                r15 = r15 & 255(0xff, float:3.57E-43)
                r15 = r7[r15]
                int r15 = r15 << 12
                r8 = r8 | r15
                int r15 = r1 + 2
                r15 = r17[r15]
                r15 = r15 & 255(0xff, float:3.57E-43)
                r15 = r7[r15]
                int r15 = r15 << r3
                r8 = r8 | r15
                int r15 = r1 + 3
                r15 = r17[r15]
                r15 = r15 & 255(0xff, float:3.57E-43)
                r15 = r7[r15]
                r8 = r8 | r15
                if (r8 < 0) goto L5f
                int r1 = r9 + 2
                byte r15 = (byte) r8
                r6[r1] = r15
                int r1 = r9 + 1
                int r15 = r8 >> 8
                byte r15 = (byte) r15
                r6[r1] = r15
                int r1 = r8 >> 16
                byte r1 = (byte) r1
                r6[r9] = r1
                int r9 = r9 + 3
                r1 = r14
                goto L1e
            L5f:
                if (r1 < r4) goto L63
                goto Lf1
            L63:
                int r14 = r1 + 1
                r1 = r17[r1]
                r1 = r1 & 255(0xff, float:3.57E-43)
                r1 = r7[r1]
                r15 = 5
                r2 = -1
                if (r5 == 0) goto Le1
                if (r5 == r13) goto Ld5
                r13 = -2
                if (r5 == r12) goto Lc1
                if (r5 == r10) goto L8e
                if (r5 == r11) goto L82
                if (r5 == r15) goto L7c
                goto Led
            L7c:
                if (r1 == r2) goto Led
                r0.state = r3
            L80:
                r10 = 0
                return r10
            L82:
                r10 = 0
                if (r1 != r13) goto L89
                int r5 = r5 + 1
                goto Led
            L89:
                if (r1 == r2) goto Led
                r0.state = r3
                return r10
            L8e:
                if (r1 < 0) goto La9
                int r2 = r8 << 6
                r1 = r1 | r2
                int r2 = r9 + 2
                byte r5 = (byte) r1
                r6[r2] = r5
                int r2 = r9 + 1
                int r5 = r1 >> 8
                byte r5 = (byte) r5
                r6[r2] = r5
                int r2 = r1 >> 16
                byte r2 = (byte) r2
                r6[r9] = r2
                int r9 = r9 + 3
                r8 = r1
                r5 = 0
                goto Led
            La9:
                if (r1 != r13) goto Lbb
                int r1 = r9 + 1
                int r2 = r8 >> 2
                byte r2 = (byte) r2
                r6[r1] = r2
                int r1 = r8 >> 10
                byte r1 = (byte) r1
                r6[r9] = r1
                int r9 = r9 + 2
                r5 = 5
                goto Led
            Lbb:
                if (r1 == r2) goto Led
                r0.state = r3
            Lbf:
                r1 = 0
                return r1
            Lc1:
                if (r1 < 0) goto Lc4
                goto Ld8
            Lc4:
                if (r1 != r13) goto Ld0
                int r1 = r9 + 1
                int r2 = r8 >> 4
                byte r2 = (byte) r2
                r6[r9] = r2
                r9 = r1
                r5 = 4
                goto Led
            Ld0:
                if (r1 == r2) goto Led
                r0.state = r3
                goto L80
            Ld5:
                r10 = 0
                if (r1 < 0) goto Ldc
            Ld8:
                int r2 = r8 << 6
                r1 = r1 | r2
                goto Le4
            Ldc:
                if (r1 == r2) goto Led
                r0.state = r3
                return r10
            Le1:
                r10 = 0
                if (r1 < 0) goto Le8
            Le4:
                int r5 = r5 + 1
                r8 = r1
                goto Led
            Le8:
                if (r1 == r2) goto Led
                r0.state = r3
                return r10
            Led:
                r1 = r14
                r2 = 0
                goto L16
            Lf1:
                if (r20 != 0) goto Lfa
                r0.state = r5
                r0.value = r8
                r0.op = r9
                return r13
            Lfa:
                if (r5 == 0) goto L123
                if (r5 == r13) goto L120
                if (r5 == r12) goto L117
                if (r5 == r10) goto L108
                if (r5 == r11) goto L105
                goto L123
            L105:
                r0.state = r3
                goto Lbf
            L108:
                int r1 = r9 + 1
                int r2 = r8 >> 10
                byte r2 = (byte) r2
                r6[r9] = r2
                int r9 = r1 + 1
                int r2 = r8 >> 2
                byte r2 = (byte) r2
                r6[r1] = r2
                goto L123
            L117:
                int r1 = r9 + 1
                int r2 = r8 >> 4
                byte r2 = (byte) r2
                r6[r9] = r2
                r9 = r1
                goto L123
            L120:
                r0.state = r3
                goto Lbf
            L123:
                r0.state = r5
                r0.op = r9
                return r13
        }
    }

    static class Encoder extends com.loopj.android.http.Base64.Coder {
        private static final byte[] ENCODE = null;
        private static final byte[] ENCODE_WEBSAFE = null;
        public static final int LINE_GROUPS = 19;
        private final byte[] alphabet;
        private int count;
        public final boolean do_cr;
        public final boolean do_newline;
        public final boolean do_padding;
        private final byte[] tail;
        int tailLen;

        static {
                r0 = 64
                byte[] r1 = new byte[r0]
                r1 = {x0012: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47} // fill-array
                com.loopj.android.http.Base64.Encoder.ENCODE = r1
                byte[] r0 = new byte[r0]
                r0 = {x0036: FILL_ARRAY_DATA , data: [65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 45, 95} // fill-array
                com.loopj.android.http.Base64.Encoder.ENCODE_WEBSAFE = r0
                return
        }

        public Encoder(int r3, byte[] r4) {
                r2 = this;
                r2.<init>()
                r2.output = r4
                r4 = r3 & 1
                r0 = 0
                r1 = 1
                if (r4 != 0) goto Ld
                r4 = 1
                goto Le
            Ld:
                r4 = 0
            Le:
                r2.do_padding = r4
                r4 = r3 & 2
                if (r4 != 0) goto L16
                r4 = 1
                goto L17
            L16:
                r4 = 0
            L17:
                r2.do_newline = r4
                r4 = r3 & 4
                if (r4 == 0) goto L1e
                goto L1f
            L1e:
                r1 = 0
            L1f:
                r2.do_cr = r1
                r3 = r3 & 8
                if (r3 != 0) goto L28
                byte[] r3 = com.loopj.android.http.Base64.Encoder.ENCODE
                goto L2a
            L28:
                byte[] r3 = com.loopj.android.http.Base64.Encoder.ENCODE_WEBSAFE
            L2a:
                r2.alphabet = r3
                r3 = 2
                byte[] r3 = new byte[r3]
                r2.tail = r3
                r2.tailLen = r0
                boolean r3 = r2.do_newline
                if (r3 == 0) goto L3a
                r3 = 19
                goto L3b
            L3a:
                r3 = -1
            L3b:
                r2.count = r3
                return
        }

        @Override
        public int maxOutputSize(int r1) {
                r0 = this;
                int r1 = r1 * 8
                int r1 = r1 / 5
                int r1 = r1 + 10
                return r1
        }

        @Override
        public boolean process(byte[] r18, int r19, int r20, boolean r21) {
                r17 = this;
                r0 = r17
                byte[] r1 = r0.alphabet
                byte[] r2 = r0.output
                int r3 = r0.count
                int r4 = r20 + r19
                int r5 = r0.tailLen
                r6 = -1
                r7 = 0
                r8 = 2
                r9 = 1
                if (r5 == 0) goto L53
                if (r5 == r9) goto L34
                if (r5 == r8) goto L17
                goto L53
            L17:
                int r5 = r19 + 1
                if (r5 > r4) goto L53
                byte[] r10 = r0.tail
                r11 = r10[r7]
                r11 = r11 & 255(0xff, float:3.57E-43)
                int r11 = r11 << 16
                r10 = r10[r9]
                r10 = r10 & 255(0xff, float:3.57E-43)
                int r10 = r10 << 8
                r10 = r10 | r11
                r11 = r18[r19]
                r11 = r11 & 255(0xff, float:3.57E-43)
                r10 = r10 | r11
                r0.tailLen = r7
                r11 = r5
                r5 = r10
                goto L56
            L34:
                int r5 = r19 + 2
                if (r5 > r4) goto L53
                byte[] r5 = r0.tail
                r5 = r5[r7]
                r5 = r5 & 255(0xff, float:3.57E-43)
                int r5 = r5 << 16
                int r10 = r19 + 1
                r11 = r18[r19]
                r11 = r11 & 255(0xff, float:3.57E-43)
                int r11 = r11 << 8
                r5 = r5 | r11
                int r11 = r10 + 1
                r10 = r18[r10]
                r10 = r10 & 255(0xff, float:3.57E-43)
                r5 = r5 | r10
                r0.tailLen = r7
                goto L56
            L53:
                r11 = r19
                r5 = -1
            L56:
                r12 = 4
                r13 = 13
                r14 = 10
                if (r5 == r6) goto L92
                int r6 = r5 >> 18
                r6 = r6 & 63
                r6 = r1[r6]
                r2[r7] = r6
                int r6 = r5 >> 12
                r6 = r6 & 63
                r6 = r1[r6]
                r2[r9] = r6
                int r6 = r5 >> 6
                r6 = r6 & 63
                r6 = r1[r6]
                r2[r8] = r6
                r5 = r5 & 63
                r5 = r1[r5]
                r6 = 3
                r2[r6] = r5
                int r3 = r3 + (-1)
                if (r3 != 0) goto L90
                boolean r3 = r0.do_cr
                if (r3 == 0) goto L88
                r3 = 5
                r2[r12] = r13
                goto L89
            L88:
                r3 = 4
            L89:
                int r5 = r3 + 1
                r2[r3] = r14
            L8d:
                r3 = 19
                goto L93
            L90:
                r5 = 4
                goto L93
            L92:
                r5 = 0
            L93:
                int r6 = r11 + 3
                if (r6 > r4) goto Le9
                r15 = r18[r11]
                r15 = r15 & 255(0xff, float:3.57E-43)
                int r15 = r15 << 16
                int r16 = r11 + 1
                r10 = r18[r16]
                r10 = r10 & 255(0xff, float:3.57E-43)
                int r10 = r10 << 8
                r10 = r10 | r15
                int r11 = r11 + 2
                r11 = r18[r11]
                r11 = r11 & 255(0xff, float:3.57E-43)
                r10 = r10 | r11
                int r11 = r10 >> 18
                r11 = r11 & 63
                r11 = r1[r11]
                r2[r5] = r11
                int r11 = r5 + 1
                int r15 = r10 >> 12
                r15 = r15 & 63
                r15 = r1[r15]
                r2[r11] = r15
                int r11 = r5 + 2
                int r15 = r10 >> 6
                r15 = r15 & 63
                r15 = r1[r15]
                r2[r11] = r15
                int r11 = r5 + 3
                r10 = r10 & 63
                r10 = r1[r10]
                r2[r11] = r10
                int r5 = r5 + 4
                int r3 = r3 + (-1)
                if (r3 != 0) goto Le7
                boolean r3 = r0.do_cr
                if (r3 == 0) goto Le0
                int r3 = r5 + 1
                r2[r5] = r13
                goto Le1
            Le0:
                r3 = r5
            Le1:
                int r5 = r3 + 1
                r2[r3] = r14
                r11 = r6
                goto L8d
            Le7:
                r11 = r6
                goto L93
            Le9:
                if (r21 == 0) goto L1bc
                int r6 = r0.tailLen
                int r10 = r11 - r6
                int r15 = r4 + (-1)
                if (r10 != r15) goto L13a
                if (r6 <= 0) goto Lfb
                byte[] r4 = r0.tail
                r4 = r4[r7]
                r7 = 1
                goto Lfd
            Lfb:
                r4 = r18[r11]
            Lfd:
                r4 = r4 & 255(0xff, float:3.57E-43)
                int r4 = r4 << r12
                int r6 = r0.tailLen
                int r6 = r6 - r7
                r0.tailLen = r6
                int r6 = r5 + 1
                int r7 = r4 >> 6
                r7 = r7 & 63
                r7 = r1[r7]
                r2[r5] = r7
                int r5 = r6 + 1
                r4 = r4 & 63
                r1 = r1[r4]
                r2[r6] = r1
                boolean r1 = r0.do_padding
                if (r1 == 0) goto L125
                int r1 = r5 + 1
                r4 = 61
                r2[r5] = r4
                int r5 = r1 + 1
                r2[r1] = r4
            L125:
                boolean r1 = r0.do_newline
                if (r1 == 0) goto L1e7
                boolean r1 = r0.do_cr
                if (r1 == 0) goto L132
                int r1 = r5 + 1
                r2[r5] = r13
                goto L133
            L132:
                r1 = r5
            L133:
                int r4 = r1 + 1
                r2[r1] = r14
            L137:
                r5 = r4
                goto L1e7
            L13a:
                int r10 = r11 - r6
                int r4 = r4 - r8
                if (r10 != r4) goto L1a3
                if (r6 <= r9) goto L147
                byte[] r4 = r0.tail
                r4 = r4[r7]
                r7 = 1
                goto L14d
            L147:
                int r4 = r11 + 1
                r6 = r18[r11]
                r11 = r4
                r4 = r6
            L14d:
                r4 = r4 & 255(0xff, float:3.57E-43)
                int r4 = r4 << r14
                int r6 = r0.tailLen
                if (r6 <= 0) goto L15c
                byte[] r6 = r0.tail
                int r10 = r7 + 1
                r6 = r6[r7]
                r7 = r10
                goto L15e
            L15c:
                r6 = r18[r11]
            L15e:
                r6 = r6 & 255(0xff, float:3.57E-43)
                int r6 = r6 << r8
                r4 = r4 | r6
                int r6 = r0.tailLen
                int r6 = r6 - r7
                r0.tailLen = r6
                int r6 = r5 + 1
                int r7 = r4 >> 12
                r7 = r7 & 63
                r7 = r1[r7]
                r2[r5] = r7
                int r5 = r6 + 1
                int r7 = r4 >> 6
                r7 = r7 & 63
                r7 = r1[r7]
                r2[r6] = r7
                int r6 = r5 + 1
                r4 = r4 & 63
                r1 = r1[r4]
                r2[r5] = r1
                boolean r1 = r0.do_padding
                if (r1 == 0) goto L18e
                int r1 = r6 + 1
                r4 = 61
                r2[r6] = r4
                goto L18f
            L18e:
                r1 = r6
            L18f:
                boolean r4 = r0.do_newline
                if (r4 == 0) goto L1a1
                boolean r4 = r0.do_cr
                if (r4 == 0) goto L19c
                int r4 = r1 + 1
                r2[r1] = r13
                r1 = r4
            L19c:
                int r4 = r1 + 1
                r2[r1] = r14
                goto L137
            L1a1:
                r5 = r1
                goto L1e7
            L1a3:
                boolean r1 = r0.do_newline
                if (r1 == 0) goto L1e7
                if (r5 <= 0) goto L1e7
                r1 = 19
                if (r3 == r1) goto L1e7
                boolean r1 = r0.do_cr
                if (r1 == 0) goto L1b6
                int r1 = r5 + 1
                r2[r5] = r13
                goto L1b7
            L1b6:
                r1 = r5
            L1b7:
                int r5 = r1 + 1
                r2[r1] = r14
                goto L1e7
            L1bc:
                int r1 = r4 + (-1)
                if (r11 != r1) goto L1cd
                byte[] r1 = r0.tail
                int r2 = r0.tailLen
                int r4 = r2 + 1
                r0.tailLen = r4
                r4 = r18[r11]
                r1[r2] = r4
                goto L1e7
            L1cd:
                int r4 = r4 - r8
                if (r11 != r4) goto L1e7
                byte[] r1 = r0.tail
                int r2 = r0.tailLen
                int r4 = r2 + 1
                r0.tailLen = r4
                r4 = r18[r11]
                r1[r2] = r4
                int r2 = r0.tailLen
                int r4 = r2 + 1
                r0.tailLen = r4
                int r11 = r11 + r9
                r4 = r18[r11]
                r1[r2] = r4
            L1e7:
                r0.op = r5
                r0.count = r3
                return r9
        }
    }

    private Base64() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] decode(java.lang.String r0, int r1) {
            byte[] r0 = r0.getBytes()
            byte[] r0 = decode(r0, r1)
            return r0
    }

    public static byte[] decode(byte[] r2, int r3) {
            int r0 = r2.length
            r1 = 0
            byte[] r2 = decode(r2, r1, r0, r3)
            return r2
    }

    public static byte[] decode(byte[] r2, int r3, int r4, int r5) {
            com.loopj.android.http.Base64$Decoder r0 = new com.loopj.android.http.Base64$Decoder
            int r1 = r4 * 3
            int r1 = r1 / 4
            byte[] r1 = new byte[r1]
            r0.<init>(r5, r1)
            r5 = 1
            boolean r2 = r0.process(r2, r3, r4, r5)
            if (r2 == 0) goto L29
            int r2 = r0.op
            byte[] r3 = r0.output
            int r3 = r3.length
            if (r2 != r3) goto L1c
            byte[] r2 = r0.output
            return r2
        L1c:
            int r2 = r0.op
            byte[] r2 = new byte[r2]
            byte[] r3 = r0.output
            int r4 = r0.op
            r5 = 0
            java.lang.System.arraycopy(r3, r5, r2, r5, r4)
            return r2
        L29:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "bad base-64"
            r2.<init>(r3)
            throw r2
    }

    public static byte[] encode(byte[] r2, int r3) {
            int r0 = r2.length
            r1 = 0
            byte[] r2 = encode(r2, r1, r0, r3)
            return r2
    }

    public static byte[] encode(byte[] r5, int r6, int r7, int r8) {
            com.loopj.android.http.Base64$Encoder r0 = new com.loopj.android.http.Base64$Encoder
            r1 = 0
            r0.<init>(r8, r1)
            int r8 = r7 / 3
            int r8 = r8 * 4
            boolean r1 = r0.do_padding
            r2 = 2
            r3 = 1
            if (r1 == 0) goto L17
            int r1 = r7 % 3
            if (r1 <= 0) goto L25
            int r8 = r8 + 4
            goto L25
        L17:
            int r1 = r7 % 3
            if (r1 == 0) goto L25
            if (r1 == r3) goto L23
            if (r1 == r2) goto L20
            goto L25
        L20:
            int r8 = r8 + 3
            goto L25
        L23:
            int r8 = r8 + 2
        L25:
            boolean r1 = r0.do_newline
            if (r1 == 0) goto L39
            if (r7 <= 0) goto L39
            int r1 = r7 + (-1)
            int r1 = r1 / 57
            int r1 = r1 + r3
            boolean r4 = r0.do_cr
            if (r4 == 0) goto L35
            goto L36
        L35:
            r2 = 1
        L36:
            int r1 = r1 * r2
            int r8 = r8 + r1
        L39:
            byte[] r8 = new byte[r8]
            r0.output = r8
            r0.process(r5, r6, r7, r3)
            byte[] r5 = r0.output
            return r5
    }

    public static java.lang.String encodeToString(byte[] r1, int r2) {
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> Lc
            byte[] r1 = encode(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> Lc
            java.lang.String r2 = "US-ASCII"
            r0.<init>(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> Lc
            return r0
        Lc:
            r1 = move-exception
            java.lang.AssertionError r2 = new java.lang.AssertionError
            r2.<init>(r1)
            throw r2
    }

    public static java.lang.String encodeToString(byte[] r1, int r2, int r3, int r4) {
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> Lc
            byte[] r1 = encode(r1, r2, r3, r4)     // Catch: java.io.UnsupportedEncodingException -> Lc
            java.lang.String r2 = "US-ASCII"
            r0.<init>(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> Lc
            return r0
        Lc:
            r1 = move-exception
            java.lang.AssertionError r2 = new java.lang.AssertionError
            r2.<init>(r1)
            throw r2
    }
}
