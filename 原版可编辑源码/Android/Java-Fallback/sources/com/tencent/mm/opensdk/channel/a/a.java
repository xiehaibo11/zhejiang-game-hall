package com.tencent.mm.opensdk.channel.a;

public class a {

    public static class a {
        public java.lang.String a;
        public java.lang.String b;
        public java.lang.String c;
        public long d;
        public android.os.Bundle e;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static int a(android.os.Bundle r1, java.lang.String r2, int r3) {
            if (r1 != 0) goto L3
            return r3
        L3:
            int r3 = r1.getInt(r2, r3)     // Catch: java.lang.Exception -> L8
            goto L23
        L8:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "getIntExtra exception:"
            r2.append(r0)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = "MicroMsg.IntentUtil"
            com.tencent.mm.opensdk.utils.Log.e(r2, r1)
        L23:
            return r3
    }

    public static java.lang.Object a(int r2, java.lang.String r3) {
            java.lang.String r0 = "MicroMsg.SDK.PluginProvider.Resolver"
            switch(r2) {
                case 1: goto L1b;
                case 2: goto L16;
                case 3: goto L15;
                case 4: goto L10;
                case 5: goto Lb;
                case 6: goto L6;
                default: goto L5;
            }
        L5:
            goto L22
        L6:
            java.lang.Double r2 = java.lang.Double.valueOf(r3)     // Catch: java.lang.Exception -> L20
            return r2
        Lb:
            java.lang.Float r2 = java.lang.Float.valueOf(r3)     // Catch: java.lang.Exception -> L20
            return r2
        L10:
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Exception -> L20
            return r2
        L15:
            return r3
        L16:
            java.lang.Long r2 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Exception -> L20
            return r2
        L1b:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L20
            return r2
        L20:
            r2 = move-exception
            goto L28
        L22:
            java.lang.String r2 = "unknown type"
            com.tencent.mm.opensdk.utils.Log.e(r0, r2)     // Catch: java.lang.Exception -> L20
            goto L40
        L28:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "resolveObj exception:"
            r3.append(r1)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.tencent.mm.opensdk.utils.Log.e(r0, r2)
        L40:
            r2 = 0
            return r2
    }

    public static java.lang.String a(android.os.Bundle r2, java.lang.String r3) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            java.lang.String r0 = r2.getString(r3)     // Catch: java.lang.Exception -> L9
            goto L24
        L9:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "getStringExtra exception:"
            r3.append(r1)
            java.lang.String r2 = r2.getMessage()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "MicroMsg.IntentUtil"
            com.tencent.mm.opensdk.utils.Log.e(r3, r2)
        L24:
            return r0
    }

    public static boolean a(android.content.Context r8, com.tencent.mm.opensdk.channel.a.a.a r9) {
            r0 = 0
            java.lang.String r1 = "MicroMsg.SDK.MMessage"
            if (r8 == 0) goto L8b
            if (r9 != 0) goto L9
            goto L8b
        L9:
            java.lang.String r2 = r9.b
            boolean r2 = com.tencent.mm.opensdk.utils.b.b(r2)
            if (r2 == 0) goto L17
            java.lang.String r8 = "send fail, action is null"
        L13:
            com.tencent.mm.opensdk.utils.Log.e(r1, r8)
            return r0
        L17:
            r0 = 0
            java.lang.String r2 = r9.a
            boolean r2 = com.tencent.mm.opensdk.utils.b.b(r2)
            if (r2 != 0) goto L33
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r9.a
            r0.append(r2)
            java.lang.String r2 = ".permission.MM_MESSAGE"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
        L33:
            android.content.Intent r2 = new android.content.Intent
            java.lang.String r3 = r9.b
            r2.<init>(r3)
            android.os.Bundle r3 = r9.e
            if (r3 == 0) goto L41
            r2.putExtras(r3)
        L41:
            java.lang.String r3 = r8.getPackageName()
            r4 = 638058496(0x26080000, float:4.718448E-16)
            java.lang.String r5 = "_mmessage_sdkVersion"
            r2.putExtra(r5, r4)
            java.lang.String r5 = "_mmessage_appPackage"
            r2.putExtra(r5, r3)
            java.lang.String r5 = r9.c
            java.lang.String r6 = "_mmessage_content"
            r2.putExtra(r6, r5)
            long r5 = r9.d
            java.lang.String r7 = "_mmessage_support_content_type"
            r2.putExtra(r7, r5)
            java.lang.String r9 = r9.c
            byte[] r9 = a(r9, r4, r3)
            java.lang.String r3 = "_mmessage_checksum"
            r2.putExtra(r3, r9)
            r8.sendBroadcast(r2, r0)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "send mm message, intent="
            r8.append(r9)
            r8.append(r2)
            java.lang.String r9 = ", perm="
            r8.append(r9)
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            com.tencent.mm.opensdk.utils.Log.d(r1, r8)
            r8 = 1
            return r8
        L8b:
            java.lang.String r8 = "send fail, invalid argument"
            goto L13
    }

    public static byte[] a(java.lang.String r8, int r9) {
            java.lang.String r0 = "httpGet ex:"
            java.lang.String r1 = "MicroMsg.SDK.NetUtil"
            r2 = 0
            if (r8 == 0) goto L172
            int r3 = r8.length()
            if (r3 != 0) goto Lf
            goto L172
        Lf:
            java.net.URL r3 = new java.net.URL     // Catch: java.lang.Throwable -> Lc4 java.lang.Exception -> Lcd java.io.IOException -> Lfc java.net.MalformedURLException -> L12b
            r3.<init>(r8)     // Catch: java.lang.Throwable -> Lc4 java.lang.Exception -> Lcd java.io.IOException -> Lfc java.net.MalformedURLException -> L12b
            java.net.URLConnection r8 = r3.openConnection()     // Catch: java.lang.Throwable -> Lc4 java.lang.Exception -> Lcd java.io.IOException -> Lfc java.net.MalformedURLException -> L12b
            java.net.HttpURLConnection r8 = (java.net.HttpURLConnection) r8     // Catch: java.lang.Throwable -> Lc4 java.lang.Exception -> Lcd java.io.IOException -> Lfc java.net.MalformedURLException -> L12b
            if (r8 != 0) goto L2f
            java.lang.String r9 = "open connection failed."
            com.tencent.mm.opensdk.utils.Log.e(r1, r9)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29 java.io.IOException -> L2b java.net.MalformedURLException -> L2d
            if (r8 == 0) goto L26
            r8.disconnect()     // Catch: java.lang.Throwable -> L26
        L26:
            return r2
        L27:
            r9 = move-exception
            goto L4b
        L29:
            r9 = move-exception
            goto L4e
        L2b:
            r9 = move-exception
            goto L52
        L2d:
            r9 = move-exception
            goto L56
        L2f:
            java.lang.String r3 = "GET"
            r8.setRequestMethod(r3)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lba java.io.IOException -> Lbd java.net.MalformedURLException -> Lc0
            r8.setConnectTimeout(r9)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lba java.io.IOException -> Lbd java.net.MalformedURLException -> Lc0
            r8.setReadTimeout(r9)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lba java.io.IOException -> Lbd java.net.MalformedURLException -> Lc0
            int r9 = r8.getResponseCode()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lba java.io.IOException -> Lbd java.net.MalformedURLException -> Lc0
            r3 = 300(0x12c, float:4.2E-43)
            if (r9 < r3) goto L5a
            java.lang.String r9 = "httpURLConnectionGet 300"
            com.tencent.mm.opensdk.utils.Log.e(r1, r9)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L29 java.io.IOException -> L2b java.net.MalformedURLException -> L2d
            r8.disconnect()     // Catch: java.lang.Throwable -> L4a
        L4a:
            return r2
        L4b:
            r0 = r2
            goto L15e
        L4e:
            r3 = r2
            r4 = r3
            goto Ld2
        L52:
            r3 = r2
            r4 = r3
            goto L101
        L56:
            r3 = r2
            r4 = r3
            goto L130
        L5a:
            java.io.InputStream r9 = r8.getInputStream()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lba java.io.IOException -> Lbd java.net.MalformedURLException -> Lc0
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La6 java.io.IOException -> Lab java.net.MalformedURLException -> Lb1
            r3.<init>()     // Catch: java.lang.Throwable -> La1 java.lang.Exception -> La6 java.io.IOException -> Lab java.net.MalformedURLException -> Lb1
            r4 = 1024(0x400, float:1.435E-42)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8c java.io.IOException -> L93 java.net.MalformedURLException -> L9a
        L67:
            int r5 = r9.read(r4)     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8c java.io.IOException -> L93 java.net.MalformedURLException -> L9a
            r6 = -1
            if (r5 == r6) goto L73
            r6 = 0
            r3.write(r4, r6, r5)     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8c java.io.IOException -> L93 java.net.MalformedURLException -> L9a
            goto L67
        L73:
            byte[] r4 = r3.toByteArray()     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8c java.io.IOException -> L93 java.net.MalformedURLException -> L9a
            java.lang.String r5 = "httpGet end"
            com.tencent.mm.opensdk.utils.Log.d(r1, r5)     // Catch: java.lang.Throwable -> L86 java.lang.Exception -> L8c java.io.IOException -> L93 java.net.MalformedURLException -> L9a
            r8.disconnect()     // Catch: java.lang.Throwable -> L7f
        L7f:
            r9.close()     // Catch: java.lang.Throwable -> L82
        L82:
            r3.close()     // Catch: java.lang.Throwable -> L85
        L85:
            return r4
        L86:
            r0 = move-exception
            r2 = r3
            r3 = r9
            r9 = r0
            goto L15c
        L8c:
            r4 = move-exception
            r7 = r3
            r3 = r9
            r9 = r4
            r4 = r7
            goto Ld2
        L93:
            r4 = move-exception
            r7 = r3
            r3 = r9
            r9 = r4
            r4 = r7
            goto L101
        L9a:
            r4 = move-exception
            r7 = r3
            r3 = r9
            r9 = r4
            r4 = r7
            goto L130
        La1:
            r0 = move-exception
            r7 = r0
            r0 = r9
            r9 = r7
            goto Lc8
        La6:
            r3 = move-exception
            r7 = r3
            r3 = r9
            r9 = r7
            goto Ld1
        Lab:
            r3 = move-exception
            r7 = r3
            r3 = r9
            r9 = r7
            goto L100
        Lb1:
            r3 = move-exception
            r7 = r3
            r3 = r9
            r9 = r7
            goto L12f
        Lb7:
            r9 = move-exception
            r0 = r2
            goto Lc8
        Lba:
            r9 = move-exception
            r3 = r2
            goto Ld1
        Lbd:
            r9 = move-exception
            r3 = r2
            goto L100
        Lc0:
            r9 = move-exception
            r3 = r2
            goto L12f
        Lc4:
            r8 = move-exception
            r9 = r8
            r8 = r2
            r0 = r8
        Lc8:
            r7 = r2
            r2 = r0
            r0 = r7
            goto L15e
        Lcd:
            r8 = move-exception
            r9 = r8
            r8 = r2
            r3 = r8
        Ld1:
            r4 = r2
        Ld2:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a
            r5.<init>()     // Catch: java.lang.Throwable -> L15a
            r5.append(r0)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> L15a
            r5.append(r9)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r9 = r5.toString()     // Catch: java.lang.Throwable -> L15a
            com.tencent.mm.opensdk.utils.Log.e(r1, r9)     // Catch: java.lang.Throwable -> L15a
            if (r8 == 0) goto Lef
            r8.disconnect()     // Catch: java.lang.Throwable -> Lee
            goto Lef
        Lee:
        Lef:
            if (r3 == 0) goto Lf6
            r3.close()     // Catch: java.lang.Throwable -> Lf5
            goto Lf6
        Lf5:
        Lf6:
            if (r4 == 0) goto Lfb
            r4.close()     // Catch: java.lang.Throwable -> Lfb
        Lfb:
            return r2
        Lfc:
            r8 = move-exception
            r9 = r8
            r8 = r2
            r3 = r8
        L100:
            r4 = r2
        L101:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a
            r5.<init>()     // Catch: java.lang.Throwable -> L15a
            r5.append(r0)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> L15a
            r5.append(r9)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r9 = r5.toString()     // Catch: java.lang.Throwable -> L15a
            com.tencent.mm.opensdk.utils.Log.e(r1, r9)     // Catch: java.lang.Throwable -> L15a
            if (r8 == 0) goto L11e
            r8.disconnect()     // Catch: java.lang.Throwable -> L11d
            goto L11e
        L11d:
        L11e:
            if (r3 == 0) goto L125
            r3.close()     // Catch: java.lang.Throwable -> L124
            goto L125
        L124:
        L125:
            if (r4 == 0) goto L12a
            r4.close()     // Catch: java.lang.Throwable -> L12a
        L12a:
            return r2
        L12b:
            r8 = move-exception
            r9 = r8
            r8 = r2
            r3 = r8
        L12f:
            r4 = r2
        L130:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a
            r5.<init>()     // Catch: java.lang.Throwable -> L15a
            r5.append(r0)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> L15a
            r5.append(r9)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r9 = r5.toString()     // Catch: java.lang.Throwable -> L15a
            com.tencent.mm.opensdk.utils.Log.e(r1, r9)     // Catch: java.lang.Throwable -> L15a
            if (r8 == 0) goto L14d
            r8.disconnect()     // Catch: java.lang.Throwable -> L14c
            goto L14d
        L14c:
        L14d:
            if (r3 == 0) goto L154
            r3.close()     // Catch: java.lang.Throwable -> L153
            goto L154
        L153:
        L154:
            if (r4 == 0) goto L159
            r4.close()     // Catch: java.lang.Throwable -> L159
        L159:
            return r2
        L15a:
            r9 = move-exception
            r2 = r4
        L15c:
            r0 = r2
            r2 = r3
        L15e:
            if (r8 == 0) goto L165
            r8.disconnect()     // Catch: java.lang.Throwable -> L164
            goto L165
        L164:
        L165:
            if (r2 == 0) goto L16c
            r2.close()     // Catch: java.lang.Throwable -> L16b
            goto L16c
        L16b:
        L16c:
            if (r0 == 0) goto L171
            r0.close()     // Catch: java.lang.Throwable -> L171
        L171:
            throw r9
        L172:
            java.lang.String r8 = "httpGet, url is null"
            com.tencent.mm.opensdk.utils.Log.e(r1, r8)
            return r2
    }

    public static byte[] a(java.lang.String r6, int r7, java.lang.String r8) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            if (r6 == 0) goto La
            r0.append(r6)
        La:
            r0.append(r7)
            r0.append(r8)
            java.lang.String r6 = "mMcShCsTr"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            r7 = 9
            r8 = 1
            java.lang.String r6 = r6.substring(r8, r7)
            byte[] r6 = r6.getBytes()
            r7 = 16
            char[] r7 = new char[r7]
            r7 = {x0064: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            java.lang.String r8 = "MD5"
            java.security.MessageDigest r8 = java.security.MessageDigest.getInstance(r8)     // Catch: java.lang.Exception -> L5e
            r8.update(r6)     // Catch: java.lang.Exception -> L5e
            byte[] r6 = r8.digest()     // Catch: java.lang.Exception -> L5e
            int r8 = r6.length     // Catch: java.lang.Exception -> L5e
            int r0 = r8 * 2
            char[] r0 = new char[r0]     // Catch: java.lang.Exception -> L5e
            r1 = 0
            r2 = 0
        L3f:
            if (r1 >= r8) goto L58
            r3 = r6[r1]     // Catch: java.lang.Exception -> L5e
            int r4 = r2 + 1
            int r5 = r3 >>> 4
            r5 = r5 & 15
            char r5 = r7[r5]     // Catch: java.lang.Exception -> L5e
            r0[r2] = r5     // Catch: java.lang.Exception -> L5e
            int r2 = r4 + 1
            r3 = r3 & 15
            char r3 = r7[r3]     // Catch: java.lang.Exception -> L5e
            r0[r4] = r3     // Catch: java.lang.Exception -> L5e
            int r1 = r1 + 1
            goto L3f
        L58:
            java.lang.String r6 = new java.lang.String     // Catch: java.lang.Exception -> L5e
            r6.<init>(r0)     // Catch: java.lang.Exception -> L5e
            goto L5f
        L5e:
            r6 = 0
        L5f:
            byte[] r6 = r6.getBytes()
            return r6
    }
}
