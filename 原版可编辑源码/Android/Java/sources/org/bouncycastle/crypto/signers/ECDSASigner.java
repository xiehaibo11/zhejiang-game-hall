package org.bouncycastle.crypto.signers;

import java.math.BigInteger;
import java.security.SecureRandom;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.DSA;
import org.bouncycastle.crypto.params.ECKeyParameters;
import org.bouncycastle.crypto.params.ECPrivateKeyParameters;
import org.bouncycastle.crypto.params.ECPublicKeyParameters;
import org.bouncycastle.crypto.params.ParametersWithRandom;
import org.bouncycastle.math.ec.ECAlgorithms;
import org.bouncycastle.math.ec.ECConstants;

public class ECDSASigner implements ECConstants, DSA {
    ECKeyParameters key;
    SecureRandom random;

    private BigInteger calculateE(BigInteger bigInteger, byte[] bArr) {
        if (bigInteger.bitLength() > bArr.length * 8) {
            return new BigInteger(1, bArr);
        }
        int iBitLength = bigInteger.bitLength() / 8;
        byte[] bArr2 = new byte[iBitLength];
        System.arraycopy(bArr, 0, bArr2, 0, iBitLength);
        return new BigInteger(1, bArr2);
    }

    @Override
    public BigInteger[] generateSignature(byte[] bArr) {
        BigInteger bigInteger;
        BigInteger bigIntegerMod;
        BigInteger bigIntegerMod2;
        BigInteger n = this.key.getParameters().getN();
        BigInteger bigIntegerCalculateE = calculateE(n, bArr);
        do {
            int iBitLength = n.bitLength();
            while (true) {
                bigInteger = new BigInteger(iBitLength, this.random);
                if (!bigInteger.equals(ZERO)) {
                    bigIntegerMod = this.key.getParameters().getG().multiply(bigInteger).getX().toBigInteger().mod(n);
                    if (!bigIntegerMod.equals(ZERO)) {
                        break;
                    }
                }
            }
            bigIntegerMod2 = bigInteger.modInverse(n).multiply(bigIntegerCalculateE.add(((ECPrivateKeyParameters) this.key).getD().multiply(bigIntegerMod))).mod(n);
        } while (bigIntegerMod2.equals(ZERO));
        return new BigInteger[]{bigIntegerMod, bigIntegerMod2};
    }

    @Override
    public void init(boolean z, CipherParameters cipherParameters) {
        ECKeyParameters eCKeyParameters;
        if (!z) {
            eCKeyParameters = (ECPublicKeyParameters) cipherParameters;
        } else {
            if (cipherParameters instanceof ParametersWithRandom) {
                ParametersWithRandom parametersWithRandom = (ParametersWithRandom) cipherParameters;
                this.random = parametersWithRandom.getRandom();
                this.key = (ECPrivateKeyParameters) parametersWithRandom.getParameters();
                return;
            }
            this.random = new SecureRandom();
            eCKeyParameters = (ECPrivateKeyParameters) cipherParameters;
        }
        this.key = eCKeyParameters;
    }

    @Override
    public boolean verifySignature(byte[] bArr, BigInteger bigInteger, BigInteger bigInteger2) {
        BigInteger n = this.key.getParameters().getN();
        BigInteger bigIntegerCalculateE = calculateE(n, bArr);
        if (bigInteger.compareTo(ONE) < 0 || bigInteger.compareTo(n) >= 0 || bigInteger2.compareTo(ONE) < 0 || bigInteger2.compareTo(n) >= 0) {
            return false;
        }
        BigInteger bigIntegerModInverse = bigInteger2.modInverse(n);
        return ECAlgorithms.sumOfTwoMultiplies(this.key.getParameters().getG(), bigIntegerCalculateE.multiply(bigIntegerModInverse).mod(n), ((ECPublicKeyParameters) this.key).getQ(), bigInteger.multiply(bigIntegerModInverse).mod(n)).getX().toBigInteger().mod(n).equals(bigInteger);
    }
}
