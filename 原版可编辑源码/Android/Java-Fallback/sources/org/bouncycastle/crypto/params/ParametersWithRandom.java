package org.bouncycastle.crypto.params;

public class ParametersWithRandom implements org.bouncycastle.crypto.CipherParameters {
    private org.bouncycastle.crypto.CipherParameters parameters;
    private java.security.SecureRandom random;

    public ParametersWithRandom(org.bouncycastle.crypto.CipherParameters r2) {
            r1 = this;
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
            r1.<init>(r2, r0)
            return
    }

    public ParametersWithRandom(org.bouncycastle.crypto.CipherParameters r1, java.security.SecureRandom r2) {
            r0 = this;
            r0.<init>()
            r0.random = r2
            r0.parameters = r1
            return
    }

    public org.bouncycastle.crypto.CipherParameters getParameters() {
            r1 = this;
            org.bouncycastle.crypto.CipherParameters r0 = r1.parameters
            return r0
    }

    public java.security.SecureRandom getRandom() {
            r1 = this;
            java.security.SecureRandom r0 = r1.random
            return r0
    }
}
