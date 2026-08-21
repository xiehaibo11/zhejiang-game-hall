package org.bouncycastle.jce.provider;

public class JDKKeyStore extends java.security.KeyStoreSpi implements org.bouncycastle.jce.interfaces.BCKeyStore {
    static final int CERTIFICATE = 1;
    static final int KEY = 2;
    private static final java.lang.String KEY_CIPHER = "PBEWithSHAAnd3-KeyTripleDES-CBC";
    static final int KEY_PRIVATE = 0;
    static final int KEY_PUBLIC = 1;
    private static final int KEY_SALT_SIZE = 20;
    static final int KEY_SECRET = 2;
    private static final int MIN_ITERATIONS = 1024;
    static final int NULL = 0;
    static final int SEALED = 4;
    static final int SECRET = 3;
    private static final java.lang.String STORE_CIPHER = "PBEWithSHAAndTwofish-CBC";
    private static final int STORE_SALT_SIZE = 20;
    private static final int STORE_VERSION = 1;
    protected java.security.SecureRandom random;
    protected java.util.Hashtable table;

    public static class BouncyCastleStore extends org.bouncycastle.jce.provider.JDKKeyStore {
        public BouncyCastleStore() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void engineLoad(java.io.InputStream r9, char[] r10) throws java.io.IOException {
                r8 = this;
                java.util.Hashtable r0 = r8.table
                r0.clear()
                if (r9 != 0) goto L8
                return
            L8:
                java.io.DataInputStream r0 = new java.io.DataInputStream
                r0.<init>(r9)
                int r9 = r0.readInt()
                r1 = 1
                if (r9 == r1) goto L1f
                if (r9 != 0) goto L17
                goto L1f
            L17:
                java.io.IOException r9 = new java.io.IOException
                java.lang.String r10 = "Wrong version of key store."
                r9.<init>(r10)
                throw r9
            L1f:
                int r1 = r0.readInt()
                byte[] r6 = new byte[r1]
                r2 = 20
                java.lang.String r3 = "Key store corrupted."
                if (r1 != r2) goto L94
                r0.readFully(r6)
                int r7 = r0.readInt()
                if (r7 < 0) goto L8e
                r1 = 4096(0x1000, float:5.74E-42)
                if (r7 > r1) goto L8e
                r4 = 2
                if (r9 != 0) goto L44
                java.lang.String r3 = "OldPBEWithSHAAndTwofish-CBC"
                r2 = r8
                r5 = r10
                javax.crypto.Cipher r9 = r2.makePBECipher(r3, r4, r5, r6, r7)
                goto L4c
            L44:
                java.lang.String r3 = "PBEWithSHAAndTwofish-CBC"
                r2 = r8
                r5 = r10
                javax.crypto.Cipher r9 = r2.makePBECipher(r3, r4, r5, r6, r7)
            L4c:
                javax.crypto.CipherInputStream r10 = new javax.crypto.CipherInputStream
                r10.<init>(r0, r9)
                org.bouncycastle.crypto.io.DigestInputStream r9 = new org.bouncycastle.crypto.io.DigestInputStream
                org.bouncycastle.crypto.digests.SHA1Digest r0 = new org.bouncycastle.crypto.digests.SHA1Digest
                r0.<init>()
                r9.<init>(r10, r0)
                r8.loadStore(r9)
                org.bouncycastle.crypto.Digest r9 = r9.getDigest()
                int r0 = r9.getDigestSize()
                byte[] r1 = new byte[r0]
                byte[] r2 = new byte[r0]
                r3 = 0
                r9.doFinal(r1, r3)
            L6e:
                if (r3 == r0) goto L7a
                int r9 = r10.read()
                byte r9 = (byte) r9
                r2[r3] = r9
                int r3 = r3 + 1
                goto L6e
            L7a:
                boolean r9 = r8.isSameAs(r1, r2)
                if (r9 == 0) goto L81
                return
            L81:
                java.util.Hashtable r9 = r8.table
                r9.clear()
                java.io.IOException r9 = new java.io.IOException
                java.lang.String r10 = "KeyStore integrity check failed."
                r9.<init>(r10)
                throw r9
            L8e:
                java.io.IOException r9 = new java.io.IOException
                r9.<init>(r3)
                throw r9
            L94:
                java.io.IOException r9 = new java.io.IOException
                r9.<init>(r3)
                throw r9
        }

        @Override
        public void engineStore(java.io.OutputStream r8, char[] r9) throws java.io.IOException {
                r7 = this;
                java.io.DataOutputStream r0 = new java.io.DataOutputStream
                r0.<init>(r8)
                r8 = 20
                byte[] r5 = new byte[r8]
                java.security.SecureRandom r1 = r7.random
                int r1 = r1.nextInt()
                r1 = r1 & 1023(0x3ff, float:1.434E-42)
                int r6 = r1 + 1024
                java.security.SecureRandom r1 = r7.random
                r1.nextBytes(r5)
                r1 = 1
                r0.writeInt(r1)
                r0.writeInt(r8)
                r0.write(r5)
                r0.writeInt(r6)
                java.lang.String r2 = "PBEWithSHAAndTwofish-CBC"
                r3 = 1
                r1 = r7
                r4 = r9
                javax.crypto.Cipher r8 = r1.makePBECipher(r2, r3, r4, r5, r6)
                javax.crypto.CipherOutputStream r9 = new javax.crypto.CipherOutputStream
                r9.<init>(r0, r8)
                org.bouncycastle.crypto.io.DigestOutputStream r8 = new org.bouncycastle.crypto.io.DigestOutputStream
                org.bouncycastle.crypto.digests.SHA1Digest r0 = new org.bouncycastle.crypto.digests.SHA1Digest
                r0.<init>()
                r8.<init>(r9, r0)
                r7.saveStore(r8)
                org.bouncycastle.crypto.Digest r8 = r8.getDigest()
                int r0 = r8.getDigestSize()
                byte[] r0 = new byte[r0]
                r1 = 0
                r8.doFinal(r0, r1)
                r9.write(r0)
                r9.close()
                return
        }
    }

    private class StoreEntry {
        java.lang.String alias;
        java.security.cert.Certificate[] certChain;
        java.util.Date date;
        java.lang.Object obj;
        final org.bouncycastle.jce.provider.JDKKeyStore this$0;
        int type;

        StoreEntry(org.bouncycastle.jce.provider.JDKKeyStore r8, java.lang.String r9, java.security.Key r10, char[] r11, java.security.cert.Certificate[] r12) throws java.lang.Exception {
                r7 = this;
                r7.this$0 = r8
                r7.<init>()
                java.util.Date r0 = new java.util.Date
                r0.<init>()
                r7.date = r0
                r0 = 4
                r7.type = r0
                r7.alias = r9
                r7.certChain = r12
                r9 = 20
                byte[] r4 = new byte[r9]
                java.security.SecureRandom r12 = r8.random
                long r0 = java.lang.System.currentTimeMillis()
                r12.setSeed(r0)
                java.security.SecureRandom r12 = r8.random
                r12.nextBytes(r4)
                java.security.SecureRandom r12 = r8.random
                int r12 = r12.nextInt()
                r12 = r12 & 1023(0x3ff, float:1.434E-42)
                int r5 = r12 + 1024
                java.io.ByteArrayOutputStream r12 = new java.io.ByteArrayOutputStream
                r12.<init>()
                java.io.DataOutputStream r6 = new java.io.DataOutputStream
                r6.<init>(r12)
                r6.writeInt(r9)
                r6.write(r4)
                r6.writeInt(r5)
                java.lang.String r1 = "PBEWithSHAAnd3-KeyTripleDES-CBC"
                r2 = 1
                r0 = r8
                r3 = r11
                javax.crypto.Cipher r9 = r0.makePBECipher(r1, r2, r3, r4, r5)
                javax.crypto.CipherOutputStream r11 = new javax.crypto.CipherOutputStream
                r11.<init>(r6, r9)
                java.io.DataOutputStream r9 = new java.io.DataOutputStream
                r9.<init>(r11)
                org.bouncycastle.jce.provider.JDKKeyStore.access$000(r8, r10, r9)
                r9.close()
                byte[] r8 = r12.toByteArray()
                r7.obj = r8
                return
        }

        StoreEntry(org.bouncycastle.jce.provider.JDKKeyStore r1, java.lang.String r2, java.security.Key r3, java.security.cert.Certificate[] r4) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                java.util.Date r1 = new java.util.Date
                r1.<init>()
                r0.date = r1
                r1 = 2
                r0.type = r1
                r0.alias = r2
                r0.obj = r3
                r0.certChain = r4
                return
        }

        StoreEntry(org.bouncycastle.jce.provider.JDKKeyStore r1, java.lang.String r2, java.security.cert.Certificate r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                java.util.Date r1 = new java.util.Date
                r1.<init>()
                r0.date = r1
                r1 = 1
                r0.type = r1
                r0.alias = r2
                r0.obj = r3
                r1 = 0
                r0.certChain = r1
                return
        }

        StoreEntry(org.bouncycastle.jce.provider.JDKKeyStore r1, java.lang.String r2, java.util.Date r3, int r4, java.lang.Object r5) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                java.util.Date r1 = new java.util.Date
                r1.<init>()
                r0.date = r1
                r0.alias = r2
                r0.date = r3
                r0.type = r4
                r0.obj = r5
                return
        }

        StoreEntry(org.bouncycastle.jce.provider.JDKKeyStore r1, java.lang.String r2, java.util.Date r3, int r4, java.lang.Object r5, java.security.cert.Certificate[] r6) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                java.util.Date r1 = new java.util.Date
                r1.<init>()
                r0.date = r1
                r0.alias = r2
                r0.date = r3
                r0.type = r4
                r0.obj = r5
                r0.certChain = r6
                return
        }

        StoreEntry(org.bouncycastle.jce.provider.JDKKeyStore r1, java.lang.String r2, byte[] r3, java.security.cert.Certificate[] r4) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                java.util.Date r1 = new java.util.Date
                r1.<init>()
                r0.date = r1
                r1 = 3
                r0.type = r1
                r0.alias = r2
                r0.obj = r3
                r0.certChain = r4
                return
        }

        java.lang.String getAlias() {
                r1 = this;
                java.lang.String r0 = r1.alias
                return r0
        }

        java.security.cert.Certificate[] getCertificateChain() {
                r1 = this;
                java.security.cert.Certificate[] r0 = r1.certChain
                return r0
        }

        java.util.Date getDate() {
                r1 = this;
                java.util.Date r0 = r1.date
                return r0
        }

        java.lang.Object getObject() {
                r1 = this;
                java.lang.Object r0 = r1.obj
                return r0
        }

        java.lang.Object getObject(char[] r11) throws java.security.NoSuchAlgorithmException, java.security.UnrecoverableKeyException {
                r10 = this;
                java.lang.String r0 = "no match"
                if (r11 == 0) goto L7
                int r1 = r11.length
                if (r1 != 0) goto Le
            L7:
                java.lang.Object r1 = r10.obj
                boolean r2 = r1 instanceof java.security.Key
                if (r2 == 0) goto Le
                return r1
            Le:
                int r1 = r10.type
                r2 = 4
                if (r1 != r2) goto L106
                java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream
                java.lang.Object r2 = r10.obj
                byte[] r2 = (byte[]) r2
                byte[] r2 = (byte[]) r2
                r1.<init>(r2)
                java.io.DataInputStream r2 = new java.io.DataInputStream
                r2.<init>(r1)
                int r1 = r2.readInt()     // Catch: java.lang.Exception -> L100
                byte[] r7 = new byte[r1]     // Catch: java.lang.Exception -> L100
                r2.readFully(r7)     // Catch: java.lang.Exception -> L100
                int r8 = r2.readInt()     // Catch: java.lang.Exception -> L100
                org.bouncycastle.jce.provider.JDKKeyStore r3 = r10.this$0     // Catch: java.lang.Exception -> L100
                java.lang.String r4 = "PBEWithSHAAnd3-KeyTripleDES-CBC"
                r5 = 2
                r6 = r11
                javax.crypto.Cipher r1 = r3.makePBECipher(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L100
                javax.crypto.CipherInputStream r3 = new javax.crypto.CipherInputStream     // Catch: java.lang.Exception -> L100
                r3.<init>(r2, r1)     // Catch: java.lang.Exception -> L100
                org.bouncycastle.jce.provider.JDKKeyStore r1 = r10.this$0     // Catch: java.lang.Exception -> L4b
                java.io.DataInputStream r2 = new java.io.DataInputStream     // Catch: java.lang.Exception -> L4b
                r2.<init>(r3)     // Catch: java.lang.Exception -> L4b
                java.security.Key r11 = org.bouncycastle.jce.provider.JDKKeyStore.access$100(r1, r2)     // Catch: java.lang.Exception -> L4b
                return r11
            L4b:
                java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L100
                java.lang.Object r2 = r10.obj     // Catch: java.lang.Exception -> L100
                byte[] r2 = (byte[]) r2     // Catch: java.lang.Exception -> L100
                byte[] r2 = (byte[]) r2     // Catch: java.lang.Exception -> L100
                r1.<init>(r2)     // Catch: java.lang.Exception -> L100
                java.io.DataInputStream r2 = new java.io.DataInputStream     // Catch: java.lang.Exception -> L100
                r2.<init>(r1)     // Catch: java.lang.Exception -> L100
                int r1 = r2.readInt()     // Catch: java.lang.Exception -> L100
                byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> L100
                r2.readFully(r1)     // Catch: java.lang.Exception -> L100
                int r9 = r2.readInt()     // Catch: java.lang.Exception -> L100
                org.bouncycastle.jce.provider.JDKKeyStore r3 = r10.this$0     // Catch: java.lang.Exception -> L100
                java.lang.String r4 = "BrokenPBEWithSHAAnd3-KeyTripleDES-CBC"
                r5 = 2
                r6 = r11
                r7 = r1
                r8 = r9
                javax.crypto.Cipher r3 = r3.makePBECipher(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L100
                javax.crypto.CipherInputStream r4 = new javax.crypto.CipherInputStream     // Catch: java.lang.Exception -> L100
                r4.<init>(r2, r3)     // Catch: java.lang.Exception -> L100
                org.bouncycastle.jce.provider.JDKKeyStore r2 = r10.this$0     // Catch: java.lang.Exception -> L87
                java.io.DataInputStream r3 = new java.io.DataInputStream     // Catch: java.lang.Exception -> L87
                r3.<init>(r4)     // Catch: java.lang.Exception -> L87
                java.security.Key r2 = org.bouncycastle.jce.provider.JDKKeyStore.access$100(r2, r3)     // Catch: java.lang.Exception -> L87
            L84:
                r7 = r1
                r8 = r9
                goto Lc1
            L87:
                java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L100
                java.lang.Object r2 = r10.obj     // Catch: java.lang.Exception -> L100
                byte[] r2 = (byte[]) r2     // Catch: java.lang.Exception -> L100
                byte[] r2 = (byte[]) r2     // Catch: java.lang.Exception -> L100
                r1.<init>(r2)     // Catch: java.lang.Exception -> L100
                java.io.DataInputStream r2 = new java.io.DataInputStream     // Catch: java.lang.Exception -> L100
                r2.<init>(r1)     // Catch: java.lang.Exception -> L100
                int r1 = r2.readInt()     // Catch: java.lang.Exception -> L100
                byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> L100
                r2.readFully(r1)     // Catch: java.lang.Exception -> L100
                int r9 = r2.readInt()     // Catch: java.lang.Exception -> L100
                org.bouncycastle.jce.provider.JDKKeyStore r3 = r10.this$0     // Catch: java.lang.Exception -> L100
                java.lang.String r4 = "OldPBEWithSHAAnd3-KeyTripleDES-CBC"
                r5 = 2
                r6 = r11
                r7 = r1
                r8 = r9
                javax.crypto.Cipher r3 = r3.makePBECipher(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L100
                javax.crypto.CipherInputStream r4 = new javax.crypto.CipherInputStream     // Catch: java.lang.Exception -> L100
                r4.<init>(r2, r3)     // Catch: java.lang.Exception -> L100
                org.bouncycastle.jce.provider.JDKKeyStore r2 = r10.this$0     // Catch: java.lang.Exception -> L100
                java.io.DataInputStream r3 = new java.io.DataInputStream     // Catch: java.lang.Exception -> L100
                r3.<init>(r4)     // Catch: java.lang.Exception -> L100
                java.security.Key r2 = org.bouncycastle.jce.provider.JDKKeyStore.access$100(r2, r3)     // Catch: java.lang.Exception -> L100
                goto L84
            Lc1:
                if (r2 == 0) goto Lfa
                java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L100
                r1.<init>()     // Catch: java.lang.Exception -> L100
                java.io.DataOutputStream r9 = new java.io.DataOutputStream     // Catch: java.lang.Exception -> L100
                r9.<init>(r1)     // Catch: java.lang.Exception -> L100
                int r3 = r7.length     // Catch: java.lang.Exception -> L100
                r9.writeInt(r3)     // Catch: java.lang.Exception -> L100
                r9.write(r7)     // Catch: java.lang.Exception -> L100
                r9.writeInt(r8)     // Catch: java.lang.Exception -> L100
                org.bouncycastle.jce.provider.JDKKeyStore r3 = r10.this$0     // Catch: java.lang.Exception -> L100
                java.lang.String r4 = "PBEWithSHAAnd3-KeyTripleDES-CBC"
                r5 = 1
                r6 = r11
                javax.crypto.Cipher r11 = r3.makePBECipher(r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L100
                javax.crypto.CipherOutputStream r3 = new javax.crypto.CipherOutputStream     // Catch: java.lang.Exception -> L100
                r3.<init>(r9, r11)     // Catch: java.lang.Exception -> L100
                java.io.DataOutputStream r11 = new java.io.DataOutputStream     // Catch: java.lang.Exception -> L100
                r11.<init>(r3)     // Catch: java.lang.Exception -> L100
                org.bouncycastle.jce.provider.JDKKeyStore r3 = r10.this$0     // Catch: java.lang.Exception -> L100
                org.bouncycastle.jce.provider.JDKKeyStore.access$000(r3, r2, r11)     // Catch: java.lang.Exception -> L100
                r11.close()     // Catch: java.lang.Exception -> L100
                byte[] r11 = r1.toByteArray()     // Catch: java.lang.Exception -> L100
                r10.obj = r11     // Catch: java.lang.Exception -> L100
                return r2
            Lfa:
                java.security.UnrecoverableKeyException r11 = new java.security.UnrecoverableKeyException     // Catch: java.lang.Exception -> L100
                r11.<init>(r0)     // Catch: java.lang.Exception -> L100
                throw r11     // Catch: java.lang.Exception -> L100
            L100:
                java.security.UnrecoverableKeyException r11 = new java.security.UnrecoverableKeyException
                r11.<init>(r0)
                throw r11
            L106:
                java.lang.RuntimeException r11 = new java.lang.RuntimeException
                java.lang.String r0 = "forget something!"
                r11.<init>(r0)
                throw r11
        }

        int getType() {
                r1 = this;
                int r0 = r1.type
                return r0
        }
    }

    public JDKKeyStore() {
            r1 = this;
            r1.<init>()
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r1.table = r0
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
            r1.random = r0
            return
    }

    static void access$000(org.bouncycastle.jce.provider.JDKKeyStore r0, java.security.Key r1, java.io.DataOutputStream r2) throws java.io.IOException {
            r0.encodeKey(r1, r2)
            return
    }

    static java.security.Key access$100(org.bouncycastle.jce.provider.JDKKeyStore r0, java.io.DataInputStream r1) throws java.io.IOException {
            java.security.Key r0 = r0.decodeKey(r1)
            return r0
    }

    private java.security.cert.Certificate decodeCertificate(java.io.DataInputStream r3) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = r3.readUTF()
            int r1 = r3.readInt()
            byte[] r1 = new byte[r1]
            r3.readFully(r1)
            java.lang.String r3 = "BC"
            java.security.cert.CertificateFactory r3 = java.security.cert.CertificateFactory.getInstance(r0, r3)     // Catch: java.security.cert.CertificateException -> L1d java.security.NoSuchProviderException -> L28
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.security.cert.CertificateException -> L1d java.security.NoSuchProviderException -> L28
            r0.<init>(r1)     // Catch: java.security.cert.CertificateException -> L1d java.security.NoSuchProviderException -> L28
            java.security.cert.Certificate r3 = r3.generateCertificate(r0)     // Catch: java.security.cert.CertificateException -> L1d java.security.NoSuchProviderException -> L28
            return r3
        L1d:
            r3 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r3 = r3.toString()
            r0.<init>(r3)
            throw r0
        L28:
            r3 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r3 = r3.toString()
            r0.<init>(r3)
            throw r0
    }

    private java.security.Key decodeKey(java.io.DataInputStream r6) throws java.io.IOException {
            r5 = this;
            int r0 = r6.read()
            java.lang.String r1 = r6.readUTF()
            java.lang.String r2 = r6.readUTF()
            int r3 = r6.readInt()
            byte[] r3 = new byte[r3]
            r6.readFully(r3)
            java.lang.String r6 = "PKCS#8"
            boolean r6 = r1.equals(r6)
            java.lang.String r4 = " not recognised!"
            if (r6 != 0) goto L67
            java.lang.String r6 = "PKCS8"
            boolean r6 = r1.equals(r6)
            if (r6 == 0) goto L28
            goto L67
        L28:
            java.lang.String r6 = "X.509"
            boolean r6 = r1.equals(r6)
            if (r6 != 0) goto L61
            java.lang.String r6 = "X509"
            boolean r6 = r1.equals(r6)
            if (r6 == 0) goto L39
            goto L61
        L39:
            java.lang.String r6 = "RAW"
            boolean r6 = r1.equals(r6)
            if (r6 == 0) goto L47
            javax.crypto.spec.SecretKeySpec r6 = new javax.crypto.spec.SecretKeySpec
            r6.<init>(r3, r2)
            return r6
        L47:
            java.io.IOException r6 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Key format "
            r0.append(r2)
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L61:
            java.security.spec.X509EncodedKeySpec r6 = new java.security.spec.X509EncodedKeySpec
            r6.<init>(r3)
            goto L6c
        L67:
            java.security.spec.PKCS8EncodedKeySpec r6 = new java.security.spec.PKCS8EncodedKeySpec
            r6.<init>(r3)
        L6c:
            java.lang.String r1 = "BC"
            if (r0 == 0) goto La4
            r3 = 1
            if (r0 == r3) goto L9b
            r3 = 2
            if (r0 != r3) goto L7f
            javax.crypto.SecretKeyFactory r0 = javax.crypto.SecretKeyFactory.getInstance(r2, r1)     // Catch: java.lang.Exception -> L99
            javax.crypto.SecretKey r6 = r0.generateSecret(r6)     // Catch: java.lang.Exception -> L99
            return r6
        L7f:
            java.io.IOException r6 = new java.io.IOException     // Catch: java.lang.Exception -> L99
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L99
            r1.<init>()     // Catch: java.lang.Exception -> L99
            java.lang.String r2 = "Key type "
            r1.append(r2)     // Catch: java.lang.Exception -> L99
            r1.append(r0)     // Catch: java.lang.Exception -> L99
            r1.append(r4)     // Catch: java.lang.Exception -> L99
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L99
            r6.<init>(r0)     // Catch: java.lang.Exception -> L99
            throw r6     // Catch: java.lang.Exception -> L99
        L99:
            r6 = move-exception
            goto Lad
        L9b:
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r2, r1)     // Catch: java.lang.Exception -> L99
            java.security.PublicKey r6 = r0.generatePublic(r6)     // Catch: java.lang.Exception -> L99
            return r6
        La4:
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r2, r1)     // Catch: java.lang.Exception -> L99
            java.security.PrivateKey r6 = r0.generatePrivate(r6)     // Catch: java.lang.Exception -> L99
            return r6
        Lad:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Exception creating key: "
            r1.append(r2)
            java.lang.String r6 = r6.toString()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
    }

    private void encodeCertificate(java.security.cert.Certificate r2, java.io.DataOutputStream r3) throws java.io.IOException {
            r1 = this;
            byte[] r0 = r2.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L13
            java.lang.String r2 = r2.getType()     // Catch: java.security.cert.CertificateEncodingException -> L13
            r3.writeUTF(r2)     // Catch: java.security.cert.CertificateEncodingException -> L13
            int r2 = r0.length     // Catch: java.security.cert.CertificateEncodingException -> L13
            r3.writeInt(r2)     // Catch: java.security.cert.CertificateEncodingException -> L13
            r3.write(r0)     // Catch: java.security.cert.CertificateEncodingException -> L13
            return
        L13:
            r2 = move-exception
            java.io.IOException r3 = new java.io.IOException
            java.lang.String r2 = r2.toString()
            r3.<init>(r2)
            throw r3
    }

    private void encodeKey(java.security.Key r3, java.io.DataOutputStream r4) throws java.io.IOException {
            r2 = this;
            byte[] r0 = r3.getEncoded()
            boolean r1 = r3 instanceof java.security.PrivateKey
            if (r1 == 0) goto Ld
            r1 = 0
        L9:
            r4.write(r1)
            goto L15
        Ld:
            boolean r1 = r3 instanceof java.security.PublicKey
            if (r1 == 0) goto L13
            r1 = 1
            goto L9
        L13:
            r1 = 2
            goto L9
        L15:
            java.lang.String r1 = r3.getFormat()
            r4.writeUTF(r1)
            java.lang.String r3 = r3.getAlgorithm()
            r4.writeUTF(r3)
            int r3 = r0.length
            r4.writeInt(r3)
            r4.write(r0)
            return
    }

    @Override
    public java.util.Enumeration engineAliases() {
            r1 = this;
            java.util.Hashtable r0 = r1.table
            java.util.Enumeration r0 = r0.keys()
            return r0
    }

    @Override
    public boolean engineContainsAlias(java.lang.String r2) {
            r1 = this;
            java.util.Hashtable r0 = r1.table
            java.lang.Object r2 = r0.get(r2)
            if (r2 == 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    @Override
    public void engineDeleteEntry(java.lang.String r4) throws java.security.KeyStoreException {
            r3 = this;
            java.util.Hashtable r0 = r3.table
            java.lang.Object r0 = r0.get(r4)
            if (r0 == 0) goto Le
            java.util.Hashtable r0 = r3.table
            r0.remove(r4)
            return
        Le:
            java.security.KeyStoreException r0 = new java.security.KeyStoreException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "no such entry as "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public java.security.cert.Certificate engineGetCertificate(java.lang.String r3) {
            r2 = this;
            java.util.Hashtable r0 = r2.table
            java.lang.Object r3 = r0.get(r3)
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r3 = (org.bouncycastle.jce.provider.JDKKeyStore.StoreEntry) r3
            if (r3 == 0) goto L22
            int r0 = r3.getType()
            r1 = 1
            if (r0 != r1) goto L18
            java.lang.Object r3 = r3.getObject()
            java.security.cert.Certificate r3 = (java.security.cert.Certificate) r3
            return r3
        L18:
            java.security.cert.Certificate[] r3 = r3.getCertificateChain()
            if (r3 == 0) goto L22
            r0 = 0
            r3 = r3[r0]
            return r3
        L22:
            r3 = 0
            return r3
    }

    @Override
    public java.lang.String engineGetCertificateAlias(java.security.cert.Certificate r5) {
            r4 = this;
            java.util.Hashtable r0 = r4.table
            java.util.Enumeration r0 = r0.elements()
        L6:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r0.nextElement()
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r1 = (org.bouncycastle.jce.provider.JDKKeyStore.StoreEntry) r1
            java.lang.Object r2 = r1.getObject()
            boolean r2 = r2 instanceof java.security.cert.Certificate
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r1.getObject()
            java.security.cert.Certificate r2 = (java.security.cert.Certificate) r2
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto L6
            java.lang.String r5 = r1.getAlias()
            return r5
        L2b:
            java.security.cert.Certificate[] r2 = r1.getCertificateChain()
            if (r2 == 0) goto L6
            r3 = 0
            r2 = r2[r3]
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto L6
            java.lang.String r5 = r1.getAlias()
            return r5
        L3f:
            r5 = 0
            return r5
    }

    @Override
    public java.security.cert.Certificate[] engineGetCertificateChain(java.lang.String r2) {
            r1 = this;
            java.util.Hashtable r0 = r1.table
            java.lang.Object r2 = r0.get(r2)
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r2 = (org.bouncycastle.jce.provider.JDKKeyStore.StoreEntry) r2
            if (r2 == 0) goto Lf
            java.security.cert.Certificate[] r2 = r2.getCertificateChain()
            return r2
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public java.util.Date engineGetCreationDate(java.lang.String r2) {
            r1 = this;
            java.util.Hashtable r0 = r1.table
            java.lang.Object r2 = r0.get(r2)
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r2 = (org.bouncycastle.jce.provider.JDKKeyStore.StoreEntry) r2
            if (r2 == 0) goto Lf
            java.util.Date r2 = r2.getDate()
            return r2
        Lf:
            r2 = 0
            return r2
    }

    @Override
    public java.security.Key engineGetKey(java.lang.String r3, char[] r4) throws java.security.NoSuchAlgorithmException, java.security.UnrecoverableKeyException {
            r2 = this;
            java.util.Hashtable r0 = r2.table
            java.lang.Object r3 = r0.get(r3)
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r3 = (org.bouncycastle.jce.provider.JDKKeyStore.StoreEntry) r3
            if (r3 == 0) goto L19
            int r0 = r3.getType()
            r1 = 1
            if (r0 != r1) goto L12
            goto L19
        L12:
            java.lang.Object r3 = r3.getObject(r4)
            java.security.Key r3 = (java.security.Key) r3
            return r3
        L19:
            r3 = 0
            return r3
    }

    @Override
    public boolean engineIsCertificateEntry(java.lang.String r2) {
            r1 = this;
            java.util.Hashtable r0 = r1.table
            java.lang.Object r2 = r0.get(r2)
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r2 = (org.bouncycastle.jce.provider.JDKKeyStore.StoreEntry) r2
            if (r2 == 0) goto L12
            int r2 = r2.getType()
            r0 = 1
            if (r2 != r0) goto L12
            return r0
        L12:
            r2 = 0
            return r2
    }

    @Override
    public boolean engineIsKeyEntry(java.lang.String r2) {
            r1 = this;
            java.util.Hashtable r0 = r1.table
            java.lang.Object r2 = r0.get(r2)
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r2 = (org.bouncycastle.jce.provider.JDKKeyStore.StoreEntry) r2
            if (r2 == 0) goto L12
            int r2 = r2.getType()
            r0 = 1
            if (r2 == r0) goto L12
            return r0
        L12:
            r2 = 0
            return r2
    }

    @Override
    public void engineLoad(java.io.InputStream r7, char[] r8) throws java.io.IOException {
            r6 = this;
            java.util.Hashtable r0 = r6.table
            r0.clear()
            if (r7 != 0) goto L8
            return
        L8:
            java.io.DataInputStream r0 = new java.io.DataInputStream
            r0.<init>(r7)
            int r7 = r0.readInt()
            r1 = 1
            if (r7 == r1) goto L1f
            if (r7 != 0) goto L17
            goto L1f
        L17:
            java.io.IOException r7 = new java.io.IOException
            java.lang.String r8 = "Wrong version of key store."
            r7.<init>(r8)
            throw r7
        L1f:
            int r7 = r0.readInt()
            byte[] r7 = new byte[r7]
            r0.readFully(r7)
            int r1 = r0.readInt()
            org.bouncycastle.crypto.macs.HMac r2 = new org.bouncycastle.crypto.macs.HMac
            org.bouncycastle.crypto.digests.SHA1Digest r3 = new org.bouncycastle.crypto.digests.SHA1Digest
            r3.<init>()
            r2.<init>(r3)
            org.bouncycastle.crypto.io.MacInputStream r3 = new org.bouncycastle.crypto.io.MacInputStream
            r3.<init>(r0, r2)
            org.bouncycastle.crypto.generators.PKCS12ParametersGenerator r4 = new org.bouncycastle.crypto.generators.PKCS12ParametersGenerator
            org.bouncycastle.crypto.digests.SHA1Digest r5 = new org.bouncycastle.crypto.digests.SHA1Digest
            r5.<init>()
            r4.<init>(r5)
            byte[] r5 = org.bouncycastle.crypto.PBEParametersGenerator.PKCS12PasswordToBytes(r8)
            r4.init(r5, r7, r1)
            int r7 = r2.getMacSize()
            org.bouncycastle.crypto.CipherParameters r7 = r4.generateDerivedMacParameters(r7)
            r2.init(r7)
            r7 = 0
            r1 = 0
        L59:
            int r4 = r5.length
            if (r1 == r4) goto L61
            r5[r1] = r7
            int r1 = r1 + 1
            goto L59
        L61:
            r6.loadStore(r3)
            int r1 = r2.getMacSize()
            byte[] r1 = new byte[r1]
            int r3 = r2.getMacSize()
            byte[] r4 = new byte[r3]
            r2.doFinal(r1, r7)
        L73:
            if (r7 == r3) goto L7f
            int r2 = r0.read()
            byte r2 = (byte) r2
            r4[r7] = r2
            int r7 = r7 + 1
            goto L73
        L7f:
            if (r8 == 0) goto L98
            int r7 = r8.length
            if (r7 == 0) goto L98
            boolean r7 = r6.isSameAs(r1, r4)
            if (r7 == 0) goto L8b
            goto L98
        L8b:
            java.util.Hashtable r7 = r6.table
            r7.clear()
            java.io.IOException r7 = new java.io.IOException
            java.lang.String r8 = "KeyStore integrity check failed."
            r7.<init>(r8)
            throw r7
        L98:
            return
    }

    @Override
    public void engineSetCertificateEntry(java.lang.String r3, java.security.cert.Certificate r4) throws java.security.KeyStoreException {
            r2 = this;
            java.util.Hashtable r0 = r2.table
            java.lang.Object r0 = r0.get(r3)
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r0 = (org.bouncycastle.jce.provider.JDKKeyStore.StoreEntry) r0
            if (r0 == 0) goto L29
            int r0 = r0.getType()
            r1 = 1
            if (r0 != r1) goto L12
            goto L29
        L12:
            java.security.KeyStoreException r4 = new java.security.KeyStoreException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "key store already has a key entry with alias "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        L29:
            java.util.Hashtable r0 = r2.table
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r1 = new org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry
            r1.<init>(r2, r3, r4)
            r0.put(r3, r1)
            return
    }

    @Override
    public void engineSetKeyEntry(java.lang.String r9, java.security.Key r10, char[] r11, java.security.cert.Certificate[] r12) throws java.security.KeyStoreException {
            r8 = this;
            boolean r0 = r10 instanceof java.security.PrivateKey
            if (r0 == 0) goto Lf
            if (r12 == 0) goto L7
            goto Lf
        L7:
            java.security.KeyStoreException r9 = new java.security.KeyStoreException
            java.lang.String r10 = "no certificate chain for private key"
            r9.<init>(r10)
            throw r9
        Lf:
            java.util.Hashtable r0 = r8.table     // Catch: java.lang.Exception -> L20
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r7 = new org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry     // Catch: java.lang.Exception -> L20
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L20
            r0.put(r9, r7)     // Catch: java.lang.Exception -> L20
            return
        L20:
            r9 = move-exception
            java.security.KeyStoreException r10 = new java.security.KeyStoreException
            java.lang.String r9 = r9.toString()
            r10.<init>(r9)
            throw r10
    }

    @Override
    public void engineSetKeyEntry(java.lang.String r3, byte[] r4, java.security.cert.Certificate[] r5) throws java.security.KeyStoreException {
            r2 = this;
            java.util.Hashtable r0 = r2.table
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r1 = new org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry
            r1.<init>(r2, r3, r4, r5)
            r0.put(r3, r1)
            return
    }

    @Override
    public int engineSize() {
            r1 = this;
            java.util.Hashtable r0 = r1.table
            int r0 = r0.size()
            return r0
    }

    @Override
    public void engineStore(java.io.OutputStream r7, char[] r8) throws java.io.IOException {
            r6 = this;
            java.io.DataOutputStream r0 = new java.io.DataOutputStream
            r0.<init>(r7)
            r7 = 20
            byte[] r1 = new byte[r7]
            java.security.SecureRandom r2 = r6.random
            int r2 = r2.nextInt()
            r2 = r2 & 1023(0x3ff, float:1.434E-42)
            int r2 = r2 + 1024
            java.security.SecureRandom r3 = r6.random
            r3.nextBytes(r1)
            r3 = 1
            r0.writeInt(r3)
            r0.writeInt(r7)
            r0.write(r1)
            r0.writeInt(r2)
            org.bouncycastle.crypto.macs.HMac r7 = new org.bouncycastle.crypto.macs.HMac
            org.bouncycastle.crypto.digests.SHA1Digest r3 = new org.bouncycastle.crypto.digests.SHA1Digest
            r3.<init>()
            r7.<init>(r3)
            org.bouncycastle.crypto.io.MacOutputStream r3 = new org.bouncycastle.crypto.io.MacOutputStream
            r3.<init>(r0, r7)
            org.bouncycastle.crypto.generators.PKCS12ParametersGenerator r4 = new org.bouncycastle.crypto.generators.PKCS12ParametersGenerator
            org.bouncycastle.crypto.digests.SHA1Digest r5 = new org.bouncycastle.crypto.digests.SHA1Digest
            r5.<init>()
            r4.<init>(r5)
            byte[] r8 = org.bouncycastle.crypto.PBEParametersGenerator.PKCS12PasswordToBytes(r8)
            r4.init(r8, r1, r2)
            int r1 = r7.getMacSize()
            org.bouncycastle.crypto.CipherParameters r1 = r4.generateDerivedMacParameters(r1)
            r7.init(r1)
            r1 = 0
            r2 = 0
        L52:
            int r4 = r8.length
            if (r2 == r4) goto L5a
            r8[r2] = r1
            int r2 = r2 + 1
            goto L52
        L5a:
            r6.saveStore(r3)
            int r8 = r7.getMacSize()
            byte[] r8 = new byte[r8]
            r7.doFinal(r8, r1)
            r0.write(r8)
            r0.close()
            return
    }

    protected boolean isSameAs(byte[] r5, byte[] r6) {
            r4 = this;
            int r0 = r5.length
            int r1 = r6.length
            r2 = 0
            if (r0 == r1) goto L6
            return r2
        L6:
            r0 = 0
        L7:
            int r1 = r5.length
            if (r0 == r1) goto L14
            r1 = r5[r0]
            r3 = r6[r0]
            if (r1 == r3) goto L11
            return r2
        L11:
            int r0 = r0 + 1
            goto L7
        L14:
            r5 = 1
            return r5
    }

    protected void loadStore(java.io.InputStream r14) throws java.io.IOException {
            r13 = this;
            java.io.DataInputStream r0 = new java.io.DataInputStream
            r0.<init>(r14)
            int r14 = r0.read()
            r5 = r14
        La:
            if (r5 <= 0) goto L84
            java.lang.String r14 = r0.readUTF()
            java.util.Date r9 = new java.util.Date
            long r1 = r0.readLong()
            r9.<init>(r1)
            int r1 = r0.readInt()
            r2 = 0
            if (r1 == 0) goto L2e
            java.security.cert.Certificate[] r2 = new java.security.cert.Certificate[r1]
            r3 = 0
        L23:
            if (r3 == r1) goto L2e
            java.security.cert.Certificate r4 = r13.decodeCertificate(r0)
            r2[r3] = r4
            int r3 = r3 + 1
            goto L23
        L2e:
            r12 = r2
            r1 = 1
            if (r5 == r1) goto L6d
            r1 = 2
            if (r5 == r1) goto L5d
            r1 = 3
            if (r5 == r1) goto L44
            r1 = 4
            if (r5 != r1) goto L3c
            goto L44
        L3c:
            java.lang.RuntimeException r14 = new java.lang.RuntimeException
            java.lang.String r0 = "Unknown object type in store."
            r14.<init>(r0)
            throw r14
        L44:
            int r1 = r0.readInt()
            byte[] r6 = new byte[r1]
            r0.readFully(r6)
            java.util.Hashtable r8 = r13.table
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r10 = new org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry
            r1 = r10
            r2 = r13
            r3 = r14
            r4 = r9
            r7 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r8.put(r14, r10)
            goto L7f
        L5d:
            java.security.Key r11 = r13.decodeKey(r0)
            java.util.Hashtable r1 = r13.table
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r2 = new org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry
            r10 = 2
            r6 = r2
            r7 = r13
            r8 = r14
            r6.<init>(r7, r8, r9, r10, r11, r12)
            goto L7c
        L6d:
            java.security.cert.Certificate r11 = r13.decodeCertificate(r0)
            java.util.Hashtable r1 = r13.table
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r2 = new org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry
            r10 = 1
            r6 = r2
            r7 = r13
            r8 = r14
            r6.<init>(r7, r8, r9, r10, r11)
        L7c:
            r1.put(r14, r2)
        L7f:
            int r5 = r0.read()
            goto La
        L84:
            return
    }

    protected javax.crypto.Cipher makePBECipher(java.lang.String r4, int r5, char[] r6, byte[] r7, int r8) throws java.io.IOException {
            r3 = this;
            java.lang.String r0 = "BC"
            javax.crypto.spec.PBEKeySpec r1 = new javax.crypto.spec.PBEKeySpec     // Catch: java.lang.Exception -> L1c
            r1.<init>(r6)     // Catch: java.lang.Exception -> L1c
            javax.crypto.SecretKeyFactory r6 = javax.crypto.SecretKeyFactory.getInstance(r4, r0)     // Catch: java.lang.Exception -> L1c
            javax.crypto.spec.PBEParameterSpec r2 = new javax.crypto.spec.PBEParameterSpec     // Catch: java.lang.Exception -> L1c
            r2.<init>(r7, r8)     // Catch: java.lang.Exception -> L1c
            javax.crypto.Cipher r4 = javax.crypto.Cipher.getInstance(r4, r0)     // Catch: java.lang.Exception -> L1c
            javax.crypto.SecretKey r6 = r6.generateSecret(r1)     // Catch: java.lang.Exception -> L1c
            r4.init(r5, r6, r2)     // Catch: java.lang.Exception -> L1c
            return r4
        L1c:
            r4 = move-exception
            java.io.IOException r5 = new java.io.IOException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Error initialising store of key store: "
            r6.append(r7)
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            r5.<init>(r4)
            throw r5
    }

    protected void saveStore(java.io.OutputStream r6) throws java.io.IOException {
            r5 = this;
            java.util.Hashtable r0 = r5.table
            java.util.Enumeration r0 = r0.elements()
            java.io.DataOutputStream r1 = new java.io.DataOutputStream
            r1.<init>(r6)
        Lb:
            boolean r6 = r0.hasMoreElements()
            r2 = 0
            if (r6 == 0) goto L87
            java.lang.Object r6 = r0.nextElement()
            org.bouncycastle.jce.provider.JDKKeyStore$StoreEntry r6 = (org.bouncycastle.jce.provider.JDKKeyStore.StoreEntry) r6
            int r3 = r6.getType()
            r1.write(r3)
            java.lang.String r3 = r6.getAlias()
            r1.writeUTF(r3)
            java.util.Date r3 = r6.getDate()
            long r3 = r3.getTime()
            r1.writeLong(r3)
            java.security.cert.Certificate[] r3 = r6.getCertificateChain()
            if (r3 != 0) goto L3b
            r1.writeInt(r2)
            goto L4a
        L3b:
            int r4 = r3.length
            r1.writeInt(r4)
        L3f:
            int r4 = r3.length
            if (r2 == r4) goto L4a
            r4 = r3[r2]
            r5.encodeCertificate(r4, r1)
            int r2 = r2 + 1
            goto L3f
        L4a:
            int r2 = r6.getType()
            r3 = 1
            if (r2 == r3) goto L7d
            r3 = 2
            if (r2 == r3) goto L73
            r3 = 3
            if (r2 == r3) goto L63
            r3 = 4
            if (r2 != r3) goto L5b
            goto L63
        L5b:
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.String r0 = "Unknown object type in store."
            r6.<init>(r0)
            throw r6
        L63:
            java.lang.Object r6 = r6.getObject()
            byte[] r6 = (byte[]) r6
            byte[] r6 = (byte[]) r6
            int r2 = r6.length
            r1.writeInt(r2)
            r1.write(r6)
            goto Lb
        L73:
            java.lang.Object r6 = r6.getObject()
            java.security.Key r6 = (java.security.Key) r6
            r5.encodeKey(r6, r1)
            goto Lb
        L7d:
            java.lang.Object r6 = r6.getObject()
            java.security.cert.Certificate r6 = (java.security.cert.Certificate) r6
            r5.encodeCertificate(r6, r1)
            goto Lb
        L87:
            r1.write(r2)
            return
    }

    @Override
    public void setRandom(java.security.SecureRandom r1) {
            r0 = this;
            r0.random = r1
            return
    }
}
