.class public Lcom/tkay/basead/ui/MraidMediaView;
.super Lcom/tkay/basead/ui/BaseMediaATView;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/ui/MraidMediaView$a;
    }
.end annotation


# instance fields
.field private g:Lcom/tkay/basead/ui/MraidContainerView;

.field private h:Lcom/tkay/basead/ui/MraidMediaView$a;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 6

    const/4 v2, 0x0

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    .line 20
    invoke-direct/range {v0 .. v5}, Lcom/tkay/basead/ui/MraidMediaView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;ZLcom/tkay/basead/ui/BaseMediaATView$a;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;ZLcom/tkay/basead/ui/BaseMediaATView$a;)V
    .locals 0

    .line 25
    invoke-direct/range {p0 .. p5}, Lcom/tkay/basead/ui/BaseMediaATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;ZLcom/tkay/basead/ui/BaseMediaATView$a;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/MraidMediaView;)Lcom/tkay/basead/ui/MraidMediaView$a;
    .locals 0

    .line 14
    iget-object p0, p0, Lcom/tkay/basead/ui/MraidMediaView;->h:Lcom/tkay/basead/ui/MraidMediaView$a;

    return-object p0
.end method

.method private a()V
    .locals 5

    .line 67
    new-instance v0, Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidMediaView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/ui/MraidMediaView;->a:Lcom/tkay/core/common/f/h;

    iget-object v3, p0, Lcom/tkay/basead/ui/MraidMediaView;->c:Lcom/tkay/core/common/f/i;

    new-instance v4, Lcom/tkay/basead/ui/MraidMediaView$1;

    invoke-direct {v4, p0}, Lcom/tkay/basead/ui/MraidMediaView$1;-><init>(Lcom/tkay/basead/ui/MraidMediaView;)V

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/basead/ui/MraidContainerView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/ui/MraidContainerView$a;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView;->g:Lcom/tkay/basead/ui/MraidContainerView;

    .line 88
    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidContainerView;->init()V

    .line 91
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView;->f:Landroid/widget/FrameLayout;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView;->g:Lcom/tkay/basead/ui/MraidContainerView;

    if-eqz v0, :cond_0

    .line 92
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView;->f:Landroid/widget/FrameLayout;

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->removeAllViews()V

    .line 93
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView;->f:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/tkay/basead/ui/MraidMediaView;->g:Lcom/tkay/basead/ui/MraidContainerView;

    new-instance v2, Landroid/view/ViewGroup$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v3}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1, v2}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method private static a(Ljava/lang/String;)V
    .locals 1

    const-string v0, "MraidMediaView"

    .line 108
    invoke-static {v0, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method


# virtual methods
.method public destroy()V
    .locals 1

    .line 140
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseMediaATView;->destroy()V

    .line 142
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView;->g:Lcom/tkay/basead/ui/MraidContainerView;

    if-eqz v0, :cond_0

    .line 143
    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidContainerView;->release()V

    :cond_0
    return-void
.end method

.method public fireAudioVolumeChange(Z)V
    .locals 1

    .line 53
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView;->g:Lcom/tkay/basead/ui/MraidContainerView;

    if-eqz v0, :cond_0

    .line 54
    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/MraidContainerView;->fireAudioVolumeChange(Z)V

    :cond_0
    return-void
.end method

.method public init(II)V
    .locals 3

    .line 61
    invoke-super {p0, p1, p2}, Lcom/tkay/basead/ui/BaseMediaATView;->init(II)V

    .line 1067
    new-instance p1, Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidMediaView;->getContext()Landroid/content/Context;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView;->a:Lcom/tkay/core/common/f/h;

    iget-object v1, p0, Lcom/tkay/basead/ui/MraidMediaView;->c:Lcom/tkay/core/common/f/i;

    new-instance v2, Lcom/tkay/basead/ui/MraidMediaView$1;

    invoke-direct {v2, p0}, Lcom/tkay/basead/ui/MraidMediaView$1;-><init>(Lcom/tkay/basead/ui/MraidMediaView;)V

    invoke-direct {p1, p2, v0, v1, v2}, Lcom/tkay/basead/ui/MraidContainerView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/ui/MraidContainerView$a;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/MraidMediaView;->g:Lcom/tkay/basead/ui/MraidContainerView;

    .line 1088
    invoke-virtual {p1}, Lcom/tkay/basead/ui/MraidContainerView;->init()V

    .line 1091
    iget-object p1, p0, Lcom/tkay/basead/ui/MraidMediaView;->f:Landroid/widget/FrameLayout;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/basead/ui/MraidMediaView;->g:Lcom/tkay/basead/ui/MraidContainerView;

    if-eqz p1, :cond_0

    .line 1092
    iget-object p1, p0, Lcom/tkay/basead/ui/MraidMediaView;->f:Landroid/widget/FrameLayout;

    invoke-virtual {p1}, Landroid/widget/FrameLayout;->removeAllViews()V

    .line 1093
    iget-object p1, p0, Lcom/tkay/basead/ui/MraidMediaView;->f:Landroid/widget/FrameLayout;

    iget-object p2, p0, Lcom/tkay/basead/ui/MraidMediaView;->g:Lcom/tkay/basead/ui/MraidContainerView;

    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p1, p2, v0}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method public onDetachedFromWindow()V
    .locals 0

    .line 135
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseMediaATView;->onDetachedFromWindow()V

    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 1

    .line 113
    invoke-super {p0, p1}, Lcom/tkay/basead/ui/BaseMediaATView;->onWindowFocusChanged(Z)V

    .line 115
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidMediaView;->g:Lcom/tkay/basead/ui/MraidContainerView;

    if-eqz v0, :cond_0

    .line 116
    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/MraidContainerView;->fireMraidIsViewable(Z)V

    :cond_0
    return-void
.end method

.method public setMraidWebViewListener(Lcom/tkay/basead/ui/MraidMediaView$a;)V
    .locals 0

    .line 98
    iput-object p1, p0, Lcom/tkay/basead/ui/MraidMediaView;->h:Lcom/tkay/basead/ui/MraidMediaView$a;

    return-void
.end method
