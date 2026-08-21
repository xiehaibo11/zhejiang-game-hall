package com.bumptech.glide.load.resource;

import com.bumptech.glide.load.Transformation;
import com.bumptech.glide.load.engine.Resource;

public class UnitTransformation<T> implements Transformation<T> {
    private static final Transformation<?> TRANSFORMATION = new UnitTransformation();

    @Override
    public String getId() {
        return "";
    }

    @Override
    public Resource<T> transform(Resource<T> resource, int i, int i2) {
        return resource;
    }

    public static <T> UnitTransformation<T> get() {
        return (UnitTransformation) TRANSFORMATION;
    }
}
