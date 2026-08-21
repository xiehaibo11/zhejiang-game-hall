package org.bouncycastle.asn1;

public abstract class ASN1Sequence extends org.bouncycastle.asn1.ASN1Object {
    private java.util.Vector seq;


    public ASN1Sequence() {
            r1 = this;
            r1.<init>()
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r1.seq = r0
            return
    }

    public static org.bouncycastle.asn1.ASN1Sequence getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L26
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
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
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            return r3
    }

    public static org.bouncycastle.asn1.ASN1Sequence getInstance(org.bouncycastle.asn1.ASN1TaggedObject r2, boolean r3) {
            if (r3 == 0) goto L17
            boolean r3 = r2.isExplicit()
            if (r3 == 0) goto Lf
        L8:
            org.bouncycastle.asn1.DERObject r2 = r2.getObject()
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2
            return r2
        Lf:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "object implicit - explicit expected."
            r2.<init>(r3)
            throw r2
        L17:
            boolean r3 = r2.isExplicit()
            if (r3 == 0) goto L35
            boolean r3 = r2 instanceof org.bouncycastle.asn1.BERTaggedObject
            if (r3 == 0) goto L2b
            org.bouncycastle.asn1.BERSequence r3 = new org.bouncycastle.asn1.BERSequence
            org.bouncycastle.asn1.DERObject r2 = r2.getObject()
            r3.<init>(r2)
            return r3
        L2b:
            org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence
            org.bouncycastle.asn1.DERObject r2 = r2.getObject()
            r3.<init>(r2)
            return r3
        L35:
            org.bouncycastle.asn1.DERObject r3 = r2.getObject()
            boolean r3 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r3 == 0) goto L3e
            goto L8
        L3e:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "unknown object in getInstance: "
            r0.append(r1)
            java.lang.Class r2 = r2.getClass()
            java.lang.String r2 = r2.getName()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
    }

    protected void addObject(org.bouncycastle.asn1.DEREncodable r2) {
            r1 = this;
            java.util.Vector r0 = r1.seq
            r0.addElement(r2)
            return
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r5) {
            r4 = this;
            boolean r0 = r5 instanceof org.bouncycastle.asn1.ASN1Sequence
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.asn1.ASN1Sequence r5 = (org.bouncycastle.asn1.ASN1Sequence) r5
            int r0 = r4.size()
            int r2 = r5.size()
            if (r0 == r2) goto L13
            return r1
        L13:
            java.util.Enumeration r0 = r4.getObjects()
            java.util.Enumeration r5 = r5.getObjects()
        L1b:
            boolean r2 = r0.hasMoreElements()
            if (r2 == 0) goto L41
            java.lang.Object r2 = r0.nextElement()
            org.bouncycastle.asn1.DEREncodable r2 = (org.bouncycastle.asn1.DEREncodable) r2
            org.bouncycastle.asn1.DERObject r2 = r2.getDERObject()
            java.lang.Object r3 = r5.nextElement()
            org.bouncycastle.asn1.DEREncodable r3 = (org.bouncycastle.asn1.DEREncodable) r3
            org.bouncycastle.asn1.DERObject r3 = r3.getDERObject()
            if (r2 == r3) goto L1b
            if (r2 == 0) goto L40
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L40
            goto L1b
        L40:
            return r1
        L41:
            r5 = 1
            return r5
    }

    @Override
    abstract void encode(org.bouncycastle.asn1.DEROutputStream r1) throws java.io.IOException;

    public org.bouncycastle.asn1.DEREncodable getObjectAt(int r2) {
            r1 = this;
            java.util.Vector r0 = r1.seq
            java.lang.Object r2 = r0.elementAt(r2)
            org.bouncycastle.asn1.DEREncodable r2 = (org.bouncycastle.asn1.DEREncodable) r2
            return r2
    }

    public java.util.Enumeration getObjects() {
            r1 = this;
            java.util.Vector r0 = r1.seq
            java.util.Enumeration r0 = r0.elements()
            return r0
    }

    @Override
    public int hashCode() {
            r3 = this;
            java.util.Enumeration r0 = r3.getObjects()
            r1 = 0
        L5:
            boolean r2 = r0.hasMoreElements()
            if (r2 == 0) goto L17
            java.lang.Object r2 = r0.nextElement()
            if (r2 == 0) goto L5
            int r2 = r2.hashCode()
            r1 = r1 ^ r2
            goto L5
        L17:
            return r1
    }

    public org.bouncycastle.asn1.ASN1SequenceParser parser() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence$1 r0 = new org.bouncycastle.asn1.ASN1Sequence$1
            r0.<init>(r1, r1)
            return r0
    }

    public int size() {
            r1 = this;
            java.util.Vector r0 = r1.seq
            int r0 = r0.size()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.Vector r0 = r1.seq
            java.lang.String r0 = r0.toString()
            return r0
    }
}
