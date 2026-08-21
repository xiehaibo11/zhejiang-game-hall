.class final Lcom/kwad/components/ad/reward/j$8;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/core/i/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic pR:Lcom/kwad/components/ad/reward/j;

.field final synthetic pT:Lcom/kwad/components/core/i/d;

.field final synthetic pU:Lcom/kwad/components/core/i/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/core/i/d;Lcom/kwad/components/core/i/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/j$8;->pR:Lcom/kwad/components/ad/reward/j;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/j$8;->pT:Lcom/kwad/components/core/i/d;

    iput-object p3, p0, Lcom/kwad/components/ad/reward/j$8;->pU:Lcom/kwad/components/core/i/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j$8;->pT:Lcom/kwad/components/core/i/d;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j$8;->pU:Lcom/kwad/components/core/i/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/i/d;->d(Lcom/kwad/components/core/i/c;)V

    :cond_0
    return-void
.end method
