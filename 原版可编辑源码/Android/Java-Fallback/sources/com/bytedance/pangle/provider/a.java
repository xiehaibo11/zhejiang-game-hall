package com.bytedance.pangle.provider;

public class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(android.content.ContentResolver r3, android.net.Uri r4, android.content.ContentValues r5, java.lang.String r6, java.lang.String[] r7, java.lang.String r8) {
            java.lang.String r0 = "ContentProviderManager#update throw exception:"
            java.lang.String r1 = "Zeus/provider_pangle"
            r2 = 0
            if (r3 != 0) goto L8
            return r2
        L8:
            android.net.Uri r8 = a(r4, r8)     // Catch: java.lang.Exception -> L11 java.lang.IllegalArgumentException -> L16
            int r3 = r3.update(r8, r5, r6, r7)     // Catch: java.lang.Exception -> L11 java.lang.IllegalArgumentException -> L16
            return r3
        L11:
            r3 = move-exception
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0, r3)
            goto L24
        L16:
            java.lang.String r8 = "not found plugin provider, but found host ContentResolver execute update !!!"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r8)     // Catch: java.lang.Throwable -> L20
            int r3 = r3.update(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L20
            return r3
        L20:
            r3 = move-exception
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0, r3)
        L24:
            return r2
    }

    public static int a(android.content.ContentResolver r3, android.net.Uri r4, android.os.Bundle r5, java.lang.String r6) {
            java.lang.String r0 = "ContentProviderManager#delete throw exception:"
            java.lang.String r1 = "Zeus/provider_pangle"
            r2 = -1
            if (r3 != 0) goto L8
            return r2
        L8:
            android.net.Uri r6 = a(r4, r6)     // Catch: java.lang.IncompatibleClassChangeError -> L11 java.lang.Exception -> L13 java.lang.IllegalArgumentException -> L18
            int r3 = r3.delete(r6, r5)     // Catch: java.lang.IncompatibleClassChangeError -> L11 java.lang.Exception -> L13 java.lang.IllegalArgumentException -> L18
            return r3
        L11:
            r3 = move-exception
            goto L14
        L13:
            r3 = move-exception
        L14:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0, r3)
            goto L26
        L18:
            java.lang.String r6 = "not found plugin provider, but found host ContentResolver execute delete !!!"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r6)     // Catch: java.lang.Throwable -> L22
            int r3 = r3.delete(r4, r5)     // Catch: java.lang.Throwable -> L22
            return r3
        L22:
            r3 = move-exception
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0, r3)
        L26:
            return r2
    }

    public static int a(android.content.ContentResolver r3, android.net.Uri r4, java.lang.String r5, java.lang.String[] r6, java.lang.String r7) {
            java.lang.String r0 = "ContentProviderManager#delete throw exception:"
            java.lang.String r1 = "Zeus/provider_pangle"
            r2 = -1
            if (r3 != 0) goto L8
            return r2
        L8:
            android.net.Uri r7 = a(r4, r7)     // Catch: java.lang.Exception -> L11 java.lang.IllegalArgumentException -> L16
            int r3 = r3.delete(r7, r5, r6)     // Catch: java.lang.Exception -> L11 java.lang.IllegalArgumentException -> L16
            return r3
        L11:
            r3 = move-exception
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0, r3)
            goto L24
        L16:
            java.lang.String r7 = "not found plugin provider, but found host ContentResolver execute delete !!!"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r7)     // Catch: java.lang.Throwable -> L20
            int r3 = r3.delete(r4, r5, r6)     // Catch: java.lang.Throwable -> L20
            return r3
        L20:
            r3 = move-exception
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0, r3)
        L24:
            return r2
    }

    public static android.database.Cursor a(android.content.ContentResolver r2, android.net.Uri r3, java.lang.String[] r4, android.os.Bundle r5, android.os.CancellationSignal r6, java.lang.String r7) {
            java.lang.String r0 = "Zeus/provider_pangle"
            r1 = 0
            if (r2 != 0) goto L6
            return r1
        L6:
            android.net.Uri r7 = a(r3, r7)     // Catch: java.lang.IncompatibleClassChangeError -> Lf java.lang.Exception -> L11 java.lang.IllegalArgumentException -> L18
            android.database.Cursor r2 = r2.query(r7, r4, r5, r6)     // Catch: java.lang.IncompatibleClassChangeError -> Lf java.lang.Exception -> L11 java.lang.IllegalArgumentException -> L18
            return r2
        Lf:
            r2 = move-exception
            goto L12
        L11:
            r2 = move-exception
        L12:
            java.lang.String r3 = "ContentProviderManager#query(4 params) throw exception:"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r3, r2)
            goto L28
        L18:
            java.lang.String r7 = "not found plugin provider, but found host ContentResolver execute query(5 params) !!!"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r7)     // Catch: java.lang.Throwable -> L22
            android.database.Cursor r2 = r2.query(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L22
            return r2
        L22:
            r2 = move-exception
            java.lang.String r3 = "not found host provider-ContentProviderManager#query(4 params) throw exception:"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r3, r2)
        L28:
            return r1
    }

    public static android.database.Cursor a(android.content.ContentResolver r10, android.net.Uri r11, java.lang.String[] r12, java.lang.String r13, java.lang.String[] r14, java.lang.String r15, android.os.CancellationSignal r16, java.lang.String r17) {
            java.lang.String r1 = "Zeus/provider_pangle"
            r2 = 0
            if (r10 != 0) goto L6
            return r2
        L6:
            r0 = r11
            r3 = r17
            android.net.Uri r4 = a(r11, r3)     // Catch: java.lang.IncompatibleClassChangeError -> L19 java.lang.Exception -> L1b java.lang.IllegalArgumentException -> L22
            r3 = r10
            r5 = r12
            r6 = r13
            r7 = r14
            r8 = r15
            r9 = r16
            android.database.Cursor r0 = r3.query(r4, r5, r6, r7, r8, r9)     // Catch: java.lang.IncompatibleClassChangeError -> L19 java.lang.Exception -> L1b java.lang.IllegalArgumentException -> L22
            return r0
        L19:
            r0 = move-exception
            goto L1c
        L1b:
            r0 = move-exception
        L1c:
            java.lang.String r3 = "ContentProviderManager#query(6 params) throw exception:"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r3, r0)
            goto L32
        L22:
            java.lang.String r3 = "not found plugin provider, but found host ContentResolver execute query(6 params) !!!"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r3)     // Catch: java.lang.Throwable -> L2c
            android.database.Cursor r0 = r10.query(r11, r12, r13, r14, r15, r16)     // Catch: java.lang.Throwable -> L2c
            return r0
        L2c:
            r0 = move-exception
            java.lang.String r3 = "not found host provider-ContentProviderManager#query(6 params) throw exception:"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r3, r0)
        L32:
            return r2
    }

    public static android.database.Cursor a(android.content.ContentResolver r8, android.net.Uri r9, java.lang.String[] r10, java.lang.String r11, java.lang.String[] r12, java.lang.String r13, java.lang.String r14) {
            java.lang.String r0 = "Zeus/provider_pangle"
            r1 = 0
            if (r8 != 0) goto L6
            return r1
        L6:
            android.net.Uri r3 = a(r9, r14)     // Catch: java.lang.Exception -> L14 java.lang.IllegalArgumentException -> L1b
            r2 = r8
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            android.database.Cursor r8 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L14 java.lang.IllegalArgumentException -> L1b
            return r8
        L14:
            r8 = move-exception
            java.lang.String r9 = "ContentProviderManager#query(5 params) throw exception:"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r9, r8)
            return r1
        L1b:
            java.lang.String r14 = "not found plugin provider, but found host ContentResolver execute query(5 params) !!!"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r14)     // Catch: java.lang.Throwable -> L25
            android.database.Cursor r8 = r8.query(r9, r10, r11, r12, r13)     // Catch: java.lang.Throwable -> L25
            return r8
        L25:
            r8 = move-exception
            java.lang.String r9 = "not found host provider-ContentProviderManager#query(5 params) throw exception:"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r9, r8)
            return r1
    }

    public static android.net.Uri a(android.content.ContentResolver r2, android.net.Uri r3, android.content.ContentValues r4, android.os.Bundle r5, java.lang.String r6) {
            java.lang.String r0 = "Zeus/provider_pangle"
            r1 = 0
            if (r2 != 0) goto L6
            return r1
        L6:
            android.net.Uri r6 = a(r3, r6)     // Catch: java.lang.IncompatibleClassChangeError -> Lf java.lang.Exception -> L11 java.lang.IllegalArgumentException -> L18
            android.net.Uri r2 = r2.insert(r6, r4, r5)     // Catch: java.lang.IncompatibleClassChangeError -> Lf java.lang.Exception -> L11 java.lang.IllegalArgumentException -> L18
            return r2
        Lf:
            r2 = move-exception
            goto L12
        L11:
            r2 = move-exception
        L12:
            java.lang.String r3 = "ContentProviderManager#insert throw exception:"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r3, r2)
            goto L28
        L18:
            java.lang.String r6 = "not found plugin provider, but found host ContentResolver execute insert !!!"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r6)     // Catch: java.lang.Throwable -> L22
            android.net.Uri r2 = r2.insert(r3, r4, r5)     // Catch: java.lang.Throwable -> L22
            return r2
        L22:
            r2 = move-exception
            java.lang.String r3 = "not found host provider-ContentProviderManager#insert throw exception:"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r3, r2)
        L28:
            return r1
    }

    public static android.net.Uri a(android.content.ContentResolver r2, android.net.Uri r3, android.content.ContentValues r4, java.lang.String r5) {
            java.lang.String r0 = "Zeus/provider_pangle"
            r1 = 0
            if (r2 != 0) goto L6
            return r1
        L6:
            android.net.Uri r5 = a(r3, r5)     // Catch: java.lang.Exception -> Lf java.lang.IllegalArgumentException -> L16
            android.net.Uri r2 = r2.insert(r5, r4)     // Catch: java.lang.Exception -> Lf java.lang.IllegalArgumentException -> L16
            return r2
        Lf:
            r2 = move-exception
            java.lang.String r3 = "ContentProviderManager#insert throw exception:"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r3, r2)
            goto L26
        L16:
            java.lang.String r5 = "not found plugin provider, but found host ContentResolver execute insert !!!"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r5)     // Catch: java.lang.Throwable -> L20
            android.net.Uri r2 = r2.insert(r3, r4)     // Catch: java.lang.Throwable -> L20
            return r2
        L20:
            r2 = move-exception
            java.lang.String r3 = "not found host provider-ContentProviderManager#insert throw exception:"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r3, r2)
        L26:
            return r1
    }

    public static android.net.Uri a(android.net.Uri r1, java.lang.String r2) {
            com.bytedance.pangle.provider.ContentProviderManager r0 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            boolean r0 = r0.isPluginProvider(r1)
            if (r0 == 0) goto L1d
            android.net.Uri r1 = a(r2, r1)
            java.lang.String r2 = java.lang.String.valueOf(r1)
            java.lang.String r0 = "ContentProviderManager#buildProxyUri-->proxyUri="
            java.lang.String r2 = r0.concat(r2)
            java.lang.String r0 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.d(r0, r2)
        L1d:
            return r1
    }

    private static android.net.Uri a(java.lang.String r1, android.net.Uri r2) {
            r0 = 0
            android.net.Uri r1 = a(r1, r2, r0)
            return r1
    }

    private static android.net.Uri a(java.lang.String r2, android.net.Uri r3, java.lang.String r4) {
            com.bytedance.pangle.provider.ContentProviderManager r0 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            if (r3 == 0) goto La
            java.lang.String r4 = r3.getAuthority()
        La:
            java.lang.String r4 = r0.getPluginProcessNameByAuthority(r4)
            java.lang.String r2 = com.bytedance.pangle.provider.b.a(r4, r2, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L1b
            java.lang.String r2 = ""
            goto L25
        L1b:
            byte[] r2 = r2.getBytes()
            r3 = 10
            java.lang.String r2 = android.util.Base64.encodeToString(r2, r3)
        L25:
            com.bytedance.pangle.provider.ContentProviderManager r3 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            java.util.Map r3 = r3.getSystemProviderInfoMap()
            java.lang.Object r3 = r3.get(r4)
            com.bytedance.pangle.provider.ContentProviderManager$c r3 = (com.bytedance.pangle.provider.ContentProviderManager.c) r3
            java.lang.String r3 = r3.b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "content://"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = java.io.File.separator
            r0.append(r3)
            java.lang.String r3 = "proxy?provider_params="
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            android.net.Uri r2 = android.net.Uri.parse(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r0 = "进程[processName="
            r3.<init>(r0)
            r3.append(r4)
            java.lang.String r4 = "] build provider 【 uri:"
            r3.append(r4)
            r3.append(r2)
            java.lang.String r4 = " 】"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "Zeus/provider_pangle"
            com.bytedance.pangle.log.ZeusLogger.d(r4, r3)
            return r2
    }

    public static android.os.Bundle a(android.content.ContentResolver r5, android.net.Uri r6, java.lang.String r7, java.lang.String r8, android.os.Bundle r9, java.lang.String r10) {
            java.lang.String r0 = "ContentProviderManager#call throw exception:"
            java.lang.String r1 = "Zeus/provider_pangle"
            r2 = 0
            if (r5 == 0) goto L42
            if (r6 != 0) goto La
            goto L42
        La:
            android.net.Uri r10 = a(r6, r10)     // Catch: java.lang.IncompatibleClassChangeError -> L2d java.lang.Exception -> L2f java.lang.IllegalArgumentException -> L34
            if (r9 != 0) goto L16
            android.os.Bundle r3 = new android.os.Bundle     // Catch: java.lang.IncompatibleClassChangeError -> L2d java.lang.Exception -> L2f java.lang.IllegalArgumentException -> L34
            r3.<init>()     // Catch: java.lang.IncompatibleClassChangeError -> L2d java.lang.Exception -> L2f java.lang.IllegalArgumentException -> L34
            r9 = r3
        L16:
            java.lang.String r3 = "provider_params"
            java.lang.String r4 = r6.getAuthority()     // Catch: java.lang.IncompatibleClassChangeError -> L2d java.lang.Exception -> L2f java.lang.IllegalArgumentException -> L34
            r9.putString(r3, r4)     // Catch: java.lang.IncompatibleClassChangeError -> L2d java.lang.Exception -> L2f java.lang.IllegalArgumentException -> L34
            java.lang.String r3 = "provider_proxy_uri"
            java.lang.String r4 = r10.toString()     // Catch: java.lang.IncompatibleClassChangeError -> L2d java.lang.Exception -> L2f java.lang.IllegalArgumentException -> L34
            r9.putString(r3, r4)     // Catch: java.lang.IncompatibleClassChangeError -> L2d java.lang.Exception -> L2f java.lang.IllegalArgumentException -> L34
            android.os.Bundle r5 = r5.call(r10, r7, r8, r9)     // Catch: java.lang.IncompatibleClassChangeError -> L2d java.lang.Exception -> L2f java.lang.IllegalArgumentException -> L34
            return r5
        L2d:
            r5 = move-exception
            goto L30
        L2f:
            r5 = move-exception
        L30:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0, r5)
            goto L42
        L34:
            java.lang.String r10 = "not found plugin provider, but found host ContentResolver execute call !!!"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r10)     // Catch: java.lang.Throwable -> L3e
            android.os.Bundle r5 = r5.call(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L3e
            return r5
        L3e:
            r5 = move-exception
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0, r5)
        L42:
            return r2
    }

    public static android.os.Bundle a(android.content.ContentResolver r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, android.os.Bundle r9, java.lang.String r10) {
            java.lang.String r0 = "ContentProviderManager#call throw exception:"
            java.lang.String r1 = "Zeus/provider_pangle"
            r2 = 0
            if (r5 != 0) goto L8
            return r2
        L8:
            com.bytedance.pangle.provider.ContentProviderManager r3 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            java.lang.String r3 = r3.getPluginProcessNameByAuthority(r6)
            com.bytedance.pangle.provider.ContentProviderManager r4 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            java.util.Map r4 = r4.getSystemProviderInfoMap()
            java.lang.Object r3 = r4.get(r3)
            com.bytedance.pangle.provider.ContentProviderManager$c r3 = (com.bytedance.pangle.provider.ContentProviderManager.c) r3
            java.lang.String r3 = r3.b
            if (r9 != 0) goto L27
            android.os.Bundle r9 = new android.os.Bundle
            r9.<init>()
        L27:
            java.lang.String r4 = "provider_params"
            r9.putString(r4, r6)
            android.net.Uri r10 = a(r10, r2, r6)
            java.lang.String r10 = r10.toString()
            java.lang.String r4 = "provider_proxy_uri"
            r9.putString(r4, r10)
            android.os.Bundle r5 = r5.call(r3, r7, r8, r9)     // Catch: java.lang.IncompatibleClassChangeError -> L3e java.lang.Exception -> L40 java.lang.IllegalArgumentException -> L45
            return r5
        L3e:
            r5 = move-exception
            goto L41
        L40:
            r5 = move-exception
        L41:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0, r5)
            goto L53
        L45:
            java.lang.String r10 = "not found plugin provider, but found host ContentResolver execute call !!!"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r10)     // Catch: java.lang.Throwable -> L4f
            android.os.Bundle r5 = r5.call(r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L4f
            return r5
        L4f:
            r5 = move-exception
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0, r5)
        L53:
            return r2
    }

    public static java.lang.String a(android.content.ContentResolver r2, android.net.Uri r3, java.lang.String r4) {
            java.lang.String r0 = "Zeus/provider_pangle"
            r1 = 0
            if (r2 != 0) goto L6
            return r1
        L6:
            android.net.Uri r4 = a(r3, r4)     // Catch: java.lang.Exception -> Lf java.lang.IllegalArgumentException -> L16
            java.lang.String r2 = r2.getType(r4)     // Catch: java.lang.Exception -> Lf java.lang.IllegalArgumentException -> L16
            return r2
        Lf:
            r2 = move-exception
            java.lang.String r3 = "ContentProviderManager#getType throw exception:"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r3, r2)
            goto L26
        L16:
            java.lang.String r4 = "not found plugin provider, but found host ContentResolver execute getType !!!"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r4)     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = r2.getType(r3)     // Catch: java.lang.Throwable -> L20
            return r2
        L20:
            r2 = move-exception
            java.lang.String r3 = "not found host provider-ContentProviderManager#getType throw exception:"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r3, r2)
        L26:
            return r1
    }

    public static int b(android.content.ContentResolver r3, android.net.Uri r4, android.content.ContentValues r5, android.os.Bundle r6, java.lang.String r7) {
            java.lang.String r0 = "ContentProviderManager#update throw exception:"
            java.lang.String r1 = "Zeus/provider_pangle"
            r2 = 0
            if (r3 != 0) goto L8
            return r2
        L8:
            android.net.Uri r7 = a(r4, r7)     // Catch: java.lang.IncompatibleClassChangeError -> L11 java.lang.Exception -> L13 java.lang.IllegalArgumentException -> L18
            int r3 = r3.update(r7, r5, r6)     // Catch: java.lang.IncompatibleClassChangeError -> L11 java.lang.Exception -> L13 java.lang.IllegalArgumentException -> L18
            return r3
        L11:
            r3 = move-exception
            goto L14
        L13:
            r3 = move-exception
        L14:
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0, r3)
            goto L26
        L18:
            java.lang.String r7 = "not found plugin provider, but found host ContentResolver execute update !!!"
            com.bytedance.pangle.log.ZeusLogger.w(r1, r7)     // Catch: java.lang.Throwable -> L22
            int r3 = r3.update(r4, r5, r6)     // Catch: java.lang.Throwable -> L22
            return r3
        L22:
            r3 = move-exception
            com.bytedance.pangle.log.ZeusLogger.w(r1, r0, r3)
        L26:
            return r2
    }
}
