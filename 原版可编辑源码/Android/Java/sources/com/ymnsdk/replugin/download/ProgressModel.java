package com.ymnsdk.replugin.download;

import java.io.Serializable;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class ProgressModel implements Serializable {
    private long contentLength;
    private long currentBytes;
    private boolean done;

    public ProgressModel(long j, long j2, boolean z) {
        this.currentBytes = j;
        this.contentLength = j2;
        this.done = z;
    }

    public long getCurrentBytes() {
        return this.currentBytes;
    }

    public void setCurrentBytes(long j) {
        this.currentBytes = j;
    }

    public long getContentLength() {
        return this.contentLength;
    }

    public void setContentLength(long j) {
        this.contentLength = j;
    }

    public boolean isDone() {
        return this.done;
    }

    public void setDone(boolean z) {
        this.done = z;
    }

    public String toString() {
        return "ProgressModel{currentBytes=" + this.currentBytes + ", contentLength=" + this.contentLength + ", done=" + this.done + '}';
    }
}
