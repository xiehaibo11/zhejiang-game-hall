package org.bouncycastle.crypto.util;

public class PublicKeyFactory {
    public PublicKeyFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter createKey(java.io.InputStream r1) throws java.io.IOException {
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r1 = r0.readObject()
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r1 = org.bouncycastle.asn1.x509.SubjectPublicKeyInfo.getInstance(r1)
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r1 = createKey(r1)
            return r1
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter createKey(org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r8) throws java.io.IOException {
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r8.getAlgorithmId()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.rsaEncryption
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L18b
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x509.X509ObjectIdentifiers.id_ea_rsa
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L1e
            goto L18b
        L1e:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.dhKeyAgreement
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L15f
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.dhpublicnumber
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L38
            goto L15f
        L38:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.elGamalAlgorithm
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L70
            org.bouncycastle.asn1.oiw.ElGamalParameter r0 = new org.bouncycastle.asn1.oiw.ElGamalParameter
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r8.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r8 = r8.getPublicKey()
            org.bouncycastle.asn1.DERInteger r8 = (org.bouncycastle.asn1.DERInteger) r8
            org.bouncycastle.crypto.params.ElGamalPublicKeyParameters r1 = new org.bouncycastle.crypto.params.ElGamalPublicKeyParameters
            java.math.BigInteger r8 = r8.getValue()
            org.bouncycastle.crypto.params.ElGamalParameters r2 = new org.bouncycastle.crypto.params.ElGamalParameters
            java.math.BigInteger r3 = r0.getP()
            java.math.BigInteger r0 = r0.getG()
            r2.<init>(r3, r0)
            r1.<init>(r8, r2)
            return r1
        L70:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L12f
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.dsaWithSHA1
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L8a
            goto L12f
        L8a:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_ecPublicKey
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L127
            org.bouncycastle.asn1.x9.X962Parameters r0 = new org.bouncycastle.asn1.x9.X962Parameters
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r8.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.DERObject r1 = (org.bouncycastle.asn1.DERObject) r1
            r0.<init>(r1)
            boolean r1 = r0.isNamedCurve()
            if (r1 == 0) goto Le2
            org.bouncycastle.asn1.DERObject r0 = r0.getParameters()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            org.bouncycastle.asn1.x9.X9ECParameters r1 = org.bouncycastle.asn1.x9.X962NamedCurves.getByOID(r0)
            if (r1 != 0) goto Lc7
            org.bouncycastle.asn1.x9.X9ECParameters r1 = org.bouncycastle.asn1.sec.SECNamedCurves.getByOID(r0)
            if (r1 != 0) goto Lc7
            org.bouncycastle.asn1.x9.X9ECParameters r1 = org.bouncycastle.asn1.nist.NISTNamedCurves.getByOID(r0)
            if (r1 != 0) goto Lc7
            org.bouncycastle.asn1.x9.X9ECParameters r1 = org.bouncycastle.asn1.teletrust.TeleTrusTNamedCurves.getByOID(r0)
        Lc7:
            org.bouncycastle.crypto.params.ECDomainParameters r0 = new org.bouncycastle.crypto.params.ECDomainParameters
            org.bouncycastle.math.ec.ECCurve r3 = r1.getCurve()
            org.bouncycastle.math.ec.ECPoint r4 = r1.getG()
            java.math.BigInteger r5 = r1.getN()
            java.math.BigInteger r6 = r1.getH()
            byte[] r7 = r1.getSeed()
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7)
            goto L107
        Le2:
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
        L107:
            org.bouncycastle.asn1.DERBitString r8 = r8.getPublicKeyData()
            byte[] r8 = r8.getBytes()
            org.bouncycastle.asn1.DEROctetString r1 = new org.bouncycastle.asn1.DEROctetString
            r1.<init>(r8)
            org.bouncycastle.asn1.x9.X9ECPoint r8 = new org.bouncycastle.asn1.x9.X9ECPoint
            org.bouncycastle.math.ec.ECCurve r2 = r0.getCurve()
            r8.<init>(r2, r1)
            org.bouncycastle.crypto.params.ECPublicKeyParameters r1 = new org.bouncycastle.crypto.params.ECPublicKeyParameters
            org.bouncycastle.math.ec.ECPoint r8 = r8.getPoint()
            r1.<init>(r8, r0)
            return r1
        L127:
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            java.lang.String r0 = "algorithm identifier in key not recognised"
            r8.<init>(r0)
            throw r8
        L12f:
            org.bouncycastle.asn1.x509.DSAParameter r0 = new org.bouncycastle.asn1.x509.DSAParameter
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r8.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r8 = r8.getPublicKey()
            org.bouncycastle.asn1.DERInteger r8 = (org.bouncycastle.asn1.DERInteger) r8
            org.bouncycastle.crypto.params.DSAPublicKeyParameters r1 = new org.bouncycastle.crypto.params.DSAPublicKeyParameters
            java.math.BigInteger r8 = r8.getValue()
            org.bouncycastle.crypto.params.DSAParameters r2 = new org.bouncycastle.crypto.params.DSAParameters
            java.math.BigInteger r3 = r0.getP()
            java.math.BigInteger r4 = r0.getQ()
            java.math.BigInteger r0 = r0.getG()
            r2.<init>(r3, r4, r0)
            r1.<init>(r8, r2)
            return r1
        L15f:
            org.bouncycastle.asn1.pkcs.DHParameter r0 = new org.bouncycastle.asn1.pkcs.DHParameter
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r8.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r8 = r8.getPublicKey()
            org.bouncycastle.asn1.DERInteger r8 = (org.bouncycastle.asn1.DERInteger) r8
            org.bouncycastle.crypto.params.DHPublicKeyParameters r1 = new org.bouncycastle.crypto.params.DHPublicKeyParameters
            java.math.BigInteger r8 = r8.getValue()
            org.bouncycastle.crypto.params.DHParameters r2 = new org.bouncycastle.crypto.params.DHParameters
            java.math.BigInteger r3 = r0.getP()
            java.math.BigInteger r0 = r0.getG()
            r2.<init>(r3, r0)
            r1.<init>(r8, r2)
            return r1
        L18b:
            org.bouncycastle.asn1.x509.RSAPublicKeyStructure r0 = new org.bouncycastle.asn1.x509.RSAPublicKeyStructure
            org.bouncycastle.asn1.DERObject r8 = r8.getPublicKey()
            org.bouncycastle.asn1.ASN1Sequence r8 = (org.bouncycastle.asn1.ASN1Sequence) r8
            r0.<init>(r8)
            org.bouncycastle.crypto.params.RSAKeyParameters r8 = new org.bouncycastle.crypto.params.RSAKeyParameters
            r1 = 0
            java.math.BigInteger r2 = r0.getModulus()
            java.math.BigInteger r0 = r0.getPublicExponent()
            r8.<init>(r1, r2, r0)
            return r8
    }

    public static org.bouncycastle.crypto.params.AsymmetricKeyParameter createKey(byte[] r0) throws java.io.IOException {
            org.bouncycastle.asn1.ASN1Object r0 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r0)
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = org.bouncycastle.asn1.x509.SubjectPublicKeyInfo.getInstance(r0)
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r0 = createKey(r0)
            return r0
    }
}
