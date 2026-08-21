package org.bouncycastle.asn1.x509;

public class GeneralName extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    public static final int dNSName = 2;
    public static final int directoryName = 4;
    public static final int ediPartyName = 5;
    public static final int iPAddress = 7;
    public static final int otherName = 0;
    public static final int registeredID = 8;
    public static final int rfc822Name = 1;
    public static final int uniformResourceIdentifier = 6;
    public static final int x400Address = 3;
    org.bouncycastle.asn1.DEREncodable obj;
    int tag;

    public GeneralName(int r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            r2.tag = r3
            r0 = 1
            if (r3 == r0) goto L54
            r0 = 2
            if (r3 == r0) goto L54
            r0 = 6
            if (r3 != r0) goto Lf
            goto L54
        Lf:
            r0 = 8
            if (r3 != r0) goto L19
            org.bouncycastle.asn1.DERObjectIdentifier r3 = new org.bouncycastle.asn1.DERObjectIdentifier
            r3.<init>(r4)
            goto L59
        L19:
            r0 = 4
            if (r3 != r0) goto L22
            org.bouncycastle.asn1.x509.X509Name r3 = new org.bouncycastle.asn1.x509.X509Name
            r3.<init>(r4)
            goto L59
        L22:
            r0 = 7
            if (r3 != r0) goto L3d
            boolean r3 = org.bouncycastle.util.IPAddress.isValid(r4)
            if (r3 == 0) goto L35
            org.bouncycastle.asn1.DEROctetString r3 = new org.bouncycastle.asn1.DEROctetString
            byte[] r4 = org.bouncycastle.util.Strings.toUTF8ByteArray(r4)
            r3.<init>(r4)
            goto L59
        L35:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "IP Address is invalid"
            r3.<init>(r4)
            throw r3
        L3d:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "can't process String for tag: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        L54:
            org.bouncycastle.asn1.DERIA5String r3 = new org.bouncycastle.asn1.DERIA5String
            r3.<init>(r4)
        L59:
            r2.obj = r3
            return
    }

    public GeneralName(int r1, org.bouncycastle.asn1.ASN1Encodable r2) {
            r0 = this;
            r0.<init>()
            r0.obj = r2
            r0.tag = r1
            return
    }

    public GeneralName(org.bouncycastle.asn1.DERObject r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.obj = r1
            r0.tag = r2
            return
    }

    public GeneralName(org.bouncycastle.asn1.x509.X509Name r1) {
            r0 = this;
            r0.<init>()
            r0.obj = r1
            r1 = 4
            r0.tag = r1
            return
    }

    public static org.bouncycastle.asn1.x509.GeneralName getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L9f
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.GeneralName
            if (r0 == 0) goto L8
            goto L9f
        L8:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L80
            r0 = r3
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            r2 = 0
            switch(r1) {
                case 0: goto L76;
                case 1: goto L6c;
                case 2: goto L62;
                case 3: goto L4b;
                case 4: goto L40;
                case 5: goto L36;
                case 6: goto L2c;
                case 7: goto L22;
                case 8: goto L18;
                default: goto L17;
            }
        L17:
            goto L80
        L18:
            org.bouncycastle.asn1.x509.GeneralName r3 = new org.bouncycastle.asn1.x509.GeneralName
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r0, r2)
            r3.<init>(r1, r0)
            return r3
        L22:
            org.bouncycastle.asn1.x509.GeneralName r3 = new org.bouncycastle.asn1.x509.GeneralName
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0, r2)
            r3.<init>(r1, r0)
            return r3
        L2c:
            org.bouncycastle.asn1.x509.GeneralName r3 = new org.bouncycastle.asn1.x509.GeneralName
            org.bouncycastle.asn1.DERIA5String r0 = org.bouncycastle.asn1.DERIA5String.getInstance(r0, r2)
            r3.<init>(r1, r0)
            return r3
        L36:
            org.bouncycastle.asn1.x509.GeneralName r3 = new org.bouncycastle.asn1.x509.GeneralName
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r2)
            r3.<init>(r1, r0)
            return r3
        L40:
            org.bouncycastle.asn1.x509.GeneralName r3 = new org.bouncycastle.asn1.x509.GeneralName
            r2 = 1
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r2)
            r3.<init>(r1, r0)
            return r3
        L4b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "unknown tag: "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        L62:
            org.bouncycastle.asn1.x509.GeneralName r3 = new org.bouncycastle.asn1.x509.GeneralName
            org.bouncycastle.asn1.DERIA5String r0 = org.bouncycastle.asn1.DERIA5String.getInstance(r0, r2)
            r3.<init>(r1, r0)
            return r3
        L6c:
            org.bouncycastle.asn1.x509.GeneralName r3 = new org.bouncycastle.asn1.x509.GeneralName
            org.bouncycastle.asn1.DERIA5String r0 = org.bouncycastle.asn1.DERIA5String.getInstance(r0, r2)
            r3.<init>(r1, r0)
            return r3
        L76:
            org.bouncycastle.asn1.x509.GeneralName r3 = new org.bouncycastle.asn1.x509.GeneralName
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r2)
            r3.<init>(r1, r0)
            return r3
        L80:
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
        L9f:
            org.bouncycastle.asn1.x509.GeneralName r3 = (org.bouncycastle.asn1.x509.GeneralName) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.GeneralName getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            r1 = 1
            org.bouncycastle.asn1.ASN1TaggedObject r0 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.GeneralName r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.DEREncodable getName() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.obj
            return r0
    }

    public int getTagNo() {
            r1 = this;
            int r0 = r1.tag
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            int r0 = r4.tag
            r1 = 4
            if (r0 != r1) goto L10
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 1
            int r2 = r4.tag
            org.bouncycastle.asn1.DEREncodable r3 = r4.obj
            r0.<init>(r1, r2, r3)
            return r0
        L10:
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 0
            int r2 = r4.tag
            org.bouncycastle.asn1.DEREncodable r3 = r4.obj
            r0.<init>(r1, r2, r3)
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            int r1 = r3.tag
            r0.append(r1)
            java.lang.String r1 = ": "
            r0.append(r1)
            int r1 = r3.tag
            r2 = 1
            if (r1 == r2) goto L2f
            r2 = 2
            if (r1 == r2) goto L2f
            r2 = 4
            if (r1 == r2) goto L24
            r2 = 6
            if (r1 == r2) goto L2f
            org.bouncycastle.asn1.DEREncodable r1 = r3.obj
            java.lang.String r1 = r1.toString()
            goto L39
        L24:
            org.bouncycastle.asn1.DEREncodable r1 = r3.obj
            org.bouncycastle.asn1.x509.X509Name r1 = org.bouncycastle.asn1.x509.X509Name.getInstance(r1)
            java.lang.String r1 = r1.toString()
            goto L39
        L2f:
            org.bouncycastle.asn1.DEREncodable r1 = r3.obj
            org.bouncycastle.asn1.DERIA5String r1 = org.bouncycastle.asn1.DERIA5String.getInstance(r1)
            java.lang.String r1 = r1.getString()
        L39:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
