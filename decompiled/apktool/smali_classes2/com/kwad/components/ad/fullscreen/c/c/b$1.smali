.class final Lcom/kwad/components/ad/fullscreen/c/c/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/h;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/fullscreen/c/c/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic hn:Lcom/kwad/components/ad/fullscreen/c/c/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/fullscreen/c/c/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$1;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/playable/PlayableSource;Lcom/kwad/components/ad/reward/e/l;)V
    .locals 0

    return-void
.end method

.method public final bS()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$1;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->a(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/widget/FrameLayout;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final bT()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$1;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->a(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/widget/FrameLayout;

    move-result-object v0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method
