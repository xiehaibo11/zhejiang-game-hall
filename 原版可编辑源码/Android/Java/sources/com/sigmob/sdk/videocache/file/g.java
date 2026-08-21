package com.sigmob.sdk.videocache.file;

import java.io.File;

public class g extends e {
    private final int a;

    public g(int i) {
        if (i <= 0) {
            throw new IllegalArgumentException("Max count must be positive number!");
        }
        this.a = i;
    }

    @Override
    protected boolean a(File file, long j, int i) {
        return i <= this.a;
    }
}
