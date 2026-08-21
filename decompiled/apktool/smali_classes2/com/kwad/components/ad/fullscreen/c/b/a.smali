.class public final Lcom/kwad/components/ad/fullscreen/c/b/a;
.super Lcom/kwad/components/ad/reward/presenter/d/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final cb()V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/b/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/d/b/a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/b/a;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/b/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/presenter/d/b/b;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/fullscreen/c/b/a;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-void
.end method
