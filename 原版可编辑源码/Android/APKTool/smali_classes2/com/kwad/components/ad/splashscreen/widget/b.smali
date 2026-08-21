.class public abstract Lcom/kwad/components/ad/splashscreen/widget/b;
.super Lcom/kwad/sdk/widget/KSFrameLayout;


# instance fields
.field private Fj:Landroid/animation/Animator;

.field private Fk:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-direct {p0, p1, v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/b;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/ad/splashscreen/widget/b;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 1

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/b;->Fk:Z

    invoke-virtual {p0, p1, p2, p3}, Lcom/kwad/components/ad/splashscreen/widget/b;->a(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/b;->ll()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/widget/b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/splashscreen/widget/b;->Fk:Z

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/widget/b;)Landroid/animation/Animator;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/widget/b;->Fj:Landroid/animation/Animator;

    return-object p0
.end method


# virtual methods
.method protected a(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    return-void
.end method

.method public final ab()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->ab()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/b;->Fj:Landroid/animation/Animator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/Animator;->cancel()V

    :cond_0
    return-void
.end method

.method protected abstract getAnimationDelayTime()I
.end method

.method protected abstract getInteractionView()Landroid/view/View;
.end method

.method protected abstract lE()Landroid/animation/Animator;
.end method

.method protected abstract lF()V
.end method

.method public final lG()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/b;->Fk:Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/b;->Fj:Landroid/animation/Animator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/Animator;->cancel()V

    :cond_0
    return-void
.end method

.method public final le()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/b;->Fj:Landroid/animation/Animator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/Animator;->cancel()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/b;->Fj:Landroid/animation/Animator;

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/b;->lE()Landroid/animation/Animator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/b;->Fj:Landroid/animation/Animator;

    if-eqz v0, :cond_1

    new-instance v1, Lcom/kwad/components/ad/splashscreen/widget/b$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/widget/b$1;-><init>(Lcom/kwad/components/ad/splashscreen/widget/b;)V

    invoke-virtual {v0, v1}, Landroid/animation/Animator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/b;->Fj:Landroid/animation/Animator;

    invoke-virtual {v0}, Landroid/animation/Animator;->start()V

    :cond_1
    return-void
.end method

.method protected abstract ll()V
.end method
