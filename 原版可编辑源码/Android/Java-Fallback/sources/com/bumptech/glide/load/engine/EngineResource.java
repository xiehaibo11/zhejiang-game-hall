package com.bumptech.glide.load.engine;

class EngineResource<Z> implements com.bumptech.glide.load.engine.Resource<Z> {
    private int acquired;
    private final boolean isCacheable;
    private boolean isRecycled;
    private com.bumptech.glide.load.Key key;
    private com.bumptech.glide.load.engine.EngineResource.ResourceListener listener;
    private final com.bumptech.glide.load.engine.Resource<Z> resource;

    interface ResourceListener {
        void onResourceReleased(com.bumptech.glide.load.Key r1, com.bumptech.glide.load.engine.EngineResource<?> r2);
    }

    EngineResource(com.bumptech.glide.load.engine.Resource<Z> r1, boolean r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto La
            r0.resource = r1
            r0.isCacheable = r2
            return
        La:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r2 = "Wrapped resource must not be null"
            r1.<init>(r2)
            throw r1
    }

    void acquire() {
            r2 = this;
            boolean r0 = r2.isRecycled
            if (r0 != 0) goto L21
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L19
            int r0 = r2.acquired
            int r0 = r0 + 1
            r2.acquired = r0
            return
        L19:
            java.lang.IllegalThreadStateException r0 = new java.lang.IllegalThreadStateException
            java.lang.String r1 = "Must call acquire on the main thread"
            r0.<init>(r1)
            throw r0
        L21:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Cannot acquire a recycled resource"
            r0.<init>(r1)
            throw r0
    }

    @Override
    public Z get() {
            r1 = this;
            com.bumptech.glide.load.engine.Resource<Z> r0 = r1.resource
            java.lang.Object r0 = r0.get()
            return r0
    }

    @Override
    public int getSize() {
            r1 = this;
            com.bumptech.glide.load.engine.Resource<Z> r0 = r1.resource
            int r0 = r0.getSize()
            return r0
    }

    boolean isCacheable() {
            r1 = this;
            boolean r0 = r1.isCacheable
            return r0
    }

    @Override
    public void recycle() {
            r2 = this;
            int r0 = r2.acquired
            if (r0 > 0) goto L19
            boolean r0 = r2.isRecycled
            if (r0 != 0) goto L11
            r0 = 1
            r2.isRecycled = r0
            com.bumptech.glide.load.engine.Resource<Z> r0 = r2.resource
            r0.recycle()
            return
        L11:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Cannot recycle a resource that has already been recycled"
            r0.<init>(r1)
            throw r0
        L19:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Cannot recycle a resource while it is still acquired"
            r0.<init>(r1)
            throw r0
    }

    void release() {
            r2 = this;
            int r0 = r2.acquired
            if (r0 <= 0) goto L2a
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L22
            int r0 = r2.acquired
            int r0 = r0 + (-1)
            r2.acquired = r0
            if (r0 != 0) goto L21
            com.bumptech.glide.load.engine.EngineResource$ResourceListener r0 = r2.listener
            com.bumptech.glide.load.Key r1 = r2.key
            r0.onResourceReleased(r1, r2)
        L21:
            return
        L22:
            java.lang.IllegalThreadStateException r0 = new java.lang.IllegalThreadStateException
            java.lang.String r1 = "Must call release on the main thread"
            r0.<init>(r1)
            throw r0
        L2a:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Cannot release a recycled or not yet acquired resource"
            r0.<init>(r1)
            throw r0
    }

    void setResourceListener(com.bumptech.glide.load.Key r1, com.bumptech.glide.load.engine.EngineResource.ResourceListener r2) {
            r0 = this;
            r0.key = r1
            r0.listener = r2
            return
    }
}
