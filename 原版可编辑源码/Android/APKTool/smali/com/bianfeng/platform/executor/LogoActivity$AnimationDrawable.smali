.class Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;
.super Landroid/graphics/drawable/AnimationDrawable;
.source "LogoActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/platform/executor/LogoActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "AnimationDrawable"
.end annotation


# instance fields
.field private finishListener:Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;

.field final synthetic this$0:Lcom/bianfeng/platform/executor/LogoActivity;


# direct methods
.method constructor <init>(Lcom/bianfeng/platform/executor/LogoActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/platform/executor/LogoActivity;

    .line 140
    iput-object p1, p0, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    invoke-direct {p0}, Landroid/graphics/drawable/AnimationDrawable;-><init>()V

    return-void
.end method


# virtual methods
.method public getFinishListener()Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;
    .locals 1

    .line 145
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;->finishListener:Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;

    return-object v0
.end method

.method public selectDrawable(I)Z
    .locals 3
    .param p1, "index"    # I

    .line 154
    invoke-super {p0, p1}, Landroid/graphics/drawable/AnimationDrawable;->selectDrawable(I)Z

    move-result v0

    .line 155
    .local v0, "drawableChanged":Z
    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;->finishListener:Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;

    if-eqz v1, :cond_1

    .line 156
    invoke-virtual {p0}, Landroid/graphics/drawable/AnimationDrawable;->getNumberOfFrames()I

    move-result v1

    const/4 v2, 0x1

    sub-int/2addr v1, v2

    if-ne p1, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    move v1, v2

    .line 157
    .local v1, "animationFinished":Z
    iget-object v2, p0, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;->finishListener:Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;

    invoke-interface {v2, p1, v1}, Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;->onAnimationChanged(IZ)V

    .line 159
    .end local v1    # "animationFinished":Z
    :cond_1
    return v0
.end method

.method setFinishListener(Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;)V
    .locals 0
    .param p1, "finishListener"    # Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;

    .line 149
    iput-object p1, p0, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;->finishListener:Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;

    .line 150
    return-void
.end method
