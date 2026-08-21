.class public Lcom/tkay/core/basead/ui/web/WebLandPageActivity;
.super Landroid/app/Activity;


# static fields
.field private static final e:I = 0x53d9c


# instance fields
.field a:I

.field b:Lorg/json/JSONArray;

.field c:I

.field d:I

.field private f:Lcom/tkay/core/basead/ui/web/WebProgressBarView;

.field private g:Landroid/webkit/WebView;

.field private h:Landroid/widget/ImageButton;

.field private i:Landroid/widget/ImageButton;

.field private j:Landroid/widget/ImageButton;

.field private k:Landroid/widget/ImageButton;

.field private l:Z

.field private m:Lcom/tkay/core/common/f/h;

.field private n:Lcom/tkay/core/common/f/i;

.field private o:Ljava/lang/String;

.field private p:Lcom/tkay/core/api/IOfferClickHandler;

.field private q:Lcom/tkay/core/basead/ui/web/b;

.field private r:Landroid/webkit/ValueCallback;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/webkit/ValueCallback<",
            "[",
            "Landroid/net/Uri;",
            ">;"
        }
    .end annotation
.end field

.field private final s:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 58
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/16 v0, 0x8

    .line 70
    iput v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a:I

    const/4 v0, 0x0

    .line 408
    iput-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->r:Landroid/webkit/ValueCallback;

    const/16 v0, 0x200

    .line 409
    iput v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->s:I

    const/4 v0, 0x0

    .line 603
    iput v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->c:I

    .line 604
    iput v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->d:I

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;Landroid/webkit/ValueCallback;)Landroid/webkit/ValueCallback;
    .locals 0

    .line 58
    iput-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->r:Landroid/webkit/ValueCallback;

    return-object p1
.end method

.method private a(Landroid/graphics/drawable/Drawable;)Landroid/widget/ImageButton;
    .locals 5

    .line 589
    new-instance v0, Landroid/widget/ImageButton;

    invoke-direct {v0, p0}, Landroid/widget/ImageButton;-><init>(Landroid/content/Context;)V

    .line 591
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    const/high16 v2, 0x420c0000    # 35.0f

    invoke-static {p0, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    const/4 v3, -0x2

    const/high16 v4, 0x3f800000    # 1.0f

    invoke-direct {v1, v3, v2, v4}, Landroid/widget/LinearLayout$LayoutParams;-><init>(IIF)V

    const/16 v2, 0x10

    .line 592
    iput v2, v1, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    .line 593
    invoke-virtual {v0, v1}, Landroid/widget/ImageButton;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    const/4 v1, 0x0

    .line 594
    invoke-virtual {v0, v1}, Landroid/widget/ImageButton;->setBackgroundColor(I)V

    .line 596
    sget-object v1, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v0, v1}, Landroid/widget/ImageButton;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 597
    invoke-virtual {v0, p1}, Landroid/widget/ImageButton;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/common/f/h;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->m:Lcom/tkay/core/common/f/h;

    return-object p0
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/core/basead/b/a;)V
    .locals 3

    .line 76
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 77
    const-class v1, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    .line 79
    iget-object v1, p1, Lcom/tkay/core/basead/b/a;->c:Lcom/tkay/core/common/f/h;

    const-string v2, "extra_offer_ad"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 80
    iget-object v1, p1, Lcom/tkay/core/basead/b/a;->h:Lcom/tkay/core/common/f/i;

    const-string v2, "extra_request_info"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 81
    iget-object v1, p1, Lcom/tkay/core/basead/b/a;->f:Ljava/lang/String;

    const-string v2, "extra_target_url"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 95
    iget-object v1, p1, Lcom/tkay/core/basead/b/a;->g:Lcom/tkay/core/api/IOfferClickHandler;

    if-eqz v1, :cond_0

    .line 96
    iget-object p1, p1, Lcom/tkay/core/basead/b/a;->g:Lcom/tkay/core/api/IOfferClickHandler;

    const-string v1, "extra_click_handler"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    :cond_0
    const/high16 p1, 0x10000000

    .line 100
    invoke-virtual {v0, p1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 101
    invoke-virtual {p0, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 115
    new-instance v0, Lcom/tkay/core/basead/b/a;

    invoke-direct {v0}, Lcom/tkay/core/basead/b/a;-><init>()V

    .line 116
    iput-object p1, v0, Lcom/tkay/core/basead/b/a;->f:Ljava/lang/String;

    .line 118
    invoke-static {p0, v0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/content/Context;Lcom/tkay/core/basead/b/a;)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 7

    .line 245
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    .line 256
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/webkit/WebView;->setHorizontalScrollBarEnabled(Z)V

    .line 257
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v1, v2}, Landroid/webkit/WebView;->setVerticalScrollBarEnabled(Z)V

    .line 258
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v1, v2}, Landroid/webkit/WebView;->setVerticalScrollBarEnabled(Z)V

    .line 259
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v1}, Landroid/webkit/WebView;->requestFocus()Z

    const/4 v1, 0x1

    .line 261
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 262
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    const-wide/32 v3, 0x500000

    .line 263
    invoke-virtual {v0, v3, v4}, Landroid/webkit/WebSettings;->setAppCacheMaxSize(J)V

    .line 264
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 265
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 266
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 267
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 268
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 269
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 270
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 271
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 272
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 273
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 274
    sget-object v3, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {v0, v3}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 276
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x11

    if-lt v3, v4, :cond_0

    .line 277
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setMediaPlaybackRequiresUserGesture(Z)V

    .line 288
    :cond_0
    :try_start_0
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x15

    if-lt v3, v4, :cond_1

    .line 289
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setMixedContentMode(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v3

    .line 292
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 295
    :cond_1
    :goto_0
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0xb

    if-lt v3, v4, :cond_2

    .line 297
    :try_start_1
    const-class v3, Landroid/webkit/WebSettings;

    const-string v4, "setDisplayZoomControls"

    new-array v5, v1, [Ljava/lang/Class;

    sget-object v6, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v6, v5, v2

    invoke-virtual {v3, v4, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    .line 298
    invoke-virtual {v3, v1}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v4, v1, [Ljava/lang/Object;

    .line 299
    sget-object v5, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    aput-object v5, v4, v2

    invoke-virtual {v3, v0, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 305
    :catch_1
    :cond_2
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    const-string v3, "database"

    .line 306
    invoke-virtual {p0, v3, v2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v2

    invoke-virtual {v2}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v2

    .line 307
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setDatabasePath(Ljava/lang/String;)V

    .line 310
    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setGeolocationEnabled(Z)V

    .line 311
    invoke-virtual {v0, v2}, Landroid/webkit/WebSettings;->setGeolocationDatabasePath(Ljava/lang/String;)V

    .line 313
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    new-instance v1, Lcom/tkay/core/basead/ui/web/a;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/a;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 315
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    new-instance v1, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    .line 348
    invoke-static {p1}, Lcom/tkay/core/basead/a/a;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/an;

    move-result-object p1

    .line 349
    iget v0, p1, Lcom/tkay/core/common/f/an;->l:I

    iput v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a:I

    .line 350
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    iget-object p1, p1, Lcom/tkay/core/common/f/an;->o:Ljava/lang/String;

    invoke-virtual {v0, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method private a(Z)V
    .locals 2

    .line 172
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->i:Landroid/widget/ImageButton;

    const-string v1, "drawable"

    if-eqz p1, :cond_0

    const-string p1, "browser_right_icon"

    invoke-static {p0, p1, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    goto :goto_0

    :cond_0
    const-string p1, "browser_unright_icon"

    .line 173
    invoke-static {p0, p1, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    .line 172
    :goto_0
    invoke-virtual {v0, p1}, Landroid/widget/ImageButton;->setImageResource(I)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/common/f/i;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->n:Lcom/tkay/core/common/f/i;

    return-object p0
.end method

.method private b()V
    .locals 3

    .line 128
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_3

    :try_start_0
    const-string v1, "extra_offer_ad"

    .line 132
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 133
    instance-of v2, v1, Lcom/tkay/core/common/f/h;

    if-eqz v2, :cond_0

    .line 134
    check-cast v1, Lcom/tkay/core/common/f/h;

    iput-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->m:Lcom/tkay/core/common/f/h;

    .line 135
    new-instance v2, Lcom/tkay/core/basead/ui/web/b;

    invoke-direct {v2, v1}, Lcom/tkay/core/basead/ui/web/b;-><init>(Lcom/tkay/core/common/f/h;)V

    iput-object v2, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->q:Lcom/tkay/core/basead/ui/web/b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 139
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    :try_start_1
    const-string v1, "extra_request_info"

    .line 143
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 144
    instance-of v2, v1, Lcom/tkay/core/common/f/i;

    if-eqz v2, :cond_1

    .line 145
    check-cast v1, Lcom/tkay/core/common/f/i;

    iput-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->n:Lcom/tkay/core/common/f/i;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v1

    .line 149
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_1
    :try_start_2
    const-string v1, "extra_click_handler"

    .line 153
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 154
    instance-of v2, v1, Lcom/tkay/core/api/IOfferClickHandler;

    if-eqz v2, :cond_2

    .line 155
    check-cast v1, Lcom/tkay/core/api/IOfferClickHandler;

    iput-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->p:Lcom/tkay/core/api/IOfferClickHandler;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v1

    .line 159
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_2
    :try_start_3
    const-string v1, "extra_target_url"

    .line 163
    invoke-virtual {v0, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->o:Ljava/lang/String;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    return-void

    :catchall_3
    move-exception v0

    .line 165
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 1

    .line 607
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->b:Lorg/json/JSONArray;

    if-nez v0, :cond_0

    .line 608
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->b:Lorg/json/JSONArray;

    .line 610
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->b:Lorg/json/JSONArray;

    invoke-virtual {v0, p1}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    return-void
.end method

.method private b(Z)V
    .locals 2

    .line 177
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->h:Landroid/widget/ImageButton;

    const-string v1, "drawable"

    if-eqz p1, :cond_0

    const-string p1, "browser_left_icon"

    invoke-static {p0, p1, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    goto :goto_0

    :cond_0
    const-string p1, "browser_unleft_icon"

    .line 178
    invoke-static {p0, p1, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    .line 177
    :goto_0
    invoke-virtual {v0, p1}, Landroid/widget/ImageButton;->setImageResource(I)V

    return-void
.end method

.method static synthetic c(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/api/IOfferClickHandler;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->p:Lcom/tkay/core/api/IOfferClickHandler;

    return-object p0
.end method

.method private c()V
    .locals 3

    .line 358
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->h:Landroid/widget/ImageButton;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageButton;->setBackgroundColor(I)V

    .line 359
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->h:Landroid/widget/ImageButton;

    new-instance v2, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$2;

    invoke-direct {v2, p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$2;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {v0, v2}, Landroid/widget/ImageButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 367
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->i:Landroid/widget/ImageButton;

    invoke-virtual {v0, v1}, Landroid/widget/ImageButton;->setBackgroundColor(I)V

    .line 368
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->i:Landroid/widget/ImageButton;

    new-instance v2, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$3;

    invoke-direct {v2, p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$3;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {v0, v2}, Landroid/widget/ImageButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 376
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->j:Landroid/widget/ImageButton;

    invoke-virtual {v0, v1}, Landroid/widget/ImageButton;->setBackgroundColor(I)V

    .line 377
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->j:Landroid/widget/ImageButton;

    new-instance v2, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$4;

    invoke-direct {v2, p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$4;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {v0, v2}, Landroid/widget/ImageButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 383
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->k:Landroid/widget/ImageButton;

    invoke-virtual {v0, v1}, Landroid/widget/ImageButton;->setBackgroundColor(I)V

    .line 384
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->k:Landroid/widget/ImageButton;

    new-instance v1, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$5;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$5;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic d(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Landroid/webkit/WebView;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    return-object p0
.end method

.method private d()V
    .locals 1

    .line 392
    invoke-static {p0}, Landroid/webkit/CookieSyncManager;->createInstance(Landroid/content/Context;)Landroid/webkit/CookieSyncManager;

    .line 393
    invoke-static {}, Landroid/webkit/CookieSyncManager;->getInstance()Landroid/webkit/CookieSyncManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/CookieSyncManager;->startSync()V

    return-void
.end method

.method private e()Landroid/view/View;
    .locals 8

    .line 539
    new-instance v0, Landroid/widget/RelativeLayout;

    invoke-direct {v0, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/high16 v1, -0x1000000

    .line 540
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    .line 541
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 542
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 544
    new-instance v1, Landroid/widget/LinearLayout;

    invoke-direct {v1, p0}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const v3, 0x53d9c

    .line 545
    invoke-virtual {v1, v3}, Landroid/widget/LinearLayout;->setId(I)V

    .line 546
    new-instance v4, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v5, 0x425c0000    # 55.0f

    invoke-static {p0, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    invoke-direct {v4, v2, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v5, 0xc

    .line 547
    invoke-virtual {v4, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 548
    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 549
    new-instance v4, Landroid/graphics/drawable/ColorDrawable;

    const v5, -0x9090a

    invoke-direct {v4, v5}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    const/high16 v4, 0x41a00000    # 20.0f

    .line 550
    invoke-static {p0, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v4

    const/4 v5, 0x0

    .line 551
    invoke-virtual {v1, v4, v5, v4, v5}, Landroid/widget/LinearLayout;->setPadding(IIII)V

    .line 552
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 554
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v6, "drawable"

    const-string v7, "browser_unleft_icon"

    invoke-static {p0, v7, v6}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v4, v7}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v4

    invoke-direct {p0, v4}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/graphics/drawable/Drawable;)Landroid/widget/ImageButton;

    move-result-object v4

    iput-object v4, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->h:Landroid/widget/ImageButton;

    .line 556
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v7, "browser_unright_icon"

    invoke-static {p0, v7, v6}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v4, v7}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v4

    invoke-direct {p0, v4}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/graphics/drawable/Drawable;)Landroid/widget/ImageButton;

    move-result-object v4

    iput-object v4, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->i:Landroid/widget/ImageButton;

    .line 558
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v7, "browser_refresh_icon"

    invoke-static {p0, v7, v6}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v4, v7}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v4

    invoke-direct {p0, v4}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/graphics/drawable/Drawable;)Landroid/widget/ImageButton;

    move-result-object v4

    iput-object v4, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->j:Landroid/widget/ImageButton;

    .line 560
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    const-string v7, "browser_close_icon"

    invoke-static {p0, v7, v6}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v4, v6}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v4

    invoke-direct {p0, v4}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/graphics/drawable/Drawable;)Landroid/widget/ImageButton;

    move-result-object v4

    iput-object v4, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->k:Landroid/widget/ImageButton;

    .line 563
    iget-object v4, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->h:Landroid/widget/ImageButton;

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 564
    iget-object v4, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->i:Landroid/widget/ImageButton;

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 565
    iget-object v4, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->j:Landroid/widget/ImageButton;

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 566
    iget-object v4, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->k:Landroid/widget/ImageButton;

    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 568
    new-instance v1, Lcom/tkay/core/basead/ui/web/BaseWebView;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    .line 569
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/4 v4, 0x2

    .line 570
    invoke-virtual {v1, v4, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 571
    iget-object v6, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v6, v1}, Landroid/webkit/WebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 572
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 574
    new-instance v1, Landroid/view/View;

    invoke-direct {v1, p0}, Landroid/view/View;-><init>(Landroid/content/Context;)V

    const v6, -0x252526

    .line 575
    invoke-virtual {v1, v6}, Landroid/view/View;->setBackgroundColor(I)V

    .line 576
    new-instance v6, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v7, 0x3f800000    # 1.0f

    invoke-static {p0, v7}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v7

    invoke-direct {v6, v2, v7}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 577
    invoke-virtual {v6, v4, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 578
    invoke-virtual {v1, v6}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 579
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 581
    new-instance v1, Lcom/tkay/core/basead/ui/web/WebProgressBarView;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/WebProgressBarView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->f:Lcom/tkay/core/basead/ui/web/WebProgressBarView;

    .line 582
    invoke-virtual {v1, v5}, Lcom/tkay/core/basead/ui/web/WebProgressBarView;->setProgress(I)V

    .line 583
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->f:Lcom/tkay/core/basead/ui/web/WebProgressBarView;

    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v4, 0x40000000    # 2.0f

    invoke-static {p0, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v4

    invoke-direct {v3, v2, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v1, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-object v0
.end method

.method static synthetic e(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)Lcom/tkay/core/basead/ui/web/WebProgressBarView;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->f:Lcom/tkay/core/basead/ui/web/WebProgressBarView;

    return-object p0
.end method


# virtual methods
.method public final a()Lcom/tkay/core/basead/ui/web/WebProgressBarView;
    .locals 1

    .line 397
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->f:Lcom/tkay/core/basead/ui/web/WebProgressBarView;

    return-object v0
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 5

    .line 182
    invoke-virtual {p1}, Landroid/webkit/WebView;->canGoBack()Z

    move-result v0

    .line 1177
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->h:Landroid/widget/ImageButton;

    const-string v2, "drawable"

    if-eqz v0, :cond_0

    const-string v0, "browser_left_icon"

    invoke-static {p0, v0, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    goto :goto_0

    :cond_0
    const-string v0, "browser_unleft_icon"

    .line 1178
    invoke-static {p0, v0, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 1177
    :goto_0
    invoke-virtual {v1, v0}, Landroid/widget/ImageButton;->setImageResource(I)V

    .line 183
    invoke-virtual {p1}, Landroid/webkit/WebView;->canGoForward()Z

    move-result v0

    .line 2172
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->i:Landroid/widget/ImageButton;

    if-eqz v0, :cond_1

    const-string v0, "browser_right_icon"

    invoke-static {p0, v0, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    goto :goto_1

    :cond_1
    const-string v0, "browser_unright_icon"

    .line 2173
    invoke-static {p0, v0, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 2172
    :goto_1
    invoke-virtual {v1, v0}, Landroid/widget/ImageButton;->setImageResource(I)V

    .line 184
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->q:Lcom/tkay/core/basead/ui/web/b;

    if-eqz v0, :cond_3

    .line 3030
    iget-object v1, v0, Lcom/tkay/core/basead/ui/web/b;->b:Lorg/json/JSONObject;

    if-eqz v1, :cond_3

    .line 3035
    :try_start_0
    iget-object v1, v0, Lcom/tkay/core/basead/ui/web/b;->b:Lorg/json/JSONObject;

    invoke-virtual {v1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 3036
    :cond_2
    :goto_2
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 3037
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    if-eqz v2, :cond_2

    if-eqz p2, :cond_2

    .line 3038
    invoke-virtual {p2, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    iget-object v3, v0, Lcom/tkay/core/basead/ui/web/b;->c:Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-nez v3, :cond_2

    .line 3039
    iget-object v3, v0, Lcom/tkay/core/basead/ui/web/b;->c:Ljava/util/HashMap;

    sget-object v4, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v3, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3044
    iget-object v3, v0, Lcom/tkay/core/basead/ui/web/b;->b:Lorg/json/JSONObject;

    invoke-virtual {v3, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    :cond_3
    return-void
.end method

.method protected final a(Lcom/tkay/core/common/f/an;)V
    .locals 1

    .line 614
    iget v0, p1, Lcom/tkay/core/common/f/an;->l:I

    iput v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a:I

    .line 615
    iget-boolean v0, p1, Lcom/tkay/core/common/f/an;->n:Z

    if-eqz v0, :cond_1

    .line 616
    iget-boolean p1, p1, Lcom/tkay/core/common/f/an;->m:Z

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    .line 617
    iput p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->c:I

    .line 619
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->finish()V

    return-void

    :cond_0
    const/4 p1, 0x2

    .line 621
    iput p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->c:I

    :cond_1
    return-void
.end method

.method public finish()V
    .locals 1

    .line 508
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    .line 509
    invoke-virtual {v0}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 510
    invoke-super {p0}, Landroid/app/Activity;->finish()V

    return-void
.end method

.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 7

    const/16 v0, 0x200

    if-ne p1, v0, :cond_5

    .line 473
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->r:Landroid/webkit/ValueCallback;

    if-nez v0, :cond_0

    goto :goto_2

    :cond_0
    const/4 v0, -0x1

    const/4 v1, 0x0

    if-ne p2, v0, :cond_3

    if-eqz p3, :cond_3

    .line 478
    invoke-virtual {p3}, Landroid/content/Intent;->getDataString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 v2, 0x0

    .line 480
    :try_start_1
    invoke-virtual {p3}, Landroid/content/Intent;->getClipData()Landroid/content/ClipData;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 482
    invoke-virtual {v3}, Landroid/content/ClipData;->getItemCount()I

    move-result v4

    new-array v4, v4, [Landroid/net/Uri;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move v5, v2

    .line 483
    :goto_0
    :try_start_2
    invoke-virtual {v3}, Landroid/content/ClipData;->getItemCount()I

    move-result v6

    if-ge v5, v6, :cond_2

    .line 484
    invoke-virtual {v3, v5}, Landroid/content/ClipData;->getItemAt(I)Landroid/content/ClipData$Item;

    move-result-object v6

    .line 485
    invoke-virtual {v6}, Landroid/content/ClipData$Item;->getUri()Landroid/net/Uri;

    move-result-object v6

    aput-object v6, v4, v5
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :catchall_0
    :cond_1
    move-object v4, v1

    :catchall_1
    :cond_2
    if-eqz v0, :cond_4

    const/4 v3, 0x1

    :try_start_3
    new-array v4, v3, [Landroid/net/Uri;

    .line 492
    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    aput-object v0, v4, v2

    goto :goto_1

    :cond_3
    move-object v4, v1

    .line 496
    :cond_4
    :goto_1
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->r:Landroid/webkit/ValueCallback;

    invoke-interface {v0, v4}, Landroid/webkit/ValueCallback;->onReceiveValue(Ljava/lang/Object;)V

    .line 497
    iput-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->r:Landroid/webkit/ValueCallback;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 501
    :catchall_2
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onActivityResult(IILandroid/content/Intent;)V

    :cond_5
    :goto_2
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 9

    .line 191
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    const/4 p1, -0x1

    .line 193
    invoke-virtual {p0, p1}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->setResult(I)V

    .line 195
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/view/Window;->requestFeature(I)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->l:Z

    if-eqz v0, :cond_0

    .line 197
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0, v1, p1}, Landroid/view/Window;->setFeatureInt(II)V

    .line 3128
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_4

    :try_start_0
    const-string v2, "extra_offer_ad"

    .line 3132
    invoke-virtual {v0, v2}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 3133
    instance-of v3, v2, Lcom/tkay/core/common/f/h;

    if-eqz v3, :cond_1

    .line 3134
    check-cast v2, Lcom/tkay/core/common/f/h;

    iput-object v2, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->m:Lcom/tkay/core/common/f/h;

    .line 3135
    new-instance v3, Lcom/tkay/core/basead/ui/web/b;

    invoke-direct {v3, v2}, Lcom/tkay/core/basead/ui/web/b;-><init>(Lcom/tkay/core/common/f/h;)V

    iput-object v3, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->q:Lcom/tkay/core/basead/ui/web/b;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 3139
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    :try_start_1
    const-string v2, "extra_request_info"

    .line 3143
    invoke-virtual {v0, v2}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 3144
    instance-of v3, v2, Lcom/tkay/core/common/f/i;

    if-eqz v3, :cond_2

    .line 3145
    check-cast v2, Lcom/tkay/core/common/f/i;

    iput-object v2, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->n:Lcom/tkay/core/common/f/i;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v2

    .line 3149
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_1
    :try_start_2
    const-string v2, "extra_click_handler"

    .line 3153
    invoke-virtual {v0, v2}, Landroid/content/Intent;->getSerializableExtra(Ljava/lang/String;)Ljava/io/Serializable;

    move-result-object v2

    if-eqz v2, :cond_3

    .line 3154
    instance-of v3, v2, Lcom/tkay/core/api/IOfferClickHandler;

    if-eqz v3, :cond_3

    .line 3155
    check-cast v2, Lcom/tkay/core/api/IOfferClickHandler;

    iput-object v2, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->p:Lcom/tkay/core/api/IOfferClickHandler;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v2

    .line 3159
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    :goto_2
    :try_start_3
    const-string v2, "extra_target_url"

    .line 3163
    invoke-virtual {v0, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->o:Ljava/lang/String;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_3

    :catchall_3
    move-exception v0

    .line 3165
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 208
    :cond_4
    :goto_3
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->o:Ljava/lang/String;

    .line 209
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_6

    .line 210
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->m:Lcom/tkay/core/common/f/h;

    if-eqz v0, :cond_5

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->A()Ljava/lang/String;

    move-result-object v0

    goto :goto_4

    :cond_5
    const-string v0, ""

    .line 213
    :cond_6
    :goto_4
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    .line 214
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_7

    const-string p1, "basead_click_empty"

    const-string v0, "string"

    .line 215
    invoke-static {v2, p1, v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-static {v2, p1, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;II)Landroid/widget/Toast;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    .line 216
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->finish()V

    return-void

    .line 220
    :cond_7
    invoke-static {v2, v0}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/core/common/f/an;

    move-result-object v2

    .line 222
    iget-boolean v3, v2, Lcom/tkay/core/common/f/an;->m:Z

    if-eqz v3, :cond_8

    .line 223
    invoke-virtual {p0, v2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Lcom/tkay/core/common/f/an;)V

    return-void

    .line 226
    :cond_8
    invoke-virtual {p0, v2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Lcom/tkay/core/common/f/an;)V

    .line 3539
    new-instance v2, Landroid/widget/RelativeLayout;

    invoke-direct {v2, p0}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const/high16 v3, -0x1000000

    .line 3540
    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout;->setBackgroundColor(I)V

    .line 3541
    new-instance v3, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v3, p1, p1}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 3542
    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3544
    new-instance v3, Landroid/widget/LinearLayout;

    invoke-direct {v3, p0}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const v5, 0x53d9c

    .line 3545
    invoke-virtual {v3, v5}, Landroid/widget/LinearLayout;->setId(I)V

    .line 3546
    new-instance v6, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v7, 0x425c0000    # 55.0f

    invoke-static {p0, v7}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v7

    invoke-direct {v6, p1, v7}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 v7, 0xc

    .line 3547
    invoke-virtual {v6, v7}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 3548
    invoke-virtual {v3, v6}, Landroid/widget/LinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3549
    new-instance v6, Landroid/graphics/drawable/ColorDrawable;

    const v7, -0x9090a

    invoke-direct {v6, v7}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v3, v6}, Landroid/widget/LinearLayout;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    const/high16 v6, 0x41a00000    # 20.0f

    .line 3550
    invoke-static {p0, v6}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v6

    .line 3551
    invoke-virtual {v3, v6, v4, v6, v4}, Landroid/widget/LinearLayout;->setPadding(IIII)V

    .line 3552
    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 3554
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v6

    const-string v7, "drawable"

    const-string v8, "browser_unleft_icon"

    invoke-static {p0, v8, v7}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v8

    invoke-virtual {v6, v8}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v6

    invoke-direct {p0, v6}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/graphics/drawable/Drawable;)Landroid/widget/ImageButton;

    move-result-object v6

    iput-object v6, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->h:Landroid/widget/ImageButton;

    .line 3556
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v6

    const-string v8, "browser_unright_icon"

    invoke-static {p0, v8, v7}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v8

    invoke-virtual {v6, v8}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v6

    invoke-direct {p0, v6}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/graphics/drawable/Drawable;)Landroid/widget/ImageButton;

    move-result-object v6

    iput-object v6, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->i:Landroid/widget/ImageButton;

    .line 3558
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v6

    const-string v8, "browser_refresh_icon"

    invoke-static {p0, v8, v7}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v8

    invoke-virtual {v6, v8}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v6

    invoke-direct {p0, v6}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/graphics/drawable/Drawable;)Landroid/widget/ImageButton;

    move-result-object v6

    iput-object v6, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->j:Landroid/widget/ImageButton;

    .line 3560
    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v6

    const-string v8, "browser_close_icon"

    invoke-static {p0, v8, v7}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v6, v7}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v6

    invoke-direct {p0, v6}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/graphics/drawable/Drawable;)Landroid/widget/ImageButton;

    move-result-object v6

    iput-object v6, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->k:Landroid/widget/ImageButton;

    .line 3563
    iget-object v6, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->h:Landroid/widget/ImageButton;

    invoke-virtual {v3, v6}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 3564
    iget-object v6, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->i:Landroid/widget/ImageButton;

    invoke-virtual {v3, v6}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 3565
    iget-object v6, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->j:Landroid/widget/ImageButton;

    invoke-virtual {v3, v6}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 3566
    iget-object v6, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->k:Landroid/widget/ImageButton;

    invoke-virtual {v3, v6}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 3568
    new-instance v3, Lcom/tkay/core/basead/ui/web/BaseWebView;

    invoke-direct {v3, p0}, Lcom/tkay/core/basead/ui/web/BaseWebView;-><init>(Landroid/content/Context;)V

    iput-object v3, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    .line 3569
    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v3, p1, p1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 3570
    invoke-virtual {v3, v1, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 3571
    iget-object v6, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v6, v3}, Landroid/webkit/WebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3572
    iget-object v3, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 3574
    new-instance v3, Landroid/view/View;

    invoke-direct {v3, p0}, Landroid/view/View;-><init>(Landroid/content/Context;)V

    const v6, -0x252526

    .line 3575
    invoke-virtual {v3, v6}, Landroid/view/View;->setBackgroundColor(I)V

    .line 3576
    new-instance v6, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v7, 0x3f800000    # 1.0f

    invoke-static {p0, v7}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v7

    invoke-direct {v6, p1, v7}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 3577
    invoke-virtual {v6, v1, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 3578
    invoke-virtual {v3, v6}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3579
    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 3581
    new-instance v1, Lcom/tkay/core/basead/ui/web/WebProgressBarView;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/WebProgressBarView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->f:Lcom/tkay/core/basead/ui/web/WebProgressBarView;

    .line 3582
    invoke-virtual {v1, v4}, Lcom/tkay/core/basead/ui/web/WebProgressBarView;->setProgress(I)V

    .line 3583
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->f:Lcom/tkay/core/basead/ui/web/WebProgressBarView;

    new-instance v3, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v5, 0x40000000    # 2.0f

    invoke-static {p0, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v5

    invoke-direct {v3, p1, v5}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    invoke-virtual {v2, v1, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 230
    invoke-virtual {p0, v2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->setContentView(Landroid/view/View;)V

    .line 4358
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->h:Landroid/widget/ImageButton;

    invoke-virtual {p1, v4}, Landroid/widget/ImageButton;->setBackgroundColor(I)V

    .line 4359
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->h:Landroid/widget/ImageButton;

    new-instance v1, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$2;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$2;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {p1, v1}, Landroid/widget/ImageButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 4367
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->i:Landroid/widget/ImageButton;

    invoke-virtual {p1, v4}, Landroid/widget/ImageButton;->setBackgroundColor(I)V

    .line 4368
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->i:Landroid/widget/ImageButton;

    new-instance v1, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$3;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$3;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {p1, v1}, Landroid/widget/ImageButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 4376
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->j:Landroid/widget/ImageButton;

    invoke-virtual {p1, v4}, Landroid/widget/ImageButton;->setBackgroundColor(I)V

    .line 4377
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->j:Landroid/widget/ImageButton;

    new-instance v1, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$4;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$4;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {p1, v1}, Landroid/widget/ImageButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 4383
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->k:Landroid/widget/ImageButton;

    invoke-virtual {p1, v4}, Landroid/widget/ImageButton;->setBackgroundColor(I)V

    .line 4384
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->k:Landroid/widget/ImageButton;

    new-instance v1, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$5;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$5;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {p1, v1}, Landroid/widget/ImageButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 4392
    invoke-static {p0}, Landroid/webkit/CookieSyncManager;->createInstance(Landroid/content/Context;)Landroid/webkit/CookieSyncManager;

    .line 4393
    invoke-static {}, Landroid/webkit/CookieSyncManager;->getInstance()Landroid/webkit/CookieSyncManager;

    move-result-object p1

    invoke-virtual {p1}, Landroid/webkit/CookieSyncManager;->startSync()V

    .line 5245
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {p1}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    .line 5256
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v1, v4}, Landroid/webkit/WebView;->setHorizontalScrollBarEnabled(Z)V

    .line 5257
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v1, v4}, Landroid/webkit/WebView;->setVerticalScrollBarEnabled(Z)V

    .line 5258
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v1, v4}, Landroid/webkit/WebView;->setVerticalScrollBarEnabled(Z)V

    .line 5259
    iget-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v1}, Landroid/webkit/WebView;->requestFocus()Z

    const/4 v1, 0x1

    .line 5261
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 5262
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setAppCacheEnabled(Z)V

    const-wide/32 v2, 0x500000

    .line 5263
    invoke-virtual {p1, v2, v3}, Landroid/webkit/WebSettings;->setAppCacheMaxSize(J)V

    .line 5264
    invoke-virtual {p1, v4}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 5265
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 5266
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setJavaScriptCanOpenWindowsAutomatically(Z)V

    .line 5267
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setDomStorageEnabled(Z)V

    .line 5268
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    .line 5269
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setBuiltInZoomControls(Z)V

    .line 5270
    invoke-virtual {p1, v4}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    .line 5271
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    .line 5272
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setUseWideViewPort(Z)V

    .line 5273
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setLoadWithOverviewMode(Z)V

    .line 5274
    sget-object v2, Landroid/webkit/WebSettings$RenderPriority;->HIGH:Landroid/webkit/WebSettings$RenderPriority;

    invoke-virtual {p1, v2}, Landroid/webkit/WebSettings;->setRenderPriority(Landroid/webkit/WebSettings$RenderPriority;)V

    .line 5276
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x11

    if-lt v2, v3, :cond_9

    .line 5277
    invoke-virtual {p1, v4}, Landroid/webkit/WebSettings;->setMediaPlaybackRequiresUserGesture(Z)V

    .line 5288
    :cond_9
    :try_start_4
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x15

    if-lt v2, v3, :cond_a

    .line 5289
    invoke-virtual {p1, v4}, Landroid/webkit/WebSettings;->setMixedContentMode(I)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    goto :goto_5

    :catch_0
    move-exception v2

    .line 5292
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 5295
    :cond_a
    :goto_5
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0xb

    if-lt v2, v3, :cond_b

    .line 5297
    :try_start_5
    const-class v2, Landroid/webkit/WebSettings;

    const-string v3, "setDisplayZoomControls"

    new-array v5, v1, [Ljava/lang/Class;

    sget-object v6, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v6, v5, v4

    invoke-virtual {v2, v3, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    .line 5298
    invoke-virtual {v2, v1}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v3, v1, [Ljava/lang/Object;

    .line 5299
    sget-object v5, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    aput-object v5, v3, v4

    invoke-virtual {v2, p1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1

    .line 5305
    :catch_1
    :cond_b
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setDatabaseEnabled(Z)V

    const-string v2, "database"

    .line 5306
    invoke-virtual {p0, v2, v4}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v2

    invoke-virtual {v2}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v2

    .line 5307
    invoke-virtual {p1, v2}, Landroid/webkit/WebSettings;->setDatabasePath(Ljava/lang/String;)V

    .line 5310
    invoke-virtual {p1, v1}, Landroid/webkit/WebSettings;->setGeolocationEnabled(Z)V

    .line 5311
    invoke-virtual {p1, v2}, Landroid/webkit/WebSettings;->setGeolocationDatabasePath(Ljava/lang/String;)V

    .line 5313
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    new-instance v1, Lcom/tkay/core/basead/ui/web/a;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/a;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {p1, v1}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 5315
    iget-object p1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    new-instance v1, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$1;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {p1, v1}, Landroid/webkit/WebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    .line 5348
    invoke-static {v0}, Lcom/tkay/core/basead/a/a;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/an;

    move-result-object p1

    .line 5349
    iget v0, p1, Lcom/tkay/core/common/f/an;->l:I

    iput v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a:I

    .line 5350
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    iget-object p1, p1, Lcom/tkay/core/common/f/an;->o:Ljava/lang/String;

    invoke-virtual {v0, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method protected onDestroy()V
    .locals 11

    .line 515
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 516
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 517
    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setDownloadListener(Landroid/webkit/DownloadListener;)V

    .line 518
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->destroy()V

    .line 520
    :cond_0
    iput-object v1, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    .line 522
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->m:Lcom/tkay/core/common/f/h;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->n:Lcom/tkay/core/common/f/i;

    if-eqz v0, :cond_1

    .line 523
    iget-object v1, v0, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->n:Lcom/tkay/core/common/f/i;

    iget-object v2, v0, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->m:Lcom/tkay/core/common/f/h;

    .line 525
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->d()I

    move-result v3

    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->m:Lcom/tkay/core/common/f/h;

    .line 526
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v4

    iget-object v5, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->b:Lorg/json/JSONArray;

    iget v6, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->c:I

    iget v7, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->d:I

    iget v8, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a:I

    iget-object v9, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->o:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->n:Lcom/tkay/core/common/f/i;

    iget v10, v0, Lcom/tkay/core/common/f/i;->j:I

    .line 523
    invoke-static/range {v1 .. v10}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lorg/json/JSONArray;IIILjava/lang/String;I)V

    :cond_1
    return-void
.end method

.method protected onPause()V
    .locals 2

    .line 402
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 403
    invoke-static {}, Landroid/webkit/CookieSyncManager;->getInstance()Landroid/webkit/CookieSyncManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/CookieSyncManager;->stopSync()V

    .line 404
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    .line 405
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->isFinishing()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 6029
    invoke-virtual {v0}, Landroid/webkit/WebView;->stopLoading()V

    const-string v1, ""

    .line 6030
    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    .line 6033
    :cond_0
    invoke-virtual {v0}, Landroid/webkit/WebView;->onPause()V

    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 413
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 414
    invoke-static {}, Landroid/webkit/CookieSyncManager;->getInstance()Landroid/webkit/CookieSyncManager;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/CookieSyncManager;->startSync()V

    .line 415
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    new-instance v1, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;

    invoke-direct {v1, p0}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity$6;-><init>(Lcom/tkay/core/basead/ui/web/WebLandPageActivity;)V

    invoke-virtual {v0, v1}, Landroid/webkit/WebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    .line 467
    iget-object v0, p0, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->g:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->onResume()V

    return-void
.end method

.method protected onStart()V
    .locals 0

    .line 239
    invoke-super {p0}, Landroid/app/Activity;->onStart()V

    return-void
.end method
