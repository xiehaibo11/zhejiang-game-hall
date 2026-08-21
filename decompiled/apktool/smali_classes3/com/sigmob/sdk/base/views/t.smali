.class public Lcom/sigmob/sdk/base/views/t;
.super Landroid/app/Dialog;

# interfaces
.implements Landroid/content/DialogInterface$OnShowListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/views/t$a;
    }
.end annotation


# instance fields
.field protected a:Lcom/sigmob/sdk/base/common/r;

.field private b:Landroid/view/View;

.field private c:Landroid/view/Window;

.field private d:Lcom/sigmob/sdk/base/views/t$a;

.field private e:Landroid/widget/RelativeLayout;

.field private f:Lcom/sigmob/sdk/videoAd/a;

.field private g:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private h:Lcom/sigmob/sdk/mraid/d;

.field private i:Landroid/content/Context;

.field private j:I

.field private k:I

.field private l:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/videoAd/a;)V
    .locals 1

    invoke-static {}, Lcom/sigmob/sdk/base/d;->e()I

    move-result v0

    invoke-direct {p0, p1, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/t;->c:Landroid/view/Window;

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/base/views/t;->j:I

    iput v0, p0, Lcom/sigmob/sdk/base/views/t;->k:I

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/views/t;->l:Z

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/t;->i:Landroid/content/Context;

    iput-object p2, p0, Lcom/sigmob/sdk/base/views/t;->g:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p3, p0, Lcom/sigmob/sdk/base/views/t;->f:Lcom/sigmob/sdk/videoAd/a;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/t;->b()Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/t;->b:Landroid/view/View;

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/views/t;I)I
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/views/t;->k:I

    return p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/base/views/t$a;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/t;->d:Lcom/sigmob/sdk/base/views/t$a;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/views/t;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/views/t;->l:Z

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/views/t;I)I
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/views/t;->j:I

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/mraid/d;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/t;->h:Lcom/sigmob/sdk/mraid/d;

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/videoAd/a;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/t;->f:Lcom/sigmob/sdk/videoAd/a;

    return-object p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/base/views/t;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/t;->i:Landroid/content/Context;

    return-object p0
.end method

.method private d()V
    .locals 6

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/t;->getWindow()Landroid/view/Window;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/t;->c:Landroid/view/Window;

    if-eqz v0, :cond_3

    const/16 v1, 0x50

    invoke-virtual {v0, v1}, Landroid/view/Window;->setGravity(I)V

    invoke-static {}, Lcom/sigmob/sdk/base/d;->f()I

    move-result v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/t;->c:Landroid/view/Window;

    invoke-virtual {v1, v0}, Landroid/view/Window;->setWindowAnimations(I)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t;->c:Landroid/view/Window;

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1, v1, v1}, Landroid/view/View;->setPadding(IIII)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t;->c:Landroid/view/Window;

    invoke-virtual {v0}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/t;->i:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    iget v1, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/t;->i:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v2

    iget v2, v2, Landroid/util/DisplayMetrics;->heightPixels:I

    iget v3, p0, Lcom/sigmob/sdk/base/views/t;->k:I

    add-int/lit8 v4, v3, -0x1

    const/4 v5, -0x1

    if-gt v4, v1, :cond_1

    iput v5, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    goto :goto_0

    :cond_1
    iput v3, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    :goto_0
    iget v3, p0, Lcom/sigmob/sdk/base/views/t;->j:I

    add-int/lit8 v4, v3, -0x1

    if-gt v4, v2, :cond_2

    iput v5, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    goto :goto_1

    :cond_2
    iput v3, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    :goto_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "RecommendDialog windowDeploy: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "===="

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/t;->c:Landroid/view/Window;

    invoke-virtual {v1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    :cond_3
    return-void
.end method

.method static synthetic e(Lcom/sigmob/sdk/base/views/t;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/t;->b:Landroid/view/View;

    return-object p0
.end method

.method static synthetic f(Lcom/sigmob/sdk/base/views/t;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/base/views/t;->k:I

    return p0
.end method

.method static synthetic g(Lcom/sigmob/sdk/base/views/t;)I
    .locals 0

    iget p0, p0, Lcom/sigmob/sdk/base/views/t;->j:I

    return p0
.end method

.method static synthetic h(Lcom/sigmob/sdk/base/views/t;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/t;->g:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/base/common/a;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t;->a:Lcom/sigmob/sdk/base/common/r;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/sdk/base/common/r;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_0
    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/views/t$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/t;->d:Lcom/sigmob/sdk/base/views/t$a;

    return-void
.end method

.method public a()Z
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/views/t;->k:I

    if-lez v0, :cond_0

    iget v0, p0, Lcom/sigmob/sdk/base/views/t;->j:I

    if-gtz v0, :cond_1

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/views/t;->l:Z

    :cond_1
    iget-boolean v0, p0, Lcom/sigmob/sdk/base/views/t;->l:Z

    return v0
.end method

.method public b()Landroid/view/View;
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t;->h:Lcom/sigmob/sdk/mraid/d;

    if-nez v0, :cond_0

    new-instance v0, Lcom/sigmob/sdk/mraid/d;

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/t;->i:Landroid/content/Context;

    iget-object v2, p0, Lcom/sigmob/sdk/base/views/t;->g:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    sget-object v3, Lcom/sigmob/sdk/base/models/PlacementType;->INTERSTITIAL:Lcom/sigmob/sdk/base/models/PlacementType;

    invoke-direct {v0, v1, v2, v3}, Lcom/sigmob/sdk/mraid/d;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/PlacementType;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/views/t;->h:Lcom/sigmob/sdk/mraid/d;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t;->h:Lcom/sigmob/sdk/mraid/d;

    new-instance v1, Lcom/sigmob/sdk/base/views/t$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/views/t$1;-><init>(Lcom/sigmob/sdk/base/views/t;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d$f;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t;->h:Lcom/sigmob/sdk/mraid/d;

    new-instance v1, Lcom/sigmob/sdk/base/views/t$2;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/base/views/t$2;-><init>(Lcom/sigmob/sdk/base/views/t;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/d;->a(Lcom/sigmob/sdk/mraid/d$a;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t;->g:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCloseCardHtmlData()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t;->h:Lcom/sigmob/sdk/mraid/d;

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/t;->g:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCloseCardHtmlData()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/sigmob/sdk/base/views/t$3;

    invoke-direct {v2, p0}, Lcom/sigmob/sdk/base/views/t$3;-><init>(Lcom/sigmob/sdk/base/views/t;)V

    invoke-virtual {v0, v1, v2}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Lcom/sigmob/sdk/mraid/d$b;)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t;->h:Lcom/sigmob/sdk/mraid/d;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->p()Landroid/widget/FrameLayout;

    move-result-object v0

    return-object v0
.end method

.method public c()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/t;->h:Lcom/sigmob/sdk/mraid/d;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/t;->d:Lcom/sigmob/sdk/base/views/t$a;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid/d;->l()V

    iput-object v1, p0, Lcom/sigmob/sdk/base/views/t;->h:Lcom/sigmob/sdk/mraid/d;

    :cond_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2

    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    new-instance p1, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/t;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/t;->e:Landroid/widget/RelativeLayout;

    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t;->e:Landroid/widget/RelativeLayout;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t;->e:Landroid/widget/RelativeLayout;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/t;->setContentView(Landroid/view/View;)V

    invoke-virtual {p0, p0}, Lcom/sigmob/sdk/base/views/t;->setOnShowListener(Landroid/content/DialogInterface$OnShowListener;)V

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "RecommendDialog onCreate:"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/sigmob/sdk/base/views/t;->k:I

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/sigmob/sdk/base/views/t;->j:I

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/t;->b:Landroid/view/View;

    if-eqz p1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/views/t;->e:Landroid/widget/RelativeLayout;

    invoke-virtual {v1, p1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    :cond_0
    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/views/t;->setCanceledOnTouchOutside(Z)V

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/t;->setCancelable(Z)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/t;->d()V

    return-void
.end method

.method public onShow(Landroid/content/DialogInterface;)V
    .locals 0

    const-string p1, "RecommendDialog  onShow"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    sget-object p1, Lcom/sigmob/sdk/base/common/a;->d:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/t;->a(Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method protected onStart()V
    .locals 2

    invoke-super {p0}, Landroid/app/Dialog;->onStart()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/t;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x1b06

    invoke-virtual {v0, v1}, Landroid/view/View;->setSystemUiVisibility(I)V

    return-void
.end method
