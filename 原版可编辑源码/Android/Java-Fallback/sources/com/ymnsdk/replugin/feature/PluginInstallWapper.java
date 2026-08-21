package com.ymnsdk.replugin.feature;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginInstallWapper {
    private static com.ymnsdk.replugin.feature.PluginInstallWapper wapper;
    public long beforeProcess;
    public long downloadDur;
    public java.util.HashMap<java.lang.String, java.lang.Boolean> hasZeroDownloadPointMap;
    public long recoveryTime;
    public java.lang.String userPlugin;



    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    static class 3 {
        static final int[] $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code = null;

        static {
                com.ymnsdk.replugin.patch.download.DownloadCode$Code[] r0 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.ymnsdk.replugin.feature.PluginInstallWapper.3.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code = r0
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileReadStreamException     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.ymnsdk.replugin.feature.PluginInstallWapper.3.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code     // Catch: java.lang.NoSuchFieldError -> L1d
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.RequestFail     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.ymnsdk.replugin.feature.PluginInstallWapper.3.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code     // Catch: java.lang.NoSuchFieldError -> L28
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.NetworkUnreachable     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.ymnsdk.replugin.feature.PluginInstallWapper.3.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code     // Catch: java.lang.NoSuchFieldError -> L33
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileVerifyHashFailed     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.ymnsdk.replugin.feature.PluginInstallWapper.3.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code     // Catch: java.lang.NoSuchFieldError -> L3e
                com.ymnsdk.replugin.patch.download.DownloadCode$Code r1 = com.ymnsdk.replugin.patch.download.DownloadCode.Code.FileVerifySizeFailed     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                return
        }
    }

    static {
            com.ymnsdk.replugin.feature.PluginInstallWapper r0 = new com.ymnsdk.replugin.feature.PluginInstallWapper
            r0.<init>()
            com.ymnsdk.replugin.feature.PluginInstallWapper.wapper = r0
            return
    }

    public PluginInstallWapper() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.beforeProcess = r0
            r0 = 0
            r2.downloadDur = r0
            r2.recoveryTime = r0
            java.lang.String r0 = ""
            r2.userPlugin = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.hasZeroDownloadPointMap = r0
            return
    }

    static void access$000(com.ymnsdk.replugin.feature.PluginInstallWapper r0, com.ymnsdk.replugin.entity.PluginInfo r1, android.app.Activity r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, int r6, long r7, java.lang.String r9, long r10, long r12, boolean r14, com.ymnsdk.replugin.listener.InstallPluginStatusListener r15) {
            r0.installPluginApk(r1, r2, r3, r4, r5, r6, r7, r9, r10, r12, r14, r15)
            return
    }

    static void access$100(com.ymnsdk.replugin.feature.PluginInstallWapper r0, android.app.Activity r1, java.lang.String r2, com.ymnsdk.replugin.patch.download.DownloadCode.Code r3, java.lang.String r4, long r5, java.lang.String r7, int r8, long r9, long r11, boolean r13, com.ymnsdk.replugin.patch.download.DownloadFileInfo r14, com.ymnsdk.replugin.listener.InstallPluginStatusListener r15) {
            r0.downloadFailToPost(r1, r2, r3, r4, r5, r7, r8, r9, r11, r13, r14, r15)
            return
    }

    private void downloadFailToPost(android.app.Activity r17, java.lang.String r18, com.ymnsdk.replugin.patch.download.DownloadCode.Code r19, java.lang.String r20, long r21, java.lang.String r23, int r24, long r25, long r27, boolean r29, com.ymnsdk.replugin.patch.download.DownloadFileInfo r30, com.ymnsdk.replugin.listener.InstallPluginStatusListener r31) {
            r16 = this;
            r12 = r18
            r0 = r20
            r5 = r21
            r13 = r23
            com.ymnsdk.replugin.patch.download.DownloadState r1 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r2 = 0
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r1.setLoadState(r2)
            com.ymnsdk.replugin.patch.download.DownloadState r1 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            com.ymnsdk.replugin.entity.DownloadEntity r1 = r1.getDownloadEntity()
            int r1 = r1.getDownloadType()
            java.lang.String r2 = "|"
            if (r1 != 0) goto L98
            com.ymnsdk.replugin.datafun.PostdataLib r14 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.DownloadApkResponseEvent r15 = new com.ymnsdk.replugin.event.installplugin.DownloadApkResponseEvent
            r3 = 1006(0x3ee, float:1.41E-42)
            r7 = -1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = com.ymnsdk.replugin.patch.download.DownloadCode.translate(r19)
            r1.append(r4)
            r1.append(r2)
            r1.append(r12)
            r1.append(r2)
            r1.append(r0)
            r1.append(r2)
            r1.append(r5)
            r1.append(r2)
            r1.append(r13)
            java.lang.String r8 = r1.toString()
            long r0 = java.lang.System.currentTimeMillis()
            long r10 = r0 - r25
            java.lang.String r4 = ""
            r0 = r15
            r1 = r17
            r2 = r3
            r3 = r18
            r5 = r21
            r9 = r24
            r0.<init>(r1, r2, r3, r4, r5, r7, r8, r9, r10)
            r14.postToSeperllita(r15)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent r1 = new com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent
            r2 = 1045(0x415, float:1.464E-42)
            r3 = -1
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r27
            java.lang.String r6 = ""
            java.lang.String r7 = "下载失败"
            r19 = r1
            r20 = r17
            r21 = r2
            r22 = r18
            r23 = r6
            r24 = r3
            r25 = r7
            r26 = r4
            r19.<init>(r20, r21, r22, r23, r24, r25, r26)
            r0.postToSeperllita(r1)
            goto L105
        L98:
            com.ymnsdk.replugin.datafun.PostdataLib r14 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.DownloadPatchResponseEvent r15 = new com.ymnsdk.replugin.event.installplugin.DownloadPatchResponseEvent
            r3 = 1006(0x3ee, float:1.41E-42)
            r7 = -1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = com.ymnsdk.replugin.patch.download.DownloadCode.translate(r19)
            r1.append(r4)
            r1.append(r2)
            r1.append(r12)
            r1.append(r2)
            r1.append(r0)
            r1.append(r2)
            r1.append(r5)
            r1.append(r2)
            r1.append(r13)
            java.lang.String r8 = r1.toString()
            long r0 = java.lang.System.currentTimeMillis()
            long r10 = r0 - r25
            java.lang.String r4 = ""
            r0 = r15
            r1 = r17
            r2 = r3
            r3 = r18
            r5 = r21
            r9 = r24
            r0.<init>(r1, r2, r3, r4, r5, r7, r8, r9, r10)
            r14.postToSeperllita(r15)
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            r1 = r30
            r0.clrarPatchResource(r12, r13, r1)
            com.ymnsdk.replugin.feature.PluginInstallWapper r0 = getInstance()
            r1 = 5
            r2 = 15
            r3 = 1
            r19 = r0
            r20 = r17
            r21 = r18
            r22 = r1
            r23 = r2
            r24 = r29
            r25 = r3
            r26 = r31
            r19.installPlugin(r20, r21, r22, r23, r24, r25, r26)
        L105:
            return
    }

    public static com.ymnsdk.replugin.feature.PluginInstallWapper getInstance() {
            com.ymnsdk.replugin.feature.PluginInstallWapper r0 = com.ymnsdk.replugin.feature.PluginInstallWapper.wapper
            return r0
    }

    private void installPluginApk(com.ymnsdk.replugin.entity.PluginInfo r26, android.app.Activity r27, java.lang.String r28, java.lang.String r29, java.lang.String r30, int r31, long r32, java.lang.String r34, long r35, long r37, boolean r39, com.ymnsdk.replugin.listener.InstallPluginStatusListener r40) {
            r25 = this;
            r12 = r27
            r13 = r29
            r10 = r30
            r14 = r32
            r11 = r34
            r9 = r40
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r0.downloadEnd()
            com.ymnsdk.replugin.datafun.PostdataLib r7 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r8 = new com.ymnsdk.replugin.event.base.BaseEvent
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = "下载成功|"
            r0.append(r6)
            r0.append(r13)
            java.lang.String r5 = "|"
            r0.append(r5)
            r0.append(r10)
            r0.append(r5)
            r0.append(r14)
            r0.append(r5)
            r0.append(r11)
            java.lang.String r4 = r0.toString()
            int r16 = com.ymnsdk.replugin.patch.download.DownloadState.remerge_num
            long r0 = java.lang.System.currentTimeMillis()
            long r17 = r0 - r35
            r2 = 139020(0x21f0c, float:1.94809E-40)
            r3 = 0
            java.lang.String r19 = ""
            r20 = 0
            r0 = r8
            r1 = r27
            r21 = r5
            r5 = r19
            r22 = r6
            r6 = r16
            r23 = r7
            r24 = r8
            r7 = r17
            r9 = r20
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r9)
            r0 = r23
            r1 = r24
            r0.postEvent(r1)
            if (r31 == 0) goto L6f
            goto Lf2
        L6f:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r1 = r26
            r0.putLocalDownedPlugin(r13, r1)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalSilentDowningPlugin()
            boolean r1 = r0.containsKey(r13)
            if (r1 == 0) goto L89
            r0.remove(r13)
        L89:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r1 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r1.putLocalSilentDowningPlugin(r0)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalUserDowningPlugin()
            boolean r1 = r0.containsKey(r13)
            if (r1 == 0) goto La1
            r0.remove(r13)
        La1:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r1 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r1.putLocalUserDowningPlugin(r0)
            com.ymnsdk.replugin.datafun.PostdataLib r9 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.DownloadApkResponseEvent r8 = new com.ymnsdk.replugin.event.installplugin.DownloadApkResponseEvent
            r2 = 1005(0x3ed, float:1.408E-42)
            r7 = 0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = r22
            r0.append(r1)
            r0.append(r13)
            r1 = r21
            r0.append(r1)
            r0.append(r10)
            r0.append(r1)
            r0.append(r14)
            r0.append(r1)
            r0.append(r11)
            java.lang.String r10 = r0.toString()
            r11 = 0
            long r0 = java.lang.System.currentTimeMillis()
            long r16 = r0 - r35
            java.lang.String r4 = ""
            r0 = r8
            r1 = r27
            r3 = r29
            r5 = r32
            r14 = r8
            r8 = r10
            r15 = r9
            r9 = r11
            r10 = r16
            r0.<init>(r1, r2, r3, r4, r5, r7, r8, r9, r10)
            r15.postToSeperllita(r14)
        Lf2:
            if (r39 == 0) goto L101
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.StopInstallInStartPluginEvent r1 = new com.ymnsdk.replugin.event.installplugin.StopInstallInStartPluginEvent
            r1.<init>(r12)
            r0.postToSeperllita(r1)
            return
        L101:
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.RepluginInstallRequestEvent r1 = new com.ymnsdk.replugin.event.installplugin.RepluginInstallRequestEvent
            r1.<init>(r12, r13)
            r0.postToSeperllita(r1)
            int r0 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getIsLog()
            r1 = 1
            if (r0 != r1) goto L115
            goto L116
        L115:
            r1 = 0
        L116:
            r0 = r28
            com.qihoo360.replugin.model.PluginInfo r0 = com.qihoo360.replugin.RePlugin.install(r0, r1)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r1 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r1 = r1.getLocalGetPlugin()
            if (r0 == 0) goto L1a6
            boolean r0 = r1.containsKey(r13)
            if (r0 != 0) goto L134
            java.lang.String r0 = "宿主配置的插件中不存在该pluginIc"
            r2 = r40
            r2.onFailure(r0)
            return
        L134:
            r2 = r40
            java.lang.Object r0 = r1.get(r13)
            com.ymnsdk.replugin.entity.PluginInfo r0 = (com.ymnsdk.replugin.entity.PluginInfo) r0
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r1 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r1.putLocalInstallPlugin(r13, r0)
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r3 = new com.ymnsdk.replugin.event.base.BaseEvent
            r4 = 139005(0x21efd, float:1.94787E-40)
            r5 = 0
            java.lang.String r6 = r0.getPlugin_version()
            java.lang.String r7 = "安装成功"
            r30 = r3
            r31 = r27
            r32 = r4
            r33 = r5
            r34 = r7
            r35 = r6
            r30.<init>(r31, r32, r33, r34, r35)
            r1.postEvent(r3)
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent r3 = new com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent
            r4 = 1044(0x414, float:1.463E-42)
            java.lang.String r0 = r0.getPlugin_version()
            long r6 = java.lang.System.currentTimeMillis()
            long r6 = r6 - r37
            java.lang.String r8 = "安装成功"
            r30 = r3
            r32 = r4
            r33 = r29
            r34 = r0
            r35 = r5
            r36 = r8
            r37 = r6
            r30.<init>(r31, r32, r33, r34, r35, r36, r37)
            r1.postToSeperllita(r3)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.RepliginInstallResponseEvent r1 = new com.ymnsdk.replugin.event.installplugin.RepliginInstallResponseEvent
            r3 = 1044(0x414, float:1.463E-42)
            r1.<init>(r12, r3, r13)
            r0.postToSeperllita(r1)
            com.ymnsdk.replugin.trace.PluginTraceManager r0 = com.ymnsdk.replugin.trace.PluginTraceManager.getInstance()
            r0.deleteInstallPluginLog()
            r40.onSuccess()
            goto L211
        L1a6:
            r2 = r40
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r3 = new com.ymnsdk.replugin.event.base.BaseEvent
            r4 = 139005(0x21efd, float:1.94787E-40)
            r5 = -1
            java.lang.Object r6 = r1.get(r13)
            com.ymnsdk.replugin.entity.PluginInfo r6 = (com.ymnsdk.replugin.entity.PluginInfo) r6
            java.lang.String r6 = r6.getPlugin_version()
            java.lang.String r7 = "info为空，安装失败"
            r30 = r3
            r31 = r27
            r32 = r4
            r33 = r5
            r34 = r7
            r35 = r6
            r30.<init>(r31, r32, r33, r34, r35)
            r0.postEvent(r3)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent r3 = new com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent
            r4 = 1045(0x415, float:1.464E-42)
            java.lang.Object r1 = r1.get(r13)
            com.ymnsdk.replugin.entity.PluginInfo r1 = (com.ymnsdk.replugin.entity.PluginInfo) r1
            java.lang.String r1 = r1.getPlugin_version()
            long r6 = java.lang.System.currentTimeMillis()
            long r6 = r6 - r37
            java.lang.String r8 = "info为空，安装失败"
            r30 = r3
            r32 = r4
            r33 = r29
            r34 = r1
            r35 = r5
            r36 = r8
            r37 = r6
            r30.<init>(r31, r32, r33, r34, r35, r36, r37)
            r0.postToSeperllita(r3)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.RepliginInstallResponseEvent r1 = new com.ymnsdk.replugin.event.installplugin.RepliginInstallResponseEvent
            r3 = 1045(0x415, float:1.464E-42)
            r1.<init>(r12, r3, r13)
            r0.postToSeperllita(r1)
            java.lang.String r0 = "info为空，安装失败"
            r2.onFailure(r0)
        L211:
            return
    }

    public void installApk(com.ymnsdk.replugin.entity.PluginInfo r20, android.app.Activity r21, java.lang.String r22, java.lang.String r23, int r24, long r25, java.lang.String r27, long r28, java.lang.String r30, int r31, int r32, long r33, boolean r35, boolean r36, com.ymnsdk.replugin.listener.InstallPluginStatusListener r37) {
            r19 = this;
            r10 = r20
            r14 = r21
            r15 = r22
            r11 = r27
            r8 = r33
            r6 = r37
            com.ymnsdk.replugin.entity.Plugin r0 = com.ymnsdk.replugin.manger.PluginMangerUtils.findPluginById(r22)
            com.ymnsdk.replugin.util.SilentDownloadUtils.checkDowningPlugin(r14, r0)
            com.ymnsdk.replugin.util.SilentDownloadUtils.checkPatch(r14, r10)
            java.lang.String r0 = com.ymnsdk.replugin.util.ResourceUtil.urlOnSdCard4Public()     // Catch: java.lang.Exception -> L1b
            goto L22
        L1b:
            r0 = move-exception
            r1 = r0
            r1.printStackTrace()
            java.lang.String r0 = ""
        L22:
            if (r0 == 0) goto L35
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L35
            boolean r0 = com.ymnsdk.replugin.util.ApkUtils.isLocalApkExist()
            if (r0 == 0) goto L35
            com.ymnsdk.replugin.util.ApkUtils.installLocalApk(r14, r15, r8, r6)
            goto L129
        L35:
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r0 = r0.joinPluginPath(r11)
            com.ymnsdk.replugin.util.DownloadUtils r1 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            r2 = 4612811918334230528(0x4004000000000000, double:2.5)
            r4 = r28
            boolean r1 = r1.checkMemory(r4, r2)
            if (r1 != 0) goto L96
            java.lang.String r0 = "当前剩余内存磁盘空间不足"
            r6.onFailure(r0)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r1 = new com.ymnsdk.replugin.event.base.BaseEvent
            r2 = 139005(0x21efd, float:1.94787E-40)
            r3 = -1
            java.lang.String r4 = "当前剩余内存磁盘空间不足"
            java.lang.String r5 = ""
            r23 = r1
            r24 = r21
            r25 = r2
            r26 = r3
            r27 = r4
            r28 = r5
            r23.<init>(r24, r25, r26, r27, r28)
            r0.postEvent(r1)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent r1 = new com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent
            r2 = 1045(0x415, float:1.464E-42)
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r8
            java.lang.String r6 = ""
            java.lang.String r7 = "当前剩余内存磁盘空间不足"
            r23 = r1
            r25 = r2
            r26 = r22
            r27 = r6
            r28 = r3
            r29 = r7
            r30 = r4
            r23.<init>(r24, r25, r26, r27, r28, r29, r30)
            r0.postToSeperllita(r1)
            return
        L96:
            if (r24 != 0) goto Laf
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.DownloadApkRequestEvent r2 = new com.ymnsdk.replugin.event.installplugin.DownloadApkRequestEvent
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r3 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r3 = r3.toJson(r10)
            r4 = r35
            r2.<init>(r14, r15, r3, r4)
            r1.postToSeperllita(r2)
            goto Lc5
        Laf:
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.installplugin.DownloadPatchRequestEvent r2 = new com.ymnsdk.replugin.event.installplugin.DownloadPatchRequestEvent
            r3 = 1047(0x417, float:1.467E-42)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r10)
            r2.<init>(r14, r3, r15, r4)
            r1.postToSeperllita(r2)
        Lc5:
            long r12 = java.lang.System.currentTimeMillis()
            com.ymnsdk.replugin.util.DownloadUtils r1 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.util.List r1 = r1.addMd5(r10, r11)
            r10.setMd5List(r1)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r1 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r1.putLocalUserDowningPlugin(r15, r10)
            com.ymnsdk.replugin.patch.download.DownloadFileState r1 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r7 = r23
            r1.syncDownloadStatus(r11, r7, r0)
            com.ymnsdk.replugin.patch.download.FileDownloader r0 = com.ymnsdk.replugin.patch.download.FileDownloader.getInstance()
            r0.resume(r11)
            long r0 = java.lang.System.currentTimeMillis()
            r5 = r19
            r5.recoveryTime = r0
            r0 = 0
            com.ymnsdk.replugin.feature.PluginInstallWapper$2 r18 = new com.ymnsdk.replugin.feature.PluginInstallWapper$2
            r1 = r18
            r2 = r19
            r3 = r21
            r4 = r22
            r5 = r27
            r6 = r25
            r8 = r30
            r9 = r24
            r10 = r20
            r11 = r23
            r14 = r33
            r16 = r36
            r17 = r37
            r1.<init>(r2, r3, r4, r5, r6, r8, r9, r10, r11, r12, r14, r16, r17)
            r1 = r21
            r2 = r22
            r3 = r23
            r4 = r24
            r5 = r25
            r7 = r27
            r8 = r31
            r9 = r32
            r10 = r0
            r11 = r18
            com.ymnsdk.replugin.patch.download.PatchDownloadApi.downloadPatch(r1, r2, r3, r4, r5, r7, r8, r9, r10, r11)
        L129:
            return
    }

    public void installPlugin(android.app.Activity r12, java.lang.String r13, int r14, int r15, boolean r16, boolean r17, com.ymnsdk.replugin.listener.InstallPluginStatusListener r18) {
            r11 = this;
            boolean r0 = com.ymnsdk.replugin.util.DownloadUtils.mergeing
            if (r0 == 0) goto Lc
            java.lang.String r0 = "正在静默合包中"
            r5 = r18
            r5.onFailure(r0)
            return
        Lc:
            r5 = r18
            java.lang.Thread r0 = new java.lang.Thread
            com.ymnsdk.replugin.feature.PluginInstallWapper$1 r10 = new com.ymnsdk.replugin.feature.PluginInstallWapper$1
            r1 = r10
            r2 = r11
            r3 = r13
            r4 = r12
            r6 = r17
            r7 = r14
            r8 = r15
            r9 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            r0.<init>(r10)
            r0.start()
            return
    }
}
