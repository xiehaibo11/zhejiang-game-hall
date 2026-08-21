package com.kwad.components.core.offline.init.a;

public final class g implements com.kwad.components.offline.api.core.IOfflineHostApi {
    private com.kwad.components.offline.api.core.api.IAsync LA;
    private com.kwad.components.offline.api.core.api.IEnvironment LB;
    private com.kwad.components.offline.api.core.api.IZipper LC;
    private com.kwad.components.offline.api.core.api.INet LD;
    private com.kwad.components.offline.api.core.api.IEncrypt LE;
    private com.kwad.components.offline.api.core.api.IOfflineCompoLogcat LF;
    private com.kwad.components.offline.api.core.api.ICrash LG;
    private com.kwad.components.offline.api.core.api.ILoggerReporter LH;
    private com.kwad.components.offline.api.core.api.IDownloader LI;
    private com.kwad.components.offline.api.core.api.IImageLoader LJ;
    private com.kwad.components.offline.api.core.video.IVideo LK;
    private com.kwad.components.offline.api.core.adlive.ILive LL;
    private com.kwad.components.offline.api.core.api.ICache LM;
    private com.kwad.components.offline.api.core.webview.IWebView LN;
    private com.kwad.components.offline.api.core.api.IVibratorUtil LO;
    private com.kwad.components.offline.api.core.network.IIdc LP;
    private com.kwad.components.offline.api.core.imageplayer.IImagePlayer LQ;




    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final com.kwad.components.offline.api.core.api.IAsync async() {
            r1 = this;
            com.kwad.components.offline.api.core.api.IAsync r0 = r1.LA
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.a r0 = new com.kwad.components.core.offline.init.a.a
            r0.<init>()
            r1.LA = r0
        Lb:
            com.kwad.components.offline.api.core.api.IAsync r0 = r1.LA
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.ICache cache() {
            r1 = this;
            com.kwad.components.offline.api.core.api.ICache r0 = r1.LM
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.b r0 = new com.kwad.components.core.offline.init.a.b
            r0.<init>()
            r1.LM = r0
        Lb:
            com.kwad.components.offline.api.core.api.ICache r0 = r1.LM
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.ICrash crash() {
            r1 = this;
            com.kwad.components.offline.api.core.api.ICrash r0 = r1.LG
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.g$1 r0 = new com.kwad.components.core.offline.init.a.g$1
            r0.<init>(r1)
            r1.LG = r0
        Lb:
            com.kwad.components.offline.api.core.api.ICrash r0 = r1.LG
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.IDownloader downloader() {
            r1 = this;
            com.kwad.components.offline.api.core.api.IDownloader r0 = r1.LI
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.g$3 r0 = new com.kwad.components.core.offline.init.a.g$3
            r0.<init>(r1)
            r1.LI = r0
        Lb:
            com.kwad.components.offline.api.core.api.IDownloader r0 = r1.LI
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.IEncrypt encrypt() {
            r1 = this;
            com.kwad.components.offline.api.core.api.IEncrypt r0 = r1.LE
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.c r0 = new com.kwad.components.core.offline.init.a.c
            r0.<init>()
            r1.LE = r0
        Lb:
            com.kwad.components.offline.api.core.api.IEncrypt r0 = r1.LE
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.IEnvironment env() {
            r1 = this;
            com.kwad.components.offline.api.core.api.IEnvironment r0 = r1.LB
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.d r0 = new com.kwad.components.core.offline.init.a.d
            r0.<init>()
            r1.LB = r0
        Lb:
            com.kwad.components.offline.api.core.api.IEnvironment r0 = r1.LB
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.network.IIdc idc() {
            r1 = this;
            com.kwad.components.offline.api.core.network.IIdc r0 = r1.LP
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.j r0 = new com.kwad.components.core.offline.init.a.j
            r0.<init>()
            r1.LP = r0
        Lb:
            com.kwad.components.offline.api.core.network.IIdc r0 = r1.LP
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.IImageLoader imageLoader() {
            r1 = this;
            com.kwad.components.offline.api.core.api.IImageLoader r0 = r1.LJ
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.e r0 = new com.kwad.components.core.offline.init.a.e
            r0.<init>()
            r1.LJ = r0
        Lb:
            com.kwad.components.offline.api.core.api.IImageLoader r0 = r1.LJ
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.imageplayer.IImagePlayer imagePlayer() {
            r1 = this;
            com.kwad.components.core.g.d r0 = new com.kwad.components.core.g.d
            r0.<init>()
            r1.LQ = r0
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.adlive.ILive live() {
            r1 = this;
            com.kwad.components.offline.api.core.adlive.ILive r0 = r1.LL
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.b.a r0 = new com.kwad.components.core.offline.init.b.a
            r0.<init>()
            r1.LL = r0
        Lb:
            com.kwad.components.offline.api.core.adlive.ILive r0 = r1.LL
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.IOfflineCompoLogcat log() {
            r1 = this;
            com.kwad.components.offline.api.core.api.IOfflineCompoLogcat r0 = r1.LF
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.h r0 = new com.kwad.components.core.offline.init.a.h
            r0.<init>()
            r1.LF = r0
        Lb:
            com.kwad.components.offline.api.core.api.IOfflineCompoLogcat r0 = r1.LF
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.ILoggerReporter loggerReporter() {
            r1 = this;
            com.kwad.components.offline.api.core.api.ILoggerReporter r0 = r1.LH
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.g$2 r0 = new com.kwad.components.core.offline.init.a.g$2
            r0.<init>(r1)
            r1.LH = r0
        Lb:
            com.kwad.components.offline.api.core.api.ILoggerReporter r0 = r1.LH
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.INet net() {
            r1 = this;
            com.kwad.components.offline.api.core.api.INet r0 = r1.LD
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.f r0 = new com.kwad.components.core.offline.init.a.f
            r0.<init>()
            r1.LD = r0
        Lb:
            com.kwad.components.offline.api.core.api.INet r0 = r1.LD
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.IVibratorUtil vibratorUtil() {
            r1 = this;
            com.kwad.components.offline.api.core.api.IVibratorUtil r0 = r1.LO
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.k r0 = new com.kwad.components.core.offline.init.a.k
            r0.<init>()
            r1.LO = r0
        Lb:
            com.kwad.components.offline.api.core.api.IVibratorUtil r0 = r1.LO
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.video.IVideo video() {
            r1 = this;
            com.kwad.components.offline.api.core.video.IVideo r0 = r1.LK
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.c.e r0 = new com.kwad.components.core.offline.init.c.e
            r0.<init>()
            r1.LK = r0
        Lb:
            com.kwad.components.offline.api.core.video.IVideo r0 = r1.LK
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.webview.IWebView webview() {
            r1 = this;
            com.kwad.components.offline.api.core.webview.IWebView r0 = r1.LN
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.d.b r0 = new com.kwad.components.core.offline.init.d.b
            r0.<init>()
            r1.LN = r0
        Lb:
            com.kwad.components.offline.api.core.webview.IWebView r0 = r1.LN
            return r0
    }

    @Override
    public final com.kwad.components.offline.api.core.api.IZipper zipper() {
            r1 = this;
            com.kwad.components.offline.api.core.api.IZipper r0 = r1.LC
            if (r0 != 0) goto Lb
            com.kwad.components.core.offline.init.a.l r0 = new com.kwad.components.core.offline.init.a.l
            r0.<init>()
            r1.LC = r0
        Lb:
            com.kwad.components.offline.api.core.api.IZipper r0 = r1.LC
            return r0
    }
}
