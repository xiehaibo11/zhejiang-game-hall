.class public Lcom/mbridge/msdk/splash/view/MBSplashView;
.super Landroid/widget/RelativeLayout;
.source "MBSplashView.java"


# static fields
.field private static a:Ljava/lang/String; = "MBSplashView"


# instance fields
.field private b:I

.field private c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

.field private d:Landroid/view/ViewGroup;

.field private e:Landroid/view/View;

.field private f:Landroid/view/View;

.field private g:I

.field private h:Z

.field private i:Z

.field private j:Landroid/view/ViewGroup;

.field private k:Z

.field private l:Landroid/view/View;

.field private m:Z

.field private n:Z

.field private o:Landroid/widget/RelativeLayout$LayoutParams;

.field private p:Lcom/mbridge/msdk/splash/js/b;

.field private q:Lcom/mbridge/msdk/dycreator/listener/DyCountDownListener;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 121
    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 125
    invoke-direct {p0, p1, p2, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 129
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 130
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->b()V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/view/MBSplashView;)Lcom/mbridge/msdk/splash/view/MBSplashWebview;
    .locals 0

    .line 30
    iget-object p0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    return-object p0
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 30
    sget-object v0, Lcom/mbridge/msdk/splash/view/MBSplashView;->a:Ljava/lang/String;

    return-object v0
.end method

.method private b()V
    .locals 1

    const/4 v0, 0x0

    .line 148
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setBackgroundColor(I)V

    .line 149
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iget v0, v0, Landroid/content/res/Configuration;->orientation:I

    iput v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->b:I

    return-void
.end method

.method private c()V
    .locals 2

    .line 338
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    if-eqz v0, :cond_0

    .line 339
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->p:Lcom/mbridge/msdk/splash/js/b;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->setObject(Ljava/lang/Object;)V

    .line 340
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    new-instance v1, Lcom/mbridge/msdk/splash/view/MBSplashView$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/splash/view/MBSplashView$1;-><init>(Lcom/mbridge/msdk/splash/view/MBSplashView;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public static transInfoForMraid(Landroid/webkit/WebView;IIII)V
    .locals 17

    move-object/from16 v0, p0

    const-string v1, "true"

    .line 383
    sget-object v2, Lcom/mbridge/msdk/splash/view/MBSplashView;->a:Ljava/lang/String;

    const-string v7, "transInfoForMraid"

    invoke-static {v2, v7}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 386
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    .line 387
    invoke-virtual {v2}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v2

    iget v2, v2, Landroid/content/res/Configuration;->orientation:I

    .line 388
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "orientation"

    const/4 v5, 0x2

    if-ne v2, v5, :cond_0

    const-string v2, "landscape"

    goto :goto_0

    :cond_0
    const/4 v5, 0x1

    if-ne v2, v5, :cond_1

    const-string v2, "portrait"

    goto :goto_0

    :cond_1
    const-string v2, "undefined"

    .line 390
    :goto_0
    invoke-virtual {v3, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "locked"

    .line 392
    invoke-virtual {v3, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 394
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->x(Landroid/content/Context;)I

    move-result v2

    int-to-float v8, v2

    .line 395
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->y(Landroid/content/Context;)I

    move-result v2

    int-to-float v9, v2

    .line 397
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->z(Landroid/content/Context;)Ljava/util/HashMap;

    move-result-object v2

    const-string v4, "width"

    .line 398
    invoke-virtual {v2, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v10

    const-string v4, "height"

    .line 399
    invoke-virtual {v2, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v11

    .line 401
    new-instance v12, Ljava/util/HashMap;

    invoke-direct {v12}, Ljava/util/HashMap;-><init>()V

    const-string v2, "placementType"

    const-string v4, "Interstitial"

    .line 402
    invoke-virtual {v12, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "state"

    const-string v4, "default"

    .line 403
    invoke-virtual {v12, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "viewable"

    .line 404
    invoke-virtual {v12, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "currentAppOrientation"

    .line 405
    invoke-virtual {v12, v1, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 407
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    move/from16 v2, p1

    int-to-float v13, v2

    move/from16 v2, p2

    int-to-float v14, v2

    move/from16 v2, p3

    int-to-float v15, v2

    move/from16 v2, p4

    int-to-float v6, v2

    move-object/from16 v2, p0

    move v3, v13

    move v4, v14

    move v5, v15

    move/from16 v16, v6

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;FFFF)V

    .line 408
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    move-object/from16 v2, p0

    move v3, v13

    move v4, v14

    move v5, v15

    move/from16 v6, v16

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;FFFF)V

    .line 409
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    invoke-virtual {v1, v0, v8, v9}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->b(Landroid/webkit/WebView;FF)V

    .line 410
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    int-to-float v2, v10

    int-to-float v3, v11

    invoke-virtual {v1, v0, v2, v3}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->c(Landroid/webkit/WebView;FF)V

    .line 411
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    invoke-virtual {v1, v0, v12}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;Ljava/util/Map;)V

    .line 412
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 414
    sget-object v1, Lcom/mbridge/msdk/splash/view/MBSplashView;->a:Ljava/lang/String;

    invoke-static {v1, v7, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method


# virtual methods
.method public changeCloseBtnState(I)V
    .locals 2

    .line 272
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->e:Landroid/view/View;

    if-eqz v0, :cond_1

    const/4 v1, 0x2

    if-ne p1, v1, :cond_0

    const/16 p1, 0x8

    .line 274
    invoke-virtual {v0, p1}, Landroid/view/View;->setVisibility(I)V

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 276
    invoke-virtual {v0, p1}, Landroid/view/View;->setVisibility(I)V

    :cond_1
    :goto_0
    return-void
.end method

.method public clearResState()V
    .locals 1

    const/4 v0, 0x0

    .line 310
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->k:Z

    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->i:Z

    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->h:Z

    return-void
.end method

.method public destroy()V
    .locals 3

    .line 437
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->removeAllViews()V

    .line 438
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->j:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    .line 439
    invoke-virtual {v0}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 442
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->isDestoryed()Z

    move-result v0

    if-nez v0, :cond_1

    .line 443
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->release()V

    .line 444
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    const-string v1, "onSystemDestory"

    const-string v2, ""

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/splash/js/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public getCloseView()Landroid/view/View;
    .locals 1

    .line 282
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->e:Landroid/view/View;

    return-object v0
.end method

.method public getDevContainer()Landroid/view/ViewGroup;
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->j:Landroid/view/ViewGroup;

    return-object v0
.end method

.method public getIconVg()Landroid/view/View;
    .locals 1

    .line 293
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->f:Landroid/view/View;

    return-object v0
.end method

.method public getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->p:Lcom/mbridge/msdk/splash/js/b;

    return-object v0
.end method

.method public getSplashWebview()Lcom/mbridge/msdk/splash/view/MBSplashWebview;
    .locals 1

    .line 258
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    return-object v0
.end method

.method public isAttach()Z
    .locals 1

    .line 98
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->n:Z

    return v0
.end method

.method public isDynamicView()Z
    .locals 1

    .line 90
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->m:Z

    return v0
.end method

.method public isH5Ready()Z
    .locals 1

    .line 70
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->h:Z

    return v0
.end method

.method public isImageReady()Z
    .locals 1

    .line 78
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->k:Z

    return v0
.end method

.method public isVideoReady()Z
    .locals 1

    .line 74
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->i:Z

    return v0
.end method

.method protected onAttachedToWindow()V
    .locals 1

    .line 142
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    const/4 v0, 0x1

    .line 144
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->n:Z

    return-void
.end method

.method protected onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 135
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 137
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->b()V

    return-void
.end method

.method public onPause()V
    .locals 2

    .line 425
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    if-eqz v1, :cond_0

    .line 426
    check-cast v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->setIsPause(Z)V

    :cond_0
    return-void
.end method

.method public onResume()V
    .locals 2

    .line 419
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    if-eqz v1, :cond_0

    .line 420
    check-cast v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->setIsPause(Z)V

    :cond_0
    return-void
.end method

.method public resetLoadState()V
    .locals 1

    const/4 v0, 0x0

    .line 102
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->i:Z

    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->h:Z

    return-void
.end method

.method public setCloseView(Landroid/view/View;)V
    .locals 1

    .line 286
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->e:Landroid/view/View;

    if-eqz p1, :cond_0

    const-string v0, "closeButton"

    .line 288
    invoke-virtual {p1, v0}, Landroid/view/View;->setContentDescription(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public setDevContainer(Landroid/view/ViewGroup;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->j:Landroid/view/ViewGroup;

    return-void
.end method

.method public setDyCountDownListener(Lcom/mbridge/msdk/dycreator/listener/DyCountDownListener;)V
    .locals 0

    .line 106
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->q:Lcom/mbridge/msdk/dycreator/listener/DyCountDownListener;

    return-void
.end method

.method public setDynamicView(Z)V
    .locals 0

    .line 94
    iput-boolean p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->m:Z

    return-void
.end method

.method public setH5Ready(Z)V
    .locals 0

    .line 58
    iput-boolean p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->h:Z

    return-void
.end method

.method public setIconVg(Landroid/view/View;Landroid/widget/RelativeLayout$LayoutParams;)V
    .locals 0

    .line 297
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->f:Landroid/view/View;

    .line 298
    iput-object p2, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->o:Landroid/widget/RelativeLayout$LayoutParams;

    return-void
.end method

.method public setImageReady(Z)V
    .locals 0

    .line 66
    iput-boolean p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->k:Z

    return-void
.end method

.method public setNotchPadding(IIII)V
    .locals 2

    .line 431
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    if-eqz v1, :cond_0

    .line 432
    check-cast v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->setNotchPadding(IIII)V

    :cond_0
    return-void
.end method

.method public setSplashJSBridgeImpl(Lcom/mbridge/msdk/splash/js/b;)V
    .locals 1

    .line 114
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->p:Lcom/mbridge/msdk/splash/js/b;

    .line 115
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    if-eqz v0, :cond_0

    .line 116
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->setObject(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public setSplashNativeView(Landroid/view/View;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 154
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    :cond_0
    return-void
.end method

.method public setSplashWebview(Lcom/mbridge/msdk/splash/view/MBSplashWebview;)V
    .locals 1

    .line 262
    iput-object p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    .line 263
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->p:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v0, :cond_0

    .line 264
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->setObject(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public setVideoReady(Z)V
    .locals 0

    .line 62
    iput-boolean p1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->i:Z

    return-void
.end method

.method public show()V
    .locals 5

    .line 302
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->p:Lcom/mbridge/msdk/splash/js/b;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->j:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v0

    instance-of v0, v0, Landroid/app/Activity;

    if-eqz v0, :cond_0

    .line 303
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->p:Lcom/mbridge/msdk/splash/js/b;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->j:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/js/b;->a(Landroid/content/Context;)V

    .line 1159
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->f:Landroid/view/View;

    const/16 v1, 0xb

    const/4 v2, -0x1

    if-nez v0, :cond_4

    .line 1160
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->m:Z

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    if-eqz v0, :cond_2

    .line 1161
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1162
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/an;->a(Landroid/view/View;)V

    .line 1164
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v3, v2, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v3}, Lcom/mbridge/msdk/splash/view/MBSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto/16 :goto_2

    .line 1166
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_3

    .line 1167
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v3, v2, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v3}, Lcom/mbridge/msdk/splash/view/MBSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1169
    :cond_3
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->c()V

    goto/16 :goto_2

    .line 1172
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->d:Landroid/view/ViewGroup;

    if-nez v0, :cond_5

    .line 1173
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v0, v3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->d:Landroid/view/ViewGroup;

    const v3, 0x7ffffc17

    .line 1174
    invoke-virtual {v0, v3}, Landroid/view/ViewGroup;->setId(I)V

    .line 1177
    :cond_5
    iget v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->b:I

    const/4 v3, 0x2

    if-ne v0, v3, :cond_a

    .line 1178
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->h(Landroid/content/Context;)I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->g:I

    .line 1180
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/4 v3, 0x0

    .line 1181
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->d:Landroid/view/ViewGroup;

    invoke-virtual {v4}, Landroid/view/ViewGroup;->getId()I

    move-result v4

    invoke-virtual {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 1183
    iget-boolean v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->m:Z

    if-eqz v3, :cond_7

    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    if-eqz v3, :cond_7

    .line 1184
    invoke-virtual {v3}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_6

    .line 1185
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/an;->a(Landroid/view/View;)V

    .line 1187
    :cond_6
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    invoke-virtual {p0, v3, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_0

    .line 1189
    :cond_7
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    if-eqz v3, :cond_8

    invoke-virtual {v3}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-nez v3, :cond_8

    .line 1190
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    invoke-virtual {p0, v3, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1192
    :cond_8
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->c()V

    .line 1194
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->d:Landroid/view/ViewGroup;

    if-eqz v0, :cond_f

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_f

    .line 1195
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->o:Landroid/widget/RelativeLayout$LayoutParams;

    iget v0, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 1196
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->f:Landroid/view/View;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/an;->a(Landroid/view/View;)V

    .line 1197
    iget v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->g:I

    div-int/lit8 v4, v3, 0x4

    if-le v0, v4, :cond_9

    .line 1198
    div-int/lit8 v0, v3, 0x4

    .line 1201
    :cond_9
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->d:Landroid/view/ViewGroup;

    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->f:Landroid/view/View;

    invoke-virtual {v3, v4, v0, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;II)V

    .line 1204
    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v3, v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1205
    invoke-virtual {v3, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    const/16 v0, 0xd

    .line 1206
    invoke-virtual {v3, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1207
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->d:Landroid/view/ViewGroup;

    invoke-virtual {p0, v0, v3}, Lcom/mbridge/msdk/splash/view/MBSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto/16 :goto_2

    .line 1211
    :cond_a
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Landroid/content/Context;)I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->g:I

    .line 1213
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v0, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1214
    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->d:Landroid/view/ViewGroup;

    invoke-virtual {v4}, Landroid/view/ViewGroup;->getId()I

    move-result v4

    invoke-virtual {v0, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 1216
    iget-boolean v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->m:Z

    if-eqz v3, :cond_c

    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    if-eqz v3, :cond_c

    .line 1217
    invoke-virtual {v3}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_b

    .line 1218
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/an;->a(Landroid/view/View;)V

    .line 1220
    :cond_b
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    invoke-virtual {p0, v3, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_1

    .line 1222
    :cond_c
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    if-eqz v3, :cond_d

    invoke-virtual {v3}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-nez v3, :cond_d

    .line 1223
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    invoke-virtual {p0, v3, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1225
    :cond_d
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->c()V

    .line 1227
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->d:Landroid/view/ViewGroup;

    if-eqz v0, :cond_f

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_f

    .line 1229
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->o:Landroid/widget/RelativeLayout$LayoutParams;

    iget v0, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 1230
    iget v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->g:I

    div-int/lit8 v4, v3, 0x4

    if-le v0, v4, :cond_e

    .line 1231
    div-int/lit8 v0, v3, 0x4

    .line 1233
    :cond_e
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->f:Landroid/view/View;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/an;->a(Landroid/view/View;)V

    .line 1234
    iget-object v3, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->d:Landroid/view/ViewGroup;

    iget-object v4, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->f:Landroid/view/View;

    invoke-virtual {v3, v4, v2, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;II)V

    .line 1236
    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v3, v2, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v0, 0xc

    .line 1237
    invoke-virtual {v3, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1238
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->d:Landroid/view/ViewGroup;

    invoke-virtual {p0, v0, v3}, Lcom/mbridge/msdk/splash/view/MBSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1242
    :cond_f
    :goto_2
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->e:Landroid/view/View;

    if-eqz v0, :cond_11

    .line 1243
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_10

    .line 1244
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42c80000    # 100.0f

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x41f00000    # 30.0f

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v0, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v2, 0xa

    .line 1245
    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1246
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 1247
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41200000    # 10.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 1248
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    iput v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 1249
    iget-object v1, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->e:Landroid/view/View;

    invoke-virtual {p0, v1, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_3

    .line 1251
    :cond_10
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->e:Landroid/view/View;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->bringChildToFront(Landroid/view/View;)V

    .line 306
    :cond_11
    :goto_3
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->clearResState()V

    return-void
.end method

.method public updateCountdown(I)V
    .locals 4

    .line 314
    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    if-eqz v0, :cond_1

    .line 316
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "countdown"

    .line 317
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 318
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 319
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->c:Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    const-string v3, "updateCountdown"

    invoke-virtual {v1, v2, v3, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 321
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 324
    :goto_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->m:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->l:Landroid/view/View;

    if-eqz v0, :cond_0

    .line 325
    instance-of v1, v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    if-eqz v1, :cond_0

    .line 326
    check-cast v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;->updateCountDown(I)V

    .line 330
    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->m:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/splash/view/MBSplashView;->q:Lcom/mbridge/msdk/dycreator/listener/DyCountDownListener;

    if-eqz v0, :cond_1

    .line 331
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/dycreator/listener/DyCountDownListener;->getCountDownValue(I)V

    :cond_1
    return-void
.end method
