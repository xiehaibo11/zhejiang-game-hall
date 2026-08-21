package com.kwad.components.core.offline.init.a;

import com.kwad.components.offline.api.core.IOfflineHostApi;
import com.kwad.components.offline.api.core.adlive.ILive;
import com.kwad.components.offline.api.core.api.IAsync;
import com.kwad.components.offline.api.core.api.ICache;
import com.kwad.components.offline.api.core.api.ICrash;
import com.kwad.components.offline.api.core.api.IDownloader;
import com.kwad.components.offline.api.core.api.IEncrypt;
import com.kwad.components.offline.api.core.api.IEnvironment;
import com.kwad.components.offline.api.core.api.IImageLoader;
import com.kwad.components.offline.api.core.api.ILoggerReporter;
import com.kwad.components.offline.api.core.api.INet;
import com.kwad.components.offline.api.core.api.IOfflineCompoLogcat;
import com.kwad.components.offline.api.core.api.IVibratorUtil;
import com.kwad.components.offline.api.core.api.IZipper;
import com.kwad.components.offline.api.core.imageplayer.IImagePlayer;
import com.kwad.components.offline.api.core.network.IIdc;
import com.kwad.components.offline.api.core.video.IVideo;
import com.kwad.components.offline.api.core.webview.IWebView;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import com.kwai.adclient.kscommerciallogger.model.SubBusinessType;
import java.io.File;
import org.json.JSONObject;

public final class g implements IOfflineHostApi {
    private IAsync LA;
    private IEnvironment LB;
    private IZipper LC;
    private INet LD;
    private IEncrypt LE;
    private IOfflineCompoLogcat LF;
    private ICrash LG;
    private ILoggerReporter LH;
    private IDownloader LI;
    private IImageLoader LJ;
    private IVideo LK;
    private ILive LL;
    private ICache LM;
    private IWebView LN;
    private IVibratorUtil LO;
    private IIdc LP;
    private IImagePlayer LQ;

    @Override
    public final IAsync async() {
        if (this.LA == null) {
            this.LA = new a();
        }
        return this.LA;
    }

    @Override
    public final ICache cache() {
        if (this.LM == null) {
            this.LM = new b();
        }
        return this.LM;
    }

    @Override
    public final ICrash crash() {
        if (this.LG == null) {
            this.LG = new ICrash() {
                @Override
                public final void gatherException(Throwable th) {
                    com.kwad.sdk.service.c.gatherException(th);
                }
            };
        }
        return this.LG;
    }

    @Override
    public final IDownloader downloader() {
        if (this.LI == null) {
            this.LI = new IDownloader() {
                @Override
                public final boolean downloadSync(File file, String str) {
                    return com.kwad.sdk.core.download.a.c(str, file);
                }
            };
        }
        return this.LI;
    }

    @Override
    public final IEncrypt encrypt() {
        if (this.LE == null) {
            this.LE = new c();
        }
        return this.LE;
    }

    @Override
    public final IEnvironment env() {
        if (this.LB == null) {
            this.LB = new d();
        }
        return this.LB;
    }

    @Override
    public final IIdc idc() {
        if (this.LP == null) {
            this.LP = new j();
        }
        return this.LP;
    }

    @Override
    public final IImageLoader imageLoader() {
        if (this.LJ == null) {
            this.LJ = new e();
        }
        return this.LJ;
    }

    @Override
    public final IImagePlayer imagePlayer() {
        com.kwad.components.core.g.d dVar = new com.kwad.components.core.g.d();
        this.LQ = dVar;
        return dVar;
    }

    @Override
    public final ILive live() {
        if (this.LL == null) {
            this.LL = new com.kwad.components.core.offline.init.b.a();
        }
        return this.LL;
    }

    @Override
    public final IOfflineCompoLogcat log() {
        if (this.LF == null) {
            this.LF = new h();
        }
        return this.LF;
    }

    @Override
    public final ILoggerReporter loggerReporter() {
        if (this.LH == null) {
            this.LH = new ILoggerReporter() {
                @Override
                public final void reportEvent(String str, BusinessType businessType, String str2, JSONObject jSONObject) {
                    KSLoggerReporter.a(str, businessType, SubBusinessType.OTHER, com.kwai.adclient.kscommerciallogger.model.d.aNG, str2, jSONObject);
                }
            };
        }
        return this.LH;
    }

    @Override
    public final INet net() {
        if (this.LD == null) {
            this.LD = new f();
        }
        return this.LD;
    }

    @Override
    public final IVibratorUtil vibratorUtil() {
        if (this.LO == null) {
            this.LO = new k();
        }
        return this.LO;
    }

    @Override
    public final IVideo video() {
        if (this.LK == null) {
            this.LK = new com.kwad.components.core.offline.init.c.e();
        }
        return this.LK;
    }

    @Override
    public final IWebView webview() {
        if (this.LN == null) {
            this.LN = new com.kwad.components.core.offline.init.d.b();
        }
        return this.LN;
    }

    @Override
    public final IZipper zipper() {
        if (this.LC == null) {
            this.LC = new l();
        }
        return this.LC;
    }
}
