.class public Lcom/kwad/components/core/e/c/c;
.super Lcom/kwad/sdk/mvp/Presenter;


# instance fields
.field protected Jr:Lcom/kwad/components/core/e/c/d;


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

    invoke-virtual {p0}, Lcom/kwad/components/core/e/c/c;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/e/c/d;

    iput-object v0, p0, Lcom/kwad/components/core/e/c/c;->Jr:Lcom/kwad/components/core/e/c/d;

    return-void
.end method
