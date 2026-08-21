package com.ymnsdk.replugin.patch.download;

import com.ymnsdk.replugin.patch.download.DownloadCode;
import java.io.Serializable;
import java.util.ArrayList;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class DownloadFileInfo implements Serializable {
    private String hash = null;
    private String fileName = null;
    private String savePath = null;
    private String url = null;
    private long savedSize = 0;
    private long totalSize = 0;
    private int retryCount = 0;
    private int networkRetryCount = 0;
    private boolean valid = true;
    private ArrayList<Integer> roadmap = null;

    public synchronized boolean setHash(String str) {
        this.hash = str;
        return true;
    }

    public String getHash() {
        return this.hash;
    }

    public synchronized boolean setURL(String str) {
        this.url = str;
        return true;
    }

    public String getURL() {
        return this.url;
    }

    public synchronized boolean setSavePath(String str) {
        this.savePath = str;
        String[] strArrSplit = str.replace("\\", "/").split("/");
        if (strArrSplit.length <= 0) {
            return false;
        }
        this.fileName = strArrSplit[strArrSplit.length - 1];
        return true;
    }

    public String getSavePath() {
        return this.savePath;
    }

    public String getSaveCachePath() {
        String str = this.savePath;
        if (str == null || str.isEmpty()) {
            return null;
        }
        return this.savePath + ".cache";
    }

    public boolean setSavedSize(long j) {
        this.savedSize = j;
        return true;
    }

    public boolean addSavedSize(long j) {
        this.savedSize += j;
        return true;
    }

    public long getSavedSize() {
        return this.savedSize;
    }

    public boolean setTotalSize(long j) {
        this.totalSize = j;
        return true;
    }

    public long getTotalSize() {
        return this.totalSize;
    }

    public void setRetryCount(int i) {
        this.retryCount = i;
    }

    public void addRetryCount() {
        this.retryCount++;
    }

    public int getRetryCount() {
        return this.retryCount;
    }

    public void setNetworkRetryCount(int i) {
        this.networkRetryCount = i;
    }

    public void addNetworkRetryCount() {
        this.networkRetryCount++;
    }

    public int getNetworkRetryCount() {
        return this.networkRetryCount;
    }

    public void setValid(boolean z) {
        this.valid = z;
    }

    public boolean getValid() {
        return this.valid;
    }

    public void addRoadMap(DownloadCode.Code code) {
        if (this.roadmap == null) {
            this.roadmap = new ArrayList<>();
        }
        this.roadmap.add(Integer.valueOf(code.ordinal()));
    }

    public ArrayList<Integer> getRoadmap() {
        return this.roadmap;
    }
}
