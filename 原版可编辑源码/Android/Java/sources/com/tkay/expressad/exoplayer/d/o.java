package com.tkay.expressad.exoplayer.d;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public final class o extends Exception {
    public static final int a = 1;
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
