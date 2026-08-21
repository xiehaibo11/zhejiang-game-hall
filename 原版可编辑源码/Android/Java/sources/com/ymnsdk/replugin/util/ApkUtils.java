package com.ymnsdk.replugin.util;

import android.app.Activity;
import android.os.Environment;
import android.os.StatFs;
import com.qihoo360.replugin.RePlugin;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.entity.PluginInfo;
import com.ymnsdk.replugin.event.base.BaseEvent;
import com.ymnsdk.replugin.event.base.EventCode;
import com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent;
import com.ymnsdk.replugin.listener.InstallPluginStatusListener;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class ApkUtils {
    public static void copySDFileToAppFiles(Activity activity, String str, String str2) throws Throwable {
        FileOutputStream fileOutputStream;
        FileInputStream fileInputStream;
        byte[] bArr;
        String str3 = Environment.getExternalStorageDirectory() + File.separator + str;
        if (new File(str3).exists()) {
            FileInputStream fileInputStream2 = null;
            fileOutputStreamOpenFileOutput = null;
            FileOutputStream fileOutputStreamOpenFileOutput = null;
            fileInputStream2 = null;
            try {
                try {
                    fileInputStream = new FileInputStream(str3);
                } catch (Exception e) {
                    e.printStackTrace();
                    return;
                }
            } catch (Exception e2) {
                e = e2;
                fileOutputStream = null;
            } catch (Throwable th) {
                th = th;
                fileOutputStream = null;
            }
            try {
                fileOutputStreamOpenFileOutput = activity.openFileOutput(str2, 0);
                bArr = new byte[1024];
            } catch (Exception e3) {
                e = e3;
                fileOutputStream = fileOutputStreamOpenFileOutput;
                fileInputStream2 = fileInputStream;
                try {
                    e.printStackTrace();
                    fileInputStream2.close();
                    fileOutputStream.close();
                } catch (Throwable th2) {
                    th = th2;
                    try {
                        fileInputStream2.close();
                        fileOutputStream.close();
                    } catch (Exception e4) {
                        e4.printStackTrace();
                    }
                    throw th;
                }
            } catch (Throwable th3) {
                th = th3;
                fileOutputStream = fileOutputStreamOpenFileOutput;
                fileInputStream2 = fileInputStream;
                fileInputStream2.close();
                fileOutputStream.close();
                throw th;
            }
            while (true) {
                int i = fileInputStream.read(bArr);
                if (i == -1) {
                    break;
                } else {
                    fileOutputStreamOpenFileOutput.write(bArr, 0, i);
                }
            }
            fileOutputStreamOpenFileOutput.flush();
            fileInputStream.close();
            fileOutputStreamOpenFileOutput.close();
        }
    }

    public static boolean isLocalApkExist() {
        StringBuilder sb = new StringBuilder();
        sb.append(Environment.getExternalStorageDirectory());
        sb.append(File.separator);
        sb.append("plugin.apk");
        return new File(sb.toString()).exists();
    }

    public static void installLocalApk(Activity activity, String str, long j, InstallPluginStatusListener installPluginStatusListener) throws Throwable {
        String str2 = activity.getFilesDir().getAbsolutePath() + File.separator + "plugin.apk";
        File file = new File(str2);
        if (file.exists()) {
            com.qihoo360.replugin.utils.FileUtils.deleteQuietly(file);
        }
        copySDFileToAppFiles(activity, "plugin.apk", "plugin.apk");
        if ((file.exists() ? RePlugin.install(str2, false) : null) != null) {
            Map<String, PluginInfo> localGetPlugin = SharedPerferencesDataUtils.getInstance().getLocalGetPlugin();
            if (!localGetPlugin.containsKey(str)) {
                installPluginStatusListener.onFailure("安装 找不到该pluginId");
                return;
            }
            SharedPerferencesDataUtils.getInstance().putLocalInstallPlugin(str, localGetPlugin.get(str));
            PostdataLib.getInstance().postEvent(new BaseEvent(activity, EventCode.install_plugin_response_event, 0, "本地安装成功", ""));
            PostdataLib.getInstance().postToSeperllita(new InstallPluginResponseEvent(activity, 1044, str, "", 0, "本地安装成功", System.currentTimeMillis() - j));
            installPluginStatusListener.onSuccess();
            return;
        }
        PostdataLib.getInstance().postEvent(new BaseEvent(activity, EventCode.install_plugin_response_event, -1, "info为空，本地安装失败", ""));
        PostdataLib.getInstance().postToSeperllita(new InstallPluginResponseEvent(activity, 1045, str, "", 0, "info为空，本地安装失败", System.currentTimeMillis() - j));
        installPluginStatusListener.onFailure("info为空，安装失败");
    }

    public static long getSDAvailableSize() {
        StatFs statFs = new StatFs(Environment.getExternalStorageDirectory().getPath());
        return ((long) statFs.getBlockSize()) * ((long) statFs.getAvailableBlocks());
    }

    public static long getSDTotailSize() {
        StatFs statFs = new StatFs(Environment.getExternalStorageDirectory().getPath());
        return ((long) statFs.getBlockSize()) * ((long) statFs.getBlockCount());
    }
}
