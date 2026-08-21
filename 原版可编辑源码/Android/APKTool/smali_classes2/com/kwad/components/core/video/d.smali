.class public final Lcom/kwad/components/core/video/d;
.super Ljava/lang/Object;


# instance fields
.field private SG:Z

.field private SH:Z

.field private SI:Z

.field private SJ:Z

.field private SK:Z

.field private SL:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/video/d;->SG:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/video/d;->SH:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/video/d;->SI:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/video/d;->SJ:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/video/d;->SK:Z

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/core/video/d;->SL:I

    return-void
.end method


# virtual methods
.method public final aL(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/components/core/video/d;->SL:I

    return-void
.end method

.method public final aL(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/video/d;->SI:Z

    return-void
.end method

.method public final qL()Z
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/video/d;->SL:I

    if-lez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final qM()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/video/d;->SL:I

    return v0
.end method

.method public final qN()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/video/d;->SG:Z

    return v0
.end method

.method public final qO()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/video/d;->SH:Z

    return v0
.end method

.method public final qP()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/video/d;->SI:Z

    return v0
.end method

.method public final qQ()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/video/d;->SJ:Z

    return v0
.end method

.method public final qR()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/video/d;->SK:Z

    return v0
.end method

.method public final setAd(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/video/d;->SH:Z

    return-void
.end method

.method public final setFillXY(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/video/d;->SK:Z

    return-void
.end method

.method public final setForce(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/video/d;->SG:Z

    return-void
.end method

.method public final setHorizontalVideo(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/video/d;->SJ:Z

    return-void
.end method
