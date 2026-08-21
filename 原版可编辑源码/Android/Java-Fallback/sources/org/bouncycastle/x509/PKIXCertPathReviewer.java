package org.bouncycastle.x509;

public class PKIXCertPathReviewer extends org.bouncycastle.jce.provider.CertPathValidatorUtilities {
    private static final java.lang.String AUTH_INFO_ACCESS = null;
    private static final java.lang.String CRL_DIST_POINTS = null;
    private static final java.lang.String QC_STATEMENT = null;
    private static final java.lang.String RESOURCE_NAME = "org.bouncycastle.x509.CertPathReviewerMessages";
    protected java.security.cert.CertPath certPath;
    protected java.util.List certs;
    protected java.util.List[] errors;
    private boolean initialized;
    protected int n;
    protected java.util.List[] notifications;
    protected java.security.cert.PKIXParameters pkixParams;
    protected java.security.cert.PolicyNode policyTree;
    protected java.security.PublicKey subjectPublicKey;
    protected java.security.cert.TrustAnchor trustAnchor;
    protected java.util.Date validDate;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.QCStatements
            java.lang.String r0 = r0.getId()
            org.bouncycastle.x509.PKIXCertPathReviewer.QC_STATEMENT = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.CRLDistributionPoints
            java.lang.String r0 = r0.getId()
            org.bouncycastle.x509.PKIXCertPathReviewer.CRL_DIST_POINTS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.AuthorityInfoAccess
            java.lang.String r0 = r0.getId()
            org.bouncycastle.x509.PKIXCertPathReviewer.AUTH_INFO_ACCESS = r0
            return
    }

    public PKIXCertPathReviewer() {
            r0 = this;
            r0.<init>()
            return
    }

    public PKIXCertPathReviewer(java.security.cert.CertPath r1, java.security.cert.PKIXParameters r2) throws org.bouncycastle.x509.CertPathReviewerException {
            r0 = this;
            r0.<init>()
            r0.init(r1, r2)
            return
    }

    private java.lang.String IPtoString(byte[] r4) {
            r3 = this;
            java.net.InetAddress r0 = java.net.InetAddress.getByAddress(r4)     // Catch: java.lang.Exception -> L9
            java.lang.String r4 = r0.getHostAddress()     // Catch: java.lang.Exception -> L9
            goto L29
        L9:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1 = 0
        Lf:
            int r2 = r4.length
            if (r1 == r2) goto L25
            r2 = r4[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            r0.append(r2)
            r2 = 32
            r0.append(r2)
            int r1 = r1 + 1
            goto Lf
        L25:
            java.lang.String r4 = r0.toString()
        L29:
            return r4
    }

    private void checkCriticalExtensions() {
            r13 = this;
            java.lang.String r0 = "org.bouncycastle.x509.CertPathReviewerMessages"
            java.security.cert.PKIXParameters r1 = r13.pkixParams
            java.util.List r1 = r1.getCertPathCheckers()
            java.util.Iterator r2 = r1.iterator()
        Lc:
            r3 = 2
            r4 = 3
            r5 = 1
            r6 = 0
            boolean r7 = r2.hasNext()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee java.security.cert.CertPathValidatorException -> Lf0
            if (r7 == 0) goto L20
            java.lang.Object r7 = r2.next()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee java.security.cert.CertPathValidatorException -> Lf0
            java.security.cert.PKIXCertPathChecker r7 = (java.security.cert.PKIXCertPathChecker) r7     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee java.security.cert.CertPathValidatorException -> Lf0
            r7.init(r6)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee java.security.cert.CertPathValidatorException -> Lf0
            goto Lc
        L20:
            java.util.List r2 = r13.certs     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            int r2 = r2.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            int r2 = r2 - r5
        L27:
            if (r2 < 0) goto L11d
            java.util.List r7 = r13.certs     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.Object r7 = r7.get(r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.security.cert.X509Certificate r7 = (java.security.cert.X509Certificate) r7     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.util.Set r8 = r7.getCriticalExtensionOIDs()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            if (r8 == 0) goto Lea
            boolean r9 = r8.isEmpty()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            if (r9 == 0) goto L3f
            goto Lea
        L3f:
            java.lang.String r9 = org.bouncycastle.x509.PKIXCertPathReviewer.KEY_USAGE     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r8.remove(r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r9 = org.bouncycastle.x509.PKIXCertPathReviewer.CERTIFICATE_POLICIES     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r8.remove(r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r9 = org.bouncycastle.x509.PKIXCertPathReviewer.POLICY_MAPPINGS     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r8.remove(r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r9 = org.bouncycastle.x509.PKIXCertPathReviewer.INHIBIT_ANY_POLICY     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r8.remove(r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r9 = org.bouncycastle.x509.PKIXCertPathReviewer.ISSUING_DISTRIBUTION_POINT     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r8.remove(r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r9 = org.bouncycastle.x509.PKIXCertPathReviewer.DELTA_CRL_INDICATOR     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r8.remove(r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r9 = org.bouncycastle.x509.PKIXCertPathReviewer.POLICY_CONSTRAINTS     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r8.remove(r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r9 = org.bouncycastle.x509.PKIXCertPathReviewer.BASIC_CONSTRAINTS     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r8.remove(r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r9 = org.bouncycastle.x509.PKIXCertPathReviewer.SUBJECT_ALTERNATIVE_NAME     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r8.remove(r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r9 = org.bouncycastle.x509.PKIXCertPathReviewer.NAME_CONSTRAINTS     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r8.remove(r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r9 = org.bouncycastle.x509.PKIXCertPathReviewer.QC_STATEMENT     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            boolean r9 = r8.contains(r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            if (r9 == 0) goto L84
            boolean r9 = r13.processQcStatements(r7, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            if (r9 == 0) goto L84
            java.lang.String r9 = org.bouncycastle.x509.PKIXCertPathReviewer.QC_STATEMENT     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r8.remove(r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
        L84:
            java.util.Iterator r9 = r1.iterator()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
        L88:
            boolean r10 = r9.hasNext()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            if (r10 == 0) goto Lc0
            java.lang.Object r10 = r9.next()     // Catch: java.security.cert.CertPathValidatorException -> L98 org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.security.cert.PKIXCertPathChecker r10 = (java.security.cert.PKIXCertPathChecker) r10     // Catch: java.security.cert.CertPathValidatorException -> L98 org.bouncycastle.x509.CertPathReviewerException -> Lee
            r10.check(r7, r8)     // Catch: java.security.cert.CertPathValidatorException -> L98 org.bouncycastle.x509.CertPathReviewerException -> Lee
            goto L88
        L98:
            r1 = move-exception
            org.bouncycastle.i18n.ErrorBundle r7 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r8 = "CertPathReviewer.criticalExtensionError"
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r9 = r1.getMessage()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r4[r6] = r9     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r4[r5] = r1     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.Class r5 = r1.getClass()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r5 = r5.getName()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r4[r3] = r5     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r7.<init>(r0, r8, r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            org.bouncycastle.x509.CertPathReviewerException r0 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.Throwable r1 = r1.getCause()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.security.cert.CertPath r3 = r13.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r0.<init>(r7, r1, r3, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            throw r0     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
        Lc0:
            boolean r7 = r8.isEmpty()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            if (r7 != 0) goto Lea
            java.util.Iterator r7 = r8.iterator()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
        Lca:
            boolean r8 = r7.hasNext()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            if (r8 == 0) goto Lea
            org.bouncycastle.i18n.ErrorBundle r8 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r9 = "CertPathReviewer.unknownCriticalExt"
            java.lang.Object[] r10 = new java.lang.Object[r5]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            org.bouncycastle.asn1.DERObjectIdentifier r11 = new org.bouncycastle.asn1.DERObjectIdentifier     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.Object r12 = r7.next()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r12 = (java.lang.String) r12     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r11.<init>(r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r10[r6] = r11     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r8.<init>(r0, r9, r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r13.addError(r8, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            goto Lca
        Lea:
            int r2 = r2 + (-1)
            goto L27
        Lee:
            r0 = move-exception
            goto L112
        Lf0:
            r1 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r7 = "CertPathReviewer.certPathCheckerError"
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r8 = r1.getMessage()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r4[r6] = r8     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r4[r5] = r1     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.Class r5 = r1.getClass()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            java.lang.String r5 = r5.getName()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r4[r3] = r5     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r2.<init>(r0, r7, r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            org.bouncycastle.x509.CertPathReviewerException r0 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            r0.<init>(r2, r1)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
            throw r0     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lee
        L112:
            org.bouncycastle.i18n.ErrorBundle r1 = r0.getErrorMessage()
            int r0 = r0.getIndex()
            r13.addError(r1, r0)
        L11d:
            return
    }

    private void checkNameConstraints() {
            r9 = this;
            org.bouncycastle.jce.provider.PKIXNameConstraintValidator r0 = new org.bouncycastle.jce.provider.PKIXNameConstraintValidator
            r0.<init>()
            java.util.List r1 = r9.certs     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            int r1 = r1.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r2 = 1
            int r1 = r1 - r2
        Ld:
            if (r1 <= 0) goto L130
            java.util.List r3 = r9.certs     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.lang.Object r3 = r3.get(r1)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            boolean r4 = isSelfIssued(r3)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.lang.String r5 = "org.bouncycastle.x509.CertPathReviewerMessages"
            if (r4 != 0) goto Ldc
            javax.security.auth.x500.X500Principal r4 = getSubjectPrincipal(r3)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.asn1.ASN1InputStream r6 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.io.ByteArrayInputStream r7 = new java.io.ByteArrayInputStream     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            byte[] r8 = r4.getEncoded()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r7.<init>(r8)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r6.<init>(r7)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r7 = 0
            org.bouncycastle.asn1.DERObject r6 = r6.readObject()     // Catch: java.io.IOException -> Lc3 org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.asn1.ASN1Sequence r6 = (org.bouncycastle.asn1.ASN1Sequence) r6     // Catch: java.io.IOException -> Lc3 org.bouncycastle.x509.CertPathReviewerException -> L124
            r0.checkPermittedDN(r6)     // Catch: org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException -> La6 org.bouncycastle.x509.CertPathReviewerException -> L124
            r0.checkExcludedDN(r6)     // Catch: org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException -> L89 org.bouncycastle.x509.CertPathReviewerException -> L124
            java.lang.String r4 = org.bouncycastle.x509.PKIXCertPathReviewer.SUBJECT_ALTERNATIVE_NAME     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L79 org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.asn1.DERObject r4 = getExtensionValue(r3, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L79 org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L79 org.bouncycastle.x509.CertPathReviewerException -> L124
            if (r4 == 0) goto Ldc
            r6 = 0
        L49:
            int r8 = r4.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            if (r6 >= r8) goto Ldc
            org.bouncycastle.asn1.DEREncodable r8 = r4.getObjectAt(r6)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.asn1.x509.GeneralName r8 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r8)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r0.checkPermitted(r8)     // Catch: org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException -> L60 org.bouncycastle.x509.CertPathReviewerException -> L124
            r0.checkExcluded(r8)     // Catch: org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException -> L60 org.bouncycastle.x509.CertPathReviewerException -> L124
            int r6 = r6 + 1
            goto L49
        L60:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r3 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.lang.String r4 = "CertPathReviewer.notPermittedEmail"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.i18n.filter.UntrustedInput r6 = new org.bouncycastle.i18n.filter.UntrustedInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r6.<init>(r8)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r2[r7] = r6     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r3.<init>(r5, r4, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.security.cert.CertPath r4 = r9.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r2.<init>(r3, r0, r4, r1)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            throw r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
        L79:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.lang.String r3 = "CertPathReviewer.subjAltNameExtError"
            r2.<init>(r5, r3)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.security.cert.CertPath r4 = r9.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r3.<init>(r2, r0, r4, r1)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            throw r3     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
        L89:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r3 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.lang.String r6 = "CertPathReviewer.excludedDN"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.i18n.filter.UntrustedInput r8 = new org.bouncycastle.i18n.filter.UntrustedInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.lang.String r4 = r4.getName()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r8.<init>(r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r2[r7] = r8     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r3.<init>(r5, r6, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.security.cert.CertPath r4 = r9.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r2.<init>(r3, r0, r4, r1)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            throw r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
        La6:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r3 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.lang.String r6 = "CertPathReviewer.notPermittedDN"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.i18n.filter.UntrustedInput r8 = new org.bouncycastle.i18n.filter.UntrustedInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.lang.String r4 = r4.getName()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r8.<init>(r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r2[r7] = r8     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r3.<init>(r5, r6, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.security.cert.CertPath r4 = r9.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r2.<init>(r3, r0, r4, r1)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            throw r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
        Lc3:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r3 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.lang.String r6 = "CertPathReviewer.ncSubjectNameError"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.i18n.filter.UntrustedInput r8 = new org.bouncycastle.i18n.filter.UntrustedInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r8.<init>(r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r2[r7] = r8     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r3.<init>(r5, r6, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.security.cert.CertPath r4 = r9.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r2.<init>(r3, r0, r4, r1)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            throw r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
        Ldc:
            java.lang.String r4 = org.bouncycastle.x509.PKIXCertPathReviewer.NAME_CONSTRAINTS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L114 org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.asn1.DERObject r3 = getExtensionValue(r3, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L114 org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L114 org.bouncycastle.x509.CertPathReviewerException -> L124
            if (r3 == 0) goto L110
            org.bouncycastle.asn1.x509.NameConstraints r4 = new org.bouncycastle.asn1.x509.NameConstraints     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r4.<init>(r3)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.getPermittedSubtrees()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            if (r3 == 0) goto Lf4
            r0.intersectPermittedSubtree(r3)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
        Lf4:
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.getExcludedSubtrees()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            if (r3 == 0) goto L110
            java.util.Enumeration r3 = r3.getObjects()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
        Lfe:
            boolean r4 = r3.hasMoreElements()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            if (r4 == 0) goto L110
            java.lang.Object r4 = r3.nextElement()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.asn1.x509.GeneralSubtree r4 = org.bouncycastle.asn1.x509.GeneralSubtree.getInstance(r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r0.addExcludedSubtree(r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            goto Lfe
        L110:
            int r1 = r1 + (-1)
            goto Ld
        L114:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.lang.String r3 = "CertPathReviewer.ncExtError"
            r2.<init>(r5, r3)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            java.security.cert.CertPath r4 = r9.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            r3.<init>(r2, r0, r4, r1)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
            throw r3     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L124
        L124:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r1 = r0.getErrorMessage()
            int r0 = r0.getIndex()
            r9.addError(r1, r0)
        L130:
            return
    }

    private void checkPathLength() {
            r9 = this;
            int r0 = r9.n
            java.util.List r1 = r9.certs
            int r1 = r1.size()
            r2 = 1
            int r1 = r1 - r2
            r3 = 0
            r4 = 0
        Lc:
            java.lang.String r5 = "org.bouncycastle.x509.CertPathReviewerMessages"
            if (r1 <= 0) goto L56
            java.util.List r6 = r9.certs
            java.lang.Object r6 = r6.get(r1)
            java.security.cert.X509Certificate r6 = (java.security.cert.X509Certificate) r6
            boolean r7 = isSelfIssued(r6)
            if (r7 != 0) goto L2e
            if (r0 > 0) goto L2a
            org.bouncycastle.i18n.ErrorBundle r7 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r8 = "CertPathReviewer.pathLenghtExtended"
            r7.<init>(r5, r8)
            r9.addError(r7)
        L2a:
            int r0 = r0 + (-1)
            int r4 = r4 + 1
        L2e:
            java.lang.String r7 = org.bouncycastle.x509.PKIXCertPathReviewer.BASIC_CONSTRAINTS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L39
            org.bouncycastle.asn1.DERObject r6 = getExtensionValue(r6, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L39
            org.bouncycastle.asn1.x509.BasicConstraints r5 = org.bouncycastle.asn1.x509.BasicConstraints.getInstance(r6)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L39
            goto L44
        L39:
            org.bouncycastle.i18n.ErrorBundle r6 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r7 = "CertPathReviewer.processLengthConstError"
            r6.<init>(r5, r7)
            r9.addError(r6, r1)
            r5 = 0
        L44:
            if (r5 == 0) goto L53
            java.math.BigInteger r5 = r5.getPathLenConstraint()
            if (r5 == 0) goto L53
            int r5 = r5.intValue()
            if (r5 >= r0) goto L53
            r0 = r5
        L53:
            int r1 = r1 + (-1)
            goto Lc
        L56:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.Object[] r1 = new java.lang.Object[r2]
            java.lang.Integer r2 = new java.lang.Integer
            r2.<init>(r4)
            r1[r3] = r2
            java.lang.String r2 = "CertPathReviewer.totalPathLength"
            r0.<init>(r5, r2, r1)
            r9.addNotification(r0)
            return
    }

    private void checkPolicy() {
            r35 = this;
            r1 = r35
            java.lang.String r2 = "CertPathReviewer.policyExtError"
            java.security.cert.PKIXParameters r0 = r1.pkixParams
            java.util.Set r0 = r0.getInitialPolicies()
            int r3 = r1.n
            r4 = 1
            int r3 = r3 + r4
            java.util.ArrayList[] r5 = new java.util.ArrayList[r3]
            r6 = 0
            r7 = 0
        L12:
            if (r7 >= r3) goto L1e
            java.util.ArrayList r8 = new java.util.ArrayList
            r8.<init>()
            r5[r7] = r8
            int r7 = r7 + 1
            goto L12
        L1e:
            java.util.HashSet r11 = new java.util.HashSet
            r11.<init>()
            java.lang.String r7 = "2.5.29.32.0"
            r11.add(r7)
            org.bouncycastle.jce.provider.PKIXPolicyNode r15 = new org.bouncycastle.jce.provider.PKIXPolicyNode
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>()
            r10 = 0
            r12 = 0
            java.util.HashSet r13 = new java.util.HashSet
            r13.<init>()
            r16 = 0
            java.lang.String r14 = "2.5.29.32.0"
            r8 = r15
            r4 = r15
            r15 = r16
            r8.<init>(r9, r10, r11, r12, r13, r14, r15)
            r8 = r5[r6]
            r8.add(r4)
            java.security.cert.PKIXParameters r8 = r1.pkixParams
            boolean r8 = r8.isExplicitPolicyRequired()
            if (r8 == 0) goto L51
            r8 = 0
            r9 = 1
            goto L55
        L51:
            int r8 = r1.n
            r9 = 1
            int r8 = r8 + r9
        L55:
            java.security.cert.PKIXParameters r10 = r1.pkixParams
            boolean r10 = r10.isAnyPolicyInhibited()
            if (r10 == 0) goto L5f
            r10 = 0
            goto L62
        L5f:
            int r10 = r1.n
            int r10 = r10 + r9
        L62:
            java.security.cert.PKIXParameters r11 = r1.pkixParams
            boolean r11 = r11.isPolicyMappingInhibited()
            if (r11 == 0) goto L6c
            r11 = 0
            goto L6f
        L6c:
            int r11 = r1.n
            int r11 = r11 + r9
        L6f:
            java.util.List r12 = r1.certs     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            int r12 = r12.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            int r12 = r12 - r9
            r15 = r4
            r4 = 0
            r13 = 0
        L79:
            java.lang.String r14 = "CertPathReviewer.policyConstExtError"
            java.lang.String r9 = "org.bouncycastle.x509.CertPathReviewerMessages"
            if (r12 < 0) goto L44c
            int r4 = r1.n     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            int r4 = r4 - r12
            java.util.List r6 = r1.certs     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.Object r6 = r6.get(r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.X509Certificate r6 = (java.security.cert.X509Certificate) r6     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r25 = r3
            java.lang.String r3 = org.bouncycastle.x509.PKIXCertPathReviewer.CERTIFICATE_POLICIES     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L43d org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.DERObject r3 = getExtensionValue(r6, r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L43d org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L43d org.bouncycastle.x509.CertPathReviewerException -> L602
            r26 = r14
            java.lang.String r14 = "CertPathReviewer.policyQualifierError"
            if (r3 == 0) goto L25d
            if (r15 == 0) goto L25d
            java.util.Enumeration r17 = r3.getObjects()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r27 = r0
            java.util.HashSet r0 = new java.util.HashSet     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r0.<init>()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        La7:
            boolean r18 = r17.hasMoreElements()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r18 == 0) goto Lf3
            java.lang.Object r18 = r17.nextElement()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.x509.PolicyInformation r18 = org.bouncycastle.asn1.x509.PolicyInformation.getInstance(r18)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r28 = r15
            org.bouncycastle.asn1.DERObjectIdentifier r15 = r18.getPolicyIdentifier()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r29 = r2
            java.lang.String r2 = r15.getId()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r0.add(r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r2 = r15.getId()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r2 = r7.equals(r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r2 != 0) goto Lee
            org.bouncycastle.asn1.ASN1Sequence r2 = r18.getPolicyQualifiers()     // Catch: java.security.cert.CertPathValidatorException -> Le0 org.bouncycastle.x509.CertPathReviewerException -> L602
            java.util.Set r2 = getQualifierSet(r2)     // Catch: java.security.cert.CertPathValidatorException -> Le0 org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r18 = processCertD1i(r4, r5, r15, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r18 != 0) goto Lee
            processCertD1ii(r4, r5, r15, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            goto Lee
        Le0:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>(r9, r14)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r4 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r3.<init>(r2, r0, r4, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r3     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        Lee:
            r15 = r28
            r2 = r29
            goto La7
        Lf3:
            r29 = r2
            r28 = r15
            if (r13 == 0) goto L11d
            boolean r2 = r13.contains(r7)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r2 == 0) goto L100
            goto L11d
        L100:
            java.util.Iterator r2 = r13.iterator()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.util.HashSet r13 = new java.util.HashSet     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r13.<init>()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L109:
            boolean r15 = r2.hasNext()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r15 == 0) goto L11e
            java.lang.Object r15 = r2.next()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r17 = r0.contains(r15)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r17 == 0) goto L109
            r13.add(r15)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            goto L109
        L11d:
            r13 = r0
        L11e:
            if (r10 > 0) goto L133
            int r0 = r1.n     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r4 >= r0) goto L12b
            boolean r0 = isSelfIssued(r6)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r0 == 0) goto L12b
            goto L133
        L12b:
            r33 = r10
            r34 = r11
            r30 = r13
            goto L210
        L133:
            java.util.Enumeration r0 = r3.getObjects()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L137:
            boolean r2 = r0.hasMoreElements()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r2 == 0) goto L12b
            java.lang.Object r2 = r0.nextElement()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.x509.PolicyInformation r2 = org.bouncycastle.asn1.x509.PolicyInformation.getInstance(r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.DERObjectIdentifier r15 = r2.getPolicyIdentifier()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r15 = r15.getId()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r15 = r7.equals(r15)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r15 == 0) goto L137
            org.bouncycastle.asn1.ASN1Sequence r0 = r2.getPolicyQualifiers()     // Catch: java.security.cert.CertPathValidatorException -> L202 org.bouncycastle.x509.CertPathReviewerException -> L602
            java.util.Set r0 = getQualifierSet(r0)     // Catch: java.security.cert.CertPathValidatorException -> L202 org.bouncycastle.x509.CertPathReviewerException -> L602
            int r2 = r4 + (-1)
            r2 = r5[r2]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r30 = r13
            r15 = 0
        L162:
            int r13 = r2.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r15 >= r13) goto L1fd
            java.lang.Object r13 = r2.get(r15)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.jce.provider.PKIXPolicyNode r13 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r13     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.util.Set r17 = r13.getExpectedPolicies()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.util.Iterator r31 = r17.iterator()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L176:
            boolean r17 = r31.hasNext()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r17 == 0) goto L1f3
            r32 = r2
            java.lang.Object r2 = r31.next()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r33 = r10
            boolean r10 = r2 instanceof java.lang.String     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r10 == 0) goto L18b
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            goto L195
        L18b:
            boolean r10 = r2 instanceof org.bouncycastle.asn1.DERObjectIdentifier     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r10 == 0) goto L1ee
            org.bouncycastle.asn1.DERObjectIdentifier r2 = (org.bouncycastle.asn1.DERObjectIdentifier) r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r2 = r2.getId()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L195:
            java.util.Iterator r10 = r13.getChildren()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r17 = 0
        L19b:
            boolean r18 = r10.hasNext()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r18 == 0) goto L1b8
            java.lang.Object r18 = r10.next()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.jce.provider.PKIXPolicyNode r18 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r18     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r19 = r10
            java.lang.String r10 = r18.getValidPolicy()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r10 = r2.equals(r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r10 == 0) goto L1b5
            r17 = 1
        L1b5:
            r10 = r19
            goto L19b
        L1b8:
            if (r17 != 0) goto L1e5
            java.util.HashSet r10 = new java.util.HashSet     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r10.<init>()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r10.add(r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r34 = r11
            org.bouncycastle.jce.provider.PKIXPolicyNode r11 = new org.bouncycastle.jce.provider.PKIXPolicyNode     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.util.ArrayList r18 = new java.util.ArrayList     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r18.<init>()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r24 = 0
            r17 = r11
            r19 = r4
            r20 = r10
            r21 = r13
            r22 = r0
            r23 = r2
            r17.<init>(r18, r19, r20, r21, r22, r23, r24)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r13.addChild(r11)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2 = r5[r4]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.add(r11)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            goto L1e7
        L1e5:
            r34 = r11
        L1e7:
            r2 = r32
            r10 = r33
            r11 = r34
            goto L176
        L1ee:
            r2 = r32
            r10 = r33
            goto L176
        L1f3:
            r32 = r2
            r33 = r10
            r34 = r11
            int r15 = r15 + 1
            goto L162
        L1fd:
            r33 = r10
            r34 = r11
            goto L210
        L202:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>(r9, r14)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r4 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r3.<init>(r2, r0, r4, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r3     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L210:
            int r0 = r4 + (-1)
            r15 = r28
        L214:
            if (r0 < 0) goto L239
            r2 = r5[r0]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r10 = 0
        L219:
            int r11 = r2.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r10 >= r11) goto L236
            java.lang.Object r11 = r2.get(r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.jce.provider.PKIXPolicyNode r11 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r11     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r13 = r11.hasChildren()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r13 != 0) goto L233
            org.bouncycastle.jce.provider.PKIXPolicyNode r11 = removePolicyNode(r15, r5, r11)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r15 = r11
            if (r11 != 0) goto L233
            goto L236
        L233:
            int r10 = r10 + 1
            goto L219
        L236:
            int r0 = r0 + (-1)
            goto L214
        L239:
            java.util.Set r0 = r6.getCriticalExtensionOIDs()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r0 == 0) goto L25a
            java.lang.String r2 = org.bouncycastle.x509.PKIXCertPathReviewer.CERTIFICATE_POLICIES     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r0 = r0.contains(r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2 = r5[r4]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r10 = 0
        L248:
            int r11 = r2.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r10 >= r11) goto L25a
            java.lang.Object r11 = r2.get(r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.jce.provider.PKIXPolicyNode r11 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r11     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r11.setCritical(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            int r10 = r10 + 1
            goto L248
        L25a:
            r13 = r30
            goto L269
        L25d:
            r27 = r0
            r29 = r2
            r33 = r10
            r34 = r11
            r28 = r15
            r15 = r28
        L269:
            if (r3 != 0) goto L26c
            r15 = 0
        L26c:
            if (r8 > 0) goto L27e
            if (r15 == 0) goto L271
            goto L27e
        L271:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r2 = "CertPathReviewer.noValidPolicyTree"
            r0.<init>(r9, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L27e:
            int r0 = r1.n     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r4 == r0) goto L427
            java.lang.String r0 = org.bouncycastle.x509.PKIXCertPathReviewer.POLICY_MAPPINGS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L417 org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.DERObject r0 = getExtensionValue(r6, r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L417 org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r0 == 0) goto L2df
            r2 = r0
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r3 = 0
        L28e:
            int r10 = r2.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r3 >= r10) goto L2df
            org.bouncycastle.asn1.DEREncodable r10 = r2.getObjectAt(r3)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.ASN1Sequence r10 = (org.bouncycastle.asn1.ASN1Sequence) r10     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r11 = 0
            org.bouncycastle.asn1.DEREncodable r17 = r10.getObjectAt(r11)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.DERObjectIdentifier r17 = (org.bouncycastle.asn1.DERObjectIdentifier) r17     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r11 = 1
            org.bouncycastle.asn1.DEREncodable r10 = r10.getObjectAt(r11)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.DERObjectIdentifier r10 = (org.bouncycastle.asn1.DERObjectIdentifier) r10     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r11 = r17.getId()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r11 = r7.equals(r11)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r17 = r2
            java.lang.String r2 = "CertPathReviewer.invalidPolicyMapping"
            if (r11 != 0) goto L2d2
            java.lang.String r10 = r10.getId()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r10 = r7.equals(r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r10 != 0) goto L2c5
            int r3 = r3 + 1
            r2 = r17
            goto L28e
        L2c5:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r0.<init>(r9, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r3 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>(r0, r3, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L2d2:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r0.<init>(r9, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r3 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>(r0, r3, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L2df:
            if (r0 == 0) goto L37e
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.util.HashMap r2 = new java.util.HashMap     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.util.HashSet r3 = new java.util.HashSet     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r3.<init>()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r11 = 0
        L2ee:
            int r10 = r0.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r11 >= r10) goto L339
            org.bouncycastle.asn1.DEREncodable r10 = r0.getObjectAt(r11)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.ASN1Sequence r10 = (org.bouncycastle.asn1.ASN1Sequence) r10     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r17 = r0
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r18 = r10.getObjectAt(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.DERObjectIdentifier r18 = (org.bouncycastle.asn1.DERObjectIdentifier) r18     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r0 = r18.getId()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r18 = r13
            r13 = 1
            org.bouncycastle.asn1.DEREncodable r10 = r10.getObjectAt(r13)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.DERObjectIdentifier r10 = (org.bouncycastle.asn1.DERObjectIdentifier) r10     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r10 = r10.getId()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r13 = r2.containsKey(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r13 != 0) goto L329
            java.util.HashSet r13 = new java.util.HashSet     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r13.<init>()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r13.add(r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.put(r0, r13)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r3.add(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            goto L332
        L329:
            java.lang.Object r0 = r2.get(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.util.Set r0 = (java.util.Set) r0     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r0.add(r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L332:
            int r11 = r11 + 1
            r0 = r17
            r13 = r18
            goto L2ee
        L339:
            r18 = r13
            java.util.Iterator r0 = r3.iterator()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L33f:
            boolean r3 = r0.hasNext()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r3 == 0) goto L380
            java.lang.Object r3 = r0.next()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r3 = (java.lang.String) r3     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r34 <= 0) goto L373
            prepareNextCertB1(r4, r5, r3, r2, r6)     // Catch: java.security.cert.CertPathValidatorException -> L353 org.bouncycastle.jce.provider.AnnotatedException -> L362 org.bouncycastle.x509.CertPathReviewerException -> L602
            r10 = r29
            goto L37b
        L353:
            r0 = move-exception
            r2 = r0
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r0.<init>(r9, r14)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r4 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r3.<init>(r0, r2, r4, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r3     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L362:
            r0 = move-exception
            r2 = r0
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r10 = r29
            r0.<init>(r9, r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r4 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r3.<init>(r0, r2, r4, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r3     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L373:
            r10 = r29
            if (r34 > 0) goto L37b
            org.bouncycastle.jce.provider.PKIXPolicyNode r15 = prepareNextCertB2(r4, r5, r3, r15)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L37b:
            r29 = r10
            goto L33f
        L37e:
            r18 = r13
        L380:
            r10 = r29
            boolean r0 = isSelfIssued(r6)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r0 != 0) goto L39b
            if (r8 == 0) goto L38c
            int r8 = r8 + (-1)
        L38c:
            if (r34 == 0) goto L391
            int r11 = r34 + (-1)
            goto L393
        L391:
            r11 = r34
        L393:
            if (r33 == 0) goto L398
            int r0 = r33 + (-1)
            goto L39f
        L398:
            r0 = r33
            goto L39f
        L39b:
            r0 = r33
            r11 = r34
        L39f:
            java.lang.String r2 = org.bouncycastle.x509.PKIXCertPathReviewer.POLICY_CONSTRAINTS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.DERObject r2 = getExtensionValue(r6, r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r2 == 0) goto L3e3
            java.util.Enumeration r2 = r2.getObjects()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
        L3ad:
            boolean r3 = r2.hasMoreElements()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r3 == 0) goto L3e3
            java.lang.Object r3 = r2.nextElement()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            int r4 = r3.getTagNo()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r4 == 0) goto L3d3
            r13 = 1
            if (r4 == r13) goto L3c3
            goto L3ad
        L3c3:
            org.bouncycastle.asn1.DERInteger r3 = org.bouncycastle.asn1.DERInteger.getInstance(r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            java.math.BigInteger r3 = r3.getValue()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            int r3 = r3.intValue()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r3 >= r11) goto L3ad
            r11 = r3
            goto L3ad
        L3d3:
            org.bouncycastle.asn1.DERInteger r3 = org.bouncycastle.asn1.DERInteger.getInstance(r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            java.math.BigInteger r3 = r3.getValue()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            int r3 = r3.intValue()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L408 org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r3 >= r8) goto L3ad
            r8 = r3
            goto L3ad
        L3e3:
            java.lang.String r2 = org.bouncycastle.x509.PKIXCertPathReviewer.INHIBIT_ANY_POLICY     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3f9 org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.DERObject r2 = getExtensionValue(r6, r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3f9 org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3f9 org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r2 == 0) goto L42f
            java.math.BigInteger r2 = r2.getValue()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3f9 org.bouncycastle.x509.CertPathReviewerException -> L602
            int r2 = r2.intValue()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3f9 org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r2 >= r0) goto L42f
            r0 = r2
            goto L42f
        L3f9:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r2 = "CertPathReviewer.policyInhibitExtError"
            r0.<init>(r9, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r3 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>(r0, r3, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L408:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2 = r26
            r0.<init>(r9, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r3 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>(r0, r3, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L417:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r3 = "CertPathReviewer.policyMapExtError"
            r2.<init>(r9, r3)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r4 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r3.<init>(r2, r0, r4, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r3     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L427:
            r18 = r13
            r10 = r29
            r0 = r33
            r11 = r34
        L42f:
            int r12 = r12 + (-1)
            r4 = r6
            r2 = r10
            r13 = r18
            r3 = r25
            r6 = 0
            r10 = r0
            r0 = r27
            goto L79
        L43d:
            r0 = move-exception
            r10 = r2
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>(r9, r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r4 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r3.<init>(r2, r0, r4, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r3     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L44c:
            r27 = r0
            r25 = r3
            r2 = r14
            r28 = r15
            boolean r0 = isSelfIssued(r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r0 != 0) goto L45d
            if (r8 <= 0) goto L45d
            int r8 = r8 + (-1)
        L45d:
            java.lang.String r0 = org.bouncycastle.x509.PKIXCertPathReviewer.POLICY_CONSTRAINTS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5f5 org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.DERObject r0 = getExtensionValue(r4, r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5f5 org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5f5 org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r0 == 0) goto L490
            java.util.Enumeration r0 = r0.getObjects()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5f5 org.bouncycastle.x509.CertPathReviewerException -> L602
            r11 = r8
        L46c:
            boolean r3 = r0.hasMoreElements()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5f5 org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r3 == 0) goto L48f
            java.lang.Object r3 = r0.nextElement()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5f5 org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5f5 org.bouncycastle.x509.CertPathReviewerException -> L602
            int r4 = r3.getTagNo()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5f5 org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r4 == 0) goto L47f
            goto L46c
        L47f:
            org.bouncycastle.asn1.DERInteger r3 = org.bouncycastle.asn1.DERInteger.getInstance(r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5f5 org.bouncycastle.x509.CertPathReviewerException -> L602
            java.math.BigInteger r3 = r3.getValue()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5f5 org.bouncycastle.x509.CertPathReviewerException -> L602
            int r3 = r3.intValue()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5f5 org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r3 != 0) goto L46c
            r11 = 0
            goto L46c
        L48f:
            r8 = r11
        L490:
            java.lang.String r0 = "CertPathReviewer.explicitPolicy"
            if (r28 != 0) goto L4ac
            java.security.cert.PKIXParameters r2 = r1.pkixParams     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r2 = r2.isExplicitPolicyRequired()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r2 != 0) goto L49f
            r15 = 0
            goto L5e3
        L49f:
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>(r9, r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r0 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r3 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r0.<init>(r2, r3, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r0     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L4ac:
            boolean r2 = isAnyPolicy(r27)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r2 == 0) goto L54f
            java.security.cert.PKIXParameters r2 = r1.pkixParams     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r2 = r2.isExplicitPolicyRequired()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r2 == 0) goto L54b
            boolean r2 = r13.isEmpty()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r2 != 0) goto L53e
            java.util.HashSet r0 = new java.util.HashSet     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r0.<init>()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r11 = 0
        L4c6:
            r3 = r25
            if (r11 >= r3) goto L4fd
            r2 = r5[r11]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r4 = 0
        L4cd:
            int r6 = r2.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r4 >= r6) goto L4f8
            java.lang.Object r6 = r2.get(r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.jce.provider.PKIXPolicyNode r6 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r6     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r10 = r6.getValidPolicy()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r10 = r7.equals(r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r10 == 0) goto L4f5
            java.util.Iterator r6 = r6.getChildren()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L4e7:
            boolean r10 = r6.hasNext()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r10 == 0) goto L4f5
            java.lang.Object r10 = r6.next()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r0.add(r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            goto L4e7
        L4f5:
            int r4 = r4 + 1
            goto L4cd
        L4f8:
            int r11 = r11 + 1
            r25 = r3
            goto L4c6
        L4fd:
            java.util.Iterator r0 = r0.iterator()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L501:
            boolean r2 = r0.hasNext()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r2 == 0) goto L515
            java.lang.Object r2 = r0.next()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.jce.provider.PKIXPolicyNode r2 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r2 = r2.getValidPolicy()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r13.contains(r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            goto L501
        L515:
            if (r28 == 0) goto L54b
            int r0 = r1.n     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2 = 1
            int r0 = r0 - r2
            r15 = r28
        L51d:
            if (r0 < 0) goto L5e3
            r2 = r5[r0]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r11 = 0
        L522:
            int r3 = r2.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r11 >= r3) goto L53b
            java.lang.Object r3 = r2.get(r11)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.jce.provider.PKIXPolicyNode r3 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r3     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r4 = r3.hasChildren()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r4 != 0) goto L538
            org.bouncycastle.jce.provider.PKIXPolicyNode r15 = removePolicyNode(r15, r5, r3)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L538:
            int r11 = r11 + 1
            goto L522
        L53b:
            int r0 = r0 + (-1)
            goto L51d
        L53e:
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>(r9, r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r0 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r3 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r0.<init>(r2, r3, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r0     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L54b:
            r15 = r28
            goto L5e3
        L54f:
            r3 = r25
            java.util.HashSet r0 = new java.util.HashSet     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r0.<init>()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r11 = 0
        L557:
            if (r11 >= r3) goto L596
            r2 = r5[r11]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r4 = 0
        L55c:
            int r6 = r2.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r4 >= r6) goto L593
            java.lang.Object r6 = r2.get(r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.jce.provider.PKIXPolicyNode r6 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r6     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r10 = r6.getValidPolicy()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r10 = r7.equals(r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r10 == 0) goto L590
            java.util.Iterator r6 = r6.getChildren()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L576:
            boolean r10 = r6.hasNext()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r10 == 0) goto L590
            java.lang.Object r10 = r6.next()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.jce.provider.PKIXPolicyNode r10 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r10     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r12 = r10.getValidPolicy()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r12 = r7.equals(r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r12 != 0) goto L576
            r0.add(r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            goto L576
        L590:
            int r4 = r4 + 1
            goto L55c
        L593:
            int r11 = r11 + 1
            goto L557
        L596:
            java.util.Iterator r0 = r0.iterator()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r15 = r28
        L59c:
            boolean r2 = r0.hasNext()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r2 == 0) goto L5bc
            java.lang.Object r2 = r0.next()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.jce.provider.PKIXPolicyNode r2 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r3 = r2.getValidPolicy()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r4 = r27
            boolean r3 = r4.contains(r3)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r3 != 0) goto L5b9
            org.bouncycastle.jce.provider.PKIXPolicyNode r2 = removePolicyNode(r15, r5, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r15 = r2
        L5b9:
            r27 = r4
            goto L59c
        L5bc:
            if (r15 == 0) goto L5e3
            int r0 = r1.n     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2 = 1
            int r0 = r0 - r2
        L5c2:
            if (r0 < 0) goto L5e3
            r2 = r5[r0]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r11 = 0
        L5c7:
            int r3 = r2.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r11 >= r3) goto L5e0
            java.lang.Object r3 = r2.get(r11)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.jce.provider.PKIXPolicyNode r3 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r3     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            boolean r4 = r3.hasChildren()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            if (r4 != 0) goto L5dd
            org.bouncycastle.jce.provider.PKIXPolicyNode r15 = removePolicyNode(r15, r5, r3)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L5dd:
            int r11 = r11 + 1
            goto L5c7
        L5e0:
            int r0 = r0 + (-1)
            goto L5c2
        L5e3:
            if (r8 > 0) goto L60e
            if (r15 == 0) goto L5e8
            goto L60e
        L5e8:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.lang.String r2 = "CertPathReviewer.invalidPolicy"
            r0.<init>(r9, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L5f5:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r0.<init>(r9, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            java.security.cert.CertPath r3 = r1.certPath     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            r2.<init>(r0, r3, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
            throw r2     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L602
        L602:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = r0.getErrorMessage()
            int r0 = r0.getIndex()
            r1.addError(r2, r0)
        L60e:
            return
    }

    private void checkSignatures() {
            r21 = this;
            r10 = r21
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            r11 = 2
            java.lang.Object[] r1 = new java.lang.Object[r11]
            org.bouncycastle.i18n.filter.TrustedInput r2 = new org.bouncycastle.i18n.filter.TrustedInput
            java.util.Date r3 = r10.validDate
            r2.<init>(r3)
            r12 = 0
            r1[r12] = r2
            org.bouncycastle.i18n.filter.TrustedInput r2 = new org.bouncycastle.i18n.filter.TrustedInput
            java.util.Date r3 = new java.util.Date
            r3.<init>()
            r2.<init>(r3)
            r13 = 1
            r1[r13] = r2
            java.lang.String r14 = "org.bouncycastle.x509.CertPathReviewerMessages"
            java.lang.String r2 = "CertPathReviewer.certPathValidDate"
            r0.<init>(r14, r2, r1)
            r10.addNotification(r0)
            java.util.List r0 = r10.certs     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.util.List r1 = r10.certs     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            int r1 = r1.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            int r1 = r1 - r13
            java.lang.Object r0 = r0.get(r1)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.security.cert.PKIXParameters r1 = r10.pkixParams     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.util.Set r1 = r1.getTrustAnchors()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.util.Collection r1 = r10.getTrustAnchors(r0, r1)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            int r2 = r1.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            if (r2 <= r13) goto L6a
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.lang.String r3 = "CertPathReviewer.conflictingTrustAnchors"
            java.lang.Object[] r4 = new java.lang.Object[r11]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.lang.Integer r5 = new java.lang.Integer     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            int r1 = r1.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            r5.<init>(r1)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            r4[r12] = r5     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            org.bouncycastle.i18n.filter.UntrustedInput r1 = new org.bouncycastle.i18n.filter.UntrustedInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            javax.security.auth.x500.X500Principal r0 = r0.getIssuerX500Principal()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            r1.<init>(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            r4[r13] = r1     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            r2.<init>(r14, r3, r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            r10.addError(r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            goto L98
        L6a:
            boolean r2 = r1.isEmpty()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            if (r2 == 0) goto L9a
            org.bouncycastle.i18n.ErrorBundle r1 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.lang.String r2 = "CertPathReviewer.noTrustAnchorFound"
            java.lang.Object[] r3 = new java.lang.Object[r11]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            org.bouncycastle.i18n.filter.UntrustedInput r4 = new org.bouncycastle.i18n.filter.UntrustedInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            javax.security.auth.x500.X500Principal r0 = r0.getIssuerX500Principal()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            r4.<init>(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            r3[r12] = r4     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.lang.Integer r0 = new java.lang.Integer     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.security.cert.PKIXParameters r4 = r10.pkixParams     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.util.Set r4 = r4.getTrustAnchors()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            int r4 = r4.size()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            r0.<init>(r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            r3[r13] = r0     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            r1.<init>(r14, r2, r3)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            r10.addError(r1)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
        L98:
            r1 = 0
            goto Ld1
        L9a:
            java.util.Iterator r1 = r1.iterator()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.lang.Object r1 = r1.next()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.security.cert.TrustAnchor r1 = (java.security.cert.TrustAnchor) r1     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc8
            java.security.cert.X509Certificate r2 = r1.getTrustedCert()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc6
            if (r2 == 0) goto Lb3
            java.security.cert.X509Certificate r2 = r1.getTrustedCert()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc6
            java.security.PublicKey r2 = r2.getPublicKey()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc6
            goto Lb7
        Lb3:
            java.security.PublicKey r2 = r1.getCAPublicKey()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc6
        Lb7:
            r0.verify(r2)     // Catch: java.security.SignatureException -> Lbb org.bouncycastle.x509.CertPathReviewerException -> Lc6 java.lang.Exception -> Ld1
            goto Ld1
        Lbb:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc6
            java.lang.String r2 = "CertPathReviewer.trustButInvalidCert"
            r0.<init>(r14, r2)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc6
            r10.addError(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> Lc6
            goto Ld1
        Lc6:
            r0 = move-exception
            goto Lca
        Lc8:
            r0 = move-exception
            r1 = 0
        Lca:
            org.bouncycastle.i18n.ErrorBundle r0 = r0.getErrorMessage()
            r10.addError(r0)
        Ld1:
            r9 = r1
            r16 = 5
            if (r9 == 0) goto L11a
            java.security.cert.X509Certificate r0 = r9.getTrustedCert()
            if (r0 == 0) goto Le1
            javax.security.auth.x500.X500Principal r1 = getSubjectPrincipal(r0)     // Catch: java.lang.IllegalArgumentException -> Leb
            goto L103
        Le1:
            javax.security.auth.x500.X500Principal r1 = new javax.security.auth.x500.X500Principal     // Catch: java.lang.IllegalArgumentException -> Leb
            java.lang.String r2 = r9.getCAName()     // Catch: java.lang.IllegalArgumentException -> Leb
            r1.<init>(r2)     // Catch: java.lang.IllegalArgumentException -> Leb
            goto L103
        Leb:
            org.bouncycastle.i18n.ErrorBundle r1 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.Object[] r2 = new java.lang.Object[r13]
            org.bouncycastle.i18n.filter.UntrustedInput r3 = new org.bouncycastle.i18n.filter.UntrustedInput
            java.lang.String r4 = r9.getCAName()
            r3.<init>(r4)
            r2[r12] = r3
            java.lang.String r3 = "CertPathReviewer.trustDNInvalid"
            r1.<init>(r14, r3, r2)
            r10.addError(r1)
            r1 = 0
        L103:
            if (r0 == 0) goto L11b
            boolean[] r0 = r0.getKeyUsage()
            if (r0 == 0) goto L11b
            boolean r0 = r0[r16]
            if (r0 != 0) goto L11b
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.trustKeyUsage"
            r0.<init>(r14, r2)
            r10.addNotification(r0)
            goto L11b
        L11a:
            r1 = 0
        L11b:
            if (r9 == 0) goto L142
            java.security.cert.X509Certificate r0 = r9.getTrustedCert()
            if (r0 == 0) goto L128
            java.security.PublicKey r2 = r0.getPublicKey()
            goto L12c
        L128:
            java.security.PublicKey r2 = r9.getCAPublicKey()
        L12c:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = getAlgorithmIdentifier(r2)     // Catch: java.security.cert.CertPathValidatorException -> L137
            r3.getObjectId()     // Catch: java.security.cert.CertPathValidatorException -> L137
            r3.getParameters()     // Catch: java.security.cert.CertPathValidatorException -> L137
            goto L144
        L137:
            org.bouncycastle.i18n.ErrorBundle r3 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r4 = "CertPathReviewer.trustPubKeyError"
            r3.<init>(r14, r4)
            r10.addError(r3)
            goto L144
        L142:
            r0 = 0
            r2 = 0
        L144:
            java.util.List r3 = r10.certs
            int r3 = r3.size()
            int r3 = r3 - r13
            r5 = r0
            r8 = r1
            r7 = r2
            r6 = r3
        L14f:
            if (r6 < 0) goto L3cc
            int r0 = r10.n
            int r4 = r0 - r6
            java.util.List r0 = r10.certs
            java.lang.Object r0 = r0.get(r6)
            r3 = r0
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3
            java.lang.String r1 = "CertPathReviewer.signatureNotVerified"
            java.lang.String r0 = "BC"
            r2 = 3
            if (r7 == 0) goto L188
            r3.verify(r7, r0)     // Catch: java.security.GeneralSecurityException -> L16a
            goto L21c
        L16a:
            r0 = move-exception
            r17 = r0
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.String r18 = r17.getMessage()
            r2[r12] = r18
            r2[r13] = r17
            java.lang.Class r17 = r17.getClass()
            java.lang.String r17 = r17.getName()
            r2[r11] = r17
            r0.<init>(r14, r1, r2)
            goto L219
        L188:
            boolean r17 = isSelfIssued(r3)
            if (r17 == 0) goto L1bf
            java.security.PublicKey r15 = r3.getPublicKey()     // Catch: java.security.GeneralSecurityException -> L1a1
            r3.verify(r15, r0)     // Catch: java.security.GeneralSecurityException -> L1a1
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle     // Catch: java.security.GeneralSecurityException -> L1a1
            java.lang.String r15 = "CertPathReviewer.rootKeyIsValidButNotATrustAnchor"
            r0.<init>(r14, r15)     // Catch: java.security.GeneralSecurityException -> L1a1
            r10.addError(r0, r6)     // Catch: java.security.GeneralSecurityException -> L1a1
            goto L21c
        L1a1:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r15 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.String r18 = r0.getMessage()
            r2[r12] = r18
            r2[r13] = r0
            java.lang.Class r0 = r0.getClass()
            java.lang.String r0 = r0.getName()
            r2[r11] = r0
            r15.<init>(r14, r1, r2)
            r10.addError(r15, r6)
            goto L21c
        L1bf:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r1 = "CertPathReviewer.NoIssuerPublicKey"
            r0.<init>(r14, r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Extensions.AuthorityKeyIdentifier
            java.lang.String r1 = r1.getId()
            byte[] r1 = r3.getExtensionValue(r1)
            if (r1 == 0) goto L219
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.x509.extension.X509ExtensionUtil.fromExtensionValue(r1)     // Catch: java.io.IOException -> L219
            org.bouncycastle.asn1.x509.AuthorityKeyIdentifier r1 = org.bouncycastle.asn1.x509.AuthorityKeyIdentifier.getInstance(r1)     // Catch: java.io.IOException -> L219
            org.bouncycastle.asn1.x509.GeneralNames r15 = r1.getAuthorityCertIssuer()     // Catch: java.io.IOException -> L219
            if (r15 == 0) goto L219
            org.bouncycastle.asn1.x509.GeneralName[] r15 = r15.getNames()     // Catch: java.io.IOException -> L219
            r15 = r15[r12]     // Catch: java.io.IOException -> L219
            java.math.BigInteger r1 = r1.getAuthorityCertSerialNumber()     // Catch: java.io.IOException -> L219
            if (r1 == 0) goto L219
            r2 = 7
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.io.IOException -> L219
            org.bouncycastle.i18n.LocaleString r11 = new org.bouncycastle.i18n.LocaleString     // Catch: java.io.IOException -> L219
            java.lang.String r13 = "missingIssuer"
            r11.<init>(r14, r13)     // Catch: java.io.IOException -> L219
            r2[r12] = r11     // Catch: java.io.IOException -> L219
            java.lang.String r11 = " \""
            r13 = 1
            r2[r13] = r11     // Catch: java.io.IOException -> L219
            r11 = 2
            r2[r11] = r15     // Catch: java.io.IOException -> L219
            java.lang.String r11 = "\" "
            r13 = 3
            r2[r13] = r11     // Catch: java.io.IOException -> L219
            r11 = 4
            org.bouncycastle.i18n.LocaleString r13 = new org.bouncycastle.i18n.LocaleString     // Catch: java.io.IOException -> L219
            java.lang.String r15 = "missingSerial"
            r13.<init>(r14, r15)     // Catch: java.io.IOException -> L219
            r2[r11] = r13     // Catch: java.io.IOException -> L219
            java.lang.String r11 = " "
            r2[r16] = r11     // Catch: java.io.IOException -> L219
            r11 = 6
            r2[r11] = r1     // Catch: java.io.IOException -> L219
            r0.setExtraArguments(r2)     // Catch: java.io.IOException -> L219
        L219:
            r10.addError(r0, r6)
        L21c:
            java.util.Date r0 = r10.validDate     // Catch: java.security.cert.CertificateExpiredException -> L222 java.security.cert.CertificateNotYetValidException -> L238
            r3.checkValidity(r0)     // Catch: java.security.cert.CertificateExpiredException -> L222 java.security.cert.CertificateNotYetValidException -> L238
            goto L250
        L222:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]
            org.bouncycastle.i18n.filter.TrustedInput r11 = new org.bouncycastle.i18n.filter.TrustedInput
            java.util.Date r13 = r3.getNotAfter()
            r11.<init>(r13)
            r2[r12] = r11
            java.lang.String r11 = "CertPathReviewer.certificateExpired"
            r0.<init>(r14, r11, r2)
            goto L24d
        L238:
            r1 = 1
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.Object[] r2 = new java.lang.Object[r1]
            org.bouncycastle.i18n.filter.TrustedInput r1 = new org.bouncycastle.i18n.filter.TrustedInput
            java.util.Date r11 = r3.getNotBefore()
            r1.<init>(r11)
            r2[r12] = r1
            java.lang.String r1 = "CertPathReviewer.certificateNotYetValid"
            r0.<init>(r14, r1, r2)
        L24d:
            r10.addError(r0, r6)
        L250:
            java.security.cert.PKIXParameters r0 = r10.pkixParams
            boolean r0 = r0.isRevocationEnabled()
            if (r0 == 0) goto L30b
            java.lang.String r0 = org.bouncycastle.x509.PKIXCertPathReviewer.CRL_DIST_POINTS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L267
            org.bouncycastle.asn1.DERObject r0 = getExtensionValue(r3, r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L267
            if (r0 == 0) goto L265
            org.bouncycastle.asn1.x509.CRLDistPoint r0 = org.bouncycastle.asn1.x509.CRLDistPoint.getInstance(r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L267
            goto L272
        L265:
            r0 = 0
            goto L272
        L267:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r1 = "CertPathReviewer.crlDistPtExtError"
            r0.<init>(r14, r1)
            r10.addError(r0, r6)
            goto L265
        L272:
            java.lang.String r1 = org.bouncycastle.x509.PKIXCertPathReviewer.AUTH_INFO_ACCESS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L27f
            org.bouncycastle.asn1.DERObject r1 = getExtensionValue(r3, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L27f
            if (r1 == 0) goto L289
            org.bouncycastle.asn1.x509.AuthorityInformationAccess r1 = org.bouncycastle.asn1.x509.AuthorityInformationAccess.getInstance(r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L27f
            goto L28a
        L27f:
            org.bouncycastle.i18n.ErrorBundle r1 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.crlAuthInfoAccError"
            r1.<init>(r14, r2)
            r10.addError(r1, r6)
        L289:
            r1 = 0
        L28a:
            java.util.Vector r0 = r10.getCRLDistUrls(r0)
            java.util.Vector r11 = r10.getOCSPUrls(r1)
            java.util.Iterator r1 = r0.iterator()
        L296:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L2b9
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle
            r13 = 1
            java.lang.Object[] r15 = new java.lang.Object[r13]
            org.bouncycastle.i18n.filter.UntrustedUrlInput r13 = new org.bouncycastle.i18n.filter.UntrustedUrlInput
            r18 = r3
            java.lang.Object r3 = r1.next()
            r13.<init>(r3)
            r15[r12] = r13
            java.lang.String r3 = "CertPathReviewer.crlDistPoint"
            r2.<init>(r14, r3, r15)
            r10.addNotification(r2, r6)
            r3 = r18
            goto L296
        L2b9:
            r18 = r3
            java.util.Iterator r1 = r11.iterator()
        L2bf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L2de
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle
            r3 = 1
            java.lang.Object[] r13 = new java.lang.Object[r3]
            org.bouncycastle.i18n.filter.UntrustedUrlInput r3 = new org.bouncycastle.i18n.filter.UntrustedUrlInput
            java.lang.Object r15 = r1.next()
            r3.<init>(r15)
            r13[r12] = r3
            java.lang.String r3 = "CertPathReviewer.ocspLocation"
            r2.<init>(r14, r3, r13)
            r10.addNotification(r2, r6)
            goto L2bf
        L2de:
            java.security.cert.PKIXParameters r2 = r10.pkixParams     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L2f9
            java.util.Date r13 = r10.validDate     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L2f9
            r1 = r21
            r15 = r18
            r3 = r15
            r19 = r4
            r4 = r13
            r13 = r6
            r6 = r7
            r20 = r7
            r7 = r0
            r12 = r8
            r8 = r11
            r11 = r9
            r9 = r13
            r1.checkRevocation(r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L2f7
            goto L313
        L2f7:
            r0 = move-exception
            goto L303
        L2f9:
            r0 = move-exception
            r19 = r4
            r13 = r6
            r20 = r7
            r12 = r8
            r11 = r9
            r15 = r18
        L303:
            org.bouncycastle.i18n.ErrorBundle r0 = r0.getErrorMessage()
            r10.addError(r0, r13)
            goto L313
        L30b:
            r15 = r3
            r19 = r4
            r13 = r6
            r20 = r7
            r12 = r8
            r11 = r9
        L313:
            if (r12 == 0) goto L33f
            javax.security.auth.x500.X500Principal r0 = r15.getIssuerX500Principal()
            boolean r0 = r0.equals(r12)
            if (r0 != 0) goto L33f
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            r1 = 2
            java.lang.Object[] r2 = new java.lang.Object[r1]
            java.lang.String r3 = r12.getName()
            r4 = 0
            r2[r4] = r3
            javax.security.auth.x500.X500Principal r3 = r15.getIssuerX500Principal()
            java.lang.String r3 = r3.getName()
            r5 = 1
            r2[r5] = r3
            java.lang.String r3 = "CertPathReviewer.certWrongIssuer"
            r0.<init>(r14, r3, r2)
            r10.addError(r0, r13)
            goto L341
        L33f:
            r1 = 2
            r4 = 0
        L341:
            int r0 = r10.n
            r2 = r19
            if (r2 == r0) goto L3a1
            java.lang.String r0 = "CertPathReviewer.noCACert"
            if (r15 == 0) goto L35b
            int r2 = r15.getVersion()
            r3 = 1
            if (r2 != r3) goto L35c
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle
            r2.<init>(r14, r0)
            r10.addError(r2, r13)
            goto L35c
        L35b:
            r3 = 1
        L35c:
            java.lang.String r2 = org.bouncycastle.x509.PKIXCertPathReviewer.BASIC_CONSTRAINTS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L382
            org.bouncycastle.asn1.DERObject r2 = getExtensionValue(r15, r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L382
            org.bouncycastle.asn1.x509.BasicConstraints r2 = org.bouncycastle.asn1.x509.BasicConstraints.getInstance(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L382
            if (r2 == 0) goto L377
            boolean r2 = r2.isCA()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L382
            if (r2 != 0) goto L38c
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L382
            r2.<init>(r14, r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L382
            r10.addError(r2, r13)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L382
            goto L38c
        L377:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L382
            java.lang.String r2 = "CertPathReviewer.noBasicConstraints"
            r0.<init>(r14, r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L382
            r10.addError(r0, r13)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L382
            goto L38c
        L382:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.errorProcesingBC"
            r0.<init>(r14, r2)
            r10.addError(r0, r13)
        L38c:
            boolean[] r0 = r15.getKeyUsage()
            if (r0 == 0) goto L3a2
            boolean r0 = r0[r16]
            if (r0 != 0) goto L3a2
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.noCertSign"
            r0.<init>(r14, r2)
            r10.addError(r0, r13)
            goto L3a2
        L3a1:
            r3 = 1
        L3a2:
            javax.security.auth.x500.X500Principal r8 = r15.getSubjectX500Principal()
            java.util.List r0 = r10.certs     // Catch: java.security.cert.CertPathValidatorException -> L3b7
            java.security.PublicKey r7 = getNextWorkingKey(r0, r13)     // Catch: java.security.cert.CertPathValidatorException -> L3b7
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = getAlgorithmIdentifier(r7)     // Catch: java.security.cert.CertPathValidatorException -> L3b9
            r0.getObjectId()     // Catch: java.security.cert.CertPathValidatorException -> L3b9
            r0.getParameters()     // Catch: java.security.cert.CertPathValidatorException -> L3b9
            goto L3c3
        L3b7:
            r7 = r20
        L3b9:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.pubKeyError"
            r0.<init>(r14, r2)
            r10.addError(r0, r13)
        L3c3:
            int r6 = r13 + (-1)
            r9 = r11
            r5 = r15
            r11 = 2
            r12 = 0
            r13 = 1
            goto L14f
        L3cc:
            r20 = r7
            r11 = r9
            r10.trustAnchor = r11
            r2 = r20
            r10.subjectPublicKey = r2
            return
    }

    private java.security.cert.X509CRL getCRL(java.lang.String r7) throws org.bouncycastle.x509.CertPathReviewerException {
            r6 = this;
            r0 = 1
            r1 = 0
            java.net.URL r2 = new java.net.URL     // Catch: java.lang.Exception -> L5c
            r2.<init>(r7)     // Catch: java.lang.Exception -> L5c
            java.lang.String r3 = r2.getProtocol()     // Catch: java.lang.Exception -> L5c
            java.lang.String r4 = "http"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L5c
            if (r3 != 0) goto L22
            java.lang.String r3 = r2.getProtocol()     // Catch: java.lang.Exception -> L5c
            java.lang.String r4 = "https"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Exception -> L5c
            if (r3 == 0) goto L20
            goto L22
        L20:
            r7 = 0
            goto L51
        L22:
            java.net.URLConnection r2 = r2.openConnection()     // Catch: java.lang.Exception -> L5c
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2     // Catch: java.lang.Exception -> L5c
            r2.setUseCaches(r1)     // Catch: java.lang.Exception -> L5c
            r3 = 2000(0x7d0, float:2.803E-42)
            r2.setConnectTimeout(r3)     // Catch: java.lang.Exception -> L5c
            r2.setDoInput(r0)     // Catch: java.lang.Exception -> L5c
            r2.connect()     // Catch: java.lang.Exception -> L5c
            int r3 = r2.getResponseCode()     // Catch: java.lang.Exception -> L5c
            r4 = 200(0xc8, float:2.8E-43)
            if (r3 != r4) goto L52
            java.lang.String r3 = "X.509"
            java.lang.String r4 = "BC"
            java.security.cert.CertificateFactory r3 = java.security.cert.CertificateFactory.getInstance(r3, r4)     // Catch: java.lang.Exception -> L5c
            java.io.InputStream r2 = r2.getInputStream()     // Catch: java.lang.Exception -> L5c
            java.security.cert.CRL r2 = r3.generateCRL(r2)     // Catch: java.lang.Exception -> L5c
            java.security.cert.X509CRL r2 = (java.security.cert.X509CRL) r2     // Catch: java.lang.Exception -> L5c
            r7 = r2
        L51:
            return r7
        L52:
            java.lang.Exception r3 = new java.lang.Exception     // Catch: java.lang.Exception -> L5c
            java.lang.String r2 = r2.getResponseMessage()     // Catch: java.lang.Exception -> L5c
            r3.<init>(r2)     // Catch: java.lang.Exception -> L5c
            throw r3     // Catch: java.lang.Exception -> L5c
        L5c:
            r2 = move-exception
            org.bouncycastle.i18n.ErrorBundle r3 = new org.bouncycastle.i18n.ErrorBundle
            r4 = 4
            java.lang.Object[] r4 = new java.lang.Object[r4]
            org.bouncycastle.i18n.filter.UntrustedInput r5 = new org.bouncycastle.i18n.filter.UntrustedInput
            r5.<init>(r7)
            r4[r1] = r5
            java.lang.String r7 = r2.getMessage()
            r4[r0] = r7
            r7 = 2
            r4[r7] = r2
            r7 = 3
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getName()
            r4[r7] = r0
            java.lang.String r7 = "org.bouncycastle.x509.CertPathReviewerMessages"
            java.lang.String r0 = "CertPathReviewer.loadCrlDistPointError"
            r3.<init>(r7, r0, r4)
            org.bouncycastle.x509.CertPathReviewerException r7 = new org.bouncycastle.x509.CertPathReviewerException
            r7.<init>(r3)
            throw r7
    }

    private java.util.Collection getTrustAnchors(java.security.cert.X509Certificate r7, java.util.Set r8) throws org.bouncycastle.x509.CertPathReviewerException {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r8 = r8.iterator()
            java.security.cert.X509CertSelector r1 = new java.security.cert.X509CertSelector
            r1.<init>()
            javax.security.auth.x500.X500Principal r2 = getEncodedIssuerPrincipal(r7)     // Catch: java.io.IOException -> L5a
            byte[] r2 = r2.getEncoded()     // Catch: java.io.IOException -> L5a
            r1.setSubject(r2)     // Catch: java.io.IOException -> L5a
        L19:
            boolean r2 = r8.hasNext()
            if (r2 == 0) goto L59
            java.lang.Object r2 = r8.next()
            java.security.cert.TrustAnchor r2 = (java.security.cert.TrustAnchor) r2
            java.security.cert.X509Certificate r3 = r2.getTrustedCert()
            if (r3 == 0) goto L39
            java.security.cert.X509Certificate r3 = r2.getTrustedCert()
            boolean r3 = r1.match(r3)
            if (r3 == 0) goto L19
        L35:
            r0.add(r2)
            goto L19
        L39:
            java.lang.String r3 = r2.getCAName()
            if (r3 == 0) goto L19
            java.security.PublicKey r3 = r2.getCAPublicKey()
            if (r3 == 0) goto L19
            javax.security.auth.x500.X500Principal r3 = getEncodedIssuerPrincipal(r7)
            javax.security.auth.x500.X500Principal r4 = new javax.security.auth.x500.X500Principal
            java.lang.String r5 = r2.getCAName()
            r4.<init>(r5)
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L19
            goto L35
        L59:
            return r0
        L5a:
            org.bouncycastle.i18n.ErrorBundle r7 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r8 = "org.bouncycastle.x509.CertPathReviewerMessages"
            java.lang.String r0 = "CertPathReviewer.trustAnchorIssuerError"
            r7.<init>(r8, r0)
            org.bouncycastle.x509.CertPathReviewerException r8 = new org.bouncycastle.x509.CertPathReviewerException
            r8.<init>(r7)
            throw r8
    }

    private boolean processQcStatements(java.security.cert.X509Certificate r17, int r18) {
            r16 = this;
            r0 = r16
            r1 = r18
            java.lang.String r2 = "org.bouncycastle.x509.CertPathReviewerMessages"
            r3 = 0
            java.lang.String r4 = org.bouncycastle.x509.PKIXCertPathReviewer.QC_STATEMENT     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r5 = r17
            org.bouncycastle.asn1.DERObject r4 = getExtensionValue(r5, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r5 = 0
            r6 = 0
        L13:
            int r7 = r4.size()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            if (r5 >= r7) goto L103
            org.bouncycastle.asn1.DEREncodable r7 = r4.getObjectAt(r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.asn1.x509.qualified.QCStatement r7 = org.bouncycastle.asn1.x509.qualified.QCStatement.getInstance(r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.asn1.x509.qualified.QCStatement.id_etsi_qcs_QcCompliance     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.asn1.DERObjectIdentifier r10 = r7.getStatementId()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            boolean r9 = r9.equals(r10)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            if (r9 == 0) goto L39
            org.bouncycastle.i18n.ErrorBundle r7 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            java.lang.String r8 = "CertPathReviewer.QcEuCompliance"
            r7.<init>(r2, r8)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
        L34:
            r0.addNotification(r7, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            goto Lff
        L39:
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.asn1.x509.qualified.QCStatement.id_qcs_pkixQCSyntax_v1     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.asn1.DERObjectIdentifier r10 = r7.getStatementId()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            boolean r9 = r9.equals(r10)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            if (r9 == 0) goto L47
            goto Lff
        L47:
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.asn1.x509.qualified.QCStatement.id_etsi_qcs_QcSSCD     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.asn1.DERObjectIdentifier r10 = r7.getStatementId()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            boolean r9 = r9.equals(r10)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            if (r9 == 0) goto L5b
            org.bouncycastle.i18n.ErrorBundle r7 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            java.lang.String r8 = "CertPathReviewer.QcSSCD"
            r7.<init>(r2, r8)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            goto L34
        L5b:
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.asn1.x509.qualified.QCStatement.id_etsi_qcs_LimiteValue     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.asn1.DERObjectIdentifier r10 = r7.getStatementId()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            boolean r9 = r9.equals(r10)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r10 = 2
            if (r9 == 0) goto Le4
            org.bouncycastle.asn1.ASN1Encodable r7 = r7.getStatementInfo()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.asn1.x509.qualified.MonetaryValue r7 = org.bouncycastle.asn1.x509.qualified.MonetaryValue.getInstance(r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r7.getCurrency()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            java.math.BigInteger r9 = r7.getAmount()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            double r11 = r9.doubleValue()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r13 = 4621819117588971520(0x4024000000000000, double:10.0)
            java.math.BigInteger r9 = r7.getExponent()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            double r8 = r9.doubleValue()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            double r8 = java.lang.Math.pow(r13, r8)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            double r11 = r11 * r8
            org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode r8 = r7.getCurrency()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            boolean r8 = r8.isAlphabetic()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r9 = 3
            if (r8 == 0) goto Lb9
            org.bouncycastle.i18n.ErrorBundle r8 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            java.lang.String r13 = "CertPathReviewer.QcLimitValueAlpha"
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode r14 = r7.getCurrency()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            java.lang.String r14 = r14.getAlphabetic()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r9[r3] = r14     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.i18n.filter.TrustedInput r14 = new org.bouncycastle.i18n.filter.TrustedInput     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            java.lang.Double r15 = new java.lang.Double     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r15.<init>(r11)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r14.<init>(r15)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r11 = 1
            r9[r11] = r14     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r9[r10] = r7     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r8.<init>(r2, r13, r9)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            goto Le0
        Lb9:
            org.bouncycastle.i18n.ErrorBundle r8 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            java.lang.String r13 = "CertPathReviewer.QcLimitValueNum"
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            java.lang.Integer r14 = new java.lang.Integer     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode r15 = r7.getCurrency()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            int r15 = r15.getNumeric()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r14.<init>(r15)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r9[r3] = r14     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.i18n.filter.TrustedInput r14 = new org.bouncycastle.i18n.filter.TrustedInput     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            java.lang.Double r15 = new java.lang.Double     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r15.<init>(r11)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r14.<init>(r15)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r11 = 1
            r9[r11] = r14     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r9[r10] = r7     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r8.<init>(r2, r13, r9)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
        Le0:
            r0.addNotification(r8, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            goto Lff
        Le4:
            org.bouncycastle.i18n.ErrorBundle r6 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            java.lang.String r8 = "CertPathReviewer.QcUnknownStatement"
            java.lang.Object[] r9 = new java.lang.Object[r10]     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.asn1.DERObjectIdentifier r10 = r7.getStatementId()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r9[r3] = r10     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            org.bouncycastle.i18n.filter.UntrustedInput r10 = new org.bouncycastle.i18n.filter.UntrustedInput     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r10.<init>(r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r7 = 1
            r9[r7] = r10     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r6.<init>(r2, r8, r9)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r0.addNotification(r6, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L106
            r6 = 1
        Lff:
            int r5 = r5 + 1
            goto L13
        L103:
            r1 = 1
            r1 = r1 ^ r6
            return r1
        L106:
            org.bouncycastle.i18n.ErrorBundle r4 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r5 = "CertPathReviewer.QcStatementExtError"
            r4.<init>(r2, r5)
            r0.addError(r4, r1)
            return r3
    }

    protected void addError(org.bouncycastle.i18n.ErrorBundle r3) {
            r2 = this;
            java.util.List[] r0 = r2.errors
            r1 = 0
            r0 = r0[r1]
            r0.add(r3)
            return
    }

    protected void addError(org.bouncycastle.i18n.ErrorBundle r2, int r3) {
            r1 = this;
            r0 = -1
            if (r3 < r0) goto L11
            int r0 = r1.n
            if (r3 >= r0) goto L11
            java.util.List[] r0 = r1.errors
            int r3 = r3 + 1
            r3 = r0[r3]
            r3.add(r2)
            return
        L11:
            java.lang.IndexOutOfBoundsException r2 = new java.lang.IndexOutOfBoundsException
            r2.<init>()
            throw r2
    }

    protected void addNotification(org.bouncycastle.i18n.ErrorBundle r3) {
            r2 = this;
            java.util.List[] r0 = r2.notifications
            r1 = 0
            r0 = r0[r1]
            r0.add(r3)
            return
    }

    protected void addNotification(org.bouncycastle.i18n.ErrorBundle r2, int r3) {
            r1 = this;
            r0 = -1
            if (r3 < r0) goto L11
            int r0 = r1.n
            if (r3 >= r0) goto L11
            java.util.List[] r0 = r1.notifications
            int r3 = r3 + 1
            r3 = r0[r3]
            r3.add(r2)
            return
        L11:
            java.lang.IndexOutOfBoundsException r2 = new java.lang.IndexOutOfBoundsException
            r2.<init>()
            throw r2
    }

    protected void checkCRLs(java.security.cert.PKIXParameters r20, java.security.cert.X509Certificate r21, java.util.Date r22, java.security.cert.X509Certificate r23, java.security.PublicKey r24, java.util.Vector r25, int r26) throws org.bouncycastle.x509.CertPathReviewerException {
            r19 = this;
            r1 = r19
            r2 = r21
            r3 = r24
            r4 = r26
            java.lang.String r5 = "CertPathReviewer.distrPtExtError"
            java.lang.String r6 = "CertPathReviewer.crlExtractionError"
            java.lang.String r7 = "CertPathReviewer.crlIssuerException"
            java.lang.String r8 = "org.bouncycastle.x509.CertPathReviewerMessages"
            org.bouncycastle.x509.X509CRLStoreSelector r0 = new org.bouncycastle.x509.X509CRLStoreSelector
            r0.<init>()
            javax.security.auth.x500.X500Principal r9 = getEncodedIssuerPrincipal(r21)     // Catch: java.io.IOException -> L485
            byte[] r9 = r9.getEncoded()     // Catch: java.io.IOException -> L485
            r0.addIssuerName(r9)     // Catch: java.io.IOException -> L485
            r0.setCertificateChecking(r2)
            r9 = 3
            java.util.List r13 = r20.getCertStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.util.Collection r13 = findCRLs(r0, r13)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.util.Iterator r14 = r13.iterator()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            boolean r13 = r13.isEmpty()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            if (r13 == 0) goto Lc4
            org.bouncycastle.x509.X509CRLStoreSelector r13 = new org.bouncycastle.x509.X509CRLStoreSelector     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r13.<init>()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.util.List r15 = r20.getCertStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.util.Collection r13 = findCRLs(r13, r15)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.util.Iterator r13 = r13.iterator()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.util.ArrayList r15 = new java.util.ArrayList     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r15.<init>()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
        L4c:
            boolean r16 = r13.hasNext()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            if (r16 == 0) goto L60
            java.lang.Object r16 = r13.next()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.security.cert.X509CRL r16 = (java.security.cert.X509CRL) r16     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            javax.security.auth.x500.X500Principal r10 = r16.getIssuerX500Principal()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r15.add(r10)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            goto L4c
        L60:
            int r10 = r15.size()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            org.bouncycastle.i18n.ErrorBundle r13 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.lang.String r12 = "CertPathReviewer.noCrlInCertstore"
            java.lang.Object[] r11 = new java.lang.Object[r9]     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            org.bouncycastle.i18n.filter.UntrustedInput r9 = new org.bouncycastle.i18n.filter.UntrustedInput     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.util.Collection r0 = r0.getIssuers()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r9.<init>(r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r17 = 0
            r11[r17] = r9     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            org.bouncycastle.i18n.filter.UntrustedInput r0 = new org.bouncycastle.i18n.filter.UntrustedInput     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r0.<init>(r15)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r9 = 1
            r11[r9] = r0     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.lang.Integer r0 = new java.lang.Integer     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r0.<init>(r10)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r9 = 2
            r11[r9] = r0     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r13.<init>(r8, r12, r11)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r1.addNotification(r13, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            goto Lc4
        L8e:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r9 = new org.bouncycastle.i18n.ErrorBundle
            r10 = 3
            java.lang.Object[] r11 = new java.lang.Object[r10]
            java.lang.Throwable r10 = r0.getCause()
            java.lang.String r10 = r10.getMessage()
            r12 = 0
            r11[r12] = r10
            java.lang.Throwable r10 = r0.getCause()
            r12 = 1
            r11[r12] = r10
            java.lang.Throwable r0 = r0.getCause()
            java.lang.Class r0 = r0.getClass()
            java.lang.String r0 = r0.getName()
            r10 = 2
            r11[r10] = r0
            r9.<init>(r8, r6, r11)
            r1.addError(r9, r4)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r14 = r0.iterator()
        Lc4:
            r0 = 0
        Lc5:
            boolean r10 = r14.hasNext()
            if (r10 == 0) goto L135
            java.lang.Object r0 = r14.next()
            java.security.cert.X509CRL r0 = (java.security.cert.X509CRL) r0
            java.util.Date r10 = r0.getNextUpdate()
            if (r10 == 0) goto L10d
            java.util.Date r10 = new java.util.Date
            r10.<init>()
            java.util.Date r11 = r0.getNextUpdate()
            boolean r10 = r10.before(r11)
            if (r10 == 0) goto Le7
            goto L10d
        Le7:
            org.bouncycastle.i18n.ErrorBundle r10 = new org.bouncycastle.i18n.ErrorBundle
            r11 = 2
            java.lang.Object[] r12 = new java.lang.Object[r11]
            org.bouncycastle.i18n.filter.TrustedInput r11 = new org.bouncycastle.i18n.filter.TrustedInput
            java.util.Date r13 = r0.getThisUpdate()
            r11.<init>(r13)
            r13 = 0
            r12[r13] = r11
            org.bouncycastle.i18n.filter.TrustedInput r11 = new org.bouncycastle.i18n.filter.TrustedInput
            java.util.Date r13 = r0.getNextUpdate()
            r11.<init>(r13)
            r13 = 1
            r12[r13] = r11
            java.lang.String r11 = "CertPathReviewer.localInvalidCRL"
            r10.<init>(r8, r11, r12)
            r1.addNotification(r10, r4)
            goto Lc5
        L10d:
            org.bouncycastle.i18n.ErrorBundle r10 = new org.bouncycastle.i18n.ErrorBundle
            r11 = 2
            java.lang.Object[] r12 = new java.lang.Object[r11]
            org.bouncycastle.i18n.filter.TrustedInput r11 = new org.bouncycastle.i18n.filter.TrustedInput
            java.util.Date r13 = r0.getThisUpdate()
            r11.<init>(r13)
            r13 = 0
            r12[r13] = r11
            org.bouncycastle.i18n.filter.TrustedInput r11 = new org.bouncycastle.i18n.filter.TrustedInput
            java.util.Date r13 = r0.getNextUpdate()
            r11.<init>(r13)
            r13 = 1
            r12[r13] = r11
            java.lang.String r11 = "CertPathReviewer.localValidCRL"
            r10.<init>(r8, r11, r12)
            r1.addNotification(r10, r4)
            r10 = r0
            r0 = 1
            goto L137
        L135:
            r10 = r0
            r0 = 0
        L137:
            if (r0 != 0) goto L239
            java.util.Iterator r11 = r25.iterator()
            r12 = r0
        L13e:
            boolean r0 = r11.hasNext()
            if (r0 == 0) goto L235
            java.lang.Object r0 = r11.next()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L222
            java.lang.String r0 = (java.lang.String) r0     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L222
            java.security.cert.X509CRL r13 = r1.getCRL(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L222
            if (r13 == 0) goto L21e
            javax.security.auth.x500.X500Principal r14 = r21.getIssuerX500Principal()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L222
            javax.security.auth.x500.X500Principal r15 = r13.getIssuerX500Principal()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L222
            boolean r14 = r14.equals(r15)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L222
            if (r14 != 0) goto L19a
            org.bouncycastle.i18n.ErrorBundle r14 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L222
            java.lang.String r15 = "CertPathReviewer.onlineCRLWrongCA"
            r18 = r10
            r9 = 3
            java.lang.Object[] r10 = new java.lang.Object[r9]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            org.bouncycastle.i18n.filter.UntrustedInput r9 = new org.bouncycastle.i18n.filter.UntrustedInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            javax.security.auth.x500.X500Principal r13 = r13.getIssuerX500Principal()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            java.lang.String r13 = r13.getName()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            r9.<init>(r13)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            r13 = 0
            r10[r13] = r9     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            org.bouncycastle.i18n.filter.UntrustedInput r9 = new org.bouncycastle.i18n.filter.UntrustedInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            javax.security.auth.x500.X500Principal r13 = r21.getIssuerX500Principal()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            java.lang.String r13 = r13.getName()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            r9.<init>(r13)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            r13 = 1
            r10[r13] = r9     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            org.bouncycastle.i18n.filter.UntrustedUrlInput r9 = new org.bouncycastle.i18n.filter.UntrustedUrlInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            r9.<init>(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            r13 = 2
            r10[r13] = r9     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            r14.<init>(r8, r15, r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            r1.addNotification(r14, r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
        L195:
            r25 = r11
        L197:
            r11 = 3
            goto L22f
        L19a:
            r18 = r10
            java.util.Date r9 = r13.getNextUpdate()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            if (r9 == 0) goto L1e4
            java.util.Date r9 = new java.util.Date     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            r9.<init>()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            java.util.Date r10 = r13.getNextUpdate()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            boolean r9 = r9.before(r10)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            if (r9 == 0) goto L1b2
            goto L1e4
        L1b2:
            org.bouncycastle.i18n.ErrorBundle r9 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            java.lang.String r10 = "CertPathReviewer.onlineInvalidCRL"
            r14 = 3
            java.lang.Object[] r15 = new java.lang.Object[r14]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            org.bouncycastle.i18n.filter.TrustedInput r14 = new org.bouncycastle.i18n.filter.TrustedInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L21c
            r25 = r11
            java.util.Date r11 = r13.getThisUpdate()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L1e2
            r14.<init>(r11)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L1e2
            r11 = 0
            r15[r11] = r14     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L1e2
            org.bouncycastle.i18n.filter.TrustedInput r11 = new org.bouncycastle.i18n.filter.TrustedInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L1e2
            java.util.Date r13 = r13.getNextUpdate()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L1e2
            r11.<init>(r13)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L1e2
            r13 = 1
            r15[r13] = r11     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L1e2
            org.bouncycastle.i18n.filter.UntrustedUrlInput r11 = new org.bouncycastle.i18n.filter.UntrustedUrlInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L1e2
            r11.<init>(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L1e2
            r13 = 2
            r15[r13] = r11     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L1e2
            r9.<init>(r8, r10, r15)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L1e2
            r1.addNotification(r9, r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L1e2
            goto L197
        L1e2:
            r0 = move-exception
            goto L227
        L1e4:
            r25 = r11
            org.bouncycastle.i18n.ErrorBundle r9 = new org.bouncycastle.i18n.ErrorBundle     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L218
            java.lang.String r10 = "CertPathReviewer.onlineValidCRL"
            r11 = 3
            java.lang.Object[] r12 = new java.lang.Object[r11]     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            org.bouncycastle.i18n.filter.TrustedInput r14 = new org.bouncycastle.i18n.filter.TrustedInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            java.util.Date r15 = r13.getThisUpdate()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            r14.<init>(r15)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            r15 = 0
            r12[r15] = r14     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            org.bouncycastle.i18n.filter.TrustedInput r14 = new org.bouncycastle.i18n.filter.TrustedInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            java.util.Date r15 = r13.getNextUpdate()     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            r14.<init>(r15)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            r15 = 1
            r12[r15] = r14     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            org.bouncycastle.i18n.filter.UntrustedUrlInput r14 = new org.bouncycastle.i18n.filter.UntrustedUrlInput     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            r14.<init>(r0)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            r15 = 2
            r12[r15] = r14     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            r9.<init>(r8, r10, r12)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            r1.addNotification(r9, r4)     // Catch: org.bouncycastle.x509.CertPathReviewerException -> L216
            r10 = r13
            r9 = 1
            goto L23c
        L216:
            r0 = move-exception
            goto L21a
        L218:
            r0 = move-exception
            r11 = 3
        L21a:
            r12 = 1
            goto L228
        L21c:
            r0 = move-exception
            goto L225
        L21e:
            r18 = r10
            goto L195
        L222:
            r0 = move-exception
            r18 = r10
        L225:
            r25 = r11
        L227:
            r11 = 3
        L228:
            org.bouncycastle.i18n.ErrorBundle r0 = r0.getErrorMessage()
            r1.addNotification(r0, r4)
        L22f:
            r11 = r25
            r10 = r18
            goto L13e
        L235:
            r18 = r10
            r9 = r12
            goto L23c
        L239:
            r18 = r10
            r9 = r0
        L23c:
            if (r10 == 0) goto L475
            r0 = 7
            if (r23 == 0) goto L25d
            boolean[] r11 = r23.getKeyUsage()
            if (r11 == 0) goto L25d
            int r12 = r11.length
            if (r12 < r0) goto L250
            r12 = 6
            boolean r11 = r11[r12]
            if (r11 == 0) goto L250
            goto L25d
        L250:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.noCrlSigningPermited"
            r0.<init>(r8, r2)
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException
            r2.<init>(r0)
            throw r2
        L25d:
            if (r3 == 0) goto L468
            java.lang.String r11 = "BC"
            r10.verify(r3, r11)     // Catch: java.lang.Exception -> L45a
            java.math.BigInteger r3 = r21.getSerialNumber()
            java.security.cert.X509CRLEntry r3 = r10.getRevokedCertificate(r3)
            if (r3 == 0) goto L2ef
            boolean r11 = r3.hasExtensions()
            if (r11 == 0) goto L2a4
            org.bouncycastle.asn1.DERObjectIdentifier r11 = org.bouncycastle.asn1.x509.X509Extensions.ReasonCode     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L296
            java.lang.String r11 = r11.getId()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L296
            org.bouncycastle.asn1.DERObject r11 = getExtensionValue(r3, r11)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L296
            org.bouncycastle.asn1.DEREnumerated r11 = org.bouncycastle.asn1.DEREnumerated.getInstance(r11)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L296
            if (r11 == 0) goto L291
            java.lang.String[] r0 = org.bouncycastle.x509.PKIXCertPathReviewer.crlReasons
            java.math.BigInteger r11 = r11.getValue()
            int r11 = r11.intValue()
            r0 = r0[r11]
            goto L2a5
        L291:
            java.lang.String[] r11 = org.bouncycastle.x509.PKIXCertPathReviewer.crlReasons
            r0 = r11[r0]
            goto L2a5
        L296:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r3 = "CertPathReviewer.crlReasonExtError"
            r2.<init>(r8, r3)
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException
            r3.<init>(r2, r0)
            throw r3
        L2a4:
            r0 = 0
        L2a5:
            org.bouncycastle.i18n.LocaleString r11 = new org.bouncycastle.i18n.LocaleString
            r11.<init>(r8, r0)
            java.util.Date r0 = r3.getRevocationDate()
            r12 = r22
            boolean r0 = r12.before(r0)
            if (r0 == 0) goto L2d0
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            r12 = 2
            java.lang.Object[] r12 = new java.lang.Object[r12]
            org.bouncycastle.i18n.filter.TrustedInput r13 = new org.bouncycastle.i18n.filter.TrustedInput
            java.util.Date r3 = r3.getRevocationDate()
            r13.<init>(r3)
            r14 = 0
            r12[r14] = r13
            r13 = 1
            r12[r13] = r11
            java.lang.String r3 = "CertPathReviewer.revokedAfterValidation"
            r0.<init>(r8, r3, r12)
            goto L2f6
        L2d0:
            r12 = 2
            r13 = 1
            r14 = 0
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.Object[] r2 = new java.lang.Object[r12]
            org.bouncycastle.i18n.filter.TrustedInput r4 = new org.bouncycastle.i18n.filter.TrustedInput
            java.util.Date r3 = r3.getRevocationDate()
            r4.<init>(r3)
            r2[r14] = r4
            r2[r13] = r11
            java.lang.String r3 = "CertPathReviewer.certRevoked"
            r0.<init>(r8, r3, r2)
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException
            r2.<init>(r0)
            throw r2
        L2ef:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r3 = "CertPathReviewer.notRevoked"
            r0.<init>(r8, r3)
        L2f6:
            r1.addNotification(r0, r4)
            java.util.Date r0 = r10.getNextUpdate()
            if (r0 == 0) goto L328
            java.util.Date r0 = r10.getNextUpdate()
            java.util.Date r3 = new java.util.Date
            r3.<init>()
            boolean r0 = r0.before(r3)
            if (r0 == 0) goto L328
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            r3 = 1
            java.lang.Object[] r11 = new java.lang.Object[r3]
            org.bouncycastle.i18n.filter.TrustedInput r12 = new org.bouncycastle.i18n.filter.TrustedInput
            java.util.Date r13 = r10.getNextUpdate()
            r12.<init>(r13)
            r13 = 0
            r11[r13] = r12
            java.lang.String r12 = "CertPathReviewer.crlUpdateAvailable"
            r0.<init>(r8, r12, r11)
            r1.addNotification(r0, r4)
            goto L32a
        L328:
            r3 = 1
            r13 = 0
        L32a:
            java.lang.String r0 = org.bouncycastle.x509.PKIXCertPathReviewer.ISSUING_DISTRIBUTION_POINT     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L44f
            org.bouncycastle.asn1.DERObject r0 = getExtensionValue(r10, r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L44f
            java.lang.String r4 = org.bouncycastle.x509.PKIXCertPathReviewer.DELTA_CRL_INDICATOR     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L442
            org.bouncycastle.asn1.DERObject r4 = getExtensionValue(r10, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L442
            if (r4 == 0) goto L3d8
            org.bouncycastle.x509.X509CRLStoreSelector r11 = new org.bouncycastle.x509.X509CRLStoreSelector
            r11.<init>()
            javax.security.auth.x500.X500Principal r12 = getIssuerPrincipal(r10)     // Catch: java.io.IOException -> L3cc
            byte[] r12 = r12.getEncoded()     // Catch: java.io.IOException -> L3cc
            r11.addIssuerName(r12)     // Catch: java.io.IOException -> L3cc
            org.bouncycastle.asn1.DERInteger r4 = (org.bouncycastle.asn1.DERInteger) r4
            java.math.BigInteger r4 = r4.getPositiveValue()
            r11.setMinCRLNumber(r4)
            java.lang.String r4 = org.bouncycastle.x509.PKIXCertPathReviewer.CRL_NUMBER     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3be
            org.bouncycastle.asn1.DERObject r4 = getExtensionValue(r10, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3be
            org.bouncycastle.asn1.DERInteger r4 = (org.bouncycastle.asn1.DERInteger) r4     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3be
            java.math.BigInteger r4 = r4.getPositiveValue()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3be
            r14 = 1
            java.math.BigInteger r7 = java.math.BigInteger.valueOf(r14)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3be
            java.math.BigInteger r4 = r4.subtract(r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3be
            r11.setMaxCRLNumber(r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3be
            java.util.List r4 = r20.getCertStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3b2
            java.util.Collection r4 = findCRLs(r11, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3b2
            java.util.Iterator r4 = r4.iterator()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L3b2
        L376:
            boolean r6 = r4.hasNext()
            if (r6 == 0) goto L3a1
            java.lang.Object r6 = r4.next()
            java.security.cert.X509CRL r6 = (java.security.cert.X509CRL) r6
            java.lang.String r7 = org.bouncycastle.x509.PKIXCertPathReviewer.ISSUING_DISTRIBUTION_POINT     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L395
            org.bouncycastle.asn1.DERObject r6 = getExtensionValue(r6, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L395
            if (r0 != 0) goto L38d
            if (r6 != 0) goto L376
            goto L393
        L38d:
            boolean r6 = r0.equals(r6)
            if (r6 == 0) goto L376
        L393:
            r11 = 1
            goto L3a2
        L395:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle
            r2.<init>(r8, r5)
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException
            r3.<init>(r2, r0)
            throw r3
        L3a1:
            r11 = 0
        L3a2:
            if (r11 == 0) goto L3a5
            goto L3d8
        L3a5:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.noBaseCRL"
            r0.<init>(r8, r2)
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException
            r2.<init>(r0)
            throw r2
        L3b2:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle
            r2.<init>(r8, r6)
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException
            r3.<init>(r2, r0)
            throw r3
        L3be:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r3 = "CertPathReviewer.crlNbrExtError"
            r2.<init>(r8, r3)
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException
            r3.<init>(r2, r0)
            throw r3
        L3cc:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle
            r2.<init>(r8, r7)
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException
            r3.<init>(r2, r0)
            throw r3
        L3d8:
            if (r0 == 0) goto L475
            org.bouncycastle.asn1.x509.IssuingDistributionPoint r0 = org.bouncycastle.asn1.x509.IssuingDistributionPoint.getInstance(r0)
            java.lang.String r3 = org.bouncycastle.x509.PKIXCertPathReviewer.BASIC_CONSTRAINTS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L434
            org.bouncycastle.asn1.DERObject r2 = getExtensionValue(r2, r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L434
            org.bouncycastle.asn1.x509.BasicConstraints r2 = org.bouncycastle.asn1.x509.BasicConstraints.getInstance(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L434
            boolean r3 = r0.onlyContainsUserCerts()
            if (r3 == 0) goto L404
            if (r2 == 0) goto L404
            boolean r3 = r2.isCA()
            if (r3 != 0) goto L3f7
            goto L404
        L3f7:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.crlOnlyUserCert"
            r0.<init>(r8, r2)
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException
            r2.<init>(r0)
            throw r2
        L404:
            boolean r3 = r0.onlyContainsCACerts()
            if (r3 == 0) goto L420
            if (r2 == 0) goto L413
            boolean r2 = r2.isCA()
            if (r2 == 0) goto L413
            goto L420
        L413:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.crlOnlyCaCert"
            r0.<init>(r8, r2)
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException
            r2.<init>(r0)
            throw r2
        L420:
            boolean r0 = r0.onlyContainsAttributeCerts()
            if (r0 != 0) goto L427
            goto L475
        L427:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.crlOnlyAttrCert"
            r0.<init>(r8, r2)
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException
            r2.<init>(r0)
            throw r2
        L434:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r3 = "CertPathReviewer.crlBCExtError"
            r2.<init>(r8, r3)
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException
            r3.<init>(r2, r0)
            throw r3
        L442:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.deltaCrlExtError"
            r0.<init>(r8, r2)
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException
            r2.<init>(r0)
            throw r2
        L44f:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            r0.<init>(r8, r5)
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException
            r2.<init>(r0)
            throw r2
        L45a:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r3 = "CertPathReviewer.crlVerifyFailed"
            r2.<init>(r8, r3)
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException
            r3.<init>(r2, r0)
            throw r3
        L468:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.crlNoIssuerPublicKey"
            r0.<init>(r8, r2)
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException
            r2.<init>(r0)
            throw r2
        L475:
            if (r9 == 0) goto L478
            return
        L478:
            org.bouncycastle.i18n.ErrorBundle r0 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r2 = "CertPathReviewer.noValidCrlFound"
            r0.<init>(r8, r2)
            org.bouncycastle.x509.CertPathReviewerException r2 = new org.bouncycastle.x509.CertPathReviewerException
            r2.<init>(r0)
            throw r2
        L485:
            r0 = move-exception
            org.bouncycastle.i18n.ErrorBundle r2 = new org.bouncycastle.i18n.ErrorBundle
            r2.<init>(r8, r7)
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException
            r3.<init>(r2, r0)
            throw r3
    }

    protected void checkRevocation(java.security.cert.PKIXParameters r9, java.security.cert.X509Certificate r10, java.util.Date r11, java.security.cert.X509Certificate r12, java.security.PublicKey r13, java.util.Vector r14, java.util.Vector r15, int r16) throws org.bouncycastle.x509.CertPathReviewerException {
            r8 = this;
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r16
            r0.checkCRLs(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    protected void doChecks() {
            r3 = this;
            boolean r0 = r3.initialized
            if (r0 == 0) goto L3f
            java.util.List[] r0 = r3.notifications
            if (r0 != 0) goto L3e
            int r0 = r3.n
            int r1 = r0 + 1
            java.util.List[] r1 = new java.util.List[r1]
            r3.notifications = r1
            int r0 = r0 + 1
            java.util.List[] r0 = new java.util.List[r0]
            r3.errors = r0
            r0 = 0
        L17:
            java.util.List[] r1 = r3.notifications
            int r2 = r1.length
            if (r0 >= r2) goto L2f
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1[r0] = r2
            java.util.List[] r1 = r3.errors
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1[r0] = r2
            int r0 = r0 + 1
            goto L17
        L2f:
            r3.checkSignatures()
            r3.checkNameConstraints()
            r3.checkPathLength()
            r3.checkPolicy()
            r3.checkCriticalExtensions()
        L3e:
            return
        L3f:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Object not initialized. Call init() first."
            r0.<init>(r1)
            throw r0
    }

    protected java.util.Vector getCRLDistUrls(org.bouncycastle.asn1.x509.CRLDistPoint r8) {
            r7 = this;
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            if (r8 == 0) goto L4a
            org.bouncycastle.asn1.x509.DistributionPoint[] r8 = r8.getDistributionPoints()
            r1 = 0
            r2 = 0
        Ld:
            int r3 = r8.length
            if (r2 >= r3) goto L4a
            r3 = r8[r2]
            org.bouncycastle.asn1.x509.DistributionPointName r3 = r3.getDistributionPoint()
            int r4 = r3.getType()
            if (r4 != 0) goto L47
            org.bouncycastle.asn1.ASN1Encodable r3 = r3.getName()
            org.bouncycastle.asn1.x509.GeneralNames r3 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r3)
            org.bouncycastle.asn1.x509.GeneralName[] r3 = r3.getNames()
            r4 = 0
        L29:
            int r5 = r3.length
            if (r4 >= r5) goto L47
            r5 = r3[r4]
            int r5 = r5.getTagNo()
            r6 = 6
            if (r5 != r6) goto L44
            r5 = r3[r4]
            org.bouncycastle.asn1.DEREncodable r5 = r5.getName()
            org.bouncycastle.asn1.DERIA5String r5 = (org.bouncycastle.asn1.DERIA5String) r5
            java.lang.String r5 = r5.getString()
            r0.add(r5)
        L44:
            int r4 = r4 + 1
            goto L29
        L47:
            int r2 = r2 + 1
            goto Ld
        L4a:
            return r0
    }

    public java.security.cert.CertPath getCertPath() {
            r1 = this;
            java.security.cert.CertPath r0 = r1.certPath
            return r0
    }

    public int getCertPathSize() {
            r1 = this;
            int r0 = r1.n
            return r0
    }

    public java.util.List getErrors(int r2) {
            r1 = this;
            r1.doChecks()
            java.util.List[] r0 = r1.errors
            int r2 = r2 + 1
            r2 = r0[r2]
            return r2
    }

    public java.util.List[] getErrors() {
            r1 = this;
            r1.doChecks()
            java.util.List[] r0 = r1.errors
            return r0
    }

    public java.util.List getNotifications(int r2) {
            r1 = this;
            r1.doChecks()
            java.util.List[] r0 = r1.notifications
            int r2 = r2 + 1
            r2 = r0[r2]
            return r2
    }

    public java.util.List[] getNotifications() {
            r1 = this;
            r1.doChecks()
            java.util.List[] r0 = r1.notifications
            return r0
    }

    protected java.util.Vector getOCSPUrls(org.bouncycastle.asn1.x509.AuthorityInformationAccess r6) {
            r5 = this;
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            if (r6 == 0) goto L3a
            org.bouncycastle.asn1.x509.AccessDescription[] r6 = r6.getAccessDescriptions()
            r1 = 0
        Lc:
            int r2 = r6.length
            if (r1 >= r2) goto L3a
            r2 = r6[r1]
            org.bouncycastle.asn1.DERObjectIdentifier r2 = r2.getAccessMethod()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.x509.AccessDescription.id_ad_ocsp
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L37
            r2 = r6[r1]
            org.bouncycastle.asn1.x509.GeneralName r2 = r2.getAccessLocation()
            int r3 = r2.getTagNo()
            r4 = 6
            if (r3 != r4) goto L37
            org.bouncycastle.asn1.DEREncodable r2 = r2.getName()
            org.bouncycastle.asn1.DERIA5String r2 = (org.bouncycastle.asn1.DERIA5String) r2
            java.lang.String r2 = r2.getString()
            r0.add(r2)
        L37:
            int r1 = r1 + 1
            goto Lc
        L3a:
            return r0
    }

    public java.security.cert.PolicyNode getPolicyTree() {
            r1 = this;
            r1.doChecks()
            java.security.cert.PolicyNode r0 = r1.policyTree
            return r0
    }

    public java.security.PublicKey getSubjectPublicKey() {
            r1 = this;
            r1.doChecks()
            java.security.PublicKey r0 = r1.subjectPublicKey
            return r0
    }

    public java.security.cert.TrustAnchor getTrustAnchor() {
            r1 = this;
            r1.doChecks()
            java.security.cert.TrustAnchor r0 = r1.trustAnchor
            return r0
    }

    public void init(java.security.cert.CertPath r3, java.security.cert.PKIXParameters r4) throws org.bouncycastle.x509.CertPathReviewerException {
            r2 = this;
            boolean r0 = r2.initialized
            if (r0 != 0) goto L50
            r0 = 1
            r2.initialized = r0
            if (r3 == 0) goto L48
            r2.certPath = r3
            java.util.List r3 = r3.getCertificates()
            r2.certs = r3
            int r3 = r3.size()
            r2.n = r3
            java.util.List r3 = r2.certs
            boolean r3 = r3.isEmpty()
            if (r3 != 0) goto L39
            java.lang.Object r3 = r4.clone()
            java.security.cert.PKIXParameters r3 = (java.security.cert.PKIXParameters) r3
            r2.pkixParams = r3
            java.util.Date r3 = getValidDate(r3)
            r2.validDate = r3
            r3 = 0
            r2.notifications = r3
            r2.errors = r3
            r2.trustAnchor = r3
            r2.subjectPublicKey = r3
            r2.policyTree = r3
            return
        L39:
            org.bouncycastle.x509.CertPathReviewerException r3 = new org.bouncycastle.x509.CertPathReviewerException
            org.bouncycastle.i18n.ErrorBundle r4 = new org.bouncycastle.i18n.ErrorBundle
            java.lang.String r0 = "org.bouncycastle.x509.CertPathReviewerMessages"
            java.lang.String r1 = "CertPathReviewer.emptyCertPath"
            r4.<init>(r0, r1)
            r3.<init>(r4)
            throw r3
        L48:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r4 = "certPath was null"
            r3.<init>(r4)
            throw r3
        L50:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r4 = "object is already initialized!"
            r3.<init>(r4)
            throw r3
    }

    public boolean isValidCertPath() {
            r4 = this;
            r4.doChecks()
            r0 = 0
            r1 = 0
        L5:
            java.util.List[] r2 = r4.errors
            int r3 = r2.length
            if (r1 >= r3) goto L16
            r2 = r2[r1]
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L13
            goto L17
        L13:
            int r1 = r1 + 1
            goto L5
        L16:
            r0 = 1
        L17:
            return r0
    }
}
