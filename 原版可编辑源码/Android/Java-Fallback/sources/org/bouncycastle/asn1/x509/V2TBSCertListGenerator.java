package org.bouncycastle.asn1.x509;

public class V2TBSCertListGenerator {
    private java.util.Vector crlentries;
    org.bouncycastle.asn1.x509.X509Extensions extensions;
    org.bouncycastle.asn1.x509.X509Name issuer;
    org.bouncycastle.asn1.x509.Time nextUpdate;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier signature;
    org.bouncycastle.asn1.x509.Time thisUpdate;
    org.bouncycastle.asn1.DERInteger version;

    public V2TBSCertListGenerator() {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 1
            r0.<init>(r1)
            r2.version = r0
            r0 = 0
            r2.nextUpdate = r0
            r2.extensions = r0
            r2.crlentries = r0
            return
    }

    public void addCRLEntry(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            java.util.Vector r0 = r1.crlentries
            if (r0 != 0) goto Lb
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            r1.crlentries = r0
        Lb:
            java.util.Vector r0 = r1.crlentries
            r0.addElement(r2)
            return
    }

    public void addCRLEntry(org.bouncycastle.asn1.DERInteger r2, org.bouncycastle.asn1.DERUTCTime r3, int r4) {
            r1 = this;
            org.bouncycastle.asn1.x509.Time r0 = new org.bouncycastle.asn1.x509.Time
            r0.<init>(r3)
            r1.addCRLEntry(r2, r0, r4)
            return
    }

    public void addCRLEntry(org.bouncycastle.asn1.DERInteger r2, org.bouncycastle.asn1.x509.Time r3, int r4) {
            r1 = this;
            r0 = 0
            r1.addCRLEntry(r2, r3, r4, r0)
            return
    }

    public void addCRLEntry(org.bouncycastle.asn1.DERInteger r6, org.bouncycastle.asn1.x509.Time r7, int r8, org.bouncycastle.asn1.DERGeneralizedTime r9) {
            r5 = this;
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            java.util.Vector r1 = new java.util.Vector
            r1.<init>()
            r2 = 0
            if (r8 == 0) goto L41
            org.bouncycastle.asn1.x509.CRLReason r3 = new org.bouncycastle.asn1.x509.CRLReason
            r3.<init>(r8)
            org.bouncycastle.asn1.DERObjectIdentifier r8 = org.bouncycastle.asn1.x509.X509Extensions.ReasonCode     // Catch: java.io.IOException -> L29
            r0.addElement(r8)     // Catch: java.io.IOException -> L29
            org.bouncycastle.asn1.x509.X509Extension r8 = new org.bouncycastle.asn1.x509.X509Extension     // Catch: java.io.IOException -> L29
            org.bouncycastle.asn1.DEROctetString r4 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.io.IOException -> L29
            byte[] r3 = r3.getEncoded()     // Catch: java.io.IOException -> L29
            r4.<init>(r3)     // Catch: java.io.IOException -> L29
            r8.<init>(r2, r4)     // Catch: java.io.IOException -> L29
            r1.addElement(r8)     // Catch: java.io.IOException -> L29
            goto L41
        L29:
            r6 = move-exception
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "error encoding reason: "
            r8.append(r9)
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            r7.<init>(r6)
            throw r7
        L41:
            if (r9 == 0) goto L72
            org.bouncycastle.asn1.DERObjectIdentifier r8 = org.bouncycastle.asn1.x509.X509Extensions.InvalidityDate     // Catch: java.io.IOException -> L5a
            r0.addElement(r8)     // Catch: java.io.IOException -> L5a
            org.bouncycastle.asn1.x509.X509Extension r8 = new org.bouncycastle.asn1.x509.X509Extension     // Catch: java.io.IOException -> L5a
            org.bouncycastle.asn1.DEROctetString r3 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.io.IOException -> L5a
            byte[] r9 = r9.getEncoded()     // Catch: java.io.IOException -> L5a
            r3.<init>(r9)     // Catch: java.io.IOException -> L5a
            r8.<init>(r2, r3)     // Catch: java.io.IOException -> L5a
            r1.addElement(r8)     // Catch: java.io.IOException -> L5a
            goto L72
        L5a:
            r6 = move-exception
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "error encoding invalidityDate: "
            r8.append(r9)
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            r7.<init>(r6)
            throw r7
        L72:
            int r8 = r0.size()
            if (r8 == 0) goto L7e
            org.bouncycastle.asn1.x509.X509Extensions r8 = new org.bouncycastle.asn1.x509.X509Extensions
            r8.<init>(r0, r1)
            goto L7f
        L7e:
            r8 = 0
        L7f:
            r5.addCRLEntry(r6, r7, r8)
            return
    }

    public void addCRLEntry(org.bouncycastle.asn1.DERInteger r2, org.bouncycastle.asn1.x509.Time r3, org.bouncycastle.asn1.x509.X509Extensions r4) {
            r1 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r0.add(r2)
            r0.add(r3)
            if (r4 == 0) goto L10
            r0.add(r4)
        L10:
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r0)
            r1.addCRLEntry(r2)
            return
    }

    public org.bouncycastle.asn1.x509.TBSCertList generateTBSCertList() {
            r4 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r4.signature
            if (r0 == 0) goto L6d
            org.bouncycastle.asn1.x509.X509Name r0 = r4.issuer
            if (r0 == 0) goto L6d
            org.bouncycastle.asn1.x509.Time r0 = r4.thisUpdate
            if (r0 == 0) goto L6d
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r4.version
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r4.signature
            r0.add(r1)
            org.bouncycastle.asn1.x509.X509Name r1 = r4.issuer
            r0.add(r1)
            org.bouncycastle.asn1.x509.Time r1 = r4.thisUpdate
            r0.add(r1)
            org.bouncycastle.asn1.x509.Time r1 = r4.nextUpdate
            if (r1 == 0) goto L2c
            r0.add(r1)
        L2c:
            java.util.Vector r1 = r4.crlentries
            if (r1 == 0) goto L53
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            java.util.Vector r2 = r4.crlentries
            java.util.Enumeration r2 = r2.elements()
        L3b:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L4b
            java.lang.Object r3 = r2.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r1.add(r3)
            goto L3b
        L4b:
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r1)
            r0.add(r2)
        L53:
            org.bouncycastle.asn1.x509.X509Extensions r1 = r4.extensions
            if (r1 == 0) goto L62
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 0
            org.bouncycastle.asn1.x509.X509Extensions r3 = r4.extensions
            r1.<init>(r2, r3)
            r0.add(r1)
        L62:
            org.bouncycastle.asn1.x509.TBSCertList r1 = new org.bouncycastle.asn1.x509.TBSCertList
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r0)
            r1.<init>(r2)
            return r1
        L6d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Not all mandatory fields set in V2 TBSCertList generator."
            r0.<init>(r1)
            throw r0
    }

    public void setExtensions(org.bouncycastle.asn1.x509.X509Extensions r1) {
            r0 = this;
            r0.extensions = r1
            return
    }

    public void setIssuer(org.bouncycastle.asn1.x509.X509Name r1) {
            r0 = this;
            r0.issuer = r1
            return
    }

    public void setNextUpdate(org.bouncycastle.asn1.DERUTCTime r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.Time r0 = new org.bouncycastle.asn1.x509.Time
            r0.<init>(r2)
            r1.nextUpdate = r0
            return
    }

    public void setNextUpdate(org.bouncycastle.asn1.x509.Time r1) {
            r0 = this;
            r0.nextUpdate = r1
            return
    }

    public void setSignature(org.bouncycastle.asn1.x509.AlgorithmIdentifier r1) {
            r0 = this;
            r0.signature = r1
            return
    }

    public void setThisUpdate(org.bouncycastle.asn1.DERUTCTime r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.Time r0 = new org.bouncycastle.asn1.x509.Time
            r0.<init>(r2)
            r1.thisUpdate = r0
            return
    }

    public void setThisUpdate(org.bouncycastle.asn1.x509.Time r1) {
            r0 = this;
            r0.thisUpdate = r1
            return
    }
}
