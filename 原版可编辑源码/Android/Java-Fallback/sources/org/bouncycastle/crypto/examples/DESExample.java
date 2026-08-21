package org.bouncycastle.crypto.examples;

public class DESExample {
    private org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher cipher;
    private boolean encrypt;
    private java.io.BufferedInputStream in;
    private byte[] key;
    private java.io.BufferedOutputStream out;

    public DESExample() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.encrypt = r0
            r0 = 0
            r1.cipher = r0
            r1.in = r0
            r1.out = r0
            r1.key = r0
            return
    }

    public DESExample(java.lang.String r7, java.lang.String r8, java.lang.String r9, boolean r10) {
            r6 = this;
            java.lang.String r0 = "]"
            r6.<init>()
            r1 = 1
            r6.encrypt = r1
            r2 = 0
            r6.cipher = r2
            r6.in = r2
            r6.out = r2
            r6.key = r2
            r6.encrypt = r10
            java.io.BufferedInputStream r3 = new java.io.BufferedInputStream     // Catch: java.io.FileNotFoundException -> L20
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.io.FileNotFoundException -> L20
            r4.<init>(r7)     // Catch: java.io.FileNotFoundException -> L20
            r3.<init>(r4)     // Catch: java.io.FileNotFoundException -> L20
            r6.in = r3     // Catch: java.io.FileNotFoundException -> L20
            goto L3c
        L20:
            java.io.PrintStream r3 = java.lang.System.err
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Input file not found ["
            r4.append(r5)
            r4.append(r7)
            r4.append(r0)
            java.lang.String r7 = r4.toString()
            r3.println(r7)
            java.lang.System.exit(r1)
        L3c:
            java.io.BufferedOutputStream r7 = new java.io.BufferedOutputStream     // Catch: java.io.IOException -> L49
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.io.IOException -> L49
            r3.<init>(r8)     // Catch: java.io.IOException -> L49
            r7.<init>(r3)     // Catch: java.io.IOException -> L49
            r6.out = r7     // Catch: java.io.IOException -> L49
            goto L65
        L49:
            java.io.PrintStream r7 = java.lang.System.err
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Output file not created ["
            r3.append(r4)
            r3.append(r8)
            r3.append(r0)
            java.lang.String r8 = r3.toString()
            r7.println(r8)
            java.lang.System.exit(r1)
        L65:
            r7 = 0
            if (r10 == 0) goto Lbd
            java.security.SecureRandom r8 = new java.security.SecureRandom     // Catch: java.lang.Exception -> L78 java.io.IOException -> Lb3
            r8.<init>()     // Catch: java.lang.Exception -> L78 java.io.IOException -> Lb3
            java.lang.String r10 = "www.bouncycastle.org"
            byte[] r10 = r10.getBytes()     // Catch: java.lang.Exception -> L77 java.io.IOException -> Lb3
            r8.setSeed(r10)     // Catch: java.lang.Exception -> L77 java.io.IOException -> Lb3
            goto L83
        L77:
            r2 = r8
        L78:
            java.io.PrintStream r8 = java.lang.System.err     // Catch: java.io.IOException -> Lb3
            java.lang.String r10 = "Hmmm, no SHA1PRNG, you need the Sun implementation"
            r8.println(r10)     // Catch: java.io.IOException -> Lb3
            java.lang.System.exit(r1)     // Catch: java.io.IOException -> Lb3
            r8 = r2
        L83:
            org.bouncycastle.crypto.KeyGenerationParameters r10 = new org.bouncycastle.crypto.KeyGenerationParameters     // Catch: java.io.IOException -> Lb3
            r2 = 192(0xc0, float:2.69E-43)
            r10.<init>(r8, r2)     // Catch: java.io.IOException -> Lb3
            org.bouncycastle.crypto.generators.DESedeKeyGenerator r8 = new org.bouncycastle.crypto.generators.DESedeKeyGenerator     // Catch: java.io.IOException -> Lb3
            r8.<init>()     // Catch: java.io.IOException -> Lb3
            r8.init(r10)     // Catch: java.io.IOException -> Lb3
            byte[] r8 = r8.generateKey()     // Catch: java.io.IOException -> Lb3
            r6.key = r8     // Catch: java.io.IOException -> Lb3
            java.io.BufferedOutputStream r8 = new java.io.BufferedOutputStream     // Catch: java.io.IOException -> Lb3
            java.io.FileOutputStream r10 = new java.io.FileOutputStream     // Catch: java.io.IOException -> Lb3
            r10.<init>(r9)     // Catch: java.io.IOException -> Lb3
            r8.<init>(r10)     // Catch: java.io.IOException -> Lb3
            byte[] r10 = r6.key     // Catch: java.io.IOException -> Lb3
            byte[] r10 = org.bouncycastle.util.encoders.Hex.encode(r10)     // Catch: java.io.IOException -> Lb3
            int r2 = r10.length     // Catch: java.io.IOException -> Lb3
            r8.write(r10, r7, r2)     // Catch: java.io.IOException -> Lb3
            r8.flush()     // Catch: java.io.IOException -> Lb3
            r8.close()     // Catch: java.io.IOException -> Lb3
            goto Lf3
        Lb3:
            java.io.PrintStream r7 = java.lang.System.err
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r10 = "Could not decryption create key file ["
            goto Le0
        Lbd:
            java.io.BufferedInputStream r8 = new java.io.BufferedInputStream     // Catch: java.io.IOException -> Ld7
            java.io.FileInputStream r10 = new java.io.FileInputStream     // Catch: java.io.IOException -> Ld7
            r10.<init>(r9)     // Catch: java.io.IOException -> Ld7
            r8.<init>(r10)     // Catch: java.io.IOException -> Ld7
            int r10 = r8.available()     // Catch: java.io.IOException -> Ld7
            byte[] r2 = new byte[r10]     // Catch: java.io.IOException -> Ld7
            r8.read(r2, r7, r10)     // Catch: java.io.IOException -> Ld7
            byte[] r7 = org.bouncycastle.util.encoders.Hex.decode(r2)     // Catch: java.io.IOException -> Ld7
            r6.key = r7     // Catch: java.io.IOException -> Ld7
            goto Lf3
        Ld7:
            java.io.PrintStream r7 = java.lang.System.err
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r10 = "Decryption key file not found, or not valid ["
        Le0:
            r8.append(r10)
            r8.append(r9)
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            r7.println(r8)
            java.lang.System.exit(r1)
        Lf3:
            return
    }

    public static void main(java.lang.String[] r6) {
            int r0 = r6.length
            r1 = 2
            r2 = 1
            if (r0 >= r1) goto L30
            org.bouncycastle.crypto.examples.DESExample r0 = new org.bouncycastle.crypto.examples.DESExample
            r0.<init>()
            java.io.PrintStream r3 = java.lang.System.err
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Usage: java "
            r4.append(r5)
            java.lang.Class r0 = r0.getClass()
            java.lang.String r0 = r0.getName()
            r4.append(r0)
            java.lang.String r0 = " infile outfile [keyfile]"
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r3.println(r0)
            java.lang.System.exit(r2)
        L30:
            r0 = 0
            r3 = r6[r0]
            r4 = r6[r2]
            int r5 = r6.length
            if (r5 <= r1) goto L3c
            r6 = r6[r1]
            r2 = 0
            goto L3e
        L3c:
            java.lang.String r6 = "deskey.dat"
        L3e:
            org.bouncycastle.crypto.examples.DESExample r0 = new org.bouncycastle.crypto.examples.DESExample
            r0.<init>(r3, r4, r6, r2)
            r0.process()
            return
    }

    private final void performDecrypt(byte[] r10) {
            r9 = this;
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r0 = r9.cipher
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            r1.<init>(r10)
            r10 = 0
            r0.init(r10, r1)
            java.io.BufferedReader r0 = new java.io.BufferedReader
            java.io.InputStreamReader r1 = new java.io.InputStreamReader
            java.io.BufferedInputStream r2 = r9.in
            r1.<init>(r2)
            r0.<init>(r1)
            r1 = 0
        L18:
            java.lang.String r2 = r0.readLine()     // Catch: java.io.IOException -> L4b
            if (r2 == 0) goto L3d
            byte[] r4 = org.bouncycastle.util.encoders.Hex.decode(r2)     // Catch: java.io.IOException -> L4b
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r1 = r9.cipher     // Catch: java.io.IOException -> L4b
            int r2 = r4.length     // Catch: java.io.IOException -> L4b
            int r1 = r1.getOutputSize(r2)     // Catch: java.io.IOException -> L4b
            byte[] r1 = new byte[r1]     // Catch: java.io.IOException -> L4b
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r3 = r9.cipher     // Catch: java.io.IOException -> L4b
            r5 = 0
            int r6 = r4.length     // Catch: java.io.IOException -> L4b
            r8 = 0
            r7 = r1
            int r2 = r3.processBytes(r4, r5, r6, r7, r8)     // Catch: java.io.IOException -> L4b
            if (r2 <= 0) goto L18
            java.io.BufferedOutputStream r3 = r9.out     // Catch: java.io.IOException -> L4b
            r3.write(r1, r10, r2)     // Catch: java.io.IOException -> L4b
            goto L18
        L3d:
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r0 = r9.cipher     // Catch: java.io.IOException -> L4b org.bouncycastle.crypto.CryptoException -> L4f
            int r0 = r0.doFinal(r1, r10)     // Catch: java.io.IOException -> L4b org.bouncycastle.crypto.CryptoException -> L4f
            if (r0 <= 0) goto L4f
            java.io.BufferedOutputStream r2 = r9.out     // Catch: java.io.IOException -> L4b org.bouncycastle.crypto.CryptoException -> L4f
            r2.write(r1, r10, r0)     // Catch: java.io.IOException -> L4b org.bouncycastle.crypto.CryptoException -> L4f
            goto L4f
        L4b:
            r10 = move-exception
            r10.printStackTrace()
        L4f:
            return
    }

    private final void performEncrypt(byte[] r11) {
            r10 = this;
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r0 = r10.cipher
            org.bouncycastle.crypto.params.KeyParameter r1 = new org.bouncycastle.crypto.params.KeyParameter
            r1.<init>(r11)
            r11 = 1
            r0.init(r11, r1)
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r11 = r10.cipher
            r0 = 47
            int r11 = r11.getOutputSize(r0)
            byte[] r7 = new byte[r0]
            byte[] r11 = new byte[r11]
        L17:
            java.io.BufferedInputStream r1 = r10.in     // Catch: java.io.IOException -> L56
            r8 = 0
            int r4 = r1.read(r7, r8, r0)     // Catch: java.io.IOException -> L56
            r9 = 10
            if (r4 <= 0) goto L3e
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r1 = r10.cipher     // Catch: java.io.IOException -> L56
            r3 = 0
            r6 = 0
            r2 = r7
            r5 = r11
            int r1 = r1.processBytes(r2, r3, r4, r5, r6)     // Catch: java.io.IOException -> L56
            if (r1 <= 0) goto L17
            byte[] r1 = org.bouncycastle.util.encoders.Hex.encode(r11, r8, r1)     // Catch: java.io.IOException -> L56
            java.io.BufferedOutputStream r2 = r10.out     // Catch: java.io.IOException -> L56
            int r3 = r1.length     // Catch: java.io.IOException -> L56
            r2.write(r1, r8, r3)     // Catch: java.io.IOException -> L56
            java.io.BufferedOutputStream r1 = r10.out     // Catch: java.io.IOException -> L56
            r1.write(r9)     // Catch: java.io.IOException -> L56
            goto L17
        L3e:
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r0 = r10.cipher     // Catch: java.io.IOException -> L56 org.bouncycastle.crypto.CryptoException -> L5a
            int r0 = r0.doFinal(r11, r8)     // Catch: java.io.IOException -> L56 org.bouncycastle.crypto.CryptoException -> L5a
            if (r0 <= 0) goto L5a
            byte[] r11 = org.bouncycastle.util.encoders.Hex.encode(r11, r8, r0)     // Catch: java.io.IOException -> L56 org.bouncycastle.crypto.CryptoException -> L5a
            java.io.BufferedOutputStream r0 = r10.out     // Catch: java.io.IOException -> L56 org.bouncycastle.crypto.CryptoException -> L5a
            int r1 = r11.length     // Catch: java.io.IOException -> L56 org.bouncycastle.crypto.CryptoException -> L5a
            r0.write(r11, r8, r1)     // Catch: java.io.IOException -> L56 org.bouncycastle.crypto.CryptoException -> L5a
            java.io.BufferedOutputStream r11 = r10.out     // Catch: java.io.IOException -> L56 org.bouncycastle.crypto.CryptoException -> L5a
            r11.write(r9)     // Catch: java.io.IOException -> L56 org.bouncycastle.crypto.CryptoException -> L5a
            goto L5a
        L56:
            r11 = move-exception
            r11.printStackTrace()
        L5a:
            return
    }

    private final void process() {
            r3 = this;
            org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher r0 = new org.bouncycastle.crypto.paddings.PaddedBufferedBlockCipher
            org.bouncycastle.crypto.modes.CBCBlockCipher r1 = new org.bouncycastle.crypto.modes.CBCBlockCipher
            org.bouncycastle.crypto.engines.DESedeEngine r2 = new org.bouncycastle.crypto.engines.DESedeEngine
            r2.<init>()
            r1.<init>(r2)
            r0.<init>(r1)
            r3.cipher = r0
            boolean r0 = r3.encrypt
            if (r0 == 0) goto L1b
            byte[] r0 = r3.key
            r3.performEncrypt(r0)
            goto L20
        L1b:
            byte[] r0 = r3.key
            r3.performDecrypt(r0)
        L20:
            java.io.BufferedInputStream r0 = r3.in     // Catch: java.io.IOException -> L2f
            r0.close()     // Catch: java.io.IOException -> L2f
            java.io.BufferedOutputStream r0 = r3.out     // Catch: java.io.IOException -> L2f
            r0.flush()     // Catch: java.io.IOException -> L2f
            java.io.BufferedOutputStream r0 = r3.out     // Catch: java.io.IOException -> L2f
            r0.close()     // Catch: java.io.IOException -> L2f
        L2f:
            return
    }
}
