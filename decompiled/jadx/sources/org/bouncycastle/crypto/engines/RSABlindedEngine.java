package org.bouncycastle.crypto.engines;

import java.math.BigInteger;
import java.security.SecureRandom;
import org.bouncycastle.crypto.AsymmetricBlockCipher;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.params.ParametersWithRandom;
import org.bouncycastle.crypto.params.RSAKeyParameters;

/* JADX INFO: loaded from: classes4.dex */
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

    @Override // org.bouncycastle.crypto.AsymmetricBlockCipher
    public int getInputBlockSize() {
        return this.core.getInputBlockSize();
    }

    @Override // org.bouncycastle.crypto.AsymmetricBlockCipher
    public int getOutputBlockSize() {
        return this.core.getOutputBlockSize();
    }

    @Override // org.bouncycastle.crypto.AsymmetricBlockCipher
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
    @Override // org.bouncycastle.crypto.AsymmetricBlockCipher
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public byte[] processBlock(byte[] r3, int r4, int r5) {
        /*
            r2 = this;
            org.bouncycastle.crypto.params.RSAKeyParameters r0 = r2.key
            if (r0 == 0) goto L52
            boolean r1 = r0 instanceof org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters
            if (r1 == 0) goto L47
            org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters r0 = (org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters) r0
            java.math.BigInteger r1 = r0.getPublicExponent()
            if (r1 == 0) goto L47
            org.bouncycastle.crypto.engines.RSACoreEngine r1 = r2.core
            java.math.BigInteger r3 = r1.convertInput(r3, r4, r5)
            java.math.BigInteger r4 = r0.getModulus()
            java.math.BigInteger r5 = r2.calculateR(r4)
            org.bouncycastle.crypto.engines.RSACoreEngine r1 = r2.core
            java.math.BigInteger r0 = r0.getPublicExponent()
            java.math.BigInteger r0 = r5.modPow(r0, r4)
            java.math.BigInteger r3 = r0.multiply(r3)
            java.math.BigInteger r3 = r3.mod(r4)
            java.math.BigInteger r3 = r1.processBlock(r3)
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r2.core
            java.math.BigInteger r5 = r5.modInverse(r4)
            java.math.BigInteger r3 = r3.multiply(r5)
            java.math.BigInteger r3 = r3.mod(r4)
        L42:
            byte[] r3 = r0.convertOutput(r3)
            return r3
        L47:
            org.bouncycastle.crypto.engines.RSACoreEngine r0 = r2.core
            java.math.BigInteger r3 = r0.convertInput(r3, r4, r5)
            java.math.BigInteger r3 = r0.processBlock(r3)
            goto L42
        L52:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "RSA engine not initialised"
            r3.<init>(r4)
            throw r3
        */
        throw new UnsupportedOperationException("Method not decompiled: org.bouncycastle.crypto.engines.RSABlindedEngine.processBlock(byte[], int, int):byte[]");
    }
}
