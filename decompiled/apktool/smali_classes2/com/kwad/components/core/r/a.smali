.class public Lcom/kwad/components/core/r/a;
.super Ljava/lang/Object;


# static fields
.field private static volatile QG:Lcom/kwad/components/core/r/a;


# instance fields
.field private No:I

.field private QH:I

.field private QI:Z

.field private QJ:Z

.field private QK:I

.field private QL:Z


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static pS()Lcom/kwad/components/core/r/a;
    .locals 2

    sget-object v0, Lcom/kwad/components/core/r/a;->QG:Lcom/kwad/components/core/r/a;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/components/core/r/a;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/components/core/r/a;->QG:Lcom/kwad/components/core/r/a;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/r/a;

    invoke-direct {v1}, Lcom/kwad/components/core/r/a;-><init>()V

    sput-object v1, Lcom/kwad/components/core/r/a;->QG:Lcom/kwad/components/core/r/a;

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
    sget-object v0, Lcom/kwad/components/core/r/a;->QG:Lcom/kwad/components/core/r/a;

    return-object v0
.end method


# virtual methods
.method public final aE(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/components/core/r/a;->QH:I

    return-void
.end method

.method public final aF(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/components/core/r/a;->QK:I

    return-void
.end method

.method public final aG(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/components/core/r/a;->No:I

    return-void
.end method

.method public final aG(Z)V
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/r/a;->QI:Z

    return-void
.end method

.method public final aH(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/r/a;->QJ:Z

    return-void
.end method

.method public final aI(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/core/r/a;->QL:Z

    return-void
.end method

.method public final clear()V
    .locals 2

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/r/a;->QJ:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/r/a;->QI:Z

    iput v0, p0, Lcom/kwad/components/core/r/a;->QK:I

    iput-boolean v0, p0, Lcom/kwad/components/core/r/a;->QL:Z

    const/4 v1, -0x1

    iput v1, p0, Lcom/kwad/components/core/r/a;->QH:I

    iput v0, p0, Lcom/kwad/components/core/r/a;->No:I

    return-void
.end method

.method public final pT()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/r/a;->QH:I

    return v0
.end method

.method public final pU()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/r/a;->QI:Z

    return v0
.end method

.method public final pV()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/r/a;->QJ:Z

    return v0
.end method

.method public final pW()Z
    .locals 3

    iget v0, p0, Lcom/kwad/components/core/r/a;->QK:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v2, 0x3

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    return v1
.end method

.method public final pX()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/r/a;->QK:I

    return v0
.end method

.method public final pY()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/r/a;->QL:Z

    return v0
.end method

.method public final pZ()I
    .locals 1

    iget v0, p0, Lcom/kwad/components/core/r/a;->No:I

    return v0
.end method
