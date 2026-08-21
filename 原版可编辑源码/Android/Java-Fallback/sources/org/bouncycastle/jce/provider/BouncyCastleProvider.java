package org.bouncycastle.jce.provider;

public final class BouncyCastleProvider extends java.security.Provider implements org.bouncycastle.jce.interfaces.ConfigurableProvider {
    public static java.lang.String PROVIDER_NAME = "BC";
    private static java.lang.String info = "BouncyCastle Security Provider v1.39";

    static {
            return
    }

    public BouncyCastleProvider() {
            r11 = this;
            java.lang.String r0 = org.bouncycastle.jce.provider.BouncyCastleProvider.PROVIDER_NAME
            java.lang.String r1 = org.bouncycastle.jce.provider.BouncyCastleProvider.info
            r2 = 4608938822654691901(0x3ff63d70a3d70a3d, double:1.39)
            r11.<init>(r0, r2, r1)
            org.bouncycastle.jce.provider.symmetric.AESMappings r0 = new org.bouncycastle.jce.provider.symmetric.AESMappings
            r0.<init>()
            r11.addMappings(r0)
            org.bouncycastle.jce.provider.symmetric.CamelliaMappings r0 = new org.bouncycastle.jce.provider.symmetric.CamelliaMappings
            r0.<init>()
            r11.addMappings(r0)
            org.bouncycastle.jce.provider.symmetric.CAST5Mappings r0 = new org.bouncycastle.jce.provider.symmetric.CAST5Mappings
            r0.<init>()
            r11.addMappings(r0)
            org.bouncycastle.jce.provider.symmetric.SEEDMappings r0 = new org.bouncycastle.jce.provider.symmetric.SEEDMappings
            r0.<init>()
            r11.addMappings(r0)
            org.bouncycastle.jce.provider.symmetric.NoekeonMappings r0 = new org.bouncycastle.jce.provider.symmetric.NoekeonMappings
            r0.<init>()
            r11.addMappings(r0)
            java.lang.String r0 = "X509Store.CERTIFICATE/COLLECTION"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509StoreCertCollection"
            r11.put(r0, r1)
            java.lang.String r0 = "X509Store.ATTRIBUTECERTIFICATE/COLLECTION"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509StoreAttrCertCollection"
            r11.put(r0, r1)
            java.lang.String r0 = "X509Store.CRL/COLLECTION"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509StoreCRLCollection"
            r11.put(r0, r1)
            java.lang.String r0 = "X509Store.CERTIFICATEPAIR/COLLECTION"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509StoreCertPairCollection"
            r11.put(r0, r1)
            java.lang.String r0 = "X509Store.CERTIFICATE/LDAP"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509StoreLDAPCerts"
            r11.put(r0, r1)
            java.lang.String r0 = "X509Store.CRL/LDAP"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509StoreLDAPCRLs"
            r11.put(r0, r1)
            java.lang.String r0 = "X509Store.ATTRIBUTECERTIFICATE/LDAP"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509StoreLDAPAttrCerts"
            r11.put(r0, r1)
            java.lang.String r0 = "X509Store.CERTIFICATEPAIR/LDAP"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509StoreLDAPCertPairs"
            r11.put(r0, r1)
            java.lang.String r0 = "X509StreamParser.CERTIFICATE"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509CertParser"
            r11.put(r0, r1)
            java.lang.String r0 = "X509StreamParser.ATTRIBUTECERTIFICATE"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509AttrCertParser"
            r11.put(r0, r1)
            java.lang.String r0 = "X509StreamParser.CRL"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509CRLParser"
            r11.put(r0, r1)
            java.lang.String r0 = "X509StreamParser.CERTIFICATEPAIR"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509CertPairParser"
            r11.put(r0, r1)
            java.lang.String r0 = "KeyStore.BKS"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKKeyStore"
            r11.put(r0, r1)
            java.lang.String r0 = "KeyStore.BouncyCastle"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKKeyStore$BouncyCastleStore"
            r11.put(r0, r1)
            java.lang.String r0 = "org.bouncycastle.jce.provider.JDKPKCS12KeyStore$BCPKCS12KeyStore"
            java.lang.String r1 = "KeyStore.PKCS12"
            r11.put(r1, r0)
            java.lang.String r1 = "KeyStore.BCPKCS12"
            r11.put(r1, r0)
            java.lang.String r0 = "KeyStore.PKCS12-DEF"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKPKCS12KeyStore$DefPKCS12KeyStore"
            r11.put(r0, r1)
            java.lang.String r0 = "BouncyCastle"
            java.lang.String r1 = "Alg.Alias.KeyStore.UBER"
            r11.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.KeyStore.BOUNCYCASTLE"
            r11.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.KeyStore.bouncycastle"
            r11.put(r1, r0)
            java.lang.String r0 = "CertificateFactory.X.509"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKX509CertificateFactory"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.CertificateFactory.X509"
            java.lang.String r1 = "X.509"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameterGenerator.DH"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator$DH"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameterGenerator.DSA"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator$DSA"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameterGenerator.GOST3410"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator$GOST3410"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameterGenerator.ELGAMAL"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator$ElGamal"
            r11.put(r0, r1)
            java.lang.String r0 = "org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator$DES"
            java.lang.String r1 = "AlgorithmParameterGenerator.DES"
            r11.put(r1, r0)
            java.lang.String r1 = "AlgorithmParameterGenerator.DESEDE"
            r11.put(r1, r0)
            java.lang.String r1 = "AlgorithmParameterGenerator.1.2.840.113549.3.7"
            r11.put(r1, r0)
            java.lang.String r1 = "AlgorithmParameterGenerator.1.3.14.3.2.7"
            r11.put(r1, r0)
            java.lang.String r0 = "AlgorithmParameterGenerator.IDEA"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator$IDEA"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameterGenerator.1.3.6.1.4.1.188.7.1.1.2"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator$IDEA"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameterGenerator.RC2"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator$RC2"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameterGenerator.1.2.840.113549.3.2"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator$RC2"
            r11.put(r0, r1)
            java.lang.String r0 = "GOST3410"
            java.lang.String r1 = "Alg.Alias.AlgorithmParameterGenerator.GOST-3410"
            r11.put(r1, r0)
            java.lang.String r1 = "AlgorithmParameters.OAEP"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$OAEP"
            r11.put(r1, r2)
            java.lang.String r1 = "AlgorithmParameters.PSS"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$PSS"
            r11.put(r1, r2)
            java.lang.String r1 = "AlgorithmParameters.DH"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$DH"
            r11.put(r1, r2)
            java.lang.String r1 = "AlgorithmParameters.DSA"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$DSA"
            r11.put(r1, r2)
            java.lang.String r1 = "AlgorithmParameters.ELGAMAL"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$ElGamal"
            r11.put(r1, r2)
            java.lang.String r1 = "AlgorithmParameters.IES"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$IES"
            r11.put(r1, r2)
            java.lang.String r1 = "AlgorithmParameters.PKCS12PBE"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$PKCS12PBE"
            r11.put(r1, r2)
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$IVAlgorithmParameters"
            java.lang.String r2 = "AlgorithmParameters.1.2.840.113549.3.7"
            r11.put(r2, r1)
            java.lang.String r2 = "AlgorithmParameters.IDEA"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$IDEAAlgorithmParameters"
            r11.put(r2, r3)
            java.lang.String r2 = "AlgorithmParameters.1.3.6.1.4.1.188.7.1.1.2"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$IDEAAlgorithmParameters"
            r11.put(r2, r3)
            java.lang.String r2 = "AlgorithmParameters.GOST3410"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$GOST3410"
            r11.put(r2, r3)
            java.lang.String r2 = "Alg.Alias.AlgorithmParameters.GOST-3410"
            r11.put(r2, r0)
            java.lang.String r2 = "PKCS12PBE"
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA1ANDRC2"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAAND3-KEYTRIPLEDES"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAAND2-KEYTRIPLEDES"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAANDRC2"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAANDRC4"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAANDTWOFISH"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAANDIDEA"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA1ANDRC2-CBC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAAND3-KEYTRIPLEDES-CBC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAAND2-KEYTRIPLEDES-CBC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAANDDES3KEY-CBC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAANDDES2KEY-CBC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAAND40BITRC2-CBC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAAND40BITRC4"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAAND128BITRC2-CBC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAAND128BITRC4"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAANDTWOFISH"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAANDIDEA"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAANDTWOFISH-CBC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAANDIDEA-CBC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.1.2.840.113549.1.12.1.1"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.1.2.840.113549.1.12.1.2"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.1.2.840.113549.1.12.1.3"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.1.2.840.113549.1.12.1.4"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.1.2.840.113549.1.12.1.5"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.1.2.840.113549.1.12.1.6"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWithSHAAnd3KeyTripleDES"
            r11.put(r3, r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Alg.Alias.AlgorithmParameters."
            r3.append(r4)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSAES_OAEP
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "OAEP"
            r11.put(r3, r4)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Alg.Alias.AlgorithmParameters."
            r3.append(r4)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "PSS"
            r11.put(r3, r4)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.SHA1WITHRSAANDMGF1"
            r11.put(r3, r4)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.SHA224WITHRSAANDMGF1"
            r11.put(r3, r4)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.SHA256WITHRSAANDMGF1"
            r11.put(r3, r4)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.SHA384WITHRSAANDMGF1"
            r11.put(r3, r4)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.SHA512WITHRSAANDMGF1"
            r11.put(r3, r4)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAAND128BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAAND192BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHAAND256BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA256AND128BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA256AND192BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA256AND256BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA1AND128BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA1AND192BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA1AND256BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA-1AND128BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA-1AND192BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA-1AND256BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA-256AND128BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA-256AND192BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.AlgorithmParameters.PBEWITHSHA-256AND256BITAES-CBC-BC"
            r11.put(r3, r2)
            java.lang.String r2 = "org.bouncycastle.jce.provider.JDKECDSAAlgParameters$SigAlgParameters"
            java.lang.String r3 = "AlgorithmParameters.SHA1WITHECDSA"
            r11.put(r3, r2)
            java.lang.String r3 = "AlgorithmParameters.SHA224WITHECDSA"
            r11.put(r3, r2)
            java.lang.String r3 = "AlgorithmParameters.SHA256WITHECDSA"
            r11.put(r3, r2)
            java.lang.String r3 = "AlgorithmParameters.SHA384WITHECDSA"
            r11.put(r3, r2)
            java.lang.String r3 = "AlgorithmParameters.SHA512WITHECDSA"
            r11.put(r3, r2)
            java.lang.String r2 = "KeyAgreement.DH"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEDHKeyAgreement"
            r11.put(r2, r3)
            java.lang.String r2 = "KeyAgreement.ECDH"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEECDHKeyAgreement$DH"
            r11.put(r2, r3)
            java.lang.String r2 = "KeyAgreement.ECDHC"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEECDHKeyAgreement$DHC"
            r11.put(r2, r3)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "KeyAgreement."
            r2.append(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.dhSinglePass_stdDH_sha1kdf_scheme
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEECDHKeyAgreement$DHwithSHA1KDF"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.DES"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$DES"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.DESEDE"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$DESede"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.1.2.840.113549.3.7"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$DESedeCBC"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.1.3.14.3.2.7"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$DESCBC"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.DESEDEWRAP"
            java.lang.String r3 = "org.bouncycastle.jce.provider.WrapCipherSpi$DESEDEWrap"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.1.2.840.113549.1.9.16.3.6"
            java.lang.String r3 = "org.bouncycastle.jce.provider.WrapCipherSpi$DESEDEWrap"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.SKIPJACK"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$Skipjack"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.BLOWFISH"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$Blowfish"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.TWOFISH"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$Twofish"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.RC2"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$RC2"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.RC2WRAP"
            java.lang.String r3 = "org.bouncycastle.jce.provider.WrapCipherSpi$RC2Wrap"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.1.2.840.113549.1.9.16.3.7"
            java.lang.String r3 = "org.bouncycastle.jce.provider.WrapCipherSpi$RC2Wrap"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.ARC4"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEStreamCipher$RC4"
            r11.put(r2, r3)
            java.lang.String r2 = "ARC4"
            java.lang.String r3 = "Alg.Alias.Cipher.1.2.840.113549.3.4"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.Cipher.ARCFOUR"
            r11.put(r3, r2)
            java.lang.String r3 = "Alg.Alias.Cipher.RC4"
            r11.put(r3, r2)
            java.lang.String r2 = "Cipher.SALSA20"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEStreamCipher$Salsa20"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.HC128"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEStreamCipher$HC128"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.HC256"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEStreamCipher$HC256"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.VMPC"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEStreamCipher$VMPC"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.VMPC-KSA3"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEStreamCipher$VMPCKSA3"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.RC5"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$RC5"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.1.2.840.113549.3.2"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$RC2CBC"
            r11.put(r2, r3)
            java.lang.String r2 = "Alg.Alias.Cipher.RC5-32"
            java.lang.String r3 = "RC5"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.RC5-64"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$RC564"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.RC6"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$RC6"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.RIJNDAEL"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$Rijndael"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.DESEDERFC3211WRAP"
            java.lang.String r3 = "org.bouncycastle.jce.provider.WrapCipherSpi$RFC3211DESedeWrap"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.SERPENT"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$Serpent"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.CAST6"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$CAST6"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.IDEA"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$IDEA"
            r11.put(r2, r3)
            java.lang.String r2 = "Cipher.1.3.6.1.4.1.188.7.1.1.2"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JCEBlockCipher$IDEACBC"
            r11.put(r2, r3)
            java.lang.String r2 = "PBEWITHSHAAND3-KEYTRIPLEDES-CBC"
            java.lang.String r3 = "Alg.Alias.Cipher.PBEWithSHAAnd3KeyTripleDES"
            r11.put(r3, r2)
            java.lang.String r3 = "Cipher.GOST28147"
            java.lang.String r4 = "org.bouncycastle.jce.provider.JCEBlockCipher$GOST28147"
            r11.put(r3, r4)
            java.lang.String r3 = "GOST28147"
            java.lang.String r4 = "Alg.Alias.Cipher.GOST"
            r11.put(r4, r3)
            java.lang.String r4 = "Alg.Alias.Cipher.GOST-28147"
            r11.put(r4, r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Cipher."
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r5 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR28147_cbc
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCEBlockCipher$GOST28147cbc"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.TEA"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCEBlockCipher$TEA"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.XTEA"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCEBlockCipher$XTEA"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.RSA"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCERSACipher$NoPadding"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.RSA/RAW"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCERSACipher$NoPadding"
            r11.put(r4, r5)
            java.lang.String r4 = "org.bouncycastle.jce.provider.JCERSACipher$PKCS1v1_5Padding"
            java.lang.String r5 = "Cipher.RSA/PKCS1"
            r11.put(r5, r4)
            java.lang.String r5 = "Cipher.1.2.840.113549.1.1.1"
            r11.put(r5, r4)
            java.lang.String r5 = "Cipher.2.5.8.1.1"
            r11.put(r5, r4)
            java.lang.String r4 = "Cipher.RSA/1"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCERSACipher$PKCS1v1_5Padding_PrivateOnly"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.RSA/2"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCERSACipher$PKCS1v1_5Padding_PublicOnly"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.RSA/OAEP"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCERSACipher$OAEPPadding"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.1.2.840.113549.1.1.7"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCERSACipher$OAEPPadding"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.RSA/ISO9796-1"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCERSACipher$ISO9796d1Padding"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.ECIES"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCEIESCipher$ECIES"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.BrokenECIES"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCEIESCipher$BrokenECIES"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.IES"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCEIESCipher$IES"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.BrokenIES"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCEIESCipher$BrokenIES"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.ELGAMAL"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCEElGamalCipher$NoPadding"
            r11.put(r4, r5)
            java.lang.String r4 = "Cipher.ELGAMAL/PKCS1"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCEElGamalCipher$PKCS1v1_5Padding"
            r11.put(r4, r5)
            java.lang.String r4 = "RSA"
            java.lang.String r5 = "Alg.Alias.Cipher.RSA//RAW"
            r11.put(r5, r4)
            java.lang.String r5 = "Alg.Alias.Cipher.RSA//NOPADDING"
            r11.put(r5, r4)
            java.lang.String r5 = "Alg.Alias.Cipher.RSA//PKCS1PADDING"
            java.lang.String r6 = "RSA/PKCS1"
            r11.put(r5, r6)
            java.lang.String r5 = "Alg.Alias.Cipher.RSA//OAEPPADDING"
            java.lang.String r6 = "RSA/OAEP"
            r11.put(r5, r6)
            java.lang.String r5 = "Alg.Alias.Cipher.RSA//ISO9796-1PADDING"
            java.lang.String r6 = "RSA/ISO9796-1"
            r11.put(r5, r6)
            java.lang.String r5 = "Alg.Alias.Cipher.ELGAMAL/ECB/PKCS1PADDING"
            java.lang.String r6 = "ELGAMAL/PKCS1"
            r11.put(r5, r6)
            java.lang.String r5 = "Alg.Alias.Cipher.ELGAMAL/NONE/PKCS1PADDING"
            java.lang.String r6 = "ELGAMAL/PKCS1"
            r11.put(r5, r6)
            java.lang.String r5 = "Alg.Alias.Cipher.ELGAMAL/NONE/NOPADDING"
            java.lang.String r6 = "ELGAMAL"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.PBEWITHMD5ANDDES"
            java.lang.String r6 = "org.bouncycastle.jce.provider.JCEBlockCipher$PBEWithMD5AndDES"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.BROKENPBEWITHMD5ANDDES"
            java.lang.String r6 = "org.bouncycastle.jce.provider.BrokenJCEBlockCipher$BrokePBEWithMD5AndDES"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.PBEWITHMD5ANDRC2"
            java.lang.String r6 = "org.bouncycastle.jce.provider.JCEBlockCipher$PBEWithMD5AndRC2"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.PBEWITHSHA1ANDDES"
            java.lang.String r6 = "org.bouncycastle.jce.provider.JCEBlockCipher$PBEWithSHA1AndDES"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.BROKENPBEWITHSHA1ANDDES"
            java.lang.String r6 = "org.bouncycastle.jce.provider.BrokenJCEBlockCipher$BrokePBEWithSHA1AndDES"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.PBEWITHSHA1ANDRC2"
            java.lang.String r6 = "org.bouncycastle.jce.provider.JCEBlockCipher$PBEWithSHA1AndRC2"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.PBEWITHSHAAND3-KEYTRIPLEDES-CBC"
            java.lang.String r6 = "org.bouncycastle.jce.provider.JCEBlockCipher$PBEWithSHAAndDES3Key"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.BROKENPBEWITHSHAAND3-KEYTRIPLEDES-CBC"
            java.lang.String r6 = "org.bouncycastle.jce.provider.BrokenJCEBlockCipher$BrokePBEWithSHAAndDES3Key"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.OLDPBEWITHSHAAND3-KEYTRIPLEDES-CBC"
            java.lang.String r6 = "org.bouncycastle.jce.provider.BrokenJCEBlockCipher$OldPBEWithSHAAndDES3Key"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.PBEWITHSHAAND2-KEYTRIPLEDES-CBC"
            java.lang.String r6 = "org.bouncycastle.jce.provider.JCEBlockCipher$PBEWithSHAAndDES2Key"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.BROKENPBEWITHSHAAND2-KEYTRIPLEDES-CBC"
            java.lang.String r6 = "org.bouncycastle.jce.provider.BrokenJCEBlockCipher$BrokePBEWithSHAAndDES2Key"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.PBEWITHSHAAND128BITRC2-CBC"
            java.lang.String r6 = "org.bouncycastle.jce.provider.JCEBlockCipher$PBEWithSHAAnd128BitRC2"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.PBEWITHSHAAND40BITRC2-CBC"
            java.lang.String r6 = "org.bouncycastle.jce.provider.JCEBlockCipher$PBEWithSHAAnd40BitRC2"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.PBEWITHSHAAND128BITRC4"
            java.lang.String r6 = "org.bouncycastle.jce.provider.JCEStreamCipher$PBEWithSHAAnd128BitRC4"
            r11.put(r5, r6)
            java.lang.String r5 = "Cipher.PBEWITHSHAAND40BITRC4"
            java.lang.String r6 = "org.bouncycastle.jce.provider.JCEStreamCipher$PBEWithSHAAnd40BitRC4"
            r11.put(r5, r6)
            java.lang.String r5 = "Alg.Alias.Cipher.PBEWITHSHA1AND3-KEYTRIPLEDES-CBC"
            java.lang.String r6 = "Cipher.PBEWITHSHAAND3-KEYTRIPLEDES-CBC"
            r11.put(r5, r6)
            java.lang.String r5 = "Alg.Alias.Cipher.PBEWITHSHA1AND2-KEYTRIPLEDES-CBC"
            java.lang.String r6 = "Cipher.PBEWITHSHAAND2-KEYTRIPLEDES-CBC"
            r11.put(r5, r6)
            java.lang.String r5 = "Alg.Alias.Cipher.PBEWITHSHA1AND128BITRC2-CBC"
            java.lang.String r6 = "Cipher.PBEWITHSHAAND128BITRC2-CBC"
            r11.put(r5, r6)
            java.lang.String r5 = "Alg.Alias.Cipher.PBEWITHSHA1AND40BITRC2-CBC"
            java.lang.String r6 = "Cipher.PBEWITHSHAAND40BITRC2-CBC"
            r11.put(r5, r6)
            java.lang.String r5 = "Alg.Alias.Cipher.PBEWITHSHA1AND128BITRC4"
            java.lang.String r6 = "Cipher.PBEWITHSHAAND128BITRC4"
            r11.put(r5, r6)
            java.lang.String r5 = "Alg.Alias.Cipher.PBEWITHSHA1AND40BITRC4"
            java.lang.String r6 = "Cipher.PBEWITHSHAAND40BITRC4"
            r11.put(r5, r6)
            java.lang.String r5 = "org.bouncycastle.jce.provider.JCEBlockCipher$PBEWithAESCBC"
            java.lang.String r6 = "Cipher.PBEWITHSHAAND128BITAES-CBC-BC"
            r11.put(r6, r5)
            java.lang.String r6 = "Cipher.PBEWITHSHAAND192BITAES-CBC-BC"
            r11.put(r6, r5)
            java.lang.String r6 = "Cipher.PBEWITHSHAAND256BITAES-CBC-BC"
            r11.put(r6, r5)
            java.lang.String r6 = "Cipher.PBEWITHSHA256AND128BITAES-CBC-BC"
            r11.put(r6, r5)
            java.lang.String r6 = "Cipher.PBEWITHSHA256AND192BITAES-CBC-BC"
            r11.put(r6, r5)
            java.lang.String r6 = "Cipher.PBEWITHSHA256AND256BITAES-CBC-BC"
            r11.put(r6, r5)
            java.lang.String r6 = "PBEWITHSHAAND128BITAES-CBC-BC"
            java.lang.String r7 = "Alg.Alias.Cipher.PBEWITHSHA1AND128BITAES-CBC-BC"
            r11.put(r7, r6)
            java.lang.String r7 = "PBEWITHSHAAND192BITAES-CBC-BC"
            java.lang.String r8 = "Alg.Alias.Cipher.PBEWITHSHA1AND192BITAES-CBC-BC"
            r11.put(r8, r7)
            java.lang.String r8 = "PBEWITHSHAAND256BITAES-CBC-BC"
            java.lang.String r9 = "Alg.Alias.Cipher.PBEWITHSHA1AND256BITAES-CBC-BC"
            r11.put(r9, r8)
            java.lang.String r9 = "Alg.Alias.Cipher.PBEWITHSHA-1AND128BITAES-CBC-BC"
            r11.put(r9, r6)
            java.lang.String r9 = "Alg.Alias.Cipher.PBEWITHSHA-1AND192BITAES-CBC-BC"
            r11.put(r9, r7)
            java.lang.String r9 = "Alg.Alias.Cipher.PBEWITHSHA-1AND256BITAES-CBC-BC"
            r11.put(r9, r8)
            java.lang.String r9 = "Alg.Alias.Cipher.PBEWITHSHA-256AND128BITAES-CBC-BC"
            java.lang.String r10 = "PBEWITHSHA256AND128BITAES-CBC-BC"
            r11.put(r9, r10)
            java.lang.String r9 = "Alg.Alias.Cipher.PBEWITHSHA-256AND192BITAES-CBC-BC"
            java.lang.String r10 = "PBEWITHSHA256AND192BITAES-CBC-BC"
            r11.put(r9, r10)
            java.lang.String r9 = "Alg.Alias.Cipher.PBEWITHSHA-256AND256BITAES-CBC-BC"
            java.lang.String r10 = "PBEWITHSHA256AND256BITAES-CBC-BC"
            r11.put(r9, r10)
            java.lang.String r9 = "Cipher.PBEWITHMD5AND128BITAES-CBC-OPENSSL"
            r11.put(r9, r5)
            java.lang.String r9 = "Cipher.PBEWITHMD5AND192BITAES-CBC-OPENSSL"
            r11.put(r9, r5)
            java.lang.String r9 = "Cipher.PBEWITHMD5AND256BITAES-CBC-OPENSSL"
            r11.put(r9, r5)
            java.lang.String r5 = "Cipher.PBEWITHSHAANDTWOFISH-CBC"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEBlockCipher$PBEWithSHAAndTwofish"
            r11.put(r5, r9)
            java.lang.String r5 = "Cipher.OLDPBEWITHSHAANDTWOFISH-CBC"
            java.lang.String r9 = "org.bouncycastle.jce.provider.BrokenJCEBlockCipher$OldPBEWithSHAAndTwofish"
            r11.put(r5, r9)
            java.lang.String r5 = "Cipher.PBEWITHSHAANDIDEA-CBC"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEBlockCipher$PBEWithSHAAndIDEA"
            r11.put(r5, r9)
            java.lang.String r5 = "Alg.Alias.Cipher.1.2.840.113549.1.12.1.1"
            java.lang.String r9 = "PBEWITHSHAAND128BITRC4"
            r11.put(r5, r9)
            java.lang.String r5 = "Alg.Alias.Cipher.1.2.840.113549.1.12.1.2"
            java.lang.String r9 = "PBEWITHSHAAND40BITRC4"
            r11.put(r5, r9)
            java.lang.String r5 = "Alg.Alias.Cipher.1.2.840.113549.1.12.1.3"
            r11.put(r5, r2)
            java.lang.String r5 = "Alg.Alias.Cipher.1.2.840.113549.1.12.1.4"
            java.lang.String r9 = "PBEWITHSHAAND2-KEYTRIPLEDES-CBC"
            r11.put(r5, r9)
            java.lang.String r5 = "Alg.Alias.Cipher.1.2.840.113549.1.12.1.5"
            java.lang.String r9 = "PBEWITHSHAAND128BITRC2-CBC"
            r11.put(r5, r9)
            java.lang.String r5 = "Alg.Alias.Cipher.1.2.840.113549.1.12.1.6"
            java.lang.String r9 = "PBEWITHSHAAND40BITRC2-CBC"
            r11.put(r5, r9)
            java.lang.String r5 = "Alg.Alias.Cipher.PBEWITHSHA1ANDDESEDE"
            r11.put(r5, r2)
            java.lang.String r5 = "KeyGenerator.DES"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$DES"
            r11.put(r5, r9)
            java.lang.String r5 = "Alg.Alias.KeyGenerator.1.3.14.3.2.7"
            java.lang.String r9 = "DES"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.DESEDE"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$DESede"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.1.2.840.113549.3.7"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$DESede3"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.DESEDEWRAP"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$DESede"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.SKIPJACK"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$Skipjack"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.BLOWFISH"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$Blowfish"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.TWOFISH"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$Twofish"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.RC2"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$RC2"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.1.2.840.113549.3.2"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$RC2"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.RC4"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$RC4"
            r11.put(r5, r9)
            java.lang.String r5 = "Alg.Alias.KeyGenerator.ARC4"
            java.lang.String r9 = "RC4"
            r11.put(r5, r9)
            java.lang.String r5 = "Alg.Alias.KeyGenerator.1.2.840.113549.3.4"
            java.lang.String r9 = "RC4"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.RC5"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$RC5"
            r11.put(r5, r9)
            java.lang.String r5 = "Alg.Alias.KeyGenerator.RC5-32"
            java.lang.String r9 = "RC5"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.RC5-64"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$RC564"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.RC6"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$RC6"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.RIJNDAEL"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$Rijndael"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.SERPENT"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$Serpent"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.SALSA20"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$Salsa20"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.HC128"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$HC128"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.HC256"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$HC256"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.VMPC"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$VMPC"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.VMPC-KSA3"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$VMPCKSA3"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.CAST6"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$CAST6"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.IDEA"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$IDEA"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.1.3.6.1.4.1.188.7.1.1.2"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$IDEA"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.TEA"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$TEA"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.XTEA"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$XTEA"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyGenerator.GOST28147"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JCEKeyGenerator$GOST28147"
            r11.put(r5, r9)
            java.lang.String r5 = "Alg.Alias.KeyGenerator.GOST"
            r11.put(r5, r3)
            java.lang.String r5 = "Alg.Alias.KeyGenerator.GOST-28147"
            r11.put(r5, r3)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r9 = "Alg.Alias.KeyGenerator."
            r5.append(r9)
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR28147_cbc
            r5.append(r9)
            java.lang.String r5 = r5.toString()
            r11.put(r5, r3)
            java.lang.String r3 = "KeyPairGenerator.RSA"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JDKKeyPairGenerator$RSA"
            r11.put(r3, r5)
            java.lang.String r3 = "KeyPairGenerator.DH"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JDKKeyPairGenerator$DH"
            r11.put(r3, r5)
            java.lang.String r3 = "KeyPairGenerator.DSA"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JDKKeyPairGenerator$DSA"
            r11.put(r3, r5)
            java.lang.String r3 = "KeyPairGenerator.ELGAMAL"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JDKKeyPairGenerator$ElGamal"
            r11.put(r3, r5)
            java.lang.String r3 = "KeyPairGenerator.EC"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JDKKeyPairGenerator$EC"
            r11.put(r3, r5)
            java.lang.String r3 = "KeyPairGenerator.ECDSA"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JDKKeyPairGenerator$ECDSA"
            r11.put(r3, r5)
            java.lang.String r3 = "KeyPairGenerator.ECDH"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JDKKeyPairGenerator$ECDH"
            r11.put(r3, r5)
            java.lang.String r3 = "KeyPairGenerator.ECDHC"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JDKKeyPairGenerator$ECDHC"
            r11.put(r3, r5)
            java.lang.String r3 = "KeyPairGenerator.ECIES"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JDKKeyPairGenerator$ECDH"
            r11.put(r3, r5)
            java.lang.String r3 = "Alg.Alias.KeyPairGenerator.1.2.840.113549.1.1.1"
            r11.put(r3, r4)
            java.lang.String r3 = "KeyPairGenerator.GOST3410"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JDKKeyPairGenerator$GOST3410"
            r11.put(r3, r5)
            java.lang.String r3 = "Alg.Alias.KeyPairGenerator.GOST-3410"
            r11.put(r3, r0)
            java.lang.String r3 = "Alg.Alias.KeyPairGenerator.GOST-3410-94"
            r11.put(r3, r0)
            java.lang.String r3 = "KeyPairGenerator.ECGOST3410"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JDKKeyPairGenerator$ECGOST3410"
            r11.put(r3, r5)
            java.lang.String r3 = "ECGOST3410"
            java.lang.String r5 = "Alg.Alias.KeyPairGenerator.ECGOST-3410"
            r11.put(r5, r3)
            java.lang.String r5 = "Alg.Alias.KeyPairGenerator.GOST-3410-2001"
            r11.put(r5, r3)
            java.lang.String r5 = "KeyFactory.RSA"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JDKKeyFactory$RSA"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyFactory.DH"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JDKKeyFactory$DH"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyFactory.DSA"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JDKKeyFactory$DSA"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyFactory.ELGAMAL"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JDKKeyFactory$ElGamal"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyFactory.ElGamal"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JDKKeyFactory$ElGamal"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyFactory.EC"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JDKKeyFactory$EC"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyFactory.ECDSA"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JDKKeyFactory$ECDSA"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyFactory.ECDH"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JDKKeyFactory$ECDH"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyFactory.ECDHC"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JDKKeyFactory$ECDHC"
            r11.put(r5, r9)
            java.lang.String r5 = "KeyFactory.X.509"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JDKKeyFactory$X509"
            r11.put(r5, r9)
            java.lang.String r5 = "Alg.Alias.KeyFactory.1.2.840.113549.1.1.1"
            r11.put(r5, r4)
            java.lang.String r4 = "Alg.Alias.KeyFactory.1.2.840.10040.4.1"
            java.lang.String r5 = "DSA"
            r11.put(r4, r5)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Alg.Alias.KeyFactory."
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_ecPublicKey
            r4.append(r9)
            java.lang.String r4 = r4.toString()
            java.lang.String r9 = "EC"
            r11.put(r4, r9)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.dhSinglePass_stdDH_sha1kdf_scheme
            r4.append(r9)
            java.lang.String r4 = r4.toString()
            java.lang.String r9 = "EC"
            r11.put(r4, r9)
            java.lang.String r4 = "KeyFactory.GOST3410"
            java.lang.String r9 = "org.bouncycastle.jce.provider.JDKKeyFactory$GOST3410"
            r11.put(r4, r9)
            java.lang.String r4 = "Alg.Alias.KeyFactory.GOST-3410"
            r11.put(r4, r0)
            java.lang.String r4 = "Alg.Alias.KeyFactory.GOST-3410-94"
            r11.put(r4, r0)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_94
            r4.append(r9)
            java.lang.String r4 = r4.toString()
            r11.put(r4, r0)
            java.lang.String r0 = "KeyFactory.ECGOST3410"
            java.lang.String r4 = "org.bouncycastle.jce.provider.JDKKeyFactory$ECGOST3410"
            r11.put(r0, r4)
            java.lang.String r0 = "Alg.Alias.KeyFactory.GOST-3410-2001"
            r11.put(r0, r3)
            java.lang.String r0 = "Alg.Alias.KeyFactory.ECGOST-3410"
            r11.put(r0, r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r11.put(r0, r3)
            java.lang.String r0 = "AlgorithmParameters.DES"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.AlgorithmParameters.1.3.14.3.2.7"
            java.lang.String r3 = "DES"
            r11.put(r0, r3)
            java.lang.String r0 = "AlgorithmParameters.DESEDE"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameters.1.2.840.113549.3.7"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameters.RC2"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$RC2AlgorithmParameters"
            r11.put(r0, r3)
            java.lang.String r0 = "AlgorithmParameters.1.2.840.113549.3.2"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JDKAlgorithmParameters$RC2AlgorithmParameters"
            r11.put(r0, r3)
            java.lang.String r0 = "AlgorithmParameters.RC5"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameters.RC6"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameters.BLOWFISH"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameters.TWOFISH"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameters.SKIPJACK"
            r11.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameters.RIJNDAEL"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.DES"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$DES"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.DESEDE"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$DESede"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHMD2ANDDES"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithMD2AndDES"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHMD2ANDRC2"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithMD2AndRC2"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHMD5ANDDES"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithMD5AndDES"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHMD5ANDRC2"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithMD5AndRC2"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHA1ANDDES"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHA1AndDES"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHA1ANDRC2"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHA1AndRC2"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHAAND3-KEYTRIPLEDES-CBC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHAAndDES3Key"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHAAND2-KEYTRIPLEDES-CBC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHAAndDES2Key"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHAAND128BITRC4"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHAAnd128BitRC4"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHAAND40BITRC4"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHAAnd40BitRC4"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHAAND128BITRC2-CBC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHAAnd128BitRC2"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHAAND40BITRC2-CBC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHAAnd40BitRC2"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHAANDTWOFISH-CBC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHAAndTwofish"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHAANDIDEA-CBC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHAAndIDEA"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHHMACRIPEMD160"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithRIPEMD160"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHHMACSHA1"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHA"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHHMACTIGER"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithTiger"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHMD5AND128BITAES-CBC-OPENSSL"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithMD5And128BitAESCBCOpenSSL"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHMD5AND192BITAES-CBC-OPENSSL"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithMD5And192BitAESCBCOpenSSL"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHMD5AND256BITAES-CBC-OPENSSL"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithMD5And256BitAESCBCOpenSSL"
            r11.put(r0, r1)
            java.lang.String r0 = "PBE/PKCS5"
            java.lang.String r1 = "Alg.Alias.SecretKeyFactory.PBE"
            r11.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.SecretKeyFactory.BROKENPBEWITHMD5ANDDES"
            r11.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.SecretKeyFactory.BROKENPBEWITHSHA1ANDDES"
            r11.put(r1, r0)
            java.lang.String r0 = "PBE/PKCS12"
            java.lang.String r1 = "Alg.Alias.SecretKeyFactory.OLDPBEWITHSHAAND3-KEYTRIPLEDES-CBC"
            r11.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.SecretKeyFactory.BROKENPBEWITHSHAAND3-KEYTRIPLEDES-CBC"
            r11.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.SecretKeyFactory.BROKENPBEWITHSHAAND2-KEYTRIPLEDES-CBC"
            r11.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.SecretKeyFactory.OLDPBEWITHSHAANDTWOFISH-CBC"
            r11.put(r1, r0)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHMD2ANDDES-CBC"
            java.lang.String r1 = "PBEWITHMD2ANDDES"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHMD2ANDRC2-CBC"
            java.lang.String r1 = "PBEWITHMD2ANDRC2"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHMD5ANDDES-CBC"
            java.lang.String r1 = "PBEWITHMD5ANDDES"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHMD5ANDRC2-CBC"
            java.lang.String r1 = "PBEWITHMD5ANDRC2"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHSHA1ANDDES-CBC"
            java.lang.String r1 = "PBEWITHSHA1ANDDES"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHSHA1ANDRC2-CBC"
            java.lang.String r1 = "PBEWITHSHA1ANDRC2"
            r11.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Alg.Alias.SecretKeyFactory."
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithMD2AndDES_CBC
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "PBEWITHMD2ANDDES"
            r11.put(r0, r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithMD2AndRC2_CBC
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "PBEWITHMD2ANDRC2"
            r11.put(r0, r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithMD5AndDES_CBC
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "PBEWITHMD5ANDDES"
            r11.put(r0, r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithMD5AndRC2_CBC
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "PBEWITHMD5ANDRC2"
            r11.put(r0, r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithSHA1AndDES_CBC
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "PBEWITHSHA1ANDDES"
            r11.put(r0, r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pbeWithSHA1AndRC2_CBC
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PBEWITHSHA1ANDRC2"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.1.2.840.113549.1.12.1.1"
            java.lang.String r1 = "PBEWITHSHAAND128BITRC4"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.1.2.840.113549.1.12.1.2"
            java.lang.String r1 = "PBEWITHSHAAND40BITRC4"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.1.2.840.113549.1.12.1.3"
            r11.put(r0, r2)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.1.2.840.113549.1.12.1.4"
            java.lang.String r1 = "PBEWITHSHAAND2-KEYTRIPLEDES-CBC"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.1.2.840.113549.1.12.1.5"
            java.lang.String r1 = "PBEWITHSHAAND128BITRC2-CBC"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.1.2.840.113549.1.12.1.6"
            java.lang.String r1 = "PBEWITHSHAAND40BITRC2-CBC"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHHMACSHA"
            java.lang.String r1 = "PBEWITHHMACSHA1"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.1.3.14.3.2.26"
            java.lang.String r1 = "PBEWITHHMACSHA1"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWithSHAAnd3KeyTripleDES"
            r11.put(r0, r2)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHAAND128BITAES-CBC-BC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHAAnd128BitAESBC"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHAAND192BITAES-CBC-BC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHAAnd192BitAESBC"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHAAND256BITAES-CBC-BC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHAAnd256BitAESBC"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHA256AND128BITAES-CBC-BC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHA256And128BitAESBC"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHA256AND192BITAES-CBC-BC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHA256And192BitAESBC"
            r11.put(r0, r1)
            java.lang.String r0 = "SecretKeyFactory.PBEWITHSHA256AND256BITAES-CBC-BC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCESecretKeyFactory$PBEWithSHA256And256BitAESBC"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHSHA1AND128BITAES-CBC-BC"
            r11.put(r0, r6)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHSHA1AND192BITAES-CBC-BC"
            r11.put(r0, r7)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHSHA1AND256BITAES-CBC-BC"
            r11.put(r0, r8)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHSHA-1AND128BITAES-CBC-BC"
            r11.put(r0, r6)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHSHA-1AND192BITAES-CBC-BC"
            r11.put(r0, r7)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHSHA-1AND256BITAES-CBC-BC"
            r11.put(r0, r8)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHSHA-256AND128BITAES-CBC-BC"
            java.lang.String r1 = "PBEWITHSHA256AND128BITAES-CBC-BC"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHSHA-256AND192BITAES-CBC-BC"
            java.lang.String r1 = "PBEWITHSHA256AND192BITAES-CBC-BC"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.SecretKeyFactory.PBEWITHSHA-256AND256BITAES-CBC-BC"
            java.lang.String r1 = "PBEWITHSHA256AND256BITAES-CBC-BC"
            r11.put(r0, r1)
            r11.addMacAlgorithms()
            r11.addMessageDigestAlgorithms()
            r11.addSignatureAlgorithms()
            java.lang.String r0 = "CertPathValidator.RFC3281"
            java.lang.String r1 = "org.bouncycastle.jce.provider.PKIXAttrCertPathValidatorSpi"
            r11.put(r0, r1)
            java.lang.String r0 = "CertPathBuilder.RFC3281"
            java.lang.String r1 = "org.bouncycastle.jce.provider.PKIXAttrCertPathBuilderSpi"
            r11.put(r0, r1)
            java.lang.String r0 = "CertPathValidator.RFC3280"
            java.lang.String r1 = "org.bouncycastle.jce.provider.PKIXCertPathValidatorSpi"
            r11.put(r0, r1)
            java.lang.String r0 = "CertPathBuilder.RFC3280"
            java.lang.String r1 = "org.bouncycastle.jce.provider.PKIXCertPathBuilderSpi"
            r11.put(r0, r1)
            java.lang.String r0 = "CertPathValidator.PKIX"
            java.lang.String r1 = "org.bouncycastle.jce.provider.PKIXCertPathValidatorSpi"
            r11.put(r0, r1)
            java.lang.String r0 = "CertPathBuilder.PKIX"
            java.lang.String r1 = "org.bouncycastle.jce.provider.PKIXCertPathBuilderSpi"
            r11.put(r0, r1)
            java.lang.String r0 = "CertStore.Collection"
            java.lang.String r1 = "org.bouncycastle.jce.provider.CertStoreCollectionSpi"
            r11.put(r0, r1)
            java.lang.String r0 = "CertStore.LDAP"
            java.lang.String r1 = "org.bouncycastle.jce.provider.X509LDAPCertStoreSpi"
            r11.put(r0, r1)
            java.lang.String r0 = "CertStore.Multi"
            java.lang.String r1 = "org.bouncycastle.jce.provider.MultiCertStoreSpi"
            r11.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.CertStore.X509LDAP"
            java.lang.String r1 = "LDAP"
            r11.put(r0, r1)
            return
    }

    private void addHMACAlgorithm(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "HMAC"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Mac."
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            r3.put(r1, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "Alg.Alias.Mac.HMAC-"
            r5.append(r1)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            r3.put(r5, r0)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "Alg.Alias.Mac.HMAC/"
            r5.append(r1)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            r3.put(r5, r0)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "KeyGenerator."
            r5.append(r1)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            r3.put(r5, r6)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Alg.Alias.KeyGenerator.HMAC-"
            r5.append(r6)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            r3.put(r5, r0)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Alg.Alias.KeyGenerator.HMAC/"
            r5.append(r6)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            r3.put(r4, r0)
            return
    }

    private void addHMACAlias(java.lang.String r3, org.bouncycastle.asn1.DERObjectIdentifier r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "HMAC"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Alg.Alias.Mac."
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r2.put(r0, r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Alg.Alias.KeyGenerator."
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r2.put(r4, r3)
            return
    }

    private void addMacAlgorithms() {
            r3 = this;
            java.lang.String r0 = "Mac.DESMAC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$DES"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.DES"
            java.lang.String r1 = "DESMAC"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.DESMAC/CFB8"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$DESCFB8"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.DES/CFB8"
            java.lang.String r1 = "DESMAC/CFB8"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.DESEDEMAC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$DESede"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.DESEDE"
            java.lang.String r1 = "DESEDEMAC"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.DESEDEMAC/CFB8"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$DESedeCFB8"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.DESEDE/CFB8"
            java.lang.String r1 = "DESEDEMAC/CFB8"
            r3.put(r0, r1)
            java.lang.String r0 = "org.bouncycastle.jce.provider.JCEMac$DES9797Alg3"
            java.lang.String r1 = "Mac.DESWITHISO9797"
            r3.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Mac.DESISO9797MAC"
            java.lang.String r2 = "DESWITHISO9797"
            r3.put(r1, r2)
            java.lang.String r1 = "Mac.DESEDEMAC64"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEMac$DESede64"
            r3.put(r1, r2)
            java.lang.String r1 = "Alg.Alias.Mac.DESEDE64"
            java.lang.String r2 = "DESEDEMAC64"
            r3.put(r1, r2)
            java.lang.String r1 = "Mac.DESEDEMAC64WITHISO7816-4PADDING"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEMac$DESede64with7816d4"
            r3.put(r1, r2)
            java.lang.String r1 = "DESEDEMAC64WITHISO7816-4PADDING"
            java.lang.String r2 = "Alg.Alias.Mac.DESEDE64WITHISO7816-4PADDING"
            r3.put(r2, r1)
            java.lang.String r2 = "Alg.Alias.Mac.DESEDEISO9797ALG1MACWITHISO7816-4PADDING"
            r3.put(r2, r1)
            java.lang.String r2 = "Alg.Alias.Mac.DESEDEISO9797ALG1WITHISO7816-4PADDING"
            r3.put(r2, r1)
            java.lang.String r1 = "Mac.ISO9797ALG3MAC"
            r3.put(r1, r0)
            java.lang.String r0 = "Alg.Alias.Mac.ISO9797ALG3"
            java.lang.String r1 = "ISO9797ALG3MAC"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.ISO9797ALG3WITHISO7816-4PADDING"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$DES9797Alg3with7816d4"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.ISO9797ALG3MACWITHISO7816-4PADDING"
            java.lang.String r1 = "ISO9797ALG3WITHISO7816-4PADDING"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.SKIPJACKMAC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$Skipjack"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.SKIPJACK"
            java.lang.String r1 = "SKIPJACKMAC"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.SKIPJACKMAC/CFB8"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$SkipjackCFB8"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.SKIPJACK/CFB8"
            java.lang.String r1 = "SKIPJACKMAC/CFB8"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.IDEAMAC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$IDEA"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.IDEA"
            java.lang.String r1 = "IDEAMAC"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.IDEAMAC/CFB8"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$IDEACFB8"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.IDEA/CFB8"
            java.lang.String r1 = "IDEAMAC/CFB8"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.RC2MAC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$RC2"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.RC2"
            java.lang.String r1 = "RC2MAC"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.RC2MAC/CFB8"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$RC2CFB8"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.RC2/CFB8"
            java.lang.String r1 = "RC2MAC/CFB8"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.RC5MAC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$RC5"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.RC5"
            java.lang.String r1 = "RC5MAC"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.RC5MAC/CFB8"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$RC5CFB8"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.RC5/CFB8"
            java.lang.String r1 = "RC5MAC/CFB8"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.GOST28147MAC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$GOST28147"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.GOST28147"
            java.lang.String r1 = "GOST28147MAC"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.VMPCMAC"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$VMPC"
            r3.put(r0, r1)
            java.lang.String r0 = "VMPCMAC"
            java.lang.String r1 = "Alg.Alias.Mac.VMPC"
            r3.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Mac.VMPC-MAC"
            r3.put(r1, r0)
            java.lang.String r0 = "Mac.OLDHMACSHA384"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$OldSHA384"
            r3.put(r0, r1)
            java.lang.String r0 = "Mac.OLDHMACSHA512"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$OldSHA512"
            r3.put(r0, r1)
            java.lang.String r0 = "MD2"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$MD2"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEKeyGenerator$MD2HMAC"
            r3.addHMACAlgorithm(r0, r1, r2)
            java.lang.String r0 = "MD4"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$MD4"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEKeyGenerator$MD4HMAC"
            r3.addHMACAlgorithm(r0, r1, r2)
            java.lang.String r0 = "MD5"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$MD5"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEKeyGenerator$MD5HMAC"
            r3.addHMACAlgorithm(r0, r1, r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.iana.IANAObjectIdentifiers.hmacMD5
            r3.addHMACAlias(r0, r1)
            java.lang.String r0 = "SHA1"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$SHA1"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEKeyGenerator$HMACSHA1"
            r3.addHMACAlgorithm(r0, r1, r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_hmacWithSHA1
            r3.addHMACAlias(r0, r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.iana.IANAObjectIdentifiers.hmacSHA1
            r3.addHMACAlias(r0, r1)
            java.lang.String r0 = "SHA224"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$SHA224"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEKeyGenerator$HMACSHA224"
            r3.addHMACAlgorithm(r0, r1, r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_hmacWithSHA224
            r3.addHMACAlias(r0, r1)
            java.lang.String r0 = "SHA256"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$SHA256"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEKeyGenerator$HMACSHA256"
            r3.addHMACAlgorithm(r0, r1, r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_hmacWithSHA256
            r3.addHMACAlias(r0, r1)
            java.lang.String r0 = "SHA384"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$SHA384"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEKeyGenerator$HMACSHA384"
            r3.addHMACAlgorithm(r0, r1, r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_hmacWithSHA384
            r3.addHMACAlias(r0, r1)
            java.lang.String r0 = "SHA512"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$SHA512"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEKeyGenerator$HMACSHA512"
            r3.addHMACAlgorithm(r0, r1, r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_hmacWithSHA512
            r3.addHMACAlias(r0, r1)
            java.lang.String r0 = "RIPEMD128"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$RIPEMD128"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEKeyGenerator$RIPEMD128HMAC"
            r3.addHMACAlgorithm(r0, r1, r2)
            java.lang.String r0 = "RIPEMD160"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$RIPEMD160"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEKeyGenerator$RIPEMD160HMAC"
            r3.addHMACAlgorithm(r0, r1, r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.iana.IANAObjectIdentifiers.hmacRIPEMD160
            r3.addHMACAlias(r0, r1)
            java.lang.String r0 = "TIGER"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$Tiger"
            java.lang.String r2 = "org.bouncycastle.jce.provider.JCEKeyGenerator$HMACTIGER"
            r3.addHMACAlgorithm(r0, r1, r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.iana.IANAObjectIdentifiers.hmacTIGER
            r3.addHMACAlias(r0, r1)
            java.lang.String r0 = "org.bouncycastle.jce.provider.JCEMac$PBEWithSHA"
            java.lang.String r1 = "Mac.PBEWITHHMACSHA"
            r3.put(r1, r0)
            java.lang.String r1 = "Mac.PBEWITHHMACSHA1"
            r3.put(r1, r0)
            java.lang.String r0 = "Mac.PBEWITHHMACRIPEMD160"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JCEMac$PBEWithRIPEMD160"
            r3.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Mac.1.3.14.3.2.26"
            java.lang.String r1 = "PBEWITHHMACSHA"
            r3.put(r0, r1)
            return
    }

    private void addMappings(java.util.Map r5) {
            r4 = this;
            java.util.Set r0 = r5.keySet()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L47
            java.lang.Object r1 = r0.next()
            boolean r2 = r4.containsKey(r1)
            if (r2 != 0) goto L20
            java.lang.Object r2 = r5.get(r1)
            r4.put(r1, r2)
            goto L8
        L20:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "duplicate provider key ("
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = ") found in "
            r2.append(r1)
            java.lang.Class r5 = r5.getClass()
            java.lang.String r5 = r5.getName()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            throw r0
        L47:
            return
    }

    private void addMessageDigestAlgorithms() {
            r4 = this;
            java.lang.String r0 = "MessageDigest.SHA-1"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$SHA1"
            r4.put(r0, r1)
            java.lang.String r0 = "SHA-1"
            java.lang.String r1 = "Alg.Alias.MessageDigest.SHA1"
            r4.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.MessageDigest.SHA"
            r4.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Alg.Alias.MessageDigest."
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.idSHA1
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r4.put(r1, r0)
            java.lang.String r0 = "MessageDigest.SHA-224"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$SHA224"
            r4.put(r0, r1)
            java.lang.String r0 = "SHA-224"
            java.lang.String r1 = "Alg.Alias.MessageDigest.SHA224"
            r4.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha224
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r4.put(r1, r0)
            java.lang.String r0 = "MessageDigest.SHA-256"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$SHA256"
            r4.put(r0, r1)
            java.lang.String r0 = "SHA-256"
            java.lang.String r1 = "Alg.Alias.MessageDigest.SHA256"
            r4.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha256
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r4.put(r1, r0)
            java.lang.String r0 = "MessageDigest.SHA-384"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$SHA384"
            r4.put(r0, r1)
            java.lang.String r0 = "SHA-384"
            java.lang.String r1 = "Alg.Alias.MessageDigest.SHA384"
            r4.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha384
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r4.put(r1, r0)
            java.lang.String r0 = "MessageDigest.SHA-512"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$SHA512"
            r4.put(r0, r1)
            java.lang.String r0 = "SHA-512"
            java.lang.String r1 = "Alg.Alias.MessageDigest.SHA512"
            r4.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha512
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r4.put(r1, r0)
            java.lang.String r0 = "MessageDigest.MD2"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$MD2"
            r4.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md2
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MD2"
            r4.put(r0, r1)
            java.lang.String r0 = "MessageDigest.MD4"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$MD4"
            r4.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md4
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MD4"
            r4.put(r0, r1)
            java.lang.String r0 = "MessageDigest.MD5"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$MD5"
            r4.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MD5"
            r4.put(r0, r1)
            java.lang.String r0 = "MessageDigest.RIPEMD128"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$RIPEMD128"
            r4.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd128
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RIPEMD128"
            r4.put(r0, r1)
            java.lang.String r0 = "MessageDigest.RIPEMD160"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$RIPEMD160"
            r4.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd160
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RIPEMD160"
            r4.put(r0, r1)
            java.lang.String r0 = "MessageDigest.RIPEMD256"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$RIPEMD256"
            r4.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd256
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RIPEMD256"
            r4.put(r0, r1)
            java.lang.String r0 = "MessageDigest.RIPEMD320"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$RIPEMD320"
            r4.put(r0, r1)
            java.lang.String r0 = "MessageDigest.Tiger"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$Tiger"
            r4.put(r0, r1)
            java.lang.String r0 = "MessageDigest.WHIRLPOOL"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$Whirlpool"
            r4.put(r0, r1)
            java.lang.String r0 = "MessageDigest.GOST3411"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKMessageDigest$GOST3411"
            r4.put(r0, r1)
            java.lang.String r0 = "GOST3411"
            java.lang.String r1 = "Alg.Alias.MessageDigest.GOST"
            r4.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.MessageDigest.GOST-3411"
            r4.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r4.put(r1, r0)
            return
    }

    private void addSignatureAlgorithm(java.lang.String r5, java.lang.String r6, java.lang.String r7, org.bouncycastle.asn1.DERObjectIdentifier r8) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r1 = "WITH"
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r2 = "with"
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r3 = "With"
            r2.append(r3)
            r2.append(r6)
            java.lang.String r2 = r2.toString()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r5)
            java.lang.String r5 = "/"
            r3.append(r5)
            r3.append(r6)
            java.lang.String r5 = r3.toString()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r3 = "Signature."
            r6.append(r3)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            r4.put(r6, r7)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Alg.Alias.Signature."
            r6.append(r7)
            r6.append(r1)
            java.lang.String r6 = r6.toString()
            r4.put(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r7)
            r6.append(r2)
            java.lang.String r6 = r6.toString()
            r4.put(r6, r0)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r7)
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            r4.put(r5, r0)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r7)
            r5.append(r8)
            java.lang.String r5 = r5.toString()
            r4.put(r5, r0)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Alg.Alias.Signature.OID."
            r5.append(r6)
            r5.append(r8)
            java.lang.String r5 = r5.toString()
            r4.put(r5, r0)
            return
    }

    private void addSignatureAlgorithms() {
            r12 = this;
            java.lang.String r0 = "Signature.MD2WithRSAEncryption"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDigestSignature$MD2WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.MD4WithRSAEncryption"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDigestSignature$MD4WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.MD5WithRSAEncryption"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDigestSignature$MD5WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA1WithRSAEncryption"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDigestSignature$SHA1WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA224WithRSAEncryption"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDigestSignature$SHA224WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA256WithRSAEncryption"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDigestSignature$SHA256WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA384WithRSAEncryption"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDigestSignature$SHA384WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA512WithRSAEncryption"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDigestSignature$SHA512WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.RIPEMD160WithRSAEncryption"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDigestSignature$RIPEMD160WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.RIPEMD128WithRSAEncryption"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDigestSignature$RIPEMD128WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.RIPEMD256WithRSAEncryption"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDigestSignature$RIPEMD256WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.DSA"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDSASigner$stdDSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.NONEWITHDSA"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDSASigner$noneDSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.ECDSA"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDSASigner$ecDSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA1WITHECNR"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDSASigner$ecNR"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA224WITHECNR"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDSASigner$ecNR224"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA256WITHECNR"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDSASigner$ecNR256"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA384WITHECNR"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDSASigner$ecNR384"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA512WITHECNR"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKDSASigner$ecNR512"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA1withRSA/ISO9796-2"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKISOSignature$SHA1WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.MD5withRSA/ISO9796-2"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKISOSignature$MD5WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.RIPEMD160withRSA/ISO9796-2"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKISOSignature$RIPEMD160WithRSAEncryption"
            r12.put(r0, r1)
            java.lang.String r0 = "org.bouncycastle.jce.provider.JDKPSSSigner$PSSwithRSA"
            java.lang.String r1 = "Signature.RSASSA-PSS"
            r12.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Signature."
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r12.put(r1, r0)
            java.lang.String r0 = "Signature.SHA1withRSA/PSS"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKPSSSigner$SHA1withRSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA224withRSA/PSS"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKPSSSigner$SHA224withRSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA256withRSA/PSS"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKPSSSigner$SHA256withRSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA384withRSA/PSS"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKPSSSigner$SHA384withRSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.SHA512withRSA/PSS"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKPSSSigner$SHA512withRSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.RAWDSA"
            java.lang.String r1 = "NONEWITHDSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.SHA1withRSAandMGF1"
            java.lang.String r1 = "SHA1withRSA/PSS"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.SHA224withRSAandMGF1"
            java.lang.String r1 = "SHA224withRSA/PSS"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.SHA256withRSAandMGF1"
            java.lang.String r1 = "SHA256withRSA/PSS"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.SHA384withRSAandMGF1"
            java.lang.String r1 = "SHA384withRSA/PSS"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.SHA512withRSAandMGF1"
            java.lang.String r1 = "SHA512withRSA/PSS"
            r12.put(r0, r1)
            java.lang.String r0 = "MD2WithRSAEncryption"
            java.lang.String r1 = "Alg.Alias.Signature.MD2withRSAEncryption"
            r12.put(r1, r0)
            java.lang.String r1 = "MD4WithRSAEncryption"
            java.lang.String r2 = "Alg.Alias.Signature.MD4withRSAEncryption"
            r12.put(r2, r1)
            java.lang.String r2 = "MD5WithRSAEncryption"
            java.lang.String r3 = "Alg.Alias.Signature.MD5withRSAEncryption"
            r12.put(r3, r2)
            java.lang.String r3 = "SHA1WithRSAEncryption"
            java.lang.String r4 = "Alg.Alias.Signature.SHA1withRSAEncryption"
            r12.put(r4, r3)
            java.lang.String r4 = "SHA224WithRSAEncryption"
            java.lang.String r5 = "Alg.Alias.Signature.SHA224withRSAEncryption"
            r12.put(r5, r4)
            java.lang.String r5 = "SHA256WithRSAEncryption"
            java.lang.String r6 = "Alg.Alias.Signature.SHA256withRSAEncryption"
            r12.put(r6, r5)
            java.lang.String r6 = "SHA384WithRSAEncryption"
            java.lang.String r7 = "Alg.Alias.Signature.SHA384withRSAEncryption"
            r12.put(r7, r6)
            java.lang.String r7 = "SHA512WithRSAEncryption"
            java.lang.String r8 = "Alg.Alias.Signature.SHA512withRSAEncryption"
            r12.put(r8, r7)
            java.lang.String r8 = "Alg.Alias.Signature.SHA256WithRSAEncryption"
            r12.put(r8, r5)
            java.lang.String r8 = "Alg.Alias.Signature.SHA384WithRSAEncryption"
            r12.put(r8, r6)
            java.lang.String r8 = "Alg.Alias.Signature.SHA512WithRSAEncryption"
            r12.put(r8, r7)
            java.lang.String r8 = "Alg.Alias.Signature.SHA256WITHRSAENCRYPTION"
            r12.put(r8, r5)
            java.lang.String r8 = "Alg.Alias.Signature.SHA384WITHRSAENCRYPTION"
            r12.put(r8, r6)
            java.lang.String r8 = "Alg.Alias.Signature.SHA512WITHRSAENCRYPTION"
            r12.put(r8, r7)
            java.lang.String r8 = "RIPEMD160WithRSAEncryption"
            java.lang.String r9 = "Alg.Alias.Signature.RIPEMD160withRSAEncryption"
            r12.put(r9, r8)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "Alg.Alias.Signature."
            r9.append(r10)
            org.bouncycastle.asn1.DERObjectIdentifier r11 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md2WithRSAEncryption
            r9.append(r11)
            java.lang.String r9 = r9.toString()
            r12.put(r9, r0)
            java.lang.String r9 = "Alg.Alias.Signature.MD2WithRSA"
            r12.put(r9, r0)
            java.lang.String r9 = "Alg.Alias.Signature.MD2withRSA"
            r12.put(r9, r0)
            java.lang.String r9 = "Alg.Alias.Signature.MD2/RSA"
            r12.put(r9, r0)
            java.lang.String r9 = "Alg.Alias.Signature.MD5WithRSA"
            r12.put(r9, r2)
            java.lang.String r9 = "Alg.Alias.Signature.MD5withRSA"
            r12.put(r9, r2)
            java.lang.String r9 = "Alg.Alias.Signature.MD5/RSA"
            r12.put(r9, r2)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r10)
            org.bouncycastle.asn1.DERObjectIdentifier r11 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5WithRSAEncryption
            r9.append(r11)
            java.lang.String r9 = r9.toString()
            r12.put(r9, r2)
            java.lang.String r9 = "Alg.Alias.Signature.MD4WithRSA"
            r12.put(r9, r1)
            java.lang.String r9 = "Alg.Alias.Signature.MD4withRSA"
            r12.put(r9, r1)
            java.lang.String r9 = "Alg.Alias.Signature.MD4/RSA"
            r12.put(r9, r1)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            r9.append(r10)
            org.bouncycastle.asn1.DERObjectIdentifier r11 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md4WithRSAEncryption
            r9.append(r11)
            java.lang.String r9 = r9.toString()
            r12.put(r9, r1)
            java.lang.String r1 = "Alg.Alias.Signature.SHA1WithRSA"
            r12.put(r1, r3)
            java.lang.String r1 = "Alg.Alias.Signature.SHA1withRSA"
            r12.put(r1, r3)
            java.lang.String r1 = "Alg.Alias.Signature.SHA224WithRSA"
            r12.put(r1, r4)
            java.lang.String r1 = "Alg.Alias.Signature.SHA224withRSA"
            r12.put(r1, r4)
            java.lang.String r1 = "Alg.Alias.Signature.SHA256WithRSA"
            r12.put(r1, r5)
            java.lang.String r1 = "Alg.Alias.Signature.SHA256withRSA"
            r12.put(r1, r5)
            java.lang.String r1 = "Alg.Alias.Signature.SHA384WithRSA"
            r12.put(r1, r6)
            java.lang.String r1 = "Alg.Alias.Signature.SHA384withRSA"
            r12.put(r1, r6)
            java.lang.String r1 = "Alg.Alias.Signature.SHA512WithRSA"
            r12.put(r1, r7)
            java.lang.String r1 = "Alg.Alias.Signature.SHA512withRSA"
            r12.put(r1, r7)
            java.lang.String r1 = "Alg.Alias.Signature.SHA1/RSA"
            r12.put(r1, r3)
            java.lang.String r1 = "Alg.Alias.Signature.SHA-1/RSA"
            r12.put(r1, r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha1WithRSAEncryption
            r1.append(r9)
            java.lang.String r1 = r1.toString()
            r12.put(r1, r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha224WithRSAEncryption
            r1.append(r9)
            java.lang.String r1 = r1.toString()
            r12.put(r1, r4)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha256WithRSAEncryption
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r12.put(r1, r5)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha384WithRSAEncryption
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r12.put(r1, r6)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha512WithRSAEncryption
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r12.put(r1, r7)
            java.lang.String r1 = "Alg.Alias.Signature.1.3.14.3.2.26with1.2.840.113549.1.1.1"
            r12.put(r1, r3)
            java.lang.String r1 = "Alg.Alias.Signature.1.3.14.3.2.26with1.2.840.113549.1.1.5"
            r12.put(r1, r3)
            java.lang.String r1 = "Alg.Alias.Signature.1.2.840.113549.2.5with1.2.840.113549.1.1.1"
            r12.put(r1, r2)
            java.lang.String r1 = "Alg.Alias.Signature.RIPEMD160WithRSA"
            r12.put(r1, r8)
            java.lang.String r1 = "Alg.Alias.Signature.RIPEMD160withRSA"
            r12.put(r1, r8)
            java.lang.String r1 = "RIPEMD128WithRSAEncryption"
            java.lang.String r4 = "Alg.Alias.Signature.RIPEMD128WithRSA"
            r12.put(r4, r1)
            java.lang.String r4 = "Alg.Alias.Signature.RIPEMD128withRSA"
            r12.put(r4, r1)
            java.lang.String r4 = "RIPEMD256WithRSAEncryption"
            java.lang.String r5 = "Alg.Alias.Signature.RIPEMD256WithRSA"
            r12.put(r5, r4)
            java.lang.String r5 = "Alg.Alias.Signature.RIPEMD256withRSA"
            r12.put(r5, r4)
            java.lang.String r5 = "Alg.Alias.Signature.RIPEMD-160/RSA"
            r12.put(r5, r8)
            java.lang.String r5 = "Alg.Alias.Signature.RMD160withRSA"
            r12.put(r5, r8)
            java.lang.String r5 = "Alg.Alias.Signature.RMD160/RSA"
            r12.put(r5, r8)
            java.lang.String r5 = "Alg.Alias.Signature.1.3.36.3.3.1.2"
            r12.put(r5, r8)
            java.lang.String r5 = "Alg.Alias.Signature.1.3.36.3.3.1.3"
            r12.put(r5, r1)
            java.lang.String r1 = "Alg.Alias.Signature.1.3.36.3.3.1.4"
            r12.put(r1, r4)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.sha1WithRSA
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r12.put(r1, r3)
            java.lang.String r1 = "Alg.Alias.Signature.MD2WITHRSAENCRYPTION"
            r12.put(r1, r0)
            java.lang.String r0 = "Alg.Alias.Signature.MD5WITHRSAENCRYPTION"
            r12.put(r0, r2)
            java.lang.String r0 = "Alg.Alias.Signature.SHA1WITHRSAENCRYPTION"
            r12.put(r0, r3)
            java.lang.String r0 = "Alg.Alias.Signature.RIPEMD160WITHRSAENCRYPTION"
            r12.put(r0, r8)
            java.lang.String r0 = "Alg.Alias.Signature.MD5WITHRSA"
            r12.put(r0, r2)
            java.lang.String r0 = "Alg.Alias.Signature.SHA1WITHRSA"
            r12.put(r0, r3)
            java.lang.String r0 = "Alg.Alias.Signature.RIPEMD160WITHRSA"
            r12.put(r0, r8)
            java.lang.String r1 = "Alg.Alias.Signature.RMD160WITHRSA"
            r12.put(r1, r8)
            r12.put(r0, r8)
            java.lang.String r0 = "ECDSA"
            java.lang.String r1 = "Alg.Alias.Signature.SHA1withECDSA"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.ECDSAwithSHA1"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.SHA1WITHECDSA"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.ECDSAWITHSHA1"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.SHA1WithECDSA"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.ECDSAWithSHA1"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.1.2.840.10045.4.1"
            r12.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ecSignWithSha1
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r12.put(r1, r0)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA224
            java.lang.String r2 = "SHA224"
            java.lang.String r3 = "org.bouncycastle.jce.provider.JDKDSASigner$ecDSA224"
            r12.addSignatureAlgorithm(r2, r0, r3, r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA256
            java.lang.String r3 = "SHA256"
            java.lang.String r4 = "org.bouncycastle.jce.provider.JDKDSASigner$ecDSA256"
            r12.addSignatureAlgorithm(r3, r0, r4, r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA384
            java.lang.String r4 = "SHA384"
            java.lang.String r5 = "org.bouncycastle.jce.provider.JDKDSASigner$ecDSA384"
            r12.addSignatureAlgorithm(r4, r0, r5, r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA512
            java.lang.String r5 = "SHA512"
            java.lang.String r6 = "org.bouncycastle.jce.provider.JDKDSASigner$ecDSA512"
            r12.addSignatureAlgorithm(r5, r0, r6, r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ecSignWithRipemd160
            java.lang.String r6 = "RIPEMD160"
            java.lang.String r7 = "org.bouncycastle.jce.provider.JDKDSASigner$ecDSARipeMD160"
            r12.addSignatureAlgorithm(r6, r0, r7, r1)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha224
            java.lang.String r1 = "DSA"
            java.lang.String r6 = "org.bouncycastle.jce.provider.JDKDSASigner$dsa224"
            r12.addSignatureAlgorithm(r2, r1, r6, r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha256
            java.lang.String r2 = "org.bouncycastle.jce.provider.JDKDSASigner$dsa256"
            r12.addSignatureAlgorithm(r3, r1, r2, r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha384
            java.lang.String r2 = "org.bouncycastle.jce.provider.JDKDSASigner$dsa384"
            r12.addSignatureAlgorithm(r4, r1, r2, r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha512
            java.lang.String r2 = "org.bouncycastle.jce.provider.JDKDSASigner$dsa512"
            r12.addSignatureAlgorithm(r5, r1, r2, r0)
            java.lang.String r0 = "Alg.Alias.Signature.SHA/DSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.SHA1withDSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.SHA1WITHDSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.1.3.14.3.2.26with1.2.840.10040.4.1"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.1.3.14.3.2.26with1.2.840.10040.4.3"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.DSAwithSHA1"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.DSAWITHSHA1"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.SHA1WithDSA"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.DSAWithSHA1"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.1.2.840.10040.4.3"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.MD5WithRSA/ISO9796-2"
            java.lang.String r1 = "MD5withRSA/ISO9796-2"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.SHA1WithRSA/ISO9796-2"
            java.lang.String r1 = "SHA1withRSA/ISO9796-2"
            r12.put(r0, r1)
            java.lang.String r0 = "Alg.Alias.Signature.RIPEMD160WithRSA/ISO9796-2"
            java.lang.String r1 = "RIPEMD160withRSA/ISO9796-2"
            r12.put(r0, r1)
            java.lang.String r0 = "Signature.ECGOST3410"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKGOST3410Signer$ecgost3410"
            r12.put(r0, r1)
            java.lang.String r0 = "ECGOST3410"
            java.lang.String r1 = "Alg.Alias.Signature.ECGOST-3410"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.GOST-3410-2001"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.GOST3411withECGOST3410"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.GOST3411WITHECGOST3410"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.GOST3411WithECGOST3410"
            r12.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_2001
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r12.put(r1, r0)
            java.lang.String r0 = "Signature.GOST3410"
            java.lang.String r1 = "org.bouncycastle.jce.provider.JDKGOST3410Signer$gost3410"
            r12.put(r0, r1)
            java.lang.String r0 = "GOST3410"
            java.lang.String r1 = "Alg.Alias.Signature.GOST-3410"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.GOST-3410-94"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.GOST3411withGOST3410"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.GOST3411WITHGOST3410"
            r12.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.Signature.GOST3411WithGOST3410"
            r12.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r10)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_94
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r12.put(r1, r0)
            return
    }

    @Override
    public void setParameter(java.lang.String r1, java.lang.Object r2) {
            r0 = this;
            org.bouncycastle.jce.provider.ProviderUtil.setParameter(r1, r2)
            return
    }
}
