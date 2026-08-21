package org.bouncycastle.crypto.generators;

import java.math.BigInteger;
import org.bouncycastle.crypto.AsymmetricCipherKeyPair;
import org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator;
import org.bouncycastle.crypto.KeyGenerationParameters;
import org.bouncycastle.crypto.params.ElGamalKeyGenerationParameters;
import org.bouncycastle.crypto.params.ElGamalParameters;
import org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters;
import org.bouncycastle.crypto.params.ElGamalPublicKeyParameters;

/* JADX INFO: loaded from: classes4.dex */
public class ElGamalKeyPairGenerator implements AsymmetricCipherKeyPairGenerator {
    private DHKeyGeneratorHelper helper = DHKeyGeneratorHelper.INSTANCE;
    private ElGamalKeyGenerationParameters param;

    @Override // org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator
    public AsymmetricCipherKeyPair generateKeyPair() {
        ElGamalParameters parameters = this.param.getParameters();
        BigInteger p = parameters.getP();
        BigInteger bigIntegerCalculatePrivate = this.helper.calculatePrivate(p, this.param.getRandom(), parameters.getL());
        return new AsymmetricCipherKeyPair(new ElGamalPublicKeyParameters(this.helper.calculatePublic(p, parameters.getG(), bigIntegerCalculatePrivate), parameters), new ElGamalPrivateKeyParameters(bigIntegerCalculatePrivate, parameters));
    }

    @Override // org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator
    public void init(KeyGenerationParameters keyGenerationParameters) {
        this.param = (ElGamalKeyGenerationParameters) keyGenerationParameters;
    }
}
