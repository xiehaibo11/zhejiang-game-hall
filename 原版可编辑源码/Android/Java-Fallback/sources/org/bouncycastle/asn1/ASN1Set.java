package org.bouncycastle.asn1;

public abstract class ASN1Set extends org.bouncycastle.asn1.ASN1Object {
    protected java.util.Vector set;


    public ASN1Set() {
            r1 = this;
            r1.<init>()
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r1.set = r0
            return
    }

    private byte[] getEncoded(org.bouncycastle.asn1.DEREncodable r3) {
            r2 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.ASN1OutputStream r1 = new org.bouncycastle.asn1.ASN1OutputStream
            r1.<init>(r0)
            r1.writeObject(r3)     // Catch: java.io.IOException -> L12
            byte[] r3 = r0.toByteArray()
            return r3
        L12:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "cannot encode object added to SET"
            r3.<init>(r0)
            throw r3
    }

    public static org.bouncycastle.asn1.ASN1Set getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L26
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Set
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
            org.bouncycastle.asn1.ASN1Set r3 = (org.bouncycastle.asn1.ASN1Set) r3
            return r3
    }

    public static org.bouncycastle.asn1.ASN1Set getInstance(org.bouncycastle.asn1.ASN1TaggedObject r2, boolean r3) {
            if (r3 == 0) goto L17
            boolean r3 = r2.isExplicit()
            if (r3 == 0) goto Lf
            org.bouncycastle.asn1.DERObject r2 = r2.getObject()
            org.bouncycastle.asn1.ASN1Set r2 = (org.bouncycastle.asn1.ASN1Set) r2
            return r2
        Lf:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "object implicit - explicit expected."
            r2.<init>(r3)
            throw r2
        L17:
            boolean r3 = r2.isExplicit()
            if (r3 == 0) goto L27
            org.bouncycastle.asn1.DERSet r3 = new org.bouncycastle.asn1.DERSet
            org.bouncycastle.asn1.DERObject r2 = r2.getObject()
            r3.<init>(r2)
            return r3
        L27:
            org.bouncycastle.asn1.DERObject r3 = r2.getObject()
            boolean r3 = r3 instanceof org.bouncycastle.asn1.ASN1Set
            if (r3 == 0) goto L36
            org.bouncycastle.asn1.DERObject r2 = r2.getObject()
            org.bouncycastle.asn1.ASN1Set r2 = (org.bouncycastle.asn1.ASN1Set) r2
            return r2
        L36:
            org.bouncycastle.asn1.ASN1EncodableVector r3 = new org.bouncycastle.asn1.ASN1EncodableVector
            r3.<init>()
            org.bouncycastle.asn1.DERObject r0 = r2.getObject()
            boolean r0 = r0 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L64
            org.bouncycastle.asn1.DERObject r2 = r2.getObject()
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2
            java.util.Enumeration r2 = r2.getObjects()
        L4d:
            boolean r0 = r2.hasMoreElements()
            if (r0 == 0) goto L5d
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            r3.add(r0)
            goto L4d
        L5d:
            org.bouncycastle.asn1.DERSet r2 = new org.bouncycastle.asn1.DERSet
            r0 = 0
            r2.<init>(r3, r0)
            return r2
        L64:
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

    private boolean lessThanOrEqual(byte[] r6, byte[] r7) {
            r5 = this;
            int r0 = r6.length
            int r1 = r7.length
            r2 = 1
            r3 = 0
            if (r0 > r1) goto L1c
            r0 = 0
        L7:
            int r1 = r6.length
            if (r0 == r1) goto L1b
            r1 = r6[r0]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r4 = r7[r0]
            r4 = r4 & 255(0xff, float:3.57E-43)
            if (r4 <= r1) goto L15
            return r2
        L15:
            if (r1 <= r4) goto L18
            return r3
        L18:
            int r0 = r0 + 1
            goto L7
        L1b:
            return r2
        L1c:
            r0 = 0
        L1d:
            int r1 = r7.length
            if (r0 == r1) goto L31
            r1 = r6[r0]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r4 = r7[r0]
            r4 = r4 & 255(0xff, float:3.57E-43)
            if (r4 <= r1) goto L2b
            return r2
        L2b:
            if (r1 <= r4) goto L2e
            return r3
        L2e:
            int r0 = r0 + 1
            goto L1d
        L31:
            return r3
    }

    protected void addObject(org.bouncycastle.asn1.DEREncodable r2) {
            r1 = this;
            java.util.Vector r0 = r1.set
            r0.addElement(r2)
            return
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r5) {
            r4 = this;
            boolean r0 = r5 instanceof org.bouncycastle.asn1.ASN1Set
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.asn1.ASN1Set r5 = (org.bouncycastle.asn1.ASN1Set) r5
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
            java.util.Vector r0 = r1.set
            java.lang.Object r2 = r0.elementAt(r2)
            org.bouncycastle.asn1.DEREncodable r2 = (org.bouncycastle.asn1.DEREncodable) r2
            return r2
    }

    public java.util.Enumeration getObjects() {
            r1 = this;
            java.util.Vector r0 = r1.set
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
            if (r2 == 0) goto L15
            java.lang.Object r2 = r0.nextElement()
            int r2 = r2.hashCode()
            r1 = r1 ^ r2
            goto L5
        L15:
            return r1
    }

    public org.bouncycastle.asn1.ASN1SetParser parser() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set$1 r0 = new org.bouncycastle.asn1.ASN1Set$1
            r0.<init>(r1, r1)
            return r0
    }

    public int size() {
            r1 = this;
            java.util.Vector r0 = r1.set
            int r0 = r0.size()
            return r0
    }

    protected void sort() {
            r9 = this;
            java.util.Vector r0 = r9.set
            int r0 = r0.size()
            r1 = 1
            if (r0 <= r1) goto L55
            java.util.Vector r0 = r9.set
            int r0 = r0.size()
            int r0 = r0 - r1
            r2 = 1
        L11:
            if (r2 == 0) goto L55
            java.util.Vector r2 = r9.set
            r3 = 0
            java.lang.Object r2 = r2.elementAt(r3)
            org.bouncycastle.asn1.DEREncodable r2 = (org.bouncycastle.asn1.DEREncodable) r2
            byte[] r2 = r9.getEncoded(r2)
            r4 = r2
            r2 = 0
            r5 = 0
        L23:
            if (r5 == r0) goto L53
            java.util.Vector r6 = r9.set
            int r7 = r5 + 1
            java.lang.Object r6 = r6.elementAt(r7)
            org.bouncycastle.asn1.DEREncodable r6 = (org.bouncycastle.asn1.DEREncodable) r6
            byte[] r6 = r9.getEncoded(r6)
            boolean r8 = r9.lessThanOrEqual(r4, r6)
            if (r8 == 0) goto L3b
            r4 = r6
            goto L51
        L3b:
            java.util.Vector r2 = r9.set
            java.lang.Object r2 = r2.elementAt(r5)
            java.util.Vector r3 = r9.set
            java.lang.Object r6 = r3.elementAt(r7)
            r3.setElementAt(r6, r5)
            java.util.Vector r3 = r9.set
            r3.setElementAt(r2, r7)
            r3 = r5
            r2 = 1
        L51:
            r5 = r7
            goto L23
        L53:
            r0 = r3
            goto L11
        L55:
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.Vector r0 = r1.set
            java.lang.String r0 = r0.toString()
            return r0
    }
}
