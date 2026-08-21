.class final Lcom/kwad/components/ad/reward/presenter/f/j$1;
.super Lcom/kwad/components/ad/reward/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/f/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wX:Lcom/kwad/components/ad/reward/presenter/f/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/j$1;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/e/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final bD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/j$1;->wX:Lcom/kwad/components/ad/reward/presenter/f/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/j;->a(Lcom/kwad/components/ad/reward/presenter/f/j;)Landroid/widget/FrameLayout;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method
