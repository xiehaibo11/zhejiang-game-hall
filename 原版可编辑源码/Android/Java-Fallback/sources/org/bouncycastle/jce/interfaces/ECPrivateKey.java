package org.bouncycastle.jce.interfaces;

public interface ECPrivateKey extends org.bouncycastle.jce.interfaces.ECKey, java.security.PrivateKey {
    java.math.BigInteger getD();
}
