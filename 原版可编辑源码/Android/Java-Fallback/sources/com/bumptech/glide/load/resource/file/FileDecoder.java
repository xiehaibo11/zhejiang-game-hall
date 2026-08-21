package com.bumptech.glide.load.resource.file;

public class FileDecoder implements com.bumptech.glide.load.ResourceDecoder<java.io.File, java.io.File> {
    public FileDecoder() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.bumptech.glide.load.engine.Resource<java.io.File> decode(java.io.File r1, int r2, int r3) {
            r0 = this;
            com.bumptech.glide.load.resource.file.FileResource r2 = new com.bumptech.glide.load.resource.file.FileResource
            r2.<init>(r1)
            return r2
    }

    @Override
    public com.bumptech.glide.load.engine.Resource<java.io.File> decode(java.io.File r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            java.io.File r1 = (java.io.File) r1
            com.bumptech.glide.load.engine.Resource r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }
}
