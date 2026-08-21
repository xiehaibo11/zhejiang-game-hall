package com.mbridge.msdk.foundation.download;

public class DownloadProgress implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.foundation.download.DownloadProgress> CREATOR = null;
    private long current;
    private int currentDownloadRate;
    private long total;


    static {
            com.mbridge.msdk.foundation.download.DownloadProgress$1 r0 = new com.mbridge.msdk.foundation.download.DownloadProgress$1
            r0.<init>()
            com.mbridge.msdk.foundation.download.DownloadProgress.CREATOR = r0
            return
    }

    public DownloadProgress(long r1, long r3, int r5) {
            r0 = this;
            r0.<init>()
            r0.current = r1
            r0.total = r3
            r0.currentDownloadRate = r5
            return
    }

    protected DownloadProgress(android.os.Parcel r3) {
            r2 = this;
            r2.<init>()
            long r0 = r3.readLong()
            r2.current = r0
            long r0 = r3.readLong()
            r2.total = r0
            int r3 = r3.readInt()
            r2.currentDownloadRate = r3
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public long getCurrent() {
            r2 = this;
            long r0 = r2.current
            return r0
    }

    public int getCurrentDownloadRate() {
            r1 = this;
            int r0 = r1.currentDownloadRate
            return r0
    }

    public long getTotal() {
            r2 = this;
            long r0 = r2.total
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            long r0 = r2.current
            r3.writeLong(r0)
            long r0 = r2.total
            r3.writeLong(r0)
            int r4 = r2.currentDownloadRate
            r3.writeInt(r4)
            return
    }
}
