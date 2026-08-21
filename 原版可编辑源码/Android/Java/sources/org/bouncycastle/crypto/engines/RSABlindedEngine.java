package org.bouncycastle.crypto.engines;

import java.math.BigInteger;
import java.security.SecureRandom;
import org.bouncycastle.crypto.AsymmetricBlockCipher;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.params.ParametersWithRandom;
import org.bouncycastle.crypto.params.RSAKeyParameters;
import org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters;

public class RSABlindedEngine implements AsymmetricBlockCipher {
    private static BigInteger ZERO = BigInteger.valueOf(0);
    private RSACoreEngine core = new RSACoreEngine();
    private RSAKeyParameters key;
    private SecureRandom random;

    private BigInteger calculateR(BigInteger bigInteger) {
        int iBitLength = bigInteger.bitLength() - 1;
        int i = iBitLength / 2;
        int iNextInt = ((this.random.nextInt() & 255) * ((iBitLength - i) / 255)) + i;
        BigInteger bigInteger2 = new BigInteger(iNextInt, this.random);
        while (bigInteger2.equals(ZERO)) {
            bigInteger2 = new BigInteger(iNextInt, this.random);
        }
        return bigInteger2;
    }

    @Override
    public int getInputBlockSize() {
        return this.core.getInputBlockSize();
    }

    @Override
    public int getOutputBlockSize() {
        return this.core.getOutputBlockSize();
    }

    @Override
    public void init(boolean z, CipherParameters cipherParameters) {
        SecureRandom secureRandom;
        this.core.init(z, cipherParameters);
        if (cipherParameters instanceof ParametersWithRandom) {
            ParametersWithRandom parametersWithRandom = (ParametersWithRandom) cipherParameters;
            this.key = (RSAKeyParameters) parametersWithRandom.getParameters();
            secureRandom = parametersWithRandom.getRandom();
        } else {
            this.key = (RSAKeyParameters) cipherParameters;
            secureRandom = new SecureRandom();
        }
        this.random = secureRandom;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x0047  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public byte[] processBlock(byte[] bArr, int i, int i2) {
        RSACoreEngine rSACoreEngine;
        BigInteger bigIntegerProcessBlock;
        RSAKeyParameters rSAKeyParameters = this.key;
        if (rSAKeyParameters == null) {
            throw new IllegalStateException("RSA engine not initialised");
        }
        if (rSAKeyParameters instanceof RSAPrivateCrtKeyParameters) {
            RSAPrivateCrtKeyParameters rSAPrivateCrtKeyParameters = (RSAPrivateCrtKeyParameters) rSAKeyParameters;
            if (rSAPrivateCrtKeyParameters.getPublicExponent() != null) {
                BigInteger bigIntegerConvertInput = this.core.convertInput(bArr, i, i2);
                BigInteger modulus = rSAPrivateCrtKeyParameters.getModulus();
                BigInteger bigIntegerCalculateR = calculateR(modulus);
                BigInteger bigIntegerProcessBlock2 = this.core.processBlock(bigIntegerCalculateR.modPow(rSAPrivateCrtKeyParameters.getPublicExponent(), modulus).multiply(bigIntegerConvertInput).mod(modulus));
                rSACoreEngine = this.core;
                bigIntegerProcessBlock = bigIntegerProcessBlock2.multiply(bigIntegerCalculateR.modInverse(modulus)).mod(modulus);
            } else {
                rSACoreEngine = this.core;
                bigIntegerProcessBlock = rSACoreEngine.processBlock(rSACoreEngine.convertInput(bArr, i, i2));
            }
        }
        return rSACoreEngine.convertOutput(bigIntegerProcessBlock);
    }
}
