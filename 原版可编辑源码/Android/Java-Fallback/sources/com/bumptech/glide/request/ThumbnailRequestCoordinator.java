package com.bumptech.glide.request;

public class ThumbnailRequestCoordinator implements com.bumptech.glide.request.RequestCoordinator, com.bumptech.glide.request.Request {
    private com.bumptech.glide.request.RequestCoordinator coordinator;
    private com.bumptech.glide.request.Request full;
    private com.bumptech.glide.request.Request thumb;

    public ThumbnailRequestCoordinator() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public ThumbnailRequestCoordinator(com.bumptech.glide.request.RequestCoordinator r1) {
            r0 = this;
            r0.<init>()
            r0.coordinator = r1
            return
    }

    private boolean parentCanNotifyStatusChanged() {
            r1 = this;
            com.bumptech.glide.request.RequestCoordinator r0 = r1.coordinator
            if (r0 == 0) goto Ld
            boolean r0 = r0.canNotifyStatusChanged(r1)
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    private boolean parentCanSetImage() {
            r1 = this;
            com.bumptech.glide.request.RequestCoordinator r0 = r1.coordinator
            if (r0 == 0) goto Ld
            boolean r0 = r0.canSetImage(r1)
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    private boolean parentIsAnyResourceSet() {
            r1 = this;
            com.bumptech.glide.request.RequestCoordinator r0 = r1.coordinator
            if (r0 == 0) goto Lc
            boolean r0 = r0.isAnyResourceSet()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public void begin() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.thumb
            boolean r0 = r0.isRunning()
            if (r0 != 0) goto Ld
            com.bumptech.glide.request.Request r0 = r1.thumb
            r0.begin()
        Ld:
            com.bumptech.glide.request.Request r0 = r1.full
            boolean r0 = r0.isRunning()
            if (r0 != 0) goto L1a
            com.bumptech.glide.request.Request r0 = r1.full
            r0.begin()
        L1a:
            return
    }

    @Override
    public boolean canNotifyStatusChanged(com.bumptech.glide.request.Request r2) {
            r1 = this;
            boolean r0 = r1.parentCanNotifyStatusChanged()
            if (r0 == 0) goto L16
            com.bumptech.glide.request.Request r0 = r1.full
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L16
            boolean r2 = r1.isAnyResourceSet()
            if (r2 != 0) goto L16
            r2 = 1
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    @Override
    public boolean canSetImage(com.bumptech.glide.request.Request r2) {
            r1 = this;
            boolean r0 = r1.parentCanSetImage()
            if (r0 == 0) goto L18
            com.bumptech.glide.request.Request r0 = r1.full
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L16
            com.bumptech.glide.request.Request r2 = r1.full
            boolean r2 = r2.isResourceSet()
            if (r2 != 0) goto L18
        L16:
            r2 = 1
            goto L19
        L18:
            r2 = 0
        L19:
            return r2
    }

    @Override
    public void clear() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.thumb
            r0.clear()
            com.bumptech.glide.request.Request r0 = r1.full
            r0.clear()
            return
    }

    @Override
    public boolean isAnyResourceSet() {
            r1 = this;
            boolean r0 = r1.parentIsAnyResourceSet()
            if (r0 != 0) goto Lf
            boolean r0 = r1.isResourceSet()
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    @Override
    public boolean isCancelled() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.full
            boolean r0 = r0.isCancelled()
            return r0
    }

    @Override
    public boolean isComplete() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.full
            boolean r0 = r0.isComplete()
            if (r0 != 0) goto L13
            com.bumptech.glide.request.Request r0 = r1.thumb
            boolean r0 = r0.isComplete()
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

    @Override
    public boolean isFailed() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.full
            boolean r0 = r0.isFailed()
            return r0
    }

    @Override
    public boolean isPaused() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.full
            boolean r0 = r0.isPaused()
            return r0
    }

    @Override
    public boolean isResourceSet() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.full
            boolean r0 = r0.isResourceSet()
            if (r0 != 0) goto L13
            com.bumptech.glide.request.Request r0 = r1.thumb
            boolean r0 = r0.isResourceSet()
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

    @Override
    public boolean isRunning() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.full
            boolean r0 = r0.isRunning()
            return r0
    }

    @Override
    public void onRequestSuccess(com.bumptech.glide.request.Request r2) {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.thumb
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L9
            return
        L9:
            com.bumptech.glide.request.RequestCoordinator r2 = r1.coordinator
            if (r2 == 0) goto L10
            r2.onRequestSuccess(r1)
        L10:
            com.bumptech.glide.request.Request r2 = r1.thumb
            boolean r2 = r2.isComplete()
            if (r2 != 0) goto L1d
            com.bumptech.glide.request.Request r2 = r1.thumb
            r2.clear()
        L1d:
            return
    }

    @Override
    public void pause() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.full
            r0.pause()
            com.bumptech.glide.request.Request r0 = r1.thumb
            r0.pause()
            return
    }

    @Override
    public void recycle() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.full
            r0.recycle()
            com.bumptech.glide.request.Request r0 = r1.thumb
            r0.recycle()
            return
    }

    public void setRequests(com.bumptech.glide.request.Request r1, com.bumptech.glide.request.Request r2) {
            r0 = this;
            r0.full = r1
            r0.thumb = r2
            return
    }
}
