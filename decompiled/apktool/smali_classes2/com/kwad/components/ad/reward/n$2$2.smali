.class final Lcom/kwad/components/ad/reward/n$2$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/n$2;->a(Lcom/kwad/components/core/p/d;ILjava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic qv:Lcom/kwad/components/ad/reward/n$2;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/n$2;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/n$2$2;->qv:Lcom/kwad/components/ad/reward/n$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/n$2$2;->qv:Lcom/kwad/components/ad/reward/n$2;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/n$2;->oB:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->mCheckExposureResult:Z

    return-void
.end method
