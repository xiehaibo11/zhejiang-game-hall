package com.huawei.secure.android.common.util;

import android.text.TextUtils;
import android.util.Log;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.Iterator;
import java.util.List;
import java.util.zip.ZipInputStream;

/* JADX INFO: loaded from: classes2.dex */
public class ZipUtil {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2281a = "ZipUtil";
    private static final int b = 104857600;
    private static final int c = 100;
    private static final int d = 4096;
    private static final String e = "../";
    private static final String f = "..\\";

    /* JADX WARN: Code restructure failed: missing block: B:62:0x00f4, code lost:
    
        com.huawei.secure.android.common.util.IOUtil.closeSecure(r7);
     */
    /* JADX WARN: Code restructure failed: missing block: B:63:0x00f7, code lost:
    
        if (r6 != false) goto L74;
     */
    /* JADX WARN: Code restructure failed: missing block: B:64:0x00f9, code lost:
    
        a(r5);
     */
    /* JADX WARN: Removed duplicated region for block: B:79:0x012c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static java.util.List<java.io.File> a(java.io.File r16, java.io.File r17, long r18, boolean r20) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 305
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.huawei.secure.android.common.util.ZipUtil.a(java.io.File, java.io.File, long, boolean):java.util.List");
    }

    private static boolean b(File file) {
        if (file == null) {
            return false;
        }
        if (file.exists()) {
            return file.isFile();
        }
        if (!a(file.getParentFile())) {
            return false;
        }
        try {
            return file.createNewFile();
        } catch (IOException unused) {
            Log.e(f2281a, "createOrExistsFile IOException ");
            return false;
        }
    }

    private static File c(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        return b(str);
    }

    private static String d(String str) {
        int iLastIndexOf;
        return (TextUtils.isEmpty(str) || (iLastIndexOf = str.lastIndexOf(File.separator)) == -1) ? str : str.substring(iLastIndexOf + 1);
    }

    private static void e(File file) {
        if (file == null) {
            return;
        }
        if (file.isFile()) {
            c(file);
            return;
        }
        if (file.isDirectory()) {
            File[] fileArrListFiles = file.listFiles();
            if (fileArrListFiles == null || fileArrListFiles.length == 0) {
                c(file);
                return;
            }
            for (File file2 : fileArrListFiles) {
                e(file2);
            }
            c(file);
        }
    }

    @Deprecated
    public static boolean unZip(String str, String str2, boolean z) throws SecurityCommonException {
        return unZip(str, str2, 104857600L, 100, z);
    }

    public static List<File> unZipNew(String str, String str2, boolean z) throws SecurityCommonException {
        return unZipNew(str, str2, 104857600L, 100, z);
    }

    private static void c(File file) {
        if (file == null || file.delete()) {
            return;
        }
        LogsUtil.e(f2281a, "delete file error");
    }

    /* JADX WARN: Code restructure failed: missing block: B:40:0x00cf, code lost:
    
        android.util.Log.e(com.huawei.secure.android.common.util.ZipUtil.f2281a, "unzip  over than top size");
     */
    /* JADX WARN: Code restructure failed: missing block: B:41:0x00d4, code lost:
    
        r2 = false;
        r3 = false;
     */
    /* JADX WARN: Removed duplicated region for block: B:84:0x014e  */
    @java.lang.Deprecated
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static boolean unZip(java.lang.String r17, java.lang.String r18, long r19, int r21, boolean r22) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 343
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.huawei.secure.android.common.util.ZipUtil.unZip(java.lang.String, java.lang.String, long, int, boolean):boolean");
    }

    public static List<File> unZipNew(String str, String str2, long j, int i, boolean z) throws SecurityCommonException {
        if (!a(str, str2, j, i)) {
            return null;
        }
        if (str2.endsWith(File.separator) && str2.length() > File.separator.length()) {
            str2 = str2.substring(0, str2.length() - File.separator.length());
        }
        return a(c(str), c(str2), j, z);
    }

    private static void d(File file) {
        if (file == null || file.exists() || file.mkdirs()) {
            return;
        }
        LogsUtil.e(f2281a, "mkdirs error , files exists or IOException.");
    }

    private static File b(String str) {
        a(str);
        return new File(str);
    }

    private static boolean e(String str) {
        if (!TextUtils.isEmpty(str)) {
            return str.contains(e) || str.contains(f) || str.contains("..") || str.contains("./") || str.contains(".\\.\\") || str.contains("%00");
        }
        Log.e(f2281a, "isContainInvalidStr: name is null");
        return true;
    }

    private static void a(String str) {
        if (TextUtils.isEmpty(str) || !e(str)) {
            return;
        }
        Log.e(f2281a, "IllegalArgumentException--path is not a standard path");
        throw new IllegalArgumentException("path is not a standard path");
    }

    private static boolean a(File file) {
        return file != null && (!file.exists() ? !file.mkdirs() : !file.isDirectory());
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v0 */
    /* JADX WARN: Type inference failed for: r3v1 */
    /* JADX WARN: Type inference failed for: r3v11 */
    /* JADX WARN: Type inference failed for: r3v12 */
    /* JADX WARN: Type inference failed for: r3v13 */
    /* JADX WARN: Type inference failed for: r3v14 */
    /* JADX WARN: Type inference failed for: r3v2, types: [java.util.zip.ZipFile] */
    /* JADX WARN: Type inference failed for: r3v3 */
    /* JADX WARN: Type inference failed for: r3v4, types: [java.util.zip.ZipFile] */
    /* JADX WARN: Type inference failed for: r3v5 */
    /* JADX WARN: Type inference failed for: r3v6 */
    /* JADX WARN: Type inference failed for: r3v9 */
    /*  JADX ERROR: JadxRuntimeException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Can't find top splitter block for handler:B:30:0x0071
        	at jadx.core.utils.BlockUtils.getTopSplitterForHandler(BlockUtils.java:1182)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.collectHandlerRegions(ExcHandlersRegionMaker.java:53)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.process(ExcHandlersRegionMaker.java:38)
        	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:27)
        */
    private static boolean a(java.lang.String r11, long r12, int r14) {
        /*
            java.lang.String r0 = "close zipFile IOException "
            java.lang.String r1 = "ZipUtil"
            r2 = 0
            r3 = 0
            java.util.zip.ZipFile r4 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L50 java.io.IOException -> L52
            r4.<init>(r11)     // Catch: java.lang.Throwable -> L50 java.io.IOException -> L52
            java.util.Enumeration r11 = r4.entries()     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            r5 = 0
            r3 = r2
        L12:
            boolean r7 = r11.hasMoreElements()     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            r8 = 1
            if (r7 == 0) goto L45
            java.lang.Object r7 = r11.nextElement()     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            java.util.zip.ZipEntry r7 = (java.util.zip.ZipEntry) r7     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            long r9 = r7.getSize()     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            long r5 = r5 + r9
            int r3 = r3 + r8
            java.lang.String r8 = r7.getName()     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            boolean r8 = e(r8)     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            if (r8 != 0) goto L3f
            if (r3 >= r14) goto L3f
            int r8 = (r5 > r12 ? 1 : (r5 == r12 ? 0 : -1))
            if (r8 > 0) goto L3f
            long r7 = r7.getSize()     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            r9 = -1
            int r7 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r7 != 0) goto L12
        L3f:
            java.lang.String r11 = "File name is invalid or too many files or too big"
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r11)     // Catch: java.lang.Throwable -> L4a java.io.IOException -> L4d
            goto L46
        L45:
            r2 = r8
        L46:
            r4.close()     // Catch: java.io.IOException -> L71
            goto L74
        L4a:
            r11 = move-exception
            r3 = r4
            goto L75
        L4d:
            r11 = move-exception
            r3 = r4
            goto L53
        L50:
            r11 = move-exception
            goto L75
        L52:
            r11 = move-exception
        L53:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            r12.<init>()     // Catch: java.lang.Throwable -> L50
            java.lang.String r13 = "not a valid zip file, IOException : "
            r12.append(r13)     // Catch: java.lang.Throwable -> L50
            java.lang.String r11 = r11.getMessage()     // Catch: java.lang.Throwable -> L50
            r12.append(r11)     // Catch: java.lang.Throwable -> L50
            java.lang.String r11 = r12.toString()     // Catch: java.lang.Throwable -> L50
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r11)     // Catch: java.lang.Throwable -> L50
            if (r3 == 0) goto L74
            r3.close()     // Catch: java.io.IOException -> L71
            goto L74
        L71:
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r0)
        L74:
            return r2
        L75:
            if (r3 == 0) goto L7e
            r3.close()     // Catch: java.io.IOException -> L7b
            goto L7e
        L7b:
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r0)
        L7e:
            throw r11
        */
        throw new UnsupportedOperationException("Method not decompiled: com.huawei.secure.android.common.util.ZipUtil.a(java.lang.String, long, int):boolean");
    }

    private static boolean a(String str, String str2, long j, int i) throws SecurityCommonException {
        if (!TextUtils.isEmpty(str) && !e(str)) {
            if (!TextUtils.isEmpty(str2) && !e(str2)) {
                if (a(str, j, i)) {
                    return true;
                }
                LogsUtil.e(f2281a, "zip file contains valid chars or too many files");
                throw new SecurityCommonException("unsecure zipfile!");
            }
            LogsUtil.e(f2281a, "target directory is not valid");
            return false;
        }
        LogsUtil.e(f2281a, "zip file is not valid");
        return false;
    }

    private static boolean a(List<File> list) {
        try {
            Iterator<File> it = list.iterator();
            while (it.hasNext()) {
                e(it.next());
            }
            return true;
        } catch (Exception e2) {
            LogsUtil.e(f2281a, "unzip fail delete file failed" + e2.getMessage());
            return false;
        }
    }

    private static void a(FileInputStream fileInputStream, BufferedOutputStream bufferedOutputStream, ZipInputStream zipInputStream, FileOutputStream fileOutputStream) {
        IOUtil.closeSecure((InputStream) fileInputStream);
        IOUtil.closeSecure((OutputStream) bufferedOutputStream);
        IOUtil.closeSecure((InputStream) zipInputStream);
        IOUtil.closeSecure((OutputStream) fileOutputStream);
    }
}
