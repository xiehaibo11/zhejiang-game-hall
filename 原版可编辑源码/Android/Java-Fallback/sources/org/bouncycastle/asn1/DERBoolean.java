package org.bouncycastle.asn1;

public class DERBoolean extends org.bouncycastle.asn1.ASN1Object {
    public static final org.bouncycastle.asn1.DERBoolean FALSE = null;
    public static final org.bouncycastle.asn1.DERBoolean TRUE = null;
    byte value;

    static {
            org.bouncycastle.asn1.DERBoolean r0 = new org.bouncycastle.asn1.DERBoolean
            r1 = 0
            r0.<init>(r1)
            org.bouncycastle.asn1.DERBoolean.FALSE = r0
            org.bouncycastle.asn1.DERBoolean r0 = new org.bouncycastle.asn1.DERBoolean
            r1 = 1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERBoolean.TRUE = r0
            return
    }

    public DERBoolean(boolean r1) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L7
            r1 = -1
            goto L8
        L7:
            r1 = 0
        L8:
            r0.value = r1
            return
    }

    public DERBoolean(byte[] r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r2 = r2[r0]
            r1.value = r2
            return
    }

    public static org.bouncycastle.asn1.DERBoolean getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L45
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERBoolean
            if (r0 == 0) goto L7
            goto L45
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.DERBoolean r0 = new org.bouncycastle.asn1.DERBoolean
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            byte[] r3 = r3.getOctets()
            r0.<init>(r3)
            return r0
        L17:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L26
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            org.bouncycastle.asn1.DERObject r3 = r3.getObject()
            org.bouncycastle.asn1.DERBoolean r3 = getInstance(r3)
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
            org.bouncycastle.asn1.DERBoolean r3 = (org.bouncycastle.asn1.DERBoolean) r3
            return r3
    }

    public static org.bouncycastle.asn1.DERBoolean getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.DERBoolean r0 = getInstance(r0)
            return r0
    }

    public static org.bouncycastle.asn1.DERBoolean getInstance(boolean r0) {
            if (r0 == 0) goto L5
            org.bouncycastle.asn1.DERBoolean r0 = org.bouncycastle.asn1.DERBoolean.TRUE
            goto L7
        L5:
            org.bouncycastle.asn1.DERBoolean r0 = org.bouncycastle.asn1.DERBoolean.FALSE
        L7:
            return r0
    }

    @Override
    protected boolean asn1Equals(org.bouncycastle.asn1.DERObject r3) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L11
            boolean r1 = r3 instanceof org.bouncycastle.asn1.DERBoolean
            if (r1 != 0) goto L8
            goto L11
        L8:
            byte r1 = r2.value
            org.bouncycastle.asn1.DERBoolean r3 = (org.bouncycastle.asn1.DERBoolean) r3
            byte r3 = r3.value
            if (r1 != r3) goto L11
            r0 = 1
        L11:
            return r0
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r5) throws java.io.IOException {
            r4 = this;
            r0 = 1
            byte[] r1 = new byte[r0]
            byte r2 = r4.value
            r3 = 0
            r1[r3] = r2
            r5.writeEncoded(r0, r1)
            return
    }

    @Override
    public int hashCode() {
            r1 = this;
            byte r0 = r1.value
            return r0
    }

    public boolean isTrue() {
            r1 = this;
            byte r0 = r1.value
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            byte r0 = r1.value
            if (r0 == 0) goto L7
            java.lang.String r0 = "TRUE"
            goto L9
        L7:
            java.lang.String r0 = "FALSE"
        L9:
            return r0
    }
}
