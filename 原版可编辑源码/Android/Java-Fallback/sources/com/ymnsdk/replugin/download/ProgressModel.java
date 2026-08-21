package com.ymnsdk.replugin.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class ProgressModel implements java.io.Serializable {
    private long contentLength;
    private long currentBytes;
    private boolean done;

    public ProgressModel(long r1, long r3, boolean r5) {
            r0 = this;
            r0.<init>()
            r0.currentBytes = r1
            r0.contentLength = r3
            r0.done = r5
            return
    }

    public long getContentLength() {
            r2 = this;
            long r0 = r2.contentLength
            return r0
    }

    public long getCurrentBytes() {
            r2 = this;
            long r0 = r2.currentBytes
            return r0
    }

    public boolean isDone() {
            r1 = this;
            boolean r0 = r1.done
            return r0
    }

    public void setContentLength(long r1) {
            r0 = this;
            r0.contentLength = r1
            return
    }

    public void setCurrentBytes(long r1) {
            r0 = this;
            r0.currentBytes = r1
            return
    }

    public void setDone(boolean r1) {
            r0 = this;
            r0.done = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ProgressModel{currentBytes="
            r0.append(r1)
            long r1 = r3.currentBytes
            r0.append(r1)
            java.lang.String r1 = ", contentLength="
            r0.append(r1)
            long r1 = r3.contentLength
            r0.append(r1)
            java.lang.String r1 = ", done="
            r0.append(r1)
            boolean r1 = r3.done
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
