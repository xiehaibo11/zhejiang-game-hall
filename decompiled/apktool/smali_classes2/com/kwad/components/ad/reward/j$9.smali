.class final Lcom/kwad/components/ad/reward/j$9;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/j;->G(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/g/a<",
        "Lcom/kwad/components/ad/reward/j/r;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic pR:Lcom/kwad/components/ad/reward/j;

.field final synthetic pV:Z


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j;Z)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j$9;->pR:Lcom/kwad/components/ad/reward/j;

    iput-boolean p2, p0, Lcom/kwad/components/ad/reward/j$9;->pV:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private c(Lcom/kwad/components/ad/reward/j/r;)V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/j$9;->pV:Z

    invoke-interface {p1, v0}, Lcom/kwad/components/ad/reward/j/r;->ac(Z)V

    return-void
.end method


# virtual methods
.method public final synthetic accept(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/j/r;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/j$9;->c(Lcom/kwad/components/ad/reward/j/r;)V

    return-void
.end method
