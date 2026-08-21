package android.support.v4.provider;

@android.support.annotation.RequiresApi(21)
class TreeDocumentFile extends android.support.v4.provider.DocumentFile {
    private android.content.Context mContext;
    private android.net.Uri mUri;

    TreeDocumentFile(@android.support.annotation.Nullable android.support.v4.provider.DocumentFile r1, android.content.Context r2, android.net.Uri r3) {
            r0 = this;
            r0.<init>(r1)
            r0.mContext = r2
            r0.mUri = r3
            return
    }

    private static void closeQuietly(@android.support.annotation.Nullable java.lang.AutoCloseable r0) {
            if (r0 == 0) goto L8
            r0.close()     // Catch: java.lang.RuntimeException -> L6 java.lang.Exception -> L8
            goto L8
        L6:
            r0 = move-exception
            throw r0
        L8:
            return
    }

    @android.support.annotation.Nullable
    private static android.net.Uri createFile(android.content.Context r0, android.net.Uri r1, java.lang.String r2, java.lang.String r3) {
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Exception -> L9
            android.net.Uri r0 = android.provider.DocumentsContract.createDocument(r0, r1, r2, r3)     // Catch: java.lang.Exception -> L9
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public boolean canRead() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.net.Uri r1 = r2.mUri
            boolean r0 = android.support.v4.provider.DocumentsContractApi19.canRead(r0, r1)
            return r0
    }

    @Override
    public boolean canWrite() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.net.Uri r1 = r2.mUri
            boolean r0 = android.support.v4.provider.DocumentsContractApi19.canWrite(r0, r1)
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    public android.support.v4.provider.DocumentFile createDirectory(java.lang.String r4) {
            r3 = this;
            android.content.Context r0 = r3.mContext
            android.net.Uri r1 = r3.mUri
            java.lang.String r2 = "vnd.android.document/directory"
            android.net.Uri r4 = createFile(r0, r1, r2, r4)
            if (r4 == 0) goto L14
            android.support.v4.provider.TreeDocumentFile r0 = new android.support.v4.provider.TreeDocumentFile
            android.content.Context r1 = r3.mContext
            r0.<init>(r3, r1, r4)
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    public android.support.v4.provider.DocumentFile createFile(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.net.Uri r1 = r2.mUri
            android.net.Uri r3 = createFile(r0, r1, r3, r4)
            if (r3 == 0) goto L12
            android.support.v4.provider.TreeDocumentFile r4 = new android.support.v4.provider.TreeDocumentFile
            android.content.Context r0 = r2.mContext
            r4.<init>(r2, r0, r3)
            goto L13
        L12:
            r4 = 0
        L13:
            return r4
    }

    @Override
    public boolean delete() {
            r2 = this;
            android.content.Context r0 = r2.mContext     // Catch: java.lang.Exception -> Ld
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Exception -> Ld
            android.net.Uri r1 = r2.mUri     // Catch: java.lang.Exception -> Ld
            boolean r0 = android.provider.DocumentsContract.deleteDocument(r0, r1)     // Catch: java.lang.Exception -> Ld
            return r0
        Ld:
            r0 = 0
            return r0
    }

    @Override
    public boolean exists() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.net.Uri r1 = r2.mUri
            boolean r0 = android.support.v4.provider.DocumentsContractApi19.exists(r0, r1)
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    public java.lang.String getName() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.net.Uri r1 = r2.mUri
            java.lang.String r0 = android.support.v4.provider.DocumentsContractApi19.getName(r0, r1)
            return r0
    }

    @Override
    @android.support.annotation.Nullable
    public java.lang.String getType() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.net.Uri r1 = r2.mUri
            java.lang.String r0 = android.support.v4.provider.DocumentsContractApi19.getType(r0, r1)
            return r0
    }

    @Override
    public android.net.Uri getUri() {
            r1 = this;
            android.net.Uri r0 = r1.mUri
            return r0
    }

    @Override
    public boolean isDirectory() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.net.Uri r1 = r2.mUri
            boolean r0 = android.support.v4.provider.DocumentsContractApi19.isDirectory(r0, r1)
            return r0
    }

    @Override
    public boolean isFile() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.net.Uri r1 = r2.mUri
            boolean r0 = android.support.v4.provider.DocumentsContractApi19.isFile(r0, r1)
            return r0
    }

    @Override
    public boolean isVirtual() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.net.Uri r1 = r2.mUri
            boolean r0 = android.support.v4.provider.DocumentsContractApi19.isVirtual(r0, r1)
            return r0
    }

    @Override
    public long lastModified() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.net.Uri r1 = r2.mUri
            long r0 = android.support.v4.provider.DocumentsContractApi19.lastModified(r0, r1)
            return r0
    }

    @Override
    public long length() {
            r2 = this;
            android.content.Context r0 = r2.mContext
            android.net.Uri r1 = r2.mUri
            long r0 = android.support.v4.provider.DocumentsContractApi19.length(r0, r1)
            return r0
    }

    @Override
    public android.support.v4.provider.DocumentFile[] listFiles() {
            r9 = this;
            android.content.Context r0 = r9.mContext
            r0.getContentResolver()
            android.net.Uri r0 = r9.mUri
            java.lang.String r1 = android.provider.DocumentsContract.getDocumentId(r0)
            android.net.Uri r3 = android.provider.DocumentsContract.buildChildDocumentsUriUsingTree(r0, r1)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            r8 = 0
            java.lang.String r2 = "document_id"
            java.lang.String[] r4 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r5 = 0
            r6 = 0
            r7 = 0
            android.content.Context r2 = com.qihoo360.replugin.RePlugin.getPluginContext()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            android.database.Cursor r8 = com.qihoo360.replugin.loader.p.PluginProviderClient.query(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
        L27:
            boolean r2 = r8.moveToNext()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            if (r2 == 0) goto L3b
            java.lang.String r2 = r8.getString(r1)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            android.net.Uri r3 = r9.mUri     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            android.net.Uri r2 = android.provider.DocumentsContract.buildDocumentUriUsingTree(r3, r2)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            r0.add(r2)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L41
            goto L27
        L3b:
            closeQuietly(r8)
            goto L59
        L3f:
            r0 = move-exception
            goto L7a
        L41:
            r2 = move-exception
            java.lang.String r3 = "DocumentFile"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f
            r4.<init>()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r5 = "Failed query: "
            r4.append(r5)     // Catch: java.lang.Throwable -> L3f
            r4.append(r2)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L3f
            android.util.Log.w(r3, r2)     // Catch: java.lang.Throwable -> L3f
            goto L3b
        L59:
            int r2 = r0.size()
            android.net.Uri[] r2 = new android.net.Uri[r2]
            java.lang.Object[] r0 = r0.toArray(r2)
            android.net.Uri[] r0 = (android.net.Uri[]) r0
            int r2 = r0.length
            android.support.v4.provider.DocumentFile[] r2 = new android.support.v4.provider.DocumentFile[r2]
        L68:
            int r3 = r0.length
            if (r1 >= r3) goto L79
            android.support.v4.provider.TreeDocumentFile r3 = new android.support.v4.provider.TreeDocumentFile
            android.content.Context r4 = r9.mContext
            r5 = r0[r1]
            r3.<init>(r9, r4, r5)
            r2[r1] = r3
            int r1 = r1 + 1
            goto L68
        L79:
            return r2
        L7a:
            closeQuietly(r8)
            throw r0
    }

    @Override
    public boolean renameTo(java.lang.String r4) {
            r3 = this;
            r0 = 0
            android.content.Context r1 = r3.mContext     // Catch: java.lang.Exception -> L13
            android.content.ContentResolver r1 = r1.getContentResolver()     // Catch: java.lang.Exception -> L13
            android.net.Uri r2 = r3.mUri     // Catch: java.lang.Exception -> L13
            android.net.Uri r4 = android.provider.DocumentsContract.renameDocument(r1, r2, r4)     // Catch: java.lang.Exception -> L13
            if (r4 == 0) goto L13
            r3.mUri = r4     // Catch: java.lang.Exception -> L13
            r4 = 1
            return r4
        L13:
            return r0
    }
}
