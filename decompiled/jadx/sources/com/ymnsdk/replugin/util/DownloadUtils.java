package com.ymnsdk.replugin.util;

import android.app.Activity;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.github.sisong.ApkPatch;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.download.CodecUtil;
import com.ymnsdk.replugin.entity.PluginInfo;
import com.ymnsdk.replugin.event.other.DownloadErrorCodeEvent;
import com.ymnsdk.replugin.listener.MergeCallback;
import com.ymnsdk.replugin.patch.download.DownloadFileInfo;
import com.ymnsdk.replugin.patch.download.DownloadFileState;
import com.ymnsdk.replugin.patch.download.DownloadState;
import com.ymnsdk.replugin.trace.PluginTraceManager;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class DownloadUtils {
    public static volatile Map<String, Boolean> downloadRecord = new HashMap();
    public static volatile boolean isUserDownload = false;
    private static final String mPluginDir = "plugin";
    public static volatile boolean mergeing;
    private String mWriteablePath;

    public static DownloadUtils getInstance() {
        return Factory.instance;
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private static final class Factory {
        private static final DownloadUtils instance = new DownloadUtils();

        private Factory() {
        }
    }

    public void setWriteablePath(String str) {
        try {
            File file = new File(str);
            if (!file.exists()) {
                file.mkdirs();
            }
            this.mWriteablePath = file.getCanonicalPath();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public String getWriteablePath() {
        return this.mWriteablePath;
    }

    public String getConfigPath() {
        return this.mWriteablePath + File.separator + "sync.cfg";
    }

    public long getCurrentData() {
        return System.currentTimeMillis();
    }

    public boolean renameFile(String str, String str2) {
        if (str.equals(str2)) {
            return true;
        }
        File file = new File(str);
        if (!file.exists()) {
            return false;
        }
        File file2 = new File(str2);
        if (file2.exists()) {
            file2.delete();
        }
        return file.renameTo(file2);
    }

    public boolean removeFile(String str) {
        File file = new File(str);
        if (file.exists()) {
            file.delete();
        }
        return !file.exists();
    }

    public void removeRecursive(String str) {
        File file = new File(str);
        if (file.isDirectory()) {
            for (String str2 : file.list()) {
                removeRecursive(str + File.separator + str2);
            }
        }
        file.delete();
    }

    public boolean moveFile(String str, String str2) throws Throwable {
        if (str.equals(str2)) {
            return true;
        }
        File file = new File(str);
        File file2 = new File(str2);
        try {
            if (!file.exists()) {
                return false;
            }
            if (file2.exists()) {
                file2.delete();
            }
            checkDirectories(file2.getParent());
            copy(str, str2);
            file.delete();
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public void checkDirectories(String str) {
        File file = new File(str);
        if (file.isDirectory()) {
            return;
        }
        File file2 = new File(file.getParent());
        if (file2.exists()) {
            return;
        }
        file2.mkdirs();
    }

    public String getPluginPath(String str, String str2) {
        String str3 = str + File.separator + "plugin" + str2;
        File file = new File(str3);
        if (!file.exists()) {
            file.mkdir();
        }
        return str3;
    }

    public String joinPluginPath(String str) {
        String str2 = this.mWriteablePath + File.separator + "plugin";
        checkDirectories(str2);
        return str2 + File.separator + str;
    }

    public void mergeApk(final Activity activity, final String str, final String str2, final String str3, final MergeCallback mergeCallback) {
        PluginTraceManager.getInstance();
        if (mergeing) {
            mergeCallback.mergeFail("合并中");
            return;
        }
        mergeing = true;
        final String strJoinPluginPath = joinPluginPath(str + "old.apk");
        final String strJoinPluginPath2 = joinPluginPath(str + "new.apk");
        final String strJoinPluginPath3 = joinPluginPath(str + "workspace");
        if (new File(strJoinPluginPath3).exists()) {
            ResourceUtil.deleteDirectory(strJoinPluginPath3);
        }
        new Thread(new Runnable() { // from class: com.ymnsdk.replugin.util.DownloadUtils.1
            @Override // java.lang.Runnable
            public void run() {
                try {
                    if (LogUtils.isLogOpen()) {
                        ApkPatch.initApkDiff(true, ApkPatch.isDebug);
                    } else {
                        ApkPatch.initApkDiff(false, ApkPatch.isDebug);
                    }
                    DownloadUtils.this.handleMergeApk(strJoinPluginPath, str2, strJoinPluginPath2, strJoinPluginPath3, str3, mergeCallback, activity, str, str2);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }).start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleMergeApk(String str, String str2, String str3, String str4, String str5, MergeCallback mergeCallback, Activity activity, String str6, String str7) {
        int iPatch = ApkPatch.patch(str, str2, str3, 1000000000L, str4, 5);
        if (iPatch == 0) {
            PluginTraceManager.getInstance().deleteMergeApkLog();
        }
        if (checkMd5(str3, str5)) {
            File file = new File(str3);
            File file2 = new File(str2);
            File file3 = new File(str);
            file3.delete();
            file.renameTo(file3);
            file2.delete();
            ResourceUtil.deleteDirectory(str4);
            DownloadState.remerge_num = 0;
            mergeCallback.mergeSuccess();
            mergeing = false;
            return;
        }
        new File(str3).delete();
        ResourceUtil.deleteDirectory(str4);
        if (DownloadState.remerge_num < 3) {
            DownloadState.remerge_num++;
            mergeing = false;
            mergeApk(activity, str6, str7, str5, mergeCallback);
        } else {
            mergeing = false;
            clearPluginResource(str6, str, str2);
            mergeCallback.mergeFail("合并错误码为:" + iPatch);
        }
    }

    public boolean checkMd5(String str, String str2) {
        return new File(str).exists() && CodecUtil.md5File(str).equals(str2);
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x0062 A[Catch: Exception -> 0x0065, TRY_LEAVE, TryCatch #6 {Exception -> 0x0065, blocks: (B:41:0x005d, B:43:0x0062), top: B:51:0x005d }] */
    /* JADX WARN: Removed duplicated region for block: B:51:0x005d A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void copy(java.lang.String r6, java.lang.String r7) throws java.lang.Throwable {
        /*
            r5 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r6)
            boolean r0 = r0.exists()
            if (r0 != 0) goto Lc
            return
        Lc:
            r0 = 0
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4c
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L49 java.lang.Exception -> L4c
            java.io.FileOutputStream r6 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L45
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L45
            int r7 = r1.available()     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            int r0 = r7 % 1024
            r2 = 1024(0x400, float:1.435E-42)
            if (r0 != 0) goto L23
            int r7 = r7 / r2
            goto L26
        L23:
            int r7 = r7 / r2
            int r7 = r7 + 1
        L26:
            byte[] r0 = new byte[r2]     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            r2 = 0
            r3 = r2
        L2a:
            if (r3 >= r7) goto L36
            int r4 = r1.read(r0)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            r6.write(r0, r2, r4)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            int r3 = r3 + 1
            goto L2a
        L36:
            r1.close()     // Catch: java.lang.Exception -> L59
        L39:
            r6.close()     // Catch: java.lang.Exception -> L59
            goto L59
        L3d:
            r7 = move-exception
            goto L43
        L3f:
            r7 = move-exception
            goto L47
        L41:
            r7 = move-exception
            r6 = r0
        L43:
            r0 = r1
            goto L5b
        L45:
            r7 = move-exception
            r6 = r0
        L47:
            r0 = r1
            goto L4e
        L49:
            r7 = move-exception
            r6 = r0
            goto L5b
        L4c:
            r7 = move-exception
            r6 = r0
        L4e:
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L56
            r0.close()     // Catch: java.lang.Exception -> L59
        L56:
            if (r6 == 0) goto L59
            goto L39
        L59:
            return
        L5a:
            r7 = move-exception
        L5b:
            if (r0 == 0) goto L60
            r0.close()     // Catch: java.lang.Exception -> L65
        L60:
            if (r6 == 0) goto L65
            r6.close()     // Catch: java.lang.Exception -> L65
        L65:
            throw r7
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ymnsdk.replugin.util.DownloadUtils.copy(java.lang.String, java.lang.String):void");
    }

    public String getFileRange(File file) {
        return String.format(Locale.CHINESE, "bytes=%d-", Long.valueOf(file.length()));
    }

    public List<String> addMd5(PluginInfo pluginInfo, String str) {
        for (int i = 0; i < pluginInfo.getMd5List().size(); i++) {
            if (pluginInfo.getMd5List().get(i).equals(str)) {
                return pluginInfo.getMd5List();
            }
        }
        List<String> md5List = pluginInfo.getMd5List();
        md5List.add(str);
        return md5List;
    }

    public boolean checkMemory(long j, double d) {
        Log.e(HostConstant.ymn, "到了校验存储");
        long sDAvailableSize = ApkUtils.getSDAvailableSize();
        Log.e(HostConstant.ymn, "可用大小为:" + sDAvailableSize);
        long jLongValue = new Double(d * ((double) j)).longValue();
        Log.e(HostConstant.ymn, "需要下载的大小为:" + jLongValue);
        return sDAvailableSize >= jLongValue + 1;
    }

    public boolean checkSilentMemory(long j, double d) {
        Log.e(HostConstant.ymn, "到了静默下载校验存储");
        long sDAvailableSize = ApkUtils.getSDAvailableSize();
        long sDTotailSize = ApkUtils.getSDTotailSize();
        Log.e(HostConstant.ymn, "可用大小为:" + sDAvailableSize);
        Log.e(HostConstant.ymn, "总大小为:" + sDTotailSize);
        long j2 = sDAvailableSize - j;
        Log.e(HostConstant.ymn, "下载后剩余的大小为:" + j2);
        long jLongValue = new Double(d * ((double) sDTotailSize)).longValue();
        Log.e(HostConstant.ymn, "下载后限制的大小" + jLongValue);
        return j2 >= jLongValue;
    }

    public long getDownSize(String str, long j, String str2, String str3) {
        Log.e(HostConstant.ymn, "原始包大小为：" + j);
        DownloadFileState.getInstance().syncDownloadStatus(str, str2, str3);
        DownloadFileInfo downloadFileInfo = DownloadFileState.getInstance().getDownloadFileInfo(str);
        if (downloadFileInfo == null) {
            return j;
        }
        Log.e(HostConstant.ymn, "需要下载的大小为：" + (j - downloadFileInfo.getSavedSize()));
        return j - downloadFileInfo.getSavedSize();
    }

    public void postDownloadErrorEvent(Activity activity, DownloadFileInfo downloadFileInfo) {
        ArrayList<Integer> roadmap = downloadFileInfo.getRoadmap();
        ArrayList<Integer> arrayList = new ArrayList<>();
        if (roadmap == null || roadmap.size() == 0) {
            return;
        }
        arrayList.add(roadmap.get(0));
        for (int i = 1; i < roadmap.size(); i++) {
            if (i % 100 == 0) {
                postOneDownloadErrorEvent(activity, arrayList);
                arrayList.clear();
            }
            arrayList.add(roadmap.get(i));
        }
    }

    public void postOneDownloadErrorEvent(Activity activity, ArrayList<Integer> arrayList) {
        PostdataLib.getInstance().postToSeperllita(new DownloadErrorCodeEvent(activity, GsonUtils.getInstance().toJson(arrayList)));
    }

    public boolean isExperiencedDownload(String str) {
        if (!downloadRecord.containsKey(str) || !downloadRecord.get(str).booleanValue()) {
            return false;
        }
        downloadRecord.put(str, false);
        return true;
    }

    public boolean hasOldApk(String str) {
        String strJoinPluginPath = getInstance().joinPluginPath(str + "old.apk");
        if (!new File(strJoinPluginPath).exists()) {
            return false;
        }
        Map<String, PluginInfo> localDownedPlugin = SharedPerferencesDataUtils.getInstance().getLocalDownedPlugin();
        if (localDownedPlugin.containsKey(str)) {
            return checkMd5(strJoinPluginPath, localDownedPlugin.get(str).getFile_md5());
        }
        return false;
    }

    public void clearPluginResource(String str, String str2, String str3) {
        File file = new File(str2);
        File file2 = new File(str3);
        Map<String, PluginInfo> localGetPlugin = SharedPerferencesDataUtils.getInstance().getLocalGetPlugin();
        if (localGetPlugin.containsKey(str)) {
            File file3 = new File(getInstance().joinPluginPath(localGetPlugin.get(str).getFile_md5()));
            if (file.exists()) {
                file.delete();
            }
            if (file2.exists()) {
                file2.delete();
            }
            if (file3.exists()) {
                file3.delete();
            }
            File file4 = new File(joinPluginPath(""));
            if (file4.exists() && file4.isDirectory()) {
                File[] fileArrListFiles = file4.listFiles();
                for (File file5 : fileArrListFiles) {
                    if (!file5.exists()) {
                        return;
                    }
                    if (file5.getName().endsWith(".cache")) {
                        file5.delete();
                    }
                }
            }
        }
    }

    public void clrarPatchResource(String str, String str2, DownloadFileInfo downloadFileInfo) {
        String saveCachePath;
        Map<String, PluginInfo> localSilentDowningPlugin = SharedPerferencesDataUtils.getInstance().getLocalSilentDowningPlugin();
        if (localSilentDowningPlugin != null && localSilentDowningPlugin.containsKey(str)) {
            localSilentDowningPlugin.remove(str);
        }
        SharedPerferencesDataUtils.getInstance().putLocalSilentDowningPlugin(localSilentDowningPlugin);
        Map<String, PluginInfo> localUserDowningPlugin = SharedPerferencesDataUtils.getInstance().getLocalUserDowningPlugin();
        if (localUserDowningPlugin != null && localUserDowningPlugin.containsKey(str)) {
            localUserDowningPlugin.remove(str);
        }
        SharedPerferencesDataUtils.getInstance().putLocalUserDowningPlugin(localUserDowningPlugin);
        DownloadFileState.getInstance().removeTaskHistory(str2);
        if (downloadFileInfo == null || (saveCachePath = downloadFileInfo.getSaveCachePath()) == null || saveCachePath.isEmpty()) {
            return;
        }
        new File(saveCachePath).delete();
    }
}
