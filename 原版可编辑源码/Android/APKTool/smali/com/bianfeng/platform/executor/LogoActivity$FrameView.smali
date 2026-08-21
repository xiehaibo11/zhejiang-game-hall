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
    .locals 1
    .param p1, "this$0"    # Lcom/bianfeng/platform/executor/LogoActivity;
    .param p2, "context"    # Landroid/content/Context;

    .line 83
    iput-object p1, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    .line 84
    invoke-direct {p0, p2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    .line 85
    iput-object p2, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->context:Landroid/content/Context;

    .line 86
    new-instance v0, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    invoke-direct {v0, p1}, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;-><init>(Lcom/bianfeng/platform/executor/LogoActivity;)V

    iput-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    .line 87
    invoke-direct {p0}, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->initAnimationDrawable()V

    .line 88
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    invoke-virtual {p0, v0}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 89
    sget-object v0, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p0, v0}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 90
    return-void
.end method

.method private getDrawableId(Ljava/lang/String;)I
    .locals 3
    .param p1, "name"    # Ljava/lang/String;

    .line 126
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->context:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->context:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "drawable"

    invoke-virtual {v0, p1, v2, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method private initAnimationDrawable()V
    .locals 7

    .line 93
    const/4 v0, 0x0

    .line 94
    .local v0, "logoCount":I
    const-string v1, "third_logo_land"

    .line 95
    .local v1, "splashName":Ljava/lang/String;
    iget-object v2, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/SystemUtil;->isScreenLandscape(Landroid/app/Activity;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 96
    const-string v1, "third_logo_port"

    .line 97
    :cond_0
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    const/4 v3, 0x5

    if-ge v2, v3, :cond_2

    .line 98
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez v2, :cond_1

    const-string v4, ""

    goto :goto_1

    :cond_1
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    :goto_1
    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v3}, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->getDrawableId(Ljava/lang/String;)I

    move-result v3

    .line 99
    .local v3, "resId":I
    if-lez v3, :cond_2

    .line 100
    iget-object v4, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->context:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    invoke-virtual {v4, v3}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v4

    .line 101
    .local v4, "drawable":Landroid/graphics/drawable/Drawable;
    iget-object v5, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    iget-object v6, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    iget v6, v6, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FRAME:I

    invoke-virtual {v5, v4, v6}, Landroid/graphics/drawable/AnimationDrawable;->addFrame(Landroid/graphics/drawable/Drawable;I)V

    .line 102
    nop

    .end local v3    # "resId":I
    .end local v4    # "drawable":Landroid/graphics/drawable/Drawable;
    add-int/lit8 v0, v0, 0x1

    .line 97
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 107
    .end local v2    # "i":I
    :cond_2
    iget-object v2, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Landroid/graphics/drawable/AnimationDrawable;->setOneShot(Z)V

    .line 108
    iget-object v2, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    iget-object v4, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    iget v4, v4, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FADE:I

    invoke-virtual {v2, v4}, Landroid/graphics/drawable/AnimationDrawable;->setEnterFadeDuration(I)V

    .line 109
    iget-object v2, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    iget-object v4, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    iget v4, v4, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FADE:I

    invoke-virtual {v2, v4}, Landroid/graphics/drawable/AnimationDrawable;->setExitFadeDuration(I)V

    .line 110
    iget-object v2, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    new-instance v4, Lcom/bianfeng/platform/executor/LogoActivity$FrameView$1;

    invoke-direct {v4, p0}, Lcom/bianfeng/platform/executor/LogoActivity$FrameView$1;-><init>(Lcom/bianfeng/platform/executor/LogoActivity$FrameView;)V

    invoke-virtual {v2, v4}, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;->setFinishListener(Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;)V

    .line 119
    if-gt v0, v3, :cond_3

    .line 120
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "splash logo image count = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->w(Ljava/lang/String;)I

    .line 121
    iget-object v2, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    iget-object v3, v2, Lcom/bianfeng/platform/executor/LogoActivity;->handler:Landroid/os/Handler;

    const/4 v4, 0x0

    iget v2, v2, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FRAME:I

    int-to-long v5, v2

    invoke-virtual {v3, v4, v5, v6}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 123
    :cond_3
    return-void
.end method


# virtual methods
.method public start()V
    .locals 1

    .line 130
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->animationDrawable:Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;

    invoke-virtual {v0}, Landroid/graphics/drawable/AnimationDrawable;->start()V

    .line 131
    return-void
.end method
