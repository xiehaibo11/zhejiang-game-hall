package com.kwad.sdk.core.request.model;

public class f extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
    public int adStyle;
    public long auw;
    public int count;
    public int taskType;

    public f() {
    }

    public f(int i, int i2, int i3, long j) {
        this.adStyle = i;
        this.taskType = i2;
        this.count = 1;
        this.auw = j;
    }

    public final void ag(long j) {
        this.auw = j;
    }
}
