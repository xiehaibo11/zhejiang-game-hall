package org.bouncycastle.crypto.params;

public class KDFParameters implements org.bouncycastle.crypto.DerivationParameters {
    byte[] iv;
    byte[] shared;

    public KDFParameters(byte[] r1, byte[] r2) {
            r0 = this;
            r0.<init>()
            r0.shared = r1
            r0.iv = r2
            return
    }

    public byte[] getIV() {
            r1 = this;
            byte[] r0 = r1.iv
            return r0
    }

    public byte[] getSharedSecret() {
            r1 = this;
            byte[] r0 = r1.shared
            return r0
    }
}
