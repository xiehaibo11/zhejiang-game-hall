package org.bouncycastle.crypto;

public class AsymmetricCipherKeyPair {
    private org.bouncycastle.crypto.CipherParameters privateParam;
    private org.bouncycastle.crypto.CipherParameters publicParam;

    public AsymmetricCipherKeyPair(org.bouncycastle.crypto.CipherParameters r1, org.bouncycastle.crypto.CipherParameters r2) {
            r0 = this;
            r0.<init>()
            r0.publicParam = r1
            r0.privateParam = r2
            return
    }

    public org.bouncycastle.crypto.CipherParameters getPrivate() {
            r1 = this;
            org.bouncycastle.crypto.CipherParameters r0 = r1.privateParam
            return r0
    }

    public org.bouncycastle.crypto.CipherParameters getPublic() {
            r1 = this;
            org.bouncycastle.crypto.CipherParameters r0 = r1.publicParam
            return r0
    }
}
