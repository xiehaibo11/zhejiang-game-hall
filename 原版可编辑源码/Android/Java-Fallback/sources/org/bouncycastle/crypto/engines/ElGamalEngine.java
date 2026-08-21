package org.bouncycastle.crypto.engines;

public class ElGamalEngine implements org.bouncycastle.crypto.AsymmetricBlockCipher {
    private static final java.math.BigInteger ONE = null;
    private static final java.math.BigInteger TWO = null;
    private static final java.math.BigInteger ZERO = null;
    private int bitSize;
    private boolean forEncryption;
    private org.bouncycastle.crypto.params.ElGamalKeyParameters key;
    private java.security.SecureRandom random;

    static {
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.engines.ElGamalEngine.ZERO = r0
            r0 = 1
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.engines.ElGamalEngine.ONE = r0
            r0 = 2
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.engines.ElGamalEngine.TWO = r0
            return
    }

    public ElGamalEngine() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int getInputBlockSize() {
            r1 = this;
            boolean r0 = r1.forEncryption
            if (r0 == 0) goto Lb
            int r0 = r1.bitSize
            int r0 = r0 + (-1)
            int r0 = r0 / 8
            return r0
        Lb:
            int r0 = r1.bitSize
            int r0 = r0 + 7
            int r0 = r0 / 8
            int r0 = r0 * 2
            return r0
    }

    @Override
    public int getOutputBlockSize() {
            r1 = this;
            boolean r0 = r1.forEncryption
            if (r0 == 0) goto Ld
            int r0 = r1.bitSize
            int r0 = r0 + 7
            int r0 = r0 / 8
            int r0 = r0 * 2
            return r0
        Ld:
            int r0 = r1.bitSize
            int r0 = r0 + (-1)
            int r0 = r0 / 8
            return r0
    }

    @Override
    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) {
            r1 = this;
            boolean r0 = r3 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r0 == 0) goto L13
            org.bouncycastle.crypto.params.ParametersWithRandom r3 = (org.bouncycastle.crypto.params.ParametersWithRandom) r3
            org.bouncycastle.crypto.CipherParameters r0 = r3.getParameters()
            org.bouncycastle.crypto.params.ElGamalKeyParameters r0 = (org.bouncycastle.crypto.params.ElGamalKeyParameters) r0
            r1.key = r0
            java.security.SecureRandom r3 = r3.getRandom()
            goto L1c
        L13:
            org.bouncycastle.crypto.params.ElGamalKeyParameters r3 = (org.bouncycastle.crypto.params.ElGamalKeyParameters) r3
            r1.key = r3
            java.security.SecureRandom r3 = new java.security.SecureRandom
            r3.<init>()
        L1c:
            r1.random = r3
            r1.forEncryption = r2
            org.bouncycastle.crypto.params.ElGamalKeyParameters r3 = r1.key
            org.bouncycastle.crypto.params.ElGamalParameters r3 = r3.getParameters()
            java.math.BigInteger r3 = r3.getP()
            int r3 = r3.bitLength()
            r1.bitSize = r3
            if (r2 == 0) goto L41
            org.bouncycastle.crypto.params.ElGamalKeyParameters r2 = r1.key
            boolean r2 = r2 instanceof org.bouncycastle.crypto.params.ElGamalPublicKeyParameters
            if (r2 == 0) goto L39
            goto L47
        L39:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "ElGamalPublicKeyParameters are required for encryption."
            r2.<init>(r3)
            throw r2
        L41:
            org.bouncycastle.crypto.params.ElGamalKeyParameters r2 = r1.key
            boolean r2 = r2 instanceof org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters
            if (r2 == 0) goto L48
        L47:
            return
        L48:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "ElGamalPrivateKeyParameters are required for decryption."
            r2.<init>(r3)
            throw r2
    }

    @Override
    public byte[] processBlock(byte[] r7, int r8, int r9) {
            r6 = this;
            org.bouncycastle.crypto.params.ElGamalKeyParameters r0 = r6.key
            if (r0 == 0) goto L10b
            boolean r0 = r6.forEncryption
            r1 = 1
            if (r0 == 0) goto L11
            int r0 = r6.bitSize
            int r0 = r0 - r1
            int r0 = r0 + 7
            int r0 = r0 / 8
            goto L15
        L11:
            int r0 = r6.getInputBlockSize()
        L15:
            java.lang.String r2 = "input too large for ElGamal cipher.\n"
            if (r9 > r0) goto L105
            org.bouncycastle.crypto.params.ElGamalKeyParameters r0 = r6.key
            org.bouncycastle.crypto.params.ElGamalParameters r0 = r0.getParameters()
            java.math.BigInteger r0 = r0.getP()
            org.bouncycastle.crypto.params.ElGamalKeyParameters r3 = r6.key
            boolean r3 = r3 instanceof org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters
            r4 = 0
            if (r3 == 0) goto L64
            int r9 = r9 / 2
            byte[] r2 = new byte[r9]
            byte[] r3 = new byte[r9]
            java.lang.System.arraycopy(r7, r8, r2, r4, r9)
            int r8 = r8 + r9
            java.lang.System.arraycopy(r7, r8, r3, r4, r9)
            java.math.BigInteger r7 = new java.math.BigInteger
            r7.<init>(r1, r2)
            java.math.BigInteger r8 = new java.math.BigInteger
            r8.<init>(r1, r3)
            org.bouncycastle.crypto.params.ElGamalKeyParameters r9 = r6.key
            org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters r9 = (org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters) r9
            java.math.BigInteger r1 = org.bouncycastle.crypto.engines.ElGamalEngine.ONE
            java.math.BigInteger r1 = r0.subtract(r1)
            java.math.BigInteger r9 = r9.getX()
            java.math.BigInteger r9 = r1.subtract(r9)
            java.math.BigInteger r7 = r7.modPow(r9, r0)
            java.math.BigInteger r7 = r7.multiply(r8)
            java.math.BigInteger r7 = r7.mod(r0)
            byte[] r7 = org.bouncycastle.util.BigIntegers.asUnsignedByteArray(r7)
            return r7
        L64:
            if (r8 != 0) goto L69
            int r3 = r7.length
            if (r9 == r3) goto L6f
        L69:
            byte[] r3 = new byte[r9]
            java.lang.System.arraycopy(r7, r8, r3, r4, r9)
            r7 = r3
        L6f:
            java.math.BigInteger r8 = new java.math.BigInteger
            r8.<init>(r1, r7)
            int r7 = r8.bitLength()
            int r9 = r0.bitLength()
            if (r7 >= r9) goto Lff
            org.bouncycastle.crypto.params.ElGamalKeyParameters r7 = r6.key
            org.bouncycastle.crypto.params.ElGamalPublicKeyParameters r7 = (org.bouncycastle.crypto.params.ElGamalPublicKeyParameters) r7
            int r9 = r0.bitLength()
            java.math.BigInteger r2 = new java.math.BigInteger
            java.security.SecureRandom r3 = r6.random
            r2.<init>(r9, r3)
        L8d:
            java.math.BigInteger r3 = org.bouncycastle.crypto.engines.ElGamalEngine.ZERO
            boolean r3 = r2.equals(r3)
            if (r3 != 0) goto Lf7
            java.math.BigInteger r3 = org.bouncycastle.crypto.engines.ElGamalEngine.TWO
            java.math.BigInteger r3 = r0.subtract(r3)
            int r3 = r2.compareTo(r3)
            if (r3 <= 0) goto La2
            goto Lf7
        La2:
            org.bouncycastle.crypto.params.ElGamalKeyParameters r9 = r6.key
            org.bouncycastle.crypto.params.ElGamalParameters r9 = r9.getParameters()
            java.math.BigInteger r9 = r9.getG()
            java.math.BigInteger r9 = r9.modPow(r2, r0)
            java.math.BigInteger r7 = r7.getY()
            java.math.BigInteger r7 = r7.modPow(r2, r0)
            java.math.BigInteger r7 = r8.multiply(r7)
            java.math.BigInteger r7 = r7.mod(r0)
            byte[] r8 = r9.toByteArray()
            byte[] r7 = r7.toByteArray()
            int r9 = r6.getOutputBlockSize()
            byte[] r0 = new byte[r9]
            int r2 = r8.length
            int r3 = r9 / 2
            if (r2 <= r3) goto Ldd
            int r2 = r8.length
            int r2 = r2 - r1
            int r2 = r3 - r2
            int r5 = r8.length
            int r5 = r5 - r1
            java.lang.System.arraycopy(r8, r1, r0, r2, r5)
            goto Le4
        Ldd:
            int r2 = r8.length
            int r2 = r3 - r2
            int r5 = r8.length
            java.lang.System.arraycopy(r8, r4, r0, r2, r5)
        Le4:
            int r8 = r7.length
            if (r8 <= r3) goto Lf0
            int r8 = r7.length
            int r8 = r8 - r1
            int r9 = r9 - r8
            int r8 = r7.length
            int r8 = r8 - r1
            java.lang.System.arraycopy(r7, r1, r0, r9, r8)
            goto Lf6
        Lf0:
            int r8 = r7.length
            int r9 = r9 - r8
            int r8 = r7.length
            java.lang.System.arraycopy(r7, r4, r0, r9, r8)
        Lf6:
            return r0
        Lf7:
            java.math.BigInteger r2 = new java.math.BigInteger
            java.security.SecureRandom r3 = r6.random
            r2.<init>(r9, r3)
            goto L8d
        Lff:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            r7.<init>(r2)
            throw r7
        L105:
            org.bouncycastle.crypto.DataLengthException r7 = new org.bouncycastle.crypto.DataLengthException
            r7.<init>(r2)
            throw r7
        L10b:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "ElGamal engine not initialised"
            r7.<init>(r8)
            throw r7
    }
}
