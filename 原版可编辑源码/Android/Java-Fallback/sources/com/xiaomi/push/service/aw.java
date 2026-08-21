package com.xiaomi.push.service;

public class aw {
    private static long a;

    public class a {
        int a;
        byte[] a;

        public a(byte[] r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.a = r2
                return
        }
    }

    public class b {
        public long a;
        public android.graphics.Bitmap a;

        public b(android.graphics.Bitmap r1, long r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.a = r2
                return
        }
    }

    private static int a(android.content.Context r3, java.io.InputStream r4) {
            android.graphics.BitmapFactory$Options r0 = new android.graphics.BitmapFactory$Options
            r0.<init>()
            r1 = 1
            r0.inJustDecodeBounds = r1
            r2 = 0
            android.graphics.BitmapFactory.decodeStream(r4, r2, r0)
            int r4 = r0.outWidth
            r2 = -1
            if (r4 == r2) goto L3f
            int r4 = r0.outHeight
            if (r4 != r2) goto L16
            goto L3f
        L16:
            android.content.res.Resources r3 = r3.getResources()
            android.util.DisplayMetrics r3 = r3.getDisplayMetrics()
            int r3 = r3.densityDpi
            float r3 = (float) r3
            r4 = 1126170624(0x43200000, float:160.0)
            float r3 = r3 / r4
            r4 = 1111490560(0x42400000, float:48.0)
            float r3 = r3 * r4
            int r3 = java.lang.Math.round(r3)
            int r4 = r0.outWidth
            if (r4 <= r3) goto L3e
            int r4 = r0.outHeight
            if (r4 <= r3) goto L3e
            int r4 = r0.outWidth
            int r4 = r4 / r3
            int r0 = r0.outHeight
            int r0 = r0 / r3
            int r3 = java.lang.Math.min(r4, r0)
            return r3
        L3e:
            return r1
        L3f:
            java.lang.String r3 = "decode dimension failed for bitmap."
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            return r1
    }

    public static android.graphics.Bitmap a(android.content.Context r3, java.lang.String r4) {
            android.net.Uri r4 = android.net.Uri.parse(r4)
            r0 = 0
            android.content.ContentResolver r1 = r3.getContentResolver()     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L35
            java.io.InputStream r1 = r1.openInputStream(r4)     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L35
            int r2 = a(r3, r1)     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            android.content.ContentResolver r3 = r3.getContentResolver()     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            java.io.InputStream r3 = r3.openInputStream(r4)     // Catch: java.lang.Throwable -> L2d java.io.IOException -> L2f
            android.graphics.BitmapFactory$Options r4 = new android.graphics.BitmapFactory$Options     // Catch: java.io.IOException -> L2b java.lang.Throwable -> L42
            r4.<init>()     // Catch: java.io.IOException -> L2b java.lang.Throwable -> L42
            r4.inSampleSize = r2     // Catch: java.io.IOException -> L2b java.lang.Throwable -> L42
            android.graphics.Bitmap r4 = android.graphics.BitmapFactory.decodeStream(r3, r0, r4)     // Catch: java.io.IOException -> L2b java.lang.Throwable -> L42
            com.xiaomi.push.ab.a(r3)
            com.xiaomi.push.ab.a(r1)
            return r4
        L2b:
            r4 = move-exception
            goto L38
        L2d:
            r4 = move-exception
            goto L44
        L2f:
            r4 = move-exception
            r3 = r0
            goto L38
        L32:
            r4 = move-exception
            r1 = r0
            goto L44
        L35:
            r4 = move-exception
            r3 = r0
            r1 = r3
        L38:
            com.xiaomi.channel.commonutils.logger.b.a(r4)     // Catch: java.lang.Throwable -> L42
            com.xiaomi.push.ab.a(r3)
            com.xiaomi.push.ab.a(r1)
            return r0
        L42:
            r4 = move-exception
            r0 = r3
        L44:
            com.xiaomi.push.ab.a(r0)
            com.xiaomi.push.ab.a(r1)
            throw r4
    }

    private static com.xiaomi.push.service.aw.a a(java.lang.String r10, boolean r11) {
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> Lcf java.io.IOException -> Ld2 java.net.SocketTimeoutException -> Le1
            r1.<init>(r10)     // Catch: java.lang.Throwable -> Lcf java.io.IOException -> Ld2 java.net.SocketTimeoutException -> Le1
            java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Throwable -> Lcf java.io.IOException -> Ld2 java.net.SocketTimeoutException -> Le1
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Throwable -> Lcf java.io.IOException -> Ld2 java.net.SocketTimeoutException -> Le1
            r2 = 8000(0x1f40, float:1.121E-41)
            r1.setConnectTimeout(r2)     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            r2 = 20000(0x4e20, float:2.8026E-41)
            r1.setReadTimeout(r2)     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            java.lang.String r2 = "User-agent"
            java.lang.String r3 = "Mozilla/5.0 (Linux; U;) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/71.0.3578.141 Mobile Safari/537.36 XiaoMi/MiuiBrowser"
            r1.setRequestProperty(r2, r3)     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            r1.connect()     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            int r2 = r1.getContentLength()     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            r3 = 102400(0x19000, float:1.43493E-40)
            if (r11 == 0) goto L50
            if (r2 <= r3) goto L50
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            r11.<init>()     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            java.lang.String r3 = "Bitmap size is too big, max size is 102400  contentLen size is "
            r11.append(r3)     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            r11.append(r2)     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            java.lang.String r2 = " from url "
            r11.append(r2)     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            r11.append(r10)     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            com.xiaomi.channel.commonutils.logger.b.a(r11)     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            com.xiaomi.push.ab.a(r0)
            if (r1 == 0) goto L4f
            r1.disconnect()
        L4f:
            return r0
        L50:
            int r2 = r1.getResponseCode()     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            r4 = 200(0xc8, float:2.8E-43)
            if (r2 == r4) goto L7a
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            r11.<init>()     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            java.lang.String r3 = "Invalid Http Response Code "
            r11.append(r3)     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            r11.append(r2)     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            java.lang.String r2 = " received"
            r11.append(r2)     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            com.xiaomi.channel.commonutils.logger.b.a(r11)     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            com.xiaomi.push.ab.a(r0)
            if (r1 == 0) goto L79
            r1.disconnect()
        L79:
            return r0
        L7a:
            java.io.InputStream r2 = r1.getInputStream()     // Catch: java.lang.Throwable -> Lc8 java.io.IOException -> Lca java.net.SocketTimeoutException -> Lcd
            java.io.ByteArrayOutputStream r4 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> Lc6 java.net.SocketTimeoutException -> Le3 java.lang.Throwable -> Lfe
            r4.<init>()     // Catch: java.io.IOException -> Lc6 java.net.SocketTimeoutException -> Le3 java.lang.Throwable -> Lfe
            if (r11 == 0) goto L87
            r11 = r3
            goto L8a
        L87:
            r11 = 2048000(0x1f4000, float:2.869859E-39)
        L8a:
            r5 = 1024(0x400, float:1.435E-42)
            byte[] r6 = new byte[r5]     // Catch: java.io.IOException -> Lc6 java.net.SocketTimeoutException -> Le3 java.lang.Throwable -> Lfe
        L8e:
            if (r11 <= 0) goto L9e
            r7 = 0
            int r8 = r2.read(r6, r7, r5)     // Catch: java.io.IOException -> Lc6 java.net.SocketTimeoutException -> Le3 java.lang.Throwable -> Lfe
            r9 = -1
            if (r8 != r9) goto L99
            goto L9e
        L99:
            int r11 = r11 - r8
            r4.write(r6, r7, r8)     // Catch: java.io.IOException -> Lc6 java.net.SocketTimeoutException -> Le3 java.lang.Throwable -> Lfe
            goto L8e
        L9e:
            if (r11 > 0) goto Lb3
            java.lang.String r11 = "length 102400 exhausted."
            com.xiaomi.channel.commonutils.logger.b.a(r11)     // Catch: java.io.IOException -> Lc6 java.net.SocketTimeoutException -> Le3 java.lang.Throwable -> Lfe
            com.xiaomi.push.service.aw$a r11 = new com.xiaomi.push.service.aw$a     // Catch: java.io.IOException -> Lc6 java.net.SocketTimeoutException -> Le3 java.lang.Throwable -> Lfe
            r11.<init>(r0, r3)     // Catch: java.io.IOException -> Lc6 java.net.SocketTimeoutException -> Le3 java.lang.Throwable -> Lfe
            com.xiaomi.push.ab.a(r2)
            if (r1 == 0) goto Lb2
            r1.disconnect()
        Lb2:
            return r11
        Lb3:
            byte[] r11 = r4.toByteArray()     // Catch: java.io.IOException -> Lc6 java.net.SocketTimeoutException -> Le3 java.lang.Throwable -> Lfe
            com.xiaomi.push.service.aw$a r3 = new com.xiaomi.push.service.aw$a     // Catch: java.io.IOException -> Lc6 java.net.SocketTimeoutException -> Le3 java.lang.Throwable -> Lfe
            int r4 = r11.length     // Catch: java.io.IOException -> Lc6 java.net.SocketTimeoutException -> Le3 java.lang.Throwable -> Lfe
            r3.<init>(r11, r4)     // Catch: java.io.IOException -> Lc6 java.net.SocketTimeoutException -> Le3 java.lang.Throwable -> Lfe
            com.xiaomi.push.ab.a(r2)
            if (r1 == 0) goto Lc5
            r1.disconnect()
        Lc5:
            return r3
        Lc6:
            r10 = move-exception
            goto Ld5
        Lc8:
            r10 = move-exception
            goto L100
        Lca:
            r10 = move-exception
            r2 = r0
            goto Ld5
        Lcd:
            r2 = r0
            goto Le3
        Lcf:
            r10 = move-exception
            r1 = r0
            goto L100
        Ld2:
            r10 = move-exception
            r1 = r0
            r2 = r1
        Ld5:
            com.xiaomi.channel.commonutils.logger.b.a(r10)     // Catch: java.lang.Throwable -> Lfe
            com.xiaomi.push.ab.a(r2)
            if (r1 == 0) goto Lfd
        Ldd:
            r1.disconnect()
            goto Lfd
        Le1:
            r1 = r0
            r2 = r1
        Le3:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfe
            r11.<init>()     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r3 = "Connect timeout to "
            r11.append(r3)     // Catch: java.lang.Throwable -> Lfe
            r11.append(r10)     // Catch: java.lang.Throwable -> Lfe
            java.lang.String r10 = r11.toString()     // Catch: java.lang.Throwable -> Lfe
            com.xiaomi.channel.commonutils.logger.b.d(r10)     // Catch: java.lang.Throwable -> Lfe
            com.xiaomi.push.ab.a(r2)
            if (r1 == 0) goto Lfd
            goto Ldd
        Lfd:
            return r0
        Lfe:
            r10 = move-exception
            r0 = r2
        L100:
            com.xiaomi.push.ab.a(r0)
            if (r1 == 0) goto L108
            r1.disconnect()
        L108:
            throw r10
    }

    public static com.xiaomi.push.service.aw.b a(android.content.Context r6, java.lang.String r7, boolean r8) {
            com.xiaomi.push.service.aw$b r0 = new com.xiaomi.push.service.aw$b
            r1 = 0
            r2 = 0
            r0.<init>(r1, r2)
            android.graphics.Bitmap r2 = b(r6, r7)
            if (r2 == 0) goto L11
            r0.a = r2
            return r0
        L11:
            com.xiaomi.push.service.aw$a r2 = a(r7, r8)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            if (r2 != 0) goto L1b
            com.xiaomi.push.ab.a(r1)
            return r0
        L1b:
            int r3 = r2.a     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            r0.a = r3     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            byte[] r3 = r2.a     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            if (r3 == 0) goto L4d
            r4 = 0
            if (r8 == 0) goto L46
            java.io.ByteArrayInputStream r8 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            r8.<init>(r3)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            int r1 = a(r6, r8)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            android.graphics.BitmapFactory$Options r5 = new android.graphics.BitmapFactory$Options     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            r5.<init>()     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            r5.inSampleSize = r1     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            int r1 = r3.length     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            android.graphics.Bitmap r1 = android.graphics.BitmapFactory.decodeByteArray(r3, r4, r1, r5)     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            r0.a = r1     // Catch: java.lang.Throwable -> L40 java.lang.Exception -> L43
            r1 = r8
            goto L4d
        L40:
            r6 = move-exception
            r1 = r8
            goto L5d
        L43:
            r6 = move-exception
            r1 = r8
            goto L56
        L46:
            int r8 = r3.length     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            android.graphics.Bitmap r8 = android.graphics.BitmapFactory.decodeByteArray(r3, r4, r8)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            r0.a = r8     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
        L4d:
            byte[] r8 = r2.a     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            a(r6, r8, r7)     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L55
            goto L59
        L53:
            r6 = move-exception
            goto L5d
        L55:
            r6 = move-exception
        L56:
            com.xiaomi.channel.commonutils.logger.b.a(r6)     // Catch: java.lang.Throwable -> L53
        L59:
            com.xiaomi.push.ab.a(r1)
            return r0
        L5d:
            com.xiaomi.push.ab.a(r1)
            throw r6
    }

    private static void a(android.content.Context r7) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.io.File r7 = r7.getCacheDir()
            java.lang.String r7 = r7.getPath()
            r1.append(r7)
            java.lang.String r7 = java.io.File.separator
            r1.append(r7)
            java.lang.String r7 = "mipush_icon"
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            boolean r7 = r0.exists()
            if (r7 != 0) goto L2a
            return
        L2a:
            long r1 = com.xiaomi.push.service.aw.a
            r3 = 0
            int r7 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r7 != 0) goto L38
            long r1 = com.xiaomi.push.aa.a(r0)
            com.xiaomi.push.service.aw.a = r1
        L38:
            long r1 = com.xiaomi.push.service.aw.a
            r5 = 15728640(0xf00000, double:7.7709807E-317)
            int r7 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r7 <= 0) goto L75
            java.io.File[] r7 = r0.listFiles()     // Catch: java.lang.Exception -> L6f
            r0 = 0
        L46:
            int r1 = r7.length     // Catch: java.lang.Exception -> L6f
            if (r0 >= r1) goto L73
            r1 = r7[r0]     // Catch: java.lang.Exception -> L6f
            boolean r1 = r1.isDirectory()     // Catch: java.lang.Exception -> L6f
            if (r1 != 0) goto L6c
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L6f
            r5 = r7[r0]     // Catch: java.lang.Exception -> L6f
            long r5 = r5.lastModified()     // Catch: java.lang.Exception -> L6f
            long r1 = r1 - r5
            long r1 = java.lang.Math.abs(r1)     // Catch: java.lang.Exception -> L6f
            r5 = 1209600(0x127500, double:5.97622E-318)
            int r1 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r1 <= 0) goto L6c
            r1 = r7[r0]     // Catch: java.lang.Exception -> L6f
            r1.delete()     // Catch: java.lang.Exception -> L6f
        L6c:
            int r0 = r0 + 1
            goto L46
        L6f:
            r7 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r7)
        L73:
            com.xiaomi.push.service.aw.a = r3
        L75:
            return
    }

    private static void a(android.content.Context r5, byte[] r6, java.lang.String r7) {
            if (r6 != 0) goto L8
            java.lang.String r5 = "cannot save small icon cause bitmap is null"
            com.xiaomi.channel.commonutils.logger.b.a(r5)
            return
        L8:
            a(r5)
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.io.File r2 = r5.getCacheDir()
            java.lang.String r2 = r2.getPath()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            java.lang.String r2 = "mipush_icon"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L37
            r0.mkdirs()
        L37:
            java.io.File r1 = new java.io.File
            java.lang.String r7 = com.xiaomi.push.bp.a(r7)
            r1.<init>(r0, r7)
            r7 = 0
            boolean r0 = r1.exists()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L69
            if (r0 != 0) goto L4a
            r1.createNewFile()     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L69
        L4a:
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L69
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L66 java.lang.Exception -> L69
            java.io.BufferedOutputStream r3 = new java.io.BufferedOutputStream     // Catch: java.lang.Exception -> L64 java.lang.Throwable -> La9
            r3.<init>(r0)     // Catch: java.lang.Exception -> L64 java.lang.Throwable -> La9
            r3.write(r6)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L61
            r3.flush()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L61
            com.xiaomi.push.ab.a(r3)
            goto L71
        L5e:
            r5 = move-exception
            r7 = r3
            goto Laa
        L61:
            r6 = move-exception
            r7 = r3
            goto L6b
        L64:
            r6 = move-exception
            goto L6b
        L66:
            r5 = move-exception
            r0 = r7
            goto Laa
        L69:
            r6 = move-exception
            r0 = r7
        L6b:
            com.xiaomi.channel.commonutils.logger.b.a(r6)     // Catch: java.lang.Throwable -> La9
            com.xiaomi.push.ab.a(r7)
        L71:
            com.xiaomi.push.ab.a(r0)
            long r6 = com.xiaomi.push.service.aw.a
            r3 = 0
            int r6 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r6 != 0) goto La8
            java.io.File r6 = new java.io.File
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.io.File r5 = r5.getCacheDir()
            java.lang.String r5 = r5.getPath()
            r7.append(r5)
            java.lang.String r5 = java.io.File.separator
            r7.append(r5)
            r7.append(r2)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            long r5 = com.xiaomi.push.aa.a(r6)
            long r0 = r1.length()
            long r5 = r5 + r0
            com.xiaomi.push.service.aw.a = r5
        La8:
            return
        La9:
            r5 = move-exception
        Laa:
            com.xiaomi.push.ab.a(r7)
            com.xiaomi.push.ab.a(r0)
            throw r5
    }

    private static android.graphics.Bitmap b(android.content.Context r4, java.lang.String r5) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.io.File r4 = r4.getCacheDir()
            java.lang.String r4 = r4.getPath()
            r1.append(r4)
            java.lang.String r4 = java.io.File.separator
            r1.append(r4)
            java.lang.String r4 = "mipush_icon"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r5 = com.xiaomi.push.bp.a(r5)
            r0.<init>(r4, r5)
            boolean r4 = r0.exists()
            r5 = 0
            if (r4 != 0) goto L2f
            return r5
        L2f:
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4f
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L4a java.lang.Exception -> L4f
            android.graphics.Bitmap r5 = android.graphics.BitmapFactory.decodeStream(r4)     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L45
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L45
            r0.setLastModified(r1)     // Catch: java.lang.Throwable -> L43 java.lang.Exception -> L45
            com.xiaomi.push.ab.a(r4)
            goto L58
        L43:
            r5 = move-exception
            goto L59
        L45:
            r0 = move-exception
            r3 = r5
            r5 = r4
            r4 = r3
            goto L51
        L4a:
            r4 = move-exception
            r3 = r5
            r5 = r4
            r4 = r3
            goto L59
        L4f:
            r0 = move-exception
            r4 = r5
        L51:
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L4a
            com.xiaomi.push.ab.a(r5)
            r5 = r4
        L58:
            return r5
        L59:
            com.xiaomi.push.ab.a(r4)
            throw r5
    }
}
