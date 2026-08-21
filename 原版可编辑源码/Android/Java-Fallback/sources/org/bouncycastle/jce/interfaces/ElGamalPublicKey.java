package org.bouncycastle.jce.interfaces;

public interface ElGamalPublicKey extends org.bouncycastle.jce.interfaces.ElGamalKey, java.security.PublicKey {
    java.math.BigInteger getY();
}
