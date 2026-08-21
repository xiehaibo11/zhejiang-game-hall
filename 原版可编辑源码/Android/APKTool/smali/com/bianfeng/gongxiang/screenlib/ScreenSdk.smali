.class public Lcom/bianfeng/gongxiang/screenlib/ScreenSdk;
.super Ljava/lang/Object;
.source "ScreenSdk.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getHeight()I
    .locals 1

    .line 16
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->getInstance()Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->getBarSize()I

    move-result v0

    return v0
.end method

.method public static getVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "1.0.1"

    return-object v0
.end method

.method public static hideSplashView(Landroid/app/Activity;)V
    .locals 1

    .line 23
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->getInstance()Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->removeView(Landroid/app/Activity;)V

    return-void
.end method

.method public static onResume(Landroid/app/Activity;)V
    .locals 1

    .line 12
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->getInstance()Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->hideBar(Landroid/app/Activity;)V

    return-void
.end method

.method public static setFullScreen(Landroid/app/Activity;)V
    .locals 1

    .line 8
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->getInstance()Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/gongxiang/screenlib/FullScreenUtils;->setFullScreen(Landroid/app/Activity;)V

    return-void
.end method

.method public static showSplashView(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 20
    invoke-static {}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->getInstance()Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/bianfeng/gongxiang/screenlib/SplashViewUtils;->showSplashView(Landroid/app/Activity;Ljava/lang/String;)V

    return-void
.end method
