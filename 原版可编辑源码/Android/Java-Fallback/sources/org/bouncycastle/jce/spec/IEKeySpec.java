package org.bouncycastle.jce.spec;

public class IEKeySpec implements java.security.spec.KeySpec, org.bouncycastle.jce.interfaces.IESKey {
    private java.security.PrivateKey privKey;
    private java.security.PublicKey pubKey;

    public IEKeySpec(java.security.PrivateKey r1, java.security.PublicKey r2) {
            r0 = this;
            r0.<init>()
            r0.privKey = r1
            r0.pubKey = r2
            return
    }

    @Override
    public java.lang.String getAlgorithm() {
            r1 = this;
            java.lang.String r0 = "IES"
            return r0
    }

    @Override
    public byte[] getEncoded() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String getFormat() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.security.PrivateKey getPrivate() {
            r1 = this;
            java.security.PrivateKey r0 = r1.privKey
            return r0
    }

    @Override
    public java.security.PublicKey getPublic() {
            r1 = this;
            java.security.PublicKey r0 = r1.pubKey
            return r0
    }
}
