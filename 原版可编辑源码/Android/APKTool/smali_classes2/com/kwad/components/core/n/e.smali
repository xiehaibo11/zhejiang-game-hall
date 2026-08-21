.class public Lcom/kwad/components/core/n/e;
.super Lcom/kwad/sdk/api/core/fragment/KsFragment;

# interfaces
.implements Lcom/kwad/sdk/l/a/b;


# instance fields
.field protected Pj:Landroid/view/ViewGroup;

.field protected lJ:Landroid/view/ViewGroup;

.field private final mBackPressDelete:Lcom/kwad/sdk/l/a/a;

.field protected mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragment;-><init>()V

    new-instance v0, Lcom/kwad/sdk/l/a/a;

    invoke-direct {v0}, Lcom/kwad/sdk/l/a/a;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/n/e;->mBackPressDelete:Lcom/kwad/sdk/l/a/a;

    return-void
.end method


# virtual methods
.method public bP()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/n/e;->mBackPressDelete:Lcom/kwad/sdk/l/a/a;

    invoke-virtual {v0}, Lcom/kwad/sdk/l/a/a;->bP()Z

    move-result v0

    return v0
.end method

.method public final findViewById(I)Landroid/view/View;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Landroid/view/View;",
            ">(I)TT;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/core/n/e;->lJ:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "ID does not reference a View inside this View"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method protected lA()Landroid/view/ViewGroup;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public final onCreateView(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;
    .locals 1

    invoke-virtual {p1}, Landroid/view/LayoutInflater;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/core/n/e;->mContext:Landroid/content/Context;

    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p1

    iput-object p2, p0, Lcom/kwad/components/core/n/e;->Pj:Landroid/view/ViewGroup;

    iget-object p3, p0, Lcom/kwad/components/core/n/e;->lJ:Landroid/view/ViewGroup;

    if-nez p3, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/n/e;->lA()Landroid/view/ViewGroup;

    move-result-object p3

    iput-object p3, p0, Lcom/kwad/components/core/n/e;->lJ:Landroid/view/ViewGroup;

    if-nez p3, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/n/e;->ov()I

    move-result p3

    if-eqz p3, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/n/e;->ov()I

    move-result p3

    const/4 v0, 0x0

    invoke-virtual {p1, p3, p2, v0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/kwad/components/core/n/e;->lJ:Landroid/view/ViewGroup;

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/n/e;->lJ:Landroid/view/ViewGroup;

    return-object p1
.end method

.method public onDestroy()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/api/core/fragment/KsFragment;->onDestroy()V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/e;->getHost()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/n/e;->mContext:Landroid/content/Context;

    invoke-virtual {p0}, Lcom/kwad/components/core/n/e;->getView()Landroid/view/View;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/components/core/t/f;->destroyFragment(Landroid/content/Context;Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method protected ov()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
