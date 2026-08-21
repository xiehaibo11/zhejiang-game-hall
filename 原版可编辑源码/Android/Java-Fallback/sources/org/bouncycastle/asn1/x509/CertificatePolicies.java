package org.bouncycastle.asn1.x509;

public class CertificatePolicies extends org.bouncycastle.asn1.ASN1Encodable {
    static final org.bouncycastle.asn1.DERObjectIdentifier anyPolicy = null;
    java.util.Vector policies;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "2.5.29.32.0"
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.CertificatePolicies.anyPolicy = r0
            return
    }

    public CertificatePolicies(java.lang.String r2) {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    public CertificatePolicies(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r3.policies = r0
            java.util.Enumeration r4 = r4.getObjects()
        Le:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L27
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            java.util.Vector r1 = r3.policies
            r2 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectAt(r2)
            r1.addElement(r0)
            goto Le
        L27:
            return
    }

    public CertificatePolicies(org.bouncycastle.asn1.DERObjectIdentifier r2) {
            r1 = this;
            r1.<init>()
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r1.policies = r0
            r0.addElement(r2)
            return
    }

    public static org.bouncycastle.asn1.x509.CertificatePolicies getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.CertificatePolicies
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.CertificatePolicies r3 = (org.bouncycastle.asn1.x509.CertificatePolicies) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.CertificatePolicies r0 = new org.bouncycastle.asn1.x509.CertificatePolicies
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static org.bouncycastle.asn1.x509.CertificatePolicies getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.CertificatePolicies r0 = getInstance(r0)
            return r0
    }

    public void addPolicy(java.lang.String r3) {
            r2 = this;
            java.util.Vector r0 = r2.policies
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r3)
            r0.addElement(r1)
            return
    }

    public java.lang.String getPolicy(int r2) {
            r1 = this;
            java.util.Vector r0 = r1.policies
            int r0 = r0.size()
            if (r0 <= r2) goto L15
            java.util.Vector r0 = r1.policies
            java.lang.Object r2 = r0.elementAt(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = (org.bouncycastle.asn1.DERObjectIdentifier) r2
            java.lang.String r2 = r2.getId()
            return r2
        L15:
            r2 = 0
            return r2
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r1 = 0
        L6:
            java.util.Vector r2 = r4.policies
            int r2 = r2.size()
            if (r1 >= r2) goto L21
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            java.util.Vector r3 = r4.policies
            java.lang.Object r3 = r3.elementAt(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            r2.<init>(r3)
            r0.add(r2)
            int r1 = r1 + 1
            goto L6
        L21:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }

    public java.lang.String toString() {
            r3 = this;
            r0 = 0
            r1 = 0
        L2:
            java.util.Vector r2 = r3.policies
            int r2 = r2.size()
            if (r1 >= r2) goto L3b
            if (r0 == 0) goto L1d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = ", "
            r2.append(r0)
            java.lang.String r0 = r2.toString()
        L1d:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.util.Vector r0 = r3.policies
            java.lang.Object r0 = r0.elementAt(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            java.lang.String r0 = r0.getId()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            int r1 = r1 + 1
            goto L2
        L3b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "CertificatePolicies: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }
}
