package cz.msebera.android.httpclient.client.cache;

import cz.msebera.android.httpclient.annotation.NotThreadSafe;

/* JADX INFO: loaded from: classes4.dex */
@NotThreadSafe
public class InputLimit {
    private boolean reached = false;
    private final long value;

    public InputLimit(long j) {
        this.value = j;
    }

    public long getValue() {
        return this.value;
    }

    public void reached() {
        this.reached = true;
    }

    public boolean isReached() {
        return this.reached;
    }
}
