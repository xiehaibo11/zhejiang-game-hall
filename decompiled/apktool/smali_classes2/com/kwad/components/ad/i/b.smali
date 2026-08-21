.class public Lcom/kwad/components/ad/i/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/network/i$a;


# static fields
.field private static volatile GK:Lcom/kwad/components/ad/i/b;


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static lP()Lcom/kwad/components/ad/i/b;
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/i/b;->GK:Lcom/kwad/components/ad/i/b;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/components/ad/i/b;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/components/ad/i/b;->GK:Lcom/kwad/components/ad/i/b;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/ad/i/b;

    invoke-direct {v1}, Lcom/kwad/components/ad/i/b;-><init>()V

    sput-object v1, Lcom/kwad/components/ad/i/b;->GK:Lcom/kwad/components/ad/i/b;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/kwad/components/ad/i/b;->GK:Lcom/kwad/components/ad/i/b;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/network/g;I)V
    .locals 3

    instance-of v0, p1, Lcom/kwad/components/core/p/a;

    if-nez v0, :cond_0

    return-void

    :cond_0
    sget-object v0, Lcom/kwad/sdk/core/network/f;->aoU:Lcom/kwad/sdk/core/network/f;

    iget v0, v0, Lcom/kwad/sdk/core/network/f;->errorCode:I

    if-ne p2, v0, :cond_1

    return-void

    :cond_1
    const/16 v0, 0x520c

    invoke-interface {p1}, Lcom/kwad/sdk/core/network/g;->getScene()Lcom/kwad/sdk/internal/api/SceneImpl;

    move-result-object p1

    if-eqz p1, :cond_5

    invoke-virtual {p1}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v1

    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoP:Lcom/kwad/sdk/core/network/f;

    iget p1, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    if-ne p2, p1, :cond_2

    const/16 v0, 0x5209

    goto :goto_0

    :cond_2
    sget-object p1, Lcom/kwad/sdk/core/network/f;->aoT:Lcom/kwad/sdk/core/network/f;

    iget p1, p1, Lcom/kwad/sdk/core/network/f;->errorCode:I

    if-ne p2, p1, :cond_3

    const/16 v0, 0x520b

    goto :goto_0

    :cond_3
    if-lez p2, :cond_4

    const/16 p1, 0x3e8

    if-ge p2, p1, :cond_4

    const/16 v0, 0x520a

    :cond_4
    :goto_0
    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object p1

    invoke-virtual {p1, v1, v2, v0}, Lcom/kwad/components/core/o/a;->a(JI)V

    :cond_5
    return-void
.end method

.method public final init()V
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/network/i;->Bh()Lcom/kwad/sdk/core/network/i;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/network/i;->a(Lcom/kwad/sdk/core/network/i$a;)V

    return-void
.end method
