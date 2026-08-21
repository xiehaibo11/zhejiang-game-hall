package com.sigmob.sdk.videocache;

import java.io.File;

/* JADX INFO: loaded from: classes3.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final File f5214a;
    public final com.sigmob.sdk.videocache.file.c b;
    public final com.sigmob.sdk.videocache.file.a c;
    public final com.sigmob.sdk.videocache.sourcestorage.c d;
    public final com.sigmob.sdk.videocache.headers.b e;

    e(File file, com.sigmob.sdk.videocache.file.c cVar, com.sigmob.sdk.videocache.file.a aVar, com.sigmob.sdk.videocache.sourcestorage.c cVar2, com.sigmob.sdk.videocache.headers.b bVar) {
        this.f5214a = file;
        this.b = cVar;
        this.c = aVar;
        this.d = cVar2;
        this.e = bVar;
    }

    File a(String str) {
        return new File(this.f5214a, this.b.a(str));
    }
}
