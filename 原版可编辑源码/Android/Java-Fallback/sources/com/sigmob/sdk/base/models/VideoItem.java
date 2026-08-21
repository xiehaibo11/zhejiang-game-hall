package com.sigmob.sdk.base.models;

public class VideoItem {
    public final int height;
    public final java.lang.String url;
    public final int width;

    public VideoItem(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.url = r1
            r0.width = r2
            r0.height = r3
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "\"video\":{\"url\"=\""
            r0.append(r1)
            java.lang.String r1 = r2.url
            r0.append(r1)
            r1 = 34
            r0.append(r1)
            java.lang.String r1 = ", \"width\"="
            r0.append(r1)
            int r1 = r2.width
            r0.append(r1)
            java.lang.String r1 = ", \"height\"="
            r0.append(r1)
            int r1 = r2.height
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
