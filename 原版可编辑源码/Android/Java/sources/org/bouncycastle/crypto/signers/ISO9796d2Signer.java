package org.bouncycastle.crypto.signers;

import kotlin.UByte;
import org.bouncycastle.crypto.AsymmetricBlockCipher;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.CryptoException;
import org.bouncycastle.crypto.Digest;
import org.bouncycastle.crypto.SignerWithRecovery;
import org.bouncycastle.crypto.digests.RIPEMD128Digest;
import org.bouncycastle.crypto.digests.RIPEMD160Digest;
import org.bouncycastle.crypto.digests.SHA1Digest;
import org.bouncycastle.crypto.params.RSAKeyParameters;

public class ISO9796d2Signer implements SignerWithRecovery {
    public static final int TRAILER_IMPLICIT = 188;
    public static final int TRAILER_RIPEMD128 = 13004;
    public static final int TRAILER_RIPEMD160 = 12748;
    public static final int TRAILER_SHA1 = 13260;
    private byte[] block;
    private AsymmetricBlockCipher cipher;
    private Digest digest;
    private boolean fullMessage;
    private int keyBits;
    private byte[] mBuf;
    private int messageLength;
    private byte[] recoveredMessage;
    private int trailer;

    public ISO9796d2Signer(AsymmetricBlockCipher asymmetricBlockCipher, Digest digest) {
        this(asymmetricBlockCipher, digest, false);
    }

    public ISO9796d2Signer(AsymmetricBlockCipher asymmetricBlockCipher, Digest digest, boolean z) {
        int i;
        this.cipher = asymmetricBlockCipher;
        this.digest = digest;
        if (z) {
            i = 188;
        } else if (digest instanceof SHA1Digest) {
            i = 13260;
        } else if (digest instanceof RIPEMD160Digest) {
            i = 12748;
        } else {
            if (!(digest instanceof RIPEMD128Digest)) {
                throw new IllegalArgumentException("no valid trailer for digest");
            }
            i = 13004;
        }
        this.trailer = i;
    }

    private void clearBlock(byte[] bArr) {
        for (int i = 0; i != bArr.length; i++) {
            bArr[i] = 0;
        }
    }

    private boolean isSameAs(byte[] bArr, byte[] bArr2) {
        int i = this.messageLength;
        byte[] bArr3 = this.mBuf;
        if (i > bArr3.length) {
            if (bArr3.length > bArr2.length) {
                return false;
            }
            for (int i2 = 0; i2 != this.mBuf.length; i2++) {
                if (bArr[i2] != bArr2[i2]) {
                    return false;
                }
            }
            return true;
        }
        if (i != bArr2.length) {
            return false;
        }
        for (int i3 = 0; i3 != bArr2.length; i3++) {
            if (bArr[i3] != bArr2[i3]) {
                return false;
            }
        }
        return true;
    }

    @Override
    public byte[] generateSignature() throws CryptoException {
        int i;
        int length;
        byte b;
        int i2;
        int digestSize = this.digest.getDigestSize();
        if (this.trailer == 188) {
            byte[] bArr = this.block;
            length = (bArr.length - digestSize) - 1;
            this.digest.doFinal(bArr, length);
            this.block[r1.length - 1] = PSSSigner.TRAILER_IMPLICIT;
            i = 8;
        } else {
            i = 16;
            byte[] bArr2 = this.block;
            int length2 = (bArr2.length - digestSize) - 2;
            this.digest.doFinal(bArr2, length2);
            byte[] bArr3 = this.block;
            int length3 = bArr3.length - 2;
            int i3 = this.trailer;
            bArr3[length3] = (byte) (i3 >>> 8);
            bArr3[bArr3.length - 1] = (byte) i3;
            length = length2;
        }
        int i4 = this.messageLength;
        int i5 = ((((digestSize + i4) * 8) + i) + 4) - this.keyBits;
        if (i5 > 0) {
            int i6 = i4 - ((i5 + 7) / 8);
            b = 96;
            i2 = length - i6;
            System.arraycopy(this.mBuf, 0, this.block, i2, i6);
        } else {
            b = 64;
            i2 = length - i4;
            System.arraycopy(this.mBuf, 0, this.block, i2, i4);
        }
        int i7 = i2 - 1;
        if (i7 > 0) {
            for (int i8 = i7; i8 != 0; i8--) {
                this.block[i8] = -69;
            }
            byte[] bArr4 = this.block;
            bArr4[i7] = (byte) (bArr4[i7] ^ 1);
            bArr4[0] = 11;
            bArr4[0] = (byte) (b | bArr4[0]);
        } else {
            byte[] bArr5 = this.block;
            bArr5[0] = 10;
            bArr5[0] = (byte) (b | bArr5[0]);
        }
        AsymmetricBlockCipher asymmetricBlockCipher = this.cipher;
        byte[] bArr6 = this.block;
        byte[] bArrProcessBlock = asymmetricBlockCipher.processBlock(bArr6, 0, bArr6.length);
        clearBlock(this.mBuf);
        clearBlock(this.block);
        return bArrProcessBlock;
    }

    @Override
    public byte[] getRecoveredMessage() {
        return this.recoveredMessage;
    }

    @Override
    public boolean hasFullMessage() {
        return this.fullMessage;
    }

    @Override
    public void init(boolean z, CipherParameters cipherParameters) {
        RSAKeyParameters rSAKeyParameters = (RSAKeyParameters) cipherParameters;
        this.cipher.init(z, rSAKeyParameters);
        int iBitLength = rSAKeyParameters.getModulus().bitLength();
        this.keyBits = iBitLength;
        byte[] bArr = new byte[(iBitLength + 7) / 8];
        this.block = bArr;
        int i = this.trailer;
        int length = bArr.length;
        if (i == 188) {
            this.mBuf = new byte[(length - this.digest.getDigestSize()) - 2];
        } else {
            this.mBuf = new byte[(length - this.digest.getDigestSize()) - 3];
        }
        reset();
    }

    @Override
    public void reset() {
        this.digest.reset();
        this.messageLength = 0;
        clearBlock(this.mBuf);
        byte[] bArr = this.recoveredMessage;
        if (bArr != null) {
            clearBlock(bArr);
        }
        this.recoveredMessage = null;
        this.fullMessage = false;
    }

    @Override
    public void update(byte b) {
        this.digest.update(b);
        int i = this.messageLength;
        byte[] bArr = this.mBuf;
        if (i < bArr.length) {
            bArr[i] = b;
        }
        this.messageLength++;
    }

    @Override
    public void update(byte[] bArr, int i, int i2) {
        this.digest.update(bArr, i, i2);
        if (this.messageLength < this.mBuf.length) {
            for (int i3 = 0; i3 < i2; i3++) {
                int i4 = this.messageLength;
                int i5 = i3 + i4;
                byte[] bArr2 = this.mBuf;
                if (i5 >= bArr2.length) {
                    break;
                }
                bArr2[i4 + i3] = bArr[i + i3];
            }
        }
        this.messageLength += i2;
    }

    @Override
    public boolean verifySignature(byte[] bArr) {
        try {
            byte[] bArrProcessBlock = this.cipher.processBlock(bArr, 0, bArr.length);
            if (((bArrProcessBlock[0] & 192) ^ 64) == 0 && ((bArrProcessBlock[bArrProcessBlock.length - 1] & 15) ^ 12) == 0) {
                int i = 2;
                if (((bArrProcessBlock[bArrProcessBlock.length - 1] & UByte.MAX_VALUE) ^ 188) == 0) {
                    i = 1;
                } else {
                    int i2 = ((bArrProcessBlock[bArrProcessBlock.length - 2] & UByte.MAX_VALUE) << 8) | (bArrProcessBlock[bArrProcessBlock.length - 1] & UByte.MAX_VALUE);
                    if (i2 != 12748) {
                        if (i2 != 13004) {
                            if (i2 != 13260) {
                                throw new IllegalArgumentException("unrecognised hash in signature");
                            }
                            if (!(this.digest instanceof SHA1Digest)) {
                                throw new IllegalStateException("signer should be initialised with SHA1");
                            }
                        } else if (!(this.digest instanceof RIPEMD128Digest)) {
                            throw new IllegalStateException("signer should be initialised with RIPEMD128");
                        }
                    } else if (!(this.digest instanceof RIPEMD160Digest)) {
                        throw new IllegalStateException("signer should be initialised with RIPEMD160");
                    }
                }
                int i3 = 0;
                while (i3 != bArrProcessBlock.length && ((bArrProcessBlock[i3] & 15) ^ 10) != 0) {
                    i3++;
                }
                int i4 = i3 + 1;
                int digestSize = this.digest.getDigestSize();
                byte[] bArr2 = new byte[digestSize];
                int length = (bArrProcessBlock.length - i) - digestSize;
                int i5 = length - i4;
                if (i5 <= 0) {
                    clearBlock(this.mBuf);
                } else {
                    if ((bArrProcessBlock[0] & 32) != 0) {
                        this.fullMessage = false;
                        this.digest.doFinal(bArr2, 0);
                        for (int i6 = 0; i6 != digestSize; i6++) {
                            int i7 = length + i6;
                            bArrProcessBlock[i7] = (byte) (bArrProcessBlock[i7] ^ bArr2[i6]);
                            if (bArrProcessBlock[i7] != 0) {
                                clearBlock(this.mBuf);
                                break;
                            }
                        }
                        byte[] bArr3 = new byte[i5];
                        this.recoveredMessage = bArr3;
                        System.arraycopy(bArrProcessBlock, i4, bArr3, 0, bArr3.length);
                        if (this.messageLength != 0) {
                        }
                        clearBlock(this.mBuf);
                        clearBlock(bArrProcessBlock);
                        return true;
                    }
                    this.fullMessage = true;
                    this.digest.reset();
                    this.digest.update(bArrProcessBlock, i4, i5);
                    this.digest.doFinal(bArr2, 0);
                    for (int i8 = 0; i8 != digestSize; i8++) {
                        int i9 = length + i8;
                        bArrProcessBlock[i9] = (byte) (bArrProcessBlock[i9] ^ bArr2[i8]);
                        if (bArrProcessBlock[i9] != 0) {
                            clearBlock(this.mBuf);
                            break;
                        }
                    }
                    byte[] bArr4 = new byte[i5];
                    this.recoveredMessage = bArr4;
                    System.arraycopy(bArrProcessBlock, i4, bArr4, 0, bArr4.length);
                    if (this.messageLength != 0 || isSameAs(this.mBuf, this.recoveredMessage)) {
                        clearBlock(this.mBuf);
                        clearBlock(bArrProcessBlock);
                        return true;
                    }
                    clearBlock(this.mBuf);
                }
            } else {
                clearBlock(this.mBuf);
            }
            clearBlock(bArrProcessBlock);
            return false;
        } catch (Exception unused) {
            return false;
        }
    }
}
