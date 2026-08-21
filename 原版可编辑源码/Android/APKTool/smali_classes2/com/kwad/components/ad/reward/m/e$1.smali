.class final Lcom/kwad/components/ad/reward/m/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/j;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/m/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic yK:Lcom/kwad/components/ad/reward/m/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/m/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/e$1;->yK:Lcom/kwad/components/ad/reward/m/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onRewardVerify()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e$1;->yK:Lcom/kwad/components/ad/reward/m/e;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/e;->a(Lcom/kwad/components/ad/reward/m/e;)Lcom/kwad/components/core/webview/jshandler/ar;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/e$1;->yK:Lcom/kwad/components/ad/reward/m/e;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/e;->a(Lcom/kwad/components/ad/reward/m/e;)Lcom/kwad/components/core/webview/jshandler/ar;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/jshandler/ar;->ai(Z)V

    :cond_0
    return-void
.end method
