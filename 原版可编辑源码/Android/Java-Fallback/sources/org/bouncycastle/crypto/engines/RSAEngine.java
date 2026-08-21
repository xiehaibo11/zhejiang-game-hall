package org.bouncycastle.crypto.engines;

public class RSAEngine implements org.bouncycastle.crypto.AsymmetricBlockCipher {
    private org.bouncycastle.crypto.engines.RSACoreEngine core;

    public RSAEngine() {
            r0 = this;
            r0.<init>()
            return
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
    public void init(boolean r2, org.bouncycastle.crypto.CipherParameters r3) {
            r1 = this;
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r1.core
            if (r0 != 0) goto Lb
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = new org.bouncycastle.crypto.engines.RSACoreEngine
            r0.<init>()
            r1.core = r0
        Lb:
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r1.core
            r0.init(r2, r3)
            return
    }

    @Override
    public byte[] processBlock(byte[] r2, int r3, int r4) {
            r1 = this;
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r1.core
            if (r0 == 0) goto L11
            java.math.BigInteger r2 = r0.convertInput(r2, r3, r4)
            java.math.BigInteger r2 = r0.processBlock(r2)
            byte[] r2 = r0.convertOutput(r2)
            return r2
        L11:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "RSA engine not initialised"
            r2.<init>(r3)
            throw r2
    }
}
