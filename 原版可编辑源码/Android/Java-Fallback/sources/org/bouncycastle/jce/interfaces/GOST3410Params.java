package org.bouncycastle.jce.interfaces;

public interface GOST3410Params {
    java.lang.String getDigestParamSetOID();

    java.lang.String getEncryptionParamSetOID();

    java.lang.String getPublicKeyParamSetOID();

    org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec getPublicKeyParameters();
}
