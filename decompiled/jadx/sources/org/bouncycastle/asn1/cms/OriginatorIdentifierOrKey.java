package org.bouncycastle.asn1.cms;

import org.bouncycastle.asn1.ASN1Encodable;
import org.bouncycastle.asn1.ASN1OctetString;
import org.bouncycastle.asn1.ASN1TaggedObject;
import org.bouncycastle.asn1.DEREncodable;
import org.bouncycastle.asn1.DERObject;
import org.bouncycastle.asn1.DERTaggedObject;

/* JADX INFO: loaded from: classes4.dex */
public class OriginatorIdentifierOrKey extends ASN1Encodable {
    private DEREncodable id;

    public OriginatorIdentifierOrKey(ASN1OctetString aSN1OctetString) {
        this.id = new DERTaggedObject(false, 0, aSN1OctetString);
    }

    public OriginatorIdentifierOrKey(DERObject dERObject) {
        this.id = dERObject;
    }

    public OriginatorIdentifierOrKey(IssuerAndSerialNumber issuerAndSerialNumber) {
        this.id = issuerAndSerialNumber;
    }

    public OriginatorIdentifierOrKey(OriginatorPublicKey originatorPublicKey) {
        this.id = new DERTaggedObject(false, 1, originatorPublicKey);
    }

    public static OriginatorIdentifierOrKey getInstance(Object obj) {
        if (obj == null || (obj instanceof OriginatorIdentifierOrKey)) {
            return (OriginatorIdentifierOrKey) obj;
        }
        if (obj instanceof DERObject) {
            return new OriginatorIdentifierOrKey((DERObject) obj);
        }
        throw new IllegalArgumentException("Invalid OriginatorIdentifierOrKey: " + obj.getClass().getName());
    }

    public static OriginatorIdentifierOrKey getInstance(ASN1TaggedObject aSN1TaggedObject, boolean z) {
        if (z) {
            return getInstance(aSN1TaggedObject.getObject());
        }
        throw new IllegalArgumentException("Can't implicitly tag OriginatorIdentifierOrKey");
    }

    public DEREncodable getId() {
        return this.id;
    }

    public OriginatorPublicKey getOriginatorKey() {
        DEREncodable dEREncodable = this.id;
        if ((dEREncodable instanceof ASN1TaggedObject) && ((ASN1TaggedObject) dEREncodable).getTagNo() == 1) {
            return OriginatorPublicKey.getInstance((ASN1TaggedObject) this.id, false);
        }
        return null;
    }

    @Override // org.bouncycastle.asn1.ASN1Encodable
    public DERObject toASN1Object() {
        return this.id.getDERObject();
    }
}
