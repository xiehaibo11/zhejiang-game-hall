package com.alibaba.sdk.android.oss.model;

public class PartETag {
    private long crc64;
    private java.lang.String eTag;
    private int partNumber;
    private long partSize;

    public PartETag(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.setPartNumber(r1)
            r0.setETag(r2)
            return
    }

    public long getCRC64() {
            r2 = this;
            long r0 = r2.crc64
            return r0
    }

    public java.lang.String getETag() {
            r1 = this;
            java.lang.String r0 = r1.eTag
            return r0
    }

    public int getPartNumber() {
            r1 = this;
            int r0 = r1.partNumber
            return r0
    }

    public long getPartSize() {
            r2 = this;
            long r0 = r2.partSize
            return r0
    }

    public void setCRC64(long r1) {
            r0 = this;
            r0.crc64 = r1
            return
    }

    public void setETag(java.lang.String r1) {
            r0 = this;
            r0.eTag = r1
            return
    }

    public void setPartNumber(int r1) {
            r0 = this;
            r0.partNumber = r1
            return
    }

    public void setPartSize(long r1) {
            r0 = this;
            r0.partSize = r1
            return
    }
}
