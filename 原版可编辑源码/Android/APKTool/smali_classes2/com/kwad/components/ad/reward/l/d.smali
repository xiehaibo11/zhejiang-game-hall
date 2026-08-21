.class public final Lcom/kwad/components/ad/reward/l/d;
.super Ljava/lang/Object;


# instance fields
.field private yi:I

.field private yj:Lcom/kwad/components/ad/reward/f/a;

.field private yk:Lcom/kwad/components/ad/reward/l/c;

.field private yl:Lcom/kwad/components/ad/reward/l/a;

.field private ym:Lcom/kwad/components/ad/j/a;

.field private yn:I


# direct methods
.method public constructor <init>(ILcom/kwad/components/ad/j/a;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/components/ad/reward/l/d;->yn:I

    iput p1, p0, Lcom/kwad/components/ad/reward/l/d;->yi:I

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    move-object p1, p2

    check-cast p1, Lcom/kwad/components/ad/reward/l/c;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l/d;->yk:Lcom/kwad/components/ad/reward/l/c;

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    if-ne p1, v0, :cond_1

    move-object p1, p2

    check-cast p1, Lcom/kwad/components/ad/reward/f/a;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l/d;->yj:Lcom/kwad/components/ad/reward/f/a;

    goto :goto_0

    :cond_1
    const/4 v0, 0x3

    if-ne p1, v0, :cond_2

    move-object p1, p2

    check-cast p1, Lcom/kwad/components/ad/reward/l/a;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/l/d;->yl:Lcom/kwad/components/ad/reward/l/a;

    :cond_2
    :goto_0
    iput-object p2, p0, Lcom/kwad/components/ad/reward/l/d;->ym:Lcom/kwad/components/ad/j/a;

    return-void
.end method

.method private jQ()Lcom/kwad/components/ad/j/a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->ym:Lcom/kwad/components/ad/j/a;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/l/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->yk:Lcom/kwad/components/ad/reward/l/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/l/c;->a(Lcom/kwad/components/ad/reward/l/b;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/components/core/video/l;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/d;->jQ()Lcom/kwad/components/ad/j/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/j/a;->b(Lcom/kwad/components/core/video/h;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;)V
    .locals 1

    const/4 v0, 0x2

    iput v0, p0, Lcom/kwad/components/ad/reward/l/d;->yi:I

    new-instance v0, Lcom/kwad/components/ad/reward/f/a;

    invoke-direct {v0, p1, p2}, Lcom/kwad/components/ad/reward/f/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/offline/api/core/adlive/IAdLivePlayModule;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->yj:Lcom/kwad/components/ad/reward/f/a;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->ym:Lcom/kwad/components/ad/j/a;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/utils/h$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->yk:Lcom/kwad/components/ad/reward/l/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/l/c;->a(Lcom/kwad/sdk/utils/h$a;)V

    :cond_0
    return-void
.end method

.method public final b(Lcom/kwad/components/ad/reward/l/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->yk:Lcom/kwad/components/ad/reward/l/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/l/c;->b(Lcom/kwad/components/ad/reward/l/b;)V

    :cond_0
    return-void
.end method

.method public final b(Lcom/kwad/components/core/video/l;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/d;->jQ()Lcom/kwad/components/ad/j/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/j/a;->a(Lcom/kwad/components/core/video/h;)V

    return-void
.end method

.method public final b(Lcom/kwad/sdk/utils/h$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->yk:Lcom/kwad/components/ad/reward/l/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/l/c;->b(Lcom/kwad/sdk/utils/h$a;)V

    :cond_0
    return-void
.end method

.method public final getPlayDuration()J
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/d;->jQ()Lcom/kwad/components/ad/j/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/j/a;->getPlayDuration()J

    move-result-wide v0

    return-wide v0
.end method

.method public final jN()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->yk:Lcom/kwad/components/ad/reward/l/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/c;->jN()V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->yl:Lcom/kwad/components/ad/reward/l/a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/a;->jN()V

    :cond_1
    return-void
.end method

.method public final jO()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->yk:Lcom/kwad/components/ad/reward/l/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/c;->jO()V

    :cond_0
    return-void
.end method

.method public final jR()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->yj:Lcom/kwad/components/ad/reward/f/a;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final jS()Lcom/kwad/components/ad/reward/f/a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->yj:Lcom/kwad/components/ad/reward/f/a;

    return-object v0
.end method

.method public final jT()Lcom/kwad/components/ad/reward/l/a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->yl:Lcom/kwad/components/ad/reward/l/a;

    return-object v0
.end method

.method public final pause()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/d;->jQ()Lcom/kwad/components/ad/j/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/j/a;->pause()V

    return-void
.end method

.method public final release()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/d;->jQ()Lcom/kwad/components/ad/j/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/j/a;->release()V

    return-void
.end method

.method public final resume()V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/d;->jQ()Lcom/kwad/components/ad/j/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/j/a;->resume()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/l/d;->yj:Lcom/kwad/components/ad/reward/f/a;

    if-eqz v0, :cond_1

    iget v1, p0, Lcom/kwad/components/ad/reward/l/d;->yn:I

    if-lez v1, :cond_1

    const/4 v2, 0x2

    const/4 v3, 0x0

    if-ne v1, v2, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v3

    :goto_0
    invoke-virtual {v0, v1, v3}, Lcom/kwad/components/ad/reward/f/a;->setAudioEnabled(ZZ)V

    :cond_1
    return-void
.end method

.method public final setAudioEnabled(ZZ)V
    .locals 1

    if-eqz p1, :cond_0

    const/4 v0, 0x2

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    :goto_0
    iput v0, p0, Lcom/kwad/components/ad/reward/l/d;->yn:I

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/d;->jQ()Lcom/kwad/components/ad/j/a;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/ad/j/a;->setAudioEnabled(ZZ)V

    return-void
.end method

.method public final skipToEnd()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/l/d;->jQ()Lcom/kwad/components/ad/j/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/j/a;->skipToEnd()V

    return-void
.end method
