package org.bouncycastle.asn1.cms;

import org.bouncycastle.asn1.ASN1Encodable;
import org.bouncycastle.asn1.ASN1Sequence;
import org.bouncycastle.asn1.ASN1TaggedObject;
import org.bouncycastle.asn1.DERObject;
import org.bouncycastle.asn1.DERTaggedObject;

public class KeyAgreeRecipientIdentifier extends ASN1Encodable {
    private IssuerAndSerialNumber issuerSerial;
    private RecipientKeyIdentifier rKeyID = null;

    private KeyAgreeRecipientIdentifier(ASN1Sequence aSN1Sequence) {
        this.issuerSerial = IssuerAndSerialNumber.getInstance(aSN1Sequence);
    }

    public KeyAgreeRecipientIdentifier(IssuerAndSerialNumber issuerAndSerialNumber) {
        this.issuerSerial = issuerAndSerialNumber;
    }

    public static KeyAgreeRecipientIdentifier getInstance(Object obj) {
        if (obj == null || (obj instanceof KeyAgreeRecipientIdentifier)) {
            return (KeyAgreeRecipientIdentifier) obj;
        }
        if (obj instanceof ASN1Sequence) {
            return new KeyAgreeRecipientIdentifier((ASN1Sequence) obj);
        }
        throw new IllegalArgumentException("Invalid KeyAgreeRecipientIdentifier: " + obj.getClass().getName());
    }

    public static KeyAgreeRecipientIdentifier getInstance(ASN1TaggedObject aSN1TaggedObject, boolean z) {
        return getInstance(ASN1Sequence.getInstance(aSN1TaggedObject, z));
    }

    public IssuerAndSerialNumber getIssuerAndSerialNumber() {
        return this.issuerSerial;
    }

    public RecipientKeyIdentifier getRKeyID() {
        return this.rKeyID;
    }

    @Override
    public DERObject toASN1Object() {
        IssuerAndSerialNumber issuerAndSerialNumber = this.issuerSerial;
        return issuerAndSerialNumber != null ? issuerAndSerialNumber.toASN1Object() : new DERTaggedObject(false, 0, this.rKeyID);
    }
}
