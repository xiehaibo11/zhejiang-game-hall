package org.bouncycastle.crypto.params;

public class DHParameters implements org.bouncycastle.crypto.CipherParameters {
    private static final int DEFAULT_MINIMUM_LENGTH = 160;
    private java.math.BigInteger g;
    private java.math.BigInteger j;
    private int l;
    private int m;
    private java.math.BigInteger p;
    private java.math.BigInteger q;
    private org.bouncycastle.crypto.params.DHValidationParameters validation;

    public DHParameters(java.math.BigInteger r9, java.math.BigInteger r10) {
            r8 = this;
            r3 = 0
            r4 = 160(0xa0, float:2.24E-43)
            r5 = 0
            r6 = 0
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public DHParameters(java.math.BigInteger r9, java.math.BigInteger r10, java.math.BigInteger r11) {
            r8 = this;
            r4 = 160(0xa0, float:2.24E-43)
            r5 = 0
            r6 = 0
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public DHParameters(java.math.BigInteger r9, java.math.BigInteger r10, java.math.BigInteger r11, int r12) {
            r8 = this;
            r6 = 0
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public DHParameters(java.math.BigInteger r9, java.math.BigInteger r10, java.math.BigInteger r11, int r12, int r13) {
            r8 = this;
            r6 = 0
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public DHParameters(java.math.BigInteger r2, java.math.BigInteger r3, java.math.BigInteger r4, int r5, int r6, java.math.BigInteger r7, org.bouncycastle.crypto.params.DHValidationParameters r8) {
            r1 = this;
            r1.<init>()
            r0 = 160(0xa0, float:2.24E-43)
            r1.m = r0
            if (r6 == 0) goto L14
            if (r5 > r6) goto Lc
            goto L14
        Lc:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "l value must be greater than m value if provided"
            r2.<init>(r3)
            throw r2
        L14:
            r1.g = r3
            r1.p = r2
            r1.q = r4
            r1.m = r5
            r1.l = r6
            r1.j = r7
            r1.validation = r8
            return
    }

    public DHParameters(java.math.BigInteger r9, java.math.BigInteger r10, java.math.BigInteger r11, java.math.BigInteger r12, org.bouncycastle.crypto.params.DHValidationParameters r13) {
            r8 = this;
            r4 = 160(0xa0, float:2.24E-43)
            r5 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r6 = r12
            r7 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.DHParameters
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.crypto.params.DHParameters r4 = (org.bouncycastle.crypto.params.DHParameters) r4
            java.math.BigInteger r0 = r3.getQ()
            if (r0 == 0) goto L1d
            java.math.BigInteger r0 = r3.getQ()
            java.math.BigInteger r2 = r4.getQ()
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L24
            return r1
        L1d:
            java.math.BigInteger r0 = r4.getQ()
            if (r0 == 0) goto L24
            return r1
        L24:
            java.math.BigInteger r0 = r4.getP()
            java.math.BigInteger r2 = r3.p
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L3d
            java.math.BigInteger r4 = r4.getG()
            java.math.BigInteger r0 = r3.g
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L3d
            r1 = 1
        L3d:
            return r1
    }

    public java.math.BigInteger getG() {
            r1 = this;
            java.math.BigInteger r0 = r1.g
            return r0
    }

    public java.math.BigInteger getJ() {
            r1 = this;
            java.math.BigInteger r0 = r1.j
            return r0
    }

    public int getL() {
            r1 = this;
            int r0 = r1.l
            return r0
    }

    public int getM() {
            r1 = this;
            int r0 = r1.m
            return r0
    }

    public java.math.BigInteger getP() {
            r1 = this;
            java.math.BigInteger r0 = r1.p
            return r0
    }

    public java.math.BigInteger getQ() {
            r1 = this;
            java.math.BigInteger r0 = r1.q
            return r0
    }

    public org.bouncycastle.crypto.params.DHValidationParameters getValidationParameters() {
            r1 = this;
            org.bouncycastle.crypto.params.DHValidationParameters r0 = r1.validation
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.getP()
            int r0 = r0.hashCode()
            java.math.BigInteger r1 = r2.getG()
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            java.math.BigInteger r1 = r2.getQ()
            if (r1 == 0) goto L20
            java.math.BigInteger r1 = r2.getQ()
            int r1 = r1.hashCode()
            goto L21
        L20:
            r1 = 0
        L21:
            r0 = r0 ^ r1
            return r0
    }
}
