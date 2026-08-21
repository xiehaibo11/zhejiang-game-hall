package com.xiaomi.push;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Build;
import android.text.TextUtils;
import com.qihoo360.replugin.model.PluginInfo;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.channels.FileLock;
import java.util.Arrays;
import java.util.List;

public class bt {
    public static String a() {
        return Build.VERSION.RELEASE + Constants.ACCEPT_TIME_SEPARATOR_SERVER + Build.VERSION.INCREMENTAL;
    }

    public static String a(Context context) {
        String strA = bw.a(context).a("sp_client_report_status", "sp_client_report_key", "");
        if (!TextUtils.isEmpty(strA)) {
            return strA;
        }
        String strA2 = bp.a(20);
        bw.a(context).a("sp_client_report_status", "sp_client_report_key", strA2);
        return strA2;
    }

    public static void a(Context context, String str) {
        Intent intent = new Intent("com.xiaomi.xmsf.push.XMSF_UPLOAD_ACTIVE");
        intent.putExtra(PluginInfo.PI_PKGNAME, context.getPackageName());
        intent.putExtra("category", "category_client_report_data");
        intent.putExtra("name", "quality_support");
        intent.putExtra("data", str);
        context.sendBroadcast(intent, "com.xiaomi.xmsf.permission.USE_XMSF_UPLOAD");
    }

    /* JADX WARN: Removed duplicated region for block: B:108:0x0120 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:86:0x011d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void a(Context context, String str, String str2) throws Throwable {
        File file;
        RandomAccessFile randomAccessFile;
        Exception e;
        File externalFilesDir = context.getExternalFilesDir(str2);
        if (externalFilesDir != null) {
            if (!externalFilesDir.exists()) {
                externalFilesDir.mkdirs();
            }
            File externalFilesDir2 = context.getExternalFilesDir(str);
            if (externalFilesDir2 != null) {
                if (!externalFilesDir2.exists()) {
                    externalFilesDir2.mkdirs();
                    return;
                }
                File[] fileArrListFiles = externalFilesDir2.listFiles(new bu());
                if (fileArrListFiles == null || fileArrListFiles.length <= 0) {
                    return;
                }
                long jCurrentTimeMillis = System.currentTimeMillis();
                FileLock fileLockLock = null;
                RandomAccessFile randomAccessFile2 = null;
                File file2 = null;
                for (File file3 : fileArrListFiles) {
                    if (file3 != null) {
                        try {
                        } catch (Exception e2) {
                            file = file2;
                            randomAccessFile = randomAccessFile2;
                            e = e2;
                        } catch (Throwable th) {
                            th = th;
                        }
                        if (TextUtils.isEmpty(file3.getAbsolutePath())) {
                            if (fileLockLock != null && fileLockLock.isValid()) {
                                try {
                                    fileLockLock.release();
                                } catch (IOException e3) {
                                    com.xiaomi.channel.commonutils.logger.b.a(e3);
                                }
                            }
                            ab.a(randomAccessFile2);
                            if (file2 == null) {
                                file2.delete();
                            }
                        } else {
                            file = new File(file3.getAbsolutePath() + ".lock");
                            try {
                                ab.a(file);
                                randomAccessFile = new RandomAccessFile(file, "rw");
                                try {
                                    try {
                                        fileLockLock = randomAccessFile.getChannel().lock();
                                        File file4 = new File(externalFilesDir.getAbsolutePath() + File.separator + file3.getName() + jCurrentTimeMillis);
                                        try {
                                            ab.b(file3, file4);
                                        } catch (IOException e4) {
                                            e4.printStackTrace();
                                            file3.delete();
                                            file4.delete();
                                        }
                                        file3.delete();
                                        if (fileLockLock != null && fileLockLock.isValid()) {
                                            try {
                                                fileLockLock.release();
                                            } catch (IOException e5) {
                                                com.xiaomi.channel.commonutils.logger.b.a(e5);
                                            }
                                        }
                                        ab.a(randomAccessFile);
                                    } catch (Exception e6) {
                                        e = e6;
                                        com.xiaomi.channel.commonutils.logger.b.a(e);
                                        if (fileLockLock != null && fileLockLock.isValid()) {
                                            try {
                                                fileLockLock.release();
                                            } catch (IOException e7) {
                                                com.xiaomi.channel.commonutils.logger.b.a(e7);
                                            }
                                        }
                                        ab.a(randomAccessFile);
                                        if (file != null) {
                                        }
                                        randomAccessFile2 = randomAccessFile;
                                        file2 = file;
                                    }
                                } catch (Throwable th2) {
                                    th = th2;
                                    randomAccessFile2 = randomAccessFile;
                                    file2 = file;
                                    if (fileLockLock != null && fileLockLock.isValid()) {
                                        try {
                                            fileLockLock.release();
                                        } catch (IOException e8) {
                                            com.xiaomi.channel.commonutils.logger.b.a(e8);
                                        }
                                    }
                                    ab.a(randomAccessFile2);
                                    if (file2 == null) {
                                        throw th;
                                    }
                                    file2.delete();
                                    throw th;
                                }
                            } catch (Exception e9) {
                                randomAccessFile = randomAccessFile2;
                                e = e9;
                            } catch (Throwable th3) {
                                th = th3;
                            }
                            file.delete();
                            randomAccessFile2 = randomAccessFile;
                            file2 = file;
                        }
                    } else {
                        if (fileLockLock != null) {
                            fileLockLock.release();
                        }
                        ab.a(randomAccessFile2);
                        if (file2 == null) {
                        }
                    }
                }
            }
        }
    }

    public static void a(Context context, List<String> list) {
        if (list == null || list.size() <= 0 || !a(context)) {
            return;
        }
        for (String str : list) {
            if (!TextUtils.isEmpty(str)) {
                a(context, str);
            }
        }
    }

    public static boolean a(Context context) {
        try {
            return context.getApplicationContext().getPackageManager().getPackageInfo("com.xiaomi.xmsf", 0).versionCode >= 108;
        } catch (PackageManager.NameNotFoundException unused) {
            return false;
        }
    }

    public static boolean a(Context context, String str) {
        File file = new File(str);
        long maxFileLength = com.xiaomi.clientreport.manager.a.a(context).a().getMaxFileLength();
        if (file.exists()) {
            try {
                if (file.length() > maxFileLength) {
                    return false;
                }
            } catch (Exception e) {
                com.xiaomi.channel.commonutils.logger.b.a(e);
                return false;
            }
        } else {
            ab.a(file);
        }
        return true;
    }

    public static byte[] a(String str) {
        byte[] bArrCopyOf = Arrays.copyOf(bm.a(str), 16);
        bArrCopyOf[0] = 68;
        bArrCopyOf[15] = 84;
        return bArrCopyOf;
    }

    public static File[] a(Context context, String str) {
        File externalFilesDir = context.getExternalFilesDir(str);
        if (externalFilesDir != null) {
            return externalFilesDir.listFiles(new bv());
        }
        return null;
    }
}
