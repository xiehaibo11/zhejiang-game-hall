package com.sigmob.sdk.videocache;

import java.io.File;

public class e {
    public final File a;
    public final com.sigmob.sdk.videocache.file.c b;
    public final com.sigmob.sdk.videocache.file.a c;
    public final com.sigmob.sdk.videocache.sourcestorage.c d;
    public final com.sigmob.sdk.videocache.headers.b e;

    e(File file, com.sigmob.sdk.videocache.file.c cVar, com.sigmob.sdk.videocache.file.a aVar, com.sigmob.sdk.videocache.sourcestorage.c cVar2, com.sigmob.sdk.videocache.headers.b bVar) {
        this.a = file;
        this.b = cVar;
        this.c = aVar;
        this.d = cVar2;
        this.e = bVar;
    }

    File a(String str) {
        return new File(this.a, this.b.a(str));
    }
}
