.class public Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;
.super Lcom/tkay/expressad/video/bt/module/BTBaseView;


# static fields
.field private static final p:Ljava/lang/String; = "tkay_reward_endcard_native_hor"

.field private static final q:Ljava/lang/String; = "tkay_reward_endcard_native_land"


# instance fields
.field private A:Landroid/widget/TextView;

.field private B:Landroid/widget/TextView;

.field private C:Lcom/tkay/expressad/videocommon/view/StarLevelView;

.field private D:Z

.field private E:Z

.field private F:I

.field private G:Ljava/lang/Runnable;

.field private H:Landroid/view/View;

.field private I:Landroid/view/View;

.field private J:Ljava/lang/String;

.field private K:Lcom/tkay/expressad/video/signal/a/j;

.field private L:Landroid/webkit/WebView;

.field private r:Landroid/view/ViewGroup;

.field private s:Landroid/view/ViewGroup;

.field private t:Landroid/widget/RelativeLayout;

.field private u:Landroid/widget/ImageView;

.field private v:Lcom/tkay/expressad/videocommon/view/RoundImageView;

.field private w:Landroid/widget/ImageView;

.field private x:Landroid/widget/ImageView;

.field private y:Landroid/widget/ImageView;

.field private z:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 52
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 82
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->D:Z

    .line 83
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->E:Z

    .line 84
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->F:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 56
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 82
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->D:Z

    .line 83
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->E:Z

    .line 84
    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->F:I

    return-void
.end method

.method private static a(Landroid/graphics/drawable/Drawable;)Landroid/graphics/Bitmap;
    .locals 5

    .line 443
    :try_start_0
    invoke-virtual {p0}, Landroid/graphics/drawable/Drawable;->getIntrinsicWidth()I

    move-result v0

    .line 444
    invoke-virtual {p0}, Landroid/graphics/drawable/Drawable;->getIntrinsicHeight()I

    move-result v1

    .line 445
    sget-object v2, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    invoke-static {v0, v1, v2}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v2

    .line 446
    new-instance v3, Landroid/graphics/Canvas;

    invoke-direct {v3, v2}, Landroid/graphics/Canvas;-><init>(Landroid/graphics/Bitmap;)V

    const/4 v4, 0x0

    .line 447
    invoke-virtual {p0, v4, v4, v0, v1}, Landroid/graphics/drawable/Drawable;->setBounds(IIII)V

    .line 448
    invoke-virtual {p0, v3}, Landroid/graphics/drawable/Drawable;->draw(Landroid/graphics/Canvas;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v2

    :catchall_0
    move-exception p0

    .line 451
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const/4 p0, 0x0

    return-object p0
.end method

.method private a(FF)V
    .locals 4

    const-string v0, "onClicked"

    .line 457
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->L:Landroid/webkit/WebView;

    if-eqz v1, :cond_0

    .line 459
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 460
    sget v3, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->n:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "id"

    .line 461
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->d:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 462
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "x"

    .line 463
    invoke-static {p1}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, v3, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "y"

    .line 464
    invoke-static {p2}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 465
    invoke-virtual {v1, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 466
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->L:Landroid/webkit/WebView;

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

    .line 468
    :catch_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->L:Landroid/webkit/WebView;

    iget-object p2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->d:Ljava/lang/String;

    invoke-static {p1, v0, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private a(Landroid/view/View;)V
    .locals 1

    if-nez p1, :cond_0

    .line 289
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a:Landroid/content/Context;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->init(Landroid/content/Context;)V

    .line 290
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->preLoadData()V

    return-void

    .line 292
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 293
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 295
    :cond_1
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->addView(Landroid/view/View;)V

    .line 296
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b(Landroid/view/View;)Z

    .line 297
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;FF)V
    .locals 4

    const-string v0, "onClicked"

    .line 2457
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->L:Landroid/webkit/WebView;

    if-eqz v1, :cond_0

    .line 2459
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 2460
    sget v3, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->n:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "id"

    .line 2461
    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->d:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2462
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "x"

    .line 2463
    invoke-static {p1}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, v3, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "y"

    .line 2464
    invoke-static {p2}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 2465
    invoke-virtual {v1, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2466
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->L:Landroid/webkit/WebView;

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

    .line 2468
    :catch_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->L:Landroid/webkit/WebView;

    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->d:Ljava/lang/String;

    invoke-static {p1, v0, p0}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;I)V
    .locals 2

    const/4 v0, 0x0

    .line 2371
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2372
    :try_start_1
    sget-object v0, Lcom/tkay/expressad/foundation/g/a;->ce:Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a(I)Lorg/json/JSONObject;

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

    .line 2374
    :goto_0
    :try_start_2
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    move-object v1, v0

    .line 2376
    :goto_1
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->K:Lcom/tkay/expressad/video/signal/a/j;

    if-eqz p1, :cond_1

    .line 2377
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->K:Lcom/tkay/expressad/video/signal/a/j;

    const/4 p1, 0x1

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_2

    :cond_0
    const-string v0, ""

    :goto_2
    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/video/signal/a/j;->click(ILjava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_1
    return-void

    .line 2380
    :goto_3
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)Z
    .locals 1

    const/4 v0, 0x1

    .line 49
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->E:Z

    return v0
.end method

.method private b()I
    .locals 1

    .line 407
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->isLandscape()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "tkay_reward_endcard_native_land"

    goto :goto_0

    :cond_0
    const-string v0, "tkay_reward_endcard_native_hor"

    .line 410
    :goto_0
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findLayout(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method static synthetic b(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)Landroid/view/View;
    .locals 0

    .line 49
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->H:Landroid/view/View;

    return-object p0
.end method

.method private b(I)Z
    .locals 2

    .line 302
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->isLandscape()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 303
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->f:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->s:Landroid/view/ViewGroup;

    .line 304
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->addView(Landroid/view/View;)V

    .line 305
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->s:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b(Landroid/view/View;)Z

    move-result p1

    return p1

    .line 307
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->f:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->r:Landroid/view/ViewGroup;

    .line 308
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->addView(Landroid/view/View;)V

    .line 309
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->r:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b(Landroid/view/View;)Z

    move-result p1

    return p1
.end method

.method private b(Landroid/view/View;)Z
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "tkay_native_ec_layout"

    .line 386
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->t:Landroid/widget/RelativeLayout;

    const-string v1, "tkay_iv_adbanner_bg"

    .line 387
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->u:Landroid/widget/ImageView;

    const-string v1, "tkay_iv_adbanner"

    .line 388
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/videocommon/view/RoundImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->v:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    const-string v1, "tkay_iv_icon"

    .line 389
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->w:Landroid/widget/ImageView;

    const-string v1, "tkay_iv_flag"

    .line 390
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->x:Landroid/widget/ImageView;

    const-string v1, "tkay_iv_link"

    .line 391
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->y:Landroid/widget/ImageView;

    const-string v1, "tkay_tv_apptitle"

    .line 392
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->z:Landroid/widget/TextView;

    const-string v1, "tkay_tv_appdesc"

    .line 393
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->A:Landroid/widget/TextView;

    const-string v1, "tkay_tv_nuater"

    .line 394
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->B:Landroid/widget/TextView;

    const-string v1, "tkay_sv_starlevel"

    .line 395
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/videocommon/view/StarLevelView;

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->C:Lcom/tkay/expressad/videocommon/view/StarLevelView;

    const-string v1, "tkay_iv_close"

    .line 396
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->H:Landroid/view/View;

    const-string v1, "tkay_tv_cta"

    .line 397
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findID(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->I:Landroid/view/View;

    const/16 v1, 0x9

    new-array v1, v1, [Landroid/view/View;

    .line 398
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->u:Landroid/widget/ImageView;

    aput-object v2, v1, v0

    const/4 v2, 0x1

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->v:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    aput-object v3, v1, v2

    const/4 v2, 0x2

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->w:Landroid/widget/ImageView;

    aput-object v3, v1, v2

    const/4 v2, 0x3

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->z:Landroid/widget/TextView;

    aput-object v3, v1, v2

    const/4 v2, 0x4

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->A:Landroid/widget/TextView;

    aput-object v3, v1, v2

    const/4 v2, 0x5

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->B:Landroid/widget/TextView;

    aput-object v3, v1, v2

    const/4 v2, 0x6

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->C:Lcom/tkay/expressad/videocommon/view/StarLevelView;

    aput-object v3, v1, v2

    const/4 v2, 0x7

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->H:Landroid/view/View;

    aput-object v3, v1, v2

    const/16 v2, 0x8

    aput-object p1, v1, v2

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->isNotNULL([Landroid/view/View;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    .line 400
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return v0
.end method

.method static synthetic c(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)Landroid/widget/ImageView;
    .locals 0

    .line 49
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->x:Landroid/widget/ImageView;

    return-object p0
.end method

.method private c(I)V
    .locals 2

    const/4 v0, 0x0

    .line 371
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 372
    :try_start_1
    sget-object v0, Lcom/tkay/expressad/foundation/g/a;->ce:Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a(I)Lorg/json/JSONObject;

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
    move-exception p1

    goto :goto_3

    :catch_1
    move-exception p1

    .line 374
    :goto_0
    :try_start_2
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    move-object v1, v0

    .line 376
    :goto_1
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->K:Lcom/tkay/expressad/video/signal/a/j;

    if-eqz p1, :cond_1

    .line 377
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->K:Lcom/tkay/expressad/video/signal/a/j;

    const/4 v0, 0x1

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_2

    :cond_0
    const-string v1, ""

    :goto_2
    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/video/signal/a/j;->click(ILjava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_1
    return-void

    .line 380
    :goto_3
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)Z
    .locals 0

    .line 49
    iget-boolean p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->D:Z

    return p0
.end method

.method static synthetic e(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)Landroid/webkit/WebView;
    .locals 0

    .line 49
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->L:Landroid/webkit/WebView;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)Ljava/lang/String;
    .locals 0

    .line 49
    iget-object p0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->J:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method protected final a()V
    .locals 2

    .line 315
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->h:Z

    if-eqz v0, :cond_0

    .line 316
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->t:Landroid/widget/RelativeLayout;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$4;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$4;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)V

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 325
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->H:Landroid/view/View;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$5;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$5;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 343
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->I:Landroid/view/View;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$6;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$6;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 350
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->w:Landroid/widget/ImageView;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$7;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$7;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 357
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->v:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    new-instance v1, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$8;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$8;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method public blurBitmap(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;
    .locals 6

    .line 416
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v0

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v1

    sget-object v2, Landroid/graphics/Bitmap$Config;->ARGB_8888:Landroid/graphics/Bitmap$Config;

    invoke-static {v0, v1, v2}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v0

    .line 418
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/renderscript/RenderScript;->create(Landroid/content/Context;)Landroid/renderscript/RenderScript;

    move-result-object v1

    .line 420
    invoke-static {v1}, Landroid/renderscript/Element;->U8_4(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/renderscript/ScriptIntrinsicBlur;->create(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlur;

    move-result-object v2

    .line 422
    invoke-static {v1, p1}, Landroid/renderscript/Allocation;->createFromBitmap(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;

    move-result-object v3

    .line 423
    invoke-static {v1, v0}, Landroid/renderscript/Allocation;->createFromBitmap(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;

    move-result-object v4

    const/high16 v5, 0x41200000    # 10.0f

    .line 425
    invoke-virtual {v2, v5}, Landroid/renderscript/ScriptIntrinsicBlur;->setRadius(F)V

    .line 427
    invoke-virtual {v2, v3}, Landroid/renderscript/ScriptIntrinsicBlur;->setInput(Landroid/renderscript/Allocation;)V

    .line 428
    invoke-virtual {v2, v4}, Landroid/renderscript/ScriptIntrinsicBlur;->forEach(Landroid/renderscript/Allocation;)V

    .line 430
    invoke-virtual {v4, v0}, Landroid/renderscript/Allocation;->copyTo(Landroid/graphics/Bitmap;)V

    .line 431
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->recycle()V

    .line 433
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

    .line 1407
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->isLandscape()Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "tkay_reward_endcard_native_land"

    goto :goto_0

    :cond_0
    const-string p1, "tkay_reward_endcard_native_hor"

    .line 1410
    :goto_0
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->findLayout(Ljava/lang/String;)I

    move-result p1

    if-lez p1, :cond_2

    .line 2302
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->isLandscape()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 2303
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->f:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->s:Landroid/view/ViewGroup;

    .line 2304
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->addView(Landroid/view/View;)V

    .line 2305
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->s:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b(Landroid/view/View;)Z

    move-result p1

    goto :goto_1

    .line 2307
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->f:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->r:Landroid/view/ViewGroup;

    .line 2308
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->addView(Landroid/view/View;)V

    .line 2309
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->r:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b(Landroid/view/View;)Z

    move-result p1

    .line 114
    :goto_1
    iput-boolean p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->h:Z

    .line 115
    invoke-virtual {p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a()V

    :cond_2
    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 7

    .line 121
    invoke-super {p0}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->onAttachedToWindow()V

    .line 122
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->G:Ljava/lang/Runnable;

    if-nez v0, :cond_0

    .line 123
    new-instance v0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$1;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->G:Ljava/lang/Runnable;

    .line 133
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->G:Ljava/lang/Runnable;

    if-eqz v0, :cond_1

    .line 134
    iget v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->F:I

    mul-int/lit16 v1, v1, 0x3e8

    int-to-long v1, v1

    invoke-virtual {p0, v0, v1, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 136
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->h:Z

    const-string v1, "data"

    const-string v2, "unitId"

    const/4 v3, 0x2

    const-string v4, "id"

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->L:Landroid/webkit/WebView;

    if-eqz v0, :cond_2

    .line 137
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 139
    :try_start_0
    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->d:Ljava/lang/String;

    invoke-virtual {v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 140
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    .line 141
    iget-object v6, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->J:Ljava/lang/String;

    invoke-virtual {v5, v2, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 142
    invoke-virtual {v0, v1, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 143
    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "NativeEC Call H5 onCloseBtnClicked "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v5

    .line 145
    invoke-virtual {v5}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 147
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->L:Landroid/webkit/WebView;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    const-string v6, "onCloseBtnClicked"

    invoke-static {v5, v6, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 149
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->L:Landroid/webkit/WebView;

    if-eqz v0, :cond_3

    .line 150
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 152
    :try_start_1
    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->d:Ljava/lang/String;

    invoke-virtual {v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 153
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    .line 154
    iget-object v5, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->J:Ljava/lang/String;

    invoke-virtual {v4, v2, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 155
    invoke-virtual {v0, v1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 156
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "NativeEC Call H5 onEndCardShow "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v1

    .line 158
    invoke-virtual {v1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 160
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->L:Landroid/webkit/WebView;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    const-string v2, "onNativeECShow"

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public onDestory()V
    .locals 0

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    .line 166
    invoke-super {p0}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->onDetachedFromWindow()V

    .line 167
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->G:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 168
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->removeCallbacks(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public onSelfConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    .line 276
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 277
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    iput p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->g:I

    .line 278
    iget p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->g:I

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    .line 279
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->r:Landroid/view/ViewGroup;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->removeView(Landroid/view/View;)V

    .line 280
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->s:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a(Landroid/view/View;)V

    return-void

    .line 282
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->s:Landroid/view/ViewGroup;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->removeView(Landroid/view/View;)V

    .line 283
    iget-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->r:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a(Landroid/view/View;)V

    return-void
.end method

.method public preLoadData()V
    .locals 4

    .line 174
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_8

    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->h:Z

    if-eqz v0, :cond_8

    .line 175
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->e:Lcom/tkay/expressad/videocommon/e/d;

    if-eqz v0, :cond_0

    .line 176
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->e:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->p()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->F:I

    .line 178
    :cond_0
    new-instance v0, Lcom/tkay/expressad/video/module/a/a/e;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->v:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b:Lcom/tkay/expressad/foundation/d/c;

    iget-object v3, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->J:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/video/module/a/a/e;-><init>(Landroid/widget/ImageView;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    .line 179
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 181
    new-instance v0, Lcom/tkay/expressad/video/module/a/a/j;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->w:Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41000000    # 8.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a/j;-><init>(Landroid/widget/ImageView;I)V

    .line 182
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 184
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->z:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 185
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->A:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bc()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 186
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->B:Landroid/widget/TextView;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aY()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 187
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->C:Lcom/tkay/expressad/videocommon/view/StarLevelView;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/view/StarLevelView;->removeAllViews()V

    .line 188
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aX()D

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmpg-double v2, v0, v2

    if-gtz v2, :cond_1

    const-wide/high16 v0, 0x4014000000000000L    # 5.0

    .line 192
    :cond_1
    iget-object v2, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->C:Lcom/tkay/expressad/videocommon/view/StarLevelView;

    invoke-virtual {v2, v0, v1}, Lcom/tkay/expressad/videocommon/view/StarLevelView;->initScore(D)V

    .line 193
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x11

    const/16 v2, 0x8

    if-ge v0, v1, :cond_2

    .line 194
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->u:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    return-void

    .line 198
    :cond_2
    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->v:Lcom/tkay/expressad/videocommon/view/RoundImageView;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->getDrawable()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    .line 199
    invoke-static {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a(Landroid/graphics/drawable/Drawable;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 201
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->blurBitmap(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 203
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->u:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 207
    :catchall_0
    :try_start_2
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->u:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 210
    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    const-string v1, "alecfc=1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    const/4 v0, 0x1

    .line 211
    iput-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->D:Z

    .line 223
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aE()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    const-string v0, "https://mores.toponad.com/image/default/mintegral_logo.png"

    goto :goto_1

    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aE()Ljava/lang/String;

    move-result-object v0

    .line 225
    :goto_1
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v1

    new-instance v3, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$2;

    invoke-direct {v3, p0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$2;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;)V

    invoke-virtual {v1, v0, v3}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 249
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    .line 250
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 252
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->J()Ljava/lang/String;

    move-result-object v0

    .line 253
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 254
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->y:Landroid/widget/ImageView;

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 256
    :cond_6
    iget-object v1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->y:Landroid/widget/ImageView;

    new-instance v3, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$3;

    invoke-direct {v3, p0, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC$3;-><init>(Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;Ljava/lang/String;)V

    invoke-virtual {v1, v3}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_2

    .line 263
    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->y:Landroid/widget/ImageView;

    invoke-virtual {v0, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 265
    :goto_2
    iget-boolean v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->E:Z

    if-nez v0, :cond_8

    .line 266
    iget-object v0, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->H:Landroid/view/View;

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :cond_8
    return-void

    :catchall_1
    move-exception v0

    .line 270
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setCreateWebView(Landroid/webkit/WebView;)V
    .locals 0

    .line 107
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->L:Landroid/webkit/WebView;

    return-void
.end method

.method public setJSCommon(Lcom/tkay/expressad/video/signal/a/j;)V
    .locals 0

    .line 100
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->K:Lcom/tkay/expressad/video/signal/a/j;

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->J:Ljava/lang/String;

    return-void
.end method
