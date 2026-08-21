package com.alibaba.sdk.android.oss;

public class ServiceException extends java.lang.Exception {
    private static final long serialVersionUID = 430933593095358673L;
    private java.lang.String errorCode;
    private java.lang.String hostId;
    private java.lang.String partEtag;
    private java.lang.String partNumber;
    private java.lang.String rawMessage;
    private java.lang.String requestId;
    private int statusCode;

    public ServiceException(int r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r0 = this;
            r0.<init>(r2)
            r0.statusCode = r1
            r0.errorCode = r3
            r0.requestId = r4
            r0.hostId = r5
            r0.rawMessage = r6
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r0)
            return
    }

    public java.lang.String getErrorCode() {
            r1 = this;
            java.lang.String r0 = r1.errorCode
            return r0
    }

    public java.lang.String getHostId() {
            r1 = this;
            java.lang.String r0 = r1.hostId
            return r0
    }

    public java.lang.String getPartEtag() {
            r1 = this;
            java.lang.String r0 = r1.partEtag
            return r0
    }

    public java.lang.String getPartNumber() {
            r1 = this;
            java.lang.String r0 = r1.partNumber
            return r0
    }

    public java.lang.String getRawMessage() {
            r1 = this;
            java.lang.String r0 = r1.rawMessage
            return r0
    }

    public java.lang.String getRequestId() {
            r1 = this;
            java.lang.String r0 = r1.requestId
            return r0
    }

    public int getStatusCode() {
            r1 = this;
            int r0 = r1.statusCode
            return r0
    }

    public void setPartEtag(java.lang.String r1) {
            r0 = this;
            r0.partEtag = r1
            return
    }

    public void setPartNumber(java.lang.String r1) {
            r0 = this;
            r0.partNumber = r1
            return
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[StatusCode]: "
            r0.append(r1)
            int r1 = r2.statusCode
            r0.append(r1)
            java.lang.String r1 = ", [Code]: "
            r0.append(r1)
            java.lang.String r1 = r2.getErrorCode()
            r0.append(r1)
            java.lang.String r1 = ", [Message]: "
            r0.append(r1)
            java.lang.String r1 = r2.getMessage()
            r0.append(r1)
            java.lang.String r1 = ", [Requestid]: "
            r0.append(r1)
            java.lang.String r1 = r2.getRequestId()
            r0.append(r1)
            java.lang.String r1 = ", [HostId]: "
            r0.append(r1)
            java.lang.String r1 = r2.getHostId()
            r0.append(r1)
            java.lang.String r1 = ", [RawMessage]: "
            r0.append(r1)
            java.lang.String r1 = r2.getRawMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
