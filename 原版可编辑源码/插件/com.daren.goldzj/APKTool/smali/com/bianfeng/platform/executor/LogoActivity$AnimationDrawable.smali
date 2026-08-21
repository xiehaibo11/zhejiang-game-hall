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

    .line 1
    iput-object p1, p0, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    invoke-direct {p0}, Landroid/graphics/drawable/AnimationDrawable;-><init>()V

    return-void
.end method


# virtual methods
.method public getFinishListener()Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;->finishListener:Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;

    return-object v0
.end method

.method public selectDrawable(I)Z
    .locals 3

    .line 1
    invoke-super {p0, p1}, Landroid/graphics/drawable/AnimationDrawable;->selectDrawable(I)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 2
    iget-object v1, p0, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;->finishListener:Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;

    if-eqz v1, :cond_1

    .line 3
    invoke-virtual {p0}, Landroid/graphics/drawable/AnimationDrawable;->getNumberOfFrames()I

    move-result v1

    const/4 v2, 0x1

    sub-int/2addr v1, v2

    if-ne p1, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    .line 4
    :goto_0
    iget-object v1, p0, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;->finishListener:Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;

    invoke-interface {v1, p1, v2}, Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;->onAnimationChanged(IZ)V

    :cond_1
    return v0
.end method

.method setFinishListener(Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;->finishListener:Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;

    return-void
.end method
