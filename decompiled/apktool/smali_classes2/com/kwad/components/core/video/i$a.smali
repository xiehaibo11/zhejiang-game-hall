.class public final Lcom/kwad/components/core/video/i$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/video/i;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private SZ:J

.field private Ta:I


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/components/core/video/i$a;->SZ:J

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/components/core/video/i$a;->Ta:I

    return-void
.end method


# virtual methods
.method public final accumulate(J)V
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/core/video/i$a;->SZ:J

    add-long/2addr v0, p1

    iput-wide v0, p0, Lcom/kwad/components/core/video/i$a;->SZ:J

    iget p1, p0, Lcom/kwad/components/core/video/i$a;->Ta:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/kwad/components/core/video/i$a;->Ta:I

    return-void
.end method

.method public final rg()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/video/i$a;->Ta:I

    return v0
.end method

.method public final rh()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/core/video/i$a;->SZ:J

    return-wide v0
.end method
