package com.alibaba.sdk.android.oss.model;

public class PartSummary {
    private java.lang.String eTag;
    private java.util.Date lastModified;
    private int partNumber;
    private long size;

    public PartSummary() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getETag() {
            r1 = this;
            java.lang.String r0 = r1.eTag
            return r0
    }

    public java.util.Date getLastModified() {
            r1 = this;
            java.util.Date r0 = r1.lastModified
            return r0
    }

    public int getPartNumber() {
            r1 = this;
            int r0 = r1.partNumber
            return r0
    }

    public long getSize() {
            r2 = this;
            long r0 = r2.size
            return r0
    }

    public void setETag(java.lang.String r1) {
            r0 = this;
            r0.eTag = r1
            return
    }

    public void setLastModified(java.util.Date r1) {
            r0 = this;
            r0.lastModified = r1
            return
    }

    public void setPartNumber(int r1) {
            r0 = this;
            r0.partNumber = r1
            return
    }

    public void setSize(long r1) {
            r0 = this;
            r0.size = r1
            return
    }
}
