package com.czhj.volley;

public class DefaultRetryPolicy implements com.czhj.volley.RetryPolicy {
    public static final float DEFAULT_BACKOFF_MULT = 0.0f;
    public static final int DEFAULT_CONNECT_TIMEOUT_MS = 10000;
    public static final int DEFAULT_MAX_RETRIES = 2;
    public static final int DEFAULT_TIMEOUT_MS = 10000;
    private final int a;
    private final float b;
    private final int c;
    private int d;
    private int e;

    public DefaultRetryPolicy() {
            r3 = this;
            r0 = 10000(0x2710, float:1.4013E-41)
            r1 = 2
            r2 = 0
            r3.<init>(r0, r1, r2)
            return
    }

    public DefaultRetryPolicy(int r1, int r2, float r3) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.d = r1
            r0.a = r2
            r0.b = r3
            return
    }

    public DefaultRetryPolicy(int r1, int r2, int r3, float r4) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            r0.d = r2
            r0.a = r3
            r0.b = r4
            return
    }

    public float getBackoffMultiplier() {
            r1 = this;
            float r0 = r1.b
            return r0
    }

    @Override
    public int getCurrentConnectTimeoutMs() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    @Override
    public int getCurrentRetryCount() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    @Override
    public int getCurrentTimeout() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    protected boolean hasAttemptRemaining() {
            r2 = this;
            int r0 = r2.e
            int r1 = r2.a
            if (r0 > r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @Override
    public void retry(com.czhj.volley.VolleyError r4) throws com.czhj.volley.VolleyError {
            r3 = this;
            int r0 = r3.e
            int r0 = r0 + 1
            r3.e = r0
            int r0 = r3.d
            float r1 = (float) r0
            float r2 = r3.b
            float r1 = r1 * r2
            int r1 = (int) r1
            int r0 = r0 + r1
            r3.d = r0
            boolean r0 = r3.hasAttemptRemaining()
            if (r0 == 0) goto L17
            return
        L17:
            throw r4
    }
}
