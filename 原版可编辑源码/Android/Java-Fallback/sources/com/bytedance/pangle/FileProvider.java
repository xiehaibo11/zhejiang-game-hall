package com.bytedance.pangle;

public class FileProvider extends android.content.ContentProvider {
    private static final java.lang.String[] a = null;
    private static final java.io.File b = null;
    private static com.bytedance.pangle.FileProvider.a c;

    interface a {
        android.net.Uri a(java.io.File r1);

        java.io.File a(android.net.Uri r1);
    }

    static class b implements com.bytedance.pangle.FileProvider.a {
        final java.util.HashMap<java.lang.String, java.io.File> a;
        private final java.lang.String b;

        b(java.lang.String r2) {
                r1 = this;
                r1.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.a = r0
                r1.b = r2
                return
        }

        @Override
        public final android.net.Uri a(java.io.File r6) {
                r5 = this;
                java.lang.String r6 = r6.getCanonicalPath()     // Catch: java.io.IOException -> Lb6
                r0 = 0
                java.util.HashMap<java.lang.String, java.io.File> r1 = r5.a
                java.util.Set r1 = r1.entrySet()
                java.util.Iterator r1 = r1.iterator()
            Lf:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L43
                java.lang.Object r2 = r1.next()
                java.util.Map$Entry r2 = (java.util.Map.Entry) r2
                java.lang.Object r3 = r2.getValue()
                java.io.File r3 = (java.io.File) r3
                java.lang.String r3 = r3.getPath()
                boolean r4 = r6.startsWith(r3)
                if (r4 == 0) goto Lf
                if (r0 == 0) goto L41
                int r3 = r3.length()
                java.lang.Object r4 = r0.getValue()
                java.io.File r4 = (java.io.File) r4
                java.lang.String r4 = r4.getPath()
                int r4 = r4.length()
                if (r3 <= r4) goto Lf
            L41:
                r0 = r2
                goto Lf
            L43:
                if (r0 == 0) goto La6
                java.lang.Object r1 = r0.getValue()
                java.io.File r1 = (java.io.File) r1
                java.lang.String r1 = r1.getPath()
                java.lang.String r2 = "/"
                boolean r3 = r1.endsWith(r2)
                if (r3 == 0) goto L60
                int r1 = r1.length()
                java.lang.String r6 = r6.substring(r1)
                goto L6a
            L60:
                int r1 = r1.length()
                int r1 = r1 + 1
                java.lang.String r6 = r6.substring(r1)
            L6a:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.Object r0 = r0.getKey()
                java.lang.String r0 = (java.lang.String) r0
                java.lang.String r0 = android.net.Uri.encode(r0)
                r1.append(r0)
                r0 = 47
                r1.append(r0)
                java.lang.String r6 = android.net.Uri.encode(r6, r2)
                r1.append(r6)
                java.lang.String r6 = r1.toString()
                android.net.Uri$Builder r0 = new android.net.Uri$Builder
                r0.<init>()
                java.lang.String r1 = "content"
                android.net.Uri$Builder r0 = r0.scheme(r1)
                java.lang.String r1 = r5.b
                android.net.Uri$Builder r0 = r0.authority(r1)
                android.net.Uri$Builder r6 = r0.encodedPath(r6)
                android.net.Uri r6 = r6.build()
                return r6
            La6:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r6 = java.lang.String.valueOf(r6)
                java.lang.String r1 = "Failed to find configured root that contains "
                java.lang.String r6 = r1.concat(r6)
                r0.<init>(r6)
                throw r0
            Lb6:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r6 = java.lang.String.valueOf(r6)
                java.lang.String r1 = "Failed to resolve canonical path for "
                java.lang.String r6 = r1.concat(r6)
                r0.<init>(r6)
                throw r0
        }

        @Override
        public final java.io.File a(android.net.Uri r5) {
                r4 = this;
                java.lang.String r0 = r5.getEncodedPath()
                r1 = 1
                r2 = 47
                int r2 = r0.indexOf(r2, r1)
                java.lang.String r3 = r0.substring(r1, r2)
                java.lang.String r3 = android.net.Uri.decode(r3)
                int r2 = r2 + r1
                java.lang.String r0 = r0.substring(r2)
                java.lang.String r0 = android.net.Uri.decode(r0)
                java.util.HashMap<java.lang.String, java.io.File> r1 = r4.a
                java.lang.Object r1 = r1.get(r3)
                java.io.File r1 = (java.io.File) r1
                if (r1 == 0) goto L56
                java.io.File r5 = new java.io.File
                r5.<init>(r1, r0)
                java.io.File r5 = r5.getCanonicalFile()     // Catch: java.io.IOException -> L46
                java.lang.String r0 = r5.getPath()
                java.lang.String r1 = r1.getPath()
                boolean r0 = r0.startsWith(r1)
                if (r0 == 0) goto L3e
                return r5
            L3e:
                java.lang.SecurityException r5 = new java.lang.SecurityException
                java.lang.String r0 = "Resolved path jumped beyond configured root"
                r5.<init>(r0)
                throw r5
            L46:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r5 = java.lang.String.valueOf(r5)
                java.lang.String r1 = "Failed to resolve canonical path for "
                java.lang.String r5 = r1.concat(r5)
                r0.<init>(r5)
                throw r0
            L56:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r5 = java.lang.String.valueOf(r5)
                java.lang.String r1 = "Unable to find configured root for "
                java.lang.String r5 = r1.concat(r5)
                r0.<init>(r5)
                throw r0
        }
    }

    static {
            java.lang.String r0 = "_display_name"
            java.lang.String r1 = "_size"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.bytedance.pangle.FileProvider.a = r0
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "/"
            r0.<init>(r1)
            com.bytedance.pangle.FileProvider.b = r0
            return
    }

    public FileProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.io.File a(java.io.File r4, java.lang.String... r5) {
            r0 = 0
            r1 = r0
        L2:
            if (r1 > 0) goto L11
            r2 = r5[r0]
            if (r2 == 0) goto Le
            java.io.File r3 = new java.io.File
            r3.<init>(r4, r2)
            r4 = r3
        Le:
            int r1 = r1 + 1
            goto L2
        L11:
            return r4
    }

    public static void a(com.bytedance.pangle.plugin.Plugin r10, android.content.res.XmlResourceParser r11) {
            java.lang.String r0 = r10.mPkgName     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            android.app.Application r1 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.lang.String r10 = r10.mPkgName     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            android.content.Context r10 = com.bytedance.pangle.transform.ZeusTransformUtils.wrapperContext(r1, r10)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            com.bytedance.pangle.FileProvider$a r1 = com.bytedance.pangle.FileProvider.c     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            com.bytedance.pangle.FileProvider$b r1 = (com.bytedance.pangle.FileProvider.b) r1     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
        L10:
            int r2 = r11.next()     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            r3 = 1
            if (r2 == r3) goto Lff
            r4 = 2
            if (r2 != r4) goto L10
            java.lang.String r2 = r11.getName()     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.lang.String r4 = "name"
            r5 = 0
            java.lang.String r4 = r11.getAttributeValue(r5, r4)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.lang.String r6 = "path"
            java.lang.String r6 = r11.getAttributeValue(r5, r6)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.lang.String r7 = "root-path"
            boolean r7 = r7.equals(r2)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            r8 = 0
            if (r7 == 0) goto L38
            java.io.File r5 = com.bytedance.pangle.FileProvider.b     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            goto Lb7
        L38:
            java.lang.String r7 = "files-path"
            boolean r7 = r7.equals(r2)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            if (r7 == 0) goto L46
            java.io.File r5 = r10.getFilesDir()     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            goto Lb7
        L46:
            java.lang.String r7 = "cache-path"
            boolean r7 = r7.equals(r2)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            if (r7 == 0) goto L53
            java.io.File r5 = r10.getCacheDir()     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            goto Lb7
        L53:
            java.lang.String r7 = "external-path"
            boolean r7 = r7.equals(r2)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            if (r7 == 0) goto L60
            java.io.File r5 = android.os.Environment.getExternalStorageDirectory()     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            goto Lb7
        L60:
            java.lang.String r7 = "external-files-path"
            boolean r7 = r7.equals(r2)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            r9 = 19
            if (r7 == 0) goto L81
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            if (r2 < r9) goto L73
            java.io.File[] r2 = r10.getExternalFilesDirs(r5)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            goto L7b
        L73:
            java.io.File[] r2 = new java.io.File[r3]     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.io.File r7 = r10.getExternalFilesDir(r5)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            r2[r8] = r7     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
        L7b:
            int r7 = r2.length     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            if (r7 <= 0) goto Lb7
            r5 = r2[r8]     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            goto Lb7
        L81:
            java.lang.String r7 = "external-cache-path"
            boolean r7 = r7.equals(r2)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            if (r7 == 0) goto La0
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            if (r2 < r9) goto L92
            java.io.File[] r2 = r10.getExternalCacheDirs()     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            goto L9a
        L92:
            java.io.File[] r2 = new java.io.File[r3]     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.io.File r7 = r10.getExternalCacheDir()     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            r2[r8] = r7     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
        L9a:
            int r7 = r2.length     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            if (r7 <= 0) goto Lb7
            r5 = r2[r8]     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            goto Lb7
        La0:
            int r7 = android.os.Build.VERSION.SDK_INT     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            r9 = 21
            if (r7 < r9) goto Lb7
            java.lang.String r7 = "external-media-path"
            boolean r2 = r7.equals(r2)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            if (r2 == 0) goto Lb7
            java.io.File[] r2 = r10.getExternalMediaDirs()     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            int r7 = r2.length     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            if (r7 <= 0) goto Lb7
            r5 = r2[r8]     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
        Lb7:
            if (r5 == 0) goto L10
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            r2.<init>()     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            r2.append(r0)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.lang.String r7 = "_"
            r2.append(r7)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            r2.append(r4)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.lang.String r2 = r2.toString()     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            r3[r8] = r6     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.io.File r3 = a(r5, r3)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            if (r4 != 0) goto Lf7
            java.io.File r3 = r3.getCanonicalFile()     // Catch: java.io.IOException -> Le6 org.xmlpull.v1.XmlPullParserException -> L100
            java.util.HashMap<java.lang.String, java.io.File> r4 = r1.a     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            r4.put(r2, r3)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            goto L10
        Le6:
            r10 = move-exception
            java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.lang.String r0 = "Failed to resolve canonical path for "
            java.lang.String r1 = java.lang.String.valueOf(r3)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.lang.String r0 = r0.concat(r1)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            r11.<init>(r0, r10)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            throw r11     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
        Lf7:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            java.lang.String r11 = "Name must not be empty"
            r10.<init>(r11)     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
            throw r10     // Catch: org.xmlpull.v1.XmlPullParserException -> L100 java.io.IOException -> L102
        Lff:
            return
        L100:
            r10 = move-exception
            goto L103
        L102:
            r10 = move-exception
        L103:
            r10.printStackTrace()
            return
    }

    public static android.net.Uri getUriForFile(java.io.File r1) {
            com.bytedance.pangle.FileProvider$a r0 = com.bytedance.pangle.FileProvider.c
            android.net.Uri r1 = r0.a(r1)
            return r1
    }

    @Override
    public void attachInfo(android.content.Context r1, android.content.pm.ProviderInfo r2) {
            r0 = this;
            super.attachInfo(r1, r2)
            boolean r1 = r2.exported
            if (r1 != 0) goto L29
            boolean r1 = r2.grantUriPermissions
            if (r1 == 0) goto L21
            com.bytedance.pangle.FileProvider$a r1 = com.bytedance.pangle.FileProvider.c
            if (r1 != 0) goto L19
            com.bytedance.pangle.FileProvider$b r1 = new com.bytedance.pangle.FileProvider$b
            java.lang.String r2 = r2.authority
            r1.<init>(r2)
            com.bytedance.pangle.FileProvider.c = r1
            return
        L19:
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.String r2 = "仅允许定义一个FileProvider"
            r1.<init>(r2)
            throw r1
        L21:
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.String r2 = "Provider must grant uri permissions"
            r1.<init>(r2)
            throw r1
        L29:
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.String r2 = "Provider must not be exported"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            r0 = this;
            com.bytedance.pangle.FileProvider$a r2 = com.bytedance.pangle.FileProvider.c
            java.io.File r1 = r2.a(r1)
            boolean r1 = r1.delete()
            if (r1 == 0) goto Le
            r1 = 1
            return r1
        Le:
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String getType(android.net.Uri r3) {
            r2 = this;
            com.bytedance.pangle.FileProvider$a r0 = com.bytedance.pangle.FileProvider.c
            java.io.File r3 = r0.a(r3)
            java.lang.String r0 = r3.getName()
            r1 = 46
            int r0 = r0.lastIndexOf(r1)
            if (r0 < 0) goto L27
            java.lang.String r3 = r3.getName()
            int r0 = r0 + 1
            java.lang.String r3 = r3.substring(r0)
            android.webkit.MimeTypeMap r0 = android.webkit.MimeTypeMap.getSingleton()
            java.lang.String r3 = r0.getMimeTypeFromExtension(r3)
            if (r3 == 0) goto L27
            return r3
        L27:
            java.lang.String r3 = "application/octet-stream"
            return r3
    }

    @Override
    public android.net.Uri insert(android.net.Uri r1, android.content.ContentValues r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "No external inserts"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public boolean onCreate() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public android.os.ParcelFileDescriptor openFile(android.net.Uri r2, java.lang.String r3) {
            r1 = this;
            com.bytedance.pangle.FileProvider$a r0 = com.bytedance.pangle.FileProvider.c
            java.io.File r2 = r0.a(r2)
            java.lang.String r0 = "r"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L11
            r3 = 268435456(0x10000000, float:2.524355E-29)
            goto L55
        L11:
            java.lang.String r0 = "w"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L53
            java.lang.String r0 = "wt"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L22
            goto L53
        L22:
            java.lang.String r0 = "wa"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L2d
            r3 = 704643072(0x2a000000, float:1.1368684E-13)
            goto L55
        L2d:
            java.lang.String r0 = "rw"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L38
            r3 = 939524096(0x38000000, float:3.0517578E-5)
            goto L55
        L38:
            java.lang.String r0 = "rwt"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L43
            r3 = 1006632960(0x3c000000, float:0.0078125)
            goto L55
        L43:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "Invalid mode: "
            java.lang.String r3 = r0.concat(r3)
            r2.<init>(r3)
            throw r2
        L53:
            r3 = 738197504(0x2c000000, float:1.8189894E-12)
        L55:
            android.os.ParcelFileDescriptor r2 = android.os.ParcelFileDescriptor.open(r2, r3)
            return r2
    }

    @Override
    public android.database.Cursor query(android.net.Uri r7, java.lang.String[] r8, java.lang.String r9, java.lang.String[] r10, java.lang.String r11) {
            r6 = this;
            com.bytedance.pangle.FileProvider$a r9 = com.bytedance.pangle.FileProvider.c
            java.io.File r7 = r9.a(r7)
            if (r8 != 0) goto La
            java.lang.String[] r8 = com.bytedance.pangle.FileProvider.a
        La:
            int r9 = r8.length
            java.lang.String[] r9 = new java.lang.String[r9]
            int r10 = r8.length
            java.lang.Object[] r10 = new java.lang.Object[r10]
            int r11 = r8.length
            r0 = 0
            r1 = r0
            r2 = r1
        L14:
            if (r1 >= r11) goto L46
            r3 = r8[r1]
            java.lang.String r4 = "_display_name"
            boolean r5 = r4.equals(r3)
            if (r5 == 0) goto L2c
            r9[r2] = r4
            int r3 = r2 + 1
            java.lang.String r4 = r7.getName()
            r10[r2] = r4
        L2a:
            r2 = r3
            goto L43
        L2c:
            java.lang.String r4 = "_size"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L43
            r9[r2] = r4
            int r3 = r2 + 1
            long r4 = r7.length()
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r10[r2] = r4
            goto L2a
        L43:
            int r1 = r1 + 1
            goto L14
        L46:
            java.lang.String[] r7 = new java.lang.String[r2]
            java.lang.System.arraycopy(r9, r0, r7, r0, r2)
            java.lang.Object[] r8 = new java.lang.Object[r2]
            java.lang.System.arraycopy(r10, r0, r8, r0, r2)
            android.database.MatrixCursor r9 = new android.database.MatrixCursor
            r10 = 1
            r9.<init>(r7, r10)
            r9.addRow(r8)
            return r9
    }

    @Override
    public int update(android.net.Uri r1, android.content.ContentValues r2, java.lang.String r3, java.lang.String[] r4) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "No external updates"
            r1.<init>(r2)
            throw r1
    }
}
