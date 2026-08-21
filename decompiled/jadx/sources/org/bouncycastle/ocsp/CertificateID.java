package org.bouncycastle.ocsp;

import java.math.BigInteger;
import java.security.MessageDigest;
import java.security.cert.X509Certificate;
import org.bouncycastle.asn1.ASN1InputStream;
import org.bouncycastle.asn1.DERInteger;
import org.bouncycastle.asn1.DERNull;
import org.bouncycastle.asn1.DERObjectIdentifier;
import org.bouncycastle.asn1.DEROctetString;
import org.bouncycastle.asn1.ocsp.CertID;
import org.bouncycastle.asn1.x509.AlgorithmIdentifier;
import org.bouncycastle.asn1.x509.SubjectPublicKeyInfo;
import org.bouncycastle.jce.PrincipalUtil;

/* JADX INFO: loaded from: classes4.dex */
public class CertificateID {
    public static final String HASH_SHA1 = "1.3.14.3.2.26";
    private CertID id;

    public CertificateID(String str, X509Certificate x509Certificate, BigInteger bigInteger) throws OCSPException {
        this(str, x509Certificate, bigInteger, "BC");
    }

    public CertificateID(String str, X509Certificate x509Certificate, BigInteger bigInteger, String str2) throws OCSPException {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance(str, str2);
            AlgorithmIdentifier algorithmIdentifier = new AlgorithmIdentifier(new DERObjectIdentifier(str), new DERNull());
            messageDigest.update(PrincipalUtil.getSubjectX509Principal(x509Certificate).getEncoded());
            DEROctetString dEROctetString = new DEROctetString(messageDigest.digest());
            messageDigest.update(SubjectPublicKeyInfo.getInstance(new ASN1InputStream(x509Certificate.getPublicKey().getEncoded()).readObject()).getPublicKeyData().getBytes());
            this.id = new CertID(algorithmIdentifier, dEROctetString, new DEROctetString(messageDigest.digest()), new DERInteger(bigInteger));
        } catch (Exception e) {
            throw new OCSPException("problem creating ID: " + e, e);
        }
    }

    public CertificateID(CertID certID) {
        this.id = certID;
    }

    public boolean equals(Object obj) {
        if (obj instanceof CertificateID) {
            return this.id.getDERObject().equals(((CertificateID) obj).id.getDERObject());
        }
        return false;
    }

    public String getHashAlgOID() {
        return this.id.getHashAlgorithm().getObjectId().getId();
    }

    public byte[] getIssuerKeyHash() {
        return this.id.getIssuerKeyHash().getOctets();
    }

    public byte[] getIssuerNameHash() {
        return this.id.getIssuerNameHash().getOctets();
    }

    public BigInteger getSerialNumber() {
        return this.id.getSerialNumber().getValue();
    }

    public int hashCode() {
        return this.id.getDERObject().hashCode();
    }

    public CertID toASN1Object() {
        return this.id;
    }
}
