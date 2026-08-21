package com.qihoo360.replugin.utils.pkg;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import com.qihoo360.loader2.Constant;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.utils.FileUtils;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
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
    */
    private static long getTimestampFromStream(InputStream inputStream) throws Throwable {
        Throwable th;
        DataInputStream dataInputStream;
        Exception e;
        DataInputStream dataInputStream2 = null;
        try {
            try {
                dataInputStream = new DataInputStream(inputStream);
                try {
                    String line = dataInputStream.readLine();
                    if (!TextUtils.isEmpty(line)) {
                        long j = Long.parseLong(line);
                        try {
                            dataInputStream.close();
                            if (inputStream != null) {
                                inputStream.close();
                            }
                        } catch (Exception e2) {
                            if (BuildConfig.DEBUG) {
                                Log.e(TAG, "", e2);
                            }
                        }
                        return j;
                    }
                    try {
                        dataInputStream.close();
                        if (inputStream == null) {
                            return 0L;
                        }
                        inputStream.close();
                        return 0L;
                    } catch (Exception e3) {
                        e = e3;
                        if (!BuildConfig.DEBUG) {
                            return 0L;
                        }
                    }
                } catch (Exception e4) {
                    e = e4;
                    if (BuildConfig.DEBUG) {
                        Log.e(TAG, "", e);
                    }
                    if (dataInputStream != null) {
                        try {
                            dataInputStream.close();
                        } catch (Exception e5) {
                            e = e5;
                            if (!BuildConfig.DEBUG) {
                                return 0L;
                            }
                        }
                    }
                    if (inputStream == null) {
                        return 0L;
                    }
                    inputStream.close();
                    return 0L;
                }
                Log.e(TAG, "", e);
                return 0L;
            } catch (Throwable th2) {
                th = th2;
                if (0 != 0) {
                    try {
                        dataInputStream2.close();
                    } catch (Exception e6) {
                        if (BuildConfig.DEBUG) {
                            Log.e(TAG, "", e6);
                        }
                        throw th;
                    }
                }
                if (inputStream != null) {
                    inputStream.close();
                }
                throw th;
            }
        } catch (Exception e7) {
            dataInputStream = null;
            e = e7;
        } catch (Throwable th3) {
            th = th3;
            if (0 != 0) {
            }
            if (inputStream != null) {
            }
            throw th;
        }
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
    */
    private static boolean compareDataFileVersion(Context context, String str) throws Throwable {
        Throwable th;
        DataInputStream dataInputStream;
        int i;
        Exception exc;
        Throwable th2;
        DataInputStream dataInputStream2;
        byte[] bArr = new byte[4];
        try {
            dataInputStream = new DataInputStream(context.getAssets().open(str));
            try {
                try {
                    dataInputStream.read(bArr);
                } catch (Throwable th3) {
                    th = th3;
                    if (dataInputStream != null) {
                        throw th;
                    }
                    try {
                        dataInputStream.close();
                        throw th;
                    } catch (Exception e) {
                        if (!BuildConfig.DEBUG) {
                            throw th;
                        }
                        Log.e(TAG, "close error", e);
                        throw th;
                    }
                }
            } catch (Exception e2) {
                e = e2;
                i = -1;
            }
        } catch (Exception e3) {
            e = e3;
            i = -1;
            dataInputStream = null;
        } catch (Throwable th4) {
            th = th4;
            dataInputStream = null;
            if (dataInputStream != null) {
            }
        }
        try {
            try {
                if (bArr[0] != 86 || bArr[1] != 68 || bArr[2] != 65 || bArr[3] != 84) {
                    try {
                        dataInputStream.close();
                    } catch (Exception e4) {
                        if (BuildConfig.DEBUG) {
                            Log.e(TAG, "close error", e4);
                        }
                    }
                    return true;
                }
                dataInputStream.readInt();
                dataInputStream.readInt();
                i = dataInputStream.readInt();
                try {
                    if (BuildConfig.DEBUG) {
                        Log.i(TAG, "Get assets version file=" + str + " version=" + i);
                    }
                    try {
                        dataInputStream.close();
                    } catch (Exception e5) {
                        exc = e5;
                        if (BuildConfig.DEBUG) {
                        }
                    }
                } catch (Exception e6) {
                    e = e6;
                    if (BuildConfig.DEBUG) {
                    }
                    if (dataInputStream != null) {
                    }
                }
                dataInputStream2 = new DataInputStream(new FileInputStream(context.getFileStreamPath(str)));
                dataInputStream2.read(bArr);
                if (bArr[0] == 86 || bArr[1] != 68 || bArr[2] != 65 || bArr[3] != 84) {
                    dataInputStream2.close();
                    return true;
                }
                dataInputStream2.readInt();
                dataInputStream2.readInt();
                int i2 = dataInputStream2.readInt();
                try {
                    if (BuildConfig.DEBUG) {
                        Log.i(TAG, "Get local version file=" + str + " version=" + i2);
                    }
                    try {
                        dataInputStream2.close();
                    } catch (Exception e7) {
                        Exception exc2 = e7;
                        if (BuildConfig.DEBUG) {
                        }
                    }
                } catch (Exception e8) {
                    e = e8;
                    dataInputStream = dataInputStream2;
                    if (BuildConfig.DEBUG) {
                    }
                    if (dataInputStream != null) {
                    }
                }
                if (i != -1 || i2 == -1 || i > i2) {
                    if (BuildConfig.DEBUG) {
                        Log.i(TAG, "compare file version need extract");
                    }
                    return true;
                }
                if (BuildConfig.DEBUG) {
                    Log.i(TAG, "compare file version not extract");
                }
                return false;
                dataInputStream2.read(bArr);
                if (bArr[0] == 86) {
                }
                dataInputStream2.close();
                return true;
            } catch (Throwable th5) {
                th2 = th5;
                dataInputStream = dataInputStream2;
                if (dataInputStream == null) {
                    throw th2;
                }
                try {
                    dataInputStream.close();
                    throw th2;
                } catch (Exception e9) {
                    if (!BuildConfig.DEBUG) {
                        throw th2;
                    }
                    Log.e(TAG, "close error", e9);
                    throw th2;
                }
            }
            dataInputStream2 = new DataInputStream(new FileInputStream(context.getFileStreamPath(str)));
        } catch (Throwable th6) {
            th2 = th6;
        }
        if (BuildConfig.DEBUG) {
            Log.e(TAG, "Get assets version error, file:" + str, e);
        }
        if (dataInputStream != null) {
            try {
                dataInputStream.close();
            } catch (Exception e10) {
                exc = e10;
                if (BuildConfig.DEBUG) {
                    Log.e(TAG, "close error", exc);
                }
            }
        }
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
