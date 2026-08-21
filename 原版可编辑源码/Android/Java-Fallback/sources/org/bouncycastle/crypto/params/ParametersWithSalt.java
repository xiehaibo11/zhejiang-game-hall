package org.bouncycastle.crypto.params;

public class ParametersWithSalt implements org.bouncycastle.crypto.CipherParameters {
    private org.bouncycastle.crypto.CipherParameters parameters;
    private byte[] salt;

    public ParametersWithSalt(org.bouncycastle.crypto.CipherParameters r3, byte[] r4) {
            r2 = this;
            int r0 = r4.length
            r1 = 0
            r2.<init>(r3, r4, r1, r0)
            return
    }

    public ParametersWithSalt(org.bouncycastle.crypto.CipherParameters r2, byte[] r3, int r4, int r5) {
            r1 = this;
            r1.<init>()
            byte[] r0 = new byte[r5]
            r1.salt = r0
            r1.parameters = r2
            r2 = 0
            java.lang.System.arraycopy(r3, r4, r0, r2, r5)
            return
    }

    public org.bouncycastle.crypto.CipherParameters getParameters() {
            r1 = this;
            org.bouncycastle.crypto.CipherParameters r0 = r1.parameters
            return r0
    }

    public byte[] getSalt() {
            r1 = this;
            byte[] r0 = r1.salt
            return r0
    }
}
