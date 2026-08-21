package com.tkay.expressad.exoplayer.j.a;

final class h {
    public static final java.lang.String a = "cached_content_index.exi";
    private static final int b = 2;
    private static final int c = 1;
    private final java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> d;
    private final android.util.SparseArray<java.lang.String> e;
    private final com.tkay.expressad.exoplayer.k.b f;
    private final javax.crypto.Cipher g;
    private final javax.crypto.spec.SecretKeySpec h;
    private final boolean i;
    private boolean j;
    private com.tkay.expressad.exoplayer.k.x k;

    private h(java.io.File r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    private h(java.io.File r2, byte[] r3) {
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

    public h(java.io.File r3, byte[] r4, boolean r5) {
            r2 = this;
            r2.<init>()
            r2.i = r5
            r0 = 1
            if (r4 == 0) goto L2b
            int r5 = r4.length
            r1 = 16
            if (r5 != r1) goto Le
            goto Lf
        Le:
            r0 = 0
        Lf:
            com.tkay.expressad.exoplayer.k.a.a(r0)
            javax.crypto.Cipher r5 = h()     // Catch: javax.crypto.NoSuchPaddingException -> L22 java.security.NoSuchAlgorithmException -> L24
            r2.g = r5     // Catch: javax.crypto.NoSuchPaddingException -> L22 java.security.NoSuchAlgorithmException -> L24
            javax.crypto.spec.SecretKeySpec r5 = new javax.crypto.spec.SecretKeySpec     // Catch: javax.crypto.NoSuchPaddingException -> L22 java.security.NoSuchAlgorithmException -> L24
            java.lang.String r0 = "AES"
            r5.<init>(r4, r0)     // Catch: javax.crypto.NoSuchPaddingException -> L22 java.security.NoSuchAlgorithmException -> L24
            r2.h = r5     // Catch: javax.crypto.NoSuchPaddingException -> L22 java.security.NoSuchAlgorithmException -> L24
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
            com.tkay.expressad.exoplayer.k.a.b(r4)
            r4 = 0
            r2.g = r4
            r2.h = r4
        L35:
            java.util.HashMap r4 = new java.util.HashMap
            r4.<init>()
            r2.d = r4
            android.util.SparseArray r4 = new android.util.SparseArray
            r4.<init>()
            r2.e = r4
            com.tkay.expressad.exoplayer.k.b r4 = new com.tkay.expressad.exoplayer.k.b
            java.io.File r5 = new java.io.File
            java.lang.String r0 = "cached_content_index.exi"
            r5.<init>(r3, r0)
            r4.<init>(r5)
            r2.f = r4
            return
    }

    private static int a(android.util.SparseArray<java.lang.String> r3) {
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
            if (r2 >= 0) goto L1f
        L13:
            if (r1 >= r0) goto L1e
            int r2 = r3.keyAt(r1)
            if (r1 != r2) goto L1e
            int r1 = r1 + 1
            goto L13
        L1e:
            r2 = r1
        L1f:
            return r2
    }

    private void a(com.tkay.expressad.exoplayer.j.a.g r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r0 = r2.d
            java.lang.String r1 = r3.b
            r0.put(r1, r3)
            android.util.SparseArray<java.lang.String> r0 = r2.e
            int r1 = r3.a
            java.lang.String r3 = r3.b
            r0.put(r1, r3)
            return
    }

    private com.tkay.expressad.exoplayer.j.a.g f(java.lang.String r6) {
            r5 = this;
            android.util.SparseArray<java.lang.String> r0 = r5.e
            int r1 = r0.size()
            r2 = 0
            r3 = 1
            if (r1 != 0) goto Lc
            r4 = r2
            goto L13
        Lc:
            int r4 = r1 + (-1)
            int r4 = r0.keyAt(r4)
            int r4 = r4 + r3
        L13:
            if (r4 >= 0) goto L21
        L15:
            if (r2 >= r1) goto L20
            int r4 = r0.keyAt(r2)
            if (r2 != r4) goto L20
            int r2 = r2 + 1
            goto L15
        L20:
            r4 = r2
        L21:
            com.tkay.expressad.exoplayer.j.a.g r0 = new com.tkay.expressad.exoplayer.j.a.g
            r0.<init>(r4, r6)
            r5.a(r0)
            r5.j = r3
            return r0
    }

    private boolean f() {
            r9 = this;
            r0 = 0
            r1 = 0
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L98 java.io.IOException -> L9f
            com.tkay.expressad.exoplayer.k.b r3 = r9.f     // Catch: java.lang.Throwable -> L98 java.io.IOException -> L9f
            java.io.InputStream r3 = r3.c()     // Catch: java.lang.Throwable -> L98 java.io.IOException -> L9f
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
            javax.crypto.Cipher r5 = r9.g     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            if (r5 != 0) goto L2d
            com.tkay.expressad.exoplayer.k.af.a(r3)
            return r0
        L2d:
            r5 = 16
            byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r3.readFully(r5)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            javax.crypto.spec.IvParameterSpec r7 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r7.<init>(r5)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            javax.crypto.Cipher r5 = r9.g     // Catch: java.security.InvalidAlgorithmParameterException -> L4e java.security.InvalidKeyException -> L50 java.lang.Throwable -> L93 java.io.IOException -> L96
            javax.crypto.spec.SecretKeySpec r8 = r9.h     // Catch: java.security.InvalidAlgorithmParameterException -> L4e java.security.InvalidKeyException -> L50 java.lang.Throwable -> L93 java.io.IOException -> L96
            r5.init(r4, r8, r7)     // Catch: java.security.InvalidAlgorithmParameterException -> L4e java.security.InvalidKeyException -> L50 java.lang.Throwable -> L93 java.io.IOException -> L96
            java.io.DataInputStream r4 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            javax.crypto.CipherInputStream r5 = new javax.crypto.CipherInputStream     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            javax.crypto.Cipher r7 = r9.g     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
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
            boolean r2 = r9.i     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            if (r2 == 0) goto L5d
            r9.j = r6     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
        L5d:
            int r2 = r3.readInt()     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r4 = r0
            r5 = r4
        L63:
            if (r4 >= r2) goto L74
            com.tkay.expressad.exoplayer.j.a.g r7 = com.tkay.expressad.exoplayer.j.a.g.a(r1, r3)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            r9.a(r7)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
            int r7 = r7.a(r1)     // Catch: java.lang.Throwable -> L93 java.io.IOException -> L96
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
            com.tkay.expressad.exoplayer.k.af.a(r3)
            return r6
        L8b:
            com.tkay.expressad.exoplayer.k.af.a(r3)
            return r0
        L8f:
            com.tkay.expressad.exoplayer.k.af.a(r3)
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
            com.tkay.expressad.exoplayer.k.af.a(r1)
        L9e:
            throw r0
        L9f:
            if (r1 == 0) goto La4
            com.tkay.expressad.exoplayer.k.af.a(r1)
        La4:
            return r0
    }

    private void g() {
            r9 = this;
            r0 = 0
            com.tkay.expressad.exoplayer.k.b r1 = r9.f     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            java.io.OutputStream r1 = r1.b()     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            com.tkay.expressad.exoplayer.k.x r2 = r9.k     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            if (r2 != 0) goto L13
            com.tkay.expressad.exoplayer.k.x r2 = new com.tkay.expressad.exoplayer.k.x     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            r2.<init>(r1)     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            r9.k = r2     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            goto L18
        L13:
            com.tkay.expressad.exoplayer.k.x r2 = r9.k     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            r2.a(r1)     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
        L18:
            java.io.DataOutputStream r1 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            com.tkay.expressad.exoplayer.k.x r2 = r9.k     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            r1.<init>(r2)     // Catch: java.lang.Throwable -> La8 java.io.IOException -> Laa
            r2 = 2
            r1.writeInt(r2)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            boolean r3 = r9.i     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r4 = 1
            r5 = 0
            if (r3 == 0) goto L2b
            r3 = r4
            goto L2c
        L2b:
            r3 = r5
        L2c:
            r1.writeInt(r3)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            boolean r3 = r9.i     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            if (r3 == 0) goto L6a
            r3 = 16
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            java.util.Random r6 = new java.util.Random     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r6.<init>()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r6.nextBytes(r3)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r1.write(r3)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            javax.crypto.spec.IvParameterSpec r6 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r6.<init>(r3)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            javax.crypto.Cipher r3 = r9.g     // Catch: java.security.InvalidAlgorithmParameterException -> L61 java.security.InvalidKeyException -> L63 java.lang.Throwable -> L9e java.io.IOException -> La3
            javax.crypto.spec.SecretKeySpec r7 = r9.h     // Catch: java.security.InvalidAlgorithmParameterException -> L61 java.security.InvalidKeyException -> L63 java.lang.Throwable -> L9e java.io.IOException -> La3
            r3.init(r4, r7, r6)     // Catch: java.security.InvalidAlgorithmParameterException -> L61 java.security.InvalidKeyException -> L63 java.lang.Throwable -> L9e java.io.IOException -> La3
            r1.flush()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            java.io.DataOutputStream r3 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            javax.crypto.CipherOutputStream r4 = new javax.crypto.CipherOutputStream     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            com.tkay.expressad.exoplayer.k.x r6 = r9.k     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            javax.crypto.Cipher r7 = r9.g     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
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
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r3 = r9.d     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r1.writeInt(r3)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r3 = r9.d     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            java.util.Collection r3 = r3.values()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
        L7d:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            if (r4 == 0) goto L92
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            com.tkay.expressad.exoplayer.j.a.g r4 = (com.tkay.expressad.exoplayer.j.a.g) r4     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r4.a(r1)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            int r4 = r4.a(r2)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            int r5 = r5 + r4
            goto L7d
        L92:
            r1.writeInt(r5)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            com.tkay.expressad.exoplayer.k.b r2 = r9.f     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            r2.a(r1)     // Catch: java.lang.Throwable -> L9e java.io.IOException -> La3
            com.tkay.expressad.exoplayer.k.af.a(r0)
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
            com.tkay.expressad.exoplayer.j.a.a$a r2 = new com.tkay.expressad.exoplayer.j.a.a$a     // Catch: java.lang.Throwable -> La8
            r2.<init>(r1)     // Catch: java.lang.Throwable -> La8
            throw r2     // Catch: java.lang.Throwable -> La8
        Lb1:
            com.tkay.expressad.exoplayer.k.af.a(r0)
            throw r1
    }

    private static javax.crypto.Cipher h() {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
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

    public final com.tkay.expressad.exoplayer.j.a.g a(java.lang.String r6) {
            r5 = this;
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r0 = r5.d
            java.lang.Object r0 = r0.get(r6)
            com.tkay.expressad.exoplayer.j.a.g r0 = (com.tkay.expressad.exoplayer.j.a.g) r0
            if (r0 != 0) goto L35
            android.util.SparseArray<java.lang.String> r0 = r5.e
            int r1 = r0.size()
            r2 = 0
            r3 = 1
            if (r1 != 0) goto L16
            r4 = r2
            goto L1d
        L16:
            int r4 = r1 + (-1)
            int r4 = r0.keyAt(r4)
            int r4 = r4 + r3
        L1d:
            if (r4 >= 0) goto L2b
        L1f:
            if (r2 >= r1) goto L2a
            int r4 = r0.keyAt(r2)
            if (r2 != r4) goto L2a
            int r2 = r2 + 1
            goto L1f
        L2a:
            r4 = r2
        L2b:
            com.tkay.expressad.exoplayer.j.a.g r0 = new com.tkay.expressad.exoplayer.j.a.g
            r0.<init>(r4, r6)
            r5.a(r0)
            r5.j = r3
        L35:
            return r0
    }

    public final java.lang.String a(int r2) {
            r1 = this;
            android.util.SparseArray<java.lang.String> r0 = r1.e
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public final void a() {
            r1 = this;
            boolean r0 = r1.j
            r0 = r0 ^ 1
            com.tkay.expressad.exoplayer.k.a.b(r0)
            boolean r0 = r1.f()
            if (r0 != 0) goto L1c
            com.tkay.expressad.exoplayer.k.b r0 = r1.f
            r0.a()
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r0 = r1.d
            r0.clear()
            android.util.SparseArray<java.lang.String> r0 = r1.e
            r0.clear()
        L1c:
            return
    }

    public final void a(java.lang.String r1, com.tkay.expressad.exoplayer.j.a.k r2) {
            r0 = this;
            com.tkay.expressad.exoplayer.j.a.g r1 = r0.a(r1)
            boolean r1 = r1.a(r2)
            if (r1 == 0) goto Ld
            r1 = 1
            r0.j = r1
        Ld:
            return
    }

    public final com.tkay.expressad.exoplayer.j.a.g b(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r0 = r1.d
            java.lang.Object r2 = r0.get(r2)
            com.tkay.expressad.exoplayer.j.a.g r2 = (com.tkay.expressad.exoplayer.j.a.g) r2
            return r2
    }

    public final void b() {
            r9 = this;
            boolean r0 = r9.j
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            com.tkay.expressad.exoplayer.k.b r1 = r9.f     // Catch: java.lang.Throwable -> Lb0 java.io.IOException -> Lb2
            java.io.OutputStream r1 = r1.b()     // Catch: java.lang.Throwable -> Lb0 java.io.IOException -> Lb2
            com.tkay.expressad.exoplayer.k.x r2 = r9.k     // Catch: java.lang.Throwable -> Lb0 java.io.IOException -> Lb2
            if (r2 != 0) goto L18
            com.tkay.expressad.exoplayer.k.x r2 = new com.tkay.expressad.exoplayer.k.x     // Catch: java.lang.Throwable -> Lb0 java.io.IOException -> Lb2
            r2.<init>(r1)     // Catch: java.lang.Throwable -> Lb0 java.io.IOException -> Lb2
            r9.k = r2     // Catch: java.lang.Throwable -> Lb0 java.io.IOException -> Lb2
            goto L1d
        L18:
            com.tkay.expressad.exoplayer.k.x r2 = r9.k     // Catch: java.lang.Throwable -> Lb0 java.io.IOException -> Lb2
            r2.a(r1)     // Catch: java.lang.Throwable -> Lb0 java.io.IOException -> Lb2
        L1d:
            java.io.DataOutputStream r1 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> Lb0 java.io.IOException -> Lb2
            com.tkay.expressad.exoplayer.k.x r2 = r9.k     // Catch: java.lang.Throwable -> Lb0 java.io.IOException -> Lb2
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lb0 java.io.IOException -> Lb2
            r2 = 2
            r1.writeInt(r2)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            boolean r3 = r9.i     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r4 = 1
            r5 = 0
            if (r3 == 0) goto L30
            r3 = r4
            goto L31
        L30:
            r3 = r5
        L31:
            r1.writeInt(r3)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            boolean r3 = r9.i     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            if (r3 == 0) goto L6f
            r3 = 16
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            java.util.Random r6 = new java.util.Random     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r6.<init>()     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r6.nextBytes(r3)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r1.write(r3)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            javax.crypto.spec.IvParameterSpec r6 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r6.<init>(r3)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            javax.crypto.Cipher r3 = r9.g     // Catch: java.security.InvalidAlgorithmParameterException -> L66 java.security.InvalidKeyException -> L68 java.lang.Throwable -> La6 java.io.IOException -> Lab
            javax.crypto.spec.SecretKeySpec r7 = r9.h     // Catch: java.security.InvalidAlgorithmParameterException -> L66 java.security.InvalidKeyException -> L68 java.lang.Throwable -> La6 java.io.IOException -> Lab
            r3.init(r4, r7, r6)     // Catch: java.security.InvalidAlgorithmParameterException -> L66 java.security.InvalidKeyException -> L68 java.lang.Throwable -> La6 java.io.IOException -> Lab
            r1.flush()     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            java.io.DataOutputStream r3 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            javax.crypto.CipherOutputStream r4 = new javax.crypto.CipherOutputStream     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            com.tkay.expressad.exoplayer.k.x r6 = r9.k     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            javax.crypto.Cipher r7 = r9.g     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r4.<init>(r6, r7)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r3.<init>(r4)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r1 = r3
            goto L6f
        L66:
            r0 = move-exception
            goto L69
        L68:
            r0 = move-exception
        L69:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r2.<init>(r0)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            throw r2     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
        L6f:
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r3 = r9.d     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            int r3 = r3.size()     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r1.writeInt(r3)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r3 = r9.d     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            java.util.Collection r3 = r3.values()     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r4 = r5
        L83:
            boolean r6 = r3.hasNext()     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            if (r6 == 0) goto L98
            java.lang.Object r6 = r3.next()     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            com.tkay.expressad.exoplayer.j.a.g r6 = (com.tkay.expressad.exoplayer.j.a.g) r6     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r6.a(r1)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            int r6 = r6.a(r2)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            int r4 = r4 + r6
            goto L83
        L98:
            r1.writeInt(r4)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            com.tkay.expressad.exoplayer.k.b r2 = r9.f     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            r2.a(r1)     // Catch: java.lang.Throwable -> La6 java.io.IOException -> Lab
            com.tkay.expressad.exoplayer.k.af.a(r0)
            r9.j = r5
            return
        La6:
            r0 = move-exception
            r8 = r1
            r1 = r0
            r0 = r8
            goto Lb9
        Lab:
            r0 = move-exception
            r8 = r1
            r1 = r0
            r0 = r8
            goto Lb3
        Lb0:
            r1 = move-exception
            goto Lb9
        Lb2:
            r1 = move-exception
        Lb3:
            com.tkay.expressad.exoplayer.j.a.a$a r2 = new com.tkay.expressad.exoplayer.j.a.a$a     // Catch: java.lang.Throwable -> Lb0
            r2.<init>(r1)     // Catch: java.lang.Throwable -> Lb0
            throw r2     // Catch: java.lang.Throwable -> Lb0
        Lb9:
            com.tkay.expressad.exoplayer.k.af.a(r0)
            throw r1
    }

    public final int c(java.lang.String r1) {
            r0 = this;
            com.tkay.expressad.exoplayer.j.a.g r1 = r0.a(r1)
            int r1 = r1.a
            return r1
    }

    public final java.util.Collection<com.tkay.expressad.exoplayer.j.a.g> c() {
            r1 = this;
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r0 = r1.d
            java.util.Collection r0 = r0.values()
            return r0
    }

    public final void d() {
            r4 = this;
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r0 = r4.d
            int r0 = r0.size()
            java.lang.String[] r1 = new java.lang.String[r0]
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r2 = r4.d
            java.util.Set r2 = r2.keySet()
            r2.toArray(r1)
            r2 = 0
        L12:
            if (r2 >= r0) goto L1c
            r3 = r1[r2]
            r4.d(r3)
            int r2 = r2 + 1
            goto L12
        L1c:
            return
    }

    public final void d(java.lang.String r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r0 = r2.d
            java.lang.Object r0 = r0.get(r3)
            com.tkay.expressad.exoplayer.j.a.g r0 = (com.tkay.expressad.exoplayer.j.a.g) r0
            if (r0 == 0) goto L25
            boolean r1 = r0.d()
            if (r1 == 0) goto L25
            boolean r1 = r0.b()
            if (r1 != 0) goto L25
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r1 = r2.d
            r1.remove(r3)
            android.util.SparseArray<java.lang.String> r3 = r2.e
            int r0 = r0.a
            r3.remove(r0)
            r3 = 1
            r2.j = r3
        L25:
            return
    }

    public final com.tkay.expressad.exoplayer.j.a.i e(java.lang.String r1) {
            r0 = this;
            com.tkay.expressad.exoplayer.j.a.g r1 = r0.b(r1)
            if (r1 == 0) goto Lb
            com.tkay.expressad.exoplayer.j.a.i r1 = r1.a()
            return r1
        Lb:
            com.tkay.expressad.exoplayer.j.a.l r1 = com.tkay.expressad.exoplayer.j.a.l.b
            return r1
    }

    public final java.util.Set<java.lang.String> e() {
            r1 = this;
            java.util.HashMap<java.lang.String, com.tkay.expressad.exoplayer.j.a.g> r0 = r1.d
            java.util.Set r0 = r0.keySet()
            return r0
    }
}
