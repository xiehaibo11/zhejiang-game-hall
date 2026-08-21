package com.ymnsdk.replugin.util;

import android.app.Activity;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.event.installplugin.InstallInterruptEvent;
import com.ymnsdk.replugin.event.installplugin.MergeInterruptEvent;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class LogUtils {
    private static final int OPTIMIZATION_SIZE = 4096;
    public static String REPLUGIN_LOG_SWITCH = "replugin_log_switch";
    private static volatile int isOpenLog;

    public static void setIsOpenLog(int i) {
        isOpenLog = i;
        SharedPreferencesUtils.setIsLog(i);
    }

    public static boolean isLogOpen() {
        return isOpenLog != 0;
    }

    public static String getDiffPatchLogPath(Activity activity) {
        return activity.getFilesDir().getAbsolutePath() + File.separator + "replugin_log" + File.separator + "diff_patch" + File.separator + "error_log";
    }

    public static byte[] readFile(File file) {
        try {
            if (file.exists()) {
                return readInputStream(new FileInputStream(file));
            }
            return null;
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static byte[] readInputStream(InputStream inputStream) throws Throwable {
        Throwable th;
        ByteArrayOutputStream byteArrayOutputStream;
        ByteArrayOutputStream byteArrayOutputStream2 = null;
        try {
            try {
                byteArrayOutputStream = new ByteArrayOutputStream();
                try {
                    byte[] bArr = new byte[4096];
                    while (true) {
                        int i = inputStream.read(bArr);
                        if (i == -1) {
                            break;
                        }
                        byteArrayOutputStream.write(bArr, 0, i);
                    }
                    byte[] byteArray = byteArrayOutputStream.toByteArray();
                    try {
                        byteArrayOutputStream.close();
                    } catch (IOException unused) {
                    }
                    try {
                        inputStream.close();
                    } catch (IOException unused2) {
                    }
                    return byteArray;
                } catch (Exception e) {
                    e = e;
                    e.printStackTrace();
                    try {
                        byteArrayOutputStream.close();
                    } catch (IOException unused3) {
                    }
                    try {
                        inputStream.close();
                    } catch (IOException unused4) {
                    }
                    return null;
                }
            } catch (Throwable th2) {
                th = th2;
                try {
                    byteArrayOutputStream2.close();
                } catch (IOException unused5) {
                }
                try {
                    inputStream.close();
                    throw th;
                } catch (IOException unused6) {
                    throw th;
                }
            }
        } catch (Exception e2) {
            e = e2;
            byteArrayOutputStream = null;
        } catch (Throwable th3) {
            th = th3;
            byteArrayOutputStream2.close();
            inputStream.close();
            throw th;
        }
    }

    public static void postInterruptEvent(Activity activity) {
        byte[] file;
        byte[] file2;
        String str = activity.getFilesDir().getAbsolutePath() + File.separator + "handle_plugin_log" + File.separator;
        File file3 = new File(str + "merge_apk_step_log.txt");
        File file4 = new File(str + "install_plugin_step_log.txt");
        if (file3.exists() && (file2 = readFile(file3)) != null) {
            PostdataLib.getInstance().postToSeperllita(new MergeInterruptEvent(activity, new String(file2)));
            file3.delete();
        }
        if (!file4.exists() || (file = readFile(file4)) == null) {
            return;
        }
        PostdataLib.getInstance().postToSeperllita(new InstallInterruptEvent(activity, new String(file)));
        file4.delete();
    }
}
