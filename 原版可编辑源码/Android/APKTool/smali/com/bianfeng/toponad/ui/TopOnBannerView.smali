.class public Lcom/bianfeng/toponad/ui/TopOnBannerView;
.super Ljava/lang/Object;
.source "TopOnBannerView.java"

# interfaces
.implements Lcom/tkay/banner/api/TYBannerListener;


# static fields
.field private static showView:Lcom/bianfeng/toponad/ui/TopOnBannerView;

.field private static toponadBanner_loadFlag:Z


# instance fields
.field private activity:Landroid/app/Activity;

.field private adid:Ljava/lang/String;

.field private container:Landroid/view/ViewGroup;

.field private height:I

.field mBannerView:Lcom/tkay/banner/api/TYBannerView;

.field private mFloatLayout:Landroid/widget/LinearLayout;

.field private mWindowManager:Landroid/view/WindowManager;

.field private position:Ljava/lang/String;

.field private width:I

.field private x:I

.field private y:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 54
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 55
    iput-object p1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->activity:Landroid/app/Activity;

    .line 56
    iput-object p3, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->position:Ljava/lang/String;

    .line 57
    iput-object p2, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->adid:Ljava/lang/String;

    .line 58
    invoke-static {p4}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->x:I

    .line 59
    invoke-static {p5}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->y:I

    .line 60
    invoke-static {p6}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->width:I

    .line 61
    invoke-static {p7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->height:I

    .line 62
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnBannerView;->initview()V

    .line 63
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnBannerView;->displayAD()V

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/toponad/ui/TopOnBannerView;)Landroid/widget/LinearLayout;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mFloatLayout:Landroid/widget/LinearLayout;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/toponad/ui/TopOnBannerView;)Landroid/view/WindowManager;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mWindowManager:Landroid/view/WindowManager;

    return-object p0
.end method

.method private displayAD()V
    .locals 2

    .line 111
    new-instance v0, Lcom/tkay/banner/api/TYBannerView;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/tkay/banner/api/TYBannerView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mBannerView:Lcom/tkay/banner/api/TYBannerView;

    .line 112
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->adid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/banner/api/TYBannerView;->setPlacementId(Ljava/lang/String;)V

    .line 113
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 114
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mBannerView:Lcom/tkay/banner/api/TYBannerView;

    invoke-virtual {v1, v0}, Lcom/tkay/banner/api/TYBannerView;->setLocalExtra(Ljava/util/Map;)V

    .line 115
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mBannerView:Lcom/tkay/banner/api/TYBannerView;

    invoke-virtual {v0, p0}, Lcom/tkay/banner/api/TYBannerView;->setBannerAdListener(Lcom/tkay/banner/api/TYBannerListener;)V

    .line 116
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mBannerView:Lcom/tkay/banner/api/TYBannerView;

    invoke-virtual {v0}, Lcom/tkay/banner/api/TYBannerView;->loadAd()V

    .line 117
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    const-string v1, "BANNERAD"

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdLoadApi(Ljava/lang/String;)V

    return-void
.end method

.method public static getInstance(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/bianfeng/toponad/ui/TopOnBannerView;
    .locals 9

    .line 39
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->showView:Lcom/bianfeng/toponad/ui/TopOnBannerView;

    if-nez v0, :cond_0

    .line 40
    new-instance v0, Lcom/bianfeng/toponad/ui/TopOnBannerView;

    move-object v1, v0

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    move-object v7, p5

    move-object v8, p6

    invoke-direct/range {v1 .. v8}, Lcom/bianfeng/toponad/ui/TopOnBannerView;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->showView:Lcom/bianfeng/toponad/ui/TopOnBannerView;

    goto :goto_0

    .line 42
    :cond_0
    sget-boolean p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->toponadBanner_loadFlag:Z

    const-string p1, "BANNERAD"

    if-eqz p0, :cond_1

    .line 44
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p0

    invoke-interface {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdLoaded(Ljava/lang/String;)V

    goto :goto_0

    .line 47
    :cond_1
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p0

    invoke-interface {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdLoading(Ljava/lang/String;)V

    .line 51
    :goto_0
    sget-object p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->showView:Lcom/bianfeng/toponad/ui/TopOnBannerView;

    return-object p0
.end method

.method private initview()V
    .locals 5

    .line 67
    new-instance v0, Landroid/view/WindowManager$LayoutParams;

    invoke-direct {v0}, Landroid/view/WindowManager$LayoutParams;-><init>()V

    .line 68
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->activity:Landroid/app/Activity;

    const-string v2, "window"

    invoke-virtual {v1, v2}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/WindowManager;

    iput-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mWindowManager:Landroid/view/WindowManager;

    .line 69
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->position:Ljava/lang/String;

    const-string v2, "leftcenter"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0x13

    .line 70
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto/16 :goto_0

    .line 71
    :cond_0
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->position:Ljava/lang/String;

    const-string v2, "leftbottom"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/16 v1, 0x53

    .line 72
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto/16 :goto_0

    .line 73
    :cond_1
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->position:Ljava/lang/String;

    const-string v2, "lefttop"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    const/16 v1, 0x33

    .line 74
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 75
    :cond_2
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->position:Ljava/lang/String;

    const-string v2, "centerbottom"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    const/16 v1, 0x51

    .line 76
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 77
    :cond_3
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->position:Ljava/lang/String;

    const-string v2, "centertop"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_4

    const/16 v1, 0x31

    .line 78
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 79
    :cond_4
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->position:Ljava/lang/String;

    const-string v2, "center"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    const/16 v2, 0x11

    if-eqz v1, :cond_5

    .line 80
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 81
    :cond_5
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->position:Ljava/lang/String;

    const-string v3, "righttop"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_6

    const/16 v1, 0x35

    .line 82
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 83
    :cond_6
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->position:Ljava/lang/String;

    const-string v3, "rightbottom"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_7

    const/16 v1, 0x55

    .line 84
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 85
    :cond_7
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->position:Ljava/lang/String;

    const-string v3, "rightcenter"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_8

    const/16 v1, 0x15

    .line 86
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 88
    :cond_8
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 90
    :goto_0
    iget v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->width:I

    const/4 v2, -0x2

    if-eqz v1, :cond_9

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    goto :goto_1

    .line 91
    :cond_9
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 92
    :goto_1
    iget v1, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->height:I

    if-eqz v1, :cond_a

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    goto :goto_2

    .line 93
    :cond_a
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    :goto_2
    const/16 v1, 0x8

    .line 94
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->flags:I

    const/16 v2, 0x3e8

    .line 95
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->type:I

    .line 96
    iget v2, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->y:I

    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->y:I

    .line 97
    iget v2, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->x:I

    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->x:I

    .line 98
    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->activity:Landroid/app/Activity;

    invoke-static {v2}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v2

    .line 100
    iget-object v3, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->activity:Landroid/app/Activity;

    const-string v4, "R.layout.activity_topon_banner_ad"

    invoke-static {v3, v4}, Lcom/bianfeng/ymnsdk/util/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v3

    const/4 v4, 0x0

    invoke-virtual {v2, v3, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/LinearLayout;

    iput-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mFloatLayout:Landroid/widget/LinearLayout;

    .line 101
    iget-object v3, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mWindowManager:Landroid/view/WindowManager;

    invoke-interface {v3, v2, v0}, Landroid/view/WindowManager;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 102
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mFloatLayout:Landroid/widget/LinearLayout;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->activity:Landroid/app/Activity;

    const-string v3, "R.id.topon_banner_container"

    invoke-static {v2, v3}, Lcom/bianfeng/ymnsdk/util/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->container:Landroid/view/ViewGroup;

    .line 103
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mFloatLayout:Landroid/widget/LinearLayout;

    const/4 v2, 0x0

    invoke-static {v2, v2}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result v3

    .line 105
    invoke-static {v2, v2}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result v2

    .line 103
    invoke-virtual {v0, v3, v2}, Landroid/widget/LinearLayout;->measure(II)V

    .line 106
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mFloatLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public closeAd()V
    .locals 2

    const/4 v0, 0x0

    .line 134
    sput-boolean v0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->toponadBanner_loadFlag:Z

    .line 136
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mBannerView:Lcom/tkay/banner/api/TYBannerView;

    if-eqz v0, :cond_0

    .line 137
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mBannerView:Lcom/tkay/banner/api/TYBannerView;

    invoke-virtual {v0}, Lcom/tkay/banner/api/TYBannerView;->destroy()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    const/4 v0, 0x0

    .line 142
    :try_start_1
    sput-object v0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->showView:Lcom/bianfeng/toponad/ui/TopOnBannerView;

    .line 143
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mFloatLayout:Landroid/widget/LinearLayout;

    if-eqz v0, :cond_1

    .line 145
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->activity:Landroid/app/Activity;

    new-instance v1, Lcom/bianfeng/toponad/ui/TopOnBannerView$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/toponad/ui/TopOnBannerView$1;-><init>(Lcom/bianfeng/toponad/ui/TopOnBannerView;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :cond_1
    return-void
.end method

.method public onBannerAutoRefreshFail(Lcom/tkay/core/api/AdError;)V
    .locals 0

    const-string p1, "onBannerAutoRefreshFail"

    .line 196
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public onBannerAutoRefreshed(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    const-string p1, "onBannerAutoRefreshed"

    .line 191
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public onBannerClicked(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    const-string p1, "onBannerClicked"

    .line 172
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 173
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string v0, "BANNERAD"

    invoke-interface {p1, v0}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onADClicked(Ljava/lang/String;)V

    return-void
.end method

.method public onBannerClose(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    const-string p1, "onBannerClose"

    .line 184
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 185
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string v0, "BANNERAD"

    invoke-interface {p1, v0}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onADDismissed(Ljava/lang/String;)V

    .line 186
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnBannerView;->closeAd()V

    return-void
.end method

.method public onBannerFailed(Lcom/tkay/core/api/AdError;)V
    .locals 3

    .line 165
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onBannerFailed"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getFullErrorInfo()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 166
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnBannerView;->closeAd()V

    .line 167
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getCode()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getFullErrorInfo()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "BANNERAD"

    invoke-interface {v0, v1, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onNoAD(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public onBannerLoaded()V
    .locals 2

    const-string v0, "onBannerLoaded"

    .line 158
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const/4 v0, 0x1

    .line 159
    sput-boolean v0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->toponadBanner_loadFlag:Z

    .line 160
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    const-string v1, "BANNERAD"

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdReady(Ljava/lang/String;)V

    return-void
.end method

.method public onBannerShow(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    const-string p1, "onBannerShow"

    .line 178
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 179
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string v0, "BANNERAD"

    invoke-interface {p1, v0}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onADPresent(Ljava/lang/String;)V

    return-void
.end method

.method public showAd()V
    .locals 3

    .line 122
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->container:Landroid/view/ViewGroup;

    const-string v1, "BANNERAD"

    if-eqz v0, :cond_0

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mFloatLayout:Landroid/widget/LinearLayout;

    if-eqz v2, :cond_0

    .line 123
    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mBannerView:Lcom/tkay/banner/api/TYBannerView;

    invoke-virtual {v0, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    .line 124
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnBannerView;->mFloatLayout:Landroid/widget/LinearLayout;

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 125
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdShowApi(Ljava/lang/String;)V

    goto :goto_0

    .line 127
    :cond_0
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdShowCheckFail(Ljava/lang/String;)V

    .line 128
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnBannerView;->closeAd()V

    :goto_0
    return-void
.end method
