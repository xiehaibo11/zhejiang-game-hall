package com.tencent.open.utils;

public class m {
    private static java.lang.String a = "";
    private static java.lang.String b = "";
    private static java.lang.String c = "";
    private static java.lang.String d = "";
    private static int e = -1;
    private static java.lang.String f = "0123456789ABCDEF";

    static {
            return
    }

    private static char a(int r1) {
            r1 = r1 & 15
            r0 = 10
            if (r1 >= r0) goto L9
            int r1 = r1 + 48
            goto Lc
        L9:
            int r1 = r1 - r0
            int r1 = r1 + 97
        Lc:
            char r1 = (char) r1
            return r1
    }

    public static long a(android.content.Context r8, android.net.Uri r9) {
            java.lang.String r0 = "cursor exception"
            java.lang.String r1 = "openSDK_LOG.Util"
            android.content.ContentResolver r2 = r8.getContentResolver()
            java.lang.String r8 = "_size"
            java.lang.String[] r4 = new java.lang.String[]{r8}
            r5 = 0
            r6 = 0
            r7 = 0
            r3 = r9
            android.database.Cursor r9 = r2.query(r3, r4, r5, r6, r7)
            r2 = 0
            if (r9 == 0) goto L4b
            int r4 = r9.getCount()
            if (r4 != 0) goto L21
            goto L4b
        L21:
            int r8 = r9.getColumnIndexOrThrow(r8)     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
            boolean r4 = r9.moveToFirst()     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
            if (r4 == 0) goto L2f
            long r2 = r9.getLong(r8)     // Catch: java.lang.Throwable -> L38 java.lang.Exception -> L3a
        L2f:
            r9.close()     // Catch: java.lang.Exception -> L33
            goto L41
        L33:
            r8 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r8)
            goto L41
        L38:
            r8 = move-exception
            goto L42
        L3a:
            r8 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r8)     // Catch: java.lang.Throwable -> L38
            r9.close()     // Catch: java.lang.Exception -> L33
        L41:
            return r2
        L42:
            r9.close()     // Catch: java.lang.Exception -> L46
            goto L4a
        L46:
            r9 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r9)
        L4a:
            throw r8
        L4b:
            return r2
    }

    public static android.graphics.drawable.Drawable a(java.lang.String r5, android.content.Context r6) {
            java.lang.String r0 = "inputStream close exception: "
            r1 = 0
            java.lang.String r2 = "openSDK_LOG.Util"
            if (r6 != 0) goto Ld
            java.lang.String r5 = "context null!"
            com.tencent.open.log.SLog.e(r2, r5)
            return r1
        Ld:
            android.content.res.AssetManager r6 = r6.getAssets()
            java.io.InputStream r6 = r6.open(r5)     // Catch: java.lang.Throwable -> L3a java.io.IOException -> L3c
            android.graphics.drawable.Drawable r1 = android.graphics.drawable.Drawable.createFromStream(r6, r5)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L38
            r6.close()     // Catch: java.lang.Exception -> L1d
            goto L61
        L1d:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
        L23:
            r6.append(r0)
            java.lang.String r5 = r5.getMessage()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.tencent.open.log.SLog.e(r2, r5)
            goto L61
        L35:
            r5 = move-exception
            r1 = r6
            goto L62
        L38:
            r5 = move-exception
            goto L3e
        L3a:
            r5 = move-exception
            goto L62
        L3c:
            r5 = move-exception
            r6 = r1
        L3e:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r3.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = "getDrawable exception: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L35
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L35
            r3.append(r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L35
            com.tencent.open.log.SLog.e(r2, r5)     // Catch: java.lang.Throwable -> L35
            r6.close()     // Catch: java.lang.Exception -> L5a
            goto L61
        L5a:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            goto L23
        L61:
            return r1
        L62:
            r1.close()     // Catch: java.lang.Exception -> L66
            goto L7d
        L66:
            r6 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.tencent.open.log.SLog.e(r2, r6)
        L7d:
            throw r5
    }

    public static android.net.Uri a(android.app.Activity r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = "openSDK_LOG.Util"
            r2 = 0
            if (r0 == 0) goto Lf
            java.lang.String r3 = "grantUriPermissionToAllQQVersion -- stringForFileUri is empty"
            com.tencent.open.log.SLog.e(r1, r3)
            return r2
        Lf:
            java.lang.String r4 = com.tencent.tauth.Tencent.getAuthorities(r4)     // Catch: java.lang.Exception -> L39
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L39
            if (r0 == 0) goto L1a
            return r2
        L1a:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L39
            r0.<init>(r5)     // Catch: java.lang.Exception -> L39
            android.net.Uri r4 = android.support.v4.content.FileProvider.getUriForFile(r3, r4, r0)     // Catch: java.lang.Exception -> L39
            r5 = 3
            java.lang.String r0 = "com.tencent.mobileqq"
            r3.grantUriPermission(r0, r4, r5)     // Catch: java.lang.Exception -> L39
            java.lang.String r0 = "com.tencent.tim"
            r3.grantUriPermission(r0, r4, r5)     // Catch: java.lang.Exception -> L39
            java.lang.String r0 = "com.tencent.minihd.qq"
            r3.grantUriPermission(r0, r4, r5)     // Catch: java.lang.Exception -> L39
            java.lang.String r0 = "com.tencent.qqlite"
            r3.grantUriPermission(r0, r4, r5)     // Catch: java.lang.Exception -> L39
            return r4
        L39:
            r3 = move-exception
            java.lang.String r4 = "grantUriPermissionToAllQQVersion exception:"
            com.tencent.open.log.SLog.e(r1, r4, r3)
            return r2
    }

    public static android.os.Bundle a(android.os.Bundle r1, java.lang.String r2) {
            if (r1 != 0) goto L7
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
        L7:
            java.lang.String r0 = "result"
            r1.putString(r0, r2)
            return r1
    }

    public static android.os.Bundle a(java.lang.String r7) {
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            if (r7 == 0) goto L32
            java.lang.String r1 = "&"
            java.lang.String[] r7 = r7.split(r1)     // Catch: java.lang.Exception -> L31
            int r1 = r7.length     // Catch: java.lang.Exception -> L31
            r2 = 0
            r3 = 0
        L10:
            if (r3 >= r1) goto L32
            r4 = r7[r3]     // Catch: java.lang.Exception -> L31
            java.lang.String r5 = "="
            java.lang.String[] r4 = a(r4, r5)     // Catch: java.lang.Exception -> L31
            int r5 = r4.length     // Catch: java.lang.Exception -> L31
            r6 = 2
            if (r5 != r6) goto L2e
            r5 = r4[r2]     // Catch: java.lang.Exception -> L31
            java.lang.String r5 = java.net.URLDecoder.decode(r5)     // Catch: java.lang.Exception -> L31
            r6 = 1
            r4 = r4[r6]     // Catch: java.lang.Exception -> L31
            java.lang.String r4 = java.net.URLDecoder.decode(r4)     // Catch: java.lang.Exception -> L31
            r0.putString(r5, r4)     // Catch: java.lang.Exception -> L31
        L2e:
            int r3 = r3 + 1
            goto L10
        L31:
            r0 = 0
        L32:
            return r0
    }

    public static android.os.Bundle a(java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15) {
            java.lang.String r5 = ""
            java.lang.String r6 = ""
            java.lang.String r7 = ""
            java.lang.String r8 = ""
            java.lang.String r9 = ""
            java.lang.String r10 = ""
            r0 = r11
            r1 = r13
            r2 = r14
            r3 = r12
            r4 = r15
            android.os.Bundle r11 = a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return r11
    }

    public static android.os.Bundle a(java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17) {
            java.lang.String r6 = ""
            java.lang.String r7 = ""
            java.lang.String r8 = ""
            java.lang.String r9 = ""
            java.lang.String r10 = ""
            java.lang.String r11 = ""
            r0 = r12
            r1 = r14
            r2 = r15
            r3 = r13
            r4 = r16
            r5 = r17
            android.os.Bundle r0 = a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            return r0
    }

    public static android.os.Bundle a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.String r1 = "openid"
            r0.putString(r1, r2)
            java.lang.String r2 = "report_type"
            r0.putString(r2, r3)
            java.lang.String r2 = "act_type"
            r0.putString(r2, r4)
            java.lang.String r2 = "via"
            r0.putString(r2, r5)
            java.lang.String r2 = "app_id"
            r0.putString(r2, r6)
            java.lang.String r2 = "type"
            r0.putString(r2, r7)
            java.lang.String r2 = "login_status"
            r0.putString(r2, r8)
            java.lang.String r2 = "need_user_auth"
            r0.putString(r2, r9)
            java.lang.String r2 = "to_uin"
            r0.putString(r2, r10)
            java.lang.String r2 = "call_source"
            r0.putString(r2, r11)
            java.lang.String r2 = "to_type"
            r0.putString(r2, r12)
            java.lang.String r2 = "platform"
            java.lang.String r3 = "1"
            r0.putString(r2, r3)
            return r0
    }

    public static android.os.Bundle a(java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, java.lang.String r22) {
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r17
            r6 = r18
            r7 = r19
            r8 = r20
            r9 = r21
            r10 = r22
            android.os.Bundle r0 = a(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            r1 = r16
            android.os.Bundle r0 = a(r0, r1)
            return r0
    }

    public static final java.lang.String a(android.content.Context r1) {
            if (r1 == 0) goto L15
            android.content.pm.PackageManager r0 = r1.getPackageManager()
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()
            java.lang.CharSequence r1 = r0.getApplicationLabel(r1)
            if (r1 == 0) goto L15
            java.lang.String r1 = r1.toString()
            return r1
        L15:
            r1 = 0
            return r1
    }

    public static java.lang.String a(java.lang.String r1, int r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L2c
            java.lang.String r0 = "UTF-8"
            byte[] r1 = r1.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L11
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> L11
            goto L2e
        L11:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "convert2Base64String exception: "
            r2.append(r0)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "openSDK_LOG.Util"
            com.tencent.open.log.SLog.e(r2, r1)
        L2c:
            java.lang.String r1 = ""
        L2e:
            return r1
    }

    public static final java.lang.String a(java.lang.String r5, int r6, java.lang.String r7, java.lang.String r8) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L9
            java.lang.String r5 = ""
            return r5
        L9:
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L10
            goto L12
        L10:
            java.lang.String r7 = "UTF-8"
        L12:
            byte[] r0 = r5.getBytes(r7)     // Catch: java.lang.Exception -> L4e
            int r0 = r0.length     // Catch: java.lang.Exception -> L4e
            if (r0 > r6) goto L1a
            return r5
        L1a:
            r0 = 0
            r1 = 0
            r2 = 0
        L1d:
            int r3 = r5.length()     // Catch: java.lang.Exception -> L4e
            if (r1 >= r3) goto L4d
            int r3 = r1 + 1
            java.lang.String r4 = r5.substring(r1, r3)     // Catch: java.lang.Exception -> L4e
            byte[] r4 = r4.getBytes(r7)     // Catch: java.lang.Exception -> L4e
            int r4 = r4.length     // Catch: java.lang.Exception -> L4e
            int r2 = r2 + r4
            if (r2 <= r6) goto L4b
            java.lang.String r5 = r5.substring(r0, r1)     // Catch: java.lang.Exception -> L4e
            boolean r6 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L4e
            if (r6 != 0) goto L4a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4e
            r6.<init>()     // Catch: java.lang.Exception -> L4e
            r6.append(r5)     // Catch: java.lang.Exception -> L4e
            r6.append(r8)     // Catch: java.lang.Exception -> L4e
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Exception -> L4e
        L4a:
            return r5
        L4b:
            r1 = r3
            goto L1d
        L4d:
            return r5
        L4e:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Util.subString has exception: "
            r7.append(r8)
            java.lang.String r6 = r6.getMessage()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            java.lang.String r7 = "openSDK_LOG.Util"
            com.tencent.open.log.SLog.e(r7, r6)
            return r5
    }

    public static java.lang.String a(java.lang.String r5, android.app.Activity r6, java.lang.String r7, com.tencent.tauth.IUiListener r8) {
            java.lang.String r8 = "openSDK_LOG.Util"
            r0 = 0
            boolean r1 = m(r7)     // Catch: java.lang.Exception -> Lae
            boolean r2 = c()     // Catch: java.lang.Exception -> Lae
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r3.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.String r4 = "doPublishMood() check file: isAppSpecificDir="
            r3.append(r4)     // Catch: java.lang.Exception -> Lae
            r3.append(r1)     // Catch: java.lang.Exception -> Lae
            java.lang.String r4 = ",hasSDPermission="
            r3.append(r4)     // Catch: java.lang.Exception -> Lae
            r3.append(r2)     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> Lae
            com.tencent.open.log.SLog.i(r8, r2)     // Catch: java.lang.Exception -> Lae
            if (r1 == 0) goto L2b
            goto La2
        L2b:
            java.lang.String r1 = "Images"
            java.io.File r1 = com.tencent.open.utils.g.a(r1)     // Catch: java.lang.Exception -> Lae
            if (r1 == 0) goto L4e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r2.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Exception -> Lae
            r2.append(r1)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = java.io.File.separator     // Catch: java.lang.Exception -> Lae
            r2.append(r1)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = com.tencent.connect.common.Constants.QQ_SHARE_TEMP_DIR     // Catch: java.lang.Exception -> Lae
            r2.append(r1)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> Lae
            goto L78
        L4e:
            android.content.Context r1 = com.tencent.open.utils.g.a()     // Catch: java.lang.Exception -> Lae
            java.io.File r1 = r1.getCacheDir()     // Catch: java.lang.Exception -> Lae
            if (r1 != 0) goto L5e
            java.lang.String r5 = "getMediaFileUri error, cacheDir is null"
            com.tencent.open.log.SLog.e(r8, r5)     // Catch: java.lang.Exception -> Lae
            return r0
        L5e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r2.<init>()     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Exception -> Lae
            r2.append(r1)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = java.io.File.separator     // Catch: java.lang.Exception -> Lae
            r2.append(r1)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = com.tencent.connect.common.Constants.QQ_SHARE_TEMP_DIR     // Catch: java.lang.Exception -> Lae
            r2.append(r1)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Exception -> Lae
        L78:
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> Lae
            r2.<init>(r7)     // Catch: java.lang.Exception -> Lae
            java.lang.String r7 = r2.getAbsolutePath()     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Exception -> Lae
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lae
            r3.<init>()     // Catch: java.lang.Exception -> Lae
            r3.append(r1)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = java.io.File.separator     // Catch: java.lang.Exception -> Lae
            r3.append(r1)     // Catch: java.lang.Exception -> Lae
            r3.append(r2)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> Lae
            boolean r7 = b(r7, r1)     // Catch: java.lang.Exception -> Lae
            if (r7 == 0) goto La1
            r7 = r1
            goto La2
        La1:
            r7 = r0
        La2:
            android.net.Uri r5 = a(r6, r5, r7)     // Catch: java.lang.Exception -> Lae
            if (r5 != 0) goto La9
            goto Lad
        La9:
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Exception -> Lae
        Lad:
            return r0
        Lae:
            r5 = move-exception
            java.lang.String r6 = "getMediaFileUri error"
            com.tencent.open.log.SLog.e(r8, r6, r5)
            return r0
    }

    public static java.lang.String a(java.util.Map<java.lang.String, java.lang.Object> r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "openSDK_LOG.Util"
            if (r2 != 0) goto La
            java.lang.String r2 = "getString error, params==null"
            com.tencent.open.log.SLog.e(r0, r2)
            return r4
        La:
            boolean r1 = r2.containsKey(r3)
            if (r1 != 0) goto L25
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r1 = "getString error, not comtain : "
            r2.append(r1)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.tencent.open.log.SLog.e(r0, r2)
            return r4
        L25:
            java.lang.Object r2 = r2.get(r3)
            boolean r3 = r2 instanceof java.lang.String
            if (r3 == 0) goto L30
            r4 = r2
            java.lang.String r4 = (java.lang.String) r4
        L30:
            return r4
    }

    public static java.lang.String a(byte[] r5) {
            if (r5 != 0) goto L4
            r5 = 0
            return r5
        L4:
            int r0 = r5.length
            int r0 = r0 * 2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            r0 = 0
        Ld:
            int r2 = r5.length
            if (r0 >= r2) goto L38
            r2 = r5[r0]
            r2 = r2 & 255(0xff, float:3.57E-43)
            r3 = 16
            java.lang.String r2 = java.lang.Integer.toString(r2, r3)
            int r3 = r2.length()
            r4 = 1
            if (r3 != r4) goto L32
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "0"
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
        L32:
            r1.append(r2)
            int r0 = r0 + 1
            goto Ld
        L38:
            java.lang.String r5 = r1.toString()
            return r5
    }

    public static org.json.JSONObject a(org.json.JSONObject r6, java.lang.String r7) {
            if (r6 != 0) goto L7
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
        L7:
            if (r7 == 0) goto L59
            java.lang.String r0 = "&"
            java.lang.String[] r7 = r7.split(r0)
            int r0 = r7.length
            r1 = 0
            r2 = 0
        L12:
            if (r2 >= r0) goto L59
            r3 = r7[r2]
            java.lang.String r4 = "="
            java.lang.String[] r3 = r3.split(r4)
            int r4 = r3.length
            r5 = 2
            if (r4 != r5) goto L56
            r4 = 1
            r5 = r3[r1]     // Catch: org.json.JSONException -> L32 java.lang.Exception -> L34
            java.lang.String r5 = java.net.URLDecoder.decode(r5)     // Catch: org.json.JSONException -> L32 java.lang.Exception -> L34
            r3[r1] = r5     // Catch: org.json.JSONException -> L32 java.lang.Exception -> L34
            r5 = r3[r4]     // Catch: org.json.JSONException -> L32 java.lang.Exception -> L34
            java.lang.String r5 = java.net.URLDecoder.decode(r5)     // Catch: org.json.JSONException -> L32 java.lang.Exception -> L34
            r3[r4] = r5     // Catch: org.json.JSONException -> L32 java.lang.Exception -> L34
            goto L34
        L32:
            r3 = move-exception
            goto L3c
        L34:
            r5 = r3[r1]     // Catch: org.json.JSONException -> L32
            r3 = r3[r4]     // Catch: org.json.JSONException -> L32
            r6.put(r5, r3)     // Catch: org.json.JSONException -> L32
            goto L56
        L3c:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "decodeUrlToJson has exception: "
            r4.append(r5)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            java.lang.String r4 = "openSDK_LOG.Util"
            com.tencent.open.log.SLog.e(r4, r3)
        L56:
            int r2 = r2 + 1
            goto L12
        L59:
            return r6
    }

    private static void a(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            android.content.ComponentName r1 = new android.content.ComponentName
            r1.<init>(r3, r4)
            r0.setComponent(r1)
            java.lang.String r3 = "android.intent.action.VIEW"
            r0.setAction(r3)
            r3 = 1073741824(0x40000000, float:2.0)
            r0.addFlags(r3)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r3)
            android.net.Uri r3 = android.net.Uri.parse(r5)
            r0.setData(r3)
            r2.startActivity(r0)
            return
    }

    public static boolean a() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L11
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()
            goto L12
        L11:
            r0 = 0
        L12:
            if (r0 == 0) goto L16
            r0 = 1
            return r0
        L16:
            r0 = 0
            return r0
    }

    public static boolean a(android.content.Context r7, java.lang.String r8) {
            java.lang.String r0 = "com.android.browser"
            java.lang.String r1 = "com.android.browser.BrowserActivity"
            r2 = 0
            boolean r3 = g(r7)     // Catch: java.lang.Exception -> L19
            if (r3 == 0) goto L15
            java.lang.String r4 = "com.tencent.mtt"
            java.lang.String r5 = "com.tencent.mtt.MainActivity"
            a(r7, r4, r5, r8)     // Catch: java.lang.Exception -> L13
            goto L36
        L13:
            goto L1a
        L15:
            a(r7, r0, r1, r8)     // Catch: java.lang.Exception -> L13
            goto L36
        L19:
            r3 = 0
        L1a:
            java.lang.String r4 = "com.google.android.apps.chrome.Main"
            java.lang.String r5 = "com.android.chrome"
            java.lang.String r6 = "com.google.android.browser"
            if (r3 == 0) goto L2f
            a(r7, r0, r1, r8)     // Catch: java.lang.Exception -> L26
            goto L36
        L26:
            a(r7, r6, r1, r8)     // Catch: java.lang.Exception -> L2a
            goto L36
        L2a:
            a(r7, r5, r4, r8)     // Catch: java.lang.Exception -> L2e
            goto L36
        L2e:
            return r2
        L2f:
            a(r7, r6, r1, r8)     // Catch: java.lang.Exception -> L33
            goto L36
        L33:
            a(r7, r5, r4, r8)     // Catch: java.lang.Exception -> L38
        L36:
            r7 = 1
            return r7
        L38:
            return r2
    }

    public static boolean a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 >= r1) goto L1d
            android.content.pm.PackageManager r0 = r2.getPackageManager()
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r1 = "android.permission.WRITE_EXTERNAL_STORAGE"
            int r2 = r0.checkPermission(r1, r2)
            if (r2 != 0) goto L1b
            boolean r2 = b(r3, r4)
            goto L21
        L1b:
            r2 = 0
            goto L21
        L1d:
            boolean r2 = b(r3, r4)
        L21:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "copyFileByCheckPermission() copy success:"
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "openSDK_LOG.Util"
            com.tencent.open.log.SLog.i(r4, r3)
            return r2
    }

    public static boolean a(android.content.Context r1, boolean r2) {
            boolean r2 = c(r1)
            r0 = 1
            if (r2 == 0) goto L10
            java.lang.String r2 = "com.tencent.minihd.qq"
            java.lang.String r2 = com.tencent.open.utils.k.a(r1, r2)
            if (r2 == 0) goto L10
            return r0
        L10:
            java.lang.String r2 = "4.1"
            int r2 = com.tencent.open.utils.k.c(r1, r2)
            if (r2 >= 0) goto L21
            java.lang.String r2 = "com.tencent.tim"
            java.lang.String r1 = com.tencent.open.utils.k.a(r1, r2)
            if (r1 != 0) goto L21
            r0 = 0
        L21:
            return r0
    }

    public static boolean a(java.io.File r6, java.io.File r7) {
            java.lang.String r0 = "copyFile error, "
            java.lang.String r1 = "openSDK_LOG.Util"
            r2 = 0
            r3 = 0
            boolean r4 = r7.exists()     // Catch: java.lang.Throwable -> L6c java.lang.OutOfMemoryError -> L6f java.io.IOException -> L84
            if (r4 == 0) goto Lf
            r7.delete()     // Catch: java.lang.Throwable -> L6c java.lang.OutOfMemoryError -> L6f java.io.IOException -> L84
        Lf:
            java.io.File r4 = r7.getParentFile()     // Catch: java.lang.Throwable -> L6c java.lang.OutOfMemoryError -> L6f java.io.IOException -> L84
            if (r4 == 0) goto L26
            java.io.File r4 = r7.getParentFile()     // Catch: java.lang.Throwable -> L6c java.lang.OutOfMemoryError -> L6f java.io.IOException -> L84
            boolean r4 = r4.exists()     // Catch: java.lang.Throwable -> L6c java.lang.OutOfMemoryError -> L6f java.io.IOException -> L84
            if (r4 != 0) goto L26
            java.io.File r4 = r7.getParentFile()     // Catch: java.lang.Throwable -> L6c java.lang.OutOfMemoryError -> L6f java.io.IOException -> L84
            r4.mkdirs()     // Catch: java.lang.Throwable -> L6c java.lang.OutOfMemoryError -> L6f java.io.IOException -> L84
        L26:
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L6c java.lang.OutOfMemoryError -> L6f java.io.IOException -> L84
            r4.<init>(r7)     // Catch: java.lang.Throwable -> L6c java.lang.OutOfMemoryError -> L6f java.io.IOException -> L84
            java.io.BufferedInputStream r7 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L60 java.lang.OutOfMemoryError -> L64 java.io.IOException -> L68
            java.io.FileInputStream r5 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L60 java.lang.OutOfMemoryError -> L64 java.io.IOException -> L68
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L60 java.lang.OutOfMemoryError -> L64 java.io.IOException -> L68
            r7.<init>(r5)     // Catch: java.lang.Throwable -> L60 java.lang.OutOfMemoryError -> L64 java.io.IOException -> L68
            r6 = 102400(0x19000, float:1.43493E-40)
            byte[] r6 = new byte[r6]     // Catch: java.lang.Throwable -> L5a java.lang.OutOfMemoryError -> L5c java.io.IOException -> L5e
        L3a:
            int r3 = r7.read(r6)     // Catch: java.lang.Throwable -> L5a java.lang.OutOfMemoryError -> L5c java.io.IOException -> L5e
            r5 = -1
            if (r3 == r5) goto L48
            r4.write(r6, r2, r3)     // Catch: java.lang.Throwable -> L5a java.lang.OutOfMemoryError -> L5c java.io.IOException -> L5e
            r4.flush()     // Catch: java.lang.Throwable -> L5a java.lang.OutOfMemoryError -> L5c java.io.IOException -> L5e
            goto L3a
        L48:
            r2 = 1
            r4.close()     // Catch: java.io.IOException -> L4d
            goto L51
        L4d:
            r6 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r6)
        L51:
            r7.close()     // Catch: java.io.IOException -> L55
            goto L98
        L55:
            r6 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r6)
            goto L98
        L5a:
            r6 = move-exception
            goto L62
        L5c:
            r6 = move-exception
            goto L66
        L5e:
            r6 = move-exception
            goto L6a
        L60:
            r6 = move-exception
            r7 = r3
        L62:
            r3 = r4
            goto L9a
        L64:
            r6 = move-exception
            r7 = r3
        L66:
            r3 = r4
            goto L71
        L68:
            r6 = move-exception
            r7 = r3
        L6a:
            r3 = r4
            goto L86
        L6c:
            r6 = move-exception
            r7 = r3
            goto L9a
        L6f:
            r6 = move-exception
            r7 = r3
        L71:
            com.tencent.open.log.SLog.e(r1, r0, r6)     // Catch: java.lang.Throwable -> L99
            if (r3 == 0) goto L7e
            r3.close()     // Catch: java.io.IOException -> L7a
            goto L7e
        L7a:
            r6 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r6)
        L7e:
            if (r7 == 0) goto L98
            r7.close()     // Catch: java.io.IOException -> L55
            goto L98
        L84:
            r6 = move-exception
            r7 = r3
        L86:
            com.tencent.open.log.SLog.e(r1, r0, r6)     // Catch: java.lang.Throwable -> L99
            if (r3 == 0) goto L93
            r3.close()     // Catch: java.io.IOException -> L8f
            goto L93
        L8f:
            r6 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r6)
        L93:
            if (r7 == 0) goto L98
            r7.close()     // Catch: java.io.IOException -> L55
        L98:
            return r2
        L99:
            r6 = move-exception
        L9a:
            if (r3 == 0) goto La4
            r3.close()     // Catch: java.io.IOException -> La0
            goto La4
        La0:
            r2 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r2)
        La4:
            if (r7 == 0) goto Lae
            r7.close()     // Catch: java.io.IOException -> Laa
            goto Lae
        Laa:
            r7 = move-exception
            com.tencent.open.log.SLog.e(r1, r0, r7)
        Lae:
            throw r6
    }

    public static boolean a(java.util.Map<java.lang.String, java.lang.Object> r2, java.lang.String r3, boolean r4) {
            java.lang.String r0 = "openSDK_LOG.Util"
            if (r2 != 0) goto La
            java.lang.String r2 = "getBoolean error, params==null"
            com.tencent.open.log.SLog.e(r0, r2)
            return r4
        La:
            boolean r1 = r2.containsKey(r3)
            if (r1 != 0) goto L25
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r1 = "getBoolean error, not comtain : "
            r2.append(r1)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.tencent.open.log.SLog.e(r0, r2)
            return r4
        L25:
            java.lang.Object r2 = r2.get(r3)
            boolean r3 = r2 instanceof java.lang.Boolean
            if (r3 == 0) goto L33
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r4 = r2.booleanValue()
        L33:
            return r4
    }

    public static java.lang.String[] a(java.lang.String r5, java.lang.String r6) {
            int r0 = r5.indexOf(r6)
            r1 = 1
            r2 = 0
            r3 = -1
            if (r0 != r3) goto Le
            java.lang.String[] r6 = new java.lang.String[r1]
            r6[r2] = r5
            return r6
        Le:
            r3 = 2
            java.lang.String[] r3 = new java.lang.String[r3]
            java.lang.String r4 = r5.substring(r2, r0)
            r3[r2] = r4
            int r6 = r6.length()
            int r0 = r0 + r6
            java.lang.String r5 = r5.substring(r0)
            r3[r1] = r5
            return r3
    }

    public static android.os.Bundle b(java.lang.String r2) {
            java.lang.String r0 = "auth://"
            java.lang.String r1 = "http://"
            java.lang.String r2 = r2.replace(r0, r1)
            java.net.URL r0 = new java.net.URL     // Catch: java.net.MalformedURLException -> L21
            r0.<init>(r2)     // Catch: java.net.MalformedURLException -> L21
            java.lang.String r2 = r0.getQuery()     // Catch: java.net.MalformedURLException -> L21
            android.os.Bundle r2 = a(r2)     // Catch: java.net.MalformedURLException -> L21
            java.lang.String r0 = r0.getRef()     // Catch: java.net.MalformedURLException -> L21
            android.os.Bundle r0 = a(r0)     // Catch: java.net.MalformedURLException -> L21
            r2.putAll(r0)     // Catch: java.net.MalformedURLException -> L21
            return r2
        L21:
            android.os.Bundle r2 = new android.os.Bundle
            r2.<init>()
            return r2
    }

    public static java.lang.String b() {
            java.io.File r0 = com.tencent.open.utils.g.e()
            if (r0 == 0) goto L14
            boolean r1 = r0.exists()
            if (r1 != 0) goto Lf
            r0.mkdirs()
        Lf:
            java.lang.String r0 = r0.toString()
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    public static java.lang.String b(android.content.Context r6, android.net.Uri r7) {
            r0 = 0
            if (r7 != 0) goto L4
            return r0
        L4:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            r3 = 0
            r4 = 1
            if (r1 < r2) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            if (r1 == 0) goto Lcd
            boolean r1 = android.provider.DocumentsContract.isDocumentUri(r6, r7)
            if (r1 == 0) goto Lcd
            java.lang.String r1 = r7.getAuthority()
            java.lang.String r2 = "com.android.externalstorage.documents"
            boolean r2 = r2.equals(r1)
            java.lang.String r5 = ":"
            if (r2 == 0) goto L5d
            java.lang.String r6 = android.provider.DocumentsContract.getDocumentId(r7)
            java.lang.String[] r6 = r6.split(r5)
            r7 = r6[r3]
            java.lang.String r0 = "primary"
            boolean r0 = r0.equals(r7)
            java.lang.String r1 = "/"
            if (r0 == 0) goto L4c
            java.io.File r7 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r7 = r7.getAbsolutePath()
            java.lang.String r7 = r7.concat(r1)
            r6 = r6[r4]
            java.lang.String r6 = r7.concat(r6)
            return r6
        L4c:
            java.lang.String r0 = "/storage/"
            java.lang.String r7 = r0.concat(r7)
            java.lang.String r7 = r7.concat(r1)
            r6 = r6[r4]
            java.lang.String r6 = r7.concat(r6)
            return r6
        L5d:
            java.lang.String r2 = "com.android.providers.downloads.documents"
            boolean r2 = r2.equals(r1)
            if (r2 == 0) goto L8b
            java.lang.String r7 = android.provider.DocumentsContract.getDocumentId(r7)
            java.lang.String r0 = "raw:"
            boolean r1 = r7.startsWith(r0)
            if (r1 == 0) goto L78
            java.lang.String r6 = ""
            java.lang.String r6 = r7.replaceFirst(r0, r6)
            return r6
        L78:
            java.lang.String r0 = "content://downloads/public_downloads"
            android.net.Uri r0 = android.net.Uri.parse(r0)
            long r1 = java.lang.Long.parseLong(r7)
            android.net.Uri r7 = android.content.ContentUris.withAppendedId(r0, r1)
            java.lang.String r6 = c(r6, r7)
            return r6
        L8b:
            java.lang.String r2 = "com.android.providers.media.documents"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto Lcc
            java.lang.String r7 = android.provider.DocumentsContract.getDocumentId(r7)
            java.lang.String[] r7 = r7.split(r5)
            r1 = r7[r3]
            java.lang.String r2 = "image"
            boolean r2 = r2.equals(r1)
            if (r2 == 0) goto La8
            android.net.Uri r0 = android.provider.MediaStore.Images.Media.EXTERNAL_CONTENT_URI
            goto Lbd
        La8:
            java.lang.String r2 = "video"
            boolean r2 = r2.equals(r1)
            if (r2 == 0) goto Lb3
            android.net.Uri r0 = android.provider.MediaStore.Video.Media.EXTERNAL_CONTENT_URI
            goto Lbd
        Lb3:
            java.lang.String r2 = "audio"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto Lcc
            android.net.Uri r0 = android.provider.MediaStore.Audio.Media.EXTERNAL_CONTENT_URI
        Lbd:
            r7 = r7[r4]
            long r1 = java.lang.Long.parseLong(r7)
            android.net.Uri r7 = android.content.ContentUris.withAppendedId(r0, r1)
            java.lang.String r6 = c(r6, r7)
            return r6
        Lcc:
            return r0
        Lcd:
            java.lang.String r1 = r7.getScheme()
            java.lang.String r2 = "content"
            boolean r2 = r2.equals(r1)
            if (r2 == 0) goto Lde
            java.lang.String r0 = c(r6, r7)
            goto Lea
        Lde:
            java.lang.String r6 = "file"
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto Lea
            java.lang.String r0 = r7.getPath()
        Lea:
            return r0
    }

    public static void b(android.content.Context r5, java.lang.String r6) {
            java.lang.String r0 = "getPackageInfo has exception: "
            java.lang.String r1 = "openSDK_LOG.Util"
            if (r5 != 0) goto L7
            return
        L7:
            android.content.pm.PackageManager r5 = r5.getPackageManager()     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            r2 = 0
            android.content.pm.PackageInfo r5 = r5.getPackageInfo(r6, r2)     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            java.lang.String r6 = r5.versionName     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            com.tencent.open.utils.m.b = r6     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            r3 = 46
            int r4 = r6.lastIndexOf(r3)     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            java.lang.String r6 = r6.substring(r2, r4)     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            com.tencent.open.utils.m.a = r6     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            java.lang.String r6 = com.tencent.open.utils.m.b     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            java.lang.String r2 = com.tencent.open.utils.m.b     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            int r2 = r2.lastIndexOf(r3)     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            int r2 = r2 + 1
            java.lang.String r3 = com.tencent.open.utils.m.b     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            int r3 = r3.length()     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            java.lang.String r6 = r6.substring(r2, r3)     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            com.tencent.open.utils.m.d = r6     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            int r5 = r5.versionCode     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            com.tencent.open.utils.m.e = r5     // Catch: java.lang.Exception -> L3b android.content.pm.PackageManager.NameNotFoundException -> L53
            goto L6a
        L3b:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            java.lang.String r5 = r5.getMessage()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.tencent.open.log.SLog.e(r1, r5)
            goto L6a
        L53:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            java.lang.String r5 = r5.getMessage()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.tencent.open.log.SLog.e(r1, r5)
        L6a:
            return
    }

    public static boolean b(android.content.Context r5) {
            r0 = 1
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "android.permission.ACCESS_NETWORK_STATE"
            boolean r1 = i(r5, r1)
            if (r1 == 0) goto Ld
            return r0
        Ld:
            java.lang.String r1 = "connectivity"
            java.lang.Object r5 = r5.getSystemService(r1)
            android.net.ConnectivityManager r5 = (android.net.ConnectivityManager) r5
            if (r5 != 0) goto L18
            return r0
        L18:
            r1 = 0
            android.net.NetworkInfo[] r1 = r5.getAllNetworkInfo()     // Catch: java.lang.Exception -> L1e
            goto L26
        L1e:
            r5 = move-exception
            java.lang.String r2 = "openSDK_LOG.Util"
            java.lang.String r3 = "Util.isNetWorkAvailable has exception: "
            com.tencent.open.log.SLog.e(r2, r3, r5)
        L26:
            r5 = 0
            if (r1 == 0) goto L3d
            int r2 = r1.length
            if (r2 != 0) goto L2d
            goto L3d
        L2d:
            int r2 = r1.length
            r3 = 0
        L2f:
            if (r3 >= r2) goto L3d
            r4 = r1[r3]
            boolean r4 = r4.isConnectedOrConnecting()
            if (r4 == 0) goto L3a
            return r0
        L3a:
            int r3 = r3 + 1
            goto L2f
        L3d:
            return r5
    }

    public static boolean b(java.lang.String r3, java.lang.String r4) {
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L38
            java.io.File r1 = l(r4)     // Catch: java.io.IOException -> L14
            boolean r3 = a(r0, r1)     // Catch: java.io.IOException -> L14
            goto L39
        L14:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "copy fail from "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = " to "
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = " "
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r4 = "openSDK_LOG.Util"
            com.tencent.open.log.SLog.d(r4, r3, r0)
        L38:
            r3 = 0
        L39:
            return r3
    }

    public static java.lang.String c(android.content.Context r12, android.net.Uri r13) {
            java.lang.String r0 = "close fileOutputStream error"
            java.lang.String r1 = "close ParcelFileDescriptor error"
            java.lang.String r2 = "close fileIuputStream error"
            java.lang.String r3 = "_data"
            java.lang.String[] r6 = new java.lang.String[]{r3}
            r10 = 0
            android.content.ContentResolver r4 = r12.getContentResolver()     // Catch: java.lang.Exception -> L2c
            r7 = 0
            r8 = 0
            r9 = 0
            r5 = r13
            android.database.Cursor r4 = r4.query(r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> L2c
            if (r4 == 0) goto L1c4
            boolean r5 = r4.moveToFirst()     // Catch: java.lang.Exception -> L2a
            if (r5 == 0) goto L1c4
            int r3 = r4.getColumnIndexOrThrow(r3)     // Catch: java.lang.Exception -> L2a
            java.lang.String r12 = r4.getString(r3)     // Catch: java.lang.Exception -> L2a
            return r12
        L2a:
            r3 = move-exception
            goto L2e
        L2c:
            r3 = move-exception
            r4 = r10
        L2e:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "queryAbsolutePath error : "
            r5.append(r6)
            java.lang.String r3 = r3.getMessage()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            java.lang.String r5 = "openSDK_LOG.Util"
            com.tencent.open.log.SLog.e(r5, r3)
            if (r4 == 0) goto L4d
            r4.close()
        L4d:
            android.content.ContentResolver r3 = r12.getContentResolver()     // Catch: java.lang.Throwable -> L14c java.lang.Exception -> L151
            java.lang.String r4 = "r"
            android.os.ParcelFileDescriptor r3 = r3.openFileDescriptor(r13, r4)     // Catch: java.lang.Throwable -> L14c java.lang.Exception -> L151
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L144 java.lang.Exception -> L148
            java.io.FileDescriptor r6 = r3.getFileDescriptor()     // Catch: java.lang.Throwable -> L144 java.lang.Exception -> L148
            r4.<init>(r6)     // Catch: java.lang.Throwable -> L144 java.lang.Exception -> L148
            java.lang.String r6 = "Images"
            java.io.File r12 = h(r12, r6)     // Catch: java.lang.Throwable -> L13d java.lang.Exception -> L141
            if (r12 != 0) goto La6
            java.lang.String r12 = "getExternalFilesDir return null"
            com.tencent.open.log.SLog.e(r5, r12)     // Catch: java.lang.Throwable -> L13d java.lang.Exception -> L141
            r4.close()     // Catch: java.io.IOException -> L71
            goto L88
        L71:
            r12 = move-exception
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            r13.append(r2)
            java.lang.String r12 = r12.getMessage()
            r13.append(r12)
            java.lang.String r12 = r13.toString()
            com.tencent.open.log.SLog.e(r5, r12)
        L88:
            if (r3 == 0) goto La5
            r3.close()     // Catch: java.io.IOException -> L8e
            goto La5
        L8e:
            r12 = move-exception
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            r13.append(r1)
            java.lang.String r12 = r12.getMessage()
            r13.append(r12)
            java.lang.String r12 = r13.toString()
            com.tencent.open.log.SLog.e(r5, r12)
        La5:
            return r10
        La6:
            boolean r6 = r12.exists()     // Catch: java.lang.Throwable -> L13d java.lang.Exception -> L141
            if (r6 != 0) goto Laf
            r12.mkdirs()     // Catch: java.lang.Throwable -> L13d java.lang.Exception -> L141
        Laf:
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L13d java.lang.Exception -> L141
            java.lang.String r13 = r13.getLastPathSegment()     // Catch: java.lang.Throwable -> L13d java.lang.Exception -> L141
            r6.<init>(r12, r13)     // Catch: java.lang.Throwable -> L13d java.lang.Exception -> L141
            boolean r12 = r6.exists()     // Catch: java.lang.Throwable -> L13d java.lang.Exception -> L141
            if (r12 != 0) goto Lc1
            r6.createNewFile()     // Catch: java.lang.Throwable -> L13d java.lang.Exception -> L141
        Lc1:
            java.io.FileOutputStream r12 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L13d java.lang.Exception -> L141
            r12.<init>(r6)     // Catch: java.lang.Throwable -> L13d java.lang.Exception -> L141
            r13 = 2048(0x800, float:2.87E-42)
            byte[] r13 = new byte[r13]     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L138
        Lca:
            int r7 = r4.read(r13)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L138
            r8 = -1
            if (r7 == r8) goto Ld6
            r8 = 0
            r12.write(r13, r8, r7)     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L138
            goto Lca
        Ld6:
            r12.flush()     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L138
            java.lang.String r13 = r6.getAbsolutePath()     // Catch: java.lang.Throwable -> L131 java.lang.Exception -> L138
            r4.close()     // Catch: java.io.IOException -> Le1
            goto Lf8
        Le1:
            r4 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r2)
            java.lang.String r2 = r4.getMessage()
            r6.append(r2)
            java.lang.String r2 = r6.toString()
            com.tencent.open.log.SLog.e(r5, r2)
        Lf8:
            r12.close()     // Catch: java.io.IOException -> Lfc
            goto L113
        Lfc:
            r12 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r12 = r12.getMessage()
            r2.append(r12)
            java.lang.String r12 = r2.toString()
            com.tencent.open.log.SLog.e(r5, r12)
        L113:
            if (r3 == 0) goto L130
            r3.close()     // Catch: java.io.IOException -> L119
            goto L130
        L119:
            r12 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r12 = r12.getMessage()
            r0.append(r12)
            java.lang.String r12 = r0.toString()
            com.tencent.open.log.SLog.e(r5, r12)
        L130:
            return r13
        L131:
            r13 = move-exception
            r10 = r4
            r11 = r13
            r13 = r12
            r12 = r11
            goto L1c7
        L138:
            r13 = move-exception
            r11 = r13
            r13 = r12
            r12 = r11
            goto L155
        L13d:
            r12 = move-exception
            r13 = r10
            goto L1c6
        L141:
            r12 = move-exception
            r13 = r10
            goto L155
        L144:
            r12 = move-exception
            r13 = r10
            goto L1c7
        L148:
            r12 = move-exception
            r13 = r10
            r4 = r13
            goto L155
        L14c:
            r12 = move-exception
            r13 = r10
            r3 = r13
            goto L1c7
        L151:
            r12 = move-exception
            r13 = r10
            r3 = r13
            r4 = r3
        L155:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1c5
            r6.<init>()     // Catch: java.lang.Throwable -> L1c5
            java.lang.String r7 = "copy file from uri error : "
            r6.append(r7)     // Catch: java.lang.Throwable -> L1c5
            java.lang.String r12 = r12.getMessage()     // Catch: java.lang.Throwable -> L1c5
            r6.append(r12)     // Catch: java.lang.Throwable -> L1c5
            java.lang.String r12 = r6.toString()     // Catch: java.lang.Throwable -> L1c5
            com.tencent.open.log.SLog.e(r5, r12)     // Catch: java.lang.Throwable -> L1c5
            if (r4 == 0) goto L18a
            r4.close()     // Catch: java.io.IOException -> L173
            goto L18a
        L173:
            r12 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            java.lang.String r12 = r12.getMessage()
            r4.append(r12)
            java.lang.String r12 = r4.toString()
            com.tencent.open.log.SLog.e(r5, r12)
        L18a:
            if (r13 == 0) goto L1a7
            r13.close()     // Catch: java.io.IOException -> L190
            goto L1a7
        L190:
            r12 = move-exception
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            r13.append(r0)
            java.lang.String r12 = r12.getMessage()
            r13.append(r12)
            java.lang.String r12 = r13.toString()
            com.tencent.open.log.SLog.e(r5, r12)
        L1a7:
            if (r3 == 0) goto L1c4
            r3.close()     // Catch: java.io.IOException -> L1ad
            goto L1c4
        L1ad:
            r12 = move-exception
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            r13.append(r1)
            java.lang.String r12 = r12.getMessage()
            r13.append(r12)
            java.lang.String r12 = r13.toString()
            com.tencent.open.log.SLog.e(r5, r12)
        L1c4:
            return r10
        L1c5:
            r12 = move-exception
        L1c6:
            r10 = r4
        L1c7:
            if (r10 == 0) goto L1e4
            r10.close()     // Catch: java.io.IOException -> L1cd
            goto L1e4
        L1cd:
            r4 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r2)
            java.lang.String r2 = r4.getMessage()
            r6.append(r2)
            java.lang.String r2 = r6.toString()
            com.tencent.open.log.SLog.e(r5, r2)
        L1e4:
            if (r13 == 0) goto L201
            r13.close()     // Catch: java.io.IOException -> L1ea
            goto L201
        L1ea:
            r13 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r13 = r13.getMessage()
            r2.append(r13)
            java.lang.String r13 = r2.toString()
            com.tencent.open.log.SLog.e(r5, r13)
        L201:
            if (r3 == 0) goto L21e
            r3.close()     // Catch: java.io.IOException -> L207
            goto L21e
        L207:
            r13 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r13 = r13.getMessage()
            r0.append(r13)
            java.lang.String r13 = r0.toString()
            com.tencent.open.log.SLog.e(r5, r13)
        L21e:
            throw r12
    }

    public static java.lang.String c(android.content.Context r0, java.lang.String r1) {
            if (r0 != 0) goto L5
            java.lang.String r0 = ""
            return r0
        L5:
            b(r0, r1)
            java.lang.String r0 = com.tencent.open.utils.m.b
            return r0
    }

    public static org.json.JSONObject c(java.lang.String r2) {
            java.lang.String r0 = "auth://"
            java.lang.String r1 = "http://"
            java.lang.String r2 = r2.replace(r0, r1)
            java.net.URL r0 = new java.net.URL     // Catch: java.net.MalformedURLException -> L1e
            r0.<init>(r2)     // Catch: java.net.MalformedURLException -> L1e
            r2 = 0
            java.lang.String r1 = r0.getQuery()     // Catch: java.net.MalformedURLException -> L1e
            org.json.JSONObject r2 = a(r2, r1)     // Catch: java.net.MalformedURLException -> L1e
            java.lang.String r0 = r0.getRef()     // Catch: java.net.MalformedURLException -> L1e
            a(r2, r0)     // Catch: java.net.MalformedURLException -> L1e
            return r2
        L1e:
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            return r2
    }

    public static boolean c() {
            android.content.Context r0 = com.tencent.open.utils.g.a()
            r1 = 0
            if (r0 == 0) goto L18
            android.content.pm.PackageManager r2 = r0.getPackageManager()
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r3 = "android.permission.WRITE_EXTERNAL_STORAGE"
            int r0 = r2.checkPermission(r3, r0)
            if (r0 != 0) goto L18
            r1 = 1
        L18:
            return r1
    }

    public static boolean c(android.content.Context r6) {
            android.content.res.Resources r6 = r6.getResources()     // Catch: java.lang.Throwable -> L26
            android.util.DisplayMetrics r6 = r6.getDisplayMetrics()     // Catch: java.lang.Throwable -> L26
            int r0 = r6.widthPixels     // Catch: java.lang.Throwable -> L26
            float r0 = (float) r0     // Catch: java.lang.Throwable -> L26
            float r1 = r6.xdpi     // Catch: java.lang.Throwable -> L26
            float r0 = r0 / r1
            int r1 = r6.heightPixels     // Catch: java.lang.Throwable -> L26
            float r1 = (float) r1     // Catch: java.lang.Throwable -> L26
            float r6 = r6.ydpi     // Catch: java.lang.Throwable -> L26
            float r1 = r1 / r6
            double r2 = (double) r0     // Catch: java.lang.Throwable -> L26
            r4 = 4611686018427387904(0x4000000000000000, double:2.0)
            double r2 = java.lang.Math.pow(r2, r4)     // Catch: java.lang.Throwable -> L26
            double r0 = (double) r1     // Catch: java.lang.Throwable -> L26
            double r0 = java.lang.Math.pow(r0, r4)     // Catch: java.lang.Throwable -> L26
            double r2 = r2 + r0
            double r0 = java.lang.Math.sqrt(r2)     // Catch: java.lang.Throwable -> L26
            goto L28
        L26:
            r0 = 0
        L28:
            r2 = 4619004367821864960(0x401a000000000000, double:6.5)
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 <= 0) goto L30
            r6 = 1
            return r6
        L30:
            r6 = 0
            return r6
    }

    public static java.lang.String d(android.content.Context r0, java.lang.String r1) {
            if (r0 != 0) goto L5
            java.lang.String r0 = ""
            return r0
        L5:
            b(r0, r1)
            java.lang.String r0 = com.tencent.open.utils.m.a
            return r0
    }

    public static org.json.JSONObject d(java.lang.String r2) throws org.json.JSONException {
            java.lang.String r0 = "false"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto La
            java.lang.String r2 = "{value : false}"
        La:
            java.lang.String r0 = "true"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L14
            java.lang.String r2 = "{value : true}"
        L14:
            java.lang.String r0 = "allback("
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L28
            java.lang.String r0 = "[\\s\\S]*allback\\(([\\s\\S]*)\\);[^\\)]*\\z"
            java.lang.String r1 = "$1"
            java.lang.String r2 = r2.replaceFirst(r0, r1)
            java.lang.String r2 = r2.trim()
        L28:
            java.lang.String r0 = "online[0]="
            boolean r0 = r2.contains(r0)
            if (r0 == 0) goto L50
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "{online:"
            r0.append(r1)
            int r1 = r2.length()
            int r1 = r1 + (-2)
            char r2 = r2.charAt(r1)
            r0.append(r2)
            java.lang.String r2 = "}"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
        L50:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r2)
            return r0
    }

    public static boolean d(android.content.Context r1) {
            java.lang.String r0 = "8.1.5"
            int r1 = com.tencent.open.utils.k.c(r1, r0)
            if (r1 < 0) goto La
            r1 = 1
            goto Lb
        La:
            r1 = 0
        Lb:
            return r1
    }

    public static java.lang.String e(android.content.Context r0, java.lang.String r1) {
            if (r0 != 0) goto L5
            java.lang.String r0 = ""
            return r0
        L5:
            java.lang.String r0 = d(r0, r1)
            com.tencent.open.utils.m.c = r0
            return r0
    }

    public static boolean e(android.content.Context r1) {
            java.lang.String r0 = "8.1.8"
            int r1 = com.tencent.open.utils.k.c(r1, r0)
            if (r1 < 0) goto La
            r1 = 1
            goto Lb
        La:
            r1 = 0
        Lb:
            return r1
    }

    public static boolean e(java.lang.String r0) {
            if (r0 == 0) goto Lb
            int r0 = r0.length()
            if (r0 != 0) goto L9
            goto Lb
        L9:
            r0 = 0
            goto Lc
        Lb:
            r0 = 1
        Lc:
            return r0
    }

    public static java.lang.String f(java.lang.String r2) {
            java.lang.String r0 = "UTF-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r2
        L7:
            r2 = move-exception
            java.lang.String r0 = "openSDK_LOG.Util"
            java.lang.String r1 = "urlEncode: UnsupportedEncodingException"
            com.tencent.open.log.SLog.e(r0, r1, r2)
            java.lang.String r2 = ""
            return r2
    }

    public static boolean f(android.content.Context r1) {
            java.lang.String r0 = "5.9.5"
            int r1 = com.tencent.open.utils.k.c(r1, r0)
            if (r1 >= 0) goto La
            r1 = 0
            goto Lb
        La:
            r1 = 1
        Lb:
            return r1
    }

    public static boolean f(android.content.Context r4, java.lang.String r5) {
            boolean r0 = c(r4)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L12
            java.lang.String r0 = "com.tencent.minihd.qq"
            java.lang.String r0 = com.tencent.open.utils.k.a(r4, r0)
            if (r0 == 0) goto L12
            r0 = 0
            goto L13
        L12:
            r0 = 1
        L13:
            if (r0 == 0) goto L1e
            java.lang.String r3 = "com.tencent.tim"
            java.lang.String r3 = com.tencent.open.utils.k.a(r4, r3)
            if (r3 == 0) goto L1e
            r0 = 0
        L1e:
            if (r0 == 0) goto L29
            int r4 = com.tencent.open.utils.k.c(r4, r5)
            if (r4 >= 0) goto L27
            goto L28
        L27:
            r1 = 0
        L28:
            r0 = r1
        L29:
            return r0
    }

    public static java.lang.String g(java.lang.String r6) {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.security.NoSuchAlgorithmException -> L36
            byte[] r1 = j(r6)     // Catch: java.security.NoSuchAlgorithmException -> L36
            r0.update(r1)     // Catch: java.security.NoSuchAlgorithmException -> L36
            byte[] r0 = r0.digest()     // Catch: java.security.NoSuchAlgorithmException -> L36
            if (r0 == 0) goto L51
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.security.NoSuchAlgorithmException -> L36
            r1.<init>()     // Catch: java.security.NoSuchAlgorithmException -> L36
            int r2 = r0.length     // Catch: java.security.NoSuchAlgorithmException -> L36
            r3 = 0
        L1a:
            if (r3 >= r2) goto L31
            r4 = r0[r3]     // Catch: java.security.NoSuchAlgorithmException -> L36
            int r5 = r4 >>> 4
            char r5 = a(r5)     // Catch: java.security.NoSuchAlgorithmException -> L36
            r1.append(r5)     // Catch: java.security.NoSuchAlgorithmException -> L36
            char r4 = a(r4)     // Catch: java.security.NoSuchAlgorithmException -> L36
            r1.append(r4)     // Catch: java.security.NoSuchAlgorithmException -> L36
            int r3 = r3 + 1
            goto L1a
        L31:
            java.lang.String r6 = r1.toString()     // Catch: java.security.NoSuchAlgorithmException -> L36
            goto L51
        L36:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "encrypt has exception: "
            r1.append(r2)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "openSDK_LOG.Util"
            com.tencent.open.log.SLog.e(r1, r0)
        L51:
            return r6
    }

    private static boolean g(android.content.Context r4) {
            r0 = 0
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: java.lang.Exception -> L62
            java.lang.String r1 = "com.tencent.mtt"
            r2 = 64
            android.content.pm.PackageInfo r4 = r4.getPackageInfo(r1, r2)     // Catch: java.lang.Exception -> L62
            java.lang.String r1 = r4.versionName     // Catch: java.lang.Exception -> L62
            java.lang.String r2 = "4.3"
            int r2 = com.tencent.open.utils.k.a(r1, r2)     // Catch: java.lang.Exception -> L62
            if (r2 < 0) goto L62
            java.lang.String r2 = "4.4"
            boolean r1 = r1.startsWith(r2)     // Catch: java.lang.Exception -> L62
            if (r1 != 0) goto L62
            android.content.pm.Signature[] r4 = r4.signatures     // Catch: java.lang.Exception -> L62
            if (r4 == 0) goto L62
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.security.NoSuchAlgorithmException -> L47 java.lang.Exception -> L62
            r4 = r4[r0]     // Catch: java.security.NoSuchAlgorithmException -> L47 java.lang.Exception -> L62
            byte[] r4 = r4.toByteArray()     // Catch: java.security.NoSuchAlgorithmException -> L47 java.lang.Exception -> L62
            r1.update(r4)     // Catch: java.security.NoSuchAlgorithmException -> L47 java.lang.Exception -> L62
            byte[] r4 = r1.digest()     // Catch: java.security.NoSuchAlgorithmException -> L47 java.lang.Exception -> L62
            java.lang.String r4 = a(r4)     // Catch: java.security.NoSuchAlgorithmException -> L47 java.lang.Exception -> L62
            r1.reset()     // Catch: java.security.NoSuchAlgorithmException -> L47 java.lang.Exception -> L62
            java.lang.String r1 = "d8391a394d4a179e6fe7bdb8a301258b"
            boolean r4 = r4.equals(r1)     // Catch: java.security.NoSuchAlgorithmException -> L47 java.lang.Exception -> L62
            if (r4 == 0) goto L62
            r4 = 1
            return r4
        L47:
            r4 = move-exception
            java.lang.String r1 = "openSDK_LOG.Util"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L62
            r2.<init>()     // Catch: java.lang.Exception -> L62
            java.lang.String r3 = "isQQBrowerAvailable has exception: "
            r2.append(r3)     // Catch: java.lang.Exception -> L62
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Exception -> L62
            r2.append(r4)     // Catch: java.lang.Exception -> L62
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Exception -> L62
            com.tencent.open.log.SLog.e(r1, r4)     // Catch: java.lang.Exception -> L62
        L62:
            return r0
    }

    public static boolean g(android.content.Context r3, java.lang.String r4) {
            boolean r0 = c(r3)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L12
            java.lang.String r0 = "com.tencent.minihd.qq"
            java.lang.String r0 = com.tencent.open.utils.k.a(r3, r0)
            if (r0 == 0) goto L12
            r0 = 0
            goto L13
        L12:
            r0 = 1
        L13:
            if (r0 == 0) goto L1d
            int r3 = com.tencent.open.utils.k.c(r3, r4)
            if (r3 >= 0) goto L1c
            r1 = 1
        L1c:
            r0 = r1
        L1d:
            return r0
    }

    public static java.io.File h(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r1 < r2) goto L17
            java.io.File[] r3 = r3.getExternalFilesDirs(r4)
            if (r3 == 0) goto L16
            int r4 = r3.length
            if (r4 <= 0) goto L16
            r4 = 0
            r0 = r3[r4]
        L16:
            return r0
        L17:
            java.io.File r3 = r3.getExternalFilesDir(r4)
            return r3
    }

    public static final boolean h(java.lang.String r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "http://"
            boolean r1 = r2.startsWith(r1)
            if (r1 != 0) goto L14
            java.lang.String r1 = "https://"
            boolean r2 = r2.startsWith(r1)
            if (r2 == 0) goto L15
        L14:
            r0 = 1
        L15:
            return r0
    }

    private static boolean i(android.content.Context r2, java.lang.String r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r0 < r1) goto L16
            int r2 = r2.checkSelfPermission(r3)     // Catch: java.lang.Exception -> Le
            if (r2 == 0) goto L16
            r2 = 1
            return r2
        Le:
            r2 = move-exception
            java.lang.String r3 = "openSDK_LOG.Util"
            java.lang.String r0 = "checkSelfPermission exception"
            com.tencent.open.log.SLog.e(r3, r0, r2)
        L16:
            r2 = 0
            return r2
    }

    public static boolean i(java.lang.String r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.io.File r1 = new java.io.File
            r1.<init>(r2)
            boolean r2 = r1.exists()
            if (r2 == 0) goto L11
            r2 = 1
            return r2
        L11:
            return r0
    }

    public static byte[] j(java.lang.String r2) {
            java.lang.String r0 = "UTF-8"
            byte[] r2 = r2.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r2
        L7:
            r2 = move-exception
            java.lang.String r0 = "openSDK_LOG.Util"
            java.lang.String r1 = "getBytesUTF8: UnsupportedEncodingException"
            com.tencent.open.log.SLog.e(r0, r1, r2)
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
    }

    public static java.lang.String k(java.lang.String r1) {
            r0 = 2
            java.lang.String r1 = a(r1, r0)
            return r1
    }

    public static java.io.File l(java.lang.String r3) throws java.io.IOException {
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L43
            java.io.File r1 = r0.getParentFile()
            if (r1 == 0) goto L40
            java.io.File r1 = r0.getParentFile()
            boolean r1 = r1.exists()
            if (r1 != 0) goto L40
            java.io.File r1 = r0.getParentFile()
            boolean r1 = r1.mkdirs()
            if (r1 == 0) goto L29
            r0.createNewFile()
            goto L43
        L29:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "createFile failed"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "openSDK_LOG.Util"
            com.tencent.open.log.SLog.d(r1, r3)
            goto L43
        L40:
            r0.createNewFile()
        L43:
            return r0
    }

    public static boolean m(java.lang.String r2) {
            java.lang.String r0 = b()
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L18
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L18
            boolean r2 = r2.contains(r0)
            if (r2 == 0) goto L18
            r2 = 1
            goto L19
        L18:
            r2 = 0
        L19:
            return r2
    }
}
