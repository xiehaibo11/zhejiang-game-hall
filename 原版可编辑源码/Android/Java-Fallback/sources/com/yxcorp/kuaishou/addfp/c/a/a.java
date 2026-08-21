package com.yxcorp.kuaishou.addfp.c.a;

public final class a {
    public static com.yxcorp.kuaishou.addfp.android.b.e a(java.lang.String r11, boolean r12) {
            r0 = 1
            java.lang.String[] r1 = new java.lang.String[r0]
            r2 = 0
            r1[r2] = r11
            r11 = 0
            r3 = -1
            java.lang.Runtime r4 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L110 java.lang.Exception -> L117 java.io.IOException -> L13c
            if (r12 == 0) goto L11
            java.lang.String r12 = "su"
            goto L13
        L11:
            java.lang.String r12 = "sh"
        L13:
            java.lang.Process r12 = r4.exec(r12)     // Catch: java.lang.Throwable -> L110 java.lang.Exception -> L117 java.io.IOException -> L13c
            java.io.DataOutputStream r4 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a java.io.IOException -> L10d
            java.io.OutputStream r5 = r12.getOutputStream()     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a java.io.IOException -> L10d
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L108 java.lang.Exception -> L10a java.io.IOException -> L10d
            r5 = r2
        L21:
            if (r5 > 0) goto L39
            r6 = r1[r2]     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            if (r6 == 0) goto L36
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            r4.write(r6)     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            java.lang.String r6 = "\n"
            r4.writeBytes(r6)     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            r4.flush()     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
        L36:
            int r5 = r5 + 1
            goto L21
        L39:
            java.lang.String r1 = "exit\n"
            r4.writeBytes(r1)     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            r4.flush()     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            int r3 = r12.waitFor()     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            r1.<init>()     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            r5.<init>()     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            java.io.BufferedReader r6 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            java.io.InputStreamReader r7 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            java.io.InputStream r8 = r12.getInputStream()     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            r7.<init>(r8)     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            r6.<init>(r7)     // Catch: java.lang.Throwable -> Lf1 java.lang.Exception -> Lf6 java.io.IOException -> Lff
            java.io.BufferedReader r7 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> Ldb java.lang.Exception -> Ldf java.io.IOException -> Le8
            java.io.InputStreamReader r8 = new java.io.InputStreamReader     // Catch: java.lang.Throwable -> Ldb java.lang.Exception -> Ldf java.io.IOException -> Le8
            java.io.InputStream r9 = r12.getErrorStream()     // Catch: java.lang.Throwable -> Ldb java.lang.Exception -> Ldf java.io.IOException -> Le8
            r8.<init>(r9)     // Catch: java.lang.Throwable -> Ldb java.lang.Exception -> Ldf java.io.IOException -> Le8
            r7.<init>(r8)     // Catch: java.lang.Throwable -> Ldb java.lang.Exception -> Ldf java.io.IOException -> Le8
        L6b:
            java.lang.String r8 = r6.readLine()     // Catch: java.lang.Throwable -> Lca java.lang.Exception -> Lcd java.io.IOException -> Ld4
            java.lang.String r9 = "|"
            if (r8 == 0) goto L7a
            r1.append(r8)     // Catch: java.lang.Throwable -> Lca java.lang.Exception -> Lcd java.io.IOException -> Ld4
            r1.append(r9)     // Catch: java.lang.Throwable -> Lca java.lang.Exception -> Lcd java.io.IOException -> Ld4
            goto L6b
        L7a:
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lca java.lang.Exception -> Lcd java.io.IOException -> Ld4
            int r8 = r1.length()     // Catch: java.lang.Exception -> Lbe java.io.IOException -> Lc4 java.lang.Throwable -> Lca
            if (r8 <= 0) goto L8d
            int r8 = r1.length()     // Catch: java.lang.Exception -> Lbe java.io.IOException -> Lc4 java.lang.Throwable -> Lca
            int r8 = r8 - r0
            java.lang.String r1 = r1.substring(r2, r8)     // Catch: java.lang.Exception -> Lbe java.io.IOException -> Lc4 java.lang.Throwable -> Lca
        L8d:
            java.lang.String r8 = r7.readLine()     // Catch: java.lang.Exception -> Lbe java.io.IOException -> Lc4 java.lang.Throwable -> Lca
            if (r8 == 0) goto L9a
            r5.append(r8)     // Catch: java.lang.Exception -> Lbe java.io.IOException -> Lc4 java.lang.Throwable -> Lca
            r5.append(r9)     // Catch: java.lang.Exception -> Lbe java.io.IOException -> Lc4 java.lang.Throwable -> Lca
            goto L8d
        L9a:
            java.lang.String r11 = r5.toString()     // Catch: java.lang.Exception -> Lbe java.io.IOException -> Lc4 java.lang.Throwable -> Lca
            int r5 = r11.length()     // Catch: java.lang.Exception -> Lbe java.io.IOException -> Lc4 java.lang.Throwable -> Lca
            if (r5 <= 0) goto Lad
            int r5 = r11.length()     // Catch: java.lang.Exception -> Lbe java.io.IOException -> Lc4 java.lang.Throwable -> Lca
            int r5 = r5 - r0
            java.lang.String r11 = r11.substring(r2, r5)     // Catch: java.lang.Exception -> Lbe java.io.IOException -> Lc4 java.lang.Throwable -> Lca
        Lad:
            r4.close()     // Catch: java.io.IOException -> Lb8
            r6.close()     // Catch: java.io.IOException -> Lb8
            r7.close()     // Catch: java.io.IOException -> Lb8
            goto L164
        Lb8:
            r0 = move-exception
            r0.printStackTrace()
            goto L164
        Lbe:
            r0 = move-exception
            r10 = r0
            r0 = r11
            r11 = r1
            r1 = r10
            goto Ld0
        Lc4:
            r0 = move-exception
            r10 = r0
            r0 = r11
            r11 = r1
            r1 = r10
            goto Ld7
        Lca:
            r11 = move-exception
            goto L173
        Lcd:
            r0 = move-exception
            r1 = r0
            r0 = r11
        Ld0:
            r2 = r1
            r1 = r12
            r12 = r11
            goto Lfd
        Ld4:
            r0 = move-exception
            r1 = r0
            r0 = r11
        Ld7:
            r2 = r1
            r1 = r12
            r12 = r11
            goto L106
        Ldb:
            r0 = move-exception
            r7 = r11
            goto L174
        Ldf:
            r0 = move-exception
            r1 = r0
            r0 = r11
            r7 = r0
            r2 = r1
            r1 = r12
            r11 = r4
            goto L11f
        Le8:
            r0 = move-exception
            r1 = r0
            r0 = r11
            r7 = r0
            r2 = r1
            r1 = r12
            r11 = r4
            goto L144
        Lf1:
            r0 = move-exception
            r6 = r11
            r7 = r6
            goto L174
        Lf6:
            r0 = move-exception
            r6 = r11
            r7 = r6
            r1 = r12
            r2 = r0
            r12 = r7
            r0 = r12
        Lfd:
            r11 = r4
            goto L120
        Lff:
            r0 = move-exception
            r6 = r11
            r7 = r6
            r1 = r12
            r2 = r0
            r12 = r7
            r0 = r12
        L106:
            r11 = r4
            goto L145
        L108:
            r0 = move-exception
            goto L113
        L10a:
            r0 = move-exception
            r1 = r0
            goto L11a
        L10d:
            r0 = move-exception
            r1 = r0
            goto L13f
        L110:
            r12 = move-exception
            r0 = r12
            r12 = r11
        L113:
            r6 = r11
            r7 = r6
            goto L175
        L117:
            r12 = move-exception
            r1 = r12
            r12 = r11
        L11a:
            r0 = r11
            r6 = r0
            r7 = r6
            r2 = r1
            r1 = r12
        L11f:
            r12 = r7
        L120:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L16f
            if (r11 == 0) goto L12b
            r11.close()     // Catch: java.io.IOException -> L129
            goto L12b
        L129:
            r11 = move-exception
            goto L136
        L12b:
            if (r6 == 0) goto L130
            r6.close()     // Catch: java.io.IOException -> L129
        L130:
            if (r7 == 0) goto L139
            r7.close()     // Catch: java.io.IOException -> L129
            goto L139
        L136:
            r11.printStackTrace()
        L139:
            if (r1 == 0) goto L169
            goto L160
        L13c:
            r12 = move-exception
            r1 = r12
            r12 = r11
        L13f:
            r0 = r11
            r6 = r0
            r7 = r6
            r2 = r1
            r1 = r12
        L144:
            r12 = r7
        L145:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L16f
            if (r11 == 0) goto L150
            r11.close()     // Catch: java.io.IOException -> L14e
            goto L150
        L14e:
            r11 = move-exception
            goto L15b
        L150:
            if (r6 == 0) goto L155
            r6.close()     // Catch: java.io.IOException -> L14e
        L155:
            if (r7 == 0) goto L15e
            r7.close()     // Catch: java.io.IOException -> L14e
            goto L15e
        L15b:
            r11.printStackTrace()
        L15e:
            if (r1 == 0) goto L169
        L160:
            r11 = r0
            r10 = r1
            r1 = r12
            r12 = r10
        L164:
            r12.destroy()
            r0 = r11
            r12 = r1
        L169:
            com.yxcorp.kuaishou.addfp.android.b.e r11 = new com.yxcorp.kuaishou.addfp.android.b.e
            r11.<init>(r3, r12, r0)
            return r11
        L16f:
            r12 = move-exception
            r4 = r11
            r11 = r12
            r12 = r1
        L173:
            r0 = r11
        L174:
            r11 = r4
        L175:
            if (r11 == 0) goto L17d
            r11.close()     // Catch: java.io.IOException -> L17b
            goto L17d
        L17b:
            r11 = move-exception
            goto L188
        L17d:
            if (r6 == 0) goto L182
            r6.close()     // Catch: java.io.IOException -> L17b
        L182:
            if (r7 == 0) goto L18b
            r7.close()     // Catch: java.io.IOException -> L17b
            goto L18b
        L188:
            r11.printStackTrace()
        L18b:
            if (r12 == 0) goto L190
            r12.destroy()
        L190:
            throw r0
    }

    public static java.lang.String a() {
            java.lang.String r0 = android.os.Build.MANUFACTURER
            java.lang.String r1 = "XIAOMI"
            boolean r2 = r0.equalsIgnoreCase(r1)
            java.lang.String r3 = ""
            r4 = 0
            r5 = 1
            if (r2 != 0) goto L34
            java.lang.String r2 = android.os.Build.BRAND
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 != 0) goto L34
            java.lang.String r1 = "REDMI"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 != 0) goto L34
            java.lang.String r1 = "MEITU"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 != 0) goto L34
            java.lang.String r1 = "ro.miui.ui.version.name"
            java.lang.String r1 = a(r1, r3)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L34
            r1 = r4
            goto L35
        L34:
            r1 = r5
        L35:
            if (r1 != 0) goto Lfa
            java.lang.String r1 = "BLACKSHARK"
            boolean r2 = r0.equalsIgnoreCase(r1)
            if (r2 != 0) goto L49
            java.lang.String r2 = android.os.Build.BRAND
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 != 0) goto L49
            r1 = r4
            goto L4a
        L49:
            r1 = r5
        L4a:
            if (r1 != 0) goto Lfa
            java.lang.String r1 = "SAMSUNG"
            boolean r2 = r0.equalsIgnoreCase(r1)
            if (r2 != 0) goto L5e
            java.lang.String r2 = android.os.Build.BRAND
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 != 0) goto L5e
            r1 = r4
            goto L5f
        L5e:
            r1 = r5
        L5f:
            if (r1 == 0) goto L65
            java.lang.String r0 = "3"
            goto Lfc
        L65:
            java.lang.String r1 = "VIVO"
            boolean r2 = r0.equalsIgnoreCase(r1)
            if (r2 != 0) goto L8b
            java.lang.String r2 = android.os.Build.BRAND
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 != 0) goto L8b
            java.lang.String r1 = "IQOO"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 != 0) goto L8b
            java.lang.String r1 = "ro.vivo.os.version"
            java.lang.String r1 = a(r1, r3)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L8b
            r1 = r4
            goto L8c
        L8b:
            r1 = r5
        L8c:
            if (r1 == 0) goto L92
            java.lang.String r0 = "2"
            goto Lfc
        L92:
            java.lang.String r1 = "HUAWEI"
            boolean r2 = r0.equalsIgnoreCase(r1)
            if (r2 != 0) goto La4
            java.lang.String r2 = android.os.Build.BRAND
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 != 0) goto La4
            r1 = r4
            goto La5
        La4:
            r1 = r5
        La5:
            if (r1 == 0) goto Laa
            java.lang.String r0 = "1"
            goto Lfc
        Laa:
            java.lang.String r1 = "OPPO"
            boolean r2 = r0.equalsIgnoreCase(r1)
            if (r2 != 0) goto Ld0
            java.lang.String r2 = android.os.Build.BRAND
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 != 0) goto Ld0
            java.lang.String r1 = "REALME"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 != 0) goto Ld0
            java.lang.String r1 = "ro.build.version.opporom"
            java.lang.String r1 = a(r1, r3)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto Ld0
            r1 = r4
            goto Ld1
        Ld0:
            r1 = r5
        Ld1:
            if (r1 != 0) goto Lf7
            java.lang.String r1 = "ONEPLUS"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto Le4
            java.lang.String r0 = android.os.Build.BRAND
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto Le4
            goto Le5
        Le4:
            r4 = r5
        Le5:
            if (r4 != 0) goto Lf7
            java.lang.String r0 = android.os.Build.BRAND
            java.lang.String r1 = "HONOR"
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto Lf4
            java.lang.String r0 = "7"
            goto Lfc
        Lf4:
            java.lang.String r0 = "0"
            goto Lfc
        Lf7:
            java.lang.String r0 = "5"
            goto Lfc
        Lfa:
            java.lang.String r0 = "4"
        Lfc:
            return r0
    }

    public static java.lang.String a(int r8, java.lang.String r9) {
            com.yxcorp.kuaishou.addfp.KWEGIDDFP r0 = com.yxcorp.kuaishou.addfp.KWEGIDDFP.instance()
            android.content.Context r0 = r0.getParamContext()
            java.lang.String r1 = ""
            if (r0 != 0) goto Ld
            return r1
        Ld:
            java.lang.String r2 = new java.lang.String
            r3 = 0
            java.lang.String r4 = "U3lzdGVtQFNlY3VyZUBHbG9iYWw="
            byte[] r4 = android.util.Base64.decode(r4, r3)
            r2.<init>(r4)
            java.lang.String r4 = "@"
            java.lang.String[] r2 = r2.split(r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r5 = r2[r3]
            r4.append(r5)
            r5 = 1
            r6 = r2[r5]
            r4.append(r6)
            r6 = 2
            r7 = r2[r6]
            r4.append(r7)
            if (r8 == 0) goto L67
            if (r8 == r5) goto L52
            if (r8 != r6) goto L50
            r8 = r2[r6]
            java.lang.String r8 = com.yxcorp.kuaishou.addfp.android.b.a.a(r0, r8, r9)
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 == 0) goto L7b
            android.content.ContentResolver r8 = r0.getContentResolver()
            java.lang.String r8 = android.provider.Settings.Global.getString(r8, r9)
            goto L7b
        L50:
            r8 = r1
            goto L7b
        L52:
            r8 = r2[r5]
            java.lang.String r8 = com.yxcorp.kuaishou.addfp.android.b.a.a(r0, r8, r9)
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 == 0) goto L7b
            android.content.ContentResolver r8 = r0.getContentResolver()
            java.lang.String r8 = android.provider.Settings.Secure.getString(r8, r9)
            goto L7b
        L67:
            r8 = r2[r3]
            java.lang.String r8 = com.yxcorp.kuaishou.addfp.android.b.a.a(r0, r8, r9)
            boolean r2 = android.text.TextUtils.isEmpty(r8)
            if (r2 == 0) goto L7b
            android.content.ContentResolver r8 = r0.getContentResolver()
            java.lang.String r8 = android.provider.Settings.System.getString(r8, r9)
        L7b:
            if (r8 != 0) goto L7e
            goto L7f
        L7e:
            r1 = r8
        L7f:
            return r1
    }

    public static java.lang.String a(android.content.Context r8) {
            java.lang.String r0 = "k_w_o_d_out_dtt"
            java.lang.String r1 = "KWE_N"
            java.lang.String r2 = a(r8, r0)     // Catch: java.lang.Throwable -> Lc8
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r4 = "Lm91a2R0ZnQ="
            java.lang.String r5 = "android.permission.WRITE_EXTERNAL_STORAGE"
            java.lang.String r6 = "android.permission.READ_EXTERNAL_STORAGE"
            java.lang.String r7 = ""
            if (r3 == 0) goto L39
            java.lang.String[] r3 = new java.lang.String[]{r6, r5}     // Catch: java.lang.Throwable -> Lc8
            boolean r3 = com.yxcorp.kuaishou.addfp.android.b.g.a(r8, r3)     // Catch: java.lang.Throwable -> Lc8
            if (r3 == 0) goto L36
            com.yxcorp.kuaishou.addfp.android.a.d r3 = com.yxcorp.kuaishou.addfp.android.a.d.a(r8)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r7 = r3.a(r4)     // Catch: java.lang.Throwable -> Lc8
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lc8
            if (r3 != 0) goto L54
            android.content.ContentResolver r3 = r8.getContentResolver()     // Catch: java.lang.Throwable -> L54
            android.provider.Settings.System.putString(r3, r0, r7)     // Catch: java.lang.Throwable -> L54
            goto L54
        L36:
            java.lang.String r0 = "KWE_PN"
            goto L55
        L39:
            java.lang.String[] r0 = new java.lang.String[]{r6, r5}     // Catch: java.lang.Throwable -> Lc8
            boolean r0 = com.yxcorp.kuaishou.addfp.android.b.g.a(r8, r0)     // Catch: java.lang.Throwable -> Lc8
            if (r0 == 0) goto L54
            com.yxcorp.kuaishou.addfp.android.a.d r0 = com.yxcorp.kuaishou.addfp.android.a.d.a(r8)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r7 = r0.a(r4)     // Catch: java.lang.Throwable -> Lc8
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lc8
            if (r0 == 0) goto L54
            com.yxcorp.kuaishou.addfp.android.a.d.a(r8, r2)     // Catch: java.lang.Throwable -> Lc8
        L54:
            r0 = r1
        L55:
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lc8
            if (r3 == 0) goto L62
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lc8
            if (r3 == 0) goto L62
            goto Lce
        L62:
            com.yxcorp.kuaishou.addfp.android.a.d r1 = com.yxcorp.kuaishou.addfp.android.a.d.a(r8)     // Catch: java.lang.Throwable -> Lc8
            java.util.LinkedHashMap r1 = r1.b(r2)     // Catch: java.lang.Throwable -> Lc8
            if (r1 == 0) goto L72
            int r2 = r1.size()     // Catch: java.lang.Throwable -> Lc8
            if (r2 != 0) goto L7a
        L72:
            com.yxcorp.kuaishou.addfp.android.a.d r8 = com.yxcorp.kuaishou.addfp.android.a.d.a(r8)     // Catch: java.lang.Throwable -> Lc8
            java.util.LinkedHashMap r1 = r8.b(r7)     // Catch: java.lang.Throwable -> Lc8
        L7a:
            if (r1 == 0) goto Lc6
            int r8 = r1.size()     // Catch: java.lang.Throwable -> Lc8
            if (r8 <= 0) goto Lc6
            r8 = 0
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lc8
            java.util.Set r3 = r1.entrySet()     // Catch: java.lang.Throwable -> Lc8
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lc8
            int r1 = r1.size()     // Catch: java.lang.Throwable -> Lc8
            java.util.ListIterator r1 = r2.listIterator(r1)     // Catch: java.lang.Throwable -> Lc8
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc8
            r2.<init>()     // Catch: java.lang.Throwable -> Lc8
        L99:
            boolean r3 = r1.hasPrevious()     // Catch: java.lang.Throwable -> Lc8
            if (r3 == 0) goto Lbb
            r3 = 10
            if (r8 >= r3) goto Lbb
            java.lang.Object r3 = r1.previous()     // Catch: java.lang.Throwable -> L99
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3     // Catch: java.lang.Throwable -> L99
            if (r3 == 0) goto Lb8
            java.lang.Object r4 = r3.getKey()     // Catch: java.lang.Throwable -> L99
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L99
            java.lang.Object r3 = r3.getValue()     // Catch: java.lang.Throwable -> L99
            r2.put(r4, r3)     // Catch: java.lang.Throwable -> L99
        Lb8:
            int r8 = r8 + 1
            goto L99
        Lbb:
            int r8 = r2.length()     // Catch: java.lang.Throwable -> Lc8
            if (r8 <= 0) goto Lc6
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> Lc8
            return r8
        Lc6:
            r1 = r0
            goto Lce
        Lc8:
            r8 = move-exception
            r8.printStackTrace()
            java.lang.String r1 = "KWE_PE"
        Lce:
            return r1
    }

    public static java.lang.String a(android.content.Context r0, java.lang.String r1) {
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> L9
            java.lang.String r0 = android.provider.Settings.System.getString(r0, r1)     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String a(java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L26
            java.lang.String r1 = "get"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L26
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L26
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Exception -> L26
            java.lang.reflect.Method r1 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L26
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L26
            r2[r5] = r7     // Catch: java.lang.Exception -> L26
            r2[r6] = r8     // Catch: java.lang.Exception -> L26
            java.lang.Object r7 = r1.invoke(r0, r2)     // Catch: java.lang.Exception -> L26
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L26
            goto L27
        L26:
            r7 = 0
        L27:
            if (r7 != 0) goto L2b
            java.lang.String r7 = ""
        L2b:
            return r7
    }
}
