package com.ymnsdk.replugin.util;

import android.app.Activity;
import android.content.DialogInterface;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.entity.Patch;
import com.ymnsdk.replugin.entity.PluginFailInfo;
import com.ymnsdk.replugin.entity.PluginInfo;
import com.ymnsdk.replugin.event.allowstartplugin.AllowStartPluginResponseEvent;
import com.ymnsdk.replugin.event.openplugin.OpenPluginResponseEvent;
import com.ymnsdk.replugin.event.ui.StartCancelEvent;
import com.ymnsdk.replugin.event.ui.StartConfirmEvent;
import com.ymnsdk.replugin.event.ui.StartDialogShowEvent;
import com.ymnsdk.replugin.event.ui.UpdateCancelEvent;
import com.ymnsdk.replugin.event.ui.UpdateConfirmEvent;
import com.ymnsdk.replugin.event.ui.UpdateDialogShowEvent;
import com.ymnsdk.replugin.feature.PluginManager;
import com.ymnsdk.replugin.listener.AllowStartPluginListener;
import com.ymnsdk.replugin.listener.IsInstallPluginStatusListener;
import com.ymnsdk.replugin.listener.OpenListener;
import com.ymnsdk.replugin.listener.StartPluginStatusListener;
import com.ymnsdk.replugin.manger.PluginMangerUtils;
import com.ymnsdk.replugin.mode.PluginModeOne;
import com.ymnsdk.replugin.mode.PluginModeTwo;
import com.ymnsdk.replugin.ui.TipDialog;
import java.io.File;
import java.io.FileInputStream;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class DialogUtils {
    private static volatile DialogUtils dialogUtils;

    public static DialogUtils getInstance() {
        if (dialogUtils == null) {
            synchronized (DialogUtils.class) {
                if (dialogUtils == null) {
                    dialogUtils = new DialogUtils();
                }
            }
        }
        return dialogUtils;
    }

    public void showMaintainDialog(final Activity activity, String str, final String str2, final OpenListener openListener) {
        activity.runOnUiThread(new Runnable() { // from class: com.ymnsdk.replugin.util.DialogUtils.1
            @Override // java.lang.Runnable
            public void run() {
                TipDialog tipDialog = new TipDialog(activity);
                tipDialog.show();
                tipDialog.setTitle("游戏维护");
                tipDialog.setContent(str2);
                openListener.openFail("插件处于不可用中:");
            }
        });
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    /* JADX INFO: renamed from: com.ymnsdk.replugin.util.DialogUtils$2, reason: invalid class name */
    class AnonymousClass2 implements Runnable {
        final /* synthetic */ Activity val$activity;
        final /* synthetic */ String val$fromVersion;
        final /* synthetic */ boolean val$isComplete;
        final /* synthetic */ OpenListener val$listener;
        final /* synthetic */ String val$loginJsonStr;
        final /* synthetic */ String val$pluginId;
        final /* synthetic */ int val$updateType;

        AnonymousClass2(Activity activity, String str, boolean z, String str2, OpenListener openListener, String str3, int i) {
            this.val$activity = activity;
            this.val$pluginId = str;
            this.val$isComplete = z;
            this.val$fromVersion = str2;
            this.val$listener = openListener;
            this.val$loginJsonStr = str3;
            this.val$updateType = i;
        }

        @Override // java.lang.Runnable
        public void run() {
            PostdataLib.getInstance().postToSeperllita(new UpdateDialogShowEvent(this.val$activity, this.val$pluginId));
            TipDialog tipDialog = new TipDialog(this.val$activity);
            tipDialog.show();
            tipDialog.setTitle(DialogUtils.this.getUpdateTitle(this.val$pluginId, this.val$isComplete));
            tipDialog.setContent(DialogUtils.this.getUpdateContent(this.val$pluginId, this.val$fromVersion, this.val$isComplete));
            tipDialog.setPosBtTx(DialogUtils.this.getUpdateBtnTitle(this.val$pluginId, this.val$isComplete));
            tipDialog.setPositiveButton(new DialogInterface.OnClickListener() { // from class: com.ymnsdk.replugin.util.DialogUtils.2.1
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i) {
                    PostdataLib.getInstance().postToSeperllita(new UpdateConfirmEvent(AnonymousClass2.this.val$activity, AnonymousClass2.this.val$pluginId));
                    int pluginMode = PluginMangerUtils.getPluginMode(AnonymousClass2.this.val$pluginId);
                    if (pluginMode == 1) {
                        new PluginModeOne().installPlugin(AnonymousClass2.this.val$activity, AnonymousClass2.this.val$pluginId, AnonymousClass2.this.val$listener);
                    } else {
                        if (pluginMode != 2) {
                            return;
                        }
                        new PluginModeTwo().installPlugin(AnonymousClass2.this.val$activity, AnonymousClass2.this.val$pluginId, AnonymousClass2.this.val$loginJsonStr, AnonymousClass2.this.val$updateType, AnonymousClass2.this.val$listener);
                    }
                }
            });
            tipDialog.setNegativeButton(new DialogInterfaceOnClickListenerC05242());
        }

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes4.dex
         */
        /* JADX INFO: renamed from: com.ymnsdk.replugin.util.DialogUtils$2$2, reason: invalid class name and collision with other inner class name */
        class DialogInterfaceOnClickListenerC05242 implements DialogInterface.OnClickListener {
            DialogInterfaceOnClickListenerC05242() {
            }

            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i) {
                PostdataLib.getInstance().postToSeperllita(new UpdateCancelEvent(AnonymousClass2.this.val$activity, AnonymousClass2.this.val$pluginId));
                final PluginManager pluginManager = new PluginManager(AnonymousClass2.this.val$activity);
                pluginManager.isInstallPlugin(AnonymousClass2.this.val$pluginId, new IsInstallPluginStatusListener() { // from class: com.ymnsdk.replugin.util.DialogUtils.2.2.1
                    @Override // com.ymnsdk.replugin.listener.IsInstallPluginStatusListener
                    public void onInstalled() {
                        if (AnonymousClass2.this.val$updateType == 0) {
                            pluginManager.startApk(AnonymousClass2.this.val$pluginId, AnonymousClass2.this.val$loginJsonStr, new StartPluginStatusListener() { // from class: com.ymnsdk.replugin.util.DialogUtils.2.2.1.1
                                @Override // com.ymnsdk.replugin.listener.StartPluginStatusListener
                                public void onSuccess() {
                                    PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(AnonymousClass2.this.val$activity, AnonymousClass2.this.val$pluginId, 1044, "打开成功"));
                                    AnonymousClass2.this.val$listener.openSuccess();
                                }

                                @Override // com.ymnsdk.replugin.listener.StartPluginStatusListener
                                public void onFailure(String str) {
                                    PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(AnonymousClass2.this.val$activity, AnonymousClass2.this.val$pluginId, 1045, str));
                                    AnonymousClass2.this.val$listener.openFail(str);
                                }
                            });
                        } else {
                            PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(AnonymousClass2.this.val$activity, AnonymousClass2.this.val$pluginId, 1045, "插件打开失败:用户取消更新"));
                            AnonymousClass2.this.val$listener.openFail("插件打开失败:用户取消更新");
                        }
                    }

                    @Override // com.ymnsdk.replugin.listener.IsInstallPluginStatusListener
                    public void onNotInstall() {
                        PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(AnonymousClass2.this.val$activity, AnonymousClass2.this.val$pluginId, 1045, "插件打开失败:用户取消更新"));
                        AnonymousClass2.this.val$listener.openFail("插件打开失败:用户取消更新");
                    }
                });
            }
        }
    }

    public void showUpdateDialog(Activity activity, String str, String str2, int i, String str3, OpenListener openListener) {
        activity.runOnUiThread(new AnonymousClass2(activity, str, isDownloadComplete(str, str3), str3, openListener, str2, i));
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    /* JADX INFO: renamed from: com.ymnsdk.replugin.util.DialogUtils$3, reason: invalid class name */
    class AnonymousClass3 implements Runnable {
        final /* synthetic */ Activity val$activity;
        final /* synthetic */ AllowStartPluginListener val$listener;
        final /* synthetic */ String val$loginJsonStr;
        final /* synthetic */ String val$pluginId;

        AnonymousClass3(Activity activity, String str, String str2, AllowStartPluginListener allowStartPluginListener) {
            this.val$activity = activity;
            this.val$pluginId = str;
            this.val$loginJsonStr = str2;
            this.val$listener = allowStartPluginListener;
        }

        @Override // java.lang.Runnable
        public void run() {
            PostdataLib.getInstance().postToSeperllita(new StartDialogShowEvent(this.val$activity, this.val$pluginId));
            TipDialog tipDialog = new TipDialog(this.val$activity);
            tipDialog.show();
            tipDialog.setTitle("游戏更新");
            tipDialog.setContent("新版来袭，点击立即体验");
            tipDialog.setPosBtTx("确定");
            tipDialog.setPositiveButton(new DialogInterface.OnClickListener() { // from class: com.ymnsdk.replugin.util.DialogUtils.3.1
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i) {
                    PostdataLib.getInstance().postToSeperllita(new StartConfirmEvent(AnonymousClass3.this.val$activity, AnonymousClass3.this.val$pluginId));
                    new PluginManager(AnonymousClass3.this.val$activity).startApk(AnonymousClass3.this.val$pluginId, AnonymousClass3.this.val$loginJsonStr, new StartPluginStatusListener() { // from class: com.ymnsdk.replugin.util.DialogUtils.3.1.1
                        @Override // com.ymnsdk.replugin.listener.StartPluginStatusListener
                        public void onSuccess() {
                            PostdataLib.getInstance().postToSeperllita(new AllowStartPluginResponseEvent(AnonymousClass3.this.val$activity, AnonymousClass3.this.val$pluginId, 1044, "插件打开成功"));
                            AnonymousClass3.this.val$listener.openSuccess();
                        }

                        @Override // com.ymnsdk.replugin.listener.StartPluginStatusListener
                        public void onFailure(String str) {
                            PostdataLib.getInstance().postToSeperllita(new AllowStartPluginResponseEvent(AnonymousClass3.this.val$activity, AnonymousClass3.this.val$pluginId, 1045, "插件打开失败:" + str));
                            AnonymousClass3.this.val$listener.openFail("插件打开失败:" + str);
                        }
                    });
                }
            });
            tipDialog.setNegativeButton(new DialogInterface.OnClickListener() { // from class: com.ymnsdk.replugin.util.DialogUtils.3.2
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i) {
                    PostdataLib.getInstance().postToSeperllita(new StartCancelEvent(AnonymousClass3.this.val$activity, AnonymousClass3.this.val$pluginId));
                    PostdataLib.getInstance().postToSeperllita(new AllowStartPluginResponseEvent(AnonymousClass3.this.val$activity, AnonymousClass3.this.val$pluginId, 1045, "插件打开失败:用户取消启动"));
                    AnonymousClass3.this.val$listener.openFail("插件打开失败:用户取消启动");
                }
            });
        }
    }

    public void showStartDialog(Activity activity, String str, String str2, AllowStartPluginListener allowStartPluginListener) {
        activity.runOnUiThread(new AnonymousClass3(activity, str, str2, allowStartPluginListener));
    }

    public void showErrorDialog(final Activity activity, final String str) {
        if (PluginMangerUtils.getIsShowErrorDialog(str)) {
            activity.runOnUiThread(new Runnable() { // from class: com.ymnsdk.replugin.util.DialogUtils.4
                @Override // java.lang.Runnable
                public void run() {
                    TipDialog tipDialog = new TipDialog(activity);
                    tipDialog.show();
                    tipDialog.setTitle("安装失败");
                    tipDialog.setContent("点击桌面应用图标重试，原因是" + PluginFailInfo.getInstance().getPluginFailInfo(str));
                }
            });
        }
    }

    public String getUpdateTitle(String str, boolean z) {
        return z ? "游戏安装提示" : SharedPerferencesDataUtils.getInstance().getLocalInstallPlugin().containsKey(str) ? "游戏更新提示" : "游戏下载提示";
    }

    public String getUpdateContent(String str, String str2, boolean z) {
        if (z) {
            return "资源下载完成，立即安装（不耗费流量）";
        }
        long downloadRemain = getDownloadRemain(str, str2);
        if (SharedPerferencesDataUtils.getInstance().getLocalInstallPlugin().containsKey(str)) {
            return "发现新版本" + downloadRemain + "MB，立即更新";
        }
        return "即将开始下载，" + downloadRemain + "MB";
    }

    public String getUpdateBtnTitle(String str, boolean z) {
        return z ? "安装" : SharedPerferencesDataUtils.getInstance().getLocalInstallPlugin().containsKey(str) ? "更新" : "下载";
    }

    public boolean isDownloadComplete(String str, String str2) {
        PluginInfo pluginInfo;
        Map<String, PluginInfo> localGetPlugin = SharedPerferencesDataUtils.getInstance().getLocalGetPlugin();
        if (!localGetPlugin.containsKey(str) || (pluginInfo = localGetPlugin.get(str)) == null) {
            return false;
        }
        PluginMangerUtils.getInstance();
        if (PluginMangerUtils.findPluginById(str) == null) {
            return false;
        }
        if (DownloadUtils.getInstance().checkMd5(DownloadUtils.getInstance().joinPluginPath(str + "old.apk"), pluginInfo.getFile_md5())) {
            return true;
        }
        if (SharedPerferencesDataUtils.getInstance().getLocalInstallPlugin().containsKey(str)) {
            PluginMangerUtils.getInstance();
            Patch patchFindPatch = PluginMangerUtils.findPatch(str, localGetPlugin.get(str), str2);
            if (patchFindPatch != null) {
                if (DownloadUtils.getInstance().checkMd5(DownloadUtils.getInstance().joinPluginPath(patchFindPatch.getPatch_md5()), patchFindPatch.getPatch_md5())) {
                    return true;
                }
            } else if (DownloadUtils.getInstance().checkMd5(DownloadUtils.getInstance().joinPluginPath(pluginInfo.getFile_md5()), pluginInfo.getFile_md5())) {
                return true;
            }
        } else if (DownloadUtils.getInstance().checkMd5(DownloadUtils.getInstance().joinPluginPath(pluginInfo.getFile_md5()), pluginInfo.getFile_md5())) {
            return true;
        }
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x008a  */
    /* JADX WARN: Removed duplicated region for block: B:19:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public long getDownloadRemain(java.lang.String r6, java.lang.String r7) {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ymnsdk.replugin.util.DialogUtils.getDownloadRemain(java.lang.String, java.lang.String):long");
    }

    public long getFileSize(String str) {
        try {
            if (new File(str).exists()) {
                return new FileInputStream(r2).available();
            }
            return 0L;
        } catch (Exception e) {
            e.printStackTrace();
            return 0L;
        }
    }
}
