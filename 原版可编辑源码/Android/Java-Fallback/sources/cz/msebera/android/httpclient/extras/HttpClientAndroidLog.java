package cz.msebera.android.httpclient.extras;

public class HttpClientAndroidLog {
    private boolean debugEnabled;
    private boolean errorEnabled;
    private boolean infoEnabled;
    private java.lang.String logTag;
    private boolean traceEnabled;
    private boolean warnEnabled;

    public HttpClientAndroidLog(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            java.lang.String r1 = r1.toString()
            r0.logTag = r1
            r1 = 0
            r0.debugEnabled = r1
            r0.errorEnabled = r1
            r0.traceEnabled = r1
            r0.warnEnabled = r1
            r0.infoEnabled = r1
            return
    }

    public void debug(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r1.isDebugEnabled()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r1.logTag
            java.lang.String r2 = r2.toString()
            android.util.Log.d(r0, r2)
        Lf:
            return
    }

    public void debug(java.lang.Object r2, java.lang.Throwable r3) {
            r1 = this;
            boolean r0 = r1.isDebugEnabled()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r1.logTag
            java.lang.String r2 = r2.toString()
            android.util.Log.d(r0, r2, r3)
        Lf:
            return
    }

    public void enableDebug(boolean r1) {
            r0 = this;
            r0.debugEnabled = r1
            return
    }

    public void enableError(boolean r1) {
            r0 = this;
            r0.errorEnabled = r1
            return
    }

    public void enableInfo(boolean r1) {
            r0 = this;
            r0.infoEnabled = r1
            return
    }

    public void enableTrace(boolean r1) {
            r0 = this;
            r0.traceEnabled = r1
            return
    }

    public void enableWarn(boolean r1) {
            r0 = this;
            r0.warnEnabled = r1
            return
    }

    public void error(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r1.isErrorEnabled()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r1.logTag
            java.lang.String r2 = r2.toString()
            android.util.Log.e(r0, r2)
        Lf:
            return
    }

    public void error(java.lang.Object r2, java.lang.Throwable r3) {
            r1 = this;
            boolean r0 = r1.isErrorEnabled()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r1.logTag
            java.lang.String r2 = r2.toString()
            android.util.Log.e(r0, r2, r3)
        Lf:
            return
    }

    public void info(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r1.isInfoEnabled()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r1.logTag
            java.lang.String r2 = r2.toString()
            android.util.Log.i(r0, r2)
        Lf:
            return
    }

    public void info(java.lang.Object r2, java.lang.Throwable r3) {
            r1 = this;
            boolean r0 = r1.isInfoEnabled()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r1.logTag
            java.lang.String r2 = r2.toString()
            android.util.Log.i(r0, r2, r3)
        Lf:
            return
    }

    public boolean isDebugEnabled() {
            r1 = this;
            boolean r0 = r1.debugEnabled
            return r0
    }

    public boolean isErrorEnabled() {
            r1 = this;
            boolean r0 = r1.errorEnabled
            return r0
    }

    public boolean isInfoEnabled() {
            r1 = this;
            boolean r0 = r1.infoEnabled
            return r0
    }

    public boolean isTraceEnabled() {
            r1 = this;
            boolean r0 = r1.traceEnabled
            return r0
    }

    public boolean isWarnEnabled() {
            r1 = this;
            boolean r0 = r1.warnEnabled
            return r0
    }

    public void trace(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r1.isTraceEnabled()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r1.logTag
            java.lang.String r2 = r2.toString()
            android.util.Log.i(r0, r2)
        Lf:
            return
    }

    public void trace(java.lang.Object r2, java.lang.Throwable r3) {
            r1 = this;
            boolean r0 = r1.isTraceEnabled()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r1.logTag
            java.lang.String r2 = r2.toString()
            android.util.Log.i(r0, r2, r3)
        Lf:
            return
    }

    public void warn(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r1.isWarnEnabled()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r1.logTag
            java.lang.String r2 = r2.toString()
            android.util.Log.w(r0, r2)
        Lf:
            return
    }

    public void warn(java.lang.Object r2, java.lang.Throwable r3) {
            r1 = this;
            boolean r0 = r1.isWarnEnabled()
            if (r0 == 0) goto Lf
            java.lang.String r0 = r1.logTag
            java.lang.String r2 = r2.toString()
            android.util.Log.w(r0, r2, r3)
        Lf:
            return
    }
}
