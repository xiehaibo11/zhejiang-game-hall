package org.bouncycastle.asn1.x509;

public class KeyPurposeId extends org.bouncycastle.asn1.DERObjectIdentifier {
    public static final org.bouncycastle.asn1.x509.KeyPurposeId anyExtendedKeyUsage = null;
    private static final java.lang.String id_kp = "1.3.6.1.5.5.7.3";
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_OCSPSigning = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_capwapAC = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_capwapWTP = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_clientAuth = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_codeSigning = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_dvcs = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_eapOverLAN = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_eapOverPPP = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_emailProtection = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_ipsecEndSystem = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_ipsecIKE = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_ipsecTunnel = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_ipsecUser = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_sbgpCertAAServerAuth = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_scvpClient = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_scvpServer = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_scvp_responder = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_serverAuth = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_smartcardlogon = null;
    public static final org.bouncycastle.asn1.x509.KeyPurposeId id_kp_timeStamping = null;

    static {
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x509.X509Extensions.ExtendedKeyUsage
            java.lang.String r2 = r2.getId()
            r1.append(r2)
            java.lang.String r2 = ".0"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.anyExtendedKeyUsage = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.1"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_serverAuth = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.2"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_clientAuth = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.3"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_codeSigning = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.4"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_emailProtection = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.5"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_ipsecEndSystem = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.6"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_ipsecTunnel = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.7"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_ipsecUser = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.8"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_timeStamping = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.9"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_OCSPSigning = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.10"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_dvcs = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.11"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_sbgpCertAAServerAuth = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.12"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_scvp_responder = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.13"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_eapOverPPP = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.14"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_eapOverLAN = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.15"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_scvpServer = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.16"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_scvpClient = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.17"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_ipsecIKE = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.18"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_capwapAC = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.5.5.7.3.19"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_capwapWTP = r0
            org.bouncycastle.asn1.x509.KeyPurposeId r0 = new org.bouncycastle.asn1.x509.KeyPurposeId
            java.lang.String r1 = "1.3.6.1.4.1.311.20.2.2"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.KeyPurposeId.id_kp_smartcardlogon = r0
            return
    }

    public KeyPurposeId(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }
}
