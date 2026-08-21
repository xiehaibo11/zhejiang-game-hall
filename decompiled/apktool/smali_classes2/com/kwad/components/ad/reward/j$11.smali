.class final Lcom/kwad/components/ad/reward/j$11;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/j;->c(ZZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic pR:Lcom/kwad/components/ad/reward/j;

.field final synthetic pY:Z

.field final synthetic pZ:Z


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j;ZZ)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j$11;->pR:Lcom/kwad/components/ad/reward/j;

    iput-boolean p2, p0, Lcom/kwad/components/ad/reward/j$11;->pY:Z

    iput-boolean p3, p0, Lcom/kwad/components/ad/reward/j$11;->pZ:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j$11;->pR:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jS()Lcom/kwad/components/ad/reward/f/a;

    move-result-object v0

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/j$11;->pY:Z

    iget-boolean v2, p0, Lcom/kwad/components/ad/reward/j$11;->pZ:Z

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/reward/f/a;->setAudioEnabled(ZZ)V

    return-void
.end method
