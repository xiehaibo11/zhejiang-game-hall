package org.bouncycastle.crypto.params;

public class IESParameters implements org.bouncycastle.crypto.CipherParameters {
    private byte[] derivation;
    private byte[] encoding;
    private int macKeySize;

    public IESParameters(byte[] r1, byte[] r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.derivation = r1
            r0.encoding = r2
            r0.macKeySize = r3
            return
    }

    public byte[] getDerivationV() {
            r1 = this;
            byte[] r0 = r1.derivation
            return r0
    }

    public byte[] getEncodingV() {
            r1 = this;
            byte[] r0 = r1.encoding
            return r0
    }

    public int getMacKeySize() {
            r1 = this;
            int r0 = r1.macKeySize
            return r0
    }
}
