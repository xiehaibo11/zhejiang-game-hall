.class final Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/b$8;
.super Lcom/kwad/components/ad/reward/m/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/b;->a(ZLcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic uD:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/b;

.field final synthetic uE:Z


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/b;Z)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/b$8;->uD:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/b;

    iput-boolean p2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/b$8;->uE:Z

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/h;-><init>()V

    return-void
.end method


# virtual methods
.method public final if()I
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/b$8;->uE:Z

    if-eqz v0, :cond_0

    sget v0, Lcom/kwad/sdk/R$id;->ksad_common_app_card_land_stub:I

    return v0

    :cond_0
    invoke-super {p0}, Lcom/kwad/components/ad/reward/m/h;->if()I

    move-result v0

    return v0
.end method
