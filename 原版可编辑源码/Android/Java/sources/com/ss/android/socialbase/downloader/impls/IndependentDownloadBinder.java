package com.ss.android.socialbase.downloader.impls;

import android.app.Notification;
import android.os.RemoteException;
import com.ss.android.socialbase.downloader.depend.IDownloadAidlFileProvider;
import com.ss.android.socialbase.downloader.depend.IDownloadAidlListener;
import com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventAidlListener;
import com.ss.android.socialbase.downloader.depend.INotificationClickAidlCallback;
import com.ss.android.socialbase.downloader.depend.ProcessAidlCallback;
import com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher;
import com.ss.android.socialbase.downloader.downloader.IDownloadAidlService;
import com.ss.android.socialbase.downloader.downloader.IDownloadProxy;
import com.ss.android.socialbase.downloader.model.DownloadAidlTask;
import com.ss.android.socialbase.downloader.model.DownloadChunk;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import com.ss.android.socialbase.downloader.utils.IPCUtils;
import java.util.List;

public class IndependentDownloadBinder extends IDownloadAidlService.Stub {
    private static final String TAG = IndependentDownloadBinder.class.getSimpleName();
    private final IDownloadProxy downloadProxy = new ProcessDownloadHandler(true);

    @Override
    public void tryDownload(DownloadAidlTask downloadAidlTask) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.tryDownloadWithEngine(IPCUtils.convertDownloadTaskFromAidl(downloadAidlTask));
    }

    @Override
    public void pause(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.pause(i);
    }

    @Override
    public void cancel(int i, boolean z) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.cancel(i, z);
    }

    @Override
    public boolean canResume(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return false;
        }
        return iDownloadProxy.canResume(i);
    }

    @Override
    public void resume(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.resume(i);
    }

    @Override
    public void restart(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.restart(i);
    }

    @Override
    public void pauseAll() throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.pauseAll();
    }

    @Override
    public long getCurBytes(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return 0L;
        }
        return iDownloadProxy.getCurBytes(i);
    }

    @Override
    public int getStatus(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return 0;
        }
        return iDownloadProxy.getStatus(i);
    }

    @Override
    public boolean isDownloading(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return false;
        }
        return iDownloadProxy.isDownloading(i);
    }

    @Override
    public DownloadInfo getDownloadInfo(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return null;
        }
        return iDownloadProxy.getDownloadInfo(i);
    }

    @Override
    public List<DownloadInfo> getDownloadInfoList(String str) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return null;
        }
        return iDownloadProxy.getDownloadInfoList(str);
    }

    @Override
    public List<DownloadChunk> getDownloadChunk(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return null;
        }
        return iDownloadProxy.getDownloadChunk(i);
    }

    @Override
    public int getDownloadId(String str, String str2) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return 0;
        }
        return iDownloadProxy.getDownloadId(str, str2);
    }

    @Override
    public DownloadInfo getDownloadInfoByUrlAndPath(String str, String str2) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return null;
        }
        return iDownloadProxy.getDownloadInfo(str, str2);
    }

    @Override
    public List<DownloadInfo> getFailedDownloadInfosWithMimeType(String str) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return null;
        }
        return iDownloadProxy.getFailedDownloadInfosWithMimeType(str);
    }

    @Override
    public List<DownloadInfo> getSuccessedDownloadInfosWithMimeType(String str) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return null;
        }
        return iDownloadProxy.getSuccessedDownloadInfosWithMimeType(str);
    }

    @Override
    public List<DownloadInfo> getDownloadingDownloadInfosWithMimeType(String str) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return null;
        }
        return iDownloadProxy.getDownloadingDownloadInfosWithMimeType(str);
    }

    @Override
    public List<DownloadInfo> getAllDownloadInfo() throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return null;
        }
        return iDownloadProxy.getAllDownloadInfo();
    }

    @Override
    public void restartAllFailedDownloadTasks(List<String> list) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.restartAllFailedDownloadTasks(list);
    }

    @Override
    public void restartAllPauseReserveOnWifiDownloadTasks(List<String> list) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy != null) {
            iDownloadProxy.restartAllPauseReserveOnWifiDownloadTasks(list);
        }
    }

    @Override
    public void clearDownloadData(int i, boolean z) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.clearDownloadData(i, z);
    }

    @Override
    public void resetDownloadData(int i, boolean z) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.clearDownloadData(i, z);
    }

    @Override
    public void forceDownloadIngoreRecommendSize(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.forceDownloadIngoreRecommendSize(i);
    }

    @Override
    public void removeDownloadListener(int i, int i2, IDownloadAidlListener iDownloadAidlListener, int i3, boolean z) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.removeDownloadListener(i, i2, IPCUtils.convertListenerFromAidl(iDownloadAidlListener), DownloadUtils.convertListenerType(i3), z);
    }

    @Override
    public void addDownloadListener(int i, int i2, IDownloadAidlListener iDownloadAidlListener, int i3, boolean z) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.addDownloadListener(i, i2, IPCUtils.convertListenerFromAidl(iDownloadAidlListener), DownloadUtils.convertListenerType(i3), z);
    }

    @Override
    public void addDownloadListener1(int i, int i2, IDownloadAidlListener iDownloadAidlListener, int i3, boolean z, boolean z2) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.addDownloadListener(i, i2, IPCUtils.convertListenerFromAidl(iDownloadAidlListener), DownloadUtils.convertListenerType(i3), z, z2);
    }

    @Override
    public boolean isDownloadSuccessAndFileNotExist(DownloadInfo downloadInfo) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return false;
        }
        return iDownloadProxy.isDownloadSuccessAndFileNotExist(downloadInfo);
    }

    @Override
    public void startForeground(int i, Notification notification) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.startForeground(i, notification);
    }

    @Override
    public void stopForeground(boolean z) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.stopForeground(true, z);
    }

    @Override
    public boolean isServiceForeground() throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return false;
        }
        return iDownloadProxy.isServiceForeground();
    }

    @Override
    public void setThrottleNetSpeed(int i, long j) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.setThrottleNetSpeed(i, j);
    }

    @Override
    public boolean isHttpServiceInit() throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return false;
        }
        return iDownloadProxy.isHttpServiceInit();
    }

    @Override
    public List<DownloadInfo> getUnCompletedDownloadInfosWithMimeType(String str) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return null;
        }
        return iDownloadProxy.getUnCompletedDownloadInfosWithMimeType(str);
    }

    @Override
    public boolean retryDelayStart(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return false;
        }
        return iDownloadProxy.retryDelayStart(i);
    }

    @Override
    public void setLogLevel(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.setLogLevel(i);
    }

    @Override
    public boolean isDownloadCacheSyncSuccess() throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return false;
        }
        return iDownloadProxy.isDownloadCacheSyncSuccess();
    }

    @Override
    public void setDownloadWithIndependentProcessStatus(int i, boolean z) throws RemoteException {
        DownloadProcessDispatcher.getInstance().setDownloadIndependentProcessStatus(i, z);
    }

    @Override
    public int getDownloadWithIndependentProcessStatus(int i) throws RemoteException {
        return DownloadProcessDispatcher.getInstance().getDownloadWithIndependentProcessStatusInner(i);
    }

    @Override
    public void addDownloadChunk(DownloadChunk downloadChunk) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.addDownloadChunk(downloadChunk);
    }

    @Override
    public boolean updateDownloadInfo(DownloadInfo downloadInfo) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return false;
        }
        return iDownloadProxy.updateDownloadInfo(downloadInfo);
    }

    @Override
    public boolean removeDownloadInfo(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return false;
        }
        return iDownloadProxy.removeDownloadInfo(i);
    }

    @Override
    public void removeAllDownloadChunk(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.removeAllDownloadChunk(i);
    }

    @Override
    public void updateDownloadChunk(int i, int i2, long j) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.updateDownloadChunk(i, i2, j);
    }

    @Override
    public void updateSubDownloadChunk(int i, int i2, int i3, long j) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.updateSubDownloadChunk(i, i2, i3, j);
    }

    @Override
    public void updateSubDownloadChunkIndex(int i, int i2, int i3, int i4) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.updateSubDownloadChunkIndex(i, i2, i3, i4);
    }

    @Override
    public boolean removeDownloadTaskData(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return false;
        }
        return iDownloadProxy.removeDownloadTaskData(i);
    }

    @Override
    public void clearData() throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.clearData();
    }

    @Override
    public void syncDownloadInfoFromOtherCache(int i, List<DownloadChunk> list) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.syncDownloadInfoFromOtherCache(i, list);
    }

    @Override
    public void syncDownloadChunks(int i, List<DownloadChunk> list) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.syncDownloadChunks(i, list);
    }

    @Override
    public void addProcessCallback(ProcessAidlCallback processAidlCallback) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.addProcessCallback(IPCUtils.convertProcessAidlCallbackFromAidl(processAidlCallback));
    }

    @Override
    public void dispatchProcessCallback(int i, int i2) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.dispatchProcessCallback(i, i2);
    }

    @Override
    public IDownloadNotificationEventAidlListener getDownloadNotificationEventListener(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return null;
        }
        return IPCUtils.convertDownloadNotificationEventListenerToAidl(iDownloadProxy.getDownloadNotificationEventListener(i));
    }

    @Override
    public INotificationClickAidlCallback getNotificationClickCallback(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return null;
        }
        return IPCUtils.convertNotificationClickCallbackToAidl(iDownloadProxy.getNotificationClickCallback(i));
    }

    @Override
    public void setDownloadNotificationEventListener(int i, IDownloadNotificationEventAidlListener iDownloadNotificationEventAidlListener) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return;
        }
        iDownloadProxy.setDownloadNotificationEventListener(i, IPCUtils.convertDownloadNotificationEventListenerFromAidl(iDownloadNotificationEventAidlListener));
    }

    @Override
    public IDownloadAidlFileProvider getDownloadFileUriProvider(int i) throws RemoteException {
        IDownloadProxy iDownloadProxy = this.downloadProxy;
        if (iDownloadProxy == null) {
            return null;
        }
        return IPCUtils.convertFileProviderToAidl(iDownloadProxy.getDownloadFileUriProvider(i));
    }
}
