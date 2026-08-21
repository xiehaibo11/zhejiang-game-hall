package com.meizu.cloud.pushsdk.a.a;

public class a {
    private static com.meizu.cloud.pushsdk.a.a.a a;
    private static final java.lang.Object b = null;
    private byte[] c;
    private byte[] d;
    private byte[] e;
    private byte[] f;
    private byte[] g;
    private java.security.PublicKey h;
    private final android.content.SharedPreferences i;
    private final android.content.SharedPreferences j;
    private long k;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.meizu.cloud.pushsdk.a.a.a.b = r0
            return
    }

    private a(android.content.Context r6) {
            r5 = this;
            r5.<init>()
            r0 = 0
            r5.k = r0
            r2 = 0
            java.lang.String r3 = "com.x.y.1"
            android.content.SharedPreferences r3 = r6.getSharedPreferences(r3, r2)
            r5.i = r3
            java.lang.String r3 = "com.x.y.2"
            android.content.SharedPreferences r2 = r6.getSharedPreferences(r3, r2)
            r5.j = r2
            android.content.SharedPreferences r2 = r5.i
            java.lang.String r3 = "keyTimeout"
            java.lang.String r4 = "0"
            java.lang.String r2 = r2.getString(r3, r4)
            java.lang.Integer.parseInt(r2)
            android.content.SharedPreferences r2 = r5.i
            java.lang.String r3 = "createDate"
            r2.getLong(r3, r0)
            r5.e()
            byte[] r0 = r5.c
            if (r0 == 0) goto L4a
            int r0 = r0.length
            if (r0 != 0) goto L37
            goto L4a
        L37:
            byte[] r0 = r5.d
            if (r0 == 0) goto L3e
            int r0 = r0.length
            if (r0 != 0) goto L76
        L3e:
            java.security.PublicKey r6 = r5.b(r6)
            r5.h = r6
            if (r6 == 0) goto L76
            r5.h()
            goto L76
        L4a:
            java.security.PublicKey r0 = r5.b(r6)
            r5.h = r0
            if (r0 == 0) goto L56
            r5.f()
            goto L76
        L56:
            android.content.SharedPreferences r0 = r5.i
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.clear()
            r0.apply()
            r5.d()     // Catch: java.io.IOException -> L72
            java.security.PublicKey r6 = r5.b(r6)     // Catch: java.io.IOException -> L72
            r5.h = r6     // Catch: java.io.IOException -> L72
            if (r6 == 0) goto L76
            r5.f()     // Catch: java.io.IOException -> L72
            goto L76
        L72:
            r6 = move-exception
            r6.printStackTrace()
        L76:
            return
    }

    public static com.meizu.cloud.pushsdk.a.a.a a() {
            com.meizu.cloud.pushsdk.a.a.a r0 = com.meizu.cloud.pushsdk.a.a.a.a
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "KeyMgr is not initialised - invoke at least once with parameterised init/get"
            r0.<init>(r1)
            throw r0
    }

    private java.lang.String a(java.io.InputStream r4) {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
        L5:
            int r1 = r4.read()     // Catch: java.lang.Throwable -> L18 java.io.IOException -> L1d
            r2 = -1
            if (r1 == r2) goto L10
            r0.write(r1)     // Catch: java.lang.Throwable -> L18 java.io.IOException -> L1d
            goto L5
        L10:
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L18 java.io.IOException -> L1d
            r0.close()     // Catch: java.io.IOException -> L21
            goto L21
        L18:
            r4 = move-exception
            r0.close()     // Catch: java.io.IOException -> L1c
        L1c:
            throw r4
        L1d:
            r0.close()     // Catch: java.io.IOException -> L20
        L20:
            r4 = 0
        L21:
            return r4
    }

    public static void a(android.content.Context r2) {
            com.meizu.cloud.pushsdk.a.a.a r0 = com.meizu.cloud.pushsdk.a.a.a.a
            if (r0 != 0) goto L17
            java.lang.Object r0 = com.meizu.cloud.pushsdk.a.a.a.b
            monitor-enter(r0)
            com.meizu.cloud.pushsdk.a.a.a r1 = com.meizu.cloud.pushsdk.a.a.a.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.meizu.cloud.pushsdk.a.a.a r1 = new com.meizu.cloud.pushsdk.a.a.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.meizu.cloud.pushsdk.a.a.a.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            return
    }

    private java.security.PublicKey b(android.content.Context r3) {
            r2 = this;
            java.lang.String r3 = "load publicKey from preference"
            r2.b(r3)
            android.content.SharedPreferences r3 = r2.j
            java.lang.String r0 = "publicKey"
            java.lang.String r1 = ""
            java.lang.String r3 = r3.getString(r0, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L33
            r0 = 2
            byte[] r3 = android.util.Base64.decode(r3, r0)     // Catch: java.security.spec.InvalidKeySpecException -> L2a java.security.NoSuchAlgorithmException -> L2f
            java.lang.String r0 = "RSA"
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0)     // Catch: java.security.spec.InvalidKeySpecException -> L2a java.security.NoSuchAlgorithmException -> L2f
            java.security.spec.X509EncodedKeySpec r1 = new java.security.spec.X509EncodedKeySpec     // Catch: java.security.spec.InvalidKeySpecException -> L2a java.security.NoSuchAlgorithmException -> L2f
            r1.<init>(r3)     // Catch: java.security.spec.InvalidKeySpecException -> L2a java.security.NoSuchAlgorithmException -> L2f
            java.security.PublicKey r3 = r0.generatePublic(r1)     // Catch: java.security.spec.InvalidKeySpecException -> L2a java.security.NoSuchAlgorithmException -> L2f
            return r3
        L2a:
            r3 = move-exception
            r3.printStackTrace()
            goto L33
        L2f:
            r3 = move-exception
            r3.printStackTrace()
        L33:
            r3 = 0
            return r3
    }

    private void b(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "HttpKeyMgr"
            com.meizu.cloud.pushinternal.DebugLogger.d(r0, r2)
            return
    }

    private void c(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "HttpKeyMgr"
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r2)
            return
    }

    private void d() {
            r5 = this;
            java.net.URL r0 = new java.net.URL     // Catch: java.net.MalformedURLException -> Lb3
            java.lang.String r1 = "https://norma-external-collect.meizu.com/android/exchange/getpublickey.do"
            r0.<init>(r1)     // Catch: java.net.MalformedURLException -> Lb3
            java.net.URLConnection r0 = r0.openConnection()
            java.net.HttpURLConnection r0 = (java.net.HttpURLConnection) r0
            r1 = 1
            r0.setDoInput(r1)
            r1 = 0
            r0.setUseCaches(r1)
            java.lang.String r1 = "GET"
            r0.setRequestMethod(r1)     // Catch: java.net.ProtocolException -> L1b
            goto L1f
        L1b:
            r1 = move-exception
            r1.printStackTrace()
        L1f:
            java.lang.String r1 = "Charset"
            java.lang.String r2 = "UTF-8"
            r0.setRequestProperty(r1, r2)
            r1 = 0
            int r2 = r0.getResponseCode()     // Catch: java.lang.Throwable -> La9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La9
            r3.<init>()     // Catch: java.lang.Throwable -> La9
            java.lang.String r4 = "code = "
            r3.append(r4)     // Catch: java.lang.Throwable -> La9
            r3.append(r2)     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> La9
            r5.b(r2)     // Catch: java.lang.Throwable -> La9
            java.io.InputStream r1 = r0.getInputStream()     // Catch: java.lang.Throwable -> La9
            if (r1 == 0) goto La0
            java.lang.String r2 = r5.a(r1)     // Catch: java.lang.Throwable -> La9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La9
            r3.<init>()     // Catch: java.lang.Throwable -> La9
            java.lang.String r4 = "body = "
            r3.append(r4)     // Catch: java.lang.Throwable -> La9
            r3.append(r2)     // Catch: java.lang.Throwable -> La9
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> La9
            r5.b(r3)     // Catch: java.lang.Throwable -> La9
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> La9
            if (r3 != 0) goto La0
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La9
            r3.<init>(r2)     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La9
            java.lang.String r2 = "code"
            int r2 = r3.getInt(r2)     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La9
            r4 = 200(0xc8, float:2.8E-43)
            if (r2 != r4) goto La0
            java.lang.String r2 = "value"
            java.lang.String r2 = r3.getString(r2)     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La9
            android.content.SharedPreferences r3 = r5.j     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La9
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La9
            java.lang.String r4 = "publicKey"
            r3.putString(r4, r2)     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La9
            r3.apply()     // Catch: java.lang.Exception -> L87 java.lang.Throwable -> La9
            goto La0
        L87:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La9
            r3.<init>()     // Catch: java.lang.Throwable -> La9
            java.lang.String r4 = "downloadPublicKey message error "
            r3.append(r4)     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> La9
            r3.append(r2)     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> La9
            r5.c(r2)     // Catch: java.lang.Throwable -> La9
        La0:
            if (r1 == 0) goto La5
            r1.close()     // Catch: java.io.IOException -> La5
        La5:
            r0.disconnect()
            return
        La9:
            r2 = move-exception
            if (r1 == 0) goto Laf
            r1.close()     // Catch: java.io.IOException -> Laf
        Laf:
            r0.disconnect()
            throw r2
        Lb3:
            return
    }

    private void e() {
            r4 = this;
            java.lang.String r0 = "loadKeys"
            r4.b(r0)
            android.content.SharedPreferences r0 = r4.i
            java.lang.String r1 = ""
            java.lang.String r2 = "sKey64"
            java.lang.String r0 = r0.getString(r2, r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "saved sKey64: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r4.b(r2)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L2f
            byte[] r0 = r0.getBytes()
            r4.g = r0
        L2f:
            android.content.SharedPreferences r0 = r4.i
            java.lang.String r2 = "aKey64"
            java.lang.String r0 = r0.getString(r2, r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "saved aKey64: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r4.b(r2)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            r3 = 2
            if (r2 != 0) goto L5e
            byte[] r0 = r0.getBytes()
            r4.f = r0
            byte[] r0 = android.util.Base64.decode(r0, r3)
            r4.d = r0
        L5e:
            android.content.SharedPreferences r0 = r4.i
            java.lang.String r2 = "rKey64"
            java.lang.String r0 = r0.getString(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "saved rKey64: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            r4.b(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto La7
            byte[] r0 = r0.getBytes()
            r4.e = r0
            byte[] r0 = android.util.Base64.decode(r0, r3)
            r4.c = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "saved rKey: "
            r0.append(r1)
            java.lang.String r1 = new java.lang.String
            byte[] r2 = r4.c
            r1.<init>(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.b(r0)
        La7:
            return
    }

    private void f() {
            r0 = this;
            r0.g()
            r0.h()
            return
    }

    private void g() {
            r4 = this;
            java.lang.String r0 = "AES"
            javax.crypto.KeyGenerator r0 = javax.crypto.KeyGenerator.getInstance(r0)     // Catch: java.lang.Exception -> L4d
            r1 = 128(0x80, float:1.8E-43)
            r0.init(r1)     // Catch: java.lang.Exception -> L4d
            javax.crypto.SecretKey r0 = r0.generateKey()     // Catch: java.lang.Exception -> L4d
            byte[] r0 = r0.getEncoded()     // Catch: java.lang.Exception -> L4d
            r4.c = r0     // Catch: java.lang.Exception -> L4d
            r1 = 2
            byte[] r0 = android.util.Base64.encode(r0, r1)     // Catch: java.lang.Exception -> L4d
            r4.e = r0     // Catch: java.lang.Exception -> L4d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4d
            r0.<init>()     // Catch: java.lang.Exception -> L4d
            java.lang.String r1 = "***** rKey64: "
            r0.append(r1)     // Catch: java.lang.Exception -> L4d
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L4d
            byte[] r2 = r4.e     // Catch: java.lang.Exception -> L4d
            r1.<init>(r2)     // Catch: java.lang.Exception -> L4d
            r0.append(r1)     // Catch: java.lang.Exception -> L4d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L4d
            r4.b(r0)     // Catch: java.lang.Exception -> L4d
            android.content.SharedPreferences r0 = r4.i     // Catch: java.lang.Exception -> L4d
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L4d
            java.lang.String r1 = "rKey64"
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L4d
            byte[] r3 = r4.e     // Catch: java.lang.Exception -> L4d
            r2.<init>(r3)     // Catch: java.lang.Exception -> L4d
            r0.putString(r1, r2)     // Catch: java.lang.Exception -> L4d
            r0.apply()     // Catch: java.lang.Exception -> L4d
            goto L51
        L4d:
            r0 = move-exception
            r0.printStackTrace()
        L51:
            return
    }

    private void h() {
            r4 = this;
            java.lang.String r0 = "RSA/ECB/PKCS1Padding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            r1 = 1
            java.security.PublicKey r2 = r4.h     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            r0.init(r1, r2)     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            byte[] r1 = r4.c     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            byte[] r0 = r0.doFinal(r1)     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            r4.d = r0     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            r1 = 2
            byte[] r0 = android.util.Base64.encode(r0, r1)     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            r4.f = r0     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            r0.<init>()     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            java.lang.String r1 = "***** aKey64: "
            r0.append(r1)     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            java.lang.String r1 = new java.lang.String     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            byte[] r2 = r4.f     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            r1.<init>(r2)     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            r0.append(r1)     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            java.lang.String r0 = r0.toString()     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            r4.b(r0)     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            android.content.SharedPreferences r0 = r4.i     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            java.lang.String r1 = "aKey64"
            java.lang.String r2 = new java.lang.String     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            byte[] r3 = r4.f     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            r2.<init>(r3)     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            r0.putString(r1, r2)     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            r0.apply()     // Catch: java.security.InvalidKeyException -> L4c javax.crypto.IllegalBlockSizeException -> L51 javax.crypto.BadPaddingException -> L56 javax.crypto.NoSuchPaddingException -> L5b java.security.NoSuchAlgorithmException -> L60
            goto L64
        L4c:
            r0 = move-exception
            r0.printStackTrace()
            goto L64
        L51:
            r0 = move-exception
            r0.printStackTrace()
            goto L64
        L56:
            r0 = move-exception
            r0.printStackTrace()
            goto L64
        L5b:
            r0 = move-exception
            r0.printStackTrace()
            goto L64
        L60:
            r0 = move-exception
            r0.printStackTrace()
        L64:
            return
    }

    public void a(java.lang.String r3) {
            r2 = this;
            byte[] r3 = r3.getBytes()
            r2.g = r3
            android.content.SharedPreferences r3 = r2.i
            android.content.SharedPreferences$Editor r3 = r3.edit()
            java.lang.String r0 = new java.lang.String
            byte[] r1 = r2.g
            r0.<init>(r1)
            java.lang.String r1 = "sKey64"
            r3.putString(r1, r0)
            r3.apply()
            return
    }

    public byte[] a(byte[] r8) {
            r7 = this;
            byte[] r0 = r7.c
            r1 = 0
            if (r0 == 0) goto L99
            int r0 = r0.length
            if (r0 != 0) goto La
            goto L99
        La:
            if (r8 == 0) goto L93
            int r0 = r8.length
            if (r0 != 0) goto L11
            goto L93
        L11:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = ">>>>>>>>>> encrypt input >>>>>>>>>>\n"
            r0.append(r2)
            java.lang.String r2 = new java.lang.String
            r3 = 2
            byte[] r4 = android.util.Base64.encode(r8, r3)
            r2.<init>(r4)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r7.b(r0)
            java.lang.String r0 = "<<<<<<<<<< encrypt input <<<<<<<<<<"
            r7.b(r0)
            java.lang.String r0 = "AES/CBC/PKCS5Padding"
            javax.crypto.Cipher r0 = javax.crypto.Cipher.getInstance(r0)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            javax.crypto.spec.SecretKeySpec r2 = new javax.crypto.spec.SecretKeySpec     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            byte[] r4 = r7.c     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            java.lang.String r5 = "AES"
            r2.<init>(r4, r5)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            r4 = 1
            javax.crypto.spec.IvParameterSpec r5 = new javax.crypto.spec.IvParameterSpec     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            byte[] r6 = r7.c     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            r5.<init>(r6)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            r0.init(r4, r2, r5)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            byte[] r8 = r0.doFinal(r8)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            r0.<init>()     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            java.lang.String r2 = ">>>>>>>>>> encrypt output >>>>>>>>>>\n"
            r0.append(r2)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            java.lang.String r2 = new java.lang.String     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            byte[] r3 = android.util.Base64.encode(r8, r3)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            r2.<init>(r3)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            r0.append(r2)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            java.lang.String r0 = r0.toString()     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            r7.b(r0)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            java.lang.String r0 = "<<<<<<<<<< encrypt output <<<<<<<<<<"
            r7.b(r0)     // Catch: java.security.InvalidAlgorithmParameterException -> L75 javax.crypto.IllegalBlockSizeException -> L7a javax.crypto.BadPaddingException -> L7f java.security.InvalidKeyException -> L84 javax.crypto.NoSuchPaddingException -> L89 java.security.NoSuchAlgorithmException -> L8e
            return r8
        L75:
            r8 = move-exception
            r8.printStackTrace()
            goto L92
        L7a:
            r8 = move-exception
            r8.printStackTrace()
            goto L92
        L7f:
            r8 = move-exception
            r8.printStackTrace()
            goto L92
        L84:
            r8 = move-exception
            r8.printStackTrace()
            goto L92
        L89:
            r8 = move-exception
            r8.printStackTrace()
            goto L92
        L8e:
            r8 = move-exception
            r8.printStackTrace()
        L92:
            return r1
        L93:
            java.lang.String r8 = "input null!"
        L95:
            r7.c(r8)
            return r1
        L99:
            java.lang.String r8 = "rKey null!"
            goto L95
    }

    public byte[] b() {
            r1 = this;
            byte[] r0 = r1.f
            return r0
    }

    public byte[] c() {
            r1 = this;
            byte[] r0 = r1.g
            return r0
    }
}
