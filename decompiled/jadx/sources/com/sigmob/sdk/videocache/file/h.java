package com.sigmob.sdk.videocache.file;

import java.io.File;

/* JADX INFO: loaded from: classes3.dex */
public class h extends e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final long f5221a;

    public h(long j) {
        if (j <= 0) {
            throw new IllegalArgumentException("Max size must be positive number!");
        }
        this.f5221a = j;
    }

    @Override // com.sigmob.sdk.videocache.file.e
    protected boolean a(File file, long j, int i) {
        return j <= this.f5221a;
    }
}
