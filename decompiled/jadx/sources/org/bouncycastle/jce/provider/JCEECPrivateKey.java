package org.bouncycastle.jce.provider;

import java.math.BigInteger;
import java.security.interfaces.ECPrivateKey;
import java.security.spec.ECParameterSpec;
import java.security.spec.ECPoint;
import java.security.spec.ECPrivateKeySpec;
import java.util.Enumeration;
import org.bouncycastle.asn1.DEREncodable;
import org.bouncycastle.asn1.DERNull;
import org.bouncycastle.asn1.DERObjectIdentifier;
import org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers;
import org.bouncycastle.asn1.pkcs.PrivateKeyInfo;
import org.bouncycastle.asn1.sec.ECPrivateKeyStructure;
import org.bouncycastle.asn1.x509.AlgorithmIdentifier;
import org.bouncycastle.asn1.x9.X962Parameters;
import org.bouncycastle.asn1.x9.X9ECParameters;
import org.bouncycastle.asn1.x9.X9ObjectIdentifiers;
import org.bouncycastle.crypto.params.ECDomainParameters;
import org.bouncycastle.crypto.params.ECPrivateKeyParameters;
import org.bouncycastle.jce.interfaces.ECPointEncoder;
import org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier;
import org.bouncycastle.jce.spec.ECNamedCurveSpec;
import org.bouncycastle.math.ec.ECCurve;

/* JADX INFO: loaded from: classes4.dex */
public class JCEECPrivateKey implements ECPrivateKey, org.bouncycastle.jce.interfaces.ECPrivateKey, PKCS12BagAttributeCarrier, ECPointEncoder {
    private String algorithm;
    private PKCS12BagAttributeCarrier attrCarrier;
    private BigInteger d;
    private ECParameterSpec ecSpec;
    private boolean withCompression;

    protected JCEECPrivateKey() {
        this.algorithm = "EC";
        this.attrCarrier = new PKCS12BagAttributeCarrierImpl();
    }

    JCEECPrivateKey(String str, ECPrivateKeySpec eCPrivateKeySpec) {
        this.algorithm = "EC";
        this.attrCarrier = new PKCS12BagAttributeCarrierImpl();
        this.algorithm = str;
        this.d = eCPrivateKeySpec.getS();
        this.ecSpec = eCPrivateKeySpec.getParams();
    }

    JCEECPrivateKey(String str, ECPrivateKeyParameters eCPrivateKeyParameters) {
        this.algorithm = "EC";
        this.attrCarrier = new PKCS12BagAttributeCarrierImpl();
        this.algorithm = str;
        this.d = eCPrivateKeyParameters.getD();
        this.ecSpec = null;
    }

    JCEECPrivateKey(String str, ECPrivateKeyParameters eCPrivateKeyParameters, ECParameterSpec eCParameterSpec) {
        this.algorithm = "EC";
        this.attrCarrier = new PKCS12BagAttributeCarrierImpl();
        ECDomainParameters parameters = eCPrivateKeyParameters.getParameters();
        this.algorithm = str;
        this.d = eCPrivateKeyParameters.getD();
        if (eCParameterSpec == null) {
            this.ecSpec = new ECParameterSpec(EC5Util.convertCurve(parameters.getCurve(), parameters.getSeed()), new ECPoint(parameters.getG().getX().toBigInteger(), parameters.getG().getY().toBigInteger()), parameters.getN(), parameters.getH().intValue());
        } else {
            this.ecSpec = eCParameterSpec;
        }
    }

    JCEECPrivateKey(String str, ECPrivateKeyParameters eCPrivateKeyParameters, org.bouncycastle.jce.spec.ECParameterSpec eCParameterSpec) {
        this.algorithm = "EC";
        this.attrCarrier = new PKCS12BagAttributeCarrierImpl();
        ECDomainParameters parameters = eCPrivateKeyParameters.getParameters();
        this.algorithm = str;
        this.d = eCPrivateKeyParameters.getD();
        this.ecSpec = eCParameterSpec == null ? new ECParameterSpec(EC5Util.convertCurve(parameters.getCurve(), parameters.getSeed()), new ECPoint(parameters.getG().getX().toBigInteger(), parameters.getG().getY().toBigInteger()), parameters.getN(), parameters.getH().intValue()) : new ECParameterSpec(EC5Util.convertCurve(eCParameterSpec.getCurve(), eCParameterSpec.getSeed()), new ECPoint(eCParameterSpec.getG().getX().toBigInteger(), eCParameterSpec.getG().getY().toBigInteger()), eCParameterSpec.getN(), eCParameterSpec.getH().intValue());
    }

    JCEECPrivateKey(String str, JCEECPrivateKey jCEECPrivateKey) {
        this.algorithm = "EC";
        this.attrCarrier = new PKCS12BagAttributeCarrierImpl();
        this.algorithm = str;
        this.d = jCEECPrivateKey.d;
        this.ecSpec = jCEECPrivateKey.ecSpec;
        this.withCompression = jCEECPrivateKey.withCompression;
        this.attrCarrier = jCEECPrivateKey.attrCarrier;
    }

    JCEECPrivateKey(String str, org.bouncycastle.jce.spec.ECPrivateKeySpec eCPrivateKeySpec) {
        this.algorithm = "EC";
        this.attrCarrier = new PKCS12BagAttributeCarrierImpl();
        this.algorithm = str;
        this.d = eCPrivateKeySpec.getD();
        this.ecSpec = eCPrivateKeySpec.getParams() != null ? EC5Util.convertSpec(EC5Util.convertCurve(eCPrivateKeySpec.getParams().getCurve(), eCPrivateKeySpec.getParams().getSeed()), eCPrivateKeySpec.getParams()) : null;
    }

    JCEECPrivateKey(ECPrivateKey eCPrivateKey) {
        this.algorithm = "EC";
        this.attrCarrier = new PKCS12BagAttributeCarrierImpl();
        this.d = eCPrivateKey.getS();
        this.algorithm = eCPrivateKey.getAlgorithm();
        this.ecSpec = eCPrivateKey.getParams();
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0105  */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0110  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    JCEECPrivateKey(org.bouncycastle.asn1.pkcs.PrivateKeyInfo r11) {
        /*
            Method dump skipped, instruction units count: 290
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: org.bouncycastle.jce.provider.JCEECPrivateKey.<init>(org.bouncycastle.asn1.pkcs.PrivateKeyInfo):void");
    }

    org.bouncycastle.jce.spec.ECParameterSpec engineGetSpec() {
        ECParameterSpec eCParameterSpec = this.ecSpec;
        return eCParameterSpec != null ? EC5Util.convertSpec(eCParameterSpec, this.withCompression) : ProviderUtil.getEcImplicitlyCa();
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof JCEECPrivateKey)) {
            return false;
        }
        JCEECPrivateKey jCEECPrivateKey = (JCEECPrivateKey) obj;
        return getD().equals(jCEECPrivateKey.getD()) && engineGetSpec().equals(jCEECPrivateKey.engineGetSpec());
    }

    @Override // java.security.Key
    public String getAlgorithm() {
        return this.algorithm;
    }

    @Override // org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier
    public DEREncodable getBagAttribute(DERObjectIdentifier dERObjectIdentifier) {
        return this.attrCarrier.getBagAttribute(dERObjectIdentifier);
    }

    @Override // org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier
    public Enumeration getBagAttributeKeys() {
        return this.attrCarrier.getBagAttributeKeys();
    }

    @Override // org.bouncycastle.jce.interfaces.ECPrivateKey
    public BigInteger getD() {
        return this.d;
    }

    @Override // java.security.Key
    public byte[] getEncoded() {
        X962Parameters x962Parameters;
        ECParameterSpec eCParameterSpec = this.ecSpec;
        if (eCParameterSpec instanceof ECNamedCurveSpec) {
            x962Parameters = new X962Parameters(ECUtil.getNamedCurveOid(((ECNamedCurveSpec) eCParameterSpec).getName()));
        } else if (eCParameterSpec == null) {
            x962Parameters = new X962Parameters(DERNull.INSTANCE);
        } else {
            ECCurve eCCurveConvertCurve = EC5Util.convertCurve(eCParameterSpec.getCurve());
            x962Parameters = new X962Parameters(new X9ECParameters(eCCurveConvertCurve, EC5Util.convertPoint(eCCurveConvertCurve, this.ecSpec.getGenerator(), this.withCompression), this.ecSpec.getOrder(), BigInteger.valueOf(this.ecSpec.getCofactor()), this.ecSpec.getCurve().getSeed()));
        }
        return (this.algorithm.equals("ECGOST3410") ? new PrivateKeyInfo(new AlgorithmIdentifier(CryptoProObjectIdentifiers.gostR3410_2001, x962Parameters.getDERObject()), new ECPrivateKeyStructure(getS()).getDERObject()) : new PrivateKeyInfo(new AlgorithmIdentifier(X9ObjectIdentifiers.id_ecPublicKey, x962Parameters.getDERObject()), new ECPrivateKeyStructure(getS()).getDERObject())).getDEREncoded();
    }

    @Override // java.security.Key
    public String getFormat() {
        return "PKCS#8";
    }

    @Override // org.bouncycastle.jce.interfaces.ECKey
    public org.bouncycastle.jce.spec.ECParameterSpec getParameters() {
        ECParameterSpec eCParameterSpec = this.ecSpec;
        if (eCParameterSpec == null) {
            return null;
        }
        return EC5Util.convertSpec(eCParameterSpec, this.withCompression);
    }

    @Override // java.security.interfaces.ECKey
    public ECParameterSpec getParams() {
        return this.ecSpec;
    }

    @Override // java.security.interfaces.ECPrivateKey
    public BigInteger getS() {
        return this.d;
    }

    public int hashCode() {
        return getD().hashCode() ^ engineGetSpec().hashCode();
    }

    @Override // org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier
    public void setBagAttribute(DERObjectIdentifier dERObjectIdentifier, DEREncodable dEREncodable) {
        this.attrCarrier.setBagAttribute(dERObjectIdentifier, dEREncodable);
    }

    @Override // org.bouncycastle.jce.interfaces.ECPointEncoder
    public void setPointFormat(String str) {
        this.withCompression = !"UNCOMPRESSED".equalsIgnoreCase(str);
    }
}
