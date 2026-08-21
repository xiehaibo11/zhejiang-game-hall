package org.bouncycastle.jce;

import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.security.cert.CRLException;
import java.security.cert.CertificateEncodingException;
import java.security.cert.X509CRL;
import java.security.cert.X509Certificate;
import org.bouncycastle.asn1.ASN1InputStream;
import org.bouncycastle.asn1.ASN1Sequence;
import org.bouncycastle.asn1.x509.TBSCertList;
import org.bouncycastle.asn1.x509.TBSCertificateStructure;

/* JADX INFO: loaded from: classes4.dex */
public class PrincipalUtil {
    public static X509Principal getIssuerX509Principal(X509CRL x509crl) throws CRLException {
        try {
            return new X509Principal(new TBSCertList((ASN1Sequence) new ASN1InputStream(new ByteArrayInputStream(x509crl.getTBSCertList())).readObject()).getIssuer());
        } catch (IOException e) {
            throw new CRLException(e.toString());
        }
    }

    public static X509Principal getIssuerX509Principal(X509Certificate x509Certificate) throws CertificateEncodingException {
        try {
            return new X509Principal(new TBSCertificateStructure((ASN1Sequence) new ASN1InputStream(new ByteArrayInputStream(x509Certificate.getTBSCertificate())).readObject()).getIssuer());
        } catch (IOException e) {
            throw new CertificateEncodingException(e.toString());
        }
    }

    public static X509Principal getSubjectX509Principal(X509Certificate x509Certificate) throws CertificateEncodingException {
        try {
            return new X509Principal(new TBSCertificateStructure((ASN1Sequence) new ASN1InputStream(new ByteArrayInputStream(x509Certificate.getTBSCertificate())).readObject()).getSubject());
        } catch (IOException e) {
            throw new CertificateEncodingException(e.toString());
        }
    }
}
