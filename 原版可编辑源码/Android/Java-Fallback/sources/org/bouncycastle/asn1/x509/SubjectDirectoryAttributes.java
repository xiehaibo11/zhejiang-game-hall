package org.bouncycastle.asn1.x509;

public class SubjectDirectoryAttributes extends org.bouncycastle.asn1.ASN1Encodable {
    private java.util.Vector attributes;

    public SubjectDirectoryAttributes(java.util.Vector r3) {
            r2 = this;
            r2.<init>()
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r2.attributes = r0
            java.util.Enumeration r3 = r3.elements()
        Le:
            boolean r0 = r3.hasMoreElements()
            if (r0 == 0) goto L1e
            java.util.Vector r0 = r2.attributes
            java.lang.Object r1 = r3.nextElement()
            r0.addElement(r1)
            goto Le
        L1e:
            return
    }

    public SubjectDirectoryAttributes(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r3.attributes = r0
            java.util.Enumeration r4 = r4.getObjects()
        Le:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L27
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            java.util.Vector r1 = r3.attributes
            org.bouncycastle.asn1.x509.Attribute r2 = new org.bouncycastle.asn1.x509.Attribute
            r2.<init>(r0)
            r1.addElement(r2)
            goto Le
        L27:
            return
    }

    public static org.bouncycastle.asn1.x509.SubjectDirectoryAttributes getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.SubjectDirectoryAttributes
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.SubjectDirectoryAttributes r0 = new org.bouncycastle.asn1.x509.SubjectDirectoryAttributes
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
            org.bouncycastle.asn1.x509.SubjectDirectoryAttributes r3 = (org.bouncycastle.asn1.x509.SubjectDirectoryAttributes) r3
            return r3
    }

    public java.util.Vector getAttributes() {
            r1 = this;
            java.util.Vector r0 = r1.attributes
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            java.util.Vector r1 = r3.attributes
            java.util.Enumeration r1 = r1.elements()
        Lb:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.nextElement()
            org.bouncycastle.asn1.x509.Attribute r2 = (org.bouncycastle.asn1.x509.Attribute) r2
            r0.add(r2)
            goto Lb
        L1b:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
