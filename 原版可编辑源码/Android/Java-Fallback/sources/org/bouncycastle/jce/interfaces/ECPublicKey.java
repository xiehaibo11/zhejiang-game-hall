package org.bouncycastle.jce.interfaces;

public interface ECPublicKey extends org.bouncycastle.jce.interfaces.ECKey, java.security.PublicKey {
    org.bouncycastle.math.ec.ECPoint getQ();
}
