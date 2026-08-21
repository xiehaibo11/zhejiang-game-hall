package org.bouncycastle.crypto.engines;

import com.ss.android.socialbase.downloader.constants.DownloadErrorCode;
import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.DataLengthException;
import org.bouncycastle.crypto.StreamCipher;
import org.bouncycastle.crypto.params.KeyParameter;
import org.bouncycastle.crypto.params.ParametersWithIV;

public class HC256Engine implements StreamCipher {
    private boolean initialised;
    private byte[] iv;
    private byte[] key;
    private int[] p = new int[1024];
    private int[] q = new int[1024];
    private int cnt = 0;
    private byte[] buf = new byte[4];
    private int idx = 0;

    private byte getByte() {
        if (this.idx == 0) {
            int iStep = step();
            byte[] bArr = this.buf;
            bArr[3] = (byte) (iStep & 255);
            int i = iStep >> 8;
            bArr[2] = (byte) (i & 255);
            int i2 = i >> 8;
            bArr[1] = (byte) (i2 & 255);
            bArr[0] = (byte) ((i2 >> 8) & 255);
        }
        byte[] bArr2 = this.buf;
        int i3 = this.idx;
        byte b = bArr2[i3];
        this.idx = 3 & (i3 + 1);
        return b;
    }

    private void init() {
        if (this.key.length != 32) {
            throw new IllegalArgumentException("The key must be 256 bit long");
        }
        this.cnt = 0;
        int[] iArr = new int[2560];
        for (int i = 0; i < 32; i++) {
            int i2 = i >> 3;
            iArr[i2] = iArr[i2] | (this.key[i] << (i & 7));
        }
        int i3 = 0;
        while (true) {
            byte[] bArr = this.iv;
            if (i3 >= bArr.length || i3 >= 32) {
                break;
            }
            int i4 = (i3 >> 3) + 8;
            iArr[i4] = (bArr[i3] << (i3 & 7)) | iArr[i4];
            i3++;
        }
        for (int i5 = 16; i5 < 2560; i5++) {
            int i6 = iArr[i5 - 2];
            int i7 = iArr[i5 - 15];
            iArr[i5] = ((i6 >>> 10) ^ (rotateRight(i6, 17) ^ rotateRight(i6, 19))) + iArr[i5 - 7] + ((i7 >>> 3) ^ (rotateRight(i7, 7) ^ rotateRight(i7, 18))) + iArr[i5 - 16] + i5;
        }
        System.arraycopy(iArr, 512, this.p, 0, 1024);
        System.arraycopy(iArr, 1536, this.q, 0, 1024);
        for (int i8 = 0; i8 < 4096; i8++) {
            step();
        }
        this.cnt = 0;
    }

    private static int rotateRight(int i, int i2) {
        return (i << (-i2)) | (i >>> i2);
    }

    private int step() {
        int i;
        int i2;
        int i3 = this.cnt;
        int i4 = i3 & DownloadErrorCode.ERROR_IO;
        if (i3 < 1024) {
            int[] iArr = this.p;
            int i5 = iArr[(i4 - 3) & DownloadErrorCode.ERROR_IO];
            int i6 = iArr[(i4 - 1023) & DownloadErrorCode.ERROR_IO];
            int i7 = iArr[i4];
            int iRotateRight = iArr[(i4 - 10) & DownloadErrorCode.ERROR_IO] + (rotateRight(i6, 23) ^ rotateRight(i5, 10));
            int[] iArr2 = this.q;
            iArr[i4] = i7 + iRotateRight + iArr2[(i5 ^ i6) & DownloadErrorCode.ERROR_IO];
            int[] iArr3 = this.p;
            int i8 = iArr3[(i4 - 12) & DownloadErrorCode.ERROR_IO];
            i = iArr2[i8 & 255] + iArr2[((i8 >> 8) & 255) + 256] + iArr2[((i8 >> 16) & 255) + 512] + iArr2[((i8 >> 24) & 255) + 768];
            i2 = iArr3[i4];
        } else {
            int[] iArr4 = this.q;
            int i9 = iArr4[(i4 - 3) & DownloadErrorCode.ERROR_IO];
            int i10 = iArr4[(i4 - 1023) & DownloadErrorCode.ERROR_IO];
            int i11 = iArr4[i4];
            int iRotateRight2 = iArr4[(i4 - 10) & DownloadErrorCode.ERROR_IO] + (rotateRight(i10, 23) ^ rotateRight(i9, 10));
            int[] iArr5 = this.p;
            iArr4[i4] = i11 + iRotateRight2 + iArr5[(i9 ^ i10) & DownloadErrorCode.ERROR_IO];
            int[] iArr6 = this.q;
            int i12 = iArr6[(i4 - 12) & DownloadErrorCode.ERROR_IO];
            i = iArr5[i12 & 255] + iArr5[((i12 >> 8) & 255) + 256] + iArr5[((i12 >> 16) & 255) + 512] + iArr5[((i12 >> 24) & 255) + 768];
            i2 = iArr6[i4];
        }
        int i13 = i2 ^ i;
        this.cnt = (this.cnt + 1) & 2047;
        return i13;
    }

    @Override
    public String getAlgorithmName() {
        return "HC-256";
    }

    @Override
    public void init(boolean z, CipherParameters cipherParameters) throws IllegalArgumentException {
        CipherParameters parameters;
        if (cipherParameters instanceof ParametersWithIV) {
            ParametersWithIV parametersWithIV = (ParametersWithIV) cipherParameters;
            this.iv = parametersWithIV.getIV();
            parameters = parametersWithIV.getParameters();
        } else {
            this.iv = new byte[0];
            parameters = cipherParameters;
        }
        if (parameters instanceof KeyParameter) {
            this.key = ((KeyParameter) parameters).getKey();
            init();
            this.initialised = true;
        } else {
            throw new IllegalArgumentException("Invalid parameter passed to HC256 init - " + cipherParameters.getClass().getName());
        }
    }

    @Override
    public void processBytes(byte[] bArr, int i, int i2, byte[] bArr2, int i3) throws DataLengthException {
        if (!this.initialised) {
            throw new IllegalStateException(getAlgorithmName() + " not initialised");
        }
        if (i + i2 > bArr.length) {
            throw new DataLengthException("input buffer too short");
        }
        if (i3 + i2 > bArr2.length) {
            throw new DataLengthException("output buffer too short");
        }
        for (int i4 = 0; i4 < i2; i4++) {
            bArr2[i3 + i4] = (byte) (bArr[i + i4] ^ getByte());
        }
    }

    @Override
    public void reset() {
        this.idx = 0;
        init();
    }

    @Override
    public byte returnByte(byte b) {
        return (byte) (b ^ getByte());
    }
}
