package org.bouncycastle.asn1.smime;

public class SMIMECapabilities extends org.bouncycastle.asn1.ASN1Encodable {
    public static final org.bouncycastle.asn1.DERObjectIdentifier canNotDecryptAny = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier dES_CBC = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier dES_EDE3_CBC = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier preferSignedData = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier rC2_CBC = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier sMIMECapabilitesVersions = null;
    private org.bouncycastle.asn1.ASN1Sequence capabilities;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.preferSignedData
            org.bouncycastle.asn1.smime.SMIMECapabilities.preferSignedData = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.canNotDecryptAny
            org.bouncycastle.asn1.smime.SMIMECapabilities.canNotDecryptAny = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sMIMECapabilitiesVersions
            org.bouncycastle.asn1.smime.SMIMECapabilities.sMIMECapabilitesVersions = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.14.3.2.7"
            r0.<init>(r1)
            org.bouncycastle.asn1.smime.SMIMECapabilities.dES_CBC = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.des_EDE3_CBC
            org.bouncycastle.asn1.smime.SMIMECapabilities.dES_EDE3_CBC = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.RC2_CBC
            org.bouncycastle.asn1.smime.SMIMECapabilities.rC2_CBC = r0
            return
    }

    public SMIMECapabilities(org.bouncycastle.asn1.ASN1Sequence r1) {
            r0 = this;
            r0.<init>()
            r0.capabilities = r1
            return
    }

    public static org.bouncycastle.asn1.smime.SMIMECapabilities getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L4b
            boolean r0 = r3 instanceof org.bouncycastle.asn1.smime.SMIMECapabilities
            if (r0 == 0) goto L7
            goto L4b
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.smime.SMIMECapabilities r0 = new org.bouncycastle.asn1.smime.SMIMECapabilities
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.Attribute
            if (r0 == 0) goto L2c
            org.bouncycastle.asn1.smime.SMIMECapabilities r0 = new org.bouncycastle.asn1.smime.SMIMECapabilities
            org.bouncycastle.asn1.cms.Attribute r3 = (org.bouncycastle.asn1.cms.Attribute) r3
            org.bouncycastle.asn1.ASN1Set r3 = r3.getAttrValues()
            r1 = 0
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L2c:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L4b:
            org.bouncycastle.asn1.smime.SMIMECapabilities r3 = (org.bouncycastle.asn1.smime.SMIMECapabilities) r3
            return r3
    }

    public java.util.Vector getCapabilities(org.bouncycastle.asn1.DERObjectIdentifier r5) {
            r4 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.capabilities
            java.util.Enumeration r0 = r0.getObjects()
            java.util.Vector r1 = new java.util.Vector
            r1.<init>()
            if (r5 != 0) goto L1f
        Ld:
            boolean r5 = r0.hasMoreElements()
            if (r5 == 0) goto L3b
            java.lang.Object r5 = r0.nextElement()
            org.bouncycastle.asn1.smime.SMIMECapability r5 = org.bouncycastle.asn1.smime.SMIMECapability.getInstance(r5)
            r1.addElement(r5)
            goto Ld
        L1f:
            boolean r2 = r0.hasMoreElements()
            if (r2 == 0) goto L3b
            java.lang.Object r2 = r0.nextElement()
            org.bouncycastle.asn1.smime.SMIMECapability r2 = org.bouncycastle.asn1.smime.SMIMECapability.getInstance(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = r2.getCapabilityID()
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L1f
            r1.addElement(r2)
            goto L1f
        L3b:
            return r1
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.capabilities
            return r0
    }
}
