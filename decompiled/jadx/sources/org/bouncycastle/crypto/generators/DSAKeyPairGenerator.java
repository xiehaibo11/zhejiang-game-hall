package org.bouncycastle.crypto.generators;

import java.math.BigInteger;
import java.security.SecureRandom;
import org.bouncycastle.crypto.AsymmetricCipherKeyPair;
import org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator;
import org.bouncycastle.crypto.KeyGenerationParameters;
import org.bouncycastle.crypto.params.DSAKeyGenerationParameters;
import org.bouncycastle.crypto.params.DSAParameters;
import org.bouncycastle.crypto.params.DSAPrivateKeyParameters;
import org.bouncycastle.crypto.params.DSAPublicKeyParameters;

/* JADX INFO: loaded from: classes4.dex */
public class DSAKeyPairGenerator implements AsymmetricCipherKeyPairGenerator {
    private static final BigInteger ZERO = BigInteger.valueOf(0);
    private DSAKeyGenerationParameters param;

    @Override // org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator
    public AsymmetricCipherKeyPair generateKeyPair() {
        DSAParameters parameters = this.param.getParameters();
        SecureRandom random = this.param.getRandom();
        BigInteger q = parameters.getQ();
        BigInteger p = parameters.getP();
        BigInteger g = parameters.getG();
        while (true) {
            BigInteger bigInteger = new BigInteger(160, random);
            if (!bigInteger.equals(ZERO) && bigInteger.compareTo(q) < 0) {
                return new AsymmetricCipherKeyPair(new DSAPublicKeyParameters(g.modPow(bigInteger, p), parameters), new DSAPrivateKeyParameters(bigInteger, parameters));
            }
        }
    }

    @Override // org.bouncycastle.crypto.AsymmetricCipherKeyPairGenerator
    public void init(KeyGenerationParameters keyGenerationParameters) {
        this.param = (DSAKeyGenerationParameters) keyGenerationParameters;
    }
}
