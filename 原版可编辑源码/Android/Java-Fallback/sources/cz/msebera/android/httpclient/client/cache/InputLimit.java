package cz.msebera.android.httpclient.client.cache;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class InputLimit {
    private boolean reached;
    private final long value;

    public InputLimit(long r1) {
            r0 = this;
            r0.<init>()
            r0.value = r1
            r1 = 0
            r0.reached = r1
            return
    }

    public long getValue() {
            r2 = this;
            long r0 = r2.value
            return r0
    }

    public boolean isReached() {
            r1 = this;
            boolean r0 = r1.reached
            return r0
    }

    public void reached() {
            r1 = this;
            r0 = 1
            r1.reached = r0
            return
    }
}
