package org.bouncycastle.crypto.engines;

public class DESEngine implements org.bouncycastle.crypto.BlockCipher {
    protected static final int BLOCK_SIZE = 8;
    private static final short[] Df_Key = null;
    private static final int[] SP1 = null;
    private static final int[] SP2 = null;
    private static final int[] SP3 = null;
    private static final int[] SP4 = null;
    private static final int[] SP5 = null;
    private static final int[] SP6 = null;
    private static final int[] SP7 = null;
    private static final int[] SP8 = null;
    private static final int[] bigbyte = null;
    private static final short[] bytebit = null;
    private static final byte[] pc1 = null;
    private static final byte[] pc2 = null;
    private static final byte[] totrot = null;
    private int[] workingKey;

    static {
            r0 = 24
            short[] r1 = new short[r0]
            r1 = {x0070: FILL_ARRAY_DATA , data: [1, 35, 69, 103, 137, 171, 205, 239, 254, 220, 186, 152, 118, 84, 50, 16, 137, 171, 205, 239, 1, 35, 69, 103} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.Df_Key = r1
            r1 = 8
            short[] r1 = new short[r1]
            r1 = {x008c: FILL_ARRAY_DATA , data: [128, 64, 32, 16, 8, 4, 2, 1} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.bytebit = r1
            int[] r0 = new int[r0]
            r0 = {x0098: FILL_ARRAY_DATA , data: [8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.bigbyte = r0
            r0 = 56
            byte[] r0 = new byte[r0]
            r0 = {x00cc: FILL_ARRAY_DATA , data: [56, 48, 40, 32, 24, 16, 8, 0, 57, 49, 41, 33, 25, 17, 9, 1, 58, 50, 42, 34, 26, 18, 10, 2, 59, 51, 43, 35, 62, 54, 46, 38, 30, 22, 14, 6, 61, 53, 45, 37, 29, 21, 13, 5, 60, 52, 44, 36, 28, 20, 12, 4, 27, 19, 11, 3} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.pc1 = r0
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x00ec: FILL_ARRAY_DATA , data: [1, 2, 4, 6, 8, 10, 12, 14, 15, 17, 19, 21, 23, 25, 27, 28} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.totrot = r0
            r0 = 48
            byte[] r0 = new byte[r0]
            r0 = {x00f8: FILL_ARRAY_DATA , data: [13, 16, 10, 23, 0, 4, 2, 27, 14, 5, 20, 9, 22, 18, 11, 3, 25, 7, 15, 6, 26, 19, 12, 1, 40, 51, 30, 36, 46, 54, 29, 39, 50, 44, 32, 47, 43, 48, 38, 55, 33, 52, 45, 41, 49, 35, 28, 31} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.pc2 = r0
            r0 = 64
            int[] r1 = new int[r0]
            r1 = {x0114: FILL_ARRAY_DATA , data: [16843776, 0, 65536, 16843780, 16842756, 66564, 4, 65536, 1024, 16843776, 16843780, 1024, 16778244, 16842756, 16777216, 4, 1028, 16778240, 16778240, 66560, 66560, 16842752, 16842752, 16778244, 65540, 16777220, 16777220, 65540, 0, 1028, 66564, 16777216, 65536, 16843780, 4, 16842752, 16843776, 16777216, 16777216, 1024, 16842756, 65536, 66560, 16777220, 1024, 4, 16778244, 66564, 16843780, 65540, 16842752, 16778244, 16777220, 1028, 66564, 16843776, 1028, 16778240, 16778240, 0, 65540, 66560, 0, 16842756} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.SP1 = r1
            int[] r1 = new int[r0]
            r1 = {x0198: FILL_ARRAY_DATA , data: [-2146402272, -2147450880, 32768, 1081376, 1048576, 32, -2146435040, -2147450848, -2147483616, -2146402272, -2146402304, -2147483648, -2147450880, 1048576, 32, -2146435040, 1081344, 1048608, -2147450848, 0, -2147483648, 32768, 1081376, -2146435072, 1048608, -2147483616, 0, 1081344, 32800, -2146402304, -2146435072, 32800, 0, 1081376, -2146435040, 1048576, -2147450848, -2146435072, -2146402304, 32768, -2146435072, -2147450880, 32, -2146402272, 1081376, 32, 32768, -2147483648, 32800, -2146402304, 1048576, -2147483616, 1048608, -2147450848, -2147483616, 1048608, 1081344, 0, -2147450880, 32800, -2147483648, -2146435040, -2146402272, 1081344} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.SP2 = r1
            int[] r1 = new int[r0]
            r1 = {x021c: FILL_ARRAY_DATA , data: [520, 134349312, 0, 134348808, 134218240, 0, 131592, 134218240, 131080, 134217736, 134217736, 131072, 134349320, 131080, 134348800, 520, 134217728, 8, 134349312, 512, 131584, 134348800, 134348808, 131592, 134218248, 131584, 131072, 134218248, 8, 134349320, 512, 134217728, 134349312, 134217728, 131080, 520, 131072, 134349312, 134218240, 0, 512, 131080, 134349320, 134218240, 134217736, 512, 0, 134348808, 134218248, 131072, 134217728, 134349320, 8, 131592, 131584, 134217736, 134348800, 134218248, 520, 134348800, 131592, 8, 134348808, 131584} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.SP3 = r1
            int[] r1 = new int[r0]
            r1 = {x02a0: FILL_ARRAY_DATA , data: [8396801, 8321, 8321, 128, 8396928, 8388737, 8388609, 8193, 0, 8396800, 8396800, 8396929, 129, 0, 8388736, 8388609, 1, 8192, 8388608, 8396801, 128, 8388608, 8193, 8320, 8388737, 1, 8320, 8388736, 8192, 8396928, 8396929, 129, 8388736, 8388609, 8396800, 8396929, 129, 0, 0, 8396800, 8320, 8388736, 8388737, 1, 8396801, 8321, 8321, 128, 8396929, 129, 1, 8192, 8388609, 8193, 8396928, 8388737, 8193, 8320, 8388608, 8396801, 128, 8388608, 8192, 8396928} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.SP4 = r1
            int[] r1 = new int[r0]
            r1 = {x0324: FILL_ARRAY_DATA , data: [256, 34078976, 34078720, 1107296512, 524288, 256, 1073741824, 34078720, 1074266368, 524288, 33554688, 1074266368, 1107296512, 1107820544, 524544, 1073741824, 33554432, 1074266112, 1074266112, 0, 1073742080, 1107820800, 1107820800, 33554688, 1107820544, 1073742080, 0, 1107296256, 34078976, 33554432, 1107296256, 524544, 524288, 1107296512, 256, 33554432, 1073741824, 34078720, 1107296512, 1074266368, 33554688, 1073741824, 1107820544, 34078976, 1074266368, 256, 33554432, 1107820544, 1107820800, 524544, 1107296256, 1107820800, 34078720, 0, 1074266112, 1107296256, 524544, 33554688, 1073742080, 524288, 0, 1074266112, 34078976, 1073742080} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.SP5 = r1
            int[] r1 = new int[r0]
            r1 = {x03a8: FILL_ARRAY_DATA , data: [536870928, 541065216, 16384, 541081616, 541065216, 16, 541081616, 4194304, 536887296, 4210704, 4194304, 536870928, 4194320, 536887296, 536870912, 16400, 0, 4194320, 536887312, 16384, 4210688, 536887312, 16, 541065232, 541065232, 0, 4210704, 541081600, 16400, 4210688, 541081600, 536870912, 536887296, 16, 541065232, 4210688, 541081616, 4194304, 16400, 536870928, 4194304, 536887296, 536870912, 16400, 536870928, 541081616, 4210688, 541065216, 4210704, 541081600, 0, 541065232, 16, 16384, 541065216, 4210704, 16384, 4194320, 536887312, 0, 541081600, 536870912, 4194320, 536887312} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.SP6 = r1
            int[] r1 = new int[r0]
            r1 = {x042c: FILL_ARRAY_DATA , data: [2097152, 69206018, 67110914, 0, 2048, 67110914, 2099202, 69208064, 69208066, 2097152, 0, 67108866, 2, 67108864, 69206018, 2050, 67110912, 2099202, 2097154, 67110912, 67108866, 69206016, 69208064, 2097154, 69206016, 2048, 2050, 69208066, 2099200, 2, 67108864, 2099200, 67108864, 2099200, 2097152, 67110914, 67110914, 69206018, 69206018, 2, 2097154, 67108864, 67110912, 2097152, 69208064, 2050, 2099202, 69208064, 2050, 67108866, 69208066, 69206016, 2099200, 0, 2, 69208066, 0, 2099202, 69206016, 2048, 67108866, 67110912, 2048, 2097154} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.SP7 = r1
            int[] r0 = new int[r0]
            r0 = {x04b0: FILL_ARRAY_DATA , data: [268439616, 4096, 262144, 268701760, 268435456, 268439616, 64, 268435456, 262208, 268697600, 268701760, 266240, 268701696, 266304, 4096, 64, 268697600, 268435520, 268439552, 4160, 266240, 262208, 268697664, 268701696, 4160, 0, 0, 268697664, 268435520, 268439552, 266304, 262144, 266304, 262144, 268701696, 4096, 64, 268697664, 4096, 266304, 268439552, 64, 268435520, 268697600, 268697664, 268435456, 262144, 268439616, 0, 268701760, 262208, 268435520, 268697600, 268439552, 268439616, 0, 268701760, 266240, 266240, 4160, 4160, 262208, 268435456, 268701696} // fill-array
            org.bouncycastle.crypto.engines.DESEngine.SP8 = r0
            return
    }

    public DESEngine() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.workingKey = r0
            return
    }

    protected void desFunc(int[] r21, byte[] r22, int r23, byte[] r24, int r25) {
            r20 = this;
            int r0 = r23 + 0
            r0 = r22[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 24
            int r1 = r23 + 1
            r1 = r22[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 16
            r0 = r0 | r1
            int r1 = r23 + 2
            r1 = r22[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r2 = 8
            int r1 = r1 << r2
            r0 = r0 | r1
            int r1 = r23 + 3
            r1 = r22[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r0 = r0 | r1
            int r1 = r23 + 4
            r1 = r22[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 24
            int r3 = r23 + 5
            r3 = r22[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << 16
            r1 = r1 | r3
            int r3 = r23 + 6
            r3 = r22[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r3 = r3 << r2
            r1 = r1 | r3
            int r3 = r23 + 7
            r3 = r22[r3]
            r3 = r3 & 255(0xff, float:3.57E-43)
            r1 = r1 | r3
            int r3 = r0 >>> 4
            r3 = r3 ^ r1
            r4 = 252645135(0xf0f0f0f, float:7.0533445E-30)
            r3 = r3 & r4
            r1 = r1 ^ r3
            int r3 = r3 << 4
            r0 = r0 ^ r3
            int r3 = r0 >>> 16
            r3 = r3 ^ r1
            r5 = 65535(0xffff, float:9.1834E-41)
            r3 = r3 & r5
            r1 = r1 ^ r3
            int r3 = r3 << 16
            r0 = r0 ^ r3
            int r3 = r1 >>> 2
            r3 = r3 ^ r0
            r6 = 858993459(0x33333333, float:4.172325E-8)
            r3 = r3 & r6
            r0 = r0 ^ r3
            int r3 = r3 << 2
            r1 = r1 ^ r3
            int r3 = r1 >>> 8
            r3 = r3 ^ r0
            r7 = 16711935(0xff00ff, float:2.3418409E-38)
            r3 = r3 & r7
            r0 = r0 ^ r3
            int r3 = r3 << r2
            r1 = r1 ^ r3
            int r3 = r1 << 1
            int r1 = r1 >>> 31
            r1 = r1 & 1
            r1 = r1 | r3
            r1 = r1 & (-1)
            r3 = r0 ^ r1
            r8 = -1431655766(0xffffffffaaaaaaaa, float:-3.0316488E-13)
            r3 = r3 & r8
            r0 = r0 ^ r3
            r1 = r1 ^ r3
            int r3 = r0 << 1
            int r0 = r0 >>> 31
            r0 = r0 & 1
            r0 = r0 | r3
            r0 = r0 & (-1)
            r3 = 0
        L88:
            if (r3 >= r2) goto L129
            int r9 = r1 << 28
            int r10 = r1 >>> 4
            r9 = r9 | r10
            int r10 = r3 * 4
            int r11 = r10 + 0
            r11 = r21[r11]
            r9 = r9 ^ r11
            int[] r11 = org.bouncycastle.crypto.engines.DESEngine.SP7
            r12 = r9 & 63
            r12 = r11[r12]
            int[] r13 = org.bouncycastle.crypto.engines.DESEngine.SP5
            int r14 = r9 >>> 8
            r14 = r14 & 63
            r14 = r13[r14]
            r12 = r12 | r14
            int[] r14 = org.bouncycastle.crypto.engines.DESEngine.SP3
            int r15 = r9 >>> 16
            r15 = r15 & 63
            r15 = r14[r15]
            r12 = r12 | r15
            int[] r15 = org.bouncycastle.crypto.engines.DESEngine.SP1
            int r9 = r9 >>> 24
            r9 = r9 & 63
            r9 = r15[r9]
            r9 = r9 | r12
            int r12 = r10 + 1
            r12 = r21[r12]
            r12 = r12 ^ r1
            int[] r16 = org.bouncycastle.crypto.engines.DESEngine.SP8
            r17 = r12 & 63
            r17 = r16[r17]
            r9 = r9 | r17
            int[] r17 = org.bouncycastle.crypto.engines.DESEngine.SP6
            int r18 = r12 >>> 8
            r18 = r18 & 63
            r18 = r17[r18]
            r9 = r9 | r18
            int[] r18 = org.bouncycastle.crypto.engines.DESEngine.SP4
            int r19 = r12 >>> 16
            r19 = r19 & 63
            r19 = r18[r19]
            r9 = r9 | r19
            int[] r19 = org.bouncycastle.crypto.engines.DESEngine.SP2
            int r12 = r12 >>> 24
            r12 = r12 & 63
            r12 = r19[r12]
            r9 = r9 | r12
            r0 = r0 ^ r9
            int r9 = r0 << 28
            int r12 = r0 >>> 4
            r9 = r9 | r12
            int r12 = r10 + 2
            r12 = r21[r12]
            r9 = r9 ^ r12
            r12 = r9 & 63
            r11 = r11[r12]
            int r12 = r9 >>> 8
            r12 = r12 & 63
            r12 = r13[r12]
            r11 = r11 | r12
            int r12 = r9 >>> 16
            r12 = r12 & 63
            r12 = r14[r12]
            r11 = r11 | r12
            int r9 = r9 >>> 24
            r9 = r9 & 63
            r9 = r15[r9]
            r9 = r9 | r11
            int r10 = r10 + 3
            r10 = r21[r10]
            r10 = r10 ^ r0
            r11 = r10 & 63
            r11 = r16[r11]
            r9 = r9 | r11
            int r11 = r10 >>> 8
            r11 = r11 & 63
            r11 = r17[r11]
            r9 = r9 | r11
            int r11 = r10 >>> 16
            r11 = r11 & 63
            r11 = r18[r11]
            r9 = r9 | r11
            int r10 = r10 >>> 24
            r10 = r10 & 63
            r10 = r19[r10]
            r9 = r9 | r10
            r1 = r1 ^ r9
            int r3 = r3 + 1
            goto L88
        L129:
            int r3 = r1 << 31
            int r1 = r1 >>> 1
            r1 = r1 | r3
            r3 = r0 ^ r1
            r3 = r3 & r8
            r0 = r0 ^ r3
            r1 = r1 ^ r3
            int r3 = r0 << 31
            int r0 = r0 >>> 1
            r0 = r0 | r3
            int r3 = r0 >>> 8
            r3 = r3 ^ r1
            r3 = r3 & r7
            r1 = r1 ^ r3
            int r2 = r3 << 8
            r0 = r0 ^ r2
            int r2 = r0 >>> 2
            r2 = r2 ^ r1
            r2 = r2 & r6
            r1 = r1 ^ r2
            int r2 = r2 << 2
            r0 = r0 ^ r2
            int r2 = r1 >>> 16
            r2 = r2 ^ r0
            r2 = r2 & r5
            r0 = r0 ^ r2
            int r2 = r2 << 16
            r1 = r1 ^ r2
            int r2 = r1 >>> 4
            r2 = r2 ^ r0
            r2 = r2 & r4
            r0 = r0 ^ r2
            int r2 = r2 << 4
            r1 = r1 ^ r2
            int r2 = r25 + 0
            int r3 = r1 >>> 24
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r24[r2] = r3
            int r2 = r25 + 1
            int r3 = r1 >>> 16
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r24[r2] = r3
            int r2 = r25 + 2
            int r3 = r1 >>> 8
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r3 = (byte) r3
            r24[r2] = r3
            int r2 = r25 + 3
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            r24[r2] = r1
            int r1 = r25 + 4
            int r2 = r0 >>> 24
            r2 = r2 & 255(0xff, float:3.57E-43)
            byte r2 = (byte) r2
            r24[r1] = r2
            int r1 = r25 + 5
            int r2 = r0 >>> 16
            r2 = r2 & 255(0xff, float:3.57E-43)
            byte r2 = (byte) r2
            r24[r1] = r2
            int r1 = r25 + 6
            int r2 = r0 >>> 8
            r2 = r2 & 255(0xff, float:3.57E-43)
            byte r2 = (byte) r2
            r24[r1] = r2
            int r1 = r25 + 7
            r0 = r0 & 255(0xff, float:3.57E-43)
            byte r0 = (byte) r0
            r24[r1] = r0
            return
    }

    protected int[] generateWorkingKey(boolean r13, byte[] r14) {
            r12 = this;
            r0 = 32
            int[] r1 = new int[r0]
            r2 = 56
            boolean[] r3 = new boolean[r2]
            boolean[] r4 = new boolean[r2]
            r5 = 0
            r6 = 0
        Lc:
            r7 = 1
            if (r6 >= r2) goto L27
            byte[] r8 = org.bouncycastle.crypto.engines.DESEngine.pc1
            r8 = r8[r6]
            int r9 = r8 >>> 3
            r9 = r14[r9]
            short[] r10 = org.bouncycastle.crypto.engines.DESEngine.bytebit
            r8 = r8 & 7
            short r8 = r10[r8]
            r8 = r8 & r9
            if (r8 == 0) goto L21
            goto L22
        L21:
            r7 = 0
        L22:
            r3[r6] = r7
            int r6 = r6 + 1
            goto Lc
        L27:
            r14 = 0
        L28:
            r6 = 16
            if (r14 >= r6) goto L9a
            if (r13 == 0) goto L31
            int r6 = r14 << 1
            goto L34
        L31:
            int r6 = 15 - r14
            int r6 = r6 << r7
        L34:
            int r8 = r6 + 1
            r1[r8] = r5
            r1[r6] = r5
            r9 = 0
        L3b:
            r10 = 28
            if (r9 >= r10) goto L54
            byte[] r11 = org.bouncycastle.crypto.engines.DESEngine.totrot
            r11 = r11[r14]
            int r11 = r11 + r9
            if (r11 >= r10) goto L4b
            boolean r10 = r3[r11]
            r4[r9] = r10
            goto L51
        L4b:
            int r11 = r11 + (-28)
            boolean r10 = r3[r11]
            r4[r9] = r10
        L51:
            int r9 = r9 + 1
            goto L3b
        L54:
            if (r10 >= r2) goto L6b
            byte[] r9 = org.bouncycastle.crypto.engines.DESEngine.totrot
            r9 = r9[r14]
            int r9 = r9 + r10
            if (r9 >= r2) goto L62
            boolean r9 = r3[r9]
            r4[r10] = r9
            goto L68
        L62:
            int r9 = r9 + (-28)
            boolean r9 = r3[r9]
            r4[r10] = r9
        L68:
            int r10 = r10 + 1
            goto L54
        L6b:
            r9 = 0
        L6c:
            r10 = 24
            if (r9 >= r10) goto L97
            byte[] r10 = org.bouncycastle.crypto.engines.DESEngine.pc2
            r10 = r10[r9]
            boolean r10 = r4[r10]
            if (r10 == 0) goto L81
            r10 = r1[r6]
            int[] r11 = org.bouncycastle.crypto.engines.DESEngine.bigbyte
            r11 = r11[r9]
            r10 = r10 | r11
            r1[r6] = r10
        L81:
            byte[] r10 = org.bouncycastle.crypto.engines.DESEngine.pc2
            int r11 = r9 + 24
            r10 = r10[r11]
            boolean r10 = r4[r10]
            if (r10 == 0) goto L94
            r10 = r1[r8]
            int[] r11 = org.bouncycastle.crypto.engines.DESEngine.bigbyte
            r11 = r11[r9]
            r10 = r10 | r11
            r1[r8] = r10
        L94:
            int r9 = r9 + 1
            goto L6c
        L97:
            int r14 = r14 + 1
            goto L28
        L9a:
            if (r5 == r0) goto Lcf
            r13 = r1[r5]
            int r14 = r5 + 1
            r2 = r1[r14]
            r3 = 16515072(0xfc0000, float:2.3142545E-38)
            r4 = r13 & r3
            int r4 = r4 << 6
            r7 = r13 & 4032(0xfc0, float:5.65E-42)
            int r7 = r7 << 10
            r4 = r4 | r7
            r3 = r3 & r2
            int r3 = r3 >>> 10
            r3 = r3 | r4
            r4 = r2 & 4032(0xfc0, float:5.65E-42)
            int r4 = r4 >>> 6
            r3 = r3 | r4
            r1[r5] = r3
            r3 = 258048(0x3f000, float:3.61602E-40)
            r4 = r13 & r3
            int r4 = r4 << 12
            r13 = r13 & 63
            int r13 = r13 << r6
            r13 = r13 | r4
            r3 = r3 & r2
            int r3 = r3 >>> 4
            r13 = r13 | r3
            r2 = r2 & 63
            r13 = r13 | r2
            r1[r14] = r13
            int r5 = r5 + 2
            goto L9a
        Lcf:
            return r1
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "DES"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            r0 = 8
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L22
            org.bouncycastle.crypto.params.KeyParameter r4 = (org.bouncycastle.crypto.params.KeyParameter) r4
            byte[] r0 = r4.getKey()
            int r0 = r0.length
            r1 = 8
            if (r0 > r1) goto L1a
            byte[] r4 = r4.getKey()
            int[] r3 = r2.generateWorkingKey(r3, r4)
            r2.workingKey = r3
            return
        L1a:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "DES key too long - should be 8 bytes"
            r3.<init>(r4)
            throw r3
        L22:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to DES init - "
            r0.append(r1)
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public int processBlock(byte[] r7, int r8, byte[] r9, int r10) {
            r6 = this;
            int[] r1 = r6.workingKey
            if (r1 == 0) goto L29
            int r0 = r8 + 8
            int r2 = r7.length
            if (r0 > r2) goto L21
            int r0 = r10 + 8
            int r2 = r9.length
            if (r0 > r2) goto L19
            r0 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.desFunc(r1, r2, r3, r4, r5)
            r7 = 8
            return r7
        L19:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "output buffer too short"
            r7.<init>(r8)
            throw r7
        L21:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r8 = "input buffer too short"
            r7.<init>(r8)
            throw r7
        L29:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "DES engine not initialised"
            r7.<init>(r8)
            throw r7
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }
}
