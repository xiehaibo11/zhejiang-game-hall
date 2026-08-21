package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DialogUtils {
    private static volatile com.ymnsdk.replugin.util.DialogUtils dialogUtils;


    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    class 2 implements java.lang.Runnable {
        final com.ymnsdk.replugin.util.DialogUtils this$0;
        final android.app.Activity val$activity;
        final java.lang.String val$fromVersion;
        final boolean val$isComplete;
        final com.ymnsdk.replugin.listener.OpenListener val$listener;
        final java.lang.String val$loginJsonStr;
        final java.lang.String val$pluginId;
        final int val$updateType;


        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes4.dex
         */
        class 2 implements android.content.DialogInterface.OnClickListener {
            final com.ymnsdk.replugin.util.DialogUtils.2 this$1;


            2(com.ymnsdk.replugin.util.DialogUtils.2 r1) {
                    r0 = this;
                    r0.this$1 = r1
                    r0.<init>()
                    return
            }

            @Override
            public void onClick(android.content.DialogInterface r3, int r4) {
                    r2 = this;
                    com.ymnsdk.replugin.datafun.PostdataLib r3 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
                    com.ymnsdk.replugin.event.ui.UpdateCancelEvent r4 = new com.ymnsdk.replugin.event.ui.UpdateCancelEvent
                    com.ymnsdk.replugin.util.DialogUtils$2 r0 = r2.this$1
                    android.app.Activity r0 = r0.val$activity
                    com.ymnsdk.replugin.util.DialogUtils$2 r1 = r2.this$1
                    java.lang.String r1 = r1.val$pluginId
                    r4.<init>(r0, r1)
                    r3.postToSeperllita(r4)
                    com.ymnsdk.replugin.feature.PluginManager r3 = new com.ymnsdk.replugin.feature.PluginManager
                    com.ymnsdk.replugin.util.DialogUtils$2 r4 = r2.this$1
                    android.app.Activity r4 = r4.val$activity
                    r3.<init>(r4)
                    com.ymnsdk.replugin.util.DialogUtils$2 r4 = r2.this$1
                    java.lang.String r4 = r4.val$pluginId
                    com.ymnsdk.replugin.util.DialogUtils$2$2$1 r0 = new com.ymnsdk.replugin.util.DialogUtils$2$2$1
                    r0.<init>(r2, r3)
                    r3.isInstallPlugin(r4, r0)
                    return
            }
        }

        2(com.ymnsdk.replugin.util.DialogUtils r1, android.app.Activity r2, java.lang.String r3, boolean r4, java.lang.String r5, com.ymnsdk.replugin.listener.OpenListener r6, java.lang.String r7, int r8) {
                r0 = this;
                r0.this$0 = r1
                r0.val$activity = r2
                r0.val$pluginId = r3
                r0.val$isComplete = r4
                r0.val$fromVersion = r5
                r0.val$listener = r6
                r0.val$loginJsonStr = r7
                r0.val$updateType = r8
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r5 = this;
                com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
                com.ymnsdk.replugin.event.ui.UpdateDialogShowEvent r1 = new com.ymnsdk.replugin.event.ui.UpdateDialogShowEvent
                android.app.Activity r2 = r5.val$activity
                java.lang.String r3 = r5.val$pluginId
                r1.<init>(r2, r3)
                r0.postToSeperllita(r1)
                com.ymnsdk.replugin.ui.TipDialog r0 = new com.ymnsdk.replugin.ui.TipDialog
                android.app.Activity r1 = r5.val$activity
                r0.<init>(r1)
                r0.show()
                com.ymnsdk.replugin.util.DialogUtils r1 = r5.this$0
                java.lang.String r2 = r5.val$pluginId
                boolean r3 = r5.val$isComplete
                java.lang.String r1 = r1.getUpdateTitle(r2, r3)
                r0.setTitle(r1)
                com.ymnsdk.replugin.util.DialogUtils r1 = r5.this$0
                java.lang.String r2 = r5.val$pluginId
                java.lang.String r3 = r5.val$fromVersion
                boolean r4 = r5.val$isComplete
                java.lang.String r1 = r1.getUpdateContent(r2, r3, r4)
                r0.setContent(r1)
                com.ymnsdk.replugin.util.DialogUtils r1 = r5.this$0
                java.lang.String r2 = r5.val$pluginId
                boolean r3 = r5.val$isComplete
                java.lang.String r1 = r1.getUpdateBtnTitle(r2, r3)
                r0.setPosBtTx(r1)
                com.ymnsdk.replugin.util.DialogUtils$2$1 r1 = new com.ymnsdk.replugin.util.DialogUtils$2$1
                r1.<init>(r5)
                r0.setPositiveButton(r1)
                com.ymnsdk.replugin.util.DialogUtils$2$2 r1 = new com.ymnsdk.replugin.util.DialogUtils$2$2
                r1.<init>(r5)
                r0.setNegativeButton(r1)
                return
        }
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    class 3 implements java.lang.Runnable {
        final com.ymnsdk.replugin.util.DialogUtils this$0;
        final android.app.Activity val$activity;
        final com.ymnsdk.replugin.listener.AllowStartPluginListener val$listener;
        final java.lang.String val$loginJsonStr;
        final java.lang.String val$pluginId;



        3(com.ymnsdk.replugin.util.DialogUtils r1, android.app.Activity r2, java.lang.String r3, java.lang.String r4, com.ymnsdk.replugin.listener.AllowStartPluginListener r5) {
                r0 = this;
                r0.this$0 = r1
                r0.val$activity = r2
                r0.val$pluginId = r3
                r0.val$loginJsonStr = r4
                r0.val$listener = r5
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r4 = this;
                com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
                com.ymnsdk.replugin.event.ui.StartDialogShowEvent r1 = new com.ymnsdk.replugin.event.ui.StartDialogShowEvent
                android.app.Activity r2 = r4.val$activity
                java.lang.String r3 = r4.val$pluginId
                r1.<init>(r2, r3)
                r0.postToSeperllita(r1)
                com.ymnsdk.replugin.ui.TipDialog r0 = new com.ymnsdk.replugin.ui.TipDialog
                android.app.Activity r1 = r4.val$activity
                r0.<init>(r1)
                r0.show()
                java.lang.String r1 = "游戏更新"
                r0.setTitle(r1)
                java.lang.String r1 = "新版来袭，点击立即体验"
                r0.setContent(r1)
                java.lang.String r1 = "确定"
                r0.setPosBtTx(r1)
                com.ymnsdk.replugin.util.DialogUtils$3$1 r1 = new com.ymnsdk.replugin.util.DialogUtils$3$1
                r1.<init>(r4)
                r0.setPositiveButton(r1)
                com.ymnsdk.replugin.util.DialogUtils$3$2 r1 = new com.ymnsdk.replugin.util.DialogUtils$3$2
                r1.<init>(r4)
                r0.setNegativeButton(r1)
                return
        }
    }


    public DialogUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ymnsdk.replugin.util.DialogUtils getInstance() {
            com.ymnsdk.replugin.util.DialogUtils r0 = com.ymnsdk.replugin.util.DialogUtils.dialogUtils
            if (r0 != 0) goto L17
            java.lang.Class<com.ymnsdk.replugin.util.DialogUtils> r0 = com.ymnsdk.replugin.util.DialogUtils.class
            monitor-enter(r0)
            com.ymnsdk.replugin.util.DialogUtils r1 = com.ymnsdk.replugin.util.DialogUtils.dialogUtils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ymnsdk.replugin.util.DialogUtils r1 = new com.ymnsdk.replugin.util.DialogUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ymnsdk.replugin.util.DialogUtils.dialogUtils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ymnsdk.replugin.util.DialogUtils r0 = com.ymnsdk.replugin.util.DialogUtils.dialogUtils
            return r0
    }

    public long getDownloadRemain(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalGetPlugin()
            boolean r1 = r0.containsKey(r6)
            if (r1 != 0) goto L11
            r6 = 0
            return r6
        L11:
            java.lang.Object r1 = r0.get(r6)
            com.ymnsdk.replugin.entity.PluginInfo r1 = (com.ymnsdk.replugin.entity.PluginInfo) r1
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r2 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r2 = r2.getLocalInstallPlugin()
            boolean r2 = r2.containsKey(r6)
            if (r2 == 0) goto L68
            com.ymnsdk.replugin.manger.PluginMangerUtils.getInstance()
            java.lang.Object r0 = r0.get(r6)
            com.ymnsdk.replugin.entity.PluginInfo r0 = (com.ymnsdk.replugin.entity.PluginInfo) r0
            com.ymnsdk.replugin.entity.Patch r7 = com.ymnsdk.replugin.manger.PluginMangerUtils.findPatch(r6, r0, r7)
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            boolean r6 = r0.hasOldApk(r6)
            if (r7 == 0) goto L53
            if (r6 == 0) goto L53
            long r0 = r7.getPatch_size()
            com.ymnsdk.replugin.util.DownloadUtils r6 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r7 = r7.getPatch_md5()
            java.lang.String r6 = r6.joinPluginPath(r7)
            long r6 = r5.getFileSize(r6)
            goto L7f
        L53:
            long r6 = r1.getFile_size()
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r1 = r1.getFile_md5()
            java.lang.String r0 = r0.joinPluginPath(r1)
            long r0 = r5.getFileSize(r0)
            goto L7c
        L68:
            long r6 = r1.getFile_size()
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r1 = r1.getFile_md5()
            java.lang.String r0 = r0.joinPluginPath(r1)
            long r0 = r5.getFileSize(r0)
        L7c:
            r3 = r6
            r6 = r0
            r0 = r3
        L7f:
            long r0 = r0 - r6
            r6 = 1024(0x400, double:5.06E-321)
            long r0 = r0 / r6
            long r0 = r0 / r6
            r6 = 1
            int r2 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r2 >= 0) goto L8b
            r0 = r6
        L8b:
            return r0
    }

    public long getFileSize(java.lang.String r4) {
            r3 = this;
            r0 = 0
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L18
            r2.<init>(r4)     // Catch: java.lang.Exception -> L18
            boolean r4 = r2.exists()     // Catch: java.lang.Exception -> L18
            if (r4 == 0) goto L17
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L18
            r4.<init>(r2)     // Catch: java.lang.Exception -> L18
            int r4 = r4.available()     // Catch: java.lang.Exception -> L18
            long r0 = (long) r4
        L17:
            return r0
        L18:
            r4 = move-exception
            r4.printStackTrace()
            return r0
    }

    public java.lang.String getUpdateBtnTitle(java.lang.String r1, boolean r2) {
            r0 = this;
            if (r2 == 0) goto L5
            java.lang.String r1 = "安装"
            return r1
        L5:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r2 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r2 = r2.getLocalInstallPlugin()
            boolean r1 = r2.containsKey(r1)
            if (r1 == 0) goto L16
            java.lang.String r1 = "更新"
            return r1
        L16:
            java.lang.String r1 = "下载"
            return r1
    }

    public java.lang.String getUpdateContent(java.lang.String r2, java.lang.String r3, boolean r4) {
            r1 = this;
            if (r4 == 0) goto L5
            java.lang.String r2 = "资源下载完成，立即安装（不耗费流量）"
            return r2
        L5:
            long r3 = r1.getDownloadRemain(r2, r3)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalInstallPlugin()
            boolean r2 = r0.containsKey(r2)
            if (r2 == 0) goto L2e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "发现新版本"
            r2.append(r0)
            r2.append(r3)
            java.lang.String r3 = "MB，立即更新"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            return r2
        L2e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "即将开始下载，"
            r2.append(r0)
            r2.append(r3)
            java.lang.String r3 = "MB"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            return r2
    }

    public java.lang.String getUpdateTitle(java.lang.String r1, boolean r2) {
            r0 = this;
            if (r2 == 0) goto L5
            java.lang.String r1 = "游戏安装提示"
            return r1
        L5:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r2 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r2 = r2.getLocalInstallPlugin()
            boolean r1 = r2.containsKey(r1)
            if (r1 == 0) goto L16
            java.lang.String r1 = "游戏更新提示"
            return r1
        L16:
            java.lang.String r1 = "游戏下载提示"
            return r1
    }

    public boolean isDownloadComplete(java.lang.String r7, java.lang.String r8) {
            r6 = this;
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalGetPlugin()
            boolean r1 = r0.containsKey(r7)
            r2 = 0
            if (r1 != 0) goto L10
            return r2
        L10:
            java.lang.Object r1 = r0.get(r7)
            com.ymnsdk.replugin.entity.PluginInfo r1 = (com.ymnsdk.replugin.entity.PluginInfo) r1
            if (r1 != 0) goto L19
            return r2
        L19:
            com.ymnsdk.replugin.manger.PluginMangerUtils.getInstance()
            com.ymnsdk.replugin.entity.Plugin r3 = com.ymnsdk.replugin.manger.PluginMangerUtils.findPluginById(r7)
            if (r3 != 0) goto L23
            return r2
        L23:
            com.ymnsdk.replugin.util.DownloadUtils r3 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r7)
            java.lang.String r5 = "old.apk"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.String r3 = r3.joinPluginPath(r4)
            com.ymnsdk.replugin.util.DownloadUtils r4 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r5 = r1.getFile_md5()
            boolean r3 = r4.checkMd5(r3, r5)
            r4 = 1
            if (r3 == 0) goto L4c
            return r4
        L4c:
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r3 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r3 = r3.getLocalInstallPlugin()
            boolean r3 = r3.containsKey(r7)
            if (r3 == 0) goto L9f
            com.ymnsdk.replugin.manger.PluginMangerUtils.getInstance()
            java.lang.Object r0 = r0.get(r7)
            com.ymnsdk.replugin.entity.PluginInfo r0 = (com.ymnsdk.replugin.entity.PluginInfo) r0
            com.ymnsdk.replugin.entity.Patch r7 = com.ymnsdk.replugin.manger.PluginMangerUtils.findPatch(r7, r0, r8)
            if (r7 == 0) goto L84
            com.ymnsdk.replugin.util.DownloadUtils r8 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r0 = r7.getPatch_md5()
            java.lang.String r8 = r8.joinPluginPath(r0)
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r7 = r7.getPatch_md5()
            boolean r7 = r0.checkMd5(r8, r7)
            if (r7 == 0) goto Lba
            return r4
        L84:
            com.ymnsdk.replugin.util.DownloadUtils r7 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r8 = r1.getFile_md5()
            java.lang.String r7 = r7.joinPluginPath(r8)
            com.ymnsdk.replugin.util.DownloadUtils r8 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r0 = r1.getFile_md5()
            boolean r7 = r8.checkMd5(r7, r0)
            if (r7 == 0) goto Lba
            return r4
        L9f:
            com.ymnsdk.replugin.util.DownloadUtils r7 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r8 = r1.getFile_md5()
            java.lang.String r7 = r7.joinPluginPath(r8)
            com.ymnsdk.replugin.util.DownloadUtils r8 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.lang.String r0 = r1.getFile_md5()
            boolean r7 = r8.checkMd5(r7, r0)
            if (r7 == 0) goto Lba
            return r4
        Lba:
            return r2
    }

    public void showErrorDialog(android.app.Activity r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = com.ymnsdk.replugin.manger.PluginMangerUtils.getIsShowErrorDialog(r3)
            if (r0 == 0) goto Le
            com.ymnsdk.replugin.util.DialogUtils$4 r0 = new com.ymnsdk.replugin.util.DialogUtils$4
            r0.<init>(r1, r2, r3)
            r2.runOnUiThread(r0)
        Le:
            return
    }

    public void showMaintainDialog(android.app.Activity r1, java.lang.String r2, java.lang.String r3, com.ymnsdk.replugin.listener.OpenListener r4) {
            r0 = this;
            com.ymnsdk.replugin.util.DialogUtils$1 r2 = new com.ymnsdk.replugin.util.DialogUtils$1
            r2.<init>(r0, r1, r3, r4)
            r1.runOnUiThread(r2)
            return
    }

    public void showStartDialog(android.app.Activity r8, java.lang.String r9, java.lang.String r10, com.ymnsdk.replugin.listener.AllowStartPluginListener r11) {
            r7 = this;
            com.ymnsdk.replugin.util.DialogUtils$3 r6 = new com.ymnsdk.replugin.util.DialogUtils$3
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            r8.runOnUiThread(r6)
            return
    }

    public void showUpdateDialog(android.app.Activity r12, java.lang.String r13, java.lang.String r14, int r15, java.lang.String r16, com.ymnsdk.replugin.listener.OpenListener r17) {
            r11 = this;
            r9 = r11
            r3 = r13
            r5 = r16
            boolean r4 = r11.isDownloadComplete(r13, r5)
            com.ymnsdk.replugin.util.DialogUtils$2 r10 = new com.ymnsdk.replugin.util.DialogUtils$2
            r0 = r10
            r1 = r11
            r2 = r12
            r6 = r17
            r7 = r14
            r8 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = r12
            r12.runOnUiThread(r10)
            return
    }
}
