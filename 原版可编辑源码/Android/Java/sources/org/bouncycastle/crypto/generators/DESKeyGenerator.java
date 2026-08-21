package org.bouncycastle.crypto.generators;

import org.bouncycastle.crypto.CipherKeyGenerator;
import org.bouncycastle.crypto.params.DESParameters;

public class DESKeyGenerator extends CipherKeyGenerator {
    @Override
    public byte[] generateKey() {
        byte[] bArr = new byte[8];
        do {
            this.random.nextBytes(bArr);
            DESParameters.setOddParity(bArr);
        } while (DESParameters.isWeakKey(bArr, 0));
        return bArr;
    }
}
