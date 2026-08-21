package cz.msebera.android.httpclient.impl.client;

class SystemClock implements cz.msebera.android.httpclient.impl.client.Clock {
    SystemClock() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public long getCurrentTime() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            return r0
    }
}
