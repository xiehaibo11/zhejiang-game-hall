package com.kwad.sdk.core.videocache;

import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
final class c {
    public final File awh;
    public final com.kwad.sdk.core.videocache.a.c awi;
    public final com.kwad.sdk.core.videocache.a.a awj;
    public final com.kwad.sdk.core.videocache.d.b awk;
    public final com.kwad.sdk.core.videocache.b.b awl;

    c(File file, com.kwad.sdk.core.videocache.a.c cVar, com.kwad.sdk.core.videocache.a.a aVar, com.kwad.sdk.core.videocache.d.b bVar, com.kwad.sdk.core.videocache.b.b bVar2) {
        this.awh = file;
        this.awi = cVar;
        this.awj = aVar;
        this.awk = bVar;
        this.awl = bVar2;
    }

    final File dK(String str) {
        return new File(this.awh, this.awi.generate(str));
    }
}
