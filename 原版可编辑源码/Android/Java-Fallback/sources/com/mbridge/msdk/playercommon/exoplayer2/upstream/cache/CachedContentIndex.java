package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

class CachedContentIndex {
    public static final java.lang.String FILE_NAME = "cached_content_index.exi";
    private static final int FLAG_ENCRYPTED_INDEX = 1;
    private static final int VERSION = 2;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile atomicFile;
    private com.mbridge.msdk.playercommon.exoplayer2.util.ReusableBufferedOutputStream bufferedOutputStream;
    private boolean changed;
    private final javax.crypto.Cipher cipher;
    private final boolean encrypt;
    private final android.util.SparseArray<java.lang.String> idToKey;
    private final java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> keyToContent;
    private final javax.crypto.spec.SecretKeySpec secretKeySpec;

    public CachedContentIndex(java.io.File r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public CachedContentIndex(java.io.File r2, byte[] r3) {
            r1 = this;
            if (r3 == 0) goto L4
            r0 = 1
            goto L5
        L4:
            r0 = 0
        L5:
            r1.<init>(r2, r3, r0)
            return
    }

    public CachedContentIndex(java.io.File r3, byte[] r4, boolean r5) {
            r2 = this;
            r2.<init>()
            r2.encrypt = r5
            r0 = 1
            if (r4 == 0) goto L2b
            int r5 = r4.length
            r1 = 16
            if (r5 != r1) goto Le
            goto Lf
        Le:
            r0 = 0
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            javax.crypto.Cipher r5 = getCipher()     // Catch: javax.crypto.NoSuchPaddingException -> L22 java.security.NoSuchAlgorithmException -> L24
            r2.cipher = r5     // Catch: javax.crypto.NoSuchPaddingException -> L22 java.security.NoSuchAlgorithmException -> L24
            javax.crypto.spec.SecretKeySpec r5 = new javax.crypto.spec.SecretKeySpec     // Catch: javax.crypto.NoSuchPaddingException -> L22 java.security.NoSuchAlgorithmException -> L24
            java.lang.String r0 = "AES"
            r5.<init>(r4, r0)     // Catch: javax.crypto.NoSuchPaddingException -> L22 java.security.NoSuchAlgorithmException -> L24
            r2.secretKeySpec = r5     // Catch: javax.crypto.NoSuchPaddingException -> L22 java.security.NoSuchAlgorithmException -> L24
            goto L35
        L22:
            r3 = move-exception
            goto L25
        L24:
            r3 = move-exception
        L25:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            r4.<init>(r3)
            throw r4
        L2b:
            r4 = r5 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r4)
            r4 = 0
            r2.cipher = r4
            r2.secretKeySpec = r4
        L35:
            java.util.HashMap r4 = new java.util.HashMap
            r4.<init>()
            r2.keyToContent = r4
            android.util.SparseArray r4 = new android.util.SparseArray
            r4.<init>()
            r2.idToKey = r4
            com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile r4 = new com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile
            java.io.File r5 = new java.io.File
            java.lang.String r0 = "cached_content_index.exi"
            r5.<init>(r3, r0)
            r4.<init>(r5)
            r2.atomicFile = r4
            return
    }

    private void add(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> r0 = r2.keyToContent
            java.lang.String r1 = r3.key
            r0.put(r1, r3)
            android.util.SparseArray<java.lang.String> r0 = r2.idToKey
            int r1 = r3.id
            java.lang.String r3 = r3.key
            r0.put(r1, r3)
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent addNew(java.lang.String r3) {
            r2 = this;
            android.util.SparseArray<java.lang.String> r0 = r2.idToKey
            int r0 = getNewId(r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent
            r1.<init>(r0, r3)
            r2.add(r1)
            r3 = 1
            r2.changed = r3
            return r1
    }

    private static javax.crypto.Cipher getCipher() throws javax.crypto.NoSuchPaddingException, java.security.NoSuchAlgorithmException {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            java.lang.String r1 = "AES/CBC/PKCS5PADDING"
            r2 = 18
            if (r0 != r2) goto Lf
            java.lang.String r0 = "BC"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r1, r0)     // Catch: java.lang.Throwable -> Lf
            return r0
        Lf:
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r1)
            return r0
    }

    public static int getNewId(android.util.SparseArray<java.lang.String> r3) {
            int r0 = r3.size()
            r1 = 0
            if (r0 != 0) goto L9
            r2 = r1
            goto L11
        L9:
            int r2 = r0 + (-1)
            int r2 = r3.keyAt(r2)
            int r2 = r2 + 1
        L11:
            if (r2 >= 0) goto L20
        L13:
            if (r1 >= r0) goto L1f
            int r2 = r3.keyAt(r1)
            if (r1 == r2) goto L1c
            goto L1f
        L1c:
            int r1 = r1 + 1
            goto L13
        L1f:
            r2 = r1
        L20:
            return r2
    }

    private boolean readFile() {
            r9 = this;
            r0 = 0
            r1 = 0
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L98 java.io.IOException -> L9f
            com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile r3 = r9.atomicFile     // Catch: java.lang.Throwable -> L98 java.io.IOException -> L9f
            java.io.InputStream r3 = r3.openRead()     // Catch: java.lang.Throwable -> L98 java.io.IOException -> L9f
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L98 java.io.IOException -> L9f
            java.io.DataInputStream r3 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L98 java.io.IOException -> L9f
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L98 java.io.IOException -> L9f
            int r1 = r3.readInt()     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            if (r1 < 0) goto L8f
            r4 = 2
            if (r1 <= r4) goto L1d
            goto L8f
        L1d:
            int r5 = r3.readInt()     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r6 = 1
            r5 = r5 & r6
            if (r5 == 0) goto L57
            javax.crypto.Cipher r5 = r9.cipher     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            if (r5 != 0) goto L2d
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r3)
            return r0
        L2d:
            r5 = 16
            byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r3.readFully(r5)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            javax.crypto.spec.IvParameterSpec r7 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r7.<init>(r5)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            javax.crypto.Cipher r5 = r9.cipher     // Catch: java.security.InvalidAlgorithmParameterException -> L4e java.security.InvalidKeyException -> L50 java.lang.Throwable -> L93 java.io.IOException -> L96
            javax.crypto.spec.SecretKeySpec r8 = r9.secretKeySpec     // Catch: java.security.InvalidAlgorithmParameterException -> L4e java.security.InvalidKeyException -> L50 java.lang.Throwable -> L93 java.io.IOException -> L96
            r5.init(r4, r8, r7)     // Catch: java.security.InvalidAlgorithmParameterException -> L4e java.security.InvalidKeyException -> L50 java.lang.Throwable -> L93 java.io.IOException -> L96
            java.io.DataInputStream r4 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            javax.crypto.CipherInputStream r5 = new javax.crypto.CipherInputStream     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            javax.crypto.Cipher r7 = r9.cipher     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r5.<init>(r2, r7)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r3 = r4
            goto L5d
        L4e:
            r1 = move-exception
            goto L51
        L50:
            r1 = move-exception
        L51:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            throw r2     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
        L57:
            boolean r2 = r9.encrypt     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            if (r2 == 0) goto L5d
            r9.changed = r6     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
        L5d:
            int r2 = r3.readInt()     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r4 = r0
            r5 = r4
        L63:
            if (r4 >= r2) goto L74
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r7 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent.readFromStream(r1, r3)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r9.add(r7)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            int r7 = r7.headerHashCode(r1)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            int r5 = r5 + r7
            int r4 = r4 + 1
            goto L63
        L74:
            int r1 = r3.readInt()     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            int r2 = r3.read()     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r4 = -1
            if (r2 != r4) goto L81
            r2 = r6
            goto L82
        L81:
            r2 = r0
        L82:
            if (r1 != r5) goto L8b
            if (r2 != 0) goto L87
            goto L8b
        L87:
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r3)
            return r6
        L8b:
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r3)
            return r0
        L8f:
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r3)
            return r0
        L93:
            r0 = move-exception
            r1 = r3
            goto L99
        L96:
            r1 = r3
            goto L9f
        L98:
            r0 = move-exception
        L99:
            if (r1 == 0) goto L9e
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r1)
        L9e:
            throw r0
        L9f:
            if (r1 == 0) goto La4
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r1)
        La4:
            return r0
    }

    private void writeFile() throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r9 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile r1 = r9.atomicFile     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            java.io.OutputStream r1 = r1.startWrite()     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            com.mbridge.msdk.playercommon.exoplayer2.util.ReusableBufferedOutputStream r2 = r9.bufferedOutputStream     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            if (r2 != 0) goto L13
            com.mbridge.msdk.playercommon.exoplayer2.util.ReusableBufferedOutputStream r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ReusableBufferedOutputStream     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            r2.<init>(r1)     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            r9.bufferedOutputStream = r2     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            goto L18
        L13:
            com.mbridge.msdk.playercommon.exoplayer2.util.ReusableBufferedOutputStream r2 = r9.bufferedOutputStream     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            r2.reset(r1)     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
        L18:
            java.io.DataOutputStream r1 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            com.mbridge.msdk.playercommon.exoplayer2.util.ReusableBufferedOutputStream r2 = r9.bufferedOutputStream     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            r1.<init>(r2)     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            r2 = 2
            r1.writeInt(r2)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            boolean r3 = r9.encrypt     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r4 = 1
            r5 = 0
            if (r3 == 0) goto L2b
            r3 = r4
            goto L2c
        L2b:
            r3 = r5
        L2c:
            r1.writeInt(r3)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            boolean r3 = r9.encrypt     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            if (r3 == 0) goto L6a
            r3 = 16
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            java.util.Random r6 = new java.util.Random     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r6.<init>()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r6.nextBytes(r3)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r1.write(r3)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            javax.crypto.spec.IvParameterSpec r6 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r6.<init>(r3)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            javax.crypto.Cipher r3 = r9.cipher     // Catch: java.security.InvalidAlgorithmParameterException -> L61 java.security.InvalidKeyException -> L63 java.lang.Throwable -> L9e java.io.IOException -> La3
            javax.crypto.spec.SecretKeySpec r7 = r9.secretKeySpec     // Catch: java.security.InvalidAlgorithmParameterException -> L61 java.security.InvalidKeyException -> L63 java.lang.Throwable -> L9e java.io.IOException -> La3
            r3.init(r4, r7, r6)     // Catch: java.security.InvalidAlgorithmParameterException -> L61 java.security.InvalidKeyException -> L63 java.lang.Throwable -> L9e java.io.IOException -> La3
            r1.flush()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            java.io.DataOutputStream r3 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            javax.crypto.CipherOutputStream r4 = new javax.crypto.CipherOutputStream     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            com.mbridge.msdk.playercommon.exoplayer2.util.ReusableBufferedOutputStream r6 = r9.bufferedOutputStream     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            javax.crypto.Cipher r7 = r9.cipher     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r4.<init>(r6, r7)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r1 = r3
            goto L6a
        L61:
            r0 = move-exception
            goto L64
        L63:
            r0 = move-exception
        L64:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            throw r2     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
        L6a:
            java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> r3 = r9.keyToContent     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r1.writeInt(r3)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> r3 = r9.keyToContent     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            java.util.Collection r3 = r3.values()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
        L7d:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            if (r4 == 0) goto L92
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r4 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent) r4     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r4.writeToStream(r1)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            int r4 = r4.headerHashCode(r2)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            int r5 = r5 + r4
            goto L7d
        L92:
            r1.writeInt(r5)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile r2 = r9.atomicFile     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r2.endWrite(r1)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
            return
        L9e:
            r0 = move-exception
            r8 = r1
            r1 = r0
            r0 = r8
            goto Lb1
        La3:
            r0 = move-exception
            r8 = r1
            r1 = r0
            r0 = r8
            goto Lab
        La8:
            r1 = move-exception
            goto Lb1
        Laa:
            r1 = move-exception
        Lab:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$CacheException r2 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache$CacheException     // Catch: java.lang.Throwable -> La8
            r2.<init>(r1)     // Catch: java.lang.Throwable -> La8
            throw r2     // Catch: java.lang.Throwable -> La8
        Lb1:
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
            throw r1
    }

    public void applyContentMetadataMutations(java.lang.String r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r2) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r1 = r0.getOrAdd(r1)
            boolean r1 = r1.applyMetadataMutations(r2)
            if (r1 == 0) goto Ld
            r1 = 1
            r0.changed = r1
        Ld:
            return
    }

    public int assignIdForKey(java.lang.String r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r1 = r0.getOrAdd(r1)
            int r1 = r1.id
            return r1
    }

    public com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent get(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> r0 = r1.keyToContent
            java.lang.Object r2 = r0.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r2 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent) r2
            return r2
    }

    public java.util.Collection<com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> getAll() {
            r1 = this;
            java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> r0 = r1.keyToContent
            java.util.Collection r0 = r0.values()
            return r0
    }

    public com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadata getContentMetadata(java.lang.String r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r1 = r0.get(r1)
            if (r1 == 0) goto Lb
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadata r1 = r1.getMetadata()
            goto Ld
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata.EMPTY
        Ld:
            return r1
    }

    public java.lang.String getKeyForId(int r2) {
            r1 = this;
            android.util.SparseArray<java.lang.String> r0 = r1.idToKey
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public java.util.Set<java.lang.String> getKeys() {
            r1 = this;
            java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> r0 = r1.keyToContent
            java.util.Set r0 = r0.keySet()
            return r0
    }

    public com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent getOrAdd(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> r0 = r1.keyToContent
            java.lang.Object r0 = r0.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r0 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent) r0
            if (r0 != 0) goto Le
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r0 = r1.addNew(r2)
        Le:
            return r0
    }

    public void load() {
            r1 = this;
            boolean r0 = r1.changed
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            boolean r0 = r1.readFile()
            if (r0 != 0) goto L1c
            com.mbridge.msdk.playercommon.exoplayer2.util.AtomicFile r0 = r1.atomicFile
            r0.delete()
            java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> r0 = r1.keyToContent
            r0.clear()
            android.util.SparseArray<java.lang.String> r0 = r1.idToKey
            r0.clear()
        L1c:
            return
    }

    public void maybeRemove(java.lang.String r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> r0 = r2.keyToContent
            java.lang.Object r0 = r0.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent r0 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent) r0
            if (r0 == 0) goto L25
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L25
            boolean r1 = r0.isLocked()
            if (r1 != 0) goto L25
            java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> r1 = r2.keyToContent
            r1.remove(r3)
            android.util.SparseArray<java.lang.String> r3 = r2.idToKey
            int r0 = r0.id
            r3.remove(r0)
            r3 = 1
            r2.changed = r3
        L25:
            return
    }

    public void removeEmpty() {
            r4 = this;
            java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> r0 = r4.keyToContent
            int r0 = r0.size()
            java.lang.String[] r1 = new java.lang.String[r0]
            java.util.HashMap<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.CachedContent> r2 = r4.keyToContent
            java.util.Set r2 = r2.keySet()
            r2.toArray(r1)
            r2 = 0
        L12:
            if (r2 >= r0) goto L1c
            r3 = r1[r2]
            r4.maybeRemove(r3)
            int r2 = r2 + 1
            goto L12
        L1c:
            return
    }

    public void store() throws com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.Cache.CacheException {
            r1 = this;
            boolean r0 = r1.changed
            if (r0 != 0) goto L5
            return
        L5:
            r1.writeFile()
            r0 = 0
            r1.changed = r0
            return
    }
}
