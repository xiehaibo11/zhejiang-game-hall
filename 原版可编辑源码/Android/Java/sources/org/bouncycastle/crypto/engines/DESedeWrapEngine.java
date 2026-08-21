package org.bouncycastle.crypto.engines;

import java.security.SecureRandom;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.Digest;
import org.bouncycastle.crypto.InvalidCipherTextException;
import org.bouncycastle.crypto.Wrapper;
import org.bouncycastle.crypto.digests.SHA1Digest;
import org.bouncycastle.crypto.modes.CBCBlockCipher;
import org.bouncycastle.crypto.params.KeyParameter;
import org.bouncycastle.crypto.params.ParametersWithIV;
import org.bouncycastle.crypto.params.ParametersWithRandom;

public class DESedeWrapEngine implements Wrapper {
    private static final byte[] IV2 = {74, -35, -94, 44, 121, -24, 33, 5};
    private CBCBlockCipher engine;
    private boolean forWrapping;
    private byte[] iv;
    private KeyParameter param;
    private ParametersWithIV paramPlusIV;
    Digest sha1 = new SHA1Digest();
    byte[] digest = new byte[20];

    private byte[] calculateCMSKeyChecksum(byte[] bArr) {
        byte[] bArr2 = new byte[8];
        this.sha1.update(bArr, 0, bArr.length);
        this.sha1.doFinal(this.digest, 0);
        System.arraycopy(this.digest, 0, bArr2, 0, 8);
        return bArr2;
    }

    private boolean checkCMSKeyChecksum(byte[] bArr, byte[] bArr2) {
        byte[] bArrCalculateCMSKeyChecksum = calculateCMSKeyChecksum(bArr);
        if (bArr2.length != bArrCalculateCMSKeyChecksum.length) {
            return false;
        }
        for (int i = 0; i != bArr2.length; i++) {
            if (bArr2[i] != bArrCalculateCMSKeyChecksum[i]) {
                return false;
            }
        }
        return true;
    }

    @Override
    public String getAlgorithmName() {
        return "DESede";
    }

    @Override
    public void init(boolean z, CipherParameters cipherParameters) {
        SecureRandom secureRandom;
        this.forWrapping = z;
        this.engine = new CBCBlockCipher(new DESedeEngine());
        if (cipherParameters instanceof ParametersWithRandom) {
            ParametersWithRandom parametersWithRandom = (ParametersWithRandom) cipherParameters;
            CipherParameters parameters = parametersWithRandom.getParameters();
            SecureRandom random = parametersWithRandom.getRandom();
            cipherParameters = parameters;
            secureRandom = random;
        } else {
            secureRandom = new SecureRandom();
        }
        if (cipherParameters instanceof KeyParameter) {
            this.param = (KeyParameter) cipherParameters;
            if (this.forWrapping) {
                byte[] bArr = new byte[8];
                this.iv = bArr;
                secureRandom.nextBytes(bArr);
                this.paramPlusIV = new ParametersWithIV(this.param, this.iv);
                return;
            }
            return;
        }
        if (cipherParameters instanceof ParametersWithIV) {
            ParametersWithIV parametersWithIV = (ParametersWithIV) cipherParameters;
            this.paramPlusIV = parametersWithIV;
            this.iv = parametersWithIV.getIV();
            this.param = (KeyParameter) this.paramPlusIV.getParameters();
            if (!this.forWrapping) {
                throw new IllegalArgumentException("You should not supply an IV for unwrapping");
            }
            byte[] bArr2 = this.iv;
            if (bArr2 == null || bArr2.length != 8) {
                throw new IllegalArgumentException("IV is not 8 octets");
            }
        }
    }

    @Override
    public byte[] unwrap(byte[] bArr, int i, int i2) throws InvalidCipherTextException {
        if (this.forWrapping) {
            throw new IllegalStateException("Not set for unwrapping");
        }
        if (bArr == null) {
            throw new InvalidCipherTextException("Null pointer as ciphertext");
        }
        if (i2 % this.engine.getBlockSize() != 0) {
            throw new InvalidCipherTextException("Ciphertext not multiple of " + this.engine.getBlockSize());
        }
        this.engine.init(false, new ParametersWithIV(this.param, IV2));
        byte[] bArr2 = new byte[i2];
        System.arraycopy(bArr, i, bArr2, 0, i2);
        for (int i3 = 0; i3 < i2 / this.engine.getBlockSize(); i3++) {
            int blockSize = this.engine.getBlockSize() * i3;
            this.engine.processBlock(bArr2, blockSize, bArr2, blockSize);
        }
        byte[] bArr3 = new byte[i2];
        int i4 = 0;
        while (i4 < i2) {
            int i5 = i4 + 1;
            bArr3[i4] = bArr2[i2 - i5];
            i4 = i5;
        }
        byte[] bArr4 = new byte[8];
        this.iv = bArr4;
        int i6 = i2 - 8;
        byte[] bArr5 = new byte[i6];
        System.arraycopy(bArr3, 0, bArr4, 0, 8);
        System.arraycopy(bArr3, 8, bArr5, 0, i6);
        ParametersWithIV parametersWithIV = new ParametersWithIV(this.param, this.iv);
        this.paramPlusIV = parametersWithIV;
        this.engine.init(false, parametersWithIV);
        byte[] bArr6 = new byte[i6];
        System.arraycopy(bArr5, 0, bArr6, 0, i6);
        for (int i7 = 0; i7 < i6 / this.engine.getBlockSize(); i7++) {
            int blockSize2 = this.engine.getBlockSize() * i7;
            this.engine.processBlock(bArr6, blockSize2, bArr6, blockSize2);
        }
        int i8 = i6 - 8;
        byte[] bArr7 = new byte[i8];
        byte[] bArr8 = new byte[8];
        System.arraycopy(bArr6, 0, bArr7, 0, i8);
        System.arraycopy(bArr6, i8, bArr8, 0, 8);
        if (checkCMSKeyChecksum(bArr7, bArr8)) {
            return bArr7;
        }
        throw new InvalidCipherTextException("Checksum inside ciphertext is corrupted");
    }

    @Override
    public byte[] wrap(byte[] bArr, int i, int i2) {
        if (!this.forWrapping) {
            throw new IllegalStateException("Not initialized for wrapping");
        }
        byte[] bArr2 = new byte[i2];
        System.arraycopy(bArr, i, bArr2, 0, i2);
        byte[] bArrCalculateCMSKeyChecksum = calculateCMSKeyChecksum(bArr2);
        int length = bArrCalculateCMSKeyChecksum.length + i2;
        byte[] bArr3 = new byte[length];
        System.arraycopy(bArr2, 0, bArr3, 0, i2);
        System.arraycopy(bArrCalculateCMSKeyChecksum, 0, bArr3, i2, bArrCalculateCMSKeyChecksum.length);
        byte[] bArr4 = new byte[length];
        System.arraycopy(bArr3, 0, bArr4, 0, length);
        int blockSize = length / this.engine.getBlockSize();
        if (length % this.engine.getBlockSize() != 0) {
            throw new IllegalStateException("Not multiple of block length");
        }
        this.engine.init(true, this.paramPlusIV);
        for (int i3 = 0; i3 < blockSize; i3++) {
            int blockSize2 = this.engine.getBlockSize() * i3;
            this.engine.processBlock(bArr4, blockSize2, bArr4, blockSize2);
        }
        byte[] bArr5 = this.iv;
        int length2 = bArr5.length + length;
        byte[] bArr6 = new byte[length2];
        System.arraycopy(bArr5, 0, bArr6, 0, bArr5.length);
        System.arraycopy(bArr4, 0, bArr6, this.iv.length, length);
        byte[] bArr7 = new byte[length2];
        int i4 = 0;
        while (i4 < length2) {
            int i5 = i4 + 1;
            bArr7[i4] = bArr6[length2 - i5];
            i4 = i5;
        }
        this.engine.init(true, new ParametersWithIV(this.param, IV2));
        for (int i6 = 0; i6 < blockSize + 1; i6++) {
            int blockSize3 = this.engine.getBlockSize() * i6;
            this.engine.processBlock(bArr7, blockSize3, bArr7, blockSize3);
        }
        return bArr7;
    }
}
