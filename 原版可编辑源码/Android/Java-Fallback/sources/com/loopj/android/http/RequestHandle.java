package com.loopj.android.http;

public class RequestHandle {
    private final java.lang.ref.WeakReference<com.loopj.android.http.AsyncHttpRequest> request;


    public RequestHandle(com.loopj.android.http.AsyncHttpRequest r2) {
            r1 = this;
            r1.<init>()
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.request = r0
            return
    }

    public boolean cancel(boolean r4) {
            r3 = this;
            java.lang.ref.WeakReference<com.loopj.android.http.AsyncHttpRequest> r0 = r3.request
            java.lang.Object r0 = r0.get()
            com.loopj.android.http.AsyncHttpRequest r0 = (com.loopj.android.http.AsyncHttpRequest) r0
            if (r0 == 0) goto L28
            android.os.Looper r1 = android.os.Looper.myLooper()
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            if (r1 != r2) goto L23
            java.lang.Thread r1 = new java.lang.Thread
            com.loopj.android.http.RequestHandle$1 r2 = new com.loopj.android.http.RequestHandle$1
            r2.<init>(r3, r0, r4)
            r1.<init>(r2)
            r1.start()
            r4 = 1
            return r4
        L23:
            boolean r4 = r0.cancel(r4)
            return r4
        L28:
            r4 = 0
            return r4
    }

    public java.lang.Object getTag() {
            r1 = this;
            java.lang.ref.WeakReference<com.loopj.android.http.AsyncHttpRequest> r0 = r1.request
            java.lang.Object r0 = r0.get()
            com.loopj.android.http.AsyncHttpRequest r0 = (com.loopj.android.http.AsyncHttpRequest) r0
            if (r0 != 0) goto Lc
            r0 = 0
            goto L10
        Lc:
            java.lang.Object r0 = r0.getTag()
        L10:
            return r0
    }

    public boolean isCancelled() {
            r1 = this;
            java.lang.ref.WeakReference<com.loopj.android.http.AsyncHttpRequest> r0 = r1.request
            java.lang.Object r0 = r0.get()
            com.loopj.android.http.AsyncHttpRequest r0 = (com.loopj.android.http.AsyncHttpRequest) r0
            if (r0 == 0) goto L13
            boolean r0 = r0.isCancelled()
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 0
            goto L14
        L13:
            r0 = 1
        L14:
            return r0
    }

    public boolean isFinished() {
            r1 = this;
            java.lang.ref.WeakReference<com.loopj.android.http.AsyncHttpRequest> r0 = r1.request
            java.lang.Object r0 = r0.get()
            com.loopj.android.http.AsyncHttpRequest r0 = (com.loopj.android.http.AsyncHttpRequest) r0
            if (r0 == 0) goto L13
            boolean r0 = r0.isDone()
            if (r0 == 0) goto L11
            goto L13
        L11:
            r0 = 0
            goto L14
        L13:
            r0 = 1
        L14:
            return r0
    }

    public com.loopj.android.http.RequestHandle setTag(java.lang.Object r2) {
            r1 = this;
            java.lang.ref.WeakReference<com.loopj.android.http.AsyncHttpRequest> r0 = r1.request
            java.lang.Object r0 = r0.get()
            com.loopj.android.http.AsyncHttpRequest r0 = (com.loopj.android.http.AsyncHttpRequest) r0
            if (r0 == 0) goto Ld
            r0.setRequestTag(r2)
        Ld:
            return r1
    }

    public boolean shouldBeGarbageCollected() {
            r2 = this;
            boolean r0 = r2.isCancelled()
            if (r0 != 0) goto Lf
            boolean r0 = r2.isFinished()
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            if (r0 == 0) goto L17
            java.lang.ref.WeakReference<com.loopj.android.http.AsyncHttpRequest> r1 = r2.request
            r1.clear()
        L17:
            return r0
    }
}
