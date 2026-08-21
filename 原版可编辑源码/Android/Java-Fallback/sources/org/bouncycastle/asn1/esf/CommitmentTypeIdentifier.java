package org.bouncycastle.asn1.esf;

public interface CommitmentTypeIdentifier {
    public static final org.bouncycastle.asn1.DERObjectIdentifier proofOfApproval = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier proofOfCreation = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier proofOfDelivery = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier proofOfOrigin = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier proofOfReceipt = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier proofOfSender = null;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_cti_ets_proofOfOrigin
            org.bouncycastle.asn1.esf.CommitmentTypeIdentifier.proofOfOrigin = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_cti_ets_proofOfReceipt
            org.bouncycastle.asn1.esf.CommitmentTypeIdentifier.proofOfReceipt = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_cti_ets_proofOfDelivery
            org.bouncycastle.asn1.esf.CommitmentTypeIdentifier.proofOfDelivery = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_cti_ets_proofOfSender
            org.bouncycastle.asn1.esf.CommitmentTypeIdentifier.proofOfSender = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_cti_ets_proofOfApproval
            org.bouncycastle.asn1.esf.CommitmentTypeIdentifier.proofOfApproval = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_cti_ets_proofOfCreation
            org.bouncycastle.asn1.esf.CommitmentTypeIdentifier.proofOfCreation = r0
            return
    }
}
