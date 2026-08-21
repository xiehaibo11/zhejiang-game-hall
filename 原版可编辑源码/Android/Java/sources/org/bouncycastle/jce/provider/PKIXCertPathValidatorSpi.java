package org.bouncycastle.jce.provider;

import java.security.InvalidAlgorithmParameterException;
import java.security.PublicKey;
import java.security.cert.CertPath;
import java.security.cert.CertPathParameters;
import java.security.cert.CertPathValidatorException;
import java.security.cert.CertPathValidatorResult;
import java.security.cert.CertPathValidatorSpi;
import java.security.cert.Certificate;
import java.security.cert.PKIXCertPathChecker;
import java.security.cert.PKIXCertPathValidatorResult;
import java.security.cert.PKIXParameters;
import java.security.cert.TrustAnchor;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import javax.security.auth.x500.X500Principal;
import org.bouncycastle.asn1.x509.AlgorithmIdentifier;
import org.bouncycastle.jce.exception.ExtCertPathValidatorException;
import org.bouncycastle.x509.ExtendedPKIXParameters;

public class PKIXCertPathValidatorSpi extends CertPathValidatorSpi {
    @Override
    public CertPathValidatorResult engineValidate(CertPath certPath, CertPathParameters certPathParameters) throws CertPathValidatorException, InvalidAlgorithmParameterException {
        X500Principal x500Principal;
        PublicKey cAPublicKey;
        HashSet hashSet;
        if (!(certPathParameters instanceof PKIXParameters)) {
            throw new InvalidAlgorithmParameterException("Parameters must be a " + PKIXParameters.class.getName() + " instance.");
        }
        ExtendedPKIXParameters extendedPKIXParameters = certPathParameters instanceof ExtendedPKIXParameters ? (ExtendedPKIXParameters) certPathParameters : ExtendedPKIXParameters.getInstance((PKIXParameters) certPathParameters);
        if (extendedPKIXParameters.getTrustAnchors() == null) {
            throw new InvalidAlgorithmParameterException("trustAnchors is null, this is not allowed for certification path validation.");
        }
        List<? extends Certificate> certificates = certPath.getCertificates();
        int size = certificates.size();
        boolean z = false;
        if (certificates.isEmpty()) {
            throw new CertPathValidatorException("Certification path is empty.", null, certPath, 0);
        }
        Set<String> initialPolicies = extendedPKIXParameters.getInitialPolicies();
        try {
            TrustAnchor trustAnchorFindTrustAnchor = CertPathValidatorUtilities.findTrustAnchor((X509Certificate) certificates.get(certificates.size() - 1), extendedPKIXParameters.getTrustAnchors());
            if (trustAnchorFindTrustAnchor == null) {
                throw new CertPathValidatorException("Trust anchor for certification path not found.", null, certPath, -1);
            }
            int i = size + 1;
            ArrayList[] arrayListArr = new ArrayList[i];
            for (int i2 = 0; i2 < i; i2++) {
                arrayListArr[i2] = new ArrayList();
            }
            HashSet hashSet2 = new HashSet();
            hashSet2.add("2.5.29.32.0");
            PKIXPolicyNode pKIXPolicyNode = new PKIXPolicyNode(new ArrayList(), 0, hashSet2, null, new HashSet(), "2.5.29.32.0", false);
            arrayListArr[0].add(pKIXPolicyNode);
            PKIXNameConstraintValidator pKIXNameConstraintValidator = new PKIXNameConstraintValidator();
            HashSet hashSet3 = new HashSet();
            int i3 = extendedPKIXParameters.isExplicitPolicyRequired() ? 0 : i;
            int i4 = extendedPKIXParameters.isAnyPolicyInhibited() ? 0 : i;
            if (extendedPKIXParameters.isPolicyMappingInhibited()) {
                i = 0;
            }
            X509Certificate trustedCert = trustAnchorFindTrustAnchor.getTrustedCert();
            try {
                if (trustedCert != null) {
                    X500Principal subjectPrincipal = CertPathValidatorUtilities.getSubjectPrincipal(trustedCert);
                    cAPublicKey = trustedCert.getPublicKey();
                    x500Principal = subjectPrincipal;
                } else {
                    x500Principal = new X500Principal(trustAnchorFindTrustAnchor.getCAName());
                    cAPublicKey = trustAnchorFindTrustAnchor.getCAPublicKey();
                }
                try {
                    AlgorithmIdentifier algorithmIdentifier = CertPathValidatorUtilities.getAlgorithmIdentifier(cAPublicKey);
                    algorithmIdentifier.getObjectId();
                    algorithmIdentifier.getParameters();
                    if (extendedPKIXParameters.getTargetConstraints() != null) {
                        if (!extendedPKIXParameters.getTargetConstraints().match((X509Certificate) certificates.get(0))) {
                            throw new ExtCertPathValidatorException("Target certificate in certification path does not match targetConstraints.", null, certPath, 0);
                        }
                        z = false;
                    }
                    List<PKIXCertPathChecker> certPathCheckers = extendedPKIXParameters.getCertPathCheckers();
                    Iterator<PKIXCertPathChecker> it = certPathCheckers.iterator();
                    while (it.hasNext()) {
                        it.next().init(z);
                    }
                    X500Principal x500Principal2 = x500Principal;
                    X509Certificate x509Certificate = null;
                    int iPrepareNextCertM = size;
                    int i5 = i4;
                    int size2 = certificates.size() - 1;
                    PublicKey publicKey = cAPublicKey;
                    X509Certificate x509Certificate2 = trustedCert;
                    PKIXPolicyNode pKIXPolicyNode2 = pKIXPolicyNode;
                    int i6 = i;
                    int iPrepareNextCertJ = i5;
                    while (size2 >= 0) {
                        int i7 = size - size2;
                        X509Certificate x509Certificate3 = (X509Certificate) certificates.get(size2);
                        List<? extends Certificate> list = certificates;
                        PublicKey publicKey2 = publicKey;
                        int i8 = iPrepareNextCertJ;
                        Set<String> set = initialPolicies;
                        int i9 = i3;
                        ExtendedPKIXParameters extendedPKIXParameters2 = extendedPKIXParameters;
                        int i10 = i6;
                        X500Principal x500Principal3 = x500Principal2;
                        X500Principal x500Principal4 = x500Principal2;
                        int i11 = size2;
                        RFC3280CertPathUtilities.processCertA(certPath, extendedPKIXParameters, size2, publicKey2, x500Principal3, x509Certificate2);
                        RFC3280CertPathUtilities.processCertBC(certPath, i11, pKIXNameConstraintValidator);
                        PKIXPolicyNode pKIXPolicyNodeProcessCertE = RFC3280CertPathUtilities.processCertE(certPath, i11, RFC3280CertPathUtilities.processCertD(certPath, i11, hashSet3, pKIXPolicyNode2, arrayListArr, i8));
                        RFC3280CertPathUtilities.processCertF(certPath, i11, pKIXPolicyNodeProcessCertE, i9);
                        if (i7 == size) {
                            publicKey = publicKey2;
                            i6 = i10;
                            pKIXPolicyNode2 = pKIXPolicyNodeProcessCertE;
                            iPrepareNextCertJ = i8;
                            i3 = i9;
                        } else {
                            if (x509Certificate3 != null && x509Certificate3.getVersion() == 1) {
                                throw new CertPathValidatorException("Version 1 certificates can't be used as CA ones.", null, certPath, i11);
                            }
                            RFC3280CertPathUtilities.prepareNextCertA(certPath, i11);
                            PKIXPolicyNode pKIXPolicyNodePrepareCertB = RFC3280CertPathUtilities.prepareCertB(certPath, i11, arrayListArr, pKIXPolicyNodeProcessCertE, i10);
                            RFC3280CertPathUtilities.prepareNextCertG(certPath, i11, pKIXNameConstraintValidator);
                            int iPrepareNextCertH1 = RFC3280CertPathUtilities.prepareNextCertH1(certPath, i11, i9);
                            int iPrepareNextCertH2 = RFC3280CertPathUtilities.prepareNextCertH2(certPath, i11, i10);
                            int iPrepareNextCertH3 = RFC3280CertPathUtilities.prepareNextCertH3(certPath, i11, i8);
                            int iPrepareNextCertI1 = RFC3280CertPathUtilities.prepareNextCertI1(certPath, i11, iPrepareNextCertH1);
                            int iPrepareNextCertI2 = RFC3280CertPathUtilities.prepareNextCertI2(certPath, i11, iPrepareNextCertH2);
                            iPrepareNextCertJ = RFC3280CertPathUtilities.prepareNextCertJ(certPath, i11, iPrepareNextCertH3);
                            RFC3280CertPathUtilities.prepareNextCertK(certPath, i11);
                            iPrepareNextCertM = RFC3280CertPathUtilities.prepareNextCertM(certPath, i11, RFC3280CertPathUtilities.prepareNextCertL(certPath, i11, iPrepareNextCertM));
                            RFC3280CertPathUtilities.prepareNextCertN(certPath, i11);
                            HashSet hashSet4 = new HashSet(x509Certificate3.getCriticalExtensionOIDs());
                            hashSet4.remove(RFC3280CertPathUtilities.KEY_USAGE);
                            hashSet4.remove(RFC3280CertPathUtilities.CERTIFICATE_POLICIES);
                            hashSet4.remove(RFC3280CertPathUtilities.POLICY_MAPPINGS);
                            hashSet4.remove(RFC3280CertPathUtilities.INHIBIT_ANY_POLICY);
                            hashSet4.remove(RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT);
                            hashSet4.remove(RFC3280CertPathUtilities.DELTA_CRL_INDICATOR);
                            hashSet4.remove(RFC3280CertPathUtilities.POLICY_CONSTRAINTS);
                            hashSet4.remove(RFC3280CertPathUtilities.BASIC_CONSTRAINTS);
                            hashSet4.remove(RFC3280CertPathUtilities.SUBJECT_ALTERNATIVE_NAME);
                            hashSet4.remove(RFC3280CertPathUtilities.NAME_CONSTRAINTS);
                            X500Principal subjectPrincipal2 = CertPathValidatorUtilities.getSubjectPrincipal(x509Certificate3);
                            try {
                                PublicKey nextWorkingKey = CertPathValidatorUtilities.getNextWorkingKey(certPath.getCertificates(), i11);
                                AlgorithmIdentifier algorithmIdentifier2 = CertPathValidatorUtilities.getAlgorithmIdentifier(nextWorkingKey);
                                algorithmIdentifier2.getObjectId();
                                algorithmIdentifier2.getParameters();
                                pKIXPolicyNode2 = pKIXPolicyNodePrepareCertB;
                                x500Principal4 = subjectPrincipal2;
                                x509Certificate2 = x509Certificate3;
                                i3 = iPrepareNextCertI1;
                                publicKey = nextWorkingKey;
                                i6 = iPrepareNextCertI2;
                            } catch (CertPathValidatorException e) {
                                throw new CertPathValidatorException("Next working key could not be retrieved.", e, certPath, i11);
                            }
                        }
                        size2 = i11 - 1;
                        x509Certificate = x509Certificate3;
                        certificates = list;
                        initialPolicies = set;
                        extendedPKIXParameters = extendedPKIXParameters2;
                        x500Principal2 = x500Principal4;
                    }
                    ExtendedPKIXParameters extendedPKIXParameters3 = extendedPKIXParameters;
                    PublicKey publicKey3 = publicKey;
                    int i12 = size2;
                    Set<String> set2 = initialPolicies;
                    int iWrapupCertA = RFC3280CertPathUtilities.wrapupCertA(i3, x509Certificate);
                    int i13 = i12 + 1;
                    int iWrapupCertB = RFC3280CertPathUtilities.wrapupCertB(certPath, i13, iWrapupCertA);
                    Set<String> criticalExtensionOIDs = x509Certificate.getCriticalExtensionOIDs();
                    if (criticalExtensionOIDs != null) {
                        hashSet = new HashSet(criticalExtensionOIDs);
                        hashSet.remove(RFC3280CertPathUtilities.KEY_USAGE);
                        hashSet.remove(RFC3280CertPathUtilities.CERTIFICATE_POLICIES);
                        hashSet.remove(RFC3280CertPathUtilities.POLICY_MAPPINGS);
                        hashSet.remove(RFC3280CertPathUtilities.INHIBIT_ANY_POLICY);
                        hashSet.remove(RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT);
                        hashSet.remove(RFC3280CertPathUtilities.DELTA_CRL_INDICATOR);
                        hashSet.remove(RFC3280CertPathUtilities.POLICY_CONSTRAINTS);
                        hashSet.remove(RFC3280CertPathUtilities.BASIC_CONSTRAINTS);
                        hashSet.remove(RFC3280CertPathUtilities.SUBJECT_ALTERNATIVE_NAME);
                        hashSet.remove(RFC3280CertPathUtilities.NAME_CONSTRAINTS);
                        hashSet.remove(RFC3280CertPathUtilities.CRL_DISTRIBUTION_POINTS);
                    } else {
                        hashSet = new HashSet();
                    }
                    RFC3280CertPathUtilities.wrapupCertF(certPath, i13, certPathCheckers, hashSet);
                    PKIXPolicyNode pKIXPolicyNodeWrapupCertG = RFC3280CertPathUtilities.wrapupCertG(certPath, extendedPKIXParameters3, set2, i13, arrayListArr, pKIXPolicyNode2, hashSet3);
                    if (iWrapupCertB > 0 || pKIXPolicyNodeWrapupCertG != null) {
                        return new PKIXCertPathValidatorResult(trustAnchorFindTrustAnchor, pKIXPolicyNodeWrapupCertG, publicKey3);
                    }
                    throw new CertPathValidatorException("Path processing failed on policy.", null, certPath, i12);
                } catch (CertPathValidatorException e2) {
                    throw new ExtCertPathValidatorException("Algorithm identifier of public key of trust anchor could not be read.", e2, certPath, -1);
                }
            } catch (IllegalArgumentException e3) {
                throw new ExtCertPathValidatorException("Subject of trust anchor could not be (re)encoded.", e3, certPath, -1);
            }
        } catch (AnnotatedException e4) {
            throw new CertPathValidatorException(e4.getMessage(), e4, certPath, certificates.size() - 1);
        }
    }
}
