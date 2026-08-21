package org.bouncycastle.asn1;

public class BERTaggedObjectParser implements org.bouncycastle.asn1.ASN1TaggedObjectParser {
    private int _baseTag;
    private java.io.InputStream _contentStream;
    private boolean _indefiniteLength;
    private int _tagNumber;

    protected BERTaggedObjectParser(int r1, int r2, java.io.InputStream r3) {
            r0 = this;
            r0.<init>()
            r0._baseTag = r1
            r0._tagNumber = r2
            r0._contentStream = r3
            boolean r1 = r3 instanceof org.bouncycastle.asn1.IndefiniteLengthInputStream
            r0._indefiniteLength = r1
            return
    }

    private org.bouncycastle.asn1.ASN1EncodableVector rLoadVector(java.io.InputStream r2) {
            r1 = this;
            org.bouncycastle.asn1.ASN1StreamParser r0 = new org.bouncycastle.asn1.ASN1StreamParser     // Catch: java.io.IOException -> La
            r0.<init>(r2)     // Catch: java.io.IOException -> La
            org.bouncycastle.asn1.ASN1EncodableVector r2 = r0.readVector()     // Catch: java.io.IOException -> La
            return r2
        La:
            r2 = move-exception
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r2 = r2.getMessage()
            r0.<init>(r2)
            throw r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject getDERObject() {
            r5 = this;
            boolean r0 = r5._indefiniteLength
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L2a
            java.io.InputStream r0 = r5._contentStream
            org.bouncycastle.asn1.ASN1EncodableVector r0 = r5.rLoadVector(r0)
            int r3 = r0.size()
            if (r3 != r1) goto L1e
            org.bouncycastle.asn1.BERTaggedObject r3 = new org.bouncycastle.asn1.BERTaggedObject
            int r4 = r5._tagNumber
            org.bouncycastle.asn1.DEREncodable r0 = r0.get(r2)
            r3.<init>(r1, r4, r0)
            goto L29
        L1e:
            org.bouncycastle.asn1.BERTaggedObject r3 = new org.bouncycastle.asn1.BERTaggedObject
            int r1 = r5._tagNumber
            org.bouncycastle.asn1.BERSequence r0 = org.bouncycastle.asn1.BERFactory.createSequence(r0)
            r3.<init>(r2, r1, r0)
        L29:
            return r3
        L2a:
            boolean r0 = r5.isConstructed()
            if (r0 == 0) goto L54
            java.io.InputStream r0 = r5._contentStream
            org.bouncycastle.asn1.ASN1EncodableVector r0 = r5.rLoadVector(r0)
            int r3 = r0.size()
            if (r3 != r1) goto L48
            org.bouncycastle.asn1.DERTaggedObject r3 = new org.bouncycastle.asn1.DERTaggedObject
            int r4 = r5._tagNumber
            org.bouncycastle.asn1.DEREncodable r0 = r0.get(r2)
            r3.<init>(r1, r4, r0)
            goto L53
        L48:
            org.bouncycastle.asn1.DERTaggedObject r3 = new org.bouncycastle.asn1.DERTaggedObject
            int r1 = r5._tagNumber
            org.bouncycastle.asn1.DERSequence r0 = org.bouncycastle.asn1.DERFactory.createSequence(r0)
            r3.<init>(r2, r1, r0)
        L53:
            return r3
        L54:
            java.io.InputStream r0 = r5._contentStream     // Catch: java.io.IOException -> L69
            org.bouncycastle.asn1.DefiniteLengthInputStream r0 = (org.bouncycastle.asn1.DefiniteLengthInputStream) r0     // Catch: java.io.IOException -> L69
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject     // Catch: java.io.IOException -> L69
            int r3 = r5._tagNumber     // Catch: java.io.IOException -> L69
            org.bouncycastle.asn1.DEROctetString r4 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.io.IOException -> L69
            byte[] r0 = r0.toByteArray()     // Catch: java.io.IOException -> L69
            r4.<init>(r0)     // Catch: java.io.IOException -> L69
            r1.<init>(r2, r3, r4)     // Catch: java.io.IOException -> L69
            return r1
        L69:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r0 = r0.getMessage()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public org.bouncycastle.asn1.DEREncodable getObjectParser(int r2, boolean r3) throws java.io.IOException {
            r1 = this;
            if (r3 == 0) goto Le
            org.bouncycastle.asn1.ASN1StreamParser r2 = new org.bouncycastle.asn1.ASN1StreamParser
            java.io.InputStream r3 = r1._contentStream
            r2.<init>(r3)
            org.bouncycastle.asn1.DEREncodable r2 = r2.readObject()
            return r2
        Le:
            r3 = 4
            if (r2 == r3) goto L5d
            r3 = 16
            if (r2 == r3) goto L3f
            r3 = 17
            if (r2 != r3) goto L37
            boolean r2 = r1._indefiniteLength
            if (r2 == 0) goto L2a
            org.bouncycastle.asn1.BERSetParser r2 = new org.bouncycastle.asn1.BERSetParser
            org.bouncycastle.asn1.ASN1StreamParser r3 = new org.bouncycastle.asn1.ASN1StreamParser
            java.io.InputStream r0 = r1._contentStream
            r3.<init>(r0)
            r2.<init>(r3)
            return r2
        L2a:
            org.bouncycastle.asn1.DERSetParser r2 = new org.bouncycastle.asn1.DERSetParser
            org.bouncycastle.asn1.ASN1StreamParser r3 = new org.bouncycastle.asn1.ASN1StreamParser
            java.io.InputStream r0 = r1._contentStream
            r3.<init>(r0)
            r2.<init>(r3)
            return r2
        L37:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r3 = "implicit tagging not implemented"
            r2.<init>(r3)
            throw r2
        L3f:
            boolean r2 = r1._indefiniteLength
            if (r2 == 0) goto L50
            org.bouncycastle.asn1.BERSequenceParser r2 = new org.bouncycastle.asn1.BERSequenceParser
            org.bouncycastle.asn1.ASN1StreamParser r3 = new org.bouncycastle.asn1.ASN1StreamParser
            java.io.InputStream r0 = r1._contentStream
            r3.<init>(r0)
            r2.<init>(r3)
            return r2
        L50:
            org.bouncycastle.asn1.DERSequenceParser r2 = new org.bouncycastle.asn1.DERSequenceParser
            org.bouncycastle.asn1.ASN1StreamParser r3 = new org.bouncycastle.asn1.ASN1StreamParser
            java.io.InputStream r0 = r1._contentStream
            r3.<init>(r0)
            r2.<init>(r3)
            return r2
        L5d:
            boolean r2 = r1._indefiniteLength
            if (r2 != 0) goto L72
            boolean r2 = r1.isConstructed()
            if (r2 == 0) goto L68
            goto L72
        L68:
            org.bouncycastle.asn1.DEROctetStringParser r2 = new org.bouncycastle.asn1.DEROctetStringParser
            java.io.InputStream r3 = r1._contentStream
            org.bouncycastle.asn1.DefiniteLengthInputStream r3 = (org.bouncycastle.asn1.DefiniteLengthInputStream) r3
            r2.<init>(r3)
            return r2
        L72:
            org.bouncycastle.asn1.BEROctetStringParser r2 = new org.bouncycastle.asn1.BEROctetStringParser
            org.bouncycastle.asn1.ASN1StreamParser r3 = new org.bouncycastle.asn1.ASN1StreamParser
            java.io.InputStream r0 = r1._contentStream
            r3.<init>(r0)
            r2.<init>(r3)
            return r2
    }

    @Override
    public int getTagNo() {
            r1 = this;
            int r0 = r1._tagNumber
            return r0
    }

    public boolean isConstructed() {
            r1 = this;
            int r0 = r1._baseTag
            r0 = r0 & 32
            if (r0 == 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }
}
