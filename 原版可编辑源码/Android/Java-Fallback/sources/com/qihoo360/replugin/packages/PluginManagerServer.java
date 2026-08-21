package com.qihoo360.replugin.packages;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginManagerServer {
    private static final byte[] LOCKER = null;
    private static final byte[] LOCKER_PROCESS_KILLED = null;
    private static final java.lang.String STEP_DIVIDER = "------------------------------------------------";
    private static final java.lang.String STEP_FIVE_INFO = "step 5 :从插件中释放 So 文件\n";
    private static final java.lang.String STEP_FOUR_INFO = "step 4 :将合法的APK改名后，移动或复制\n";
    private static final java.lang.String STEP_ONE_INFO = "step 1 :读取APK内容\n";
    private static final java.lang.String STEP_SEVEN_INFO = "step 7 :保存插件信息到文件中，下次可直接使用\n";
    private static final java.lang.String STEP_SIX_INFO = "step 6 :读取APK内容\n";
    private static final java.lang.String STEP_THREE_INFO = "step 3 :解析出名字和三元组\n";
    private static final java.lang.String STEP_TWO_1_INFO = "step 2 :校验插件签名\n";
    private static final java.lang.String STEP_TWO_2_INFO = "step 2 :签名不可用\n";
    private static final java.lang.String TAG = "PluginManagerServer:";
    private android.content.Context mContext;
    private com.qihoo360.replugin.model.PluginInfoList mList;
    private java.util.Map<java.lang.String, com.qihoo360.replugin.packages.PluginRunningList> mProcess2PluginsMap;
    private com.qihoo360.replugin.packages.IPluginManagerServer mStub;
    private java.lang.StringBuilder traceInstallPluginSb;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static class 1 {
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private class Stub extends com.qihoo360.replugin.packages.IPluginManagerServer.Stub {
        final com.qihoo360.replugin.packages.PluginManagerServer this$0;

        private Stub(com.qihoo360.replugin.packages.PluginManagerServer r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        Stub(com.qihoo360.replugin.packages.PluginManagerServer r1, com.qihoo360.replugin.packages.PluginManagerServer.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void addToRunningPlugins(java.lang.String r3, int r4, java.lang.String r5) throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.packages.PluginManagerServer.access$200()
                monitor-enter(r0)
                com.qihoo360.replugin.packages.PluginManagerServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Lc
                com.qihoo360.replugin.packages.PluginManagerServer.access$1100(r1, r3, r4, r5)     // Catch: java.lang.Throwable -> Lc
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
                return
            Lc:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
                throw r3
        }

        @Override
        public com.qihoo360.replugin.packages.PluginRunningList getRunningPlugins() throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.packages.PluginManagerServer.access$200()
                monitor-enter(r0)
                com.qihoo360.replugin.packages.PluginManagerServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Ld
                com.qihoo360.replugin.packages.PluginRunningList r1 = com.qihoo360.replugin.packages.PluginManagerServer.access$800(r1)     // Catch: java.lang.Throwable -> Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                return r1
            Ld:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                throw r1
        }

        @Override
        public java.lang.String[] getRunningProcessesByPlugin(java.lang.String r3) throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.packages.PluginManagerServer.access$200()
                monitor-enter(r0)
                com.qihoo360.replugin.packages.PluginManagerServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Ld
                java.lang.String[] r3 = com.qihoo360.replugin.packages.PluginManagerServer.access$1200(r1, r3)     // Catch: java.lang.Throwable -> Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                return r3
            Ld:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                throw r3
        }

        @Override
        public com.qihoo360.replugin.model.PluginInfo install(java.lang.String r6, boolean r7) throws android.os.RemoteException {
                r5 = this;
                com.qihoo360.replugin.packages.PluginManagerServer r0 = r5.this$0
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "LOCKER-外部, 线程："
                r1.append(r2)
                java.lang.Thread r2 = java.lang.Thread.currentThread()
                java.lang.String r2 = r2.getName()
                r1.append(r2)
                java.lang.String r2 = "，在临界区等待，当前时间: "
                r1.append(r2)
                long r2 = java.lang.System.currentTimeMillis()
                r1.append(r2)
                java.lang.String r2 = "\n"
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                com.qihoo360.replugin.packages.PluginManagerServer.access$100(r0, r1, r7)
                byte[] r0 = com.qihoo360.replugin.packages.PluginManagerServer.access$200()
                monitor-enter(r0)
                com.qihoo360.replugin.packages.PluginManagerServer r1 = r5.this$0     // Catch: java.lang.Throwable -> L6b
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b
                r2.<init>()     // Catch: java.lang.Throwable -> L6b
                java.lang.String r3 = "LOCKER-内部，线程："
                r2.append(r3)     // Catch: java.lang.Throwable -> L6b
                java.lang.Thread r3 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L6b
                java.lang.String r3 = r3.getName()     // Catch: java.lang.Throwable -> L6b
                r2.append(r3)     // Catch: java.lang.Throwable -> L6b
                java.lang.String r3 = "，进入临界区，将执行安装插件操作,当前时间: "
                r2.append(r3)     // Catch: java.lang.Throwable -> L6b
                long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6b
                r2.append(r3)     // Catch: java.lang.Throwable -> L6b
                java.lang.String r3 = "\n"
                r2.append(r3)     // Catch: java.lang.Throwable -> L6b
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L6b
                com.qihoo360.replugin.packages.PluginManagerServer.access$100(r1, r2, r7)     // Catch: java.lang.Throwable -> L6b
                com.qihoo360.replugin.packages.PluginManagerServer r1 = r5.this$0     // Catch: java.lang.Throwable -> L6b
                com.qihoo360.replugin.model.PluginInfo r6 = com.qihoo360.replugin.packages.PluginManagerServer.access$300(r1, r6, r7)     // Catch: java.lang.Throwable -> L6b
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L6b
                return r6
            L6b:
                r6 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L6b
                throw r6
        }

        @Override
        public boolean isPluginRunning(java.lang.String r3, java.lang.String r4) throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.packages.PluginManagerServer.access$200()
                monitor-enter(r0)
                com.qihoo360.replugin.packages.PluginManagerServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Ld
                boolean r3 = com.qihoo360.replugin.packages.PluginManagerServer.access$900(r1, r3, r4)     // Catch: java.lang.Throwable -> Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                return r3
            Ld:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                throw r3
        }

        @Override
        public java.util.List<com.qihoo360.replugin.model.PluginInfo> load() throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.packages.PluginManagerServer.access$200()
                monitor-enter(r0)
                com.qihoo360.replugin.packages.PluginManagerServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Ld
                java.util.List r1 = com.qihoo360.replugin.packages.PluginManagerServer.access$400(r1)     // Catch: java.lang.Throwable -> Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                return r1
            Ld:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                throw r1
        }

        @Override
        public void syncRunningPlugins(com.qihoo360.replugin.packages.PluginRunningList r3) throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.packages.PluginManagerServer.access$200()
                monitor-enter(r0)
                com.qihoo360.replugin.packages.PluginManagerServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Lc
                com.qihoo360.replugin.packages.PluginManagerServer.access$1000(r1, r3)     // Catch: java.lang.Throwable -> Lc
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
                return
            Lc:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
                throw r3
        }

        @Override
        public boolean uninstall(com.qihoo360.replugin.model.PluginInfo r3) throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.packages.PluginManagerServer.access$200()
                monitor-enter(r0)
                com.qihoo360.replugin.packages.PluginManagerServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Ld
                boolean r3 = com.qihoo360.replugin.packages.PluginManagerServer.access$700(r1, r3)     // Catch: java.lang.Throwable -> Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                return r3
            Ld:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                throw r3
        }

        @Override
        public java.util.List<com.qihoo360.replugin.model.PluginInfo> updateAll() throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.packages.PluginManagerServer.access$200()
                monitor-enter(r0)
                com.qihoo360.replugin.packages.PluginManagerServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Ld
                java.util.List r1 = com.qihoo360.replugin.packages.PluginManagerServer.access$500(r1)     // Catch: java.lang.Throwable -> Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                return r1
            Ld:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
                throw r1
        }

        @Override
        public void updateUsed(java.lang.String r3, boolean r4) throws android.os.RemoteException {
                r2 = this;
                byte[] r0 = com.qihoo360.replugin.packages.PluginManagerServer.access$200()
                monitor-enter(r0)
                com.qihoo360.replugin.packages.PluginManagerServer r1 = r2.this$0     // Catch: java.lang.Throwable -> Lc
                com.qihoo360.replugin.packages.PluginManagerServer.access$600(r1, r3, r4)     // Catch: java.lang.Throwable -> Lc
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
                return
            Lc:
                r3 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
                throw r3
        }
    }

    static {
            r0 = 0
            byte[] r1 = new byte[r0]
            com.qihoo360.replugin.packages.PluginManagerServer.LOCKER_PROCESS_KILLED = r1
            byte[] r0 = new byte[r0]
            com.qihoo360.replugin.packages.PluginManagerServer.LOCKER = r0
            return
    }

    public PluginManagerServer(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.qihoo360.replugin.model.PluginInfoList r0 = new com.qihoo360.replugin.model.PluginInfoList
            r0.<init>()
            r1.mList = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.mProcess2PluginsMap = r0
            r1.mContext = r2
            com.qihoo360.replugin.packages.PluginManagerServer$Stub r2 = new com.qihoo360.replugin.packages.PluginManagerServer$Stub
            r0 = 0
            r2.<init>(r1, r0)
            r1.mStub = r2
            r1.initTraceBaseInfo()
            return
    }

    static void access$100(com.qihoo360.replugin.packages.PluginManagerServer r0, java.lang.String r1, boolean r2) {
            r0.traceInstallPlugin(r1, r2)
            return
    }

    static void access$1000(com.qihoo360.replugin.packages.PluginManagerServer r0, com.qihoo360.replugin.packages.PluginRunningList r1) {
            r0.syncRunningPluginsLocked(r1)
            return
    }

    static void access$1100(com.qihoo360.replugin.packages.PluginManagerServer r0, java.lang.String r1, int r2, java.lang.String r3) {
            r0.addToRunningPluginsLocked(r1, r2, r3)
            return
    }

    static java.lang.String[] access$1200(com.qihoo360.replugin.packages.PluginManagerServer r0, java.lang.String r1) {
            java.lang.String[] r0 = r0.getRunningProcessesByPluginLocked(r1)
            return r0
    }

    static byte[] access$200() {
            byte[] r0 = com.qihoo360.replugin.packages.PluginManagerServer.LOCKER
            return r0
    }

    static com.qihoo360.replugin.model.PluginInfo access$300(com.qihoo360.replugin.packages.PluginManagerServer r0, java.lang.String r1, boolean r2) {
            com.qihoo360.replugin.model.PluginInfo r0 = r0.installLocked(r1, r2)
            return r0
    }

    static java.util.List access$400(com.qihoo360.replugin.packages.PluginManagerServer r0) {
            java.util.List r0 = r0.loadLocked()
            return r0
    }

    static java.util.List access$500(com.qihoo360.replugin.packages.PluginManagerServer r0) {
            java.util.List r0 = r0.updateAllLocked()
            return r0
    }

    static void access$600(com.qihoo360.replugin.packages.PluginManagerServer r0, java.lang.String r1, boolean r2) {
            r0.updateUsedLocked(r1, r2)
            return
    }

    static boolean access$700(com.qihoo360.replugin.packages.PluginManagerServer r0, com.qihoo360.replugin.model.PluginInfo r1) {
            boolean r0 = r0.uninstallLocked(r1)
            return r0
    }

    static com.qihoo360.replugin.packages.PluginRunningList access$800(com.qihoo360.replugin.packages.PluginManagerServer r0) {
            com.qihoo360.replugin.packages.PluginRunningList r0 = r0.getRunningPluginsLocked()
            return r0
    }

    static boolean access$900(com.qihoo360.replugin.packages.PluginManagerServer r0, java.lang.String r1, java.lang.String r2) {
            boolean r0 = r0.isPluginRunningLocked(r1, r2)
            return r0
    }

    private void addToRunningPluginsLocked(java.lang.String r3, int r4, java.lang.String r5) {
            r2 = this;
            java.util.Map<java.lang.String, com.qihoo360.replugin.packages.PluginRunningList> r0 = r2.mProcess2PluginsMap
            java.lang.Object r0 = r0.get(r3)
            com.qihoo360.replugin.packages.PluginRunningList r0 = (com.qihoo360.replugin.packages.PluginRunningList) r0
            if (r0 != 0) goto L14
            com.qihoo360.replugin.packages.PluginRunningList r0 = new com.qihoo360.replugin.packages.PluginRunningList
            r0.<init>()
            java.util.Map<java.lang.String, com.qihoo360.replugin.packages.PluginRunningList> r1 = r2.mProcess2PluginsMap
            r1.put(r3, r0)
        L14:
            r0.setProcessInfo(r3, r4)
            r0.add(r5)
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L3e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "addToRunningPluginsLocked: Added! pl ="
            r3.append(r4)
            r3.append(r0)
            java.lang.String r4 = "; map="
            r3.append(r4)
            java.util.Map<java.lang.String, com.qihoo360.replugin.packages.PluginRunningList> r4 = r2.mProcess2PluginsMap
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "PluginManagerServer:"
            com.qihoo360.replugin.helper.LogDebug.d(r4, r3)
        L3e:
            return
    }

    private int checkVersion(com.qihoo360.replugin.model.PluginInfo r7, com.qihoo360.replugin.model.PluginInfo r8) {
            r6 = this;
            int r0 = r7.getVersion()
            int r1 = r8.getVersion()
            java.lang.String r2 = "; cur_ver="
            java.lang.String r3 = "PluginManagerServer:"
            if (r0 != r1) goto L36
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L34
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isSameVersion: same version. inst_ver="
            r0.append(r1)
            int r7 = r7.getVersion()
            r0.append(r7)
            r0.append(r2)
            int r7 = r8.getVersion()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r7)
        L34:
            r7 = 0
            return r7
        L36:
            int r0 = r7.getVersion()
            int r1 = r8.getVersion()
            r4 = -1
            if (r0 >= r1) goto L74
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L73
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "checkVersion: Older than current, install fail. pn="
            r0.append(r1)
            java.lang.String r1 = r8.getName()
            r0.append(r1)
            java.lang.String r1 = "; inst_ver="
            r0.append(r1)
            int r7 = r7.getVersion()
            r0.append(r7)
            r0.append(r2)
            int r7 = r8.getVersion()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r3, r7)
        L73:
            return r4
        L74:
            com.qihoo360.replugin.model.PluginInfo r0 = r8.getPendingUpdate()
            if (r0 == 0) goto Lc3
            int r1 = r7.getVersion()
            int r5 = r0.getVersion()
            if (r1 >= r5) goto Lc3
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto Lc2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r5 = "checkVersion: Older than updating plugin. Ignore. pn="
            r1.append(r5)
            java.lang.String r5 = r8.getName()
            r1.append(r5)
            r1.append(r2)
            int r8 = r8.getVersion()
            r1.append(r8)
            java.lang.String r8 = "; old_ver="
            r1.append(r8)
            int r8 = r0.getVersion()
            r1.append(r8)
            java.lang.String r8 = "; new_ver="
            r1.append(r8)
            int r7 = r7.getVersion()
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r3, r7)
        Lc2:
            return r4
        Lc3:
            r7 = 1
            return r7
    }

    private boolean copyOrMoveApk(java.lang.String r3, com.qihoo360.replugin.model.PluginInfo r4, boolean r5) {
            r2 = this;
            java.lang.String r0 = "step 4 :将合法的APK改名后，移动或复制\n"
            r2.traceInstallPlugin(r0, r5)
            java.io.File r5 = new java.io.File
            r5.<init>(r3)
            java.io.File r3 = r4.getApkFile()
            boolean r0 = r3.exists()
            if (r0 == 0) goto L17
            com.qihoo360.replugin.utils.FileUtils.deleteQuietly(r3)
        L17:
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.io.IOException -> L36
            boolean r0 = r0.isMoveFileWhenInstalling()     // Catch: java.io.IOException -> L36
            if (r0 == 0) goto L25
            com.qihoo360.replugin.utils.FileUtils.moveFile(r5, r3)     // Catch: java.io.IOException -> L36
            goto L28
        L25:
            com.qihoo360.replugin.utils.FileUtils.copyFile(r5, r3)     // Catch: java.io.IOException -> L36
        L28:
            java.lang.String r3 = r3.getAbsolutePath()
            r4.setPath(r3)
            r3 = 11
            r4.setType(r3)
            r3 = 1
            return r3
        L36:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "copyOrMoveApk: Copy/Move Failed! src="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = "; dest="
            r0.append(r5)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r5 = "PluginManagerServer:"
            com.qihoo360.replugin.helper.LogRelease.e(r5, r3, r4)
            r3 = 0
            return r3
    }

    private void delete(com.qihoo360.replugin.model.PluginInfo r3) {
            r2 = this;
            java.io.File r0 = new java.io.File     // Catch: java.lang.IllegalArgumentException -> L28 java.io.IOException -> L2d
            java.lang.String r1 = r3.getPath()     // Catch: java.lang.IllegalArgumentException -> L28 java.io.IOException -> L2d
            r0.<init>(r1)     // Catch: java.lang.IllegalArgumentException -> L28 java.io.IOException -> L2d
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r0)     // Catch: java.lang.IllegalArgumentException -> L28 java.io.IOException -> L2d
            java.io.File r0 = r3.getDexFile()     // Catch: java.lang.IllegalArgumentException -> L28 java.io.IOException -> L2d
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r0)     // Catch: java.lang.IllegalArgumentException -> L28 java.io.IOException -> L2d
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.IllegalArgumentException -> L28 java.io.IOException -> L2d
            r1 = 21
            if (r0 >= r1) goto L20
            java.io.File r0 = r3.getExtraOdexDir()     // Catch: java.lang.IllegalArgumentException -> L28 java.io.IOException -> L2d
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r0)     // Catch: java.lang.IllegalArgumentException -> L28 java.io.IOException -> L2d
        L20:
            java.io.File r3 = r3.getNativeLibsDir()     // Catch: java.lang.IllegalArgumentException -> L28 java.io.IOException -> L2d
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r3)     // Catch: java.lang.IllegalArgumentException -> L28 java.io.IOException -> L2d
            goto L31
        L28:
            r3 = move-exception
            r3.printStackTrace()
            goto L31
        L2d:
            r3 = move-exception
            r3.printStackTrace()
        L31:
            return
    }

    private com.qihoo360.replugin.packages.PluginRunningList getRunningPluginsLocked() {
            r5 = this;
            com.qihoo360.replugin.packages.PluginRunningList r0 = new com.qihoo360.replugin.packages.PluginRunningList
            r0.<init>()
            java.util.Map<java.lang.String, com.qihoo360.replugin.packages.PluginRunningList> r1 = r5.mProcess2PluginsMap
            java.util.Collection r1 = r1.values()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L35
            java.lang.Object r2 = r1.next()
            com.qihoo360.replugin.packages.PluginRunningList r2 = (com.qihoo360.replugin.packages.PluginRunningList) r2
            java.util.Iterator r2 = r2.iterator()
        L1f:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto Lf
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            boolean r4 = r0.isRunning(r3)
            if (r4 != 0) goto L1f
            r0.add(r3)
            goto L1f
        L35:
            return r0
    }

    private java.lang.String[] getRunningProcessesByPluginLocked(java.lang.String r5) {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Map<java.lang.String, com.qihoo360.replugin.packages.PluginRunningList> r1 = r4.mProcess2PluginsMap
            java.util.Collection r1 = r1.values()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()
            com.qihoo360.replugin.packages.PluginRunningList r2 = (com.qihoo360.replugin.packages.PluginRunningList) r2
            boolean r3 = r2.isRunning(r5)
            if (r3 == 0) goto Lf
            java.lang.String r2 = r2.mProcessName
            r0.add(r2)
            goto Lf
        L27:
            r5 = 0
            java.lang.String[] r5 = new java.lang.String[r5]
            java.lang.Object[] r5 = r0.toArray(r5)
            java.lang.String[] r5 = (java.lang.String[]) r5
            return r5
    }

    private void initTraceBaseInfo() {
            r6 = this;
            int r0 = android.os.Process.myPid()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto Lf
            int r1 = android.system.Os.getppid()
            goto L10
        Lf:
            r1 = 0
        L10:
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            java.lang.String r2 = r2.getName()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r6.traceInstallPluginSb = r3
            java.lang.String r4 = "####安装插件###"
            r3.append(r4)
            java.lang.String r4 = "\n"
            r3.append(r4)
            java.lang.StringBuilder r3 = r6.traceInstallPluginSb
            java.lang.String r5 = " ppid : "
            r3.append(r5)
            r3.append(r1)
            r3.append(r4)
            java.lang.StringBuilder r1 = r6.traceInstallPluginSb
            java.lang.String r3 = " pid  : "
            r1.append(r3)
            r1.append(r0)
            r1.append(r4)
            java.lang.StringBuilder r0 = r6.traceInstallPluginSb
            java.lang.String r1 = " currentThreadName : "
            r0.append(r1)
            r0.append(r2)
            r0.append(r4)
            return
    }

    private com.qihoo360.replugin.model.PluginInfo installLocked(java.lang.String r7, boolean r8) {
            r6 = this;
            java.lang.String r0 = "PluginManagerServer:"
            java.lang.String r1 = " invoke install Locked"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)
            java.lang.StringBuilder r1 = r6.traceInstallPluginSb
            java.lang.String r2 = "path : "
            r1.append(r2)
            r1.append(r7)
            java.lang.String r2 = "\n"
            r1.append(r2)
            java.lang.StringBuilder r1 = r6.traceInstallPluginSb
            java.lang.String r3 = "------------------------------------------------"
            r1.append(r3)
            r1.append(r2)
            java.lang.StringBuilder r1 = r6.traceInstallPluginSb
            java.lang.String r2 = "核心步骤：\n"
            r1.append(r2)
            com.qihoo360.replugin.RePluginConfig r1 = com.qihoo360.replugin.RePlugin.getConfig()
            boolean r1 = r1.getVerifySign()
            if (r1 == 0) goto L34
            r2 = 192(0xc0, float:2.69E-43)
            goto L36
        L34:
            r2 = 128(0x80, float:1.8E-43)
        L36:
            java.lang.String r3 = "step 1 :读取APK内容\n"
            r6.traceInstallPlugin(r3, r8)
            android.content.Context r3 = r6.mContext
            android.content.pm.PackageManager r3 = r3.getPackageManager()
            android.content.pm.PackageInfo r2 = r3.getPackageArchiveInfo(r7, r2)
            r3 = 0
            if (r2 != 0) goto L6a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "installLocked: Not a valid apk. path="
            r8.append(r1)
            r8.append(r7)
            java.lang.String r8 = r8.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r0, r8)
            com.qihoo360.replugin.RePluginConfig r8 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginEventCallbacks r8 = r8.getEventCallbacks()
            com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r0 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.READ_PKG_INFO_FAIL
            r8.onInstallPluginFailed(r7, r0)
            return r3
        L6a:
            if (r1 == 0) goto L78
            boolean r1 = r6.verifySignature(r2, r7, r8)
            if (r1 != 0) goto L7d
            java.lang.String r7 = "签名校验不通过"
            com.qihoo360.replugin.helper.LogDebug.e(r0, r7)
            return r3
        L78:
            java.lang.String r1 = "step 2 :签名不可用\n"
            r6.traceInstallPlugin(r1, r8)
        L7d:
            java.lang.String r1 = "step 3 :解析出名字和三元组\n"
            r6.traceInstallPlugin(r1, r8)
            com.qihoo360.replugin.model.PluginInfo r1 = com.qihoo360.replugin.model.PluginInfo.parseFromPackageInfo(r2, r7)
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L9e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "installLocked: Info="
            r2.append(r4)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r0, r2)
        L9e:
            r2 = 10
            r1.setType(r2)
            java.lang.String r2 = r1.getName()
            r4 = 0
            com.qihoo360.replugin.model.PluginInfo r2 = com.qihoo360.loader2.MP.getPlugin(r2, r4)
            if (r2 == 0) goto Lcc
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "installLocked: Has installed plugin. current="
            r4.append(r5)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r0, r4)
            int r4 = r6.checkVersion(r1, r2)
            if (r4 != 0) goto Lcc
            r4 = 1
            r1.setIsPendingCover(r4)
        Lcc:
            boolean r4 = r6.copyOrMoveApk(r7, r1, r8)
            if (r4 != 0) goto Le5
            java.lang.String r8 = "拷贝文件失败"
            com.qihoo360.replugin.helper.LogDebug.i(r0, r8)
            com.qihoo360.replugin.RePluginConfig r8 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginEventCallbacks r8 = r8.getEventCallbacks()
            com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r0 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.COPY_APK_FAIL
            r8.onInstallPluginFailed(r7, r0)
            return r3
        Le5:
            java.lang.String r7 = "step 5 :从插件中释放 So 文件\n"
            r6.traceInstallPlugin(r7, r8)
            java.lang.String r7 = r1.getPath()
            java.io.File r0 = r1.getNativeLibsDir()
            com.qihoo360.loader2.PluginNativeLibsHelper.install(r7, r0)
            java.lang.String r7 = "step 6 :读取APK内容\n"
            r6.traceInstallPlugin(r7, r8)
            if (r2 == 0) goto L100
            r6.updateOrLater(r2, r1)
            goto L105
        L100:
            com.qihoo360.replugin.model.PluginInfoList r7 = r6.mList
            r7.add(r1)
        L105:
            java.lang.String r7 = "step 7 :保存插件信息到文件中，下次可直接使用\n"
            r6.traceInstallPlugin(r7, r8)
            com.qihoo360.replugin.model.PluginInfoList r7 = r6.mList
            android.content.Context r8 = r6.mContext
            r7.save(r8)
            return r1
    }

    private boolean isPluginRunningLocked(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 1
            if (r0 == 0) goto L24
            java.util.Map<java.lang.String, com.qihoo360.replugin.packages.PluginRunningList> r4 = r2.mProcess2PluginsMap
            java.util.Collection r4 = r4.values()
            java.util.Iterator r4 = r4.iterator()
        L11:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L35
            java.lang.Object r0 = r4.next()
            com.qihoo360.replugin.packages.PluginRunningList r0 = (com.qihoo360.replugin.packages.PluginRunningList) r0
            boolean r0 = r0.isRunning(r3)
            if (r0 == 0) goto L11
            return r1
        L24:
            java.util.Map<java.lang.String, com.qihoo360.replugin.packages.PluginRunningList> r0 = r2.mProcess2PluginsMap
            java.lang.Object r4 = r0.get(r4)
            com.qihoo360.replugin.packages.PluginRunningList r4 = (com.qihoo360.replugin.packages.PluginRunningList) r4
            if (r4 == 0) goto L35
            boolean r3 = r4.isRunning(r3)
            if (r3 == 0) goto L35
            return r1
        L35:
            r3 = 0
            return r3
    }

    private java.util.List<com.qihoo360.replugin.model.PluginInfo> loadLocked() {
            r2 = this;
            com.qihoo360.replugin.model.PluginInfoList r0 = r2.mList
            android.content.Context r1 = r2.mContext
            boolean r0 = r0.load(r1)
            if (r0 != 0) goto Lc
            r0 = 0
            return r0
        Lc:
            java.util.List r0 = r2.updateAllLocked()
            return r0
    }

    private void move(com.qihoo360.replugin.model.PluginInfo r3, com.qihoo360.replugin.model.PluginInfo r4) {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L2a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "move. curPi="
            r0.append(r1)
            java.lang.String r1 = r3.getPath()
            r0.append(r1)
            java.lang.String r1 = "; newPi="
            r0.append(r1)
            java.lang.String r1 = r4.getPath()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PluginManagerServer:"
            com.qihoo360.replugin.helper.LogDebug.i(r1, r0)
        L2a:
            java.io.File r0 = r4.getApkFile()     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            java.io.File r1 = r3.getApkFile()     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            com.qihoo360.replugin.utils.FileUtils.copyFile(r0, r1)     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            java.io.File r0 = r4.getDexFile()     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            boolean r0 = r0.exists()     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            if (r0 == 0) goto L4a
            java.io.File r0 = r4.getDexFile()     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            java.io.File r1 = r3.getDexFile()     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            com.qihoo360.replugin.utils.FileUtils.copyFile(r0, r1)     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
        L4a:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            r1 = 21
            if (r0 >= r1) goto L5b
            java.io.File r0 = r4.getExtraOdexDir()     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            java.io.File r1 = r3.getExtraOdexDir()     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            com.qihoo360.replugin.utils.FileUtils.copyDir(r0, r1)     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
        L5b:
            java.io.File r0 = r4.getNativeLibsDir()     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            boolean r0 = r0.exists()     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            if (r0 == 0) goto L70
            java.io.File r0 = r4.getNativeLibsDir()     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            java.io.File r3 = r3.getNativeLibsDir()     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
            com.qihoo360.replugin.utils.FileUtils.copyDir(r0, r3)     // Catch: java.lang.Throwable -> L7c java.io.IOException -> L7e
        L70:
            java.io.File r3 = r4.getApkFile()     // Catch: java.lang.IllegalArgumentException -> L8e java.io.IOException -> L93
            java.io.File r3 = r3.getParentFile()     // Catch: java.lang.IllegalArgumentException -> L8e java.io.IOException -> L93
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r3)     // Catch: java.lang.IllegalArgumentException -> L8e java.io.IOException -> L93
            goto L97
        L7c:
            r3 = move-exception
            goto L98
        L7e:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L7c
            java.io.File r3 = r4.getApkFile()     // Catch: java.lang.IllegalArgumentException -> L8e java.io.IOException -> L93
            java.io.File r3 = r3.getParentFile()     // Catch: java.lang.IllegalArgumentException -> L8e java.io.IOException -> L93
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r3)     // Catch: java.lang.IllegalArgumentException -> L8e java.io.IOException -> L93
            goto L97
        L8e:
            r3 = move-exception
            r3.printStackTrace()
            goto L97
        L93:
            r3 = move-exception
            r3.printStackTrace()
        L97:
            return
        L98:
            java.io.File r4 = r4.getApkFile()     // Catch: java.lang.IllegalArgumentException -> La4 java.io.IOException -> La9
            java.io.File r4 = r4.getParentFile()     // Catch: java.lang.IllegalArgumentException -> La4 java.io.IOException -> La9
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r4)     // Catch: java.lang.IllegalArgumentException -> La4 java.io.IOException -> La9
            goto Lad
        La4:
            r4 = move-exception
            r4.printStackTrace()
            goto Lad
        La9:
            r4 = move-exception
            r4.printStackTrace()
        Lad:
            throw r3
    }

    private void syncRunningPluginsLocked(com.qihoo360.replugin.packages.PluginRunningList r4) {
            r3 = this;
            com.qihoo360.replugin.packages.PluginRunningList r0 = new com.qihoo360.replugin.packages.PluginRunningList
            r0.<init>(r4)
            java.util.Map<java.lang.String, com.qihoo360.replugin.packages.PluginRunningList> r1 = r3.mProcess2PluginsMap
            java.lang.String r2 = r4.mProcessName
            r1.put(r2, r0)
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L30
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "syncRunningPluginsLocked: Synced! pl="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "; map="
            r0.append(r4)
            java.util.Map<java.lang.String, com.qihoo360.replugin.packages.PluginRunningList> r4 = r3.mProcess2PluginsMap
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "PluginManagerServer:"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r4)
        L30:
            return
    }

    private void traceInstallPlugin(java.lang.String r3, boolean r4) {
            r2 = this;
            java.lang.StringBuilder r0 = r2.traceInstallPluginSb
            java.lang.String r1 = "     "
            r0.append(r1)
            r0.append(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = ""
            r3.append(r0)
            java.lang.StringBuilder r0 = r2.traceInstallPluginSb
            java.lang.String r0 = r0.toString()
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "PluginManagerServer:"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)
            com.qihoo360.replugin.RePluginConfig r3 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginEventCallbacks r3 = r3.getEventCallbacks()
            java.lang.StringBuilder r0 = r2.traceInstallPluginSb
            java.lang.String r0 = r0.toString()
            r3.onInstallPluginStepInfo(r0, r4)
            return
    }

    private boolean uninstallLater(com.qihoo360.replugin.model.PluginInfo r3) {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Is running. Uninstall later! pn="
            r0.append(r1)
            java.lang.String r1 = r3.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PluginManagerServer:"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1e:
            java.lang.String r0 = r3.getName()
            r1 = 0
            com.qihoo360.replugin.model.PluginInfo r0 = com.qihoo360.loader2.MP.getPlugin(r0, r1)
            if (r0 != 0) goto L2a
            return r1
        L2a:
            r0.setPendingDelete(r3)
            com.qihoo360.replugin.model.PluginInfoList r3 = r2.mList
            android.content.Context r0 = r2.mContext
            r3.save(r0)
            return r1
    }

    private boolean uninstallLocked(com.qihoo360.replugin.model.PluginInfo r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            java.lang.String r0 = r2.getName()
            boolean r0 = com.qihoo360.replugin.RePlugin.isPluginRunning(r0)
            if (r0 == 0) goto L13
            boolean r2 = r1.uninstallLater(r2)
            return r2
        L13:
            boolean r2 = r1.uninstallNow(r2)
            return r2
    }

    private boolean uninstallNow(com.qihoo360.replugin.model.PluginInfo r3) {
            r2 = this;
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Not running. Uninstall now! pn="
            r0.append(r1)
            java.lang.String r1 = r3.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PluginManagerServer:"
            com.qihoo360.replugin.helper.LogDebug.i(r1, r0)
        L1e:
            com.qihoo360.replugin.utils.pkg.PackageFilesUtil.forceDelete(r3)
            com.qihoo360.replugin.model.PluginInfoList r0 = r2.mList
            java.lang.String r3 = r3.getName()
            r0.remove(r3)
            com.qihoo360.replugin.model.PluginInfoList r3 = r2.mList
            android.content.Context r0 = r2.mContext
            r3.save(r0)
            r3 = 1
            return r3
    }

    private void updateAllIfNeeded() {
            r3 = this;
            com.qihoo360.replugin.model.PluginInfoList r0 = r3.mList
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
        L7:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L1c
            java.lang.Object r2 = r0.next()
            com.qihoo360.replugin.model.PluginInfo r2 = (com.qihoo360.replugin.model.PluginInfo) r2
            boolean r2 = r3.updateIfNeeded(r2)
            if (r2 == 0) goto L7
            int r1 = r1 + 1
            goto L7
        L1c:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L3b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "updateAllIfNeeded: Updated "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = " plugins"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "PluginManagerServer:"
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)
        L3b:
            if (r1 <= 0) goto L44
            com.qihoo360.replugin.model.PluginInfoList r0 = r3.mList
            android.content.Context r1 = r3.mContext
            r0.save(r1)
        L44:
            return
    }

    private java.util.List<com.qihoo360.replugin.model.PluginInfo> updateAllLocked() {
            r1 = this;
            r1.updateAllIfNeeded()
            com.qihoo360.replugin.model.PluginInfoList r0 = r1.mList
            java.util.List r0 = r0.cloneList()
            return r0
    }

    private boolean updateIfNeeded(com.qihoo360.replugin.model.PluginInfo r5) {
            r4 = this;
            java.lang.String r0 = r5.getName()
            r1 = 0
            boolean r0 = r4.isPluginRunningLocked(r0, r1)
            r1 = 0
            java.lang.String r2 = "PluginManagerServer:"
            if (r0 == 0) goto L2b
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L2a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "updateIfNeeded: Plugin is running. pn="
            r0.append(r3)
            java.lang.String r5 = r5.getName()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.w(r2, r5)
        L2a:
            return r1
        L2b:
            boolean r0 = r5.isNeedUninstall()
            if (r0 == 0) goto L56
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L4d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "updateIfNeeded: delete plugin. pn="
            r0.append(r1)
            java.lang.String r1 = r5.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)
        L4d:
            com.qihoo360.replugin.model.PluginInfo r5 = r5.getPendingDelete()
            boolean r5 = r4.uninstallNow(r5)
            return r5
        L56:
            boolean r0 = r5.isNeedUpdate()
            r3 = 1
            if (r0 == 0) goto L65
            com.qihoo360.replugin.model.PluginInfo r0 = r5.getPendingUpdate()
            r4.updateNow(r5, r0)
            return r3
        L65:
            boolean r0 = r5.isNeedCover()
            if (r0 == 0) goto L73
            com.qihoo360.replugin.model.PluginInfo r0 = r5.getPendingCover()
            r4.updateNow(r5, r0)
            return r3
        L73:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L8f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "updateIfNeeded: Not need to update. pn="
            r0.append(r3)
            java.lang.String r5 = r5.getName()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r5)
        L8f:
            return r1
    }

    private void updateNow(com.qihoo360.replugin.model.PluginInfo r4, com.qihoo360.replugin.model.PluginInfo r5) {
            r3 = this;
            boolean r0 = r5.getIsPendingCover()
            if (r0 == 0) goto La
            r3.move(r4, r5)
            goto Ld
        La:
            r3.delete(r4)
        Ld:
            r1 = 11
            r5.setType(r1)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L48
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "updateNow: Update. pn="
            r1.append(r2)
            int r2 = r4.getVersion()
            r1.append(r2)
            java.lang.String r2 = "; cur_ver="
            r1.append(r2)
            int r2 = r4.getVersion()
            r1.append(r2)
            java.lang.String r2 = "; update_ver="
            r1.append(r2)
            int r2 = r5.getVersion()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "PluginManagerServer:"
            com.qihoo360.replugin.helper.LogDebug.i(r2, r1)
        L48:
            r1 = 0
            if (r0 == 0) goto L5e
            r4.setPendingCover(r1)
            r4 = 0
            r5.setIsPendingCover(r4)
            java.io.File r4 = r5.getApkFile()
            java.lang.String r4 = r4.getPath()
            r5.setPath(r4)
            goto L64
        L5e:
            r4.update(r5)
            r4.setPendingUpdate(r1)
        L64:
            return
    }

    private void updateOrLater(com.qihoo360.replugin.model.PluginInfo r5, com.qihoo360.replugin.model.PluginInfo r6) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "updateOrLater: Need update. pn="
            r0.append(r1)
            java.lang.String r1 = r5.getName()
            r0.append(r1)
            java.lang.String r1 = "; cur_ver="
            r0.append(r1)
            int r1 = r5.getVersion()
            r0.append(r1)
            java.lang.String r1 = "; update_ver="
            r0.append(r1)
            int r1 = r6.getVersion()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PluginManagerServer:"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
            boolean r0 = r5.isPnPlugin()
            if (r0 == 0) goto L3d
            com.qihoo360.replugin.model.PluginInfoList r0 = r4.mList
            r0.add(r5)
        L3d:
            com.qihoo360.replugin.model.PluginInfo r0 = r5.getPendingUpdate()
            if (r0 == 0) goto L47
            r4.updatePendingUpdate(r5, r6, r0)
            return
        L47:
            java.lang.String r0 = r5.getName()
            boolean r0 = com.qihoo360.replugin.RePlugin.isPluginRunning(r0)
            if (r0 == 0) goto L9c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "updateOrLater: Plugin is running. Later. pn="
            r0.append(r2)
            java.lang.String r2 = r5.getName()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.w(r1, r0)
            int r0 = r6.getVersion()
            int r2 = r5.getVersion()
            r3 = 0
            if (r0 == r2) goto L83
            r5.setPendingUpdate(r6)
            r5.setPendingDelete(r3)
            r5.setPendingCover(r3)
            java.lang.String r0 = "updateOrLater: Plugin need update high version. clear PendingDelete and PendingCover."
            com.qihoo360.replugin.helper.LogDebug.w(r1, r0)
            goto L98
        L83:
            int r0 = r6.getVersion()
            int r2 = r5.getVersion()
            if (r0 != r2) goto L98
            r5.setPendingCover(r6)
            r5.setPendingDelete(r3)
            java.lang.String r0 = "updateOrLater: Plugin need update same version. clear PendingDelete."
            com.qihoo360.replugin.helper.LogDebug.w(r1, r0)
        L98:
            r6.setParentInfo(r5)
            goto Lb7
        L9c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "updateOrLater: Not running. Update now! pn="
            r0.append(r2)
            java.lang.String r2 = r5.getName()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r1, r0)
            r4.updateNow(r5, r6)
        Lb7:
            return
    }

    private void updatePendingUpdate(com.qihoo360.replugin.model.PluginInfo r4, com.qihoo360.replugin.model.PluginInfo r5, com.qihoo360.replugin.model.PluginInfo r6) {
            r3 = this;
            int r0 = r6.getVersion()
            int r1 = r5.getVersion()
            java.lang.String r2 = "PluginManagerServer:"
            if (r0 == r1) goto L64
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L4c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "updatePendingUpdate: Found newer plugin, replace. pn="
            r0.append(r1)
            java.lang.String r1 = r4.getName()
            r0.append(r1)
            java.lang.String r1 = "; cur_ver="
            r0.append(r1)
            int r1 = r4.getVersion()
            r0.append(r1)
            java.lang.String r1 = "; old_ver="
            r0.append(r1)
            int r1 = r6.getVersion()
            r0.append(r1)
            java.lang.String r1 = "; new_ver="
            r0.append(r1)
            int r1 = r5.getVersion()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r2, r0)
        L4c:
            r4.setPendingUpdate(r5)
            r5.setParentInfo(r4)
            java.io.File r4 = new java.io.File     // Catch: java.io.IOException -> L5f
            java.lang.String r5 = r6.getPath()     // Catch: java.io.IOException -> L5f
            r4.<init>(r5)     // Catch: java.io.IOException -> L5f
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r4)     // Catch: java.io.IOException -> L5f
            goto L6d
        L5f:
            r4 = move-exception
            r4.printStackTrace()
            goto L6d
        L64:
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L6d
            java.lang.String r4 = "updatePendingUpdate: Older than updating plugin. But..."
            com.qihoo360.replugin.helper.LogDebug.e(r2, r4)
        L6d:
            return
    }

    private void updateUsedLocked(java.lang.String r3, boolean r4) {
            r2 = this;
            r0 = 0
            com.qihoo360.replugin.model.PluginInfo r0 = com.qihoo360.loader2.MP.getPlugin(r3, r0)
            if (r0 != 0) goto L8
            return
        L8:
            r0.setIsUsed(r4)
            com.qihoo360.replugin.model.PluginInfoList r0 = r2.mList
            android.content.Context r1 = r2.mContext
            r0.save(r1)
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            com.qihoo360.replugin.packages.PluginInfoUpdater.updateIsUsed(r0, r3, r4)
            return
    }

    private boolean verifySignature(android.content.pm.PackageInfo r3, java.lang.String r4, boolean r5) {
            r2 = this;
            java.lang.String r0 = "step 2 :校验插件签名\n"
            r2.traceInstallPlugin(r0, r5)
            boolean r5 = com.qihoo360.loader2.CertUtils.isPluginSignatures(r3)
            java.lang.String r0 = "PluginManagerServer:"
            if (r5 != 0) goto L34
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L25
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "verifySignature: invalid cert:  name="
            r5.append(r1)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)
        L25:
            com.qihoo360.replugin.RePluginConfig r3 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginEventCallbacks r3 = r3.getEventCallbacks()
            com.qihoo360.replugin.RePluginEventCallbacks$InstallResult r5 = com.qihoo360.replugin.RePluginEventCallbacks.InstallResult.VERIFY_SIGN_FAIL
            r3.onInstallPluginFailed(r4, r5)
            r3 = 0
            return r3
        L34:
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L4c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "verifySignature: valid cert:  name="
            r4.append(r5)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)
        L4c:
            r3 = 1
            return r3
    }

    public com.qihoo360.replugin.packages.IPluginManagerServer getService() {
            r1 = this;
            com.qihoo360.replugin.packages.IPluginManagerServer r0 = r1.mStub
            return r0
    }

    public void onClientProcessKilled(java.lang.String r5) {
            r4 = this;
            byte[] r0 = com.qihoo360.replugin.packages.PluginManagerServer.LOCKER_PROCESS_KILLED
            monitor-enter(r0)
            java.util.Map<java.lang.String, com.qihoo360.replugin.packages.PluginRunningList> r1 = r4.mProcess2PluginsMap     // Catch: java.lang.Throwable -> L2e
            r1.remove(r5)     // Catch: java.lang.Throwable -> L2e
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L2c
            java.lang.String r1 = "PluginManagerServer:"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            r2.<init>()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r3 = "onClientProcessKilled: Killed! process="
            r2.append(r3)     // Catch: java.lang.Throwable -> L2e
            r2.append(r5)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r5 = "; remains="
            r2.append(r5)     // Catch: java.lang.Throwable -> L2e
            java.util.Map<java.lang.String, com.qihoo360.replugin.packages.PluginRunningList> r5 = r4.mProcess2PluginsMap     // Catch: java.lang.Throwable -> L2e
            r2.append(r5)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L2e
            com.qihoo360.replugin.helper.LogDebug.d(r1, r5)     // Catch: java.lang.Throwable -> L2e
        L2c:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            return
        L2e:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
            throw r5
    }
}
