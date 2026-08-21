package org.bouncycastle.jce.interfaces;

public interface GOST3410PublicKey extends org.bouncycastle.jce.interfaces.GOST3410Key, java.security.PublicKey {
    java.math.BigInteger getY();
}
