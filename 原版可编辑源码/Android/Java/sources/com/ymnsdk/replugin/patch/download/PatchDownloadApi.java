package com.ymnsdk.replugin.patch.download;

import android.app.Activity;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.entity.DownloadEntity;
import com.ymnsdk.replugin.event.base.BaseEvent;
import com.ymnsdk.replugin.event.base.EventCode;
import com.ymnsdk.replugin.event.other.CoreDownloadStartEvent;
import com.ymnsdk.replugin.event.silentdownload.RecoveryDownloadingEvent;
import com.ymnsdk.replugin.event.silentdownload.StopDownloadingEvent;
import com.ymnsdk.replugin.listener.ClearDownloadCacheListener;
import com.ymnsdk.replugin.patch.download.DownloadCode;
import com.ymnsdk.replugin.util.DownloadUtils;
import com.ymnsdk.replugin.util.FileUtils;
import java.io.File;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PatchDownloadApi {
    private static PatchDownloadApi downloadApi = new PatchDownloadApi();

    public static PatchDownloadApi getInstance() {
        return downloadApi;
    }

    public static void clearCache(Activity activity, String str, ClearDownloadCacheListener clearDownloadCacheListener) {
        try {
            DownloadState.getInstance().setLoadState(false);
            DownloadState.getInstance().setIsDownloadRecovery(false);
            File pluginFile = FileUtils.getInstance().getPluginFile(activity, str, "temp.patch");
            if (pluginFile.exists()) {
                pluginFile.delete();
            }
            clearDownloadCacheListener.clearSuccess();
        } catch (Exception e) {
            e.printStackTrace();
            clearDownloadCacheListener.clearFail(e.toString());
        }
    }

    public static void downloadPatch(final Activity activity, final String str, final String str2, int i, final long j, final String str3, int i2, int i3, final int i4, final DownloadCallback downloadCallback) {
        DownloadState.getInstance().setIsNoNetTimeout(false);
        if (!DownloadState.getInstance().getLoadState()) {
            DownloadState.getInstance().setLoadState(true);
            DownloadState.getInstance().init(activity, str, str2, i, j, str3, i2, i3, downloadCallback);
            DownloadUtils.getInstance().setWriteablePath(activity.getFilesDir().getAbsolutePath());
            String strJoinPluginPath = DownloadUtils.getInstance().joinPluginPath(str + "old.apk");
            if (DownloadUtils.getInstance().checkMd5(strJoinPluginPath, str3)) {
                downloadCallback.downloading(100L);
                downloadCallback.downloadSuccess(strJoinPluginPath);
                return;
            }
            String strJoinPluginPath2 = DownloadUtils.getInstance().joinPluginPath(str3);
            if (DownloadUtils.getInstance().checkMd5(strJoinPluginPath2, str3)) {
                downloadCallback.downloading(100L);
                downloadCallback.downloadSuccess(strJoinPluginPath2);
                return;
            }
            if (!DownloadState.getInstance().isOpenSilentDownload()) {
                PostdataLib.getInstance().postEvent(new BaseEvent(activity, EventCode.download_start_event, 0, "下载开始", str + "|" + str2 + "|" + i + "|" + j + "|" + str3));
            }
            new Thread(new Runnable() {
                @Override
                public void run() {
                    try {
                        if (!DownloadState.getInstance().isNetWorkAvailable()) {
                            downloadCallback.downloadFail(DownloadCode.Code.NetworkUnreachable);
                            return;
                        }
                        String strJoinPluginPath3 = DownloadUtils.getInstance().joinPluginPath(str3);
                        DownloadFileState.getInstance().syncDownloadStatus(str3, str2, strJoinPluginPath3);
                        FileDownloader.getInstance().resume(str3);
                        PostdataLib.getInstance().postToSeperllita(new CoreDownloadStartEvent(activity, str, str3, j));
                        DownloadUtils.getInstance();
                        DownloadUtils.downloadRecord.put(str, true);
                        Log.e("ymn--要下载的地址为---", str2);
                        if (DownloadUtils.isUserDownload && i4 == 1) {
                            DownloadState.getInstance().setLoadState(false);
                            FileDownloader.getInstance().pause(str3);
                            DownloadUtils.getInstance();
                            DownloadUtils.downloadRecord.remove(str);
                            downloadCallback.downloadFail(DownloadCode.Code.ManualStop);
                            return;
                        }
                        FileDownloader.getInstance().download(str2, str3, strJoinPluginPath3, downloadCallback, i4);
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            }).start();
            return;
        }
        downloadCallback.downloadFail(DownloadCode.Code.TaskIsDownloading);
    }

    public static void downloadRecovery(final DownloadEntity downloadEntity, final int i) {
        if (DownloadState.getInstance().isIsDownloadRecovery()) {
            Log.e(HostConstant.ymn, "downloadRecovery isIsDownloadRecovery");
            return;
        }
        DownloadState.getInstance().setIsDownloadRecovery(true);
        if (DownloadState.getInstance().isOpenSilentDownload()) {
            SilentDownloadApi.getInstance().silentRecoveryTime = System.currentTimeMillis();
            PostdataLib.getInstance().postToSeperllita(new RecoveryDownloadingEvent(downloadEntity.getActivity(), downloadEntity.getPluginId()));
        }
        DownloadFileInfo downloadFileInfo = DownloadFileState.getInstance().getDownloadFileInfo(downloadEntity.getMd5());
        if (downloadFileInfo == null || downloadFileInfo.getValid()) {
            return;
        }
        DownloadFileState.getInstance().syncDownloadStatus(downloadEntity.getMd5(), downloadEntity.getDownloadUri(), DownloadUtils.getInstance().joinPluginPath(downloadEntity.getMd5()));
        FileDownloader.getInstance().resume(downloadEntity.getMd5());
        new Thread(new Runnable() {
            @Override
            public void run() {
                try {
                    String strJoinPluginPath = DownloadUtils.getInstance().joinPluginPath(downloadEntity.getMd5());
                    PostdataLib.getInstance().postToSeperllita(new CoreDownloadStartEvent(downloadEntity.getActivity(), downloadEntity.getPluginId(), downloadEntity.getMd5(), downloadEntity.getDownSize()));
                    FileDownloader.getInstance().download(downloadEntity.getDownloadUri(), downloadEntity.getMd5(), strJoinPluginPath, downloadEntity.getCallback(), i);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }).start();
    }

    public static void downloadStop() {
        DownloadState.getInstance().setIsDownloadRecovery(false);
        FileDownloader.getInstance().pause();
        DownloadEntity downloadEntity = DownloadState.getInstance().getDownloadEntity();
        if (downloadEntity == null || downloadEntity.getActivity() == null || !DownloadState.getInstance().isOpenSilentDownload()) {
            return;
        }
        SilentDownloadApi.getInstance().silentDownloadDur += System.currentTimeMillis() - SilentDownloadApi.getInstance().silentRecoveryTime;
        PostdataLib.getInstance().postToSeperllita(new StopDownloadingEvent(downloadEntity.getActivity(), downloadEntity.getPluginId()));
    }
}
