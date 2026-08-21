package com.huawei.updatesdk.fileprovider;

public class UpdateSdkFileProvider extends android.content.ContentProvider {
    public static final java.lang.String AUTHORITIES_SUFFIX = ".updateSdk.fileProvider";
    private static final java.lang.String[] COLUMNS = null;
    private static final java.lang.String TAG = "UpdateSdkFileProvider";
    private static com.huawei.updatesdk.fileprovider.a mWStrategy;
    private java.lang.String authority;

    static {
            java.lang.String r0 = "_display_name"
            java.lang.String r1 = "_size"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider.COLUMNS = r0
            return
    }

    public UpdateSdkFileProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.io.File buildPath(java.io.File r4, java.lang.String... r5) {
            int r0 = r5.length
            r1 = 0
        L2:
            if (r1 >= r0) goto L11
            r2 = r5[r1]
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

    private static java.lang.Object[] copyOf(java.lang.Object[] r2, int r3) {
            java.lang.Object[] r0 = new java.lang.Object[r3]
            r1 = 0
            java.lang.System.arraycopy(r2, r1, r0, r1, r3)
            return r0
    }

    private static java.lang.String[] copyOf(java.lang.String[] r2, int r3) {
            java.lang.String[] r0 = new java.lang.String[r3]
            r1 = 0
            java.lang.System.arraycopy(r2, r1, r0, r1, r3)
            return r0
    }

    private static synchronized com.huawei.updatesdk.fileprovider.a createWiseDistPathStrategy(android.content.Context r2, java.lang.String r3) {
            java.lang.Class<com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider> r0 = com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider.class
            monitor-enter(r0)
            com.huawei.updatesdk.fileprovider.a r1 = com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider.mWStrategy     // Catch: java.lang.Throwable -> L2d
            if (r1 != 0) goto L29
            com.huawei.updatesdk.fileprovider.b r1 = new com.huawei.updatesdk.fileprovider.b     // Catch: java.lang.Throwable -> L2d
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L2d
            com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider.mWStrategy = r1     // Catch: java.lang.Throwable -> L2d
            java.io.File r3 = r2.getFilesDir()     // Catch: java.lang.Throwable -> L2d
            if (r3 == 0) goto L29
            java.io.File r2 = r2.getFilesDir()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = "/"
            java.lang.String[] r3 = new java.lang.String[]{r3}     // Catch: java.lang.Throwable -> L2d
            java.io.File r2 = buildPath(r2, r3)     // Catch: java.lang.Throwable -> L2d
            com.huawei.updatesdk.fileprovider.a r3 = com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider.mWStrategy     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = "updatesdkapk"
            r3.a(r1, r2)     // Catch: java.lang.Throwable -> L2d
        L29:
            com.huawei.updatesdk.fileprovider.a r2 = com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider.mWStrategy     // Catch: java.lang.Throwable -> L2d
            monitor-exit(r0)
            return r2
        L2d:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static android.net.Uri getUriForFile(android.content.Context r0, java.lang.String r1, java.io.File r2) {
            createWiseDistPathStrategy(r0, r1)
            com.huawei.updatesdk.fileprovider.a r0 = com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider.mWStrategy
            android.net.Uri r0 = r0.a(r2)
            return r0
    }

    @Override
    public void attachInfo(android.content.Context r2, android.content.pm.ProviderInfo r3) {
            r1 = this;
            super.attachInfo(r2, r3)
            boolean r0 = r3.exported
            if (r0 != 0) goto L1b
            boolean r0 = r3.grantUriPermissions
            if (r0 == 0) goto L13
            java.lang.String r3 = r3.authority
            r1.authority = r3
            createWiseDistPathStrategy(r2, r3)
            return
        L13:
            java.lang.SecurityException r2 = new java.lang.SecurityException
            java.lang.String r3 = "WiseDist Provider must grant uri permissions"
            r2.<init>(r3)
            throw r2
        L1b:
            java.lang.SecurityException r2 = new java.lang.SecurityException
            java.lang.String r3 = "WiseDist Provider must not be exported"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "No external updates"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public java.lang.String getType(android.net.Uri r2) {
            r1 = this;
            if (r2 == 0) goto L23
            java.lang.String r0 = r2.toString()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "apk"
            boolean r2 = r2.endsWith(r0)
            if (r2 == 0) goto L23
            android.webkit.MimeTypeMap r2 = android.webkit.MimeTypeMap.getSingleton()
            java.lang.String r2 = r2.getMimeTypeFromExtension(r0)
            if (r2 == 0) goto L23
            return r2
        L23:
            java.lang.String r2 = "application/octet-stream"
            return r2
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
    public android.os.ParcelFileDescriptor openFile(android.net.Uri r3, java.lang.String r4) {
            r2 = this;
            r4 = 0
            if (r3 != 0) goto L4
            return r4
        L4:
            java.lang.String r0 = r3.getAuthority()
            if (r0 == 0) goto L38
            java.lang.String r0 = r3.getAuthority()
            java.lang.String r1 = r2.authority
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L17
            goto L38
        L17:
            com.huawei.updatesdk.fileprovider.a r0 = com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider.mWStrategy
            java.io.File r3 = r0.a(r3)
            java.lang.String r0 = r3.getName()
            java.lang.String r1 = "apk"
            boolean r0 = r0.endsWith(r1)
            if (r0 != 0) goto L31
            java.lang.String r3 = "UpdateSdkFileProvider"
            java.lang.String r0 = "can not open this file."
            com.huawei.updatesdk.a.a.c.a.a.a.b(r3, r0)
            return r4
        L31:
            r4 = 268435456(0x10000000, float:2.524355E-29)
            android.os.ParcelFileDescriptor r3 = android.os.ParcelFileDescriptor.open(r3, r4)
            return r3
        L38:
            return r4
    }

    @Override
    public android.database.Cursor query(android.net.Uri r6, java.lang.String[] r7, java.lang.String r8, java.lang.String[] r9, java.lang.String r10) {
            r5 = this;
            com.huawei.updatesdk.fileprovider.a r8 = com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider.mWStrategy
            java.io.File r6 = r8.a(r6)
            if (r7 != 0) goto La
            java.lang.String[] r7 = com.huawei.updatesdk.fileprovider.UpdateSdkFileProvider.COLUMNS
        La:
            int r8 = r7.length
            java.lang.String[] r8 = new java.lang.String[r8]
            int r9 = r7.length
            java.lang.Object[] r9 = new java.lang.Object[r9]
            int r10 = r7.length
            r0 = 0
            r1 = r0
        L13:
            if (r0 >= r10) goto L45
            r2 = r7[r0]
            java.lang.String r3 = "_display_name"
            boolean r4 = r3.equals(r2)
            if (r4 == 0) goto L2b
            r8[r1] = r3
            int r2 = r1 + 1
            java.lang.String r3 = r6.getName()
            r9[r1] = r3
        L29:
            r1 = r2
            goto L42
        L2b:
            java.lang.String r3 = "_size"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L42
            r8[r1] = r3
            int r2 = r1 + 1
            long r3 = r6.length()
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r9[r1] = r3
            goto L29
        L42:
            int r0 = r0 + 1
            goto L13
        L45:
            java.lang.String[] r6 = copyOf(r8, r1)
            java.lang.Object[] r7 = copyOf(r9, r1)
            android.database.MatrixCursor r8 = new android.database.MatrixCursor
            r9 = 1
            r8.<init>(r6, r9)
            r8.addRow(r7)
            return r8
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
