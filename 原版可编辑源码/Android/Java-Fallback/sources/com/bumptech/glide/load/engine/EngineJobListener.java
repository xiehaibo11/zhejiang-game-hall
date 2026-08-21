package com.bumptech.glide.load.engine;

interface EngineJobListener {
    void onEngineJobCancelled(com.bumptech.glide.load.engine.EngineJob r1, com.bumptech.glide.load.Key r2);

    void onEngineJobComplete(com.bumptech.glide.load.Key r1, com.bumptech.glide.load.engine.EngineResource<?> r2);
}
