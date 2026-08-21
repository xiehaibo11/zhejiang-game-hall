package org.bouncycastle.jce.provider;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.math.BigInteger;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import java.security.Principal;
import java.security.PublicKey;
import java.security.Signature;
import java.security.SignatureException;
import java.security.cert.CRLException;
import java.security.cert.Certificate;
import java.security.cert.X509CRL;
import java.security.cert.X509CRLEntry;
import java.security.cert.X509Certificate;
import java.util.Collections;
import java.util.Date;
import java.util.Enumeration;
import java.util.HashSet;
import java.util.Set;
import javax.security.auth.x500.X500Principal;
import org.bouncycastle.asn1.ASN1Encodable;
import org.bouncycastle.asn1.ASN1OutputStream;
import org.bouncycastle.asn1.DERObjectIdentifier;
import org.bouncycastle.asn1.DEROutputStream;
import org.bouncycastle.asn1.x509.CertificateList;
import org.bouncycastle.asn1.x509.IssuingDistributionPoint;
import org.bouncycastle.asn1.x509.TBSCertList;
import org.bouncycastle.asn1.x509.X509Extension;
import org.bouncycastle.asn1.x509.X509Extensions;
import org.bouncycastle.jce.X509Principal;
import org.bouncycastle.x509.extension.X509ExtensionUtil;

public class X509CRLObject extends X509CRL {
    private CertificateList c;
    private boolean isIndirect;
    private String sigAlgName;
    private byte[] sigAlgParams;

    public X509CRLObject(CertificateList certificateList) throws CRLException {
        this.c = certificateList;
        try {
            this.sigAlgName = X509SignatureUtil.getSignatureName(certificateList.getSignatureAlgorithm());
            if (certificateList.getSignatureAlgorithm().getParameters() != null) {
                this.sigAlgParams = ((ASN1Encodable) certificateList.getSignatureAlgorithm().getParameters()).getDEREncoded();
            } else {
                this.sigAlgParams = null;
            }
            this.isIndirect = isIndirectCRL();
        } catch (Exception e) {
            throw new CRLException("CRL contents invalid: " + e);
        }
    }

    private Set getExtensionOIDs(boolean z) {
        X509Extensions extensions;
        if (getVersion() != 2 || (extensions = this.c.getTBSCertList().getExtensions()) == null) {
            return null;
        }
        HashSet hashSet = new HashSet();
        Enumeration enumerationOids = extensions.oids();
        while (enumerationOids.hasMoreElements()) {
            DERObjectIdentifier dERObjectIdentifier = (DERObjectIdentifier) enumerationOids.nextElement();
            if (z == extensions.getExtension(dERObjectIdentifier).isCritical()) {
                hashSet.add(dERObjectIdentifier.getId());
            }
        }
        return hashSet;
    }

    private boolean isIndirectCRL() throws CRLException {
        byte[] extensionValue = getExtensionValue(X509Extensions.IssuingDistributionPoint.getId());
        if (extensionValue == null) {
            return false;
        }
        try {
            return IssuingDistributionPoint.getInstance(X509ExtensionUtil.fromExtensionValue(extensionValue)).isIndirectCRL();
        } catch (Exception e) {
            throw new ExtCRLException("Exception reading IssuingDistributionPoint", e);
        }
    }

    private Set loadCRLEntries() {
        HashSet hashSet = new HashSet();
        Enumeration revokedCertificateEnumeration = this.c.getRevokedCertificateEnumeration();
        X500Principal issuerX500Principal = getIssuerX500Principal();
        while (revokedCertificateEnumeration.hasMoreElements()) {
            X509CRLEntryObject x509CRLEntryObject = new X509CRLEntryObject((TBSCertList.CRLEntry) revokedCertificateEnumeration.nextElement(), this.isIndirect, issuerX500Principal);
            hashSet.add(x509CRLEntryObject);
            issuerX500Principal = x509CRLEntryObject.getCertificateIssuer();
        }
        return hashSet;
    }

    @Override
    public Set getCriticalExtensionOIDs() {
        return getExtensionOIDs(true);
    }

    @Override
    public byte[] getEncoded() throws CRLException {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            new DEROutputStream(byteArrayOutputStream).writeObject(this.c);
            return byteArrayOutputStream.toByteArray();
        } catch (IOException e) {
            throw new CRLException(e.toString());
        }
    }

    @Override
    public byte[] getExtensionValue(String str) {
        X509Extension extension;
        X509Extensions extensions = this.c.getTBSCertList().getExtensions();
        if (extensions == null || (extension = extensions.getExtension(new DERObjectIdentifier(str))) == null) {
            return null;
        }
        try {
            return extension.getValue().getEncoded();
        } catch (Exception e) {
            throw new IllegalStateException("error parsing " + e.toString());
        }
    }

    @Override
    public Principal getIssuerDN() {
        return new X509Principal(this.c.getIssuer());
    }

    @Override
    public X500Principal getIssuerX500Principal() {
        try {
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            new ASN1OutputStream(byteArrayOutputStream).writeObject(this.c.getIssuer());
            return new X500Principal(byteArrayOutputStream.toByteArray());
        } catch (IOException unused) {
            throw new IllegalStateException("can't encode issuer DN");
        }
    }

    @Override
    public Date getNextUpdate() {
        if (this.c.getNextUpdate() != null) {
            return this.c.getNextUpdate().getDate();
        }
        return null;
    }

    @Override
    public Set getNonCriticalExtensionOIDs() {
        return getExtensionOIDs(false);
    }

    @Override
    public X509CRLEntry getRevokedCertificate(BigInteger bigInteger) {
        Enumeration revokedCertificateEnumeration = this.c.getRevokedCertificateEnumeration();
        X500Principal issuerX500Principal = getIssuerX500Principal();
        while (revokedCertificateEnumeration.hasMoreElements()) {
            TBSCertList.CRLEntry cRLEntry = (TBSCertList.CRLEntry) revokedCertificateEnumeration.nextElement();
            X509CRLEntryObject x509CRLEntryObject = new X509CRLEntryObject(cRLEntry, this.isIndirect, issuerX500Principal);
            if (bigInteger.equals(cRLEntry.getUserCertificate().getValue())) {
                return x509CRLEntryObject;
            }
            issuerX500Principal = x509CRLEntryObject.getCertificateIssuer();
        }
        return null;
    }

    @Override
    public Set getRevokedCertificates() {
        Set setLoadCRLEntries = loadCRLEntries();
        if (setLoadCRLEntries.isEmpty()) {
            return null;
        }
        return Collections.unmodifiableSet(setLoadCRLEntries);
    }

    @Override
    public String getSigAlgName() {
        return this.sigAlgName;
    }

    @Override
    public String getSigAlgOID() {
        return this.c.getSignatureAlgorithm().getObjectId().getId();
    }

    @Override
    public byte[] getSigAlgParams() {
        byte[] bArr = this.sigAlgParams;
        if (bArr == null) {
            return null;
        }
        int length = bArr.length;
        byte[] bArr2 = new byte[length];
        System.arraycopy(bArr, 0, bArr2, 0, length);
        return bArr2;
    }

    @Override
    public byte[] getSignature() {
        return this.c.getSignature().getBytes();
    }

    @Override
    public byte[] getTBSCertList() throws CRLException {
        try {
            return this.c.getTBSCertList().getEncoded(ASN1Encodable.DER);
        } catch (IOException e) {
            throw new CRLException(e.toString());
        }
    }

    @Override
    public Date getThisUpdate() {
        return this.c.getThisUpdate().getDate();
    }

    @Override
    public int getVersion() {
        return this.c.getVersion();
    }

    @Override
    public boolean hasUnsupportedCriticalExtension() {
        Set criticalExtensionOIDs = getCriticalExtensionOIDs();
        if (criticalExtensionOIDs == null) {
            return false;
        }
        criticalExtensionOIDs.remove(RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT);
        criticalExtensionOIDs.remove(RFC3280CertPathUtilities.DELTA_CRL_INDICATOR);
        return !criticalExtensionOIDs.isEmpty();
    }

    @Override
    public boolean isRevoked(Certificate certificate) {
        if (!certificate.getType().equals("X.509")) {
            throw new RuntimeException("X.509 CRL used with non X.509 Cert");
        }
        TBSCertList.CRLEntry[] revokedCertificates = this.c.getRevokedCertificates();
        if (revokedCertificates != null) {
            BigInteger serialNumber = ((X509Certificate) certificate).getSerialNumber();
            for (TBSCertList.CRLEntry cRLEntry : revokedCertificates) {
                if (cRLEntry.getUserCertificate().getValue().equals(serialNumber)) {
                    return true;
                }
            }
        }
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x00c3  */
    /*  JADX ERROR: JadxRuntimeException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Can't find top splitter block for handler:B:42:0x018e
        	at jadx.core.utils.BlockUtils.getTopSplitterForHandler(BlockUtils.java:1182)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.collectHandlerRegions(ExcHandlersRegionMaker.java:53)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.process(ExcHandlersRegionMaker.java:38)
        	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:27)
        */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public java.lang.String toString() {
        /*
            Method dump skipped, instruction units count: 444
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: org.bouncycastle.jce.provider.X509CRLObject.toString():java.lang.String");
    }

    @Override
    public void verify(PublicKey publicKey) throws NoSuchAlgorithmException, SignatureException, InvalidKeyException, CRLException, NoSuchProviderException {
        verify(publicKey, "BC");
    }

    @Override
    public void verify(PublicKey publicKey, String str) throws NoSuchAlgorithmException, SignatureException, InvalidKeyException, CRLException, NoSuchProviderException {
        if (!this.c.getSignatureAlgorithm().equals(this.c.getTBSCertList().getSignature())) {
            throw new CRLException("Signature algorithm on CertificateList does not match TBSCertList.");
        }
        Signature signature = Signature.getInstance(getSigAlgName(), str);
        signature.initVerify(publicKey);
        signature.update(getTBSCertList());
        if (!signature.verify(getSignature())) {
            throw new SignatureException("CRL does not verify with supplied public key.");
        }
    }
}
