package com.loc;

public final class x {
    static java.lang.String a;
    private static final java.lang.String[] b = null;
    private static final java.lang.String[] c = null;

    static {
            java.lang.String r0 = "arm64-v8a"
            java.lang.String r1 = "x86_64"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.loc.x.b = r0
            java.lang.String r0 = "arm"
            java.lang.String r1 = "x86"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.loc.x.c = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        L1a:
            r2 = 80
            if (r1 >= r2) goto L26
            java.lang.String r2 = "="
            r0.append(r2)
            int r1 = r1 + 1
            goto L1a
        L26:
            java.lang.String r0 = r0.toString()
            com.loc.x.a = r0
            return
    }

    public static com.loc.w a() throws com.loc.k {
            com.loc.w$a r0 = new com.loc.w$a
            java.lang.String r1 = "collection"
            java.lang.String r2 = "1.0"
            java.lang.String r3 = "AMap_collection_1.0"
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = "com.amap.api.collection"
            java.lang.String[] r1 = new java.lang.String[]{r1}
            com.loc.w$a r0 = r0.a(r1)
            com.loc.w r0 = r0.a()
            return r0
    }

    public static java.lang.String a(long r1) {
            java.lang.String r0 = "yyyyMMdd HH:mm:ss:SSS"
            java.lang.String r1 = a(r1, r0)
            return r1
    }

    public static java.lang.String a(long r2, java.lang.String r4) {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat     // Catch: java.lang.Throwable -> L11
            java.util.Locale r1 = java.util.Locale.CHINA     // Catch: java.lang.Throwable -> L11
            r0.<init>(r4, r1)     // Catch: java.lang.Throwable -> L11
            java.util.Date r4 = new java.util.Date     // Catch: java.lang.Throwable -> L11
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L11
            java.lang.String r2 = r0.format(r4)     // Catch: java.lang.Throwable -> L11
            goto L1a
        L11:
            r2 = move-exception
            java.lang.String r3 = "ut"
            java.lang.String r4 = "ctt"
            com.loc.as.a(r2, r3, r4)
            r2 = 0
        L1a:
            return r2
    }

    public static java.lang.String a(android.content.Context r7) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            java.lang.String r2 = "ut"
            r3 = 28
            r4 = 21
            if (r0 < r4) goto L33
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 >= r3) goto L33
            android.content.pm.ApplicationInfo r0 = r7.getApplicationInfo()     // Catch: java.lang.Throwable -> L2d
            java.lang.Class<android.content.pm.ApplicationInfo> r4 = android.content.pm.ApplicationInfo.class
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L2d
            java.lang.Class r4 = java.lang.Class.forName(r4)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r5 = "primaryCpuAbi"
            java.lang.reflect.Field r4 = r4.getDeclaredField(r5)     // Catch: java.lang.Throwable -> L2d
            r4.setAccessible(r1)     // Catch: java.lang.Throwable -> L2d
            java.lang.Object r0 = r4.get(r0)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L2d
            goto L35
        L2d:
            r0 = move-exception
            java.lang.String r4 = "gct"
            com.loc.as.a(r0, r2, r4)
        L33:
            java.lang.String r0 = ""
        L35:
            int r4 = android.os.Build.VERSION.SDK_INT
            if (r4 < r3) goto La2
            java.lang.Class<android.os.Build> r3 = android.os.Build.class
            java.lang.String r4 = "SUPPORTED_ABIS"
            java.lang.reflect.Field r3 = r3.getDeclaredField(r4)     // Catch: java.lang.Throwable -> L9c
            r4 = 0
            java.lang.Object r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L9c
            java.lang.String[] r3 = (java.lang.String[]) r3     // Catch: java.lang.Throwable -> L9c
            r5 = 0
            if (r3 == 0) goto L50
            int r6 = r3.length     // Catch: java.lang.Throwable -> L9c
            if (r6 <= 0) goto L50
            r0 = r3[r5]     // Catch: java.lang.Throwable -> L9c
        L50:
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L9c
            if (r3 != 0) goto La2
            java.lang.String[] r3 = com.loc.x.b     // Catch: java.lang.Throwable -> L9c
            java.util.List r3 = java.util.Arrays.asList(r3)     // Catch: java.lang.Throwable -> L9c
            boolean r3 = r3.contains(r0)     // Catch: java.lang.Throwable -> L9c
            if (r3 == 0) goto La2
            android.content.pm.ApplicationInfo r7 = r7.getApplicationInfo()     // Catch: java.lang.Throwable -> L9c
            java.lang.String r7 = r7.nativeLibraryDir     // Catch: java.lang.Throwable -> L9c
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L9c
            if (r3 != 0) goto La2
            java.lang.String r3 = java.io.File.separator     // Catch: java.lang.Throwable -> L9c
            int r3 = r7.lastIndexOf(r3)     // Catch: java.lang.Throwable -> L9c
            int r3 = r3 + r1
            java.lang.String r7 = r7.substring(r3)     // Catch: java.lang.Throwable -> L9c
            java.lang.String[] r1 = com.loc.x.c     // Catch: java.lang.Throwable -> L9c
            java.util.List r1 = java.util.Arrays.asList(r1)     // Catch: java.lang.Throwable -> L9c
            boolean r7 = r1.contains(r7)     // Catch: java.lang.Throwable -> L9c
            if (r7 == 0) goto La2
            java.lang.Class<android.os.Build> r7 = android.os.Build.class
            java.lang.String r1 = "SUPPORTED_32_BIT_ABIS"
            java.lang.reflect.Field r7 = r7.getDeclaredField(r1)     // Catch: java.lang.Throwable -> L9c
            java.lang.Object r7 = r7.get(r4)     // Catch: java.lang.Throwable -> L9c
            java.lang.String[] r7 = (java.lang.String[]) r7     // Catch: java.lang.Throwable -> L9c
            if (r7 == 0) goto La2
            int r1 = r7.length     // Catch: java.lang.Throwable -> L9c
            if (r1 <= 0) goto La2
            r7 = r7[r5]     // Catch: java.lang.Throwable -> L9c
            r0 = r7
            goto La2
        L9c:
            r7 = move-exception
            java.lang.String r1 = "gct_p"
            com.loc.as.a(r7, r2, r1)
        La2:
            boolean r7 = android.text.TextUtils.isEmpty(r0)
            if (r7 == 0) goto Laa
            java.lang.String r0 = android.os.Build.CPU_ABI
        Laa:
            return r0
    }

    public static java.lang.String a(java.lang.Throwable r3) {
            r0 = 0
            java.io.StringWriter r1 = new java.io.StringWriter     // Catch: java.lang.Throwable -> L32
            r1.<init>()     // Catch: java.lang.Throwable -> L32
            java.io.PrintWriter r2 = new java.io.PrintWriter     // Catch: java.lang.Throwable -> L2f
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L2f
            r3.printStackTrace(r2)     // Catch: java.lang.Throwable -> L2d
        Le:
            java.lang.Throwable r3 = r3.getCause()     // Catch: java.lang.Throwable -> L2d
            if (r3 == 0) goto L18
            r3.printStackTrace(r2)     // Catch: java.lang.Throwable -> L2d
            goto Le
        L18:
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L2d
            r1.close()     // Catch: java.lang.Throwable -> L20
            goto L24
        L20:
            r0 = move-exception
            r0.printStackTrace()
        L24:
            r2.close()     // Catch: java.lang.Throwable -> L28
            goto L2c
        L28:
            r0 = move-exception
            r0.printStackTrace()
        L2c:
            return r3
        L2d:
            r3 = move-exception
            goto L35
        L2f:
            r3 = move-exception
            r2 = r0
            goto L35
        L32:
            r3 = move-exception
            r1 = r0
            r2 = r1
        L35:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L42
            r1.close()     // Catch: java.lang.Throwable -> L3e
            goto L42
        L3e:
            r3 = move-exception
            r3.printStackTrace()
        L42:
            if (r2 == 0) goto L4c
            r2.close()     // Catch: java.lang.Throwable -> L48
            goto L4c
        L48:
            r3 = move-exception
            r3.printStackTrace()
        L4c:
            return r0
        L4d:
            r3 = move-exception
            if (r1 == 0) goto L58
            r1.close()     // Catch: java.lang.Throwable -> L54
            goto L58
        L54:
            r0 = move-exception
            r0.printStackTrace()
        L58:
            if (r2 == 0) goto L62
            r2.close()     // Catch: java.lang.Throwable -> L5e
            goto L62
        L5e:
            r0 = move-exception
            r0.printStackTrace()
        L62:
            throw r3
    }

    public static java.lang.String a(java.util.Map<java.lang.String, java.lang.String> r5) {
            int r0 = r5.size()
            if (r0 != 0) goto L8
            r5 = 0
            return r5
        L8:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            r1 = 1
            java.util.Set r5 = r5.entrySet()     // Catch: java.lang.Throwable -> L55
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L55
        L16:
            boolean r2 = r5.hasNext()     // Catch: java.lang.Throwable -> L55
            if (r2 == 0) goto L5d
            java.lang.Object r2 = r5.next()     // Catch: java.lang.Throwable -> L55
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> L55
            java.lang.String r3 = "="
            if (r1 == 0) goto L3d
            r1 = 0
            java.lang.Object r4 = r2.getKey()     // Catch: java.lang.Throwable -> L55
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L55
            r0.append(r4)     // Catch: java.lang.Throwable -> L55
            r0.append(r3)     // Catch: java.lang.Throwable -> L55
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L55
        L39:
            r0.append(r2)     // Catch: java.lang.Throwable -> L55
            goto L16
        L3d:
            java.lang.String r4 = "&"
            r0.append(r4)     // Catch: java.lang.Throwable -> L55
            java.lang.Object r4 = r2.getKey()     // Catch: java.lang.Throwable -> L55
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L55
            r0.append(r4)     // Catch: java.lang.Throwable -> L55
            r0.append(r3)     // Catch: java.lang.Throwable -> L55
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L55
            goto L39
        L55:
            r5 = move-exception
            java.lang.String r1 = "ut"
            java.lang.String r2 = "abP"
            com.loc.as.a(r5, r1, r2)
        L5d:
            java.lang.String r5 = r0.toString()
            return r5
    }

    public static java.lang.String a(byte[] r2) {
            if (r2 == 0) goto L14
            int r0 = r2.length
            if (r0 != 0) goto L6
            goto L14
        L6:
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> Le
            java.lang.String r1 = "UTF-8"
            r0.<init>(r2, r1)     // Catch: java.io.UnsupportedEncodingException -> Le
            return r0
        Le:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r2)
            return r0
        L14:
            java.lang.String r2 = ""
            return r2
    }

    public static java.util.Calendar a(java.lang.String r9, java.lang.String r10) {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat     // Catch: java.text.ParseException -> L3c
            java.util.Locale r1 = java.util.Locale.CHINA     // Catch: java.text.ParseException -> L3c
            r0.<init>(r10, r1)     // Catch: java.text.ParseException -> L3c
            java.util.Calendar r10 = java.util.Calendar.getInstance()     // Catch: java.text.ParseException -> L3c
            java.util.Calendar r1 = java.util.Calendar.getInstance()     // Catch: java.text.ParseException -> L3c
            java.util.Date r9 = r0.parse(r9)     // Catch: java.text.ParseException -> L3c
            r1.setTime(r9)     // Catch: java.text.ParseException -> L3c
            r9 = 1
            int r3 = r10.get(r9)     // Catch: java.text.ParseException -> L3c
            r9 = 2
            int r4 = r10.get(r9)     // Catch: java.text.ParseException -> L3c
            r9 = 5
            int r5 = r10.get(r9)     // Catch: java.text.ParseException -> L3c
            r9 = 11
            int r6 = r1.get(r9)     // Catch: java.text.ParseException -> L3c
            r9 = 12
            int r7 = r1.get(r9)     // Catch: java.text.ParseException -> L3c
            r9 = 13
            int r8 = r1.get(r9)     // Catch: java.text.ParseException -> L3c
            r2 = r10
            r2.set(r3, r4, r5, r6, r7, r8)     // Catch: java.text.ParseException -> L3c
            return r10
        L3c:
            r9 = move-exception
            java.lang.String r10 = "ut"
            java.lang.String r0 = "ctt"
            com.loc.as.a(r9, r10, r0)
            r9 = 0
            return r9
    }

    public static void a(android.content.Context r9, java.lang.String r10, java.lang.String r11, org.json.JSONObject r12) {
            java.lang.String r0 = "sec_code_debug"
            java.lang.String r1 = "key"
            java.lang.String r2 = "sec_code"
            java.lang.String r3 = "info"
            java.lang.String r4 = ""
            java.lang.String r5 = com.loc.l.e(r9)
            java.lang.String r6 = com.loc.s.a(r5)
            java.lang.String r9 = com.loc.l.a(r9)
            boolean r7 = r12.has(r3)     // Catch: java.lang.Throwable -> L9f
            if (r7 == 0) goto L34
            java.lang.String r3 = r12.getString(r3)     // Catch: java.lang.Throwable -> L9f
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9f
            java.lang.String r8 = "请在高德开放平台官网中搜索\""
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L9f
            r7.append(r3)     // Catch: java.lang.Throwable -> L9f
            java.lang.String r8 = "\"相关内容进行解决"
            r7.append(r8)     // Catch: java.lang.Throwable -> L9f
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L9f
            goto L36
        L34:
            r3 = r4
            r7 = r3
        L36:
            java.lang.String r8 = "INVALID_USER_SCODE"
            boolean r8 = r8.equals(r3)     // Catch: java.lang.Throwable -> L9e
            if (r8 == 0) goto L78
            boolean r1 = r12.has(r2)     // Catch: java.lang.Throwable -> L9e
            if (r1 == 0) goto L49
            java.lang.String r1 = r12.getString(r2)     // Catch: java.lang.Throwable -> L9e
            goto L4a
        L49:
            r1 = r4
        L4a:
            boolean r2 = r12.has(r0)     // Catch: java.lang.Throwable -> L9e
            if (r2 == 0) goto L54
            java.lang.String r4 = r12.getString(r0)     // Catch: java.lang.Throwable -> L9e
        L54:
            boolean r0 = r6.equals(r1)     // Catch: java.lang.Throwable -> L9e
            if (r0 != 0) goto L60
            boolean r0 = r6.equals(r4)     // Catch: java.lang.Throwable -> L9e
            if (r0 == 0) goto L9c
        L60:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9e
            r0.<init>()     // Catch: java.lang.Throwable -> L9e
            java.lang.String r1 = "C6K+35Zyo6auY5b635byA5pS+5bmz5Y+w5a6Y572R5Lit5pCc57Si"
            java.lang.String r1 = c(r1)     // Catch: java.lang.Throwable -> L9e
            r0.append(r1)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r1 = "\"请求内容过长导致业务调用失败\"相关内容进行解决"
            r0.append(r1)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L9e
            goto La0
        L78:
            java.lang.String r0 = "INVALID_USER_KEY"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Throwable -> L9e
            if (r0 == 0) goto L9c
            boolean r0 = r12.has(r1)     // Catch: java.lang.Throwable -> L9e
            if (r0 == 0) goto L8a
            java.lang.String r4 = r12.getString(r1)     // Catch: java.lang.Throwable -> L9e
        L8a:
            int r0 = r4.length()     // Catch: java.lang.Throwable -> L9e
            if (r0 <= 0) goto L9c
            boolean r0 = r9.equals(r4)     // Catch: java.lang.Throwable -> L9e
            if (r0 != 0) goto L9c
            java.lang.String r0 = "C6K+35Zyo6auY5b635byA5pS+5bmz5Y+w5a6Y572R5LiK5Y+R6LW35oqA5pyv5ZKo6K+i5bel5Y2V4oCUPui0puWPt+S4jktleemXrumimO+8jOWSqOivoklOVkFMSURfVVNFUl9LRVnlpoLkvZXop6PlhrM="
            java.lang.String r7 = c(r0)     // Catch: java.lang.Throwable -> L9e
        L9c:
            r0 = r7
            goto La0
        L9e:
            r4 = r7
        L9f:
            r0 = r4
        La0:
            java.lang.String r1 = com.loc.x.a
            java.lang.String r2 = "authErrLog"
            android.util.Log.i(r2, r1)
            java.lang.String r1 = "                                   鉴权错误信息                                  "
            android.util.Log.i(r2, r1)
            java.lang.String r1 = com.loc.x.a
            android.util.Log.i(r2, r1)
            java.lang.String r1 = java.lang.String.valueOf(r5)
            java.lang.String r3 = "SHA1Package:"
            java.lang.String r1 = r3.concat(r1)
            f(r1)
            java.lang.String r9 = java.lang.String.valueOf(r9)
            java.lang.String r1 = "key:"
            java.lang.String r9 = r1.concat(r9)
            f(r9)
            java.lang.String r9 = java.lang.String.valueOf(r10)
            java.lang.String r10 = "csid:"
            java.lang.String r9 = r10.concat(r9)
            f(r9)
            java.lang.String r9 = java.lang.String.valueOf(r11)
            java.lang.String r10 = "gsid:"
            java.lang.String r9 = r10.concat(r9)
            f(r9)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            java.lang.String r10 = "json:"
            r9.<init>(r10)
            java.lang.String r10 = r12.toString()
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            f(r9)
            java.lang.String r9 = "                                                                               "
            android.util.Log.i(r2, r9)
            android.util.Log.i(r2, r0)
            java.lang.String r9 = com.loc.x.a
            android.util.Log.i(r2, r9)
            return
    }

    public static void a(java.io.ByteArrayOutputStream r2, byte r3, byte[] r4) {
            r0 = 1
            byte[] r0 = new byte[r0]     // Catch: java.io.IOException -> L1a
            r1 = 0
            r0[r1] = r3     // Catch: java.io.IOException -> L1a
            r2.write(r0)     // Catch: java.io.IOException -> L1a
            r0 = 255(0xff, float:3.57E-43)
            r3 = r3 & r0
            if (r3 >= r0) goto L14
            if (r3 <= 0) goto L14
            r2.write(r4)     // Catch: java.io.IOException -> L1a
            return
        L14:
            if (r3 != r0) goto L19
            r2.write(r4, r1, r0)     // Catch: java.io.IOException -> L1a
        L19:
            return
        L1a:
            r2 = move-exception
            java.lang.String r3 = "ut"
            java.lang.String r4 = "wFie"
            com.loc.as.a(r2, r3, r4)
            return
    }

    public static void a(java.io.ByteArrayOutputStream r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L19
            r3 = 1
            byte[] r3 = new byte[r3]     // Catch: java.io.IOException -> L10
            r0 = 0
            r3[r0] = r0     // Catch: java.io.IOException -> L10
            r2.write(r3)     // Catch: java.io.IOException -> L10
            return
        L10:
            r2 = move-exception
            java.lang.String r3 = "ut"
            java.lang.String r0 = "wsf"
            com.loc.as.a(r2, r3, r0)
            return
        L19:
            int r0 = r3.length()
            r1 = 255(0xff, float:3.57E-43)
            if (r0 <= r1) goto L23
            r0 = 255(0xff, float:3.57E-43)
        L23:
            byte r0 = (byte) r0
            byte[] r3 = a(r3)
            a(r2, r0, r3)
            return
    }

    public static boolean a(android.content.Context r6, java.lang.String r7) {
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            int r1 = r6.checkCallingOrSelfPermission(r7)
            if (r1 == 0) goto Lb
            return r0
        Lb:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 23
            r3 = 1
            if (r1 < r2) goto L43
            android.content.pm.ApplicationInfo r1 = r6.getApplicationInfo()
            int r1 = r1.targetSdkVersion
            if (r1 < r2) goto L43
            java.lang.Class r1 = r6.getClass()     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = "checkSelfPermission"
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L3b
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r0] = r5     // Catch: java.lang.Throwable -> L3b
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L3b
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L3b
            r2[r0] = r7     // Catch: java.lang.Throwable -> L3b
            java.lang.Object r6 = r1.invoke(r6, r2)     // Catch: java.lang.Throwable -> L3b
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Throwable -> L3b
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> L3b
            if (r6 == 0) goto L43
            return r0
        L3b:
            r6 = move-exception
            java.lang.String r7 = "ut"
            java.lang.String r0 = "cpm"
            com.loc.as.a(r6, r7, r0)
        L43:
            return r3
    }

    public static boolean a(org.json.JSONObject r0, java.lang.String r1) {
            if (r0 == 0) goto La
            boolean r0 = r0.has(r1)
            if (r0 == 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public static byte[] a(int r3) {
            int r0 = r3 / 256
            byte r0 = (byte) r0
            int r3 = r3 % 256
            byte r3 = (byte) r3
            r1 = 2
            byte[] r1 = new byte[r1]
            r2 = 0
            r1[r2] = r0
            r0 = 1
            r1[r0] = r3
            return r1
    }

    public static byte[] a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto La
            r1 = 0
            byte[] r1 = new byte[r1]
            return r1
        La:
            java.lang.String r0 = "UTF-8"
            byte[] r1 = r1.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L11
            return r1
        L11:
            byte[] r1 = r1.getBytes()
            return r1
    }

    public static com.loc.w b() throws com.loc.k {
            com.loc.w$a r0 = new com.loc.w$a
            java.lang.String r1 = "co"
            java.lang.String r2 = "1.0.0"
            java.lang.String r3 = "AMap_co_1.0.0"
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = "com.amap.co"
            java.lang.String r2 = "com.amap.opensdk.co"
            java.lang.String r3 = "com.amap.location"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2, r3}
            com.loc.w$a r0 = r0.a(r1)
            com.loc.w r0 = r0.a()
            return r0
    }

    public static java.lang.String b(java.lang.String r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            byte[] r2 = a(r2)
            java.lang.String r2 = com.loc.p.c(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L25
            r0.<init>()     // Catch: java.lang.Throwable -> L25
            int r1 = r2.length()     // Catch: java.lang.Throwable -> L25
            int r1 = r1 % 26
            int r1 = r1 + 65
            char r1 = (char) r1     // Catch: java.lang.Throwable -> L25
            r0.append(r1)     // Catch: java.lang.Throwable -> L25
            r0.append(r2)     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Throwable -> L25
            goto L2f
        L25:
            r2 = move-exception
            java.lang.String r0 = "ut"
            java.lang.String r1 = "tsfb64"
            com.loc.as.a(r2, r0, r1)
            java.lang.String r2 = ""
        L2f:
            return r2
    }

    public static java.lang.String b(java.util.Map<java.lang.String, java.lang.String> r3) {
            if (r3 == 0) goto L43
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        Lf:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L3e
            java.lang.Object r1 = r3.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            int r2 = r0.length()
            if (r2 <= 0) goto L26
            java.lang.String r2 = "&"
            r0.append(r2)
        L26:
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            java.lang.String r2 = "="
            r0.append(r2)
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            goto Lf
        L3e:
            java.lang.String r3 = r0.toString()
            goto L44
        L43:
            r3 = 0
        L44:
            java.lang.String r3 = e(r3)
            return r3
    }

    public static boolean b(android.content.Context r0) {
            boolean r0 = com.loc.ap.a(r0)
            return r0
    }

    public static byte[] b(byte[] r2) {
            byte[] r2 = h(r2)     // Catch: java.lang.Throwable -> L5
            return r2
        L5:
            r2 = move-exception
            java.lang.String r0 = "ut"
            java.lang.String r1 = "gZp"
            com.loc.as.a(r2, r0, r1)
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
    }

    public static java.lang.String c(java.lang.String r2) {
            int r0 = r2.length()
            r1 = 2
            if (r0 >= r1) goto La
            java.lang.String r2 = ""
            return r2
        La:
            r0 = 1
            java.lang.String r2 = r2.substring(r0)
            java.lang.String r2 = com.loc.p.a(r2)
            return r2
    }

    public static byte[] c() {
            java.lang.String r0 = ","
            java.lang.String r1 = "16,16,18,77,15,911,121,77,121,911,38,77,911,99,86,67,611,96,48,77,84,911,38,67,021,301,86,67,611,98,48,77,511,77,48,97,511,58,48,97,511,84,501,87,511,96,48,77,221,911,38,77,121,37,86,67,25,301,86,67,021,96,86,67,021,701,86,67,35,56,86,67,611,37,221,87"
            java.lang.StringBuffer r2 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L59
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L59
            java.lang.StringBuffer r1 = r2.reverse()     // Catch: java.lang.Throwable -> L59
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L59
            java.lang.String[] r1 = r1.split(r0)     // Catch: java.lang.Throwable -> L59
            int r2 = r1.length     // Catch: java.lang.Throwable -> L59
            byte[] r2 = new byte[r2]     // Catch: java.lang.Throwable -> L59
            r3 = 0
            r4 = 0
        L1a:
            int r5 = r1.length     // Catch: java.lang.Throwable -> L59
            if (r4 >= r5) goto L28
            r5 = r1[r4]     // Catch: java.lang.Throwable -> L59
            byte r5 = java.lang.Byte.parseByte(r5)     // Catch: java.lang.Throwable -> L59
            r2[r4] = r5     // Catch: java.lang.Throwable -> L59
            int r4 = r4 + 1
            goto L1a
        L28:
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Throwable -> L59
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L59
            byte[] r1 = com.loc.p.b(r1)     // Catch: java.lang.Throwable -> L59
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L59
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L59
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L59
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L59
            java.lang.StringBuffer r1 = r1.reverse()     // Catch: java.lang.Throwable -> L59
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L59
            java.lang.String[] r0 = r1.split(r0)     // Catch: java.lang.Throwable -> L59
            int r1 = r0.length     // Catch: java.lang.Throwable -> L59
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L59
        L4a:
            int r2 = r0.length     // Catch: java.lang.Throwable -> L59
            if (r3 >= r2) goto L58
            r2 = r0[r3]     // Catch: java.lang.Throwable -> L59
            byte r2 = java.lang.Byte.parseByte(r2)     // Catch: java.lang.Throwable -> L59
            r1[r3] = r2     // Catch: java.lang.Throwable -> L59
            int r3 = r3 + 1
            goto L4a
        L58:
            return r1
        L59:
            r0 = move-exception
            java.lang.String r1 = "ut"
            java.lang.String r2 = "gIV"
            com.loc.as.a(r0, r1, r2)
            r0 = 16
            byte[] r0 = new byte[r0]
            return r0
    }

    public static byte[] c(byte[] r8) {
            java.lang.String r0 = "zp2"
            java.lang.String r1 = "zp1"
            java.lang.String r2 = "ut"
            r3 = 0
            if (r8 == 0) goto L73
            int r4 = r8.length
            if (r4 != 0) goto Le
            goto L73
        Le:
            java.io.ByteArrayOutputStream r4 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L45
            r4.<init>()     // Catch: java.lang.Throwable -> L45
            java.util.zip.ZipOutputStream r5 = new java.util.zip.ZipOutputStream     // Catch: java.lang.Throwable -> L42
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L42
            java.util.zip.ZipEntry r6 = new java.util.zip.ZipEntry     // Catch: java.lang.Throwable -> L40
            java.lang.String r7 = "log"
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L40
            r5.putNextEntry(r6)     // Catch: java.lang.Throwable -> L40
            r5.write(r8)     // Catch: java.lang.Throwable -> L40
            r5.closeEntry()     // Catch: java.lang.Throwable -> L40
            r5.finish()     // Catch: java.lang.Throwable -> L40
            byte[] r3 = r4.toByteArray()     // Catch: java.lang.Throwable -> L40
            r5.close()     // Catch: java.lang.Throwable -> L33
            goto L37
        L33:
            r8 = move-exception
            com.loc.as.a(r8, r2, r1)
        L37:
            r4.close()     // Catch: java.lang.Throwable -> L3b
            goto L5c
        L3b:
            r8 = move-exception
            com.loc.as.a(r8, r2, r0)
            goto L5c
        L40:
            r8 = move-exception
            goto L48
        L42:
            r8 = move-exception
            r5 = r3
            goto L48
        L45:
            r8 = move-exception
            r4 = r3
            r5 = r4
        L48:
            java.lang.String r6 = "zp"
            com.loc.as.a(r8, r2, r6)     // Catch: java.lang.Throwable -> L5d
            if (r5 == 0) goto L57
            r5.close()     // Catch: java.lang.Throwable -> L53
            goto L57
        L53:
            r8 = move-exception
            com.loc.as.a(r8, r2, r1)
        L57:
            if (r4 == 0) goto L5c
            r4.close()     // Catch: java.lang.Throwable -> L3b
        L5c:
            return r3
        L5d:
            r8 = move-exception
            if (r5 == 0) goto L68
            r5.close()     // Catch: java.lang.Throwable -> L64
            goto L68
        L64:
            r3 = move-exception
            com.loc.as.a(r3, r2, r1)
        L68:
            if (r4 == 0) goto L72
            r4.close()     // Catch: java.lang.Throwable -> L6e
            goto L72
        L6e:
            r1 = move-exception
            com.loc.as.a(r1, r2, r0)
        L72:
            throw r8
        L73:
            return r3
    }

    static java.security.PublicKey d() throws java.security.cert.CertificateException, java.security.spec.InvalidKeySpecException, java.security.NoSuchAlgorithmException, java.lang.NullPointerException, java.io.IOException {
            java.lang.String r0 = "MIICnjCCAgegAwIBAgIJAJ0Pdzos7ZfYMA0GCSqGSIb3DQEBBQUAMGgxCzAJBgNVBAYTAkNOMRMwEQYDVQQIDApTb21lLVN0YXRlMRAwDgYDVQQHDAdCZWlqaW5nMREwDwYDVQQKDAhBdXRvbmF2aTEfMB0GA1UEAwwWY29tLmF1dG9uYXZpLmFwaXNlcnZlcjAeFw0xMzA4MTUwNzU2NTVaFw0yMzA4MTMwNzU2NTVaMGgxCzAJBgNVBAYTAkNOMRMwEQYDVQQIDApTb21lLVN0YXRlMRAwDgYDVQQHDAdCZWlqaW5nMREwDwYDVQQKDAhBdXRvbmF2aTEfMB0GA1UEAwwWY29tLmF1dG9uYXZpLmFwaXNlcnZlcjCBnzANBgkqhkiG9w0BAQEFAAOBjQAwgYkCgYEA8eWAyHbFPoFPfdx5AD+D4nYFq4dbJ1p7SIKt19Oz1oivF/6H43v5Fo7s50pD1UF8+Qu4JoUQxlAgOt8OCyQ8DYdkaeB74XKb1wxkIYg/foUwN1CMHPZ9O9ehgna6K4EJXZxR7Y7XVZnbjHZIVn3VpPU/Rdr2v37LjTw+qrABJxMCAwEAAaNQME4wHQYDVR0OBBYEFOM/MLGP8xpVFuVd+3qZkw7uBvOTMB8GA1UdIwQYMBaAFOM/MLGP8xpVFuVd+3qZkw7uBvOTMAwGA1UdEwQFMAMBAf8wDQYJKoZIhvcNAQEFBQADgYEA4LY3g8aAD8JkxAOqUXDDyLuCCGOc2pTIhn0TwMNaVdH4hZlpTeC/wuRD5LJ0z3j+IQ0vLvuQA5uDjVyEOlBrvVIGwSem/1XGUo13DfzgAJ5k1161S5l+sFUo5TxpHOXr8Z5nqJMjieXmhnE/I99GFyHpQmw4cC6rhYUhdhtg+Zk="
            r1 = 0
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L4c
            byte[] r0 = com.loc.p.b(r0)     // Catch: java.lang.Throwable -> L4c
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r0 = "IWC41MDk"
            java.lang.String r0 = c(r0)     // Catch: java.lang.Throwable -> L4d
            java.security.cert.CertificateFactory r0 = java.security.cert.CertificateFactory.getInstance(r0)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = "EUlNB"
            java.lang.String r3 = c(r3)     // Catch: java.lang.Throwable -> L4d
            java.security.KeyFactory r3 = java.security.KeyFactory.getInstance(r3)     // Catch: java.lang.Throwable -> L4d
            java.security.cert.Certificate r0 = r0.generateCertificate(r2)     // Catch: java.lang.Throwable -> L4d
            if (r0 == 0) goto L43
            if (r3 != 0) goto L29
            goto L43
        L29:
            java.security.spec.X509EncodedKeySpec r4 = new java.security.spec.X509EncodedKeySpec     // Catch: java.lang.Throwable -> L4d
            java.security.PublicKey r0 = r0.getPublicKey()     // Catch: java.lang.Throwable -> L4d
            byte[] r0 = r0.getEncoded()     // Catch: java.lang.Throwable -> L4d
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L4d
            java.security.PublicKey r0 = r3.generatePublic(r4)     // Catch: java.lang.Throwable -> L4d
            r2.close()     // Catch: java.lang.Throwable -> L3e
            goto L42
        L3e:
            r1 = move-exception
            r1.printStackTrace()
        L42:
            return r0
        L43:
            r2.close()     // Catch: java.lang.Throwable -> L47
            goto L4b
        L47:
            r0 = move-exception
            r0.printStackTrace()
        L4b:
            return r1
        L4c:
            r2 = r1
        L4d:
            if (r2 == 0) goto L57
            r2.close()     // Catch: java.lang.Throwable -> L53
            goto L57
        L53:
            r0 = move-exception
            r0.printStackTrace()
        L57:
            return r1
    }

    public static byte[] d(java.lang.String r5) {
            int r0 = r5.length()
            int r0 = r0 % 2
            if (r0 == 0) goto L12
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r0 = "0"
            java.lang.String r5 = r0.concat(r5)
        L12:
            int r0 = r5.length()
            int r0 = r0 / 2
            byte[] r1 = new byte[r0]
            r2 = 0
        L1b:
            if (r2 >= r0) goto L31
            int r3 = r2 * 2
            int r4 = r3 + 2
            java.lang.String r3 = r5.substring(r3, r4)
            r4 = 16
            int r3 = java.lang.Integer.parseInt(r3, r4)
            byte r3 = (byte) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L1b
        L31:
            return r1
    }

    public static byte[] d(byte[] r0) {
            byte[] r0 = h(r0)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            byte[] r0 = new byte[r0]
            return r0
    }

    private static java.lang.String e(java.lang.String r7) {
            java.lang.String r0 = "&"
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L3e
            if (r1 == 0) goto Lb
            java.lang.String r7 = ""
            return r7
        Lb:
            java.lang.String[] r1 = r7.split(r0)     // Catch: java.lang.Throwable -> L3e
            java.util.Arrays.sort(r1)     // Catch: java.lang.Throwable -> L3e
            java.lang.StringBuffer r2 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L3e
            r2.<init>()     // Catch: java.lang.Throwable -> L3e
            int r3 = r1.length     // Catch: java.lang.Throwable -> L3e
            r4 = 0
            r5 = 0
        L1a:
            if (r5 >= r3) goto L27
            r6 = r1[r5]     // Catch: java.lang.Throwable -> L3e
            r2.append(r6)     // Catch: java.lang.Throwable -> L3e
            r2.append(r0)     // Catch: java.lang.Throwable -> L3e
            int r5 = r5 + 1
            goto L1a
        L27:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L3e
            int r1 = r0.length()     // Catch: java.lang.Throwable -> L3e
            r2 = 1
            if (r1 <= r2) goto L46
            int r1 = r0.length()     // Catch: java.lang.Throwable -> L3e
            int r1 = r1 - r2
            java.lang.CharSequence r0 = r0.subSequence(r4, r1)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L3e
            return r0
        L3e:
            r0 = move-exception
            java.lang.String r1 = "ut"
            java.lang.String r2 = "sPa"
            com.loc.as.a(r0, r1, r2)
        L46:
            return r7
    }

    static java.lang.String e(byte[] r2) {
            java.lang.String r2 = g(r2)     // Catch: java.lang.Throwable -> L5
            return r2
        L5:
            r2 = move-exception
            java.lang.String r0 = "ut"
            java.lang.String r1 = "h2s"
            com.loc.as.a(r2, r0, r1)
            r2 = 0
            return r2
    }

    static java.lang.String f(byte[] r2) {
            java.lang.String r2 = g(r2)     // Catch: java.lang.Throwable -> L5
            return r2
        L5:
            r2 = move-exception
            java.lang.String r0 = "ut"
            java.lang.String r1 = "csb2h"
            com.loc.as.a(r2, r0, r1)
            r2 = 0
            return r2
    }

    private static void f(java.lang.String r6) {
        L0:
            int r0 = r6.length()
            java.lang.String r1 = "authErrLog"
            r2 = 0
            java.lang.String r3 = "|"
            r4 = 78
            if (r0 >= r4) goto L33
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r6)
        L18:
            int r5 = r6.length()
            int r5 = 78 - r5
            if (r2 >= r5) goto L28
            java.lang.String r5 = " "
            r0.append(r5)
            int r2 = r2 + 1
            goto L18
        L28:
            r0.append(r3)
            java.lang.String r6 = r0.toString()
            android.util.Log.i(r1, r6)
            return
        L33:
            java.lang.String r0 = r6.substring(r2, r4)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r3)
            r2.append(r0)
            r2.append(r3)
            java.lang.String r0 = r2.toString()
            android.util.Log.i(r1, r0)
            java.lang.String r6 = r6.substring(r4)
            goto L0
    }

    public static java.lang.String g(byte[] r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            if (r5 != 0) goto L9
            r5 = 0
            return r5
        L9:
            r1 = 0
        La:
            int r2 = r5.length
            if (r1 >= r2) goto L2c
            r2 = r5[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)
            int r3 = r2.length()
            r4 = 1
            if (r3 != r4) goto L26
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "0"
            java.lang.String r2 = r3.concat(r2)
        L26:
            r0.append(r2)
            int r1 = r1 + 1
            goto La
        L2c:
            java.lang.String r5 = r0.toString()
            return r5
    }

    private static byte[] h(byte[] r3) throws java.io.IOException, java.lang.Throwable {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L28
            r1.<init>()     // Catch: java.lang.Throwable -> L28
            java.util.zip.GZIPOutputStream r2 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Throwable -> L26
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L26
            r2.write(r3)     // Catch: java.lang.Throwable -> L23
            r2.finish()     // Catch: java.lang.Throwable -> L23
            byte[] r3 = r1.toByteArray()     // Catch: java.lang.Throwable -> L23
            r2.close()     // Catch: java.lang.Throwable -> L21
            r1.close()     // Catch: java.lang.Throwable -> L1f
            return r3
        L1f:
            r3 = move-exception
            throw r3
        L21:
            r3 = move-exception
            throw r3
        L23:
            r3 = move-exception
            r0 = r2
            goto L2a
        L26:
            r3 = move-exception
            goto L2a
        L28:
            r3 = move-exception
            r1 = r0
        L2a:
            throw r3     // Catch: java.lang.Throwable -> L2b
        L2b:
            r3 = move-exception
            if (r0 == 0) goto L34
            r0.close()     // Catch: java.lang.Throwable -> L32
            goto L34
        L32:
            r3 = move-exception
            throw r3
        L34:
            if (r1 == 0) goto L3c
            r1.close()     // Catch: java.lang.Throwable -> L3a
            goto L3c
        L3a:
            r3 = move-exception
            throw r3
        L3c:
            throw r3
    }
}
