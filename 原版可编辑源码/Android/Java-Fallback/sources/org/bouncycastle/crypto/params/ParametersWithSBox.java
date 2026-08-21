package org.bouncycastle.crypto.params;

public class ParametersWithSBox implements org.bouncycastle.crypto.CipherParameters {
    private org.bouncycastle.crypto.CipherParameters parameters;
    private byte[] sBox;

    public ParametersWithSBox(org.bouncycastle.crypto.CipherParameters r1, byte[] r2) {
            r0 = this;
            r0.<init>()
            r0.parameters = r1
            r0.sBox = r2
            return
    }

    public org.bouncycastle.crypto.CipherParameters getParameters() {
            r1 = this;
            org.bouncycastle.crypto.CipherParameters r0 = r1.parameters
            return r0
    }

    public byte[] getSBox() {
            r1 = this;
            byte[] r0 = r1.sBox
            return r0
    }
}
