.class final Lcom/kwad/components/ad/splashscreen/c/m$3;
.super Lcom/kwad/components/ad/splashscreen/f/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/m;->lf()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ds:Lcom/kwad/components/ad/splashscreen/c/m;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/m;Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m$3;->Ds:Lcom/kwad/components/ad/splashscreen/c/m;

    invoke-direct {p0, p2, p3}, Lcom/kwad/components/ad/splashscreen/f/a;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method


# virtual methods
.method public final aa(Ljava/lang/String;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m$3;->Ds:Lcom/kwad/components/ad/splashscreen/c/m;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/m;->c(Lcom/kwad/components/ad/splashscreen/c/m;)Landroid/widget/TextView;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m$3;->Ds:Lcom/kwad/components/ad/splashscreen/c/m;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/m;->c(Lcom/kwad/components/ad/splashscreen/c/m;)Landroid/widget/TextView;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "\u6216\u70b9\u51fb"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method
