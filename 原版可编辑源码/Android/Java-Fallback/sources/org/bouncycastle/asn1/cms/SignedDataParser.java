package org.bouncycastle.asn1.cms;

public class SignedDataParser {
    private boolean _certsCalled;
    private boolean _crlsCalled;
    private java.lang.Object _nextObject;
    private org.bouncycastle.asn1.ASN1SequenceParser _seq;
    private org.bouncycastle.asn1.DERInteger _version;

    private SignedDataParser(org.bouncycastle.asn1.ASN1SequenceParser r1) throws java.io.IOException {
            r0 = this;
            r0.<init>()
            r0._seq = r1
            org.bouncycastle.asn1.DEREncodable r1 = r1.readObject()
            org.bouncycastle.asn1.DERInteger r1 = (org.bouncycastle.asn1.DERInteger) r1
            r0._version = r1
            return
    }

    public static org.bouncycastle.asn1.cms.SignedDataParser getInstance(java.lang.Object r3) throws java.io.IOException {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L10
            org.bouncycastle.asn1.cms.SignedDataParser r0 = new org.bouncycastle.asn1.cms.SignedDataParser
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            org.bouncycastle.asn1.ASN1SequenceParser r3 = r3.parser()
            r0.<init>(r3)
            return r0
        L10:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1SequenceParser
            if (r0 == 0) goto L1c
            org.bouncycastle.asn1.cms.SignedDataParser r0 = new org.bouncycastle.asn1.cms.SignedDataParser
            org.bouncycastle.asn1.ASN1SequenceParser r3 = (org.bouncycastle.asn1.ASN1SequenceParser) r3
            r0.<init>(r3)
            return r0
        L1c:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object encountered: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.ASN1SetParser getCertificates() throws java.io.IOException {
            r4 = this;
            r0 = 1
            r4._certsCalled = r0
            org.bouncycastle.asn1.ASN1SequenceParser r0 = r4._seq
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            r4._nextObject = r0
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObjectParser
            r2 = 0
            if (r1 == 0) goto L28
            org.bouncycastle.asn1.ASN1TaggedObjectParser r0 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r0
            int r0 = r0.getTagNo()
            if (r0 != 0) goto L28
            java.lang.Object r0 = r4._nextObject
            org.bouncycastle.asn1.ASN1TaggedObjectParser r0 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r0
            r1 = 17
            r3 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectParser(r1, r3)
            org.bouncycastle.asn1.ASN1SetParser r0 = (org.bouncycastle.asn1.ASN1SetParser) r0
            r4._nextObject = r2
            return r0
        L28:
            return r2
    }

    public org.bouncycastle.asn1.ASN1SetParser getCrls() throws java.io.IOException {
            r4 = this;
            boolean r0 = r4._certsCalled
            if (r0 == 0) goto L33
            r0 = 1
            r4._crlsCalled = r0
            java.lang.Object r1 = r4._nextObject
            if (r1 != 0) goto L13
            org.bouncycastle.asn1.ASN1SequenceParser r1 = r4._seq
            org.bouncycastle.asn1.DEREncodable r1 = r1.readObject()
            r4._nextObject = r1
        L13:
            java.lang.Object r1 = r4._nextObject
            boolean r2 = r1 instanceof org.bouncycastle.asn1.ASN1TaggedObjectParser
            r3 = 0
            if (r2 == 0) goto L32
            org.bouncycastle.asn1.ASN1TaggedObjectParser r1 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r1
            int r1 = r1.getTagNo()
            if (r1 != r0) goto L32
            java.lang.Object r0 = r4._nextObject
            org.bouncycastle.asn1.ASN1TaggedObjectParser r0 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r0
            r1 = 17
            r2 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectParser(r1, r2)
            org.bouncycastle.asn1.ASN1SetParser r0 = (org.bouncycastle.asn1.ASN1SetParser) r0
            r4._nextObject = r3
            return r0
        L32:
            return r3
        L33:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "getCerts() has not been called."
            r0.<init>(r1)
            throw r0
    }

    public org.bouncycastle.asn1.ASN1SetParser getDigestAlgorithms() throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.ASN1SequenceParser r0 = r2._seq
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1Set
            if (r1 == 0) goto L11
            org.bouncycastle.asn1.ASN1Set r0 = (org.bouncycastle.asn1.ASN1Set) r0
            org.bouncycastle.asn1.ASN1SetParser r0 = r0.parser()
            return r0
        L11:
            org.bouncycastle.asn1.ASN1SetParser r0 = (org.bouncycastle.asn1.ASN1SetParser) r0
            return r0
    }

    public org.bouncycastle.asn1.cms.ContentInfoParser getEncapContentInfo() throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.cms.ContentInfoParser r0 = new org.bouncycastle.asn1.cms.ContentInfoParser
            org.bouncycastle.asn1.ASN1SequenceParser r1 = r2._seq
            org.bouncycastle.asn1.DEREncodable r1 = r1.readObject()
            org.bouncycastle.asn1.ASN1SequenceParser r1 = (org.bouncycastle.asn1.ASN1SequenceParser) r1
            r0.<init>(r1)
            return r0
    }

    public org.bouncycastle.asn1.ASN1SetParser getSignerInfos() throws java.io.IOException {
            r2 = this;
            boolean r0 = r2._certsCalled
            if (r0 == 0) goto L19
            boolean r0 = r2._crlsCalled
            if (r0 == 0) goto L19
            java.lang.Object r0 = r2._nextObject
            if (r0 != 0) goto L14
            org.bouncycastle.asn1.ASN1SequenceParser r0 = r2._seq
            org.bouncycastle.asn1.DEREncodable r0 = r0.readObject()
            r2._nextObject = r0
        L14:
            java.lang.Object r0 = r2._nextObject
            org.bouncycastle.asn1.ASN1SetParser r0 = (org.bouncycastle.asn1.ASN1SetParser) r0
            return r0
        L19:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "getCerts() and/or getCrls() has not been called."
            r0.<init>(r1)
            throw r0
    }

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1._version
            return r0
    }
}
