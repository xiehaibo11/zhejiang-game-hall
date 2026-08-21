.class final Lcom/kwad/components/core/page/splitLandingPage/view/a$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/video/a$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/page/splitLandingPage/view/a;->b(Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic OD:Lcom/kwad/components/core/page/splitLandingPage/view/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/splitLandingPage/view/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/splitLandingPage/view/a$3;->OD:Lcom/kwad/components/core/page/splitLandingPage/view/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final bj()V
    .locals 0

    return-void
.end method

.method public final bk()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/splitLandingPage/view/a$3;->OD:Lcom/kwad/components/core/page/splitLandingPage/view/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/page/splitLandingPage/view/a;->po()V

    iget-object v0, p0, Lcom/kwad/components/core/page/splitLandingPage/view/a$3;->OD:Lcom/kwad/components/core/page/splitLandingPage/view/a;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/splitLandingPage/view/a;->aC(Z)Landroid/animation/Animator;

    move-result-object v0

    invoke-virtual {v0}, Landroid/animation/Animator;->start()V

    return-void
.end method

.method public final d(J)V
    .locals 0

    return-void
.end method

.method public final onVideoPlayStart()V
    .locals 0

    return-void
.end method
