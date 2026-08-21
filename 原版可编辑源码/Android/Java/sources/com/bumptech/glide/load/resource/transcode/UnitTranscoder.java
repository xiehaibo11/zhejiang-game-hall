package com.bumptech.glide.load.resource.transcode;

import com.bumptech.glide.load.engine.Resource;

public class UnitTranscoder<Z> implements ResourceTranscoder<Z, Z> {
    private static final UnitTranscoder<?> UNIT_TRANSCODER = new UnitTranscoder<>();

    @Override
    public String getId() {
        return "";
    }

    @Override
    public Resource<Z> transcode(Resource<Z> resource) {
        return resource;
    }

    public static <Z> ResourceTranscoder<Z, Z> get() {
        return UNIT_TRANSCODER;
    }
}
