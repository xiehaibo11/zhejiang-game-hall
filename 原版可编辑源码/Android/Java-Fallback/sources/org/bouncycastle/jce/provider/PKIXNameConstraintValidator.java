package org.bouncycastle.jce.provider;

public class PKIXNameConstraintValidator {
    private java.util.Set excludedSubtreesDN;
    private java.util.Set excludedSubtreesDNS;
    private java.util.Set excludedSubtreesEmail;
    private java.util.Set excludedSubtreesIP;
    private java.util.Set excludedSubtreesURI;
    private java.util.Set permittedSubtreesDN;
    private java.util.Set permittedSubtreesDNS;
    private java.util.Set permittedSubtreesEmail;
    private java.util.Set permittedSubtreesIP;
    private java.util.Set permittedSubtreesURI;

    public PKIXNameConstraintValidator() {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.excludedSubtreesDN = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.excludedSubtreesDNS = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.excludedSubtreesEmail = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.excludedSubtreesURI = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.excludedSubtreesIP = r0
            return
    }

    private void checkExcludedDN(java.util.Set r2, org.bouncycastle.asn1.ASN1Sequence r3) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r1 = this;
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Iterator r2 = r2.iterator()
        Lb:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L26
            java.lang.Object r0 = r2.next()
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0
            boolean r0 = withinDNSubtree(r3, r0)
            if (r0 != 0) goto L1e
            goto Lb
        L1e:
            org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException r2 = new org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException
            java.lang.String r3 = "Subject distinguished name is from an excluded subtree"
            r2.<init>(r3)
            throw r2
        L26:
            return
    }

    private void checkExcludedDNS(java.util.Set r3, java.lang.String r4) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r2 = this;
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Iterator r3 = r3.iterator()
        Lb:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L2c
            java.lang.Object r0 = r3.next()
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = r2.withinDomain(r4, r0)
            if (r1 != 0) goto L24
            boolean r0 = r4.equalsIgnoreCase(r0)
            if (r0 != 0) goto L24
            goto Lb
        L24:
            org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException r3 = new org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException
            java.lang.String r4 = "DNS is from an excluded subtree."
            r3.<init>(r4)
            throw r3
        L2c:
            return
    }

    private void checkExcludedEmail(java.util.Set r2, java.lang.String r3) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r1 = this;
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Iterator r2 = r2.iterator()
        Lb:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L26
            java.lang.Object r0 = r2.next()
            java.lang.String r0 = (java.lang.String) r0
            boolean r0 = r1.emailIsConstrained(r3, r0)
            if (r0 != 0) goto L1e
            goto Lb
        L1e:
            org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException r2 = new org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException
            java.lang.String r3 = "Email address is from an excluded subtree."
            r2.<init>(r3)
            throw r2
        L26:
            return
    }

    private void checkExcludedIP(java.util.Set r2, byte[] r3) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r1 = this;
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Iterator r2 = r2.iterator()
        Lb:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L28
            java.lang.Object r0 = r2.next()
            byte[] r0 = (byte[]) r0
            byte[] r0 = (byte[]) r0
            boolean r0 = r1.isIPConstrained(r3, r0)
            if (r0 != 0) goto L20
            goto Lb
        L20:
            org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException r2 = new org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException
            java.lang.String r3 = "IP is from an excluded subtree."
            r2.<init>(r3)
            throw r2
        L28:
            return
    }

    private void checkExcludedURI(java.util.Set r2, java.lang.String r3) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r1 = this;
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Iterator r2 = r2.iterator()
        Lb:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L26
            java.lang.Object r0 = r2.next()
            java.lang.String r0 = (java.lang.String) r0
            boolean r0 = r1.isUriConstrained(r3, r0)
            if (r0 != 0) goto L1e
            goto Lb
        L1e:
            org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException r2 = new org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException
            java.lang.String r3 = "URI is from an excluded subtree."
            r2.<init>(r3)
            throw r2
        L26:
            return
    }

    private void checkPermittedDN(java.util.Set r2, org.bouncycastle.asn1.ASN1Sequence r3) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto L10
            int r0 = r3.size()
            if (r0 != 0) goto L10
            return
        L10:
            java.util.Iterator r2 = r2.iterator()
        L14:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L27
            java.lang.Object r0 = r2.next()
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0
            boolean r0 = withinDNSubtree(r3, r0)
            if (r0 == 0) goto L14
            return
        L27:
            org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException r2 = new org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException
            java.lang.String r3 = "Subject distinguished name is not from a permitted subtree"
            r2.<init>(r3)
            throw r2
    }

    private void checkPermittedDNS(java.util.Set r4, java.lang.String r5) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.util.Iterator r0 = r4.iterator()
        L7:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = r3.withinDomain(r5, r1)
            if (r2 != 0) goto L1f
            boolean r1 = r5.equalsIgnoreCase(r1)
            if (r1 == 0) goto L7
        L1f:
            return
        L20:
            int r5 = r5.length()
            if (r5 != 0) goto L2d
            int r4 = r4.size()
            if (r4 != 0) goto L2d
            return
        L2d:
            org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException r4 = new org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException
            java.lang.String r5 = "DNS is not from a permitted subtree."
            r4.<init>(r5)
            throw r4
    }

    private void checkPermittedEmail(java.util.Set r3, java.lang.String r4) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.util.Iterator r0 = r3.iterator()
        L7:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = r2.emailIsConstrained(r4, r1)
            if (r1 == 0) goto L7
            return
        L1a:
            int r4 = r4.length()
            if (r4 != 0) goto L27
            int r3 = r3.size()
            if (r3 != 0) goto L27
            return
        L27:
            org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException r3 = new org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException
            java.lang.String r4 = "Subject email address is not from a permitted subtree."
            r3.<init>(r4)
            throw r3
    }

    private void checkPermittedIP(java.util.Set r3, byte[] r4) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.util.Iterator r0 = r3.iterator()
        L7:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            byte[] r1 = (byte[]) r1
            byte[] r1 = (byte[]) r1
            boolean r1 = r2.isIPConstrained(r4, r1)
            if (r1 == 0) goto L7
            return
        L1c:
            int r4 = r4.length
            if (r4 != 0) goto L26
            int r3 = r3.size()
            if (r3 != 0) goto L26
            return
        L26:
            org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException r3 = new org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException
            java.lang.String r4 = "IP is not from a permitted subtree."
            r3.<init>(r4)
            throw r3
    }

    private void checkPermittedURI(java.util.Set r3, java.lang.String r4) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.util.Iterator r0 = r3.iterator()
        L7:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = r2.isUriConstrained(r4, r1)
            if (r1 == 0) goto L7
            return
        L1a:
            int r4 = r4.length()
            if (r4 != 0) goto L27
            int r3 = r3.size()
            if (r3 != 0) goto L27
            return
        L27:
            org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException r3 = new org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException
            java.lang.String r4 = "URI is not from a permitted subtree."
            r3.<init>(r4)
            throw r3
    }

    private boolean collectionsAreEqual(java.util.Collection r6, java.util.Collection r7) {
            r5 = this;
            r0 = 1
            if (r6 != r7) goto L4
            return r0
        L4:
            r1 = 0
            if (r6 == 0) goto L3e
            if (r7 != 0) goto La
            goto L3e
        La:
            int r2 = r6.size()
            int r3 = r7.size()
            if (r2 == r3) goto L15
            return r1
        L15:
            java.util.Iterator r6 = r6.iterator()
        L19:
            boolean r2 = r6.hasNext()
            if (r2 == 0) goto L3d
            java.lang.Object r2 = r6.next()
            java.util.Iterator r3 = r7.iterator()
        L27:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L39
            java.lang.Object r4 = r3.next()
            boolean r4 = r5.equals(r2, r4)
            if (r4 == 0) goto L27
            r2 = 1
            goto L3a
        L39:
            r2 = 0
        L3a:
            if (r2 != 0) goto L19
            return r1
        L3d:
            return r0
        L3e:
            return r1
    }

    private static int compareTo(byte[] r1, byte[] r2) {
            boolean r0 = org.bouncycastle.util.Arrays.areEqual(r1, r2)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            byte[] r2 = max(r1, r2)
            boolean r1 = org.bouncycastle.util.Arrays.areEqual(r2, r1)
            if (r1 == 0) goto L14
            r1 = 1
            return r1
        L14:
            r1 = -1
            return r1
    }

    private boolean emailIsConstrained(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            r0 = 64
            int r1 = r6.indexOf(r0)
            r2 = 1
            int r1 = r1 + r2
            java.lang.String r1 = r6.substring(r1)
            int r0 = r7.indexOf(r0)
            r3 = 0
            r4 = -1
            if (r0 == r4) goto L1b
            boolean r6 = r6.equalsIgnoreCase(r7)
            if (r6 == 0) goto L31
            return r2
        L1b:
            char r6 = r7.charAt(r3)
            r0 = 46
            if (r6 == r0) goto L2a
            boolean r6 = r1.equalsIgnoreCase(r7)
            if (r6 == 0) goto L31
            return r2
        L2a:
            boolean r6 = r5.withinDomain(r1, r7)
            if (r6 == 0) goto L31
            return r2
        L31:
            return r3
    }

    private boolean equals(java.lang.Object r2, java.lang.Object r3) {
            r1 = this;
            if (r2 != r3) goto L4
            r2 = 1
            return r2
        L4:
            if (r2 == 0) goto L23
            if (r3 != 0) goto L9
            goto L23
        L9:
            boolean r0 = r2 instanceof byte[]
            if (r0 == 0) goto L1e
            boolean r0 = r3 instanceof byte[]
            if (r0 == 0) goto L1e
            byte[] r2 = (byte[]) r2
            byte[] r2 = (byte[]) r2
            byte[] r3 = (byte[]) r3
            byte[] r3 = (byte[]) r3
            boolean r2 = org.bouncycastle.util.Arrays.areEqual(r2, r3)
            return r2
        L1e:
            boolean r2 = r2.equals(r3)
            return r2
        L23:
            r2 = 0
            return r2
    }

    private static java.lang.String extractHostFromURL(java.lang.String r4) {
            r0 = 58
            int r1 = r4.indexOf(r0)
            int r1 = r1 + 1
            java.lang.String r4 = r4.substring(r1)
            java.lang.String r1 = "//"
            int r2 = r4.indexOf(r1)
            r3 = -1
            if (r2 == r3) goto L1f
            int r1 = r4.indexOf(r1)
            int r1 = r1 + 2
            java.lang.String r4 = r4.substring(r1)
        L1f:
            int r1 = r4.lastIndexOf(r0)
            r2 = 0
            if (r1 == r3) goto L2e
            int r1 = r4.lastIndexOf(r0)
            java.lang.String r4 = r4.substring(r2, r1)
        L2e:
            int r0 = r4.indexOf(r0)
            int r0 = r0 + 1
            java.lang.String r4 = r4.substring(r0)
            r0 = 64
            int r0 = r4.indexOf(r0)
            int r0 = r0 + 1
            java.lang.String r4 = r4.substring(r0)
            r0 = 47
            int r1 = r4.indexOf(r0)
            if (r1 == r3) goto L54
            int r0 = r4.indexOf(r0)
            java.lang.String r4 = r4.substring(r2, r0)
        L54:
            return r4
    }

    private byte[][] extractIPsAndSubnetMasks(byte[] r7, byte[] r8) {
            r6 = this;
            int r0 = r7.length
            r1 = 2
            int r0 = r0 / r1
            byte[] r2 = new byte[r0]
            byte[] r3 = new byte[r0]
            r4 = 0
            java.lang.System.arraycopy(r7, r4, r2, r4, r0)
            java.lang.System.arraycopy(r7, r0, r3, r4, r0)
            byte[] r7 = new byte[r0]
            byte[] r5 = new byte[r0]
            java.lang.System.arraycopy(r8, r4, r7, r4, r0)
            java.lang.System.arraycopy(r8, r0, r5, r4, r0)
            r8 = 4
            byte[][] r8 = new byte[r8][]
            r8[r4] = r2
            r0 = 1
            r8[r0] = r3
            r8[r1] = r7
            r7 = 3
            r8[r7] = r5
            return r8
    }

    private java.lang.String extractNameAsString(org.bouncycastle.asn1.x509.GeneralName r1) {
            r0 = this;
            org.bouncycastle.asn1.DEREncodable r1 = r1.getName()
            org.bouncycastle.asn1.DERIA5String r1 = org.bouncycastle.asn1.DERIA5String.getInstance(r1)
            java.lang.String r1 = r1.getString()
            return r1
    }

    private int hashCollection(java.util.Collection r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.util.Iterator r4 = r4.iterator()
        L8:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L25
            java.lang.Object r1 = r4.next()
            boolean r2 = r1 instanceof byte[]
            if (r2 == 0) goto L1f
            byte[] r1 = (byte[]) r1
            byte[] r1 = (byte[]) r1
            int r1 = org.bouncycastle.util.Arrays.hashCode(r1)
            goto L23
        L1f:
            int r1 = r1.hashCode()
        L23:
            int r0 = r0 + r1
            goto L8
        L25:
            return r0
    }

    private java.util.Set intersectDN(java.util.Set r6, java.util.Set r7) {
            r5 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r7 = r7.iterator()
        L9:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto L51
            java.lang.Object r1 = r7.next()
            org.bouncycastle.asn1.x509.GeneralSubtree r1 = (org.bouncycastle.asn1.x509.GeneralSubtree) r1
            org.bouncycastle.asn1.x509.GeneralName r1 = r1.getBase()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getName()
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1)
            if (r6 != 0) goto L2d
            if (r1 == 0) goto L9
            r0.add(r1)
            goto L9
        L2d:
            java.util.Iterator r2 = r6.iterator()
        L31:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L9
            java.lang.Object r3 = r2.next()
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            boolean r4 = withinDNSubtree(r1, r3)
            if (r4 == 0) goto L47
            r0.add(r1)
            goto L31
        L47:
            boolean r4 = withinDNSubtree(r3, r1)
            if (r4 == 0) goto L31
            r0.add(r3)
            goto L31
        L51:
            return r0
    }

    private java.util.Set intersectDNS(java.util.Set r6, java.util.Set r7) {
            r5 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r7 = r7.iterator()
        L9:
            boolean r1 = r7.hasNext()
            if (r1 == 0) goto L49
            java.lang.Object r1 = r7.next()
            org.bouncycastle.asn1.x509.GeneralSubtree r1 = (org.bouncycastle.asn1.x509.GeneralSubtree) r1
            org.bouncycastle.asn1.x509.GeneralName r1 = r1.getBase()
            java.lang.String r1 = r5.extractNameAsString(r1)
            if (r6 != 0) goto L25
            if (r1 == 0) goto L9
            r0.add(r1)
            goto L9
        L25:
            java.util.Iterator r2 = r6.iterator()
        L29:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L9
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = r5.withinDomain(r3, r1)
            if (r4 == 0) goto L3f
            r0.add(r3)
            goto L29
        L3f:
            boolean r3 = r5.withinDomain(r1, r3)
            if (r3 == 0) goto L29
            r0.add(r1)
            goto L29
        L49:
            return r0
    }

    private java.util.Set intersectEmail(java.util.Set r5, java.util.Set r6) {
            r4 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r6 = r6.iterator()
        L9:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L39
            java.lang.Object r1 = r6.next()
            org.bouncycastle.asn1.x509.GeneralSubtree r1 = (org.bouncycastle.asn1.x509.GeneralSubtree) r1
            org.bouncycastle.asn1.x509.GeneralName r1 = r1.getBase()
            java.lang.String r1 = r4.extractNameAsString(r1)
            if (r5 != 0) goto L25
            if (r1 == 0) goto L9
            r0.add(r1)
            goto L9
        L25:
            java.util.Iterator r2 = r5.iterator()
        L29:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L9
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            r4.intersectEmail(r1, r3, r0)
            goto L29
        L39:
            return r0
    }

    private void intersectEmail(java.lang.String r5, java.lang.String r6, java.util.Set r7) {
            r4 = this;
            r0 = 64
            int r1 = r5.indexOf(r0)
            java.lang.String r2 = "."
            r3 = -1
            if (r1 == r3) goto L39
            int r1 = r5.indexOf(r0)
            int r1 = r1 + 1
            java.lang.String r1 = r5.substring(r1)
            int r0 = r6.indexOf(r0)
            if (r0 == r3) goto L23
            boolean r6 = r5.equalsIgnoreCase(r6)
            if (r6 == 0) goto La7
            goto La4
        L23:
            boolean r0 = r6.startsWith(r2)
            if (r0 == 0) goto L31
            boolean r6 = r4.withinDomain(r1, r6)
            if (r6 == 0) goto La7
            goto La4
        L31:
            boolean r6 = r1.equalsIgnoreCase(r6)
            if (r6 == 0) goto La7
            goto La4
        L39:
            boolean r1 = r5.startsWith(r2)
            if (r1 == 0) goto L7a
            int r1 = r6.indexOf(r0)
            if (r1 == r3) goto L56
            int r0 = r5.indexOf(r0)
            int r0 = r0 + 1
            java.lang.String r0 = r6.substring(r0)
            boolean r5 = r4.withinDomain(r0, r5)
            if (r5 == 0) goto La7
        L55:
            goto L76
        L56:
            boolean r0 = r6.startsWith(r2)
            if (r0 == 0) goto L70
            boolean r0 = r4.withinDomain(r5, r6)
            if (r0 != 0) goto La4
            boolean r0 = r5.equalsIgnoreCase(r6)
            if (r0 == 0) goto L69
            goto La4
        L69:
            boolean r5 = r4.withinDomain(r6, r5)
            if (r5 == 0) goto La7
            goto L76
        L70:
            boolean r5 = r4.withinDomain(r6, r5)
            if (r5 == 0) goto La7
        L76:
            r7.add(r6)
            goto La7
        L7a:
            int r1 = r6.indexOf(r0)
            if (r1 == r3) goto L91
            int r0 = r6.indexOf(r0)
            int r0 = r0 + 1
            java.lang.String r0 = r6.substring(r0)
            boolean r5 = r0.equalsIgnoreCase(r5)
            if (r5 == 0) goto La7
            goto L55
        L91:
            boolean r0 = r6.startsWith(r2)
            if (r0 == 0) goto L9e
            boolean r6 = r4.withinDomain(r5, r6)
            if (r6 == 0) goto La7
            goto La4
        L9e:
            boolean r6 = r5.equalsIgnoreCase(r6)
            if (r6 == 0) goto La7
        La4:
            r7.add(r5)
        La7:
            return
    }

    private java.util.Set intersectIP(java.util.Set r5, java.util.Set r6) {
            r4 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r6 = r6.iterator()
        L9:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L47
            java.lang.Object r1 = r6.next()
            org.bouncycastle.asn1.x509.GeneralSubtree r1 = (org.bouncycastle.asn1.x509.GeneralSubtree) r1
            org.bouncycastle.asn1.x509.GeneralName r1 = r1.getBase()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getName()
            org.bouncycastle.asn1.ASN1OctetString r1 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r1)
            byte[] r1 = r1.getOctets()
            if (r5 != 0) goto L2d
            if (r1 == 0) goto L9
            r0.add(r1)
            goto L9
        L2d:
            java.util.Iterator r2 = r5.iterator()
        L31:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L9
            java.lang.Object r3 = r2.next()
            byte[] r3 = (byte[]) r3
            byte[] r3 = (byte[]) r3
            java.util.Set r3 = r4.intersectIPRange(r3, r1)
            r0.addAll(r3)
            goto L31
        L47:
            return r0
    }

    private java.util.Set intersectIPRange(byte[] r8, byte[] r9) {
            r7 = this;
            int r0 = r8.length
            int r1 = r9.length
            if (r0 == r1) goto L7
            java.util.Set r8 = java.util.Collections.EMPTY_SET
            return r8
        L7:
            byte[][] r8 = r7.extractIPsAndSubnetMasks(r8, r9)
            r9 = 0
            r0 = r8[r9]
            r1 = 1
            r2 = r8[r1]
            r3 = 2
            r4 = r8[r3]
            r5 = 3
            r8 = r8[r5]
            byte[][] r0 = r7.minMaxIPs(r0, r2, r4, r8)
            r4 = r0[r1]
            r5 = r0[r5]
            byte[] r4 = min(r4, r5)
            r5 = r0[r9]
            r6 = r0[r3]
            byte[] r5 = max(r5, r6)
            int r4 = compareTo(r5, r4)
            if (r4 != r1) goto L34
            java.util.Set r8 = java.util.Collections.EMPTY_SET
            return r8
        L34:
            r9 = r0[r9]
            r0 = r0[r3]
            byte[] r9 = or(r9, r0)
            byte[] r8 = or(r2, r8)
            byte[] r8 = r7.ipWithSubnetMask(r9, r8)
            java.util.Set r8 = java.util.Collections.singleton(r8)
            return r8
    }

    private java.util.Set intersectURI(java.util.Set r5, java.util.Set r6) {
            r4 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r6 = r6.iterator()
        L9:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L39
            java.lang.Object r1 = r6.next()
            org.bouncycastle.asn1.x509.GeneralSubtree r1 = (org.bouncycastle.asn1.x509.GeneralSubtree) r1
            org.bouncycastle.asn1.x509.GeneralName r1 = r1.getBase()
            java.lang.String r1 = r4.extractNameAsString(r1)
            if (r5 != 0) goto L25
            if (r1 == 0) goto L9
            r0.add(r1)
            goto L9
        L25:
            java.util.Iterator r2 = r5.iterator()
        L29:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L9
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            r4.intersectURI(r3, r1, r0)
            goto L29
        L39:
            return r0
    }

    private void intersectURI(java.lang.String r5, java.lang.String r6, java.util.Set r7) {
            r4 = this;
            r0 = 64
            int r1 = r5.indexOf(r0)
            java.lang.String r2 = "."
            r3 = -1
            if (r1 == r3) goto L39
            int r1 = r5.indexOf(r0)
            int r1 = r1 + 1
            java.lang.String r1 = r5.substring(r1)
            int r0 = r6.indexOf(r0)
            if (r0 == r3) goto L23
            boolean r6 = r5.equalsIgnoreCase(r6)
            if (r6 == 0) goto La7
            goto La4
        L23:
            boolean r0 = r6.startsWith(r2)
            if (r0 == 0) goto L31
            boolean r6 = r4.withinDomain(r1, r6)
            if (r6 == 0) goto La7
            goto La4
        L31:
            boolean r6 = r1.equalsIgnoreCase(r6)
            if (r6 == 0) goto La7
            goto La4
        L39:
            boolean r1 = r5.startsWith(r2)
            if (r1 == 0) goto L7a
            int r1 = r6.indexOf(r0)
            if (r1 == r3) goto L56
            int r0 = r5.indexOf(r0)
            int r0 = r0 + 1
            java.lang.String r0 = r6.substring(r0)
            boolean r5 = r4.withinDomain(r0, r5)
            if (r5 == 0) goto La7
        L55:
            goto L76
        L56:
            boolean r0 = r6.startsWith(r2)
            if (r0 == 0) goto L70
            boolean r0 = r4.withinDomain(r5, r6)
            if (r0 != 0) goto La4
            boolean r0 = r5.equalsIgnoreCase(r6)
            if (r0 == 0) goto L69
            goto La4
        L69:
            boolean r5 = r4.withinDomain(r6, r5)
            if (r5 == 0) goto La7
            goto L76
        L70:
            boolean r5 = r4.withinDomain(r6, r5)
            if (r5 == 0) goto La7
        L76:
            r7.add(r6)
            goto La7
        L7a:
            int r1 = r6.indexOf(r0)
            if (r1 == r3) goto L91
            int r0 = r6.indexOf(r0)
            int r0 = r0 + 1
            java.lang.String r0 = r6.substring(r0)
            boolean r5 = r0.equalsIgnoreCase(r5)
            if (r5 == 0) goto La7
            goto L55
        L91:
            boolean r0 = r6.startsWith(r2)
            if (r0 == 0) goto L9e
            boolean r6 = r4.withinDomain(r5, r6)
            if (r6 == 0) goto La7
            goto La4
        L9e:
            boolean r6 = r5.equalsIgnoreCase(r6)
            if (r6 == 0) goto La7
        La4:
            r7.add(r5)
        La7:
            return
    }

    private byte[] ipWithSubnetMask(byte[] r4, byte[] r5) {
            r3 = this;
            int r0 = r4.length
            int r1 = r0 * 2
            byte[] r1 = new byte[r1]
            r2 = 0
            java.lang.System.arraycopy(r4, r2, r1, r2, r0)
            java.lang.System.arraycopy(r5, r2, r1, r0, r0)
            return r1
    }

    private boolean isIPConstrained(byte[] r8, byte[] r9) {
            r7 = this;
            int r0 = r8.length
            int r1 = r9.length
            int r1 = r1 / 2
            r2 = 0
            if (r0 == r1) goto L8
            return r2
        L8:
            byte[] r1 = new byte[r0]
            java.lang.System.arraycopy(r9, r0, r1, r2, r0)
            byte[] r3 = new byte[r0]
            byte[] r4 = new byte[r0]
        L11:
            if (r2 >= r0) goto L26
            r5 = r9[r2]
            r6 = r1[r2]
            r5 = r5 & r6
            byte r5 = (byte) r5
            r3[r2] = r5
            r5 = r8[r2]
            r6 = r1[r2]
            r5 = r5 & r6
            byte r5 = (byte) r5
            r4[r2] = r5
            int r2 = r2 + 1
            goto L11
        L26:
            boolean r8 = org.bouncycastle.util.Arrays.areEqual(r3, r4)
            return r8
    }

    private boolean isUriConstrained(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r3 = extractHostFromURL(r3)
            java.lang.String r0 = "."
            boolean r0 = r4.startsWith(r0)
            r1 = 1
            if (r0 != 0) goto L14
            boolean r3 = r3.equalsIgnoreCase(r4)
            if (r3 == 0) goto L1b
            return r1
        L14:
            boolean r3 = r2.withinDomain(r3, r4)
            if (r3 == 0) goto L1b
            return r1
        L1b:
            r3 = 0
            return r3
    }

    private static byte[] max(byte[] r4, byte[] r5) {
            r0 = 0
        L1:
            int r1 = r4.length
            if (r0 >= r1) goto L13
            r1 = r4[r0]
            r2 = 65535(0xffff, float:9.1834E-41)
            r1 = r1 & r2
            r3 = r5[r0]
            r2 = r2 & r3
            if (r1 <= r2) goto L10
            return r4
        L10:
            int r0 = r0 + 1
            goto L1
        L13:
            return r5
    }

    private static byte[] min(byte[] r4, byte[] r5) {
            r0 = 0
        L1:
            int r1 = r4.length
            if (r0 >= r1) goto L13
            r1 = r4[r0]
            r2 = 65535(0xffff, float:9.1834E-41)
            r1 = r1 & r2
            r3 = r5[r0]
            r2 = r2 & r3
            if (r1 >= r2) goto L10
            return r4
        L10:
            int r0 = r0 + 1
            goto L1
        L13:
            return r5
    }

    private byte[][] minMaxIPs(byte[] r10, byte[] r11, byte[] r12, byte[] r13) {
            r9 = this;
            int r0 = r10.length
            byte[] r1 = new byte[r0]
            byte[] r2 = new byte[r0]
            byte[] r3 = new byte[r0]
            byte[] r4 = new byte[r0]
            r5 = 0
            r6 = 0
        Lb:
            if (r6 >= r0) goto L38
            r7 = r10[r6]
            r8 = r11[r6]
            r7 = r7 & r8
            byte r7 = (byte) r7
            r1[r6] = r7
            r7 = r10[r6]
            r8 = r11[r6]
            r7 = r7 & r8
            r8 = r11[r6]
            int r8 = ~r8
            r7 = r7 | r8
            byte r7 = (byte) r7
            r2[r6] = r7
            r7 = r12[r6]
            r8 = r13[r6]
            r7 = r7 & r8
            byte r7 = (byte) r7
            r3[r6] = r7
            r7 = r12[r6]
            r8 = r13[r6]
            r7 = r7 & r8
            r8 = r13[r6]
            int r8 = ~r8
            r7 = r7 | r8
            byte r7 = (byte) r7
            r4[r6] = r7
            int r6 = r6 + 1
            goto Lb
        L38:
            r10 = 4
            byte[][] r10 = new byte[r10][]
            r10[r5] = r1
            r11 = 1
            r10[r11] = r2
            r11 = 2
            r10[r11] = r3
            r11 = 3
            r10[r11] = r4
            return r10
    }

    private static byte[] or(byte[] r4, byte[] r5) {
            int r0 = r4.length
            byte[] r0 = new byte[r0]
            r1 = 0
        L4:
            int r2 = r4.length
            if (r1 >= r2) goto L12
            r2 = r4[r1]
            r3 = r5[r1]
            r2 = r2 | r3
            byte r2 = (byte) r2
            r0[r1] = r2
            int r1 = r1 + 1
            goto L4
        L12:
            return r0
    }

    private java.lang.String stringifyIP(byte[] r6) {
            r5 = this;
            r0 = 0
            java.lang.String r1 = ""
            r2 = 0
        L4:
            int r3 = r6.length
            int r3 = r3 / 2
            java.lang.String r4 = "."
            if (r2 >= r3) goto L28
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            r1 = r6[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r3.append(r1)
            r3.append(r4)
            java.lang.String r1 = r3.toString()
            int r2 = r2 + 1
            goto L4
        L28:
            int r2 = r1.length()
            int r2 = r2 + (-1)
            java.lang.String r1 = r1.substring(r0, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = "/"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            int r2 = r6.length
            int r2 = r2 / 2
        L46:
            int r3 = r6.length
            if (r2 >= r3) goto L66
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            r1 = r6[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            java.lang.String r1 = java.lang.Integer.toString(r1)
            r3.append(r1)
            r3.append(r4)
            java.lang.String r1 = r3.toString()
            int r2 = r2 + 1
            goto L46
        L66:
            int r6 = r1.length()
            int r6 = r6 + (-1)
            java.lang.String r6 = r1.substring(r0, r6)
            return r6
    }

    private java.lang.String stringifyIPCollection(java.util.Set r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r1 = "["
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.util.Iterator r4 = r4.iterator()
        L17:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L3e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.Object r0 = r4.next()
            byte[] r0 = (byte[]) r0
            byte[] r0 = (byte[]) r0
            java.lang.String r0 = r3.stringifyIP(r0)
            r1.append(r0)
            java.lang.String r0 = ","
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            goto L17
        L3e:
            int r4 = r0.length()
            r1 = 1
            if (r4 <= r1) goto L4f
            r4 = 0
            int r2 = r0.length()
            int r2 = r2 - r1
            java.lang.String r0 = r0.substring(r4, r2)
        L4f:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            java.lang.String r0 = "]"
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            return r4
    }

    private java.util.Set unionDN(java.util.Set r4, org.bouncycastle.asn1.ASN1Sequence r5) {
            r3 = this;
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto Ld
            if (r5 != 0) goto L9
            return r4
        L9:
            r4.add(r5)
            return r4
        Ld:
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        L16:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L3a
            java.lang.Object r1 = r4.next()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            boolean r2 = withinDNSubtree(r5, r1)
            if (r2 == 0) goto L2c
            r0.add(r1)
            goto L16
        L2c:
            boolean r2 = withinDNSubtree(r1, r5)
            if (r2 == 0) goto L33
            goto L36
        L33:
            r0.add(r1)
        L36:
            r0.add(r5)
            goto L16
        L3a:
            return r0
    }

    private java.util.Set unionEmail(java.util.Set r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto Ld
            if (r4 != 0) goto L9
            return r3
        L9:
            r3.add(r4)
            return r3
        Ld:
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        L16:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r3.next()
            java.lang.String r1 = (java.lang.String) r1
            r2.unionEmail(r1, r4, r0)
            goto L16
        L26:
            return r0
    }

    private void unionEmail(java.lang.String r5, java.lang.String r6, java.util.Set r7) {
            r4 = this;
            r0 = 64
            int r1 = r5.indexOf(r0)
            java.lang.String r2 = "."
            r3 = -1
            if (r1 == r3) goto L38
            int r1 = r5.indexOf(r0)
            int r1 = r1 + 1
            java.lang.String r1 = r5.substring(r1)
            int r0 = r6.indexOf(r0)
            if (r0 == r3) goto L23
            boolean r0 = r5.equalsIgnoreCase(r6)
            if (r0 == 0) goto La4
            goto La0
        L23:
            boolean r0 = r6.startsWith(r2)
            if (r0 == 0) goto L31
            boolean r0 = r4.withinDomain(r1, r6)
            if (r0 == 0) goto La4
            goto L99
        L31:
            boolean r0 = r1.equalsIgnoreCase(r6)
            if (r0 == 0) goto La4
            goto L99
        L38:
            boolean r1 = r5.startsWith(r2)
            if (r1 == 0) goto L76
            int r1 = r6.indexOf(r0)
            if (r1 == r3) goto L55
            int r0 = r5.indexOf(r0)
            int r0 = r0 + 1
            java.lang.String r0 = r6.substring(r0)
            boolean r0 = r4.withinDomain(r0, r5)
            if (r0 == 0) goto La4
            goto La0
        L55:
            boolean r0 = r6.startsWith(r2)
            if (r0 == 0) goto L6f
            boolean r0 = r4.withinDomain(r5, r6)
            if (r0 != 0) goto La7
            boolean r0 = r5.equalsIgnoreCase(r6)
            if (r0 == 0) goto L68
            goto La7
        L68:
            boolean r0 = r4.withinDomain(r6, r5)
            if (r0 == 0) goto La4
            goto La0
        L6f:
            boolean r0 = r4.withinDomain(r6, r5)
            if (r0 == 0) goto La4
            goto La0
        L76:
            int r1 = r6.indexOf(r0)
            if (r1 == r3) goto L8d
            int r0 = r5.indexOf(r0)
            int r0 = r0 + 1
            java.lang.String r0 = r6.substring(r0)
            boolean r0 = r0.equalsIgnoreCase(r5)
            if (r0 == 0) goto La4
            goto La0
        L8d:
            boolean r0 = r6.startsWith(r2)
            if (r0 == 0) goto L9a
            boolean r0 = r4.withinDomain(r5, r6)
            if (r0 == 0) goto La4
        L99:
            goto La7
        L9a:
            boolean r0 = r5.equalsIgnoreCase(r6)
            if (r0 == 0) goto La4
        La0:
            r7.add(r5)
            goto Laa
        La4:
            r7.add(r5)
        La7:
            r7.add(r6)
        Laa:
            return
    }

    private java.util.Set unionIP(java.util.Set r3, byte[] r4) {
            r2 = this;
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto Ld
            if (r4 != 0) goto L9
            return r3
        L9:
            r3.add(r4)
            return r3
        Ld:
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        L16:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r3.next()
            byte[] r1 = (byte[]) r1
            byte[] r1 = (byte[]) r1
            java.util.Set r1 = r2.unionIPRange(r1, r4)
            r0.addAll(r1)
            goto L16
        L2c:
            return r0
    }

    private java.util.Set unionIPRange(byte[] r3, byte[] r4) {
            r2 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            boolean r1 = org.bouncycastle.util.Arrays.areEqual(r3, r4)
            r0.add(r3)
            if (r1 == 0) goto Lf
            goto L12
        Lf:
            r0.add(r4)
        L12:
            return r0
    }

    private java.util.Set unionURI(java.util.Set r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto Ld
            if (r4 != 0) goto L9
            return r3
        L9:
            r3.add(r4)
            return r3
        Ld:
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        L16:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r3.next()
            java.lang.String r1 = (java.lang.String) r1
            r2.unionURI(r1, r4, r0)
            goto L16
        L26:
            return r0
    }

    private void unionURI(java.lang.String r5, java.lang.String r6, java.util.Set r7) {
            r4 = this;
            r0 = 64
            int r1 = r5.indexOf(r0)
            java.lang.String r2 = "."
            r3 = -1
            if (r1 == r3) goto L38
            int r1 = r5.indexOf(r0)
            int r1 = r1 + 1
            java.lang.String r1 = r5.substring(r1)
            int r0 = r6.indexOf(r0)
            if (r0 == r3) goto L23
            boolean r0 = r5.equalsIgnoreCase(r6)
            if (r0 == 0) goto La4
            goto La0
        L23:
            boolean r0 = r6.startsWith(r2)
            if (r0 == 0) goto L31
            boolean r0 = r4.withinDomain(r1, r6)
            if (r0 == 0) goto La4
            goto L99
        L31:
            boolean r0 = r1.equalsIgnoreCase(r6)
            if (r0 == 0) goto La4
            goto L99
        L38:
            boolean r1 = r5.startsWith(r2)
            if (r1 == 0) goto L76
            int r1 = r6.indexOf(r0)
            if (r1 == r3) goto L55
            int r0 = r5.indexOf(r0)
            int r0 = r0 + 1
            java.lang.String r0 = r6.substring(r0)
            boolean r0 = r4.withinDomain(r0, r5)
            if (r0 == 0) goto La4
            goto La0
        L55:
            boolean r0 = r6.startsWith(r2)
            if (r0 == 0) goto L6f
            boolean r0 = r4.withinDomain(r5, r6)
            if (r0 != 0) goto La7
            boolean r0 = r5.equalsIgnoreCase(r6)
            if (r0 == 0) goto L68
            goto La7
        L68:
            boolean r0 = r4.withinDomain(r6, r5)
            if (r0 == 0) goto La4
            goto La0
        L6f:
            boolean r0 = r4.withinDomain(r6, r5)
            if (r0 == 0) goto La4
            goto La0
        L76:
            int r1 = r6.indexOf(r0)
            if (r1 == r3) goto L8d
            int r0 = r5.indexOf(r0)
            int r0 = r0 + 1
            java.lang.String r0 = r6.substring(r0)
            boolean r0 = r0.equalsIgnoreCase(r5)
            if (r0 == 0) goto La4
            goto La0
        L8d:
            boolean r0 = r6.startsWith(r2)
            if (r0 == 0) goto L9a
            boolean r0 = r4.withinDomain(r5, r6)
            if (r0 == 0) goto La4
        L99:
            goto La7
        L9a:
            boolean r0 = r5.equalsIgnoreCase(r6)
            if (r0 == 0) goto La4
        La0:
            r7.add(r5)
            goto Laa
        La4:
            r7.add(r5)
        La7:
            r7.add(r6)
        Laa:
            return
    }

    private static boolean withinDNSubtree(org.bouncycastle.asn1.ASN1Sequence r5, org.bouncycastle.asn1.ASN1Sequence r6) {
            int r0 = r6.size()
            r1 = 0
            r2 = 1
            if (r0 >= r2) goto L9
            return r1
        L9:
            int r0 = r6.size()
            int r3 = r5.size()
            if (r0 <= r3) goto L14
            return r1
        L14:
            int r0 = r6.size()
            int r0 = r0 - r2
        L19:
            if (r0 < 0) goto L2d
            org.bouncycastle.asn1.DEREncodable r3 = r6.getObjectAt(r0)
            org.bouncycastle.asn1.DEREncodable r4 = r5.getObjectAt(r0)
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L2a
            return r1
        L2a:
            int r0 = r0 + (-1)
            goto L19
        L2d:
            return r2
    }

    private boolean withinDomain(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            java.lang.String r0 = "."
            boolean r0 = r9.startsWith(r0)
            r1 = 1
            if (r0 == 0) goto Ld
            java.lang.String r9 = r9.substring(r1)
        Ld:
            r0 = 46
            java.lang.String[] r9 = org.bouncycastle.util.Strings.split(r9, r0)
            java.lang.String[] r8 = org.bouncycastle.util.Strings.split(r8, r0)
            int r0 = r8.length
            int r2 = r9.length
            r3 = 0
            if (r0 > r2) goto L1d
            return r3
        L1d:
            int r0 = r8.length
            int r2 = r9.length
            int r0 = r0 - r2
            r2 = -1
            r4 = -1
        L22:
            int r5 = r9.length
            if (r4 >= r5) goto L44
            if (r4 != r2) goto L34
            int r5 = r4 + r0
            r5 = r8[r5]
            java.lang.String r6 = ""
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L41
            return r3
        L34:
            r5 = r9[r4]
            int r6 = r4 + r0
            r6 = r8[r6]
            boolean r5 = r5.equalsIgnoreCase(r6)
            if (r5 != 0) goto L41
            return r3
        L41:
            int r4 = r4 + 1
            goto L22
        L44:
            return r1
    }

    public void addExcludedSubtree(org.bouncycastle.asn1.x509.GeneralSubtree r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.GeneralName r3 = r3.getBase()
            int r0 = r3.getTagNo()
            r1 = 1
            if (r0 == r1) goto L5a
            r1 = 2
            if (r0 == r1) goto L4d
            r1 = 4
            if (r0 == r1) goto L3a
            r1 = 6
            if (r0 == r1) goto L2d
            r1 = 7
            if (r0 == r1) goto L18
            goto L66
        L18:
            java.util.Set r0 = r2.excludedSubtreesIP
            org.bouncycastle.asn1.DEREncodable r3 = r3.getName()
            org.bouncycastle.asn1.ASN1OctetString r3 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r3)
            byte[] r3 = r3.getOctets()
            java.util.Set r3 = r2.unionIP(r0, r3)
            r2.excludedSubtreesIP = r3
            goto L66
        L2d:
            java.util.Set r0 = r2.excludedSubtreesURI
            java.lang.String r3 = r2.extractNameAsString(r3)
            java.util.Set r3 = r2.unionURI(r0, r3)
            r2.excludedSubtreesURI = r3
            goto L66
        L3a:
            java.util.Set r0 = r2.excludedSubtreesDN
            org.bouncycastle.asn1.DEREncodable r3 = r3.getName()
            org.bouncycastle.asn1.DERObject r3 = r3.getDERObject()
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            java.util.Set r3 = r2.unionDN(r0, r3)
            r2.excludedSubtreesDN = r3
            goto L66
        L4d:
            java.util.Set r0 = r2.excludedSubtreesDNS
            java.lang.String r3 = r2.extractNameAsString(r3)
            java.util.Set r3 = r2.unionDNS(r0, r3)
            r2.excludedSubtreesDNS = r3
            goto L66
        L5a:
            java.util.Set r0 = r2.excludedSubtreesEmail
            java.lang.String r3 = r2.extractNameAsString(r3)
            java.util.Set r3 = r2.unionEmail(r0, r3)
            r2.excludedSubtreesEmail = r3
        L66:
            return
    }

    public void checkExcluded(org.bouncycastle.asn1.x509.GeneralName r3) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r2 = this;
            int r0 = r3.getTagNo()
            r1 = 1
            if (r0 == r1) goto L5a
            r1 = 2
            if (r0 == r1) goto L48
            r1 = 4
            if (r0 == r1) goto L38
            r1 = 6
            if (r0 == r1) goto L26
            r1 = 7
            if (r0 == r1) goto L14
            goto L63
        L14:
            org.bouncycastle.asn1.DEREncodable r3 = r3.getName()
            org.bouncycastle.asn1.ASN1OctetString r3 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r3)
            byte[] r3 = r3.getOctets()
            java.util.Set r0 = r2.excludedSubtreesIP
            r2.checkExcludedIP(r0, r3)
            goto L63
        L26:
            java.util.Set r0 = r2.excludedSubtreesURI
            org.bouncycastle.asn1.DEREncodable r3 = r3.getName()
            org.bouncycastle.asn1.DERIA5String r3 = org.bouncycastle.asn1.DERIA5String.getInstance(r3)
            java.lang.String r3 = r3.getString()
            r2.checkExcludedURI(r0, r3)
            goto L63
        L38:
            org.bouncycastle.asn1.DEREncodable r3 = r3.getName()
            org.bouncycastle.asn1.DERObject r3 = r3.getDERObject()
            org.bouncycastle.asn1.ASN1Sequence r3 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r3)
            r2.checkExcludedDN(r3)
            goto L63
        L48:
            java.util.Set r0 = r2.excludedSubtreesDNS
            org.bouncycastle.asn1.DEREncodable r3 = r3.getName()
            org.bouncycastle.asn1.DERIA5String r3 = org.bouncycastle.asn1.DERIA5String.getInstance(r3)
            java.lang.String r3 = r3.getString()
            r2.checkExcludedDNS(r0, r3)
            goto L63
        L5a:
            java.util.Set r0 = r2.excludedSubtreesEmail
            java.lang.String r3 = r2.extractNameAsString(r3)
            r2.checkExcludedEmail(r0, r3)
        L63:
            return
    }

    public void checkExcludedDN(org.bouncycastle.asn1.ASN1Sequence r2) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r1 = this;
            java.util.Set r0 = r1.excludedSubtreesDN
            r1.checkExcludedDN(r0, r2)
            return
    }

    public void checkPermitted(org.bouncycastle.asn1.x509.GeneralName r3) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r2 = this;
            int r0 = r3.getTagNo()
            r1 = 1
            if (r0 == r1) goto L5a
            r1 = 2
            if (r0 == r1) goto L48
            r1 = 4
            if (r0 == r1) goto L38
            r1 = 6
            if (r0 == r1) goto L26
            r1 = 7
            if (r0 == r1) goto L14
            goto L63
        L14:
            org.bouncycastle.asn1.DEREncodable r3 = r3.getName()
            org.bouncycastle.asn1.ASN1OctetString r3 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r3)
            byte[] r3 = r3.getOctets()
            java.util.Set r0 = r2.permittedSubtreesIP
            r2.checkPermittedIP(r0, r3)
            goto L63
        L26:
            java.util.Set r0 = r2.permittedSubtreesURI
            org.bouncycastle.asn1.DEREncodable r3 = r3.getName()
            org.bouncycastle.asn1.DERIA5String r3 = org.bouncycastle.asn1.DERIA5String.getInstance(r3)
            java.lang.String r3 = r3.getString()
            r2.checkPermittedURI(r0, r3)
            goto L63
        L38:
            org.bouncycastle.asn1.DEREncodable r3 = r3.getName()
            org.bouncycastle.asn1.DERObject r3 = r3.getDERObject()
            org.bouncycastle.asn1.ASN1Sequence r3 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r3)
            r2.checkPermittedDN(r3)
            goto L63
        L48:
            java.util.Set r0 = r2.permittedSubtreesDNS
            org.bouncycastle.asn1.DEREncodable r3 = r3.getName()
            org.bouncycastle.asn1.DERIA5String r3 = org.bouncycastle.asn1.DERIA5String.getInstance(r3)
            java.lang.String r3 = r3.getString()
            r2.checkPermittedDNS(r0, r3)
            goto L63
        L5a:
            java.util.Set r0 = r2.permittedSubtreesEmail
            java.lang.String r3 = r2.extractNameAsString(r3)
            r2.checkPermittedEmail(r0, r3)
        L63:
            return
    }

    public void checkPermittedDN(org.bouncycastle.asn1.ASN1Sequence r2) throws org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException {
            r1 = this;
            java.util.Set r0 = r1.permittedSubtreesDN
            r1.checkPermittedDN(r0, r2)
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.jce.provider.PKIXNameConstraintValidator
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.jce.provider.PKIXNameConstraintValidator r4 = (org.bouncycastle.jce.provider.PKIXNameConstraintValidator) r4
            java.util.Set r0 = r4.excludedSubtreesDN
            java.util.Set r2 = r3.excludedSubtreesDN
            boolean r0 = r3.collectionsAreEqual(r0, r2)
            if (r0 == 0) goto L6d
            java.util.Set r0 = r4.excludedSubtreesDNS
            java.util.Set r2 = r3.excludedSubtreesDNS
            boolean r0 = r3.collectionsAreEqual(r0, r2)
            if (r0 == 0) goto L6d
            java.util.Set r0 = r4.excludedSubtreesEmail
            java.util.Set r2 = r3.excludedSubtreesEmail
            boolean r0 = r3.collectionsAreEqual(r0, r2)
            if (r0 == 0) goto L6d
            java.util.Set r0 = r4.excludedSubtreesIP
            java.util.Set r2 = r3.excludedSubtreesIP
            boolean r0 = r3.collectionsAreEqual(r0, r2)
            if (r0 == 0) goto L6d
            java.util.Set r0 = r4.excludedSubtreesURI
            java.util.Set r2 = r3.excludedSubtreesURI
            boolean r0 = r3.collectionsAreEqual(r0, r2)
            if (r0 == 0) goto L6d
            java.util.Set r0 = r4.permittedSubtreesDN
            java.util.Set r2 = r3.permittedSubtreesDN
            boolean r0 = r3.collectionsAreEqual(r0, r2)
            if (r0 == 0) goto L6d
            java.util.Set r0 = r4.permittedSubtreesDNS
            java.util.Set r2 = r3.permittedSubtreesDNS
            boolean r0 = r3.collectionsAreEqual(r0, r2)
            if (r0 == 0) goto L6d
            java.util.Set r0 = r4.permittedSubtreesEmail
            java.util.Set r2 = r3.permittedSubtreesEmail
            boolean r0 = r3.collectionsAreEqual(r0, r2)
            if (r0 == 0) goto L6d
            java.util.Set r0 = r4.permittedSubtreesIP
            java.util.Set r2 = r3.permittedSubtreesIP
            boolean r0 = r3.collectionsAreEqual(r0, r2)
            if (r0 == 0) goto L6d
            java.util.Set r4 = r4.permittedSubtreesURI
            java.util.Set r0 = r3.permittedSubtreesURI
            boolean r4 = r3.collectionsAreEqual(r4, r0)
            if (r4 == 0) goto L6d
            r1 = 1
        L6d:
            return r1
    }

    public int hashCode() {
            r2 = this;
            java.util.Set r0 = r2.excludedSubtreesDN
            int r0 = r2.hashCollection(r0)
            java.util.Set r1 = r2.excludedSubtreesDNS
            int r1 = r2.hashCollection(r1)
            int r0 = r0 + r1
            java.util.Set r1 = r2.excludedSubtreesEmail
            int r1 = r2.hashCollection(r1)
            int r0 = r0 + r1
            java.util.Set r1 = r2.excludedSubtreesIP
            int r1 = r2.hashCollection(r1)
            int r0 = r0 + r1
            java.util.Set r1 = r2.excludedSubtreesURI
            int r1 = r2.hashCollection(r1)
            int r0 = r0 + r1
            java.util.Set r1 = r2.permittedSubtreesDN
            int r1 = r2.hashCollection(r1)
            int r0 = r0 + r1
            java.util.Set r1 = r2.permittedSubtreesDNS
            int r1 = r2.hashCollection(r1)
            int r0 = r0 + r1
            java.util.Set r1 = r2.permittedSubtreesEmail
            int r1 = r2.hashCollection(r1)
            int r0 = r0 + r1
            java.util.Set r1 = r2.permittedSubtreesIP
            int r1 = r2.hashCollection(r1)
            int r0 = r0 + r1
            java.util.Set r1 = r2.permittedSubtreesURI
            int r1 = r2.hashCollection(r1)
            int r0 = r0 + r1
            return r0
    }

    public void intersectEmptyPermittedSubtree(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == r0) goto L30
            r0 = 2
            if (r2 == r0) goto L28
            r0 = 4
            if (r2 == r0) goto L20
            r0 = 6
            if (r2 == r0) goto L18
            r0 = 7
            if (r2 == r0) goto L10
            goto L37
        L10:
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            r1.permittedSubtreesIP = r2
            goto L37
        L18:
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            r1.permittedSubtreesURI = r2
            goto L37
        L20:
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            r1.permittedSubtreesDN = r2
            goto L37
        L28:
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            r1.permittedSubtreesDNS = r2
            goto L37
        L30:
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
            r1.permittedSubtreesEmail = r2
        L37:
            return
    }

    public void intersectPermittedSubtree(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Enumeration r5 = r5.getObjects()
        L9:
            boolean r1 = r5.hasMoreElements()
            if (r1 == 0) goto L3c
            java.lang.Object r1 = r5.nextElement()
            org.bouncycastle.asn1.x509.GeneralSubtree r1 = org.bouncycastle.asn1.x509.GeneralSubtree.getInstance(r1)
            java.lang.Integer r2 = new java.lang.Integer
            org.bouncycastle.asn1.x509.GeneralName r3 = r1.getBase()
            int r3 = r3.getTagNo()
            r2.<init>(r3)
            java.lang.Object r3 = r0.get(r2)
            if (r3 != 0) goto L32
            java.util.HashSet r3 = new java.util.HashSet
            r3.<init>()
            r0.put(r2, r3)
        L32:
            java.lang.Object r2 = r0.get(r2)
            java.util.Set r2 = (java.util.Set) r2
            r2.add(r1)
            goto L9
        L3c:
            java.util.Set r5 = r0.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L44:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto Lb5
            java.lang.Object r0 = r5.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            r2 = 1
            if (r1 == r2) goto La6
            r2 = 2
            if (r1 == r2) goto L97
            r2 = 4
            if (r1 == r2) goto L88
            r2 = 6
            if (r1 == r2) goto L79
            r2 = 7
            if (r1 == r2) goto L6a
            goto L44
        L6a:
            java.util.Set r1 = r4.permittedSubtreesIP
            java.lang.Object r0 = r0.getValue()
            java.util.Set r0 = (java.util.Set) r0
            java.util.Set r0 = r4.intersectIP(r1, r0)
            r4.permittedSubtreesIP = r0
            goto L44
        L79:
            java.util.Set r1 = r4.permittedSubtreesURI
            java.lang.Object r0 = r0.getValue()
            java.util.Set r0 = (java.util.Set) r0
            java.util.Set r0 = r4.intersectURI(r1, r0)
            r4.permittedSubtreesURI = r0
            goto L44
        L88:
            java.util.Set r1 = r4.permittedSubtreesDN
            java.lang.Object r0 = r0.getValue()
            java.util.Set r0 = (java.util.Set) r0
            java.util.Set r0 = r4.intersectDN(r1, r0)
            r4.permittedSubtreesDN = r0
            goto L44
        L97:
            java.util.Set r1 = r4.permittedSubtreesDNS
            java.lang.Object r0 = r0.getValue()
            java.util.Set r0 = (java.util.Set) r0
            java.util.Set r0 = r4.intersectDNS(r1, r0)
            r4.permittedSubtreesDNS = r0
            goto L44
        La6:
            java.util.Set r1 = r4.permittedSubtreesEmail
            java.lang.Object r0 = r0.getValue()
            java.util.Set r0 = (java.util.Set) r0
            java.util.Set r0 = r4.intersectEmail(r1, r0)
            r4.permittedSubtreesEmail = r0
            goto L44
        Lb5:
            return
    }

    public java.lang.String toString() {
            r8 = this;
            java.util.Set r0 = r8.permittedSubtreesDN
            java.lang.String r1 = "DN:\n"
            java.lang.String r2 = "\n"
            java.lang.String r3 = "permitted:\n"
            if (r0 == 0) goto L31
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.util.Set r0 = r8.permittedSubtreesDN
            java.lang.String r0 = r0.toString()
            r3.append(r0)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
        L31:
            java.util.Set r0 = r8.permittedSubtreesDNS
            java.lang.String r4 = "DNS:\n"
            if (r0 == 0) goto L5e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.util.Set r0 = r8.permittedSubtreesDNS
            java.lang.String r0 = r0.toString()
            r3.append(r0)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
        L5e:
            java.util.Set r0 = r8.permittedSubtreesEmail
            java.lang.String r5 = "Email:\n"
            if (r0 == 0) goto L8b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.util.Set r0 = r8.permittedSubtreesEmail
            java.lang.String r0 = r0.toString()
            r3.append(r0)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
        L8b:
            java.util.Set r0 = r8.permittedSubtreesURI
            java.lang.String r6 = "URI:\n"
            if (r0 == 0) goto Lb8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.util.Set r0 = r8.permittedSubtreesURI
            java.lang.String r0 = r0.toString()
            r3.append(r0)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
        Lb8:
            java.util.Set r0 = r8.permittedSubtreesIP
            java.lang.String r7 = "IP:\n"
            if (r0 == 0) goto Le5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.util.Set r0 = r8.permittedSubtreesIP
            java.lang.String r0 = r8.stringifyIPCollection(r0)
            r3.append(r0)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
        Le5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "excluded:\n"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.util.Set r3 = r8.excludedSubtreesDN
            boolean r3 = r3.isEmpty()
            if (r3 != 0) goto L125
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            r3.append(r1)
            java.lang.String r0 = r3.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.util.Set r0 = r8.excludedSubtreesDN
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = r1.toString()
        L125:
            java.util.Set r1 = r8.excludedSubtreesDNS
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L154
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r4)
            java.lang.String r0 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.util.Set r0 = r8.excludedSubtreesDNS
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = r1.toString()
        L154:
            java.util.Set r1 = r8.excludedSubtreesEmail
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L183
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r5)
            java.lang.String r0 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.util.Set r0 = r8.excludedSubtreesEmail
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = r1.toString()
        L183:
            java.util.Set r1 = r8.excludedSubtreesURI
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L1b2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r6)
            java.lang.String r0 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.util.Set r0 = r8.excludedSubtreesURI
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = r1.toString()
        L1b2:
            java.util.Set r1 = r8.excludedSubtreesIP
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L1e1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r1.append(r7)
            java.lang.String r0 = r1.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.util.Set r0 = r8.excludedSubtreesIP
            java.lang.String r0 = r8.stringifyIPCollection(r0)
            r1.append(r0)
            r1.append(r2)
            java.lang.String r0 = r1.toString()
        L1e1:
            return r0
    }

    protected java.util.Set unionDNS(java.util.Set r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto Ld
            if (r5 != 0) goto L9
            return r4
        L9:
            r4.add(r5)
            return r4
        Ld:
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        L16:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L36
            java.lang.Object r1 = r4.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = r3.withinDomain(r1, r5)
            if (r2 == 0) goto L2c
        L28:
            r0.add(r5)
            goto L16
        L2c:
            boolean r2 = r3.withinDomain(r5, r1)
            r0.add(r1)
            if (r2 == 0) goto L28
            goto L16
        L36:
            return r0
    }
}
