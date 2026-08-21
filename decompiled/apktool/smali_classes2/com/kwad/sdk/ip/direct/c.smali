.class public final Lcom/kwad/sdk/ip/direct/c;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Comparable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/lang/Comparable<",
        "Lcom/kwad/sdk/ip/direct/c;",
        ">;"
    }
.end annotation


# instance fields
.field private aCI:F

.field private aCM:I

.field private aCN:I

.field private aCO:Ljava/lang/StringBuffer;

.field private ip:Ljava/lang/String;

.field private success:Z

.field private weight:I


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/high16 v0, -0x40800000    # -1.0f

    iput v0, p0, Lcom/kwad/sdk/ip/direct/c;->aCI:F

    iput-object p1, p0, Lcom/kwad/sdk/ip/direct/c;->ip:Ljava/lang/String;

    const/16 p1, 0x14

    iput p1, p0, Lcom/kwad/sdk/ip/direct/c;->aCN:I

    const/4 p1, 0x3

    iput p1, p0, Lcom/kwad/sdk/ip/direct/c;->aCM:I

    new-instance p1, Ljava/lang/StringBuffer;

    invoke-direct {p1}, Ljava/lang/StringBuffer;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/ip/direct/c;->aCO:Ljava/lang/StringBuffer;

    return-void
.end method

.method private a(Lcom/kwad/sdk/ip/direct/c;)I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/ip/direct/c;->aCI:F

    iget p1, p1, Lcom/kwad/sdk/ip/direct/c;->aCI:F

    sub-float/2addr v0, p1

    float-to-int p1, v0

    return p1
.end method


# virtual methods
.method public final Ga()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/ip/direct/c;->aCM:I

    return v0
.end method

.method public final Gb()F
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/ip/direct/c;->aCI:F

    return v0
.end method

.method public final bs(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/ip/direct/c;->success:Z

    return-void
.end method

.method public final cF(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/ip/direct/c;->weight:I

    return-void
.end method

.method public final synthetic compareTo(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/kwad/sdk/ip/direct/c;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/ip/direct/c;->a(Lcom/kwad/sdk/ip/direct/c;)I

    move-result p1

    return p1
.end method

.method public final getIp()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/ip/direct/c;->ip:Ljava/lang/String;

    return-object v0
.end method

.method public final getWeight()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/ip/direct/c;->weight:I

    return v0
.end method

.method public final i(F)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/ip/direct/c;->aCI:F

    return-void
.end method

.method public final isSuccess()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/ip/direct/c;->success:Z

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "PingNetEntity{ip=\'"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/ip/direct/c;->ip:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x27

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v1, ", pingCount="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/sdk/ip/direct/c;->aCM:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", pingWaitTime="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/sdk/ip/direct/c;->aCN:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", pingTime=\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/sdk/ip/direct/c;->aCI:F

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v1, " ms\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", success="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/kwad/sdk/ip/direct/c;->success:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
