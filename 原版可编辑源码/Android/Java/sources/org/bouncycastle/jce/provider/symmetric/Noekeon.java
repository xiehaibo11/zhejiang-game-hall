package org.bouncycastle.jce.provider.symmetric;

import java.security.AlgorithmParameters;
import java.security.InvalidAlgorithmParameterException;
import java.security.SecureRandom;
import java.security.spec.AlgorithmParameterSpec;
import javax.crypto.spec.IvParameterSpec;
import org.bouncycastle.crypto.CipherKeyGenerator;
import org.bouncycastle.crypto.engines.NoekeonEngine;
import org.bouncycastle.jce.provider.JCEBlockCipher;
import org.bouncycastle.jce.provider.JCEKeyGenerator;
import org.bouncycastle.jce.provider.JDKAlgorithmParameterGenerator;
import org.bouncycastle.jce.provider.JDKAlgorithmParameters;

public final class Noekeon {

    public static class AlgParamGen extends JDKAlgorithmParameterGenerator {
        @Override
        protected AlgorithmParameters engineGenerateParameters() {
            byte[] bArr = new byte[16];
            if (this.random == null) {
                this.random = new SecureRandom();
            }
            this.random.nextBytes(bArr);
            try {
                AlgorithmParameters algorithmParameters = AlgorithmParameters.getInstance("Noekeon", "BC");
                algorithmParameters.init(new IvParameterSpec(bArr));
                return algorithmParameters;
            } catch (Exception e) {
                throw new RuntimeException(e.getMessage());
            }
        }

        @Override
        protected void engineInit(AlgorithmParameterSpec algorithmParameterSpec, SecureRandom secureRandom) throws InvalidAlgorithmParameterException {
            throw new InvalidAlgorithmParameterException("No supported AlgorithmParameterSpec for AES parameter generation.");
        }
    }

    public static class AlgParams extends JDKAlgorithmParameters.IVAlgorithmParameters {
        @Override
        protected String engineToString() {
            return "Noekeon IV";
        }
    }

    public static class ECB extends JCEBlockCipher {
        public ECB() {
            super(new NoekeonEngine());
        }
    }

    public static class KeyGen extends JCEKeyGenerator {
        public KeyGen() {
            super("Noekeon", 128, new CipherKeyGenerator());
        }
    }

    private Noekeon() {
    }
}
