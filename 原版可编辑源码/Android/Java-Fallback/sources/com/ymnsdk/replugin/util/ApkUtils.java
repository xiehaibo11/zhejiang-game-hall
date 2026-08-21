package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class ApkUtils {
    public ApkUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void copySDFileToAppFiles(android.app.Activity r3, java.lang.String r4, java.lang.String r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            boolean r0 = r0.exists()
            if (r0 != 0) goto L24
            return
        L24:
            r0 = 1024(0x400, float:1.435E-42)
            r1 = 0
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L53
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L50 java.lang.Exception -> L53
            r4 = 0
            java.io.FileOutputStream r1 = r3.openFileOutput(r5, r4)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4c
            byte[] r3 = new byte[r0]     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4c
        L33:
            int r5 = r2.read(r3)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4c
            r0 = -1
            if (r5 == r0) goto L3e
            r1.write(r3, r4, r5)     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4c
            goto L33
        L3e:
            r1.flush()     // Catch: java.lang.Throwable -> L48 java.lang.Exception -> L4c
            r2.close()     // Catch: java.lang.Exception -> L5f
            r1.close()     // Catch: java.lang.Exception -> L5f
            goto L63
        L48:
            r3 = move-exception
            r4 = r1
            r1 = r2
            goto L65
        L4c:
            r3 = move-exception
            r4 = r1
            r1 = r2
            goto L55
        L50:
            r3 = move-exception
            r4 = r1
            goto L65
        L53:
            r3 = move-exception
            r4 = r1
        L55:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L64
            r1.close()     // Catch: java.lang.Exception -> L5f
            r4.close()     // Catch: java.lang.Exception -> L5f
            goto L63
        L5f:
            r3 = move-exception
            r3.printStackTrace()
        L63:
            return
        L64:
            r3 = move-exception
        L65:
            r1.close()     // Catch: java.lang.Exception -> L6c
            r4.close()     // Catch: java.lang.Exception -> L6c
            goto L70
        L6c:
            r4 = move-exception
            r4.printStackTrace()
        L70:
            throw r3
    }

    public static long getSDAvailableSize() {
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()
            android.os.StatFs r1 = new android.os.StatFs
            java.lang.String r0 = r0.getPath()
            r1.<init>(r0)
            int r0 = r1.getBlockSize()
            long r2 = (long) r0
            int r0 = r1.getAvailableBlocks()
            long r0 = (long) r0
            long r2 = r2 * r0
            return r2
    }

    public static long getSDTotailSize() {
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()
            android.os.StatFs r1 = new android.os.StatFs
            java.lang.String r0 = r0.getPath()
            r1.<init>(r0)
            int r0 = r1.getBlockSize()
            long r2 = (long) r0
            int r0 = r1.getBlockCount()
            long r0 = (long) r0
            long r2 = r2 * r0
            return r2
    }

    public static void installLocalApk(android.app.Activity r11, java.lang.String r12, long r13, com.ymnsdk.replugin.listener.InstallPluginStatusListener r15) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r1 = r11.getFilesDir()
            java.lang.String r1 = r1.getAbsolutePath()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "plugin.apk"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            boolean r3 = r2.exists()
            if (r3 == 0) goto L2c
            com.qihoo360.replugin.utils.FileUtils.deleteQuietly(r2)
        L2c:
            copySDFileToAppFiles(r11, r1, r1)
            r1 = 0
            boolean r2 = r2.exists()
            if (r2 == 0) goto L3b
            r1 = 0
            com.qihoo360.replugin.model.PluginInfo r1 = com.qihoo360.replugin.RePlugin.install(r0, r1)
        L3b:
            if (r1 == 0) goto L94
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalGetPlugin()
            boolean r1 = r0.containsKey(r12)
            if (r1 != 0) goto L51
            java.lang.String r11 = "安装 找不到该pluginId"
            r15.onFailure(r11)
            return
        L51:
            java.lang.Object r0 = r0.get(r12)
            com.ymnsdk.replugin.entity.PluginInfo r0 = (com.ymnsdk.replugin.entity.PluginInfo) r0
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r1 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r1.putLocalInstallPlugin(r12, r0)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r7 = new com.ymnsdk.replugin.event.base.BaseEvent
            r3 = 139005(0x21efd, float:1.94787E-40)
            r4 = 0
            java.lang.String r5 = "本地安装成功"
            java.lang.String r6 = ""
            r1 = r7
            r2 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r0.postEvent(r7)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent r10 = new com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent
            r3 = 1044(0x414, float:1.463E-42)
            r6 = 0
            long r1 = java.lang.System.currentTimeMillis()
            long r8 = r1 - r13
            java.lang.String r5 = ""
            java.lang.String r7 = "本地安装成功"
            r1 = r10
            r2 = r11
            r4 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            r0.postToSeperllita(r10)
            r15.onSuccess()
            goto Lcb
        L94:
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r7 = new com.ymnsdk.replugin.event.base.BaseEvent
            r3 = 139005(0x21efd, float:1.94787E-40)
            r4 = -1
            java.lang.String r5 = "info为空，本地安装失败"
            java.lang.String r6 = ""
            r1 = r7
            r2 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r0.postEvent(r7)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent r10 = new com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent
            r3 = 1045(0x415, float:1.464E-42)
            r6 = 0
            long r1 = java.lang.System.currentTimeMillis()
            long r8 = r1 - r13
            java.lang.String r5 = ""
            java.lang.String r7 = "info为空，本地安装失败"
            r1 = r10
            r2 = r11
            r4 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            r0.postToSeperllita(r10)
            java.lang.String r11 = "info为空，安装失败"
            r15.onFailure(r11)
        Lcb:
            return
    }

    public static boolean isLocalApkExist() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r1 = android.os.Environment.getExternalStorageDirectory()
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "plugin.apk"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r0 = r1.exists()
            if (r0 == 0) goto L27
            r0 = 1
            return r0
        L27:
            r0 = 0
            return r0
    }
}
