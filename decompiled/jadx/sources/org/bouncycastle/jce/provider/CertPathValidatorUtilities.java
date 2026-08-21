package org.bouncycastle.jce.provider;

import android.support.v4.os.EnvironmentCompat;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.math.BigInteger;
import java.security.KeyFactory;
import java.security.PublicKey;
import java.security.cert.CertPath;
import java.security.cert.CertPathValidatorException;
import java.security.cert.CertStore;
import java.security.cert.CertStoreException;
import java.security.cert.Certificate;
import java.security.cert.CertificateParsingException;
import java.security.cert.PKIXParameters;
import java.security.cert.PolicyQualifierInfo;
import java.security.cert.X509CRL;
import java.security.cert.X509CRLSelector;
import java.security.cert.X509Certificate;
import java.security.cert.X509Extension;
import java.security.interfaces.DSAParams;
import java.security.interfaces.DSAPublicKey;
import java.security.spec.DSAPublicKeySpec;
import java.text.ParseException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Date;
import java.util.Enumeration;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import javax.security.auth.x500.X500Principal;
import org.bouncycastle.asn1.ASN1InputStream;
import org.bouncycastle.asn1.ASN1OctetString;
import org.bouncycastle.asn1.ASN1OutputStream;
import org.bouncycastle.asn1.ASN1Sequence;
import org.bouncycastle.asn1.DEREnumerated;
import org.bouncycastle.asn1.DERGeneralizedTime;
import org.bouncycastle.asn1.DERIA5String;
import org.bouncycastle.asn1.DERObject;
import org.bouncycastle.asn1.DERObjectIdentifier;
import org.bouncycastle.asn1.isismtt.ISISMTTObjectIdentifiers;
import org.bouncycastle.asn1.x509.AlgorithmIdentifier;
import org.bouncycastle.asn1.x509.CRLDistPoint;
import org.bouncycastle.asn1.x509.CRLNumber;
import org.bouncycastle.asn1.x509.CertificateList;
import org.bouncycastle.asn1.x509.DistributionPoint;
import org.bouncycastle.asn1.x509.DistributionPointName;
import org.bouncycastle.asn1.x509.GeneralName;
import org.bouncycastle.asn1.x509.GeneralNames;
import org.bouncycastle.asn1.x509.SubjectPublicKeyInfo;
import org.bouncycastle.asn1.x509.X509Extensions;
import org.bouncycastle.jce.X509LDAPCertStoreParameters;
import org.bouncycastle.jce.exception.ExtCertPathValidatorException;
import org.bouncycastle.util.StoreException;
import org.bouncycastle.x509.ExtendedPKIXBuilderParameters;
import org.bouncycastle.x509.ExtendedPKIXParameters;
import org.bouncycastle.x509.X509AttributeCertStoreSelector;
import org.bouncycastle.x509.X509AttributeCertificate;
import org.bouncycastle.x509.X509CRLStoreSelector;
import org.bouncycastle.x509.X509CertStoreSelector;
import org.bouncycastle.x509.X509Store;

/* JADX INFO: loaded from: classes4.dex */
public class CertPathValidatorUtilities {
    protected static final String ANY_POLICY = "2.5.29.32.0";
    protected static final int CRL_SIGN = 6;
    protected static final int KEY_CERT_SIGN = 5;
    protected static final String CERTIFICATE_POLICIES = X509Extensions.CertificatePolicies.getId();
    protected static final String BASIC_CONSTRAINTS = X509Extensions.BasicConstraints.getId();
    protected static final String POLICY_MAPPINGS = X509Extensions.PolicyMappings.getId();
    protected static final String SUBJECT_ALTERNATIVE_NAME = X509Extensions.SubjectAlternativeName.getId();
    protected static final String NAME_CONSTRAINTS = X509Extensions.NameConstraints.getId();
    protected static final String KEY_USAGE = X509Extensions.KeyUsage.getId();
    protected static final String INHIBIT_ANY_POLICY = X509Extensions.InhibitAnyPolicy.getId();
    protected static final String ISSUING_DISTRIBUTION_POINT = X509Extensions.IssuingDistributionPoint.getId();
    protected static final String DELTA_CRL_INDICATOR = X509Extensions.DeltaCRLIndicator.getId();
    protected static final String POLICY_CONSTRAINTS = X509Extensions.PolicyConstraints.getId();
    protected static final String FRESHEST_CRL = X509Extensions.FreshestCRL.getId();
    protected static final String CRL_DISTRIBUTION_POINTS = X509Extensions.CRLDistributionPoints.getId();
    protected static final String AUTHORITY_KEY_IDENTIFIER = X509Extensions.AuthorityKeyIdentifier.getId();
    protected static final String CRL_NUMBER = X509Extensions.CRLNumber.getId();
    protected static final String[] crlReasons = {"unspecified", "keyCompromise", "cACompromise", "affiliationChanged", "superseded", "cessationOfOperation", "certificateHold", EnvironmentCompat.MEDIA_UNKNOWN, "removeFromCRL", "privilegeWithdrawn", "aACompromise"};

    protected static void addAdditionalStoreFromLocation(String str, ExtendedPKIXParameters extendedPKIXParameters) {
        String str2;
        if (extendedPKIXParameters.isAdditionalLocationsEnabled()) {
            try {
                if (str.startsWith("ldap://")) {
                    String strSubstring = str.substring(7);
                    String strSubstring2 = null;
                    if (strSubstring.indexOf("/") != -1) {
                        strSubstring2 = strSubstring.substring(strSubstring.indexOf("/"));
                        str2 = "ldap://" + strSubstring.substring(0, strSubstring.indexOf("/"));
                    } else {
                        str2 = "ldap://" + strSubstring;
                    }
                    X509LDAPCertStoreParameters x509LDAPCertStoreParametersBuild = new X509LDAPCertStoreParameters.Builder(str2, strSubstring2).build();
                    extendedPKIXParameters.addAddionalStore(X509Store.getInstance("CERTIFICATE/LDAP", x509LDAPCertStoreParametersBuild, "BC"));
                    extendedPKIXParameters.addAddionalStore(X509Store.getInstance("CRL/LDAP", x509LDAPCertStoreParametersBuild, "BC"));
                    extendedPKIXParameters.addAddionalStore(X509Store.getInstance("ATTRIBUTECERTIFICATE/LDAP", x509LDAPCertStoreParametersBuild, "BC"));
                    extendedPKIXParameters.addAddionalStore(X509Store.getInstance("CERTIFICATEPAIR/LDAP", x509LDAPCertStoreParametersBuild, "BC"));
                }
            } catch (Exception unused) {
                throw new RuntimeException("Exception adding X.509 stores.");
            }
        }
    }

    protected static void addAdditionalStoresFromAltNames(X509Certificate x509Certificate, ExtendedPKIXParameters extendedPKIXParameters) throws CertificateParsingException {
        if (x509Certificate.getIssuerAlternativeNames() != null) {
            for (List<?> list : x509Certificate.getIssuerAlternativeNames()) {
                if (list.get(0).equals(new Integer(6))) {
                    addAdditionalStoreFromLocation((String) list.get(1), extendedPKIXParameters);
                }
            }
        }
    }

    protected static void addAdditionalStoresFromCRLDistributionPoint(CRLDistPoint cRLDistPoint, ExtendedPKIXParameters extendedPKIXParameters) throws AnnotatedException {
        if (cRLDistPoint != null) {
            try {
                for (DistributionPoint distributionPoint : cRLDistPoint.getDistributionPoints()) {
                    DistributionPointName distributionPoint2 = distributionPoint.getDistributionPoint();
                    if (distributionPoint2 != null && distributionPoint2.getType() == 0) {
                        GeneralName[] names = GeneralNames.getInstance(distributionPoint2.getName()).getNames();
                        for (int i = 0; i < names.length; i++) {
                            if (names[i].getTagNo() == 6) {
                                addAdditionalStoreFromLocation(DERIA5String.getInstance(names[i].getName()).getString(), extendedPKIXParameters);
                            }
                        }
                    }
                }
            } catch (Exception e) {
                throw new AnnotatedException("Distribution points could not be read.", e);
            }
        }
    }

    protected static final Collection findCRLs(X509CRLStoreSelector x509CRLStoreSelector, List list) throws AnnotatedException {
        AnnotatedException annotatedException;
        HashSet hashSet = new HashSet();
        AnnotatedException annotatedException2 = null;
        boolean z = false;
        for (Object obj : list) {
            if (obj instanceof X509Store) {
                try {
                    hashSet.addAll(((X509Store) obj).getMatches(x509CRLStoreSelector));
                    z = true;
                } catch (StoreException e) {
                    annotatedException = new AnnotatedException("Exception searching in X.509 CRL store.", e);
                    annotatedException2 = annotatedException;
                }
            } else {
                try {
                    hashSet.addAll(((CertStore) obj).getCRLs(x509CRLStoreSelector));
                    z = true;
                } catch (CertStoreException e2) {
                    annotatedException = new AnnotatedException("Exception searching in X.509 CRL store.", e2);
                    annotatedException2 = annotatedException;
                }
            }
        }
        if (z || annotatedException2 == null) {
            return hashSet;
        }
        throw annotatedException2;
    }

    protected static Collection findCertificates(X509AttributeCertStoreSelector x509AttributeCertStoreSelector, List list) throws AnnotatedException {
        HashSet hashSet = new HashSet();
        for (Object obj : list) {
            if (obj instanceof X509Store) {
                try {
                    hashSet.addAll(((X509Store) obj).getMatches(x509AttributeCertStoreSelector));
                } catch (StoreException e) {
                    throw new AnnotatedException("Problem while picking certificates from X.509 store.", e);
                }
            }
        }
        return hashSet;
    }

    protected static Collection findCertificates(X509CertStoreSelector x509CertStoreSelector, List list) throws AnnotatedException {
        HashSet hashSet = new HashSet();
        for (Object obj : list) {
            if (obj instanceof X509Store) {
                try {
                    hashSet.addAll(((X509Store) obj).getMatches(x509CertStoreSelector));
                } catch (StoreException e) {
                    throw new AnnotatedException("Problem while picking certificates from X.509 store.", e);
                }
            } else {
                try {
                    hashSet.addAll(((CertStore) obj).getCertificates(x509CertStoreSelector));
                } catch (CertStoreException e2) {
                    throw new AnnotatedException("Problem while picking certificates from certificate store.", e2);
                }
            }
        }
        return hashSet;
    }

    protected static Collection findIssuerCerts(X509Certificate x509Certificate, ExtendedPKIXBuilderParameters extendedPKIXBuilderParameters) throws AnnotatedException {
        X509CertStoreSelector x509CertStoreSelector = new X509CertStoreSelector();
        HashSet hashSet = new HashSet();
        try {
            x509CertStoreSelector.setSubject(x509Certificate.getIssuerX500Principal().getEncoded());
            try {
                ArrayList arrayList = new ArrayList();
                arrayList.addAll(findCertificates(x509CertStoreSelector, extendedPKIXBuilderParameters.getCertStores()));
                arrayList.addAll(findCertificates(x509CertStoreSelector, extendedPKIXBuilderParameters.getStores()));
                arrayList.addAll(findCertificates(x509CertStoreSelector, extendedPKIXBuilderParameters.getAdditionalStores()));
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    hashSet.add((X509Certificate) it.next());
                }
                return hashSet;
            } catch (AnnotatedException e) {
                throw new AnnotatedException("Issuer certificate cannot be searched.", e);
            }
        } catch (IOException e2) {
            throw new AnnotatedException("Subject criteria for certificate selector to find issuer certificate could not be set.", e2);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0063  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected static java.security.cert.TrustAnchor findTrustAnchor(java.security.cert.X509Certificate r8, java.util.Set r9) throws org.bouncycastle.jce.provider.AnnotatedException {
        /*
            java.util.Iterator r9 = r9.iterator()
            java.security.cert.X509CertSelector r0 = new java.security.cert.X509CertSelector
            r0.<init>()
            javax.security.auth.x500.X500Principal r1 = getEncodedIssuerPrincipal(r8)     // Catch: java.io.IOException -> L7b
            byte[] r1 = r1.getEncoded()     // Catch: java.io.IOException -> L7b
            r0.setSubject(r1)     // Catch: java.io.IOException -> L7b
            r1 = 0
            r2 = r1
            r3 = r2
            r4 = r3
        L18:
            boolean r5 = r9.hasNext()
            if (r5 == 0) goto L6d
            if (r2 != 0) goto L6d
            java.lang.Object r2 = r9.next()
            java.security.cert.TrustAnchor r2 = (java.security.cert.TrustAnchor) r2
            java.security.cert.X509Certificate r5 = r2.getTrustedCert()
            if (r5 == 0) goto L3f
            java.security.cert.X509Certificate r5 = r2.getTrustedCert()
            boolean r5 = r0.match(r5)
            if (r5 == 0) goto L63
            java.security.cert.X509Certificate r4 = r2.getTrustedCert()
            java.security.PublicKey r4 = r4.getPublicKey()
            goto L64
        L3f:
            java.lang.String r5 = r2.getCAName()
            if (r5 == 0) goto L63
            java.security.PublicKey r5 = r2.getCAPublicKey()
            if (r5 == 0) goto L63
            javax.security.auth.x500.X500Principal r5 = getEncodedIssuerPrincipal(r8)     // Catch: java.lang.IllegalArgumentException -> L63
            javax.security.auth.x500.X500Principal r6 = new javax.security.auth.x500.X500Principal     // Catch: java.lang.IllegalArgumentException -> L63
            java.lang.String r7 = r2.getCAName()     // Catch: java.lang.IllegalArgumentException -> L63
            r6.<init>(r7)     // Catch: java.lang.IllegalArgumentException -> L63
            boolean r5 = r5.equals(r6)     // Catch: java.lang.IllegalArgumentException -> L63
            if (r5 == 0) goto L63
            java.security.PublicKey r4 = r2.getCAPublicKey()     // Catch: java.lang.IllegalArgumentException -> L63
            goto L64
        L63:
            r2 = r1
        L64:
            if (r4 == 0) goto L18
            r8.verify(r4)     // Catch: java.lang.Exception -> L6a
            goto L18
        L6a:
            r3 = move-exception
            r2 = r1
            goto L18
        L6d:
            if (r2 != 0) goto L7a
            if (r3 != 0) goto L72
            goto L7a
        L72:
            org.bouncycastle.jce.provider.AnnotatedException r8 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r9 = "TrustAnchor found but certificate validation failed."
            r8.<init>(r9, r3)
            throw r8
        L7a:
            return r2
        L7b:
            r8 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r9 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r0 = "Cannot set subject search criteria for trust anchor."
            r9.<init>(r0, r8)
            throw r9
        */
        throw new UnsupportedOperationException("Method not decompiled: org.bouncycastle.jce.provider.CertPathValidatorUtilities.findTrustAnchor(java.security.cert.X509Certificate, java.util.Set):java.security.cert.TrustAnchor");
    }

    protected static AlgorithmIdentifier getAlgorithmIdentifier(PublicKey publicKey) throws CertPathValidatorException {
        try {
            return SubjectPublicKeyInfo.getInstance(new ASN1InputStream(publicKey.getEncoded()).readObject()).getAlgorithmId();
        } catch (Exception e) {
            throw new ExtCertPathValidatorException("Subject public key cannot be decoded.", e);
        }
    }

    protected static void getCRLIssuersFromDistributionPoint(DistributionPoint distributionPoint, Collection collection, X509CRLSelector x509CRLSelector, ExtendedPKIXParameters extendedPKIXParameters) throws AnnotatedException {
        ArrayList arrayList = new ArrayList();
        if (distributionPoint.getCRLIssuer() != null) {
            GeneralName[] names = distributionPoint.getCRLIssuer().getNames();
            for (int i = 0; i < names.length; i++) {
                if (names[i].getTagNo() == 4) {
                    try {
                        arrayList.add(new X500Principal(names[i].getName().getDERObject().getEncoded()));
                    } catch (IOException e) {
                        throw new AnnotatedException("CRL issuer information from distribution point cannot be decoded.", e);
                    }
                }
            }
        } else {
            if (distributionPoint.getDistributionPoint() == null) {
                throw new AnnotatedException("CRL issuer is omitted from distribution point but no distributionPoint field present.");
            }
            Iterator it = collection.iterator();
            while (it.hasNext()) {
                arrayList.add((X500Principal) it.next());
            }
        }
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            try {
                x509CRLSelector.addIssuerName(((X500Principal) it2.next()).getEncoded());
            } catch (IOException e2) {
                throw new AnnotatedException("Cannot decode CRL issuer information.", e2);
            }
        }
    }

    protected static void getCertStatus(Date date, X509CRL x509crl, Object obj, CertStatus certStatus) throws AnnotatedException {
        try {
            X509CRLEntryObject x509CRLEntryObject = (X509CRLEntryObject) new X509CRLObject(new CertificateList((ASN1Sequence) ASN1Sequence.fromByteArray(x509crl.getEncoded()))).getRevokedCertificate(getSerialNumber(obj));
            if (x509CRLEntryObject != null) {
                if (getEncodedIssuerPrincipal(obj).equals(x509CRLEntryObject.getCertificateIssuer()) || getEncodedIssuerPrincipal(obj).equals(getIssuerPrincipal(x509crl))) {
                    DEREnumerated dEREnumerated = null;
                    if (x509CRLEntryObject.hasExtensions()) {
                        try {
                            dEREnumerated = DEREnumerated.getInstance(getExtensionValue(x509CRLEntryObject, X509Extensions.ReasonCode.getId()));
                        } catch (Exception e) {
                            new AnnotatedException("Reason code CRL entry extension could not be decoded.", e);
                        }
                    }
                    if (date.getTime() >= x509CRLEntryObject.getRevocationDate().getTime() || dEREnumerated == null || dEREnumerated.getValue().intValue() == 0 || dEREnumerated.getValue().intValue() == 1 || dEREnumerated.getValue().intValue() == 2 || dEREnumerated.getValue().intValue() == 8) {
                        certStatus.setCertStatus(dEREnumerated != null ? dEREnumerated.getValue().intValue() : 0);
                        certStatus.setRevocationDate(x509CRLEntryObject.getRevocationDate());
                    }
                }
            }
        } catch (Exception e2) {
            throw new AnnotatedException("Bouncy Castle X509CRLObject could not be created.", e2);
        }
    }

    protected static Set getCompleteCRLs(DistributionPoint distributionPoint, Object obj, Date date, ExtendedPKIXParameters extendedPKIXParameters) throws AnnotatedException {
        X509CRLStoreSelector x509CRLStoreSelector = new X509CRLStoreSelector();
        try {
            HashSet hashSet = new HashSet();
            hashSet.add(obj instanceof X509AttributeCertificate ? ((X509AttributeCertificate) obj).getIssuer().getPrincipals()[0] : getEncodedIssuerPrincipal(obj));
            getCRLIssuersFromDistributionPoint(distributionPoint, hashSet, x509CRLStoreSelector, extendedPKIXParameters);
        } catch (AnnotatedException e) {
            new AnnotatedException("Could not get issuer information from distribution point.", e);
        }
        if (obj instanceof X509Certificate) {
            x509CRLStoreSelector.setCertificateChecking((X509Certificate) obj);
        } else if (obj instanceof X509AttributeCertificate) {
            x509CRLStoreSelector.setAttrCertificateChecking((X509AttributeCertificate) obj);
        }
        if (extendedPKIXParameters.getDate() != null) {
            x509CRLStoreSelector.setDateAndTime(extendedPKIXParameters.getDate());
        } else {
            x509CRLStoreSelector.setDateAndTime(date);
        }
        x509CRLStoreSelector.setCompleteCRLEnabled(true);
        HashSet hashSet2 = new HashSet();
        try {
            hashSet2.addAll(findCRLs(x509CRLStoreSelector, extendedPKIXParameters.getStores()));
            hashSet2.addAll(findCRLs(x509CRLStoreSelector, extendedPKIXParameters.getAdditionalStores()));
            hashSet2.addAll(findCRLs(x509CRLStoreSelector, extendedPKIXParameters.getCertStores()));
            if (hashSet2.isEmpty()) {
                throw new AnnotatedException("No CRLs found.");
            }
            return hashSet2;
        } catch (AnnotatedException e2) {
            throw new AnnotatedException("Could not search for CRLs.", e2);
        }
    }

    protected static Set getDeltaCRLs(Date date, ExtendedPKIXParameters extendedPKIXParameters, X509CRL x509crl) throws AnnotatedException {
        X509CRLStoreSelector x509CRLStoreSelector = new X509CRLStoreSelector();
        if (extendedPKIXParameters.getDate() != null) {
            date = extendedPKIXParameters.getDate();
        }
        x509CRLStoreSelector.setDateAndTime(date);
        try {
            x509CRLStoreSelector.addIssuerName(getIssuerPrincipal(x509crl).getEncoded());
        } catch (IOException e) {
            new AnnotatedException("Cannot extract issuer from CRL.", e);
        }
        try {
            DERObject extensionValue = getExtensionValue(x509crl, CRL_NUMBER);
            BigInteger positiveValue = extensionValue != null ? CRLNumber.getInstance(extensionValue).getPositiveValue() : null;
            try {
                byte[] extensionValue2 = x509crl.getExtensionValue(ISSUING_DISTRIBUTION_POINT);
                x509CRLStoreSelector.setMinCRLNumber(positiveValue != null ? positiveValue.add(BigInteger.valueOf(1L)) : null);
                x509CRLStoreSelector.setIssuingDistributionPoint(extensionValue2);
                x509CRLStoreSelector.setIssuingDistributionPointEnabled(true);
                x509CRLStoreSelector.setMaxBaseCRLNumber(positiveValue);
                HashSet hashSet = new HashSet();
                try {
                    hashSet.addAll(findCRLs(x509CRLStoreSelector, extendedPKIXParameters.getAdditionalStores()));
                    hashSet.addAll(findCRLs(x509CRLStoreSelector, extendedPKIXParameters.getStores()));
                    hashSet.addAll(findCRLs(x509CRLStoreSelector, extendedPKIXParameters.getCertStores()));
                    return hashSet;
                } catch (AnnotatedException e2) {
                    throw new AnnotatedException("Could not search for delta CRLs.", e2);
                }
            } catch (Exception e3) {
                throw new AnnotatedException("Issuing distribution point extension value could not be read.", e3);
            }
        } catch (Exception e4) {
            throw new AnnotatedException("CRL number extension could not be extracted from CRL.", e4);
        }
    }

    protected static X500Principal getEncodedIssuerPrincipal(Object obj) {
        return obj instanceof X509Certificate ? ((X509Certificate) obj).getIssuerX500Principal() : (X500Principal) ((X509AttributeCertificate) obj).getIssuer().getPrincipals()[0];
    }

    protected static DERObject getExtensionValue(X509Extension x509Extension, String str) throws AnnotatedException {
        byte[] extensionValue = x509Extension.getExtensionValue(str);
        if (extensionValue == null) {
            return null;
        }
        return getObject(str, extensionValue);
    }

    protected static X500Principal getIssuerPrincipal(X509CRL x509crl) {
        return x509crl.getIssuerX500Principal();
    }

    protected static PublicKey getNextWorkingKey(List list, int i) throws CertPathValidatorException {
        DSAPublicKey dSAPublicKey;
        PublicKey publicKey = ((Certificate) list.get(i)).getPublicKey();
        if (!(publicKey instanceof DSAPublicKey)) {
            return publicKey;
        }
        DSAPublicKey dSAPublicKey2 = (DSAPublicKey) publicKey;
        if (dSAPublicKey2.getParams() != null) {
            return dSAPublicKey2;
        }
        do {
            i++;
            if (i >= list.size()) {
                throw new CertPathValidatorException("DSA parameters cannot be inherited from previous certificate.");
            }
            PublicKey publicKey2 = ((X509Certificate) list.get(i)).getPublicKey();
            if (!(publicKey2 instanceof DSAPublicKey)) {
                throw new CertPathValidatorException("DSA parameters cannot be inherited from previous certificate.");
            }
            dSAPublicKey = (DSAPublicKey) publicKey2;
        } while (dSAPublicKey.getParams() == null);
        DSAParams params = dSAPublicKey.getParams();
        try {
            return KeyFactory.getInstance("DSA", "BC").generatePublic(new DSAPublicKeySpec(dSAPublicKey2.getY(), params.getP(), params.getQ(), params.getG()));
        } catch (Exception e) {
            throw new RuntimeException(e.getMessage());
        }
    }

    private static DERObject getObject(String str, byte[] bArr) throws AnnotatedException {
        try {
            return new ASN1InputStream(((ASN1OctetString) new ASN1InputStream(bArr).readObject()).getOctets()).readObject();
        } catch (Exception e) {
            throw new AnnotatedException("exception processing extension " + str, e);
        }
    }

    protected static final Set getQualifierSet(ASN1Sequence aSN1Sequence) throws CertPathValidatorException {
        HashSet hashSet = new HashSet();
        if (aSN1Sequence == null) {
            return hashSet;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        ASN1OutputStream aSN1OutputStream = new ASN1OutputStream(byteArrayOutputStream);
        Enumeration objects = aSN1Sequence.getObjects();
        while (objects.hasMoreElements()) {
            try {
                aSN1OutputStream.writeObject(objects.nextElement());
                hashSet.add(new PolicyQualifierInfo(byteArrayOutputStream.toByteArray()));
                byteArrayOutputStream.reset();
            } catch (IOException e) {
                throw new ExtCertPathValidatorException("Policy qualifier info cannot be decoded.", e);
            }
        }
        return hashSet;
    }

    private static BigInteger getSerialNumber(Object obj) {
        return obj instanceof X509Certificate ? ((X509Certificate) obj).getSerialNumber() : ((X509AttributeCertificate) obj).getSerialNumber();
    }

    protected static X500Principal getSubjectPrincipal(X509Certificate x509Certificate) {
        return x509Certificate.getSubjectX500Principal();
    }

    protected static Date getValidCertDateFromValidityModel(ExtendedPKIXParameters extendedPKIXParameters, CertPath certPath, int i) throws AnnotatedException {
        if (extendedPKIXParameters.getValidityModel() == 1 && i > 0) {
            int i2 = i - 1;
            if (i2 == 0) {
                try {
                    DERGeneralizedTime dERGeneralizedTime = DERGeneralizedTime.getInstance(((X509Certificate) certPath.getCertificates().get(i2)).getExtensionValue(ISISMTTObjectIdentifiers.id_isismtt_at_dateOfCertGen.getId()));
                    if (dERGeneralizedTime != null) {
                        try {
                            return dERGeneralizedTime.getDate();
                        } catch (ParseException e) {
                            throw new AnnotatedException("Date from dat of cert gen extension could not be parsed.", e);
                        }
                    }
                } catch (IllegalArgumentException unused) {
                    throw new AnnotatedException("Date of cert gen extension could not be read.");
                }
            }
            return ((X509Certificate) certPath.getCertificates().get(i2)).getNotBefore();
        }
        return getValidDate(extendedPKIXParameters);
    }

    protected static Date getValidDate(PKIXParameters pKIXParameters) {
        Date date = pKIXParameters.getDate();
        return date == null ? new Date() : date;
    }

    protected static boolean isAnyPolicy(Set set) {
        return set == null || set.contains(ANY_POLICY) || set.isEmpty();
    }

    protected static boolean isSelfIssued(X509Certificate x509Certificate) {
        return x509Certificate.getSubjectDN().equals(x509Certificate.getIssuerDN());
    }

    /* JADX WARN: Code restructure failed: missing block: B:31:0x008e, code lost:
    
        r5 = r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x0093, code lost:
    
        if (r13.getCriticalExtensionOIDs() == null) goto L34;
     */
    /* JADX WARN: Code restructure failed: missing block: B:33:0x0095, code lost:
    
        r7 = r13.getCriticalExtensionOIDs().contains(org.bouncycastle.jce.provider.CertPathValidatorUtilities.CERTIFICATE_POLICIES);
     */
    /* JADX WARN: Code restructure failed: missing block: B:34:0x00a1, code lost:
    
        r7 = false;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x00a2, code lost:
    
        r13 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r1.getParent();
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x00b0, code lost:
    
        if (org.bouncycastle.jce.provider.CertPathValidatorUtilities.ANY_POLICY.equals(r13.getValidPolicy()) == false) goto L56;
     */
    /* JADX WARN: Code restructure failed: missing block: B:37:0x00b2, code lost:
    
        r8 = new org.bouncycastle.jce.provider.PKIXPolicyNode(new java.util.ArrayList(), r9, (java.util.Set) r12.get(r11), r13, r5, r11, r7);
        r13.addChild(r8);
        r10[r9].add(r8);
     */
    /* JADX WARN: Code restructure failed: missing block: B:56:?, code lost:
    
        return;
     */
    /* JADX WARN: Code restructure failed: missing block: B:57:?, code lost:
    
        return;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    protected static void prepareNextCertB1(int r9, java.util.List[] r10, java.lang.String r11, java.util.Map r12, java.security.cert.X509Certificate r13) throws org.bouncycastle.jce.provider.AnnotatedException, java.security.cert.CertPathValidatorException {
        /*
            Method dump skipped, instruction units count: 218
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: org.bouncycastle.jce.provider.CertPathValidatorUtilities.prepareNextCertB1(int, java.util.List[], java.lang.String, java.util.Map, java.security.cert.X509Certificate):void");
    }

    protected static PKIXPolicyNode prepareNextCertB2(int i, List[] listArr, String str, PKIXPolicyNode pKIXPolicyNode) {
        int i2;
        Iterator it = listArr[i].iterator();
        while (it.hasNext()) {
            PKIXPolicyNode pKIXPolicyNode2 = (PKIXPolicyNode) it.next();
            if (pKIXPolicyNode2.getValidPolicy().equals(str)) {
                ((PKIXPolicyNode) pKIXPolicyNode2.getParent()).removeChild(pKIXPolicyNode2);
                it.remove();
                for (int i3 = i - 1; i3 >= 0; i3--) {
                    List list = listArr[i3];
                    while (i2 < list.size()) {
                        PKIXPolicyNode pKIXPolicyNode3 = (PKIXPolicyNode) list.get(i2);
                        i2 = (pKIXPolicyNode3.hasChildren() || (pKIXPolicyNode = removePolicyNode(pKIXPolicyNode, listArr, pKIXPolicyNode3)) != null) ? i2 + 1 : 0;
                    }
                }
            }
        }
        return pKIXPolicyNode;
    }

    protected static boolean processCertD1i(int i, List[] listArr, DERObjectIdentifier dERObjectIdentifier, Set set) {
        List list = listArr[i - 1];
        for (int i2 = 0; i2 < list.size(); i2++) {
            PKIXPolicyNode pKIXPolicyNode = (PKIXPolicyNode) list.get(i2);
            if (pKIXPolicyNode.getExpectedPolicies().contains(dERObjectIdentifier.getId())) {
                HashSet hashSet = new HashSet();
                hashSet.add(dERObjectIdentifier.getId());
                PKIXPolicyNode pKIXPolicyNode2 = new PKIXPolicyNode(new ArrayList(), i, hashSet, pKIXPolicyNode, set, dERObjectIdentifier.getId(), false);
                pKIXPolicyNode.addChild(pKIXPolicyNode2);
                listArr[i].add(pKIXPolicyNode2);
                return true;
            }
        }
        return false;
    }

    protected static void processCertD1ii(int i, List[] listArr, DERObjectIdentifier dERObjectIdentifier, Set set) {
        List list = listArr[i - 1];
        for (int i2 = 0; i2 < list.size(); i2++) {
            PKIXPolicyNode pKIXPolicyNode = (PKIXPolicyNode) list.get(i2);
            pKIXPolicyNode.getExpectedPolicies();
            if (ANY_POLICY.equals(pKIXPolicyNode.getValidPolicy())) {
                HashSet hashSet = new HashSet();
                hashSet.add(dERObjectIdentifier.getId());
                PKIXPolicyNode pKIXPolicyNode2 = new PKIXPolicyNode(new ArrayList(), i, hashSet, pKIXPolicyNode, set, dERObjectIdentifier.getId(), false);
                pKIXPolicyNode.addChild(pKIXPolicyNode2);
                listArr[i].add(pKIXPolicyNode2);
                return;
            }
        }
    }

    protected static PKIXPolicyNode removePolicyNode(PKIXPolicyNode pKIXPolicyNode, List[] listArr, PKIXPolicyNode pKIXPolicyNode2) {
        PKIXPolicyNode pKIXPolicyNode3 = (PKIXPolicyNode) pKIXPolicyNode2.getParent();
        if (pKIXPolicyNode == null) {
            return null;
        }
        if (pKIXPolicyNode3 != null) {
            pKIXPolicyNode3.removeChild(pKIXPolicyNode2);
            removePolicyNodeRecurse(listArr, pKIXPolicyNode2);
            return pKIXPolicyNode;
        }
        for (int i = 0; i < listArr.length; i++) {
            listArr[i] = new ArrayList();
        }
        return null;
    }

    private static void removePolicyNodeRecurse(List[] listArr, PKIXPolicyNode pKIXPolicyNode) {
        listArr[pKIXPolicyNode.getDepth()].remove(pKIXPolicyNode);
        if (pKIXPolicyNode.hasChildren()) {
            Iterator children = pKIXPolicyNode.getChildren();
            while (children.hasNext()) {
                removePolicyNodeRecurse(listArr, (PKIXPolicyNode) children.next());
            }
        }
    }
}
