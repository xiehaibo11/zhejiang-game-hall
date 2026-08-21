package org.bouncycastle.crypto;

public interface BasicAgreement {
    java.math.BigInteger calculateAgreement(org.bouncycastle.crypto.CipherParameters r1);

    void init(org.bouncycastle.crypto.CipherParameters r1);
}
