package com.mbridge.msdk.video.dynview.c;

public enum a {
    a(-1, "ViewOption is null"),
    b(-2, "Context is null"),
    c(-3, "layout xml name is null"),
    d(-4, "Campaign size only one"),
    e(-5, "view create error"),
    f(-6, "rootview is null");

    private int g;
    private String h;

    a(int i2, String str) {
        this.g = i2;
        this.h = str;
    }

    public final int a() {
        return this.g;
    }

    public final String b() {
        return this.h;
    }
}
