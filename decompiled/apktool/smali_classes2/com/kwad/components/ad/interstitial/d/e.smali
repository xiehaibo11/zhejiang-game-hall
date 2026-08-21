.class public final Lcom/kwad/components/ad/interstitial/d/e;
.super Lcom/kwad/components/ad/interstitial/d/b;

# interfaces
.implements Lcom/kwad/sdk/utils/bn$a;


# instance fields
.field private gx:Lcom/kwad/sdk/utils/bn;

.field private jl:Lcom/kwad/components/ad/interstitial/d/c$a;

.field private jo:Lcom/kwad/sdk/widget/KSFrameLayout;

.field private kA:Landroid/animation/ObjectAnimator;

.field private kB:Landroid/animation/ObjectAnimator;

.field private kC:Landroid/animation/ObjectAnimator;

.field private kD:I

.field private kE:Ljava/lang/Runnable;

.field private kF:Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;

.field private kn:Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;

.field private ko:Landroid/view/View;

.field private kp:Landroid/view/View;

.field private kq:Landroid/view/View;

.field private kr:Landroid/view/View;

.field private ks:Landroid/view/View;

.field private kt:Landroid/view/View;

.field private ku:Landroid/view/View;

.field private kv:Landroid/view/View;

.field private kw:Landroid/animation/AnimatorSet;

.field private kx:Landroid/animation/ObjectAnimator;

.field private ky:Landroid/animation/ObjectAnimator;

.field private kz:Landroid/animation/ObjectAnimator;

.field protected mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field protected mContext:Landroid/content/Context;

.field private mLandPageViewListener:Lcom/kwad/components/core/page/a/a;

.field private mLandingPageView:Lcom/kwad/components/core/page/c;

.field private mPageUrl:Ljava/lang/String;

.field private mWebCardCloseListener:Lcom/kwad/sdk/core/webview/d/a/b;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/b;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/e$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/e$1;-><init>(Lcom/kwad/components/ad/interstitial/d/e;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jl:Lcom/kwad/components/ad/interstitial/d/c$a;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/e$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/e$3;-><init>(Lcom/kwad/components/ad/interstitial/d/e;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kE:Ljava/lang/Runnable;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/e$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/e$4;-><init>(Lcom/kwad/components/ad/interstitial/d/e;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kF:Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/e$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/e$5;-><init>(Lcom/kwad/components/ad/interstitial/d/e;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mWebCardCloseListener:Lcom/kwad/sdk/core/webview/d/a/b;

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/e$6;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/e$6;-><init>(Lcom/kwad/components/ad/interstitial/d/e;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mLandPageViewListener:Lcom/kwad/components/core/page/a/a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/KSFrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    return-object p0
.end method

.method private a(Landroid/animation/Animator$AnimatorListener;)V
    .locals 11

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kA:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kA:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kA:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->removeAllListeners()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kB:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kB:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kC:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kC:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    sget-object v1, Landroid/view/View;->TRANSLATION_X:Landroid/util/Property;

    invoke-virtual {v1}, Landroid/util/Property;->getName()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x3

    new-array v3, v2, [F

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    invoke-static {v4}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v4

    iget-object v5, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v6, 0x42340000    # 45.0f

    invoke-static {v5, v6}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v5

    sub-int/2addr v4, v5

    int-to-float v4, v4

    const/4 v5, 0x0

    aput v4, v3, v5

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    invoke-static {v4}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v4

    iget-object v7, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v8, 0x41f00000    # 30.0f

    invoke-static {v7, v8}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v7

    sub-int/2addr v4, v7

    int-to-float v4, v4

    const/4 v7, 0x1

    aput v4, v3, v7

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    invoke-static {v4}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v4

    iget-object v8, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    invoke-static {v8, v6}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v6

    sub-int/2addr v4, v6

    int-to-float v4, v4

    const/4 v6, 0x2

    aput v4, v3, v6

    invoke-static {v0, v1, v3}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kA:Landroid/animation/ObjectAnimator;

    const-wide/16 v3, 0x4b0

    invoke-virtual {v0, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kA:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0, v7}, Landroid/animation/ObjectAnimator;->setRepeatMode(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kA:Landroid/animation/ObjectAnimator;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kA:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0, p1}, Landroid/animation/ObjectAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kA:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1}, Landroid/animation/ObjectAnimator;->start()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    sget-object v0, Landroid/view/View;->TRANSLATION_X:Landroid/util/Property;

    invoke-virtual {v0}, Landroid/util/Property;->getName()Ljava/lang/String;

    move-result-object v0

    new-array v8, v2, [F

    iget-object v9, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v10, 0x43a10000    # 322.0f

    invoke-static {v9, v10}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v9

    int-to-float v9, v9

    aput v9, v8, v5

    iget-object v5, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v9, 0x43fa0000    # 500.0f

    invoke-static {v5, v9}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v5

    int-to-float v5, v5

    aput v5, v8, v7

    iget-object v5, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    invoke-static {v5, v10}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v5

    int-to-float v5, v5

    aput v5, v8, v6

    invoke-static {p1, v0, v8}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kB:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kB:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1, v7}, Landroid/animation/ObjectAnimator;->setRepeatMode(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kB:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1, v1}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kB:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1}, Landroid/animation/ObjectAnimator;->start()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    sget-object v0, Landroid/view/View;->ALPHA:Landroid/util/Property;

    invoke-virtual {v0}, Landroid/util/Property;->getName()Ljava/lang/String;

    move-result-object v0

    new-array v2, v2, [F

    fill-array-data v2, :array_0

    invoke-static {p1, v0, v2}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kC:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kC:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1, v7}, Landroid/animation/ObjectAnimator;->setRepeatMode(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kC:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1, v1}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kC:Landroid/animation/ObjectAnimator;

    invoke-virtual {p1}, Landroid/animation/ObjectAnimator;->start()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->gx:Lcom/kwad/sdk/utils/bn;

    const/16 v0, 0x1a0a

    const-wide/16 v1, 0x258

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessageDelayed(IJ)Z

    return-void

    :array_0
    .array-data 4
        0x0
        0x3f800000    # 1.0f
        0x0
    .end array-data
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/e;Landroid/animation/Animator$AnimatorListener;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/interstitial/d/e;->a(Landroid/animation/Animator$AnimatorListener;)V

    return-void
.end method

.method private b(Landroid/animation/Animator$AnimatorListener;)V
    .locals 13

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kw:Landroid/animation/AnimatorSet;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kw:Landroid/animation/AnimatorSet;

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->removeAllListeners()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kw:Landroid/animation/AnimatorSet;

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->cancel()V

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    const/4 v1, 0x7

    iput v1, v0, Lcom/kwad/sdk/core/report/z$a;->asN:I

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    new-instance v3, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v3}, Lcom/kwad/sdk/core/report/j;-><init>()V

    invoke-virtual {v3, v0}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/report/z$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    const/16 v3, 0xce

    invoke-virtual {v0, v3}, Lcom/kwad/sdk/core/report/j;->ci(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    invoke-static {v1, v2, v0}, Lcom/kwad/sdk/core/report/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    new-instance v0, Landroid/animation/AnimatorSet;

    invoke-direct {v0}, Landroid/animation/AnimatorSet;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kw:Landroid/animation/AnimatorSet;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    sget-object v1, Landroid/view/View;->TRANSLATION_X:Landroid/util/Property;

    invoke-virtual {v1}, Landroid/util/Property;->getName()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x2

    new-array v3, v2, [F

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    invoke-static {v4}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v4

    int-to-float v4, v4

    const/4 v5, 0x0

    aput v4, v3, v5

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    invoke-static {v4}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v4

    iget-object v6, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v7, 0x42340000    # 45.0f

    invoke-static {v6, v7}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v6

    sub-int/2addr v4, v6

    int-to-float v4, v4

    const/4 v6, 0x1

    aput v4, v3, v6

    invoke-static {v0, v1, v3}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    const-wide/16 v3, 0x12c

    invoke-virtual {v0, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    sget-object v7, Landroid/view/View;->TRANSLATION_X:Landroid/util/Property;

    invoke-virtual {v7}, Landroid/util/Property;->getName()Ljava/lang/String;

    move-result-object v7

    new-array v8, v2, [F

    iget-object v9, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v10, 0x43fa0000    # 500.0f

    invoke-static {v9, v10}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v9

    int-to-float v9, v9

    aput v9, v8, v5

    iget-object v9, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v10, 0x43a10000    # 322.0f

    invoke-static {v9, v10}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v9

    int-to-float v9, v9

    aput v9, v8, v6

    invoke-static {v1, v7, v8}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v1

    invoke-virtual {v1, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    iget-object v7, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    sget-object v8, Landroid/view/View;->ALPHA:Landroid/util/Property;

    invoke-virtual {v8}, Landroid/util/Property;->getName()Ljava/lang/String;

    move-result-object v8

    new-array v9, v2, [F

    fill-array-data v9, :array_0

    invoke-static {v7, v8, v9}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v7

    invoke-virtual {v7, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    iget-object v8, p0, Lcom/kwad/components/ad/interstitial/d/e;->kp:Landroid/view/View;

    sget-object v9, Landroid/view/View;->TRANSLATION_X:Landroid/util/Property;

    invoke-virtual {v9}, Landroid/util/Property;->getName()Ljava/lang/String;

    move-result-object v9

    new-array v10, v2, [F

    iget-object v11, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v12, 0x430c0000    # 140.0f

    invoke-static {v11, v12}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v11

    int-to-float v11, v11

    aput v11, v10, v5

    iget-object v11, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/4 v12, 0x0

    invoke-static {v11, v12}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v11

    int-to-float v11, v11

    aput v11, v10, v6

    invoke-static {v8, v9, v10}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v8

    invoke-virtual {v8, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    iget-object v9, p0, Lcom/kwad/components/ad/interstitial/d/e;->kp:Landroid/view/View;

    sget-object v10, Landroid/view/View;->ALPHA:Landroid/util/Property;

    invoke-virtual {v10}, Landroid/util/Property;->getName()Ljava/lang/String;

    move-result-object v10

    new-array v11, v2, [F

    fill-array-data v11, :array_1

    invoke-static {v9, v10, v11}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v9

    invoke-virtual {v9, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/d/e;->kw:Landroid/animation/AnimatorSet;

    const/4 v4, 0x5

    new-array v4, v4, [Landroid/animation/Animator;

    aput-object v0, v4, v5

    aput-object v1, v4, v6

    aput-object v7, v4, v2

    const/4 v0, 0x3

    aput-object v8, v4, v0

    const/4 v0, 0x4

    aput-object v9, v4, v0

    invoke-virtual {v3, v4}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kw:Landroid/animation/AnimatorSet;

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->removeAllListeners()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kw:Landroid/animation/AnimatorSet;

    invoke-virtual {v0, p1}, Landroid/animation/AnimatorSet;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kw:Landroid/animation/AnimatorSet;

    invoke-virtual {p1}, Landroid/animation/AnimatorSet;->start()V

    return-void

    :array_0
    .array-data 4
        0x3f800000    # 1.0f
        0x0
    .end array-data

    :array_1
    .array-data 4
        0x3f800000    # 1.0f
        0x3f7d70a4    # 0.99f
    .end array-data
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/d/e;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/e;->dx()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/d/e;Landroid/animation/Animator$AnimatorListener;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/interstitial/d/e;->b(Landroid/animation/Animator$AnimatorListener;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kF:Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kn:Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;

    return-object p0
.end method

.method private dA()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kx:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kx:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ky:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ky:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kz:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kz:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    :cond_2
    return-void
.end method

.method private dB()V
    .locals 8

    const-string v0, "InterstitialHorizontalSwipe"

    const-string v1, "showGuideButton: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kq:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kx:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kx:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ky:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ky:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kz:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kz:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ku:Landroid/view/View;

    sget-object v1, Landroid/view/View;->ALPHA:Landroid/util/Property;

    invoke-virtual {v1}, Landroid/util/Property;->getName()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x7

    new-array v3, v2, [F

    fill-array-data v3, :array_0

    invoke-static {v0, v1, v3}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kx:Landroid/animation/ObjectAnimator;

    const-wide/16 v3, 0x258

    invoke-virtual {v0, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kx:Landroid/animation/ObjectAnimator;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->setRepeatMode(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kx:Landroid/animation/ObjectAnimator;

    const/4 v5, -0x1

    invoke-virtual {v0, v5}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kx:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->start()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kt:Landroid/view/View;

    sget-object v6, Landroid/view/View;->ALPHA:Landroid/util/Property;

    invoke-virtual {v6}, Landroid/util/Property;->getName()Ljava/lang/String;

    move-result-object v6

    new-array v7, v2, [F

    fill-array-data v7, :array_1

    invoke-static {v0, v6, v7}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ky:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ky:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->setRepeatMode(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ky:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0, v5}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ky:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->start()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ks:Landroid/view/View;

    sget-object v6, Landroid/view/View;->ALPHA:Landroid/util/Property;

    invoke-virtual {v6}, Landroid/util/Property;->getName()Ljava/lang/String;

    move-result-object v6

    new-array v2, v2, [F

    fill-array-data v2, :array_2

    invoke-static {v0, v6, v2}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kz:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0, v3, v4}, Landroid/animation/ObjectAnimator;->setDuration(J)Landroid/animation/ObjectAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kz:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0, v1}, Landroid/animation/ObjectAnimator;->setRepeatMode(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kz:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0, v5}, Landroid/animation/ObjectAnimator;->setRepeatCount(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kz:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->start()V

    return-void

    :array_0
    .array-data 4
        0x0
        0x3f800000    # 1.0f
        0x3f19999a    # 0.6f
        0x3e99999a    # 0.3f
        0x0
        0x3c23d70a    # 0.01f
        0x0
    .end array-data

    :array_1
    .array-data 4
        0x0
        0x3c23d70a    # 0.01f
        0x3f800000    # 1.0f
        0x3f19999a    # 0.6f
        0x3e99999a    # 0.3f
        0x3c23d70a    # 0.01f
        0x0
    .end array-data

    :array_2
    .array-data 4
        0x0
        0x3c23d70a    # 0.01f
        0x0
        0x3f800000    # 1.0f
        0x3f19999a    # 0.6f
        0x3e99999a    # 0.3f
        0x0
    .end array-data
.end method

.method private dx()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kE:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/view/View;->removeCallbacks(Ljava/lang/Runnable;)Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kv:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/e;->dz()V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/e;->dA()V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/e;->dy()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setTranslationX(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kq:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private dy()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kA:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kA:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kA:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->removeAllListeners()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kB:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kB:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kC:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kC:Landroid/animation/ObjectAnimator;

    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v2, 0x43fa0000    # 500.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Landroid/view/View;->setTranslationX(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kp:Landroid/view/View;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v2, 0x430c0000    # 140.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Landroid/view/View;->setTranslationX(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    const/high16 v1, 0x3f800000    # 1.0f

    invoke-virtual {v0, v1}, Landroid/view/View;->setAlpha(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kp:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setAlpha(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->gx:Lcom/kwad/sdk/utils/bn;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/utils/bn;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    return-void
.end method

.method private dz()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kw:Landroid/animation/AnimatorSet;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kw:Landroid/animation/AnimatorSet;

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->removeAllListeners()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kw:Landroid/animation/AnimatorSet;

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->cancel()V

    :cond_0
    return-void
.end method

.method static synthetic e(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/interstitial/d/e;)Lcom/kwad/components/core/page/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mLandingPageView:Lcom/kwad/components/core/page/c;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/interstitial/d/e;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/interstitial/d/e;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kp:Landroid/view/View;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/interstitial/d/e;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kq:Landroid/view/View;

    return-object p0
.end method

.method private initContentView()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bm(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mPageUrl:Ljava/lang/String;

    new-instance v0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    invoke-direct {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mPageUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->ar(Ljava/lang/String;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->S(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy$a$a;->oA()Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    invoke-static {v1, v0}, Lcom/kwad/components/core/page/c;->b(Landroid/content/Context;Lcom/kwad/components/core/page/AdWebViewActivityProxy$a;)Lcom/kwad/components/core/page/c;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mLandingPageView:Lcom/kwad/components/core/page/c;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kn:Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kF:Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;->a(Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mLandingPageView:Lcom/kwad/components/core/page/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mLandPageViewListener:Lcom/kwad/components/core/page/a/a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/c;->setLandPageViewListener(Lcom/kwad/components/core/page/a/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mLandingPageView:Lcom/kwad/components/core/page/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mWebCardCloseListener:Lcom/kwad/sdk/core/webview/d/a/b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/c;->setWebCardCloseListener(Lcom/kwad/sdk/core/webview/d/a/b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mLandingPageView:Lcom/kwad/components/core/page/c;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->addView(Landroid/view/View;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v2, 0x41a00000    # 20.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setRadius(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->setTranslationX(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v2, 0x43fa0000    # 500.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Landroid/view/View;->setTranslationX(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kp:Landroid/view/View;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    const/high16 v2, 0x430c0000    # 140.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Landroid/view/View;->setTranslationX(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kq:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kv:Landroid/view/View;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/e$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/e$2;-><init>(Lcom/kwad/components/ad/interstitial/d/e;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kE:Ljava/lang/Runnable;

    iget v2, p0, Lcom/kwad/components/ad/interstitial/d/e;->kD:I

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/view/View;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic j(Lcom/kwad/components/ad/interstitial/d/e;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/e;->dB()V

    return-void
.end method

.method static synthetic k(Lcom/kwad/components/ad/interstitial/d/e;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kr:Landroid/view/View;

    return-object p0
.end method


# virtual methods
.method public final a(Landroid/os/Message;)V
    .locals 3

    iget p1, p1, Landroid/os/Message;->what:I

    const/16 v0, 0x1a0a

    if-ne p1, v0, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Landroid/view/View;->getVisibility()I

    move-result p1

    if-nez p1, :cond_0

    new-instance p1, Lcom/kwad/components/ad/interstitial/d/e$7;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/interstitial/d/e$7;-><init>(Lcom/kwad/components/ad/interstitial/d/e;)V

    :goto_0
    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_1

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    invoke-virtual {p1}, Landroid/view/View;->getVisibility()I

    move-result p1

    const/4 v1, 0x4

    if-ne p1, v1, :cond_1

    new-instance p1, Lcom/kwad/components/ad/interstitial/d/e$8;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/interstitial/d/e$8;-><init>(Lcom/kwad/components/ad/interstitial/d/e;)V

    goto :goto_0

    :cond_1
    :goto_1
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/e;->gx:Lcom/kwad/sdk/utils/bn;

    const-wide/16 v1, 0x258

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessageDelayed(IJ)Z

    :cond_2
    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/e;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/interstitial/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/e;->getContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mContext:Landroid/content/Context;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->jl:Lcom/kwad/components/ad/interstitial/d/c$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/ad/interstitial/d/c$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ca(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kD:I

    invoke-static {p0}, Lcom/kwad/sdk/core/threads/a;->a(Lcom/kwad/sdk/utils/bn$a;)Lcom/kwad/sdk/utils/bn;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->gx:Lcom/kwad/sdk/utils/bn;

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/e;->initContentView()V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_land_page_root:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/d/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_swipe:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/d/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kn:Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_guide_bg:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/d/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ko:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_guide_bg_bg:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/d/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kp:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_guide_button_layout:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/d/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kq:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_guide_click_layout:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/d/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kv:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_guide_button:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/d/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kr:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_guide_button_img_1:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/d/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ks:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_guide_button_img_2:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/d/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kt:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_guide_button_img_3:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/d/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->ku:Landroid/view/View;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/KSFrameLayout;->removeAllViews()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->jl:Lcom/kwad/components/ad/interstitial/d/c$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->b(Lcom/kwad/components/ad/interstitial/d/c$a;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/e;->dx()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->gx:Lcom/kwad/sdk/utils/bn;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/utils/bn;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/e;->kn:Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/e;->kF:Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout;->b(Lcom/kwad/sdk/widget/swipe/HorizontalSwipeLayout$a;)V

    return-void
.end method
