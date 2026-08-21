package com.mbridge.msdk.playercommon.exoplayer2.extractor;

public final class DefaultExtractorsFactory implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory {
    private static final java.lang.reflect.Constructor<? extends com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor> FLAC_EXTRACTOR_CONSTRUCTOR = null;
    private int fragmentedMp4Flags;
    private int matroskaFlags;
    private int mp3Flags;
    private int mp4Flags;
    private int tsFlags;
    private int tsMode;

    static {
            java.lang.String r0 = "com.mbridge.msdk.playercommon.exoplayer2.ext.flac.FlacExtractor"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L14 java.lang.ClassNotFoundException -> L1d
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor> r1 = com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor.class
            java.lang.Class r0 = r0.asSubclass(r1)     // Catch: java.lang.Exception -> L14 java.lang.ClassNotFoundException -> L1d
            r1 = 0
            java.lang.Class[] r1 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L14 java.lang.ClassNotFoundException -> L1d
            java.lang.reflect.Constructor r0 = r0.getConstructor(r1)     // Catch: java.lang.Exception -> L14 java.lang.ClassNotFoundException -> L1d
            goto L1e
        L14:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Error instantiating FLAC extension"
            r1.<init>(r2, r0)
            throw r1
        L1d:
            r0 = 0
        L1e:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorsFactory.FLAC_EXTRACTOR_CONSTRUCTOR = r0
            return
    }

    public DefaultExtractorsFactory() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.tsMode = r0
            return
    }

    @Override
    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor[] createExtractors() {
            r7 = this;
            monitor-enter(r7)
            java.lang.reflect.Constructor<? extends com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor> r0 = com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorsFactory.FLAC_EXTRACTOR_CONSTRUCTOR     // Catch: java.lang.Throwable -> L99
            r1 = 12
            if (r0 != 0) goto L9
            r0 = r1
            goto Lb
        L9:
            r0 = 13
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor[r0]     // Catch: java.lang.Throwable -> L99
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor r2 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv.MatroskaExtractor     // Catch: java.lang.Throwable -> L99
            int r3 = r7.matroskaFlags     // Catch: java.lang.Throwable -> L99
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L99
            r3 = 0
            r0[r3] = r2     // Catch: java.lang.Throwable -> L99
            r2 = 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.FragmentedMp4Extractor     // Catch: java.lang.Throwable -> L99
            int r5 = r7.fragmentedMp4Flags     // Catch: java.lang.Throwable -> L99
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L99
            r0[r2] = r4     // Catch: java.lang.Throwable -> L99
            r2 = 2
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp4.Mp4Extractor     // Catch: java.lang.Throwable -> L99
            int r5 = r7.mp4Flags     // Catch: java.lang.Throwable -> L99
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L99
            r0[r2] = r4     // Catch: java.lang.Throwable -> L99
            r2 = 3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor     // Catch: java.lang.Throwable -> L99
            int r5 = r7.mp3Flags     // Catch: java.lang.Throwable -> L99
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L99
            r0[r2] = r4     // Catch: java.lang.Throwable -> L99
            r2 = 4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsExtractor r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.AdtsExtractor     // Catch: java.lang.Throwable -> L99
            r4.<init>()     // Catch: java.lang.Throwable -> L99
            r0[r2] = r4     // Catch: java.lang.Throwable -> L99
            r2 = 5
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Extractor r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.Ac3Extractor     // Catch: java.lang.Throwable -> L99
            r4.<init>()     // Catch: java.lang.Throwable -> L99
            r0[r2] = r4     // Catch: java.lang.Throwable -> L99
            r2 = 6
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor     // Catch: java.lang.Throwable -> L99
            int r5 = r7.tsMode     // Catch: java.lang.Throwable -> L99
            int r6 = r7.tsFlags     // Catch: java.lang.Throwable -> L99
            r4.<init>(r5, r6)     // Catch: java.lang.Throwable -> L99
            r0[r2] = r4     // Catch: java.lang.Throwable -> L99
            r2 = 7
            com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.FlvExtractor r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.flv.FlvExtractor     // Catch: java.lang.Throwable -> L99
            r4.<init>()     // Catch: java.lang.Throwable -> L99
            r0[r2] = r4     // Catch: java.lang.Throwable -> L99
            r2 = 8
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggExtractor r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggExtractor     // Catch: java.lang.Throwable -> L99
            r4.<init>()     // Catch: java.lang.Throwable -> L99
            r0[r2] = r4     // Catch: java.lang.Throwable -> L99
            r2 = 9
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor     // Catch: java.lang.Throwable -> L99
            r4.<init>()     // Catch: java.lang.Throwable -> L99
            r0[r2] = r4     // Catch: java.lang.Throwable -> L99
            r2 = 10
            com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavExtractor r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.wav.WavExtractor     // Catch: java.lang.Throwable -> L99
            r4.<init>()     // Catch: java.lang.Throwable -> L99
            r0[r2] = r4     // Catch: java.lang.Throwable -> L99
            r2 = 11
            com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.amr.AmrExtractor     // Catch: java.lang.Throwable -> L99
            r4.<init>()     // Catch: java.lang.Throwable -> L99
            r0[r2] = r4     // Catch: java.lang.Throwable -> L99
            java.lang.reflect.Constructor<? extends com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor> r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorsFactory.FLAC_EXTRACTOR_CONSTRUCTOR     // Catch: java.lang.Throwable -> L99
            if (r2 == 0) goto L97
            java.lang.reflect.Constructor<? extends com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor> r2 = com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorsFactory.FLAC_EXTRACTOR_CONSTRUCTOR     // Catch: java.lang.Exception -> L8e java.lang.Throwable -> L99
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L8e java.lang.Throwable -> L99
            java.lang.Object r2 = r2.newInstance(r3)     // Catch: java.lang.Exception -> L8e java.lang.Throwable -> L99
            com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor r2 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor) r2     // Catch: java.lang.Exception -> L8e java.lang.Throwable -> L99
            r0[r1] = r2     // Catch: java.lang.Exception -> L8e java.lang.Throwable -> L99
            goto L97
        L8e:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L99
            java.lang.String r2 = "Unexpected error creating FLAC extractor"
            r1.<init>(r2, r0)     // Catch: java.lang.Throwable -> L99
            throw r1     // Catch: java.lang.Throwable -> L99
        L97:
            monitor-exit(r7)
            return r0
        L99:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorsFactory setFragmentedMp4ExtractorFlags(int r1) {
            r0 = this;
            monitor-enter(r0)
            r0.fragmentedMp4Flags = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorsFactory setMatroskaExtractorFlags(int r1) {
            r0 = this;
            monitor-enter(r0)
            r0.matroskaFlags = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorsFactory setMp3ExtractorFlags(int r1) {
            r0 = this;
            monitor-enter(r0)
            r0.mp3Flags = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorsFactory setMp4ExtractorFlags(int r1) {
            r0 = this;
            monitor-enter(r0)
            r0.mp4Flags = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorsFactory setTsExtractorFlags(int r1) {
            r0 = this;
            monitor-enter(r0)
            r0.tsFlags = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final synchronized com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorsFactory setTsExtractorMode(int r1) {
            r0 = this;
            monitor-enter(r0)
            r0.tsMode = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return r0
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
