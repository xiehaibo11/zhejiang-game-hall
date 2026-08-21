package com.bytedance.pangle.g;

import java.math.BigInteger;
import java.security.Principal;
import java.security.PublicKey;
import java.security.cert.CertificateExpiredException;
import java.security.cert.CertificateNotYetValidException;
import java.security.cert.X509Certificate;
import java.util.Date;
import java.util.Set;

class r extends X509Certificate {
    private final X509Certificate a;

    r(X509Certificate x509Certificate) {
        this.a = x509Certificate;
    }

    @Override
    public Set<String> getCriticalExtensionOIDs() {
        return this.a.getCriticalExtensionOIDs();
    }

    @Override
    public byte[] getExtensionValue(String str) {
        return this.a.getExtensionValue(str);
    }

    @Override
    public Set<String> getNonCriticalExtensionOIDs() {
        return this.a.getNonCriticalExtensionOIDs();
    }

    @Override
    public boolean hasUnsupportedCriticalExtension() {
        return this.a.hasUnsupportedCriticalExtension();
    }

    @Override
    public void checkValidity() throws CertificateNotYetValidException, CertificateExpiredException {
        this.a.checkValidity();
    }

    @Override
    public void checkValidity(Date date) throws CertificateNotYetValidException, CertificateExpiredException {
        this.a.checkValidity(date);
    }

    @Override
    public int getVersion() {
        return this.a.getVersion();
    }

    @Override
    public BigInteger getSerialNumber() {
        return this.a.getSerialNumber();
    }

    @Override
    public Principal getIssuerDN() {
        return this.a.getIssuerDN();
    }

    @Override
    public Principal getSubjectDN() {
        return this.a.getSubjectDN();
    }

    @Override
    public Date getNotBefore() {
        return this.a.getNotBefore();
    }

    @Override
    public Date getNotAfter() {
        return this.a.getNotAfter();
    }

    @Override
    public byte[] getTBSCertificate() {
        return this.a.getTBSCertificate();
    }

    @Override
    public byte[] getSignature() {
        return this.a.getSignature();
    }

    @Override
    public String getSigAlgName() {
        return this.a.getSigAlgName();
    }

    @Override
    public String getSigAlgOID() {
        return this.a.getSigAlgOID();
    }

    @Override
    public byte[] getSigAlgParams() {
        return this.a.getSigAlgParams();
    }

    @Override
    public boolean[] getIssuerUniqueID() {
        return this.a.getIssuerUniqueID();
    }

    @Override
    public boolean[] getSubjectUniqueID() {
        return this.a.getSubjectUniqueID();
    }

    @Override
    public boolean[] getKeyUsage() {
        return this.a.getKeyUsage();
    }

    @Override
    public int getBasicConstraints() {
        return this.a.getBasicConstraints();
    }

    @Override
    public byte[] getEncoded() {
        return this.a.getEncoded();
    }

    @Override
    public void verify(PublicKey publicKey) {
        this.a.verify(publicKey);
    }

    @Override
    public void verify(PublicKey publicKey, String str) {
        this.a.verify(publicKey, str);
    }

    @Override
    public String toString() {
        return this.a.toString();
    }

    @Override
    public PublicKey getPublicKey() {
        return this.a.getPublicKey();
    }
}
