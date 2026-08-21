.class public Lcom/bianfeng/toponad/ui/TopOnNativeAdView;
.super Ljava/lang/Object;
.source "TopOnNativeAdView.java"

# interfaces
.implements Lcom/tkay/nativead/api/TYNativeEventListener;
.implements Lcom/tkay/nativead/api/TYNativeNetworkListener;


# static fields
.field private static showView:Lcom/bianfeng/toponad/ui/TopOnNativeAdView;

.field private static toponadNative_loadFlag:Z


# instance fields
.field private activity:Landroid/app/Activity;

.field private adid:Ljava/lang/String;

.field atNatives:Lcom/tkay/nativead/api/TYNative;

.field private container:Landroid/view/ViewGroup;

.field private height:I

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

    .line 59
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 60
    iput-object p1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->activity:Landroid/app/Activity;

    .line 61
    iput-object p3, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->position:Ljava/lang/String;

    .line 62
    iput-object p2, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->adid:Ljava/lang/String;

    .line 63
    invoke-static {p4}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->x:I

    .line 64
    invoke-static {p5}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->y:I

    .line 65
    invoke-static {p6}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->width:I

    .line 66
    invoke-static {p7}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->height:I

    .line 67
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->initview()V

    .line 68
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->displayAD()V

    return-void
.end method

.method private displayAD()V
    .locals 3

    .line 116
    new-instance v0, Lcom/tkay/nativead/api/TYNative;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->activity:Landroid/app/Activity;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->adid:Ljava/lang/String;

    invoke-direct {v0, v1, v2, p0}, Lcom/tkay/nativead/api/TYNative;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/nativead/api/TYNativeNetworkListener;)V

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->atNatives:Lcom/tkay/nativead/api/TYNative;

    if-eqz v0, :cond_0

    .line 118
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 120
    iget v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->width:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "key_width"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 121
    iget v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->height:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "key_height"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 122
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->atNatives:Lcom/tkay/nativead/api/TYNative;

    invoke-virtual {v1, v0}, Lcom/tkay/nativead/api/TYNative;->setLocalExtra(Ljava/util/Map;)V

    .line 123
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->atNatives:Lcom/tkay/nativead/api/TYNative;

    invoke-virtual {v0}, Lcom/tkay/nativead/api/TYNative;->makeAdRequest()V

    :cond_0
    return-void
.end method

.method public static getInstance(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/bianfeng/toponad/ui/TopOnNativeAdView;
    .locals 9

    .line 44
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->showView:Lcom/bianfeng/toponad/ui/TopOnNativeAdView;

    if-nez v0, :cond_0

    .line 45
    new-instance v0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;

    move-object v1, v0

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    move-object v7, p5

    move-object v8, p6

    invoke-direct/range {v1 .. v8}, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->showView:Lcom/bianfeng/toponad/ui/TopOnNativeAdView;

    goto :goto_0

    .line 47
    :cond_0
    sget-boolean p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->toponadNative_loadFlag:Z

    const-string p1, "NATIVAD"

    if-eqz p0, :cond_1

    .line 49
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p0

    invoke-interface {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdLoaded(Ljava/lang/String;)V

    goto :goto_0

    .line 52
    :cond_1
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p0

    invoke-interface {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdLoading(Ljava/lang/String;)V

    .line 56
    :goto_0
    sget-object p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->showView:Lcom/bianfeng/toponad/ui/TopOnNativeAdView;

    return-object p0
.end method

.method private initview()V
    .locals 5

    .line 72
    new-instance v0, Landroid/view/WindowManager$LayoutParams;

    invoke-direct {v0}, Landroid/view/WindowManager$LayoutParams;-><init>()V

    .line 73
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->activity:Landroid/app/Activity;

    const-string v2, "window"

    invoke-virtual {v1, v2}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/WindowManager;

    iput-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->mWindowManager:Landroid/view/WindowManager;

    .line 74
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->position:Ljava/lang/String;

    const-string v2, "leftcenter"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/16 v1, 0x13

    .line 75
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto/16 :goto_0

    .line 76
    :cond_0
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->position:Ljava/lang/String;

    const-string v2, "leftbottom"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    const/16 v1, 0x53

    .line 77
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto/16 :goto_0

    .line 78
    :cond_1
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->position:Ljava/lang/String;

    const-string v2, "lefttop"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    const/16 v1, 0x33

    .line 79
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 80
    :cond_2
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->position:Ljava/lang/String;

    const-string v2, "centerbottom"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    const/16 v1, 0x51

    .line 81
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 82
    :cond_3
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->position:Ljava/lang/String;

    const-string v2, "centertop"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_4

    const/16 v1, 0x31

    .line 83
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 84
    :cond_4
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->position:Ljava/lang/String;

    const-string v2, "center"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    const/16 v2, 0x11

    if-eqz v1, :cond_5

    .line 85
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 86
    :cond_5
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->position:Ljava/lang/String;

    const-string v3, "righttop"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_6

    const/16 v1, 0x35

    .line 87
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 88
    :cond_6
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->position:Ljava/lang/String;

    const-string v3, "rightbottom"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_7

    const/16 v1, 0x55

    .line 89
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 90
    :cond_7
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->position:Ljava/lang/String;

    const-string v3, "rightcenter"

    invoke-virtual {v3, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_8

    const/16 v1, 0x15

    .line 91
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    goto :goto_0

    .line 93
    :cond_8
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->gravity:I

    .line 95
    :goto_0
    iget v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->width:I

    const/4 v2, -0x2

    if-eqz v1, :cond_9

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    goto :goto_1

    .line 96
    :cond_9
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 97
    :goto_1
    iget v1, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->height:I

    if-eqz v1, :cond_a

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    goto :goto_2

    .line 98
    :cond_a
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    :goto_2
    const/16 v1, 0x8

    .line 99
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->flags:I

    const/16 v2, 0x3e8

    .line 100
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->type:I

    .line 101
    iget v2, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->y:I

    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->y:I

    .line 102
    iget v2, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->x:I

    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->x:I

    .line 103
    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->activity:Landroid/app/Activity;

    invoke-static {v2}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v2

    .line 105
    iget-object v3, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->activity:Landroid/app/Activity;

    const-string v4, "R.layout.activity_topon_native_ad"

    invoke-static {v3, v4}, Lcom/bianfeng/ymnsdk/util/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v3

    const/4 v4, 0x0

    invoke-virtual {v2, v3, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/LinearLayout;

    iput-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->mFloatLayout:Landroid/widget/LinearLayout;

    .line 106
    iget-object v3, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->mWindowManager:Landroid/view/WindowManager;

    invoke-interface {v3, v2, v0}, Landroid/view/WindowManager;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 107
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->mFloatLayout:Landroid/widget/LinearLayout;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->activity:Landroid/app/Activity;

    const-string v3, "R.id.topon_native_container"

    invoke-static {v2, v3}, Lcom/bianfeng/ymnsdk/util/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/widget/LinearLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->container:Landroid/view/ViewGroup;

    .line 108
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->mFloatLayout:Landroid/widget/LinearLayout;

    const/4 v2, 0x0

    invoke-static {v2, v2}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result v3

    .line 110
    invoke-static {v2, v2}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result v2

    .line 108
    invoke-virtual {v0, v3, v2}, Landroid/widget/LinearLayout;->measure(II)V

    .line 111
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->mFloatLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public closeAd()V
    .locals 1

    const/4 v0, 0x0

    .line 144
    sput-boolean v0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->toponadNative_loadFlag:Z

    const/4 v0, 0x0

    .line 145
    sput-object v0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->showView:Lcom/bianfeng/toponad/ui/TopOnNativeAdView;

    return-void
.end method

.method public onAdClicked(Lcom/tkay/nativead/api/TYNativeAdView;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    const-string p1, "onAdClicked"

    .line 155
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public onAdImpressed(Lcom/tkay/nativead/api/TYNativeAdView;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    const-string p1, "onAdImpressed"

    .line 150
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public onAdVideoEnd(Lcom/tkay/nativead/api/TYNativeAdView;)V
    .locals 0

    const-string p1, "onAdVideoEnd"

    .line 165
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public onAdVideoProgress(Lcom/tkay/nativead/api/TYNativeAdView;I)V
    .locals 0

    const-string p1, "onAdVideoProgress"

    .line 170
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public onAdVideoStart(Lcom/tkay/nativead/api/TYNativeAdView;)V
    .locals 0

    const-string p1, "onAdVideoStart"

    .line 160
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public onNativeAdLoadFail(Lcom/tkay/core/api/AdError;)V
    .locals 0

    const-string p1, "onNativeAdLoadFail"

    .line 181
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const/4 p1, 0x0

    .line 182
    sput-boolean p1, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->toponadNative_loadFlag:Z

    return-void
.end method

.method public onNativeAdLoaded()V
    .locals 1

    const-string v0, "onNativeAdLoaded"

    .line 175
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const/4 v0, 0x1

    .line 176
    sput-boolean v0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->toponadNative_loadFlag:Z

    return-void
.end method

.method public showAd()V
    .locals 1

    .line 129
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->atNatives:Lcom/tkay/nativead/api/TYNative;

    if-nez v0, :cond_0

    return-void

    .line 133
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/nativead/api/TYNative;->getNativeAd()Lcom/tkay/nativead/api/NativeAd;

    return-void
.end method
