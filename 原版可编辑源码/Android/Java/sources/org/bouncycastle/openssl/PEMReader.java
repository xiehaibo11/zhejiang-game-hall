package org.bouncycastle.openssl;

import com.alipay.sdk.m.n.d;
import com.xiaomi.mipush.sdk.Constants;
import java.io.BufferedReader;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.Reader;
import java.security.KeyFactory;
import java.security.KeyPair;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import java.security.PublicKey;
import java.security.cert.CertificateFactory;
import java.security.cert.X509CRL;
import java.security.cert.X509Certificate;
import java.security.spec.DSAPrivateKeySpec;
import java.security.spec.DSAPublicKeySpec;
import java.security.spec.InvalidKeySpecException;
import java.security.spec.KeySpec;
import java.security.spec.PKCS8EncodedKeySpec;
import java.security.spec.RSAPrivateCrtKeySpec;
import java.security.spec.RSAPublicKeySpec;
import java.security.spec.X509EncodedKeySpec;
import java.util.StringTokenizer;
import org.bouncycastle.asn1.ASN1InputStream;
import org.bouncycastle.asn1.ASN1Object;
import org.bouncycastle.asn1.ASN1Sequence;
import org.bouncycastle.asn1.DERInteger;
import org.bouncycastle.asn1.DERObjectIdentifier;
import org.bouncycastle.asn1.cms.ContentInfo;
import org.bouncycastle.asn1.pkcs.PrivateKeyInfo;
import org.bouncycastle.asn1.sec.ECPrivateKeyStructure;
import org.bouncycastle.asn1.x509.AlgorithmIdentifier;
import org.bouncycastle.asn1.x509.RSAPublicKeyStructure;
import org.bouncycastle.asn1.x509.SubjectPublicKeyInfo;
import org.bouncycastle.asn1.x9.X9ObjectIdentifiers;
import org.bouncycastle.jce.ECNamedCurveTable;
import org.bouncycastle.jce.PKCS10CertificationRequest;
import org.bouncycastle.jce.spec.ECNamedCurveParameterSpec;
import org.bouncycastle.util.encoders.Base64;
import org.bouncycastle.util.encoders.Hex;
import org.bouncycastle.x509.X509AttributeCertificate;
import org.bouncycastle.x509.X509V2AttributeCertificate;

public class PEMReader extends BufferedReader {
    private final PasswordFinder pFinder;
    private final String provider;

    public PEMReader(Reader reader) {
        this(reader, null, "BC");
    }

    public PEMReader(Reader reader, PasswordFinder passwordFinder) {
        this(reader, passwordFinder, "BC");
    }

    public PEMReader(Reader reader, PasswordFinder passwordFinder, String str) {
        super(reader);
        this.pFinder = passwordFinder;
        this.provider = str;
    }

    private X509AttributeCertificate readAttributeCertificate(String str) throws IOException {
        return new X509V2AttributeCertificate(readBytes(str));
    }

    private byte[] readBytes(String str) throws IOException {
        String line;
        StringBuffer stringBuffer = new StringBuffer();
        while (true) {
            line = readLine();
            if (line == null || line.indexOf(str) != -1) {
                break;
            }
            stringBuffer.append(line.trim());
        }
        if (line != null) {
            return Base64.decode(stringBuffer.toString());
        }
        throw new IOException(str + " not found");
    }

    private X509CRL readCRL(String str) throws IOException {
        try {
            return (X509CRL) CertificateFactory.getInstance("X.509", this.provider).generateCRL(new ByteArrayInputStream(readBytes(str)));
        } catch (Exception e) {
            throw new IOException("problem parsing cert: " + e.toString());
        }
    }

    private X509Certificate readCertificate(String str) throws IOException {
        try {
            return (X509Certificate) CertificateFactory.getInstance("X.509", this.provider).generateCertificate(new ByteArrayInputStream(readBytes(str)));
        } catch (Exception e) {
            throw new IOException("problem parsing cert: " + e.toString());
        }
    }

    private PKCS10CertificationRequest readCertificateRequest(String str) throws IOException {
        try {
            return new PKCS10CertificationRequest(readBytes(str));
        } catch (Exception e) {
            throw new IOException("problem parsing cert: " + e.toString());
        }
    }

    private ECNamedCurveParameterSpec readECParameters(String str) throws IOException {
        return ECNamedCurveTable.getParameterSpec(((DERObjectIdentifier) ASN1Object.fromByteArray(readBytes(str))).getId());
    }

    private KeyPair readECPrivateKey(String str) throws IOException {
        try {
            ECPrivateKeyStructure eCPrivateKeyStructure = new ECPrivateKeyStructure((ASN1Sequence) ASN1Object.fromByteArray(readBytes(str)));
            AlgorithmIdentifier algorithmIdentifier = new AlgorithmIdentifier(X9ObjectIdentifiers.id_ecPublicKey, eCPrivateKeyStructure.getParameters());
            PrivateKeyInfo privateKeyInfo = new PrivateKeyInfo(algorithmIdentifier, eCPrivateKeyStructure.getDERObject());
            SubjectPublicKeyInfo subjectPublicKeyInfo = new SubjectPublicKeyInfo(algorithmIdentifier, eCPrivateKeyStructure.getPublicKey().getBytes());
            PKCS8EncodedKeySpec pKCS8EncodedKeySpec = new PKCS8EncodedKeySpec(privateKeyInfo.getEncoded());
            X509EncodedKeySpec x509EncodedKeySpec = new X509EncodedKeySpec(subjectPublicKeyInfo.getEncoded());
            KeyFactory keyFactory = KeyFactory.getInstance("ECDSA", this.provider);
            return new KeyPair(keyFactory.generatePublic(x509EncodedKeySpec), keyFactory.generatePrivate(pKCS8EncodedKeySpec));
        } catch (ClassCastException unused) {
            throw new IOException("wrong ASN.1 object found in stream");
        } catch (Exception e) {
            throw new IOException("problem parsing EC private key: " + e);
        }
    }

    private KeyPair readKeyPair(String str, String str2) throws Exception {
        KeySpec dSAPrivateKeySpec;
        KeySpec dSAPublicKeySpec;
        StringBuffer stringBuffer = new StringBuffer();
        boolean z = false;
        String strSubstring = null;
        while (true) {
            String line = readLine();
            if (line == null) {
                break;
            }
            if (line.startsWith("Proc-Type: 4,ENCRYPTED")) {
                z = true;
            } else if (line.startsWith("DEK-Info:")) {
                strSubstring = line.substring(10);
            } else {
                if (line.indexOf(str2) != -1) {
                    break;
                }
                stringBuffer.append(line.trim());
            }
        }
        byte[] bArrDecode = Base64.decode(stringBuffer.toString());
        if (z) {
            PasswordFinder passwordFinder = this.pFinder;
            if (passwordFinder == null) {
                throw new IOException("No password finder specified, but a password is required");
            }
            char[] password = passwordFinder.getPassword();
            if (password == null) {
                throw new IOException("Password is null, but a password is required");
            }
            StringTokenizer stringTokenizer = new StringTokenizer(strSubstring, Constants.ACCEPT_TIME_SEPARATOR_SP);
            bArrDecode = PEMUtilities.crypt(false, this.provider, bArrDecode, password, stringTokenizer.nextToken(), Hex.decode(stringTokenizer.nextToken()));
        }
        ASN1Sequence aSN1Sequence = (ASN1Sequence) new ASN1InputStream(new ByteArrayInputStream(bArrDecode)).readObject();
        boolean zEquals = str.equals(d.a);
        DERInteger dERInteger = (DERInteger) aSN1Sequence.getObjectAt(1);
        if (zEquals) {
            DERInteger dERInteger2 = (DERInteger) aSN1Sequence.getObjectAt(2);
            DERInteger dERInteger3 = (DERInteger) aSN1Sequence.getObjectAt(3);
            DERInteger dERInteger4 = (DERInteger) aSN1Sequence.getObjectAt(4);
            DERInteger dERInteger5 = (DERInteger) aSN1Sequence.getObjectAt(5);
            DERInteger dERInteger6 = (DERInteger) aSN1Sequence.getObjectAt(6);
            DERInteger dERInteger7 = (DERInteger) aSN1Sequence.getObjectAt(7);
            DERInteger dERInteger8 = (DERInteger) aSN1Sequence.getObjectAt(8);
            dSAPublicKeySpec = new RSAPublicKeySpec(dERInteger.getValue(), dERInteger2.getValue());
            dSAPrivateKeySpec = new RSAPrivateCrtKeySpec(dERInteger.getValue(), dERInteger2.getValue(), dERInteger3.getValue(), dERInteger4.getValue(), dERInteger5.getValue(), dERInteger6.getValue(), dERInteger7.getValue(), dERInteger8.getValue());
        } else {
            DERInteger dERInteger9 = (DERInteger) aSN1Sequence.getObjectAt(2);
            DERInteger dERInteger10 = (DERInteger) aSN1Sequence.getObjectAt(3);
            DERInteger dERInteger11 = (DERInteger) aSN1Sequence.getObjectAt(4);
            dSAPrivateKeySpec = new DSAPrivateKeySpec(((DERInteger) aSN1Sequence.getObjectAt(5)).getValue(), dERInteger.getValue(), dERInteger9.getValue(), dERInteger10.getValue());
            dSAPublicKeySpec = new DSAPublicKeySpec(dERInteger11.getValue(), dERInteger.getValue(), dERInteger9.getValue(), dERInteger10.getValue());
        }
        KeyFactory keyFactory = KeyFactory.getInstance(str, this.provider);
        return new KeyPair(keyFactory.generatePublic(dSAPublicKeySpec), keyFactory.generatePrivate(dSAPrivateKeySpec));
    }

    private ContentInfo readPKCS7(String str) throws IOException {
        String line;
        StringBuffer stringBuffer = new StringBuffer();
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        while (true) {
            line = readLine();
            if (line == null || line.indexOf(str) != -1) {
                break;
            }
            stringBuffer.append(line.trim().trim());
            Base64.decode(stringBuffer.substring(0, (stringBuffer.length() / 4) * 4), byteArrayOutputStream);
            stringBuffer.delete(0, (stringBuffer.length() / 4) * 4);
        }
        if (stringBuffer.length() != 0) {
            throw new RuntimeException("base64 data appears to be truncated");
        }
        if (line == null) {
            throw new IOException(str + " not found");
        }
        try {
            return ContentInfo.getInstance(new ASN1InputStream(new ByteArrayInputStream(byteArrayOutputStream.toByteArray())).readObject());
        } catch (Exception e) {
            throw new IOException("problem parsing PKCS7 object: " + e.toString());
        }
    }

    private PublicKey readPublicKey(String str) throws IOException {
        X509EncodedKeySpec x509EncodedKeySpec = new X509EncodedKeySpec(readBytes(str));
        String[] strArr = {"DSA", d.a};
        for (int i = 0; i < 2; i++) {
            try {
                return KeyFactory.getInstance(strArr[i], this.provider).generatePublic(x509EncodedKeySpec);
            } catch (NoSuchAlgorithmException | InvalidKeySpecException unused) {
            } catch (NoSuchProviderException unused2) {
                throw new RuntimeException("can't find provider " + this.provider);
            }
        }
        return null;
    }

    private PublicKey readRSAPublicKey(String str) throws IOException {
        RSAPublicKeyStructure rSAPublicKeyStructure = new RSAPublicKeyStructure((ASN1Sequence) new ASN1InputStream(new ByteArrayInputStream(readBytes(str))).readObject());
        try {
            return KeyFactory.getInstance(d.a, this.provider).generatePublic(new RSAPublicKeySpec(rSAPublicKeyStructure.getModulus(), rSAPublicKeyStructure.getPublicExponent()));
        } catch (NoSuchProviderException unused) {
            throw new IOException("can't find provider " + this.provider);
        } catch (Exception e) {
            throw new IOException("problem extracting key: " + e.toString());
        }
    }

    public Object readObject() throws IOException {
        String line;
        do {
            line = readLine();
            if (line == null) {
                return null;
            }
            if (line.indexOf("-----BEGIN PUBLIC KEY") != -1) {
                return readPublicKey("-----END PUBLIC KEY");
            }
            if (line.indexOf("-----BEGIN RSA PUBLIC KEY") != -1) {
                return readRSAPublicKey("-----END RSA PUBLIC KEY");
            }
            if (line.indexOf("-----BEGIN CERTIFICATE REQUEST") != -1) {
                return readCertificateRequest("-----END CERTIFICATE REQUEST");
            }
            if (line.indexOf("-----BEGIN NEW CERTIFICATE REQUEST") != -1) {
                return readCertificateRequest("-----END NEW CERTIFICATE REQUEST");
            }
            if (line.indexOf("-----BEGIN CERTIFICATE") != -1) {
                return readCertificate("-----END CERTIFICATE");
            }
            if (line.indexOf("-----BEGIN PKCS7") != -1) {
                return readPKCS7("-----END PKCS7");
            }
            if (line.indexOf("-----BEGIN X509 CERTIFICATE") != -1) {
                return readCertificate("-----END X509 CERTIFICATE");
            }
            if (line.indexOf("-----BEGIN X509 CRL") != -1) {
                return readCRL("-----END X509 CRL");
            }
            if (line.indexOf("-----BEGIN ATTRIBUTE CERTIFICATE") != -1) {
                return readAttributeCertificate("-----END ATTRIBUTE CERTIFICATE");
            }
            if (line.indexOf("-----BEGIN RSA PRIVATE KEY") != -1) {
                try {
                    return readKeyPair(d.a, "-----END RSA PRIVATE KEY");
                } catch (Exception e) {
                    throw new IOException("problem creating RSA private key: " + e.toString());
                }
            }
            if (line.indexOf("-----BEGIN DSA PRIVATE KEY") != -1) {
                try {
                    return readKeyPair("DSA", "-----END DSA PRIVATE KEY");
                } catch (Exception e2) {
                    throw new IOException("problem creating DSA private key: " + e2.toString());
                }
            }
            if (line.indexOf("-----BEGIN EC PARAMETERS-----") != -1) {
                return readECParameters("-----END EC PARAMETERS-----");
            }
        } while (line.indexOf("-----BEGIN EC PRIVATE KEY-----") == -1);
        return readECPrivateKey("-----END EC PRIVATE KEY-----");
    }
}
