package org.bouncycastle.crypto.params;

import java.security.SecureRandom;
import org.bouncycastle.crypto.KeyGenerationParameters;

/* JADX INFO: loaded from: classes4.dex */
public class ElGamalKeyGenerationParameters extends KeyGenerationParameters {
    private ElGamalParameters params;

    public ElGamalKeyGenerationParameters(SecureRandom secureRandom, ElGamalParameters elGamalParameters) {
        super(secureRandom, elGamalParameters.getP().bitLength());
        this.params = elGamalParameters;
    }

    public ElGamalParameters getParameters() {
        return this.params;
    }
}
