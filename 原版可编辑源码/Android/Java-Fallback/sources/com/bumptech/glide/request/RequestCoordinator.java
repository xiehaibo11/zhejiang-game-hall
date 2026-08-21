package com.bumptech.glide.request;

public interface RequestCoordinator {
    boolean canNotifyStatusChanged(com.bumptech.glide.request.Request r1);

    boolean canSetImage(com.bumptech.glide.request.Request r1);

    boolean isAnyResourceSet();

    void onRequestSuccess(com.bumptech.glide.request.Request r1);
}
