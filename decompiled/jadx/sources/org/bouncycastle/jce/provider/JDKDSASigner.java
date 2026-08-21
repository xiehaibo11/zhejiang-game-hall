package org.bouncycastle.jce.provider;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.math.BigInteger;
import java.security.InvalidKeyException;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.SignatureException;
import java.security.SignatureSpi;
import java.security.interfaces.DSAKey;
import java.security.spec.AlgorithmParameterSpec;
import org.bouncycastle.asn1.ASN1EncodableVector;
import org.bouncycastle.asn1.ASN1InputStream;
import org.bouncycastle.asn1.ASN1Sequence;
import org.bouncycastle.asn1.DERInteger;
import org.bouncycastle.asn1.DEROutputStream;
import org.bouncycastle.asn1.DERSequence;
import org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers;
import org.bouncycastle.asn1.x509.X509ObjectIdentifiers;
import org.bouncycastle.crypto.DSA;
import org.bouncycastle.crypto.Digest;
import org.bouncycastle.crypto.digests.RIPEMD160Digest;
import org.bouncycastle.crypto.digests.SHA1Digest;
import org.bouncycastle.crypto.digests.SHA224Digest;
import org.bouncycastle.crypto.digests.SHA256Digest;
import org.bouncycastle.crypto.digests.SHA384Digest;
import org.bouncycastle.crypto.digests.SHA512Digest;
import org.bouncycastle.crypto.params.AsymmetricKeyParameter;
import org.bouncycastle.crypto.params.ParametersWithRandom;
import org.bouncycastle.crypto.signers.DSASigner;
import org.bouncycastle.crypto.signers.ECDSASigner;
import org.bouncycastle.crypto.signers.ECNRSigner;
import org.bouncycastle.jce.interfaces.ECKey;
import org.bouncycastle.jce.interfaces.ECPublicKey;
import org.bouncycastle.jce.interfaces.GOST3410Key;

/* JADX INFO: loaded from: classes4.dex */
public class JDKDSASigner extends SignatureSpi implements PKCSObjectIdentifiers, X509ObjectIdentifiers {
    private Digest digest;
    private SecureRandom random;
    private DSA signer;

    private static class NullDigest implements Digest {
        private ByteArrayOutputStream bOut;

        private NullDigest() {
            this.bOut = new ByteArrayOutputStream();
        }

        @Override // org.bouncycastle.crypto.Digest
        public int doFinal(byte[] bArr, int i) {
            byte[] byteArray = this.bOut.toByteArray();
            System.arraycopy(byteArray, 0, bArr, i, byteArray.length);
            return byteArray.length;
        }

        @Override // org.bouncycastle.crypto.Digest
        public String getAlgorithmName() {
            return "NULL";
        }

        @Override // org.bouncycastle.crypto.Digest
        public int getDigestSize() {
            return this.bOut.size();
        }

        @Override // org.bouncycastle.crypto.Digest
        public void reset() {
            this.bOut.reset();
        }

        @Override // org.bouncycastle.crypto.Digest
        public void update(byte b) {
            this.bOut.write(b);
        }

        @Override // org.bouncycastle.crypto.Digest
        public void update(byte[] bArr, int i, int i2) {
            this.bOut.write(bArr, i, i2);
        }
    }

    public static class dsa224 extends JDKDSASigner {
        public dsa224() {
            super(new SHA224Digest(), new DSASigner());
        }
    }

    public static class dsa256 extends JDKDSASigner {
        public dsa256() {
            super(new SHA256Digest(), new DSASigner());
        }
    }

    public static class dsa384 extends JDKDSASigner {
        public dsa384() {
            super(new SHA384Digest(), new DSASigner());
        }
    }

    public static class dsa512 extends JDKDSASigner {
        public dsa512() {
            super(new SHA512Digest(), new DSASigner());
        }
    }

    public static class ecDSA extends JDKDSASigner {
        public ecDSA() {
            super(new SHA1Digest(), new ECDSASigner());
        }
    }

    public static class ecDSA224 extends JDKDSASigner {
        public ecDSA224() {
            super(new SHA224Digest(), new ECDSASigner());
        }
    }

    public static class ecDSA256 extends JDKDSASigner {
        public ecDSA256() {
            super(new SHA256Digest(), new ECDSASigner());
        }
    }

    public static class ecDSA384 extends JDKDSASigner {
        public ecDSA384() {
            super(new SHA384Digest(), new ECDSASigner());
        }
    }

    public static class ecDSA512 extends JDKDSASigner {
        public ecDSA512() {
            super(new SHA512Digest(), new ECDSASigner());
        }
    }

    public static class ecDSARipeMD160 extends JDKDSASigner {
        public ecDSARipeMD160() {
            super(new RIPEMD160Digest(), new ECDSASigner());
        }
    }

    public static class ecNR extends JDKDSASigner {
        public ecNR() {
            super(new SHA1Digest(), new ECNRSigner());
        }
    }

    public static class ecNR224 extends JDKDSASigner {
        public ecNR224() {
            super(new SHA224Digest(), new ECNRSigner());
        }
    }

    public static class ecNR256 extends JDKDSASigner {
        public ecNR256() {
            super(new SHA256Digest(), new ECNRSigner());
        }
    }

    public static class ecNR384 extends JDKDSASigner {
        public ecNR384() {
            super(new SHA384Digest(), new ECNRSigner());
        }
    }

    public static class ecNR512 extends JDKDSASigner {
        public ecNR512() {
            super(new SHA512Digest(), new ECNRSigner());
        }
    }

    public static class noneDSA extends JDKDSASigner {
        public noneDSA() {
            super(new NullDigest(), new DSASigner());
        }
    }

    public static class stdDSA extends JDKDSASigner {
        public stdDSA() {
            super(new SHA1Digest(), new DSASigner());
        }
    }

    protected JDKDSASigner(Digest digest, DSA dsa) {
        this.digest = digest;
        this.signer = dsa;
    }

    private BigInteger[] derDecode(byte[] bArr) throws IOException {
        ASN1Sequence aSN1Sequence = (ASN1Sequence) new ASN1InputStream(bArr).readObject();
        return new BigInteger[]{((DERInteger) aSN1Sequence.getObjectAt(0)).getValue(), ((DERInteger) aSN1Sequence.getObjectAt(1)).getValue()};
    }

    private byte[] derEncode(BigInteger bigInteger, BigInteger bigInteger2) throws IOException {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        DEROutputStream dEROutputStream = new DEROutputStream(byteArrayOutputStream);
        ASN1EncodableVector aSN1EncodableVector = new ASN1EncodableVector();
        aSN1EncodableVector.add(new DERInteger(bigInteger));
        aSN1EncodableVector.add(new DERInteger(bigInteger2));
        dEROutputStream.writeObject(new DERSequence(aSN1EncodableVector));
        return byteArrayOutputStream.toByteArray();
    }

    @Override // java.security.SignatureSpi
    protected Object engineGetParameter(String str) {
        throw new UnsupportedOperationException("engineSetParameter unsupported");
    }

    @Override // java.security.SignatureSpi
    protected void engineInitSign(PrivateKey privateKey) throws InvalidKeyException {
        AsymmetricKeyParameter asymmetricKeyParameterGeneratePrivateKeyParameter = privateKey instanceof ECKey ? ECUtil.generatePrivateKeyParameter(privateKey) : privateKey instanceof GOST3410Key ? GOST3410Util.generatePrivateKeyParameter(privateKey) : DSAUtil.generatePrivateKeyParameter(privateKey);
        this.digest.reset();
        if (this.random != null) {
            this.signer.init(true, new ParametersWithRandom(asymmetricKeyParameterGeneratePrivateKeyParameter, this.random));
        } else {
            this.signer.init(true, asymmetricKeyParameterGeneratePrivateKeyParameter);
        }
    }

    @Override // java.security.SignatureSpi
    protected void engineInitSign(PrivateKey privateKey, SecureRandom secureRandom) throws InvalidKeyException {
        this.random = secureRandom;
        engineInitSign(privateKey);
    }

    @Override // java.security.SignatureSpi
    protected void engineInitVerify(PublicKey publicKey) throws InvalidKeyException {
        AsymmetricKeyParameter asymmetricKeyParameterGeneratePublicKeyParameter;
        if (publicKey instanceof ECPublicKey) {
            asymmetricKeyParameterGeneratePublicKeyParameter = ECUtil.generatePublicKeyParameter(publicKey);
        } else if (publicKey instanceof GOST3410Key) {
            asymmetricKeyParameterGeneratePublicKeyParameter = GOST3410Util.generatePublicKeyParameter(publicKey);
        } else if (publicKey instanceof DSAKey) {
            asymmetricKeyParameterGeneratePublicKeyParameter = DSAUtil.generatePublicKeyParameter(publicKey);
        } else {
            try {
                PublicKey publicKeyCreatePublicKeyFromDERStream = JDKKeyFactory.createPublicKeyFromDERStream(publicKey.getEncoded());
                if (publicKeyCreatePublicKeyFromDERStream instanceof ECPublicKey) {
                    asymmetricKeyParameterGeneratePublicKeyParameter = ECUtil.generatePublicKeyParameter(publicKeyCreatePublicKeyFromDERStream);
                } else {
                    if (!(publicKeyCreatePublicKeyFromDERStream instanceof DSAKey)) {
                        throw new InvalidKeyException("can't recognise key type in DSA based signer");
                    }
                    asymmetricKeyParameterGeneratePublicKeyParameter = DSAUtil.generatePublicKeyParameter(publicKeyCreatePublicKeyFromDERStream);
                }
            } catch (Exception unused) {
                throw new InvalidKeyException("can't recognise key type in DSA based signer");
            }
        }
        this.digest.reset();
        this.signer.init(false, asymmetricKeyParameterGeneratePublicKeyParameter);
    }

    @Override // java.security.SignatureSpi
    protected void engineSetParameter(String str, Object obj) {
        throw new UnsupportedOperationException("engineSetParameter unsupported");
    }

    @Override // java.security.SignatureSpi
    protected void engineSetParameter(AlgorithmParameterSpec algorithmParameterSpec) {
        throw new UnsupportedOperationException("engineSetParameter unsupported");
    }

    @Override // java.security.SignatureSpi
    protected byte[] engineSign() throws SignatureException {
        byte[] bArr = new byte[this.digest.getDigestSize()];
        this.digest.doFinal(bArr, 0);
        try {
            BigInteger[] bigIntegerArrGenerateSignature = this.signer.generateSignature(bArr);
            return derEncode(bigIntegerArrGenerateSignature[0], bigIntegerArrGenerateSignature[1]);
        } catch (Exception e) {
            throw new SignatureException(e.toString());
        }
    }

    @Override // java.security.SignatureSpi
    protected void engineUpdate(byte b) throws SignatureException {
        this.digest.update(b);
    }

    @Override // java.security.SignatureSpi
    protected void engineUpdate(byte[] bArr, int i, int i2) throws SignatureException {
        this.digest.update(bArr, i, i2);
    }

    @Override // java.security.SignatureSpi
    protected boolean engineVerify(byte[] bArr) throws SignatureException {
        byte[] bArr2 = new byte[this.digest.getDigestSize()];
        this.digest.doFinal(bArr2, 0);
        try {
            BigInteger[] bigIntegerArrDerDecode = derDecode(bArr);
            return this.signer.verifySignature(bArr2, bigIntegerArrDerDecode[0], bigIntegerArrDerDecode[1]);
        } catch (Exception unused) {
            throw new SignatureException("error decoding signature bytes.");
        }
    }
}
