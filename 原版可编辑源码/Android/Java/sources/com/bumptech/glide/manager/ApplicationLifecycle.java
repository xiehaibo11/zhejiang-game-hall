package com.bumptech.glide.manager;

class ApplicationLifecycle implements Lifecycle {
    ApplicationLifecycle() {
    }

    @Override
    public void addListener(LifecycleListener lifecycleListener) {
        lifecycleListener.onStart();
    }
}
