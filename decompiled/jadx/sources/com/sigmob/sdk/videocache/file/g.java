package com.sigmob.sdk.videocache.file;

import java.io.File;

/* JADX INFO: loaded from: classes3.dex */
public class g extends e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f5220a;

    public g(int i) {
        if (i <= 0) {
            throw new IllegalArgumentException("Max count must be positive number!");
        }
        this.f5220a = i;
    }

    @Override // com.sigmob.sdk.videocache.file.e
    protected boolean a(File file, long j, int i) {
        return i <= this.f5220a;
    }
}
