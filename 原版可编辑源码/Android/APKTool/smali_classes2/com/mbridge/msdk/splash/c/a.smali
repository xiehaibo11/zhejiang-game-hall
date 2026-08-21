.class public final Lcom/mbridge/msdk/splash/c/a;
.super Ljava/lang/Object;
.source "NativeViewRenderManager.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/splash/c/a$a;
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/splash/c/a$1;)V
    .locals 0

    .line 41
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/c/a;-><init>()V

    return-void
.end method

.method private a(Landroid/content/Context;Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/splash/a/c;Lcom/mbridge/msdk/splash/b/a;)V
    .locals 1

    .line 303
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;

    invoke-direct {v0, p1, p2, p3}, Lcom/mbridge/msdk/splash/view/MBSplashNativeView;-><init>(Landroid/content/Context;Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/splash/a/c;)V

    if-eqz p4, :cond_0

    .line 306
    invoke-interface {p4, v0}, Lcom/mbridge/msdk/splash/b/a;->a(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    if-eqz p4, :cond_0

    const-string p1, "View render error."

    .line 313
    invoke-interface {p4, p1}, Lcom/mbridge/msdk/splash/b/a;->a(Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/c/a;Landroid/content/Context;Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/splash/a/c;Lcom/mbridge/msdk/splash/b/a;)V
    .locals 0

    .line 41
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mbridge/msdk/splash/c/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/splash/a/c;Lcom/mbridge/msdk/splash/b/a;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/c/a;Lcom/mbridge/msdk/dycreator/f/a/a;Lcom/mbridge/msdk/splash/d/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 1

    const/4 p0, 0x0

    if-eqz p1, :cond_0

    .line 1284
    instance-of v0, p1, Lcom/mbridge/msdk/dycreator/bridge/MBSplashData;

    if-eqz v0, :cond_0

    .line 1285
    check-cast p1, Lcom/mbridge/msdk/dycreator/bridge/MBSplashData;

    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/bridge/MBSplashData;->getxInScreen()F

    move-result p0

    .line 1286
    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/bridge/MBSplashData;->getyInScreen()F

    move-result v0

    .line 1287
    invoke-virtual {p1}, Lcom/mbridge/msdk/dycreator/bridge/MBSplashData;->getClickType()I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    move v0, p0

    :goto_0
    if-eqz p2, :cond_1

    .line 1291
    :try_start_0
    invoke-static {p1, p0, v0}, Lcom/mbridge/msdk/splash/a/a/a;->a(IFF)Ljava/lang/String;

    move-result-object p0

    .line 1292
    invoke-static {p0, p3}, Lcom/mbridge/msdk/splash/a/a/a;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p0

    .line 1293
    invoke-interface {p2, p0}, Lcom/mbridge/msdk/splash/d/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    .line 1295
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1296
    invoke-interface {p2, p3}, Lcom/mbridge/msdk/splash/d/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_1
    :goto_1
    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/splash/a/c;Lcom/mbridge/msdk/splash/b/a;)V
    .locals 10

    .line 54
    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getContext()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    .line 56
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    :cond_0
    if-nez p2, :cond_1

    if-eqz p3, :cond_1

    const-string p1, "The render parameters is unavailable."

    .line 60
    invoke-interface {p3, p1}, Lcom/mbridge/msdk/splash/b/a;->a(Ljava/lang/String;)V

    return-void

    :cond_1
    if-eqz p2, :cond_2

    .line 65
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->c()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 66
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->c()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/i;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_2
    const-string v1, ""

    .line 68
    :goto_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_9

    if-eqz p2, :cond_a

    .line 69
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->c()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v2

    if-eqz v2, :cond_a

    .line 70
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->c()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdZip()Ljava/lang/String;

    move-result-object v2

    .line 71
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_8

    .line 73
    :try_start_0
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 74
    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1091
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    .line 1092
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v3

    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v1

    .line 1093
    new-instance v3, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$Builder;

    invoke-direct {v3}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$Builder;-><init>()V

    .line 1094
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->c()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$Builder;->campaignEx(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v3

    const/4 v4, 0x0

    .line 1095
    invoke-interface {v3, v4}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->file(Ljava/io/File;)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v3

    .line 1096
    invoke-interface {v3, v2}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->fileDirs(Ljava/util/List;)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v2

    sget-object v3, Lcom/mbridge/msdk/dycreator/wrapper/DyAdType;->SPLASH:Lcom/mbridge/msdk/dycreator/wrapper/DyAdType;

    .line 1097
    invoke-interface {v2, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->dyAdType(Lcom/mbridge/msdk/dycreator/wrapper/DyAdType;)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v2

    .line 1098
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->d()Z

    move-result v3

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->canSkip(Z)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v2

    .line 1099
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->g()I

    move-result v3

    const/4 v4, 0x0

    const/4 v5, 0x1

    if-ne v3, v5, :cond_3

    move v3, v5

    goto :goto_1

    :cond_3
    move v3, v4

    :goto_1
    invoke-interface {v2, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->isScreenClick(Z)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v2

    .line 1100
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->f()I

    move-result v3

    if-nez v3, :cond_4

    move v3, v5

    goto :goto_2

    :cond_4
    move v3, v4

    :goto_2
    invoke-interface {v2, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->isClickButtonVisible(Z)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v2

    .line 1101
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->i()I

    move-result v3

    if-ne v3, v5, :cond_5

    move v3, v5

    goto :goto_3

    :cond_5
    move v3, v4

    :goto_3
    invoke-interface {v2, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->isShakeVisible(Z)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v2

    .line 1102
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->h()I

    move-result v3

    if-nez v3, :cond_6

    move v3, v5

    goto :goto_4

    :cond_6
    move v3, v4

    :goto_4
    invoke-interface {v2, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->isApkInfoVisible(Z)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v2

    .line 1103
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->m()I

    move-result v3

    if-ne v3, v5, :cond_7

    move v4, v5

    :cond_7
    invoke-interface {v2, v4}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->isLogoVisible(Z)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v2

    .line 1104
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->j()I

    move-result v3

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->shakeStrenght(I)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v2

    .line 1105
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->k()I

    move-result v3

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->shakeTime(I)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v2

    .line 1106
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->l()I

    move-result v3

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->orientation(I)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v2

    .line 1107
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/a/c;->e()I

    move-result v3

    invoke-interface {v2, v3}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->countDownTime(I)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v2

    .line 1108
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->az()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v2, v1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->adChoiceLink(Ljava/lang/String;)Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;

    move-result-object v1

    .line 1109
    invoke-interface {v1}, Lcom/mbridge/msdk/dycreator/wrapper/DyOption$IViewOptionBuilder;->build()Lcom/mbridge/msdk/dycreator/wrapper/DyOption;

    move-result-object v1

    .line 1110
    new-instance v2, Lcom/mbridge/msdk/splash/c/a$1;

    invoke-direct {v2, p0, v1}, Lcom/mbridge/msdk/splash/c/a$1;-><init>(Lcom/mbridge/msdk/splash/c/a;Lcom/mbridge/msdk/dycreator/wrapper/DyOption;)V

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setDyCountDownListener(Lcom/mbridge/msdk/dycreator/listener/DyCountDownListener;)V

    .line 1116
    invoke-static {}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->getInstance()Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;

    move-result-object v8

    new-instance v9, Lcom/mbridge/msdk/splash/c/a$2;

    move-object v2, v9

    move-object v3, p0

    move-object v4, p3

    move-object v5, v1

    move-object v6, p1

    move-object v7, p2

    invoke-direct/range {v2 .. v7}, Lcom/mbridge/msdk/splash/c/a$2;-><init>(Lcom/mbridge/msdk/splash/c/a;Lcom/mbridge/msdk/splash/b/a;Lcom/mbridge/msdk/dycreator/wrapper/DyOption;Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/splash/a/c;)V

    invoke-virtual {v8, v1, v9}, Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewCreator;->createDynamicView(Lcom/mbridge/msdk/dycreator/wrapper/DyOption;Lcom/mbridge/msdk/dycreator/wrapper/DynamicViewBackListener;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_5

    :catch_0
    move-exception v1

    .line 77
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 81
    :cond_8
    invoke-direct {p0, v0, p1, p2, p3}, Lcom/mbridge/msdk/splash/c/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/splash/a/c;Lcom/mbridge/msdk/splash/b/a;)V

    goto :goto_5

    .line 85
    :cond_9
    invoke-direct {p0, v0, p1, p2, p3}, Lcom/mbridge/msdk/splash/c/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/splash/view/MBSplashView;Lcom/mbridge/msdk/splash/a/c;Lcom/mbridge/msdk/splash/b/a;)V

    :cond_a
    :goto_5
    return-void
.end method
