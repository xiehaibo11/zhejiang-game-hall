package org.bouncycastle.crypto.params;

public class AsymmetricKeyParameter implements org.bouncycastle.crypto.CipherParameters {
    boolean privateKey;

    public AsymmetricKeyParameter(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.privateKey = r1
            return
    }

    public boolean isPrivate() {
            r1 = this;
            boolean r0 = r1.privateKey
            return r0
    }
}
