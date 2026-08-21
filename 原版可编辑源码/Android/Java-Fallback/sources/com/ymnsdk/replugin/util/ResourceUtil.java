package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class ResourceUtil {
    private static final java.lang.String FILE_NAME_CFG = "replugincfgs";

    public ResourceUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] InputStreamToByte(java.io.InputStream r4) {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L22
            r0.<init>()     // Catch: java.lang.Exception -> L22
            r1 = 1024(0x400, float:1.435E-42)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Exception -> L22
        L9:
            int r2 = r4.read(r1)     // Catch: java.lang.Exception -> L22
            r3 = -1
            if (r2 == r3) goto L14
            r0.write(r1)     // Catch: java.lang.Exception -> L22
            goto L9
        L14:
            r4.close()     // Catch: java.lang.Exception -> L22
            byte[] r4 = r0.toByteArray()     // Catch: java.lang.Exception -> L22
            r0.flush()     // Catch: java.lang.Exception -> L22
            r0.close()     // Catch: java.lang.Exception -> L22
            return r4
        L22:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    public static boolean assetFileExist(android.content.Context r4, java.lang.String r5) {
            android.content.res.AssetManager r4 = r4.getAssets()
            r0 = 0
            java.lang.String r1 = ""
            java.lang.String[] r4 = r4.list(r1)     // Catch: java.io.IOException -> L20
            r1 = r0
        Lc:
            int r2 = r4.length     // Catch: java.io.IOException -> L20
            if (r1 >= r2) goto L24
            r2 = r4[r1]     // Catch: java.io.IOException -> L20
            java.lang.String r3 = r5.trim()     // Catch: java.io.IOException -> L20
            boolean r2 = r2.equals(r3)     // Catch: java.io.IOException -> L20
            if (r2 == 0) goto L1d
            r4 = 1
            return r4
        L1d:
            int r1 = r1 + 1
            goto Lc
        L20:
            r4 = move-exception
            r4.printStackTrace()
        L24:
            return r0
    }

    public static boolean deleteDirectory(java.lang.String r5) {
            java.lang.String r0 = java.io.File.separator
            boolean r0 = r5.endsWith(r0)
            if (r0 != 0) goto L19
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r5 = java.io.File.separator
            r0.append(r5)
            java.lang.String r5 = r0.toString()
        L19:
            java.io.File r0 = new java.io.File
            r0.<init>(r5)
            boolean r5 = r0.exists()
            r1 = 0
            if (r5 == 0) goto L62
            boolean r5 = r0.isDirectory()
            if (r5 != 0) goto L2c
            goto L62
        L2c:
            java.io.File[] r5 = r0.listFiles()
            r2 = 1
            r3 = r1
        L32:
            int r4 = r5.length
            if (r3 >= r4) goto L5a
            r2 = r5[r3]
            boolean r2 = r2.isFile()
            if (r2 == 0) goto L4a
            r2 = r5[r3]
            java.lang.String r2 = r2.getAbsolutePath()
            boolean r2 = deleteFile(r2)
            if (r2 != 0) goto L57
            goto L5a
        L4a:
            r2 = r5[r3]
            java.lang.String r2 = r2.getAbsolutePath()
            boolean r2 = deleteDirectory(r2)
            if (r2 != 0) goto L57
            goto L5a
        L57:
            int r3 = r3 + 1
            goto L32
        L5a:
            if (r2 != 0) goto L5d
            return r1
        L5d:
            boolean r5 = r0.delete()
            return r5
        L62:
            return r1
    }

    public static boolean deleteFile(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L16
            boolean r1 = r0.isFile()
            if (r1 == 0) goto L16
            boolean r1 = r0.delete()
            return r1
        L16:
            r1 = 0
            return r1
    }

    public static java.lang.String getAppDataDir(android.content.Context r2) {
            java.io.File r0 = r2.getCacheDir()
            if (r0 == 0) goto L1c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = r0.getParent()
            r2.append(r0)
            java.lang.String r0 = java.io.File.separator
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            return r2
        L1c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "/data/data/"
            r0.append(r1)
            java.lang.String r2 = r2.getPackageName()
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.lang.String getFileNameByUrl(java.lang.String r2) {
            java.lang.String r0 = "/"
            int r0 = r2.lastIndexOf(r0)
            int r0 = r0 + 1
            int r1 = r2.length()
            java.lang.String r2 = r2.substring(r0, r1)
            return r2
    }

    public static java.lang.String getFolder(java.lang.String r3) {
            java.lang.String r0 = java.io.File.separator
            java.lang.String[] r0 = r3.split(r0)
            int r1 = r0.length
            if (r1 > 0) goto Lb
            r3 = 0
            return r3
        Lb:
            int r1 = r3.length()
            int r2 = r0.length
            int r2 = r2 + (-1)
            r0 = r0[r2]
            int r0 = r0.length()
            r2 = 0
            int r1 = r1 - r0
            java.lang.String r3 = r3.substring(r2, r1)
            return r3
    }

    public static java.lang.String getSdcardPath() {
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    public static boolean isSdcardFileExist(java.lang.String r3) {
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = getSdcardPath()
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            boolean r3 = r0.exists()
            return r3
    }

    public static boolean isSdcardReady() {
            java.lang.String r0 = android.os.Environment.getExternalStorageState()
            java.lang.String r1 = "mounted"
            boolean r0 = r0.equals(r1)
            return r0
    }

    public static void mkFileDirs(java.lang.String r1) {
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto Le
            r0.mkdirs()
        Le:
            return
    }

    public static java.lang.String readPreferences(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "replugincfgs"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            r0 = 0
            java.lang.String r2 = r2.getString(r3, r0)
            return r2
    }

    public static void removePreferences(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "replugincfgs"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            android.content.SharedPreferences$Editor r2 = r2.remove(r3)
            r2.commit()
            return
    }

    public static boolean retrieveFileFromAssets(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r0 = 0
            r1 = 0
            android.content.res.AssetManager r2 = r2.getAssets()     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L3a
            java.io.InputStream r2 = r2.open(r3)     // Catch: java.lang.Throwable -> L37 java.io.IOException -> L3a
            java.io.File r3 = new java.io.File     // Catch: java.io.IOException -> L35 java.lang.Throwable -> L4a
            r3.<init>(r4)     // Catch: java.io.IOException -> L35 java.lang.Throwable -> L4a
            r3.createNewFile()     // Catch: java.io.IOException -> L35 java.lang.Throwable -> L4a
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.io.IOException -> L35 java.lang.Throwable -> L4a
            r4.<init>(r3)     // Catch: java.io.IOException -> L35 java.lang.Throwable -> L4a
            r3 = 1024(0x400, float:1.435E-42)
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L32
        L1b:
            int r1 = r2.read(r3)     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L32
            if (r1 <= 0) goto L25
            r4.write(r3, r0, r1)     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L32
            goto L1b
        L25:
            r3 = 1
            r4.close()     // Catch: java.io.IOException -> L29
        L29:
            if (r2 == 0) goto L2e
            r2.close()     // Catch: java.io.IOException -> L2e
        L2e:
            return r3
        L2f:
            r3 = move-exception
            r1 = r4
            goto L4b
        L32:
            r3 = move-exception
            r1 = r4
            goto L3c
        L35:
            r3 = move-exception
            goto L3c
        L37:
            r3 = move-exception
            r2 = r1
            goto L4b
        L3a:
            r3 = move-exception
            r2 = r1
        L3c:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L44
            r1.close()     // Catch: java.io.IOException -> L44
        L44:
            if (r2 == 0) goto L49
            r2.close()     // Catch: java.io.IOException -> L49
        L49:
            return r0
        L4a:
            r3 = move-exception
        L4b:
            if (r1 == 0) goto L50
            r1.close()     // Catch: java.io.IOException -> L50
        L50:
            if (r2 == 0) goto L55
            r2.close()     // Catch: java.io.IOException -> L55
        L55:
            throw r3
    }

    public static void savePreferences(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "replugincfgs"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            android.content.SharedPreferences$Editor r2 = r2.putString(r3, r4)
            r2.commit()
            return
    }

    public static java.lang.String urlOnSdCard4Public() {
            java.lang.String r0 = ""
            boolean r1 = isSdcardReady()     // Catch: java.lang.Exception -> L43
            if (r1 != 0) goto L9
            return r0
        L9:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> L43
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L43
            r2.<init>()     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = getSdcardPath()     // Catch: java.lang.Exception -> L43
            r2.append(r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = java.io.File.separator     // Catch: java.lang.Exception -> L43
            r2.append(r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = ".bftj/sdk/repluginDebug"
            r2.append(r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L43
            r1.<init>(r2)     // Catch: java.lang.Exception -> L43
            boolean r2 = r1.exists()     // Catch: java.lang.Exception -> L43
            if (r2 != 0) goto L2f
            return r0
        L2f:
            java.util.Properties r2 = new java.util.Properties     // Catch: java.lang.Exception -> L43
            r2.<init>()     // Catch: java.lang.Exception -> L43
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L43
            r3.<init>(r1)     // Catch: java.lang.Exception -> L43
            r2.load(r3)     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = "url_host_replugin"
            java.lang.String r0 = r2.getProperty(r1)     // Catch: java.lang.Exception -> L43
            return r0
        L43:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }
}
