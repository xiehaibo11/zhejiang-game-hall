package org.bouncycastle.crypto.signers;

import java.security.SecureRandom;
import org.bouncycastle.crypto.AsymmetricBlockCipher;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.CryptoException;
import org.bouncycastle.crypto.DataLengthException;
import org.bouncycastle.crypto.Digest;
import org.bouncycastle.crypto.Signer;
import org.bouncycastle.crypto.params.ParametersWithRandom;
import org.bouncycastle.crypto.params.RSABlindingParameters;
import org.bouncycastle.crypto.params.RSAKeyParameters;

public class PSSSigner implements Signer {
    public static final byte TRAILER_IMPLICIT = -68;
    private byte[] block;
    private AsymmetricBlockCipher cipher;
    private Digest digest;
    private int emBits;
    private int hLen;
    private byte[] mDash;
    private SecureRandom random;
    private int sLen;
    private byte[] salt;
    private byte trailer;

    public PSSSigner(AsymmetricBlockCipher asymmetricBlockCipher, Digest digest, int i) {
        this(asymmetricBlockCipher, digest, i, TRAILER_IMPLICIT);
    }

    public PSSSigner(AsymmetricBlockCipher asymmetricBlockCipher, Digest digest, int i, byte b) {
        this.cipher = asymmetricBlockCipher;
        this.digest = digest;
        int digestSize = digest.getDigestSize();
        this.hLen = digestSize;
        this.sLen = i;
        this.salt = new byte[i];
        this.mDash = new byte[i + 8 + digestSize];
        this.trailer = b;
    }

    private void ItoOSP(int i, byte[] bArr) {
        bArr[0] = (byte) (i >>> 24);
        bArr[1] = (byte) (i >>> 16);
        bArr[2] = (byte) (i >>> 8);
        bArr[3] = (byte) (i >>> 0);
    }

    private void clearBlock(byte[] bArr) {
        for (int i = 0; i != bArr.length; i++) {
            bArr[i] = 0;
        }
    }

    private byte[] maskGeneratorFunction1(byte[] bArr, int i, int i2, int i3) {
        int i4;
        byte[] bArr2 = new byte[i3];
        byte[] bArr3 = new byte[this.hLen];
        byte[] bArr4 = new byte[4];
        this.digest.reset();
        int i5 = 0;
        while (true) {
            i4 = this.hLen;
            if (i5 >= i3 / i4) {
                break;
            }
            ItoOSP(i5, bArr4);
            this.digest.update(bArr, i, i2);
            this.digest.update(bArr4, 0, 4);
            this.digest.doFinal(bArr3, 0);
            int i6 = this.hLen;
            System.arraycopy(bArr3, 0, bArr2, i5 * i6, i6);
            i5++;
        }
        if (i4 * i5 < i3) {
            ItoOSP(i5, bArr4);
            this.digest.update(bArr, i, i2);
            this.digest.update(bArr4, 0, 4);
            this.digest.doFinal(bArr3, 0);
            int i7 = this.hLen;
            System.arraycopy(bArr3, 0, bArr2, i5 * i7, i3 - (i5 * i7));
        }
        return bArr2;
    }

    @Override
    public byte[] generateSignature() throws DataLengthException, CryptoException {
        int i = this.emBits;
        int i2 = this.hLen;
        int i3 = this.sLen;
        if (i < (i2 * 8) + (i3 * 8) + 9) {
            throw new DataLengthException("encoding error");
        }
        Digest digest = this.digest;
        byte[] bArr = this.mDash;
        digest.doFinal(bArr, (bArr.length - i2) - i3);
        if (this.sLen != 0) {
            this.random.nextBytes(this.salt);
            byte[] bArr2 = this.salt;
            byte[] bArr3 = this.mDash;
            int length = bArr3.length;
            int i4 = this.sLen;
            System.arraycopy(bArr2, 0, bArr3, length - i4, i4);
        }
        int i5 = this.hLen;
        byte[] bArr4 = new byte[i5];
        Digest digest2 = this.digest;
        byte[] bArr5 = this.mDash;
        digest2.update(bArr5, 0, bArr5.length);
        this.digest.doFinal(bArr4, 0);
        byte[] bArr6 = this.block;
        int length2 = bArr6.length;
        int i6 = this.sLen;
        int i7 = this.hLen;
        bArr6[(((length2 - i6) - 1) - i7) - 1] = 1;
        System.arraycopy(this.salt, 0, bArr6, ((bArr6.length - i6) - i7) - 1, i6);
        byte[] bArrMaskGeneratorFunction1 = maskGeneratorFunction1(bArr4, 0, i5, (this.block.length - this.hLen) - 1);
        for (int i8 = 0; i8 != bArrMaskGeneratorFunction1.length; i8++) {
            byte[] bArr7 = this.block;
            bArr7[i8] = (byte) (bArr7[i8] ^ bArrMaskGeneratorFunction1[i8]);
        }
        byte[] bArr8 = this.block;
        bArr8[0] = (byte) (bArr8[0] & (255 >> ((bArr8.length * 8) - this.emBits)));
        int length3 = bArr8.length;
        int i9 = this.hLen;
        System.arraycopy(bArr4, 0, bArr8, (length3 - i9) - 1, i9);
        byte[] bArr9 = this.block;
        bArr9[bArr9.length - 1] = this.trailer;
        byte[] bArrProcessBlock = this.cipher.processBlock(bArr9, 0, bArr9.length);
        clearBlock(this.block);
        return bArrProcessBlock;
    }

    @Override
    public void init(boolean z, CipherParameters cipherParameters) {
        if (cipherParameters instanceof ParametersWithRandom) {
            ParametersWithRandom parametersWithRandom = (ParametersWithRandom) cipherParameters;
            CipherParameters parameters = parametersWithRandom.getParameters();
            this.random = parametersWithRandom.getRandom();
            cipherParameters = parameters;
        } else if (z) {
            this.random = new SecureRandom();
        }
        this.cipher.init(z, cipherParameters);
        int iBitLength = (cipherParameters instanceof RSABlindingParameters ? ((RSABlindingParameters) cipherParameters).getPublicKey() : (RSAKeyParameters) cipherParameters).getModulus().bitLength() - 1;
        this.emBits = iBitLength;
        this.block = new byte[(iBitLength + 7) / 8];
        reset();
    }

    @Override
    public void reset() {
        this.digest.reset();
    }

    @Override
    public void update(byte b) {
        this.digest.update(b);
    }

    @Override
    public void update(byte[] bArr, int i, int i2) {
        this.digest.update(bArr, i, i2);
    }

    @Override
    public boolean verifySignature(byte[] bArr) {
        int i = this.emBits;
        int i2 = this.hLen;
        int i3 = this.sLen;
        if (i < (i2 * 8) + (i3 * 8) + 9) {
            return false;
        }
        Digest digest = this.digest;
        byte[] bArr2 = this.mDash;
        digest.doFinal(bArr2, (bArr2.length - i2) - i3);
        try {
            byte[] bArrProcessBlock = this.cipher.processBlock(bArr, 0, bArr.length);
            System.arraycopy(bArrProcessBlock, 0, this.block, this.block.length - bArrProcessBlock.length, bArrProcessBlock.length);
            byte[] bArr3 = this.block;
            if (bArr3[bArr3.length - 1] != this.trailer) {
                clearBlock(bArr3);
                return false;
            }
            int length = bArr3.length;
            int i4 = this.hLen;
            byte[] bArrMaskGeneratorFunction1 = maskGeneratorFunction1(bArr3, (length - i4) - 1, i4, (bArr3.length - i4) - 1);
            for (int i5 = 0; i5 != bArrMaskGeneratorFunction1.length; i5++) {
                byte[] bArr4 = this.block;
                bArr4[i5] = (byte) (bArr4[i5] ^ bArrMaskGeneratorFunction1[i5]);
            }
            byte[] bArr5 = this.block;
            bArr5[0] = (byte) (bArr5[0] & (255 >> ((bArr5.length * 8) - this.emBits)));
            int i6 = 0;
            while (true) {
                byte[] bArr6 = this.block;
                int length2 = bArr6.length;
                int i7 = this.hLen;
                int i8 = this.sLen;
                if (i6 != ((length2 - i7) - i8) - 2) {
                    if (bArr6[i6] != 0) {
                        clearBlock(bArr6);
                        return false;
                    }
                    i6++;
                } else {
                    if (bArr6[((bArr6.length - i7) - i8) - 2] != 1) {
                        clearBlock(bArr6);
                        return false;
                    }
                    int length3 = ((bArr6.length - i8) - i7) - 1;
                    byte[] bArr7 = this.mDash;
                    System.arraycopy(bArr6, length3, bArr7, bArr7.length - i8, i8);
                    Digest digest2 = this.digest;
                    byte[] bArr8 = this.mDash;
                    digest2.update(bArr8, 0, bArr8.length);
                    Digest digest3 = this.digest;
                    byte[] bArr9 = this.mDash;
                    digest3.doFinal(bArr9, bArr9.length - this.hLen);
                    int length4 = this.block.length;
                    int i9 = this.hLen;
                    int i10 = (length4 - i9) - 1;
                    int length5 = this.mDash.length - i9;
                    while (true) {
                        byte[] bArr10 = this.mDash;
                        if (length5 == bArr10.length) {
                            clearBlock(bArr10);
                            clearBlock(this.block);
                            return true;
                        }
                        if ((this.block[i10] ^ bArr10[length5]) != 0) {
                            clearBlock(bArr10);
                            clearBlock(this.block);
                            return false;
                        }
                        i10++;
                        length5++;
                    }
                }
            }
        } catch (Exception unused) {
            return false;
        }
    }
}
