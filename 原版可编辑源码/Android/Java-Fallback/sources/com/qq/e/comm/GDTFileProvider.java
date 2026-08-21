package com.qq.e.comm;

public class GDTFileProvider extends android.content.ContentProvider {
    private static final java.lang.String[] b = null;
    private static final java.io.File c = null;
    private static java.util.HashMap<java.lang.String, com.qq.e.comm.GDTFileProvider.a> d;
    private com.qq.e.comm.GDTFileProvider.a a;

    interface a {
        android.net.Uri a(java.io.File r1);

        java.io.File a(android.net.Uri r1);
    }

    static class b implements com.qq.e.comm.GDTFileProvider.a {
        private final java.lang.String a;
        private final java.util.HashMap<java.lang.String, java.io.File> b;

        b(java.lang.String r2) {
                r1 = this;
                r1.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.b = r0
                r1.a = r2
                return
        }

        @Override
        public android.net.Uri a(java.io.File r6) {
                r5 = this;
                java.lang.String r6 = r6.getCanonicalPath()     // Catch: java.io.IOException -> Lb5
                r0 = 0
                java.util.HashMap<java.lang.String, java.io.File> r1 = r5.b
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
                if (r0 == 0) goto L9e
                java.lang.Object r1 = r0.getValue()
                java.io.File r1 = (java.io.File) r1
                java.lang.String r1 = r1.getPath()
                java.lang.String r2 = "/"
                boolean r3 = r1.endsWith(r2)
                int r1 = r1.length()
                if (r3 == 0) goto L5c
                goto L5e
            L5c:
                int r1 = r1 + 1
            L5e:
                java.lang.String r6 = r6.substring(r1)
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
                java.lang.String r1 = r5.a
                android.net.Uri$Builder r0 = r0.authority(r1)
                android.net.Uri$Builder r6 = r0.encodedPath(r6)
                android.net.Uri r6 = r6.build()
                return r6
            L9e:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Failed to find configured root that contains "
                r1.append(r2)
                r1.append(r6)
                java.lang.String r6 = r1.toString()
                r0.<init>(r6)
                throw r0
            Lb5:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Failed to resolve canonical path for "
                r1.append(r2)
                r1.append(r6)
                java.lang.String r6 = r1.toString()
                r0.<init>(r6)
                throw r0
        }

        @Override
        public java.io.File a(android.net.Uri r5) {
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
                java.util.HashMap<java.lang.String, java.io.File> r1 = r4.b
                java.lang.Object r1 = r1.get(r3)
                java.io.File r1 = (java.io.File) r1
                if (r1 == 0) goto L5d
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
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Failed to resolve canonical path for "
                r1.append(r2)
                r1.append(r5)
                java.lang.String r5 = r1.toString()
                r0.<init>(r5)
                throw r0
            L5d:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Unable to find configured root for "
                r1.append(r2)
                r1.append(r5)
                java.lang.String r5 = r1.toString()
                r0.<init>(r5)
                throw r0
        }

        void a(java.lang.String r4, java.io.File r5) {
                r3 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r4)
                if (r0 != 0) goto L28
                java.io.File r5 = r5.getCanonicalFile()     // Catch: java.io.IOException -> L10
                java.util.HashMap<java.lang.String, java.io.File> r0 = r3.b
                r0.put(r4, r5)
                return
            L10:
                r4 = move-exception
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Failed to resolve canonical path for "
                r1.append(r2)
                r1.append(r5)
                java.lang.String r5 = r1.toString()
                r0.<init>(r5, r4)
                throw r0
            L28:
                java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
                java.lang.String r5 = "Name must not be empty"
                r4.<init>(r5)
                throw r4
        }
    }

    static {
            java.lang.String r0 = "_display_name"
            java.lang.String r1 = "_size"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.qq.e.comm.GDTFileProvider.b = r0
            java.io.File r0 = new java.io.File
            java.lang.String r1 = java.io.File.separator
            r0.<init>(r1)
            com.qq.e.comm.GDTFileProvider.c = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qq.e.comm.GDTFileProvider.d = r0
            return
    }

    public GDTFileProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.qq.e.comm.GDTFileProvider.a a(android.content.Context r2, java.lang.String r3) {
            java.util.HashMap<java.lang.String, com.qq.e.comm.GDTFileProvider$a> r0 = com.qq.e.comm.GDTFileProvider.d
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, com.qq.e.comm.GDTFileProvider$a> r1 = com.qq.e.comm.GDTFileProvider.d     // Catch: java.lang.Throwable -> L2b
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> L2b
            com.qq.e.comm.GDTFileProvider$a r1 = (com.qq.e.comm.GDTFileProvider.a) r1     // Catch: java.lang.Throwable -> L2b
            if (r1 != 0) goto L29
            com.qq.e.comm.GDTFileProvider$a r1 = b(r2, r3)     // Catch: org.xmlpull.v1.XmlPullParserException -> L17 java.io.IOException -> L20 java.lang.Throwable -> L2b
            java.util.HashMap<java.lang.String, com.qq.e.comm.GDTFileProvider$a> r2 = com.qq.e.comm.GDTFileProvider.d     // Catch: java.lang.Throwable -> L2b
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L2b
            goto L29
        L17:
            r2 = move-exception
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L2b
            java.lang.String r1 = "Failed to parse android.support.FILE_PROVIDER_PATHS meta-data"
            r3.<init>(r1, r2)     // Catch: java.lang.Throwable -> L2b
            throw r3     // Catch: java.lang.Throwable -> L2b
        L20:
            r2 = move-exception
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L2b
            java.lang.String r1 = "Failed to parse android.support.FILE_PROVIDER_PATHS meta-data"
            r3.<init>(r1, r2)     // Catch: java.lang.Throwable -> L2b
            throw r3     // Catch: java.lang.Throwable -> L2b
        L29:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            return r1
        L2b:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            throw r2
    }

    private static com.qq.e.comm.GDTFileProvider.a b(android.content.Context r9, java.lang.String r10) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException {
            com.qq.e.comm.GDTFileProvider$b r0 = new com.qq.e.comm.GDTFileProvider$b
            r0.<init>(r10)
            android.content.pm.PackageManager r1 = r9.getPackageManager()
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ProviderInfo r10 = r1.resolveContentProvider(r10, r2)
            android.content.pm.PackageManager r1 = r9.getPackageManager()
            java.lang.String r2 = "android.support.FILE_PROVIDER_PATHS"
            android.content.res.XmlResourceParser r10 = r10.loadXmlMetaData(r1, r2)
            if (r10 == 0) goto Ld2
        L1b:
            int r1 = r10.next()
            r2 = 1
            if (r1 == r2) goto Lce
            r3 = 2
            if (r1 != r3) goto L1b
            java.lang.String r1 = r10.getName()
            r3 = 0
            java.lang.String r4 = "name"
            java.lang.String r4 = r10.getAttributeValue(r3, r4)
            java.lang.String r5 = "path"
            java.lang.String r5 = r10.getAttributeValue(r3, r5)
            java.lang.String r6 = "root-path"
            boolean r6 = r6.equals(r1)
            r7 = 0
            if (r6 == 0) goto L43
            java.io.File r3 = com.qq.e.comm.GDTFileProvider.c
            goto Lb4
        L43:
            java.lang.String r6 = "files-path"
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto L50
            java.io.File r3 = r9.getFilesDir()
            goto Lb4
        L50:
            java.lang.String r6 = "cache-path"
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto L5d
            java.io.File r3 = r9.getCacheDir()
            goto Lb4
        L5d:
            java.lang.String r6 = "external-path"
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto L6a
            java.io.File r3 = android.os.Environment.getExternalStorageDirectory()
            goto Lb4
        L6a:
            java.lang.String r6 = "external-files-path"
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto L8b
            int r1 = android.os.Build.VERSION.SDK_INT
            r6 = 19
            if (r1 < r6) goto L7d
            java.io.File[] r1 = r9.getExternalFilesDirs(r3)
            goto L85
        L7d:
            java.io.File[] r1 = new java.io.File[r2]
            java.io.File r6 = r9.getExternalFilesDir(r3)
            r1[r7] = r6
        L85:
            int r6 = r1.length
            if (r6 <= 0) goto Lb4
            r3 = r1[r7]
            goto Lb4
        L8b:
            java.lang.String r6 = "external-cache-path"
            boolean r6 = r6.equals(r1)
            if (r6 == 0) goto L9d
            java.io.File[] r1 = getExternalCacheDirs(r9)
            int r6 = r1.length
            if (r6 <= 0) goto Lb4
            r3 = r1[r7]
            goto Lb4
        L9d:
            int r6 = android.os.Build.VERSION.SDK_INT
            r8 = 21
            if (r6 < r8) goto Lb4
            java.lang.String r6 = "external-media-path"
            boolean r1 = r6.equals(r1)
            if (r1 == 0) goto Lb4
            java.io.File[] r1 = r9.getExternalMediaDirs()
            int r6 = r1.length
            if (r6 <= 0) goto Lb4
            r3 = r1[r7]
        Lb4:
            if (r3 == 0) goto L1b
            java.lang.String[] r1 = new java.lang.String[r2]
            r1[r7] = r5
        Lba:
            if (r7 >= r2) goto Lc9
            r5 = r1[r7]
            if (r5 == 0) goto Lc6
            java.io.File r6 = new java.io.File
            r6.<init>(r3, r5)
            r3 = r6
        Lc6:
            int r7 = r7 + 1
            goto Lba
        Lc9:
            r0.a(r4, r3)
            goto L1b
        Lce:
            r10.close()
            return r0
        Ld2:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r10 = "Missing android.support.FILE_PROVIDER_PATHS meta-data"
            r9.<init>(r10)
            throw r9
    }

    public static java.io.File[] getExternalCacheDirs(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto Lb
            java.io.File[] r2 = r2.getExternalCacheDirs()
            goto L16
        Lb:
            r0 = 1
            java.io.File[] r0 = new java.io.File[r0]
            java.io.File r2 = r2.getExternalCacheDir()
            r1 = 0
            r0[r1] = r2
            r2 = r0
        L16:
            return r2
    }

    public static android.net.Uri getUriForFile(android.content.Context r1, java.lang.String r2, java.io.File r3) {
            android.net.Uri r0 = android.net.Uri.EMPTY
            com.qq.e.comm.GDTFileProvider$a r1 = a(r1, r2)     // Catch: java.lang.Throwable -> La
            android.net.Uri r0 = r1.a(r3)     // Catch: java.lang.Throwable -> La
        La:
            return r0
    }

    @Override
    public void attachInfo(android.content.Context r2, android.content.pm.ProviderInfo r3) {
            r1 = this;
            super.attachInfo(r2, r3)
            boolean r0 = r3.exported
            if (r0 != 0) goto L1c
            boolean r0 = r3.grantUriPermissions
            if (r0 == 0) goto L14
            java.lang.String r3 = r3.authority
            com.qq.e.comm.GDTFileProvider$a r2 = a(r2, r3)
            r1.a = r2
            return
        L14:
            java.lang.SecurityException r2 = new java.lang.SecurityException
            java.lang.String r3 = "Provider must grant uri permissions"
            r2.<init>(r3)
            throw r2
        L1c:
            java.lang.SecurityException r2 = new java.lang.SecurityException
            java.lang.String r3 = "Provider must not be exported"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            r0 = this;
            com.qq.e.comm.GDTFileProvider$a r2 = r0.a
            java.io.File r1 = r2.a(r1)
            boolean r1 = r1.delete()
            return r1
    }

    @Override
    public java.lang.String getType(android.net.Uri r3) {
            r2 = this;
            com.qq.e.comm.GDTFileProvider$a r0 = r2.a
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
    public android.os.ParcelFileDescriptor openFile(android.net.Uri r3, java.lang.String r4) throws java.io.FileNotFoundException {
            r2 = this;
            com.qq.e.comm.GDTFileProvider$a r0 = r2.a
            java.io.File r3 = r0.a(r3)
            java.lang.String r0 = "r"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L11
            r4 = 268435456(0x10000000, float:2.524355E-29)
            goto L5c
        L11:
            java.lang.String r0 = "w"
            boolean r0 = r0.equals(r4)
            if (r0 != 0) goto L5a
            java.lang.String r0 = "wt"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L22
            goto L5a
        L22:
            java.lang.String r0 = "wa"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L2d
            r4 = 704643072(0x2a000000, float:1.1368684E-13)
            goto L5c
        L2d:
            java.lang.String r0 = "rw"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L38
            r4 = 939524096(0x38000000, float:3.0517578E-5)
            goto L5c
        L38:
            java.lang.String r0 = "rwt"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L43
            r4 = 1006632960(0x3c000000, float:0.0078125)
            goto L5c
        L43:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid mode: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
        L5a:
            r4 = 738197504(0x2c000000, float:1.8189894E-12)
        L5c:
            android.os.ParcelFileDescriptor r3 = android.os.ParcelFileDescriptor.open(r3, r4)
            return r3
    }

    @Override
    public android.database.Cursor query(android.net.Uri r7, java.lang.String[] r8, java.lang.String r9, java.lang.String[] r10, java.lang.String r11) {
            r6 = this;
            com.qq.e.comm.GDTFileProvider$a r9 = r6.a
            java.io.File r7 = r9.a(r7)
            if (r8 != 0) goto La
            java.lang.String[] r8 = com.qq.e.comm.GDTFileProvider.b
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
