package org.bouncycastle.x509;

public class X509AttributeCertStoreSelector implements org.bouncycastle.util.Selector {
    private org.bouncycastle.x509.X509AttributeCertificate attributeCert;
    private java.util.Date attributeCertificateValid;
    private org.bouncycastle.x509.AttributeCertificateHolder holder;
    private org.bouncycastle.x509.AttributeCertificateIssuer issuer;
    private java.math.BigInteger serialNumber;
    private java.util.Collection targetGroups;
    private java.util.Collection targetNames;

    public X509AttributeCertStoreSelector() {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.targetNames = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.targetGroups = r0
            return
    }

    private java.util.Set extractGeneralNames(java.util.Collection r4) throws java.io.IOException {
            r3 = this;
            if (r4 == 0) goto L32
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L9
            goto L32
        L9:
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        L12:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L31
            java.lang.Object r1 = r4.next()
            boolean r2 = r1 instanceof org.bouncycastle.asn1.x509.GeneralName
            if (r2 == 0) goto L21
            goto L2d
        L21:
            byte[] r1 = (byte[]) r1
            byte[] r1 = (byte[]) r1
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r1)
            org.bouncycastle.asn1.x509.GeneralName r1 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r1)
        L2d:
            r0.add(r1)
            goto L12
        L31:
            return r0
        L32:
            java.util.HashSet r4 = new java.util.HashSet
            r4.<init>()
            return r4
    }

    public void addTargetGroup(org.bouncycastle.asn1.x509.GeneralName r2) {
            r1 = this;
            java.util.Collection r0 = r1.targetGroups
            r0.add(r2)
            return
    }

    public void addTargetGroup(byte[] r1) throws java.io.IOException {
            r0 = this;
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r1)
            org.bouncycastle.asn1.x509.GeneralName r1 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r1)
            r0.addTargetGroup(r1)
            return
    }

    public void addTargetName(org.bouncycastle.asn1.x509.GeneralName r2) {
            r1 = this;
            java.util.Collection r0 = r1.targetNames
            r0.add(r2)
            return
    }

    public void addTargetName(byte[] r1) throws java.io.IOException {
            r0 = this;
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r1)
            org.bouncycastle.asn1.x509.GeneralName r1 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r1)
            r0.addTargetName(r1)
            return
    }

    @Override
    public java.lang.Object clone() {
            r2 = this;
            org.bouncycastle.x509.X509AttributeCertStoreSelector r0 = new org.bouncycastle.x509.X509AttributeCertStoreSelector
            r0.<init>()
            org.bouncycastle.x509.X509AttributeCertificate r1 = r2.attributeCert
            r0.attributeCert = r1
            java.util.Date r1 = r2.getAttributeCertificateValid()
            r0.attributeCertificateValid = r1
            org.bouncycastle.x509.AttributeCertificateHolder r1 = r2.holder
            r0.holder = r1
            org.bouncycastle.x509.AttributeCertificateIssuer r1 = r2.issuer
            r0.issuer = r1
            java.math.BigInteger r1 = r2.serialNumber
            r0.serialNumber = r1
            java.util.Collection r1 = r2.getTargetGroups()
            r0.targetGroups = r1
            java.util.Collection r1 = r2.getTargetNames()
            r0.targetNames = r1
            return r0
    }

    public org.bouncycastle.x509.X509AttributeCertificate getAttributeCert() {
            r1 = this;
            org.bouncycastle.x509.X509AttributeCertificate r0 = r1.attributeCert
            return r0
    }

    public java.util.Date getAttributeCertificateValid() {
            r3 = this;
            java.util.Date r0 = r3.attributeCertificateValid
            if (r0 == 0) goto L10
            java.util.Date r0 = new java.util.Date
            java.util.Date r1 = r3.attributeCertificateValid
            long r1 = r1.getTime()
            r0.<init>(r1)
            return r0
        L10:
            r0 = 0
            return r0
    }

    public org.bouncycastle.x509.AttributeCertificateHolder getHolder() {
            r1 = this;
            org.bouncycastle.x509.AttributeCertificateHolder r0 = r1.holder
            return r0
    }

    public org.bouncycastle.x509.AttributeCertificateIssuer getIssuer() {
            r1 = this;
            org.bouncycastle.x509.AttributeCertificateIssuer r0 = r1.issuer
            return r0
    }

    public java.math.BigInteger getSerialNumber() {
            r1 = this;
            java.math.BigInteger r0 = r1.serialNumber
            return r0
    }

    public java.util.Collection getTargetGroups() {
            r1 = this;
            java.util.Collection r0 = r1.targetGroups
            java.util.Collection r0 = java.util.Collections.unmodifiableCollection(r0)
            return r0
    }

    public java.util.Collection getTargetNames() {
            r1 = this;
            java.util.Collection r0 = r1.targetNames
            java.util.Collection r0 = java.util.Collections.unmodifiableCollection(r0)
            return r0
    }

    @Override
    public boolean match(java.lang.Object r9) {
            r8 = this;
            boolean r0 = r9 instanceof org.bouncycastle.x509.X509AttributeCertificate
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.x509.X509AttributeCertificate r9 = (org.bouncycastle.x509.X509AttributeCertificate) r9
            org.bouncycastle.x509.X509AttributeCertificate r0 = r8.attributeCert
            if (r0 == 0) goto L13
            boolean r0 = r0.equals(r9)
            if (r0 != 0) goto L13
            return r1
        L13:
            java.math.BigInteger r0 = r8.serialNumber
            if (r0 == 0) goto L24
            java.math.BigInteger r0 = r9.getSerialNumber()
            java.math.BigInteger r2 = r8.serialNumber
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L24
            return r1
        L24:
            org.bouncycastle.x509.AttributeCertificateHolder r0 = r8.holder
            if (r0 == 0) goto L35
            org.bouncycastle.x509.AttributeCertificateHolder r0 = r9.getHolder()
            org.bouncycastle.x509.AttributeCertificateHolder r2 = r8.holder
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L35
            return r1
        L35:
            org.bouncycastle.x509.AttributeCertificateIssuer r0 = r8.issuer
            if (r0 == 0) goto L46
            org.bouncycastle.x509.AttributeCertificateIssuer r0 = r9.getIssuer()
            org.bouncycastle.x509.AttributeCertificateIssuer r2 = r8.issuer
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L46
            return r1
        L46:
            java.util.Date r0 = r8.attributeCertificateValid
            if (r0 == 0) goto L4f
            r9.checkValidity(r0)     // Catch: java.lang.Throwable -> L4e
            goto L4f
        L4e:
            return r1
        L4f:
            java.util.Collection r0 = r8.targetNames
            boolean r0 = r0.isEmpty()
            r2 = 1
            if (r0 == 0) goto L60
            java.util.Collection r0 = r8.targetGroups
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Le7
        L60:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.TargetInformation
            java.lang.String r0 = r0.getId()
            byte[] r9 = r9.getExtensionValue(r0)
            if (r9 == 0) goto Le7
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Throwable -> Le6
            org.bouncycastle.asn1.ASN1Object r9 = org.bouncycastle.asn1.DEROctetString.fromByteArray(r9)     // Catch: java.lang.Throwable -> Le6
            org.bouncycastle.asn1.DEROctetString r9 = (org.bouncycastle.asn1.DEROctetString) r9     // Catch: java.lang.Throwable -> Le6
            byte[] r9 = r9.getOctets()     // Catch: java.lang.Throwable -> Le6
            r0.<init>(r9)     // Catch: java.lang.Throwable -> Le6
            org.bouncycastle.asn1.DERObject r9 = r0.readObject()     // Catch: java.lang.Throwable -> Le6
            org.bouncycastle.asn1.x509.TargetInformation r9 = org.bouncycastle.asn1.x509.TargetInformation.getInstance(r9)     // Catch: java.lang.Throwable -> Le6
            org.bouncycastle.asn1.x509.Targets[] r9 = r9.getTargetsObjects()
            java.util.Collection r0 = r8.targetNames
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Lb7
            r0 = 0
            r3 = 0
        L91:
            int r4 = r9.length
            if (r0 >= r4) goto Lb4
            r4 = r9[r0]
            org.bouncycastle.asn1.x509.Target[] r4 = r4.getTargets()
            r5 = 0
        L9b:
            int r6 = r4.length
            if (r5 >= r6) goto Lb1
            java.util.Collection r6 = r8.targetNames
            r7 = r4[r5]
            org.bouncycastle.asn1.x509.GeneralName r7 = r7.getTargetName()
            boolean r6 = r6.contains(r7)
            if (r6 == 0) goto Lae
            r3 = 1
            goto Lb1
        Lae:
            int r5 = r5 + 1
            goto L9b
        Lb1:
            int r0 = r0 + 1
            goto L91
        Lb4:
            if (r3 != 0) goto Lb7
            return r1
        Lb7:
            java.util.Collection r0 = r8.targetGroups
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Le7
            r0 = 0
            r3 = 0
        Lc1:
            int r4 = r9.length
            if (r0 >= r4) goto Le4
            r4 = r9[r0]
            org.bouncycastle.asn1.x509.Target[] r4 = r4.getTargets()
            r5 = 0
        Lcb:
            int r6 = r4.length
            if (r5 >= r6) goto Le1
            java.util.Collection r6 = r8.targetGroups
            r7 = r4[r5]
            org.bouncycastle.asn1.x509.GeneralName r7 = r7.getTargetGroup()
            boolean r6 = r6.contains(r7)
            if (r6 == 0) goto Lde
            r3 = 1
            goto Le1
        Lde:
            int r5 = r5 + 1
            goto Lcb
        Le1:
            int r0 = r0 + 1
            goto Lc1
        Le4:
            if (r3 != 0) goto Le7
        Le6:
            return r1
        Le7:
            return r2
    }

    public void setAttributeCert(org.bouncycastle.x509.X509AttributeCertificate r1) {
            r0 = this;
            r0.attributeCert = r1
            return
    }

    public void setAttributeCertificateValid(java.util.Date r4) {
            r3 = this;
            if (r4 == 0) goto Le
            java.util.Date r0 = new java.util.Date
            long r1 = r4.getTime()
            r0.<init>(r1)
            r3.attributeCertificateValid = r0
            goto L11
        Le:
            r4 = 0
            r3.attributeCertificateValid = r4
        L11:
            return
    }

    public void setHolder(org.bouncycastle.x509.AttributeCertificateHolder r1) {
            r0 = this;
            r0.holder = r1
            return
    }

    public void setIssuer(org.bouncycastle.x509.AttributeCertificateIssuer r1) {
            r0 = this;
            r0.issuer = r1
            return
    }

    public void setSerialNumber(java.math.BigInteger r1) {
            r0 = this;
            r0.serialNumber = r1
            return
    }

    public void setTargetGroups(java.util.Collection r1) throws java.io.IOException {
            r0 = this;
            java.util.Set r1 = r0.extractGeneralNames(r1)
            r0.targetGroups = r1
            return
    }

    public void setTargetNames(java.util.Collection r1) throws java.io.IOException {
            r0 = this;
            java.util.Set r1 = r0.extractGeneralNames(r1)
            r0.targetNames = r1
            return
    }
}
