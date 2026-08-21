package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DownloadUtils {
    public static volatile java.util.Map<java.lang.String, java.lang.Boolean> downloadRecord = null;
    public static volatile boolean isUserDownload = false;
    private static final java.lang.String mPluginDir = "plugin";
    public static volatile boolean mergeing;
    private java.lang.String mWriteablePath;


    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private static final class Factory {
        private static final com.ymnsdk.replugin.util.DownloadUtils instance = null;

        static {
                com.ymnsdk.replugin.util.DownloadUtils r0 = new com.ymnsdk.replugin.util.DownloadUtils
                r0.<init>()
                com.ymnsdk.replugin.util.DownloadUtils.Factory.instance = r0
                return
        }

        private Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.ymnsdk.replugin.util.DownloadUtils access$000() {
                com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.Factory.instance
                return r0
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.ymnsdk.replugin.util.DownloadUtils.downloadRecord = r0
            return
    }

    public DownloadUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static void access$100(com.ymnsdk.replugin.util.DownloadUtils r0, java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.ymnsdk.replugin.listener.MergeCallback r6, android.app.Activity r7, java.lang.String r8, java.lang.String r9) {
            r0.handleMergeApk(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public static com.ymnsdk.replugin.util.DownloadUtils getInstance() {
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.Factory.access$000()
            return r0
    }

    private void handleMergeApk(java.lang.String r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, java.lang.String r19, com.ymnsdk.replugin.listener.MergeCallback r20, android.app.Activity r21, java.lang.String r22, java.lang.String r23) {
            r14 = this;
            r6 = r14
            r0 = r15
            r1 = r16
            r2 = r17
            r10 = 1000000000(0x3b9aca00, double:4.94065646E-315)
            r13 = 5
            r7 = r15
            r8 = r16
            r9 = r17
            r12 = r18
            int r3 = com.github.sisong.ApkPatch.patch(r7, r8, r9, r10, r12, r13)
            if (r3 != 0) goto L1e
            com.ymnsdk.replugin.trace.PluginTraceManager r4 = com.ymnsdk.replugin.trace.PluginTraceManager.getInstance()
            r4.deleteMergeApkLog()
        L1e:
            r4 = r19
            boolean r5 = r14.checkMd5(r2, r4)
            r7 = 0
            if (r5 == 0) goto L4a
            java.io.File r3 = new java.io.File
            r3.<init>(r2)
            java.io.File r2 = new java.io.File
            r2.<init>(r1)
            java.io.File r1 = new java.io.File
            r1.<init>(r15)
            r1.delete()
            r3.renameTo(r1)
            r2.delete()
            com.ymnsdk.replugin.util.ResourceUtil.deleteDirectory(r18)
            com.ymnsdk.replugin.patch.download.DownloadState.remerge_num = r7
            r20.mergeSuccess()
            com.ymnsdk.replugin.util.DownloadUtils.mergeing = r7
            goto L8e
        L4a:
            java.io.File r5 = new java.io.File
            r5.<init>(r2)
            r5.delete()
            com.ymnsdk.replugin.util.ResourceUtil.deleteDirectory(r18)
            int r2 = com.ymnsdk.replugin.patch.download.DownloadState.remerge_num
            r5 = 3
            if (r2 >= r5) goto L71
            int r0 = com.ymnsdk.replugin.patch.download.DownloadState.remerge_num
            int r0 = r0 + 1
            com.ymnsdk.replugin.patch.download.DownloadState.remerge_num = r0
            com.ymnsdk.replugin.util.DownloadUtils.mergeing = r7
            r0 = r14
            r1 = r21
            r2 = r22
            r3 = r23
            r4 = r19
            r5 = r20
            r0.mergeApk(r1, r2, r3, r4, r5)
            goto L8e
        L71:
            com.ymnsdk.replugin.util.DownloadUtils.mergeing = r7
            r2 = r22
            r14.clearPluginResource(r2, r15, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "合并错误码为:"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1 = r20
            r1.mergeFail(r0)
        L8e:
            return
    }

    public java.util.List<java.lang.String> addMd5(com.ymnsdk.replugin.entity.PluginInfo r3, java.lang.String r4) {
            r2 = this;
            r0 = 0
        L1:
            java.util.List r1 = r3.getMd5List()
            int r1 = r1.size()
            if (r0 >= r1) goto L23
            java.util.List r1 = r3.getMd5List()
            java.lang.Object r1 = r1.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = r1.equals(r4)
            if (r1 == 0) goto L20
            java.util.List r3 = r3.getMd5List()
            return r3
        L20:
            int r0 = r0 + 1
            goto L1
        L23:
            java.util.List r3 = r3.getMd5List()
            r3.add(r4)
            return r3
    }

    public void checkDirectories(java.lang.String r2) {
            r1 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r2 = r0.isDirectory()
            if (r2 == 0) goto Lc
            return
        Lc:
            java.io.File r2 = new java.io.File
            java.lang.String r0 = r0.getParent()
            r2.<init>(r0)
            boolean r0 = r2.exists()
            if (r0 != 0) goto L1e
            r2.mkdirs()
        L1e:
            return
    }

    public boolean checkMd5(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r0 = r0.exists()
            r1 = 0
            if (r0 != 0) goto Ld
            return r1
        Ld:
            java.lang.String r3 = com.ymnsdk.replugin.download.CodecUtil.md5File(r3)
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L19
            r3 = 1
            return r3
        L19:
            return r1
    }

    public boolean checkMemory(long r6, double r8) {
            r5 = this;
            java.lang.String r0 = "ymn"
            java.lang.String r1 = "到了校验存储"
            android.util.Log.e(r0, r1)
            long r1 = com.ymnsdk.replugin.util.ApkUtils.getSDAvailableSize()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "可用大小为:"
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            android.util.Log.e(r0, r3)
            double r6 = (double) r6
            double r8 = r8 * r6
            java.lang.Double r6 = new java.lang.Double
            r6.<init>(r8)
            long r6 = r6.longValue()
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "需要下载的大小为:"
            r8.append(r9)
            r8.append(r6)
            java.lang.String r8 = r8.toString()
            android.util.Log.e(r0, r8)
            r8 = 1
            long r6 = r6 + r8
            int r6 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r6 < 0) goto L47
            r6 = 1
            return r6
        L47:
            r6 = 0
            return r6
    }

    public boolean checkSilentMemory(long r8, double r10) {
            r7 = this;
            java.lang.String r0 = "ymn"
            java.lang.String r1 = "到了静默下载校验存储"
            android.util.Log.e(r0, r1)
            long r1 = com.ymnsdk.replugin.util.ApkUtils.getSDAvailableSize()
            long r3 = com.ymnsdk.replugin.util.ApkUtils.getSDTotailSize()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "可用大小为:"
            r5.append(r6)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            android.util.Log.e(r0, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "总大小为:"
            r5.append(r6)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            android.util.Log.e(r0, r5)
            long r1 = r1 - r8
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "下载后剩余的大小为:"
            r8.append(r9)
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            android.util.Log.e(r0, r8)
            double r8 = (double) r3
            double r10 = r10 * r8
            java.lang.Double r8 = new java.lang.Double
            r8.<init>(r10)
            long r8 = r8.longValue()
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "下载后限制的大小"
            r10.append(r11)
            r10.append(r8)
            java.lang.String r10 = r10.toString()
            android.util.Log.e(r0, r10)
            int r8 = (r1 > r8 ? 1 : (r1 == r8 ? 0 : -1))
            if (r8 < 0) goto L71
            r8 = 1
            return r8
        L71:
            r8 = 0
            return r8
    }

    public void clearPluginResource(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            java.io.File r4 = new java.io.File
            r4.<init>(r5)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r5 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r5 = r5.getLocalGetPlugin()
            boolean r1 = r5.containsKey(r3)
            if (r1 != 0) goto L19
            return
        L19:
            java.lang.Object r3 = r5.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r3 = (com.ymnsdk.replugin.entity.PluginInfo) r3
            com.ymnsdk.replugin.util.DownloadUtils r5 = getInstance()
            java.lang.String r3 = r3.getFile_md5()
            java.lang.String r3 = r5.joinPluginPath(r3)
            java.io.File r5 = new java.io.File
            r5.<init>(r3)
            boolean r3 = r0.exists()
            if (r3 == 0) goto L39
            r0.delete()
        L39:
            boolean r3 = r4.exists()
            if (r3 == 0) goto L42
            r4.delete()
        L42:
            boolean r3 = r5.exists()
            if (r3 == 0) goto L4b
            r5.delete()
        L4b:
            java.lang.String r3 = ""
            java.lang.String r3 = r2.joinPluginPath(r3)
            java.io.File r4 = new java.io.File
            r4.<init>(r3)
            boolean r3 = r4.exists()
            if (r3 == 0) goto L85
            boolean r3 = r4.isDirectory()
            if (r3 == 0) goto L85
            java.io.File[] r3 = r4.listFiles()
            r4 = 0
        L67:
            int r5 = r3.length
            if (r4 >= r5) goto L85
            r5 = r3[r4]
            boolean r0 = r5.exists()
            if (r0 != 0) goto L73
            return
        L73:
            java.lang.String r0 = r5.getName()
            java.lang.String r1 = ".cache"
            boolean r0 = r0.endsWith(r1)
            if (r0 == 0) goto L82
            r5.delete()
        L82:
            int r4 = r4 + 1
            goto L67
        L85:
            return
    }

    public void clrarPatchResource(java.lang.String r3, java.lang.String r4, com.ymnsdk.replugin.patch.download.DownloadFileInfo r5) {
            r2 = this;
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalSilentDowningPlugin()
            if (r0 == 0) goto L13
            boolean r1 = r0.containsKey(r3)
            if (r1 == 0) goto L13
            r0.remove(r3)
        L13:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r1 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r1.putLocalSilentDowningPlugin(r0)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalUserDowningPlugin()
            if (r0 == 0) goto L2d
            boolean r1 = r0.containsKey(r3)
            if (r1 == 0) goto L2d
            r0.remove(r3)
        L2d:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r3 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r3.putLocalUserDowningPlugin(r0)
            com.ymnsdk.replugin.patch.download.DownloadFileState r3 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r3.removeTaskHistory(r4)
            if (r5 == 0) goto L53
            java.lang.String r3 = r5.getSaveCachePath()
            if (r3 == 0) goto L53
            boolean r4 = r3.isEmpty()
            if (r4 == 0) goto L4a
            goto L53
        L4a:
            java.io.File r4 = new java.io.File
            r4.<init>(r3)
            r4.delete()
        L53:
            return
    }

    public void copy(java.lang.String r6, java.lang.String r7) {
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
    }

    public java.lang.String getConfigPath() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.mWriteablePath
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "sync.cfg"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public long getCurrentData() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            return r0
    }

    public long getDownSize(java.lang.String r5, long r6, java.lang.String r8, java.lang.String r9) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "原始包大小为："
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ymn"
            android.util.Log.e(r1, r0)
            com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r0.syncDownloadStatus(r5, r8, r9)
            com.ymnsdk.replugin.patch.download.DownloadFileState r8 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r5 = r8.getDownloadFileInfo(r5)
            if (r5 == 0) goto L46
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "需要下载的大小为："
            r8.append(r9)
            long r2 = r5.getSavedSize()
            long r2 = r6 - r2
            r8.append(r2)
            java.lang.String r8 = r8.toString()
            android.util.Log.e(r1, r8)
            long r8 = r5.getSavedSize()
            long r6 = r6 - r8
        L46:
            return r6
    }

    public java.lang.String getFileRange(java.io.File r5) {
            r4 = this;
            java.util.Locale r0 = java.util.Locale.CHINESE
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            long r2 = r5.length()
            java.lang.Long r5 = java.lang.Long.valueOf(r2)
            r2 = 0
            r1[r2] = r5
            java.lang.String r5 = "bytes=%d-"
            java.lang.String r5 = java.lang.String.format(r0, r5, r1)
            return r5
    }

    public java.lang.String getPluginPath(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = java.io.File.separator
            r0.append(r2)
            java.lang.String r2 = "plugin"
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            java.io.File r3 = new java.io.File
            r3.<init>(r2)
            boolean r0 = r3.exists()
            if (r0 != 0) goto L27
            r3.mkdir()
        L27:
            return r2
    }

    public java.lang.String getWriteablePath() {
            r1 = this;
            java.lang.String r0 = r1.mWriteablePath
            return r0
    }

    public boolean hasOldApk(java.lang.String r5) {
            r4 = this;
            com.ymnsdk.replugin.util.DownloadUtils r0 = getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r2 = "old.apk"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = r0.joinPluginPath(r1)
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r1 = r1.exists()
            r2 = 0
            if (r1 != 0) goto L26
            return r2
        L26:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r1 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r1 = r1.getLocalDownedPlugin()
            boolean r3 = r1.containsKey(r5)
            if (r3 == 0) goto L43
            java.lang.Object r5 = r1.get(r5)
            com.ymnsdk.replugin.entity.PluginInfo r5 = (com.ymnsdk.replugin.entity.PluginInfo) r5
            java.lang.String r5 = r5.getFile_md5()
            boolean r5 = r4.checkMd5(r0, r5)
            return r5
        L43:
            return r2
    }

    public boolean isExperiencedDownload(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.ymnsdk.replugin.util.DownloadUtils.downloadRecord
            boolean r0 = r0.containsKey(r3)
            r1 = 0
            if (r0 == 0) goto L22
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.ymnsdk.replugin.util.DownloadUtils.downloadRecord
            java.lang.Object r0 = r0.get(r3)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L22
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.ymnsdk.replugin.util.DownloadUtils.downloadRecord
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.put(r3, r1)
            r3 = 1
            return r3
        L22:
            return r1
    }

    public java.lang.String joinPluginPath(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.mWriteablePath
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "plugin"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.checkDirectories(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = java.io.File.separator
            r1.append(r0)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            return r3
    }

    public void mergeApk(android.app.Activity r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, com.ymnsdk.replugin.listener.MergeCallback r19) {
            r14 = this;
            r11 = r14
            r9 = r16
            com.ymnsdk.replugin.trace.PluginTraceManager.getInstance()
            boolean r0 = com.ymnsdk.replugin.util.DownloadUtils.mergeing
            if (r0 == 0) goto L12
            java.lang.String r0 = "合并中"
            r7 = r19
            r7.mergeFail(r0)
            return
        L12:
            r7 = r19
            r0 = 1
            com.ymnsdk.replugin.util.DownloadUtils.mergeing = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r9)
            java.lang.String r1 = "old.apk"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = r14.joinPluginPath(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r9)
            java.lang.String r1 = "new.apk"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r4 = r14.joinPluginPath(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r9)
            java.lang.String r1 = "workspace"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r5 = r14.joinPluginPath(r0)
            java.io.File r0 = new java.io.File
            r0.<init>(r5)
            boolean r0 = r0.exists()
            if (r0 == 0) goto L64
            com.ymnsdk.replugin.util.ResourceUtil.deleteDirectory(r5)
        L64:
            java.lang.Thread r12 = new java.lang.Thread
            com.ymnsdk.replugin.util.DownloadUtils$1 r13 = new com.ymnsdk.replugin.util.DownloadUtils$1
            r0 = r13
            r1 = r14
            r3 = r17
            r6 = r18
            r7 = r19
            r8 = r15
            r9 = r16
            r10 = r17
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            r12.<init>(r13)
            r12.start()
            return
    }

    public boolean moveFile(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            boolean r0 = r6.equals(r7)
            r1 = 1
            if (r0 == 0) goto L8
            return r1
        L8:
            java.io.File r0 = new java.io.File
            r0.<init>(r6)
            java.io.File r2 = new java.io.File
            r2.<init>(r7)
            r3 = 0
            boolean r4 = r0.exists()     // Catch: java.lang.Exception -> L31
            if (r4 != 0) goto L1a
            return r3
        L1a:
            boolean r4 = r2.exists()     // Catch: java.lang.Exception -> L31
            if (r4 == 0) goto L23
            r2.delete()     // Catch: java.lang.Exception -> L31
        L23:
            java.lang.String r2 = r2.getParent()     // Catch: java.lang.Exception -> L31
            r5.checkDirectories(r2)     // Catch: java.lang.Exception -> L31
            r5.copy(r6, r7)     // Catch: java.lang.Exception -> L31
            r0.delete()     // Catch: java.lang.Exception -> L31
            return r1
        L31:
            r6 = move-exception
            r6.printStackTrace()
            return r3
    }

    public void postDownloadErrorEvent(android.app.Activity r4, com.ymnsdk.replugin.patch.download.DownloadFileInfo r5) {
            r3 = this;
            java.util.ArrayList r5 = r5.getRoadmap()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r5 == 0) goto L35
            int r1 = r5.size()
            if (r1 != 0) goto L12
            goto L35
        L12:
            r1 = 0
            java.lang.Object r1 = r5.get(r1)
            r0.add(r1)
            r1 = 1
        L1b:
            int r2 = r5.size()
            if (r1 >= r2) goto L35
            int r2 = r1 % 100
            if (r2 != 0) goto L2b
            r3.postOneDownloadErrorEvent(r4, r0)
            r0.clear()
        L2b:
            java.lang.Object r2 = r5.get(r1)
            r0.add(r2)
            int r1 = r1 + 1
            goto L1b
        L35:
            return
    }

    public void postOneDownloadErrorEvent(android.app.Activity r3, java.util.ArrayList<java.lang.Integer> r4) {
            r2 = this;
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r0.toJson(r4)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.other.DownloadErrorCodeEvent r1 = new com.ymnsdk.replugin.event.other.DownloadErrorCodeEvent
            r1.<init>(r3, r4)
            r0.postToSeperllita(r1)
            return
    }

    public boolean removeFile(java.lang.String r2) {
            r1 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 == 0) goto Le
            r0.delete()
        Le:
            boolean r2 = r0.exists()
            r2 = r2 ^ 1
            return r2
    }

    public void removeRecursive(java.lang.String r8) {
            r7 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r8)
            boolean r1 = r0.isDirectory()
            if (r1 == 0) goto L2f
            java.lang.String[] r1 = r0.list()
            int r2 = r1.length
            r3 = 0
        L11:
            if (r3 >= r2) goto L2f
            r4 = r1[r3]
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r8)
            java.lang.String r6 = java.io.File.separator
            r5.append(r6)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            r7.removeRecursive(r4)
            int r3 = r3 + 1
            goto L11
        L2f:
            r0.delete()
            return
    }

    public boolean renameFile(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = r2.equals(r3)
            if (r0 == 0) goto L8
            r2 = 1
            return r2
        L8:
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 == 0) goto L26
            java.io.File r2 = new java.io.File
            r2.<init>(r3)
            boolean r3 = r2.exists()
            if (r3 == 0) goto L21
            r2.delete()
        L21:
            boolean r2 = r0.renameTo(r2)
            return r2
        L26:
            r2 = 0
            return r2
    }

    public void setWriteablePath(java.lang.String r2) {
            r1 = this;
            java.io.File r0 = new java.io.File     // Catch: java.io.IOException -> L15
            r0.<init>(r2)     // Catch: java.io.IOException -> L15
            boolean r2 = r0.exists()     // Catch: java.io.IOException -> L15
            if (r2 != 0) goto Le
            r0.mkdirs()     // Catch: java.io.IOException -> L15
        Le:
            java.lang.String r2 = r0.getCanonicalPath()     // Catch: java.io.IOException -> L15
            r1.mWriteablePath = r2     // Catch: java.io.IOException -> L15
            goto L19
        L15:
            r2 = move-exception
            r2.printStackTrace()
        L19:
            return
    }
}
