.class public final Lcom/kwad/components/ad/draw/c/a;
.super Lcom/kwad/components/ad/j/b;


# instance fields
.field private bG:Lcom/kwad/components/core/widget/a/b;

.field private cS:J

.field private cT:Lcom/kwad/sdk/contentalliance/a/a/a;

.field private cU:Z

.field private final cV:Lcom/kwad/sdk/core/h/c;

.field private mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/widget/a/b;Lcom/kwad/components/core/video/DetailVideoView;)V
    .locals 2

    invoke-direct {p0, p1, p3}, Lcom/kwad/components/ad/j/b;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/video/DetailVideoView;)V

    new-instance p1, Lcom/kwad/components/ad/draw/c/a$2;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/draw/c/a$2;-><init>(Lcom/kwad/components/ad/draw/c/a;)V

    iput-object p1, p0, Lcom/kwad/components/ad/draw/c/a;->cV:Lcom/kwad/sdk/core/h/c;

    iget-object p1, p0, Lcom/kwad/components/ad/draw/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->T(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/draw/c/a;->cS:J

    iput-object p2, p0, Lcom/kwad/components/ad/draw/c/a;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {p3}, Lcom/kwad/components/core/video/DetailVideoView;->getContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/draw/c/a;->mContext:Landroid/content/Context;

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/c/a;->aJ()V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/c/a;->GL:Lcom/kwad/components/core/video/b;

    new-instance p2, Lcom/kwad/components/ad/draw/c/a$1;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/draw/c/a$1;-><init>(Lcom/kwad/components/ad/draw/c/a;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/core/video/a/c$e;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/c/a;Lcom/kwad/sdk/contentalliance/a/a/a;)Lcom/kwad/sdk/contentalliance/a/a/a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/c/a;->cT:Lcom/kwad/sdk/contentalliance/a/a/a;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/c/a;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/c/a;J)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/draw/c/a;->start(J)V

    return-void
.end method

.method private aJ()V
    .locals 5

    new-instance v0, Lcom/kwad/sdk/contentalliance/a/a/b$a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v1, p0, Lcom/kwad/components/ad/draw/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->ci(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->cn(Ljava/lang/String;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/draw/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->ch(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/PhotoInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/f;->b(Lcom/kwad/sdk/core/response/model/PhotoInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->co(Ljava/lang/String;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/draw/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->a(Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    new-instance v1, Lcom/kwad/sdk/contentalliance/a/a/a;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-direct {v1, v2, v3, v4}, Lcom/kwad/sdk/contentalliance/a/a/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->b(Lcom/kwad/sdk/contentalliance/a/a/a;)Lcom/kwad/sdk/contentalliance/a/a/b$a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/contentalliance/a/a/b$a;->yS()Lcom/kwad/sdk/contentalliance/a/a/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/draw/c/a;->GL:Lcom/kwad/components/core/video/b;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/c/a;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v1, v0, v2}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/b;Lcom/kwad/components/core/video/DetailVideoView;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->prepareAsync()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/draw/c/a;)Lcom/kwad/sdk/contentalliance/a/a/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/c/a;->cT:Lcom/kwad/sdk/contentalliance/a/a/a;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/draw/c/a;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/draw/c/a;)Lcom/kwad/components/core/video/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/c/a;->GL:Lcom/kwad/components/core/video/b;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/draw/c/a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/draw/c/a;->cU:Z

    return p0
.end method

.method private start(J)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c/a;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->ep()Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/contentalliance/a/a/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, v1, p1, p2}, Lcom/kwad/sdk/contentalliance/a/a/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {p1}, Lcom/kwad/components/core/video/b;->start()V

    :cond_0
    return-void
.end method


# virtual methods
.method public final aH()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/utils/l;->cC(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v0

    iget-object v2, p0, Lcom/kwad/components/ad/draw/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v2}, Lcom/kwad/components/core/video/b;->qD()Lcom/kwad/sdk/core/video/a/c;

    move-result-object v2

    if-nez v2, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/c/a;->aJ()V

    :cond_0
    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/draw/c/a;->start(J)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c/a;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/c/a;->cV:Lcom/kwad/sdk/core/h/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/a/b;->a(Lcom/kwad/sdk/core/h/c;)V

    return-void
.end method

.method public final aI()V
    .locals 2

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/draw/c/a;->cT:Lcom/kwad/sdk/contentalliance/a/a/a;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c/a;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/c/a;->cV:Lcom/kwad/sdk/core/h/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/a/b;->b(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c/a;->GL:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->release()V

    return-void
.end method

.method public final f(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/draw/c/a;->cU:Z

    return-void
.end method

.method public final resume()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/j/b;->resume()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/c/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    return-void
.end method
