package org.bouncycastle.openssl;

final class PEMUtilities {
    PEMUtilities() {
            r0 = this;
            r0.<init>()
            return
    }

    static byte[] crypt(boolean r9, java.lang.String r10, byte[] r11, char[] r12, java.lang.String r13, byte[] r14) throws java.io.IOException {
            javax.crypto.spec.IvParameterSpec r0 = new javax.crypto.spec.IvParameterSpec
            r0.<init>(r14)
            java.lang.String r1 = "-CFB"
            boolean r1 = r13.endsWith(r1)
            java.lang.String r2 = "NoPadding"
            if (r1 == 0) goto L13
            java.lang.String r1 = "CFB"
            r3 = r2
            goto L17
        L13:
            java.lang.String r1 = "CBC"
            java.lang.String r3 = "PKCS5Padding"
        L17:
            java.lang.String r4 = "-ECB"
            boolean r4 = r13.endsWith(r4)
            java.lang.String r5 = "DES-EDE3"
            java.lang.String r6 = "DES-EDE"
            if (r4 != 0) goto L2f
            boolean r4 = r6.equals(r13)
            if (r4 != 0) goto L2f
            boolean r4 = r5.equals(r13)
            if (r4 == 0) goto L32
        L2f:
            r0 = 0
            java.lang.String r1 = "ECB"
        L32:
            java.lang.String r4 = "-OFB"
            boolean r4 = r13.endsWith(r4)
            if (r4 == 0) goto L3d
            java.lang.String r1 = "OFB"
            goto L3e
        L3d:
            r2 = r3
        L3e:
            boolean r3 = r13.startsWith(r6)
            java.lang.String r4 = "AES"
            r6 = 1
            if (r3 == 0) goto L56
            java.lang.String r4 = "DESede"
            boolean r13 = r13.startsWith(r5)
            r13 = r13 ^ r6
            r3 = 24
            javax.crypto.SecretKey r12 = getKey(r12, r4, r3, r14, r13)
            goto Le3
        L56:
            java.lang.String r3 = "DES-"
            boolean r3 = r13.startsWith(r3)
            r5 = 8
            if (r3 == 0) goto L68
            java.lang.String r4 = "DES"
            javax.crypto.SecretKey r12 = getKey(r12, r4, r5, r14)
            goto Le3
        L68:
            java.lang.String r3 = "BF-"
            boolean r3 = r13.startsWith(r3)
            if (r3 == 0) goto L7a
            java.lang.String r4 = "Blowfish"
            r13 = 16
            javax.crypto.SecretKey r12 = getKey(r12, r4, r13, r14)
            goto Le3
        L7a:
            java.lang.String r3 = "RC2-"
            boolean r3 = r13.startsWith(r3)
            r7 = 128(0x80, float:1.8E-43)
            if (r3 == 0) goto Lae
            java.lang.String r4 = "RC2"
            java.lang.String r3 = "RC2-40-"
            boolean r3 = r13.startsWith(r3)
            if (r3 == 0) goto L91
            r7 = 40
            goto L9b
        L91:
            java.lang.String r3 = "RC2-64-"
            boolean r13 = r13.startsWith(r3)
            if (r13 == 0) goto L9b
            r7 = 64
        L9b:
            int r13 = r7 / 8
            javax.crypto.SecretKey r12 = getKey(r12, r4, r13, r14)
            javax.crypto.spec.RC2ParameterSpec r13 = new javax.crypto.spec.RC2ParameterSpec
            if (r0 != 0) goto La9
            r13.<init>(r7)
            goto Lac
        La9:
            r13.<init>(r7, r14)
        Lac:
            r0 = r13
            goto Le3
        Lae:
            java.lang.String r3 = "AES-"
            boolean r3 = r13.startsWith(r3)
            if (r3 == 0) goto L137
            int r3 = r14.length
            if (r3 <= r5) goto Lc0
            byte[] r3 = new byte[r5]
            r8 = 0
            java.lang.System.arraycopy(r14, r8, r3, r8, r5)
            r14 = r3
        Lc0:
            java.lang.String r3 = "AES-128-"
            boolean r3 = r13.startsWith(r3)
            if (r3 == 0) goto Lc9
            goto Lde
        Lc9:
            java.lang.String r3 = "AES-192-"
            boolean r3 = r13.startsWith(r3)
            if (r3 == 0) goto Ld4
            r7 = 192(0xc0, float:2.69E-43)
            goto Lde
        Ld4:
            java.lang.String r3 = "AES-256-"
            boolean r13 = r13.startsWith(r3)
            if (r13 == 0) goto L12f
            r7 = 256(0x100, float:3.59E-43)
        Lde:
            int r7 = r7 / r5
            javax.crypto.SecretKey r12 = getKey(r12, r4, r7, r14)
        Le3:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            r13.append(r4)
            java.lang.String r14 = "/"
            r13.append(r14)
            r13.append(r1)
            r13.append(r14)
            r13.append(r2)
            java.lang.String r13 = r13.toString()
            javax.crypto.Cipher r10 = javax.crypto.Cipher.getInstance(r13, r10)     // Catch: java.lang.Exception -> L113
            if (r9 == 0) goto L104
            goto L105
        L104:
            r6 = 2
        L105:
            if (r0 != 0) goto L10b
            r10.init(r6, r12)     // Catch: java.lang.Exception -> L113
            goto L10e
        L10b:
            r10.init(r6, r12, r0)     // Catch: java.lang.Exception -> L113
        L10e:
            byte[] r9 = r10.doFinal(r11)     // Catch: java.lang.Exception -> L113
            return r9
        L113:
            r9 = move-exception
            java.io.IOException r10 = new java.io.IOException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "exception using cipher: "
            r11.append(r12)
            java.lang.String r9 = r9.toString()
            r11.append(r9)
            java.lang.String r9 = r11.toString()
            r10.<init>(r9)
            throw r10
        L12f:
            java.io.IOException r9 = new java.io.IOException
            java.lang.String r10 = "unknown AES encryption with private key"
            r9.<init>(r10)
            throw r9
        L137:
            java.io.IOException r9 = new java.io.IOException
            java.lang.String r10 = "unknown encryption with private key"
            r9.<init>(r10)
            throw r9
    }

    private static javax.crypto.SecretKey getKey(char[] r1, java.lang.String r2, int r3, byte[] r4) throws java.io.IOException {
            r0 = 0
            javax.crypto.SecretKey r1 = getKey(r1, r2, r3, r4, r0)
            return r1
    }

    private static javax.crypto.SecretKey getKey(char[] r1, java.lang.String r2, int r3, byte[] r4, boolean r5) throws java.io.IOException {
            org.bouncycastle.crypto.generators.OpenSSLPBEParametersGenerator r0 = new org.bouncycastle.crypto.generators.OpenSSLPBEParametersGenerator
            r0.<init>()
            byte[] r1 = org.bouncycastle.crypto.PBEParametersGenerator.PKCS5PasswordToBytes(r1)
            r0.init(r1, r4)
            r1 = 8
            int r3 = r3 * 8
            org.bouncycastle.crypto.CipherParameters r3 = r0.generateDerivedParameters(r3)
            org.bouncycastle.crypto.params.KeyParameter r3 = (org.bouncycastle.crypto.params.KeyParameter) r3
            byte[] r3 = r3.getKey()
            if (r5 == 0) goto L27
            int r4 = r3.length
            r5 = 24
            if (r4 < r5) goto L27
            r4 = 0
            r5 = 16
            java.lang.System.arraycopy(r3, r4, r3, r5, r1)
        L27:
            javax.crypto.spec.SecretKeySpec r1 = new javax.crypto.spec.SecretKeySpec
            r1.<init>(r3, r2)
            return r1
    }
}
