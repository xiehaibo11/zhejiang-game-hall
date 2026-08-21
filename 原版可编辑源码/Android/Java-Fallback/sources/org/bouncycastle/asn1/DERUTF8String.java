package org.bouncycastle.asn1;

public class DERUTF8String extends org.bouncycastle.asn1.ASN1Object implements org.bouncycastle.asn1.DERString {
    java.lang.String string;

    public DERUTF8String(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.string = r1
            return
    }

    DERUTF8String(byte[] r1) {
            r0 = this;
            r0.<init>()
            java.lang.String r1 = org.bouncycastle.util.Strings.fromUTF8ByteArray(r1)
            r0.string = r1
            return
    }

    public static org.bouncycastle.asn1.DERUTF8String getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L45
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERUTF8String
            if (r0 == 0) goto L7
            goto L45
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.DERUTF8String r0 = new org.bouncycastle.asn1.DERUTF8String
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            byte[] r3 = r3.getOctets()
            r0.<init>(r3)
            return r0
        L17:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L26
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            org.bouncycastle.asn1.DERObject r3 = r3.getObject()
            org.bouncycastle.asn1.DERUTF8String r3 = getInstance(r3)
            return r3
        L26:
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
        L45:
            org.bouncycastle.asn1.DERUTF8String r3 = (org.bouncycastle.asn1.DERUTF8String) r3
            return r3
    }

    public static org.bouncycastle.asn1.DERUTF8String getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.DERUTF8String r0 = getInstance(r0)
            return r0
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DERUTF8String
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            org.bouncycastle.asn1.DERUTF8String r2 = (org.bouncycastle.asn1.DERUTF8String) r2
            java.lang.String r0 = r1.getString()
            java.lang.String r2 = r2.getString()
            boolean r2 = r0.equals(r2)
            return r2
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r3) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = r2.string
            byte[] r0 = org.bouncycastle.util.Strings.toUTF8ByteArray(r0)
            r1 = 12
            r3.writeEncoded(r1, r0)
            return
    }

    @Override
    public java.lang.String getString() {
            r1 = this;
            java.lang.String r0 = r1.string
            return r0
    }

    @Override
    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.getString()
            int r0 = r0.hashCode()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.string
            return r0
    }
}
