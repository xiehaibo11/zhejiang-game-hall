package org.bouncycastle.asn1.x509;

public class ExtendedKeyUsage extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1Sequence seq;
    java.util.Hashtable usageTable;

    public ExtendedKeyUsage(java.util.Vector r4) {
            r3 = this;
            r3.<init>()
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r3.usageTable = r0
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            java.util.Enumeration r4 = r4.elements()
        L13:
            boolean r1 = r4.hasMoreElements()
            if (r1 == 0) goto L28
            java.lang.Object r1 = r4.nextElement()
            org.bouncycastle.asn1.DERObject r1 = (org.bouncycastle.asn1.DERObject) r1
            r0.add(r1)
            java.util.Hashtable r2 = r3.usageTable
            r2.put(r1, r1)
            goto L13
        L28:
            org.bouncycastle.asn1.DERSequence r4 = new org.bouncycastle.asn1.DERSequence
            r4.<init>(r0)
            r3.seq = r4
            return
    }

    public ExtendedKeyUsage(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r2.usageTable = r0
            r2.seq = r3
            java.util.Enumeration r3 = r3.getObjects()
        L10:
            boolean r0 = r3.hasMoreElements()
            if (r0 == 0) goto L2c
            java.lang.Object r0 = r3.nextElement()
            boolean r1 = r0 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r1 == 0) goto L24
            java.util.Hashtable r1 = r2.usageTable
            r1.put(r0, r0)
            goto L10
        L24:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Only DERObjectIdentifiers allowed in ExtendedKeyUsage."
            r3.<init>(r0)
            throw r3
        L2c:
            return
    }

    public ExtendedKeyUsage(org.bouncycastle.asn1.x509.KeyPurposeId r2) {
            r1 = this;
            r1.<init>()
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r1.usageTable = r0
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence
            r0.<init>(r2)
            r1.seq = r0
            java.util.Hashtable r0 = r1.usageTable
            r0.put(r2, r2)
            return
    }

    public static org.bouncycastle.asn1.x509.ExtendedKeyUsage getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.ExtendedKeyUsage
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.ExtendedKeyUsage r3 = (org.bouncycastle.asn1.x509.ExtendedKeyUsage) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.ExtendedKeyUsage r0 = new org.bouncycastle.asn1.x509.ExtendedKeyUsage
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.X509Extension
            if (r0 == 0) goto L22
            org.bouncycastle.asn1.x509.X509Extension r3 = (org.bouncycastle.asn1.x509.X509Extension) r3
            org.bouncycastle.asn1.ASN1Object r3 = org.bouncycastle.asn1.x509.X509Extension.convertValueToObject(r3)
            org.bouncycastle.asn1.x509.ExtendedKeyUsage r3 = getInstance(r3)
            return r3
        L22:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid ExtendedKeyUsage: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static org.bouncycastle.asn1.x509.ExtendedKeyUsage getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.ExtendedKeyUsage r0 = getInstance(r0)
            return r0
    }

    public java.util.Vector getUsages() {
            r3 = this;
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            java.util.Hashtable r1 = r3.usageTable
            java.util.Enumeration r1 = r1.elements()
        Lb:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L19
            java.lang.Object r2 = r1.nextElement()
            r0.addElement(r2)
            goto Lb
        L19:
            return r0
    }

    public boolean hasKeyPurposeId(org.bouncycastle.asn1.x509.KeyPurposeId r2) {
            r1 = this;
            java.util.Hashtable r0 = r1.usageTable
            java.lang.Object r2 = r0.get(r2)
            if (r2 == 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    public int size() {
            r1 = this;
            java.util.Hashtable r0 = r1.usageTable
            int r0 = r0.size()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.seq
            return r0
    }
}
