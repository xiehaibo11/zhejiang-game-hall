package com.ss.android.socialbase.downloader.impls;

import android.text.TextUtils;
import android.util.SparseArray;
import com.ss.android.socialbase.downloader.constants.DownloadStatus;
import com.ss.android.socialbase.downloader.downloader.IDownloadCache;
import com.ss.android.socialbase.downloader.model.DownloadChunk;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.segment.Segment;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public class DownloadCache implements IDownloadCache {
    private final SparseArray<DownloadInfo> downloadInfoMap = new SparseArray<>();
    private final SparseArray<List<DownloadChunk>> chunkListMap = new SparseArray<>();
    private final SparseArray<Map<Long, Segment>> segmentListMap = new SparseArray<>();

    @Override
    public void addSubDownloadChunk(DownloadChunk downloadChunk) {
    }

    @Override
    public boolean ensureDownloadCacheSyncSuccess() {
        return false;
    }

    @Override
    public void init() {
    }

    @Override
    public boolean isDownloadCacheSyncSuccess() {
        return false;
    }

    @Override
    public void syncDownloadInfoFromOtherCache(int i, List<DownloadChunk> list) {
    }

    @Override
    public void updateSubDownloadChunkIndex(int i, int i2, int i3, int i4) {
    }

    public SparseArray<DownloadInfo> getDownloadInfoMap() {
        return this.downloadInfoMap;
    }

    public SparseArray<List<DownloadChunk>> getChunkListMap() {
        return this.chunkListMap;
    }

    @Override
    public DownloadInfo onDownloadTaskStart(int i) {
        DownloadInfo downloadInfo = getDownloadInfo(i);
        if (downloadInfo != null) {
            downloadInfo.setStatus(2);
        }
        return downloadInfo;
    }

    @Override
    public boolean cacheExist(int i) {
        return getDownloadInfo(i) != null;
    }

    @Override
    public synchronized DownloadInfo getDownloadInfo(int i) {
        DownloadInfo downloadInfo;
        try {
            downloadInfo = this.downloadInfoMap.get(i);
        } catch (Exception e) {
            e.printStackTrace();
            downloadInfo = null;
        }
        return downloadInfo;
    }

    @Override
    public synchronized List<DownloadInfo> getDownloadInfoList(String str) {
        ArrayList arrayList;
        arrayList = new ArrayList();
        try {
            int size = this.downloadInfoMap.size();
            for (int i = 0; i < size; i++) {
                DownloadInfo downloadInfoValueAt = this.downloadInfoMap.valueAt(i);
                if (str != null && str.equals(downloadInfoValueAt.getUrl())) {
                    arrayList.add(downloadInfoValueAt);
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return arrayList;
    }

    @Override
    public synchronized List<DownloadInfo> getFailedDownloadInfosWithMimeType(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        if (this.downloadInfoMap.size() == 0) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < this.downloadInfoMap.size(); i++) {
            DownloadInfo downloadInfo = this.downloadInfoMap.get(this.downloadInfoMap.keyAt(i));
            if (downloadInfo != null && !TextUtils.isEmpty(downloadInfo.getMimeType()) && downloadInfo.getMimeType().equals(str) && DownloadStatus.isFailedStatus(downloadInfo.getStatus())) {
                arrayList.add(downloadInfo);
            }
        }
        return arrayList;
    }

    @Override
    public synchronized List<DownloadInfo> getSuccessedDownloadInfosWithMimeType(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        if (this.downloadInfoMap.size() == 0) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < this.downloadInfoMap.size(); i++) {
            DownloadInfo downloadInfo = this.downloadInfoMap.get(this.downloadInfoMap.keyAt(i));
            if (downloadInfo != null && !TextUtils.isEmpty(downloadInfo.getMimeType()) && downloadInfo.getMimeType().equals(str) && downloadInfo.getStatus() == -3) {
                arrayList.add(downloadInfo);
            }
        }
        return arrayList;
    }

    @Override
    public synchronized List<DownloadInfo> getUnCompletedDownloadInfosWithMimeType(String str) {
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        if (this.downloadInfoMap.size() == 0) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < this.downloadInfoMap.size(); i++) {
            DownloadInfo downloadInfo = this.downloadInfoMap.get(this.downloadInfoMap.keyAt(i));
            if (downloadInfo != null && !TextUtils.isEmpty(downloadInfo.getMimeType()) && downloadInfo.getMimeType().equals(str) && DownloadStatus.isUnCompletedStatus(downloadInfo.getStatus())) {
                arrayList.add(downloadInfo);
            }
        }
        return arrayList;
    }

    @Override
    public synchronized List<DownloadInfo> getAllDownloadInfo() {
        if (this.downloadInfoMap.size() == 0) {
            return null;
        }
        ArrayList arrayList = new ArrayList(this.downloadInfoMap.size());
        for (int i = 0; i < this.downloadInfoMap.size(); i++) {
            DownloadInfo downloadInfoValueAt = this.downloadInfoMap.valueAt(i);
            if (downloadInfoValueAt != null) {
                arrayList.add(downloadInfoValueAt);
            }
        }
        return arrayList;
    }

    @Override
    public synchronized List<DownloadChunk> getDownloadChunk(int i) {
        return this.chunkListMap.get(i);
    }

    @Override
    public synchronized void removeAllDownloadChunk(int i) {
        this.chunkListMap.remove(i);
    }

    @Override
    public void addDownloadChunk(DownloadChunk downloadChunk) {
        int id = downloadChunk.getId();
        List<DownloadChunk> arrayList = this.chunkListMap.get(id);
        if (arrayList == null) {
            arrayList = new ArrayList<>();
            this.chunkListMap.put(id, arrayList);
        }
        arrayList.add(downloadChunk);
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x0021, code lost:
    
        r0.setCurrentOffset(r5);
     */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public synchronized void updateDownloadChunk(int i, int i2, long j) {
        List<DownloadChunk> downloadChunk = getDownloadChunk(i);
        if (downloadChunk == null) {
            return;
        }
        Iterator<DownloadChunk> it = downloadChunk.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            DownloadChunk next = it.next();
            if (next != null && next.getChunkIndex() == i2) {
                break;
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:17:0x002b, code lost:
    
        if (r0.getSubChunkList() != null) goto L19;
     */
    /* JADX WARN: Code restructure failed: missing block: B:19:0x002e, code lost:
    
        r3 = r0.getSubChunkList().iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:21:0x003a, code lost:
    
        if (r3.hasNext() == false) goto L42;
     */
    /* JADX WARN: Code restructure failed: missing block: B:22:0x003c, code lost:
    
        r5 = r3.next();
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x0042, code lost:
    
        if (r5 == null) goto L46;
     */
    /* JADX WARN: Code restructure failed: missing block: B:25:0x0048, code lost:
    
        if (r5.getChunkIndex() != r4) goto L47;
     */
    /* JADX WARN: Code restructure failed: missing block: B:26:0x004a, code lost:
    
        r5.setCurrentOffset(r6);
     */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public synchronized void updateSubDownloadChunk(int i, int i2, int i3, long j) {
        List<DownloadChunk> downloadChunk = getDownloadChunk(i);
        if (downloadChunk == null) {
            return;
        }
        Iterator<DownloadChunk> it = downloadChunk.iterator();
        while (true) {
            if (!it.hasNext()) {
                break;
            }
            DownloadChunk next = it.next();
            if (next != null && next.getChunkIndex() == i3 && !next.hasChunkDivided()) {
                break;
            }
        }
    }

    @Override
    public synchronized DownloadInfo updateChunkCount(int i, int i2) {
        DownloadInfo downloadInfo;
        downloadInfo = getDownloadInfo(i);
        if (downloadInfo != null) {
            downloadInfo.setChunkCount(i2);
        }
        return downloadInfo;
    }

    @Override
    public synchronized boolean updateDownloadInfo(DownloadInfo downloadInfo) {
        boolean z = true;
        if (downloadInfo == null) {
            return true;
        }
        if (this.downloadInfoMap.get(downloadInfo.getId()) == null) {
            z = false;
        }
        this.downloadInfoMap.put(downloadInfo.getId(), downloadInfo);
        return z;
    }

    @Override
    public synchronized boolean removeDownloadInfo(int i) {
        this.downloadInfoMap.remove(i);
        return true;
    }

    @Override
    public boolean removeDownloadTaskData(int i) {
        removeDownloadInfo(i);
        removeAllDownloadChunk(i);
        removeSegments(i);
        return true;
    }

    @Override
    public synchronized void clearData() {
        this.downloadInfoMap.clear();
        this.chunkListMap.clear();
    }

    @Override
    public DownloadInfo OnDownloadTaskConnected(int i, long j, String str, String str2) {
        DownloadInfo downloadInfo = getDownloadInfo(i);
        if (downloadInfo != null) {
            downloadInfo.setTotalBytes(j);
            downloadInfo.seteTag(str);
            if (TextUtils.isEmpty(downloadInfo.getName()) && !TextUtils.isEmpty(str2)) {
                downloadInfo.setName(str2);
            }
            downloadInfo.setStatus(3);
        }
        return downloadInfo;
    }

    @Override
    public DownloadInfo OnDownloadTaskProgress(int i, long j) {
        DownloadInfo downloadInfo = getDownloadInfo(i);
        if (downloadInfo != null) {
            downloadInfo.setCurBytes(j, false);
            if (downloadInfo.getStatus() != -3 && downloadInfo.getStatus() != -2 && !DownloadStatus.isFailedStatus(downloadInfo.getStatus()) && downloadInfo.getStatus() != -4) {
                downloadInfo.setStatus(4);
            }
        }
        return downloadInfo;
    }

    @Override
    public DownloadInfo OnDownloadTaskError(int i, long j) {
        DownloadInfo downloadInfo = getDownloadInfo(i);
        if (downloadInfo != null) {
            downloadInfo.setCurBytes(j, false);
            downloadInfo.setStatus(-1);
            downloadInfo.setFirstDownload(false);
        }
        return downloadInfo;
    }

    @Override
    public DownloadInfo OnDownloadTaskRetry(int i) {
        DownloadInfo downloadInfo = getDownloadInfo(i);
        if (downloadInfo != null) {
            downloadInfo.setStatus(5);
            downloadInfo.setFirstDownload(false);
        }
        return downloadInfo;
    }

    @Override
    public DownloadInfo OnDownloadTaskCompleted(int i, long j) {
        DownloadInfo downloadInfo = getDownloadInfo(i);
        if (downloadInfo != null) {
            downloadInfo.setCurBytes(j, false);
            downloadInfo.setStatus(-3);
            downloadInfo.setFirstDownload(false);
            downloadInfo.setFirstSuccess(false);
        }
        return downloadInfo;
    }

    @Override
    public DownloadInfo OnDownloadTaskPause(int i, long j) {
        DownloadInfo downloadInfo = getDownloadInfo(i);
        if (downloadInfo != null) {
            downloadInfo.setCurBytes(j, false);
            downloadInfo.setStatus(-2);
        }
        return downloadInfo;
    }

    @Override
    public DownloadInfo OnDownloadTaskCancel(int i, long j) {
        DownloadInfo downloadInfo = getDownloadInfo(i);
        if (downloadInfo != null) {
            downloadInfo.setCurBytes(j, false);
            downloadInfo.setStatus(-4);
        }
        return downloadInfo;
    }

    @Override
    public DownloadInfo OnDownloadTaskPrepare(int i) {
        DownloadInfo downloadInfo = getDownloadInfo(i);
        if (downloadInfo != null) {
            downloadInfo.setStatus(1);
        }
        return downloadInfo;
    }

    @Override
    public DownloadInfo OnDownloadTaskIntercept(int i) {
        DownloadInfo downloadInfo = getDownloadInfo(i);
        if (downloadInfo != null) {
            downloadInfo.setStatus(-7);
        }
        return downloadInfo;
    }

    @Override
    public void syncDownloadInfo(DownloadInfo downloadInfo) {
        updateDownloadInfo(downloadInfo);
    }

    @Override
    public synchronized void syncDownloadChunks(int i, List<DownloadChunk> list) {
        if (list == null) {
            return;
        }
        removeAllDownloadChunk(i);
        for (DownloadChunk downloadChunk : list) {
            if (downloadChunk != null) {
                addDownloadChunk(downloadChunk);
                if (downloadChunk.hasChunkDivided()) {
                    Iterator<DownloadChunk> it = downloadChunk.getSubChunkList().iterator();
                    while (it.hasNext()) {
                        addDownloadChunk(it.next());
                    }
                }
            }
        }
    }

    @Override
    public synchronized List<Segment> getSegments(int i) {
        Map<Long, Segment> map = this.segmentListMap.get(i);
        if (map != null && !map.isEmpty()) {
            return new ArrayList(map.values());
        }
        return null;
    }

    @Override
    public synchronized Map<Long, Segment> getSegmentMap(int i) {
        return this.segmentListMap.get(i);
    }

    @Override
    public synchronized boolean updateSegments(int i, Map<Long, Segment> map) {
        this.segmentListMap.put(i, map);
        return false;
    }

    @Override
    public synchronized void removeSegments(int i) {
        this.segmentListMap.remove(i);
    }
}
