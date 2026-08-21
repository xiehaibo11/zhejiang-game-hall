.class public Lcom/kwad/components/ad/splashscreen/c/e;
.super Lcom/kwad/sdk/mvp/Presenter;


# instance fields
.field public CM:Lcom/kwad/components/ad/splashscreen/h;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    return-void
.end method


# virtual methods
.method public ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->Gk()Ljava/lang/Object;

    move-result-object v0

    instance-of v1, v0, Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v1, :cond_0

    check-cast v0, Lcom/kwad/components/ad/splashscreen/h;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/e;->CM:Lcom/kwad/components/ad/splashscreen/h;

    :cond_0
    return-void
.end method
