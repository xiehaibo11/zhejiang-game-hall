package org.bouncycastle.crypto;

/* JADX INFO: loaded from: classes4.dex */
public interface SignerWithRecovery extends Signer {
    byte[] getRecoveredMessage();

    boolean hasFullMessage();
}
