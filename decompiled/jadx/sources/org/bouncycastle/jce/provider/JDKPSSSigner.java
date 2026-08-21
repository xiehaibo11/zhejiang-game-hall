package org.bouncycastle.jce.provider;

import java.security.AlgorithmParameters;
import java.security.InvalidKeyException;
import java.security.InvalidParameterException;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.SignatureException;
import java.security.SignatureSpi;
import java.security.interfaces.RSAPrivateKey;
import java.security.interfaces.RSAPublicKey;
import java.security.spec.AlgorithmParameterSpec;
import java.security.spec.MGF1ParameterSpec;
import java.security.spec.PSSParameterSpec;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;
import org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers;
import org.bouncycastle.crypto.AsymmetricBlockCipher;
import org.bouncycastle.crypto.CryptoException;
import org.bouncycastle.crypto.Digest;
import org.bouncycastle.crypto.engines.RSABlindedEngine;
import org.bouncycastle.crypto.params.ParametersWithRandom;
import org.bouncycastle.crypto.signers.PSSSigner;

/* JADX INFO: loaded from: classes4.dex */
public class JDKPSSSigner extends SignatureSpi {
    private Digest digest;
    private AlgorithmParameters engineParams;
    private PSSParameterSpec originalSpec;
    private PSSParameterSpec paramSpec;
    private PSSSigner pss;
    private int saltLength;
    private AsymmetricBlockCipher signer;
    private byte trailer;

    public static class PSSwithRSA extends JDKPSSSigner {
        public PSSwithRSA() {
            super(new RSABlindedEngine(), null);
        }
    }

    public static class SHA1withRSA extends JDKPSSSigner {
        public SHA1withRSA() {
            super(new RSABlindedEngine(), PSSParameterSpec.DEFAULT);
        }
    }

    public static class SHA224withRSA extends JDKPSSSigner {
        public SHA224withRSA() {
            super(new RSABlindedEngine(), new PSSParameterSpec("SHA-224", "MGF1", new MGF1ParameterSpec("SHA-224"), 28, 1));
        }
    }

    public static class SHA256withRSA extends JDKPSSSigner {
        public SHA256withRSA() {
            super(new RSABlindedEngine(), new PSSParameterSpec(MessageDigestAlgorithms.SHA_256, "MGF1", new MGF1ParameterSpec(MessageDigestAlgorithms.SHA_256), 32, 1));
        }
    }

    public static class SHA384withRSA extends JDKPSSSigner {
        public SHA384withRSA() {
            super(new RSABlindedEngine(), new PSSParameterSpec(MessageDigestAlgorithms.SHA_384, "MGF1", new MGF1ParameterSpec(MessageDigestAlgorithms.SHA_384), 48, 1));
        }
    }

    public static class SHA512withRSA extends JDKPSSSigner {
        public SHA512withRSA() {
            super(new RSABlindedEngine(), new PSSParameterSpec(MessageDigestAlgorithms.SHA_512, "MGF1", new MGF1ParameterSpec(MessageDigestAlgorithms.SHA_512), 64, 1));
        }
    }

    protected JDKPSSSigner(AsymmetricBlockCipher asymmetricBlockCipher, PSSParameterSpec pSSParameterSpec) {
        this.signer = asymmetricBlockCipher;
        if (pSSParameterSpec == null) {
            this.originalSpec = null;
            pSSParameterSpec = PSSParameterSpec.DEFAULT;
        } else {
            this.originalSpec = pSSParameterSpec;
            this.paramSpec = pSSParameterSpec;
        }
        this.digest = JCEDigestUtil.getDigest(pSSParameterSpec.getDigestAlgorithm());
        this.saltLength = pSSParameterSpec.getSaltLength();
        this.trailer = getTrailer(pSSParameterSpec.getTrailerField());
    }

    private byte getTrailer(int i) {
        if (i == 1) {
            return PSSSigner.TRAILER_IMPLICIT;
        }
        throw new IllegalArgumentException("unknown trailer field");
    }

    @Override // java.security.SignatureSpi
    protected Object engineGetParameter(String str) {
        throw new UnsupportedOperationException("engineGetParameter unsupported");
    }

    @Override // java.security.SignatureSpi
    protected AlgorithmParameters engineGetParameters() {
        if (this.engineParams == null && this.paramSpec != null) {
            try {
                AlgorithmParameters algorithmParameters = AlgorithmParameters.getInstance("PSS", "BC");
                this.engineParams = algorithmParameters;
                algorithmParameters.init(this.paramSpec);
            } catch (Exception e) {
                throw new RuntimeException(e.toString());
            }
        }
        return this.engineParams;
    }

    @Override // java.security.SignatureSpi
    protected void engineInitSign(PrivateKey privateKey) throws InvalidKeyException {
        if (!(privateKey instanceof RSAPrivateKey)) {
            throw new InvalidKeyException("Supplied key is not a RSAPrivateKey instance");
        }
        PSSSigner pSSSigner = new PSSSigner(this.signer, this.digest, this.saltLength, this.trailer);
        this.pss = pSSSigner;
        pSSSigner.init(true, RSAUtil.generatePrivateKeyParameter((RSAPrivateKey) privateKey));
    }

    @Override // java.security.SignatureSpi
    protected void engineInitSign(PrivateKey privateKey, SecureRandom secureRandom) throws InvalidKeyException {
        if (!(privateKey instanceof RSAPrivateKey)) {
            throw new InvalidKeyException("Supplied key is not a RSAPrivateKey instance");
        }
        PSSSigner pSSSigner = new PSSSigner(this.signer, this.digest, this.saltLength, this.trailer);
        this.pss = pSSSigner;
        pSSSigner.init(true, new ParametersWithRandom(RSAUtil.generatePrivateKeyParameter((RSAPrivateKey) privateKey), secureRandom));
    }

    @Override // java.security.SignatureSpi
    protected void engineInitVerify(PublicKey publicKey) throws InvalidKeyException {
        if (!(publicKey instanceof RSAPublicKey)) {
            throw new InvalidKeyException("Supplied key is not a RSAPublicKey instance");
        }
        PSSSigner pSSSigner = new PSSSigner(this.signer, this.digest, this.saltLength);
        this.pss = pSSSigner;
        pSSSigner.init(false, RSAUtil.generatePublicKeyParameter((RSAPublicKey) publicKey));
    }

    @Override // java.security.SignatureSpi
    protected void engineSetParameter(String str, Object obj) {
        throw new UnsupportedOperationException("engineSetParameter unsupported");
    }

    @Override // java.security.SignatureSpi
    protected void engineSetParameter(AlgorithmParameterSpec algorithmParameterSpec) throws InvalidParameterException {
        if (!(algorithmParameterSpec instanceof PSSParameterSpec)) {
            throw new InvalidParameterException("Only PSSParameterSpec supported");
        }
        this.paramSpec = (PSSParameterSpec) algorithmParameterSpec;
        PSSParameterSpec pSSParameterSpec = this.originalSpec;
        if (pSSParameterSpec != null && !JCEDigestUtil.isSameDigest(pSSParameterSpec.getDigestAlgorithm(), this.paramSpec.getDigestAlgorithm())) {
            throw new InvalidParameterException("parameter must be using " + this.originalSpec.getDigestAlgorithm());
        }
        if (!this.paramSpec.getMGFAlgorithm().equalsIgnoreCase("MGF1") && !this.paramSpec.getMGFAlgorithm().equals(PKCSObjectIdentifiers.id_mgf1.getId())) {
            throw new InvalidParameterException("unknown mask generation function specified");
        }
        if (!(this.paramSpec.getMGFParameters() instanceof MGF1ParameterSpec)) {
            throw new InvalidParameterException("unkown MGF parameters");
        }
        MGF1ParameterSpec mGF1ParameterSpec = (MGF1ParameterSpec) this.paramSpec.getMGFParameters();
        if (!JCEDigestUtil.isSameDigest(mGF1ParameterSpec.getDigestAlgorithm(), this.paramSpec.getDigestAlgorithm())) {
            throw new InvalidParameterException("digest algorithm for MGF should be the same as for PSS parameters.");
        }
        Digest digest = JCEDigestUtil.getDigest(mGF1ParameterSpec.getDigestAlgorithm());
        this.digest = digest;
        if (digest != null) {
            this.saltLength = this.paramSpec.getSaltLength();
            this.trailer = getTrailer(this.paramSpec.getTrailerField());
        } else {
            throw new InvalidParameterException("no match on MGF digest algorithm: " + mGF1ParameterSpec.getDigestAlgorithm());
        }
    }

    @Override // java.security.SignatureSpi
    protected byte[] engineSign() throws SignatureException {
        try {
            return this.pss.generateSignature();
        } catch (CryptoException e) {
            throw new SignatureException(e.getMessage());
        }
    }

    @Override // java.security.SignatureSpi
    protected void engineUpdate(byte b) throws SignatureException {
        this.pss.update(b);
    }

    @Override // java.security.SignatureSpi
    protected void engineUpdate(byte[] bArr, int i, int i2) throws SignatureException {
        this.pss.update(bArr, i, i2);
    }

    @Override // java.security.SignatureSpi
    protected boolean engineVerify(byte[] bArr) throws SignatureException {
        return this.pss.verifySignature(bArr);
    }
}
