package org.bouncycastle.asn1.x500;

public class DirectoryString extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice, org.bouncycastle.asn1.DERString {
    private org.bouncycastle.asn1.DERString string;

    public DirectoryString(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERUTF8String r0 = new org.bouncycastle.asn1.DERUTF8String
            r0.<init>(r2)
            r1.string = r0
            return
    }

    private DirectoryString(org.bouncycastle.asn1.DERBMPString r1) {
            r0 = this;
            r0.<init>()
            r0.string = r1
            return
    }

    private DirectoryString(org.bouncycastle.asn1.DERPrintableString r1) {
            r0 = this;
            r0.<init>()
            r0.string = r1
            return
    }

    private DirectoryString(org.bouncycastle.asn1.DERT61String r1) {
            r0 = this;
            r0.<init>()
            r0.string = r1
            return
    }

    private DirectoryString(org.bouncycastle.asn1.DERUTF8String r1) {
            r0 = this;
            r0.<init>()
            r0.string = r1
            return
    }

    private DirectoryString(org.bouncycastle.asn1.DERUniversalString r1) {
            r0 = this;
            r0.<init>()
            r0.string = r1
            return
    }

    public static org.bouncycastle.asn1.x500.DirectoryString getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x500.DirectoryString
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x500.DirectoryString r3 = (org.bouncycastle.asn1.x500.DirectoryString) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERT61String
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x500.DirectoryString r0 = new org.bouncycastle.asn1.x500.DirectoryString
            org.bouncycastle.asn1.DERT61String r3 = (org.bouncycastle.asn1.DERT61String) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERPrintableString
            if (r0 == 0) goto L1f
            org.bouncycastle.asn1.x500.DirectoryString r0 = new org.bouncycastle.asn1.x500.DirectoryString
            org.bouncycastle.asn1.DERPrintableString r3 = (org.bouncycastle.asn1.DERPrintableString) r3
            r0.<init>(r3)
            return r0
        L1f:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERUniversalString
            if (r0 == 0) goto L2b
            org.bouncycastle.asn1.x500.DirectoryString r0 = new org.bouncycastle.asn1.x500.DirectoryString
            org.bouncycastle.asn1.DERUniversalString r3 = (org.bouncycastle.asn1.DERUniversalString) r3
            r0.<init>(r3)
            return r0
        L2b:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERUTF8String
            if (r0 == 0) goto L37
            org.bouncycastle.asn1.x500.DirectoryString r0 = new org.bouncycastle.asn1.x500.DirectoryString
            org.bouncycastle.asn1.DERUTF8String r3 = (org.bouncycastle.asn1.DERUTF8String) r3
            r0.<init>(r3)
            return r0
        L37:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERBMPString
            if (r0 == 0) goto L43
            org.bouncycastle.asn1.x500.DirectoryString r0 = new org.bouncycastle.asn1.x500.DirectoryString
            org.bouncycastle.asn1.DERBMPString r3 = (org.bouncycastle.asn1.DERBMPString) r3
            r0.<init>(r3)
            return r0
        L43:
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
    }

    public static org.bouncycastle.asn1.x500.DirectoryString getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            if (r1 == 0) goto Lb
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.x500.DirectoryString r0 = getInstance(r0)
            return r0
        Lb:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "choice item must be explicitly tagged"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public java.lang.String getString() {
            r1 = this;
            org.bouncycastle.asn1.DERString r0 = r1.string
            java.lang.String r0 = r0.getString()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.DERString r0 = r1.string
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            org.bouncycastle.asn1.DERString r0 = r1.string
            java.lang.String r0 = r0.getString()
            return r0
    }
}
