.class final Lcom/kwad/components/ad/reward/m/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/m/c;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic yC:Lcom/kwad/components/ad/reward/m/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/m/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/c$1;->yC:Lcom/kwad/components/ad/reward/m/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c$1;->yC:Lcom/kwad/components/ad/reward/m/c;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/c;->a(Lcom/kwad/components/ad/reward/m/c;)Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/View;->getHeight()I

    move-result v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " parentHeight: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ApkInfoCardViewHelper"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c$1;->yC:Lcom/kwad/components/ad/reward/m/c;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/c;->b(Lcom/kwad/components/ad/reward/m/c;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/c$1;->yC:Lcom/kwad/components/ad/reward/m/c;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/c;->c(Lcom/kwad/components/ad/reward/m/c;)Lcom/kwad/components/ad/i/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/i/a;->ia()V

    :cond_0
    return-void
.end method
