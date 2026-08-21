.class final Lcom/kwad/components/ad/reward/widget/tailframe/a$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/widget/tailframe/a;->b(Landroid/view/View;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Bw:Lcom/kwad/components/ad/reward/widget/tailframe/a;

.field final synthetic up:Z


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/widget/tailframe/a;Z)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a$2;->Bw:Lcom/kwad/components/ad/reward/widget/tailframe/a;

    iput-boolean p2, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a$2;->up:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a$2;->Bw:Lcom/kwad/components/ad/reward/widget/tailframe/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->c(Lcom/kwad/components/ad/reward/widget/tailframe/a;)Lcom/kwad/components/ad/reward/widget/tailframe/b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a$2;->Bw:Lcom/kwad/components/ad/reward/widget/tailframe/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/widget/tailframe/a;->c(Lcom/kwad/components/ad/reward/widget/tailframe/a;)Lcom/kwad/components/ad/reward/widget/tailframe/b;

    move-result-object v0

    iget-boolean v1, p0, Lcom/kwad/components/ad/reward/widget/tailframe/a$2;->up:Z

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/reward/widget/tailframe/b;->P(Z)V

    :cond_0
    return-void
.end method
