package com.igexin.push.extension.distribution.basic.g;

public class e {
    public static java.lang.String a(android.content.Context r3) {
            com.igexin.push.extension.distribution.basic.d.a.a()     // Catch: java.lang.Throwable -> L42
            java.lang.String r0 = com.igexin.push.extension.distribution.basic.d.a.b()     // Catch: java.lang.Throwable -> L42
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L42
            if (r1 == 0) goto L36
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L42
            r1.<init>()     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "/sdcard/libs//"
            r1.append(r2)     // Catch: java.lang.Throwable -> L42
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Throwable -> L42
            r1.append(r3)     // Catch: java.lang.Throwable -> L42
            java.lang.String r3 = ".bin"
            r1.append(r3)     // Catch: java.lang.Throwable -> L42
            java.lang.String r3 = r1.toString()     // Catch: java.lang.Throwable -> L42
            byte[] r3 = b(r3)     // Catch: java.lang.Throwable -> L42
            if (r3 == 0) goto L36
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L42
            byte[] r3 = com.igexin.push.extension.distribution.basic.g.h.b(r3)     // Catch: java.lang.Throwable -> L42
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L42
        L36:
            java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L3a
            goto L3b
        L3a:
            r0 = 0
        L3b:
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L42
            if (r3 != 0) goto L42
            return r0
        L42:
            java.lang.String r3 = "com.igexin.sdk.PushService"
            return r3
    }

    public static java.util.List<org.json.JSONObject> a(java.lang.String r10) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L147
            r2.<init>(r10)     // Catch: java.lang.Throwable -> L147
            boolean r10 = r2.exists()     // Catch: java.lang.Throwable -> L147
            if (r10 != 0) goto L12
            return r1
        L12:
            java.io.File[] r10 = r2.listFiles()     // Catch: java.lang.Throwable -> L147
            if (r10 == 0) goto L146
            r2 = 0
            r3 = r2
        L1a:
            int r4 = r10.length     // Catch: java.lang.Throwable -> L147
            if (r3 >= r4) goto L146
            r4 = r10[r3]     // Catch: java.lang.Throwable -> L147
            if (r4 == 0) goto L142
            boolean r5 = r4.isFile()     // Catch: java.lang.Throwable -> L147
            if (r5 == 0) goto L142
            java.lang.String r5 = r4.getName()     // Catch: java.lang.Throwable -> L147
            java.lang.String r6 = ".db"
            int r5 = r5.indexOf(r6)     // Catch: java.lang.Throwable -> L147
            if (r5 <= 0) goto L142
            java.lang.String r5 = r4.getName()     // Catch: java.lang.Throwable -> L147
            java.lang.String r6 = "com.igexin.sdk.deviceId.db"
            boolean r5 = r5.equals(r6)     // Catch: java.lang.Throwable -> L147
            if (r5 != 0) goto L142
            java.lang.String r5 = r4.getName()     // Catch: java.lang.Throwable -> L147
            java.lang.String r6 = "com.getui.sdk.deviceId.db"
            boolean r5 = r5.equals(r6)     // Catch: java.lang.Throwable -> L147
            if (r5 != 0) goto L142
            java.lang.String r5 = r4.getName()     // Catch: java.lang.Throwable -> L147
            java.lang.String r6 = "app.db"
            boolean r5 = r5.equals(r6)     // Catch: java.lang.Throwable -> L147
            if (r5 != 0) goto L142
            java.lang.String r5 = r4.getName()     // Catch: java.lang.Throwable -> L147
            java.lang.String r6 = "imsi.db"
            boolean r5 = r5.equals(r6)     // Catch: java.lang.Throwable -> L147
            if (r5 != 0) goto L142
            java.lang.String r5 = r4.getName()     // Catch: java.lang.Throwable -> L147
            java.lang.String r6 = r4.getName()     // Catch: java.lang.Throwable -> L147
            int r6 = r6.length()     // Catch: java.lang.Throwable -> L147
            int r6 = r6 + (-3)
            java.lang.String r5 = r5.substring(r2, r6)     // Catch: java.lang.Throwable -> L147
            boolean r6 = com.igexin.push.extension.distribution.basic.g.b.a(r5)     // Catch: java.lang.Throwable -> L147
            if (r6 == 0) goto L142
            android.content.Context r6 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L147
            java.lang.String r6 = r6.getPackageName()     // Catch: java.lang.Throwable -> L147
            boolean r6 = r6.equals(r5)     // Catch: java.lang.Throwable -> L147
            if (r6 == 0) goto L89
            goto L142
        L89:
            r6 = 1024(0x400, float:1.435E-42)
            byte[] r6 = new byte[r6]     // Catch: java.lang.Throwable -> L147
            java.io.FileInputStream r7 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> Lb6 java.lang.Exception -> Lbb
            r7.<init>(r4)     // Catch: java.lang.Throwable -> Lb6 java.lang.Exception -> Lbb
            java.io.ByteArrayOutputStream r4 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb3
            r4.<init>()     // Catch: java.lang.Throwable -> Laf java.lang.Exception -> Lb3
        L97:
            int r8 = r7.read(r6)     // Catch: java.lang.Exception -> Lad java.lang.Throwable -> L136
            r9 = -1
            if (r8 == r9) goto La2
            r4.write(r6, r2, r8)     // Catch: java.lang.Exception -> Lad java.lang.Throwable -> L136
            goto L97
        La2:
            byte[] r6 = r4.toByteArray()     // Catch: java.lang.Exception -> Lad java.lang.Throwable -> L136
            r7.close()     // Catch: java.lang.Throwable -> L147
            r4.close()     // Catch: java.lang.Throwable -> L147
            goto Leb
        Lad:
            r6 = move-exception
            goto Lbe
        Laf:
            r10 = move-exception
            r4 = r1
            goto L137
        Lb3:
            r6 = move-exception
            r4 = r1
            goto Lbe
        Lb6:
            r10 = move-exception
            r4 = r1
            r7 = r4
            goto L137
        Lbb:
            r6 = move-exception
            r4 = r1
            r7 = r4
        Lbe:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L136
            r8.<init>()     // Catch: java.lang.Throwable -> L136
            java.lang.String r9 = "EXT-FileUtils| read "
            r8.append(r9)     // Catch: java.lang.Throwable -> L136
            r8.append(r5)     // Catch: java.lang.Throwable -> L136
            java.lang.String r9 = "excetpion:"
            r8.append(r9)     // Catch: java.lang.Throwable -> L136
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L136
            r8.append(r6)     // Catch: java.lang.Throwable -> L136
            java.lang.String r6 = r8.toString()     // Catch: java.lang.Throwable -> L136
            java.lang.Object[] r8 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L136
            com.igexin.b.a.c.b.a(r6, r8)     // Catch: java.lang.Throwable -> L136
            if (r7 == 0) goto Le5
            r7.close()     // Catch: java.lang.Throwable -> L147
        Le5:
            if (r4 == 0) goto Lea
            r4.close()     // Catch: java.lang.Throwable -> L147
        Lea:
            r6 = r1
        Leb:
            if (r6 != 0) goto L109
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L147
            r4.<init>()     // Catch: java.lang.Throwable -> L147
            java.lang.String r6 = "EXT-FileUtils|read "
            r4.append(r6)     // Catch: java.lang.Throwable -> L147
            r4.append(r5)     // Catch: java.lang.Throwable -> L147
            java.lang.String r5 = "bytes == null"
            r4.append(r5)     // Catch: java.lang.Throwable -> L147
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L147
            java.lang.Object[] r5 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L147
            com.igexin.b.a.c.b.a(r4, r5)     // Catch: java.lang.Throwable -> L147
            goto L142
        L109:
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Throwable -> L147
            java.lang.String r5 = com.igexin.push.core.d.E     // Catch: java.lang.Throwable -> L147
            byte[] r5 = com.igexin.b.a.a.a.a(r6, r5)     // Catch: java.lang.Throwable -> L147
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L147
            java.lang.String r5 = "\\|"
            java.lang.String[] r4 = r4.split(r5)     // Catch: java.lang.Throwable -> L147
            int r5 = r4.length     // Catch: java.lang.Throwable -> L147
            r6 = 2
            if (r5 <= r6) goto L142
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L142 java.lang.Throwable -> L147
            r5.<init>()     // Catch: java.lang.Exception -> L142 java.lang.Throwable -> L147
            java.lang.String r7 = "cid"
            r6 = r4[r6]     // Catch: java.lang.Exception -> L142 java.lang.Throwable -> L147
            r5.put(r7, r6)     // Catch: java.lang.Exception -> L142 java.lang.Throwable -> L147
            java.lang.String r6 = "appid"
            r7 = 1
            r4 = r4[r7]     // Catch: java.lang.Exception -> L142 java.lang.Throwable -> L147
            r5.put(r6, r4)     // Catch: java.lang.Exception -> L142 java.lang.Throwable -> L147
            r0.add(r5)     // Catch: java.lang.Exception -> L142 java.lang.Throwable -> L147
            goto L142
        L136:
            r10 = move-exception
        L137:
            if (r7 == 0) goto L13c
            r7.close()     // Catch: java.lang.Throwable -> L147
        L13c:
            if (r4 == 0) goto L141
            r4.close()     // Catch: java.lang.Throwable -> L147
        L141:
            throw r10     // Catch: java.lang.Throwable -> L147
        L142:
            int r3 = r3 + 1
            goto L1a
        L146:
            return r0
        L147:
            return r1
    }

    public static boolean a() {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L15
            java.lang.String r1 = "/sdcard/libs//test.log"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L15
            boolean r1 = r0.exists()     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L10
            r0.createNewFile()     // Catch: java.lang.Throwable -> L15
        L10:
            r0.delete()     // Catch: java.lang.Throwable -> L15
            r0 = 1
            return r0
        L15:
            r0 = 0
            return r0
    }

    public static byte[] b(java.lang.String r6) {
            java.io.File r0 = new java.io.File
            r0.<init>(r6)
            boolean r0 = r0.exists()
            r1 = 0
            r2 = 0
            if (r0 != 0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "EXT-FileUtils|get data from file = "
            r0.append(r3)
            r0.append(r6)
            java.lang.String r6 = " file not exist ######"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            java.lang.Object[] r0 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r6, r0)
            return r2
        L29:
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L58
            r3.<init>(r6)     // Catch: java.lang.Throwable -> L55 java.lang.Exception -> L58
            java.io.ByteArrayOutputStream r6 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L52
            r6.<init>()     // Catch: java.lang.Throwable -> L4f java.lang.Exception -> L52
        L37:
            int r4 = r3.read(r0)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7e
            r5 = -1
            if (r4 == r5) goto L42
            r6.write(r0, r1, r4)     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7e
            goto L37
        L42:
            byte[] r2 = r6.toByteArray()     // Catch: java.lang.Exception -> L4d java.lang.Throwable -> L7e
            r3.close()     // Catch: java.lang.Exception -> L49
        L49:
            r6.close()     // Catch: java.lang.Exception -> L7d
            goto L7d
        L4d:
            r0 = move-exception
            goto L5b
        L4f:
            r0 = move-exception
            r6 = r2
            goto L7f
        L52:
            r0 = move-exception
            r6 = r2
            goto L5b
        L55:
            r0 = move-exception
            r6 = r2
            goto L80
        L58:
            r0 = move-exception
            r6 = r2
            r3 = r6
        L5b:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7e
            r4.<init>()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r5 = "EXT-FileUtils|"
            r4.append(r5)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L7e
            r4.append(r0)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L7e
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L7e
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Throwable -> L7e
            if (r3 == 0) goto L7a
            r3.close()     // Catch: java.lang.Exception -> L7a
        L7a:
            if (r6 == 0) goto L7d
            goto L49
        L7d:
            return r2
        L7e:
            r0 = move-exception
        L7f:
            r2 = r3
        L80:
            if (r2 == 0) goto L85
            r2.close()     // Catch: java.lang.Exception -> L85
        L85:
            if (r6 == 0) goto L8a
            r6.close()     // Catch: java.lang.Exception -> L8a
        L8a:
            throw r0
    }
}
