package org.bouncycastle.crypto.engines;

class RSACoreEngine {
    private boolean forEncryption;
    private org.bouncycastle.crypto.params.RSAKeyParameters key;

    RSACoreEngine() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.math.BigInteger convertInput(byte[] r5, int r6, int r7) {
            r4 = this;
            int r0 = r4.getInputBlockSize()
            r1 = 1
            int r0 = r0 + r1
            java.lang.String r2 = "input too large for RSA cipher."
            if (r7 > r0) goto L40
            int r0 = r4.getInputBlockSize()
            int r0 = r0 + r1
            if (r7 != r0) goto L1c
            boolean r0 = r4.forEncryption
            if (r0 == 0) goto L16
            goto L1c
        L16:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            r5.<init>(r2)
            throw r5
        L1c:
            if (r6 != 0) goto L21
            int r0 = r5.length
            if (r7 == r0) goto L28
        L21:
            byte[] r0 = new byte[r7]
            r3 = 0
            java.lang.System.arraycopy(r5, r6, r0, r3, r7)
            r5 = r0
        L28:
            java.math.BigInteger r6 = new java.math.BigInteger
            r6.<init>(r1, r5)
            org.bouncycastle.crypto.params.RSAKeyParameters r5 = r4.key
            java.math.BigInteger r5 = r5.getModulus()
            int r5 = r6.compareTo(r5)
            if (r5 >= 0) goto L3a
            return r6
        L3a:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            r5.<init>(r2)
            throw r5
        L40:
            org.bouncycastle.crypto.DataLengthException r5 = new org.bouncycastle.crypto.DataLengthException
            r5.<init>(r2)
            throw r5
    }

    public byte[] convertOutput(java.math.BigInteger r5) {
            r4 = this;
            byte[] r5 = r5.toByteArray()
            boolean r0 = r4.forEncryption
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L31
            r0 = r5[r2]
            if (r0 != 0) goto L1d
            int r0 = r5.length
            int r3 = r4.getOutputBlockSize()
            if (r0 <= r3) goto L1d
            int r0 = r5.length
            int r0 = r0 - r1
            byte[] r3 = new byte[r0]
            java.lang.System.arraycopy(r5, r1, r3, r2, r0)
            return r3
        L1d:
            int r0 = r5.length
            int r1 = r4.getOutputBlockSize()
            if (r0 >= r1) goto L3d
            int r0 = r4.getOutputBlockSize()
            byte[] r1 = new byte[r0]
            int r3 = r5.length
            int r0 = r0 - r3
            int r3 = r5.length
            java.lang.System.arraycopy(r5, r2, r1, r0, r3)
            return r1
        L31:
            r0 = r5[r2]
            if (r0 != 0) goto L3d
            int r0 = r5.length
            int r0 = r0 - r1
            byte[] r3 = new byte[r0]
            java.lang.System.arraycopy(r5, r1, r3, r2, r0)
            return r3
        L3d:
            return r5
    }

    public int getInputBlockSize() {
            r2 = this;
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = r2.key
            java.math.BigInteger r0 = r0.getModulus()
            int r0 = r0.bitLength()
            boolean r1 = r2.forEncryption
            int r0 = r0 + 7
            int r0 = r0 / 8
            if (r1 == 0) goto L14
            int r0 = r0 + (-1)
        L14:
            return r0
    }

    public int getOutputBlockSize() {
            r2 = this;
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = r2.key
            java.math.BigInteger r0 = r0.getModulus()
            int r0 = r0.bitLength()
            boolean r1 = r2.forEncryption
            int r0 = r0 + 7
            int r0 = r0 / 8
            if (r1 == 0) goto L13
            return r0
        L13:
            int r0 = r0 + (-1)
            return r0
    }

    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) {
            r1 = this;
            boolean r0 = r3 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r0 == 0) goto La
            org.bouncycastle.crypto.params.ParametersWithRandom r3 = (org.bouncycastle.crypto.params.ParametersWithRandom) r3
            org.bouncycastle.crypto.CipherParameters r3 = r3.getParameters()
        La:
            org.bouncycastle.crypto.params.RSAKeyParameters r3 = (org.bouncycastle.crypto.params.RSAKeyParameters) r3
            r1.key = r3
            r1.forEncryption = r2
            return
    }

    public java.math.BigInteger processBlock(java.math.BigInteger r7) {
            r6 = this;
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = r6.key
            boolean r1 = r0 instanceof org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters
            if (r1 == 0) goto L41
            org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters r0 = (org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters) r0
            java.math.BigInteger r1 = r0.getP()
            java.math.BigInteger r2 = r0.getQ()
            java.math.BigInteger r3 = r0.getDP()
            java.math.BigInteger r4 = r0.getDQ()
            java.math.BigInteger r0 = r0.getQInv()
            java.math.BigInteger r5 = r7.remainder(r1)
            java.math.BigInteger r3 = r5.modPow(r3, r1)
            java.math.BigInteger r7 = r7.remainder(r2)
            java.math.BigInteger r7 = r7.modPow(r4, r2)
            java.math.BigInteger r3 = r3.subtract(r7)
            java.math.BigInteger r0 = r3.multiply(r0)
            java.math.BigInteger r0 = r0.mod(r1)
            java.math.BigInteger r0 = r0.multiply(r2)
            java.math.BigInteger r7 = r0.add(r7)
            return r7
        L41:
            java.math.BigInteger r0 = r0.getExponent()
            org.bouncycastle.crypto.params.RSAKeyParameters r1 = r6.key
            java.math.BigInteger r1 = r1.getModulus()
            java.math.BigInteger r7 = r7.modPow(r0, r1)
            return r7
    }
}
