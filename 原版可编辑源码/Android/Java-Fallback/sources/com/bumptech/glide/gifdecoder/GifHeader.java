package com.bumptech.glide.gifdecoder;

public class GifHeader {
    int bgColor;
    int bgIndex;
    com.bumptech.glide.gifdecoder.GifFrame currentFrame;
    int frameCount;
    java.util.List<com.bumptech.glide.gifdecoder.GifFrame> frames;
    int[] gct;
    boolean gctFlag;
    int gctSize;
    int height;
    int loopCount;
    int pixelAspect;
    int status;
    int width;

    public GifHeader() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.gct = r0
            r0 = 0
            r1.status = r0
            r1.frameCount = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.frames = r0
            return
    }

    public int getHeight() {
            r1 = this;
            int r0 = r1.height
            return r0
    }

    public int getNumFrames() {
            r1 = this;
            int r0 = r1.frameCount
            return r0
    }

    public int getStatus() {
            r1 = this;
            int r0 = r1.status
            return r0
    }

    public int getWidth() {
            r1 = this;
            int r0 = r1.width
            return r0
    }
}
