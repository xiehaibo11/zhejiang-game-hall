package org.bouncycastle.x509;

import cz.msebera.android.httpclient.message.TokenParser;
import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.math.BigInteger;
import java.net.HttpURLConnection;
import java.net.InetAddress;
import java.net.URL;
import java.security.GeneralSecurityException;
import java.security.PublicKey;
import java.security.SignatureException;
import java.security.cert.CertPath;
import java.security.cert.CertPathValidatorException;
import java.security.cert.Certificate;
import java.security.cert.CertificateExpiredException;
import java.security.cert.CertificateFactory;
import java.security.cert.CertificateNotYetValidException;
import java.security.cert.PKIXCertPathChecker;
import java.security.cert.PKIXParameters;
import java.security.cert.PolicyNode;
import java.security.cert.TrustAnchor;
import java.security.cert.X509CRL;
import java.security.cert.X509CRLEntry;
import java.security.cert.X509CertSelector;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Date;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.Vector;
import javax.security.auth.x500.X500Principal;
import kotlin.UByte;
import org.bouncycastle.asn1.ASN1InputStream;
import org.bouncycastle.asn1.ASN1Sequence;
import org.bouncycastle.asn1.ASN1TaggedObject;
import org.bouncycastle.asn1.DEREnumerated;
import org.bouncycastle.asn1.DERIA5String;
import org.bouncycastle.asn1.DERInteger;
import org.bouncycastle.asn1.DERObject;
import org.bouncycastle.asn1.DERObjectIdentifier;
import org.bouncycastle.asn1.x509.AccessDescription;
import org.bouncycastle.asn1.x509.AlgorithmIdentifier;
import org.bouncycastle.asn1.x509.AuthorityInformationAccess;
import org.bouncycastle.asn1.x509.AuthorityKeyIdentifier;
import org.bouncycastle.asn1.x509.BasicConstraints;
import org.bouncycastle.asn1.x509.CRLDistPoint;
import org.bouncycastle.asn1.x509.DistributionPoint;
import org.bouncycastle.asn1.x509.DistributionPointName;
import org.bouncycastle.asn1.x509.GeneralName;
import org.bouncycastle.asn1.x509.GeneralNames;
import org.bouncycastle.asn1.x509.GeneralSubtree;
import org.bouncycastle.asn1.x509.IssuingDistributionPoint;
import org.bouncycastle.asn1.x509.NameConstraints;
import org.bouncycastle.asn1.x509.PolicyInformation;
import org.bouncycastle.asn1.x509.X509Extensions;
import org.bouncycastle.asn1.x509.qualified.MonetaryValue;
import org.bouncycastle.asn1.x509.qualified.QCStatement;
import org.bouncycastle.i18n.ErrorBundle;
import org.bouncycastle.i18n.LocaleString;
import org.bouncycastle.i18n.filter.TrustedInput;
import org.bouncycastle.i18n.filter.UntrustedInput;
import org.bouncycastle.i18n.filter.UntrustedUrlInput;
import org.bouncycastle.jce.provider.AnnotatedException;
import org.bouncycastle.jce.provider.CertPathValidatorUtilities;
import org.bouncycastle.jce.provider.PKIXNameConstraintValidator;
import org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException;
import org.bouncycastle.jce.provider.PKIXPolicyNode;
import org.bouncycastle.x509.extension.X509ExtensionUtil;

public class PKIXCertPathReviewer extends CertPathValidatorUtilities {
    private static final String RESOURCE_NAME = "org.bouncycastle.x509.CertPathReviewerMessages";
    protected CertPath certPath;
    protected List certs;
    protected List[] errors;
    private boolean initialized;
    protected int n;
    protected List[] notifications;
    protected PKIXParameters pkixParams;
    protected PolicyNode policyTree;
    protected PublicKey subjectPublicKey;
    protected TrustAnchor trustAnchor;
    protected Date validDate;
    private static final String QC_STATEMENT = X509Extensions.QCStatements.getId();
    private static final String CRL_DIST_POINTS = X509Extensions.CRLDistributionPoints.getId();
    private static final String AUTH_INFO_ACCESS = X509Extensions.AuthorityInfoAccess.getId();

    public PKIXCertPathReviewer() {
    }

    public PKIXCertPathReviewer(CertPath certPath, PKIXParameters pKIXParameters) throws CertPathReviewerException {
        init(certPath, pKIXParameters);
    }

    private String IPtoString(byte[] bArr) {
        try {
            return InetAddress.getByAddress(bArr).getHostAddress();
        } catch (Exception unused) {
            StringBuffer stringBuffer = new StringBuffer();
            for (int i = 0; i != bArr.length; i++) {
                stringBuffer.append(Integer.toHexString(bArr[i] & UByte.MAX_VALUE));
                stringBuffer.append(TokenParser.SP);
            }
            return stringBuffer.toString();
        }
    }

    private void checkCriticalExtensions() {
        List<PKIXCertPathChecker> certPathCheckers = this.pkixParams.getCertPathCheckers();
        Iterator<PKIXCertPathChecker> it = certPathCheckers.iterator();
        while (it.hasNext()) {
            try {
                try {
                    it.next().init(false);
                } catch (CertPathValidatorException e) {
                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.certPathCheckerError", new Object[]{e.getMessage(), e, e.getClass().getName()}), e);
                }
            } catch (CertPathReviewerException e2) {
                addError(e2.getErrorMessage(), e2.getIndex());
                return;
            }
        }
        for (int size = this.certs.size() - 1; size >= 0; size--) {
            X509Certificate x509Certificate = (X509Certificate) this.certs.get(size);
            Set<String> criticalExtensionOIDs = x509Certificate.getCriticalExtensionOIDs();
            if (criticalExtensionOIDs != null && !criticalExtensionOIDs.isEmpty()) {
                criticalExtensionOIDs.remove(KEY_USAGE);
                criticalExtensionOIDs.remove(CERTIFICATE_POLICIES);
                criticalExtensionOIDs.remove(POLICY_MAPPINGS);
                criticalExtensionOIDs.remove(INHIBIT_ANY_POLICY);
                criticalExtensionOIDs.remove(ISSUING_DISTRIBUTION_POINT);
                criticalExtensionOIDs.remove(DELTA_CRL_INDICATOR);
                criticalExtensionOIDs.remove(POLICY_CONSTRAINTS);
                criticalExtensionOIDs.remove(BASIC_CONSTRAINTS);
                criticalExtensionOIDs.remove(SUBJECT_ALTERNATIVE_NAME);
                criticalExtensionOIDs.remove(NAME_CONSTRAINTS);
                if (criticalExtensionOIDs.contains(QC_STATEMENT) && processQcStatements(x509Certificate, size)) {
                    criticalExtensionOIDs.remove(QC_STATEMENT);
                }
                Iterator<PKIXCertPathChecker> it2 = certPathCheckers.iterator();
                while (it2.hasNext()) {
                    try {
                        it2.next().check(x509Certificate, criticalExtensionOIDs);
                    } catch (CertPathValidatorException e3) {
                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.criticalExtensionError", new Object[]{e3.getMessage(), e3, e3.getClass().getName()}), e3.getCause(), this.certPath, size);
                    }
                }
                if (!criticalExtensionOIDs.isEmpty()) {
                    Iterator<String> it3 = criticalExtensionOIDs.iterator();
                    while (it3.hasNext()) {
                        addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.unknownCriticalExt", new Object[]{new DERObjectIdentifier(it3.next())}), size);
                    }
                }
            }
        }
    }

    private void checkNameConstraints() {
        PKIXNameConstraintValidator pKIXNameConstraintValidator = new PKIXNameConstraintValidator();
        try {
            for (int size = this.certs.size() - 1; size > 0; size--) {
                X509Certificate x509Certificate = (X509Certificate) this.certs.get(size);
                if (!isSelfIssued(x509Certificate)) {
                    X500Principal subjectPrincipal = getSubjectPrincipal(x509Certificate);
                    try {
                        ASN1Sequence aSN1Sequence = (ASN1Sequence) new ASN1InputStream(new ByteArrayInputStream(subjectPrincipal.getEncoded())).readObject();
                        try {
                            pKIXNameConstraintValidator.checkPermittedDN(aSN1Sequence);
                            try {
                                pKIXNameConstraintValidator.checkExcludedDN(aSN1Sequence);
                                try {
                                    ASN1Sequence aSN1Sequence2 = (ASN1Sequence) getExtensionValue(x509Certificate, SUBJECT_ALTERNATIVE_NAME);
                                    if (aSN1Sequence2 != null) {
                                        for (int i = 0; i < aSN1Sequence2.size(); i++) {
                                            GeneralName generalName = GeneralName.getInstance(aSN1Sequence2.getObjectAt(i));
                                            try {
                                                pKIXNameConstraintValidator.checkPermitted(generalName);
                                                pKIXNameConstraintValidator.checkExcluded(generalName);
                                            } catch (PKIXNameConstraintValidatorException e) {
                                                throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.notPermittedEmail", new Object[]{new UntrustedInput(generalName)}), e, this.certPath, size);
                                            }
                                        }
                                    }
                                } catch (AnnotatedException e2) {
                                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.subjAltNameExtError"), e2, this.certPath, size);
                                }
                            } catch (PKIXNameConstraintValidatorException e3) {
                                throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.excludedDN", new Object[]{new UntrustedInput(subjectPrincipal.getName())}), e3, this.certPath, size);
                            }
                        } catch (PKIXNameConstraintValidatorException e4) {
                            throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.notPermittedDN", new Object[]{new UntrustedInput(subjectPrincipal.getName())}), e4, this.certPath, size);
                        }
                    } catch (IOException e5) {
                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.ncSubjectNameError", new Object[]{new UntrustedInput(subjectPrincipal)}), e5, this.certPath, size);
                    }
                }
                try {
                    ASN1Sequence aSN1Sequence3 = (ASN1Sequence) getExtensionValue(x509Certificate, NAME_CONSTRAINTS);
                    if (aSN1Sequence3 != null) {
                        NameConstraints nameConstraints = new NameConstraints(aSN1Sequence3);
                        ASN1Sequence permittedSubtrees = nameConstraints.getPermittedSubtrees();
                        if (permittedSubtrees != null) {
                            pKIXNameConstraintValidator.intersectPermittedSubtree(permittedSubtrees);
                        }
                        ASN1Sequence excludedSubtrees = nameConstraints.getExcludedSubtrees();
                        if (excludedSubtrees != null) {
                            Enumeration objects = excludedSubtrees.getObjects();
                            while (objects.hasMoreElements()) {
                                pKIXNameConstraintValidator.addExcludedSubtree(GeneralSubtree.getInstance(objects.nextElement()));
                            }
                        }
                    }
                } catch (AnnotatedException e6) {
                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.ncExtError"), e6, this.certPath, size);
                }
            }
        } catch (CertPathReviewerException e7) {
            addError(e7.getErrorMessage(), e7.getIndex());
        }
    }

    private void checkPathLength() {
        BasicConstraints basicConstraints;
        BigInteger pathLenConstraint;
        int iIntValue;
        int i = this.n;
        int i2 = 0;
        for (int size = this.certs.size() - 1; size > 0; size--) {
            X509Certificate x509Certificate = (X509Certificate) this.certs.get(size);
            if (!isSelfIssued(x509Certificate)) {
                if (i <= 0) {
                    addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.pathLenghtExtended"));
                }
                i--;
                i2++;
            }
            try {
                basicConstraints = BasicConstraints.getInstance(getExtensionValue(x509Certificate, BASIC_CONSTRAINTS));
            } catch (AnnotatedException unused) {
                addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.processLengthConstError"), size);
                basicConstraints = null;
            }
            if (basicConstraints != null && (pathLenConstraint = basicConstraints.getPathLenConstraint()) != null && (iIntValue = pathLenConstraint.intValue()) < i) {
                i = iIntValue;
            }
        }
        addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.totalPathLength", new Object[]{new Integer(i2)}));
    }

    /* JADX WARN: Removed duplicated region for block: B:109:0x023f A[Catch: CertPathReviewerException -> 0x0602, TryCatch #8 {CertPathReviewerException -> 0x0602, blocks: (B:17:0x006f, B:21:0x007f, B:23:0x008c, B:27:0x009c, B:28:0x00a7, B:30:0x00ad, B:32:0x00ce, B:33:0x00d6, B:35:0x00dc, B:37:0x00e1, B:38:0x00ed, B:42:0x00f9, B:45:0x0100, B:46:0x0109, B:48:0x010f, B:50:0x0119, B:53:0x0120, B:55:0x0124, B:95:0x0210, B:97:0x0216, B:98:0x0219, B:100:0x021f, B:102:0x022b, B:105:0x0233, B:106:0x0236, B:107:0x0239, B:109:0x023f, B:110:0x0248, B:112:0x024e, B:120:0x0271, B:121:0x027d, B:122:0x027e, B:124:0x0282, B:126:0x028a, B:127:0x028e, B:129:0x0294, B:132:0x02b6, B:134:0x02c0, B:135:0x02c5, B:136:0x02d1, B:137:0x02d2, B:138:0x02de, B:140:0x02e1, B:141:0x02ee, B:143:0x02f4, B:145:0x031a, B:147:0x0332, B:146:0x0329, B:148:0x0339, B:149:0x033f, B:151:0x0345, B:153:0x034d, B:164:0x0377, B:157:0x0355, B:158:0x0361, B:160:0x0363, B:161:0x0372, B:167:0x0380, B:178:0x039f, B:180:0x03a9, B:181:0x03ad, B:183:0x03b3, B:188:0x03c3, B:191:0x03d3, B:194:0x03e3, B:196:0x03ed, B:207:0x042f, B:199:0x03f9, B:200:0x0407, B:201:0x0408, B:202:0x0416, B:204:0x0418, B:205:0x0426, B:59:0x0133, B:60:0x0137, B:62:0x013d, B:64:0x0153, B:66:0x015d, B:67:0x0162, B:69:0x0168, B:70:0x0176, B:72:0x017c, B:74:0x0188, B:78:0x0195, B:79:0x019b, B:81:0x01a1, B:86:0x01ba, B:75:0x018b, B:77:0x018f, B:90:0x01f3, B:93:0x0203, B:94:0x020f, B:209:0x043e, B:210:0x044b, B:211:0x044c, B:215:0x045d, B:217:0x0467, B:218:0x046c, B:220:0x0472, B:223:0x047f, B:229:0x0494, B:308:0x05e8, B:309:0x05f4, B:232:0x049f, B:233:0x04ab, B:234:0x04ac, B:236:0x04b2, B:238:0x04ba, B:240:0x04c0, B:243:0x04ca, B:244:0x04cd, B:246:0x04d3, B:248:0x04e3, B:249:0x04e7, B:251:0x04ed, B:252:0x04f5, B:253:0x04f8, B:254:0x04fd, B:255:0x0501, B:257:0x0507, B:259:0x0517, B:261:0x051f, B:262:0x0522, B:264:0x0528, B:266:0x0534, B:267:0x0538, B:268:0x053b, B:269:0x053e, B:270:0x054a, B:272:0x054f, B:274:0x0559, B:275:0x055c, B:277:0x0562, B:279:0x0572, B:280:0x0576, B:282:0x057c, B:284:0x058c, B:285:0x0590, B:286:0x0593, B:287:0x0596, B:288:0x059c, B:290:0x05a2, B:292:0x05b4, B:295:0x05be, B:297:0x05c4, B:298:0x05c7, B:300:0x05cd, B:302:0x05d9, B:303:0x05dd, B:304:0x05e0, B:310:0x05f5, B:311:0x0601), top: B:327:0x006f, inners: #0, #1, #2, #4, #5, #7, #9, #10 }] */
    /* JADX WARN: Removed duplicated region for block: B:271:0x054b  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x0216 A[Catch: CertPathReviewerException -> 0x0602, TryCatch #8 {CertPathReviewerException -> 0x0602, blocks: (B:17:0x006f, B:21:0x007f, B:23:0x008c, B:27:0x009c, B:28:0x00a7, B:30:0x00ad, B:32:0x00ce, B:33:0x00d6, B:35:0x00dc, B:37:0x00e1, B:38:0x00ed, B:42:0x00f9, B:45:0x0100, B:46:0x0109, B:48:0x010f, B:50:0x0119, B:53:0x0120, B:55:0x0124, B:95:0x0210, B:97:0x0216, B:98:0x0219, B:100:0x021f, B:102:0x022b, B:105:0x0233, B:106:0x0236, B:107:0x0239, B:109:0x023f, B:110:0x0248, B:112:0x024e, B:120:0x0271, B:121:0x027d, B:122:0x027e, B:124:0x0282, B:126:0x028a, B:127:0x028e, B:129:0x0294, B:132:0x02b6, B:134:0x02c0, B:135:0x02c5, B:136:0x02d1, B:137:0x02d2, B:138:0x02de, B:140:0x02e1, B:141:0x02ee, B:143:0x02f4, B:145:0x031a, B:147:0x0332, B:146:0x0329, B:148:0x0339, B:149:0x033f, B:151:0x0345, B:153:0x034d, B:164:0x0377, B:157:0x0355, B:158:0x0361, B:160:0x0363, B:161:0x0372, B:167:0x0380, B:178:0x039f, B:180:0x03a9, B:181:0x03ad, B:183:0x03b3, B:188:0x03c3, B:191:0x03d3, B:194:0x03e3, B:196:0x03ed, B:207:0x042f, B:199:0x03f9, B:200:0x0407, B:201:0x0408, B:202:0x0416, B:204:0x0418, B:205:0x0426, B:59:0x0133, B:60:0x0137, B:62:0x013d, B:64:0x0153, B:66:0x015d, B:67:0x0162, B:69:0x0168, B:70:0x0176, B:72:0x017c, B:74:0x0188, B:78:0x0195, B:79:0x019b, B:81:0x01a1, B:86:0x01ba, B:75:0x018b, B:77:0x018f, B:90:0x01f3, B:93:0x0203, B:94:0x020f, B:209:0x043e, B:210:0x044b, B:211:0x044c, B:215:0x045d, B:217:0x0467, B:218:0x046c, B:220:0x0472, B:223:0x047f, B:229:0x0494, B:308:0x05e8, B:309:0x05f4, B:232:0x049f, B:233:0x04ab, B:234:0x04ac, B:236:0x04b2, B:238:0x04ba, B:240:0x04c0, B:243:0x04ca, B:244:0x04cd, B:246:0x04d3, B:248:0x04e3, B:249:0x04e7, B:251:0x04ed, B:252:0x04f5, B:253:0x04f8, B:254:0x04fd, B:255:0x0501, B:257:0x0507, B:259:0x0517, B:261:0x051f, B:262:0x0522, B:264:0x0528, B:266:0x0534, B:267:0x0538, B:268:0x053b, B:269:0x053e, B:270:0x054a, B:272:0x054f, B:274:0x0559, B:275:0x055c, B:277:0x0562, B:279:0x0572, B:280:0x0576, B:282:0x057c, B:284:0x058c, B:285:0x0590, B:286:0x0593, B:287:0x0596, B:288:0x059c, B:290:0x05a2, B:292:0x05b4, B:295:0x05be, B:297:0x05c4, B:298:0x05c7, B:300:0x05cd, B:302:0x05d9, B:303:0x05dd, B:304:0x05e0, B:310:0x05f5, B:311:0x0601), top: B:327:0x006f, inners: #0, #1, #2, #4, #5, #7, #9, #10 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void checkPolicy() {
        int i;
        int i2;
        PKIXPolicyNode pKIXPolicyNodeRemovePolicyNode;
        Set<String> set;
        String str;
        int i3;
        int i4;
        HashSet hashSet;
        String str2;
        int i5;
        int iIntValue;
        int iIntValue2;
        String str3;
        HashSet hashSet2;
        HashSet hashSet3;
        String id;
        int i6;
        int i7;
        Set<String> criticalExtensionOIDs;
        String str4 = "CertPathReviewer.policyExtError";
        Set<String> initialPolicies = this.pkixParams.getInitialPolicies();
        int i8 = this.n + 1;
        ArrayList[] arrayListArr = new ArrayList[i8];
        for (int i9 = 0; i9 < i8; i9++) {
            arrayListArr[i9] = new ArrayList();
        }
        HashSet hashSet4 = new HashSet();
        hashSet4.add("2.5.29.32.0");
        PKIXPolicyNode pKIXPolicyNode = new PKIXPolicyNode(new ArrayList(), 0, hashSet4, null, new HashSet(), "2.5.29.32.0", false);
        arrayListArr[0].add(pKIXPolicyNode);
        if (this.pkixParams.isExplicitPolicyRequired()) {
            i2 = 0;
            i = 1;
        } else {
            i = 1;
            i2 = this.n + 1;
        }
        int i10 = this.pkixParams.isAnyPolicyInhibited() ? 0 : this.n + i;
        int i11 = this.pkixParams.isPolicyMappingInhibited() ? 0 : this.n + i;
        try {
            int size = this.certs.size() - i;
            PKIXPolicyNode pKIXPolicyNodePrepareNextCertB2 = pKIXPolicyNode;
            X509Certificate x509Certificate = null;
            HashSet hashSet5 = null;
            while (size >= 0) {
                int i12 = this.n - size;
                X509Certificate x509Certificate2 = (X509Certificate) this.certs.get(size);
                int i13 = i8;
                try {
                    ASN1Sequence aSN1Sequence = (ASN1Sequence) getExtensionValue(x509Certificate2, CERTIFICATE_POLICIES);
                    if (aSN1Sequence == null || pKIXPolicyNodePrepareNextCertB2 == null) {
                        set = initialPolicies;
                        str = str4;
                        i3 = i10;
                        i4 = i11;
                        pKIXPolicyNodePrepareNextCertB2 = pKIXPolicyNodePrepareNextCertB2;
                    } else {
                        Enumeration objects = aSN1Sequence.getObjects();
                        set = initialPolicies;
                        HashSet hashSet6 = new HashSet();
                        while (objects.hasMoreElements()) {
                            PolicyInformation policyInformation = PolicyInformation.getInstance(objects.nextElement());
                            PKIXPolicyNode pKIXPolicyNode2 = pKIXPolicyNodePrepareNextCertB2;
                            DERObjectIdentifier policyIdentifier = policyInformation.getPolicyIdentifier();
                            String str5 = str4;
                            hashSet6.add(policyIdentifier.getId());
                            if (!"2.5.29.32.0".equals(policyIdentifier.getId())) {
                                try {
                                    Set qualifierSet = getQualifierSet(policyInformation.getPolicyQualifiers());
                                    if (!processCertD1i(i12, arrayListArr, policyIdentifier, qualifierSet)) {
                                        processCertD1ii(i12, arrayListArr, policyIdentifier, qualifierSet);
                                    }
                                } catch (CertPathValidatorException e) {
                                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.policyQualifierError"), e, this.certPath, size);
                                }
                            }
                            pKIXPolicyNodePrepareNextCertB2 = pKIXPolicyNode2;
                            str4 = str5;
                        }
                        str = str4;
                        PKIXPolicyNode pKIXPolicyNode3 = pKIXPolicyNodePrepareNextCertB2;
                        if (hashSet5 == null || hashSet5.contains("2.5.29.32.0")) {
                            hashSet2 = hashSet6;
                        } else {
                            hashSet2 = new HashSet();
                            for (Object obj : hashSet5) {
                                if (hashSet6.contains(obj)) {
                                    hashSet2.add(obj);
                                }
                            }
                        }
                        if (i10 > 0 || (i12 < this.n && isSelfIssued(x509Certificate2))) {
                            Enumeration objects2 = aSN1Sequence.getObjects();
                            while (objects2.hasMoreElements()) {
                                PolicyInformation policyInformation2 = PolicyInformation.getInstance(objects2.nextElement());
                                if ("2.5.29.32.0".equals(policyInformation2.getPolicyIdentifier().getId())) {
                                    try {
                                        Set qualifierSet2 = getQualifierSet(policyInformation2.getPolicyQualifiers());
                                        ArrayList arrayList = arrayListArr[i12 - 1];
                                        hashSet3 = hashSet2;
                                        for (int i14 = 0; i14 < arrayList.size(); i14++) {
                                            PKIXPolicyNode pKIXPolicyNode4 = (PKIXPolicyNode) arrayList.get(i14);
                                            for (Object obj2 : pKIXPolicyNode4.getExpectedPolicies()) {
                                                ArrayList arrayList2 = arrayList;
                                                int i15 = i10;
                                                if (obj2 instanceof String) {
                                                    id = (String) obj2;
                                                } else if (obj2 instanceof DERObjectIdentifier) {
                                                    id = ((DERObjectIdentifier) obj2).getId();
                                                } else {
                                                    arrayList = arrayList2;
                                                    i10 = i15;
                                                }
                                                Iterator children = pKIXPolicyNode4.getChildren();
                                                boolean z = false;
                                                while (children.hasNext()) {
                                                    Iterator it = children;
                                                    if (id.equals(((PKIXPolicyNode) children.next()).getValidPolicy())) {
                                                        z = true;
                                                    }
                                                    children = it;
                                                }
                                                if (z) {
                                                    i6 = i11;
                                                } else {
                                                    HashSet hashSet7 = new HashSet();
                                                    hashSet7.add(id);
                                                    i6 = i11;
                                                    PKIXPolicyNode pKIXPolicyNode5 = new PKIXPolicyNode(new ArrayList(), i12, hashSet7, pKIXPolicyNode4, qualifierSet2, id, false);
                                                    pKIXPolicyNode4.addChild(pKIXPolicyNode5);
                                                    arrayListArr[i12].add(pKIXPolicyNode5);
                                                }
                                                arrayList = arrayList2;
                                                i10 = i15;
                                                i11 = i6;
                                            }
                                        }
                                        i3 = i10;
                                        i4 = i11;
                                        pKIXPolicyNodePrepareNextCertB2 = pKIXPolicyNode3;
                                        for (i7 = i12 - 1; i7 >= 0; i7--) {
                                            ArrayList arrayList3 = arrayListArr[i7];
                                            for (int i16 = 0; i16 < arrayList3.size(); i16++) {
                                                PKIXPolicyNode pKIXPolicyNode6 = (PKIXPolicyNode) arrayList3.get(i16);
                                                if (!pKIXPolicyNode6.hasChildren()) {
                                                    PKIXPolicyNode pKIXPolicyNodeRemovePolicyNode2 = removePolicyNode(pKIXPolicyNodePrepareNextCertB2, arrayListArr, pKIXPolicyNode6);
                                                    pKIXPolicyNodePrepareNextCertB2 = pKIXPolicyNodeRemovePolicyNode2;
                                                    if (pKIXPolicyNodeRemovePolicyNode2 == null) {
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                        criticalExtensionOIDs = x509Certificate2.getCriticalExtensionOIDs();
                                        if (criticalExtensionOIDs != null) {
                                            boolean zContains = criticalExtensionOIDs.contains(CERTIFICATE_POLICIES);
                                            ArrayList arrayList4 = arrayListArr[i12];
                                            for (int i17 = 0; i17 < arrayList4.size(); i17++) {
                                                ((PKIXPolicyNode) arrayList4.get(i17)).setCritical(zContains);
                                            }
                                        }
                                        hashSet5 = hashSet3;
                                    } catch (CertPathValidatorException e2) {
                                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.policyQualifierError"), e2, this.certPath, size);
                                    }
                                }
                            }
                            i3 = i10;
                            i4 = i11;
                            hashSet3 = hashSet2;
                            pKIXPolicyNodePrepareNextCertB2 = pKIXPolicyNode3;
                            while (i7 >= 0) {
                            }
                            criticalExtensionOIDs = x509Certificate2.getCriticalExtensionOIDs();
                            if (criticalExtensionOIDs != null) {
                            }
                            hashSet5 = hashSet3;
                        } else {
                            i3 = i10;
                            i4 = i11;
                            hashSet3 = hashSet2;
                            pKIXPolicyNodePrepareNextCertB2 = pKIXPolicyNode3;
                            while (i7 >= 0) {
                            }
                            criticalExtensionOIDs = x509Certificate2.getCriticalExtensionOIDs();
                            if (criticalExtensionOIDs != null) {
                            }
                            hashSet5 = hashSet3;
                        }
                    }
                    if (aSN1Sequence == null) {
                        pKIXPolicyNodePrepareNextCertB2 = null;
                    }
                    if (i2 <= 0 && pKIXPolicyNodePrepareNextCertB2 == null) {
                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.noValidPolicyTree"));
                    }
                    if (i12 != this.n) {
                        try {
                            DERObject extensionValue = getExtensionValue(x509Certificate2, POLICY_MAPPINGS);
                            if (extensionValue != null) {
                                ASN1Sequence aSN1Sequence2 = (ASN1Sequence) extensionValue;
                                int i18 = 0;
                                while (i18 < aSN1Sequence2.size()) {
                                    ASN1Sequence aSN1Sequence3 = (ASN1Sequence) aSN1Sequence2.getObjectAt(i18);
                                    DERObjectIdentifier dERObjectIdentifier = (DERObjectIdentifier) aSN1Sequence3.getObjectAt(0);
                                    DERObjectIdentifier dERObjectIdentifier2 = (DERObjectIdentifier) aSN1Sequence3.getObjectAt(1);
                                    boolean zEquals = "2.5.29.32.0".equals(dERObjectIdentifier.getId());
                                    ASN1Sequence aSN1Sequence4 = aSN1Sequence2;
                                    if (zEquals) {
                                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.invalidPolicyMapping"), this.certPath, size);
                                    }
                                    if ("2.5.29.32.0".equals(dERObjectIdentifier2.getId())) {
                                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.invalidPolicyMapping"), this.certPath, size);
                                    }
                                    i18++;
                                    aSN1Sequence2 = aSN1Sequence4;
                                }
                            }
                            if (extensionValue != null) {
                                ASN1Sequence aSN1Sequence5 = (ASN1Sequence) extensionValue;
                                HashMap map = new HashMap();
                                HashSet<String> hashSet8 = new HashSet();
                                int i19 = 0;
                                while (i19 < aSN1Sequence5.size()) {
                                    ASN1Sequence aSN1Sequence6 = (ASN1Sequence) aSN1Sequence5.getObjectAt(i19);
                                    ASN1Sequence aSN1Sequence7 = aSN1Sequence5;
                                    String id2 = ((DERObjectIdentifier) aSN1Sequence6.getObjectAt(0)).getId();
                                    HashSet hashSet9 = hashSet5;
                                    String id3 = ((DERObjectIdentifier) aSN1Sequence6.getObjectAt(1)).getId();
                                    if (map.containsKey(id2)) {
                                        ((Set) map.get(id2)).add(id3);
                                    } else {
                                        HashSet hashSet10 = new HashSet();
                                        hashSet10.add(id3);
                                        map.put(id2, hashSet10);
                                        hashSet8.add(id2);
                                    }
                                    i19++;
                                    aSN1Sequence5 = aSN1Sequence7;
                                    hashSet5 = hashSet9;
                                }
                                hashSet = hashSet5;
                                for (String str6 : hashSet8) {
                                    if (i4 > 0) {
                                        try {
                                            prepareNextCertB1(i12, arrayListArr, str6, map, x509Certificate2);
                                            str3 = str;
                                        } catch (CertPathValidatorException e3) {
                                            throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.policyQualifierError"), e3, this.certPath, size);
                                        } catch (AnnotatedException e4) {
                                            throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, str), e4, this.certPath, size);
                                        }
                                    } else {
                                        str3 = str;
                                        if (i4 <= 0) {
                                            pKIXPolicyNodePrepareNextCertB2 = prepareNextCertB2(i12, arrayListArr, str6, pKIXPolicyNodePrepareNextCertB2);
                                        }
                                    }
                                    str = str3;
                                }
                            } else {
                                hashSet = hashSet5;
                            }
                            str2 = str;
                            if (isSelfIssued(x509Certificate2)) {
                                i5 = i3;
                                i11 = i4;
                            } else {
                                if (i2 != 0) {
                                    i2--;
                                }
                                i11 = i4 != 0 ? i4 - 1 : i4;
                                i5 = i3 != 0 ? i3 - 1 : i3;
                            }
                            try {
                                ASN1Sequence aSN1Sequence8 = (ASN1Sequence) getExtensionValue(x509Certificate2, POLICY_CONSTRAINTS);
                                if (aSN1Sequence8 != null) {
                                    Enumeration objects3 = aSN1Sequence8.getObjects();
                                    while (objects3.hasMoreElements()) {
                                        ASN1TaggedObject aSN1TaggedObject = (ASN1TaggedObject) objects3.nextElement();
                                        int tagNo = aSN1TaggedObject.getTagNo();
                                        if (tagNo == 0) {
                                            int iIntValue3 = DERInteger.getInstance(aSN1TaggedObject).getValue().intValue();
                                            if (iIntValue3 < i2) {
                                                i2 = iIntValue3;
                                            }
                                        } else if (tagNo == 1 && (iIntValue2 = DERInteger.getInstance(aSN1TaggedObject).getValue().intValue()) < i11) {
                                            i11 = iIntValue2;
                                        }
                                    }
                                }
                                try {
                                    DERInteger dERInteger = (DERInteger) getExtensionValue(x509Certificate2, INHIBIT_ANY_POLICY);
                                    if (dERInteger != null && (iIntValue = dERInteger.getValue().intValue()) < i5) {
                                        i5 = iIntValue;
                                    }
                                } catch (AnnotatedException unused) {
                                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.policyInhibitExtError"), this.certPath, size);
                                }
                            } catch (AnnotatedException unused2) {
                                throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.policyConstExtError"), this.certPath, size);
                            }
                        } catch (AnnotatedException e5) {
                            throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.policyMapExtError"), e5, this.certPath, size);
                        }
                    } else {
                        hashSet = hashSet5;
                        str2 = str;
                        i5 = i3;
                        i11 = i4;
                    }
                    size--;
                    x509Certificate = x509Certificate2;
                    str4 = str2;
                    hashSet5 = hashSet;
                    i8 = i13;
                    i10 = i5;
                    initialPolicies = set;
                } catch (AnnotatedException e6) {
                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, str4), e6, this.certPath, size);
                }
            }
            Set<String> set2 = initialPolicies;
            int i20 = i8;
            PKIXPolicyNode pKIXPolicyNode7 = pKIXPolicyNodePrepareNextCertB2;
            if (!isSelfIssued(x509Certificate) && i2 > 0) {
                i2--;
            }
            try {
                ASN1Sequence aSN1Sequence9 = (ASN1Sequence) getExtensionValue(x509Certificate, POLICY_CONSTRAINTS);
                if (aSN1Sequence9 != null) {
                    Enumeration objects4 = aSN1Sequence9.getObjects();
                    int i21 = i2;
                    while (objects4.hasMoreElements()) {
                        ASN1TaggedObject aSN1TaggedObject2 = (ASN1TaggedObject) objects4.nextElement();
                        if (aSN1TaggedObject2.getTagNo() == 0 && DERInteger.getInstance(aSN1TaggedObject2).getValue().intValue() == 0) {
                            i21 = 0;
                        }
                    }
                    i2 = i21;
                }
                if (pKIXPolicyNode7 == null) {
                    if (this.pkixParams.isExplicitPolicyRequired()) {
                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.explicitPolicy"), this.certPath, size);
                    }
                    pKIXPolicyNodeRemovePolicyNode = null;
                } else if (!isAnyPolicy(set2)) {
                    HashSet<PKIXPolicyNode> hashSet11 = new HashSet();
                    for (int i22 = 0; i22 < i20; i22++) {
                        ArrayList arrayList5 = arrayListArr[i22];
                        for (int i23 = 0; i23 < arrayList5.size(); i23++) {
                            PKIXPolicyNode pKIXPolicyNode8 = (PKIXPolicyNode) arrayList5.get(i23);
                            if ("2.5.29.32.0".equals(pKIXPolicyNode8.getValidPolicy())) {
                                Iterator children2 = pKIXPolicyNode8.getChildren();
                                while (children2.hasNext()) {
                                    PKIXPolicyNode pKIXPolicyNode9 = (PKIXPolicyNode) children2.next();
                                    if (!"2.5.29.32.0".equals(pKIXPolicyNode9.getValidPolicy())) {
                                        hashSet11.add(pKIXPolicyNode9);
                                    }
                                }
                            }
                        }
                    }
                    pKIXPolicyNodeRemovePolicyNode = pKIXPolicyNode7;
                    for (PKIXPolicyNode pKIXPolicyNode10 : hashSet11) {
                        Set<String> set3 = set2;
                        if (!set3.contains(pKIXPolicyNode10.getValidPolicy())) {
                            pKIXPolicyNodeRemovePolicyNode = removePolicyNode(pKIXPolicyNodeRemovePolicyNode, arrayListArr, pKIXPolicyNode10);
                        }
                        set2 = set3;
                    }
                    if (pKIXPolicyNodeRemovePolicyNode != null) {
                        for (int i24 = this.n - 1; i24 >= 0; i24--) {
                            ArrayList arrayList6 = arrayListArr[i24];
                            for (int i25 = 0; i25 < arrayList6.size(); i25++) {
                                PKIXPolicyNode pKIXPolicyNode11 = (PKIXPolicyNode) arrayList6.get(i25);
                                if (!pKIXPolicyNode11.hasChildren()) {
                                    pKIXPolicyNodeRemovePolicyNode = removePolicyNode(pKIXPolicyNodeRemovePolicyNode, arrayListArr, pKIXPolicyNode11);
                                }
                            }
                        }
                    }
                } else if (!this.pkixParams.isExplicitPolicyRequired()) {
                    pKIXPolicyNodeRemovePolicyNode = pKIXPolicyNode7;
                } else {
                    if (hashSet5.isEmpty()) {
                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.explicitPolicy"), this.certPath, size);
                    }
                    HashSet hashSet12 = new HashSet();
                    int i26 = 0;
                    while (true) {
                        int i27 = i20;
                        if (i26 >= i27) {
                            break;
                        }
                        ArrayList arrayList7 = arrayListArr[i26];
                        for (int i28 = 0; i28 < arrayList7.size(); i28++) {
                            PKIXPolicyNode pKIXPolicyNode12 = (PKIXPolicyNode) arrayList7.get(i28);
                            if ("2.5.29.32.0".equals(pKIXPolicyNode12.getValidPolicy())) {
                                Iterator children3 = pKIXPolicyNode12.getChildren();
                                while (children3.hasNext()) {
                                    hashSet12.add(children3.next());
                                }
                            }
                        }
                        i26++;
                        i20 = i27;
                    }
                    Iterator it2 = hashSet12.iterator();
                    while (it2.hasNext()) {
                        hashSet5.contains(((PKIXPolicyNode) it2.next()).getValidPolicy());
                    }
                    if (pKIXPolicyNode7 != null) {
                        pKIXPolicyNodeRemovePolicyNode = pKIXPolicyNode7;
                        for (int i29 = this.n - 1; i29 >= 0; i29--) {
                            ArrayList arrayList8 = arrayListArr[i29];
                            for (int i30 = 0; i30 < arrayList8.size(); i30++) {
                                PKIXPolicyNode pKIXPolicyNode13 = (PKIXPolicyNode) arrayList8.get(i30);
                                if (!pKIXPolicyNode13.hasChildren()) {
                                    pKIXPolicyNodeRemovePolicyNode = removePolicyNode(pKIXPolicyNodeRemovePolicyNode, arrayListArr, pKIXPolicyNode13);
                                }
                            }
                        }
                    }
                }
                if (i2 <= 0 && pKIXPolicyNodeRemovePolicyNode == null) {
                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.invalidPolicy"));
                }
            } catch (AnnotatedException unused3) {
                throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.policyConstExtError"), this.certPath, size);
            }
        } catch (CertPathReviewerException e7) {
            addError(e7.getErrorMessage(), e7.getIndex());
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:26:0x00d6  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x011a  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x011d  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x0142  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x0151  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void checkSignatures() {
        TrustAnchor trustAnchor;
        TrustAnchor trustAnchor2;
        X500Principal subjectPrincipal;
        X509Certificate trustedCert;
        PublicKey publicKey;
        int size;
        ErrorBundle errorBundle;
        ErrorBundle errorBundle2;
        int i;
        int i2;
        PublicKey publicKey2;
        X500Principal x500Principal;
        TrustAnchor trustAnchor3;
        X509Certificate x509Certificate;
        DERObject extensionValue;
        DERObject extensionValue2;
        boolean[] keyUsage;
        X509Certificate x509Certificate2;
        Collection trustAnchors;
        char c = 2;
        char c2 = 0;
        char c3 = 1;
        addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.certPathValidDate", new Object[]{new TrustedInput(this.validDate), new TrustedInput(new Date())}));
        try {
            x509Certificate2 = (X509Certificate) this.certs.get(this.certs.size() - 1);
            trustAnchors = getTrustAnchors(x509Certificate2, this.pkixParams.getTrustAnchors());
        } catch (CertPathReviewerException e) {
            e = e;
            trustAnchor = null;
        }
        if (trustAnchors.size() > 1) {
            addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.conflictingTrustAnchors", new Object[]{new Integer(trustAnchors.size()), new UntrustedInput(x509Certificate2.getIssuerX500Principal())}));
        } else {
            if (!trustAnchors.isEmpty()) {
                trustAnchor = (TrustAnchor) trustAnchors.iterator().next();
                try {
                    try {
                        x509Certificate2.verify(trustAnchor.getTrustedCert() != null ? trustAnchor.getTrustedCert().getPublicKey() : trustAnchor.getCAPublicKey());
                    } catch (SignatureException unused) {
                        addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.trustButInvalidCert"));
                    } catch (Exception unused2) {
                    }
                } catch (CertPathReviewerException e2) {
                    e = e2;
                    addError(e.getErrorMessage());
                }
                trustAnchor2 = trustAnchor;
                if (trustAnchor2 == null) {
                    X509Certificate trustedCert2 = trustAnchor2.getTrustedCert();
                    try {
                        subjectPrincipal = trustedCert2 != null ? getSubjectPrincipal(trustedCert2) : new X500Principal(trustAnchor2.getCAName());
                    } catch (IllegalArgumentException unused3) {
                        addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.trustDNInvalid", new Object[]{new UntrustedInput(trustAnchor2.getCAName())}));
                        subjectPrincipal = null;
                    }
                    if (trustedCert2 != null && (keyUsage = trustedCert2.getKeyUsage()) != null && !keyUsage[5]) {
                        addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.trustKeyUsage"));
                    }
                } else {
                    subjectPrincipal = null;
                }
                if (trustAnchor2 == null) {
                    trustedCert = trustAnchor2.getTrustedCert();
                    publicKey = trustedCert != null ? trustedCert.getPublicKey() : trustAnchor2.getCAPublicKey();
                    try {
                        AlgorithmIdentifier algorithmIdentifier = getAlgorithmIdentifier(publicKey);
                        algorithmIdentifier.getObjectId();
                        algorithmIdentifier.getParameters();
                    } catch (CertPathValidatorException unused4) {
                        addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.trustPubKeyError"));
                    }
                } else {
                    trustedCert = null;
                    publicKey = null;
                }
                X509Certificate x509Certificate3 = trustedCert;
                X500Principal subjectX500Principal = subjectPrincipal;
                PublicKey nextWorkingKey = publicKey;
                size = this.certs.size() - 1;
                while (size >= 0) {
                    int i3 = this.n - size;
                    X509Certificate x509Certificate4 = (X509Certificate) this.certs.get(size);
                    if (nextWorkingKey != null) {
                        try {
                            x509Certificate4.verify(nextWorkingKey, "BC");
                        } catch (GeneralSecurityException e3) {
                            Object[] objArr = new Object[3];
                            objArr[c2] = e3.getMessage();
                            objArr[c3] = e3;
                            objArr[c] = e3.getClass().getName();
                            errorBundle = new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.signatureNotVerified", objArr);
                            addError(errorBundle, size);
                        }
                    } else if (isSelfIssued(x509Certificate4)) {
                        try {
                            x509Certificate4.verify(x509Certificate4.getPublicKey(), "BC");
                            addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.rootKeyIsValidButNotATrustAnchor"), size);
                        } catch (GeneralSecurityException e4) {
                            Object[] objArr2 = new Object[3];
                            objArr2[c2] = e4.getMessage();
                            objArr2[c3] = e4;
                            objArr2[c] = e4.getClass().getName();
                            addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.signatureNotVerified", objArr2), size);
                        }
                    } else {
                        errorBundle = new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.NoIssuerPublicKey");
                        byte[] extensionValue3 = x509Certificate4.getExtensionValue(X509Extensions.AuthorityKeyIdentifier.getId());
                        if (extensionValue3 != null) {
                            try {
                                AuthorityKeyIdentifier authorityKeyIdentifier = AuthorityKeyIdentifier.getInstance(X509ExtensionUtil.fromExtensionValue(extensionValue3));
                                GeneralNames authorityCertIssuer = authorityKeyIdentifier.getAuthorityCertIssuer();
                                if (authorityCertIssuer != null) {
                                    GeneralName generalName = authorityCertIssuer.getNames()[c2];
                                    BigInteger authorityCertSerialNumber = authorityKeyIdentifier.getAuthorityCertSerialNumber();
                                    if (authorityCertSerialNumber != null) {
                                        Object[] objArr3 = new Object[7];
                                        objArr3[c2] = new LocaleString(RESOURCE_NAME, "missingIssuer");
                                        objArr3[1] = " \"";
                                        objArr3[2] = generalName;
                                        objArr3[3] = "\" ";
                                        objArr3[4] = new LocaleString(RESOURCE_NAME, "missingSerial");
                                        objArr3[5] = " ";
                                        objArr3[6] = authorityCertSerialNumber;
                                        errorBundle.setExtraArguments(objArr3);
                                    }
                                }
                            } catch (IOException unused5) {
                            }
                        }
                        addError(errorBundle, size);
                    }
                    try {
                        x509Certificate4.checkValidity(this.validDate);
                    } catch (CertificateExpiredException unused6) {
                        Object[] objArr4 = new Object[1];
                        objArr4[c2] = new TrustedInput(x509Certificate4.getNotAfter());
                        errorBundle2 = new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.certificateExpired", objArr4);
                        addError(errorBundle2, size);
                    } catch (CertificateNotYetValidException unused7) {
                        Object[] objArr5 = new Object[1];
                        objArr5[c2] = new TrustedInput(x509Certificate4.getNotBefore());
                        errorBundle2 = new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.certificateNotYetValid", objArr5);
                        addError(errorBundle2, size);
                    }
                    if (this.pkixParams.isRevocationEnabled()) {
                        try {
                            extensionValue2 = getExtensionValue(x509Certificate4, CRL_DIST_POINTS);
                        } catch (AnnotatedException unused8) {
                            addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlDistPtExtError"), size);
                        }
                        CRLDistPoint cRLDistPoint = extensionValue2 != null ? CRLDistPoint.getInstance(extensionValue2) : null;
                        try {
                            extensionValue = getExtensionValue(x509Certificate4, AUTH_INFO_ACCESS);
                        } catch (AnnotatedException unused9) {
                            addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlAuthInfoAccError"), size);
                        }
                        AuthorityInformationAccess authorityInformationAccess = extensionValue != null ? AuthorityInformationAccess.getInstance(extensionValue) : null;
                        Vector cRLDistUrls = getCRLDistUrls(cRLDistPoint);
                        Vector oCSPUrls = getOCSPUrls(authorityInformationAccess);
                        Iterator it = cRLDistUrls.iterator();
                        while (it.hasNext()) {
                            Object[] objArr6 = new Object[1];
                            objArr6[c2] = new UntrustedUrlInput(it.next());
                            addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlDistPoint", objArr6), size);
                            x509Certificate4 = x509Certificate4;
                        }
                        X509Certificate x509Certificate5 = x509Certificate4;
                        Iterator it2 = oCSPUrls.iterator();
                        while (it2.hasNext()) {
                            Object[] objArr7 = new Object[1];
                            objArr7[c2] = new UntrustedUrlInput(it2.next());
                            addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.ocspLocation", objArr7), size);
                        }
                        try {
                            x509Certificate = x509Certificate5;
                            i = i3;
                            i2 = size;
                            publicKey2 = nextWorkingKey;
                            x500Principal = subjectX500Principal;
                            trustAnchor3 = trustAnchor2;
                        } catch (CertPathReviewerException e5) {
                            e = e5;
                            i = i3;
                            i2 = size;
                            publicKey2 = nextWorkingKey;
                            x500Principal = subjectX500Principal;
                            trustAnchor3 = trustAnchor2;
                            x509Certificate = x509Certificate5;
                        }
                        try {
                            checkRevocation(this.pkixParams, x509Certificate, this.validDate, x509Certificate3, nextWorkingKey, cRLDistUrls, oCSPUrls, i2);
                        } catch (CertPathReviewerException e6) {
                            e = e6;
                            addError(e.getErrorMessage(), i2);
                        }
                    } else {
                        x509Certificate = x509Certificate4;
                        i = i3;
                        i2 = size;
                        publicKey2 = nextWorkingKey;
                        x500Principal = subjectX500Principal;
                        trustAnchor3 = trustAnchor2;
                    }
                    if (x500Principal != null && !x509Certificate.getIssuerX500Principal().equals(x500Principal)) {
                        addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.certWrongIssuer", new Object[]{x500Principal.getName(), x509Certificate.getIssuerX500Principal().getName()}), i2);
                    }
                    if (i != this.n) {
                        if (x509Certificate != null && x509Certificate.getVersion() == 1) {
                            addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.noCACert"), i2);
                        }
                        try {
                            BasicConstraints basicConstraints = BasicConstraints.getInstance(getExtensionValue(x509Certificate, BASIC_CONSTRAINTS));
                            if (basicConstraints == null) {
                                addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.noBasicConstraints"), i2);
                            } else if (!basicConstraints.isCA()) {
                                addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.noCACert"), i2);
                            }
                        } catch (AnnotatedException unused10) {
                            addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.errorProcesingBC"), i2);
                        }
                        boolean[] keyUsage2 = x509Certificate.getKeyUsage();
                        if (keyUsage2 != null && !keyUsage2[5]) {
                            addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.noCertSign"), i2);
                        }
                    }
                    subjectX500Principal = x509Certificate.getSubjectX500Principal();
                    try {
                        nextWorkingKey = getNextWorkingKey(this.certs, i2);
                    } catch (CertPathValidatorException unused11) {
                        nextWorkingKey = publicKey2;
                    }
                    try {
                        AlgorithmIdentifier algorithmIdentifier2 = getAlgorithmIdentifier(nextWorkingKey);
                        algorithmIdentifier2.getObjectId();
                        algorithmIdentifier2.getParameters();
                    } catch (CertPathValidatorException unused12) {
                        addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.pubKeyError"), i2);
                    }
                    size = i2 - 1;
                    trustAnchor2 = trustAnchor3;
                    x509Certificate3 = x509Certificate;
                    c = 2;
                    c2 = 0;
                    c3 = 1;
                }
                this.trustAnchor = trustAnchor2;
                this.subjectPublicKey = nextWorkingKey;
            }
            addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.noTrustAnchorFound", new Object[]{new UntrustedInput(x509Certificate2.getIssuerX500Principal()), new Integer(this.pkixParams.getTrustAnchors().size())}));
        }
        trustAnchor = null;
        trustAnchor2 = trustAnchor;
        if (trustAnchor2 == null) {
        }
        if (trustAnchor2 == null) {
        }
        X509Certificate x509Certificate32 = trustedCert;
        X500Principal subjectX500Principal2 = subjectPrincipal;
        PublicKey nextWorkingKey2 = publicKey;
        size = this.certs.size() - 1;
        while (size >= 0) {
        }
        this.trustAnchor = trustAnchor2;
        this.subjectPublicKey = nextWorkingKey2;
    }

    private X509CRL getCRL(String str) throws CertPathReviewerException {
        try {
            URL url = new URL(str);
            if (!url.getProtocol().equals("http") && !url.getProtocol().equals("https")) {
                return null;
            }
            HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
            httpURLConnection.setUseCaches(false);
            httpURLConnection.setConnectTimeout(2000);
            httpURLConnection.setDoInput(true);
            httpURLConnection.connect();
            if (httpURLConnection.getResponseCode() == 200) {
                return (X509CRL) CertificateFactory.getInstance("X.509", "BC").generateCRL(httpURLConnection.getInputStream());
            }
            throw new Exception(httpURLConnection.getResponseMessage());
        } catch (Exception e) {
            throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.loadCrlDistPointError", new Object[]{new UntrustedInput(str), e.getMessage(), e, e.getClass().getName()}));
        }
    }

    private Collection getTrustAnchors(X509Certificate x509Certificate, Set set) throws CertPathReviewerException {
        ArrayList arrayList = new ArrayList();
        Iterator it = set.iterator();
        X509CertSelector x509CertSelector = new X509CertSelector();
        try {
            x509CertSelector.setSubject(getEncodedIssuerPrincipal(x509Certificate).getEncoded());
            while (it.hasNext()) {
                TrustAnchor trustAnchor = (TrustAnchor) it.next();
                if (trustAnchor.getTrustedCert() != null) {
                    if (x509CertSelector.match(trustAnchor.getTrustedCert())) {
                        arrayList.add(trustAnchor);
                    }
                } else if (trustAnchor.getCAName() != null && trustAnchor.getCAPublicKey() != null && getEncodedIssuerPrincipal(x509Certificate).equals(new X500Principal(trustAnchor.getCAName()))) {
                    arrayList.add(trustAnchor);
                }
            }
            return arrayList;
        } catch (IOException unused) {
            throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.trustAnchorIssuerError"));
        }
    }

    private boolean processQcStatements(X509Certificate x509Certificate, int i) {
        ErrorBundle errorBundle;
        try {
            ASN1Sequence aSN1Sequence = (ASN1Sequence) getExtensionValue(x509Certificate, QC_STATEMENT);
            boolean z = false;
            for (int i2 = 0; i2 < aSN1Sequence.size(); i2++) {
                QCStatement qCStatement = QCStatement.getInstance(aSN1Sequence.getObjectAt(i2));
                if (QCStatement.id_etsi_qcs_QcCompliance.equals(qCStatement.getStatementId())) {
                    errorBundle = new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.QcEuCompliance");
                } else {
                    if (!QCStatement.id_qcs_pkixQCSyntax_v1.equals(qCStatement.getStatementId())) {
                        if (QCStatement.id_etsi_qcs_QcSSCD.equals(qCStatement.getStatementId())) {
                            errorBundle = new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.QcSSCD");
                        } else if (QCStatement.id_etsi_qcs_LimiteValue.equals(qCStatement.getStatementId())) {
                            MonetaryValue monetaryValue = MonetaryValue.getInstance(qCStatement.getStatementInfo());
                            monetaryValue.getCurrency();
                            double dDoubleValue = monetaryValue.getAmount().doubleValue() * Math.pow(10.0d, monetaryValue.getExponent().doubleValue());
                            addNotification(monetaryValue.getCurrency().isAlphabetic() ? new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.QcLimitValueAlpha", new Object[]{monetaryValue.getCurrency().getAlphabetic(), new TrustedInput(new Double(dDoubleValue)), monetaryValue}) : new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.QcLimitValueNum", new Object[]{new Integer(monetaryValue.getCurrency().getNumeric()), new TrustedInput(new Double(dDoubleValue)), monetaryValue}), i);
                        } else {
                            addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.QcUnknownStatement", new Object[]{qCStatement.getStatementId(), new UntrustedInput(qCStatement)}), i);
                            z = true;
                        }
                    }
                }
                addNotification(errorBundle, i);
            }
            return true ^ z;
        } catch (AnnotatedException unused) {
            addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.QcStatementExtError"), i);
            return false;
        }
    }

    protected void addError(ErrorBundle errorBundle) {
        this.errors[0].add(errorBundle);
    }

    protected void addError(ErrorBundle errorBundle, int i) {
        if (i < -1 || i >= this.n) {
            throw new IndexOutOfBoundsException();
        }
        this.errors[i + 1].add(errorBundle);
    }

    protected void addNotification(ErrorBundle errorBundle) {
        this.notifications[0].add(errorBundle);
    }

    protected void addNotification(ErrorBundle errorBundle, int i) {
        if (i < -1 || i >= this.n) {
            throw new IndexOutOfBoundsException();
        }
        this.notifications[i + 1].add(errorBundle);
    }

    protected void checkCRLs(PKIXParameters pKIXParameters, X509Certificate x509Certificate, Date date, X509Certificate x509Certificate2, PublicKey publicKey, Vector vector, int i) throws CertPathReviewerException {
        Iterator it;
        X509CRL x509crl;
        boolean z;
        boolean z2;
        ErrorBundle errorBundle;
        boolean z3;
        String str;
        boolean[] keyUsage;
        X509CRL x509crl2;
        Iterator it2;
        String str2;
        X509CRL crl;
        X509CRLStoreSelector x509CRLStoreSelector = new X509CRLStoreSelector();
        try {
            x509CRLStoreSelector.addIssuerName(getEncodedIssuerPrincipal(x509Certificate).getEncoded());
            x509CRLStoreSelector.setCertificateChecking(x509Certificate);
            try {
                Collection collectionFindCRLs = findCRLs(x509CRLStoreSelector, pKIXParameters.getCertStores());
                it = collectionFindCRLs.iterator();
                if (collectionFindCRLs.isEmpty()) {
                    Iterator it3 = findCRLs(new X509CRLStoreSelector(), pKIXParameters.getCertStores()).iterator();
                    ArrayList arrayList = new ArrayList();
                    while (it3.hasNext()) {
                        arrayList.add(((X509CRL) it3.next()).getIssuerX500Principal());
                    }
                    addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.noCrlInCertstore", new Object[]{new UntrustedInput(x509CRLStoreSelector.getIssuers()), new UntrustedInput(arrayList), new Integer(arrayList.size())}), i);
                }
            } catch (AnnotatedException e) {
                addError(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlExtractionError", new Object[]{e.getCause().getMessage(), e.getCause(), e.getCause().getClass().getName()}), i);
                it = new ArrayList().iterator();
            }
            X509CRL x509crl3 = null;
            while (it.hasNext()) {
                x509crl3 = (X509CRL) it.next();
                if (x509crl3.getNextUpdate() == null || new Date().before(x509crl3.getNextUpdate())) {
                    addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.localValidCRL", new Object[]{new TrustedInput(x509crl3.getThisUpdate()), new TrustedInput(x509crl3.getNextUpdate())}), i);
                    x509crl = x509crl3;
                    z = true;
                    break;
                }
                addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.localInvalidCRL", new Object[]{new TrustedInput(x509crl3.getThisUpdate()), new TrustedInput(x509crl3.getNextUpdate())}), i);
            }
            x509crl = x509crl3;
            z = false;
            if (!z) {
                Iterator it4 = vector.iterator();
                boolean z4 = z;
                while (true) {
                    if (!it4.hasNext()) {
                        z2 = z4;
                        break;
                    }
                    try {
                        str2 = (String) it4.next();
                        crl = getCRL(str2);
                    } catch (CertPathReviewerException e2) {
                        e = e2;
                        x509crl2 = x509crl;
                    }
                    if (crl == null) {
                        x509crl2 = x509crl;
                    } else if (x509Certificate.getIssuerX500Principal().equals(crl.getIssuerX500Principal())) {
                        x509crl2 = x509crl;
                        if (crl.getNextUpdate() != null && !new Date().before(crl.getNextUpdate())) {
                            Object[] objArr = new Object[3];
                            it2 = it4;
                            try {
                                objArr[0] = new TrustedInput(crl.getThisUpdate());
                                objArr[1] = new TrustedInput(crl.getNextUpdate());
                                objArr[2] = new UntrustedUrlInput(str2);
                                addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.onlineInvalidCRL", objArr), i);
                            } catch (CertPathReviewerException e3) {
                                e = e3;
                                addNotification(e.getErrorMessage(), i);
                            }
                            it4 = it2;
                            x509crl = x509crl2;
                        }
                        it2 = it4;
                        try {
                        } catch (CertPathReviewerException e4) {
                            e = e4;
                        }
                        try {
                            addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.onlineValidCRL", new Object[]{new TrustedInput(crl.getThisUpdate()), new TrustedInput(crl.getNextUpdate()), new UntrustedUrlInput(str2)}), i);
                            x509crl = crl;
                            z2 = true;
                            break;
                        } catch (CertPathReviewerException e5) {
                            e = e5;
                            z4 = true;
                            addNotification(e.getErrorMessage(), i);
                            it4 = it2;
                            x509crl = x509crl2;
                        }
                    } else {
                        x509crl2 = x509crl;
                        try {
                            addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.onlineCRLWrongCA", new Object[]{new UntrustedInput(crl.getIssuerX500Principal().getName()), new UntrustedInput(x509Certificate.getIssuerX500Principal().getName()), new UntrustedUrlInput(str2)}), i);
                        } catch (CertPathReviewerException e6) {
                            e = e6;
                            it2 = it4;
                            addNotification(e.getErrorMessage(), i);
                        }
                    }
                    it2 = it4;
                    it4 = it2;
                    x509crl = x509crl2;
                }
            } else {
                z2 = z;
            }
            if (x509crl != null) {
                if (x509Certificate2 != null && (keyUsage = x509Certificate2.getKeyUsage()) != null && (keyUsage.length < 7 || !keyUsage[6])) {
                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.noCrlSigningPermited"));
                }
                if (publicKey == null) {
                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlNoIssuerPublicKey"));
                }
                try {
                    x509crl.verify(publicKey, "BC");
                    X509CRLEntry revokedCertificate = x509crl.getRevokedCertificate(x509Certificate.getSerialNumber());
                    if (revokedCertificate != null) {
                        if (revokedCertificate.hasExtensions()) {
                            try {
                                DEREnumerated dEREnumerated = DEREnumerated.getInstance(getExtensionValue(revokedCertificate, X509Extensions.ReasonCode.getId()));
                                str = dEREnumerated != null ? crlReasons[dEREnumerated.getValue().intValue()] : crlReasons[7];
                            } catch (AnnotatedException e7) {
                                throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlReasonExtError"), e7);
                            }
                        } else {
                            str = null;
                        }
                        LocaleString localeString = new LocaleString(RESOURCE_NAME, str);
                        if (!date.before(revokedCertificate.getRevocationDate())) {
                            throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.certRevoked", new Object[]{new TrustedInput(revokedCertificate.getRevocationDate()), localeString}));
                        }
                        errorBundle = new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.revokedAfterValidation", new Object[]{new TrustedInput(revokedCertificate.getRevocationDate()), localeString});
                    } else {
                        errorBundle = new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.notRevoked");
                    }
                    addNotification(errorBundle, i);
                    if (x509crl.getNextUpdate() != null && x509crl.getNextUpdate().before(new Date())) {
                        addNotification(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlUpdateAvailable", new Object[]{new TrustedInput(x509crl.getNextUpdate())}), i);
                    }
                    try {
                        DERObject extensionValue = getExtensionValue(x509crl, ISSUING_DISTRIBUTION_POINT);
                        try {
                            DERObject extensionValue2 = getExtensionValue(x509crl, DELTA_CRL_INDICATOR);
                            if (extensionValue2 != null) {
                                X509CRLStoreSelector x509CRLStoreSelector2 = new X509CRLStoreSelector();
                                try {
                                    x509CRLStoreSelector2.addIssuerName(getIssuerPrincipal(x509crl).getEncoded());
                                    x509CRLStoreSelector2.setMinCRLNumber(((DERInteger) extensionValue2).getPositiveValue());
                                    try {
                                        x509CRLStoreSelector2.setMaxCRLNumber(((DERInteger) getExtensionValue(x509crl, CRL_NUMBER)).getPositiveValue().subtract(BigInteger.valueOf(1L)));
                                        try {
                                            Iterator it5 = findCRLs(x509CRLStoreSelector2, pKIXParameters.getCertStores()).iterator();
                                            while (it5.hasNext()) {
                                                try {
                                                    DERObject extensionValue3 = getExtensionValue((X509CRL) it5.next(), ISSUING_DISTRIBUTION_POINT);
                                                    if (extensionValue == null) {
                                                        if (extensionValue3 == null) {
                                                            z3 = true;
                                                            break;
                                                        }
                                                    } else if (extensionValue.equals(extensionValue3)) {
                                                        z3 = true;
                                                        break;
                                                    }
                                                } catch (AnnotatedException e8) {
                                                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.distrPtExtError"), e8);
                                                }
                                            }
                                            z3 = false;
                                            if (!z3) {
                                                throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.noBaseCRL"));
                                            }
                                        } catch (AnnotatedException e9) {
                                            throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlExtractionError"), e9);
                                        }
                                    } catch (AnnotatedException e10) {
                                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlNbrExtError"), e10);
                                    }
                                } catch (IOException e11) {
                                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlIssuerException"), e11);
                                }
                            }
                            if (extensionValue != null) {
                                IssuingDistributionPoint issuingDistributionPoint = IssuingDistributionPoint.getInstance(extensionValue);
                                try {
                                    BasicConstraints basicConstraints = BasicConstraints.getInstance(getExtensionValue(x509Certificate, BASIC_CONSTRAINTS));
                                    if (issuingDistributionPoint.onlyContainsUserCerts() && basicConstraints != null && basicConstraints.isCA()) {
                                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlOnlyUserCert"));
                                    }
                                    if (issuingDistributionPoint.onlyContainsCACerts() && (basicConstraints == null || !basicConstraints.isCA())) {
                                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlOnlyCaCert"));
                                    }
                                    if (issuingDistributionPoint.onlyContainsAttributeCerts()) {
                                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlOnlyAttrCert"));
                                    }
                                } catch (AnnotatedException e12) {
                                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlBCExtError"), e12);
                                }
                            }
                        } catch (AnnotatedException unused) {
                            throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.deltaCrlExtError"));
                        }
                    } catch (AnnotatedException unused2) {
                        throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.distrPtExtError"));
                    }
                } catch (Exception e13) {
                    throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlVerifyFailed"), e13);
                }
            }
            if (!z2) {
                throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.noValidCrlFound"));
            }
        } catch (IOException e14) {
            throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.crlIssuerException"), e14);
        }
    }

    protected void checkRevocation(PKIXParameters pKIXParameters, X509Certificate x509Certificate, Date date, X509Certificate x509Certificate2, PublicKey publicKey, Vector vector, Vector vector2, int i) throws CertPathReviewerException {
        checkCRLs(pKIXParameters, x509Certificate, date, x509Certificate2, publicKey, vector, i);
    }

    protected void doChecks() {
        if (!this.initialized) {
            throw new IllegalStateException("Object not initialized. Call init() first.");
        }
        if (this.notifications != null) {
            return;
        }
        int i = this.n;
        this.notifications = new List[i + 1];
        this.errors = new List[i + 1];
        int i2 = 0;
        while (true) {
            List[] listArr = this.notifications;
            if (i2 >= listArr.length) {
                checkSignatures();
                checkNameConstraints();
                checkPathLength();
                checkPolicy();
                checkCriticalExtensions();
                return;
            }
            listArr[i2] = new ArrayList();
            this.errors[i2] = new ArrayList();
            i2++;
        }
    }

    protected Vector getCRLDistUrls(CRLDistPoint cRLDistPoint) {
        Vector vector = new Vector();
        if (cRLDistPoint != null) {
            for (DistributionPoint distributionPoint : cRLDistPoint.getDistributionPoints()) {
                DistributionPointName distributionPoint2 = distributionPoint.getDistributionPoint();
                if (distributionPoint2.getType() == 0) {
                    GeneralName[] names = GeneralNames.getInstance(distributionPoint2.getName()).getNames();
                    for (int i = 0; i < names.length; i++) {
                        if (names[i].getTagNo() == 6) {
                            vector.add(((DERIA5String) names[i].getName()).getString());
                        }
                    }
                }
            }
        }
        return vector;
    }

    public CertPath getCertPath() {
        return this.certPath;
    }

    public int getCertPathSize() {
        return this.n;
    }

    public List getErrors(int i) {
        doChecks();
        return this.errors[i + 1];
    }

    public List[] getErrors() {
        doChecks();
        return this.errors;
    }

    public List getNotifications(int i) {
        doChecks();
        return this.notifications[i + 1];
    }

    public List[] getNotifications() {
        doChecks();
        return this.notifications;
    }

    protected Vector getOCSPUrls(AuthorityInformationAccess authorityInformationAccess) {
        Vector vector = new Vector();
        if (authorityInformationAccess != null) {
            AccessDescription[] accessDescriptions = authorityInformationAccess.getAccessDescriptions();
            for (int i = 0; i < accessDescriptions.length; i++) {
                if (accessDescriptions[i].getAccessMethod().equals(AccessDescription.id_ad_ocsp)) {
                    GeneralName accessLocation = accessDescriptions[i].getAccessLocation();
                    if (accessLocation.getTagNo() == 6) {
                        vector.add(((DERIA5String) accessLocation.getName()).getString());
                    }
                }
            }
        }
        return vector;
    }

    public PolicyNode getPolicyTree() {
        doChecks();
        return this.policyTree;
    }

    public PublicKey getSubjectPublicKey() {
        doChecks();
        return this.subjectPublicKey;
    }

    public TrustAnchor getTrustAnchor() {
        doChecks();
        return this.trustAnchor;
    }

    public void init(CertPath certPath, PKIXParameters pKIXParameters) throws CertPathReviewerException {
        if (this.initialized) {
            throw new IllegalStateException("object is already initialized!");
        }
        this.initialized = true;
        if (certPath == null) {
            throw new NullPointerException("certPath was null");
        }
        this.certPath = certPath;
        List<? extends Certificate> certificates = certPath.getCertificates();
        this.certs = certificates;
        this.n = certificates.size();
        if (this.certs.isEmpty()) {
            throw new CertPathReviewerException(new ErrorBundle(RESOURCE_NAME, "CertPathReviewer.emptyCertPath"));
        }
        PKIXParameters pKIXParameters2 = (PKIXParameters) pKIXParameters.clone();
        this.pkixParams = pKIXParameters2;
        this.validDate = getValidDate(pKIXParameters2);
        this.notifications = null;
        this.errors = null;
        this.trustAnchor = null;
        this.subjectPublicKey = null;
        this.policyTree = null;
    }

    public boolean isValidCertPath() {
        doChecks();
        int i = 0;
        while (true) {
            List[] listArr = this.errors;
            if (i >= listArr.length) {
                return true;
            }
            if (!listArr[i].isEmpty()) {
                return false;
            }
            i++;
        }
    }
}
