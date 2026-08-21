package org.bouncycastle.crypto.encodings;

import kotlin.UByte;
import kotlin.jvm.internal.ByteCompanionObject;
import org.bouncycastle.crypto.AsymmetricBlockCipher;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.InvalidCipherTextException;
import org.bouncycastle.crypto.params.ParametersWithRandom;
import org.bouncycastle.crypto.params.RSAKeyParameters;

public class ISO9796d1Encoding implements AsymmetricBlockCipher {
    private int bitSize;
    private AsymmetricBlockCipher engine;
    private boolean forEncryption;
    private int padBits = 0;
    private static byte[] shadows = {14, 3, 5, 8, 9, 4, 2, 15, 0, 13, 11, 6, 7, 10, 12, 1};
    private static byte[] inverse = {8, 15, 6, 1, 5, 2, 11, 12, 3, 4, 13, 10, 14, 9, 0, 7};

    public ISO9796d1Encoding(AsymmetricBlockCipher asymmetricBlockCipher) {
        this.engine = asymmetricBlockCipher;
    }

    private byte[] decodeBlock(byte[] bArr, int i, int i2) throws InvalidCipherTextException {
        byte[] bArrProcessBlock = this.engine.processBlock(bArr, i, i2);
        int i3 = (this.bitSize + 13) / 16;
        if ((bArrProcessBlock[bArrProcessBlock.length - 1] & 15) != 6) {
            throw new InvalidCipherTextException("invalid forcing byte in block");
        }
        bArrProcessBlock[bArrProcessBlock.length - 1] = (byte) (((bArrProcessBlock[bArrProcessBlock.length - 1] & UByte.MAX_VALUE) >>> 4) | (inverse[(bArrProcessBlock[bArrProcessBlock.length - 2] & UByte.MAX_VALUE) >> 4] << 4));
        byte[] bArr2 = shadows;
        bArrProcessBlock[0] = (byte) (bArr2[bArrProcessBlock[1] & 15] | (bArr2[(bArrProcessBlock[1] & UByte.MAX_VALUE) >>> 4] << 4));
        int i4 = 0;
        boolean z = false;
        int i5 = 1;
        for (int length = bArrProcessBlock.length - 1; length >= bArrProcessBlock.length - (i3 * 2); length -= 2) {
            byte[] bArr3 = shadows;
            int i6 = bArr3[bArrProcessBlock[length] & 15] | (bArr3[(bArrProcessBlock[length] & UByte.MAX_VALUE) >>> 4] << 4);
            int i7 = length - 1;
            if (((bArrProcessBlock[i7] ^ i6) & 255) != 0) {
                if (z) {
                    throw new InvalidCipherTextException("invalid tsums in block");
                }
                i5 = (bArrProcessBlock[i7] ^ i6) & 255;
                i4 = i7;
                z = true;
            }
        }
        bArrProcessBlock[i4] = 0;
        int length2 = (bArrProcessBlock.length - i4) / 2;
        byte[] bArr4 = new byte[length2];
        for (int i8 = 0; i8 < length2; i8++) {
            bArr4[i8] = bArrProcessBlock[(i8 * 2) + i4 + 1];
        }
        this.padBits = i5 - 1;
        return bArr4;
    }

    private byte[] encodeBlock(byte[] bArr, int i, int i2) throws InvalidCipherTextException {
        int i3 = this.bitSize;
        int i4 = (i3 + 7) / 8;
        byte[] bArr2 = new byte[i4];
        int i5 = 1;
        int i6 = this.padBits + 1;
        int i7 = (i3 + 13) / 16;
        int i8 = 0;
        while (i8 < i7) {
            if (i8 > i7 - i2) {
                int i9 = i7 - i8;
                System.arraycopy(bArr, (i + i2) - i9, bArr2, i4 - i7, i9);
            } else {
                System.arraycopy(bArr, i, bArr2, i4 - (i8 + i2), i2);
            }
            i8 += i2;
        }
        for (int i10 = i4 - (i7 * 2); i10 != i4; i10 += 2) {
            byte b = bArr2[(i4 - i7) + (i10 / 2)];
            byte[] bArr3 = shadows;
            bArr2[i10] = (byte) (bArr3[b & 15] | (bArr3[(b & UByte.MAX_VALUE) >>> 4] << 4));
            bArr2[i10 + 1] = b;
        }
        int i11 = i4 - (i2 * 2);
        bArr2[i11] = (byte) (bArr2[i11] ^ i6);
        int i12 = i4 - 1;
        bArr2[i12] = (byte) ((bArr2[i12] << 4) | 6);
        int i13 = 8 - ((this.bitSize - 1) % 8);
        if (i13 != 8) {
            bArr2[0] = (byte) (bArr2[0] & (255 >>> i13));
            bArr2[0] = (byte) ((128 >>> i13) | bArr2[0]);
            i5 = 0;
        } else {
            bArr2[0] = 0;
            bArr2[1] = (byte) (bArr2[1] | ByteCompanionObject.MIN_VALUE);
        }
        return this.engine.processBlock(bArr2, i5, i4 - i5);
    }

    @Override
    public int getInputBlockSize() {
        int inputBlockSize = this.engine.getInputBlockSize();
        return this.forEncryption ? (inputBlockSize + 1) / 2 : inputBlockSize;
    }

    @Override
    public int getOutputBlockSize() {
        int outputBlockSize = this.engine.getOutputBlockSize();
        return this.forEncryption ? outputBlockSize : (outputBlockSize + 1) / 2;
    }

    public int getPadBits() {
        return this.padBits;
    }

    public AsymmetricBlockCipher getUnderlyingCipher() {
        return this.engine;
    }

    @Override
    public void init(boolean z, CipherParameters cipherParameters) {
        RSAKeyParameters rSAKeyParameters = cipherParameters instanceof ParametersWithRandom ? (RSAKeyParameters) ((ParametersWithRandom) cipherParameters).getParameters() : (RSAKeyParameters) cipherParameters;
        this.engine.init(z, cipherParameters);
        this.bitSize = rSAKeyParameters.getModulus().bitLength();
        this.forEncryption = z;
    }

    @Override
    public byte[] processBlock(byte[] bArr, int i, int i2) throws InvalidCipherTextException {
        return this.forEncryption ? encodeBlock(bArr, i, i2) : decodeBlock(bArr, i, i2);
    }

    public void setPadBits(int i) {
        if (i > 7) {
            throw new IllegalArgumentException("padBits > 7");
        }
        this.padBits = i;
    }
}
