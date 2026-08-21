.class final Lcom/kwad/components/ad/reward/m/o$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/m/o;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ag:Lcom/kwad/components/ad/reward/m/o;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/m/o;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/o$2;->Ag:Lcom/kwad/components/ad/reward/m/o;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/o$2;->Ag:Lcom/kwad/components/ad/reward/m/o;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/o;->b(Lcom/kwad/components/ad/reward/m/o;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/o$2;->Ag:Lcom/kwad/components/ad/reward/m/o;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/m/o;->c(Lcom/kwad/components/ad/reward/m/o;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/m/o$2;->Ag:Lcom/kwad/components/ad/reward/m/o;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/m/o;->d(Lcom/kwad/components/ad/reward/m/o;)Lcom/kwad/components/core/widget/KsLogoView;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/components/core/widget/KsLogoView;->a(Lcom/kwad/components/core/widget/KsLogoView;)Landroid/graphics/Bitmap;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/widget/TextView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/o$2;->Ag:Lcom/kwad/components/ad/reward/m/o;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/o;->b(Lcom/kwad/components/ad/reward/m/o;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/o$2;->Ag:Lcom/kwad/components/ad/reward/m/o;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/m/o;->c(Lcom/kwad/components/ad/reward/m/o;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/o$2;->Ag:Lcom/kwad/components/ad/reward/m/o;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/o;->b(Lcom/kwad/components/ad/reward/m/o;)Landroid/widget/TextView;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    return-void
.end method
