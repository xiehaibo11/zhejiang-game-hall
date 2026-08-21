.class public Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;
.super Lcom/mbridge/msdk/video/module/MBridgeBaseView;
.source "MBridgeNativeEndCardView.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$a;
    }
.end annotation


# instance fields
.field private A:Landroid/widget/LinearLayout;

.field private B:Lcom/mbridge/msdk/widget/FeedBackButton;

.field private C:Ljava/lang/Runnable;

.field private D:Landroid/widget/RelativeLayout;

.field private E:Lcom/mbridge/msdk/video/js/factory/b;

.field private F:Z

.field private G:Z

.field private H:I

.field private I:Z

.field private J:Z

.field private K:Z

.field private L:Landroid/view/animation/AlphaAnimation;

.field private M:I

.field private N:I

.field private O:I

.field private P:I

.field private Q:Z

.field private R:Landroid/graphics/Bitmap;

.field private S:Landroid/view/View;

.field private T:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

.field private U:Z

.field private V:Ljava/lang/String;

.field private W:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

.field private aa:Lcom/mbridge/msdk/shake/MBShakeView;

.field private ab:Lcom/mbridge/msdk/shake/b;

.field private ac:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

.field private ad:I

.field private n:Landroid/view/ViewGroup;

.field private o:Landroid/view/ViewGroup;

.field private p:Landroid/widget/RelativeLayout;

.field private q:Landroid/widget/RelativeLayout;

.field private r:Landroid/widget/ImageView;

.field private s:Landroid/widget/ImageView;

.field private t:Landroid/widget/ImageView;

.field private u:Landroid/widget/ImageView;

.field private v:Landroid/widget/ImageView;

.field private w:Landroid/widget/TextView;

.field private x:Landroid/widget/TextView;

.field private y:Landroid/widget/TextView;

.field private z:Landroid/widget/LinearLayout;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 151
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 112
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->F:Z

    .line 113
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->G:Z

    .line 114
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->H:I

    .line 115
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->I:Z

    .line 116
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->J:Z

    .line 117
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->K:Z

    .line 121
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const/4 p1, 0x1

    .line 144
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ad:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 155
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 112
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->F:Z

    .line 113
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->G:Z

    .line 114
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->H:I

    .line 115
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->I:Z

    .line 116
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->J:Z

    .line 117
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->K:Z

    .line 121
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const/4 p1, 0x1

    .line 144
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ad:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;ZIZII)V
    .locals 0

    .line 159
    invoke-direct/range {p0 .. p7}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;ZIZII)V

    const/4 p1, 0x0

    .line 112
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->F:Z

    .line 113
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->G:Z

    .line 114
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->H:I

    .line 115
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->I:Z

    .line 116
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->J:Z

    .line 117
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->K:Z

    .line 121
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const/4 p1, 0x1

    .line 144
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ad:I

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Landroid/view/View;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->S:Landroid/view/View;

    return-object p0
.end method

.method private a()V
    .locals 3

    .line 263
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->c()V

    .line 264
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->f:Z

    if-nez v0, :cond_0

    .line 265
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v1, 0x68

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 267
    :cond_0
    new-instance v0, Landroid/view/animation/AlphaAnimation;

    const/4 v1, 0x0

    const/high16 v2, 0x42c80000    # 100.0f

    invoke-direct {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->L:Landroid/view/animation/AlphaAnimation;

    const-wide/16 v1, 0xc8

    .line 268
    invoke-virtual {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;->setDuration(J)V

    return-void
.end method

.method private a(Landroid/view/View;)V
    .locals 1

    if-nez p1, :cond_0

    .line 434
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->setLayout()V

    .line 435
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->E:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    goto :goto_0

    .line 437
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 438
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 440
    :cond_1
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->addView(Landroid/view/View;)V

    .line 441
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b(Landroid/view/View;)Z

    .line 442
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->c()V

    .line 445
    :goto_0
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b()V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;I)V
    .locals 9

    .line 6521
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 6523
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, ""

    if-eqz v0, :cond_0

    .line 6526
    :try_start_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->b()I

    move-result v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_0
    move-object v8, v1

    .line 6528
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->a:Landroid/content/Context;

    const-string v2, "end_card_click"

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 6530
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v3

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 6531
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v4

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 6532
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v5

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 6533
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v6

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 6534
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v7

    .line 6528
    invoke-static/range {v1 .. v8}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 6537
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    const/4 v0, 0x0

    .line 6543
    :try_start_2
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_2

    .line 6544
    :try_start_3
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->p:Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->a(I)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {v1, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 6546
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result p1

    const/4 v0, 0x5

    if-ne p1, v0, :cond_2

    const-string p1, "camp_position"

    const/4 v0, 0x0

    .line 6547
    invoke-virtual {v1, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_2

    :catch_1
    move-exception p1

    move-object v0, v1

    goto :goto_1

    :catch_2
    move-exception p1

    .line 6550
    :goto_1
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    move-object v1, v0

    .line 6552
    :cond_2
    :goto_2
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 p1, 0x69

    invoke-interface {p0, p1, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;Landroid/graphics/Bitmap;)V
    .locals 1

    .line 6372
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$12;

    invoke-direct {v0, p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$12;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;Landroid/graphics/Bitmap;)V

    .line 6392
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->d()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object p0

    invoke-virtual {p0}, Ljava/util/concurrent/ThreadPoolExecutor;->getActiveCount()I

    move-result p0

    const/4 p1, 0x1

    if-ge p0, p1, :cond_0

    .line 6394
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->c()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object p0

    invoke-virtual {p0, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 6397
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "MBridgeBaseView"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;Landroid/view/View;)Z
    .locals 0

    .line 76
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b(Landroid/view/View;)Z

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;Z)Z
    .locals 0

    .line 76
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->G:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;
    .locals 0

    .line 76
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->R:Landroid/graphics/Bitmap;

    return-object p1
.end method

.method private b()V
    .locals 4

    .line 659
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->f:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->D:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_0

    .line 660
    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$3;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$3;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    const-wide/16 v2, 0xc8

    invoke-virtual {v0, v1, v2, v3}, Landroid/widget/RelativeLayout;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V
    .locals 0

    .line 76
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->a()V

    return-void
.end method

.method private b(Landroid/view/View;)Z
    .locals 9

    const/4 v0, 0x0

    .line 557
    :try_start_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_native_ec_layout"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->p:Landroid/widget/RelativeLayout;

    .line 558
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_native_ec_layer_layout"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->q:Landroid/widget/RelativeLayout;

    .line 559
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_iv_adbanner"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->s:Landroid/widget/ImageView;

    .line 560
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_iv_icon"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->t:Landroid/widget/ImageView;

    .line 561
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_iv_flag"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->u:Landroid/widget/ImageView;

    .line 562
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_iv_link"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->v:Landroid/widget/ImageView;

    .line 563
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_tv_apptitle"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->w:Landroid/widget/TextView;

    .line 564
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_sv_starlevel"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/LinearLayout;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->z:Landroid/widget/LinearLayout;

    .line 565
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_sv_heat_count_level"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/LinearLayout;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->A:Landroid/widget/LinearLayout;

    .line 566
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_iv_close"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->S:Landroid/view/View;

    .line 567
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_tv_cta"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 568
    instance-of v2, v1, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    if-eqz v2, :cond_0

    .line 569
    check-cast v1, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->T:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    .line 571
    :cond_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_native_endcard_feed_btn"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/widget/FeedBackButton;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->B:Lcom/mbridge/msdk/widget/FeedBackButton;

    .line 572
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_native_ec_controller"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->D:Landroid/widget/RelativeLayout;

    .line 573
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_iv_adbanner_bg"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->r:Landroid/widget/ImageView;

    .line 574
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v2, "mbridge_animation_click_view"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ac:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    .line 575
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->i:Z

    const/4 v2, 0x5

    const/4 v3, 0x4

    const/4 v4, 0x3

    const/4 v5, 0x2

    const/4 v6, 0x1

    const/4 v7, 0x6

    if-eqz v1, :cond_3

    .line 576
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->s:Landroid/widget/ImageView;

    const/16 v1, 0xa

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->s:Landroid/widget/ImageView;

    instance-of p1, p1, Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    if-eqz p1, :cond_1

    .line 577
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->s:Landroid/widget/ImageView;

    check-cast p1, Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/videocommon/view/RoundImageView;->setBorderRadius(I)V

    .line 579
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->t:Landroid/widget/ImageView;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->t:Landroid/widget/ImageView;

    instance-of p1, p1, Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    if-eqz p1, :cond_2

    .line 580
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->t:Landroid/widget/ImageView;

    check-cast p1, Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/videocommon/view/RoundImageView;->setBorderRadius(I)V

    :cond_2
    new-array p1, v7, [Landroid/view/View;

    .line 582
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->r:Landroid/widget/ImageView;

    aput-object v1, p1, v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->s:Landroid/widget/ImageView;

    aput-object v1, p1, v6

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->t:Landroid/widget/ImageView;

    aput-object v1, p1, v5

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->w:Landroid/widget/TextView;

    aput-object v1, p1, v4

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->z:Landroid/widget/LinearLayout;

    aput-object v1, p1, v3

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->S:Landroid/view/View;

    aput-object v1, p1, v2

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->isNotNULL([Landroid/view/View;)Z

    move-result p1

    return p1

    .line 584
    :cond_3
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v8, "mbridge_tv_appdesc"

    invoke-virtual {p0, v1, v8}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->x:Landroid/widget/TextView;

    .line 585
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v8, "mbridge_tv_number"

    invoke-virtual {p0, v1, v8}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->y:Landroid/widget/TextView;

    const/16 v1, 0x9

    new-array v1, v1, [Landroid/view/View;

    .line 586
    iget-object v8, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->r:Landroid/widget/ImageView;

    aput-object v8, v1, v0

    iget-object v8, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->s:Landroid/widget/ImageView;

    aput-object v8, v1, v6

    iget-object v6, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->t:Landroid/widget/ImageView;

    aput-object v6, v1, v5

    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->w:Landroid/widget/TextView;

    aput-object v5, v1, v4

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->x:Landroid/widget/TextView;

    aput-object v4, v1, v3

    aput-object p1, v1, v2

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->z:Landroid/widget/LinearLayout;

    aput-object p1, v1, v7

    const/4 p1, 0x7

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->S:Landroid/view/View;

    aput-object v2, v1, p1

    const/16 p1, 0x8

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->T:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    aput-object v2, v1, p1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->isNotNULL([Landroid/view/View;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    .line 590
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MBridgeBaseView"

    invoke-static {v2, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return v0
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;Z)Z
    .locals 0

    .line 76
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Landroid/widget/ImageView;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->s:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;Z)Z
    .locals 0

    .line 76
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->K:Z

    return p1
.end method

.method static synthetic d(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Landroid/widget/ImageView;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->r:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Landroid/graphics/Bitmap;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->R:Landroid/graphics/Bitmap;

    return-object p0
.end method

.method static synthetic f(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Z
    .locals 0

    .line 76
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->F:Z

    return p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Ljava/lang/String;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->V:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Lcom/mbridge/msdk/widget/MBDownloadProgressBar;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->T:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    return-object p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Landroid/widget/RelativeLayout;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->D:Landroid/widget/RelativeLayout;

    return-object p0
.end method

.method static synthetic j(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)I
    .locals 0

    .line 76
    iget p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->M:I

    return p0
.end method

.method static synthetic k(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)I
    .locals 0

    .line 76
    iget p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->O:I

    return p0
.end method

.method static synthetic l(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)I
    .locals 0

    .line 76
    iget p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->N:I

    return p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)I
    .locals 0

    .line 76
    iget p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->P:I

    return p0
.end method

.method static synthetic n(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Landroid/view/animation/AlphaAnimation;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->L:Landroid/view/animation/AlphaAnimation;

    return-object p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Z
    .locals 0

    .line 76
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->G:Z

    return p0
.end method

.method static synthetic p(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V
    .locals 5

    .line 6680
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/b/b;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 6681
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->V:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 6683
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->V:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x2

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v4, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$4;

    invoke-direct {v4, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$4;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    invoke-virtual {v0, v1, v4}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/b/a;)V

    .line 6700
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->V:Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1, v4}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 6701
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->V:Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v4, 0x1

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;)V

    .line 6702
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->B:Lcom/mbridge/msdk/widget/FeedBackButton;

    if-eqz v0, :cond_1

    .line 6703
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->V:Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->B:Lcom/mbridge/msdk/widget/FeedBackButton;

    invoke-virtual {v0, v1, p0}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/widget/FeedBackButton;)V

    goto :goto_0

    .line 6706
    :cond_0
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->B:Lcom/mbridge/msdk/widget/FeedBackButton;

    if-eqz p0, :cond_1

    const/16 v0, 0x8

    .line 6707
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/widget/FeedBackButton;->setVisibility(I)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic q(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Z
    .locals 0

    .line 76
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->K:Z

    return p0
.end method

.method static synthetic r(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)Z
    .locals 0

    .line 76
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->J:Z

    return p0
.end method


# virtual methods
.method public blurBitmap(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;
    .locals 5

    .line 617
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v0

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v1

    sget-object v2, Landroid/graphics/Bitmap$Config;->ARGB_4444:Landroid/graphics/Bitmap$Config;

    invoke-static {v0, v1, v2}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v0

    .line 620
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/renderscript/RenderScript;->create(Landroid/content/Context;)Landroid/renderscript/RenderScript;

    move-result-object v1

    .line 623
    invoke-static {v1}, Landroid/renderscript/Element;->U8_4(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/renderscript/ScriptIntrinsicBlur;->create(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlur;

    move-result-object v2

    .line 626
    invoke-static {v1, p1}, Landroid/renderscript/Allocation;->createFromBitmap(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;

    move-result-object p1

    .line 627
    invoke-static {v1, v0}, Landroid/renderscript/Allocation;->createFromBitmap(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;

    move-result-object v3

    const/high16 v4, 0x41c80000    # 25.0f

    .line 630
    invoke-virtual {v2, v4}, Landroid/renderscript/ScriptIntrinsicBlur;->setRadius(F)V

    .line 633
    invoke-virtual {v2, p1}, Landroid/renderscript/ScriptIntrinsicBlur;->setInput(Landroid/renderscript/Allocation;)V

    .line 634
    invoke-virtual {v2, v3}, Landroid/renderscript/ScriptIntrinsicBlur;->forEach(Landroid/renderscript/Allocation;)V

    .line 637
    invoke-virtual {v3, v0}, Landroid/renderscript/Allocation;->copyTo(Landroid/graphics/Bitmap;)V

    .line 640
    invoke-virtual {v1}, Landroid/renderscript/RenderScript;->destroy()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    const/4 p1, 0x0

    return-object p1
.end method

.method protected final c()V
    .locals 2

    .line 462
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->f:Z

    if-eqz v0, :cond_1

    .line 463
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->p:Landroid/widget/RelativeLayout;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$13;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$13;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 471
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->S:Landroid/view/View;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$14;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$14;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 489
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->T:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    if-eqz v0, :cond_0

    .line 490
    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$15;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$15;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 498
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->t:Landroid/widget/ImageView;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$16;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$16;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 507
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->s:Landroid/widget/ImageView;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$2;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$2;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_1
    return-void
.end method

.method public canBackPress()Z
    .locals 1

    .line 425
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->S:Landroid/view/View;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public clearMoreOfferBitmap()V
    .locals 3

    .line 724
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 725
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->W:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->W:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 726
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->W:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 727
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 728
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v2

    .line 729
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/foundation/same/c/b;->c(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public isDyXmlSuccess()Z
    .locals 1

    .line 948
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    return v0
.end method

.method public notifyShowListener()V
    .locals 3

    .line 429
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v1, 0x6e

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 8

    .line 164
    invoke-super {p0}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->onAttachedToWindow()V

    .line 165
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->C:Ljava/lang/Runnable;

    if-nez v0, :cond_0

    .line 166
    new-instance v0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$1;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->C:Ljava/lang/Runnable;

    .line 176
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->C:Ljava/lang/Runnable;

    const-string v1, "1"

    const/4 v2, 0x1

    const-string v3, "MBridgeBaseView"

    if-eqz v0, :cond_4

    .line 177
    iget v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->H:I

    mul-int/lit16 v4, v4, 0x3e8

    int-to-long v4, v4

    invoke-virtual {p0, v0, v4, v5}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 179
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->J:Z

    if-nez v0, :cond_1

    .line 180
    iput-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->J:Z

    .line 1922
    :cond_1
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_4

    .line 1923
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-nez v0, :cond_2

    goto :goto_0

    .line 1927
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    .line 1928
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 1929
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndScreenUrl()Ljava/lang/String;

    move-result-object v0

    :cond_3
    const-string v4, "alac"

    .line 1931
    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1932
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 1934
    new-instance v0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$8;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$8;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    const-wide/16 v4, 0x3e8

    invoke-virtual {p0, v0, v4, v5}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 1943
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_0
    const/4 v0, 0x0

    .line 2885
    :try_start_1
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v4, :cond_7

    .line 2886
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v4

    if-nez v4, :cond_5

    goto :goto_2

    .line 2890
    :cond_5
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v4

    .line 2891
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_6

    .line 2892
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndScreenUrl()Ljava/lang/String;

    move-result-object v4

    :cond_6
    const-string v5, "bait_click"

    .line 2895
    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 2898
    :try_start_2
    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v5
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v5

    .line 2900
    :try_start_3
    invoke-virtual {v5}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    move v5, v2

    .line 2903
    :goto_1
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_7

    if-eqz v5, :cond_7

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ac:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    if-eqz v4, :cond_7

    .line 2904
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ac:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    invoke-virtual {v4, v0}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;->setVisibility(I)V

    .line 2905
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ac:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    const/high16 v6, 0x50000000

    invoke-virtual {v4, v6, v5}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;->init(II)V

    .line 2906
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ac:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    invoke-virtual {v4}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;->startAnimation()V

    .line 2907
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ac:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    new-instance v5, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$7;

    invoke-direct {v5, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$7;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v4

    .line 2916
    invoke-virtual {v4}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3781
    :cond_7
    :goto_2
    :try_start_4
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v4, :cond_14

    .line 3782
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v4

    if-nez v4, :cond_8

    goto/16 :goto_6

    .line 3786
    :cond_8
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v4

    .line 3787
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_9

    .line 3788
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getEndScreenUrl()Ljava/lang/String;

    move-result-object v4

    :cond_9
    const-string v5, "shake_show"

    .line 3790
    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "shake_strength"

    .line 3791
    invoke-static {v4, v6}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v7, "shake_time"

    .line 3792
    invoke-static {v4, v7}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 3794
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_14

    invoke-virtual {v5, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_14

    .line 3795
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->aa:Lcom/mbridge/msdk/shake/MBShakeView;

    if-eqz v1, :cond_a

    goto/16 :goto_6

    .line 3799
    :cond_a
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ac:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    if-eqz v1, :cond_b

    .line 3800
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ac:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    const/16 v5, 0x8

    invoke-virtual {v1, v5}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;->setVisibility(I)V

    .line 3803
    :cond_b
    new-instance v1, Lcom/mbridge/msdk/shake/MBShakeView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-direct {v1, v5}, Lcom/mbridge/msdk/shake/MBShakeView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->aa:Lcom/mbridge/msdk/shake/MBShakeView;

    .line 3804
    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdCall()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5, v2}, Lcom/mbridge/msdk/shake/MBShakeView;->initView(Ljava/lang/String;Z)V

    .line 3806
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 3808
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->isLandscape()Z

    move-result v2

    if-nez v2, :cond_c

    .line 3809
    iget-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->Q:Z

    const-string v5, "mbridge_iv_logo"

    invoke-virtual {p0, v2, v5}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v2

    const/4 v5, 0x2

    .line 3810
    invoke-virtual {v1, v5, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 v2, 0xe

    .line 3811
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 3812
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->aa:Lcom/mbridge/msdk/shake/MBShakeView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v7, 0x41a00000    # 20.0f

    invoke-static {v5, v7}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v5

    invoke-virtual {v2, v0, v0, v0, v5}, Lcom/mbridge/msdk/shake/MBShakeView;->setPadding(IIII)V

    goto :goto_3

    :cond_c
    const/16 v0, 0xd

    .line 3814
    invoke-virtual {v1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 3817
    :goto_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->aa:Lcom/mbridge/msdk/shake/MBShakeView;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/shake/MBShakeView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3819
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->p:Landroid/widget/RelativeLayout;

    if-nez v0, :cond_d

    goto :goto_6

    .line 3823
    :cond_d
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->p:Landroid/widget/RelativeLayout;

    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->isShown()Z

    move-result v0

    if-nez v0, :cond_e

    goto :goto_6

    .line 3827
    :cond_e
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->p:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->aa:Lcom/mbridge/msdk/shake/MBShakeView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 3829
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->T:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    if-eqz v0, :cond_f

    .line 3830
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->T:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->setVisibility(I)V

    .line 3833
    :cond_f
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->aa:Lcom/mbridge/msdk/shake/MBShakeView;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$5;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$5;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/shake/MBShakeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 3841
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/16 v1, 0xa

    if-nez v0, :cond_11

    .line 3842
    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-gtz v0, :cond_10

    goto :goto_4

    :cond_10
    move v1, v0

    .line 3847
    :cond_11
    :goto_4
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/16 v2, 0x1388

    if-nez v0, :cond_13

    .line 3848
    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-gtz v0, :cond_12

    goto :goto_5

    :cond_12
    mul-int/lit16 v0, v0, 0x3e8

    move v2, v0

    .line 3852
    :cond_13
    :goto_5
    new-instance v0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$6;

    invoke-direct {v0, p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$6;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;II)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ab:Lcom/mbridge/msdk/shake/b;

    .line 3875
    invoke-static {}, Lcom/mbridge/msdk/shake/a;->a()Lcom/mbridge/msdk/shake/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ab:Lcom/mbridge/msdk/shake/b;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/shake/a;->a(Landroid/hardware/SensorEventListener;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    goto :goto_6

    :catchall_3
    move-exception v0

    .line 3879
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_14
    :goto_6
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 2

    .line 190
    invoke-super {p0}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->onDetachedFromWindow()V

    .line 191
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->C:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 192
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->removeCallbacks(Ljava/lang/Runnable;)Z

    .line 194
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ab:Lcom/mbridge/msdk/shake/b;

    if-eqz v0, :cond_1

    .line 195
    invoke-static {}, Lcom/mbridge/msdk/shake/a;->a()Lcom/mbridge/msdk/shake/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ab:Lcom/mbridge/msdk/shake/b;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/shake/a;->b(Landroid/hardware/SensorEventListener;)V

    const/4 v0, 0x0

    .line 196
    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ab:Lcom/mbridge/msdk/shake/b;

    :cond_1
    return-void
.end method

.method public onSelfConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 2

    .line 403
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 404
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 405
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 409
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->D:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_1

    const/4 v1, 0x4

    .line 410
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 412
    :cond_1
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->d:I

    .line 413
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, " native onSelfConfigurationChanged:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->d:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBridgeBaseView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 415
    iget p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->d:I

    const/4 v0, 0x2

    if-ne p1, v0, :cond_2

    .line 416
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->n:Landroid/view/ViewGroup;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->removeView(Landroid/view/View;)V

    .line 417
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->o:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->a(Landroid/view/View;)V

    goto :goto_0

    .line 419
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->o:Landroid/view/ViewGroup;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->removeView(Landroid/view/View;)V

    .line 420
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->n:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->a(Landroid/view/View;)V

    :goto_0
    return-void
.end method

.method public preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V
    .locals 5

    .line 248
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->E:Lcom/mbridge/msdk/video/js/factory/b;

    .line 250
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_d

    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->f:Z

    if-eqz p1, :cond_d

    .line 6275
    new-instance p1, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$10;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$10;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    .line 6300
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    .line 6301
    new-instance p1, Lcom/mbridge/msdk/video/module/a/a/i;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->t:Landroid/widget/ImageView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41000000    # 8.0f

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-direct {p1, v0, v1}, Lcom/mbridge/msdk/video/module/a/a/i;-><init>(Landroid/widget/ImageView;I)V

    .line 6302
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    .line 6303
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->w:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 6305
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->T:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    if-eqz p1, :cond_0

    .line 6306
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->T:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdCall()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->setText(Ljava/lang/String;)V

    .line 6308
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->x:Landroid/widget/TextView;

    if-eqz p1, :cond_1

    .line 6309
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->x:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppDesc()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 6311
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->y:Landroid/widget/TextView;

    if-eqz p1, :cond_2

    .line 6312
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->y:Landroid/widget/TextView;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNumberRating()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 6314
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->z:Landroid/widget/LinearLayout;

    invoke-virtual {p1}, Landroid/widget/LinearLayout;->removeAllViews()V

    .line 6315
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRating()D

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmpg-double p1, v0, v2

    if-gtz p1, :cond_3

    const-wide/high16 v0, 0x4014000000000000L    # 5.0

    .line 6319
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->z:Landroid/widget/LinearLayout;

    instance-of p1, p1, Lcom/mbridge/msdk/videocommon/view/StarLevelView;

    if-eqz p1, :cond_4

    .line 6320
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->z:Landroid/widget/LinearLayout;

    check-cast p1, Lcom/mbridge/msdk/videocommon/view/StarLevelView;

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/videocommon/view/StarLevelView;->initScore(D)V

    .line 6322
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->z:Landroid/widget/LinearLayout;

    instance-of p1, p1, Lcom/mbridge/msdk/video/dynview/widget/MBridgeLevelLayoutView;

    if-eqz p1, :cond_5

    .line 6323
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->z:Landroid/widget/LinearLayout;

    check-cast p1, Lcom/mbridge/msdk/video/dynview/widget/MBridgeLevelLayoutView;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNumberRating()I

    move-result v2

    invoke-virtual {p1, v0, v1, v2}, Lcom/mbridge/msdk/video/dynview/widget/MBridgeLevelLayoutView;->setRatingAndUser(DI)V

    .line 6325
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->z:Landroid/widget/LinearLayout;

    instance-of p1, p1, Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;

    if-eqz p1, :cond_6

    .line 6326
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->z:Landroid/widget/LinearLayout;

    check-cast p1, Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;

    double-to-int v0, v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/dycreator/baseview/MBStarLevelLayoutView;->setRating(I)V

    .line 6328
    :cond_6
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->A:Landroid/widget/LinearLayout;

    if-eqz p1, :cond_7

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->A:Landroid/widget/LinearLayout;

    instance-of p1, p1, Lcom/mbridge/msdk/dycreator/baseview/MBHeatLevelLayoutView;

    if-eqz p1, :cond_7

    .line 6329
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->A:Landroid/widget/LinearLayout;

    check-cast p1, Lcom/mbridge/msdk/dycreator/baseview/MBHeatLevelLayoutView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNumberRating()I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/dycreator/baseview/MBHeatLevelLayoutView;->setHeatCount(I)V

    .line 6331
    :cond_7
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_8

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object p1

    const-string v0, "alecfc=1"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_8

    const/4 p1, 0x1

    .line 6332
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->F:Z

    .line 6334
    :cond_8
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object p1

    .line 6335
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "drawable"

    if-nez v0, :cond_9

    :try_start_1
    const-string v0, "zh"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_9

    .line 6336
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->u:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const-string v3, "mbridge_reward_flag_cn"

    .line 6337
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v4

    .line 6336
    invoke-virtual {v2, v3, v1, v4}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    goto :goto_0

    .line 6339
    :cond_9
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->u:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const-string v3, "mbridge_reward_flag_en"

    .line 6340
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v4

    .line 6339
    invoke-virtual {v2, v3, v1, v4}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 6342
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object p1

    .line 6343
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    const/16 v0, 0x8

    if-eqz p1, :cond_b

    .line 6345
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->az()Ljava/lang/String;

    move-result-object p1

    .line 6346
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_a

    .line 6347
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->v:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 6349
    :cond_a
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->v:Landroid/widget/ImageView;

    new-instance v2, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$11;

    invoke-direct {v2, p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$11;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_1

    .line 6356
    :cond_b
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->v:Landroid/widget/ImageView;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 6358
    :goto_1
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->G:Z

    if-nez p1, :cond_c

    .line 6359
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->S:Landroid/view/View;

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    .line 6362
    :cond_c
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x11

    if-ge p1, v1, :cond_d

    .line 6363
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->r:Landroid/widget/ImageView;

    if-eqz p1, :cond_d

    .line 6364
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->r:Landroid/widget/ImageView;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setVisibility(I)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 254
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBridgeBaseView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_d
    :goto_2
    return-void
.end method

.method public release()V
    .locals 2

    .line 738
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->removeAllViews()V

    .line 739
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->L:Landroid/view/animation/AlphaAnimation;

    if-eqz v0, :cond_0

    .line 740
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->L:Landroid/view/animation/AlphaAnimation;

    invoke-virtual {v0}, Landroid/view/animation/AlphaAnimation;->cancel()V

    :cond_0
    const/4 v0, 0x0

    .line 742
    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->C:Ljava/lang/Runnable;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 744
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeBaseView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public setCloseBtnDelay(I)V
    .locals 0

    .line 125
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->H:I

    return-void
.end method

.method public setLayout()V
    .locals 6

    .line 206
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->i:Z

    if-eqz v0, :cond_0

    .line 4217
    new-instance v0, Lcom/mbridge/msdk/video/dynview/j/c;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/dynview/j/c;-><init>()V

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget v3, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->j:I

    const-string v4, "cn_"

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/mbridge/msdk/video/dynview/j/c;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ILjava/lang/String;)Lcom/mbridge/msdk/video/dynview/c;

    move-result-object v0

    .line 4218
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/b;->a()Lcom/mbridge/msdk/video/dynview/b;

    move-result-object v1

    new-instance v2, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$9;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView$9;-><init>(Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;)V

    invoke-virtual {v1, v0, v2}, Lcom/mbridge/msdk/video/dynview/b;->a(Lcom/mbridge/msdk/video/dynview/c;Lcom/mbridge/msdk/video/dynview/e/g;)V

    goto/16 :goto_4

    .line 4597
    :cond_0
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ad:I

    const-string v1, "mbridge_reward_endcard_native_half_landscape"

    const-string v2, "mbridge_reward_endcard_native_land"

    const-string v3, "mbridge_reward_endcard_native_half_portrait"

    const-string v4, "mbridge_reward_endcard_native_hor"

    if-nez v0, :cond_2

    .line 4598
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->U:Z

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    move-object v3, v4

    .line 4599
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->isLandscape()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 4600
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->U:Z

    if-eqz v0, :cond_5

    goto :goto_2

    :cond_2
    const/4 v5, 0x1

    if-ne v0, v5, :cond_4

    .line 4604
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->U:Z

    if-eqz v0, :cond_3

    goto :goto_1

    :cond_3
    move-object v3, v4

    goto :goto_1

    :cond_4
    const-string v0, ""

    move-object v3, v0

    .line 4606
    :goto_1
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->ad:I

    const/4 v4, 0x2

    if-ne v0, v4, :cond_6

    .line 4607
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->U:Z

    if-eqz v0, :cond_5

    goto :goto_2

    :cond_5
    move-object v1, v2

    :goto_2
    move-object v3, v1

    .line 4610
    :cond_6
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->findLayout(Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_8

    .line 5449
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->isLandscape()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_7

    .line 5450
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v1, v0, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->o:Landroid/view/ViewGroup;

    .line 5451
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->addView(Landroid/view/View;)V

    .line 5452
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->o:Landroid/view/ViewGroup;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b(Landroid/view/View;)Z

    move-result v0

    goto :goto_3

    .line 5454
    :cond_7
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v1, v0, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->n:Landroid/view/ViewGroup;

    .line 5455
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->addView(Landroid/view/View;)V

    .line 5456
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->n:Landroid/view/ViewGroup;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b(Landroid/view/View;)Z

    move-result v0

    .line 4241
    :goto_3
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->f:Z

    .line 4242
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->a()V

    :cond_8
    :goto_4
    return-void
.end method

.method public setMoreOfferCampaignUnit(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;)V
    .locals 2

    .line 713
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 714
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->W:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    if-eqz p1, :cond_0

    .line 715
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->W:Lcom/mbridge/msdk/foundation/entity/CampaignUnit;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getAds()Ljava/util/ArrayList;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    const/4 v0, 0x5

    if-le p1, v0, :cond_0

    .line 716
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->aa:Lcom/mbridge/msdk/shake/MBShakeView;

    if-eqz p1, :cond_0

    .line 717
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x40a00000    # 5.0f

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v0

    const/4 v1, 0x0

    invoke-virtual {p1, v1, v1, v1, v0}, Lcom/mbridge/msdk/shake/MBShakeView;->setPadding(IIII)V

    :cond_0
    return-void
.end method

.method public setNotchPadding(IIII)V
    .locals 4

    .line 649
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "NOTCH NativeEndCard "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x4

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x1

    aput-object v2, v1, v3

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x2

    aput-object v2, v1, v3

    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x3

    aput-object v2, v1, v3

    const-string v2, "%1s-%2s-%3s-%4s"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeBaseView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 650
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->M:I

    .line 651
    iput p2, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->N:I

    .line 652
    iput p3, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->O:I

    .line 653
    iput p4, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->P:I

    .line 655
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->b()V

    return-void
.end method

.method public setOnPause()V
    .locals 1

    const/4 v0, 0x0

    .line 776
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->J:Z

    return-void
.end method

.method public setOnResume()V
    .locals 1

    const/4 v0, 0x1

    .line 772
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->J:Z

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 0

    .line 147
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeNativeEndCardView;->V:Ljava/lang/String;

    return-void
.end method
