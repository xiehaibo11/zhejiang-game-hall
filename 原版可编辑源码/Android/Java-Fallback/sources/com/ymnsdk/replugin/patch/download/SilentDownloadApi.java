package com.ymnsdk.replugin.patch.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class SilentDownloadApi {
    public static android.app.Activity activity;
    private static com.ymnsdk.replugin.patch.download.SilentDownloadApi downloadApi;
    public static int downloadType;
    public static long startSilentDownloadTime;
    public long beforeProcess;
    private java.util.concurrent.CountDownLatch countDownLatch;
    public java.util.HashMap<java.lang.String, java.lang.Boolean> hasZeroDownloadPointMap;
    public volatile int maxDownloadNum;
    public long silentDownloadDur;
    public java.lang.String silentPlugin;
    public long silentRecoveryTime;






    static {
            com.ymnsdk.replugin.patch.download.SilentDownloadApi r0 = new com.ymnsdk.replugin.patch.download.SilentDownloadApi
            r0.<init>()
            com.ymnsdk.replugin.patch.download.SilentDownloadApi.downloadApi = r0
            r0 = 0
            com.ymnsdk.replugin.patch.download.SilentDownloadApi.downloadType = r0
            return
    }

    public SilentDownloadApi() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.beforeProcess = r0
            r0 = 0
            r2.silentDownloadDur = r0
            r2.silentRecoveryTime = r0
            java.lang.String r0 = ""
            r2.silentPlugin = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.hasZeroDownloadPointMap = r0
            r0 = 0
            r2.maxDownloadNum = r0
            r0 = 0
            r2.countDownLatch = r0
            return
    }

    static java.util.concurrent.CountDownLatch access$000(com.ymnsdk.replugin.patch.download.SilentDownloadApi r0) {
            java.util.concurrent.CountDownLatch r0 = r0.countDownLatch
            return r0
    }

    static java.util.concurrent.CountDownLatch access$002(com.ymnsdk.replugin.patch.download.SilentDownloadApi r0, java.util.concurrent.CountDownLatch r1) {
            r0.countDownLatch = r1
            return r1
    }

    static void access$100(com.ymnsdk.replugin.patch.download.SilentDownloadApi r0) {
            r0.decreaseCountDownLatch()
            return
    }

    private void decreaseCountDownLatch() {
            r4 = this;
            java.util.concurrent.CountDownLatch r0 = r4.countDownLatch
            long r0 = r0.getCount()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Ld
            return
        Ld:
            java.util.concurrent.CountDownLatch r0 = r4.countDownLatch
            r0.countDown()
            return
    }

    public static com.ymnsdk.replugin.patch.download.SilentDownloadApi getInstance() {
            com.ymnsdk.replugin.patch.download.SilentDownloadApi r0 = com.ymnsdk.replugin.patch.download.SilentDownloadApi.downloadApi
            return r0
    }

    public void downloadOnePlugin(android.app.Activity r15, boolean r16, int r17) {
            r14 = this;
            r13 = r14
            r2 = r15
            r12 = r17
            int r0 = r13.maxDownloadNum
            if (r12 > r0) goto L184
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r0 = r0.isOpenSilentDownload()
            if (r0 != 0) goto L14
            goto L184
        L14:
            r0 = -1
            r13.beforeProcess = r0
            r0 = 0
            r13.silentDownloadDur = r0
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r0 = r0.isOpenSilentDownload()
            if (r0 != 0) goto L27
            return
        L27:
            java.lang.String r3 = r14.getPluginId()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "插件id 是"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "下载"
            android.util.Log.e(r1, r0)
            r0 = 0
            if (r3 == 0) goto L179
            boolean r1 = r3.isEmpty()
            if (r1 == 0) goto L4c
            goto L179
        L4c:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r1 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r1 = r1.getLocalGetPlugin()
            java.lang.Object r4 = r1.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r4 = (com.ymnsdk.replugin.entity.PluginInfo) r4
            if (r4 != 0) goto L5d
            return
        L5d:
            com.ymnsdk.replugin.manger.PluginMangerUtils.getInstance()
            com.ymnsdk.replugin.entity.Plugin r5 = com.ymnsdk.replugin.manger.PluginMangerUtils.findPluginById(r3)
            if (r5 != 0) goto L67
            return
        L67:
            com.ymnsdk.replugin.util.SilentDownloadUtils.checkPatch(r15, r4)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r4 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r4 = r4.getLocalDownedPlugin()
            boolean r6 = r4.containsKey(r3)
            if (r6 == 0) goto L134
            java.lang.Object r6 = r1.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r6 = (com.ymnsdk.replugin.entity.PluginInfo) r6
            java.lang.String r6 = r6.getPlugin_version()
            java.lang.Object r7 = r4.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r7 = (com.ymnsdk.replugin.entity.PluginInfo) r7
            java.lang.String r7 = r7.getPlugin_version()
            boolean r6 = r6.equals(r7)
            if (r6 == 0) goto L98
            int r1 = r12 + 1
            r14.downloadOnePlugin(r15, r0, r1)
            return
        L98:
            com.ymnsdk.replugin.manger.PluginMangerUtils.getInstance()
            java.lang.Object r0 = r1.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r0 = (com.ymnsdk.replugin.entity.PluginInfo) r0
            java.lang.Object r4 = r4.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r4 = (com.ymnsdk.replugin.entity.PluginInfo) r4
            java.lang.String r4 = r4.getPlugin_version()
            com.ymnsdk.replugin.entity.Patch r0 = com.ymnsdk.replugin.manger.PluginMangerUtils.findPatch(r3, r0, r4)
            com.ymnsdk.replugin.util.DownloadUtils r4 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            boolean r11 = r4.hasOldApk(r3)
            if (r0 == 0) goto Lf0
            if (r11 == 0) goto Lf0
            if (r16 != 0) goto Lf0
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r5.getBase_url()
            r4.append(r5)
            java.lang.String r5 = r0.getPatch_path()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r5 = 1
            long r6 = r0.getPatch_size()
            java.lang.String r8 = r0.getPatch_md5()
            java.lang.Object r0 = r1.get(r3)
            r1 = r0
            com.ymnsdk.replugin.entity.PluginInfo r1 = (com.ymnsdk.replugin.entity.PluginInfo) r1
            r9 = 5
            r10 = 15
            r0 = r14
            r2 = r15
            r12 = r17
            r0.downloadPlugin(r1, r2, r3, r4, r5, r6, r8, r9, r10, r11, r12)
            goto L178
        Lf0:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = r5.getBase_url()
            r0.append(r4)
            java.lang.Object r4 = r1.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r4 = (com.ymnsdk.replugin.entity.PluginInfo) r4
            java.lang.String r4 = r4.getRelease_path()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5 = 0
            java.lang.Object r0 = r1.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r0 = (com.ymnsdk.replugin.entity.PluginInfo) r0
            long r6 = r0.getFile_size()
            java.lang.Object r0 = r1.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r0 = (com.ymnsdk.replugin.entity.PluginInfo) r0
            java.lang.String r8 = r0.getFile_md5()
            java.lang.Object r0 = r1.get(r3)
            r1 = r0
            com.ymnsdk.replugin.entity.PluginInfo r1 = (com.ymnsdk.replugin.entity.PluginInfo) r1
            r9 = 5
            r10 = 15
            r0 = r14
            r2 = r15
            r12 = r17
            r0.downloadPlugin(r1, r2, r3, r4, r5, r6, r8, r9, r10, r11, r12)
            goto L178
        L134:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = r5.getBase_url()
            r0.append(r4)
            java.lang.Object r4 = r1.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r4 = (com.ymnsdk.replugin.entity.PluginInfo) r4
            java.lang.String r4 = r4.getRelease_path()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5 = 0
            java.lang.Object r0 = r1.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r0 = (com.ymnsdk.replugin.entity.PluginInfo) r0
            long r6 = r0.getFile_size()
            java.lang.Object r0 = r1.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r0 = (com.ymnsdk.replugin.entity.PluginInfo) r0
            java.lang.String r8 = r0.getFile_md5()
            java.lang.Object r0 = r1.get(r3)
            r1 = r0
            com.ymnsdk.replugin.entity.PluginInfo r1 = (com.ymnsdk.replugin.entity.PluginInfo) r1
            r9 = 5
            r10 = 15
            r11 = 1
            r0 = r14
            r2 = r15
            r12 = r17
            r0.downloadPlugin(r1, r2, r3, r4, r5, r6, r8, r9, r10, r11, r12)
        L178:
            return
        L179:
            com.ymnsdk.replugin.patch.download.DownloadState r1 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r1.setLoadState(r0)
        L184:
            return
    }

    public void downloadPlugin(com.ymnsdk.replugin.entity.PluginInfo r18, android.app.Activity r19, java.lang.String r20, java.lang.String r21, int r22, long r23, java.lang.String r25, int r26, int r27, boolean r28, int r29) {
            r17 = this;
            r3 = r19
            r10 = r25
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r9 = r0.joinPluginPath(r10)
            com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            r11 = r21
            r0.syncDownloadStatus(r10, r11, r9)
            com.ymnsdk.replugin.util.DownloadUtils r4 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            r5 = r25
            r6 = r23
            r8 = r21
            long r0 = r4.getDownSize(r5, r6, r8, r9)
            r4 = r20
            r6 = r22
            int r0 = com.ymnsdk.replugin.util.SilentDownloadUtils.checkSilentFilter(r4, r0, r6)
            if (r0 == 0) goto L3a
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.silentdownload.NotStartSilentDownloadEvent r2 = new com.ymnsdk.replugin.event.silentdownload.NotStartSilentDownloadEvent
            r2.<init>(r3, r0)
            r1.postToSeperllita(r2)
            return
        L3a:
            com.ymnsdk.replugin.entity.Plugin r0 = com.ymnsdk.replugin.manger.PluginMangerUtils.findPluginById(r20)
            com.ymnsdk.replugin.entity.silentfilter.SilentUpdateFilterEnity r0 = r0.getSilent_update_filter()
            if (r0 == 0) goto La8
            java.lang.String r0 = r0.getCustom_api_url()
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L9f
            com.ymnsdk.replugin.util.RequestRetryUtils r14 = com.ymnsdk.replugin.util.RequestRetryUtils.getInstance()
            r14.setActivity(r3)
            com.ymnsdk.replugin.action.RequestSilentUpdateFilterAction r15 = new com.ymnsdk.replugin.action.RequestSilentUpdateFilterAction
            r15.<init>(r3, r0)
            com.ymnsdk.replugin.entity.silentfilter.UserCustomRequestEnity r0 = new com.ymnsdk.replugin.entity.silentfilter.UserCustomRequestEnity
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getUserId()
            r0.setNum_id(r1)
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            r15.putReqData(r1)
            com.ymnsdk.replugin.patch.download.SilentDownloadApi$3 r13 = new com.ymnsdk.replugin.patch.download.SilentDownloadApi$3
            r0 = r13
            r1 = r17
            r2 = r18
            r3 = r19
            r4 = r20
            r5 = r21
            r6 = r22
            r7 = r23
            r9 = r25
            r10 = r26
            r11 = r27
            r12 = r28
            r16 = r13
            r13 = r29
            r18 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r9, r10, r11, r12, r13, r14, r15)
            r0 = r18
            r1 = r16
            r0.addObserver(r1)
            r0.actionStart()
            goto Lb0
        L9f:
            boolean r0 = com.ymnsdk.replugin.util.DownloadUtils.isUserDownload
            if (r0 == 0) goto La4
            return
        La4:
            r17.startSilentDownload(r18, r19, r20, r21, r22, r23, r25, r26, r27, r28, r29)
            goto Lb0
        La8:
            boolean r0 = com.ymnsdk.replugin.util.DownloadUtils.isUserDownload
            if (r0 == 0) goto Lad
            return
        Lad:
            r17.startSilentDownload(r18, r19, r20, r21, r22, r23, r25, r26, r27, r28, r29)
        Lb0:
            return
    }

    public void endSilentDownload() {
            r6 = this;
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r1 = 0
            r0.setOpenSilentDownload(r1)
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.setLoadState(r1)
            com.ymnsdk.replugin.patch.download.PatchDownloadApi.downloadStop()
            long r0 = r6.silentDownloadDur
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r6.silentRecoveryTime
            long r2 = r2 - r4
            long r0 = r0 + r2
            r6.silentDownloadDur = r0
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.silentdownload.EndSilentDownloadingEvent r1 = new com.ymnsdk.replugin.event.silentdownload.EndSilentDownloadingEvent
            android.app.Activity r2 = com.ymnsdk.replugin.patch.download.SilentDownloadApi.activity
            long r3 = r6.silentDownloadDur
            r1.<init>(r2, r3)
            r0.postToSeperllita(r1)
            return
    }

    public java.lang.String getApkPluginId() {
            r9 = this;
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalDownedPlugin()
            java.util.List r1 = com.ymnsdk.replugin.manger.PluginMangerUtils.getAllPlugin()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.lang.String r3 = ""
            if (r1 == 0) goto Ld7
            int r4 = r1.size()
            if (r4 != 0) goto L1d
            goto Ld7
        L1d:
            r4 = 0
            r5 = r4
        L1f:
            int r6 = r1.size()
            if (r5 >= r6) goto L7c
            java.lang.Object r6 = r1.get(r5)
            com.ymnsdk.replugin.entity.Plugin r6 = (com.ymnsdk.replugin.entity.Plugin) r6
            int r6 = r6.getSilent_update()
            r7 = 1
            if (r6 == r7) goto L33
            goto L79
        L33:
            if (r0 == 0) goto L72
            java.lang.Object r6 = r1.get(r5)
            com.ymnsdk.replugin.entity.Plugin r6 = (com.ymnsdk.replugin.entity.Plugin) r6
            java.lang.String r6 = r6.getId()
            boolean r6 = r0.containsKey(r6)
            if (r6 == 0) goto L72
            java.lang.Object r6 = r1.get(r5)
            com.ymnsdk.replugin.entity.Plugin r6 = (com.ymnsdk.replugin.entity.Plugin) r6
            java.lang.String r6 = r6.getId()
            java.lang.Object r6 = r0.get(r6)
            com.ymnsdk.replugin.entity.PluginInfo r6 = (com.ymnsdk.replugin.entity.PluginInfo) r6
            java.lang.String r6 = r6.getPlugin_version()
            java.lang.Object r7 = r1.get(r5)
            com.ymnsdk.replugin.entity.Plugin r7 = (com.ymnsdk.replugin.entity.Plugin) r7
            java.lang.String r7 = r7.getVersion()
            boolean r6 = r6.equals(r7)
            if (r6 == 0) goto L6a
            goto L79
        L6a:
            java.lang.Object r6 = r1.get(r5)
            r2.add(r6)
            goto L79
        L72:
            java.lang.Object r6 = r1.get(r5)
            r2.add(r6)
        L79:
            int r5 = r5 + 1
            goto L1f
        L7c:
            int r1 = r2.size()
            if (r1 != 0) goto L83
            return r3
        L83:
            java.util.List r1 = r9.sortPlugin(r2)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r2 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r2 = r2.getLocalGetPlugin()
        L8f:
            int r5 = r1.size()
            if (r4 >= r5) goto Ld7
            java.lang.Object r5 = r1.get(r4)
            com.ymnsdk.replugin.entity.Plugin r5 = (com.ymnsdk.replugin.entity.Plugin) r5
            java.lang.String r6 = r5.getId()
            boolean r6 = r0.containsKey(r6)
            if (r6 == 0) goto Ld2
            com.ymnsdk.replugin.manger.PluginMangerUtils.getInstance()
            java.lang.String r6 = r5.getId()
            java.lang.String r7 = r5.getId()
            java.lang.Object r7 = r2.get(r7)
            com.ymnsdk.replugin.entity.PluginInfo r7 = (com.ymnsdk.replugin.entity.PluginInfo) r7
            java.lang.String r8 = r5.getId()
            java.lang.Object r8 = r0.get(r8)
            com.ymnsdk.replugin.entity.PluginInfo r8 = (com.ymnsdk.replugin.entity.PluginInfo) r8
            java.lang.String r8 = r8.getPlugin_version()
            com.ymnsdk.replugin.entity.Patch r6 = com.ymnsdk.replugin.manger.PluginMangerUtils.findPatch(r6, r7, r8)
            if (r6 != 0) goto Lcf
            java.lang.String r0 = r5.getId()
            return r0
        Lcf:
            int r4 = r4 + 1
            goto L8f
        Ld2:
            java.lang.String r0 = r5.getId()
            return r0
        Ld7:
            return r3
    }

    public java.lang.String getPatchPluginId() {
            r9 = this;
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalDownedPlugin()
            java.util.List r1 = com.ymnsdk.replugin.manger.PluginMangerUtils.getAllPlugin()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.lang.String r3 = ""
            if (r1 == 0) goto Ld4
            int r4 = r1.size()
            if (r4 != 0) goto L1d
            goto Ld4
        L1d:
            r4 = 0
            r5 = r4
        L1f:
            int r6 = r1.size()
            if (r5 >= r6) goto L7c
            java.lang.Object r6 = r1.get(r5)
            com.ymnsdk.replugin.entity.Plugin r6 = (com.ymnsdk.replugin.entity.Plugin) r6
            int r6 = r6.getSilent_update()
            r7 = 1
            if (r6 == r7) goto L33
            goto L79
        L33:
            if (r0 == 0) goto L72
            java.lang.Object r6 = r1.get(r5)
            com.ymnsdk.replugin.entity.Plugin r6 = (com.ymnsdk.replugin.entity.Plugin) r6
            java.lang.String r6 = r6.getId()
            boolean r6 = r0.containsKey(r6)
            if (r6 == 0) goto L72
            java.lang.Object r6 = r1.get(r5)
            com.ymnsdk.replugin.entity.Plugin r6 = (com.ymnsdk.replugin.entity.Plugin) r6
            java.lang.String r6 = r6.getId()
            java.lang.Object r6 = r0.get(r6)
            com.ymnsdk.replugin.entity.PluginInfo r6 = (com.ymnsdk.replugin.entity.PluginInfo) r6
            java.lang.String r6 = r6.getPlugin_version()
            java.lang.Object r7 = r1.get(r5)
            com.ymnsdk.replugin.entity.Plugin r7 = (com.ymnsdk.replugin.entity.Plugin) r7
            java.lang.String r7 = r7.getVersion()
            boolean r6 = r6.equals(r7)
            if (r6 == 0) goto L6a
            goto L79
        L6a:
            java.lang.Object r6 = r1.get(r5)
            r2.add(r6)
            goto L79
        L72:
            java.lang.Object r6 = r1.get(r5)
            r2.add(r6)
        L79:
            int r5 = r5 + 1
            goto L1f
        L7c:
            int r1 = r2.size()
            if (r1 != 0) goto L83
            return r3
        L83:
            java.util.List r1 = r9.sortPlugin(r2)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r2 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r2 = r2.getLocalGetPlugin()
        L8f:
            int r5 = r1.size()
            if (r4 >= r5) goto Ld4
            java.lang.Object r5 = r1.get(r4)
            com.ymnsdk.replugin.entity.Plugin r5 = (com.ymnsdk.replugin.entity.Plugin) r5
            if (r0 == 0) goto Ld1
            java.lang.String r6 = r5.getId()
            boolean r6 = r0.containsKey(r6)
            if (r6 == 0) goto Ld1
            com.ymnsdk.replugin.manger.PluginMangerUtils.getInstance()
            java.lang.String r6 = r5.getId()
            java.lang.String r7 = r5.getId()
            java.lang.Object r7 = r2.get(r7)
            com.ymnsdk.replugin.entity.PluginInfo r7 = (com.ymnsdk.replugin.entity.PluginInfo) r7
            java.lang.String r8 = r5.getId()
            java.lang.Object r8 = r0.get(r8)
            com.ymnsdk.replugin.entity.PluginInfo r8 = (com.ymnsdk.replugin.entity.PluginInfo) r8
            java.lang.String r8 = r8.getPlugin_version()
            com.ymnsdk.replugin.entity.Patch r6 = com.ymnsdk.replugin.manger.PluginMangerUtils.findPatch(r6, r7, r8)
            if (r6 == 0) goto Ld1
            java.lang.String r0 = r5.getId()
            return r0
        Ld1:
            int r4 = r4 + 1
            goto L8f
        Ld4:
            return r3
    }

    public java.lang.String getPluginId() {
            r4 = this;
            java.lang.String r0 = r4.getUserPluginId()
            com.carlt.networklibs.NetType r1 = com.carlt.networklibs.utils.NetworkUtils.getNetType()
            com.carlt.networklibs.NetType r2 = com.carlt.networklibs.NetType.WIFI
            r3 = 0
            if (r1 == r2) goto Le
            r0 = r3
        Le:
            if (r0 == 0) goto L1a
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L1a
            r1 = 0
            com.ymnsdk.replugin.patch.download.SilentDownloadApi.downloadType = r1
            return r0
        L1a:
            java.lang.String r0 = r4.getPatchPluginId()
            com.carlt.networklibs.NetType r1 = com.carlt.networklibs.utils.NetworkUtils.getNetType()
            com.carlt.networklibs.NetType r2 = com.carlt.networklibs.NetType.WIFI
            if (r1 == r2) goto L28
            int r1 = com.ymnsdk.replugin.util.SilentDownloadUtils.isNoWifiDownload
        L28:
            if (r0 == 0) goto L34
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L34
            r1 = 1
            com.ymnsdk.replugin.patch.download.SilentDownloadApi.downloadType = r1
            return r0
        L34:
            java.lang.String r0 = r4.getApkPluginId()
            com.carlt.networklibs.NetType r1 = com.carlt.networklibs.utils.NetworkUtils.getNetType()
            com.carlt.networklibs.NetType r2 = com.carlt.networklibs.NetType.WIFI
            if (r1 == r2) goto L41
            goto L42
        L41:
            r3 = r0
        L42:
            if (r3 == 0) goto L4e
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto L4e
            r0 = 2
            com.ymnsdk.replugin.patch.download.SilentDownloadApi.downloadType = r0
            return r3
        L4e:
            java.lang.String r0 = ""
            return r0
    }

    public java.lang.String getUserPluginId() {
            r5 = this;
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalUserDowningPlugin()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L15:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L3c
            java.lang.Object r2 = r0.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r2 = r2.getValue()
            com.ymnsdk.replugin.entity.PluginInfo r2 = (com.ymnsdk.replugin.entity.PluginInfo) r2
            java.lang.String r2 = r2.getPlugin_id()
            com.ymnsdk.replugin.entity.Plugin r2 = com.ymnsdk.replugin.manger.PluginMangerUtils.findPluginById(r2)
            if (r2 == 0) goto L15
            int r3 = r2.getSilent_update()
            r4 = 1
            if (r3 != r4) goto L15
            r1.add(r2)
            goto L15
        L3c:
            int r0 = r1.size()
            if (r0 > 0) goto L45
            java.lang.String r0 = ""
            return r0
        L45:
            java.util.List r0 = r5.sortPlugin(r1)
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.ymnsdk.replugin.entity.Plugin r0 = (com.ymnsdk.replugin.entity.Plugin) r0
            java.lang.String r0 = r0.getId()
            return r0
    }

    public void loadHostConfig(android.app.Activity r6) {
            r5 = this;
            java.util.List r0 = com.ymnsdk.replugin.manger.PluginMangerUtils.getAllPlugin()
            if (r0 != 0) goto L7
            return
        L7:
            r1 = 0
        L8:
            int r2 = r0.size()
            if (r1 >= r2) goto L28
            java.lang.Object r2 = r0.get(r1)
            com.ymnsdk.replugin.entity.Plugin r2 = (com.ymnsdk.replugin.entity.Plugin) r2
            com.ymnsdk.replugin.feature.PluginStatusWapper r3 = new com.ymnsdk.replugin.feature.PluginStatusWapper
            r3.<init>(r6)
            java.lang.String r2 = r2.getId()
            com.ymnsdk.replugin.patch.download.SilentDownloadApi$2 r4 = new com.ymnsdk.replugin.patch.download.SilentDownloadApi$2
            r4.<init>(r5)
            r3.queryPluginStatus(r2, r4)
            int r1 = r1 + 1
            goto L8
        L28:
            return
    }

    public void saveDownload(java.lang.String r2, com.ymnsdk.replugin.entity.PluginInfo r3, int r4, int r5) {
            r1 = this;
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r0.downloadEnd()
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r0.putLocalDownedPlugin(r2, r3)
            r3 = 1
            if (r4 != r3) goto L2a
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r4 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r4 = r4.gutMergePatchData()
            boolean r0 = r4.containsKey(r2)
            if (r0 == 0) goto L22
            r4.remove(r2)
        L22:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r2 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r2.putMergePatchData(r4)
            goto L5a
        L2a:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r4 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r4 = r4.getLocalSilentDowningPlugin()
            boolean r0 = r4.containsKey(r2)
            if (r0 == 0) goto L3b
            r4.remove(r2)
        L3b:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r0.putLocalSilentDowningPlugin(r4)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r4 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r4 = r4.getLocalUserDowningPlugin()
            boolean r0 = r4.containsKey(r2)
            if (r0 == 0) goto L53
            r4.remove(r2)
        L53:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r2 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r2.putLocalUserDowningPlugin(r4)
        L5a:
            android.app.Activity r2 = com.ymnsdk.replugin.patch.download.SilentDownloadApi.activity
            r4 = 0
            int r5 = r5 + r3
            r1.downloadOnePlugin(r2, r4, r5)
            return
    }

    public java.util.List<com.ymnsdk.replugin.entity.Plugin> sortPlugin(java.util.List<com.ymnsdk.replugin.entity.Plugin> r2) {
            r1 = this;
            com.ymnsdk.replugin.patch.download.SilentDownloadApi$5 r0 = new com.ymnsdk.replugin.patch.download.SilentDownloadApi$5
            r0.<init>(r1)
            java.util.Collections.sort(r2, r0)
            return r2
    }

    public void startSilentDownload(android.app.Activity r3) {
            r2 = this;
            com.ymnsdk.replugin.patch.download.SilentDownloadApi.activity = r3
            java.lang.Thread r0 = new java.lang.Thread
            com.ymnsdk.replugin.patch.download.SilentDownloadApi$1 r1 = new com.ymnsdk.replugin.patch.download.SilentDownloadApi$1
            r1.<init>(r2, r3)
            r0.<init>(r1)
            r0.start()
            return
    }

    public void startSilentDownload(com.ymnsdk.replugin.entity.PluginInfo r18, android.app.Activity r19, java.lang.String r20, java.lang.String r21, int r22, long r23, java.lang.String r25, int r26, int r27, boolean r28, int r29) {
            r17 = this;
            r8 = r18
            r10 = r19
            r11 = r20
            r12 = r22
            r13 = r25
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(r20)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.silentdownload.StartSilentDownloadEvent r1 = new com.ymnsdk.replugin.event.silentdownload.StartSilentDownloadEvent
            r1.<init>(r10, r12)
            r0.postToSeperllita(r1)
            com.ymnsdk.replugin.patch.download.FileDownloader r0 = com.ymnsdk.replugin.patch.download.FileDownloader.getInstance()
            r0.resume(r13)
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.util.List r0 = r0.addMd5(r8, r13)
            r8.setMd5List(r0)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r0.putLocalSilentDowningPlugin(r11, r8)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.silentdownload.DownloadOnePluginEvent r1 = new com.ymnsdk.replugin.event.silentdownload.DownloadOnePluginEvent
            java.lang.String r2 = r18.getPlugin_version()
            r1.<init>(r10, r11, r2)
            r0.postToSeperllita(r1)
            if (r12 != 0) goto L56
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.silentdownload.ApkStartSilentDownloadEvent r1 = new com.ymnsdk.replugin.event.silentdownload.ApkStartSilentDownloadEvent
            r2 = r28
            r1.<init>(r10, r11, r2)
            r0.postToSeperllita(r1)
            goto L62
        L56:
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.silentdownload.PatchStartSilentDownloadEvent r1 = new com.ymnsdk.replugin.event.silentdownload.PatchStartSilentDownloadEvent
            r1.<init>(r10, r11)
            r0.postToSeperllita(r1)
        L62:
            long r0 = java.lang.System.currentTimeMillis()
            r14 = r17
            r14.silentRecoveryTime = r0
            boolean r0 = com.ymnsdk.replugin.util.DownloadUtils.isUserDownload
            if (r0 == 0) goto L6f
            return
        L6f:
            r15 = 1
            com.ymnsdk.replugin.patch.download.SilentDownloadApi$4 r16 = new com.ymnsdk.replugin.patch.download.SilentDownloadApi$4
            r0 = r16
            r1 = r17
            r2 = r19
            r3 = r20
            r4 = r25
            r5 = r23
            r7 = r22
            r8 = r18
            r9 = r29
            r0.<init>(r1, r2, r3, r4, r5, r7, r8, r9)
            r0 = r19
            r1 = r20
            r2 = r21
            r3 = r22
            r4 = r23
            r6 = r25
            r7 = r26
            r8 = r27
            r9 = r15
            r10 = r16
            com.ymnsdk.replugin.patch.download.PatchDownloadApi.downloadPatch(r0, r1, r2, r3, r4, r6, r7, r8, r9, r10)
            return
    }
}
