.class public final Lcom/kwad/components/core/offline/init/a/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/IOfflineHostApi;


# instance fields
.field private LA:Lcom/kwad/components/offline/api/core/api/IAsync;

.field private LB:Lcom/kwad/components/offline/api/core/api/IEnvironment;

.field private LC:Lcom/kwad/components/offline/api/core/api/IZipper;

.field private LD:Lcom/kwad/components/offline/api/core/api/INet;

.field private LE:Lcom/kwad/components/offline/api/core/api/IEncrypt;

.field private LF:Lcom/kwad/components/offline/api/core/api/IOfflineCompoLogcat;

.field private LG:Lcom/kwad/components/offline/api/core/api/ICrash;

.field private LH:Lcom/kwad/components/offline/api/core/api/ILoggerReporter;

.field private LI:Lcom/kwad/components/offline/api/core/api/IDownloader;

.field private LJ:Lcom/kwad/components/offline/api/core/api/IImageLoader;

.field private LK:Lcom/kwad/components/offline/api/core/video/IVideo;

.field private LL:Lcom/kwad/components/offline/api/core/adlive/ILive;

.field private LM:Lcom/kwad/components/offline/api/core/api/ICache;

.field private LN:Lcom/kwad/components/offline/api/core/webview/IWebView;

.field private LO:Lcom/kwad/components/offline/api/core/api/IVibratorUtil;

.field private LP:Lcom/kwad/components/offline/api/core/network/IIdc;

.field private LQ:Lcom/kwad/components/offline/api/core/imageplayer/IImagePlayer;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final async()Lcom/kwad/components/offline/api/core/api/IAsync;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LA:Lcom/kwad/components/offline/api/core/api/IAsync;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/a;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/a/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LA:Lcom/kwad/components/offline/api/core/api/IAsync;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LA:Lcom/kwad/components/offline/api/core/api/IAsync;

    return-object v0
.end method

.method public final cache()Lcom/kwad/components/offline/api/core/api/ICache;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LM:Lcom/kwad/components/offline/api/core/api/ICache;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/b;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/a/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LM:Lcom/kwad/components/offline/api/core/api/ICache;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LM:Lcom/kwad/components/offline/api/core/api/ICache;

    return-object v0
.end method

.method public final crash()Lcom/kwad/components/offline/api/core/api/ICrash;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LG:Lcom/kwad/components/offline/api/core/api/ICrash;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/g$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/offline/init/a/g$1;-><init>(Lcom/kwad/components/core/offline/init/a/g;)V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LG:Lcom/kwad/components/offline/api/core/api/ICrash;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LG:Lcom/kwad/components/offline/api/core/api/ICrash;

    return-object v0
.end method

.method public final downloader()Lcom/kwad/components/offline/api/core/api/IDownloader;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LI:Lcom/kwad/components/offline/api/core/api/IDownloader;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/g$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/offline/init/a/g$3;-><init>(Lcom/kwad/components/core/offline/init/a/g;)V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LI:Lcom/kwad/components/offline/api/core/api/IDownloader;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LI:Lcom/kwad/components/offline/api/core/api/IDownloader;

    return-object v0
.end method

.method public final encrypt()Lcom/kwad/components/offline/api/core/api/IEncrypt;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LE:Lcom/kwad/components/offline/api/core/api/IEncrypt;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/c;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/a/c;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LE:Lcom/kwad/components/offline/api/core/api/IEncrypt;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LE:Lcom/kwad/components/offline/api/core/api/IEncrypt;

    return-object v0
.end method

.method public final env()Lcom/kwad/components/offline/api/core/api/IEnvironment;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LB:Lcom/kwad/components/offline/api/core/api/IEnvironment;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/d;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/a/d;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LB:Lcom/kwad/components/offline/api/core/api/IEnvironment;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LB:Lcom/kwad/components/offline/api/core/api/IEnvironment;

    return-object v0
.end method

.method public final idc()Lcom/kwad/components/offline/api/core/network/IIdc;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LP:Lcom/kwad/components/offline/api/core/network/IIdc;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/j;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/a/j;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LP:Lcom/kwad/components/offline/api/core/network/IIdc;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LP:Lcom/kwad/components/offline/api/core/network/IIdc;

    return-object v0
.end method

.method public final imageLoader()Lcom/kwad/components/offline/api/core/api/IImageLoader;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LJ:Lcom/kwad/components/offline/api/core/api/IImageLoader;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/e;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/a/e;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LJ:Lcom/kwad/components/offline/api/core/api/IImageLoader;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LJ:Lcom/kwad/components/offline/api/core/api/IImageLoader;

    return-object v0
.end method

.method public final imagePlayer()Lcom/kwad/components/offline/api/core/imageplayer/IImagePlayer;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/g/d;

    invoke-direct {v0}, Lcom/kwad/components/core/g/d;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LQ:Lcom/kwad/components/offline/api/core/imageplayer/IImagePlayer;

    return-object v0
.end method

.method public final live()Lcom/kwad/components/offline/api/core/adlive/ILive;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LL:Lcom/kwad/components/offline/api/core/adlive/ILive;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/b/a;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/b/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LL:Lcom/kwad/components/offline/api/core/adlive/ILive;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LL:Lcom/kwad/components/offline/api/core/adlive/ILive;

    return-object v0
.end method

.method public final log()Lcom/kwad/components/offline/api/core/api/IOfflineCompoLogcat;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LF:Lcom/kwad/components/offline/api/core/api/IOfflineCompoLogcat;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/h;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/a/h;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LF:Lcom/kwad/components/offline/api/core/api/IOfflineCompoLogcat;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LF:Lcom/kwad/components/offline/api/core/api/IOfflineCompoLogcat;

    return-object v0
.end method

.method public final loggerReporter()Lcom/kwad/components/offline/api/core/api/ILoggerReporter;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LH:Lcom/kwad/components/offline/api/core/api/ILoggerReporter;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/g$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/offline/init/a/g$2;-><init>(Lcom/kwad/components/core/offline/init/a/g;)V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LH:Lcom/kwad/components/offline/api/core/api/ILoggerReporter;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LH:Lcom/kwad/components/offline/api/core/api/ILoggerReporter;

    return-object v0
.end method

.method public final net()Lcom/kwad/components/offline/api/core/api/INet;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LD:Lcom/kwad/components/offline/api/core/api/INet;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/f;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/a/f;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LD:Lcom/kwad/components/offline/api/core/api/INet;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LD:Lcom/kwad/components/offline/api/core/api/INet;

    return-object v0
.end method

.method public final vibratorUtil()Lcom/kwad/components/offline/api/core/api/IVibratorUtil;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LO:Lcom/kwad/components/offline/api/core/api/IVibratorUtil;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/k;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/a/k;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LO:Lcom/kwad/components/offline/api/core/api/IVibratorUtil;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LO:Lcom/kwad/components/offline/api/core/api/IVibratorUtil;

    return-object v0
.end method

.method public final video()Lcom/kwad/components/offline/api/core/video/IVideo;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LK:Lcom/kwad/components/offline/api/core/video/IVideo;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/c/e;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/c/e;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LK:Lcom/kwad/components/offline/api/core/video/IVideo;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LK:Lcom/kwad/components/offline/api/core/video/IVideo;

    return-object v0
.end method

.method public final webview()Lcom/kwad/components/offline/api/core/webview/IWebView;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LN:Lcom/kwad/components/offline/api/core/webview/IWebView;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/d/b;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/d/b;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LN:Lcom/kwad/components/offline/api/core/webview/IWebView;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LN:Lcom/kwad/components/offline/api/core/webview/IWebView;

    return-object v0
.end method

.method public final zipper()Lcom/kwad/components/offline/api/core/api/IZipper;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LC:Lcom/kwad/components/offline/api/core/api/IZipper;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/a/l;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/a/l;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LC:Lcom/kwad/components/offline/api/core/api/IZipper;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/a/g;->LC:Lcom/kwad/components/offline/api/core/api/IZipper;

    return-object v0
.end method
