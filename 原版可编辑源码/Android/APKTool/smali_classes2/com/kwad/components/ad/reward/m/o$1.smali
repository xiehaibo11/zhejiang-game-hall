.class final Lcom/kwad/components/ad/reward/m/o$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/widget/KsLogoView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/m/o;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
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

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/o$1;->Ag:Lcom/kwad/components/ad/reward/m/o;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final kh()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/o$1;->Ag:Lcom/kwad/components/ad/reward/m/o;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/o;->b(Lcom/kwad/components/ad/reward/m/o;)Landroid/widget/TextView;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/m/o$1;->Ag:Lcom/kwad/components/ad/reward/m/o;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/m/o;->a(Lcom/kwad/components/ad/reward/m/o;)Ljava/lang/Runnable;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method
