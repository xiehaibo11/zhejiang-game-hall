package org.bouncycastle.crypto.params;

public class AEADParameters implements org.bouncycastle.crypto.CipherParameters {
    private byte[] associatedText;
    private org.bouncycastle.crypto.params.KeyParameter key;
    private int macSize;
    private byte[] nonce;

    public AEADParameters(org.bouncycastle.crypto.params.KeyParameter r1, int r2, byte[] r3, byte[] r4) {
            r0 = this;
            r0.<init>()
            r0.key = r1
            r0.nonce = r3
            r0.macSize = r2
            r0.associatedText = r4
            return
    }

    public byte[] getAssociatedText() {
            r1 = this;
            byte[] r0 = r1.associatedText
            return r0
    }

    public org.bouncycastle.crypto.params.KeyParameter getKey() {
            r1 = this;
            org.bouncycastle.crypto.params.KeyParameter r0 = r1.key
            return r0
    }

    public int getMacSize() {
            r1 = this;
            int r0 = r1.macSize
            return r0
    }

    public byte[] getNonce() {
            r1 = this;
            byte[] r0 = r1.nonce
            return r0
    }
}
