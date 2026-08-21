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
        activity.runOnUiThread(new Runnable() {
            @Override
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
    class 2 implements Runnable {
        final Activity val$activity;
        final String val$fromVersion;
        final boolean val$isComplete;
        final OpenListener val$listener;
        final String val$loginJsonStr;
        final String val$pluginId;
        final int val$updateType;

        2(Activity activity, String str, boolean z, String str2, OpenListener openListener, String str3, int i) {
            this.val$activity = activity;
            this.val$pluginId = str;
            this.val$isComplete = z;
            this.val$fromVersion = str2;
            this.val$listener = openListener;
            this.val$loginJsonStr = str3;
            this.val$updateType = i;
        }

        @Override
        public void run() {
            PostdataLib.getInstance().postToSeperllita(new UpdateDialogShowEvent(this.val$activity, this.val$pluginId));
            TipDialog tipDialog = new TipDialog(this.val$activity);
            tipDialog.show();
            tipDialog.setTitle(DialogUtils.this.getUpdateTitle(this.val$pluginId, this.val$isComplete));
            tipDialog.setContent(DialogUtils.this.getUpdateContent(this.val$pluginId, this.val$fromVersion, this.val$isComplete));
            tipDialog.setPosBtTx(DialogUtils.this.getUpdateBtnTitle(this.val$pluginId, this.val$isComplete));
            tipDialog.setPositiveButton(new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialogInterface, int i) {
                    PostdataLib.getInstance().postToSeperllita(new UpdateConfirmEvent(2.this.val$activity, 2.this.val$pluginId));
                    int pluginMode = PluginMangerUtils.getPluginMode(2.this.val$pluginId);
                    if (pluginMode == 1) {
                        new PluginModeOne().installPlugin(2.this.val$activity, 2.this.val$pluginId, 2.this.val$listener);
                    } else {
                        if (pluginMode != 2) {
                            return;
                        }
                        new PluginModeTwo().installPlugin(2.this.val$activity, 2.this.val$pluginId, 2.this.val$loginJsonStr, 2.this.val$updateType, 2.this.val$listener);
                    }
                }
            });
            tipDialog.setNegativeButton(new 2());
        }

        /* JADX WARN: Classes with same name are omitted, all sources:
          classes.dex
          classes4.dex
         */
        class 2 implements DialogInterface.OnClickListener {
            2() {
            }

            @Override
            public void onClick(DialogInterface dialogInterface, int i) {
                PostdataLib.getInstance().postToSeperllita(new UpdateCancelEvent(2.this.val$activity, 2.this.val$pluginId));
                final PluginManager pluginManager = new PluginManager(2.this.val$activity);
                pluginManager.isInstallPlugin(2.this.val$pluginId, new IsInstallPluginStatusListener() {
                    @Override
                    public void onInstalled() {
                        if (2.this.val$updateType == 0) {
                            pluginManager.startApk(2.this.val$pluginId, 2.this.val$loginJsonStr, new StartPluginStatusListener() {
                                @Override
                                public void onSuccess() {
                                    PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(2.this.val$activity, 2.this.val$pluginId, 1044, "打开成功"));
                                    2.this.val$listener.openSuccess();
                                }

                                @Override
                                public void onFailure(String str) {
                                    PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(2.this.val$activity, 2.this.val$pluginId, 1045, str));
                                    2.this.val$listener.openFail(str);
                                }
                            });
                        } else {
                            PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(2.this.val$activity, 2.this.val$pluginId, 1045, "插件打开失败:用户取消更新"));
                            2.this.val$listener.openFail("插件打开失败:用户取消更新");
                        }
                    }

                    @Override
                    public void onNotInstall() {
                        PostdataLib.getInstance().postToSeperllita(new OpenPluginResponseEvent(2.this.val$activity, 2.this.val$pluginId, 1045, "插件打开失败:用户取消更新"));
                        2.this.val$listener.openFail("插件打开失败:用户取消更新");
                    }
                });
            }
        }
    }

    public void showUpdateDialog(Activity activity, String str, String str2, int i, String str3, OpenListener openListener) {
        activity.runOnUiThread(new 2(activity, str, isDownloadComplete(str, str3), str3, openListener, str2, i));
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    class 3 implements Runnable {
        final Activity val$activity;
        final AllowStartPluginListener val$listener;
        final String val$loginJsonStr;
        final String val$pluginId;

        3(Activity activity, String str, String str2, AllowStartPluginListener allowStartPluginListener) {
            this.val$activity = activity;
            this.val$pluginId = str;
            this.val$loginJsonStr = str2;
            this.val$listener = allowStartPluginListener;
        }

        @Override
        public void run() {
            PostdataLib.getInstance().postToSeperllita(new StartDialogShowEvent(this.val$activity, this.val$pluginId));
            TipDialog tipDialog = new TipDialog(this.val$activity);
            tipDialog.show();
            tipDialog.setTitle("游戏更新");
            tipDialog.setContent("新版来袭，点击立即体验");
            tipDialog.setPosBtTx("确定");
            tipDialog.setPositiveButton(new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialogInterface, int i) {
                    PostdataLib.getInstance().postToSeperllita(new StartConfirmEvent(3.this.val$activity, 3.this.val$pluginId));
                    new PluginManager(3.this.val$activity).startApk(3.this.val$pluginId, 3.this.val$loginJsonStr, new StartPluginStatusListener() {
                        @Override
                        public void onSuccess() {
                            PostdataLib.getInstance().postToSeperllita(new AllowStartPluginResponseEvent(3.this.val$activity, 3.this.val$pluginId, 1044, "插件打开成功"));
                            3.this.val$listener.openSuccess();
                        }

                        @Override
                        public void onFailure(String str) {
                            PostdataLib.getInstance().postToSeperllita(new AllowStartPluginResponseEvent(3.this.val$activity, 3.this.val$pluginId, 1045, "插件打开失败:" + str));
                            3.this.val$listener.openFail("插件打开失败:" + str);
                        }
                    });
                }
            });
            tipDialog.setNegativeButton(new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialogInterface, int i) {
                    PostdataLib.getInstance().postToSeperllita(new StartCancelEvent(3.this.val$activity, 3.this.val$pluginId));
                    PostdataLib.getInstance().postToSeperllita(new AllowStartPluginResponseEvent(3.this.val$activity, 3.this.val$pluginId, 1045, "插件打开失败:用户取消启动"));
                    3.this.val$listener.openFail("插件打开失败:用户取消启动");
                }
            });
        }
    }

    public void showStartDialog(Activity activity, String str, String str2, AllowStartPluginListener allowStartPluginListener) {
        activity.runOnUiThread(new 3(activity, str, str2, allowStartPluginListener));
    }

    public void showErrorDialog(final Activity activity, final String str) {
        if (PluginMangerUtils.getIsShowErrorDialog(str)) {
            activity.runOnUiThread(new Runnable() {
                @Override
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
    */
    public long getDownloadRemain(String str, String str2) {
        long file_size;
        long fileSize;
        long fileSize2;
        long patch_size;
        long j;
        Map<String, PluginInfo> localGetPlugin = SharedPerferencesDataUtils.getInstance().getLocalGetPlugin();
        if (!localGetPlugin.containsKey(str)) {
            return 0L;
        }
        PluginInfo pluginInfo = localGetPlugin.get(str);
        if (SharedPerferencesDataUtils.getInstance().getLocalInstallPlugin().containsKey(str)) {
            PluginMangerUtils.getInstance();
            Patch patchFindPatch = PluginMangerUtils.findPatch(str, localGetPlugin.get(str), str2);
            boolean zHasOldApk = DownloadUtils.getInstance().hasOldApk(str);
            if (patchFindPatch != null && zHasOldApk) {
                patch_size = patchFindPatch.getPatch_size();
                fileSize2 = getFileSize(DownloadUtils.getInstance().joinPluginPath(patchFindPatch.getPatch_md5()));
                j = ((patch_size - fileSize2) / 1024) / 1024;
                if (j >= 1) {
                    return 1L;
                }
                return j;
            }
            file_size = pluginInfo.getFile_size();
            fileSize = getFileSize(DownloadUtils.getInstance().joinPluginPath(pluginInfo.getFile_md5()));
        } else {
            file_size = pluginInfo.getFile_size();
            fileSize = getFileSize(DownloadUtils.getInstance().joinPluginPath(pluginInfo.getFile_md5()));
        }
        long j2 = file_size;
        fileSize2 = fileSize;
        patch_size = j2;
        j = ((patch_size - fileSize2) / 1024) / 1024;
        if (j >= 1) {
        }
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
