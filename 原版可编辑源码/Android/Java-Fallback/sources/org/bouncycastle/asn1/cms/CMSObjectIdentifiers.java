package org.bouncycastle.asn1.cms;

public interface CMSObjectIdentifiers {
    public static final org.bouncycastle.asn1.DERObjectIdentifier compressedData = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier data = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier digestedData = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier encryptedData = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier envelopedData = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier signedAndEnvelopedData = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier signedData = null;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.data
            org.bouncycastle.asn1.cms.CMSObjectIdentifiers.data = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.signedData
            org.bouncycastle.asn1.cms.CMSObjectIdentifiers.signedData = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.envelopedData
            org.bouncycastle.asn1.cms.CMSObjectIdentifiers.envelopedData = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.signedAndEnvelopedData
            org.bouncycastle.asn1.cms.CMSObjectIdentifiers.signedAndEnvelopedData = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.digestedData
            org.bouncycastle.asn1.cms.CMSObjectIdentifiers.digestedData = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.encryptedData
            org.bouncycastle.asn1.cms.CMSObjectIdentifiers.encryptedData = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_ct_compressedData
            org.bouncycastle.asn1.cms.CMSObjectIdentifiers.compressedData = r0
            return
    }
}
