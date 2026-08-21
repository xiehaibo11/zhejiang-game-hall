package com.qihoo360.replugin.utils.pkg;

import android.content.Context;
import android.os.Build;
import android.util.Log;
import com.qihoo360.loader2.Constant;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.utils.FileUtils;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PackageFilesUtil {
    private static final String TAG = "PackageFilesUtil";
    private static final String TIMESTAMP_EXT = ".timestamp";

    public static InputStream openLatestInputFile(Context context, String str) {
        InputStream inputStreamOpenFileInput = null;
        if (getFileTimestamp(context, str) >= getBundleTimestamp(context, str)) {
            try {
                inputStreamOpenFileInput = context.openFileInput(str);
                if (BuildConfig.DEBUG) {
                    Log.i(TAG, "Opening in files directory: " + str);
                }
            } catch (Exception unused) {
                if (BuildConfig.DEBUG) {
                    Log.i(TAG, str + " in files directory not found, skip.");
                }
            }
        }
        if (inputStreamOpenFileInput == null) {
            try {
                inputStreamOpenFileInput = context.getAssets().open(str);
                if (BuildConfig.DEBUG) {
                    Log.i(TAG, "Opening in assets: " + str);
                }
            } catch (FileNotFoundException unused2) {
            } catch (IOException e) {
                if (BuildConfig.DEBUG) {
                    Log.w(TAG, str, e);
                }
            }
        }
        return inputStreamOpenFileInput;
    }

    public static long getLatestFileTimestamp(Context context, String str) {
        return Math.max(getFileTimestamp(context, str), getBundleTimestamp(context, str));
    }

    public static boolean isFileUpdated(Context context, String str) {
        File fileStreamPath = context.getFileStreamPath(str);
        if (fileStreamPath != null && fileStreamPath.exists()) {
            return getBundleTimestamp(context, str) <= getFileTimestamp(context, str);
        }
        return false;
    }

    public static long getFileTimestamp(Context context, String str) {
        FileInputStream fileInputStreamOpenFileInput;
        try {
            fileInputStreamOpenFileInput = context.openFileInput(str + TIMESTAMP_EXT);
        } catch (Exception unused) {
            fileInputStreamOpenFileInput = null;
        }
        if (fileInputStreamOpenFileInput != null) {
            return getTimestampFromStream(fileInputStreamOpenFileInput);
        }
        return 0L;
    }

    public static long getBundleTimestamp(Context context, String str) {
        InputStream inputStreamOpen;
        try {
            inputStreamOpen = context.getAssets().open(str + TIMESTAMP_EXT);
        } catch (Exception unused) {
            inputStreamOpen = null;
        }
        if (inputStreamOpen != null) {
            return getTimestampFromStream(inputStreamOpen);
        }
        return 0L;
    }

    /* JADX WARN: Removed duplicated region for block: B:51:0x006f A[Catch: Exception -> 0x006b, TRY_LEAVE, TryCatch #2 {Exception -> 0x006b, blocks: (B:47:0x0067, B:51:0x006f), top: B:60:0x0067 }] */
    /* JADX WARN: Removed duplicated region for block: B:60:0x0067 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static long getTimestampFromStream(java.io.InputStream r7) throws java.lang.Throwable {
        /*
            java.lang.String r0 = ""
            java.lang.String r1 = "PackageFilesUtil"
            r2 = 0
            java.io.DataInputStream r3 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L43
            r3.<init>(r7)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L43
            java.lang.String r2 = r3.readLine()     // Catch: java.lang.Exception -> L3c java.lang.Throwable -> L64
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L3c java.lang.Throwable -> L64
            if (r4 != 0) goto L2a
            long r4 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Exception -> L3c java.lang.Throwable -> L64
            r3.close()     // Catch: java.lang.Exception -> L21
            if (r7 == 0) goto L29
            r7.close()     // Catch: java.lang.Exception -> L21
            goto L29
        L21:
            r7 = move-exception
            boolean r2 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r2 == 0) goto L29
            android.util.Log.e(r1, r0, r7)
        L29:
            return r4
        L2a:
            r3.close()     // Catch: java.lang.Exception -> L33
            if (r7 == 0) goto L61
            r7.close()     // Catch: java.lang.Exception -> L33
            goto L61
        L33:
            r7 = move-exception
            boolean r2 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r2 == 0) goto L61
        L38:
            android.util.Log.e(r1, r0, r7)
            goto L61
        L3c:
            r2 = move-exception
            goto L47
        L3e:
            r3 = move-exception
            r6 = r3
            r3 = r2
            r2 = r6
            goto L65
        L43:
            r3 = move-exception
            r6 = r3
            r3 = r2
            r2 = r6
        L47:
            boolean r4 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.Throwable -> L64
            if (r4 == 0) goto L4e
            android.util.Log.e(r1, r0, r2)     // Catch: java.lang.Throwable -> L64
        L4e:
            if (r3 == 0) goto L56
            r3.close()     // Catch: java.lang.Exception -> L54
            goto L56
        L54:
            r7 = move-exception
            goto L5c
        L56:
            if (r7 == 0) goto L61
            r7.close()     // Catch: java.lang.Exception -> L54
            goto L61
        L5c:
            boolean r2 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r2 == 0) goto L61
            goto L38
        L61:
            r0 = 0
            return r0
        L64:
            r2 = move-exception
        L65:
            if (r3 == 0) goto L6d
            r3.close()     // Catch: java.lang.Exception -> L6b
            goto L6d
        L6b:
            r7 = move-exception
            goto L73
        L6d:
            if (r7 == 0) goto L7a
            r7.close()     // Catch: java.lang.Exception -> L6b
            goto L7a
        L73:
            boolean r3 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r3 == 0) goto L7a
            android.util.Log.e(r1, r0, r7)
        L7a:
            throw r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.replugin.utils.pkg.PackageFilesUtil.getTimestampFromStream(java.io.InputStream):long");
    }

    public static boolean isExtractedFromAssetsToFiles(Context context, String str) {
        File fileStreamPath = context.getFileStreamPath(str);
        if (fileStreamPath == null || !fileStreamPath.exists()) {
            if (!BuildConfig.DEBUG) {
                return true;
            }
            Log.i(TAG, "Extract no exist file from assets filename = " + str);
            return true;
        }
        return compareDataFileVersion(context, str);
    }

    /* JADX WARN: Can't wrap try/catch for region: R(3:(7:(3:129|24|30)(11:12|123|13|(1:15)|149|16|133|47|142|48|(3:125|68|74)(8:56|147|57|(1:59)|135|60|93|(3:101|(1:103)|104)(3:97|(1:99)|100)))|142|48|(1:50)|125|68|74)|133|47) */
    /* JADX WARN: Can't wrap try/catch for region: R(7:(3:129|24|30)(11:12|123|13|(1:15)|149|16|133|47|142|48|(3:125|68|74)(8:56|147|57|(1:59)|135|60|93|(3:101|(1:103)|104)(3:97|(1:99)|100)))|142|48|(1:50)|125|68|74) */
    /* JADX WARN: Can't wrap try/catch for region: R(9:(3:129|24|30)(11:12|123|13|(1:15)|149|16|133|47|142|48|(3:125|68|74)(8:56|147|57|(1:59)|135|60|93|(3:101|(1:103)|104)(3:97|(1:99)|100)))|133|47|142|48|(1:50)|125|68|74) */
    /* JADX WARN: Code restructure failed: missing block: B:70:0x010b, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:72:0x010f, code lost:
    
        if (com.qihoo360.mobilesafe.core.BuildConfig.DEBUG != false) goto L73;
     */
    /* JADX WARN: Code restructure failed: missing block: B:73:0x0111, code lost:
    
        android.util.Log.e(com.qihoo360.replugin.utils.pkg.PackageFilesUtil.TAG, "close error", r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:77:0x0119, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:78:0x011a, code lost:
    
        r15 = r6;
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x011f, code lost:
    
        r0 = e;
     */
    /* JADX WARN: Code restructure failed: missing block: B:82:0x0120, code lost:
    
        r5 = -1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:85:0x0125, code lost:
    
        android.util.Log.e(com.qihoo360.replugin.utils.pkg.PackageFilesUtil.TAG, "Get file version error, file:" + r17, r0);
     */
    /* JADX WARN: Code restructure failed: missing block: B:87:0x013b, code lost:
    
        r15.close();
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x013f, code lost:
    
        r0 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:90:0x0140, code lost:
    
        r1 = r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:91:0x0143, code lost:
    
        if (com.qihoo360.mobilesafe.core.BuildConfig.DEBUG != false) goto L92;
     */
    /* JADX WARN: Code restructure failed: missing block: B:92:0x0145, code lost:
    
        android.util.Log.e(com.qihoo360.replugin.utils.pkg.PackageFilesUtil.TAG, "close error", r1);
     */
    /* JADX WARN: Removed duplicated region for block: B:103:0x015d  */
    /* JADX WARN: Removed duplicated region for block: B:131:0x013b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:140:0x0177 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:145:0x00a2 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:156:? A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0069 A[PHI: r6 r13 r15
      0x0069: PHI (r6v5 java.lang.Exception) = (r6v2 java.lang.Exception), (r6v8 java.lang.Exception) binds: [B:45:0x00aa, B:20:0x0067] A[DONT_GENERATE, DONT_INLINE]
      0x0069: PHI (r13v2 int) = (r13v1 int), (r13v5 int) binds: [B:45:0x00aa, B:20:0x0067] A[DONT_GENERATE, DONT_INLINE]
      0x0069: PHI (r15v5 java.io.DataInputStream) = (r15v4 java.io.DataInputStream), (r15v14 java.io.DataInputStream) binds: [B:45:0x00aa, B:20:0x0067] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:39:0x008c A[Catch: all -> 0x0173, TRY_LEAVE, TryCatch #8 {all -> 0x0173, blocks: (B:4:0x0024, B:6:0x002b, B:8:0x002f, B:10:0x0033, B:12:0x0037, B:13:0x0041, B:15:0x0045, B:37:0x0088, B:39:0x008c), top: B:137:0x0024 }] */
    /* JADX WARN: Removed duplicated region for block: B:85:0x0125 A[Catch: all -> 0x011c, TRY_LEAVE, TryCatch #16 {all -> 0x011c, blocks: (B:47:0x00ad, B:83:0x0121, B:85:0x0125), top: B:133:0x00ad }] */
    /* JADX WARN: Removed duplicated region for block: B:92:0x0145 A[PHI: r1 r5
      0x0145: PHI (r1v8 java.lang.Exception) = (r1v6 java.lang.Exception), (r1v12 java.lang.Exception) binds: [B:91:0x0143, B:64:0x0101] A[DONT_GENERATE, DONT_INLINE]
      0x0145: PHI (r5v3 int) = (r5v2 int), (r5v6 int) binds: [B:91:0x0143, B:64:0x0101] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static boolean compareDataFileVersion(android.content.Context r16, java.lang.String r17) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 389
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.replugin.utils.pkg.PackageFilesUtil.compareDataFileVersion(android.content.Context, java.lang.String):boolean");
    }

    public static void forceDelete(PluginInfo pluginInfo) {
        if (pluginInfo == null) {
            return;
        }
        try {
            File apkFile = pluginInfo.getApkFile();
            if (apkFile.exists()) {
                FileUtils.forceDelete(apkFile);
                if (BuildConfig.DEBUG) {
                    Log.i(TAG, "delete " + pluginInfo.getApkFile());
                }
            }
            File dexFile = pluginInfo.getDexFile();
            if (dexFile.exists()) {
                FileUtils.forceDelete(dexFile);
                if (BuildConfig.DEBUG) {
                    Log.i(TAG, "delete " + pluginInfo.getDexFile());
                }
            }
            if (Build.VERSION.SDK_INT > 25) {
                File file = new File(pluginInfo.getDexParentDir(), FileUtils.getFileNameWithoutExt(pluginInfo.getDexFile().getAbsolutePath()) + ".vdex");
                FileUtils.forceDelete(file);
                if (BuildConfig.DEBUG) {
                    Log.i(TAG, "delete " + file);
                }
                File file2 = new File(pluginInfo.getApkFile().getAbsolutePath() + ".prof");
                FileUtils.forceDelete(file2);
                if (BuildConfig.DEBUG) {
                    Log.i(TAG, "delete " + file2);
                }
            }
            if (Build.VERSION.SDK_INT < 21) {
                FileUtils.forceDelete(pluginInfo.getExtraOdexDir());
                if (BuildConfig.DEBUG) {
                    Log.i(TAG, "delete " + pluginInfo.getExtraOdexDir());
                }
            }
            if (pluginInfo.getNativeLibsDir().exists()) {
                FileUtils.forceDelete(pluginInfo.getNativeLibsDir());
                if (BuildConfig.DEBUG) {
                    Log.i(TAG, "delete " + pluginInfo.getNativeLibsDir());
                }
            }
            File file3 = new File(RePluginInternal.getAppContext().getFilesDir(), String.format(Constant.LOAD_PLUGIN_LOCK, pluginInfo.getApkFile().getName()));
            FileUtils.forceDelete(file3);
            if (BuildConfig.DEBUG) {
                Log.i(TAG, "delete " + file3);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } catch (IllegalArgumentException e2) {
            e2.printStackTrace();
        }
    }
}
