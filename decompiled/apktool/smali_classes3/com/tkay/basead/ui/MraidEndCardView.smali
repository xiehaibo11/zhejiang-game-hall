.class public Lcom/tkay/basead/ui/MraidEndCardView;
.super Lcom/tkay/basead/ui/BaseEndCardView;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/ui/MraidEndCardView$a;
    }
.end annotation


# static fields
.field private static g:Ljava/lang/String;


# instance fields
.field e:Lcom/tkay/basead/ui/MraidContainerView;

.field f:Lcom/tkay/basead/ui/MraidEndCardView$a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 14
    const-class v0, Lcom/tkay/basead/ui/MraidEndCardView;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/ui/MraidEndCardView;->g:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/basead/ui/BaseEndCardView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)V

    const/4 p1, -0x1

    .line 23
    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/MraidEndCardView;->setBackgroundColor(I)V

    return-void
.end method


# virtual methods
.method protected final a()V
    .locals 1

    .line 108
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidEndCardView;->e:Lcom/tkay/basead/ui/MraidContainerView;

    if-eqz v0, :cond_0

    .line 109
    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidContainerView;->release()V

    :cond_0
    return-void
.end method

.method public init(Z)V
    .locals 5

    .line 41
    new-instance v0, Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidEndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/ui/MraidEndCardView;->b:Lcom/tkay/core/common/f/h;

    iget-object v3, p0, Lcom/tkay/basead/ui/MraidEndCardView;->c:Lcom/tkay/core/common/f/i;

    new-instance v4, Lcom/tkay/basead/ui/MraidEndCardView$1;

    invoke-direct {v4, p0}, Lcom/tkay/basead/ui/MraidEndCardView$1;-><init>(Lcom/tkay/basead/ui/MraidEndCardView;)V

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/basead/ui/MraidContainerView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/ui/MraidContainerView$a;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/MraidEndCardView;->e:Lcom/tkay/basead/ui/MraidContainerView;

    .line 64
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v1}, Lcom/tkay/basead/ui/MraidEndCardView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 67
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidEndCardView;->e:Lcom/tkay/basead/ui/MraidContainerView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MraidContainerView;->setNeedRegisterVolumeChangeReceiver(Z)V

    .line 68
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidEndCardView;->e:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/MraidContainerView;->init()V

    if-eqz p1, :cond_0

    .line 92
    iget-object p1, p0, Lcom/tkay/basead/ui/MraidEndCardView;->e:Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/MraidContainerView;->loadMraidWebView()V

    :cond_0
    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 1

    .line 99
    invoke-super {p0, p1}, Lcom/tkay/basead/ui/BaseEndCardView;->onWindowFocusChanged(Z)V

    .line 101
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidEndCardView;->e:Lcom/tkay/basead/ui/MraidContainerView;

    if-eqz v0, :cond_0

    .line 102
    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/MraidContainerView;->fireMraidIsViewable(Z)V

    :cond_0
    return-void
.end method

.method public setEndCardListener(Lcom/tkay/basead/ui/MraidEndCardView$a;)V
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/basead/ui/MraidEndCardView;->f:Lcom/tkay/basead/ui/MraidEndCardView$a;

    return-void
.end method
