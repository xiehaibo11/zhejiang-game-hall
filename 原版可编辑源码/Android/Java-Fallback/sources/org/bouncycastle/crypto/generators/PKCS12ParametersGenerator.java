package org.bouncycastle.crypto.generators;

public class PKCS12ParametersGenerator extends org.bouncycastle.crypto.PBEParametersGenerator {
    public static final int IV_MATERIAL = 2;
    public static final int KEY_MATERIAL = 1;
    public static final int MAC_MATERIAL = 3;
    private org.bouncycastle.crypto.Digest digest;
    private int u;
    private int v;

    public PKCS12ParametersGenerator(org.bouncycastle.crypto.Digest r4) {
            r3 = this;
            r3.<init>()
            r3.digest = r4
            boolean r0 = r4 instanceof org.bouncycastle.crypto.ExtendedDigest
            if (r0 == 0) goto L18
            int r0 = r4.getDigestSize()
            r3.u = r0
            org.bouncycastle.crypto.ExtendedDigest r4 = (org.bouncycastle.crypto.ExtendedDigest) r4
            int r4 = r4.getByteLength()
            r3.v = r4
            return
        L18:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Digest "
            r1.append(r2)
            java.lang.String r4 = r4.getAlgorithmName()
            r1.append(r4)
            java.lang.String r4 = " unsupported"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private void adjust(byte[] r6, int r7, byte[] r8) {
            r5 = this;
            int r0 = r8.length
            int r0 = r0 + (-1)
            r0 = r8[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r1 = r8.length
            int r1 = r1 + r7
            int r1 = r1 + (-1)
            r1 = r6[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r1
            int r0 = r0 + 1
            int r1 = r8.length
            int r1 = r1 + r7
            int r1 = r1 + (-1)
            byte r2 = (byte) r0
            r6[r1] = r2
            int r0 = r0 >>> 8
            int r1 = r8.length
            int r1 = r1 + (-2)
        L1e:
            if (r1 < 0) goto L34
            r2 = r8[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r3 = r7 + r1
            r4 = r6[r3]
            r4 = r4 & 255(0xff, float:3.57E-43)
            int r2 = r2 + r4
            int r0 = r0 + r2
            byte r2 = (byte) r0
            r6[r3] = r2
            int r0 = r0 >>> 8
            int r1 = r1 + (-1)
            goto L1e
        L34:
            return
    }

    private byte[] generateDerivedKey(int r17, int r18) {
            r16 = this;
            r0 = r16
            r1 = r18
            int r2 = r0.v
            byte[] r3 = new byte[r2]
            byte[] r4 = new byte[r1]
            r5 = 0
            r6 = 0
        Lc:
            if (r6 == r2) goto L16
            r7 = r17
            byte r8 = (byte) r7
            r3[r6] = r8
            int r6 = r6 + 1
            goto Lc
        L16:
            byte[] r6 = r0.salt
            r7 = 1
            if (r6 == 0) goto L3f
            byte[] r6 = r0.salt
            int r6 = r6.length
            if (r6 == 0) goto L3f
            int r6 = r0.v
            byte[] r8 = r0.salt
            int r8 = r8.length
            int r9 = r0.v
            int r8 = r8 + r9
            int r8 = r8 - r7
            int r8 = r8 / r9
            int r6 = r6 * r8
            byte[] r8 = new byte[r6]
            r9 = 0
        L2f:
            if (r9 == r6) goto L41
            byte[] r10 = r0.salt
            byte[] r11 = r0.salt
            int r11 = r11.length
            int r11 = r9 % r11
            r10 = r10[r11]
            r8[r9] = r10
            int r9 = r9 + 1
            goto L2f
        L3f:
            byte[] r8 = new byte[r5]
        L41:
            byte[] r6 = r0.password
            if (r6 == 0) goto L69
            byte[] r6 = r0.password
            int r6 = r6.length
            if (r6 == 0) goto L69
            int r6 = r0.v
            byte[] r9 = r0.password
            int r9 = r9.length
            int r10 = r0.v
            int r9 = r9 + r10
            int r9 = r9 - r7
            int r9 = r9 / r10
            int r6 = r6 * r9
            byte[] r9 = new byte[r6]
            r10 = 0
        L59:
            if (r10 == r6) goto L6b
            byte[] r11 = r0.password
            byte[] r12 = r0.password
            int r12 = r12.length
            int r12 = r10 % r12
            r11 = r11[r12]
            r9[r10] = r11
            int r10 = r10 + 1
            goto L59
        L69:
            byte[] r9 = new byte[r5]
        L6b:
            int r6 = r8.length
            int r10 = r9.length
            int r6 = r6 + r10
            byte[] r10 = new byte[r6]
            int r11 = r8.length
            java.lang.System.arraycopy(r8, r5, r10, r5, r11)
            int r8 = r8.length
            int r11 = r9.length
            java.lang.System.arraycopy(r9, r5, r10, r8, r11)
            int r8 = r0.v
            byte[] r9 = new byte[r8]
            int r11 = r0.u
            int r12 = r1 + r11
            int r12 = r12 - r7
            int r12 = r12 / r11
            r11 = 1
        L84:
            if (r11 > r12) goto Le7
            int r13 = r0.u
            byte[] r14 = new byte[r13]
            org.bouncycastle.crypto.Digest r15 = r0.digest
            r15.update(r3, r5, r2)
            org.bouncycastle.crypto.Digest r15 = r0.digest
            r15.update(r10, r5, r6)
            org.bouncycastle.crypto.Digest r15 = r0.digest
            r15.doFinal(r14, r5)
            r15 = 1
        L9a:
            int r7 = r0.iterationCount
            if (r15 == r7) goto Lab
            org.bouncycastle.crypto.Digest r7 = r0.digest
            r7.update(r14, r5, r13)
            org.bouncycastle.crypto.Digest r7 = r0.digest
            r7.doFinal(r14, r5)
            int r15 = r15 + 1
            goto L9a
        Lab:
            r7 = 0
        Lac:
            if (r7 == r8) goto Lb7
            int r15 = r7 % r13
            r15 = r14[r15]
            r9[r7] = r15
            int r7 = r7 + 1
            goto Lac
        Lb7:
            r7 = 0
        Lb8:
            int r15 = r0.v
            int r5 = r6 / r15
            if (r7 == r5) goto Lc7
            int r15 = r15 * r7
            r0.adjust(r10, r15, r9)
            int r7 = r7 + 1
            r5 = 0
            goto Lb8
        Lc7:
            if (r11 != r12) goto Ld8
            int r5 = r11 + (-1)
            int r7 = r0.u
            int r13 = r5 * r7
            int r5 = r5 * r7
            int r5 = r1 - r5
            r7 = 0
            java.lang.System.arraycopy(r14, r7, r4, r13, r5)
            goto Le2
        Ld8:
            r7 = 0
            int r5 = r11 + (-1)
            int r15 = r0.u
            int r5 = r5 * r15
            java.lang.System.arraycopy(r14, r7, r4, r5, r13)
        Le2:
            int r11 = r11 + 1
            r5 = 0
            r7 = 1
            goto L84
        Le7:
            return r4
    }

    @Override
    public org.bouncycastle.crypto.CipherParameters generateDerivedMacParameters(int r4) {
            r3 = this;
            int r4 = r4 / 8
            r0 = 3
            byte[] r0 = r3.generateDerivedKey(r0, r4)
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            r2 = 0
            r1.<init>(r0, r2, r4)
            return r1
    }

    @Override
    public org.bouncycastle.crypto.CipherParameters generateDerivedParameters(int r4) {
            r3 = this;
            int r4 = r4 / 8
            r0 = 1
            byte[] r0 = r3.generateDerivedKey(r0, r4)
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            r2 = 0
            r1.<init>(r0, r2, r4)
            return r1
    }

    @Override
    public org.bouncycastle.crypto.CipherParameters generateDerivedParameters(int r6, int r7) {
            r5 = this;
            int r6 = r6 / 8
            int r7 = r7 / 8
            r0 = 1
            byte[] r0 = r5.generateDerivedKey(r0, r6)
            r1 = 2
            byte[] r1 = r5.generateDerivedKey(r1, r7)
            org.bouncycastle.crypto.params.ParametersWithIV r2 = new org.bouncycastle.crypto.params.ParametersWithIV
            org.bouncycastle.crypto.params.KeyParameter r3 = new org.bouncycastle.crypto.params.KeyParameter
            r4 = 0
            r3.<init>(r0, r4, r6)
            r2.<init>(r3, r1, r4, r7)
            return r2
    }
}
