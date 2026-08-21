package org.bouncycastle.asn1.cms;

public class EnvelopedDataParser {
    private org.bouncycastle.asn1.DEREncodable _nextObject;
    private boolean _originatorInfoCalled;
    private org.bouncycastle.asn1.ASN1SequenceParser _seq;
    private org.bouncycastle.asn1.DERInteger _version;

    public EnvelopedDataParser(org.bouncycastle.asn1.ASN1SequenceParser r1) throws java.io.IOException {
            r0 = this;
            r0.<init>()
            r0._seq = r1
            org.bouncycastle.asn1.DEREncodable r1 = r1.readObject()
            org.bouncycastle.asn1.DERInteger r1 = (org.bouncycastle.asn1.DERInteger) r1
            r0._version = r1
            return
    }

    public org.bouncycastle.asn1.ASN1SetParser getCertificates() throws java.io.IOException {
            r4 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r4._nextObject
            if (r0 != 0) goto Lc
            org.bouncycastle.asn1.ASN1SequenceParser r0 = r4._seq
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            r4._nextObject = r0
        Lc:
            org.bouncycastle.asn1.DEREncodable r0 = r4._nextObject
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObjectParser
            r2 = 0
            if (r1 == 0) goto L2b
            org.bouncycastle.asn1.ASN1TaggedObjectParser r0 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r0
            int r0 = r0.getTagNo()
            if (r0 != 0) goto L2b
            org.bouncycastle.asn1.DEREncodable r0 = r4._nextObject
            org.bouncycastle.asn1.ASN1TaggedObjectParser r0 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r0
            r1 = 17
            r3 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectParser(r1, r3)
            org.bouncycastle.asn1.ASN1SetParser r0 = (org.bouncycastle.asn1.ASN1SetParser) r0
            r4._nextObject = r2
            return r0
        L2b:
            return r2
    }

    public org.bouncycastle.asn1.ASN1SetParser getCrls() throws java.io.IOException {
            r4 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r4._nextObject
            if (r0 != 0) goto Lc
            org.bouncycastle.asn1.ASN1SequenceParser r0 = r4._seq
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            r4._nextObject = r0
        Lc:
            org.bouncycastle.asn1.DEREncodable r0 = r4._nextObject
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObjectParser
            r2 = 0
            if (r1 == 0) goto L2c
            org.bouncycastle.asn1.ASN1TaggedObjectParser r0 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r0
            int r0 = r0.getTagNo()
            r1 = 1
            if (r0 != r1) goto L2c
            org.bouncycastle.asn1.DEREncodable r0 = r4._nextObject
            org.bouncycastle.asn1.ASN1TaggedObjectParser r0 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r0
            r1 = 17
            r3 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectParser(r1, r3)
            org.bouncycastle.asn1.ASN1SetParser r0 = (org.bouncycastle.asn1.ASN1SetParser) r0
            r4._nextObject = r2
            return r0
        L2c:
            return r2
    }

    public org.bouncycastle.asn1.cms.EncryptedContentInfoParser getEncryptedContentInfo() throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r2._nextObject
            if (r0 != 0) goto Lc
            org.bouncycastle.asn1.ASN1SequenceParser r0 = r2._seq
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            r2._nextObject = r0
        Lc:
            org.bouncycastle.asn1.DEREncodable r0 = r2._nextObject
            r1 = 0
            if (r0 == 0) goto L1a
            org.bouncycastle.asn1.ASN1SequenceParser r0 = (org.bouncycastle.asn1.ASN1SequenceParser) r0
            r2._nextObject = r1
            org.bouncycastle.asn1.cms.EncryptedContentInfoParser r1 = new org.bouncycastle.asn1.cms.EncryptedContentInfoParser
            r1.<init>(r0)
        L1a:
            return r1
    }

    public org.bouncycastle.asn1.cms.OriginatorInfo getOriginatorInfo() throws java.io.IOException {
            r4 = this;
            r0 = 1
            r4._originatorInfoCalled = r0
            org.bouncycastle.asn1.DEREncodable r0 = r4._nextObject
            if (r0 != 0) goto Lf
            org.bouncycastle.asn1.ASN1SequenceParser r0 = r4._seq
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            r4._nextObject = r0
        Lf:
            org.bouncycastle.asn1.DEREncodable r0 = r4._nextObject
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObjectParser
            r2 = 0
            if (r1 == 0) goto L36
            org.bouncycastle.asn1.ASN1TaggedObjectParser r0 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r0
            int r0 = r0.getTagNo()
            if (r0 != 0) goto L36
            org.bouncycastle.asn1.DEREncodable r0 = r4._nextObject
            org.bouncycastle.asn1.ASN1TaggedObjectParser r0 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r0
            r1 = 16
            r3 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectParser(r1, r3)
            org.bouncycastle.asn1.ASN1SequenceParser r0 = (org.bouncycastle.asn1.ASN1SequenceParser) r0
            r4._nextObject = r2
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            org.bouncycastle.asn1.cms.OriginatorInfo r0 = org.bouncycastle.asn1.cms.OriginatorInfo.getInstance(r0)
            return r0
        L36:
            return r2
    }

    public org.bouncycastle.asn1.ASN1SetParser getRecipientInfos() throws java.io.IOException {
            r2 = this;
            boolean r0 = r2._originatorInfoCalled
            if (r0 != 0) goto L7
            r2.getOriginatorInfo()
        L7:
            org.bouncycastle.asn1.DEREncodable r0 = r2._nextObject
            if (r0 != 0) goto L13
            org.bouncycastle.asn1.ASN1SequenceParser r0 = r2._seq
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            r2._nextObject = r0
        L13:
            org.bouncycastle.asn1.DEREncodable r0 = r2._nextObject
            org.bouncycastle.asn1.ASN1SetParser r0 = (org.bouncycastle.asn1.ASN1SetParser) r0
            r1 = 0
            r2._nextObject = r1
            return r0
    }

    public org.bouncycastle.asn1.ASN1SetParser getUnprotectedAttrs() throws java.io.IOException {
            r3 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r3._nextObject
            if (r0 != 0) goto Lc
            org.bouncycastle.asn1.ASN1SequenceParser r0 = r3._seq
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            r3._nextObject = r0
        Lc:
            org.bouncycastle.asn1.DEREncodable r0 = r3._nextObject
            r1 = 0
            if (r0 == 0) goto L1f
            r3._nextObject = r1
            org.bouncycastle.asn1.ASN1TaggedObjectParser r0 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r0
            r1 = 17
            r2 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectParser(r1, r2)
            org.bouncycastle.asn1.ASN1SetParser r0 = (org.bouncycastle.asn1.ASN1SetParser) r0
            return r0
        L1f:
            return r1
    }

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1._version
            return r0
    }
}
