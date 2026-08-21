package org.bouncycastle.crypto;

public interface SignerWithRecovery extends org.bouncycastle.crypto.Signer {
    byte[] getRecoveredMessage();

    boolean hasFullMessage();
}
