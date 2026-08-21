.class public abstract Lcom/kwad/components/ad/reward/m/s;
.super Lcom/kwad/components/ad/reward/m/d;


# instance fields
.field protected sw:Landroid/view/ViewGroup;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/m/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/ViewGroup;II)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/s;->sw:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p1, p2}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object p2

    check-cast p2, Landroid/view/ViewStub;

    if-eqz p2, :cond_1

    invoke-virtual {p2}, Landroid/view/ViewStub;->inflate()Landroid/view/View;

    move-result-object p1

    :goto_0
    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/m/s;->sw:Landroid/view/ViewGroup;

    return-void

    :cond_1
    invoke-virtual {p1, p3}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object p1

    goto :goto_0
.end method

.method public gQ()Landroid/view/ViewGroup;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/m/s;->sw:Landroid/view/ViewGroup;

    return-object v0
.end method
