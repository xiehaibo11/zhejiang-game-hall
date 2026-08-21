package com.alibaba.sdk.android.oss.model;

public class OSSResult {
    private java.lang.Long clientCRC;
    private java.lang.String requestId;
    private java.util.Map<java.lang.String, java.lang.String> responseHeader;
    private java.lang.Long serverCRC;
    private int statusCode;

    public OSSResult() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.Long getClientCRC() {
            r1 = this;
            java.lang.Long r0 = r1.clientCRC
            return r0
    }

    public java.lang.String getRequestId() {
            r1 = this;
            java.lang.String r0 = r1.requestId
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getResponseHeader() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.responseHeader
            return r0
    }

    public java.lang.Long getServerCRC() {
            r1 = this;
            java.lang.Long r0 = r1.serverCRC
            return r0
    }

    public int getStatusCode() {
            r1 = this;
            int r0 = r1.statusCode
            return r0
    }

    public void setClientCRC(java.lang.Long r6) {
            r5 = this;
            if (r6 == 0) goto Le
            long r0 = r6.longValue()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto Le
            r5.clientCRC = r6
        Le:
            return
    }

    public void setRequestId(java.lang.String r1) {
            r0 = this;
            r0.requestId = r1
            return
    }

    public void setResponseHeader(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.responseHeader = r1
            return
    }

    public void setServerCRC(java.lang.Long r6) {
            r5 = this;
            if (r6 == 0) goto Le
            long r0 = r6.longValue()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto Le
            r5.serverCRC = r6
        Le:
            return
    }

    public void setStatusCode(int r1) {
            r0 = this;
            r0.statusCode = r1
            return
    }

    public java.lang.String toString() {
            r3 = this;
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = super.toString()
            r2 = 0
            r0[r2] = r1
            int r1 = r3.statusCode
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            java.util.Map<java.lang.String, java.lang.String> r1 = r3.responseHeader
            java.lang.String r1 = r1.toString()
            r2 = 2
            r0[r2] = r1
            java.lang.String r1 = r3.requestId
            r2 = 3
            r0[r2] = r1
            java.lang.String r1 = "OSSResult<%s>: \nstatusCode:%d,\nresponseHeader:%s,\nrequestId:%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }
}
