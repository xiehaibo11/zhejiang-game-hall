package com.bytedance.pangle;

public class e extends android.view.ContextThemeWrapper {
    private java.io.File mCacheDir;
    private java.io.File mCodeCacheDir;
    private java.io.File mDataDir;
    private java.io.File mExternalCacheDir;
    private java.io.File mFilesDir;
    private java.io.File mNoBackupFilesDir;
    private java.io.File mObbDir;
    private final java.lang.Object mSync;

    public e() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.mSync = r0
            return
    }

    public e(android.content.Context r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r0.mSync = r1
            return
    }

    public e(android.content.Context r1, android.content.res.Resources.Theme r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r0.mSync = r1
            return
    }

    private static java.io.File ensurePrivateDirExists(java.io.File r1) {
            boolean r0 = r1.exists()
            if (r0 != 0) goto L9
            r1.mkdirs()
        L9:
            return r1
    }

    private static java.io.File makeFilename(java.io.File r2, java.lang.String r3) {
            char r0 = java.io.File.separatorChar
            int r0 = r3.indexOf(r0)
            if (r0 >= 0) goto Le
            java.io.File r0 = new java.io.File
            r0.<init>(r2, r3)
            return r0
        Le:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "File "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = " contains a path separator"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }

    private java.lang.String makeSubName(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getPluginDirName()
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    @Override
    public java.lang.String[] databaseList() {
            r8 = this;
            java.lang.String r0 = r8.getPluginDirName()
            if (r0 != 0) goto Lb
            java.lang.String[] r0 = super.databaseList()
            return r0
        Lb:
            java.lang.String[] r0 = super.databaseList()
            int r1 = r0.length
            boolean[] r2 = new boolean[r1]
            r3 = 0
            r4 = r3
            r5 = r4
        L15:
            int r6 = r0.length
            if (r4 >= r6) goto L2f
            r6 = r0[r4]
            java.lang.String r7 = r8.getPluginDirName()
            boolean r6 = r6.startsWith(r7)
            if (r6 == 0) goto L2a
            r6 = 1
            r2[r4] = r6
            int r5 = r5 + 1
            goto L2c
        L2a:
            r2[r4] = r3
        L2c:
            int r4 = r4 + 1
            goto L15
        L2f:
            java.lang.String[] r4 = new java.lang.String[r5]
            r5 = r3
        L32:
            if (r3 >= r1) goto L42
            boolean r6 = r2[r3]
            if (r6 == 0) goto L3f
            int r6 = r5 + 1
            r7 = r0[r3]
            r4[r5] = r7
            r5 = r6
        L3f:
            int r3 = r3 + 1
            goto L32
        L42:
            return r4
    }

    @Override
    public boolean deleteDatabase(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.getPluginDirName()
            if (r0 != 0) goto Lb
            boolean r2 = super.deleteDatabase(r2)
            return r2
        Lb:
            java.lang.String r2 = r1.makeSubName(r2)
            boolean r2 = super.deleteDatabase(r2)
            return r2
    }

    @Override
    public boolean deleteFile(java.lang.String r2) {
            r1 = this;
            java.io.File r0 = r1.getFilesDir()
            java.io.File r2 = makeFilename(r0, r2)
            boolean r2 = r2.delete()
            return r2
    }

    @Override
    public boolean deleteSharedPreferences(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.getPluginDirName()
            if (r0 != 0) goto Lb
            boolean r2 = super.deleteSharedPreferences(r2)
            return r2
        Lb:
            java.lang.String r2 = r1.makeSubName(r2)
            boolean r2 = super.deleteSharedPreferences(r2)
            return r2
    }

    @Override
    public java.io.File getCacheDir() {
            r4 = this;
            java.lang.String r0 = r4.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File r0 = super.getCacheDir()
            return r0
        Lb:
            java.lang.Object r0 = r4.mSync
            monitor-enter(r0)
            java.io.File r1 = r4.mCacheDir     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L21
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L29
            java.io.File r2 = super.getCacheDir()     // Catch: java.lang.Throwable -> L29
            java.lang.String r3 = r4.getPluginDirName()     // Catch: java.lang.Throwable -> L29
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L29
            r4.mCacheDir = r1     // Catch: java.lang.Throwable -> L29
        L21:
            java.io.File r1 = r4.mCacheDir     // Catch: java.lang.Throwable -> L29
            java.io.File r1 = ensurePrivateDirExists(r1)     // Catch: java.lang.Throwable -> L29
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            return r1
        L29:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r1
    }

    @Override
    public java.io.File getCodeCacheDir() {
            r4 = this;
            java.lang.String r0 = r4.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File r0 = super.getCodeCacheDir()
            return r0
        Lb:
            java.lang.Object r0 = r4.mSync
            monitor-enter(r0)
            java.io.File r1 = r4.mCodeCacheDir     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L21
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L29
            java.io.File r2 = super.getCodeCacheDir()     // Catch: java.lang.Throwable -> L29
            java.lang.String r3 = r4.getPluginDirName()     // Catch: java.lang.Throwable -> L29
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L29
            r4.mCodeCacheDir = r1     // Catch: java.lang.Throwable -> L29
        L21:
            java.io.File r1 = r4.mCodeCacheDir     // Catch: java.lang.Throwable -> L29
            java.io.File r1 = ensurePrivateDirExists(r1)     // Catch: java.lang.Throwable -> L29
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            return r1
        L29:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r1
    }

    @Override
    public java.io.File getDataDir() {
            r4 = this;
            java.lang.String r0 = r4.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File r0 = super.getDataDir()
            return r0
        Lb:
            java.lang.Object r0 = r4.mSync
            monitor-enter(r0)
            java.io.File r1 = r4.mDataDir     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L21
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L29
            java.io.File r2 = r4.getHostDataDir()     // Catch: java.lang.Throwable -> L29
            java.lang.String r3 = r4.getPluginDirName()     // Catch: java.lang.Throwable -> L29
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L29
            r4.mDataDir = r1     // Catch: java.lang.Throwable -> L29
        L21:
            java.io.File r1 = r4.mDataDir     // Catch: java.lang.Throwable -> L29
            java.io.File r1 = ensurePrivateDirExists(r1)     // Catch: java.lang.Throwable -> L29
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            return r1
        L29:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r1
    }

    @Override
    public java.io.File getDatabasePath(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File r2 = super.getDatabasePath(r2)
            return r2
        Lb:
            java.lang.String r2 = r1.makeSubName(r2)
            java.io.File r2 = super.getDatabasePath(r2)
            return r2
    }

    @Override
    public java.io.File getDir(java.lang.String r2, int r3) {
            r1 = this;
            if (r3 != 0) goto L1b
            java.lang.String r0 = r1.getPluginDirName()
            if (r0 != 0) goto L9
            goto L1b
        L9:
            java.io.File r0 = new java.io.File
            java.io.File r2 = super.getDir(r2, r3)
            java.lang.String r3 = r1.getPluginDirName()
            r0.<init>(r2, r3)
            java.io.File r2 = ensurePrivateDirExists(r0)
            return r2
        L1b:
            java.io.File r2 = super.getDir(r2, r3)
            return r2
    }

    @Override
    public java.io.File getExternalCacheDir() {
            r4 = this;
            java.lang.String r0 = r4.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File r0 = super.getExternalCacheDir()
            return r0
        Lb:
            java.lang.Object r0 = r4.mSync
            monitor-enter(r0)
            java.io.File r1 = r4.mExternalCacheDir     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L21
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L29
            java.io.File r2 = super.getExternalCacheDir()     // Catch: java.lang.Throwable -> L29
            java.lang.String r3 = r4.getPluginDirName()     // Catch: java.lang.Throwable -> L29
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L29
            r4.mExternalCacheDir = r1     // Catch: java.lang.Throwable -> L29
        L21:
            java.io.File r1 = r4.mExternalCacheDir     // Catch: java.lang.Throwable -> L29
            java.io.File r1 = ensurePrivateDirExists(r1)     // Catch: java.lang.Throwable -> L29
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            return r1
        L29:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r1
    }

    @Override
    public java.io.File[] getExternalCacheDirs() {
            r6 = this;
            java.lang.String r0 = r6.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File[] r0 = super.getExternalCacheDirs()
            return r0
        Lb:
            java.io.File[] r0 = super.getExternalCacheDirs()
            int r1 = r0.length
            java.io.File[] r1 = new java.io.File[r1]
            r2 = 0
        L13:
            int r3 = r0.length
            if (r2 >= r3) goto L2a
            java.io.File r3 = new java.io.File
            r4 = r0[r2]
            java.lang.String r5 = r6.getPluginDirName()
            r3.<init>(r4, r5)
            java.io.File r3 = ensurePrivateDirExists(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L13
        L2a:
            return r1
    }

    @Override
    public java.io.File getExternalFilesDir(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = r2.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File r3 = super.getExternalFilesDir(r3)
            return r3
        Lb:
            java.io.File r0 = new java.io.File
            java.io.File r3 = super.getExternalFilesDir(r3)
            java.lang.String r1 = r2.getPluginDirName()
            r0.<init>(r3, r1)
            java.io.File r3 = ensurePrivateDirExists(r0)
            return r3
    }

    @Override
    public java.io.File[] getExternalFilesDirs(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = r5.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File[] r6 = super.getExternalFilesDirs(r6)
            return r6
        Lb:
            java.io.File[] r6 = super.getExternalFilesDirs(r6)
            int r0 = r6.length
            java.io.File[] r0 = new java.io.File[r0]
            r1 = 0
        L13:
            int r2 = r6.length
            if (r1 >= r2) goto L2a
            java.io.File r2 = new java.io.File
            r3 = r6[r1]
            java.lang.String r4 = r5.getPluginDirName()
            r2.<init>(r3, r4)
            java.io.File r2 = ensurePrivateDirExists(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L13
        L2a:
            return r0
    }

    @Override
    public java.io.File[] getExternalMediaDirs() {
            r6 = this;
            java.lang.String r0 = r6.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File[] r0 = super.getExternalMediaDirs()
            return r0
        Lb:
            java.io.File[] r0 = super.getExternalMediaDirs()
            int r1 = r0.length
            java.io.File[] r1 = new java.io.File[r1]
            r2 = 0
        L13:
            int r3 = r0.length
            if (r2 >= r3) goto L2a
            java.io.File r3 = new java.io.File
            r4 = r0[r2]
            java.lang.String r5 = r6.getPluginDirName()
            r3.<init>(r4, r5)
            java.io.File r3 = ensurePrivateDirExists(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L13
        L2a:
            return r1
    }

    @Override
    public java.io.File getFilesDir() {
            r4 = this;
            java.lang.String r0 = r4.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File r0 = super.getFilesDir()
            return r0
        Lb:
            java.lang.Object r0 = r4.mSync
            monitor-enter(r0)
            java.io.File r1 = r4.mFilesDir     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L21
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L29
            java.io.File r2 = super.getFilesDir()     // Catch: java.lang.Throwable -> L29
            java.lang.String r3 = r4.getPluginDirName()     // Catch: java.lang.Throwable -> L29
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L29
            r4.mFilesDir = r1     // Catch: java.lang.Throwable -> L29
        L21:
            java.io.File r1 = r4.mFilesDir     // Catch: java.lang.Throwable -> L29
            java.io.File r1 = ensurePrivateDirExists(r1)     // Catch: java.lang.Throwable -> L29
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            return r1
        L29:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r1
    }

    public java.io.File getHostDataDir() {
            r1 = this;
            java.io.File r0 = super.getFilesDir()
            java.io.File r0 = r0.getParentFile()
            return r0
    }

    @Override
    public java.io.File getNoBackupFilesDir() {
            r4 = this;
            java.lang.String r0 = r4.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File r0 = super.getNoBackupFilesDir()
            return r0
        Lb:
            java.lang.Object r0 = r4.mSync
            monitor-enter(r0)
            java.io.File r1 = r4.mNoBackupFilesDir     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L21
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L29
            java.io.File r2 = super.getNoBackupFilesDir()     // Catch: java.lang.Throwable -> L29
            java.lang.String r3 = r4.getPluginDirName()     // Catch: java.lang.Throwable -> L29
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L29
            r4.mNoBackupFilesDir = r1     // Catch: java.lang.Throwable -> L29
        L21:
            java.io.File r1 = r4.mNoBackupFilesDir     // Catch: java.lang.Throwable -> L29
            java.io.File r1 = ensurePrivateDirExists(r1)     // Catch: java.lang.Throwable -> L29
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            return r1
        L29:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r1
    }

    @Override
    public java.io.File getObbDir() {
            r4 = this;
            java.lang.String r0 = r4.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File r0 = super.getObbDir()
            return r0
        Lb:
            java.lang.Object r0 = r4.mSync
            monitor-enter(r0)
            java.io.File r1 = r4.mObbDir     // Catch: java.lang.Throwable -> L29
            if (r1 != 0) goto L21
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L29
            java.io.File r2 = super.getObbDir()     // Catch: java.lang.Throwable -> L29
            java.lang.String r3 = r4.getPluginDirName()     // Catch: java.lang.Throwable -> L29
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L29
            r4.mObbDir = r1     // Catch: java.lang.Throwable -> L29
        L21:
            java.io.File r1 = r4.mObbDir     // Catch: java.lang.Throwable -> L29
            java.io.File r1 = ensurePrivateDirExists(r1)     // Catch: java.lang.Throwable -> L29
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            return r1
        L29:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r1
    }

    @Override
    public java.io.File[] getObbDirs() {
            r6 = this;
            java.lang.String r0 = r6.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.File[] r0 = super.getObbDirs()
            return r0
        Lb:
            java.io.File[] r0 = super.getObbDirs()
            int r1 = r0.length
            java.io.File[] r1 = new java.io.File[r1]
            r2 = 0
        L13:
            int r3 = r0.length
            if (r2 >= r3) goto L2a
            java.io.File r3 = new java.io.File
            r4 = r0[r2]
            java.lang.String r5 = r6.getPluginDirName()
            r3.<init>(r4, r5)
            java.io.File r3 = ensurePrivateDirExists(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L13
        L2a:
            return r1
    }

    protected java.lang.String getPluginDirName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "pangle_"
            r0.<init>(r1)
            java.lang.String r1 = r2.getPluginPkg()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    protected java.lang.String getPluginPkg() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public android.content.SharedPreferences getSharedPreferences(java.lang.String r2, int r3) {
            r1 = this;
            if (r3 != 0) goto L12
            java.lang.String r0 = r1.getPluginDirName()
            if (r0 != 0) goto L9
            goto L12
        L9:
            java.lang.String r2 = r1.makeSubName(r2)
            android.content.SharedPreferences r2 = super.getSharedPreferences(r2, r3)
            return r2
        L12:
            android.content.SharedPreferences r2 = super.getSharedPreferences(r2, r3)
            return r2
    }

    @Override
    public boolean moveDatabaseFrom(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = r1.getPluginDirName()
            if (r0 != 0) goto Lb
            boolean r2 = super.moveDatabaseFrom(r2, r3)
            return r2
        Lb:
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r3 = "Calling moveDatabaseFrom in plugins is not supported."
            r2.<init>(r3)
            throw r2
    }

    @Override
    public java.io.FileInputStream openFileInput(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.getPluginDirName()
            if (r0 != 0) goto Lb
            java.io.FileInputStream r2 = super.openFileInput(r2)
            return r2
        Lb:
            java.io.File r0 = r1.getFilesDir()
            java.io.File r2 = makeFilename(r0, r2)
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r2)
            return r0
    }

    @Override
    public java.io.FileOutputStream openFileOutput(java.lang.String r2, int r3) {
            r1 = this;
            if (r3 != 0) goto L18
            java.lang.String r0 = r1.getPluginDirName()
            if (r0 != 0) goto L9
            goto L18
        L9:
            java.io.File r3 = r1.getFilesDir()
            java.io.File r2 = makeFilename(r3, r2)
            java.io.FileOutputStream r3 = new java.io.FileOutputStream
            r0 = 0
            r3.<init>(r2, r0)
            return r3
        L18:
            java.io.FileOutputStream r2 = super.openFileOutput(r2, r3)
            return r2
    }

    @Override
    public android.database.sqlite.SQLiteDatabase openOrCreateDatabase(java.lang.String r2, int r3, android.database.sqlite.SQLiteDatabase.CursorFactory r4) {
            r1 = this;
            if (r3 != 0) goto L12
            java.lang.String r0 = r1.getPluginDirName()
            if (r0 != 0) goto L9
            goto L12
        L9:
            java.lang.String r2 = r1.makeSubName(r2)
            android.database.sqlite.SQLiteDatabase r2 = super.openOrCreateDatabase(r2, r3, r4)
            return r2
        L12:
            android.database.sqlite.SQLiteDatabase r2 = super.openOrCreateDatabase(r2, r3, r4)
            return r2
    }

    @Override
    public android.database.sqlite.SQLiteDatabase openOrCreateDatabase(java.lang.String r2, int r3, android.database.sqlite.SQLiteDatabase.CursorFactory r4, android.database.DatabaseErrorHandler r5) {
            r1 = this;
            if (r3 != 0) goto L12
            java.lang.String r0 = r1.getPluginDirName()
            if (r0 != 0) goto L9
            goto L12
        L9:
            java.lang.String r2 = r1.makeSubName(r2)
            android.database.sqlite.SQLiteDatabase r2 = super.openOrCreateDatabase(r2, r3, r4, r5)
            return r2
        L12:
            android.database.sqlite.SQLiteDatabase r2 = super.openOrCreateDatabase(r2, r3, r4, r5)
            return r2
    }
}
