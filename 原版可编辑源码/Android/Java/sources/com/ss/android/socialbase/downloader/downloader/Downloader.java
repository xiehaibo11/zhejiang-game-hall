package com.ss.android.socialbase.downloader.downloader;

import android.content.Context;
import com.ss.android.socialbase.downloader.depend.IDownloadCacheSyncStatusListener;
import com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider;
import com.ss.android.socialbase.downloader.depend.IDownloadListener;
import com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener;
import com.ss.android.socialbase.downloader.depend.IDownloaderProcessConnectedListener;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import java.io.File;
import java.util.List;

public class Downloader extends BaseDownloader {
    private static volatile Downloader instance;

    @Override
    public void addMainThreadListener(int i, IDownloadListener iDownloadListener) {
        super.addMainThreadListener(i, iDownloadListener);
    }

    @Override
    public void addNotificationListener(int i, IDownloadListener iDownloadListener) {
        super.addNotificationListener(i, iDownloadListener);
    }

    @Override
    public void addSubThreadListener(int i, IDownloadListener iDownloadListener) {
        super.addSubThreadListener(i, iDownloadListener);
    }

    @Override
    public boolean canResume(int i) {
        return super.canResume(i);
    }

    @Override
    public void cancel(int i) {
        super.cancel(i);
    }

    @Override
    public void cancel(int i, boolean z) {
        super.cancel(i, z);
    }

    @Override
    public void clearDownloadData(int i) {
        super.clearDownloadData(i);
    }

    @Override
    public void clearDownloadData(int i, boolean z) {
        super.clearDownloadData(i, z);
    }

    @Override
    public void destoryDownloader() {
        super.destoryDownloader();
    }

    @Override
    public void forceDownloadIngoreRecommendSize(int i) {
        super.forceDownloadIngoreRecommendSize(i);
    }

    @Override
    public List getAllDownloadInfo() {
        return super.getAllDownloadInfo();
    }

    @Override
    public long getCurBytes(int i) {
        return super.getCurBytes(i);
    }

    @Override
    public IDownloadFileUriProvider getDownloadFileUriProvider(int i) {
        return super.getDownloadFileUriProvider(i);
    }

    @Override
    public int getDownloadId(String str, String str2) {
        return super.getDownloadId(str, str2);
    }

    @Override
    public DownloadInfo getDownloadInfo(int i) {
        return super.getDownloadInfo(i);
    }

    @Override
    public DownloadInfo getDownloadInfo(String str, String str2) {
        return super.getDownloadInfo(str, str2);
    }

    @Override
    public List getDownloadInfoList(String str) {
        return super.getDownloadInfoList(str);
    }

    @Override
    public IDownloadNotificationEventListener getDownloadNotificationEventListener(int i) {
        return super.getDownloadNotificationEventListener(i);
    }

    @Override
    public List getDownloadingDownloadInfosWithMimeType(String str) {
        return super.getDownloadingDownloadInfosWithMimeType(str);
    }

    @Override
    public List getFailedDownloadInfosWithMimeType(String str) {
        return super.getFailedDownloadInfosWithMimeType(str);
    }

    @Override
    public File getGlobalSaveDir() {
        return super.getGlobalSaveDir();
    }

    @Override
    public File getGlobalSaveTempDir() {
        return super.getGlobalSaveTempDir();
    }

    @Override
    public IReserveWifiStatusListener getReserveWifiStatusListener() {
        return super.getReserveWifiStatusListener();
    }

    @Override
    public int getStatus(int i) {
        return super.getStatus(i);
    }

    @Override
    public List getSuccessedDownloadInfosWithMimeType(String str) {
        return super.getSuccessedDownloadInfosWithMimeType(str);
    }

    @Override
    public List getUnCompletedDownloadInfosWithMimeType(String str) {
        return super.getUnCompletedDownloadInfosWithMimeType(str);
    }

    @Override
    public boolean isDownloadCacheSyncSuccess() {
        return super.isDownloadCacheSyncSuccess();
    }

    @Override
    public boolean isDownloadServiceForeground(int i) {
        return super.isDownloadServiceForeground(i);
    }

    @Override
    public boolean isDownloadSuccessAndFileNotExist(DownloadInfo downloadInfo) {
        return super.isDownloadSuccessAndFileNotExist(downloadInfo);
    }

    @Override
    public boolean isDownloading(int i) {
        return super.isDownloading(i);
    }

    @Override
    public boolean isHttpServiceInit() {
        return super.isHttpServiceInit();
    }

    @Override
    public void pause(int i) {
        super.pause(i);
    }

    @Override
    public void pauseAll() {
        super.pauseAll();
    }

    @Override
    public void registerDownloadCacheSyncListener(IDownloadCacheSyncStatusListener iDownloadCacheSyncStatusListener) {
        super.registerDownloadCacheSyncListener(iDownloadCacheSyncStatusListener);
    }

    @Override
    public void registerDownloaderProcessConnectedListener(IDownloaderProcessConnectedListener iDownloaderProcessConnectedListener) {
        super.registerDownloaderProcessConnectedListener(iDownloaderProcessConnectedListener);
    }

    @Override
    public void removeMainThreadListener(int i, IDownloadListener iDownloadListener) {
        super.removeMainThreadListener(i, iDownloadListener);
    }

    @Override
    public void removeNotificationListener(int i, IDownloadListener iDownloadListener) {
        super.removeNotificationListener(i, iDownloadListener);
    }

    @Override
    public void removeSubThreadListener(int i, IDownloadListener iDownloadListener) {
        super.removeSubThreadListener(i, iDownloadListener);
    }

    @Override
    @Deprecated
    public void removeTaskMainListener(int i) {
        super.removeTaskMainListener(i);
    }

    @Override
    @Deprecated
    public void removeTaskNotificationListener(int i) {
        super.removeTaskNotificationListener(i);
    }

    @Override
    @Deprecated
    public void removeTaskSubListener(int i) {
        super.removeTaskSubListener(i);
    }

    @Override
    public void restart(int i) {
        super.restart(i);
    }

    @Override
    public void restartAllFailedDownloadTasks(List list) {
        super.restartAllFailedDownloadTasks(list);
    }

    @Override
    public void restartAllPauseReserveOnWifiDownloadTasks(List list) {
        super.restartAllPauseReserveOnWifiDownloadTasks(list);
    }

    @Override
    public void resume(int i) {
        super.resume(i);
    }

    @Override
    public void setDefaultSavePath(String str) {
        super.setDefaultSavePath(str);
    }

    @Override
    public void setDefaultSaveTempPath(String str) {
        super.setDefaultSaveTempPath(str);
    }

    @Override
    public void setDownloadInMultiProcess() {
        super.setDownloadInMultiProcess();
    }

    @Override
    public void setDownloadNotificationEventListener(int i, IDownloadNotificationEventListener iDownloadNotificationEventListener) {
        super.setDownloadNotificationEventListener(i, iDownloadNotificationEventListener);
    }

    @Override
    public void setLogLevel(int i) {
        super.setLogLevel(i);
    }

    @Override
    @Deprecated
    public void setMainThreadListener(int i, IDownloadListener iDownloadListener) {
        super.setMainThreadListener(i, iDownloadListener);
    }

    @Override
    @Deprecated
    public void setMainThreadListener(int i, IDownloadListener iDownloadListener, boolean z) {
        super.setMainThreadListener(i, iDownloadListener, z);
    }

    @Override
    @Deprecated
    public void setNotificationListener(int i, IDownloadListener iDownloadListener) {
        super.setNotificationListener(i, iDownloadListener);
    }

    @Override
    public void setReserveWifiStatusListener(IReserveWifiStatusListener iReserveWifiStatusListener) {
        super.setReserveWifiStatusListener(iReserveWifiStatusListener);
    }

    @Override
    @Deprecated
    public void setSubThreadListener(int i, IDownloadListener iDownloadListener) {
        super.setSubThreadListener(i, iDownloadListener);
    }

    @Override
    public void setThrottleNetSpeed(int i, long j) {
        super.setThrottleNetSpeed(i, j);
    }

    @Override
    public void unRegisterDownloadCacheSyncListener(IDownloadCacheSyncStatusListener iDownloadCacheSyncStatusListener) {
        super.unRegisterDownloadCacheSyncListener(iDownloadCacheSyncStatusListener);
    }

    @Override
    public void unRegisterDownloaderProcessConnectedListener(IDownloaderProcessConnectedListener iDownloaderProcessConnectedListener) {
        super.unRegisterDownloaderProcessConnectedListener(iDownloaderProcessConnectedListener);
    }

    static {
        DownloadComponentManager.setIndependentServiceCreator(new MultiProcCreater());
        instance = null;
    }

    private Downloader() {
    }

    public static synchronized void init(DownloaderBuilder downloaderBuilder) {
        initOrCover(downloaderBuilder, false);
    }

    public static synchronized void initOrCover(DownloaderBuilder downloaderBuilder, boolean z) {
        if (downloaderBuilder == null) {
            return;
        }
        if (instance == null) {
            instance = downloaderBuilder.build();
        } else if (!DownloadComponentManager.isInit()) {
            DownloadComponentManager.initComponent(downloaderBuilder);
        } else if (z) {
            DownloadComponentManager.coverComponent(downloaderBuilder);
        }
    }

    Downloader(DownloaderBuilder downloaderBuilder) {
        DownloadComponentManager.initComponent(downloaderBuilder);
    }

    public static Downloader getInstance(Context context) {
        if (instance == null) {
            synchronized (Downloader.class) {
                if (instance == null) {
                    DownloadComponentManager.setAppContext(context);
                    instance = new Downloader();
                }
            }
        }
        return instance;
    }
}
