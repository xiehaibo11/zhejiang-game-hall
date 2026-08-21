package com.sigmob.sdk.mraid;

/* JADX INFO: loaded from: classes3.dex */
public enum j {
    PORTRAIT(1),
    LANDSCAPE(0),
    NONE(-1);

    private final int d;

    j(int i) {
        this.d = i;
    }

    public int a() {
        return this.d;
    }
}
