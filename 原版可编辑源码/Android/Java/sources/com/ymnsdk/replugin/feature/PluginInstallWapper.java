package com.ymnsdk.replugin.feature;

import android.app.Activity;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.qihoo360.replugin.RePlugin;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.entity.Patch;
import com.ymnsdk.replugin.entity.Plugin;
import com.ymnsdk.replugin.entity.PluginInfo;
import com.ymnsdk.replugin.event.base.BaseEvent;
import com.ymnsdk.replugin.event.base.EventCode;
import com.ymnsdk.replugin.event.installplugin.ApkDownloadingEvent;
import com.ymnsdk.replugin.event.installplugin.CompleteApkDownloadInUserEvent;
import com.ymnsdk.replugin.event.installplugin.DownloadApkInSilentAndUserEvent;
import com.ymnsdk.replugin.event.installplugin.DownloadApkRequestEvent;
import com.ymnsdk.replugin.event.installplugin.DownloadApkResponseEvent;
import com.ymnsdk.replugin.event.installplugin.DownloadPatchInSilentAndUserEvent;
import com.ymnsdk.replugin.event.installplugin.DownloadPatchRequestEvent;
import com.ymnsdk.replugin.event.installplugin.DownloadPatchResponseEvent;
import com.ymnsdk.replugin.event.installplugin.InstallPluginRequestEvent;
import com.ymnsdk.replugin.event.installplugin.InstallPluginResponseEvent;
import com.ymnsdk.replugin.event.installplugin.MergePatchResponseEvent;
import com.ymnsdk.replugin.event.installplugin.PatchDownloadingEvent;
import com.ymnsdk.replugin.event.installplugin.RepliginInstallResponseEvent;
import com.ymnsdk.replugin.event.installplugin.RepluginInstallRequestEvent;
import com.ymnsdk.replugin.event.installplugin.StopInstallInStartPluginEvent;
import com.ymnsdk.replugin.event.other.CoreDownloadFailEvent;
import com.ymnsdk.replugin.event.other.CoreDownloadSuccessEvent;
import com.ymnsdk.replugin.listener.InstallPluginStatusListener;
import com.ymnsdk.replugin.listener.MergeCallback;
import com.ymnsdk.replugin.manger.PluginMangerUtils;
import com.ymnsdk.replugin.patch.download.DownloadCallback;
import com.ymnsdk.replugin.patch.download.DownloadCode;
import com.ymnsdk.replugin.patch.download.DownloadFileInfo;
import com.ymnsdk.replugin.patch.download.DownloadFileState;
import com.ymnsdk.replugin.patch.download.DownloadState;
import com.ymnsdk.replugin.patch.download.FileDownloader;
import com.ymnsdk.replugin.patch.download.PatchDownloadApi;
import com.ymnsdk.replugin.patch.download.SilentDownloadApi;
import com.ymnsdk.replugin.trace.PluginTraceManager;
import com.ymnsdk.replugin.util.ApkUtils;
import com.ymnsdk.replugin.util.DownloadUtils;
import com.ymnsdk.replugin.util.DownloadingUtils;
import com.ymnsdk.replugin.util.ResourceUtil;
import com.ymnsdk.replugin.util.SharedPerferencesDataUtils;
import com.ymnsdk.replugin.util.SharedPreferencesUtils;
import com.ymnsdk.replugin.util.SilentDownloadUtils;
import java.util.HashMap;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginInstallWapper {
    private static PluginInstallWapper wapper = new PluginInstallWapper();
    public long beforeProcess = -1;
    public long downloadDur = 0;
    public long recoveryTime = 0;
    public String userPlugin = "";
    public HashMap<String, Boolean> hasZeroDownloadPointMap = new HashMap<>();

    public static PluginInstallWapper getInstance() {
        return wapper;
    }

    public void installPlugin(final Activity activity, final String str, final int i, final int i2, final boolean z, final boolean z2, final InstallPluginStatusListener installPluginStatusListener) {
        if (DownloadUtils.mergeing) {
            installPluginStatusListener.onFailure("正在静默合包中");
        } else {
            new Thread(new Runnable() {
                @Override
                public void run() throws Throwable {
                    DownloadUtils.getInstance();
                    DownloadUtils.downloadRecord.put(str, false);
                    PluginInstallWapper.this.beforeProcess = -1L;
                    PostdataLib.getInstance().postEvent(new BaseEvent(activity, EventCode.install_plugin_request_event, "", str, ""));
                    PostdataLib.getInstance().postToSeperllita(new InstallPluginRequestEvent(activity, str));
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    PluginMangerUtils.getInstance();
                    Plugin pluginFindPluginById = PluginMangerUtils.findPluginById(str);
                    Map<String, PluginInfo> localGetPlugin = SharedPerferencesDataUtils.getInstance().getLocalGetPlugin();
                    if (!localGetPlugin.containsKey(str) || pluginFindPluginById == null) {
                        PostdataLib.getInstance().postEvent(new BaseEvent(activity, EventCode.install_plugin_response_event, -1, "还未获取插件信息", ""));
                        PostdataLib.getInstance().postToSeperllita(new InstallPluginResponseEvent(activity, 1045, str, "", -1, "还未获取插件信息", System.currentTimeMillis() - jCurrentTimeMillis));
                        installPluginStatusListener.onFailure("还未获取插件信息");
                        return;
                    }
                    PluginInfo pluginInfo = localGetPlugin.get(str);
                    Map<String, PluginInfo> localInstallPlugin = SharedPerferencesDataUtils.getInstance().getLocalInstallPlugin();
                    if (localInstallPlugin.containsKey(str)) {
                        if (localGetPlugin.get(str).getPlugin_version().equals(localInstallPlugin.get(str).getPlugin_version())) {
                            PostdataLib.getInstance().postEvent(new BaseEvent(activity, EventCode.install_plugin_response_event, 0, "已安装最新版本", pluginInfo.getPlugin_version()));
                            PostdataLib.getInstance().postToSeperllita(new InstallPluginResponseEvent(activity, 1044, str, pluginInfo.getPlugin_version(), 0, "已安装最新版本", System.currentTimeMillis() - jCurrentTimeMillis));
                            installPluginStatusListener.onSuccess();
                            return;
                        }
                        Map<String, PluginInfo> localDownedPlugin = SharedPerferencesDataUtils.getInstance().getLocalDownedPlugin();
                        if (localDownedPlugin.containsKey(str)) {
                            localInstallPlugin = localDownedPlugin;
                        }
                        PluginMangerUtils.getInstance();
                        String str2 = str;
                        Patch patchFindPatch = PluginMangerUtils.findPatch(str2, localGetPlugin.get(str2), localInstallPlugin.get(str).getPlugin_version());
                        boolean zHasOldApk = DownloadUtils.getInstance().hasOldApk(str);
                        if (patchFindPatch != null && zHasOldApk && !z2) {
                            PluginInstallWapper.this.installApk(localGetPlugin.get(str), activity, str, pluginFindPluginById.getBase_url() + patchFindPatch.getPatch_path(), 1, patchFindPatch.getPatch_size(), patchFindPatch.getPatch_md5(), localGetPlugin.get(str).getFile_size(), localGetPlugin.get(str).getFile_md5(), i, i2, jCurrentTimeMillis, true, z, installPluginStatusListener);
                            return;
                        }
                        String str3 = pluginFindPluginById.getBase_url() + localGetPlugin.get(str).getRelease_path();
                        long file_size = localGetPlugin.get(str).getFile_size();
                        String file_md5 = localGetPlugin.get(str).getFile_md5();
                        PluginInstallWapper.this.installApk(localGetPlugin.get(str), activity, str, str3, 0, file_size, file_md5, localGetPlugin.get(str).getFile_size(), file_md5, i, i2, jCurrentTimeMillis, zHasOldApk, z, installPluginStatusListener);
                        return;
                    }
                    PluginMangerUtils.getInstance();
                    String str4 = str;
                    Patch patchFindPatch2 = PluginMangerUtils.findPatch(str4, localGetPlugin.get(str4), "0");
                    boolean zHasOldApk2 = DownloadUtils.getInstance().hasOldApk(str);
                    if (patchFindPatch2 != null && zHasOldApk2 && !z2) {
                        PluginInstallWapper.this.installApk(localGetPlugin.get(str), activity, str, pluginFindPluginById.getBase_url() + patchFindPatch2.getPatch_path(), 1, patchFindPatch2.getPatch_size(), patchFindPatch2.getPatch_md5(), localGetPlugin.get(str).getFile_size(), localGetPlugin.get(str).getFile_md5(), i, i2, jCurrentTimeMillis, true, z, installPluginStatusListener);
                        return;
                    }
                    String str5 = pluginFindPluginById.getBase_url() + localGetPlugin.get(str).getRelease_path();
                    long file_size2 = localGetPlugin.get(str).getFile_size();
                    String file_md52 = localGetPlugin.get(str).getFile_md5();
                    PluginInstallWapper.this.installApk(localGetPlugin.get(str), activity, str, str5, 0, file_size2, file_md52, file_size2, file_md52, i, i2, jCurrentTimeMillis, true, z, installPluginStatusListener);
                }
            }).start();
        }
    }

    public void installApk(final PluginInfo pluginInfo, final Activity activity, final String str, final String str2, final int i, final long j, final String str3, long j2, final String str4, int i2, int i3, final long j3, boolean z, final boolean z2, final InstallPluginStatusListener installPluginStatusListener) throws Throwable {
        String strUrlOnSdCard4Public;
        SilentDownloadUtils.checkDowningPlugin(activity, PluginMangerUtils.findPluginById(str));
        SilentDownloadUtils.checkPatch(activity, pluginInfo);
        try {
            strUrlOnSdCard4Public = ResourceUtil.urlOnSdCard4Public();
        } catch (Exception e) {
            e.printStackTrace();
            strUrlOnSdCard4Public = "";
        }
        if (strUrlOnSdCard4Public != null && !strUrlOnSdCard4Public.isEmpty() && ApkUtils.isLocalApkExist()) {
            ApkUtils.installLocalApk(activity, str, j3, installPluginStatusListener);
            return;
        }
        String strJoinPluginPath = DownloadUtils.getInstance().joinPluginPath(str3);
        if (!DownloadUtils.getInstance().checkMemory(j2, 2.5d)) {
            installPluginStatusListener.onFailure("当前剩余内存磁盘空间不足");
            PostdataLib.getInstance().postEvent(new BaseEvent(activity, EventCode.install_plugin_response_event, -1, "当前剩余内存磁盘空间不足", ""));
            PostdataLib.getInstance().postToSeperllita(new InstallPluginResponseEvent(activity, 1045, str, "", -1, "当前剩余内存磁盘空间不足", System.currentTimeMillis() - j3));
            return;
        }
        if (i == 0) {
            PostdataLib.getInstance().postToSeperllita(new DownloadApkRequestEvent(activity, str, GsonUtils.getInstance().toJson(pluginInfo), z));
        } else {
            PostdataLib.getInstance().postToSeperllita(new DownloadPatchRequestEvent(activity, 1047, str, GsonUtils.getInstance().toJson(pluginInfo)));
        }
        final long jCurrentTimeMillis = System.currentTimeMillis();
        pluginInfo.setMd5List(DownloadUtils.getInstance().addMd5(pluginInfo, str3));
        SharedPerferencesDataUtils.getInstance().putLocalUserDowningPlugin(str, pluginInfo);
        DownloadFileState.getInstance().syncDownloadStatus(str3, str2, strJoinPluginPath);
        FileDownloader.getInstance().resume(str3);
        this.recoveryTime = System.currentTimeMillis();
        PatchDownloadApi.downloadPatch(activity, str, str2, i, j, str3, i2, i3, 0, new DownloadCallback() {
            @Override
            public void downloadSuccess(String str5) {
                PostdataLib.getInstance().postToSeperllita(new CoreDownloadSuccessEvent(activity, str, str3, j));
                DownloadState.getInstance().setLoadState(false);
                DownloadFileInfo downloadFileInfo = DownloadFileState.getInstance().getDownloadFileInfo(str4);
                if (downloadFileInfo != null) {
                    DownloadUtils.getInstance().postDownloadErrorEvent(activity, downloadFileInfo);
                }
                final String strJoinPluginPath2 = DownloadUtils.getInstance().joinPluginPath(str + "old.apk");
                if (i == 1) {
                    pluginInfo.setMd5List(DownloadUtils.getInstance().addMd5(pluginInfo, str3));
                    SharedPerferencesDataUtils.getInstance().putMergePatchData(str, pluginInfo);
                    Map<String, PluginInfo> localSilentDowningPlugin = SharedPerferencesDataUtils.getInstance().getLocalSilentDowningPlugin();
                    if (localSilentDowningPlugin.containsKey(str)) {
                        localSilentDowningPlugin.remove(str);
                    }
                    SharedPerferencesDataUtils.getInstance().putLocalSilentDowningPlugin(localSilentDowningPlugin);
                    Map<String, PluginInfo> localUserDowningPlugin = SharedPerferencesDataUtils.getInstance().getLocalUserDowningPlugin();
                    if (localUserDowningPlugin.containsKey(str)) {
                        localUserDowningPlugin.remove(str);
                    }
                    SharedPerferencesDataUtils.getInstance().putLocalUserDowningPlugin(localUserDowningPlugin);
                    PostdataLib.getInstance().postToSeperllita(new DownloadPatchResponseEvent(activity, 1005, str, "", j, 0, "下载成功|" + str + "|" + str2 + "|" + j + "|" + str4, 0, System.currentTimeMillis() - jCurrentTimeMillis));
                    final long jCurrentTimeMillis2 = System.currentTimeMillis();
                    DownloadUtils.getInstance().mergeApk(activity, str, str5, str4, new MergeCallback() {
                        @Override
                        public void mergeSuccess() {
                            PostdataLib.getInstance().postToSeperllita(new MergePatchResponseEvent(activity, 1050, str, 0, "合包成功", System.currentTimeMillis() - jCurrentTimeMillis2));
                            DownloadState.remerge_num = 0;
                            SharedPerferencesDataUtils.getInstance().putLocalDownedPlugin(str, pluginInfo);
                            Map<String, PluginInfo> mapGutMergePatchData = SharedPerferencesDataUtils.getInstance().gutMergePatchData();
                            if (mapGutMergePatchData.containsKey(str)) {
                                mapGutMergePatchData.remove(str);
                            }
                            SharedPerferencesDataUtils.getInstance().putMergePatchData(mapGutMergePatchData);
                            PluginInstallWapper.this.installPluginApk(pluginInfo, activity, strJoinPluginPath2, str, str2, i, j, str4, jCurrentTimeMillis, j3, z2, installPluginStatusListener);
                        }

                        @Override
                        public void mergeFail(String str6) {
                            installPluginStatusListener.onFailure("3|patch合包失败");
                            Map<String, PluginInfo> mapGutMergePatchData = SharedPerferencesDataUtils.getInstance().gutMergePatchData();
                            if (mapGutMergePatchData.containsKey(str)) {
                                mapGutMergePatchData.remove(str);
                            }
                            SharedPerferencesDataUtils.getInstance().putMergePatchData(mapGutMergePatchData);
                            PostdataLib.getInstance().postToSeperllita(new MergePatchResponseEvent(activity, 1045, str, -1, "patch合包失败|" + str6, System.currentTimeMillis() - jCurrentTimeMillis2));
                            PostdataLib.getInstance().postToSeperllita(new MergePatchResponseEvent(activity, 1051, str, -1, "patch合包失败|" + str6, System.currentTimeMillis() - jCurrentTimeMillis2));
                            PostdataLib.getInstance().postToSeperllita(new InstallPluginResponseEvent(activity, 1045, str, "", -3, "patch合包失败|" + str6, System.currentTimeMillis() - j3));
                            PluginInstallWapper.getInstance().installPlugin(activity, str, 5, 15, z2, true, installPluginStatusListener);
                        }
                    });
                    return;
                }
                DownloadUtils.getInstance().renameFile(str5, strJoinPluginPath2);
                PluginInstallWapper.this.installPluginApk(pluginInfo, activity, strJoinPluginPath2, str, str2, i, j, str4, jCurrentTimeMillis, j3, z2, installPluginStatusListener);
            }

            @Override
            public void downloading(long j4) {
                Log.d("Ymn:", j4 + "");
                if (j4 != PluginInstallWapper.this.beforeProcess) {
                    long jCurrentTimeMillis2 = System.currentTimeMillis();
                    if (j4 == 0) {
                        PluginInstallWapper.this.recoveryTime = jCurrentTimeMillis2;
                        PluginInstallWapper.this.downloadDur = 0L;
                        PluginInstallWapper.this.userPlugin = str;
                        PluginInstallWapper.this.hasZeroDownloadPointMap.put(PluginInstallWapper.this.userPlugin, true);
                    }
                    PluginInstallWapper.this.downloadDur += jCurrentTimeMillis2 - PluginInstallWapper.this.recoveryTime;
                    PluginInstallWapper.this.recoveryTime = jCurrentTimeMillis2;
                    if (DownloadingUtils.inProcessArray(j4)) {
                        if (i == 0) {
                            PostdataLib.getInstance().postToSeperllita(new ApkDownloadingEvent(activity, str, pluginInfo.getPlugin_version(), j, j4, PluginInstallWapper.this.downloadDur));
                            if (j4 == 100 && PluginInstallWapper.this.hasZeroDownloadPointMap.containsKey(str) && PluginInstallWapper.this.userPlugin.equals(str) && PluginInstallWapper.this.hasZeroDownloadPointMap.get(str).booleanValue()) {
                                PostdataLib.getInstance().postToSeperllita(new CompleteApkDownloadInUserEvent(activity, str, pluginInfo.getPlugin_version(), j, PluginInstallWapper.this.downloadDur));
                                PluginInstallWapper.this.hasZeroDownloadPointMap.put(str, false);
                            } else if (j4 == 100 && SilentDownloadApi.getInstance().hasZeroDownloadPointMap.containsKey(str) && str.equals(SilentDownloadApi.getInstance().silentPlugin) && SilentDownloadApi.getInstance().hasZeroDownloadPointMap.get(str).booleanValue()) {
                                PostdataLib.getInstance().postToSeperllita(new DownloadApkInSilentAndUserEvent(activity, str, pluginInfo.getPlugin_version(), j, PluginInstallWapper.this.downloadDur + SilentDownloadApi.getInstance().silentDownloadDur));
                                SilentDownloadApi.getInstance().hasZeroDownloadPointMap.put(str, false);
                            }
                        } else {
                            PostdataLib.getInstance().postToSeperllita(new PatchDownloadingEvent(activity, str, pluginInfo.getPlugin_version(), j, j4, PluginInstallWapper.this.downloadDur));
                            if (j4 == 100 && PluginInstallWapper.this.hasZeroDownloadPointMap.containsKey(str) && PluginInstallWapper.this.userPlugin.equals(str) && PluginInstallWapper.this.hasZeroDownloadPointMap.get(str).booleanValue()) {
                                PostdataLib.getInstance().postToSeperllita(new CompleteApkDownloadInUserEvent(activity, str, pluginInfo.getPlugin_version(), j, PluginInstallWapper.this.downloadDur));
                                PluginInstallWapper.this.hasZeroDownloadPointMap.put(str, false);
                            } else if (j4 == 100 && SilentDownloadApi.getInstance().hasZeroDownloadPointMap.containsKey(str) && str.equals(SilentDownloadApi.getInstance().silentPlugin) && SilentDownloadApi.getInstance().hasZeroDownloadPointMap.get(str).booleanValue()) {
                                PostdataLib.getInstance().postToSeperllita(new DownloadPatchInSilentAndUserEvent(activity, str, pluginInfo.getPlugin_version(), j, PluginInstallWapper.this.downloadDur + SilentDownloadApi.getInstance().silentDownloadDur));
                                SilentDownloadApi.getInstance().hasZeroDownloadPointMap.put(str, false);
                            }
                        }
                    }
                    PluginInstallWapper.this.beforeProcess = j4;
                    installPluginStatusListener.onDownloading(j4);
                }
            }

            @Override
            public void downloadFail(DownloadCode.Code code) {
                int networkRetryCount;
                DownloadFileInfo downloadFileInfo;
                Log.d("Ymn:", code + "|" + DownloadCode.translate(code));
                PostdataLib.getInstance().postToSeperllita(new CoreDownloadFailEvent(activity, str, DownloadCode.translate(code)));
                DownloadFileInfo downloadFileInfo2 = DownloadFileState.getInstance().getDownloadFileInfo(DownloadState.getInstance().getDownloadEntity().getMd5());
                if (downloadFileInfo2 != null) {
                    networkRetryCount = downloadFileInfo2.getNetworkRetryCount();
                } else {
                    Log.e(HostConstant.ymn, "DownloadFileInfo为空");
                    networkRetryCount = 0;
                }
                Log.e(HostConstant.ymn, "重试次数是：" + networkRetryCount);
                int i4 = 3.$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[code.ordinal()];
                if (i4 != 1 && i4 != 2) {
                    if (i4 == 3 || i4 == 4 || i4 == 5) {
                        installPluginStatusListener.onDownloadFailure(code);
                        PluginInstallWapper.this.downloadFailToPost(activity, str, code, str2, j, str3, networkRetryCount, jCurrentTimeMillis, j3, z2, downloadFileInfo2, installPluginStatusListener);
                        return;
                    }
                    return;
                }
                if (networkRetryCount > 4) {
                    Log.e(HostConstant.ymn, "超过了重试次数");
                    DownloadState.getInstance().setLoadState(false);
                    PatchDownloadApi.downloadStop();
                    PluginInstallWapper.this.downloadDur += System.currentTimeMillis() - PluginInstallWapper.this.recoveryTime;
                    if (downloadFileInfo2 != null) {
                        downloadFileInfo = downloadFileInfo2;
                        DownloadUtils.getInstance().postDownloadErrorEvent(activity, downloadFileInfo);
                    } else {
                        downloadFileInfo = downloadFileInfo2;
                    }
                    if (downloadFileInfo != null) {
                        downloadFileInfo.setNetworkRetryCount(0);
                    }
                    installPluginStatusListener.onDownloadFailure(code);
                    PluginInstallWapper.this.downloadFailToPost(activity, str, code, str2, j, str3, networkRetryCount, jCurrentTimeMillis, j3, z2, downloadFileInfo, installPluginStatusListener);
                }
            }
        });
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    static class 3 {
        static final int[] $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code;

        static {
            int[] iArr = new int[DownloadCode.Code.values().length];
            $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code = iArr;
            try {
                iArr[DownloadCode.Code.FileReadStreamException.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[DownloadCode.Code.RequestFail.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[DownloadCode.Code.NetworkUnreachable.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[DownloadCode.Code.FileVerifyHashFailed.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                $SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code[DownloadCode.Code.FileVerifySizeFailed.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
        }
    }

    private void installPluginApk(PluginInfo pluginInfo, Activity activity, String str, String str2, String str3, int i, long j, String str4, long j2, long j3, boolean z, InstallPluginStatusListener installPluginStatusListener) {
        DownloadState.getInstance().downloadEnd();
        PostdataLib.getInstance().postEvent(new BaseEvent(activity, EventCode.download_end_event, 0, "下载成功|" + str2 + "|" + str3 + "|" + j + "|" + str4, "", DownloadState.remerge_num, System.currentTimeMillis() - j2, 0));
        if (i == 0) {
            SharedPerferencesDataUtils.getInstance().putLocalDownedPlugin(str2, pluginInfo);
            Map<String, PluginInfo> localSilentDowningPlugin = SharedPerferencesDataUtils.getInstance().getLocalSilentDowningPlugin();
            if (localSilentDowningPlugin.containsKey(str2)) {
                localSilentDowningPlugin.remove(str2);
            }
            SharedPerferencesDataUtils.getInstance().putLocalSilentDowningPlugin(localSilentDowningPlugin);
            Map<String, PluginInfo> localUserDowningPlugin = SharedPerferencesDataUtils.getInstance().getLocalUserDowningPlugin();
            if (localUserDowningPlugin.containsKey(str2)) {
                localUserDowningPlugin.remove(str2);
            }
            SharedPerferencesDataUtils.getInstance().putLocalUserDowningPlugin(localUserDowningPlugin);
            PostdataLib.getInstance().postToSeperllita(new DownloadApkResponseEvent(activity, 1005, str2, "", j, 0, "下载成功|" + str2 + "|" + str3 + "|" + j + "|" + str4, 0, System.currentTimeMillis() - j2));
        }
        if (z) {
            PostdataLib.getInstance().postToSeperllita(new StopInstallInStartPluginEvent(activity));
            return;
        }
        PostdataLib.getInstance().postToSeperllita(new RepluginInstallRequestEvent(activity, str2));
        com.qihoo360.replugin.model.PluginInfo pluginInfoInstall = RePlugin.install(str, SharedPreferencesUtils.getIsLog() == 1);
        Map<String, PluginInfo> localGetPlugin = SharedPerferencesDataUtils.getInstance().getLocalGetPlugin();
        if (pluginInfoInstall != null) {
            if (!localGetPlugin.containsKey(str2)) {
                installPluginStatusListener.onFailure("宿主配置的插件中不存在该pluginIc");
                return;
            }
            PluginInfo pluginInfo2 = localGetPlugin.get(str2);
            SharedPerferencesDataUtils.getInstance().putLocalInstallPlugin(str2, pluginInfo2);
            PostdataLib.getInstance().postEvent(new BaseEvent(activity, EventCode.install_plugin_response_event, 0, "安装成功", pluginInfo2.getPlugin_version()));
            PostdataLib.getInstance().postToSeperllita(new InstallPluginResponseEvent(activity, 1044, str2, pluginInfo2.getPlugin_version(), 0, "安装成功", System.currentTimeMillis() - j3));
            PostdataLib.getInstance().postToSeperllita(new RepliginInstallResponseEvent(activity, 1044, str2));
            PluginTraceManager.getInstance().deleteInstallPluginLog();
            installPluginStatusListener.onSuccess();
            return;
        }
        PostdataLib.getInstance().postEvent(new BaseEvent(activity, EventCode.install_plugin_response_event, -1, "info为空，安装失败", localGetPlugin.get(str2).getPlugin_version()));
        PostdataLib.getInstance().postToSeperllita(new InstallPluginResponseEvent(activity, 1045, str2, localGetPlugin.get(str2).getPlugin_version(), -1, "info为空，安装失败", System.currentTimeMillis() - j3));
        PostdataLib.getInstance().postToSeperllita(new RepliginInstallResponseEvent(activity, 1045, str2));
        installPluginStatusListener.onFailure("info为空，安装失败");
    }

    private void downloadFailToPost(Activity activity, String str, DownloadCode.Code code, String str2, long j, String str3, int i, long j2, long j3, boolean z, DownloadFileInfo downloadFileInfo, InstallPluginStatusListener installPluginStatusListener) {
        DownloadState.getInstance().setLoadState(false);
        if (DownloadState.getInstance().getDownloadEntity().getDownloadType() == 0) {
            PostdataLib.getInstance().postToSeperllita(new DownloadApkResponseEvent(activity, 1006, str, "", j, -1, DownloadCode.translate(code) + "|" + str + "|" + str2 + "|" + j + "|" + str3, i, System.currentTimeMillis() - j2));
            PostdataLib.getInstance().postToSeperllita(new InstallPluginResponseEvent(activity, 1045, str, "", -1, "下载失败", System.currentTimeMillis() - j3));
            return;
        }
        PostdataLib.getInstance().postToSeperllita(new DownloadPatchResponseEvent(activity, 1006, str, "", j, -1, DownloadCode.translate(code) + "|" + str + "|" + str2 + "|" + j + "|" + str3, i, System.currentTimeMillis() - j2));
        DownloadUtils.getInstance().clrarPatchResource(str, str3, downloadFileInfo);
        getInstance().installPlugin(activity, str, 5, 15, z, true, installPluginStatusListener);
    }
}
