package org.bouncycastle.jce.provider;

import java.security.InvalidAlgorithmParameterException;
import java.security.cert.CertPath;
import java.security.cert.CertPathBuilderException;
import java.security.cert.CertPathBuilderResult;
import java.security.cert.CertPathBuilderSpi;
import java.security.cert.CertPathParameters;
import java.security.cert.CertPathValidator;
import java.security.cert.Certificate;
import java.security.cert.CertificateFactory;
import java.security.cert.CertificateParsingException;
import java.security.cert.PKIXBuilderParameters;
import java.security.cert.PKIXCertPathBuilderResult;
import java.security.cert.PKIXCertPathValidatorResult;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import org.bouncycastle.jce.exception.ExtCertPathBuilderException;
import org.bouncycastle.util.Selector;
import org.bouncycastle.x509.ExtendedPKIXBuilderParameters;
import org.bouncycastle.x509.X509CertStoreSelector;

public class PKIXCertPathBuilderSpi extends CertPathBuilderSpi {
    private Exception certPathException;

    /* JADX WARN: Removed duplicated region for block: B:48:0x00bb  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected CertPathBuilderResult build(X509Certificate x509Certificate, ExtendedPKIXBuilderParameters extendedPKIXBuilderParameters, List list) {
        CertPathBuilderResult certPathBuilderResultBuild = null;
        if (list.contains(x509Certificate) || extendedPKIXBuilderParameters.getExcludedCerts().contains(x509Certificate)) {
            return null;
        }
        if (extendedPKIXBuilderParameters.getMaxPathLength() != -1 && list.size() - 1 > extendedPKIXBuilderParameters.getMaxPathLength()) {
            return null;
        }
        list.add(x509Certificate);
        try {
            CertificateFactory certificateFactory = CertificateFactory.getInstance("X.509", "BC");
            CertPathValidator certPathValidator = CertPathValidator.getInstance("PKIX", "BC");
            try {
            } catch (AnnotatedException e) {
                this.certPathException = e;
            }
            if (CertPathValidatorUtilities.findTrustAnchor(x509Certificate, extendedPKIXBuilderParameters.getTrustAnchors()) != null) {
                try {
                    CertPath certPathGenerateCertPath = certificateFactory.generateCertPath((List<? extends Certificate>) list);
                    try {
                        PKIXCertPathValidatorResult pKIXCertPathValidatorResult = (PKIXCertPathValidatorResult) certPathValidator.validate(certPathGenerateCertPath, extendedPKIXBuilderParameters);
                        return new PKIXCertPathBuilderResult(certPathGenerateCertPath, pKIXCertPathValidatorResult.getTrustAnchor(), pKIXCertPathValidatorResult.getPolicyTree(), pKIXCertPathValidatorResult.getPublicKey());
                    } catch (Exception e2) {
                        throw new AnnotatedException("Certification path could not be validated.", e2);
                    }
                } catch (Exception e3) {
                    throw new AnnotatedException("Certification path could not be constructed from certificate list.", e3);
                }
            }
            try {
                CertPathValidatorUtilities.addAdditionalStoresFromAltNames(x509Certificate, extendedPKIXBuilderParameters);
                HashSet hashSet = new HashSet();
                try {
                    hashSet.addAll(CertPathValidatorUtilities.findIssuerCerts(x509Certificate, extendedPKIXBuilderParameters));
                    if (hashSet.isEmpty()) {
                        throw new AnnotatedException("No issuer certificate for certificate in certification path found.");
                    }
                    Iterator it = hashSet.iterator();
                    while (it.hasNext() && certPathBuilderResultBuild == null) {
                        certPathBuilderResultBuild = build((X509Certificate) it.next(), extendedPKIXBuilderParameters, list);
                    }
                    if (certPathBuilderResultBuild == null) {
                        list.remove(x509Certificate);
                    }
                    return certPathBuilderResultBuild;
                } catch (AnnotatedException e4) {
                    throw new AnnotatedException("Cannot find issuer certificate for certificate in certification path.", e4);
                }
            } catch (CertificateParsingException e5) {
                throw new AnnotatedException("No additiontal X.509 stores can be added from certificate locations.", e5);
            }
            this.certPathException = e;
            if (certPathBuilderResultBuild == null) {
            }
            return certPathBuilderResultBuild;
        } catch (Exception unused) {
            throw new RuntimeException("Exception creating support classes.");
        }
    }

    @Override
    public CertPathBuilderResult engineBuild(CertPathParameters certPathParameters) throws CertPathBuilderException, InvalidAlgorithmParameterException {
        Exception exc;
        if (!(certPathParameters instanceof PKIXBuilderParameters) && !(certPathParameters instanceof ExtendedPKIXBuilderParameters)) {
            throw new InvalidAlgorithmParameterException("Parameters must be an instance of " + PKIXBuilderParameters.class.getName() + " or " + ExtendedPKIXBuilderParameters.class.getName() + ".");
        }
        if (!(certPathParameters instanceof ExtendedPKIXBuilderParameters)) {
            certPathParameters = ExtendedPKIXBuilderParameters.getInstance((PKIXBuilderParameters) certPathParameters);
        }
        ExtendedPKIXBuilderParameters extendedPKIXBuilderParameters = (ExtendedPKIXBuilderParameters) certPathParameters;
        ArrayList arrayList = new ArrayList();
        Selector targetConstraints = extendedPKIXBuilderParameters.getTargetConstraints();
        if (!(targetConstraints instanceof X509CertStoreSelector)) {
            throw new CertPathBuilderException("TargetConstraints must be an instance of " + X509CertStoreSelector.class.getName() + " for " + getClass().getName() + " class.");
        }
        try {
            Collection collectionFindCertificates = CertPathValidatorUtilities.findCertificates((X509CertStoreSelector) targetConstraints, extendedPKIXBuilderParameters.getStores());
            collectionFindCertificates.addAll(CertPathValidatorUtilities.findCertificates((X509CertStoreSelector) targetConstraints, extendedPKIXBuilderParameters.getCertStores()));
            if (collectionFindCertificates.isEmpty()) {
                throw new CertPathBuilderException("No certificate found matching targetContraints.");
            }
            CertPathBuilderResult certPathBuilderResultBuild = null;
            Iterator it = collectionFindCertificates.iterator();
            while (it.hasNext() && certPathBuilderResultBuild == null) {
                certPathBuilderResultBuild = build((X509Certificate) it.next(), extendedPKIXBuilderParameters, arrayList);
            }
            if (certPathBuilderResultBuild == null && (exc = this.certPathException) != null) {
                if (exc instanceof AnnotatedException) {
                    throw new CertPathBuilderException(this.certPathException.getMessage(), this.certPathException.getCause());
                }
                throw new CertPathBuilderException("Possible certificate chain could not be validated.", this.certPathException);
            }
            if (certPathBuilderResultBuild == null && this.certPathException == null) {
                throw new CertPathBuilderException("Unable to find certificate chain.");
            }
            return certPathBuilderResultBuild;
        } catch (AnnotatedException e) {
            throw new ExtCertPathBuilderException("Error finding target certificate.", e);
        }
    }
}
