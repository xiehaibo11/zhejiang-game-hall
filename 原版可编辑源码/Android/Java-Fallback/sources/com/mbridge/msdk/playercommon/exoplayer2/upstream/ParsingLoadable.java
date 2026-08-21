package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class ParsingLoadable<T> implements com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable {
    private volatile long bytesLoaded;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource dataSource;
    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.ParsingLoadable.Parser<? extends T> parser;
    private volatile T result;
    public final int type;

    public interface Parser<T> {
        T parse(android.net.Uri r1, java.io.InputStream r2) throws java.io.IOException;
    }

    public ParsingLoadable(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r3, android.net.Uri r4, int r5, com.mbridge.msdk.playercommon.exoplayer2.upstream.ParsingLoadable.Parser<? extends T> r6) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec
            r1 = 3
            r0.<init>(r4, r1)
            r2.<init>(r3, r0, r5, r6)
            return
    }

    public ParsingLoadable(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2, int r3, com.mbridge.msdk.playercommon.exoplayer2.upstream.ParsingLoadable.Parser<? extends T> r4) {
            r0 = this;
            r0.<init>()
            r0.dataSource = r1
            r0.dataSpec = r2
            r0.type = r3
            r0.parser = r4
            return
    }

    public static <T> T load(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.ParsingLoadable.Parser<? extends T> r3, android.net.Uri r4) throws java.io.IOException {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.ParsingLoadable r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.ParsingLoadable
            r1 = 0
            r0.<init>(r2, r4, r1, r3)
            r0.load()
            java.lang.Object r2 = r0.getResult()
            return r2
    }

    public final long bytesLoaded() {
            r2 = this;
            long r0 = r2.bytesLoaded
            return r0
    }

    @Override
    public final void cancelLoad() {
            r0 = this;
            return
    }

    public final T getResult() {
            r1 = this;
            T r0 = r1.result
            return r0
    }

    @Override
    public final void load() throws java.io.IOException {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSourceInputStream r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSourceInputStream
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r4.dataSource
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2 = r4.dataSpec
            r0.<init>(r1, r2)
            r0.open()     // Catch: java.lang.Throwable -> L24
            com.mbridge.msdk.playercommon.exoplayer2.upstream.ParsingLoadable$Parser<? extends T> r1 = r4.parser     // Catch: java.lang.Throwable -> L24
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r2 = r4.dataSource     // Catch: java.lang.Throwable -> L24
            android.net.Uri r2 = r2.getUri()     // Catch: java.lang.Throwable -> L24
            java.lang.Object r1 = r1.parse(r2, r0)     // Catch: java.lang.Throwable -> L24
            r4.result = r1     // Catch: java.lang.Throwable -> L24
            long r1 = r0.bytesRead()
            r4.bytesLoaded = r1
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
            return
        L24:
            r1 = move-exception
            long r2 = r0.bytesRead()
            r4.bytesLoaded = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
            throw r1
    }
}
