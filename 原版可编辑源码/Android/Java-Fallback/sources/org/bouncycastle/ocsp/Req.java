package org.bouncycastle.ocsp;

public class Req implements java.security.cert.X509Extension {
    private org.bouncycastle.asn1.ocsp.Request req;

    public Req(org.bouncycastle.asn1.ocsp.Request r1) {
            r0 = this;
            r0.<init>()
            r0.req = r1
            return
    }

    private java.util.Set getExtensionOIDs(boolean r6) {
            r5 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.asn1.x509.X509Extensions r1 = r5.getSingleRequestExtensions()
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
            org.bouncycastle.asn1.ocsp.Request r1 = r2.req
            org.bouncycastle.asn1.ocsp.CertID r1 = r1.getReqCert()
            r0.<init>(r1)
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
            org.bouncycastle.asn1.x509.X509Extensions r0 = r3.getSingleRequestExtensions()
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

    @Override
    public java.util.Set getNonCriticalExtensionOIDs() {
            r1 = this;
            r0 = 0
            java.util.Set r0 = r1.getExtensionOIDs(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getSingleRequestExtensions() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.Request r0 = r1.req
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getSingleRequestExtensions()
            return r0
    }

    @Override
    public boolean hasUnsupportedCriticalExtension() {
            r1 = this;
            java.util.Set r0 = r1.getCriticalExtensionOIDs()
            if (r0 == 0) goto Le
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Le
            r0 = 1
            return r0
        Le:
            r0 = 0
            return r0
    }
}
