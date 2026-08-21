package org.bouncycastle.crypto.engines;

public class RSABlindingEngine implements org.bouncycastle.crypto.AsymmetricBlockCipher {
    private java.math.BigInteger blindingFactor;
    private org.bouncycastle.crypto.engines.RSACoreEngine core;
    private boolean forEncryption;
    private org.bouncycastle.crypto.params.RSAKeyParameters key;

    public RSABlindingEngine() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = new org.bouncycastle.crypto.engines.RSACoreEngine
            r0.<init>()
            r1.core = r0
            return
    }

    private java.math.BigInteger blindMessage(java.math.BigInteger r4) {
            r3 = this;
            java.math.BigInteger r0 = r3.blindingFactor
            org.bouncycastle.crypto.params.RSAKeyParameters r1 = r3.key
            java.math.BigInteger r1 = r1.getExponent()
            org.bouncycastle.crypto.params.RSAKeyParameters r2 = r3.key
            java.math.BigInteger r2 = r2.getModulus()
            java.math.BigInteger r0 = r0.modPow(r1, r2)
            java.math.BigInteger r4 = r4.multiply(r0)
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = r3.key
            java.math.BigInteger r0 = r0.getModulus()
            java.math.BigInteger r4 = r4.mod(r0)
            return r4
    }

    private java.math.BigInteger unblindMessage(java.math.BigInteger r3) {
            r2 = this;
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = r2.key
            java.math.BigInteger r0 = r0.getModulus()
            java.math.BigInteger r1 = r2.blindingFactor
            java.math.BigInteger r1 = r1.modInverse(r0)
            java.math.BigInteger r3 = r3.multiply(r1)
            java.math.BigInteger r3 = r3.mod(r0)
            return r3
    }

    @Override
    public int getInputBlockSize() {
            r1 = this;
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r1.core
            int r0 = r0.getInputBlockSize()
            return r0
    }

    @Override
    public int getOutputBlockSize() {
            r1 = this;
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r1.core
            int r0 = r0.getOutputBlockSize()
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r0 == 0) goto La
            org.bouncycastle.crypto.params.ParametersWithRandom r4 = (org.bouncycastle.crypto.params.ParametersWithRandom) r4
            org.bouncycastle.crypto.CipherParameters r4 = r4.getParameters()
        La:
            org.bouncycastle.crypto.params.RSABlindingParameters r4 = (org.bouncycastle.crypto.params.RSABlindingParameters) r4
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r2.core
            org.bouncycastle.crypto.params.RSAKeyParameters r1 = r4.getPublicKey()
            r0.init(r3, r1)
            r2.forEncryption = r3
            org.bouncycastle.crypto.params.RSAKeyParameters r3 = r4.getPublicKey()
            r2.key = r3
            java.math.BigInteger r3 = r4.getBlindingFactor()
            r2.blindingFactor = r3
            return
    }

    @Override
    public byte[] processBlock(byte[] r2, int r3, int r4) {
            r1 = this;
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r1.core
            java.math.BigInteger r2 = r0.convertInput(r2, r3, r4)
            boolean r3 = r1.forEncryption
            if (r3 == 0) goto Lf
            java.math.BigInteger r2 = r1.blindMessage(r2)
            goto L13
        Lf:
            java.math.BigInteger r2 = r1.unblindMessage(r2)
        L13:
            org.bouncycastle.crypto.engines.RSACoreEngine r3 = r1.core
            byte[] r2 = r3.convertOutput(r2)
            return r2
    }
}
