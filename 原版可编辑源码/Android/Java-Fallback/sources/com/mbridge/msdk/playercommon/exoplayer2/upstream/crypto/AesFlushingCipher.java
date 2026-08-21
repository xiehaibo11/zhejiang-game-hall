package com.mbridge.msdk.playercommon.exoplayer2.upstream.crypto;

public final class AesFlushingCipher {
    private final int blockSize;
    private final javax.crypto.Cipher cipher;
    private final byte[] flushedBlock;
    private int pendingXorBytes;
    private final byte[] zerosBlock;

    public AesFlushingCipher(int r6, byte[] r7, long r8, long r10) {
            r5 = this;
            r5.<init>()
            java.lang.String r0 = "AES/CTR/NoPadding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            r5.cipher = r0     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            int r0 = r0.getBlockSize()     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            r5.blockSize = r0     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            byte[] r1 = new byte[r0]     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            r5.zerosBlock = r1     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            byte[] r1 = new byte[r0]     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            r5.flushedBlock = r1     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            long r1 = (long) r0     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            long r1 = r10 / r1
            long r3 = (long) r0     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            long r10 = r10 % r3
            int r10 = (int) r10     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            javax.crypto.Cipher r11 = r5.cipher     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            javax.crypto.Cipher r3 = r5.cipher     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            java.lang.String r3 = r3.getAlgorithm()     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            java.lang.String r4 = "/"
            java.lang.String[] r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.splitAtFirst(r3, r4)     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            r4 = 0
            r3 = r3[r4]     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            r0.<init>(r7, r3)     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            javax.crypto.spec.IvParameterSpec r7 = new javax.crypto.spec.IvParameterSpec     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            byte[] r8 = r5.getInitializationVector(r8, r1)     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            r7.<init>(r8)     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            r11.init(r6, r0, r7)     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            if (r10 == 0) goto L48
            byte[] r6 = new byte[r10]     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
            r5.updateInPlace(r6, r4, r10)     // Catch: java.security.InvalidAlgorithmParameterException -> L49 java.security.InvalidKeyException -> L4b javax.crypto.NoSuchPaddingException -> L4d java.security.NoSuchAlgorithmException -> L4f
        L48:
            return
        L49:
            r6 = move-exception
            goto L50
        L4b:
            r6 = move-exception
            goto L50
        L4d:
            r6 = move-exception
            goto L50
        L4f:
            r6 = move-exception
        L50:
            java.lang.RuntimeException r7 = new java.lang.RuntimeException
            r7.<init>(r6)
            throw r7
    }

    private byte[] getInitializationVector(long r2, long r4) {
            r1 = this;
            r0 = 16
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            java.nio.ByteBuffer r2 = r0.putLong(r2)
            java.nio.ByteBuffer r2 = r2.putLong(r4)
            byte[] r2 = r2.array()
            return r2
    }

    private int nonFlushingUpdate(byte[] r7, int r8, int r9, byte[] r10, int r11) {
            r6 = this;
            javax.crypto.Cipher r0 = r6.cipher     // Catch: javax.crypto.ShortBufferException -> Lc
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            int r7 = r0.update(r1, r2, r3, r4, r5)     // Catch: javax.crypto.ShortBufferException -> Lc
            return r7
        Lc:
            r7 = move-exception
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            r8.<init>(r7)
            throw r8
    }

    public final void update(byte[] r9, int r10, int r11, byte[] r12, int r13) {
            r8 = this;
            r2 = r10
        L1:
            int r10 = r8.pendingXorBytes
            if (r10 <= 0) goto L1f
            r0 = r9[r2]
            byte[] r1 = r8.flushedBlock
            int r3 = r8.blockSize
            int r3 = r3 - r10
            r1 = r1[r3]
            r0 = r0 ^ r1
            byte r0 = (byte) r0
            r12[r13] = r0
            int r13 = r13 + 1
            int r2 = r2 + 1
            int r10 = r10 + (-1)
            r8.pendingXorBytes = r10
            int r11 = r11 + (-1)
            if (r11 != 0) goto L1
            return
        L1f:
            r0 = r8
            r1 = r9
            r3 = r11
            r4 = r12
            r5 = r13
            int r9 = r0.nonFlushingUpdate(r1, r2, r3, r4, r5)
            if (r11 != r9) goto L2b
            return
        L2b:
            int r11 = r11 - r9
            int r10 = r8.blockSize
            r0 = 0
            r1 = 1
            if (r11 >= r10) goto L34
            r10 = r1
            goto L35
        L34:
            r10 = r0
        L35:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r10)
            int r13 = r13 + r9
            int r9 = r8.blockSize
            int r5 = r9 - r11
            r8.pendingXorBytes = r5
            byte[] r3 = r8.zerosBlock
            r4 = 0
            byte[] r6 = r8.flushedBlock
            r7 = 0
            r2 = r8
            int r9 = r2.nonFlushingUpdate(r3, r4, r5, r6, r7)
            int r10 = r8.blockSize
            if (r9 != r10) goto L4f
            goto L50
        L4f:
            r1 = r0
        L50:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)
        L53:
            if (r0 >= r11) goto L61
            int r9 = r13 + 1
            byte[] r10 = r8.flushedBlock
            r10 = r10[r0]
            r12[r13] = r10
            int r0 = r0 + 1
            r13 = r9
            goto L53
        L61:
            return
    }

    public final void updateInPlace(byte[] r7, int r8, int r9) {
            r6 = this;
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r7
            r5 = r8
            r0.update(r1, r2, r3, r4, r5)
            return
    }
}
