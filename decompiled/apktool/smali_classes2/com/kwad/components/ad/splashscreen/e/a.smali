.class public final Lcom/kwad/components/ad/splashscreen/e/a;
.super Lcom/kwad/components/ad/j/b;

# interfaces
.implements Lcom/kwad/sdk/core/h/c;


# instance fields
.field private EG:Z

.field private mContext:Landroid/content/Context;

.field private mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

.field private mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

.field private nw:Z

.field private yb:Ljava/lang/String;

.field private final ye:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/utils/h$a;",
            ">;"
        }
    .end annotation
.end field

.field private yg:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/video/DetailVideoView;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V
    .locals 1

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/j/b;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/video/DetailVideoView;)V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->ye:Ljava/util/List;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/e/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/e/a$1;-><init>(Lcom/kwad/components/ad/splashscreen/e/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->yg:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    iput-object p3, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    invoke-virtual {p2}, Lcom/kwad/components/core/video/DetailVideoView;->getContext()Landroid/content/Context;

    move-result-object p3

    iput-object p3, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p3

    invoke-static {p3}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p3

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result p3

    if-eqz p3, :cond_0

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->yb:Ljava/lang/String;

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->GL:Lcom/kwad/components/core/video/b;

    new-instance p3, Lcom/kwad/components/ad/splashscreen/e/a$2;

    invoke-direct {p3, p0, p2}, Lcom/kwad/components/ad/splashscreen/e/a$2;-><init>(Lcom/kwad/components/ad/splashscreen/e/a;Lcom/kwad/components/core/video/DetailVideoView;)V

    invoke-virtual {p1, p3}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/core/video/a/c$e;)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/e/a;->yg:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/t/a;->a(Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/e/a;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->ye:Ljava/util/List;

    return-object p0
.end method

.method private aJ()V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/contentalliance/a/a/b$a;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->a(Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->yb:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->cn(Ljava/lang/String;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->ch(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/PhotoInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/f;->b(Lcom/kwad/sdk/core/response/model/PhotoInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->co(Ljava/lang/String;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/contentalliance/a/a/a;->ap(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/contentalliance/a/a/a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->b(Lcom/kwad/sdk/contentalliance/a/a/a;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->yS()Lcom/kwad/sdk/contentalliance/a/a/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->GL:Lcom/kwad/components/core/video/b;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v1, v0, v2}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/b;Lcom/kwad/components/core/video/DetailVideoView;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v0

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/splashscreen/e/a;->setAudioEnabled(ZZ)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->prepareAsync()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/e/a;)Lcom/kwad/components/core/video/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->GL:Lcom/kwad/components/core/video/b;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/utils/h$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->ye:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final aK()V
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/e/a;->resume()V

    return-void
.end method

.method public final aL()V
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/e/a;->pause()V

    return-void
.end method

.method public final ag(Z)V
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->EG:Z

    return-void
.end method

.method public final b(Lcom/kwad/sdk/utils/h$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->ye:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final getCurrentPosition()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->getCurrentPosition()J

    move-result-wide v0

    return-wide v0
.end method

.method public final lB()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->qD()Lcom/kwad/sdk/core/video/a/c;

    move-result-object v0

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/e/a;->aJ()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->start()V

    return-void
.end method

.method public final release()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/j/b;->release()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->yg:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/t/a;->b(Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V

    return-void
.end method

.method public final resume()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/j/b;->resume()V

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->nw:Z

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->EG:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/t/a;->qh()Z

    move-result v0

    if-eqz v0, :cond_0

    iput-boolean v1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->nw:Z

    invoke-virtual {p0, v1, v1}, Lcom/kwad/components/ad/splashscreen/e/a;->setAudioEnabled(ZZ)V

    :cond_0
    return-void
.end method

.method public final setAudioEnabled(ZZ)V
    .locals 1

    iput-boolean p1, p0, Lcom/kwad/components/ad/splashscreen/e/a;->nw:Z

    if-eqz p1, :cond_0

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/e/a;->mContext:Landroid/content/Context;

    invoke-static {p2}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p2

    const/4 v0, 0x1

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    :cond_0
    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/e/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/video/b;->setAudioEnabled(Z)V

    return-void
.end method
