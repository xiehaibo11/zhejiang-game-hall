.class public final Lcom/kwad/components/ad/f/c/a;
.super Lcom/kwad/components/ad/j/b;


# instance fields
.field private bG:Lcom/kwad/components/core/widget/a/b;

.field private final cV:Lcom/kwad/sdk/core/h/c;

.field private dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

.field private eA:Z

.field private eI:Lcom/kwad/components/core/j/a$b;

.field private eK:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

.field private hasNoCache:Z

.field private final mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mContext:Landroid/content/Context;

.field private nw:Z

.field private nx:Z

.field private ny:Lcom/kwad/components/core/video/l;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/widget/a/b;Lcom/kwad/components/core/video/DetailVideoView;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V
    .locals 1

    invoke-direct {p0, p1, p3}, Lcom/kwad/components/ad/j/b;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/video/DetailVideoView;)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/f/c/a;->hasNoCache:Z

    new-instance v0, Lcom/kwad/components/ad/f/c/a$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/c/a$3;-><init>(Lcom/kwad/components/ad/f/c/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/c/a;->cV:Lcom/kwad/sdk/core/h/c;

    new-instance v0, Lcom/kwad/components/ad/f/c/a$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/c/a$5;-><init>(Lcom/kwad/components/ad/f/c/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/c/a;->eK:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    iput-object p2, p0, Lcom/kwad/components/ad/f/c/a;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object p2, p0, Lcom/kwad/components/ad/f/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/f/c/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    instance-of p2, p4, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    if-eqz p2, :cond_0

    move-object p2, p4

    check-cast p2, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    invoke-virtual {p2}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoSoundValue()I

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p4}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->isVideoSoundEnable()Z

    move-result p2

    goto :goto_0

    :cond_0
    iget-object p2, p0, Lcom/kwad/components/ad/f/c/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->bH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p2

    :goto_0
    iput-boolean p2, p0, Lcom/kwad/components/ad/f/c/a;->nw:Z

    iput-object p4, p0, Lcom/kwad/components/ad/f/c/a;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-virtual {p3}, Lcom/kwad/components/core/video/DetailVideoView;->getContext()Landroid/content/Context;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    if-eqz p4, :cond_1

    :try_start_0
    invoke-interface {p4}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->isNoCache()Z

    move-result p2

    iput-boolean p2, p0, Lcom/kwad/components/ad/f/c/a;->hasNoCache:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    invoke-static {p2}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_1
    :goto_1
    new-instance p2, Lcom/kwad/components/ad/f/c/a$1;

    invoke-direct {p2, p0, p1}, Lcom/kwad/components/ad/f/c/a$1;-><init>(Lcom/kwad/components/ad/f/c/a;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object p2, p0, Lcom/kwad/components/ad/f/c/a;->ny:Lcom/kwad/components/core/video/l;

    iget-object p1, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    iget-object p2, p0, Lcom/kwad/components/ad/f/c/a;->ny:Lcom/kwad/components/core/video/l;

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/video/b;->c(Lcom/kwad/components/core/video/k;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/f/c/a;->aJ()V

    iget-object p1, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    new-instance p2, Lcom/kwad/components/ad/f/c/a$2;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/f/c/a$2;-><init>(Lcom/kwad/components/ad/f/c/a;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/core/video/a/c$e;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/c/a;)Z
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/c/a;->eU()Z

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/c/a;Z)Z
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/f/c/a;->g(Z)Z

    move-result p0

    return p0
.end method

.method private aJ()V
    .locals 4

    new-instance v0, Lcom/kwad/sdk/contentalliance/a/a/b$a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->ci(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->cn(Ljava/lang/String;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->ch(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/PhotoInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/f;->b(Lcom/kwad/sdk/core/response/model/PhotoInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->co(Ljava/lang/String;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->a(Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-boolean v1, p0, Lcom/kwad/components/ad/f/c/a;->hasNoCache:Z

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->bd(Z)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/contentalliance/a/a/a;->ap(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/contentalliance/a/a/a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->b(Lcom/kwad/sdk/contentalliance/a/a/a;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->yS()Lcom/kwad/sdk/contentalliance/a/a/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    iget-object v2, p0, Lcom/kwad/components/ad/f/c/a;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    const/4 v3, 0x1

    invoke-virtual {v1, v0, v3, v3, v2}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/b;ZZLcom/kwad/components/core/video/DetailVideoView;)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/f/c/a;->nw:Z

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/f/c/a;->g(Z)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/f/c/a;->setAudioEnabled(Z)V

    invoke-direct {p0}, Lcom/kwad/components/ad/f/c/a;->eU()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->prepareAsync()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->eK:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/t/a;->a(Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/f/c/a;)Lcom/kwad/components/core/widget/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/c/a;->bG:Lcom/kwad/components/core/widget/a/b;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/f/c/a;Z)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/f/c/a;->setAudioEnabled(Z)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/f/c/a;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/f/c/a;Z)Z
    .locals 0

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/ad/f/c/a;->eA:Z

    return p1
.end method

.method static synthetic d(Lcom/kwad/components/ad/f/c/a;)Lcom/kwad/components/core/video/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/f/c/a;)Lcom/kwad/components/core/j/a$b;
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/c/a;->getCurrentVoiceItem()Lcom/kwad/components/core/j/a$b;

    move-result-object p0

    return-object p0
.end method

.method private eU()Z
    .locals 5

    iget-boolean v0, p0, Lcom/kwad/components/ad/f/c/a;->nx:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    instance-of v2, v0, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    const/4 v3, 0x0

    if-eqz v2, :cond_6

    check-cast v0, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    invoke-virtual {v0}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoAutoPlayType()I

    move-result v2

    if-ne v2, v1, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isNetworkConnected(Landroid/content/Context;)Z

    move-result v0

    return v0

    :cond_1
    invoke-virtual {v0}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoAutoPlayType()I

    move-result v2

    const/4 v4, 0x2

    if-ne v2, v4, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isWifiConnected(Landroid/content/Context;)Z

    move-result v0

    return v0

    :cond_2
    invoke-virtual {v0}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoAutoPlayType()I

    move-result v2

    const/4 v4, 0x3

    if-ne v2, v4, :cond_3

    return v3

    :cond_3
    invoke-virtual {v0}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getDataFlowAutoStartValue()I

    move-result v2

    if-eqz v2, :cond_6

    iget-object v2, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    invoke-static {v2}, Lcom/kwad/sdk/utils/ag;->isWifiConnected(Landroid/content/Context;)Z

    move-result v2

    if-nez v2, :cond_5

    invoke-virtual {v0}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->isDataFlowAutoStart()Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isMobileConnected(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_4

    goto :goto_0

    :cond_4
    return v3

    :cond_5
    :goto_0
    return v1

    :cond_6
    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bI(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isNetworkConnected(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_7

    return v1

    :cond_7
    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bJ(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isWifiConnected(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_8

    return v1

    :cond_8
    return v3
.end method

.method static synthetic f(Lcom/kwad/components/ad/f/c/a;)Lcom/kwad/components/core/video/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/f/c/a;)Lcom/kwad/components/core/j/a$b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/c/a;->eI:Lcom/kwad/components/core/j/a$b;

    return-object p0
.end method

.method private g(Z)Z
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/f/c/a;->eI:Lcom/kwad/components/core/j/a$b;

    if-eqz p1, :cond_1

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    iget-object p1, p0, Lcom/kwad/components/ad/f/c/a;->eI:Lcom/kwad/components/core/j/a$b;

    invoke-static {p1}, Lcom/kwad/components/core/j/a;->b(Lcom/kwad/components/core/j/a$b;)Z

    move-result p1

    if-nez p1, :cond_1

    return v0

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->gF()Z

    move-result p1

    const/4 v1, 0x1

    if-nez p1, :cond_4

    iget-object p1, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/t/a;->qi()Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    move-result p1

    return p1

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/t/a;->qh()Z

    move-result p1

    if-nez p1, :cond_3

    return v1

    :cond_3
    return v0

    :cond_4
    iget-boolean p1, p0, Lcom/kwad/components/ad/f/c/a;->eA:Z

    if-nez p1, :cond_5

    iget-object p1, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/components/ad/f/c/a;->eA:Z

    :cond_5
    iget-boolean p1, p0, Lcom/kwad/components/ad/f/c/a;->eA:Z

    return p1
.end method

.method private getCurrentVoiceItem()Lcom/kwad/components/core/j/a$b;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->eI:Lcom/kwad/components/core/j/a$b;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/j/a$b;

    new-instance v1, Lcom/kwad/components/ad/f/c/a$4;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/f/c/a$4;-><init>(Lcom/kwad/components/ad/f/c/a;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/j/a$b;-><init>(Lcom/kwad/components/core/j/a$c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/c/a;->eI:Lcom/kwad/components/core/j/a$b;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->eI:Lcom/kwad/components/core/j/a$b;

    return-object v0
.end method

.method static synthetic h(Lcom/kwad/components/ad/f/c/a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/f/c/a;->nw:Z

    return p0
.end method

.method private setAudioEnabled(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->setAudioEnabled(Z)V

    return-void
.end method


# virtual methods
.method public final aH()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/utils/l;->cB(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->qD()Lcom/kwad/sdk/core/video/a/c;

    move-result-object v0

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/c/a;->aJ()V

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/f/c/a;->eU()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->ep()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/contentalliance/a/a/a;->ap(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/contentalliance/a/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/a;)V

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/c/a;->getCurrentVoiceItem()Lcom/kwad/components/core/j/a$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/j/a;->a(Lcom/kwad/components/core/j/a$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->start()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->cV:Lcom/kwad/sdk/core/h/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/a/b;->a(Lcom/kwad/sdk/core/h/c;)V

    return-void
.end method

.method public final aI()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/utils/l;->cz(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->cV:Lcom/kwad/sdk/core/h/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/a/b;->b(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->release()V

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->eI:Lcom/kwad/components/core/j/a$b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/j/a;->c(Lcom/kwad/components/core/j/a$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->eK:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/t/a;->b(Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V

    return-void
.end method

.method public final eV()V
    .locals 2

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/f/c/a;->nx:Z

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->ep()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/utils/l;->cA(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/contentalliance/a/a/a;->ap(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/contentalliance/a/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/a;)V

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/c/a;->getCurrentVoiceItem()Lcom/kwad/components/core/j/a$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/j/a;->a(Lcom/kwad/components/core/j/a$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->start()V

    :cond_0
    return-void
.end method

.method public final resume()V
    .locals 2

    invoke-static {}, Lcom/kwad/components/core/j/a;->oa()Lcom/kwad/components/core/j/a;

    move-result-object v0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/c/a;->getCurrentVoiceItem()Lcom/kwad/components/core/j/a$b;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/j/a;->a(Lcom/kwad/components/core/j/a$b;)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/f/c/a;->nw:Z

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/f/c/a;->g(Z)Z

    move-result v0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/f/c/a;->setAudioEnabled(Z)V

    invoke-direct {p0}, Lcom/kwad/components/ad/f/c/a;->eU()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-super {p0}, Lcom/kwad/components/ad/j/b;->resume()V

    return-void
.end method
