.class public Lcom/bianfeng/platform/executor/LogoActivity$FrameView;
.super Landroid/widget/ImageView;
.source "LogoActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/platform/executor/LogoActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "FrameView"
.end annotation


# instance fields
.field animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

.field context:Landroid/content/Context;

.field final synthetic this$0:Lcom/bianfeng/platform/executor/LogoActivity;


# direct methods
.method public constructor <init>(Lcom/bianfeng/platform/executor/LogoActivity;Landroid/content/Context;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    .line 2
    invoke-direct {p0, p2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 3
    iput-object p2, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->context:Landroid/content/Context;

    .line 4
    new-instance p2, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    invoke-direct {p2, p1}, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;-><init>(Lcom/bianfeng/platform/executor/LogoActivity;)V

    iput-object p2, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    .line 5
    invoke-direct {p0}, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->initAnimationDrawable()V

    .line 6
    iget-object p1, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    invoke-virtual {p0, p1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 7
    sget-object p1, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p0, p1}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    return-void
.end method

.method private getDrawableId(Ljava/lang/String;)I
    .locals 3

    .line 1
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->context:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->context:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    const-string v1, "drawable"

    const-string v2, "com.daren.goldzj"

    invoke-virtual {v0, p1, v1, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method private initAnimationDrawable()V
    .locals 7

    .line 1
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/SystemUtil;->isScreenLandscape(Landroid/app/Activity;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "third_logo_port"

    goto :goto_0

    :cond_0
    const-string v0, "third_logo_land"

    :goto_0
    const/4 v1, 0x0

    const/4 v2, 0x0

    const/4 v3, 0x0

    :goto_1
    const/4 v4, 0x5

    if-ge v2, v4, :cond_2

    .line 4
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez v2, :cond_1

    const-string v5, ""

    goto :goto_2

    :cond_1
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    :goto_2
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {p0, v4}, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->getDrawableId(Ljava/lang/String;)I

    move-result v4

    if-lez v4, :cond_2

    .line 6
    iget-object v5, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->context:Landroid/content/Context;

    invoke-virtual {v5}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    invoke-virtual {v5, v4}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v4

    .line 7
    iget-object v5, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    iget-object v6, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    iget v6, v6, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FRAME:I

    invoke-virtual {v5, v4, v6}, Landroid/graphics/drawable/AnimationDrawable;->addFrame(Landroid/graphics/drawable/Drawable;I)V

    add-int/lit8 v3, v3, 0x1

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 13
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Landroid/graphics/drawable/AnimationDrawable;->setOneShot(Z)V

    .line 14
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    iget-object v4, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    iget v4, v4, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FADE:I

    invoke-virtual {v0, v4}, Landroid/graphics/drawable/AnimationDrawable;->setEnterFadeDuration(I)V

    .line 15
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    iget-object v4, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    iget v4, v4, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FADE:I

    invoke-virtual {v0, v4}, Landroid/graphics/drawable/AnimationDrawable;->setExitFadeDuration(I)V

    .line 16
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    new-instance v4, Lcom/bianfeng/platform/executor/LogoActivity$FrameView$1;

    invoke-direct {v4, p0}, Lcom/bianfeng/platform/executor/LogoActivity$FrameView$1;-><init>(Lcom/bianfeng/platform/executor/LogoActivity$FrameView;)V

    invoke-virtual {v0, v4}, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;->setFinishListener(Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;)V

    if-gt v3, v2, :cond_3

    .line 26
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "splash logo image count = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->w(Ljava/lang/String;)I

    .line 27
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    iget-object v2, v0, Lcom/bianfeng/platform/executor/LogoActivity;->handler:Landroid/os/Handler;

    iget v0, v0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FRAME:I

    int-to-long v3, v0

    invoke-virtual {v2, v1, v3, v4}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    :cond_3
    return-void
.end method


# virtual methods
.method public start()V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    invoke-virtual {v0}, Landroid/graphics/drawable/AnimationDrawable;->start()V

    return-void
.end method
