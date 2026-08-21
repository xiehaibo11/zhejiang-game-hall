package org.bouncycastle.asn1;

public abstract class ASN1TaggedObject extends org.bouncycastle.asn1.ASN1Object implements org.bouncycastle.asn1.ASN1TaggedObjectParser {
    boolean empty;
    boolean explicit;
    org.bouncycastle.asn1.DEREncodable obj;
    int tagNo;

    public ASN1TaggedObject(int r3, org.bouncycastle.asn1.DEREncodable r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.empty = r0
            r0 = 1
            r2.explicit = r0
            r1 = 0
            r2.obj = r1
            r2.explicit = r0
            r2.tagNo = r3
            r2.obj = r4
            return
    }

    public ASN1TaggedObject(boolean r3, int r4, org.bouncycastle.asn1.DEREncodable r5) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.empty = r0
            r0 = 1
            r2.explicit = r0
            r1 = 0
            r2.obj = r1
            boolean r1 = r5 instanceof org.bouncycastle.asn1.ASN1Choice
            if (r1 == 0) goto L13
            r2.explicit = r0
            goto L15
        L13:
            r2.explicit = r3
        L15:
            r2.tagNo = r4
            r2.obj = r5
            return
    }

    public static org.bouncycastle.asn1.ASN1TaggedObject getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L26
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L7
            goto L26
        L7:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in getInstance: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L26:
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            return r3
    }

    public static org.bouncycastle.asn1.ASN1TaggedObject getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            if (r1 == 0) goto L9
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            return r0
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "implicitly tagged tagged object"
            r0.<init>(r1)
            throw r0
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.asn1.ASN1TaggedObject r4 = (org.bouncycastle.asn1.ASN1TaggedObject) r4
            int r0 = r3.tagNo
            int r2 = r4.tagNo
            if (r0 != r2) goto L37
            boolean r0 = r3.empty
            boolean r2 = r4.empty
            if (r0 != r2) goto L37
            boolean r0 = r3.explicit
            boolean r2 = r4.explicit
            if (r0 == r2) goto L1b
            goto L37
        L1b:
            org.bouncycastle.asn1.DEREncodable r0 = r3.obj
            if (r0 != 0) goto L24
            org.bouncycastle.asn1.DEREncodable r4 = r4.obj
            if (r4 == 0) goto L35
            return r1
        L24:
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            org.bouncycastle.asn1.DEREncodable r4 = r4.obj
            org.bouncycastle.asn1.DERObject r4 = r4.getDERObject()
            boolean r4 = r0.equals(r4)
            if (r4 != 0) goto L35
            return r1
        L35:
            r4 = 1
            return r4
        L37:
            return r1
    }

    @Override
    abstract void encode(org.bouncycastle.asn1.DEROutputStream r1) throws java.io.IOException;

    public org.bouncycastle.asn1.DERObject getObject() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.obj
            if (r0 == 0) goto L9
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DEREncodable getObjectParser(int r3, boolean r4) {
            r2 = this;
            r0 = 4
            if (r3 == r0) goto L3b
            r0 = 16
            if (r3 == r0) goto L32
            r0 = 17
            if (r3 == r0) goto L29
            if (r4 == 0) goto L12
            org.bouncycastle.asn1.DERObject r3 = r2.getObject()
            return r3
        L12:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "implicit tagging not implemented for tag: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        L29:
            org.bouncycastle.asn1.ASN1Set r3 = org.bouncycastle.asn1.ASN1Set.getInstance(r2, r4)
            org.bouncycastle.asn1.ASN1SetParser r3 = r3.parser()
            return r3
        L32:
            org.bouncycastle.asn1.ASN1Sequence r3 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r2, r4)
            org.bouncycastle.asn1.ASN1SequenceParser r3 = r3.parser()
            return r3
        L3b:
            org.bouncycastle.asn1.ASN1OctetString r3 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r2, r4)
            org.bouncycastle.asn1.ASN1OctetStringParser r3 = r3.parser()
            return r3
    }

    @Override
    public int getTagNo() {
            r1 = this;
            int r0 = r1.tagNo
            return r0
    }

    @Override
    public int hashCode() {
            r2 = this;
            int r0 = r2.tagNo
            org.bouncycastle.asn1.DEREncodable r1 = r2.obj
            if (r1 == 0) goto Lb
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
        Lb:
            return r0
    }

    public boolean isEmpty() {
            r1 = this;
            boolean r0 = r1.empty
            return r0
    }

    public boolean isExplicit() {
            r1 = this;
            boolean r0 = r1.explicit
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "["
            r0.append(r1)
            int r1 = r2.tagNo
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            org.bouncycastle.asn1.DEREncodable r1 = r2.obj
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
