.class public Lcom/tkay/expressad/video/bt/module/TkayBTWebView;
.super Lcom/tkay/expressad/video/bt/module/BTBaseView;

# interfaces
.implements Lcom/tkay/expressad/atsignalcommon/mraid/IMraidJSBridge;


# static fields
.field private static final s:Ljava/lang/String; = "portrait"

.field private static final t:Ljava/lang/String; = "landscape"


# instance fields
.field private A:Lcom/tkay/expressad/video/signal/a/j;

.field private B:Landroid/webkit/WebView;

.field private p:Ljava/lang/String;

.field private q:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private u:Z

.field private v:Landroid/widget/ImageView;

.field private w:Z

.field private x:Lcom/tkay/expressad/videocommon/e/d;

.field private y:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 113
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 44
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->u:Z

    .line 47
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->w:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 117
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 44
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->u:Z

    .line 47
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->w:Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TkayBTWebView;Landroid/webkit/WebView;)Landroid/webkit/WebView;
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->B:Landroid/webkit/WebView;

    return-object p1
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TkayBTWebView;)Lcom/tkay/expressad/video/signal/a/j;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TkayBTWebView;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->p:Ljava/lang/String;

    return-object p1
.end method

.method private a(Lcom/tkay/expressad/atsignalcommon/base/c;)V
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 128
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setFilter(Lcom/tkay/expressad/atsignalcommon/base/a;)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/video/bt/module/TkayBTWebView;)Landroid/webkit/WebView;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->B:Landroid/webkit/WebView;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/expressad/video/bt/module/TkayBTWebView;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->q:Ljava/lang/String;

    return-object p1
.end method

.method private b()V
    .locals 1

    .line 444
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 450
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/video/bt/module/TkayBTWebView;)Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/expressad/video/bt/module/TkayBTWebView;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->r:Ljava/lang/String;

    return-object p1
.end method


# virtual methods
.method public broadcast(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 4

    const-string v0, "broadcast"

    .line 351
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v1, :cond_0

    .line 353
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 354
    sget v3, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->n:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "id"

    .line 355
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->d:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "eventName"

    .line 356
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 357
    invoke-virtual {v1, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 358
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v1, 0x2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, v0, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 360
    :catch_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->d:Ljava/lang/String;

    invoke-static {p1, v0, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public close()V
    .locals 3

    .line 456
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->B:Landroid/webkit/WebView;

    if-eqz v0, :cond_0

    .line 457
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->d:Ljava/lang/String;

    const-string v2, "onPlayerCloseBtnClicked"

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

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
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation

    .line 60
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->y:Ljava/util/List;

    return-object v0
.end method

.method public getFilePath()Ljava/lang/String;
    .locals 1

    .line 93
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->q:Ljava/lang/String;

    return-object v0
.end method

.method public getFileURL()Ljava/lang/String;
    .locals 1

    .line 78
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->p:Ljava/lang/String;

    return-object v0
.end method

.method public getHtml()Ljava/lang/String;
    .locals 1

    .line 101
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->r:Ljava/lang/String;

    return-object v0
.end method

.method public getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 468
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->b:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method

.method public getRewardUnitSetting()Lcom/tkay/expressad/videocommon/e/d;
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->x:Lcom/tkay/expressad/videocommon/e/d;

    return-object v0
.end method

.method public getWebView()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-object v0
.end method

.method public init(Landroid/content/Context;)V
    .locals 3

    .line 135
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const/4 p1, 0x0

    .line 136
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setBackgroundColor(I)V

    .line 137
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setVisibility(I)V

    .line 138
    new-instance p1, Lcom/tkay/expressad/video/signal/a/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->b:Lcom/tkay/expressad/foundation/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->y:Ljava/util/List;

    const/4 v2, 0x0

    invoke-direct {p1, v2, v0, v1}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    .line 139
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->c:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    .line 140
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 141
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1, p0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setMraidObject(Ljava/lang/Object;)V

    .line 142
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    new-instance v0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView$1;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTWebView;)V

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setWebViewListener(Lcom/tkay/expressad/atsignalcommon/windvane/e;)V

    .line 233
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 234
    new-instance p1, Lcom/tkay/expressad/video/bt/module/TkayBTWebView$2;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView$2;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTWebView;)V

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 254
    :try_start_0
    new-instance p1, Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p1, v0}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->v:Landroid/widget/ImageView;

    const-string v0, "tkay_reward_close"

    .line 255
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->findDrawable(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    .line 256
    new-instance p1, Landroid/widget/FrameLayout$LayoutParams;

    const/16 v0, 0x60

    invoke-direct {p1, v0, v0}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    const v0, 0x800035

    .line 257
    iput v0, p1, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    const/16 v0, 0x1e

    .line 258
    invoke-virtual {p1, v0, v0, v0, v0}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    .line 259
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->v:Landroid/widget/ImageView;

    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 260
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->v:Landroid/widget/ImageView;

    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->u:Z

    const/4 v1, 0x4

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    const/16 v0, 0x8

    :goto_0
    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 261
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 262
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->v:Landroid/widget/ImageView;

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 264
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->v:Landroid/widget/ImageView;

    new-instance v0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView$3;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView$3;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTWebView;)V

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 270
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->v:Landroid/widget/ImageView;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->addView(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 272
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public notifyEvent(Ljava/lang/String;)V
    .locals 2

    .line 486
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 487
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->d:Ljava/lang/String;

    invoke-static {v0, p1, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onBackPressed()V
    .locals 3

    .line 385
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 386
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->d:Ljava/lang/String;

    const-string v2, "onSystemBackPressed"

    invoke-static {v0, v2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 4

    .line 367
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    .line 369
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 370
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x2

    const-string v2, "orientation"

    if-ne p1, v1, :cond_0

    :try_start_1
    const-string p1, "landscape"

    .line 371
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_0
    const-string p1, "portrait"

    .line 373
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :goto_0
    const-string p1, "instanceId"

    .line 375
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->d:Ljava/lang/String;

    invoke-virtual {v0, p1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 376
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    .line 377
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {v0, v2, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 379
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method

.method public onDestory()V
    .locals 4

    .line 392
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->w:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 395
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->w:Z

    .line 397
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    .line 398
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const-string v1, "onSystemDestory"

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->d:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 400
    :cond_1
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TkayBTWebView$4;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView$4;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTWebView;)V

    const-wide/16 v2, 0x1f4

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    const/4 v0, 0x0

    .line 419
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 420
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->removeAllViews()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 422
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public open(Ljava/lang/String;)V
    .locals 3

    .line 429
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object v0

    .line 430
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 431
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1, p1}, Lcom/tkay/expressad/foundation/d/c;->p(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1444
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1450
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 434
    :cond_0
    :goto_0
    new-instance p1, Lcom/tkay/expressad/a/a;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->c:Ljava/lang/String;

    invoke-direct {p1, v1, v2}, Lcom/tkay/expressad/a/a;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 436
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->p(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-void

    :catchall_1
    move-exception p1

    .line 438
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public preload()V
    .locals 7

    .line 283
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->p:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 284
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->p:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    return-void

    .line 287
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->q:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 288
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadUrl(Ljava/lang/String;)V

    return-void

    .line 291
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->r:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 292
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->r:Ljava/lang/String;

    const/4 v6, 0x0

    const-string v2, ""

    const-string v4, "text/html"

    const-string v5, "UTF-8"

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public setCampaigns(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 64
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->y:Ljava/util/List;

    return-void
.end method

.method public setCreateWebView(Landroid/webkit/WebView;)V
    .locals 0

    .line 72
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->B:Landroid/webkit/WebView;

    return-void
.end method

.method public setFilePath(Ljava/lang/String;)V
    .locals 0

    .line 97
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->q:Ljava/lang/String;

    return-void
.end method

.method public setFileURL(Ljava/lang/String;)V
    .locals 1

    .line 82
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->p:Ljava/lang/String;

    .line 83
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "play.google.com"

    .line 84
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    xor-int/lit8 v0, p1, 0x1

    .line 85
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setWebviewClickable(Z)V

    if-eqz p1, :cond_0

    .line 87
    new-instance p1, Lcom/tkay/expressad/atsignalcommon/base/c;

    invoke-direct {p1}, Lcom/tkay/expressad/atsignalcommon/base/c;-><init>()V

    .line 1127
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 1128
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setFilter(Lcom/tkay/expressad/atsignalcommon/base/a;)V

    :cond_0
    return-void
.end method

.method public setHtml(Ljava/lang/String;)V
    .locals 0

    .line 105
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->r:Ljava/lang/String;

    return-void
.end method

.method public setRewardUnitSetting(Lcom/tkay/expressad/videocommon/e/d;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->x:Lcom/tkay/expressad/videocommon/e/d;

    return-void
.end method

.method public setWebViewRid(Ljava/lang/String;)V
    .locals 1

    .line 277
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 278
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setRid(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public setWebviewClickable(Z)V
    .locals 1

    .line 121
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 122
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setClickable(Z)V

    :cond_0
    return-void
.end method

.method public unload()V
    .locals 0

    .line 463
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->close()V

    return-void
.end method

.method public useCustomClose(Z)V
    .locals 1

    .line 474
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->v:Landroid/widget/ImageView;

    if-eqz p1, :cond_0

    const/4 p1, 0x4

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-virtual {v0, p1}, Landroid/widget/ImageView;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 476
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public webviewGoBack()Z
    .locals 1

    .line 335
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->canGoBack()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 336
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->goBack()V

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public webviewGoForward()Z
    .locals 1

    .line 343
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->canGoForward()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 344
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->goForward()V

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public webviewLoad(I)V
    .locals 4

    .line 298
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    if-nez v0, :cond_0

    .line 299
    new-instance v0, Lcom/tkay/expressad/video/signal/a/j;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->b:Lcom/tkay/expressad/foundation/d/c;

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->y:Ljava/util/List;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    .line 301
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->b:Lcom/tkay/expressad/foundation/d/c;

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    .line 302
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/foundation/d/c;)V

    goto :goto_0

    .line 303
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->y:Ljava/util/List;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 304
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->y:Ljava/util/List;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/util/List;)V

    .line 305
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->y:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-ne v0, v1, :cond_2

    .line 306
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->y:Ljava/util/List;

    const/4 v3, 0x0

    invoke-interface {v2, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 309
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->x:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz v0, :cond_3

    .line 310
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    invoke-virtual {v2, v0}, Lcom/tkay/expressad/video/signal/a/j;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 312
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->c:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    .line 313
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->d:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/video/signal/a/j;->c(Ljava/lang/String;)V

    if-ne p1, v1, :cond_4

    .line 315
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    invoke-virtual {p1}, Lcom/tkay/expressad/video/signal/a/j;->q()V

    .line 317
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_5

    .line 318
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->A:Lcom/tkay/expressad/video/signal/a/j;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 320
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result p1

    if-eqz p1, :cond_6

    .line 321
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->v:Landroid/widget/ImageView;

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 323
    :cond_6
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->preload()V

    return-void
.end method

.method public webviewReload()Z
    .locals 1

    .line 327
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->z:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 328
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->reload()V

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method
