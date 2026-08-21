.class public Lcom/kwad/components/ad/draw/a/a;
.super Lcom/kwad/sdk/mvp/Presenter;


# instance fields
.field public bE:Lcom/kwad/components/ad/draw/a/b;


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

    invoke-virtual {p0}, Lcom/kwad/components/ad/draw/a/a;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/draw/a/b;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/a/a;->bE:Lcom/kwad/components/ad/draw/a/b;

    return-void
.end method
