package org.bouncycastle.jce.provider;

import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import java.math.BigInteger;
import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.Key;
import java.security.NoSuchAlgorithmException;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.spec.AlgorithmParameterSpec;
import java.util.Hashtable;
import javax.crypto.KeyAgreementSpi;
import javax.crypto.SecretKey;
import javax.crypto.ShortBufferException;
import javax.crypto.spec.SecretKeySpec;
import org.bouncycastle.asn1.DERObjectIdentifier;
import org.bouncycastle.asn1.nist.NISTObjectIdentifiers;
import org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers;
import org.bouncycastle.asn1.x9.X9IntegerConverter;
import org.bouncycastle.crypto.BasicAgreement;
import org.bouncycastle.crypto.DerivationFunction;
import org.bouncycastle.crypto.agreement.ECDHBasicAgreement;
import org.bouncycastle.crypto.agreement.ECDHCBasicAgreement;
import org.bouncycastle.crypto.agreement.kdf.DHKDFParameters;
import org.bouncycastle.crypto.agreement.kdf.ECDHKEKGenerator;
import org.bouncycastle.crypto.digests.SHA1Digest;
import org.bouncycastle.crypto.params.ECPrivateKeyParameters;
import org.bouncycastle.jce.interfaces.ECPrivateKey;
import org.bouncycastle.jce.interfaces.ECPublicKey;

/* JADX INFO: loaded from: classes4.dex */
public class JCEECDHKeyAgreement extends KeyAgreementSpi {
    private BasicAgreement agreement;
    private DerivationFunction kdf;
    private ECPrivateKeyParameters privKey;
    private BigInteger result;
    private static final X9IntegerConverter converter = new X9IntegerConverter();
    private static final Hashtable algorithms = new Hashtable();

    public static class DH extends JCEECDHKeyAgreement {
        public DH() {
            super(new ECDHBasicAgreement());
        }
    }

    public static class DHC extends JCEECDHKeyAgreement {
        public DHC() {
            super(new ECDHCBasicAgreement());
        }
    }

    public static class DHwithSHA1KDF extends JCEECDHKeyAgreement {
        public DHwithSHA1KDF() {
            super(new ECDHBasicAgreement(), new ECDHKEKGenerator(new SHA1Digest()));
        }
    }

    static {
        Integer num = new Integer(128);
        Integer num2 = new Integer(PsExtractor.AUDIO_STREAM);
        Integer num3 = new Integer(256);
        algorithms.put(NISTObjectIdentifiers.id_aes128_CBC.getId(), num);
        algorithms.put(NISTObjectIdentifiers.id_aes192_CBC.getId(), num2);
        algorithms.put(NISTObjectIdentifiers.id_aes256_CBC.getId(), num3);
        algorithms.put(NISTObjectIdentifiers.id_aes128_wrap.getId(), num);
        algorithms.put(NISTObjectIdentifiers.id_aes192_wrap.getId(), num2);
        algorithms.put(NISTObjectIdentifiers.id_aes256_wrap.getId(), num3);
        algorithms.put(PKCSObjectIdentifiers.id_alg_CMS3DESwrap.getId(), num2);
    }

    protected JCEECDHKeyAgreement(BasicAgreement basicAgreement) {
        this.agreement = basicAgreement;
    }

    protected JCEECDHKeyAgreement(BasicAgreement basicAgreement, DerivationFunction derivationFunction) {
        this.agreement = basicAgreement;
        this.kdf = derivationFunction;
    }

    private byte[] bigIntToBytes(BigInteger bigInteger) {
        X9IntegerConverter x9IntegerConverter = converter;
        return x9IntegerConverter.integerToBytes(bigInteger, x9IntegerConverter.getByteLength(this.privKey.getParameters().getG().getX()));
    }

    @Override // javax.crypto.KeyAgreementSpi
    protected Key engineDoPhase(Key key, boolean z) throws IllegalStateException, InvalidKeyException {
        if (this.privKey == null) {
            throw new IllegalStateException("EC Diffie-Hellman not initialised.");
        }
        if (!z) {
            throw new IllegalStateException("EC Diffie-Hellman can only be between two parties.");
        }
        if (!(key instanceof ECPublicKey)) {
            throw new InvalidKeyException("EC Key Agreement doPhase requires ECPublicKey");
        }
        this.result = this.agreement.calculateAgreement(ECUtil.generatePublicKeyParameter((PublicKey) key));
        return null;
    }

    @Override // javax.crypto.KeyAgreementSpi
    protected int engineGenerateSecret(byte[] bArr, int i) throws IllegalStateException, ShortBufferException {
        byte[] bArrBigIntToBytes = bigIntToBytes(this.result);
        if (bArr.length - i < bArrBigIntToBytes.length) {
            throw new ShortBufferException("ECKeyAgreement - buffer too short");
        }
        System.arraycopy(bArrBigIntToBytes, 0, bArr, i, bArrBigIntToBytes.length);
        return bArrBigIntToBytes.length;
    }

    @Override // javax.crypto.KeyAgreementSpi
    protected SecretKey engineGenerateSecret(String str) throws NoSuchAlgorithmException {
        if (this.kdf == null) {
            return new SecretKeySpec(bigIntToBytes(this.result), str);
        }
        if (!algorithms.containsKey(str)) {
            throw new NoSuchAlgorithmException("unknown algorithm encountered: " + str);
        }
        int iIntValue = ((Integer) algorithms.get(str)).intValue();
        DHKDFParameters dHKDFParameters = new DHKDFParameters(new DERObjectIdentifier(str), iIntValue, bigIntToBytes(this.result));
        int i = iIntValue / 8;
        byte[] bArr = new byte[i];
        this.kdf.init(dHKDFParameters);
        this.kdf.generateBytes(bArr, 0, i);
        return new SecretKeySpec(bArr, str);
    }

    @Override // javax.crypto.KeyAgreementSpi
    protected byte[] engineGenerateSecret() throws IllegalStateException {
        return bigIntToBytes(this.result);
    }

    @Override // javax.crypto.KeyAgreementSpi
    protected void engineInit(Key key, SecureRandom secureRandom) throws InvalidKeyException {
        if (!(key instanceof ECPrivateKey)) {
            throw new InvalidKeyException("ECKeyAgreement requires ECPrivateKey");
        }
        ECPrivateKeyParameters eCPrivateKeyParameters = (ECPrivateKeyParameters) ECUtil.generatePrivateKeyParameter((PrivateKey) key);
        this.privKey = eCPrivateKeyParameters;
        this.agreement.init(eCPrivateKeyParameters);
    }

    @Override // javax.crypto.KeyAgreementSpi
    protected void engineInit(Key key, AlgorithmParameterSpec algorithmParameterSpec, SecureRandom secureRandom) throws InvalidKeyException, InvalidAlgorithmParameterException {
        if (!(key instanceof ECPrivateKey)) {
            throw new InvalidKeyException("ECKeyAgreement requires ECPrivateKey for initialisation");
        }
        ECPrivateKeyParameters eCPrivateKeyParameters = (ECPrivateKeyParameters) ECUtil.generatePrivateKeyParameter((PrivateKey) key);
        this.privKey = eCPrivateKeyParameters;
        this.agreement.init(eCPrivateKeyParameters);
    }
}
