package org.bouncycastle.ocsp;

import java.io.ByteArrayOutputStream;
import java.security.cert.X509Extension;
import java.util.Enumeration;
import java.util.HashSet;
import java.util.Set;
import org.bouncycastle.asn1.DERObjectIdentifier;
import org.bouncycastle.asn1.DEROutputStream;
import org.bouncycastle.asn1.ocsp.Request;
import org.bouncycastle.asn1.x509.X509Extensions;

public class Req implements X509Extension {
    private Request req;

    public Req(Request request) {
        this.req = request;
    }

    private Set getExtensionOIDs(boolean z) {
        HashSet hashSet = new HashSet();
        X509Extensions singleRequestExtensions = getSingleRequestExtensions();
        if (singleRequestExtensions != null) {
            Enumeration enumerationOids = singleRequestExtensions.oids();
            while (enumerationOids.hasMoreElements()) {
                DERObjectIdentifier dERObjectIdentifier = (DERObjectIdentifier) enumerationOids.nextElement();
                if (z == singleRequestExtensions.getExtension(dERObjectIdentifier).isCritical()) {
                    hashSet.add(dERObjectIdentifier.getId());
                }
            }
        }
        return hashSet;
    }

    public CertificateID getCertID() {
        return new CertificateID(this.req.getReqCert());
    }

    @Override
    public Set getCriticalExtensionOIDs() {
        return getExtensionOIDs(true);
    }

    @Override
    public byte[] getExtensionValue(String str) {
        org.bouncycastle.asn1.x509.X509Extension extension;
        X509Extensions singleRequestExtensions = getSingleRequestExtensions();
        if (singleRequestExtensions == null || (extension = singleRequestExtensions.getExtension(new DERObjectIdentifier(str))) == null) {
            return null;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            new DEROutputStream(byteArrayOutputStream).writeObject(extension.getValue());
            return byteArrayOutputStream.toByteArray();
        } catch (Exception e) {
            throw new RuntimeException("error encoding " + e.toString());
        }
    }

    @Override
    public Set getNonCriticalExtensionOIDs() {
        return getExtensionOIDs(false);
    }

    public X509Extensions getSingleRequestExtensions() {
        return this.req.getSingleRequestExtensions();
    }

    @Override
    public boolean hasUnsupportedCriticalExtension() {
        Set criticalExtensionOIDs = getCriticalExtensionOIDs();
        return (criticalExtensionOIDs == null || criticalExtensionOIDs.isEmpty()) ? false : true;
    }
}
