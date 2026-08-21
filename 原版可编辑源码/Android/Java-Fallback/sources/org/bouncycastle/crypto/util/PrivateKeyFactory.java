package org.bouncycastle.crypto.util;

public class PrivateKeyFactory {
    public PrivateKeyFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter createKey(java.io.InputStream r1) throws java.io.IOException {
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r1 = r0.readObject()
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r1 = org.bouncycastle.asn1.pkcs.PrivateKeyInfo.getInstance(r1)
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r1 = createKey(r1)
            return r1
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter createKey(org.bouncycastle.asn1.pkcs.PrivateKeyInfo r10) throws java.io.IOException {
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r10.getAlgorithmId()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.rsaEncryption
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L42
            org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure r0 = new org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure
            org.bouncycastle.asn1.DERObject r10 = r10.getPrivateKey()
            org.bouncycastle.asn1.ASN1Sequence r10 = (org.bouncycastle.asn1.ASN1Sequence) r10
            r0.<init>(r10)
            org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters r10 = new org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters
            java.math.BigInteger r2 = r0.getModulus()
            java.math.BigInteger r3 = r0.getPublicExponent()
            java.math.BigInteger r4 = r0.getPrivateExponent()
            java.math.BigInteger r5 = r0.getPrime1()
            java.math.BigInteger r6 = r0.getPrime2()
            java.math.BigInteger r7 = r0.getExponent1()
            java.math.BigInteger r8 = r0.getExponent2()
            java.math.BigInteger r9 = r0.getCoefficient()
            r1 = r10
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            return r10
        L42:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.dhKeyAgreement
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L7a
            org.bouncycastle.asn1.pkcs.DHParameter r0 = new org.bouncycastle.asn1.pkcs.DHParameter
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r10.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r10 = r10.getPrivateKey()
            org.bouncycastle.asn1.DERInteger r10 = (org.bouncycastle.asn1.DERInteger) r10
            org.bouncycastle.crypto.params.DHPrivateKeyParameters r1 = new org.bouncycastle.crypto.params.DHPrivateKeyParameters
            java.math.BigInteger r10 = r10.getValue()
            org.bouncycastle.crypto.params.DHParameters r2 = new org.bouncycastle.crypto.params.DHParameters
            java.math.BigInteger r3 = r0.getP()
            java.math.BigInteger r0 = r0.getG()
            r2.<init>(r3, r0)
            r1.<init>(r10, r2)
            return r1
        L7a:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.elGamalAlgorithm
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto Lb2
            org.bouncycastle.asn1.oiw.ElGamalParameter r0 = new org.bouncycastle.asn1.oiw.ElGamalParameter
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r10.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r10 = r10.getPrivateKey()
            org.bouncycastle.asn1.DERInteger r10 = (org.bouncycastle.asn1.DERInteger) r10
            org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters r1 = new org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters
            java.math.BigInteger r10 = r10.getValue()
            org.bouncycastle.crypto.params.ElGamalParameters r2 = new org.bouncycastle.crypto.params.ElGamalParameters
            java.math.BigInteger r3 = r0.getP()
            java.math.BigInteger r0 = r0.getG()
            r2.<init>(r3, r0)
            r1.<init>(r10, r2)
            return r1
        Lb2:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto Lee
            org.bouncycastle.asn1.x509.DSAParameter r0 = new org.bouncycastle.asn1.x509.DSAParameter
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r10.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r10 = r10.getPrivateKey()
            org.bouncycastle.asn1.DERInteger r10 = (org.bouncycastle.asn1.DERInteger) r10
            org.bouncycastle.crypto.params.DSAPrivateKeyParameters r1 = new org.bouncycastle.crypto.params.DSAPrivateKeyParameters
            java.math.BigInteger r10 = r10.getValue()
            org.bouncycastle.crypto.params.DSAParameters r2 = new org.bouncycastle.crypto.params.DSAParameters
            java.math.BigInteger r3 = r0.getP()
            java.math.BigInteger r4 = r0.getQ()
            java.math.BigInteger r0 = r0.getG()
            r2.<init>(r3, r4, r0)
            r1.<init>(r10, r2)
            return r1
        Lee:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_ecPublicKey
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L180
            org.bouncycastle.asn1.x9.X962Parameters r0 = new org.bouncycastle.asn1.x9.X962Parameters
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r10.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.DERObject r1 = (org.bouncycastle.asn1.DERObject) r1
            r0.<init>(r1)
            boolean r1 = r0.isNamedCurve()
            if (r1 == 0) goto L146
            org.bouncycastle.asn1.DERObject r0 = r0.getParameters()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            org.bouncycastle.asn1.x9.X9ECParameters r1 = org.bouncycastle.asn1.x9.X962NamedCurves.getByOID(r0)
            if (r1 != 0) goto L12b
            org.bouncycastle.asn1.x9.X9ECParameters r1 = org.bouncycastle.asn1.sec.SECNamedCurves.getByOID(r0)
            if (r1 != 0) goto L12b
            org.bouncycastle.asn1.x9.X9ECParameters r1 = org.bouncycastle.asn1.nist.NISTNamedCurves.getByOID(r0)
            if (r1 != 0) goto L12b
            org.bouncycastle.asn1.x9.X9ECParameters r1 = org.bouncycastle.asn1.teletrust.TeleTrusTNamedCurves.getByOID(r0)
        L12b:
            org.bouncycastle.crypto.params.ECDomainParameters r0 = new org.bouncycastle.crypto.params.ECDomainParameters
            org.bouncycastle.math.ec.ECCurve r3 = r1.getCurve()
            org.bouncycastle.math.ec.ECPoint r4 = r1.getG()
            java.math.BigInteger r5 = r1.getN()
            java.math.BigInteger r6 = r1.getH()
            byte[] r7 = r1.getSeed()
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7)
            goto L16b
        L146:
            org.bouncycastle.asn1.x9.X9ECParameters r1 = new org.bouncycastle.asn1.x9.X9ECParameters
            org.bouncycastle.asn1.DERObject r0 = r0.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0
            r1.<init>(r0)
            org.bouncycastle.crypto.params.ECDomainParameters r0 = new org.bouncycastle.crypto.params.ECDomainParameters
            org.bouncycastle.math.ec.ECCurve r3 = r1.getCurve()
            org.bouncycastle.math.ec.ECPoint r4 = r1.getG()
            java.math.BigInteger r5 = r1.getN()
            java.math.BigInteger r6 = r1.getH()
            byte[] r7 = r1.getSeed()
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7)
        L16b:
            org.bouncycastle.asn1.sec.ECPrivateKeyStructure r1 = new org.bouncycastle.asn1.sec.ECPrivateKeyStructure
            org.bouncycastle.asn1.DERObject r10 = r10.getPrivateKey()
            org.bouncycastle.asn1.ASN1Sequence r10 = (org.bouncycastle.asn1.ASN1Sequence) r10
            r1.<init>(r10)
            org.bouncycastle.crypto.params.ECPrivateKeyParameters r10 = new org.bouncycastle.crypto.params.ECPrivateKeyParameters
            java.math.BigInteger r1 = r1.getKey()
            r10.<init>(r1, r0)
            return r10
        L180:
            java.lang.RuntimeException r10 = new java.lang.RuntimeException
            java.lang.String r0 = "algorithm identifier in key not recognised"
            r10.<init>(r0)
            throw r10
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter createKey(byte[] r0) throws java.io.IOException {
            org.bouncycastle.asn1.ASN1Object r0 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r0)
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = org.bouncycastle.asn1.pkcs.PrivateKeyInfo.getInstance(r0)
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r0 = createKey(r0)
            return r0
    }
}
