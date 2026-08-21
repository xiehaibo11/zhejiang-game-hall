.class public final Lcom/kwad/components/ad/reward/presenter/n;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;


# static fields
.field private static sv:J = 0x12cL


# instance fields
.field private eZ:Landroid/widget/ImageView;

.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

.field private sA:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field private sB:Lcom/kwad/components/ad/reward/presenter/q;

.field private sC:Z

.field private sw:Landroid/view/ViewGroup;

.field private sx:Landroid/widget/TextView;

.field private sy:Z

.field private sz:F


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Lcom/kwad/components/ad/reward/presenter/q;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sC:Z

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/n$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/n$1;-><init>(Lcom/kwad/components/ad/reward/presenter/n;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/n;->sB:Lcom/kwad/components/ad/reward/presenter/q;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/n;)Landroid/animation/Animator;
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/n;->hG()Landroid/animation/Animator;

    move-result-object p0

    return-object p0
.end method

.method private a(Landroid/view/ViewGroup$LayoutParams;)V
    .locals 4

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    instance-of v1, v0, Landroid/view/ViewGroup$MarginLayoutParams;

    if-eqz v1, :cond_5

    check-cast v0, Landroid/view/ViewGroup$MarginLayoutParams;

    iget v1, p1, Landroid/view/ViewGroup$LayoutParams;->height:I

    const/4 v2, -0x1

    if-ne v1, v2, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    invoke-virtual {p1}, Landroid/view/ViewGroup;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    sget v1, Lcom/kwad/sdk/R$dimen;->ksad_reward_playable_pre_tips_margin_bottom_without_actionbar:I

    invoke-virtual {p1, v1}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result p1

    :goto_0
    iput p1, v0, Landroid/view/ViewGroup$MarginLayoutParams;->bottomMargin:I

    goto :goto_1

    :cond_1
    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$dimen;->ksad_reward_playable_pre_tips_margin_bottom:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v1

    instance-of v2, p1, Landroid/view/ViewGroup$MarginLayoutParams;

    if-eqz v2, :cond_4

    check-cast p1, Landroid/view/ViewGroup$MarginLayoutParams;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/n;->sA:Ljava/lang/ref/WeakReference;

    if-eqz v3, :cond_2

    invoke-virtual {v3}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    :cond_2
    iget v3, p1, Landroid/view/ViewGroup$MarginLayoutParams;->height:I

    if-gtz v3, :cond_3

    if-eqz v2, :cond_3

    invoke-virtual {v2}, Landroid/view/View;->getHeight()I

    move-result v3

    :cond_3
    iget p1, p1, Landroid/view/ViewGroup$MarginLayoutParams;->bottomMargin:I

    add-int/2addr v3, p1

    add-int/2addr v3, v1

    iput v3, v0, Landroid/view/ViewGroup$MarginLayoutParams;->bottomMargin:I

    goto :goto_1

    :cond_4
    iget p1, p1, Landroid/view/ViewGroup$LayoutParams;->height:I

    add-int/2addr p1, v1

    goto :goto_0

    :goto_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_5
    return-void
.end method

.method private declared-synchronized hF()V
    .locals 5

    monitor-enter p0

    :try_start_0
    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sC:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x0

    new-instance v2, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v2}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v3, 0xc0

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/report/j;->ci(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/n;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v3}, Lcom/kwad/components/ad/reward/l/d;->getPlayDuration()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Lcom/kwad/sdk/core/report/j;->af(J)Lcom/kwad/sdk/core/report/j;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/report/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sC:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private hG()Landroid/animation/Animator;
    .locals 9

    new-instance v0, Landroid/animation/AnimatorSet;

    invoke-direct {v0}, Landroid/animation/AnimatorSet;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/n;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$dimen;->ksad_reward_playable_pre_tips_transx:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDimension(I)F

    move-result v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    const/4 v3, 0x1

    new-array v4, v3, [F

    const/4 v5, 0x0

    aput v1, v4, v5

    const-string v1, "translationX"

    invoke-static {v2, v1, v4}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/n;->eZ:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v2

    instance-of v4, v2, Landroid/graphics/drawable/ColorDrawable;

    const/4 v6, 0x2

    if-eqz v4, :cond_0

    check-cast v2, Landroid/graphics/drawable/ColorDrawable;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/n;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    sget v7, Lcom/kwad/sdk/R$color;->ksad_playable_pre_tips_icon_bg:I

    invoke-virtual {v4, v7}, Landroid/content/res/Resources;->getColor(I)I

    move-result v4

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/n;->getContext()Landroid/content/Context;

    move-result-object v7

    invoke-virtual {v7}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v7

    sget v8, Lcom/kwad/sdk/R$color;->ksad_reward_main_color:I

    invoke-virtual {v7, v8}, Landroid/content/res/Resources;->getColor(I)I

    move-result v7

    new-array v8, v6, [I

    aput v4, v8, v5

    aput v7, v8, v3

    invoke-static {v8}, Lcom/kwad/sdk/widget/a;->ofArgb([I)Landroid/animation/ValueAnimator;

    move-result-object v4

    new-instance v7, Lcom/kwad/components/ad/reward/presenter/n$3;

    invoke-direct {v7, p0, v2}, Lcom/kwad/components/ad/reward/presenter/n$3;-><init>(Lcom/kwad/components/ad/reward/presenter/n;Landroid/graphics/drawable/ColorDrawable;)V

    invoke-virtual {v4, v7}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    goto :goto_0

    :cond_0
    const/4 v4, 0x0

    :goto_0
    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/n;->sx:Landroid/widget/TextView;

    new-array v7, v6, [F

    fill-array-data v7, :array_0

    const-string v8, "alpha"

    invoke-static {v2, v8, v7}, Landroid/animation/ObjectAnimator;->ofFloat(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;

    move-result-object v2

    const/4 v7, 0x3

    new-array v7, v7, [Landroid/animation/Animator;

    aput-object v1, v7, v5

    aput-object v4, v7, v3

    aput-object v2, v7, v6

    invoke-virtual {v0, v7}, Landroid/animation/AnimatorSet;->playTogether([Landroid/animation/Animator;)V

    sget-wide v1, Lcom/kwad/components/ad/reward/presenter/n;->sv:J

    invoke-virtual {v0, v1, v2}, Landroid/animation/AnimatorSet;->setDuration(J)Landroid/animation/AnimatorSet;

    return-object v0

    nop

    :array_0
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data
.end method

.method private initView()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    if-nez v0, :cond_0

    return-void

    :cond_0
    sget v1, Lcom/kwad/sdk/R$id;->ksad_playabel_pre_tips_icon:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->eZ:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/n;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$color;->ksad_playable_pre_tips_icon_bg:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getColor(I)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setBackgroundColor(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_playabel_pre_tips_text:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sx:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method


# virtual methods
.method public final J(Z)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getVisibility()I

    move-result v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/n;->hF()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sA:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sA:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/n;->a(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/n$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/n$2;-><init>(Lcom/kwad/components/ad/reward/presenter/n;)V

    const-wide/16 v1, 0x7d0

    invoke-virtual {p1, v0, v1, v2}, Landroid/view/ViewGroup;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_3
    return-void
.end method

.method public final a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;Landroid/view/View;)V
    .locals 2

    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sA:Ljava/lang/ref/WeakReference;

    invoke-virtual {p2}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onActionBarShown: type: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, ", params.height: "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Landroid/view/ViewGroup$LayoutParams;->height:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ", params.width: "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Landroid/view/ViewGroup$LayoutParams;->width:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "RewardPlayablePreTips"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0, p2}, Lcom/kwad/components/ad/reward/presenter/n;->a(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    if-nez v0, :cond_1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_playable_pre_tips_stub:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/n;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewStub;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/ViewStub;->inflate()Landroid/view/View;

    move-result-object v0

    goto :goto_0

    :cond_0
    sget v0, Lcom/kwad/sdk/R$id;->ksad_playable_pre_tips_root:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/n;->findViewById(I)Landroid/view/View;

    move-result-object v0

    :goto_0
    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/n;->initView()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->fV()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$dimen;->ksad_reward_js_actionbar_height:I

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDimensionPixelSize(I)I

    move-result v0

    new-instance v1, Landroid/view/ViewGroup$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v0}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-direct {p0, v1}, Lcom/kwad/components/ad/reward/presenter/n;->a(Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V

    :goto_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/n;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    return-void
.end method

.method public final hide()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 3

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/n;->sw:Landroid/view/ViewGroup;

    if-eqz p1, :cond_0

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/b;->fp()Lcom/kwad/components/ad/reward/b;

    move-result-object p1

    sget-object v0, Lcom/kwad/components/core/playable/PlayableSource;->PENDANT_CLICK_NOT_AUTO:Lcom/kwad/components/core/playable/PlayableSource;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/b;->a(Lcom/kwad/components/core/playable/PlayableSource;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/n;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v1, 0xc0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->ci(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/n;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/l/d;->getPlayDuration()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/j;->af(J)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gI()F

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sz:F

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gK()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gJ()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->sy:Z

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/n;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/n;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->b(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V

    return-void
.end method
