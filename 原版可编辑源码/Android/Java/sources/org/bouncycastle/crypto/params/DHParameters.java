package org.bouncycastle.crypto.params;

import java.math.BigInteger;
import org.bouncycastle.crypto.CipherParameters;

public class DHParameters implements CipherParameters {
    private static final int DEFAULT_MINIMUM_LENGTH = 160;
    private BigInteger g;
    private BigInteger j;
    private int l;
    private int m;
    private BigInteger p;
    private BigInteger q;
    private DHValidationParameters validation;

    public DHParameters(BigInteger bigInteger, BigInteger bigInteger2) {
        this(bigInteger, bigInteger2, null, DEFAULT_MINIMUM_LENGTH, 0, null, null);
    }

    public DHParameters(BigInteger bigInteger, BigInteger bigInteger2, BigInteger bigInteger3) {
        this(bigInteger, bigInteger2, bigInteger3, DEFAULT_MINIMUM_LENGTH, 0, null, null);
    }

    public DHParameters(BigInteger bigInteger, BigInteger bigInteger2, BigInteger bigInteger3, int i) {
        this(bigInteger, bigInteger2, bigInteger3, i, i, null, null);
    }

    public DHParameters(BigInteger bigInteger, BigInteger bigInteger2, BigInteger bigInteger3, int i, int i2) {
        this(bigInteger, bigInteger2, bigInteger3, i, i2, null, null);
    }

    public DHParameters(BigInteger bigInteger, BigInteger bigInteger2, BigInteger bigInteger3, int i, int i2, BigInteger bigInteger4, DHValidationParameters dHValidationParameters) {
        this.m = DEFAULT_MINIMUM_LENGTH;
        if (i2 != 0 && i > i2) {
            throw new IllegalArgumentException("l value must be greater than m value if provided");
        }
        this.g = bigInteger2;
        this.p = bigInteger;
        this.q = bigInteger3;
        this.m = i;
        this.l = i2;
        this.j = bigInteger4;
        this.validation = dHValidationParameters;
    }

    public DHParameters(BigInteger bigInteger, BigInteger bigInteger2, BigInteger bigInteger3, BigInteger bigInteger4, DHValidationParameters dHValidationParameters) {
        this(bigInteger, bigInteger2, bigInteger3, DEFAULT_MINIMUM_LENGTH, 0, bigInteger4, dHValidationParameters);
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof DHParameters)) {
            return false;
        }
        DHParameters dHParameters = (DHParameters) obj;
        if (getQ() != null) {
            if (!getQ().equals(dHParameters.getQ())) {
                return false;
            }
        } else if (dHParameters.getQ() != null) {
            return false;
        }
        return dHParameters.getP().equals(this.p) && dHParameters.getG().equals(this.g);
    }

    public BigInteger getG() {
        return this.g;
    }

    public BigInteger getJ() {
        return this.j;
    }

    public int getL() {
        return this.l;
    }

    public int getM() {
        return this.m;
    }

    public BigInteger getP() {
        return this.p;
    }

    public BigInteger getQ() {
        return this.q;
    }

    public DHValidationParameters getValidationParameters() {
        return this.validation;
    }

    public int hashCode() {
        return (getP().hashCode() ^ getG().hashCode()) ^ (getQ() != null ? getQ().hashCode() : 0);
    }
}
