package com.mbridge.msdk.foundation.same.report;

public class BatchReportMessage implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.foundation.same.report.BatchReportMessage> CREATOR = null;
    private java.lang.String a;
    private java.lang.String b;
    private long c;


    static {
            com.mbridge.msdk.foundation.same.report.BatchReportMessage$1 r0 = new com.mbridge.msdk.foundation.same.report.BatchReportMessage$1
            r0.<init>()
            com.mbridge.msdk.foundation.same.report.BatchReportMessage.CREATOR = r0
            return
    }

    protected BatchReportMessage(android.os.Parcel r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = r3.readString()
            r2.a = r0
            java.lang.String r0 = r3.readString()
            r2.b = r0
            long r0 = r3.readLong()
            r2.c = r0
            return
    }

    public BatchReportMessage(java.lang.String r1, java.lang.String r2, long r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getReportMessage() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public long getTimestamp() {
            r2 = this;
            long r0 = r2.c
            return r0
    }

    public java.lang.String getUuid() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public void setReportMessage(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setTimestamp(long r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setUuid(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            java.lang.String r4 = r2.a
            r3.writeString(r4)
            java.lang.String r4 = r2.b
            r3.writeString(r4)
            long r0 = r2.c
            r3.writeLong(r0)
            return
    }
}
