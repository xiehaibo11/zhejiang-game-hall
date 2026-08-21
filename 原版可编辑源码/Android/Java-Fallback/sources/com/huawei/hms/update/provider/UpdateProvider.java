package com.huawei.hms.update.provider;

public class UpdateProvider extends android.content.ContentProvider {
    public static final java.lang.String AUTHORITIES_SUFFIX = ".hms.update.provider";
    public static final java.lang.String[] a = null;
    public static com.huawei.hms.availableupdate.n b;

    static {
            java.lang.String r0 = "_display_name"
            java.lang.String r1 = "_size"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.huawei.hms.update.provider.UpdateProvider.a = r0
            com.huawei.hms.availableupdate.n r0 = new com.huawei.hms.availableupdate.n
            r0.<init>()
            com.huawei.hms.update.provider.UpdateProvider.b = r0
            return
    }

    public UpdateProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(java.lang.String r3) {
            java.lang.String r0 = "r"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto Lb
            r3 = 268435456(0x10000000, float:2.524355E-29)
            goto L56
        Lb:
            java.lang.String r0 = "w"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L54
            java.lang.String r0 = "wt"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L1c
            goto L54
        L1c:
            java.lang.String r0 = "wa"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L27
            r3 = 704643072(0x2a000000, float:1.1368684E-13)
            goto L56
        L27:
            java.lang.String r0 = "rw"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L32
            r3 = 939524096(0x38000000, float:3.0517578E-5)
            goto L56
        L32:
            java.lang.String r0 = "rwt"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L3d
            r3 = 1006632960(0x3c000000, float:0.0078125)
            goto L56
        L3d:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid mode: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L54:
            r3 = 738197504(0x2c000000, float:1.8189894E-12)
        L56:
            return r3
    }

    public static java.lang.Object[] a(java.lang.Object[] r2, int r3) {
            java.lang.Object[] r0 = new java.lang.Object[r3]
            r1 = 0
            java.lang.System.arraycopy(r2, r1, r0, r1, r3)
            return r0
    }

    public static java.lang.String[] a(java.lang.String[] r2, int r3) {
            java.lang.String[] r0 = new java.lang.String[r3]
            r1 = 0
            java.lang.System.arraycopy(r2, r1, r0, r1, r3)
            return r0
    }

    public static java.io.File getLocalFile(android.content.Context r1, java.lang.String r2) {
            com.huawei.hms.availableupdate.n r0 = com.huawei.hms.update.provider.UpdateProvider.b
            android.content.Context r1 = r1.getApplicationContext()
            r0.a(r1)
            com.huawei.hms.availableupdate.n r1 = com.huawei.hms.update.provider.UpdateProvider.b
            java.io.File r1 = r1.a(r2)
            return r1
    }

    public static android.net.Uri getUriForFile(android.content.Context r1, java.lang.String r2, java.io.File r3) {
            com.huawei.hms.availableupdate.n r0 = com.huawei.hms.update.provider.UpdateProvider.b
            android.content.Context r1 = r1.getApplicationContext()
            r0.a(r1)
            com.huawei.hms.availableupdate.n r1 = com.huawei.hms.update.provider.UpdateProvider.b
            android.net.Uri r1 = r1.a(r3, r2)
            return r1
    }

    @Override
    public void attachInfo(android.content.Context r1, android.content.pm.ProviderInfo r2) {
            r0 = this;
            super.attachInfo(r1, r2)
            boolean r1 = r2.exported
            if (r1 != 0) goto L14
            boolean r1 = r2.grantUriPermissions
            if (r1 == 0) goto Lc
            return
        Lc:
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.String r2 = "Provider must grant uri permissions"
            r1.<init>(r2)
            throw r1
        L14:
            java.lang.SecurityException r1 = new java.lang.SecurityException
            java.lang.String r2 = "Provider must not be exported"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            r0 = this;
            com.huawei.hms.availableupdate.n r2 = com.huawei.hms.update.provider.UpdateProvider.b
            android.content.Context r3 = r0.getContext()
            android.content.Context r3 = r3.getApplicationContext()
            r2.a(r3)
            com.huawei.hms.availableupdate.n r2 = com.huawei.hms.update.provider.UpdateProvider.b
            java.io.File r1 = r2.a(r1)
            boolean r1 = r1.delete()
            return r1
    }

    @Override
    public java.lang.String getType(android.net.Uri r4) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "application/octet-stream"
            if (r0 != 0) goto L9
            return r1
        L9:
            com.huawei.hms.availableupdate.n r0 = com.huawei.hms.update.provider.UpdateProvider.b
            android.content.Context r2 = r3.getContext()
            android.content.Context r2 = r2.getApplicationContext()
            r0.a(r2)
            com.huawei.hms.availableupdate.n r0 = com.huawei.hms.update.provider.UpdateProvider.b
            java.io.File r4 = r0.a(r4)
            java.lang.String r4 = r4.getName()
            r0 = 46
            int r0 = r4.lastIndexOf(r0)
            if (r0 < 0) goto L3d
            int r0 = r0 + 1
            java.lang.String r4 = r4.substring(r0)
            android.webkit.MimeTypeMap r0 = android.webkit.MimeTypeMap.getSingleton()
            java.lang.String r4 = r0.getMimeTypeFromExtension(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L3d
            return r4
        L3d:
            return r1
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
            com.huawei.hms.availableupdate.n r0 = com.huawei.hms.update.provider.UpdateProvider.b
            android.content.Context r1 = r2.getContext()
            android.content.Context r1 = r1.getApplicationContext()
            r0.a(r1)
            com.huawei.hms.availableupdate.n r0 = com.huawei.hms.update.provider.UpdateProvider.b
            java.io.File r3 = r0.a(r3)
            int r4 = a(r4)
            android.os.ParcelFileDescriptor r3 = android.os.ParcelFileDescriptor.open(r3, r4)
            return r3
    }

    @Override
    public android.database.Cursor query(android.net.Uri r6, java.lang.String[] r7, java.lang.String r8, java.lang.String[] r9, java.lang.String r10) {
            r5 = this;
            com.huawei.hms.availableupdate.n r8 = com.huawei.hms.update.provider.UpdateProvider.b
            android.content.Context r9 = r5.getContext()
            android.content.Context r9 = r9.getApplicationContext()
            r8.a(r9)
            com.huawei.hms.availableupdate.n r8 = com.huawei.hms.update.provider.UpdateProvider.b
            java.io.File r6 = r8.a(r6)
            if (r7 != 0) goto L17
            java.lang.String[] r7 = com.huawei.hms.update.provider.UpdateProvider.a
        L17:
            int r8 = r7.length
            java.lang.String[] r8 = new java.lang.String[r8]
            int r9 = r7.length
            java.lang.Object[] r9 = new java.lang.Object[r9]
            int r10 = r7.length
            r0 = 0
            r1 = r0
        L20:
            if (r0 >= r10) goto L52
            r2 = r7[r0]
            java.lang.String r3 = "_display_name"
            boolean r4 = r3.equals(r2)
            if (r4 == 0) goto L38
            r8[r1] = r3
            int r2 = r1 + 1
            java.lang.String r3 = r6.getName()
            r9[r1] = r3
        L36:
            r1 = r2
            goto L4f
        L38:
            java.lang.String r3 = "_size"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L4f
            r8[r1] = r3
            int r2 = r1 + 1
            long r3 = r6.length()
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r9[r1] = r3
            goto L36
        L4f:
            int r0 = r0 + 1
            goto L20
        L52:
            java.lang.String[] r6 = a(r8, r1)
            java.lang.Object[] r7 = a(r9, r1)
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
