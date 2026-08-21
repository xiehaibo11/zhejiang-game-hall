.class public Lcom/bianfeng/platform/executor/LogoActivity;
.super Landroid/app/Activity;
.source "LogoActivity.java"

# interfaces
.implements Landroid/os/Handler$Callback;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/platform/executor/LogoActivity$AnimationDrawable;,
        Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;,
        Lcom/bianfeng/platform/executor/LogoActivity$FrameView;
    }
.end annotation


# instance fields
.field DURATION_FADE:I

.field DURATION_FRAME:I

.field handler:Landroid/os/Handler;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/16 v0, 0x3e8

    .line 3
    iput v0, p0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FRAME:I

    const/16 v0, 0xc8

    .line 4
    iput v0, p0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FADE:I

    return-void
.end method

.method private getDuration(Ljava/lang/String;I)I
    .locals 1

    .line 1
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 2
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return p2

    .line 4
    :cond_0
    :try_start_0
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 6
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return p2
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)Z
    .locals 0

    .line 1
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/platform/executor/LogoActivity;->startMainActivity()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 1
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 2
    new-instance p1, Landroid/os/Handler;

    invoke-direct {p1, p0}, Landroid/os/Handler;-><init>(Landroid/os/Handler$Callback;)V

    iput-object p1, p0, Lcom/bianfeng/platform/executor/LogoActivity;->handler:Landroid/os/Handler;

    .line 5
    iget p1, p0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FRAME:I

    const-string v0, "ymnLogoFrameDuration"

    invoke-direct {p0, v0, p1}, Lcom/bianfeng/platform/executor/LogoActivity;->getDuration(Ljava/lang/String;I)I

    move-result p1

    iput p1, p0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FRAME:I

    .line 6
    iget p1, p0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FADE:I

    const-string v0, "ymnLogoFadeDuration"

    invoke-direct {p0, v0, p1}, Lcom/bianfeng/platform/executor/LogoActivity;->getDuration(Ljava/lang/String;I)I

    move-result p1

    iput p1, p0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FADE:I

    .line 8
    new-instance p1, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;

    invoke-direct {p1, p0, p0}, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;-><init>(Lcom/bianfeng/platform/executor/LogoActivity;Landroid/content/Context;)V

    .line 9
    invoke-virtual {p0, p1}, Landroid/app/Activity;->setContentView(Landroid/view/View;)V

    .line 10
    invoke-virtual {p1}, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->start()V

    return-void
.end method

.method public startMainActivity()V
    .locals 2

    .line 1
    invoke-virtual {p0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 2
    :cond_0
    new-instance v0, Landroid/content/ComponentName;

    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getMainActivity()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Landroid/content/ComponentName;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 3
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 4
    invoke-virtual {v1, v0}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 5
    invoke-virtual {p0, v1}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    .line 6
    invoke-virtual {p0}, Landroid/app/Activity;->finish()V

    return-void
.end method
