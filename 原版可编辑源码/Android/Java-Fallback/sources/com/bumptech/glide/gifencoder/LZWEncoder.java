package com.bumptech.glide.gifencoder;

class LZWEncoder {
    static final int BITS = 12;
    private static final int EOF = -1;
    static final int HSIZE = 5003;
    int ClearCode;
    int EOFCode;
    int a_count;
    byte[] accum;
    boolean clear_flg;
    int[] codetab;
    private int curPixel;
    int cur_accum;
    int cur_bits;
    int free_ent;
    int g_init_bits;
    int hsize;
    int[] htab;
    private int imgH;
    private int imgW;
    private int initCodeSize;
    int[] masks;
    int maxbits;
    int maxcode;
    int maxmaxcode;
    int n_bits;
    private byte[] pixAry;
    private int remaining;

    LZWEncoder(int r3, int r4, byte[] r5, int r6) {
            r2 = this;
            r2.<init>()
            r0 = 12
            r2.maxbits = r0
            r0 = 4096(0x1000, float:5.74E-42)
            r2.maxmaxcode = r0
            r0 = 5003(0x138b, float:7.01E-42)
            int[] r1 = new int[r0]
            r2.htab = r1
            int[] r1 = new int[r0]
            r2.codetab = r1
            r2.hsize = r0
            r0 = 0
            r2.free_ent = r0
            r2.clear_flg = r0
            r2.cur_accum = r0
            r2.cur_bits = r0
            r0 = 17
            int[] r0 = new int[r0]
            r0 = {x003e: FILL_ARRAY_DATA , data: [0, 1, 3, 7, 15, 31, 63, 127, 255, 511, 1023, 2047, 4095, 8191, 16383, 32767, 65535} // fill-array
            r2.masks = r0
            r0 = 256(0x100, float:3.59E-43)
            byte[] r0 = new byte[r0]
            r2.accum = r0
            r2.imgW = r3
            r2.imgH = r4
            r2.pixAry = r5
            r3 = 2
            int r3 = java.lang.Math.max(r3, r6)
            r2.initCodeSize = r3
            return
    }

    private int nextPixel() {
            r3 = this;
            int r0 = r3.remaining
            if (r0 != 0) goto L6
            r0 = -1
            return r0
        L6:
            int r0 = r0 + (-1)
            r3.remaining = r0
            byte[] r0 = r3.pixAry
            int r1 = r3.curPixel
            int r2 = r1 + 1
            r3.curPixel = r2
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            return r0
    }

    final int MAXCODE(int r2) {
            r1 = this;
            r0 = 1
            int r2 = r0 << r2
            int r2 = r2 - r0
            return r2
    }

    void char_out(byte r4, java.io.OutputStream r5) throws java.io.IOException {
            r3 = this;
            byte[] r0 = r3.accum
            int r1 = r3.a_count
            int r2 = r1 + 1
            r3.a_count = r2
            r0[r1] = r4
            r4 = 254(0xfe, float:3.56E-43)
            if (r2 < r4) goto L11
            r3.flush_char(r5)
        L11:
            return
    }

    void cl_block(java.io.OutputStream r3) throws java.io.IOException {
            r2 = this;
            int r0 = r2.hsize
            r2.cl_hash(r0)
            int r0 = r2.ClearCode
            int r1 = r0 + 2
            r2.free_ent = r1
            r1 = 1
            r2.clear_flg = r1
            r2.output(r0, r3)
            return
    }

    void cl_hash(int r4) {
            r3 = this;
            r0 = 0
        L1:
            if (r0 >= r4) goto Lb
            int[] r1 = r3.htab
            r2 = -1
            r1[r0] = r2
            int r0 = r0 + 1
            goto L1
        Lb:
            return
    }

    void compress(int r10, java.io.OutputStream r11) throws java.io.IOException {
            r9 = this;
            r9.g_init_bits = r10
            r0 = 0
            r9.clear_flg = r0
            r9.n_bits = r10
            int r1 = r9.MAXCODE(r10)
            r9.maxcode = r1
            r1 = 1
            int r10 = r10 - r1
            int r10 = r1 << r10
            r9.ClearCode = r10
            int r2 = r10 + 1
            r9.EOFCode = r2
            int r10 = r10 + 2
            r9.free_ent = r10
            r9.a_count = r0
            int r10 = r9.nextPixel()
            int r2 = r9.hsize
        L23:
            r3 = 65536(0x10000, float:9.1835E-41)
            if (r2 >= r3) goto L2c
            int r0 = r0 + 1
            int r2 = r2 * 2
            goto L23
        L2c:
            int r0 = 8 - r0
            int r2 = r9.hsize
            r9.cl_hash(r2)
            int r3 = r9.ClearCode
            r9.output(r3, r11)
        L38:
            int r3 = r9.nextPixel()
            r4 = -1
            if (r3 == r4) goto L89
            int r4 = r9.maxbits
            int r4 = r3 << r4
            int r4 = r4 + r10
            int r5 = r3 << r0
            r5 = r5 ^ r10
            int[] r6 = r9.htab
            r7 = r6[r5]
            if (r7 != r4) goto L52
            int[] r10 = r9.codetab
            r10 = r10[r5]
            goto L38
        L52:
            r6 = r6[r5]
            if (r6 < 0) goto L6e
            int r6 = r2 - r5
            if (r5 != 0) goto L5b
            r6 = 1
        L5b:
            int r5 = r5 - r6
            if (r5 >= 0) goto L5f
            int r5 = r5 + r2
        L5f:
            int[] r7 = r9.htab
            r8 = r7[r5]
            if (r8 != r4) goto L6a
            int[] r10 = r9.codetab
            r10 = r10[r5]
            goto L38
        L6a:
            r7 = r7[r5]
            if (r7 >= 0) goto L5b
        L6e:
            r9.output(r10, r11)
            int r10 = r9.free_ent
            int r6 = r9.maxmaxcode
            if (r10 >= r6) goto L84
            int[] r6 = r9.codetab
            int r7 = r10 + 1
            r9.free_ent = r7
            r6[r5] = r10
            int[] r10 = r9.htab
            r10[r5] = r4
            goto L87
        L84:
            r9.cl_block(r11)
        L87:
            r10 = r3
            goto L38
        L89:
            r9.output(r10, r11)
            int r10 = r9.EOFCode
            r9.output(r10, r11)
            return
    }

    void encode(java.io.OutputStream r3) throws java.io.IOException {
            r2 = this;
            int r0 = r2.initCodeSize
            r3.write(r0)
            int r0 = r2.imgW
            int r1 = r2.imgH
            int r0 = r0 * r1
            r2.remaining = r0
            r0 = 0
            r2.curPixel = r0
            int r1 = r2.initCodeSize
            int r1 = r1 + 1
            r2.compress(r1, r3)
            r3.write(r0)
            return
    }

    void flush_char(java.io.OutputStream r4) throws java.io.IOException {
            r3 = this;
            int r0 = r3.a_count
            if (r0 <= 0) goto L11
            r4.write(r0)
            byte[] r0 = r3.accum
            int r1 = r3.a_count
            r2 = 0
            r4.write(r0, r2, r1)
            r3.a_count = r2
        L11:
            return
    }

    void output(int r4, java.io.OutputStream r5) throws java.io.IOException {
            r3 = this;
            int r0 = r3.cur_accum
            int[] r1 = r3.masks
            int r2 = r3.cur_bits
            r1 = r1[r2]
            r0 = r0 & r1
            r3.cur_accum = r0
            if (r2 <= 0) goto L13
            int r1 = r4 << r2
            r0 = r0 | r1
            r3.cur_accum = r0
            goto L15
        L13:
            r3.cur_accum = r4
        L15:
            int r0 = r3.cur_bits
            int r1 = r3.n_bits
            int r0 = r0 + r1
            r3.cur_bits = r0
        L1c:
            int r0 = r3.cur_bits
            r1 = 8
            if (r0 < r1) goto L35
            int r0 = r3.cur_accum
            r0 = r0 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r3.char_out(r0, r5)
            int r0 = r3.cur_accum
            int r0 = r0 >> r1
            r3.cur_accum = r0
            int r0 = r3.cur_bits
            int r0 = r0 - r1
            r3.cur_bits = r0
            goto L1c
        L35:
            int r0 = r3.free_ent
            int r2 = r3.maxcode
            if (r0 > r2) goto L3f
            boolean r0 = r3.clear_flg
            if (r0 == 0) goto L66
        L3f:
            boolean r0 = r3.clear_flg
            if (r0 == 0) goto L51
            int r0 = r3.g_init_bits
            r3.n_bits = r0
            int r0 = r3.MAXCODE(r0)
            r3.maxcode = r0
            r0 = 0
            r3.clear_flg = r0
            goto L66
        L51:
            int r0 = r3.n_bits
            int r0 = r0 + 1
            r3.n_bits = r0
            int r2 = r3.maxbits
            if (r0 != r2) goto L60
            int r0 = r3.maxmaxcode
            r3.maxcode = r0
            goto L66
        L60:
            int r0 = r3.MAXCODE(r0)
            r3.maxcode = r0
        L66:
            int r0 = r3.EOFCode
            if (r4 != r0) goto L84
        L6a:
            int r4 = r3.cur_bits
            if (r4 <= 0) goto L81
            int r4 = r3.cur_accum
            r4 = r4 & 255(0xff, float:3.57E-43)
            byte r4 = (byte) r4
            r3.char_out(r4, r5)
            int r4 = r3.cur_accum
            int r4 = r4 >> r1
            r3.cur_accum = r4
            int r4 = r3.cur_bits
            int r4 = r4 - r1
            r3.cur_bits = r4
            goto L6a
        L81:
            r3.flush_char(r5)
        L84:
            return
    }
}
