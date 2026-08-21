package com.ymnsdk.replugin.patch.download;

import com.ymnsdk.replugin.util.DownloadUtils;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class DownloadFileState {
    private static Map<String, DownloadFileInfo> mDownloadFileInfo = new HashMap();

    public boolean overTime(long j, long j2, int i) {
        return j2 - j > ((long) (((i * 60) * 60) * 1000));
    }

    public static DownloadFileState getInstance() {
        return Factory.instance;
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private static final class Factory {
        private static final DownloadFileState instance = new DownloadFileState();

        private Factory() {
        }
    }

    public boolean syncDownloadStatus(String str, String str2, String str3) {
        syncFromFile();
        DownloadFileInfo downloadFileInfo = getDownloadFileInfo(str);
        if (downloadFileInfo == null) {
            newTaskState(str, str2, str3);
            return true;
        }
        File file = new File(downloadFileInfo.getSaveCachePath());
        long length = file.exists() ? file.length() : 0L;
        if (length > downloadFileInfo.getSavedSize()) {
            downloadFileInfo.setSavedSize(length);
        }
        downloadFileInfo.addRetryCount();
        updateTaskState(downloadFileInfo);
        return true;
    }

    public DownloadFileInfo getDownloadFileInfo(String str) {
        if (str == null || str.isEmpty() || !mDownloadFileInfo.containsKey(str)) {
            return null;
        }
        return mDownloadFileInfo.get(str);
    }

    public Map<String, DownloadFileInfo> getDownloadFileStatus() {
        return mDownloadFileInfo;
    }

    public void pause(String str) {
        DownloadFileInfo downloadFileInfo = getDownloadFileInfo(str);
        if (downloadFileInfo != null) {
            downloadFileInfo.setValid(false);
            updateTaskState(downloadFileInfo);
        }
    }

    public void resume(String str) {
        DownloadFileInfo downloadFileInfo = getDownloadFileInfo(str);
        if (downloadFileInfo != null) {
            downloadFileInfo.setValid(true);
            updateTaskState(downloadFileInfo);
        }
    }

    public void pause() {
        Iterator<Map.Entry<String, DownloadFileInfo>> it = mDownloadFileInfo.entrySet().iterator();
        while (it.hasNext()) {
            it.next().getValue().setValid(false);
        }
        syncToFile();
    }

    public void resume() {
        Iterator<Map.Entry<String, DownloadFileInfo>> it = mDownloadFileInfo.entrySet().iterator();
        while (it.hasNext()) {
            it.next().getValue().setValid(true);
        }
        syncToFile();
    }

    public synchronized boolean resetStatus(String str) {
        DownloadFileInfo downloadFileInfo = getDownloadFileInfo(str);
        if (downloadFileInfo == null) {
            return false;
        }
        downloadFileInfo.setSavedSize(0L);
        downloadFileInfo.setTotalSize(0L);
        downloadFileInfo.setValid(true);
        updateTaskState(downloadFileInfo);
        DownloadUtils.getInstance().removeFile(downloadFileInfo.getSavePath());
        DownloadUtils.getInstance().removeFile(downloadFileInfo.getSaveCachePath());
        return true;
    }

    public DownloadFileInfo searchResumeTask() {
        Iterator<Map.Entry<String, DownloadFileInfo>> it = mDownloadFileInfo.entrySet().iterator();
        while (it.hasNext()) {
            DownloadFileInfo value = it.next().getValue();
            if (value.getValid() && value.getSavedSize() < value.getTotalSize()) {
                return value;
            }
        }
        return null;
    }

    public long getDownloadSize(String str) {
        DownloadFileInfo downloadFileInfo;
        if (str.isEmpty() || (downloadFileInfo = getDownloadFileInfo(str)) == null) {
            return 0L;
        }
        return downloadFileInfo.getSavedSize();
    }

    public boolean verifySaveFileSize(String str, long j) {
        DownloadFileInfo downloadFileInfo = getDownloadFileInfo(str);
        if (downloadFileInfo != null) {
            j += downloadFileInfo.getSavedSize();
            if (downloadFileInfo.getTotalSize() > 0 && downloadFileInfo.getTotalSize() != j) {
                return false;
            }
        }
        downloadFileInfo.setTotalSize(j);
        updateTaskState(downloadFileInfo);
        return true;
    }

    public boolean syncDownloadFileSize(String str, int i) {
        DownloadFileInfo downloadFileInfo = getDownloadFileInfo(str);
        if (downloadFileInfo == null || !downloadFileInfo.getValid()) {
            return false;
        }
        downloadFileInfo.addSavedSize(i);
        updateTaskState(downloadFileInfo);
        return true;
    }

    public boolean newTaskState(String str, String str2, String str3) {
        DownloadFileInfo downloadFileInfo = new DownloadFileInfo();
        downloadFileInfo.setHash(str);
        downloadFileInfo.setURL(str2);
        downloadFileInfo.setSavePath(str3);
        updateTaskState(downloadFileInfo);
        return true;
    }

    public boolean updateTaskState(DownloadFileInfo downloadFileInfo) {
        mDownloadFileInfo.put(downloadFileInfo.getHash(), downloadFileInfo);
        syncToFile();
        return true;
    }

    public boolean removeTaskHistory(String str) {
        if (!mDownloadFileInfo.containsKey(str)) {
            return true;
        }
        mDownloadFileInfo.remove(str);
        syncToFile();
        return true;
    }

    public boolean clearAllTasks() {
        try {
            Iterator<Map.Entry<String, DownloadFileInfo>> it = mDownloadFileInfo.entrySet().iterator();
            while (it.hasNext()) {
                DownloadFileInfo value = it.next().getValue();
                File file = new File(value.getSavePath());
                File file2 = new File(value.getSaveCachePath());
                if (file.exists()) {
                    file.delete();
                }
                if (file2.exists()) {
                    file2.delete();
                }
                mDownloadFileInfo.clear();
                syncToFile();
            }
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public synchronized void syncFromFile() {
        String configPath = DownloadUtils.getInstance().getConfigPath();
        if (new File(configPath).exists()) {
            try {
                ObjectInputStream objectInputStream = new ObjectInputStream(new BufferedInputStream(new FileInputStream(configPath)));
                try {
                    mDownloadFileInfo = (Map) objectInputStream.readObject();
                    objectInputStream.close();
                } finally {
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public synchronized void syncToFile() {
        try {
            ObjectOutputStream objectOutputStream = new ObjectOutputStream(new BufferedOutputStream(new FileOutputStream(DownloadUtils.getInstance().getConfigPath(), false)));
            try {
                objectOutputStream.writeObject(mDownloadFileInfo);
                objectOutputStream.close();
            } finally {
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public void updateState(String str, long j) {
        DownloadFileInfo downloadFileInfo = mDownloadFileInfo.get(str);
        downloadFileInfo.setSavedSize(j);
        mDownloadFileInfo.put(str, downloadFileInfo);
        syncToFile();
    }

    public boolean isResumeDownload(String str) {
        if (!mDownloadFileInfo.containsKey(str)) {
            return false;
        }
        mDownloadFileInfo.get(str);
        return false;
    }
}
