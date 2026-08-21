package org.bouncycastle.crypto.params;

import java.security.SecureRandom;
import org.bouncycastle.crypto.KeyGenerationParameters;

public class DHKeyGenerationParameters extends KeyGenerationParameters {
    private DHParameters params;

    public DHKeyGenerationParameters(SecureRandom secureRandom, DHParameters dHParameters) {
        super(secureRandom, dHParameters.getP().bitLength());
        this.params = dHParameters;
    }

    public DHParameters getParameters() {
        return this.params;
    }
}
