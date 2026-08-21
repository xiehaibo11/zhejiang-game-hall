.class public Lcom/kwad/components/core/page/DownloadLandPageActivity;
.super Lcom/kwad/components/core/l/b;


# annotations
.annotation runtime Lcom/kwad/sdk/api/core/KsAdSdkDynamicImpl;
    value = Lcom/kwad/sdk/api/proxy/app/AdWebViewActivity;
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/components/core/l/b<",
        "Lcom/kwad/components/core/page/b/d;",
        ">;"
    }
.end annotation


# static fields
.field public static final KEY_NEED_CLOSE_REWARD:Ljava/lang/String; = "key_close_reward"

.field public static final KEY_TEMPLATE:Ljava/lang/String; = "key_template_json"

.field private static final TAG:Ljava/lang/String; = "DownloadLandPageActivity"

.field public static showingAdWebViewLandPage:Z


# instance fields
.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mBackIcon:Landroid/widget/ImageView;

.field private mCloseIcon:Landroid/widget/ImageView;

.field private mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

.field private mIsRewardLandPage:Z

.field private mKsadVideoContainer:Lcom/kwad/sdk/widget/KSRelativeLayout;

.field private mPlayModule:Lcom/kwad/components/core/page/c/a;

.field private mVideoBlurBg:Landroid/widget/ImageView;

.field private mVideoCover:Landroid/widget/ImageView;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/k;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/l/b;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/kwad/components/core/page/DownloadLandPageActivity;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic access$100(Lcom/kwad/components/core/page/DownloadLandPageActivity;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->initNativeLandPage()V

    return-void
.end method

.method static synthetic access$200(Lcom/kwad/components/core/page/DownloadLandPageActivity;)Lcom/kwad/components/core/e/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    return-object p0
.end method

.method static synthetic access$300(Lcom/kwad/components/core/page/DownloadLandPageActivity;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mIsRewardLandPage:Z

    return p0
.end method

.method static synthetic access$400(Lcom/kwad/components/core/page/DownloadLandPageActivity;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mVideoCover:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic access$500(Lcom/kwad/components/core/page/DownloadLandPageActivity;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mCloseIcon:Landroid/widget/ImageView;

    return-object p0
.end method

.method private buildView(Lcom/kwad/components/core/widget/ComplianceTextView;Lcom/kwad/sdk/widget/KSLinearLayout;Lcom/kwad/components/core/widget/KsLogoView;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p1}, Lcom/kwad/components/core/widget/ComplianceTextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/widget/FrameLayout$LayoutParams;

    const/16 v0, 0x50

    iput v0, p1, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result p1

    const/4 v0, 0x0

    if-nez p1, :cond_0

    invoke-virtual {p3}, Lcom/kwad/components/core/widget/KsLogoView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup$MarginLayoutParams;

    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mContext:Landroid/content/Context;

    const/high16 v2, 0x42c80000    # 100.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p1, v0, v0, v0, v1}, Landroid/view/ViewGroup$MarginLayoutParams;->setMargins(IIII)V

    invoke-virtual {p3, p1}, Lcom/kwad/components/core/widget/KsLogoView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    invoke-virtual {p3, v0}, Lcom/kwad/components/core/widget/KsLogoView;->setVisibility(I)V

    invoke-virtual {p2}, Lcom/kwad/sdk/widget/KSLinearLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/widget/FrameLayout$LayoutParams;

    const/16 p3, 0x11

    iput p3, p1, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    invoke-virtual {p2, p1}, Lcom/kwad/sdk/widget/KSLinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    return-void
.end method

.method private getVideoPlayStateListener()Lcom/kwad/components/core/video/k;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/page/DownloadLandPageActivity$6;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity$6;-><init>(Lcom/kwad/components/core/page/DownloadLandPageActivity;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    return-object v0
.end method

.method private getWebViewStateListener()Lcom/kwad/components/core/page/b/f$a;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/page/DownloadLandPageActivity$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity$3;-><init>(Lcom/kwad/components/core/page/DownloadLandPageActivity;)V

    return-object v0
.end method

.method private handleCloseBtn()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ae(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-nez v2, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mCloseIcon:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    goto :goto_0

    :cond_0
    iget-object v2, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mCloseIcon:Landroid/widget/ImageView;

    new-instance v3, Lcom/kwad/components/core/page/DownloadLandPageActivity$7;

    invoke-direct {v3, p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity$7;-><init>(Lcom/kwad/components/core/page/DownloadLandPageActivity;)V

    invoke-virtual {v2, v3, v0, v1}, Landroid/widget/ImageView;->postDelayed(Ljava/lang/Runnable;J)Z

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mCloseIcon:Landroid/widget/ImageView;

    new-instance v1, Lcom/kwad/components/core/page/DownloadLandPageActivity$8;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity$8;-><init>(Lcom/kwad/components/core/page/DownloadLandPageActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private initNativeLandPage()V
    .locals 8

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_land_page_native:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_compliance_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/ComplianceTextView;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setVisibility(I)V

    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/ComplianceTextView;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    sget v1, Lcom/kwad/sdk/R$id;->ksad_ad_cover:I

    invoke-virtual {p0, v1}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;

    sget v2, Lcom/kwad/sdk/R$id;->ksad_ad_title:I

    invoke-virtual {p0, v2}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    sget v3, Lcom/kwad/sdk/R$id;->ksad_ad_info:I

    invoke-virtual {p0, v3}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    sget v4, Lcom/kwad/sdk/R$id;->ksad_info_container:I

    invoke-virtual {p0, v4}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Lcom/kwad/sdk/widget/KSLinearLayout;

    sget v5, Lcom/kwad/sdk/R$id;->ksad_land_page_logo:I

    invoke-virtual {p0, v5}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Lcom/kwad/components/core/widget/KsLogoView;

    sget v6, Lcom/kwad/sdk/R$id;->ksad_web_download_progress:I

    invoke-virtual {p0, v6}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Lcom/kwad/sdk/widget/DownloadProgressBar;

    iget-object v7, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v7}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v7

    invoke-direct {p0, v2, v7}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->setAdTitle(Landroid/widget/TextView;Lcom/kwad/sdk/core/response/model/AdInfo;)V

    iget-object v2, v7, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v2, v2, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adDescription:Ljava/lang/String;

    invoke-virtual {v3, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    const/high16 v2, 0x42000000    # 32.0f

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->setRadius(F)V

    invoke-static {v7}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-static {v7}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1, v2, v3}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_0
    invoke-direct {p0, v6, v7}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->setAdkDownload(Lcom/kwad/sdk/widget/DownloadProgressBar;Lcom/kwad/sdk/core/response/model/AdInfo;)V

    invoke-direct {p0, v0, v4, v5}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->buildView(Lcom/kwad/components/core/widget/ComplianceTextView;Lcom/kwad/sdk/widget/KSLinearLayout;Lcom/kwad/components/core/widget/KsLogoView;)V

    return-void
.end method

.method public static launch(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-eqz v0, :cond_0

    const-class v0, Lcom/kwad/sdk/api/proxy/app/AdWebViewActivity;

    goto :goto_0

    :cond_0
    const-class v0, Lcom/kwad/sdk/api/proxy/app/KsFullScreenLandScapeVideoActivity;

    :goto_0
    const-class v1, Lcom/kwad/components/core/page/DownloadLandPageActivity;

    invoke-static {v0, v1}, Lcom/kwad/sdk/service/b;->a(Ljava/lang/Class;Ljava/lang/Class;)V

    new-instance v1, Landroid/content/Intent;

    invoke-direct {v1, p0, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v0, 0x10000000

    invoke-virtual {v1, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "key_template_json"

    invoke-virtual {v1, v0, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "key_close_reward"

    invoke-virtual {v1, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    invoke-virtual {p0, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method private loadBlurImage(Ljava/lang/String;Landroid/widget/ImageView;)V
    .locals 3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    invoke-virtual {p2, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v1, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;

    invoke-direct {v1}, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;-><init>()V

    const/16 v2, 0x32

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;->setBlurRadius(I)Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;->build()Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/core/page/DownloadLandPageActivity$2;

    invoke-direct {v2, p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity$2;-><init>(Lcom/kwad/components/core/page/DownloadLandPageActivity;)V

    invoke-static {p2, p1, v0, v1, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat;Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;)V

    return-void
.end method

.method private setAdTitle(Landroid/widget/TextView;Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 1

    iget-object v0, p2, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appName:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object p2, p2, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p2, p2, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appName:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void

    :cond_0
    iget-object v0, p2, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;->rawUserName:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object p2, p2, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    iget-object p2, p2, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;->rawUserName:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    return-void
.end method

.method private setAdkDownload(Lcom/kwad/sdk/widget/DownloadProgressBar;Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 3

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v2, Lcom/kwad/components/core/page/DownloadLandPageActivity$4;

    invoke-direct {v2, p0, p1, p2}, Lcom/kwad/components/core/page/DownloadLandPageActivity$4;-><init>(Lcom/kwad/components/core/page/DownloadLandPageActivity;Lcom/kwad/sdk/widget/DownloadProgressBar;Lcom/kwad/sdk/core/response/model/AdInfo;)V

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    new-instance p2, Lcom/kwad/components/core/page/DownloadLandPageActivity$5;

    invoke-direct {p2, p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity$5;-><init>(Lcom/kwad/components/core/page/DownloadLandPageActivity;)V

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/widget/DownloadProgressBar;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method private setVideoData()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mKsadVideoContainer:Lcom/kwad/sdk/widget/KSRelativeLayout;

    invoke-virtual {v0}, Lcom/kwad/sdk/widget/KSRelativeLayout;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v1

    const/4 v2, -0x1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    mul-int/lit8 v1, v1, 0x9

    div-int/lit8 v1, v1, 0x10

    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    iput v2, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    div-int/lit8 v1, v1, 0x2

    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    iput v2, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mKsadVideoContainer:Lcom/kwad/sdk/widget/KSRelativeLayout;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/widget/KSRelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mKsadVideoContainer:Lcom/kwad/sdk/widget/KSRelativeLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSRelativeLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bi(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/b;->getUrl()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mVideoCover:Landroid/widget/ImageView;

    iget-object v2, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method


# virtual methods
.method public checkIntentData(Landroid/content/Intent;)Z
    .locals 2

    :try_start_0
    invoke-virtual {p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->getIntent()Landroid/content/Intent;

    move-result-object p1

    const-string v0, "key_template_json"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;-><init>()V

    if-eqz p1, :cond_0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->parseJson(Lorg/json/JSONObject;)V

    :cond_0
    iput-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_0
    iget-object p1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method public getLayoutId()I
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v0

    if-eqz v0, :cond_0

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_activity_ad_land_page:I

    return v0

    :cond_0
    sget v0, Lcom/kwad/sdk/R$layout;->ksad_activity_land_page_horizontal:I

    return v0
.end method

.method public getPageName()Ljava/lang/String;
    .locals 1

    const-string v0, "DownloadLandPageActivity"

    return-object v0
.end method

.method public initData()V
    .locals 3

    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->showingAdWebViewLandPage:Z

    invoke-virtual {p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    const-string v1, "key_close_reward"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mIsRewardLandPage:Z

    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-void
.end method

.method public initView()V
    .locals 4

    sget v0, Lcom/kwad/sdk/R$id;->ksad_root_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/KSRelativeLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_container:I

    invoke-virtual {p0, v1}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/widget/KSRelativeLayout;

    iput-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mKsadVideoContainer:Lcom/kwad/sdk/widget/KSRelativeLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_player:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSRelativeLayout;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/video/DetailVideoView;

    iput-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zX()I

    move-result v2

    const/4 v3, 0x1

    invoke-virtual {v1, v3, v2}, Lcom/kwad/components/core/video/DetailVideoView;->f(ZI)V

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_blur_bg:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSRelativeLayout;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mVideoBlurBg:Landroid/widget/ImageView;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_back_icon:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSRelativeLayout;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mBackIcon:Landroid/widget/ImageView;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_right_close:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSRelativeLayout;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mCloseIcon:Landroid/widget/ImageView;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_cover:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/widget/KSRelativeLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mVideoCover:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->P(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mVideoBlurBg:Landroid/widget/ImageView;

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->loadBlurImage(Ljava/lang/String;Landroid/widget/ImageView;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mBackIcon:Landroid/widget/ImageView;

    new-instance v1, Lcom/kwad/components/core/page/DownloadLandPageActivity$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity$1;-><init>(Lcom/kwad/components/core/page/DownloadLandPageActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->setVideoData()V

    :cond_1
    iget-boolean v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mIsRewardLandPage:Z

    if-eqz v0, :cond_2

    invoke-direct {p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->handleCloseBtn()V

    :cond_2
    return-void
.end method

.method public bridge synthetic onCreateCallerContext()Lcom/kwad/components/core/l/a;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->onCreateCallerContext()Lcom/kwad/components/core/page/b/d;

    move-result-object v0

    return-object v0
.end method

.method protected onCreateCallerContext()Lcom/kwad/components/core/page/b/d;
    .locals 6

    new-instance v0, Lcom/kwad/components/core/page/b/d;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b/d;-><init>(Lcom/kwad/components/core/l/b;)V

    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v1, v0, Lcom/kwad/components/core/page/b/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mContext:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    new-instance v1, Lcom/kwad/components/core/page/c/a;

    iget-object v3, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v4, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    new-instance v5, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    invoke-direct {v5}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;-><init>()V

    invoke-virtual {v5, v2}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->videoSoundEnable(Z)Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/api/KsVideoPlayConfig$Builder;->build()Lcom/kwad/sdk/api/KsVideoPlayConfig;

    move-result-object v2

    invoke-direct {v1, v3, v4, v2}, Lcom/kwad/components/core/page/c/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/video/DetailVideoView;Lcom/kwad/sdk/api/KsVideoPlayConfig;)V

    iput-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mPlayModule:Lcom/kwad/components/core/page/c/a;

    iput-object v1, v0, Lcom/kwad/components/core/page/b/d;->mPlayModule:Lcom/kwad/components/core/page/c/a;

    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mPlayModule:Lcom/kwad/components/core/page/c/a;

    invoke-direct {p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->getVideoPlayStateListener()Lcom/kwad/components/core/video/k;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/page/c/a;->a(Lcom/kwad/components/core/video/k;)V

    iget-object v1, v0, Lcom/kwad/components/core/page/b/d;->Lg:Ljava/util/List;

    iget-object v2, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mPlayModule:Lcom/kwad/components/core/page/c/a;

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    return-object v0
.end method

.method public onCreatePresenter()Lcom/kwad/sdk/mvp/Presenter;
    .locals 4

    new-instance v0, Lcom/kwad/sdk/mvp/Presenter;

    invoke-direct {v0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/page/b/e;

    invoke-direct {v1}, Lcom/kwad/components/core/page/b/e;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_0
    new-instance v1, Lcom/kwad/components/core/page/b/f;

    invoke-direct {p0}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->getWebViewStateListener()Lcom/kwad/components/core/page/b/f$a;

    move-result-object v2

    iget-boolean v3, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mIsRewardLandPage:Z

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/core/page/b/f;-><init>(Lcom/kwad/components/core/page/b/f$a;Z)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-object v0
.end method

.method public onDestroy()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/l/b;->onDestroy()V

    const/4 v0, 0x0

    sput-boolean v0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->showingAdWebViewLandPage:Z

    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/e/d/c;->clear()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/DownloadLandPageActivity;->mPlayModule:Lcom/kwad/components/core/page/c/a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/page/c/a;->release()V

    :cond_1
    return-void
.end method
