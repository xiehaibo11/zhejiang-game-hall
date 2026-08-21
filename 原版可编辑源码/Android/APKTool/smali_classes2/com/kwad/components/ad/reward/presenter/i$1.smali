.class final Lcom/kwad/components/ad/reward/presenter/i$1;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/i;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic sh:Ljava/lang/Throwable;

.field final synthetic si:Lcom/kwad/components/ad/reward/presenter/i;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/i;Ljava/lang/Throwable;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/i$1;->si:Lcom/kwad/components/ad/reward/presenter/i;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/i$1;->sh:Ljava/lang/Throwable;

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/i$1;->sh:Ljava/lang/Throwable;

    invoke-static {v0}, Lcom/kwad/sdk/crash/b;->l(Ljava/lang/Throwable;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/i$1;->si:Lcom/kwad/components/ad/reward/presenter/i;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/i;->hw()V

    return-void
.end method
