.class final Lcom/kwad/components/ad/reward/presenter/q$a;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/q;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "a"
.end annotation


# instance fields
.field final synthetic sX:Lcom/kwad/components/ad/reward/presenter/q;

.field private sY:J

.field private videoDuration:J


# direct methods
.method private constructor <init>(Lcom/kwad/components/ad/reward/presenter/q;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/q$a;->sX:Lcom/kwad/components/ad/reward/presenter/q;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/components/ad/reward/presenter/q;B)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/q$a;-><init>(Lcom/kwad/components/ad/reward/presenter/q;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/q$a;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/q$a;->videoDuration:J

    return-wide v0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/q$a;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/q$a;->sY:J

    return-wide v0
.end method


# virtual methods
.method public final onMediaPlayProgress(JJ)V
    .locals 7

    invoke-super {p0, p1, p2, p3, p4}, Lcom/kwad/components/core/video/l;->onMediaPlayProgress(JJ)V

    iput-wide p3, p0, Lcom/kwad/components/ad/reward/presenter/q$a;->sY:J

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/presenter/q$a;->videoDuration:J

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/q$a;->sX:Lcom/kwad/components/ad/reward/presenter/q;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/q;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->fO()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/q$a;->sX:Lcom/kwad/components/ad/reward/presenter/q;

    const/4 v6, 0x0

    move-wide v2, p1

    move-wide v4, p3

    invoke-static/range {v1 .. v6}, Lcom/kwad/components/ad/reward/presenter/q;->a(Lcom/kwad/components/ad/reward/presenter/q;JJZ)V

    :cond_0
    return-void
.end method
