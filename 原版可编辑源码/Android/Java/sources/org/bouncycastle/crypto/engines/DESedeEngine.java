package org.bouncycastle.crypto.engines;

import org.bouncycastle.crypto.CipherParameters;
import org.bouncycastle.crypto.DataLengthException;
import org.bouncycastle.crypto.params.KeyParameter;

public class DESedeEngine extends DESEngine {
    protected static final int BLOCK_SIZE = 8;
    private boolean forEncryption;
    private int[] workingKey1 = null;
    private int[] workingKey2 = null;
    private int[] workingKey3 = null;

    @Override
    public String getAlgorithmName() {
        return "DESede";
    }

    @Override
    public int getBlockSize() {
        return 8;
    }

    @Override
    public void init(boolean z, CipherParameters cipherParameters) {
        if (!(cipherParameters instanceof KeyParameter)) {
            throw new IllegalArgumentException("invalid parameter passed to DESede init - " + cipherParameters.getClass().getName());
        }
        byte[] key = ((KeyParameter) cipherParameters).getKey();
        byte[] bArr = new byte[8];
        byte[] bArr2 = new byte[8];
        byte[] bArr3 = new byte[8];
        if (key.length > 24) {
            throw new IllegalArgumentException("key size greater than 24 bytes");
        }
        this.forEncryption = z;
        int length = key.length;
        System.arraycopy(key, 0, bArr, 0, 8);
        System.arraycopy(key, 8, bArr2, 0, 8);
        if (length != 24) {
            this.workingKey1 = generateWorkingKey(z, bArr);
            this.workingKey2 = generateWorkingKey(!z, bArr2);
            this.workingKey3 = this.workingKey1;
        } else {
            System.arraycopy(key, 16, bArr3, 0, 8);
            this.workingKey1 = generateWorkingKey(z, bArr);
            this.workingKey2 = generateWorkingKey(!z, bArr2);
            this.workingKey3 = generateWorkingKey(z, bArr3);
        }
    }

    @Override
    public int processBlock(byte[] bArr, int i, byte[] bArr2, int i2) {
        int[] iArr = this.workingKey1;
        if (iArr == null) {
            throw new IllegalStateException("DESede engine not initialised");
        }
        if (i + 8 > bArr.length) {
            throw new DataLengthException("input buffer too short");
        }
        if (i2 + 8 > bArr2.length) {
            throw new DataLengthException("output buffer too short");
        }
        if (this.forEncryption) {
            desFunc(iArr, bArr, i, bArr2, i2);
            desFunc(this.workingKey2, bArr2, i2, bArr2, i2);
            desFunc(this.workingKey3, bArr2, i2, bArr2, i2);
            return 8;
        }
        desFunc(this.workingKey3, bArr, i, bArr2, i2);
        desFunc(this.workingKey2, bArr2, i2, bArr2, i2);
        desFunc(this.workingKey1, bArr2, i2, bArr2, i2);
        return 8;
    }

    @Override
    public void reset() {
    }
}
