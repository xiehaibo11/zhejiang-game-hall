.class final Lcom/kwad/components/ad/splashscreen/c/n$4;
.super Lcom/kwad/components/ad/splashscreen/f/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/n;->ln()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic DB:Lcom/kwad/components/ad/splashscreen/c/n;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/n;Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/n$4;->DB:Lcom/kwad/components/ad/splashscreen/c/n;

    invoke-direct {p0, p2, p3}, Lcom/kwad/components/ad/splashscreen/f/a;-><init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method


# virtual methods
.method public final aa(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n$4;->DB:Lcom/kwad/components/ad/splashscreen/c/n;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/n;->j(Lcom/kwad/components/ad/splashscreen/c/n;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
