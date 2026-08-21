.class public abstract Lcom/kwad/components/core/page/b/a/a;
.super Lcom/kwad/sdk/mvp/Presenter;


# instance fields
.field protected MW:Lcom/kwad/components/core/page/b/a/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    return-void
.end method


# virtual methods
.method public ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/core/page/b/a/a;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/page/b/a/b;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/a/a;->MW:Lcom/kwad/components/core/page/b/a/b;

    return-void
.end method
