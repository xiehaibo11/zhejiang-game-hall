package com.kwad.sdk.core.response.model;

public class AdStatusInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    private static final long serialVersionUID = 3728247893272878881L;
    public long downloadFinishTime;
    public long downloadSize;
    public int downloadType;
    public long loadDataTime;
    public boolean loadFromCache;

    public AdStatusInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public long getDownloadFinishTime() {
            r2 = this;
            long r0 = r2.downloadFinishTime
            return r0
    }

    public long getDownloadSize() {
            r2 = this;
            long r0 = r2.downloadSize
            return r0
    }

    public int getDownloadType() {
            r1 = this;
            int r0 = r1.downloadType
            return r0
    }

    public long getLoadDataTime() {
            r2 = this;
            long r0 = r2.loadDataTime
            return r0
    }

    public boolean isLoadFromCache() {
            r1 = this;
            boolean r0 = r1.loadFromCache
            return r0
    }

    public void setDownloadFinishTime(long r1) {
            r0 = this;
            r0.downloadFinishTime = r1
            return
    }

    public void setDownloadSize(long r1) {
            r0 = this;
            r0.downloadSize = r1
            return
    }

    public void setDownloadType(int r1) {
            r0 = this;
            r0.downloadType = r1
            return
    }

    public void setLoadDataTime(long r1) {
            r0 = this;
            r0.loadDataTime = r1
            return
    }

    public void setLoadFromCache(boolean r1) {
            r0 = this;
            r0.loadFromCache = r1
            return
    }
}
