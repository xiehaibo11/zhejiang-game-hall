.class public Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;
.super Lcom/mbridge/msdk/video/bt/module/BTBaseView;
.source "MBridgeBTWebView.java"

# interfaces
.implements Lcom/mbridge/msdk/click/h;
.implements Lcom/mbridge/msdk/mbjscommon/mraid/b;


# instance fields
.field private p:Ljava/lang/String;

.field private q:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private s:Z

.field private t:Landroid/widget/ImageView;

.field private u:Z

.field private v:Lcom/mbridge/msdk/videocommon/d/c;

.field private w:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private y:Lcom/mbridge/msdk/video/js/a/j;

.field private z:Landroid/webkit/WebView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 139
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 66
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->s:Z

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->u:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 143
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 66
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->s:Z

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->u:Z

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;Landroid/webkit/WebView;)Landroid/webkit/WebView;
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->z:Landroid/webkit/WebView;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;)Lcom/mbridge/msdk/video/js/a/j;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->p:Ljava/lang/String;

    return-object p1
.end method

.method private a(Ljava/lang/String;)V
    .locals 3

    .line 484
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v0

    .line 485
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 486
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V

    .line 487
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b(Ljava/lang/String;)V

    .line 489
    :cond_0
    new-instance p1, Lcom/mbridge/msdk/click/b;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->c:Ljava/lang/String;

    invoke-direct {p1, v1, v2}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 490
    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/h;)V

    .line 491
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 492
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 494
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "BTBaseView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;)Landroid/webkit/WebView;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->z:Landroid/webkit/WebView;

    return-object p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->q:Ljava/lang/String;

    return-object p1
.end method

.method private b(Ljava/lang/String;)V
    .locals 8

    .line 542
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->getMraidCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 544
    new-instance v1, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    .line 545
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->c:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v7

    move-object v6, p1

    invoke-virtual/range {v1 .. v7}, Lcom/mbridge/msdk/foundation/same/report/d;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 548
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "BTBaseView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 51
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->r:Ljava/lang/String;

    return-object p1
.end method

.method static synthetic d(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;Ljava/lang/String;)V
    .locals 0

    .line 51
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->a(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public broadcast(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 4

    const-string v0, "broadcast"

    .line 390
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v1, :cond_0

    .line 392
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 393
    sget v3, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->n:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "id"

    .line 394
    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->d:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "eventName"

    .line 395
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 396
    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 397
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    const/4 v2, 0x2

    invoke-static {v1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, p2, v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 399
    :catch_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->d:Ljava/lang/String;

    invoke-virtual {p1, p2, v0, v1}, Lcom/mbridge/msdk/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public close()V
    .locals 3

    .line 554
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->z:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 555
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->d:Ljava/lang/String;

    const-string v2, "onPlayerCloseBtnClicked"

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public expand(Ljava/lang/String;Z)V
    .locals 0

    return-void
.end method

.method public getCampaigns()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    .line 82
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->w:Ljava/util/List;

    return-object v0
.end method

.method public getFilePath()Ljava/lang/String;
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->q:Ljava/lang/String;

    return-object v0
.end method

.method public getFileURL()Ljava/lang/String;
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->p:Ljava/lang/String;

    return-object v0
.end method

.method public getHtml()Ljava/lang/String;
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->r:Ljava/lang/String;

    return-object v0
.end method

.method public getMraidCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 1

    .line 566
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object v0
.end method

.method public getRewardUnitSetting()Lcom/mbridge/msdk/videocommon/d/c;
    .locals 1

    .line 72
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->v:Lcom/mbridge/msdk/videocommon/d/c;

    return-object v0
.end method

.method public getWebView()Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    return-object v0
.end method

.method public init(Landroid/content/Context;)V
    .locals 4

    .line 161
    new-instance v0, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const/4 p1, 0x0

    .line 162
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setBackgroundColor(I)V

    .line 163
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setVisibility(I)V

    .line 164
    new-instance v0, Lcom/mbridge/msdk/video/js/a/j;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->w:Ljava/util/List;

    const/4 v3, 0x0

    invoke-direct {v0, v3, v1, v2}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    .line 165
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/js/a/j;->a(Ljava/lang/String;)V

    .line 166
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/js/a/j;->c(Z)V

    .line 167
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 168
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setMraidObject(Ljava/lang/Object;)V

    .line 169
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    new-instance v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$1;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;)V

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/mbridge/msdk/mbjscommon/windvane/d;)V

    .line 260
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 261
    new-instance p1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$2;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$2;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;)V

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 281
    :try_start_0
    new-instance p1, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->t:Landroid/widget/ImageView;

    const-string v0, "mbridge_reward_close"

    .line 282
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->findDrawable(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 283
    new-instance p1, Landroid/widget/FrameLayout$LayoutParams;

    const/16 v0, 0x60

    invoke-direct {p1, v0, v0}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const v0, 0x800035

    .line 284
    iput v0, p1, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    const/16 v0, 0x1e

    .line 285
    invoke-virtual {p1, v0, v0, v0, v0}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    .line 286
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->t:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 287
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->t:Landroid/widget/ImageView;

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->s:Z

    const/4 v1, 0x4

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    const/16 v0, 0x8

    :goto_0
    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 288
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 289
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->t:Landroid/widget/ImageView;

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 291
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->t:Landroid/widget/ImageView;

    new-instance v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$3;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$3;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;)V

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 297
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->t:Landroid/widget/ImageView;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->addView(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 299
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "BTBaseView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public notifyEvent(Ljava/lang/String;)V
    .locals 2

    .line 584
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 585
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->d:Ljava/lang/String;

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 3

    .line 311
    invoke-super {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->onAttachedToWindow()V

    .line 312
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    .line 313
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/a/c;->d(Ljava/lang/String;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 315
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/video/js/a/j;->a(Landroid/app/Activity;)V

    :cond_0
    return-void
.end method

.method public onBackPressed()V
    .locals 4

    .line 424
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 425
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->d:Ljava/lang/String;

    const-string v3, "onSystemBackPressed"

    invoke-virtual {v0, v1, v3, v2}, Lcom/mbridge/msdk/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 4

    .line 406
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    .line 408
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 409
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x2

    const-string v2, "orientation"

    if-ne p1, v1, :cond_0

    :try_start_1
    const-string p1, "landscape"

    .line 410
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_0
    const-string p1, "portrait"

    .line 412
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :goto_0
    const-string p1, "instanceId"

    .line 414
    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->d:Ljava/lang/String;

    invoke-virtual {v0, p1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 415
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 416
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0, v1, v2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 418
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method public onDestory()V
    .locals 4

    .line 431
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->u:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 434
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->u:Z

    .line 436
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    .line 437
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const-string v2, "onSystemDestory"

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 439
    :cond_1
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$4;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$4;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;)V

    const-wide/16 v2, 0x1f4

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    const/4 v0, 0x0

    .line 458
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 459
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->removeAllViews()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 461
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BTBaseView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onFinishRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 599
    :cond_0
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 600
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result p2

    const/16 v0, 0x8

    if-ne p2, v0, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAabEntity()Lcom/mbridge/msdk/foundation/entity/AabEntity;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/AabEntity;->getHlp()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_1

    .line 601
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method

.method public onRedirectionFailed(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 610
    :cond_0
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 611
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result p2

    const/16 v0, 0x8

    if-ne p2, v0, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAabEntity()Lcom/mbridge/msdk/foundation/entity/AabEntity;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/AabEntity;->getHlp()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_1

    .line 612
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/view/ViewGroup;)V

    :cond_1
    return-void
.end method

.method public onStartRedirection(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 0

    .line 591
    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Lcom/mbridge/msdk/out/Campaign;Landroid/view/ViewGroup;)V

    return-void
.end method

.method public open(Ljava/lang/String;)V
    .locals 8

    const-string v0, "BTBaseView"

    .line 468
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v1}, Lcom/mbridge/msdk/click/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 469
    new-instance v1, Lcom/mbridge/msdk/click/b;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->c:Ljava/lang/String;

    invoke-direct {v1, v2, v3}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 470
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 471
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1500
    :try_start_1
    new-instance v7, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;

    invoke-direct {v7, p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView$5;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;Ljava/lang/String;)V

    .line 1522
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 1523
    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    if-ne v1, v2, :cond_0

    goto :goto_1

    :cond_0
    :goto_0
    move-object v5, v1

    goto :goto_2

    .line 1524
    :cond_1
    :goto_1
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->c:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/bt/a/c;->d(Ljava/lang/String;)Landroid/app/Activity;

    move-result-object v1

    goto :goto_0

    :goto_2
    if-eqz v5, :cond_3

    .line 1526
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_3

    .line 1527
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->c:Ljava/lang/String;

    const/4 v4, 0x0

    invoke-virtual {v1, v2, v3, v4}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    .line 1621
    sget-object v3, Lcom/mbridge/msdk/videocommon/d/c;->a:Ljava/lang/String;

    .line 1529
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v2

    iget-object v4, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->c:Ljava/lang/String;

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    .line 1530
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->c:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v3

    const-string v4, "onInstallAlertShow"

    invoke-virtual {v1, v2, v3, v4}, Lcom/mbridge/msdk/video/bt/a/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v1

    .line 1534
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1535
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->a(Ljava/lang/String;)V

    goto :goto_3

    .line 474
    :cond_2
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->a(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_3

    :catchall_1
    move-exception v1

    .line 477
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 478
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->a(Ljava/lang/String;)V

    :cond_3
    :goto_3
    return-void
.end method

.method public preload()V
    .locals 7

    .line 321
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->p:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 322
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->p:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    return-void

    .line 325
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->q:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 326
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    return-void

    .line 329
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->r:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 330
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->r:Ljava/lang/String;

    const/4 v6, 0x0

    const-string v2, ""

    const-string v4, "text/html"

    const-string v5, "UTF-8"

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public setCampaigns(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 86
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->w:Ljava/util/List;

    return-void
.end method

.method public setCreateWebView(Landroid/webkit/WebView;)V
    .locals 0

    .line 97
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->z:Landroid/webkit/WebView;

    return-void
.end method

.method public setFilePath(Ljava/lang/String;)V
    .locals 0

    .line 123
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->q:Ljava/lang/String;

    return-void
.end method

.method public setFileURL(Ljava/lang/String;)V
    .locals 1

    .line 107
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->p:Ljava/lang/String;

    .line 108
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "play.google.com"

    .line 109
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    xor-int/lit8 v0, p1, 0x1

    .line 110
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->setWebviewClickable(Z)V

    if-eqz p1, :cond_0

    .line 112
    new-instance p1, Lcom/mbridge/msdk/mbjscommon/base/c;

    invoke-direct {p1}, Lcom/mbridge/msdk/mbjscommon/base/c;-><init>()V

    .line 1154
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 1155
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setFilter(Lcom/mbridge/msdk/mbjscommon/base/a;)V

    :cond_0
    return-void
.end method

.method public setHtml(Ljava/lang/String;)V
    .locals 0

    .line 131
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->r:Ljava/lang/String;

    return-void
.end method

.method public setRewardUnitSetting(Lcom/mbridge/msdk/videocommon/d/c;)V
    .locals 0

    .line 76
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->v:Lcom/mbridge/msdk/videocommon/d/c;

    return-void
.end method

.method public setWebViewRid(Ljava/lang/String;)V
    .locals 1

    .line 304
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 305
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setRid(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public setWebviewClickable(Z)V
    .locals 1

    .line 148
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 149
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setClickable(Z)V

    :cond_0
    return-void
.end method

.method public unload()V
    .locals 0

    .line 561
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->close()V

    return-void
.end method

.method public useCustomClose(Z)V
    .locals 1

    .line 572
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->t:Landroid/widget/ImageView;

    if-eqz p1, :cond_0

    const/4 p1, 0x4

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 574
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "BTBaseView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public webviewGoBack()Z
    .locals 1

    .line 374
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->canGoBack()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 375
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->goBack()V

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public webviewGoForward()Z
    .locals 1

    .line 382
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->canGoForward()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 383
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->goForward()V

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public webviewLoad(I)V
    .locals 4

    .line 336
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    if-nez v0, :cond_0

    .line 337
    new-instance v0, Lcom/mbridge/msdk/video/js/a/j;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->w:Ljava/util/List;

    invoke-direct {v0, v1, v2, v3}, Lcom/mbridge/msdk/video/js/a/j;-><init>(Landroid/app/Activity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    .line 339
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    .line 340
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_0

    .line 341
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->w:Ljava/util/List;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 342
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->w:Ljava/util/List;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/video/js/a/j;->a(Ljava/util/List;)V

    .line 343
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->w:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-ne v0, v1, :cond_2

    .line 344
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->w:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 347
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->v:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v0, :cond_3

    .line 348
    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {v3, v0}, Lcom/mbridge/msdk/video/js/a/j;->a(Lcom/mbridge/msdk/videocommon/d/c;)V

    .line 350
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->c:Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/video/js/a/j;->a(Ljava/lang/String;)V

    .line 351
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->d:Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/video/js/a/j;->c(Ljava/lang/String;)V

    .line 352
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/js/a/j;->c(Z)V

    if-ne p1, v1, :cond_4

    .line 354
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {p1}, Lcom/mbridge/msdk/video/js/a/j;->o()V

    .line 356
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_5

    .line 357
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->y:Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 359
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result p1

    if-eqz p1, :cond_6

    .line 360
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->t:Landroid/widget/ImageView;

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 362
    :cond_6
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->preload()V

    return-void
.end method

.method public webviewReload()Z
    .locals 1

    .line 366
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTWebView;->x:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 367
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->reload()V

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
