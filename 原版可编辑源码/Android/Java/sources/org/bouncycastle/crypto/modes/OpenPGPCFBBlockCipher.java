package org.bouncycastle.crypto.modes;

import org.bouncycastle.crypto.BlockCipher;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.DataLengthException;

public class OpenPGPCFBBlockCipher implements BlockCipher {
    private byte[] FR;
    private byte[] FRE;
    private byte[] IV;
    private int blockSize;
    private BlockCipher cipher;
    private int count;
    private boolean forEncryption;
    private byte[] tmp;

    public OpenPGPCFBBlockCipher(BlockCipher blockCipher) {
        this.cipher = blockCipher;
        int blockSize = blockCipher.getBlockSize();
        this.blockSize = blockSize;
        this.IV = new byte[blockSize];
        this.FR = new byte[blockSize];
        this.FRE = new byte[blockSize];
        this.tmp = new byte[blockSize];
    }

    private int decryptBlock(byte[] bArr, int i, byte[] bArr2, int i2) throws IllegalStateException, DataLengthException {
        int i3;
        int i4;
        int i5;
        int i6;
        int i7 = this.blockSize;
        if (i + i7 > bArr.length) {
            throw new DataLengthException("input buffer too short");
        }
        if (i2 + i7 > bArr2.length) {
            throw new DataLengthException("output buffer too short");
        }
        int i8 = this.count;
        int i9 = 2;
        int i10 = 0;
        if (i8 > i7) {
            System.arraycopy(bArr, i, this.tmp, 0, i7);
            bArr2[i2] = encryptByte(this.tmp[0], this.blockSize - 2);
            bArr2[i2 + 1] = encryptByte(this.tmp[1], this.blockSize - 1);
            System.arraycopy(this.tmp, 0, this.FR, this.blockSize - 2, 2);
            this.cipher.processBlock(this.FR, 0, this.FRE, 0);
            int i11 = 2;
            while (true) {
                i6 = this.blockSize;
                if (i11 >= i6) {
                    break;
                }
                bArr2[i2 + i11] = encryptByte(this.tmp[i11], i11 - 2);
                i11++;
            }
            System.arraycopy(this.tmp, 2, this.FR, 0, i6 - 2);
        } else {
            if (i8 == 0) {
                this.cipher.processBlock(this.FR, 0, this.FRE, 0);
                while (true) {
                    i5 = this.blockSize;
                    if (i10 >= i5) {
                        break;
                    }
                    int i12 = i + i10;
                    this.FR[i10] = bArr[i12];
                    bArr2[i10] = encryptByte(bArr[i12], i10);
                    i10++;
                }
                i4 = this.count + i5;
            } else if (i8 == i7) {
                System.arraycopy(bArr, i, this.tmp, 0, i7);
                this.cipher.processBlock(this.FR, 0, this.FRE, 0);
                bArr2[i2] = encryptByte(this.tmp[0], 0);
                bArr2[i2 + 1] = encryptByte(this.tmp[1], 1);
                byte[] bArr3 = this.FR;
                System.arraycopy(bArr3, 2, bArr3, 0, this.blockSize - 2);
                byte[] bArr4 = this.FR;
                int i13 = this.blockSize;
                byte[] bArr5 = this.tmp;
                bArr4[i13 - 2] = bArr5[0];
                bArr4[i13 - 1] = bArr5[1];
                this.cipher.processBlock(bArr4, 0, this.FRE, 0);
                while (true) {
                    i3 = this.blockSize;
                    if (i9 >= i3) {
                        break;
                    }
                    int i14 = i9 - 2;
                    int i15 = i + i9;
                    this.FR[i14] = bArr[i15];
                    bArr2[i2 + i9] = encryptByte(bArr[i15], i14);
                    i9++;
                }
                i4 = this.count + i3;
            }
            this.count = i4;
        }
        return this.blockSize;
    }

    private int encryptBlock(byte[] bArr, int i, byte[] bArr2, int i2) throws IllegalStateException, DataLengthException {
        int i3;
        int i4;
        int i5;
        int i6 = this.blockSize;
        if (i + i6 > bArr.length) {
            throw new DataLengthException("input buffer too short");
        }
        if (i2 + i6 > bArr2.length) {
            throw new DataLengthException("output buffer too short");
        }
        int i7 = this.count;
        if (i7 > i6) {
            byte[] bArr3 = this.FR;
            int i8 = i6 - 2;
            byte bEncryptByte = encryptByte(bArr[i], i6 - 2);
            bArr2[i2] = bEncryptByte;
            bArr3[i8] = bEncryptByte;
            byte[] bArr4 = this.FR;
            int i9 = this.blockSize;
            int i10 = i9 - 1;
            byte bEncryptByte2 = encryptByte(bArr[i + 1], i9 - 1);
            bArr2[i2 + 1] = bEncryptByte2;
            bArr4[i10] = bEncryptByte2;
            this.cipher.processBlock(this.FR, 0, this.FRE, 0);
            int i11 = 2;
            while (true) {
                i5 = this.blockSize;
                if (i11 >= i5) {
                    break;
                }
                bArr2[i2 + i11] = encryptByte(bArr[i + i11], i11 - 2);
                i11++;
            }
            System.arraycopy(bArr2, i2 + 2, this.FR, 0, i5 - 2);
        } else {
            if (i7 == 0) {
                this.cipher.processBlock(this.FR, 0, this.FRE, 0);
                int i12 = 0;
                while (true) {
                    i4 = this.blockSize;
                    if (i12 >= i4) {
                        break;
                    }
                    bArr2[i2 + i12] = encryptByte(bArr[i + i12], i12);
                    i12++;
                }
                System.arraycopy(bArr2, i2, this.FR, 0, i4);
            } else if (i7 == i6) {
                this.cipher.processBlock(this.FR, 0, this.FRE, 0);
                bArr2[i2] = encryptByte(bArr[i], 0);
                bArr2[i2 + 1] = encryptByte(bArr[i + 1], 1);
                byte[] bArr5 = this.FR;
                System.arraycopy(bArr5, 2, bArr5, 0, this.blockSize - 2);
                System.arraycopy(bArr2, i2, this.FR, this.blockSize - 2, 2);
                this.cipher.processBlock(this.FR, 0, this.FRE, 0);
                int i13 = 2;
                while (true) {
                    i3 = this.blockSize;
                    if (i13 >= i3) {
                        break;
                    }
                    bArr2[i2 + i13] = encryptByte(bArr[i + i13], i13 - 2);
                    i13++;
                }
                System.arraycopy(bArr2, i2 + 2, this.FR, 0, i3 - 2);
            }
            this.count += this.blockSize;
        }
        return this.blockSize;
    }

    private byte encryptByte(byte b, int i) {
        return (byte) (b ^ this.FRE[i]);
    }

    @Override
    public String getAlgorithmName() {
        return this.cipher.getAlgorithmName() + "/OpenPGPCFB";
    }

    @Override
    public int getBlockSize() {
        return this.cipher.getBlockSize();
    }

    public BlockCipher getUnderlyingCipher() {
        return this.cipher;
    }

    @Override
    public void init(boolean z, CipherParameters cipherParameters) throws IllegalArgumentException {
        this.forEncryption = z;
        reset();
        this.cipher.init(true, cipherParameters);
    }

    @Override
    public int processBlock(byte[] bArr, int i, byte[] bArr2, int i2) throws IllegalStateException, DataLengthException {
        return this.forEncryption ? encryptBlock(bArr, i, bArr2, i2) : decryptBlock(bArr, i, bArr2, i2);
    }

    @Override
    public void reset() {
        this.count = 0;
        byte[] bArr = this.IV;
        byte[] bArr2 = this.FR;
        System.arraycopy(bArr, 0, bArr2, 0, bArr2.length);
        this.cipher.reset();
    }
}
