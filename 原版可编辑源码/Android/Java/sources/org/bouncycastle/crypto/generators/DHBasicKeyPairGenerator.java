package org.bouncycastle.crypto.generators;

import java.math.BigInteger;
import org.bouncycastle.crypto.AsymmetricCipherKeyPair;
import org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator;
import org.bouncycastle.crypto.KeyGenerationParameters;
import org.bouncycastle.crypto.params.DHKeyGenerationParameters;
import org.bouncycastle.crypto.params.DHParameters;
import org.bouncycastle.crypto.params.DHPrivateKeyParameters;
import org.bouncycastle.crypto.params.DHPublicKeyParameters;

public class DHBasicKeyPairGenerator implements AsymmetricCipherKeyPairGenerator {
    private DHKeyGeneratorHelper helper = DHKeyGeneratorHelper.INSTANCE;
    private DHKeyGenerationParameters param;

    @Override
    public AsymmetricCipherKeyPair generateKeyPair() {
        DHParameters parameters = this.param.getParameters();
        BigInteger p = parameters.getP();
        BigInteger bigIntegerCalculatePrivate = this.helper.calculatePrivate(p, this.param.getRandom(), parameters.getL());
        return new AsymmetricCipherKeyPair(new DHPublicKeyParameters(this.helper.calculatePublic(p, parameters.getG(), bigIntegerCalculatePrivate), parameters), new DHPrivateKeyParameters(bigIntegerCalculatePrivate, parameters));
    }

    @Override
    public void init(KeyGenerationParameters keyGenerationParameters) {
        this.param = (DHKeyGenerationParameters) keyGenerationParameters;
    }
}
