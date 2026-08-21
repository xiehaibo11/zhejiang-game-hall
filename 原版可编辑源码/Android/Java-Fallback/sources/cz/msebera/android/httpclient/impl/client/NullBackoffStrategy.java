package cz.msebera.android.httpclient.impl.client;

public class NullBackoffStrategy implements cz.msebera.android.httpclient.client.ConnectionBackoffStrategy {
    public NullBackoffStrategy() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean shouldBackoff(cz.msebera.android.httpclient.HttpResponse r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean shouldBackoff(java.lang.Throwable r1) {
            r0 = this;
            r1 = 0
            return r1
    }
}
