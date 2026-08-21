package org.bouncycastle.crypto.engines;

import kotlin.UByte;
import org.bouncycastle.crypto.BlockCipher;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.DataLengthException;
import org.bouncycastle.crypto.params.KeyParameter;

public class XTEAEngine implements BlockCipher {
    private static final int block_size = 8;
    private static final int d_sum = -957401312;
    private static final int delta = -1640531527;
    private static final int key_size = 16;
    private static final int rounds = 32;
    private boolean _forEncryption;
    private int[] _S = new int[4];
    private boolean _initialised = false;

    private int bytesToInt(byte[] bArr, int i) {
        int i2 = i + 1;
        int i3 = i2 + 1;
        int i4 = (bArr[i] << 24) | ((bArr[i2] & UByte.MAX_VALUE) << 16);
        int i5 = i3 + 1;
        return (bArr[i5] & UByte.MAX_VALUE) | i4 | ((bArr[i3] & UByte.MAX_VALUE) << 8);
    }

    private int decryptBlock(byte[] bArr, int i, byte[] bArr2, int i2) {
        int iBytesToInt = bytesToInt(bArr, i);
        int iBytesToInt2 = bytesToInt(bArr, i + 4);
        int i3 = d_sum;
        for (int i4 = 0; i4 != 32; i4++) {
            int[] iArr = this._S;
            iBytesToInt2 -= (((iBytesToInt << 4) ^ (iBytesToInt >>> 5)) + iBytesToInt) ^ (iArr[(i3 >>> 11) & 3] + i3);
            i3 += 1640531527;
            iBytesToInt -= (((iBytesToInt2 << 4) ^ (iBytesToInt2 >>> 5)) + iBytesToInt2) ^ (iArr[i3 & 3] + i3);
        }
        unpackInt(iBytesToInt, bArr2, i2);
        unpackInt(iBytesToInt2, bArr2, i2 + 4);
        return 8;
    }

    private int encryptBlock(byte[] bArr, int i, byte[] bArr2, int i2) {
        int iBytesToInt = bytesToInt(bArr, i);
        int iBytesToInt2 = bytesToInt(bArr, i + 4);
        int i3 = iBytesToInt;
        int i4 = 0;
        for (int i5 = 0; i5 != 32; i5++) {
            int[] iArr = this._S;
            i3 += (((iBytesToInt2 << 4) ^ (iBytesToInt2 >>> 5)) + iBytesToInt2) ^ (iArr[i4 & 3] + i4);
            i4 -= 1640531527;
            iBytesToInt2 += (((i3 << 4) ^ (i3 >>> 5)) + i3) ^ (iArr[(i4 >>> 11) & 3] + i4);
        }
        unpackInt(i3, bArr2, i2);
        unpackInt(iBytesToInt2, bArr2, i2 + 4);
        return 8;
    }

    private void setKey(byte[] bArr) {
        this._S[0] = bytesToInt(bArr, 0);
        this._S[1] = bytesToInt(bArr, 4);
        this._S[2] = bytesToInt(bArr, 8);
        this._S[3] = bytesToInt(bArr, 12);
    }

    private void unpackInt(int i, byte[] bArr, int i2) {
        int i3 = i2 + 1;
        bArr[i2] = (byte) (i >>> 24);
        int i4 = i3 + 1;
        bArr[i3] = (byte) (i >>> 16);
        bArr[i4] = (byte) (i >>> 8);
        bArr[i4 + 1] = (byte) i;
    }

    @Override
    public String getAlgorithmName() {
        return "XTEA";
    }

    @Override
    public int getBlockSize() {
        return 8;
    }

    @Override
    public void init(boolean z, CipherParameters cipherParameters) {
        if (cipherParameters instanceof KeyParameter) {
            this._forEncryption = z;
            this._initialised = true;
            setKey(((KeyParameter) cipherParameters).getKey());
        } else {
            throw new IllegalArgumentException("invalid parameter passed to TEA init - " + cipherParameters.getClass().getName());
        }
    }

    @Override
    public int processBlock(byte[] bArr, int i, byte[] bArr2, int i2) {
        if (!this._initialised) {
            throw new IllegalStateException(getAlgorithmName() + " not initialised");
        }
        if (i + 8 > bArr.length) {
            throw new DataLengthException("input buffer too short");
        }
        if (i2 + 8 <= bArr2.length) {
            return this._forEncryption ? encryptBlock(bArr, i, bArr2, i2) : decryptBlock(bArr, i, bArr2, i2);
        }
        throw new DataLengthException("output buffer too short");
    }

    @Override
    public void reset() {
    }
}
