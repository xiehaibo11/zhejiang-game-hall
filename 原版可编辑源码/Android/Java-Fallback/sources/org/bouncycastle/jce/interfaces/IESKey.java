package org.bouncycastle.jce.interfaces;

public interface IESKey extends java.security.Key {
    java.security.PrivateKey getPrivate();

    java.security.PublicKey getPublic();
}
