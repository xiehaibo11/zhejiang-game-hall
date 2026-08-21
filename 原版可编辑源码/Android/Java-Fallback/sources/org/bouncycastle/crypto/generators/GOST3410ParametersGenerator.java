package org.bouncycastle.crypto.generators;

public class GOST3410ParametersGenerator {
    private static final java.math.BigInteger ONE = null;
    private static final java.math.BigInteger TWO = null;
    private java.security.SecureRandom init_random;
    private int size;
    private int typeproc;

    static {
            r0 = 1
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE = r0
            r0 = 2
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO = r0
            return
    }

    public GOST3410ParametersGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    private int procedure_A(int r19, int r20, java.math.BigInteger[] r21, int r22) {
            r18 = this;
            r0 = r18
            r1 = r19
        L4:
            r2 = 32768(0x8000, float:4.5918E-41)
            if (r1 < 0) goto L1b7
            r3 = 65536(0x10000, float:9.1835E-41)
            if (r1 <= r3) goto Lf
            goto L1b7
        Lf:
            r4 = r20
        L11:
            r5 = 1
            if (r4 < 0) goto L1ac
            if (r4 > r3) goto L1ac
            int r6 = r4 / 2
            if (r6 != 0) goto L1c
            goto L1ac
        L1c:
            java.math.BigInteger r2 = new java.math.BigInteger
            java.lang.String r3 = java.lang.Integer.toString(r4)
            r2.<init>(r3)
            java.math.BigInteger r3 = new java.math.BigInteger
            java.lang.String r4 = "19381"
            r3.<init>(r4)
            java.math.BigInteger[] r4 = new java.math.BigInteger[r5]
            java.math.BigInteger r6 = new java.math.BigInteger
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r6.<init>(r1)
            r1 = 0
            r4[r1] = r6
            int[] r6 = new int[r5]
            r6[r1] = r22
            r7 = 0
            r8 = 0
        L40:
            r9 = r6[r7]
            r10 = 17
            if (r9 < r10) goto L5d
            int r8 = r6.length
            int r8 = r8 + r5
            int[] r9 = new int[r8]
            int r10 = r6.length
            java.lang.System.arraycopy(r6, r1, r9, r1, r10)
            int[] r6 = new int[r8]
            java.lang.System.arraycopy(r9, r1, r6, r1, r8)
            int r8 = r7 + 1
            r7 = r6[r7]
            int r7 = r7 / 2
            r6[r8] = r7
            r7 = r8
            goto L40
        L5d:
            int r7 = r8 + 1
            java.math.BigInteger[] r7 = new java.math.BigInteger[r7]
            java.math.BigInteger r9 = new java.math.BigInteger
            r10 = 16
            java.lang.String r11 = "8003"
            r9.<init>(r11, r10)
            r7[r8] = r9
            int r9 = r8 + (-1)
            r11 = 0
        L6f:
            if (r11 >= r8) goto L1a8
            r12 = r6[r9]
            int r12 = r12 / r10
        L74:
            int r13 = r4.length
            java.math.BigInteger[] r14 = new java.math.BigInteger[r13]
            int r15 = r4.length
            java.lang.System.arraycopy(r4, r1, r14, r1, r15)
            int r4 = r12 + 1
            java.math.BigInteger[] r15 = new java.math.BigInteger[r4]
            java.lang.System.arraycopy(r14, r1, r15, r1, r13)
            r4 = 0
        L83:
            if (r4 >= r12) goto L9f
            int r13 = r4 + 1
            r4 = r15[r4]
            java.math.BigInteger r4 = r4.multiply(r3)
            java.math.BigInteger r4 = r4.add(r2)
            java.math.BigInteger r14 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r14 = r14.pow(r10)
            java.math.BigInteger r4 = r4.mod(r14)
            r15[r13] = r4
            r4 = r13
            goto L83
        L9f:
            java.math.BigInteger r4 = new java.math.BigInteger
            java.lang.String r13 = "0"
            r4.<init>(r13)
            r13 = 0
        La7:
            if (r13 >= r12) goto Lc1
            r14 = r15[r13]
            java.math.BigInteger r10 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            int r5 = r13 * 16
            java.math.BigInteger r5 = r10.pow(r5)
            java.math.BigInteger r5 = r14.multiply(r5)
            java.math.BigInteger r4 = r4.add(r5)
            int r13 = r13 + 1
            r5 = 1
            r10 = 16
            goto La7
        Lc1:
            r5 = r15[r12]
            r15[r1] = r5
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r10 = r6[r9]
            r13 = 1
            int r10 = r10 - r13
            java.math.BigInteger r5 = r5.pow(r10)
            int r10 = r9 + 1
            r14 = r7[r10]
            java.math.BigInteger r5 = r5.divide(r14)
            java.math.BigInteger r14 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r16 = r6[r9]
            int r1 = r16 + (-1)
            java.math.BigInteger r1 = r14.pow(r1)
            java.math.BigInteger r1 = r1.multiply(r4)
            r4 = r7[r10]
            java.math.BigInteger r13 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            int r14 = r12 * 16
            java.math.BigInteger r13 = r13.pow(r14)
            java.math.BigInteger r4 = r4.multiply(r13)
            java.math.BigInteger r1 = r1.divide(r4)
            java.math.BigInteger r1 = r5.add(r1)
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r4 = r1.mod(r4)
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r4 = r4.compareTo(r5)
            if (r4 != 0) goto L10f
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            java.math.BigInteger r1 = r1.add(r4)
        L10f:
            r4 = 0
        L110:
            r5 = r7[r10]
            long r13 = (long) r4
            r16 = r2
            java.math.BigInteger r2 = java.math.BigInteger.valueOf(r13)
            java.math.BigInteger r2 = r1.add(r2)
            java.math.BigInteger r2 = r5.multiply(r2)
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            java.math.BigInteger r2 = r2.add(r5)
            r7[r9] = r2
            r2 = r7[r9]
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r17 = r3
            r3 = r6[r9]
            java.math.BigInteger r3 = r5.pow(r3)
            int r2 = r2.compareTo(r3)
            r3 = 1
            if (r2 != r3) goto L147
            r4 = r15
            r2 = r16
            r3 = r17
            r1 = 0
            r5 = 1
            r10 = 16
            goto L74
        L147:
            java.math.BigInteger r2 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r3 = r7[r10]
            java.math.BigInteger r5 = java.math.BigInteger.valueOf(r13)
            java.math.BigInteger r5 = r1.add(r5)
            java.math.BigInteger r3 = r3.multiply(r5)
            r5 = r7[r9]
            java.math.BigInteger r2 = r2.modPow(r3, r5)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r2 = r2.compareTo(r3)
            if (r2 != 0) goto L19f
            java.math.BigInteger r2 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r3 = java.math.BigInteger.valueOf(r13)
            java.math.BigInteger r3 = r1.add(r3)
            r5 = r7[r9]
            java.math.BigInteger r2 = r2.modPow(r3, r5)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r2 = r2.compareTo(r3)
            if (r2 == 0) goto L19f
            int r9 = r9 + (-1)
            if (r9 < 0) goto L18e
            int r11 = r11 + 1
            r4 = r15
            r2 = r16
            r3 = r17
            r1 = 0
            r5 = 1
            r10 = 16
            goto L6f
        L18e:
            r2 = 0
            r1 = r7[r2]
            r21[r2] = r1
            r1 = 1
            r3 = r7[r1]
            r21[r1] = r3
            r1 = r15[r2]
        L19a:
            int r1 = r1.intValue()
            return r1
        L19f:
            r2 = 0
            int r4 = r4 + 2
            r2 = r16
            r3 = r17
            goto L110
        L1a8:
            r2 = 0
            r1 = r4[r2]
            goto L19a
        L1ac:
            java.security.SecureRandom r4 = r0.init_random
            int r4 = r4.nextInt()
            int r4 = r4 / r2
            r5 = 1
            int r4 = r4 + r5
            goto L11
        L1b7:
            java.security.SecureRandom r1 = r0.init_random
            int r1 = r1.nextInt()
            int r1 = r1 / r2
            goto L4
    }

    private long procedure_Aa(long r18, long r20, java.math.BigInteger[] r22, int r23) {
            r17 = this;
            r0 = r17
            r1 = r18
        L4:
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 < 0) goto L1c7
            r5 = 4294967296(0x100000000, double:2.121995791E-314)
            int r7 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r7 <= 0) goto L15
            goto L1c7
        L15:
            r7 = r20
        L17:
            r9 = 1
            int r10 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r10 < 0) goto L1ba
            int r10 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r10 > 0) goto L1ba
            r10 = 2
            long r10 = r7 / r10
            int r12 = (r10 > r3 ? 1 : (r10 == r3 ? 0 : -1))
            if (r12 != 0) goto L2a
            goto L1ba
        L2a:
            java.math.BigInteger r3 = new java.math.BigInteger
            java.lang.String r4 = java.lang.Long.toString(r7)
            r3.<init>(r4)
            java.math.BigInteger r4 = new java.math.BigInteger
            java.lang.String r5 = "97781173"
            r4.<init>(r5)
            java.math.BigInteger[] r5 = new java.math.BigInteger[r9]
            java.math.BigInteger r6 = new java.math.BigInteger
            java.lang.String r1 = java.lang.Long.toString(r1)
            r6.<init>(r1)
            r1 = 0
            r5[r1] = r6
            int[] r2 = new int[r9]
            r2[r1] = r23
            r6 = 0
            r7 = 0
        L4e:
            r8 = r2[r6]
            r10 = 33
            if (r8 < r10) goto L6b
            int r7 = r2.length
            int r7 = r7 + r9
            int[] r8 = new int[r7]
            int r10 = r2.length
            java.lang.System.arraycopy(r2, r1, r8, r1, r10)
            int[] r2 = new int[r7]
            java.lang.System.arraycopy(r8, r1, r2, r1, r7)
            int r7 = r6 + 1
            r6 = r2[r6]
            int r6 = r6 / 2
            r2[r7] = r6
            r6 = r7
            goto L4e
        L6b:
            int r6 = r7 + 1
            java.math.BigInteger[] r6 = new java.math.BigInteger[r6]
            java.math.BigInteger r8 = new java.math.BigInteger
            r10 = 16
            java.lang.String r11 = "8000000B"
            r8.<init>(r11, r10)
            r6[r7] = r8
            int r8 = r7 + (-1)
            r10 = 0
        L7d:
            if (r10 >= r7) goto L1b6
            r11 = r2[r8]
            r12 = 32
            int r11 = r11 / r12
        L84:
            int r13 = r5.length
            java.math.BigInteger[] r14 = new java.math.BigInteger[r13]
            int r15 = r5.length
            java.lang.System.arraycopy(r5, r1, r14, r1, r15)
            int r5 = r11 + 1
            java.math.BigInteger[] r15 = new java.math.BigInteger[r5]
            java.lang.System.arraycopy(r14, r1, r15, r1, r13)
            r5 = 0
        L93:
            if (r5 >= r11) goto Laf
            int r13 = r5 + 1
            r5 = r15[r5]
            java.math.BigInteger r5 = r5.multiply(r4)
            java.math.BigInteger r5 = r5.add(r3)
            java.math.BigInteger r14 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r14 = r14.pow(r12)
            java.math.BigInteger r5 = r5.mod(r14)
            r15[r13] = r5
            r5 = r13
            goto L93
        Laf:
            java.math.BigInteger r5 = new java.math.BigInteger
            java.lang.String r13 = "0"
            r5.<init>(r13)
            r13 = 0
        Lb7:
            if (r13 >= r11) goto Ld1
            r14 = r15[r13]
            java.math.BigInteger r12 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            int r9 = r13 * 32
            java.math.BigInteger r9 = r12.pow(r9)
            java.math.BigInteger r9 = r14.multiply(r9)
            java.math.BigInteger r5 = r5.add(r9)
            int r13 = r13 + 1
            r9 = 1
            r12 = 32
            goto Lb7
        Ld1:
            r9 = r15[r11]
            r15[r1] = r9
            java.math.BigInteger r9 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r12 = r2[r8]
            r13 = 1
            int r12 = r12 - r13
            java.math.BigInteger r9 = r9.pow(r12)
            int r12 = r8 + 1
            r14 = r6[r12]
            java.math.BigInteger r9 = r9.divide(r14)
            java.math.BigInteger r14 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r16 = r2[r8]
            int r1 = r16 + (-1)
            java.math.BigInteger r1 = r14.pow(r1)
            java.math.BigInteger r1 = r1.multiply(r5)
            r5 = r6[r12]
            java.math.BigInteger r13 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            int r14 = r11 * 32
            java.math.BigInteger r13 = r13.pow(r14)
            java.math.BigInteger r5 = r5.multiply(r13)
            java.math.BigInteger r1 = r1.divide(r5)
            java.math.BigInteger r1 = r9.add(r1)
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r5 = r1.mod(r5)
            java.math.BigInteger r9 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r5 = r5.compareTo(r9)
            if (r5 != 0) goto L11f
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            java.math.BigInteger r1 = r1.add(r5)
        L11f:
            r5 = 0
        L120:
            r9 = r6[r12]
            long r13 = (long) r5
            r21 = r3
            java.math.BigInteger r3 = java.math.BigInteger.valueOf(r13)
            java.math.BigInteger r3 = r1.add(r3)
            java.math.BigInteger r3 = r9.multiply(r3)
            java.math.BigInteger r9 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            java.math.BigInteger r3 = r3.add(r9)
            r6[r8] = r3
            r3 = r6[r8]
            java.math.BigInteger r9 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r16 = r4
            r4 = r2[r8]
            java.math.BigInteger r4 = r9.pow(r4)
            int r3 = r3.compareTo(r4)
            r4 = 1
            if (r3 != r4) goto L157
            r3 = r21
            r5 = r15
            r4 = r16
            r1 = 0
            r9 = 1
            r12 = 32
            goto L84
        L157:
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r4 = r6[r12]
            java.math.BigInteger r9 = java.math.BigInteger.valueOf(r13)
            java.math.BigInteger r9 = r1.add(r9)
            java.math.BigInteger r4 = r4.multiply(r9)
            r9 = r6[r8]
            java.math.BigInteger r3 = r3.modPow(r4, r9)
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r3 = r3.compareTo(r4)
            if (r3 != 0) goto L1ad
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r4 = java.math.BigInteger.valueOf(r13)
            java.math.BigInteger r4 = r1.add(r4)
            r9 = r6[r8]
            java.math.BigInteger r3 = r3.modPow(r4, r9)
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r3 = r3.compareTo(r4)
            if (r3 == 0) goto L1ad
            int r8 = r8 + (-1)
            if (r8 < 0) goto L19c
            int r10 = r10 + 1
            r3 = r21
            r5 = r15
            r4 = r16
            r1 = 0
            r9 = 1
            goto L7d
        L19c:
            r3 = 0
            r1 = r6[r3]
            r22[r3] = r1
            r1 = 1
            r2 = r6[r1]
            r22[r1] = r2
            r1 = r15[r3]
        L1a8:
            long r1 = r1.longValue()
            return r1
        L1ad:
            r3 = 0
            int r5 = r5 + 2
            r3 = r21
            r4 = r16
            goto L120
        L1b6:
            r3 = 0
            r1 = r5[r3]
            goto L1a8
        L1ba:
            java.security.SecureRandom r7 = r0.init_random
            int r7 = r7.nextInt()
            int r7 = r7 * 2
            r8 = 1
            int r7 = r7 + r8
            long r7 = (long) r7
            goto L17
        L1c7:
            java.security.SecureRandom r1 = r0.init_random
            int r1 = r1.nextInt()
            int r1 = r1 * 2
            long r1 = (long) r1
            goto L4
    }

    private void procedure_B(int r17, int r18, java.math.BigInteger[] r19) {
            r16 = this;
            r0 = r16
            r1 = r17
        L4:
            r2 = 32768(0x8000, float:4.5918E-41)
            if (r1 < 0) goto L14c
            r3 = 65536(0x10000, float:9.1835E-41)
            if (r1 <= r3) goto Lf
            goto L14c
        Lf:
            r4 = r18
        L11:
            r5 = 1
            if (r4 < 0) goto L142
            if (r4 > r3) goto L142
            int r6 = r4 / 2
            if (r6 != 0) goto L1c
            goto L142
        L1c:
            r2 = 2
            java.math.BigInteger[] r2 = new java.math.BigInteger[r2]
            java.math.BigInteger r6 = new java.math.BigInteger
            java.lang.String r3 = java.lang.Integer.toString(r4)
            r6.<init>(r3)
            java.math.BigInteger r7 = new java.math.BigInteger
            java.lang.String r3 = "19381"
            r7.<init>(r3)
            r3 = 256(0x100, float:3.59E-43)
            int r1 = r0.procedure_A(r1, r4, r2, r3)
            r8 = 0
            r9 = r2[r8]
            r3 = 512(0x200, float:7.17E-43)
            int r1 = r0.procedure_A(r1, r4, r2, r3)
            r4 = r2[r8]
            r2 = 65
            java.math.BigInteger[] r10 = new java.math.BigInteger[r2]
            java.math.BigInteger r2 = new java.math.BigInteger
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r2.<init>(r1)
            r10[r8] = r2
        L4f:
            r1 = 0
        L50:
            r2 = 64
            if (r1 >= r2) goto L70
            int r2 = r1 + 1
            r1 = r10[r1]
            java.math.BigInteger r1 = r1.multiply(r7)
            java.math.BigInteger r1 = r1.add(r6)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r11 = 16
            java.math.BigInteger r3 = r3.pow(r11)
            java.math.BigInteger r1 = r1.mod(r3)
            r10[r2] = r1
            r1 = r2
            goto L50
        L70:
            java.math.BigInteger r1 = new java.math.BigInteger
            java.lang.String r3 = "0"
            r1.<init>(r3)
            r3 = 0
        L78:
            if (r3 >= r2) goto L8f
            r11 = r10[r3]
            java.math.BigInteger r12 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            int r13 = r3 * 16
            java.math.BigInteger r12 = r12.pow(r13)
            java.math.BigInteger r11 = r11.multiply(r12)
            java.math.BigInteger r1 = r1.add(r11)
            int r3 = r3 + 1
            goto L78
        L8f:
            r2 = r10[r2]
            r10[r8] = r2
            java.math.BigInteger r2 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r3 = 1023(0x3ff, float:1.434E-42)
            java.math.BigInteger r2 = r2.pow(r3)
            java.math.BigInteger r11 = r9.multiply(r4)
            java.math.BigInteger r2 = r2.divide(r11)
            java.math.BigInteger r11 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r3 = r11.pow(r3)
            java.math.BigInteger r1 = r3.multiply(r1)
            java.math.BigInteger r3 = r9.multiply(r4)
            java.math.BigInteger r11 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r12 = 1024(0x400, float:1.435E-42)
            java.math.BigInteger r11 = r11.pow(r12)
            java.math.BigInteger r3 = r3.multiply(r11)
            java.math.BigInteger r1 = r1.divide(r3)
            java.math.BigInteger r1 = r2.add(r1)
            java.math.BigInteger r2 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r2 = r1.mod(r2)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r2 = r2.compareTo(r3)
            if (r2 != 0) goto Ld9
            java.math.BigInteger r2 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            java.math.BigInteger r1 = r1.add(r2)
        Ld9:
            r11 = r1
            r1 = 0
        Ldb:
            java.math.BigInteger r2 = r9.multiply(r4)
            long r13 = (long) r1
            java.math.BigInteger r3 = java.math.BigInteger.valueOf(r13)
            java.math.BigInteger r3 = r11.add(r3)
            java.math.BigInteger r2 = r2.multiply(r3)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            java.math.BigInteger r2 = r2.add(r3)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r3 = r3.pow(r12)
            int r3 = r2.compareTo(r3)
            if (r3 != r5) goto L100
            goto L4f
        L100:
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r15 = r9.multiply(r4)
            java.math.BigInteger r12 = java.math.BigInteger.valueOf(r13)
            java.math.BigInteger r12 = r11.add(r12)
            java.math.BigInteger r12 = r15.multiply(r12)
            java.math.BigInteger r3 = r3.modPow(r12, r2)
            java.math.BigInteger r12 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r3 = r3.compareTo(r12)
            if (r3 != 0) goto L13d
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r12 = java.math.BigInteger.valueOf(r13)
            java.math.BigInteger r12 = r11.add(r12)
            java.math.BigInteger r12 = r9.multiply(r12)
            java.math.BigInteger r3 = r3.modPow(r12, r2)
            java.math.BigInteger r12 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r3 = r3.compareTo(r12)
            if (r3 == 0) goto L13d
            r19[r8] = r2
            r19[r5] = r9
            return
        L13d:
            int r1 = r1 + 2
            r12 = 1024(0x400, float:1.435E-42)
            goto Ldb
        L142:
            java.security.SecureRandom r4 = r0.init_random
            int r4 = r4.nextInt()
            int r4 = r4 / r2
            int r4 = r4 + r5
            goto L11
        L14c:
            java.security.SecureRandom r1 = r0.init_random
            int r1 = r1.nextInt()
            int r1 = r1 / r2
            goto L4
    }

    private void procedure_Bb(long r17, long r19, java.math.BigInteger[] r21) {
            r16 = this;
            r7 = r16
            r1 = r17
        L4:
            r3 = 0
            r0 = 2
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 < 0) goto L15d
            r5 = 4294967296(0x100000000, double:2.121995791E-314)
            int r8 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r8 <= 0) goto L16
            goto L15d
        L16:
            r8 = r19
        L18:
            r10 = 1
            int r11 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r11 < 0) goto L151
            int r11 = (r8 > r5 ? 1 : (r8 == r5 ? 0 : -1))
            if (r11 > 0) goto L151
            r11 = 2
            long r11 = r8 / r11
            int r13 = (r11 > r3 ? 1 : (r11 == r3 ? 0 : -1))
            if (r13 != 0) goto L2b
            goto L151
        L2b:
            java.math.BigInteger[] r11 = new java.math.BigInteger[r0]
            java.math.BigInteger r12 = new java.math.BigInteger
            java.lang.String r0 = java.lang.Long.toString(r8)
            r12.<init>(r0)
            java.math.BigInteger r13 = new java.math.BigInteger
            java.lang.String r0 = "97781173"
            r13.<init>(r0)
            r6 = 256(0x100, float:3.59E-43)
            r0 = r16
            r3 = r8
            r5 = r11
            long r1 = r0.procedure_Aa(r1, r3, r5, r6)
            r14 = 0
            r15 = r11[r14]
            r6 = 512(0x200, float:7.17E-43)
            long r0 = r0.procedure_Aa(r1, r3, r5, r6)
            r8 = r11[r14]
            r2 = 33
            java.math.BigInteger[] r9 = new java.math.BigInteger[r2]
            java.math.BigInteger r2 = new java.math.BigInteger
            java.lang.String r0 = java.lang.Long.toString(r0)
            r2.<init>(r0)
            r9[r14] = r2
        L61:
            r0 = 0
        L62:
            r1 = 32
            if (r0 >= r1) goto L80
            int r2 = r0 + 1
            r0 = r9[r0]
            java.math.BigInteger r0 = r0.multiply(r13)
            java.math.BigInteger r0 = r0.add(r12)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r1 = r3.pow(r1)
            java.math.BigInteger r0 = r0.mod(r1)
            r9[r2] = r0
            r0 = r2
            goto L62
        L80:
            java.math.BigInteger r0 = new java.math.BigInteger
            java.lang.String r2 = "0"
            r0.<init>(r2)
            r2 = 0
        L88:
            if (r2 >= r1) goto L9f
            r3 = r9[r2]
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            int r5 = r2 * 32
            java.math.BigInteger r4 = r4.pow(r5)
            java.math.BigInteger r3 = r3.multiply(r4)
            java.math.BigInteger r0 = r0.add(r3)
            int r2 = r2 + 1
            goto L88
        L9f:
            r1 = r9[r1]
            r9[r14] = r1
            java.math.BigInteger r1 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r2 = 1023(0x3ff, float:1.434E-42)
            java.math.BigInteger r1 = r1.pow(r2)
            java.math.BigInteger r3 = r15.multiply(r8)
            java.math.BigInteger r1 = r1.divide(r3)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r2 = r3.pow(r2)
            java.math.BigInteger r0 = r2.multiply(r0)
            java.math.BigInteger r2 = r15.multiply(r8)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            r11 = 1024(0x400, float:1.435E-42)
            java.math.BigInteger r3 = r3.pow(r11)
            java.math.BigInteger r2 = r2.multiply(r3)
            java.math.BigInteger r0 = r0.divide(r2)
            java.math.BigInteger r0 = r1.add(r0)
            java.math.BigInteger r1 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r1 = r0.mod(r1)
            java.math.BigInteger r2 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r1 = r1.compareTo(r2)
            if (r1 != 0) goto Le9
            java.math.BigInteger r1 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            java.math.BigInteger r0 = r0.add(r1)
        Le9:
            r1 = 0
        Lea:
            java.math.BigInteger r2 = r15.multiply(r8)
            long r3 = (long) r1
            java.math.BigInteger r5 = java.math.BigInteger.valueOf(r3)
            java.math.BigInteger r5 = r0.add(r5)
            java.math.BigInteger r2 = r2.multiply(r5)
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            java.math.BigInteger r2 = r2.add(r5)
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r5 = r5.pow(r11)
            int r5 = r2.compareTo(r5)
            if (r5 != r10) goto L10f
            goto L61
        L10f:
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r6 = r15.multiply(r8)
            java.math.BigInteger r11 = java.math.BigInteger.valueOf(r3)
            java.math.BigInteger r11 = r0.add(r11)
            java.math.BigInteger r6 = r6.multiply(r11)
            java.math.BigInteger r5 = r5.modPow(r6, r2)
            java.math.BigInteger r6 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r5 = r5.compareTo(r6)
            if (r5 != 0) goto L14c
            java.math.BigInteger r5 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.TWO
            java.math.BigInteger r3 = java.math.BigInteger.valueOf(r3)
            java.math.BigInteger r3 = r0.add(r3)
            java.math.BigInteger r3 = r15.multiply(r3)
            java.math.BigInteger r3 = r5.modPow(r3, r2)
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r3 = r3.compareTo(r4)
            if (r3 == 0) goto L14c
            r21[r14] = r2
            r21[r10] = r15
            return
        L14c:
            int r1 = r1 + 2
            r11 = 1024(0x400, float:1.435E-42)
            goto Lea
        L151:
            java.security.SecureRandom r8 = r7.init_random
            int r8 = r8.nextInt()
            int r8 = r8 * 2
            int r8 = r8 + r10
            long r8 = (long) r8
            goto L18
        L15d:
            java.security.SecureRandom r1 = r7.init_random
            int r1 = r1.nextInt()
            int r1 = r1 * 2
            long r1 = (long) r1
            goto L4
    }

    private java.math.BigInteger procedure_C(java.math.BigInteger r5, java.math.BigInteger r6) {
            r4 = this;
            java.math.BigInteger r0 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            java.math.BigInteger r0 = r5.subtract(r0)
            java.math.BigInteger r6 = r0.divide(r6)
            int r1 = r5.bitLength()
        Le:
            java.math.BigInteger r2 = new java.math.BigInteger
            java.security.SecureRandom r3 = r4.init_random
            r2.<init>(r1, r3)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r3 = r2.compareTo(r3)
            if (r3 <= 0) goto Le
            int r3 = r2.compareTo(r0)
            if (r3 >= 0) goto Le
            java.math.BigInteger r2 = r2.modPow(r6, r5)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.GOST3410ParametersGenerator.ONE
            int r3 = r2.compareTo(r3)
            if (r3 == 0) goto Le
            return r2
    }

    public org.bouncycastle.crypto.params.GOST3410Parameters generateParameters() {
            r14 = this;
            r0 = 2
            java.math.BigInteger[] r0 = new java.math.BigInteger[r0]
            int r1 = r14.typeproc
            r8 = 0
            java.lang.String r2 = "Ooops! key size 512 or 1024 bit."
            r3 = 1024(0x400, float:1.435E-42)
            r4 = 512(0x200, float:7.17E-43)
            r9 = 1
            if (r1 != r9) goto L41
            java.security.SecureRandom r1 = r14.init_random
            int r1 = r1.nextInt()
            java.security.SecureRandom r5 = r14.init_random
            int r5 = r5.nextInt()
            int r6 = r14.size
            if (r6 == r4) goto L2b
            if (r6 != r3) goto L25
            r14.procedure_B(r1, r5, r0)
            goto L2e
        L25:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            r0.<init>(r2)
            throw r0
        L2b:
            r14.procedure_A(r1, r5, r0, r4)
        L2e:
            r2 = r0[r8]
            r0 = r0[r9]
            java.math.BigInteger r3 = r14.procedure_C(r2, r0)
            org.bouncycastle.crypto.params.GOST3410Parameters r4 = new org.bouncycastle.crypto.params.GOST3410Parameters
            org.bouncycastle.crypto.params.GOST3410ValidationParameters r6 = new org.bouncycastle.crypto.params.GOST3410ValidationParameters
            r6.<init>(r1, r5)
            r4.<init>(r2, r0, r3, r6)
            return r4
        L41:
            java.security.SecureRandom r1 = r14.init_random
            long r10 = r1.nextLong()
            java.security.SecureRandom r1 = r14.init_random
            long r12 = r1.nextLong()
            int r1 = r14.size
            if (r1 == r4) goto L61
            if (r1 != r3) goto L5b
            r1 = r14
            r2 = r10
            r4 = r12
            r6 = r0
            r1.procedure_Bb(r2, r4, r6)
            goto L6a
        L5b:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r2)
            throw r0
        L61:
            r7 = 512(0x200, float:7.17E-43)
            r1 = r14
            r2 = r10
            r4 = r12
            r6 = r0
            r1.procedure_Aa(r2, r4, r6, r7)
        L6a:
            r1 = r0[r8]
            r0 = r0[r9]
            java.math.BigInteger r2 = r14.procedure_C(r1, r0)
            org.bouncycastle.crypto.params.GOST3410Parameters r3 = new org.bouncycastle.crypto.params.GOST3410Parameters
            org.bouncycastle.crypto.params.GOST3410ValidationParameters r4 = new org.bouncycastle.crypto.params.GOST3410ValidationParameters
            r4.<init>(r10, r12)
            r3.<init>(r1, r0, r2, r4)
            return r3
    }

    public void init(int r1, int r2, java.security.SecureRandom r3) {
            r0 = this;
            r0.size = r1
            r0.typeproc = r2
            r0.init_random = r3
            return
    }
}
