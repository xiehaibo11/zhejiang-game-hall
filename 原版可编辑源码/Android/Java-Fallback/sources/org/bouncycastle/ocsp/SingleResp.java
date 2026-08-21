package org.bouncycastle.ocsp;

public class SingleResp implements java.security.cert.X509Extension {
    org.bouncycastle.asn1.ocsp.SingleResponse resp;

    public SingleResp(org.bouncycastle.asn1.ocsp.SingleResponse r1) {
            r0 = this;
            r0.<init>()
            r0.resp = r1
            return
    }

    private java.util.Set getExtensionOIDs(boolean r6) {
            r5 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.asn1.x509.X509Extensions r1 = r5.getSingleExtensions()
            if (r1 == 0) goto L2d
            java.util.Enumeration r2 = r1.oids()
        Lf:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L2d
            java.lang.Object r3 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            org.bouncycastle.asn1.x509.X509Extension r4 = r1.getExtension(r3)
            boolean r4 = r4.isCritical()
            if (r6 != r4) goto Lf
            java.lang.String r3 = r3.getId()
            r0.add(r3)
            goto Lf
        L2d:
            return r0
    }

    public org.bouncycastle.ocsp.CertificateID getCertID() {
            r2 = this;
            org.bouncycastle.ocsp.CertificateID r0 = new org.bouncycastle.ocsp.CertificateID
            org.bouncycastle.asn1.ocsp.SingleResponse r1 = r2.resp
            org.bouncycastle.asn1.ocsp.CertID r1 = r1.getCertID()
            r0.<init>(r1)
            return r0
    }

    public java.lang.Object getCertStatus() {
            r3 = this;
            org.bouncycastle.asn1.ocsp.SingleResponse r0 = r3.resp
            org.bouncycastle.asn1.ocsp.CertStatus r0 = r0.getCertStatus()
            int r1 = r0.getTagNo()
            if (r1 != 0) goto Le
            r0 = 0
            return r0
        Le:
            int r1 = r0.getTagNo()
            r2 = 1
            if (r1 != r2) goto L23
            org.bouncycastle.ocsp.RevokedStatus r1 = new org.bouncycastle.ocsp.RevokedStatus
            org.bouncycastle.asn1.DEREncodable r0 = r0.getStatus()
            org.bouncycastle.asn1.ocsp.RevokedInfo r0 = org.bouncycastle.asn1.ocsp.RevokedInfo.getInstance(r0)
            r1.<init>(r0)
            return r1
        L23:
            org.bouncycastle.ocsp.UnknownStatus r0 = new org.bouncycastle.ocsp.UnknownStatus
            r0.<init>()
            return r0
    }

    @Override
    public java.util.Set getCriticalExtensionOIDs() {
            r1 = this;
            r0 = 1
            java.util.Set r0 = r1.getExtensionOIDs(r0)
            return r0
    }

    @Override
    public byte[] getExtensionValue(java.lang.String r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r3.getSingleExtensions()
            if (r0 == 0) goto L43
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r4)
            org.bouncycastle.asn1.x509.X509Extension r4 = r0.getExtension(r1)
            if (r4 == 0) goto L43
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            org.bouncycastle.asn1.ASN1OctetString r4 = r4.getValue()     // Catch: java.lang.Exception -> L27
            r1.writeObject(r4)     // Catch: java.lang.Exception -> L27
            byte[] r4 = r0.toByteArray()     // Catch: java.lang.Exception -> L27
            return r4
        L27:
            r4 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "error encoding "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L43:
            r4 = 0
            return r4
    }

    public java.util.Date getNextUpdate() {
            r4 = this;
            org.bouncycastle.asn1.ocsp.SingleResponse r0 = r4.resp
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r0.getNextUpdate()
            if (r0 != 0) goto La
            r0 = 0
            return r0
        La:
            org.bouncycastle.asn1.ocsp.SingleResponse r0 = r4.resp     // Catch: java.text.ParseException -> L15
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r0.getNextUpdate()     // Catch: java.text.ParseException -> L15
            java.util.Date r0 = r0.getDate()     // Catch: java.text.ParseException -> L15
            return r0
        L15:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "ParseException: "
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public java.util.Set getNonCriticalExtensionOIDs() {
            r1 = this;
            r0 = 0
            java.util.Set r0 = r1.getExtensionOIDs(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getSingleExtensions() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.SingleResponse r0 = r1.resp
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getSingleExtensions()
            return r0
    }

    public java.util.Date getThisUpdate() {
            r4 = this;
            org.bouncycastle.asn1.ocsp.SingleResponse r0 = r4.resp     // Catch: java.text.ParseException -> Lb
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r0.getThisUpdate()     // Catch: java.text.ParseException -> Lb
            java.util.Date r0 = r0.getDate()     // Catch: java.text.ParseException -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "ParseException: "
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public boolean hasUnsupportedCriticalExtension() {
            r1 = this;
            java.util.Set r0 = r1.getCriticalExtensionOIDs()
            if (r0 == 0) goto Le
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }
}
