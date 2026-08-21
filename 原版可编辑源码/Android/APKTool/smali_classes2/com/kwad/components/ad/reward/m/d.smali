.class public abstract Lcom/kwad/components/ad/reward/m/d;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method protected a(Lcom/kwad/components/ad/reward/m/r;)V
    .locals 0

    return-void
.end method

.method protected ad(Z)V
    .locals 0

    return-void
.end method

.method public final b(Lcom/kwad/components/ad/reward/m/r;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/m/d;->a(Lcom/kwad/components/ad/reward/m/r;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/m/d;->gQ()Landroid/view/ViewGroup;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/m/d;->ad(Z)V

    return-void
.end method

.method public abstract gQ()Landroid/view/ViewGroup;
.end method

.method public onUnbind()V
    .locals 0

    return-void
.end method
