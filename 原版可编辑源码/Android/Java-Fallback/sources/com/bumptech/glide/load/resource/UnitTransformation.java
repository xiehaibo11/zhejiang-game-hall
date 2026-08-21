package com.bumptech.glide.load.resource;

public class UnitTransformation<T> implements com.bumptech.glide.load.Transformation<T> {
    private static final com.bumptech.glide.load.Transformation<?> TRANSFORMATION = null;

    static {
            com.bumptech.glide.load.resource.UnitTransformation r0 = new com.bumptech.glide.load.resource.UnitTransformation
            r0.<init>()
            com.bumptech.glide.load.resource.UnitTransformation.TRANSFORMATION = r0
            return
    }

    public UnitTransformation() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> com.bumptech.glide.load.resource.UnitTransformation<T> get() {
            com.bumptech.glide.load.Transformation<?> r0 = com.bumptech.glide.load.resource.UnitTransformation.TRANSFORMATION
            com.bumptech.glide.load.resource.UnitTransformation r0 = (com.bumptech.glide.load.resource.UnitTransformation) r0
            return r0
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<T> transform(com.bumptech.glide.load.engine.Resource<T> r1, int r2, int r3) {
            r0 = this;
            return r1
    }
}
