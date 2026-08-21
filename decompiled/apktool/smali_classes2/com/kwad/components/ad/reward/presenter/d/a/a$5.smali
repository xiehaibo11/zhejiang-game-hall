.class final Lcom/kwad/components/ad/reward/presenter/d/a/a$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/d/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/d/a/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic vA:Lcom/kwad/components/ad/reward/presenter/d/a/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/d/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a$5;->vA:Lcom/kwad/components/ad/reward/presenter/d/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a$5;->vA:Lcom/kwad/components/ad/reward/presenter/d/a/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/d/a/a;->e(Lcom/kwad/components/ad/reward/presenter/d/a/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/b;->bE()V

    return-void
.end method
