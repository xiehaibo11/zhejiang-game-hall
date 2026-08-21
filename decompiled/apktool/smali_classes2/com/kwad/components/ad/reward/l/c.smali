.class public final Lcom/kwad/components/ad/reward/l/c;
.super Lcom/kwad/components/ad/j/b;

# interfaces
.implements Lcom/kwad/components/ad/reward/j$a;


# instance fields
.field private kU:Z

.field private mContext:Landroid/content/Context;

.field private mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

.field private mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

.field private nw:Z

.field private ny:Lcom/kwad/components/core/video/l;

.field private qx:Lcom/kwad/components/ad/reward/j;

.field private yb:Ljava/lang/String;

.field private yc:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private yd:Z

.field private final ye:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/utils/h$a;",
            ">;"
        }
    .end annotation
.end field

.field private final yf:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/reward/l/b;",
            ">;"
        }
    .end annotation
.end field

.field private yg:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;


# direct methods
.method public constructor <init>(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/core/video/DetailVideoView;)V
    .locals 1

    iget-object v0, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0, v0, p2}, Lcom/kwad/components/ad/j/b;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/video/DetailVideoView;)V

    new-instance p2, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x0

    invoke-direct {p2, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/l/c;->yc:Ljava/util/concurrent/atomic/AtomicBoolean;

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/l/c;->yd:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/l/c;->kU:Z

    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/l/c;->ye:Ljava/util/List;

    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/l/c;->yf:Ljava/util/List;

    new-instance p2, Lcom/kwad/components/ad/reward/l/c$1;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/reward/l/c$1;-><init>(Lcom/kwad/components/ad/reward/l/c;)V

    iput-object p2, p0, Lcom/kwad/components/ad/reward/l/c;->yg:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p2, p1, Lcom/kwad/components/ad/reward/j;->mContext:Landroid/content/Context;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/l/c;->mContext:Landroid/content/Context;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l/c;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/l/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l/c;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/c;->getVideoUrl()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l/c;->yb:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/l/c;)Lcom/kwad/components/core/video/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/l/c;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/l/c;->yd:Z

    return p1
.end method

.method private aJ()V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/c;->jP()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/contentalliance/a/a/b$a;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c;->yb:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->cn(Ljava/lang/String;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->ch(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/PhotoInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/f;->b(Lcom/kwad/sdk/core/response/model/PhotoInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->co(Ljava/lang/String;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->a(Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/contentalliance/a/a/a;->ap(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/contentalliance/a/a/a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->b(Lcom/kwad/sdk/contentalliance/a/a/a;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->yS()Lcom/kwad/sdk/contentalliance/a/a/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/l/c;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v1, v0, v2}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/b;Lcom/kwad/components/core/video/DetailVideoView;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v0

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/reward/l/c;->setAudioEnabled(ZZ)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->prepareAsync()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/l/c;)Lcom/kwad/components/core/video/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/l/c;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/l/c;->ye:Ljava/util/List;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/l/c;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/l/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/l/c;)Lcom/kwad/components/core/video/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    return-object p0
.end method

.method private getVideoUrl()Ljava/lang/String;
    .locals 3

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/c;->jP()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, ""

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zz()I

    move-result v1

    if-lez v1, :cond_2

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/core/videocache/c/a;->bj(Landroid/content/Context;)Lcom/kwad/sdk/core/videocache/f;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/videocache/f;->dN(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_2
    :goto_0
    return-object v0
.end method

.method private jP()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private stop()V
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/l/c;->pause()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/l/c;->kU:Z

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/l/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->yf:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/kwad/sdk/utils/h$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->ye:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/reward/l/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->yf:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/sdk/utils/h$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->ye:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final getPlayDuration()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->yc:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-super {p0}, Lcom/kwad/components/ad/j/b;->getPlayDuration()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public final gj()V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/l/c;->yd:Z

    return-void
.end method

.method public final gk()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/l/c;->kU:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/l/c;->resume()V

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/l/c;->nw:Z

    if-nez v0, :cond_1

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gF()Z

    move-result v0

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/l/c;->yd:Z

    if-eqz v0, :cond_3

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gF()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gF()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/l/c;->yd:Z

    if-eqz v0, :cond_2

    iput-boolean v1, p0, Lcom/kwad/components/ad/reward/l/c;->yd:Z

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/l/c;->nw:Z

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/reward/l/c;->setAudioEnabled(ZZ)V

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->oU:Z

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/t/a;->qh()Z

    move-result v0

    if-eqz v0, :cond_3

    iput-boolean v1, p0, Lcom/kwad/components/ad/reward/l/c;->nw:Z

    invoke-virtual {p0, v1, v1}, Lcom/kwad/components/ad/reward/l/c;->setAudioEnabled(ZZ)V

    :cond_3
    return-void
.end method

.method public final gl()V
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/l/c;->pause()V

    return-void
.end method

.method public final gm()V
    .locals 2

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/l/c;->yd:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->yc:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c;->ny:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/b;->d(Lcom/kwad/components/core/video/k;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->release()V

    :cond_0
    return-void
.end method

.method public final jN()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->yc:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->yc:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/c;->aJ()V

    new-instance v0, Lcom/kwad/components/ad/reward/l/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/l/c$2;-><init>(Lcom/kwad/components/ad/reward/l/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->ny:Lcom/kwad/components/core/video/l;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c;->ny:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/b;->c(Lcom/kwad/components/core/video/k;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    new-instance v1, Lcom/kwad/components/ad/reward/l/c$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/l/c$3;-><init>(Lcom/kwad/components/ad/reward/l/c;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/core/video/a/c$e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c;->yg:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/t/a;->a(Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V

    return-void
.end method

.method public final jO()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->yf:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/reward/l/b;

    invoke-interface {v1}, Lcom/kwad/components/ad/reward/l/b;->jh()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final pause()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->yc:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    if-eqz v0, :cond_2

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/c;->jP()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->e(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    :cond_1
    invoke-super {p0}, Lcom/kwad/components/ad/j/b;->pause()V

    :cond_2
    :goto_0
    return-void
.end method

.method public final release()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/j/b;->release()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/l/c;->yg:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/t/a;->b(Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V

    return-void
.end method

.method public final resume()V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/l/c;->kU:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->yc:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    if-eqz v0, :cond_2

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/c;->jP()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->e(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    :cond_1
    invoke-super {p0}, Lcom/kwad/components/ad/j/b;->resume()V

    :cond_2
    :goto_0
    return-void
.end method

.method public final setAudioEnabled(ZZ)V
    .locals 1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/l/c;->nw:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->yc:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_1

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/l/c;->mContext:Landroid/content/Context;

    invoke-static {p2}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p2

    const/4 v0, 0x1

    invoke-virtual {p2, v0}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    :cond_1
    iget-object p2, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/video/b;->setAudioEnabled(Z)V

    :cond_2
    :goto_0
    return-void
.end method

.method public final skipToEnd()V
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->yc:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/c;->GL:Lcom/kwad/components/core/video/b;

    const/16 v1, 0x9

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/b;->onPlayStateChanged(I)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/c;->stop()V

    :cond_1
    :goto_0
    return-void
.end method
