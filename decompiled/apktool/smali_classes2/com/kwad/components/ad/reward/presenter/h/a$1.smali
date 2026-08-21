.class final Lcom/kwad/components/ad/reward/presenter/h/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/j$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/h/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic xq:Lcom/kwad/components/ad/reward/presenter/h/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/h/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/h/a$1;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final interceptPlayCardResume()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$1;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->a(Lcom/kwad/components/ad/reward/presenter/h/a;)Landroid/widget/FrameLayout;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/h/a$1;->xq:Lcom/kwad/components/ad/reward/presenter/h/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h/a;->a(Lcom/kwad/components/ad/reward/presenter/h/a;)Landroid/widget/FrameLayout;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
