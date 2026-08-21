package com.bumptech.glide.load.resource.transcode;

public interface ResourceTranscoder<Z, R> {
    java.lang.String getId();

    com.bumptech.glide.load.engine.Resource<R> transcode(com.bumptech.glide.load.engine.Resource<Z> r1);
}
