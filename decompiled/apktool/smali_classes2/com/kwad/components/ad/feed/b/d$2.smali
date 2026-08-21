.class final Lcom/kwad/components/ad/feed/b/d$2;
.super Landroid/animation/AnimatorListenerAdapter;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/feed/b/d;->bn()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic eW:Lcom/kwad/components/ad/feed/b/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/feed/b/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/feed/b/d$2;->eW:Lcom/kwad/components/ad/feed/b/d;

    invoke-direct {p0}, Landroid/animation/AnimatorListenerAdapter;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAnimationEnd(Landroid/animation/Animator;)V
    .locals 1

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/d$2;->eW:Lcom/kwad/components/ad/feed/b/d;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/d;->f(Lcom/kwad/components/ad/feed/b/d;)I

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/d$2;->eW:Lcom/kwad/components/ad/feed/b/d;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/d;->g(Lcom/kwad/components/ad/feed/b/d;)I

    move-result p1

    const/4 v0, 0x5

    if-lt p1, v0, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/d$2;->eW:Lcom/kwad/components/ad/feed/b/d;

    invoke-static {p1}, Lcom/kwad/components/ad/feed/b/d;->h(Lcom/kwad/components/ad/feed/b/d;)Landroid/animation/Animator;

    move-result-object p1

    invoke-virtual {p1}, Landroid/animation/Animator;->start()V

    return-void
.end method
