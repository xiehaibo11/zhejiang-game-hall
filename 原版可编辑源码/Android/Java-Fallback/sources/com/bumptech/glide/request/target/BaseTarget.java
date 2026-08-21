package com.bumptech.glide.request.target;

public abstract class BaseTarget<Z> implements com.bumptech.glide.request.target.Target<Z> {
    private com.bumptech.glide.request.Request request;

    public BaseTarget() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.bumptech.glide.request.Request getRequest() {
            r1 = this;
            com.bumptech.glide.request.Request r0 = r1.request
            return r0
    }

    @Override
    public void onDestroy() {
            r0 = this;
            return
    }

    @Override
    public void onLoadCleared(android.graphics.drawable.Drawable r1) {
            r0 = this;
            return
    }

    @Override
    public void onLoadFailed(java.lang.Exception r1, android.graphics.drawable.Drawable r2) {
            r0 = this;
            return
    }

    @Override
    public void onLoadStarted(android.graphics.drawable.Drawable r1) {
            r0 = this;
            return
    }

    @Override
    public void onStart() {
            r0 = this;
            return
    }

    @Override
    public void onStop() {
            r0 = this;
            return
    }

    @Override
    public void setRequest(com.bumptech.glide.request.Request r1) {
            r0 = this;
            r0.request = r1
            return
    }
}
