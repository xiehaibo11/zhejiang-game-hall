package com.loopj.android.http;

public class LogHandler implements com.loopj.android.http.LogInterface {
    boolean mLoggingEnabled;
    int mLoggingLevel;

    public LogHandler() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.mLoggingEnabled = r0
            r0 = 2
            r1.mLoggingLevel = r0
            return
    }

    @android.annotation.TargetApi(8)
    private void checkedWtf(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            r0 = this;
            android.util.Log.wtf(r1, r2, r3)
            return
    }

    @Override
    public void d(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 2
            r1.log(r0, r2, r3)
            return
    }

    @Override
    public void d(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            r1 = this;
            r0 = 3
            r1.logWithThrowable(r0, r2, r3, r4)
            return
    }

    @Override
    public void e(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 6
            r1.log(r0, r2, r3)
            return
    }

    @Override
    public void e(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            r1 = this;
            r0 = 6
            r1.logWithThrowable(r0, r2, r3, r4)
            return
    }

    @Override
    public int getLoggingLevel() {
            r1 = this;
            int r0 = r1.mLoggingLevel
            return r0
    }

    @Override
    public void i(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 4
            r1.log(r0, r2, r3)
            return
    }

    @Override
    public void i(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            r1 = this;
            r0 = 4
            r1.logWithThrowable(r0, r2, r3, r4)
            return
    }

    @Override
    public boolean isLoggingEnabled() {
            r1 = this;
            boolean r0 = r1.mLoggingEnabled
            return r0
    }

    public void log(int r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r0 = 0
            r1.logWithThrowable(r2, r3, r4, r0)
            return
    }

    public void logWithThrowable(int r2, java.lang.String r3, java.lang.String r4, java.lang.Throwable r5) {
            r1 = this;
            boolean r0 = r1.isLoggingEnabled()
            if (r0 == 0) goto L47
            boolean r0 = r1.shouldLog(r2)
            if (r0 == 0) goto L47
            r0 = 2
            if (r2 == r0) goto L44
            r0 = 3
            if (r2 == r0) goto L40
            r0 = 4
            if (r2 == r0) goto L3c
            r0 = 5
            if (r2 == r0) goto L38
            r0 = 6
            if (r2 == r0) goto L34
            r0 = 8
            if (r2 == r0) goto L20
            goto L47
        L20:
            java.lang.String r2 = android.os.Build.VERSION.SDK
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            int r2 = r2.intValue()
            if (r2 <= r0) goto L30
            r1.checkedWtf(r3, r4, r5)
            goto L47
        L30:
            android.util.Log.e(r3, r4, r5)
            goto L47
        L34:
            android.util.Log.e(r3, r4, r5)
            goto L47
        L38:
            android.util.Log.w(r3, r4, r5)
            goto L47
        L3c:
            android.util.Log.i(r3, r4, r5)
            goto L47
        L40:
            android.util.Log.d(r3, r4, r5)
            goto L47
        L44:
            android.util.Log.v(r3, r4, r5)
        L47:
            return
    }

    @Override
    public void setLoggingEnabled(boolean r1) {
            r0 = this;
            r0.mLoggingEnabled = r1
            return
    }

    @Override
    public void setLoggingLevel(int r1) {
            r0 = this;
            r0.mLoggingLevel = r1
            return
    }

    @Override
    public boolean shouldLog(int r2) {
            r1 = this;
            int r0 = r1.mLoggingLevel
            if (r2 < r0) goto L6
            r2 = 1
            goto L7
        L6:
            r2 = 0
        L7:
            return r2
    }

    @Override
    public void v(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 2
            r1.log(r0, r2, r3)
            return
    }

    @Override
    public void v(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            r1 = this;
            r0 = 2
            r1.logWithThrowable(r0, r2, r3, r4)
            return
    }

    @Override
    public void w(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 5
            r1.log(r0, r2, r3)
            return
    }

    @Override
    public void w(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            r1 = this;
            r0 = 5
            r1.logWithThrowable(r0, r2, r3, r4)
            return
    }

    @Override
    public void wtf(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r0 = 8
            r1.log(r0, r2, r3)
            return
    }

    @Override
    public void wtf(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            r1 = this;
            r0 = 8
            r1.logWithThrowable(r0, r2, r3, r4)
            return
    }
}
