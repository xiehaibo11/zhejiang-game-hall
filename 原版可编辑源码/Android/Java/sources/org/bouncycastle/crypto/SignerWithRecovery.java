package org.bouncycastle.crypto;

public interface SignerWithRecovery extends Signer {
    byte[] getRecoveredMessage();

    boolean hasFullMessage();
}
