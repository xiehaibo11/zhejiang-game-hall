package org.bouncycastle.asn1.cms;

public interface CMSAttributes {
    public static final org.bouncycastle.asn1.DERObjectIdentifier contentType = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier counterSignature = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier messageDigest = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier signingTime = null;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_contentType
            org.bouncycastle.asn1.cms.CMSAttributes.contentType = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_messageDigest
            org.bouncycastle.asn1.cms.CMSAttributes.messageDigest = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_signingTime
            org.bouncycastle.asn1.cms.CMSAttributes.signingTime = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_counterSignature
            org.bouncycastle.asn1.cms.CMSAttributes.counterSignature = r0
            return
    }
}
