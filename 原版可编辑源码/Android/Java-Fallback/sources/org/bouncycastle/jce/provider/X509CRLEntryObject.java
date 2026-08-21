package org.bouncycastle.jce.provider;

public class X509CRLEntryObject extends java.security.cert.X509CRLEntry {
    private org.bouncycastle.asn1.x509.TBSCertList.CRLEntry c;
    private javax.security.auth.x500.X500Principal certificateIssuer;
    private int hashValue;
    private boolean isHashValueSet;
    private boolean isIndirect;
    private javax.security.auth.x500.X500Principal previousCertificateIssuer;

    public X509CRLEntryObject(org.bouncycastle.asn1.x509.TBSCertList.CRLEntry r1) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            javax.security.auth.x500.X500Principal r1 = r0.loadCertificateIssuer()
            r0.certificateIssuer = r1
            return
    }

    public X509CRLEntryObject(org.bouncycastle.asn1.x509.TBSCertList.CRLEntry r1, boolean r2, javax.security.auth.x500.X500Principal r3) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.isIndirect = r2
            r0.previousCertificateIssuer = r3
            javax.security.auth.x500.X500Principal r1 = r0.loadCertificateIssuer()
            r0.certificateIssuer = r1
            return
    }

    private java.util.Set getExtensionOIDs(boolean r6) {
            r5 = this;
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry r0 = r5.c
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getExtensions()
            if (r0 == 0) goto L30
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            java.util.Enumeration r2 = r0.oids()
        L11:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L2f
            java.lang.Object r3 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            org.bouncycastle.asn1.x509.X509Extension r4 = r0.getExtension(r3)
            boolean r4 = r4.isCritical()
            if (r6 != r4) goto L11
            java.lang.String r3 = r3.getId()
            r1.add(r3)
            goto L11
        L2f:
            return r1
        L30:
            r6 = 0
            return r6
    }

    private javax.security.auth.x500.X500Principal loadCertificateIssuer() {
            r5 = this;
            boolean r0 = r5.isIndirect
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.CertificateIssuer
            java.lang.String r0 = r0.getId()
            byte[] r0 = r5.getExtensionValue(r0)
            if (r0 != 0) goto L15
            javax.security.auth.x500.X500Principal r0 = r5.previousCertificateIssuer
            return r0
        L15:
            org.bouncycastle.asn1.ASN1Object r0 = org.bouncycastle.x509.extension.X509ExtensionUtil.fromExtensionValue(r0)     // Catch: java.io.IOException -> L45
            org.bouncycastle.asn1.x509.GeneralNames r0 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r0)     // Catch: java.io.IOException -> L45
            org.bouncycastle.asn1.x509.GeneralName[] r0 = r0.getNames()     // Catch: java.io.IOException -> L45
            r2 = 0
        L22:
            int r3 = r0.length     // Catch: java.io.IOException -> L45
            if (r2 >= r3) goto L45
            r3 = r0[r2]     // Catch: java.io.IOException -> L45
            int r3 = r3.getTagNo()     // Catch: java.io.IOException -> L45
            r4 = 4
            if (r3 != r4) goto L42
            javax.security.auth.x500.X500Principal r3 = new javax.security.auth.x500.X500Principal     // Catch: java.io.IOException -> L45
            r0 = r0[r2]     // Catch: java.io.IOException -> L45
            org.bouncycastle.asn1.DEREncodable r0 = r0.getName()     // Catch: java.io.IOException -> L45
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()     // Catch: java.io.IOException -> L45
            byte[] r0 = r0.getDEREncoded()     // Catch: java.io.IOException -> L45
            r3.<init>(r0)     // Catch: java.io.IOException -> L45
            return r3
        L42:
            int r2 = r2 + 1
            goto L22
        L45:
            return r1
    }

    @Override
    public javax.security.auth.x500.X500Principal getCertificateIssuer() {
            r1 = this;
            javax.security.auth.x500.X500Principal r0 = r1.certificateIssuer
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
    public byte[] getEncoded() throws java.security.cert.CRLException {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry r2 = r3.c     // Catch: java.io.IOException -> L14
            r1.writeObject(r2)     // Catch: java.io.IOException -> L14
            byte[] r0 = r0.toByteArray()     // Catch: java.io.IOException -> L14
            return r0
        L14:
            r0 = move-exception
            java.security.cert.CRLException r1 = new java.security.cert.CRLException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    public byte[] getExtensionValue(java.lang.String r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry r0 = r3.c
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getExtensions()
            if (r0 == 0) goto L38
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r4)
            org.bouncycastle.asn1.x509.X509Extension r4 = r0.getExtension(r1)
            if (r4 == 0) goto L38
            org.bouncycastle.asn1.ASN1OctetString r4 = r4.getValue()     // Catch: java.lang.Exception -> L1c
            byte[] r4 = r4.getEncoded()     // Catch: java.lang.Exception -> L1c
            return r4
        L1c:
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
        L38:
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

    @Override
    public java.util.Date getRevocationDate() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry r0 = r1.c
            org.bouncycastle.asn1.x509.Time r0 = r0.getRevocationDate()
            java.util.Date r0 = r0.getDate()
            return r0
    }

    @Override
    public java.math.BigInteger getSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry r0 = r1.c
            org.bouncycastle.asn1.DERInteger r0 = r0.getUserCertificate()
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    @Override
    public boolean hasExtensions() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry r0 = r1.c
            org.bouncycastle.asn1.x509.X509Extensions r0 = r0.getExtensions()
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
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
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    @Override
    public int hashCode() {
            r1 = this;
            boolean r0 = r1.isHashValueSet
            if (r0 != 0) goto Ld
            int r0 = super.hashCode()
            r1.hashValue = r0
            r0 = 1
            r1.isHashValueSet = r0
        Ld:
            int r0 = r1.hashValue
            return r0
    }

    @Override
    public java.lang.String toString() {
            r9 = this;
            java.lang.String r0 = " value = "
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            java.lang.String r2 = "line.separator"
            java.lang.String r2 = java.lang.System.getProperty(r2)
            java.lang.String r3 = "      userCertificate: "
            r1.append(r3)
            java.math.BigInteger r3 = r9.getSerialNumber()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = "       revocationDate: "
            r1.append(r3)
            java.util.Date r3 = r9.getRevocationDate()
            r1.append(r3)
            r1.append(r2)
            java.lang.String r3 = "       certificateIssuer: "
            r1.append(r3)
            javax.security.auth.x500.X500Principal r3 = r9.getCertificateIssuer()
            r1.append(r3)
            r1.append(r2)
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry r3 = r9.c
            org.bouncycastle.asn1.x509.X509Extensions r3 = r3.getExtensions()
            if (r3 == 0) goto Le1
            java.util.Enumeration r4 = r3.oids()
            boolean r5 = r4.hasMoreElements()
            if (r5 == 0) goto Le1
            java.lang.String r5 = "   crlEntryExtensions:"
        L4e:
            r1.append(r5)
        L51:
            r1.append(r2)
        L54:
            boolean r5 = r4.hasMoreElements()
            if (r5 == 0) goto Le1
            java.lang.Object r5 = r4.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r5 = (org.bouncycastle.asn1.DERObjectIdentifier) r5
            org.bouncycastle.asn1.x509.X509Extension r6 = r3.getExtension(r5)
            org.bouncycastle.asn1.ASN1OctetString r7 = r6.getValue()
            if (r7 == 0) goto L51
            org.bouncycastle.asn1.ASN1OctetString r7 = r6.getValue()
            byte[] r7 = r7.getOctets()
            org.bouncycastle.asn1.ASN1InputStream r8 = new org.bouncycastle.asn1.ASN1InputStream
            r8.<init>(r7)
            java.lang.String r7 = "                       critical("
            r1.append(r7)
            boolean r6 = r6.isCritical()
            r1.append(r6)
            java.lang.String r6 = ") "
            r1.append(r6)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.x509.X509Extensions.ReasonCode     // Catch: java.lang.Exception -> Ld3
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> Ld3
            if (r6 == 0) goto La4
            org.bouncycastle.asn1.x509.CRLReason r6 = new org.bouncycastle.asn1.x509.CRLReason     // Catch: java.lang.Exception -> Ld3
            org.bouncycastle.asn1.DERObject r7 = r8.readObject()     // Catch: java.lang.Exception -> Ld3
            org.bouncycastle.asn1.DEREnumerated r7 = org.bouncycastle.asn1.DEREnumerated.getInstance(r7)     // Catch: java.lang.Exception -> Ld3
            r6.<init>(r7)     // Catch: java.lang.Exception -> Ld3
        L9d:
            r1.append(r6)     // Catch: java.lang.Exception -> Ld3
        La0:
            r1.append(r2)     // Catch: java.lang.Exception -> Ld3
            goto L54
        La4:
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.x509.X509Extensions.CertificateIssuer     // Catch: java.lang.Exception -> Ld3
            boolean r6 = r5.equals(r6)     // Catch: java.lang.Exception -> Ld3
            if (r6 == 0) goto Lbd
            java.lang.String r6 = "Certificate issuer: "
            r1.append(r6)     // Catch: java.lang.Exception -> Ld3
            org.bouncycastle.asn1.x509.GeneralNames r6 = new org.bouncycastle.asn1.x509.GeneralNames     // Catch: java.lang.Exception -> Ld3
            org.bouncycastle.asn1.DERObject r7 = r8.readObject()     // Catch: java.lang.Exception -> Ld3
            org.bouncycastle.asn1.ASN1Sequence r7 = (org.bouncycastle.asn1.ASN1Sequence) r7     // Catch: java.lang.Exception -> Ld3
            r6.<init>(r7)     // Catch: java.lang.Exception -> Ld3
            goto L9d
        Lbd:
            java.lang.String r6 = r5.getId()     // Catch: java.lang.Exception -> Ld3
            r1.append(r6)     // Catch: java.lang.Exception -> Ld3
            r1.append(r0)     // Catch: java.lang.Exception -> Ld3
            org.bouncycastle.asn1.DERObject r6 = r8.readObject()     // Catch: java.lang.Exception -> Ld3
            java.lang.String r6 = org.bouncycastle.asn1.util.ASN1Dump.dumpAsString(r6)     // Catch: java.lang.Exception -> Ld3
            r1.append(r6)     // Catch: java.lang.Exception -> Ld3
            goto La0
        Ld3:
            java.lang.String r5 = r5.getId()
            r1.append(r5)
            r1.append(r0)
            java.lang.String r5 = "*****"
            goto L4e
        Le1:
            java.lang.String r0 = r1.toString()
            return r0
    }
}
