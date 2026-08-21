package org.bouncycastle.crypto.agreement;

import java.math.BigInteger;
import java.security.SecureRandom;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.params.AsymmetricKeyParameter;
import org.bouncycastle.crypto.params.DHParameters;
import org.bouncycastle.crypto.params.DHPrivateKeyParameters;
import org.bouncycastle.crypto.params.DHPublicKeyParameters;
import org.bouncycastle.crypto.params.ParametersWithRandom;

/* JADX INFO: loaded from: classes4.dex */
public class DHAgreement {
    private DHParameters dhParams;
    private DHPrivateKeyParameters key;
    private BigInteger privateValue;
    private SecureRandom random;

    public BigInteger calculateAgreement(DHPublicKeyParameters dHPublicKeyParameters, BigInteger bigInteger) {
        if (dHPublicKeyParameters.getParameters().equals(this.dhParams)) {
            return bigInteger.modPow(this.key.getX(), this.dhParams.getP()).multiply(dHPublicKeyParameters.getY().modPow(this.privateValue, this.dhParams.getP())).mod(this.dhParams.getP());
        }
        throw new IllegalArgumentException("Diffie-Hellman public key has wrong parameters.");
    }

    public BigInteger calculateMessage() {
        int iBitLength = this.dhParams.getP().bitLength() - 1;
        this.privateValue = new BigInteger(iBitLength, this.random).setBit(iBitLength - 1);
        return this.dhParams.getG().modPow(this.privateValue, this.dhParams.getP());
    }

    public void init(CipherParameters cipherParameters) {
        if (cipherParameters instanceof ParametersWithRandom) {
            ParametersWithRandom parametersWithRandom = (ParametersWithRandom) cipherParameters;
            this.random = parametersWithRandom.getRandom();
            cipherParameters = parametersWithRandom.getParameters();
        } else {
            this.random = new SecureRandom();
        }
        AsymmetricKeyParameter asymmetricKeyParameter = (AsymmetricKeyParameter) cipherParameters;
        if (!(asymmetricKeyParameter instanceof DHPrivateKeyParameters)) {
            throw new IllegalArgumentException("DHEngine expects DHPrivateKeyParameters");
        }
        DHPrivateKeyParameters dHPrivateKeyParameters = (DHPrivateKeyParameters) asymmetricKeyParameter;
        this.key = dHPrivateKeyParameters;
        this.dhParams = dHPrivateKeyParameters.getParameters();
    }
}
