package org.bouncycastle.asn1;

public abstract class ASN1OctetString extends org.bouncycastle.asn1.ASN1Object implements org.bouncycastle.asn1.ASN1OctetStringParser {
    byte[] string;

    public ASN1OctetString(org.bouncycastle.asn1.DEREncodable r4) {
            r3 = this;
            r3.<init>()
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L1a
            r0.<init>()     // Catch: java.io.IOException -> L1a
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream     // Catch: java.io.IOException -> L1a
            r1.<init>(r0)     // Catch: java.io.IOException -> L1a
            r1.writeObject(r4)     // Catch: java.io.IOException -> L1a
            r1.close()     // Catch: java.io.IOException -> L1a
            byte[] r4 = r0.toByteArray()     // Catch: java.io.IOException -> L1a
            r3.string = r4     // Catch: java.io.IOException -> L1a
            return
        L1a:
            r4 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Error processing object : "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public ASN1OctetString(byte[] r2) {
            r1 = this;
            r1.<init>()
            if (r2 == 0) goto L8
            r1.string = r2
            return
        L8:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "string cannot be null"
            r2.<init>(r0)
            throw r2
    }

    public static org.bouncycastle.asn1.ASN1OctetString getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L58
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L7
            goto L58
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L16
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            org.bouncycastle.asn1.DERObject r3 = r3.getObject()
            org.bouncycastle.asn1.ASN1OctetString r3 = getInstance(r3)
            return r3
        L16:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L39
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            java.util.Enumeration r3 = r3.getObjects()
        L25:
            boolean r1 = r3.hasMoreElements()
            if (r1 == 0) goto L33
            java.lang.Object r1 = r3.nextElement()
            r0.addElement(r1)
            goto L25
        L33:
            org.bouncycastle.asn1.BERConstructedOctetString r3 = new org.bouncycastle.asn1.BERConstructedOctetString
            r3.<init>(r0)
            return r3
        L39:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "illegal object in getInstance: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L58:
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            return r3
    }

    public static org.bouncycastle.asn1.ASN1OctetString getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.ASN1OctetString r0 = getInstance(r0)
            return r0
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r6) {
            r5 = this;
            boolean r0 = r6 instanceof org.bouncycastle.asn1.ASN1OctetString
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.asn1.ASN1OctetString r6 = (org.bouncycastle.asn1.ASN1OctetString) r6
            byte[] r6 = r6.string
            byte[] r0 = r5.string
            int r2 = r6.length
            int r3 = r0.length
            if (r2 == r3) goto L11
            return r1
        L11:
            r2 = 0
        L12:
            int r3 = r6.length
            if (r2 == r3) goto L1f
            r3 = r6[r2]
            r4 = r0[r2]
            if (r3 == r4) goto L1c
            return r1
        L1c:
            int r2 = r2 + 1
            goto L12
        L1f:
            r6 = 1
            return r6
    }

    @Override
    abstract void encode(org.bouncycastle.asn1.DEROutputStream r1) throws java.io.IOException;

    @Override
    public java.io.InputStream getOctetStream() {
            r2 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r1 = r2.string
            r0.<init>(r1)
            return r0
    }

    public byte[] getOctets() {
            r1 = this;
            byte[] r0 = r1.string
            return r0
    }

    @Override
    public int hashCode() {
            r5 = this;
            byte[] r0 = r5.getOctets()
            r1 = 0
            r2 = 0
        L6:
            int r3 = r0.length
            if (r1 == r3) goto L14
            r3 = r0[r1]
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r4 = r1 % 4
            int r3 = r3 << r4
            r2 = r2 ^ r3
            int r1 = r1 + 1
            goto L6
        L14:
            return r2
    }

    public org.bouncycastle.asn1.ASN1OctetStringParser parser() {
            r0 = this;
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "#"
            r0.append(r1)
            java.lang.String r1 = new java.lang.String
            byte[] r2 = r3.string
            byte[] r2 = org.bouncycastle.util.encoders.Hex.encode(r2)
            r1.<init>(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
