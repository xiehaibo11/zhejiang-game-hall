package com.ymnsdk.replugin.patch.download;

import android.app.Activity;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.carlt.networklibs.NetType;
import com.carlt.networklibs.utils.NetworkUtils;
import com.ymnsdk.replugin.action.ActionObserver;
import com.ymnsdk.replugin.action.ActionSupport;
import com.ymnsdk.replugin.action.RequestSilentUpdateFilterAction;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.entity.Patch;
import com.ymnsdk.replugin.entity.Plugin;
import com.ymnsdk.replugin.entity.PluginInfo;
import com.ymnsdk.replugin.entity.silentfilter.SilentUpdateFilterEnity;
import com.ymnsdk.replugin.entity.silentfilter.UserCustomRequestEnity;
import com.ymnsdk.replugin.event.installplugin.ApkSilentDownloadingEvent;
import com.ymnsdk.replugin.event.installplugin.CompleteApkDownloadInSilentEvent;
import com.ymnsdk.replugin.event.installplugin.CompletePacthDownloadInSilentEvent;
import com.ymnsdk.replugin.event.installplugin.MergePatchResponseEvent;
import com.ymnsdk.replugin.event.installplugin.PatchSilentDownloadingEvent;
import com.ymnsdk.replugin.event.other.CoreDownloadSuccessEvent;
import com.ymnsdk.replugin.event.silentdownload.ApkStartSilentDownloadEvent;
import com.ymnsdk.replugin.event.silentdownload.ApkStartSilentDownloadFailEvent;
import com.ymnsdk.replugin.event.silentdownload.DownloadOnePluginEvent;
import com.ymnsdk.replugin.event.silentdownload.EndSilentDownloadingEvent;
import com.ymnsdk.replugin.event.silentdownload.NotStartSilentDownloadEvent;
import com.ymnsdk.replugin.event.silentdownload.PatchStartSilentDownloadEvent;
import com.ymnsdk.replugin.event.silentdownload.PatchStartSilentDownloadFailEvent;
import com.ymnsdk.replugin.event.silentdownload.StartSilentDownloadEvent;
import com.ymnsdk.replugin.feature.PluginStatusWapper;
import com.ymnsdk.replugin.listener.MergeCallback;
import com.ymnsdk.replugin.listener.QueryPluginStatusListener;
import com.ymnsdk.replugin.manger.PluginMangerUtils;
import com.ymnsdk.replugin.patch.download.DownloadCode;
import com.ymnsdk.replugin.util.DownloadUtils;
import com.ymnsdk.replugin.util.DownloadingUtils;
import com.ymnsdk.replugin.util.RequestRetryUtils;
import com.ymnsdk.replugin.util.SharedPerferencesDataUtils;
import com.ymnsdk.replugin.util.SharedPreferencesUtils;
import com.ymnsdk.replugin.util.SilentDownloadUtils;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CountDownLatch;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class SilentDownloadApi {
    public static Activity activity;
    private static SilentDownloadApi downloadApi = new SilentDownloadApi();
    public static int downloadType = 0;
    public static long startSilentDownloadTime;
    public long beforeProcess = -1;
    public long silentDownloadDur = 0;
    public long silentRecoveryTime = 0;
    public String silentPlugin = "";
    public HashMap<String, Boolean> hasZeroDownloadPointMap = new HashMap<>();
    public volatile int maxDownloadNum = 0;
    private CountDownLatch countDownLatch = null;

    public static SilentDownloadApi getInstance() {
        return downloadApi;
    }

    public void startSilentDownload(final Activity activity2) {
        activity = activity2;
        new Thread(new Runnable() {
            @Override
            public void run() {
                List<Plugin> allPlugin = PluginMangerUtils.getAllPlugin();
                if (allPlugin != null && !allPlugin.isEmpty()) {
                    SilentDownloadApi.this.countDownLatch = new CountDownLatch(allPlugin.size());
                    SilentDownloadApi.this.maxDownloadNum = allPlugin.size() * 2;
                }
                DownloadUtils.getInstance().setWriteablePath(activity2.getFilesDir().getAbsolutePath());
                SilentDownloadApi.startSilentDownloadTime = System.currentTimeMillis();
                SilentDownloadApi.this.loadHostConfig(activity2);
                try {
                    if (SilentDownloadApi.this.countDownLatch != null) {
                        SilentDownloadApi.this.countDownLatch.await();
                    }
                    SilentDownloadApi.this.downloadOnePlugin(activity2, false, 0);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }).start();
    }

    public void loadHostConfig(Activity activity2) {
        List<Plugin> allPlugin = PluginMangerUtils.getAllPlugin();
        if (allPlugin == null) {
            return;
        }
        for (int i = 0; i < allPlugin.size(); i++) {
            new PluginStatusWapper(activity2).queryPluginStatus(allPlugin.get(i).getId(), new QueryPluginStatusListener() {
                @Override
                public void onSuccessUnAvailable(String str) {
                    SilentDownloadApi.this.decreaseCountDownLatch();
                }

                @Override
                public void onSuccessAvailable(String str) {
                    SilentDownloadApi.this.decreaseCountDownLatch();
                }

                @Override
                public void onFailure(int i2, String str) {
                    SilentDownloadApi.this.decreaseCountDownLatch();
                }
            });
        }
    }

    private void decreaseCountDownLatch() {
        if (this.countDownLatch.getCount() == 0) {
            return;
        }
        this.countDownLatch.countDown();
    }

    public void downloadOnePlugin(Activity activity2, boolean z, int i) {
        if (i > this.maxDownloadNum || !DownloadState.getInstance().isOpenSilentDownload()) {
            return;
        }
        this.beforeProcess = -1L;
        this.silentDownloadDur = 0L;
        if (DownloadState.getInstance().isOpenSilentDownload()) {
            String pluginId = getPluginId();
            Log.e("下载", "插件id 是" + pluginId);
            if (pluginId == null || pluginId.isEmpty()) {
                DownloadState.getInstance().setLoadState(false);
                return;
            }
            Map<String, PluginInfo> localGetPlugin = SharedPerferencesDataUtils.getInstance().getLocalGetPlugin();
            PluginInfo pluginInfo = localGetPlugin.get(pluginId);
            if (pluginInfo == null) {
                return;
            }
            PluginMangerUtils.getInstance();
            Plugin pluginFindPluginById = PluginMangerUtils.findPluginById(pluginId);
            if (pluginFindPluginById == null) {
                return;
            }
            SilentDownloadUtils.checkPatch(activity2, pluginInfo);
            Map<String, PluginInfo> localDownedPlugin = SharedPerferencesDataUtils.getInstance().getLocalDownedPlugin();
            if (localDownedPlugin.containsKey(pluginId)) {
                if (localGetPlugin.get(pluginId).getPlugin_version().equals(localDownedPlugin.get(pluginId).getPlugin_version())) {
                    downloadOnePlugin(activity2, false, i + 1);
                    return;
                }
                PluginMangerUtils.getInstance();
                Patch patchFindPatch = PluginMangerUtils.findPatch(pluginId, localGetPlugin.get(pluginId), localDownedPlugin.get(pluginId).getPlugin_version());
                boolean zHasOldApk = DownloadUtils.getInstance().hasOldApk(pluginId);
                if (patchFindPatch != null && zHasOldApk && !z) {
                    downloadPlugin(localGetPlugin.get(pluginId), activity2, pluginId, pluginFindPluginById.getBase_url() + patchFindPatch.getPatch_path(), 1, patchFindPatch.getPatch_size(), patchFindPatch.getPatch_md5(), 5, 15, zHasOldApk, i);
                    return;
                }
                downloadPlugin(localGetPlugin.get(pluginId), activity2, pluginId, pluginFindPluginById.getBase_url() + localGetPlugin.get(pluginId).getRelease_path(), 0, localGetPlugin.get(pluginId).getFile_size(), localGetPlugin.get(pluginId).getFile_md5(), 5, 15, zHasOldApk, i);
                return;
            }
            downloadPlugin(localGetPlugin.get(pluginId), activity2, pluginId, pluginFindPluginById.getBase_url() + localGetPlugin.get(pluginId).getRelease_path(), 0, localGetPlugin.get(pluginId).getFile_size(), localGetPlugin.get(pluginId).getFile_md5(), 5, 15, true, i);
        }
    }

    public void downloadPlugin(final PluginInfo pluginInfo, final Activity activity2, final String str, final String str2, final int i, final long j, final String str3, final int i2, final int i3, final boolean z, final int i4) {
        String strJoinPluginPath = DownloadUtils.getInstance().joinPluginPath(str3);
        DownloadFileState.getInstance().syncDownloadStatus(str3, str2, strJoinPluginPath);
        int iCheckSilentFilter = SilentDownloadUtils.checkSilentFilter(str, DownloadUtils.getInstance().getDownSize(str3, j, str2, strJoinPluginPath), i);
        if (iCheckSilentFilter != 0) {
            PostdataLib.getInstance().postToSeperllita(new NotStartSilentDownloadEvent(activity2, iCheckSilentFilter));
            return;
        }
        SilentUpdateFilterEnity silent_update_filter = PluginMangerUtils.findPluginById(str).getSilent_update_filter();
        if (silent_update_filter != null) {
            String custom_api_url = silent_update_filter.getCustom_api_url();
            if (!custom_api_url.isEmpty()) {
                final RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
                requestRetryUtils.setActivity(activity2);
                final RequestSilentUpdateFilterAction requestSilentUpdateFilterAction = new RequestSilentUpdateFilterAction(activity2, custom_api_url);
                UserCustomRequestEnity userCustomRequestEnity = new UserCustomRequestEnity();
                SharedPreferencesUtils.getInstance();
                userCustomRequestEnity.setNum_id(SharedPreferencesUtils.getUserId());
                requestSilentUpdateFilterAction.putReqData(userCustomRequestEnity);
                requestSilentUpdateFilterAction.addObserver(new ActionObserver() {
                    @Override
                    public void onActionResult(ActionSupport.ResponseResult responseResult) {
                        if (DownloadUtils.isUserDownload) {
                            return;
                        }
                        if (responseResult.isAllow()) {
                            SilentDownloadApi.this.startSilentDownload(pluginInfo, activity2, str, str2, i, j, str3, i2, i3, z, i4);
                            return;
                        }
                        if (responseResult.isNotAllow()) {
                            int i5 = i;
                            if (i5 == 1) {
                                SilentDownloadApi.this.startSilentDownload(pluginInfo, activity2, str, str2, i5, j, str3, i2, i3, z, i4);
                                return;
                            } else {
                                PostdataLib.getInstance().postToSeperllita(new NotStartSilentDownloadEvent(activity2, 4));
                                return;
                            }
                        }
                        if (!requestRetryUtils.retryRequest(requestSilentUpdateFilterAction) || DownloadUtils.isUserDownload) {
                            return;
                        }
                        SilentDownloadApi.this.startSilentDownload(pluginInfo, activity2, str, str2, i, j, str3, i2, i3, z, i4);
                    }
                });
                requestSilentUpdateFilterAction.actionStart();
                return;
            }
            if (DownloadUtils.isUserDownload) {
                return;
            }
            startSilentDownload(pluginInfo, activity2, str, str2, i, j, str3, i2, i3, z, i4);
            return;
        }
        if (DownloadUtils.isUserDownload) {
            return;
        }
        startSilentDownload(pluginInfo, activity2, str, str2, i, j, str3, i2, i3, z, i4);
    }

    public void startSilentDownload(final PluginInfo pluginInfo, final Activity activity2, final String str, String str2, final int i, final long j, final String str3, int i2, int i3, boolean z, final int i4) {
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setPluginId(str);
        PostdataLib.getInstance().postToSeperllita(new StartSilentDownloadEvent(activity2, i));
        FileDownloader.getInstance().resume(str3);
        pluginInfo.setMd5List(DownloadUtils.getInstance().addMd5(pluginInfo, str3));
        SharedPerferencesDataUtils.getInstance().putLocalSilentDowningPlugin(str, pluginInfo);
        PostdataLib.getInstance().postToSeperllita(new DownloadOnePluginEvent(activity2, str, pluginInfo.getPlugin_version()));
        if (i == 0) {
            PostdataLib.getInstance().postToSeperllita(new ApkStartSilentDownloadEvent(activity2, str, z));
        } else {
            PostdataLib.getInstance().postToSeperllita(new PatchStartSilentDownloadEvent(activity2, str));
        }
        this.silentRecoveryTime = System.currentTimeMillis();
        if (DownloadUtils.isUserDownload) {
            return;
        }
        PatchDownloadApi.downloadPatch(activity2, str, str2, i, j, str3, i2, i3, 1, new DownloadCallback() {
            @Override
            public void downloadSuccess(String str4) {
                PostdataLib.getInstance().postToSeperllita(new CoreDownloadSuccessEvent(activity2, str, str3, j));
                DownloadFileInfo downloadFileInfo = DownloadFileState.getInstance().getDownloadFileInfo(str3);
                if (downloadFileInfo != null) {
                    DownloadUtils.getInstance().postDownloadErrorEvent(activity2, downloadFileInfo);
                }
                String strJoinPluginPath = DownloadUtils.getInstance().joinPluginPath(str + "old.apk");
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
                    Log.e(HostConstant.ymn, "合并的patch地址是" + str4 + "md5是:" + pluginInfo.getFile_md5());
                    final long jCurrentTimeMillis = System.currentTimeMillis();
                    DownloadUtils.getInstance().mergeApk(activity2, str, str4, pluginInfo.getFile_md5(), new MergeCallback() {
                        @Override
                        public void mergeSuccess() {
                            PostdataLib.getInstance().postToSeperllita(new MergePatchResponseEvent(activity2, 1050, str, 0, "合包成功", System.currentTimeMillis() - jCurrentTimeMillis));
                            SilentDownloadApi.this.saveDownload(str, pluginInfo, i, i4 + 1);
                        }

                        @Override
                        public void mergeFail(String str5) {
                            PostdataLib.getInstance().postToSeperllita(new MergePatchResponseEvent(activity2, 1051, str, -1, "patch合包失败|" + str5, System.currentTimeMillis() - jCurrentTimeMillis));
                            SilentDownloadApi.this.downloadOnePlugin(activity2, true, i4 + 1);
                        }
                    });
                    return;
                }
                DownloadUtils.getInstance().renameFile(str4, strJoinPluginPath);
                SilentDownloadApi.this.saveDownload(str, pluginInfo, i, i4 + 1);
            }

            @Override
            public void downloading(long j2) {
                if (j2 != SilentDownloadApi.this.beforeProcess) {
                    Log.e(HostConstant.ymn, "process is " + j2);
                    if (DownloadingUtils.inProcessArray(j2)) {
                        long jCurrentTimeMillis = System.currentTimeMillis();
                        if (j2 == 0) {
                            SilentDownloadApi.this.silentRecoveryTime = jCurrentTimeMillis;
                            SilentDownloadApi.this.silentDownloadDur = 0L;
                            SilentDownloadApi.this.silentPlugin = str;
                            SilentDownloadApi.this.hasZeroDownloadPointMap.put(SilentDownloadApi.this.silentPlugin, true);
                        }
                        SilentDownloadApi.this.silentDownloadDur += jCurrentTimeMillis - SilentDownloadApi.this.silentRecoveryTime;
                        SilentDownloadApi.this.silentRecoveryTime = jCurrentTimeMillis;
                        if (i == 0) {
                            PostdataLib.getInstance().postToSeperllita(new ApkSilentDownloadingEvent(activity2, str, pluginInfo.getPlugin_version(), j, j2, SilentDownloadApi.this.silentDownloadDur));
                            if (j2 == 100 && SilentDownloadApi.this.hasZeroDownloadPointMap.containsKey(str) && SilentDownloadApi.this.silentPlugin.equals(str) && SilentDownloadApi.this.hasZeroDownloadPointMap.get(str).booleanValue()) {
                                PostdataLib.getInstance().postToSeperllita(new CompleteApkDownloadInSilentEvent(activity2, str, pluginInfo.getPlugin_version(), j, SilentDownloadApi.this.silentDownloadDur));
                                SilentDownloadApi.this.hasZeroDownloadPointMap.put(str, false);
                            }
                        } else {
                            PostdataLib.getInstance().postToSeperllita(new PatchSilentDownloadingEvent(activity2, str, pluginInfo.getPlugin_version(), j, j2, SilentDownloadApi.this.silentDownloadDur));
                            if (j2 == 100 && SilentDownloadApi.this.hasZeroDownloadPointMap.containsKey(str) && SilentDownloadApi.this.silentPlugin.equals(str) && SilentDownloadApi.this.hasZeroDownloadPointMap.get(str).booleanValue()) {
                                PostdataLib.getInstance().postToSeperllita(new CompletePacthDownloadInSilentEvent(activity2, str, pluginInfo.getPlugin_version(), j, SilentDownloadApi.this.silentDownloadDur));
                                SilentDownloadApi.this.hasZeroDownloadPointMap.put(str, false);
                            }
                        }
                    }
                    SilentDownloadApi.this.beforeProcess = j2;
                }
            }

            @Override
            public void downloadFail(DownloadCode.Code code) {
                if (DownloadState.silent_restart_num < 10) {
                    Log.e("重试:", "静默下载重试次数" + DownloadState.silent_restart_num);
                    DownloadState.silent_restart_num = DownloadState.silent_restart_num + 1;
                    return;
                }
                if (code == DownloadCode.Code.TaskIsDownloading || code == DownloadCode.Code.ManualStop) {
                    return;
                }
                if (i == 0) {
                    PostdataLib.getInstance().postToSeperllita(new ApkStartSilentDownloadFailEvent(activity2, str, DownloadCode.translate(code)));
                    return;
                }
                PostdataLib.getInstance().postToSeperllita(new PatchStartSilentDownloadFailEvent(activity2, str, DownloadCode.translate(code)));
                if (DownloadState.getInstance().isOpenSilentDownload()) {
                    DownloadUtils.getInstance().clrarPatchResource(str, str3, DownloadFileState.getInstance().getDownloadFileInfo(str3));
                    SilentDownloadApi.this.downloadOnePlugin(activity2, true, i4 + 1);
                }
            }
        });
    }

    public String getPluginId() {
        String userPluginId = getUserPluginId();
        if (NetworkUtils.getNetType() != NetType.WIFI) {
            userPluginId = null;
        }
        if (userPluginId != null && !userPluginId.isEmpty()) {
            downloadType = 0;
            return userPluginId;
        }
        String patchPluginId = getPatchPluginId();
        if (NetworkUtils.getNetType() != NetType.WIFI) {
            int i = SilentDownloadUtils.isNoWifiDownload;
        }
        if (patchPluginId != null && !patchPluginId.isEmpty()) {
            downloadType = 1;
            return patchPluginId;
        }
        String apkPluginId = NetworkUtils.getNetType() == NetType.WIFI ? getApkPluginId() : null;
        if (apkPluginId == null || apkPluginId.isEmpty()) {
            return "";
        }
        downloadType = 2;
        return apkPluginId;
    }

    public String getUserPluginId() {
        Map<String, PluginInfo> localUserDowningPlugin = SharedPerferencesDataUtils.getInstance().getLocalUserDowningPlugin();
        ArrayList arrayList = new ArrayList();
        Iterator<Map.Entry<String, PluginInfo>> it = localUserDowningPlugin.entrySet().iterator();
        while (it.hasNext()) {
            Plugin pluginFindPluginById = PluginMangerUtils.findPluginById(it.next().getValue().getPlugin_id());
            if (pluginFindPluginById != null && pluginFindPluginById.getSilent_update() == 1) {
                arrayList.add(pluginFindPluginById);
            }
        }
        return arrayList.size() <= 0 ? "" : sortPlugin(arrayList).get(0).getId();
    }

    public String getPatchPluginId() {
        Map<String, PluginInfo> localDownedPlugin = SharedPerferencesDataUtils.getInstance().getLocalDownedPlugin();
        List<Plugin> allPlugin = PluginMangerUtils.getAllPlugin();
        List<Plugin> arrayList = new ArrayList<>();
        if (allPlugin != null && allPlugin.size() != 0) {
            for (int i = 0; i < allPlugin.size(); i++) {
                if (allPlugin.get(i).getSilent_update() == 1) {
                    if (localDownedPlugin != null && localDownedPlugin.containsKey(allPlugin.get(i).getId())) {
                        if (!localDownedPlugin.get(allPlugin.get(i).getId()).getPlugin_version().equals(allPlugin.get(i).getVersion())) {
                            arrayList.add(allPlugin.get(i));
                        }
                    } else {
                        arrayList.add(allPlugin.get(i));
                    }
                }
            }
            if (arrayList.size() == 0) {
                return "";
            }
            List<Plugin> listSortPlugin = sortPlugin(arrayList);
            Map<String, PluginInfo> localGetPlugin = SharedPerferencesDataUtils.getInstance().getLocalGetPlugin();
            for (int i2 = 0; i2 < listSortPlugin.size(); i2++) {
                Plugin plugin = listSortPlugin.get(i2);
                if (localDownedPlugin != null && localDownedPlugin.containsKey(plugin.getId())) {
                    PluginMangerUtils.getInstance();
                    if (PluginMangerUtils.findPatch(plugin.getId(), localGetPlugin.get(plugin.getId()), localDownedPlugin.get(plugin.getId()).getPlugin_version()) != null) {
                        return plugin.getId();
                    }
                }
            }
        }
        return "";
    }

    public String getApkPluginId() {
        Map<String, PluginInfo> localDownedPlugin = SharedPerferencesDataUtils.getInstance().getLocalDownedPlugin();
        List<Plugin> allPlugin = PluginMangerUtils.getAllPlugin();
        List<Plugin> arrayList = new ArrayList<>();
        if (allPlugin != null && allPlugin.size() != 0) {
            for (int i = 0; i < allPlugin.size(); i++) {
                if (allPlugin.get(i).getSilent_update() == 1) {
                    if (localDownedPlugin != null && localDownedPlugin.containsKey(allPlugin.get(i).getId())) {
                        if (!localDownedPlugin.get(allPlugin.get(i).getId()).getPlugin_version().equals(allPlugin.get(i).getVersion())) {
                            arrayList.add(allPlugin.get(i));
                        }
                    } else {
                        arrayList.add(allPlugin.get(i));
                    }
                }
            }
            if (arrayList.size() == 0) {
                return "";
            }
            List<Plugin> listSortPlugin = sortPlugin(arrayList);
            Map<String, PluginInfo> localGetPlugin = SharedPerferencesDataUtils.getInstance().getLocalGetPlugin();
            for (int i2 = 0; i2 < listSortPlugin.size(); i2++) {
                Plugin plugin = listSortPlugin.get(i2);
                if (localDownedPlugin.containsKey(plugin.getId())) {
                    PluginMangerUtils.getInstance();
                    if (PluginMangerUtils.findPatch(plugin.getId(), localGetPlugin.get(plugin.getId()), localDownedPlugin.get(plugin.getId()).getPlugin_version()) == null) {
                        return plugin.getId();
                    }
                } else {
                    return plugin.getId();
                }
            }
        }
        return "";
    }

    public List<Plugin> sortPlugin(List<Plugin> list) {
        Collections.sort(list, new Comparator<Plugin>() {
            @Override
            public int compare(Plugin plugin, Plugin plugin2) {
                return plugin.getSilent_update_priority() - plugin2.getSilent_update_priority();
            }
        });
        return list;
    }

    public void endSilentDownload() {
        DownloadState.getInstance().setOpenSilentDownload(false);
        DownloadState.getInstance().setLoadState(false);
        PatchDownloadApi.downloadStop();
        this.silentDownloadDur += System.currentTimeMillis() - this.silentRecoveryTime;
        PostdataLib.getInstance().postToSeperllita(new EndSilentDownloadingEvent(activity, this.silentDownloadDur));
    }

    public void saveDownload(String str, PluginInfo pluginInfo, int i, int i2) {
        DownloadState.getInstance().downloadEnd();
        SharedPerferencesDataUtils.getInstance().putLocalDownedPlugin(str, pluginInfo);
        if (i == 1) {
            Map<String, PluginInfo> mapGutMergePatchData = SharedPerferencesDataUtils.getInstance().gutMergePatchData();
            if (mapGutMergePatchData.containsKey(str)) {
                mapGutMergePatchData.remove(str);
            }
            SharedPerferencesDataUtils.getInstance().putMergePatchData(mapGutMergePatchData);
        } else {
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
        }
        downloadOnePlugin(activity, false, i2 + 1);
    }
}
