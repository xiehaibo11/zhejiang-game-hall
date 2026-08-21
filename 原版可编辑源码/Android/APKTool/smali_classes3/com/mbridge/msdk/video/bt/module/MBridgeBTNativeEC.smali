.class public Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;
.super Lcom/mbridge/msdk/video/bt/module/BTBaseView;
.source "MBridgeBTNativeEC.java"


# instance fields
.field private A:Landroid/widget/TextView;

.field private B:Lcom/mbridge/msdk/videocommon/view/StarLevelView;

.field private C:Z

.field private D:Z

.field private E:I

.field private F:Ljava/lang/Runnable;

.field private G:Z

.field private H:Landroid/view/View;

.field private I:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

.field private J:Ljava/lang/String;

.field private K:Lcom/mbridge/msdk/video/js/a/j;

.field private L:Landroid/webkit/WebView;

.field private p:Landroid/view/ViewGroup;

.field private q:Landroid/view/ViewGroup;

.field private r:Landroid/widget/RelativeLayout;

.field private s:Landroid/widget/ImageView;

.field private t:Lcom/mbridge/msdk/videocommon/view/RoundImageView;

.field private u:Landroid/widget/ImageView;

.field private v:Landroid/widget/ImageView;

.field private w:Landroid/widget/ImageView;

.field private x:Landroid/widget/ImageView;

.field private y:Landroid/widget/TextView;

.field private z:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 57
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 94
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->C:Z

    .line 95
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->D:Z

    .line 96
    iput p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->E:I

    .line 98
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->G:Z

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 61
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 94
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->C:Z

    .line 95
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->D:Z

    .line 96
    iput p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->E:I

    .line 98
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->G:Z

    return-void
.end method

.method private a(Landroid/graphics/drawable/Drawable;)Landroid/graphics/Bitmap;
    .locals 5

    .line 473
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v0

    .line 474
    invoke-virtual {p1}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v1

    .line 475
    sget-object v2, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    invoke-static {v0, v1, v2}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v2

    .line 476
    new-instance v3, Landroid/graphics/Canvas;

    invoke-direct {v3, v2}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    const/4 v4, 0x0

    .line 477
    invoke-virtual {p1, v4, v4, v0, v1}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 478
    invoke-virtual {p1, v3}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v2

    :catchall_0
    move-exception p1

    .line 481
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "BTBaseView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;)Landroid/view/View;
    .locals 0

    .line 54
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->H:Landroid/view/View;

    return-object p0
.end method

.method private a(Landroid/view/View;)V
    .locals 1

    if-nez p1, :cond_0

    .line 293
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->a:Landroid/content/Context;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->init(Landroid/content/Context;)V

    .line 294
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->preLoadData()V

    goto :goto_0

    .line 296
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 297
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 299
    :cond_1
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->addView(Landroid/view/View;)V

    .line 300
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b(Landroid/view/View;)Z

    .line 301
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->a()V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;FF)V
    .locals 4

    const-string v0, "onClicked"

    .line 2487
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->L:Landroid/webkit/WebView;

    if-eqz v1, :cond_0

    .line 2489
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 2490
    sget v3, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->n:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "id"

    .line 2491
    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->d:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2492
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "x"

    .line 2493
    invoke-static {p1}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, v3, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "y"

    .line 2494
    invoke-static {p2}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 2495
    invoke-virtual {v1, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2496
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->L:Landroid/webkit/WebView;

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

    .line 2498
    :catch_0
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->L:Landroid/webkit/WebView;

    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->d:Ljava/lang/String;

    invoke-virtual {p1, p2, v0, p0}, Lcom/mbridge/msdk/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;ILandroid/content/Context;)V
    .locals 2

    const/4 v0, 0x0

    .line 2384
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2385
    :try_start_1
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->p:Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->a(I)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {v1, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    move-exception p1

    move-object v0, v1

    goto :goto_0

    :catchall_0
    move-exception p0

    goto :goto_3

    :catch_1
    move-exception p1

    .line 2387
    :goto_0
    :try_start_2
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    move-object v1, v0

    .line 2389
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->K:Lcom/mbridge/msdk/video/js/a/j;

    if-eqz p1, :cond_3

    if-eqz p2, :cond_0

    .line 2390
    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    if-eq p2, p1, :cond_0

    .line 2391
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->K:Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/video/js/a/j;->a(Landroid/content/Context;)V

    .line 2393
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_1

    .line 2394
    invoke-static {}, Lcom/mbridge/msdk/video/bt/a/c;->a()Lcom/mbridge/msdk/video/bt/a/c;

    move-result-object p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->J:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/video/bt/a/c;->d(Ljava/lang/String;)Landroid/app/Activity;

    move-result-object p1

    .line 2395
    iget-object p2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->K:Lcom/mbridge/msdk/video/js/a/j;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/video/js/a/j;->a(Landroid/app/Activity;)V

    .line 2397
    :cond_1
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->K:Lcom/mbridge/msdk/video/js/a/j;

    const/4 p1, 0x1

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    goto :goto_2

    :cond_2
    const-string p2, ""

    :goto_2
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/video/js/a/j;->click(ILjava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_4

    .line 2400
    :goto_3
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "BTBaseView"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_4
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;Z)Z
    .locals 0

    .line 54
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->D:Z

    return p1
.end method

.method private b(Landroid/view/View;)Z
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "mbridge_native_ec_layout"

    .line 406
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->r:Landroid/widget/RelativeLayout;

    const-string v1, "mbridge_iv_adbanner_bg"

    .line 407
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->s:Landroid/widget/ImageView;

    const-string v1, "mbridge_iv_adbanner"

    .line 408
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->t:Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    const-string v1, "mbridge_iv_icon"

    .line 409
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->u:Landroid/widget/ImageView;

    const-string v1, "mbridge_iv_flag"

    .line 410
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->v:Landroid/widget/ImageView;

    const-string v1, "mbridge_iv_link"

    .line 411
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->w:Landroid/widget/ImageView;

    const-string v1, "mbridge_tv_apptitle"

    .line 412
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->y:Landroid/widget/TextView;

    const-string v1, "mbridge_tv_appdesc"

    .line 413
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->z:Landroid/widget/TextView;

    const-string v1, "mbridge_tv_number"

    .line 414
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->A:Landroid/widget/TextView;

    const-string v1, "mbridge_sv_starlevel"

    .line 415
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/videocommon/view/StarLevelView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->B:Lcom/mbridge/msdk/videocommon/view/StarLevelView;

    const-string v1, "mbridge_iv_close"

    .line 416
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->H:Landroid/view/View;

    const-string v1, "mbridge_tv_cta"

    .line 417
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    iput-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->I:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    const-string v1, "mbridge_iv_logo"

    .line 418
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->x:Landroid/widget/ImageView;

    const/16 p1, 0x9

    new-array p1, p1, [Landroid/view/View;

    .line 419
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->s:Landroid/widget/ImageView;

    aput-object v1, p1, v0

    const/4 v1, 0x1

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->t:Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    aput-object v2, p1, v1

    const/4 v1, 0x2

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->u:Landroid/widget/ImageView;

    aput-object v2, p1, v1

    const/4 v1, 0x3

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->y:Landroid/widget/TextView;

    aput-object v2, p1, v1

    const/4 v1, 0x4

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->z:Landroid/widget/TextView;

    aput-object v2, p1, v1

    const/4 v1, 0x5

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->A:Landroid/widget/TextView;

    aput-object v2, p1, v1

    const/4 v1, 0x6

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->B:Lcom/mbridge/msdk/videocommon/view/StarLevelView;

    aput-object v2, p1, v1

    const/4 v1, 0x7

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->H:Landroid/view/View;

    aput-object v2, p1, v1

    const/16 v1, 0x8

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->I:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    aput-object v2, p1, v1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->isNotNULL([Landroid/view/View;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    .line 421
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "BTBaseView"

    invoke-static {v2, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return v0
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;)Z
    .locals 0

    .line 54
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->C:Z

    return p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;)Landroid/webkit/WebView;
    .locals 0

    .line 54
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->L:Landroid/webkit/WebView;

    return-object p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;)Ljava/lang/String;
    .locals 0

    .line 54
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->J:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;)Lcom/mbridge/msdk/widget/MBDownloadProgressBar;
    .locals 0

    .line 54
    iget-object p0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->I:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    return-object p0
.end method


# virtual methods
.method protected final a()V
    .locals 2

    .line 320
    :try_start_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->h:Z

    if-eqz v0, :cond_0

    .line 321
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->r:Landroid/widget/RelativeLayout;

    new-instance v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$3;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$3;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;)V

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 330
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->H:Landroid/view/View;

    new-instance v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$4;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$4;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 348
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->I:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    new-instance v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$5;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$5;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 355
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->u:Landroid/widget/ImageView;

    new-instance v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$6;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$6;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 365
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->t:Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    new-instance v1, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$7;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$7;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/view/RoundImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 376
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BTBaseView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public blurBitmap(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;
    .locals 6

    .line 438
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v0

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v1

    sget-object v2, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    invoke-static {v0, v1, v2}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v0

    .line 441
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/renderscript/RenderScript;->create(Landroid/content/Context;)Landroid/renderscript/RenderScript;

    move-result-object v1

    .line 444
    invoke-static {v1}, Landroid/renderscript/Element;->U8_4(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/renderscript/ScriptIntrinsicBlur;->create(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlur;

    move-result-object v2

    .line 447
    invoke-static {v1, p1}, Landroid/renderscript/Allocation;->createFromBitmap(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;

    move-result-object v3

    .line 448
    invoke-static {v1, v0}, Landroid/renderscript/Allocation;->createFromBitmap(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;

    move-result-object v4

    const/high16 v5, 0x41200000    # 10.0f

    .line 451
    invoke-virtual {v2, v5}, Landroid/renderscript/ScriptIntrinsicBlur;->setRadius(F)V

    .line 454
    invoke-virtual {v2, v3}, Landroid/renderscript/ScriptIntrinsicBlur;->setInput(Landroid/renderscript/Allocation;)V

    .line 455
    invoke-virtual {v2, v4}, Landroid/renderscript/ScriptIntrinsicBlur;->forEach(Landroid/renderscript/Allocation;)V

    .line 458
    invoke-virtual {v4, v0}, Landroid/renderscript/Allocation;->copyTo(Landroid/graphics/Bitmap;)V

    .line 460
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->recycle()V

    .line 463
    invoke-virtual {v1}, Landroid/renderscript/RenderScript;->destroy()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public init(Landroid/content/Context;)V
    .locals 2

    .line 1428
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->isLandscape()Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "mbridge_reward_endcard_native_land"

    goto :goto_0

    :cond_0
    const-string p1, "mbridge_reward_endcard_native_hor"

    .line 1431
    :goto_0
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->findLayout(Ljava/lang/String;)I

    move-result p1

    if-lez p1, :cond_2

    .line 2306
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->isLandscape()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 2307
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->f:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->q:Landroid/view/ViewGroup;

    .line 2308
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->addView(Landroid/view/View;)V

    .line 2309
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->q:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b(Landroid/view/View;)Z

    move-result p1

    goto :goto_1

    .line 2311
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->f:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->p:Landroid/view/ViewGroup;

    .line 2312
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->addView(Landroid/view/View;)V

    .line 2313
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->p:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b(Landroid/view/View;)Z

    move-result p1

    .line 129
    :goto_1
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->h:Z

    .line 130
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->a()V

    :cond_2
    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 9

    .line 136
    invoke-super {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->onAttachedToWindow()V

    .line 137
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->F:Ljava/lang/Runnable;

    if-nez v0, :cond_0

    .line 138
    new-instance v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$1;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->F:Ljava/lang/Runnable;

    .line 148
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->F:Ljava/lang/Runnable;

    if-eqz v0, :cond_1

    .line 149
    iget v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->E:I

    mul-int/lit16 v1, v1, 0x3e8

    int-to-long v1, v1

    invoke-virtual {p0, v0, v1, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 151
    :cond_1
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->h:Z

    const-string v1, "data"

    const-string v2, "unitId"

    const/4 v3, 0x2

    const-string v4, "id"

    const-string v5, "BTBaseView"

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->L:Landroid/webkit/WebView;

    if-eqz v0, :cond_2

    .line 152
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 154
    :try_start_0
    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->d:Ljava/lang/String;

    invoke-virtual {v0, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 155
    new-instance v6, Lorg/json/JSONObject;

    invoke-direct {v6}, Lorg/json/JSONObject;-><init>()V

    .line 156
    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->J:Ljava/lang/String;

    invoke-virtual {v6, v2, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 157
    invoke-virtual {v0, v1, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 158
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "NativeEC Call H5 onCloseBtnClicked "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v6

    .line 160
    invoke-virtual {v6}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 162
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v6

    iget-object v7, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->L:Landroid/webkit/WebView;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    const-string v8, "onCloseBtnClicked"

    invoke-virtual {v6, v7, v8, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 164
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->L:Landroid/webkit/WebView;

    if-eqz v0, :cond_3

    .line 165
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 167
    :try_start_1
    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->d:Ljava/lang/String;

    invoke-virtual {v0, v4, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 168
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    .line 169
    iget-object v6, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->J:Ljava/lang/String;

    invoke-virtual {v4, v2, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 170
    invoke-virtual {v0, v1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 171
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "NativeEC Call H5 onEndCardShow "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v5, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v1

    .line 173
    invoke-virtual {v1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v5, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 175
    :goto_1
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->L:Landroid/webkit/WebView;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    const-string v3, "onNativeECShow"

    invoke-virtual {v1, v2, v3, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public onDestory()V
    .locals 0

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    .line 181
    invoke-super {p0}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->onDetachedFromWindow()V

    .line 182
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->F:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 183
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->removeCallbacks(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public onSelfConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    .line 278
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/bt/module/BTBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 279
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    iput p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->g:I

    .line 280
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, " native onSelfConfigurationChanged:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->g:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "BTBaseView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 282
    iget p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->g:I

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    .line 283
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->p:Landroid/view/ViewGroup;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->removeView(Landroid/view/View;)V

    .line 284
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->q:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->a(Landroid/view/View;)V

    goto :goto_0

    .line 286
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->q:Landroid/view/ViewGroup;

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->removeView(Landroid/view/View;)V

    .line 287
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->p:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->a(Landroid/view/View;)V

    :goto_0
    return-void
.end method

.method public preLoadData()V
    .locals 7

    .line 189
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_b

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->h:Z

    if-eqz v0, :cond_b

    .line 190
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbd()I

    move-result v0

    const/4 v1, -0x2

    if-le v0, v1, :cond_0

    .line 191
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCbd()I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->E:I

    goto :goto_0

    .line 192
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->e:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v0, :cond_1

    .line 193
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->e:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->p()I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->E:I

    .line 195
    :cond_1
    :goto_0
    new-instance v0, Lcom/mbridge/msdk/video/module/a/a/d;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->t:Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->J:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/mbridge/msdk/video/module/a/a/d;-><init>(Landroid/widget/ImageView;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    .line 196
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2, v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    .line 198
    new-instance v0, Lcom/mbridge/msdk/video/module/a/a/i;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->u:Landroid/widget/ImageView;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41000000    # 8.0f

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/video/module/a/a/i;-><init>(Landroid/widget/ImageView;I)V

    .line 199
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2, v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    .line 201
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->y:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 202
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->z:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppDesc()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 203
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->A:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNumberRating()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 204
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->B:Lcom/mbridge/msdk/videocommon/view/StarLevelView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/view/StarLevelView;->removeAllViews()V

    .line 205
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->I:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->setUniqueKey(Ljava/lang/String;)V

    .line 206
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->I:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->setLinkType(I)V

    .line 207
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->I:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->setCtaldtypeUrl(Ljava/lang/String;)V

    .line 208
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->I:Lcom/mbridge/msdk/widget/MBDownloadProgressBar;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdCall()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->setText(Ljava/lang/String;)V

    .line 209
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRating()D

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmpg-double v2, v0, v2

    if-gtz v2, :cond_2

    const-wide/high16 v0, 0x4014000000000000L    # 5.0

    .line 213
    :cond_2
    iget-object v2, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->B:Lcom/mbridge/msdk/videocommon/view/StarLevelView;

    invoke-virtual {v2, v0, v1}, Lcom/mbridge/msdk/videocommon/view/StarLevelView;->initScore(D)V

    .line 214
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x11

    const/16 v2, 0x8

    if-ge v0, v1, :cond_3

    .line 215
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->s:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    return-void

    .line 219
    :cond_3
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->t:Lcom/mbridge/msdk/videocommon/view/RoundImageView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/view/RoundImageView;->getDrawable()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    .line 220
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->a(Landroid/graphics/drawable/Drawable;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 222
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->blurBitmap(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 224
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->s:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    .line 228
    :catchall_0
    :try_start_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->s:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 231
    :cond_4
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    const-string v3, "alecfc=1"

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 232
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->C:Z

    .line 235
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getendcard_url()Ljava/lang/String;

    move-result-object v0

    const-string v3, "wlgo=1"

    invoke-virtual {v0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 236
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->G:Z

    .line 239
    :cond_6
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v0

    .line 240
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const-string v3, "drawable"

    if-nez v1, :cond_7

    :try_start_3
    const-string v1, "zh"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 241
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->v:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v5, "mbridge_reward_flag_cn"

    .line 242
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v6

    .line 241
    invoke-virtual {v4, v5, v3, v6}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    goto :goto_2

    .line 244
    :cond_7
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->v:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v5, "mbridge_reward_flag_en"

    .line 245
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v6

    .line 244
    invoke-virtual {v4, v5, v3, v6}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 247
    :goto_2
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->G:Z

    if-nez v0, :cond_8

    .line 248
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->v:Landroid/widget/ImageView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 249
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->x:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 251
    :cond_8
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    .line 252
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-eqz v0, :cond_a

    .line 254
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->az()Ljava/lang/String;

    move-result-object v0

    .line 255
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_9

    .line 256
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->w:Landroid/widget/ImageView;

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 258
    :cond_9
    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->w:Landroid/widget/ImageView;

    new-instance v3, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$2;

    invoke-direct {v3, p0, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC$2;-><init>(Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;Ljava/lang/String;)V

    invoke-virtual {v1, v3}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_3

    .line 265
    :cond_a
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->w:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 267
    :goto_3
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->D:Z

    if-nez v0, :cond_b

    .line 268
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->H:Landroid/view/View;

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_4

    :catchall_1
    move-exception v0

    .line 272
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BTBaseView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    :goto_4
    return-void
.end method

.method public setCreateWebView(Landroid/webkit/WebView;)V
    .locals 0

    .line 122
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->L:Landroid/webkit/WebView;

    return-void
.end method

.method public setJSCommon(Lcom/mbridge/msdk/video/js/a/j;)V
    .locals 0

    .line 115
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->K:Lcom/mbridge/msdk/video/js/a/j;

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 0

    .line 109
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTNativeEC;->J:Ljava/lang/String;

    return-void
.end method
