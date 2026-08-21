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

    .line 28
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 30
    const/16 v0, 0x3e8

    iput v0, p0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FRAME:I

    .line 31
    const/16 v0, 0xc8

    iput v0, p0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FADE:I

    return-void
.end method

.method private getDuration(Ljava/lang/String;I)I
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "defVal"    # I

    .line 49
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/feature/YmnProperties;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 50
    .local v0, "value":Ljava/lang/String;
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return p2

    .line 52
    :cond_0
    :try_start_0
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    .line 53
    :catch_0
    move-exception v1

    .line 54
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 55
    return p2
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)Z
    .locals 1
    .param p1, "msg"    # Landroid/os/Message;

    .line 62
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/platform/executor/LogoActivity;->startMainActivity()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 65
    goto :goto_0

    .line 63
    :catch_0
    move-exception v0

    .line 64
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 66
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    const/4 v0, 0x0

    return v0
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 2
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 36
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 37
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0, p0}, Landroid/os/Handler;-><init>(Landroid/os/Handler$Callback;)V

    iput-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity;->handler:Landroid/os/Handler;

    .line 40
    iget v0, p0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FRAME:I

    const-string v1, "ymnLogoFrameDuration"

    invoke-direct {p0, v1, v0}, Lcom/bianfeng/platform/executor/LogoActivity;->getDuration(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FRAME:I

    .line 41
    iget v0, p0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FADE:I

    const-string v1, "ymnLogoFadeDuration"

    invoke-direct {p0, v1, v0}, Lcom/bianfeng/platform/executor/LogoActivity;->getDuration(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FADE:I

    .line 43
    new-instance v0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;

    invoke-direct {v0, p0, p0}, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;-><init>(Lcom/bianfeng/platform/executor/LogoActivity;Landroid/content/Context;)V

    .line 44
    .local v0, "view":Lcom/bianfeng/platform/executor/LogoActivity$FrameView;
    invoke-virtual {p0, v0}, Landroid/app/Activity;->setContentView(Landroid/view/View;)V

    .line 45
    invoke-virtual {v0}, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->start()V

    .line 46
    return-void
.end method

.method public startMainActivity()V
    .locals 2

    .line 70
    invoke-virtual {p0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 71
    :cond_0
    new-instance v0, Landroid/content/ComponentName;

    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getMainActivity()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Landroid/content/ComponentName;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 72
    .local v0, "component":Landroid/content/ComponentName;
    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1}, Landroid/content/Intent;-><init>()V

    .line 73
    .local v1, "intent":Landroid/content/Intent;
    invoke-virtual {v1, v0}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 74
    invoke-virtual {p0, v1}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V

    .line 75
    invoke-virtual {p0}, Landroid/app/Activity;->finish()V

    .line 76
    return-void
.end method
