package com.mbridge.msdk.foundation.download;

public class DownloadResponse {
    private static final java.lang.String UN_KNOWN = "unknown";
    private com.mbridge.msdk.foundation.download.DownloadError _error;
    private boolean _isCancelled;
    private boolean _isSuccessful;
    private int from;

    public DownloadResponse() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.from = r0
            return
    }

    public com.mbridge.msdk.foundation.download.DownloadError getError() {
            r1 = this;
            com.mbridge.msdk.foundation.download.DownloadError r0 = r1._error
            return r0
    }

    public java.lang.String getErrorMessage() {
            r1 = this;
            com.mbridge.msdk.foundation.download.DownloadError r0 = r1.getError()
            boolean r0 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r0)
            if (r0 != 0) goto L26
            com.mbridge.msdk.foundation.download.DownloadError r0 = r1.getError()
            java.lang.Exception r0 = r0.getException()
            boolean r0 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r0)
            if (r0 == 0) goto L19
            goto L26
        L19:
            com.mbridge.msdk.foundation.download.DownloadError r0 = r1.getError()
            java.lang.Exception r0 = r0.getException()
            java.lang.String r0 = r0.getMessage()
            return r0
        L26:
            java.lang.String r0 = "unknown"
            return r0
    }

    public int getFrom() {
            r1 = this;
            int r0 = r1.from
            return r0
    }

    public boolean isCancelled() {
            r1 = this;
            boolean r0 = r1._isCancelled
            return r0
    }

    public boolean isSuccessful() {
            r1 = this;
            boolean r0 = r1._isSuccessful
            return r0
    }

    public void setCancelled(boolean r1) {
            r0 = this;
            r0._isCancelled = r1
            return
    }

    public void setError(com.mbridge.msdk.foundation.download.DownloadError r1) {
            r0 = this;
            r0._error = r1
            r1 = 0
            r0.setSuccessful(r1)
            return
    }

    public void setError(java.lang.Exception r2) {
            r1 = this;
            com.mbridge.msdk.foundation.download.DownloadError r0 = new com.mbridge.msdk.foundation.download.DownloadError
            r0.<init>(r2)
            r1.setError(r0)
            return
    }

    public void setFrom(int r1) {
            r0 = this;
            r0.from = r1
            return
    }

    public void setSuccessful(boolean r1) {
            r0 = this;
            r0._isSuccessful = r1
            return
    }
}
