package org.bouncycastle.asn1.x509;

public class GeneralNames extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1Sequence seq;

    public GeneralNames(org.bouncycastle.asn1.ASN1Sequence r1) {
            r0 = this;
            r0.<init>()
            r0.seq = r1
            return
    }

    public GeneralNames(org.bouncycastle.asn1.x509.GeneralName r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence
            r0.<init>(r2)
            r1.seq = r0
            return
    }

    public static org.bouncycastle.asn1.x509.GeneralNames getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.GeneralNames
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.GeneralNames r0 = new org.bouncycastle.asn1.x509.GeneralNames
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
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
        L32:
            org.bouncycastle.asn1.x509.GeneralNames r3 = (org.bouncycastle.asn1.x509.GeneralNames) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.GeneralNames getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.GeneralNames r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralName[] getNames() {
            r3 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r3.seq
            int r0 = r0.size()
            org.bouncycastle.asn1.x509.GeneralName[] r0 = new org.bouncycastle.asn1.x509.GeneralName[r0]
            r1 = 0
        L9:
            org.bouncycastle.asn1.ASN1Sequence r2 = r3.seq
            int r2 = r2.size()
            if (r1 == r2) goto L20
            org.bouncycastle.asn1.ASN1Sequence r2 = r3.seq
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r1)
            org.bouncycastle.asn1.x509.GeneralName r2 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L9
        L20:
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.seq
            return r0
    }

    public java.lang.String toString() {
            r5 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "line.separator"
            java.lang.String r1 = java.lang.System.getProperty(r1)
            org.bouncycastle.asn1.x509.GeneralName[] r2 = r5.getNames()
            java.lang.String r3 = "GeneralNames:"
            r0.append(r3)
            r0.append(r1)
            r3 = 0
        L18:
            int r4 = r2.length
            if (r3 == r4) goto L2b
            java.lang.String r4 = "    "
            r0.append(r4)
            r4 = r2[r3]
            r0.append(r4)
            r0.append(r1)
            int r3 = r3 + 1
            goto L18
        L2b:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
