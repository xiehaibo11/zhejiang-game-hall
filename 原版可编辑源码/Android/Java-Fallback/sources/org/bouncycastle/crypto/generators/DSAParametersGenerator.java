package org.bouncycastle.crypto.generators;

public class DSAParametersGenerator {
    private static final java.math.BigInteger ONE = null;
    private static final java.math.BigInteger TWO = null;
    private int certainty;
    private java.security.SecureRandom random;
    private int size;

    static {
            r0 = 1
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.DSAParametersGenerator.ONE = r0
            r0 = 2
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.DSAParametersGenerator.TWO = r0
            return
    }

    public DSAParametersGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    private void add(byte[] r3, byte[] r4, int r5) {
            r2 = this;
            int r0 = r4.length
            int r0 = r0 + (-1)
            r0 = r4[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r5
            int r5 = r4.length
            int r5 = r5 + (-1)
            byte r1 = (byte) r0
            r3[r5] = r1
            int r5 = r0 >>> 8
            int r0 = r4.length
            int r0 = r0 + (-2)
        L13:
            if (r0 < 0) goto L22
            r1 = r4[r0]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r5 = r5 + r1
            byte r1 = (byte) r5
            r3[r0] = r1
            int r5 = r5 >>> 8
            int r0 = r0 + (-1)
            goto L13
        L22:
            return
    }

    public org.bouncycastle.crypto.params.DSAParameters generateParameters() {
            r17 = this;
            r0 = r17
            r1 = 20
            byte[] r2 = new byte[r1]
            byte[] r3 = new byte[r1]
            byte[] r4 = new byte[r1]
            byte[] r5 = new byte[r1]
            org.bouncycastle.crypto.digests.SHA1Digest r6 = new org.bouncycastle.crypto.digests.SHA1Digest
            r6.<init>()
            int r7 = r0.size
            int r8 = r7 + (-1)
            int r8 = r8 / 160
            int r7 = r7 / 8
            byte[] r9 = new byte[r7]
            r10 = 0
            r11 = 0
            r12 = r10
            r13 = 0
            r14 = 0
        L20:
            if (r13 != 0) goto Lde
        L22:
            java.security.SecureRandom r12 = r0.random
            r12.nextBytes(r2)
            r6.update(r2, r11, r1)
            r6.doFinal(r3, r11)
            java.lang.System.arraycopy(r2, r11, r4, r11, r1)
            r12 = 1
            r0.add(r4, r2, r12)
            r6.update(r4, r11, r1)
            r6.doFinal(r4, r11)
            r14 = 0
        L3b:
            if (r14 == r1) goto L49
            r15 = r3[r14]
            r16 = r4[r14]
            r15 = r15 ^ r16
            byte r15 = (byte) r15
            r5[r14] = r15
            int r14 = r14 + 1
            goto L3b
        L49:
            r14 = r5[r11]
            r14 = r14 | (-128(0xffffffffffffff80, float:NaN))
            byte r14 = (byte) r14
            r5[r11] = r14
            r14 = 19
            r15 = r5[r14]
            r15 = r15 | r12
            byte r15 = (byte) r15
            r5[r14] = r15
            java.math.BigInteger r14 = new java.math.BigInteger
            r14.<init>(r12, r5)
            int r15 = r0.certainty
            boolean r15 = r14.isProbablePrime(r15)
            if (r15 == 0) goto L22
            r15 = 2
            r15 = 0
            r16 = 2
        L69:
            r12 = 4096(0x1000, float:5.74E-42)
            if (r15 >= r12) goto Ld7
            r10 = 0
        L6e:
            if (r10 >= r8) goto L85
            int r12 = r16 + r10
            r0.add(r3, r2, r12)
            r6.update(r3, r11, r1)
            r6.doFinal(r3, r11)
            int r10 = r10 + 1
            int r12 = r10 * 20
            int r12 = r7 - r12
            java.lang.System.arraycopy(r3, r11, r9, r12, r1)
            goto L6e
        L85:
            int r10 = r16 + r8
            r0.add(r3, r2, r10)
            r6.update(r3, r11, r1)
            r6.doFinal(r3, r11)
            int r10 = r8 * 20
            int r10 = r7 - r10
            int r12 = 20 - r10
            java.lang.System.arraycopy(r3, r12, r9, r11, r10)
            r10 = r9[r11]
            r10 = r10 | (-128(0xffffffffffffff80, float:NaN))
            byte r10 = (byte) r10
            r9[r11] = r10
            java.math.BigInteger r10 = new java.math.BigInteger
            r12 = 1
            r10.<init>(r12, r9)
            java.math.BigInteger r1 = org.bouncycastle.crypto.generators.DSAParametersGenerator.TWO
            java.math.BigInteger r1 = r14.multiply(r1)
            java.math.BigInteger r1 = r10.mod(r1)
            java.math.BigInteger r11 = org.bouncycastle.crypto.generators.DSAParametersGenerator.ONE
            java.math.BigInteger r1 = r1.subtract(r11)
            java.math.BigInteger r10 = r10.subtract(r1)
            int r1 = r0.size
            int r1 = r1 - r12
            boolean r1 = r10.testBit(r1)
            if (r1 == 0) goto Lcd
            int r1 = r0.certainty
            boolean r1 = r10.isProbablePrime(r1)
            if (r1 == 0) goto Lcd
            r13 = 1
            goto Ld7
        Lcd:
            int r15 = r15 + 1
            int r1 = r8 + 1
            int r16 = r16 + r1
            r1 = 20
            r11 = 0
            goto L69
        Ld7:
            r12 = r14
            r14 = r15
            r1 = 20
            r11 = 0
            goto L20
        Lde:
            java.math.BigInteger r1 = org.bouncycastle.crypto.generators.DSAParametersGenerator.ONE
            java.math.BigInteger r1 = r10.subtract(r1)
            java.math.BigInteger r1 = r1.divide(r12)
        Le8:
            java.math.BigInteger r3 = new java.math.BigInteger
            int r4 = r0.size
            java.security.SecureRandom r5 = r0.random
            r3.<init>(r4, r5)
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.DSAParametersGenerator.ONE
            int r4 = r3.compareTo(r4)
            if (r4 <= 0) goto Le8
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.DSAParametersGenerator.ONE
            java.math.BigInteger r4 = r10.subtract(r4)
            int r4 = r3.compareTo(r4)
            if (r4 < 0) goto L106
            goto Le8
        L106:
            java.math.BigInteger r3 = r3.modPow(r1, r10)
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.DSAParametersGenerator.ONE
            int r4 = r3.compareTo(r4)
            if (r4 > 0) goto L113
            goto Le8
        L113:
            org.bouncycastle.crypto.params.DSAParameters r1 = new org.bouncycastle.crypto.params.DSAParameters
            org.bouncycastle.crypto.params.DSAValidationParameters r4 = new org.bouncycastle.crypto.params.DSAValidationParameters
            r4.<init>(r2, r14)
            r1.<init>(r10, r12, r3, r4)
            return r1
    }

    public void init(int r1, int r2, java.security.SecureRandom r3) {
            r0 = this;
            r0.size = r1
            r0.certainty = r2
            r0.random = r3
            return
    }
}
