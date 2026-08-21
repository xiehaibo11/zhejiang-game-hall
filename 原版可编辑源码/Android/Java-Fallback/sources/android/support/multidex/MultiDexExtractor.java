package android.support.multidex;

final class MultiDexExtractor {
    private static final int BUFFER_SIZE = 16384;
    private static final java.lang.String DEX_PREFIX = "classes";
    private static final java.lang.String DEX_SUFFIX = ".dex";
    private static final java.lang.String EXTRACTED_NAME_EXT = ".classes";
    private static final java.lang.String EXTRACTED_SUFFIX = ".zip";
    private static final java.lang.String KEY_CRC = "crc";
    private static final java.lang.String KEY_DEX_NUMBER = "dex.number";
    private static final java.lang.String KEY_TIME_STAMP = "timestamp";
    private static final int MAX_EXTRACT_ATTEMPTS = 3;
    private static final long NO_VALUE = -1;
    private static final java.lang.String PREFS_FILE = "multidex.version";
    private static final java.lang.String TAG = "MultiDex";
    private static java.lang.reflect.Method sApplyMethod;


    static {
            java.lang.Class<android.content.SharedPreferences$Editor> r0 = android.content.SharedPreferences.Editor.class
            java.lang.String r2 = "apply"
            r3 = 0
            java.lang.Class[] r3 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> Le
            java.lang.reflect.Method r2 = r0.getMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> Le
            android.support.multidex.MultiDexExtractor.sApplyMethod = r2     // Catch: java.lang.NoSuchMethodException -> Le
        Ld:
            return
        Le:
            r1 = move-exception
            r2 = 0
            android.support.multidex.MultiDexExtractor.sApplyMethod = r2
            goto Ld
    }

    MultiDexExtractor() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void apply(android.content.SharedPreferences.Editor r2) {
            java.lang.reflect.Method r0 = android.support.multidex.MultiDexExtractor.sApplyMethod
            if (r0 == 0) goto Le
            java.lang.reflect.Method r0 = android.support.multidex.MultiDexExtractor.sApplyMethod     // Catch: java.lang.IllegalAccessException -> Ld java.lang.reflect.InvocationTargetException -> L12
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.IllegalAccessException -> Ld java.lang.reflect.InvocationTargetException -> L12
            r0.invoke(r2, r1)     // Catch: java.lang.IllegalAccessException -> Ld java.lang.reflect.InvocationTargetException -> L12
        Lc:
            return
        Ld:
            r0 = move-exception
        Le:
            r2.commit()
            goto Lc
        L12:
            r0 = move-exception
            goto Le
    }

    private static void closeQuietly(java.io.Closeable r3) {
            r3.close()     // Catch: java.io.IOException -> L4
        L3:
            return
        L4:
            r0 = move-exception
            java.lang.String r1 = "MultiDex"
            java.lang.String r2 = "Failed to close resource"
            android.util.Log.w(r1, r2, r0)
            goto L3
    }

    private static void extract(java.util.zip.ZipFile r10, java.util.zip.ZipEntry r11, java.io.File r12, java.lang.String r13) throws java.io.IOException, java.io.FileNotFoundException {
            java.io.InputStream r2 = r10.getInputStream(r11)
            r4 = 0
            java.lang.String r7 = ".zip"
            java.io.File r8 = r12.getParentFile()
            java.io.File r6 = java.io.File.createTempFile(r13, r7, r8)
            java.lang.String r7 = "MultiDex"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Extracting "
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r9 = r6.getPath()
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r8 = r8.toString()
            android.util.Log.i(r7, r8)
            java.util.zip.ZipOutputStream r5 = new java.util.zip.ZipOutputStream     // Catch: java.lang.Throwable -> Lcd
            java.io.BufferedOutputStream r7 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> Lcd
            java.io.FileOutputStream r8 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Lcd
            r8.<init>(r6)     // Catch: java.lang.Throwable -> Lcd
            r7.<init>(r8)     // Catch: java.lang.Throwable -> Lcd
            r5.<init>(r7)     // Catch: java.lang.Throwable -> Lcd
            java.util.zip.ZipEntry r1 = new java.util.zip.ZipEntry     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r7 = "classes.dex"
            r1.<init>(r7)     // Catch: java.lang.Throwable -> Lc1
            long r7 = r11.getTime()     // Catch: java.lang.Throwable -> Lc1
            r1.setTime(r7)     // Catch: java.lang.Throwable -> Lc1
            r5.putNextEntry(r1)     // Catch: java.lang.Throwable -> Lc1
            r7 = 16384(0x4000, float:2.2959E-41)
            byte[] r0 = new byte[r7]     // Catch: java.lang.Throwable -> Lc1
            int r3 = r2.read(r0)     // Catch: java.lang.Throwable -> Lc1
        L53:
            r7 = -1
            if (r3 == r7) goto L5f
            r7 = 0
            r5.write(r0, r7, r3)     // Catch: java.lang.Throwable -> Lc1
            int r3 = r2.read(r0)     // Catch: java.lang.Throwable -> Lc1
            goto L53
        L5f:
            r5.closeEntry()     // Catch: java.lang.Throwable -> Lc1
            r5.close()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r7 = "MultiDex"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            r8.<init>()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r9 = "Renaming to "
            java.lang.StringBuilder r8 = r8.append(r9)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r9 = r12.getPath()     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r8 = r8.append(r9)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb8
            android.util.Log.i(r7, r8)     // Catch: java.lang.Throwable -> Lb8
            boolean r7 = r6.renameTo(r12)     // Catch: java.lang.Throwable -> Lb8
            if (r7 != 0) goto Lc6
            java.io.IOException r7 = new java.io.IOException     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            r8.<init>()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r9 = "Failed to rename \""
            java.lang.StringBuilder r8 = r8.append(r9)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r9 = r6.getAbsolutePath()     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r8 = r8.append(r9)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r9 = "\" to \""
            java.lang.StringBuilder r8 = r8.append(r9)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r9 = r12.getAbsolutePath()     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r8 = r8.append(r9)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r9 = "\""
            java.lang.StringBuilder r8 = r8.append(r9)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Lb8
            r7.<init>(r8)     // Catch: java.lang.Throwable -> Lb8
            throw r7     // Catch: java.lang.Throwable -> Lb8
        Lb8:
            r7 = move-exception
            r4 = r5
        Lba:
            closeQuietly(r2)
            r6.delete()
            throw r7
        Lc1:
            r7 = move-exception
            r5.close()     // Catch: java.lang.Throwable -> Lb8
            throw r7     // Catch: java.lang.Throwable -> Lb8
        Lc6:
            closeQuietly(r2)
            r6.delete()
            return
        Lcd:
            r7 = move-exception
            goto Lba
    }

    private static android.content.SharedPreferences getMultiDexPreferences(android.content.Context r3) {
            java.lang.String r1 = "multidex.version"
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 11
            if (r0 >= r2) goto Le
            r0 = 0
        L9:
            android.content.SharedPreferences r0 = r3.getSharedPreferences(r1, r0)
            return r0
        Le:
            r0 = 4
            goto L9
    }

    private static long getTimeStamp(java.io.File r4) {
            long r0 = r4.lastModified()
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto Ld
            r2 = 1
            long r0 = r0 - r2
        Ld:
            return r0
    }

    private static long getZipCrc(java.io.File r4) throws java.io.IOException {
            long r0 = android.support.multidex.ZipUtil.getZipCrc(r4)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto Ld
            r2 = 1
            long r0 = r0 - r2
        Ld:
            return r0
    }

    private static boolean isModified(android.content.Context r7, java.io.File r8, long r9) {
            r5 = -1
            android.content.SharedPreferences r0 = getMultiDexPreferences(r7)
            java.lang.String r1 = "timestamp"
            long r1 = r0.getLong(r1, r5)
            long r3 = getTimeStamp(r8)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L1e
            java.lang.String r1 = "crc"
            long r1 = r0.getLong(r1, r5)
            int r1 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
            if (r1 == 0) goto L20
        L1e:
            r1 = 1
        L1f:
            return r1
        L20:
            r1 = 0
            goto L1f
    }

    static java.util.List<java.io.File> load(android.content.Context r9, android.content.pm.ApplicationInfo r10, java.io.File r11, boolean r12) throws java.io.IOException {
            java.lang.String r0 = "MultiDex"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "MultiDexExtractor.load("
            java.lang.StringBuilder r1 = r1.append(r2)
            java.lang.String r2 = r10.sourceDir
            java.lang.StringBuilder r1 = r1.append(r2)
            java.lang.String r2 = ", "
            java.lang.StringBuilder r1 = r1.append(r2)
            java.lang.StringBuilder r1 = r1.append(r12)
            java.lang.String r2 = ")"
            java.lang.StringBuilder r1 = r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.i(r0, r1)
            java.io.File r8 = new java.io.File
            java.lang.String r0 = r10.sourceDir
            r8.<init>(r0)
            long r3 = getZipCrc(r8)
            if (r12 != 0) goto L7f
            boolean r0 = isModified(r9, r8, r3)
            if (r0 != 0) goto L7f
            java.util.List r6 = loadExistingExtractions(r9, r8, r11)     // Catch: java.io.IOException -> L64
        L41:
            java.lang.String r0 = "MultiDex"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "load found "
            java.lang.StringBuilder r1 = r1.append(r2)
            int r2 = r6.size()
            java.lang.StringBuilder r1 = r1.append(r2)
            java.lang.String r2 = " secondary dex files"
            java.lang.StringBuilder r1 = r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.i(r0, r1)
            return r6
        L64:
            r7 = move-exception
            java.lang.String r0 = "MultiDex"
            java.lang.String r1 = "Failed to reload existing extracted secondary dex files, falling back to fresh extraction"
            android.util.Log.w(r0, r1, r7)
            java.util.List r6 = performExtractions(r8, r11)
            long r1 = getTimeStamp(r8)
            int r0 = r6.size()
            int r5 = r0 + 1
            r0 = r9
            putStoredApkInfo(r0, r1, r3, r5)
            goto L41
        L7f:
            java.lang.String r0 = "MultiDex"
            java.lang.String r1 = "Detected that extraction must be performed."
            android.util.Log.i(r0, r1)
            java.util.List r6 = performExtractions(r8, r11)
            long r1 = getTimeStamp(r8)
            int r0 = r6.size()
            int r5 = r0 + 1
            r0 = r9
            putStoredApkInfo(r0, r1, r3, r5)
            goto L41
    }

    private static java.util.List<java.io.File> loadExistingExtractions(android.content.Context r9, java.io.File r10, java.io.File r11) throws java.io.IOException {
            java.lang.String r6 = "MultiDex"
            java.lang.String r7 = "loading existing secondary dex files"
            android.util.Log.i(r6, r7)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = r10.getName()
            java.lang.StringBuilder r6 = r6.append(r7)
            java.lang.String r7 = ".classes"
            java.lang.StringBuilder r6 = r6.append(r7)
            java.lang.String r1 = r6.toString()
            android.content.SharedPreferences r6 = getMultiDexPreferences(r9)
            java.lang.String r7 = "dex.number"
            r8 = 1
            int r5 = r6.getInt(r7, r8)
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>(r5)
            r4 = 2
        L2f:
            if (r4 > r5) goto La2
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.StringBuilder r6 = r6.append(r1)
            java.lang.StringBuilder r6 = r6.append(r4)
            java.lang.String r7 = ".zip"
            java.lang.StringBuilder r6 = r6.append(r7)
            java.lang.String r2 = r6.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r11, r2)
            boolean r6 = r0.isFile()
            if (r6 == 0) goto L7c
            r3.add(r0)
            boolean r6 = verifyZipFile(r0)
            if (r6 != 0) goto L9f
            java.lang.String r6 = "MultiDex"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Invalid zip file: "
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.StringBuilder r7 = r7.append(r0)
            java.lang.String r7 = r7.toString()
            android.util.Log.i(r6, r7)
            java.io.IOException r6 = new java.io.IOException
            java.lang.String r7 = "Invalid ZIP file."
            r6.<init>(r7)
            throw r6
        L7c:
            java.io.IOException r6 = new java.io.IOException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Missing extracted secondary dex file '"
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r8 = r0.getPath()
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r8 = "'"
            java.lang.StringBuilder r7 = r7.append(r8)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
        L9f:
            int r4 = r4 + 1
            goto L2f
        La2:
            return r3
    }

    private static void mkdirChecked(java.io.File r4) throws java.io.IOException {
            r4.mkdir()
            boolean r1 = r4.isDirectory()
            if (r1 != 0) goto Lb1
            java.io.File r0 = r4.getParentFile()
            if (r0 != 0) goto L4e
            java.lang.String r1 = "MultiDex"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Failed to create dir "
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r3 = r4.getPath()
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r3 = ". Parent file is null."
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r2 = r2.toString()
            android.util.Log.e(r1, r2)
        L31:
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Failed to create cache directory "
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r3 = r4.getPath()
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L4e:
            java.lang.String r1 = "MultiDex"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Failed to create dir "
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r3 = r4.getPath()
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r3 = ". parent file is a dir "
            java.lang.StringBuilder r2 = r2.append(r3)
            boolean r3 = r0.isDirectory()
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r3 = ", a file "
            java.lang.StringBuilder r2 = r2.append(r3)
            boolean r3 = r0.isFile()
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r3 = ", exists "
            java.lang.StringBuilder r2 = r2.append(r3)
            boolean r3 = r0.exists()
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r3 = ", readable "
            java.lang.StringBuilder r2 = r2.append(r3)
            boolean r3 = r0.canRead()
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r3 = ", writable "
            java.lang.StringBuilder r2 = r2.append(r3)
            boolean r3 = r0.canWrite()
            java.lang.StringBuilder r2 = r2.append(r3)
            java.lang.String r2 = r2.toString()
            android.util.Log.e(r1, r2)
            goto L31
        Lb1:
            return
    }

    private static java.util.List<java.io.File> performExtractions(java.io.File r14, java.io.File r15) throws java.io.IOException {
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = r14.getName()
            java.lang.StringBuilder r10 = r10.append(r11)
            java.lang.String r11 = ".classes"
            java.lang.StringBuilder r10 = r10.append(r11)
            java.lang.String r4 = r10.toString()
            prepareDexDir(r15, r4)
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            java.util.zip.ZipFile r0 = new java.util.zip.ZipFile
            r0.<init>(r14)
            r9 = 2
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1
            r10.<init>()     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r11 = "classes"
            java.lang.StringBuilder r10 = r10.append(r11)     // Catch: java.lang.Throwable -> Lf1
            java.lang.StringBuilder r10 = r10.append(r9)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r11 = ".dex"
            java.lang.StringBuilder r10 = r10.append(r11)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Lf1
            java.util.zip.ZipEntry r1 = r0.getEntry(r10)     // Catch: java.lang.Throwable -> Lf1
        L42:
            if (r1 == 0) goto L149
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1
            r10.<init>()     // Catch: java.lang.Throwable -> Lf1
            java.lang.StringBuilder r10 = r10.append(r4)     // Catch: java.lang.Throwable -> Lf1
            java.lang.StringBuilder r10 = r10.append(r9)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r11 = ".zip"
            java.lang.StringBuilder r10 = r10.append(r11)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r5 = r10.toString()     // Catch: java.lang.Throwable -> Lf1
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> Lf1
            r3.<init>(r15, r5)     // Catch: java.lang.Throwable -> Lf1
            r6.add(r3)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r10 = "MultiDex"
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1
            r11.<init>()     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r12 = "Extraction is needed for file "
            java.lang.StringBuilder r11 = r11.append(r12)     // Catch: java.lang.Throwable -> Lf1
            java.lang.StringBuilder r11 = r11.append(r3)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Lf1
            android.util.Log.i(r10, r11)     // Catch: java.lang.Throwable -> Lf1
            r8 = 0
            r7 = 0
        L7d:
            r10 = 3
            if (r8 >= r10) goto Lf9
            if (r7 != 0) goto Lf9
            int r8 = r8 + 1
            extract(r0, r1, r3, r4)     // Catch: java.lang.Throwable -> Lf1
            boolean r7 = verifyZipFile(r3)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r11 = "MultiDex"
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1
            r10.<init>()     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r12 = "Extraction "
            java.lang.StringBuilder r12 = r10.append(r12)     // Catch: java.lang.Throwable -> Lf1
            if (r7 == 0) goto Lf6
            java.lang.String r10 = "success"
        L9c:
            java.lang.StringBuilder r10 = r12.append(r10)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r12 = " - length "
            java.lang.StringBuilder r10 = r10.append(r12)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r12 = r3.getAbsolutePath()     // Catch: java.lang.Throwable -> Lf1
            java.lang.StringBuilder r10 = r10.append(r12)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r12 = ": "
            java.lang.StringBuilder r10 = r10.append(r12)     // Catch: java.lang.Throwable -> Lf1
            long r12 = r3.length()     // Catch: java.lang.Throwable -> Lf1
            java.lang.StringBuilder r10 = r10.append(r12)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Lf1
            android.util.Log.i(r11, r10)     // Catch: java.lang.Throwable -> Lf1
            if (r7 != 0) goto L7d
            r3.delete()     // Catch: java.lang.Throwable -> Lf1
            boolean r10 = r3.exists()     // Catch: java.lang.Throwable -> Lf1
            if (r10 == 0) goto L7d
            java.lang.String r10 = "MultiDex"
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1
            r11.<init>()     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r12 = "Failed to delete corrupted secondary dex '"
            java.lang.StringBuilder r11 = r11.append(r12)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r12 = r3.getPath()     // Catch: java.lang.Throwable -> Lf1
            java.lang.StringBuilder r11 = r11.append(r12)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r12 = "'"
            java.lang.StringBuilder r11 = r11.append(r12)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Lf1
            android.util.Log.w(r10, r11)     // Catch: java.lang.Throwable -> Lf1
            goto L7d
        Lf1:
            r10 = move-exception
            r0.close()     // Catch: java.io.IOException -> L156
        Lf5:
            throw r10
        Lf6:
            java.lang.String r10 = "failed"
            goto L9c
        Lf9:
            if (r7 != 0) goto L128
            java.io.IOException r10 = new java.io.IOException     // Catch: java.lang.Throwable -> Lf1
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1
            r11.<init>()     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r12 = "Could not create zip file "
            java.lang.StringBuilder r11 = r11.append(r12)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r12 = r3.getAbsolutePath()     // Catch: java.lang.Throwable -> Lf1
            java.lang.StringBuilder r11 = r11.append(r12)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r12 = " for secondary dex ("
            java.lang.StringBuilder r11 = r11.append(r12)     // Catch: java.lang.Throwable -> Lf1
            java.lang.StringBuilder r11 = r11.append(r9)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r12 = ")"
            java.lang.StringBuilder r11 = r11.append(r12)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Lf1
            r10.<init>(r11)     // Catch: java.lang.Throwable -> Lf1
            throw r10     // Catch: java.lang.Throwable -> Lf1
        L128:
            int r9 = r9 + 1
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf1
            r10.<init>()     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r11 = "classes"
            java.lang.StringBuilder r10 = r10.append(r11)     // Catch: java.lang.Throwable -> Lf1
            java.lang.StringBuilder r10 = r10.append(r9)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r11 = ".dex"
            java.lang.StringBuilder r10 = r10.append(r11)     // Catch: java.lang.Throwable -> Lf1
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> Lf1
            java.util.zip.ZipEntry r1 = r0.getEntry(r10)     // Catch: java.lang.Throwable -> Lf1
            goto L42
        L149:
            r0.close()     // Catch: java.io.IOException -> L14d
        L14c:
            return r6
        L14d:
            r2 = move-exception
            java.lang.String r10 = "MultiDex"
            java.lang.String r11 = "Failed to close resource"
            android.util.Log.w(r10, r11, r2)
            goto L14c
        L156:
            r2 = move-exception
            java.lang.String r11 = "MultiDex"
            java.lang.String r12 = "Failed to close resource"
            android.util.Log.w(r11, r12, r2)
            goto Lf5
    }

    private static void prepareDexDir(java.io.File r11, java.lang.String r12) throws java.io.IOException {
            java.io.File r1 = r11.getParentFile()
            mkdirChecked(r1)
            mkdirChecked(r11)
            android.support.multidex.MultiDexExtractor$1 r3 = new android.support.multidex.MultiDexExtractor$1
            r3.<init>(r12)
            java.io.File[] r2 = r11.listFiles(r3)
            if (r2 != 0) goto L38
            java.lang.String r7 = "MultiDex"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Failed to list secondary dex dir content ("
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r9 = r11.getPath()
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r9 = ")."
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r8 = r8.toString()
            android.util.Log.w(r7, r8)
        L37:
            return
        L38:
            r0 = r2
            int r5 = r0.length
            r4 = 0
        L3b:
            if (r4 >= r5) goto L37
            r6 = r0[r4]
            java.lang.String r7 = "MultiDex"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Trying to delete old file "
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r9 = r6.getPath()
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r9 = " of size "
            java.lang.StringBuilder r8 = r8.append(r9)
            long r9 = r6.length()
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r8 = r8.toString()
            android.util.Log.i(r7, r8)
            boolean r7 = r6.delete()
            if (r7 != 0) goto L8e
            java.lang.String r7 = "MultiDex"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Failed to delete old file "
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r9 = r6.getPath()
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r8 = r8.toString()
            android.util.Log.w(r7, r8)
        L8b:
            int r4 = r4 + 1
            goto L3b
        L8e:
            java.lang.String r7 = "MultiDex"
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "Deleted old file "
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r9 = r6.getPath()
            java.lang.StringBuilder r8 = r8.append(r9)
            java.lang.String r8 = r8.toString()
            android.util.Log.i(r7, r8)
            goto L8b
    }

    private static void putStoredApkInfo(android.content.Context r3, long r4, long r6, int r8) {
            android.content.SharedPreferences r1 = getMultiDexPreferences(r3)
            android.content.SharedPreferences$Editor r0 = r1.edit()
            java.lang.String r2 = "timestamp"
            r0.putLong(r2, r4)
            java.lang.String r2 = "crc"
            r0.putLong(r2, r6)
            java.lang.String r2 = "dex.number"
            r0.putInt(r2, r8)
            apply(r0)
            return
    }

    static boolean verifyZipFile(java.io.File r6) {
            java.util.zip.ZipFile r2 = new java.util.zip.ZipFile     // Catch: java.util.zip.ZipException -> L29 java.io.IOException -> L4d
            r2.<init>(r6)     // Catch: java.util.zip.ZipException -> L29 java.io.IOException -> L4d
            r2.close()     // Catch: java.io.IOException -> La java.util.zip.ZipException -> L29
            r3 = 1
        L9:
            return r3
        La:
            r0 = move-exception
            java.lang.String r3 = "MultiDex"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.util.zip.ZipException -> L29 java.io.IOException -> L4d
            r4.<init>()     // Catch: java.util.zip.ZipException -> L29 java.io.IOException -> L4d
            java.lang.String r5 = "Failed to close zip file: "
            java.lang.StringBuilder r4 = r4.append(r5)     // Catch: java.util.zip.ZipException -> L29 java.io.IOException -> L4d
            java.lang.String r5 = r6.getAbsolutePath()     // Catch: java.util.zip.ZipException -> L29 java.io.IOException -> L4d
            java.lang.StringBuilder r4 = r4.append(r5)     // Catch: java.util.zip.ZipException -> L29 java.io.IOException -> L4d
            java.lang.String r4 = r4.toString()     // Catch: java.util.zip.ZipException -> L29 java.io.IOException -> L4d
            android.util.Log.w(r3, r4)     // Catch: java.util.zip.ZipException -> L29 java.io.IOException -> L4d
        L27:
            r3 = 0
            goto L9
        L29:
            r1 = move-exception
            java.lang.String r3 = "MultiDex"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "File "
            java.lang.StringBuilder r4 = r4.append(r5)
            java.lang.String r5 = r6.getAbsolutePath()
            java.lang.StringBuilder r4 = r4.append(r5)
            java.lang.String r5 = " is not a valid zip file."
            java.lang.StringBuilder r4 = r4.append(r5)
            java.lang.String r4 = r4.toString()
            android.util.Log.w(r3, r4, r1)
            goto L27
        L4d:
            r1 = move-exception
            java.lang.String r3 = "MultiDex"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Got an IOException trying to open zip file: "
            java.lang.StringBuilder r4 = r4.append(r5)
            java.lang.String r5 = r6.getAbsolutePath()
            java.lang.StringBuilder r4 = r4.append(r5)
            java.lang.String r4 = r4.toString()
            android.util.Log.w(r3, r4, r1)
            goto L27
    }
}
