package org.bouncycastle.asn1.smime;

public class SMIMECapability extends org.bouncycastle.asn1.ASN1Encodable {
    public static final org.bouncycastle.asn1.DERObjectIdentifier aES128_CBC = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier aES192_CBC = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier aES256_CBC = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier canNotDecryptAny = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier dES_CBC = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier dES_EDE3_CBC = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier preferSignedData = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier rC2_CBC = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier sMIMECapabilitiesVersions = null;
    private org.bouncycastle.asn1.DERObjectIdentifier capabilityID;
    private org.bouncycastle.asn1.DEREncodable parameters;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.preferSignedData
            org.bouncycastle.asn1.smime.SMIMECapability.preferSignedData = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.canNotDecryptAny
            org.bouncycastle.asn1.smime.SMIMECapability.canNotDecryptAny = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sMIMECapabilitiesVersions
            org.bouncycastle.asn1.smime.SMIMECapability.sMIMECapabilitiesVersions = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.14.3.2.7"
            r0.<init>(r1)
            org.bouncycastle.asn1.smime.SMIMECapability.dES_CBC = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.des_EDE3_CBC
            org.bouncycastle.asn1.smime.SMIMECapability.dES_EDE3_CBC = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.RC2_CBC
            org.bouncycastle.asn1.smime.SMIMECapability.rC2_CBC = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_CBC
            org.bouncycastle.asn1.smime.SMIMECapability.aES128_CBC = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_CBC
            org.bouncycastle.asn1.smime.SMIMECapability.aES192_CBC = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_CBC
            org.bouncycastle.asn1.smime.SMIMECapability.aES256_CBC = r0
            return
    }

    public SMIMECapability(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r2.capabilityID = r0
            int r0 = r3.size()
            r1 = 1
            if (r0 <= r1) goto L1b
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.DERObject r3 = (org.bouncycastle.asn1.DERObject) r3
            r2.parameters = r3
        L1b:
            return
    }

    public SMIMECapability(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DEREncodable r2) {
            r0 = this;
            r0.<init>()
            r0.capabilityID = r1
            r0.parameters = r2
            return
    }

    public static org.bouncycastle.asn1.smime.SMIMECapability getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L1b
            boolean r0 = r1 instanceof org.bouncycastle.asn1.smime.SMIMECapability
            if (r0 == 0) goto L7
            goto L1b
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.smime.SMIMECapability r0 = new org.bouncycastle.asn1.smime.SMIMECapability
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return r0
        L13:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid SMIMECapability"
            r1.<init>(r0)
            throw r1
        L1b:
            org.bouncycastle.asn1.smime.SMIMECapability r1 = (org.bouncycastle.asn1.smime.SMIMECapability) r1
            return r1
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getCapabilityID() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.capabilityID
            return r0
    }

    public org.bouncycastle.asn1.DEREncodable getParameters() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.parameters
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.capabilityID
            r0.add(r1)
            org.bouncycastle.asn1.DEREncodable r1 = r2.parameters
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
