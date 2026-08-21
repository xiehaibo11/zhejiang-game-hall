.class public Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;
.super Ljava/lang/Object;
.source "SplitScreenWindow.java"


# instance fields
.field private mActivity:Landroid/app/Activity;

.field private mWindowManager:Landroid/view/WindowManager;

.field private webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

.field private wmParams:Landroid/view/WindowManager$LayoutParams;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->mActivity:Landroid/app/Activity;

    .line 23
    new-instance v0, Landroid/view/WindowManager$LayoutParams;

    invoke-direct {v0}, Landroid/view/WindowManager$LayoutParams;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    const-string v0, "window"

    .line 24
    invoke-virtual {p1, v0}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/WindowManager;

    iput-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->mWindowManager:Landroid/view/WindowManager;

    .line 25
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFullScreen()Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->hideBar(Landroid/app/Activity;)V

    return-void
.end method


# virtual methods
.method protected remove()V
    .locals 3

    .line 61
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_0

    .line 62
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->mWindowManager:Landroid/view/WindowManager;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    if-eqz v0, :cond_0

    .line 63
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    const/16 v1, 0x8

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->flags:I

    .line 65
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->mWindowManager:Landroid/view/WindowManager;

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-virtual {v1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->getFloatLayout()Landroid/widget/RelativeLayout;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    invoke-interface {v0, v1, v2}, Landroid/view/WindowManager;->updateViewLayout(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 67
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 70
    :goto_0
    :try_start_1
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->mWindowManager:Landroid/view/WindowManager;

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-virtual {v1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->getFloatLayout()Landroid/widget/RelativeLayout;

    move-result-object v1

    invoke-interface {v0, v1}, Landroid/view/WindowManager;->removeView(Landroid/view/View;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 72
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_1
    return-void
.end method

.method public showFenping(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)V
    .locals 2

    .line 96
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    if-eqz v0, :cond_0

    .line 98
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->mWindowManager:Landroid/view/WindowManager;

    invoke-virtual {p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->getFloatLayout()Landroid/widget/RelativeLayout;

    move-result-object v1

    invoke-interface {v0, v1}, Landroid/view/WindowManager;->removeView(Landroid/view/View;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 100
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 103
    :cond_0
    :goto_0
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    .line 104
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getNotchScreen()Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->getNotSize()I

    move-result v0

    iput v0, p1, Landroid/view/WindowManager$LayoutParams;->x:I

    .line 105
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getYmnDatafun()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    move-result-object p1

    sget v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_h5_finping:I

    invoke-virtual {p1, v0}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onClickWithH5Fenping(I)V

    .line 106
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getReflexCall()Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;

    move-result-object p1

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getClassNameSet()Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->getLoginCallback()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SplitScreen"

    invoke-virtual {p1, v0, v1}, Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;->onCallWithHashmap(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    .line 107
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object p1

    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->mActivity:Landroid/app/Activity;

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/ConfigurationUtils;->isLand(Landroid/app/Activity;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 108
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/utilslib/ConfigurationUtils;->getWidth()I

    move-result p1

    div-int/lit8 p1, p1, 0x4

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getNotchScreen()Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->getNotSize()I

    move-result v0

    sub-int/2addr p1, v0

    .line 109
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/ConfigurationUtils;->getHeight()I

    move-result v0

    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->updateView(II)V

    goto :goto_1

    .line 111
    :cond_1
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/utilslib/ConfigurationUtils;->getWidth()I

    move-result p1

    div-int/lit8 p1, p1, 0x4

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getNotchScreen()Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->getNotSize()I

    move-result v0

    sub-int/2addr p1, v0

    .line 112
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/ConfigurationUtils;->getWidth()I

    move-result v0

    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->updateView(II)V

    :goto_1
    return-void
.end method

.method protected showQuanping(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)V
    .locals 2

    .line 80
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    if-eqz v0, :cond_0

    .line 82
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->mWindowManager:Landroid/view/WindowManager;

    invoke-virtual {p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->getFloatLayout()Landroid/widget/RelativeLayout;

    move-result-object v1

    invoke-interface {v0, v1}, Landroid/view/WindowManager;->removeView(Landroid/view/View;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 84
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 87
    :cond_0
    :goto_0
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    .line 88
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    const/4 v0, 0x0

    iput v0, p1, Landroid/view/WindowManager$LayoutParams;->x:I

    .line 89
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getYmnDatafun()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    move-result-object p1

    sget v0, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_h5_quanping:I

    invoke-virtual {p1, v0}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onClickWithH5Fenping(I)V

    .line 90
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getReflexCall()Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;

    move-result-object p1

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getClassNameSet()Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->getLoginCallback()Ljava/lang/String;

    move-result-object v0

    const-string v1, "FullScreen"

    invoke-virtual {p1, v0, v1}, Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;->onCallWithHashmap(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    .line 91
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/utilslib/ConfigurationUtils;->getWidth()I

    move-result p1

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/ConfigurationUtils;->getHeight()I

    move-result v0

    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->updateView(II)V

    return-void
.end method

.method protected updateView(II)V
    .locals 2

    .line 29
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFullScreen()Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->hideBar(Landroid/app/Activity;)V

    .line 30
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    iput p1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 31
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    iput p2, p1, Landroid/view/WindowManager$LayoutParams;->height:I

    .line 32
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    const/16 p2, 0x43e9

    iput p2, p1, Landroid/view/WindowManager$LayoutParams;->flags:I

    .line 35
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    const/16 p2, 0x3e8

    iput p2, p1, Landroid/view/WindowManager$LayoutParams;->type:I

    .line 36
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    const/16 p2, 0x33

    iput p2, p1, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 38
    :try_start_0
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->mWindowManager:Landroid/view/WindowManager;

    iget-object p2, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-virtual {p2}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->getFloatLayout()Landroid/widget/RelativeLayout;

    move-result-object p2

    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    invoke-interface {p1, p2, v0}, Landroid/view/WindowManager;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 40
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected updateViewY(I)V
    .locals 2

    .line 45
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    if-nez v0, :cond_0

    .line 46
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string v0, "updateViewY wmParams is null"

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    return-void

    .line 49
    :cond_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getNotchScreen()Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->getNotSize()I

    move-result v1

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->x:I

    .line 50
    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    iput p1, v0, Landroid/view/WindowManager$LayoutParams;->y:I

    .line 51
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    const/16 v0, 0x53

    iput v0, p1, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 53
    :try_start_0
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->mWindowManager:Landroid/view/WindowManager;

    iget-object v0, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->webGroup:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->getFloatLayout()Landroid/widget/RelativeLayout;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/splitscreenwindow/ui/SplitScreenWindow;->wmParams:Landroid/view/WindowManager$LayoutParams;

    invoke-interface {p1, v0, v1}, Landroid/view/WindowManager;->updateViewLayout(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 55
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
