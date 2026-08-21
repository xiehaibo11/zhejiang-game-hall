.class public Lcom/tkay/basead/ui/MraidContainerView;
.super Landroid/widget/FrameLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/ui/MraidContainerView$a;
    }
.end annotation


# static fields
.field private static final h:Ljava/lang/String;


# instance fields
.field protected a:Lcom/tkay/core/common/f/h;

.field protected b:Lcom/tkay/core/common/f/j;

.field protected c:Lcom/tkay/core/common/f/i;

.field protected d:Lcom/tkay/basead/ui/b;

.field protected e:Lcom/tkay/basead/ui/ClickToReLoadView;

.field protected f:Lcom/tkay/basead/mraid/MraidWebView;

.field protected g:Lcom/tkay/basead/ui/MraidContainerView$a;

.field private i:Z

.field private j:Z

.field private k:Z

.field private l:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 28
    const-class v0, Lcom/tkay/basead/ui/MraidContainerView;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/ui/MraidContainerView;->h:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 59
    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/ui/MraidContainerView$a;)V
    .locals 0

    .line 63
    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    .line 65
    iput-object p2, p0, Lcom/tkay/basead/ui/MraidContainerView;->a:Lcom/tkay/core/common/f/h;

    .line 66
    iget-object p2, p3, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    iput-object p2, p0, Lcom/tkay/basead/ui/MraidContainerView;->b:Lcom/tkay/core/common/f/j;

    .line 67
    iput-object p3, p0, Lcom/tkay/basead/ui/MraidContainerView;->c:Lcom/tkay/core/common/f/i;

    .line 68
    iput-object p4, p0, Lcom/tkay/basead/ui/MraidContainerView;->g:Lcom/tkay/basead/ui/MraidContainerView$a;

    .line 70
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidContainerView;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    const-string p3, "color_99000000"

    const-string p4, "color"

    invoke-static {p1, p3, p4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p2, p1}, Landroid/content/res/Resources;->getColor(I)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/MraidContainerView;->setBackgroundColor(I)V

    return-void
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 26
    sget-object v0, Lcom/tkay/basead/ui/MraidContainerView;->h:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/basead/ui/MraidContainerView;)Z
    .locals 1

    const/4 v0, 0x0

    .line 26
    iput-boolean v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->k:Z

    return v0
.end method

.method private b()V
    .locals 3

    .line 84
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, p0, Lcom/tkay/basead/ui/MraidContainerView;->a:Lcom/tkay/core/common/f/h;

    invoke-static {v0, v1}, Lcom/tkay/basead/a/b/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/basead/a/b/c;->b(Ljava/lang/String;)Lcom/tkay/basead/mraid/MraidWebView;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    if-eqz v0, :cond_1

    const/4 v1, 0x1

    .line 87
    iput-boolean v1, p0, Lcom/tkay/basead/ui/MraidContainerView;->l:Z

    .line 89
    iget-boolean v2, p0, Lcom/tkay/basead/ui/MraidContainerView;->j:Z

    if-eqz v2, :cond_0

    .line 90
    invoke-virtual {v0, v1}, Lcom/tkay/basead/mraid/MraidWebView;->setNeedRegisterVolumeChangeReceiver(Z)V

    .line 93
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidContainerView;->getContext()Landroid/content/Context;

    move-result-object v1

    new-instance v2, Lcom/tkay/basead/ui/MraidContainerView$1;

    invoke-direct {v2, p0}, Lcom/tkay/basead/ui/MraidContainerView$1;-><init>(Lcom/tkay/basead/ui/MraidContainerView;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/mraid/MraidWebView;->prepare(Landroid/content/Context;Lcom/tkay/basead/mraid/b;)V

    .line 116
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v1}, Lcom/tkay/basead/ui/MraidContainerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 120
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->g:Lcom/tkay/basead/ui/MraidContainerView$a;

    if-eqz v0, :cond_1

    .line 121
    invoke-interface {v0}, Lcom/tkay/basead/ui/MraidContainerView$a;->a()V

    :cond_1
    return-void
.end method

.method static synthetic b(Lcom/tkay/basead/ui/MraidContainerView;)V
    .locals 0

    .line 26
    invoke-direct {p0}, Lcom/tkay/basead/ui/MraidContainerView;->b()V

    return-void
.end method

.method private c()V
    .locals 3

    .line 251
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->e:Lcom/tkay/basead/ui/ClickToReLoadView;

    if-nez v0, :cond_0

    .line 252
    new-instance v0, Lcom/tkay/basead/ui/ClickToReLoadView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidContainerView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/basead/ui/ClickToReLoadView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->e:Lcom/tkay/basead/ui/ClickToReLoadView;

    .line 253
    new-instance v1, Lcom/tkay/basead/ui/MraidContainerView$3;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/MraidContainerView$3;-><init>(Lcom/tkay/basead/ui/MraidContainerView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/ClickToReLoadView;->setListener(Lcom/tkay/basead/ui/ClickToReLoadView$a;)V

    .line 262
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->e:Lcom/tkay/basead/ui/ClickToReLoadView;

    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v1}, Lcom/tkay/basead/ui/MraidContainerView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/ui/MraidContainerView;)V
    .locals 0

    .line 26
    invoke-direct {p0}, Lcom/tkay/basead/ui/MraidContainerView;->f()V

    return-void
.end method

.method private d()V
    .locals 1

    .line 266
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->e:Lcom/tkay/basead/ui/ClickToReLoadView;

    if-eqz v0, :cond_0

    .line 267
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MraidContainerView;->removeView(Landroid/view/View;)V

    :cond_0
    return-void
.end method

.method static synthetic d(Lcom/tkay/basead/ui/MraidContainerView;)V
    .locals 0

    .line 26
    invoke-direct {p0}, Lcom/tkay/basead/ui/MraidContainerView;->c()V

    return-void
.end method

.method private e()V
    .locals 1

    .line 272
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->d:Lcom/tkay/basead/ui/b;

    if-eqz v0, :cond_0

    .line 273
    invoke-virtual {v0}, Lcom/tkay/basead/ui/b;->b()V

    :cond_0
    return-void
.end method

.method private f()V
    .locals 1

    .line 278
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->d:Lcom/tkay/basead/ui/b;

    if-eqz v0, :cond_0

    .line 279
    invoke-virtual {v0}, Lcom/tkay/basead/ui/b;->c()V

    :cond_0
    return-void
.end method

.method private g()V
    .locals 1

    .line 313
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->b:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->V()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 317
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/MraidContainerView;->loadMraidWebView()V

    return-void
.end method


# virtual methods
.method public fireAudioVolumeChange(Z)V
    .locals 3

    .line 238
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->l:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    .line 240
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    const-wide/16 v1, 0x0

    invoke-virtual {p1, v0, v1, v2}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireAudioVolumeChange(Landroid/webkit/WebView;D)V

    return-void

    .line 242
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    const-wide/high16 v1, 0x3ff0000000000000L    # 1.0

    invoke-virtual {p1, v0, v1, v2}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireAudioVolumeChange(Landroid/webkit/WebView;D)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_1
    return-void
.end method

.method public fireMraidIsViewable(Z)V
    .locals 1

    .line 221
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->l:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    .line 223
    iget-object p1, p0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/tkay/expressad/mbbanner/a/a/a;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Z)V

    return-void

    .line 225
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/tkay/expressad/mbbanner/a/a/a;->a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public init()V
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->b:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->V()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 75
    invoke-direct {p0}, Lcom/tkay/basead/ui/MraidContainerView;->b()V

    return-void

    .line 77
    :cond_0
    new-instance v0, Lcom/tkay/basead/ui/b;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/b;-><init>(Landroid/view/ViewGroup;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->d:Lcom/tkay/basead/ui/b;

    .line 78
    invoke-virtual {v0}, Lcom/tkay/basead/ui/b;->a()V

    return-void
.end method

.method public loadMraidWebView()V
    .locals 4

    .line 130
    iget-boolean v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->k:Z

    if-eqz v0, :cond_0

    return-void

    .line 135
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->l:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    const/4 v0, 0x1

    .line 142
    iput-boolean v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->k:Z

    .line 1266
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->e:Lcom/tkay/basead/ui/ClickToReLoadView;

    if-eqz v0, :cond_2

    .line 1267
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/MraidContainerView;->removeView(Landroid/view/View;)V

    .line 1272
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->d:Lcom/tkay/basead/ui/b;

    if-eqz v0, :cond_3

    .line 1273
    invoke-virtual {v0}, Lcom/tkay/basead/ui/b;->b()V

    .line 149
    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, p0, Lcom/tkay/basead/ui/MraidContainerView;->a:Lcom/tkay/core/common/f/h;

    invoke-static {v0, v1}, Lcom/tkay/basead/mraid/d;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/lang/String;

    move-result-object v0

    .line 150
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    const/4 v0, 0x0

    .line 152
    iput-boolean v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->k:Z

    .line 155
    invoke-direct {p0}, Lcom/tkay/basead/ui/MraidContainerView;->c()V

    .line 157
    invoke-direct {p0}, Lcom/tkay/basead/ui/MraidContainerView;->f()V

    return-void

    .line 161
    :cond_4
    iget-object v1, p0, Lcom/tkay/basead/ui/MraidContainerView;->c:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/basead/ui/MraidContainerView;->a:Lcom/tkay/core/common/f/h;

    invoke-static {v1, v2}, Lcom/tkay/basead/a/b/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/lang/String;

    move-result-object v1

    .line 163
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    new-instance v3, Lcom/tkay/basead/ui/MraidContainerView$2;

    invoke-direct {v3, p0, v1, v0}, Lcom/tkay/basead/ui/MraidContainerView$2;-><init>(Lcom/tkay/basead/ui/MraidContainerView;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 1

    .line 286
    invoke-super {p0}, Landroid/widget/FrameLayout;->onAttachedToWindow()V

    const/4 v0, 0x1

    .line 288
    iput-boolean v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->i:Z

    .line 290
    invoke-direct {p0}, Lcom/tkay/basead/ui/MraidContainerView;->g()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    .line 296
    invoke-super {p0}, Landroid/widget/FrameLayout;->onDetachedFromWindow()V

    const/4 v0, 0x0

    .line 298
    iput-boolean v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->i:Z

    return-void
.end method

.method public release()V
    .locals 3

    .line 323
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->l:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    if-eqz v0, :cond_0

    .line 324
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-static {v0}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 325
    iget-object v0, p0, Lcom/tkay/basead/ui/MraidContainerView;->f:Lcom/tkay/basead/mraid/MraidWebView;

    invoke-virtual {v0}, Lcom/tkay/basead/mraid/MraidWebView;->release()V

    .line 327
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/ui/MraidContainerView;->c:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/basead/ui/MraidContainerView;->a:Lcom/tkay/core/common/f/h;

    .line 328
    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/res/d;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V

    .line 330
    :cond_0
    invoke-static {p0}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public setNeedRegisterVolumeChangeReceiver(Z)V
    .locals 0

    .line 233
    iput-boolean p1, p0, Lcom/tkay/basead/ui/MraidContainerView;->j:Z

    return-void
.end method

.method public setVisibility(I)V
    .locals 0

    .line 303
    invoke-super {p0, p1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    .line 305
    iget-boolean p1, p0, Lcom/tkay/basead/ui/MraidContainerView;->i:Z

    if-eqz p1, :cond_0

    .line 306
    invoke-direct {p0}, Lcom/tkay/basead/ui/MraidContainerView;->g()V

    :cond_0
    return-void
.end method
