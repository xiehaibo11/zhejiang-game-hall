.class final Lcom/kwad/components/ad/reward/presenter/f/d$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/b/a/h$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/d;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wu:Lcom/kwad/components/ad/reward/presenter/f/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/d$3;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/a/h;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d$3;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/d;->E(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pL:Z

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/b/a/h;->aN(Z)V

    return-void
.end method
