.class public Lcom/kwad/sdk/ranger/d;
.super Lcom/kwad/sdk/core/response/a/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/ranger/d$a;
    }
.end annotation


# instance fields
.field public aGF:J

.field public aGG:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public aGH:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/ranger/d$a;",
            ">;"
        }
    .end annotation
.end field

.field public aGI:J

.field public aGJ:D

.field public aGK:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/ranger/a/a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const-wide/16 v0, 0x3e8

    iput-wide v0, p0, Lcom/kwad/sdk/ranger/d;->aGI:J

    const-wide/high16 v0, 0x3ff0000000000000L    # 1.0

    iput-wide v0, p0, Lcom/kwad/sdk/ranger/d;->aGJ:D

    return-void
.end method

.method private da(I)Z
    .locals 6

    invoke-virtual {p0}, Lcom/kwad/sdk/ranger/d;->Hp()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    iget-wide v2, p0, Lcom/kwad/sdk/ranger/d;->aGF:J

    int-to-long v4, p1

    and-long/2addr v2, v4

    const-wide/16 v4, 0x0

    cmp-long p1, v2, v4

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_1
    return v1
.end method


# virtual methods
.method public final Hp()Z
    .locals 4

    iget-wide v0, p0, Lcom/kwad/sdk/ranger/d;->aGF:J

    const-wide/16 v2, 0x1

    and-long/2addr v0, v2

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final Hq()Z
    .locals 1

    const/4 v0, 0x2

    invoke-direct {p0, v0}, Lcom/kwad/sdk/ranger/d;->da(I)Z

    move-result v0

    return v0
.end method

.method public final Hr()Z
    .locals 1

    const/4 v0, 0x4

    invoke-direct {p0, v0}, Lcom/kwad/sdk/ranger/d;->da(I)Z

    move-result v0

    return v0
.end method

.method public final Hs()Z
    .locals 1

    const/16 v0, 0x10

    invoke-direct {p0, v0}, Lcom/kwad/sdk/ranger/d;->da(I)Z

    move-result v0

    return v0
.end method
