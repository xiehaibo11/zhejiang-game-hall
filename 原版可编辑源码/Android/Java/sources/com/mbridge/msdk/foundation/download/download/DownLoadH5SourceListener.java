package com.mbridge.msdk.foundation.download.download;

import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.tools.z;
import java.util.concurrent.ConcurrentMap;
import java.util.concurrent.CopyOnWriteArrayList;

public class DownLoadH5SourceListener implements H5DownLoadManager.IOnDownLoadH5Source {
    private static String TAG = "DownLoadH5SourceListener";
    private CopyOnWriteArrayList<H5DownLoadManager.ZipDownloadListener> listeners;
    private ConcurrentMap<String, DownLoadH5SourceListener> mResDownloadingMap;
    private String mUrl;
    private ResourceManager resourceManager;

    @Override
    public void onStart() {
    }

    public DownLoadH5SourceListener(ConcurrentMap<String, DownLoadH5SourceListener> concurrentMap, ResourceManager resourceManager, H5DownLoadManager.ZipDownloadListener zipDownloadListener, String str) {
        CopyOnWriteArrayList<H5DownLoadManager.ZipDownloadListener> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
        this.listeners = copyOnWriteArrayList;
        this.mResDownloadingMap = concurrentMap;
        this.resourceManager = resourceManager;
        copyOnWriteArrayList.add(zipDownloadListener);
        this.mUrl = str;
    }

    public void setZipDownloadListener(H5DownLoadManager.ZipDownloadListener zipDownloadListener) {
        this.listeners.add(zipDownloadListener);
    }

    @Override
    public void onSuccess(String str, byte[] bArr, String str2) {
        String message;
        try {
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
            try {
                message = e.getMessage();
            } catch (Throwable th) {
                z.c(TAG, th.getMessage(), th);
                message = "";
            }
        }
        if (this.mResDownloadingMap == null) {
            for (H5DownLoadManager.ZipDownloadListener zipDownloadListener : this.listeners) {
                if (zipDownloadListener != null) {
                    zipDownloadListener.onFailed(str2, "mResDownloadingMap  is null");
                    this.listeners.remove(zipDownloadListener);
                }
            }
            return;
        }
        if (this.mResDownloadingMap.containsKey(str2)) {
            this.mResDownloadingMap.remove(str2);
        }
        if (bArr == null || bArr.length <= 0) {
            message = "response data is error";
        } else {
            String strSaveResFile = this.resourceManager.saveResFile(str2, bArr);
            if (TextUtils.isEmpty(strSaveResFile)) {
                for (H5DownLoadManager.ZipDownloadListener zipDownloadListener2 : this.listeners) {
                    if (zipDownloadListener2 != null) {
                        zipDownloadListener2.onSuccess(str2);
                        this.listeners.remove(zipDownloadListener2);
                    }
                }
                return;
            }
            message = "data save failed:" + strSaveResFile;
        }
        for (H5DownLoadManager.ZipDownloadListener zipDownloadListener3 : this.listeners) {
            if (zipDownloadListener3 != null) {
                zipDownloadListener3.onFailed(str2, message);
            }
        }
    }

    @Override
    public void onFailed(String str) {
        try {
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
            try {
                str = e.getMessage();
            } catch (Throwable th) {
                z.c(TAG, th.getMessage(), th);
            }
        }
        if (this.mResDownloadingMap == null) {
            for (H5DownLoadManager.ZipDownloadListener zipDownloadListener : this.listeners) {
                if (zipDownloadListener != null) {
                    zipDownloadListener.onFailed(this.mUrl, "mResDownloadingMap  is null");
                    this.listeners.remove(zipDownloadListener);
                }
            }
            return;
        }
        if (this.mResDownloadingMap.containsKey(this.mUrl)) {
            this.mResDownloadingMap.remove(this.mUrl);
        }
        for (H5DownLoadManager.ZipDownloadListener zipDownloadListener2 : this.listeners) {
            if (zipDownloadListener2 != null) {
                zipDownloadListener2.onFailed(this.mUrl, str);
                this.listeners.remove(zipDownloadListener2);
            }
        }
    }
}
