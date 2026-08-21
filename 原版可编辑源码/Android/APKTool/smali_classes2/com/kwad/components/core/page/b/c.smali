.class public abstract Lcom/kwad/components/core/page/b/c;
.super Lcom/kwad/sdk/mvp/Presenter;


# instance fields
.field protected MQ:Lcom/kwad/components/core/page/b/d;


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

    invoke-virtual {p0}, Lcom/kwad/components/core/page/b/c;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/page/b/d;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/c;->MQ:Lcom/kwad/components/core/page/b/d;

    return-void
.end method
