package com.bumptech.glide.manager;

public class RequestTracker {
    private boolean isPaused;
    private final java.util.List<com.bumptech.glide.request.Request> pendingRequests;
    private final java.util.Set<com.bumptech.glide.request.Request> requests;

    public RequestTracker() {
            r1 = this;
            r1.<init>()
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            java.util.Set r0 = java.util.Collections.newSetFromMap(r0)
            r1.requests = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.pendingRequests = r0
            return
    }

    void addRequest(com.bumptech.glide.request.Request r2) {
            r1 = this;
            java.util.Set<com.bumptech.glide.request.Request> r0 = r1.requests
            r0.add(r2)
            return
    }

    public void clearRequests() {
            r2 = this;
            java.util.Set<com.bumptech.glide.request.Request> r0 = r2.requests
            java.util.List r0 = com.bumptech.glide.util.Util.getSnapshot(r0)
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r0.next()
            com.bumptech.glide.request.Request r1 = (com.bumptech.glide.request.Request) r1
            r1.clear()
            goto La
        L1a:
            java.util.List<com.bumptech.glide.request.Request> r0 = r2.pendingRequests
            r0.clear()
            return
    }

    public boolean isPaused() {
            r1 = this;
            boolean r0 = r1.isPaused
            return r0
    }

    public void pauseRequests() {
            r3 = this;
            r0 = 1
            r3.isPaused = r0
            java.util.Set<com.bumptech.glide.request.Request> r0 = r3.requests
            java.util.List r0 = com.bumptech.glide.util.Util.getSnapshot(r0)
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L28
            java.lang.Object r1 = r0.next()
            com.bumptech.glide.request.Request r1 = (com.bumptech.glide.request.Request) r1
            boolean r2 = r1.isRunning()
            if (r2 == 0) goto Ld
            r1.pause()
            java.util.List<com.bumptech.glide.request.Request> r2 = r3.pendingRequests
            r2.add(r1)
            goto Ld
        L28:
            return
    }

    public void removeRequest(com.bumptech.glide.request.Request r2) {
            r1 = this;
            java.util.Set<com.bumptech.glide.request.Request> r0 = r1.requests
            r0.remove(r2)
            java.util.List<com.bumptech.glide.request.Request> r0 = r1.pendingRequests
            r0.remove(r2)
            return
    }

    public void restartRequests() {
            r3 = this;
            java.util.Set<com.bumptech.glide.request.Request> r0 = r3.requests
            java.util.List r0 = com.bumptech.glide.util.Util.getSnapshot(r0)
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L33
            java.lang.Object r1 = r0.next()
            com.bumptech.glide.request.Request r1 = (com.bumptech.glide.request.Request) r1
            boolean r2 = r1.isComplete()
            if (r2 != 0) goto La
            boolean r2 = r1.isCancelled()
            if (r2 != 0) goto La
            r1.pause()
            boolean r2 = r3.isPaused
            if (r2 != 0) goto L2d
            r1.begin()
            goto La
        L2d:
            java.util.List<com.bumptech.glide.request.Request> r2 = r3.pendingRequests
            r2.add(r1)
            goto La
        L33:
            return
    }

    public void resumeRequests() {
            r3 = this;
            r0 = 0
            r3.isPaused = r0
            java.util.Set<com.bumptech.glide.request.Request> r0 = r3.requests
            java.util.List r0 = com.bumptech.glide.util.Util.getSnapshot(r0)
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2f
            java.lang.Object r1 = r0.next()
            com.bumptech.glide.request.Request r1 = (com.bumptech.glide.request.Request) r1
            boolean r2 = r1.isComplete()
            if (r2 != 0) goto Ld
            boolean r2 = r1.isCancelled()
            if (r2 != 0) goto Ld
            boolean r2 = r1.isRunning()
            if (r2 != 0) goto Ld
            r1.begin()
            goto Ld
        L2f:
            java.util.List<com.bumptech.glide.request.Request> r0 = r3.pendingRequests
            r0.clear()
            return
    }

    public void runRequest(com.bumptech.glide.request.Request r2) {
            r1 = this;
            java.util.Set<com.bumptech.glide.request.Request> r0 = r1.requests
            r0.add(r2)
            boolean r0 = r1.isPaused
            if (r0 != 0) goto Ld
            r2.begin()
            goto L12
        Ld:
            java.util.List<com.bumptech.glide.request.Request> r0 = r1.pendingRequests
            r0.add(r2)
        L12:
            return
    }
}
