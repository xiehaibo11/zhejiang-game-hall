package com.tkay.expressad.exoplayer.d;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

/* JADX INFO: loaded from: classes3.dex */
public final class o extends Exception {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6544a = 1;
    public static final int b = 2;
    public final int c;

    @Retention(RetentionPolicy.SOURCE)
    public @interface a {
    }

    private o(int i) {
        this.c = i;
    }

    public o(Exception exc) {
        super(exc);
        this.c = 2;
    }
}
