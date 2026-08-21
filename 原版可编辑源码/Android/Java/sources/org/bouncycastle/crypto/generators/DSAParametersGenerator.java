package org.bouncycastle.crypto.generators;

import java.math.BigInteger;
import java.security.SecureRandom;
import kotlin.jvm.internal.ByteCompanionObject;
import org.bouncycastle.crypto.digests.SHA1Digest;
import org.bouncycastle.crypto.params.DSAParameters;
import org.bouncycastle.crypto.params.DSAValidationParameters;

public class DSAParametersGenerator {
    private static final BigInteger ONE = BigInteger.valueOf(1);
    private static final BigInteger TWO = BigInteger.valueOf(2);
    private int certainty;
    private SecureRandom random;
    private int size;

    private void add(byte[] bArr, byte[] bArr2, int i) {
        int i2 = (bArr2[bArr2.length - 1] & 255) + i;
        bArr[bArr2.length - 1] = (byte) i2;
        int i3 = i2 >>> 8;
        for (int length = bArr2.length - 2; length >= 0; length--) {
            int i4 = i3 + (bArr2[length] & 255);
            bArr[length] = (byte) i4;
            i3 = i4 >>> 8;
        }
    }

    public DSAParameters generateParameters() {
        BigInteger bigInteger;
        int i = 20;
        byte[] bArr = new byte[20];
        byte[] bArr2 = new byte[20];
        byte[] bArr3 = new byte[20];
        byte[] bArr4 = new byte[20];
        SHA1Digest sHA1Digest = new SHA1Digest();
        int i2 = this.size;
        int i3 = (i2 - 1) / 160;
        int i4 = i2 / 8;
        byte[] bArr5 = new byte[i4];
        BigInteger bigIntegerSubtract = null;
        int i5 = 0;
        BigInteger bigInteger2 = null;
        boolean z = false;
        int i6 = 0;
        while (!z) {
            do {
                this.random.nextBytes(bArr);
                sHA1Digest.update(bArr, i5, i);
                sHA1Digest.doFinal(bArr2, i5);
                System.arraycopy(bArr, i5, bArr3, i5, i);
                add(bArr3, bArr, 1);
                sHA1Digest.update(bArr3, i5, i);
                sHA1Digest.doFinal(bArr3, i5);
                for (int i7 = 0; i7 != i; i7++) {
                    bArr4[i7] = (byte) (bArr2[i7] ^ bArr3[i7]);
                }
                bArr4[i5] = (byte) (bArr4[i5] | ByteCompanionObject.MIN_VALUE);
                bArr4[19] = (byte) (bArr4[19] | 1);
                bigInteger = new BigInteger(1, bArr4);
            } while (!bigInteger.isProbablePrime(this.certainty));
            int i8 = 0;
            int i9 = 2;
            while (true) {
                if (i8 < 4096) {
                    int i10 = 0;
                    while (i10 < i3) {
                        add(bArr2, bArr, i9 + i10);
                        sHA1Digest.update(bArr2, i5, i);
                        sHA1Digest.doFinal(bArr2, i5);
                        i10++;
                        System.arraycopy(bArr2, i5, bArr5, i4 - (i10 * 20), i);
                    }
                    add(bArr2, bArr, i9 + i3);
                    sHA1Digest.update(bArr2, i5, i);
                    sHA1Digest.doFinal(bArr2, i5);
                    int i11 = i4 - (i3 * 20);
                    System.arraycopy(bArr2, 20 - i11, bArr5, i5, i11);
                    bArr5[i5] = (byte) (bArr5[i5] | ByteCompanionObject.MIN_VALUE);
                    BigInteger bigInteger3 = new BigInteger(1, bArr5);
                    bigIntegerSubtract = bigInteger3.subtract(bigInteger3.mod(bigInteger.multiply(TWO)).subtract(ONE));
                    if (bigIntegerSubtract.testBit(this.size - 1) && bigIntegerSubtract.isProbablePrime(this.certainty)) {
                        z = true;
                        break;
                    }
                    i8++;
                    i9 += i3 + 1;
                    i = 20;
                    i5 = 0;
                }
            }
            bigInteger2 = bigInteger;
            i6 = i8;
            i = 20;
            i5 = 0;
        }
        BigInteger bigIntegerDivide = bigIntegerSubtract.subtract(ONE).divide(bigInteger2);
        while (true) {
            BigInteger bigInteger4 = new BigInteger(this.size, this.random);
            if (bigInteger4.compareTo(ONE) > 0 && bigInteger4.compareTo(bigIntegerSubtract.subtract(ONE)) < 0) {
                BigInteger bigIntegerModPow = bigInteger4.modPow(bigIntegerDivide, bigIntegerSubtract);
                if (bigIntegerModPow.compareTo(ONE) > 0) {
                    return new DSAParameters(bigIntegerSubtract, bigInteger2, bigIntegerModPow, new DSAValidationParameters(bArr, i6));
                }
            }
        }
    }

    public void init(int i, int i2, SecureRandom secureRandom) {
        this.size = i;
        this.certainty = i2;
        this.random = secureRandom;
    }
}
