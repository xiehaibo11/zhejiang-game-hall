package org.bouncycastle.crypto.engines;

public class DESedeEngine extends org.bouncycastle.crypto.engines.DESEngine {
    protected static final int BLOCK_SIZE = 8;
    private boolean forEncryption;
    private int[] workingKey1;
    private int[] workingKey2;
    private int[] workingKey3;

    public DESedeEngine() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.workingKey1 = r0
            r1.workingKey2 = r0
            r1.workingKey3 = r0
            return
    }

    @Override
    public java.lang.String getAlgorithmName() {
            r1 = this;
            java.lang.String r0 = "DESede"
            return r0
    }

    @Override
    public int getBlockSize() {
            r1 = this;
            r0 = 8
            return r0
    }

    @Override
    public void init(boolean r8, org.bouncycastle.crypto.CipherParameters r9) {
            r7 = this;
            boolean r0 = r9 instanceof org.bouncycastle.crypto.params.KeyParameter
            if (r0 == 0) goto L58
            org.bouncycastle.crypto.params.KeyParameter r9 = (org.bouncycastle.crypto.params.KeyParameter) r9
            byte[] r9 = r9.getKey()
            r0 = 8
            byte[] r1 = new byte[r0]
            byte[] r2 = new byte[r0]
            byte[] r3 = new byte[r0]
            int r4 = r9.length
            r5 = 24
            if (r4 > r5) goto L50
            r7.forEncryption = r8
            int r4 = r9.length
            r6 = 0
            java.lang.System.arraycopy(r9, r6, r1, r6, r0)
            java.lang.System.arraycopy(r9, r0, r2, r6, r0)
            if (r4 != r5) goto L3d
            r4 = 16
            java.lang.System.arraycopy(r9, r4, r3, r6, r0)
            int[] r9 = r7.generateWorkingKey(r8, r1)
            r7.workingKey1 = r9
            r9 = r8 ^ 1
            int[] r9 = r7.generateWorkingKey(r9, r2)
            r7.workingKey2 = r9
            int[] r8 = r7.generateWorkingKey(r8, r3)
            r7.workingKey3 = r8
            goto L4f
        L3d:
            int[] r9 = r7.generateWorkingKey(r8, r1)
            r7.workingKey1 = r9
            r8 = r8 ^ 1
            int[] r8 = r7.generateWorkingKey(r8, r2)
            r7.workingKey2 = r8
            int[] r8 = r7.workingKey1
            r7.workingKey3 = r8
        L4f:
            return
        L50:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = "key size greater than 24 bytes"
            r8.<init>(r9)
            throw r8
        L58:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "invalid parameter passed to DESede init - "
            r0.append(r1)
            java.lang.Class r9 = r9.getClass()
            java.lang.String r9 = r9.getName()
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            r8.<init>(r9)
            throw r8
    }

    @Override
    public int processBlock(byte[] r7, int r8, byte[] r9, int r10) {
            r6 = this;
            int[] r1 = r6.workingKey1
            if (r1 == 0) goto L50
            int r0 = r8 + 8
            int r3 = r7.length
            if (r0 > r3) goto L48
            int r0 = r10 + 8
            int r3 = r9.length
            if (r0 > r3) goto L40
            boolean r0 = r6.forEncryption
            if (r0 == 0) goto L27
            r0 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.desFunc(r1, r2, r3, r4, r5)
            int[] r1 = r6.workingKey2
            r2 = r9
            r3 = r10
            r0.desFunc(r1, r2, r3, r4, r5)
            int[] r1 = r6.workingKey3
            r0.desFunc(r1, r2, r3, r4, r5)
            goto L3d
        L27:
            int[] r1 = r6.workingKey3
            r0 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.desFunc(r1, r2, r3, r4, r5)
            int[] r1 = r6.workingKey2
            r2 = r9
            r3 = r10
            r0.desFunc(r1, r2, r3, r4, r5)
            int[] r1 = r6.workingKey1
            r0.desFunc(r1, r2, r3, r4, r5)
        L3d:
            r0 = 8
            return r0
        L40:
            org.bouncycastle.crypto.DataLengthException r0 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r1 = "output buffer too short"
            r0.<init>(r1)
            throw r0
        L48:
            org.bouncycastle.crypto.DataLengthException r0 = new org.bouncycastle.crypto.DataLengthException
            java.lang.String r1 = "input buffer too short"
            r0.<init>(r1)
            throw r0
        L50:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "DESede engine not initialised"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }
}
