.class public Lcom/mbridge/msdk/click/i;
.super Ljava/lang/Object;
.source "WebViewSpider.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/click/i$a;
    }
.end annotation


# static fields
.field public static a:J

.field private static final d:Ljava/lang/String;


# instance fields
.field b:Z

.field c:Z

.field private e:I

.field private f:I

.field private g:Landroid/os/Handler;

.field private h:Lcom/mbridge/msdk/c/a;

.field private i:Lcom/mbridge/msdk/click/i$a;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Landroid/webkit/WebView;

.field private m:Z

.field private n:Ljava/lang/String;

.field private o:I

.field private p:Z

.field private q:Z

.field private final r:Ljava/lang/Runnable;

.field private final s:Ljava/lang/Runnable;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 33
    const-class v0, Lcom/mbridge/msdk/click/i;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/click/i;->d:Ljava/lang/String;

    const-wide/16 v0, 0x0

    .line 54
    sput-wide v0, Lcom/mbridge/msdk/click/i;->a:J

    return-void
.end method

.method public constructor <init>(Z)V
    .locals 2

    .line 56
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x3a98

    .line 35
    iput v0, p0, Lcom/mbridge/msdk/click/i;->e:I

    const/16 v0, 0xbb8

    .line 36
    iput v0, p0, Lcom/mbridge/msdk/click/i;->f:I

    const/4 v0, 0x0

    .line 53
    iput-boolean v0, p0, Lcom/mbridge/msdk/click/i;->p:Z

    .line 378
    new-instance v0, Lcom/mbridge/msdk/click/i$4;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/click/i$4;-><init>(Lcom/mbridge/msdk/click/i;)V

    iput-object v0, p0, Lcom/mbridge/msdk/click/i;->r:Ljava/lang/Runnable;

    .line 388
    new-instance v0, Lcom/mbridge/msdk/click/i$5;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/click/i$5;-><init>(Lcom/mbridge/msdk/click/i;)V

    iput-object v0, p0, Lcom/mbridge/msdk/click/i;->s:Ljava/lang/Runnable;

    .line 57
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/click/i;->g:Landroid/os/Handler;

    .line 58
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/click/i;->h:Lcom/mbridge/msdk/c/a;

    if-nez v0, :cond_0

    .line 60
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/click/i;->h:Lcom/mbridge/msdk/c/a;

    .line 62
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/i;->h:Lcom/mbridge/msdk/c/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->af()Z

    move-result v0

    iput-boolean v0, p0, Lcom/mbridge/msdk/click/i;->m:Z

    if-eqz p1, :cond_1

    .line 64
    iget-object p1, p0, Lcom/mbridge/msdk/click/i;->h:Lcom/mbridge/msdk/c/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->ab()J

    move-result-wide v0

    long-to-int p1, v0

    iput p1, p0, Lcom/mbridge/msdk/click/i;->e:I

    .line 65
    iget-object p1, p0, Lcom/mbridge/msdk/click/i;->h:Lcom/mbridge/msdk/c/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->ab()J

    move-result-wide v0

    long-to-int p1, v0

    iput p1, p0, Lcom/mbridge/msdk/click/i;->f:I

    goto :goto_0

    .line 67
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/click/i;->h:Lcom/mbridge/msdk/c/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->ac()J

    move-result-wide v0

    long-to-int p1, v0

    iput p1, p0, Lcom/mbridge/msdk/click/i;->e:I

    .line 68
    iget-object p1, p0, Lcom/mbridge/msdk/click/i;->h:Lcom/mbridge/msdk/c/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->ac()J

    move-result-wide v0

    long-to-int p1, v0

    iput p1, p0, Lcom/mbridge/msdk/click/i;->f:I

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/i;I)I
    .locals 0

    .line 32
    iput p1, p0, Lcom/mbridge/msdk/click/i;->o:I

    return p1
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 32
    sget-object v0, Lcom/mbridge/msdk/click/i;->d:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/i;)Ljava/lang/String;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/mbridge/msdk/click/i;->j:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/i;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/mbridge/msdk/click/i;->j:Ljava/lang/String;

    return-object p1
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    .line 160
    new-instance v0, Landroid/webkit/WebView;

    invoke-direct {v0, p1}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    .line 161
    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 162
    iget-object v0, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    .line 163
    iget-object v0, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setLoadsImagesAutomatically(Z)V

    .line 164
    iget-object v0, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    new-instance v7, Lcom/mbridge/msdk/click/i$2;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p4

    move-object v4, p3

    move-object v5, p1

    move-object v6, p2

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/click/i$2;-><init>(Lcom/mbridge/msdk/click/i;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    invoke-virtual {v0, v7}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 304
    new-instance p1, Lcom/mbridge/msdk/click/i$3;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/click/i$3;-><init>(Lcom/mbridge/msdk/click/i;)V

    .line 342
    iget-object p2, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    invoke-virtual {p2, p1}, Landroid/webkit/WebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/i;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 32
    invoke-direct/range {p0 .. p5}, Lcom/mbridge/msdk/click/i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)V
    .locals 8

    .line 108
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-virtual {v1}, Landroid/os/Looper;->getThread()Ljava/lang/Thread;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 109
    iget-object v7, p0, Lcom/mbridge/msdk/click/i;->j:Ljava/lang/String;

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    invoke-direct/range {v2 .. v7}, Lcom/mbridge/msdk/click/i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    .line 111
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/click/i;->g:Landroid/os/Handler;

    new-instance v7, Lcom/mbridge/msdk/click/i$1;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/click/i$1;-><init>(Lcom/mbridge/msdk/click/i;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)V

    invoke-virtual {v0, v7}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V
    .locals 6

    .line 122
    :try_start_0
    invoke-direct {p0, p4, p1, p2, p3}, Lcom/mbridge/msdk/click/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 124
    iget-object p1, p0, Lcom/mbridge/msdk/click/i;->k:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 125
    iget-object p1, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    invoke-virtual {p1}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    const-string p2, "utf-8"

    invoke-virtual {p1, p2}, Landroid/webkit/WebSettings;->setDefaultTextEncodingName(Ljava/lang/String;)V

    const/16 p1, 0x7d0

    .line 126
    iput p1, p0, Lcom/mbridge/msdk/click/i;->f:I

    .line 127
    iput p1, p0, Lcom/mbridge/msdk/click/i;->e:I

    .line 128
    sget-object p1, Lcom/mbridge/msdk/click/i;->d:Ljava/lang/String;

    iget-object p2, p0, Lcom/mbridge/msdk/click/i;->k:Ljava/lang/String;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 129
    iget-object v0, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    iget-object v2, p0, Lcom/mbridge/msdk/click/i;->k:Ljava/lang/String;

    const-string v3, "*/*"

    const-string v4, "utf-8"

    move-object v1, p5

    move-object v5, p5

    invoke-virtual/range {v0 .. v5}, Landroid/webkit/WebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 133
    :cond_0
    iget-boolean p1, p0, Lcom/mbridge/msdk/click/i;->m:Z

    if-eqz p1, :cond_2

    .line 134
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    .line 135
    iget-object p2, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    invoke-virtual {p2}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_1

    const-string p2, "Referer"

    .line 136
    iget-object p3, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    invoke-virtual {p3}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object p3

    invoke-interface {p1, p2, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 138
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    invoke-virtual {p2, p5, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;Ljava/util/Map;)V

    goto :goto_0

    .line 140
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    invoke-virtual {p1, p5}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 145
    :try_start_1
    iget-object p2, p0, Lcom/mbridge/msdk/click/i;->i:Lcom/mbridge/msdk/click/i$a;

    if-eqz p2, :cond_3

    .line 146
    iget-object p2, p0, Lcom/mbridge/msdk/click/i;->i:Lcom/mbridge/msdk/click/i$a;

    const/4 p3, 0x0

    iget-object p4, p0, Lcom/mbridge/msdk/click/i;->j:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    iget-object p5, p0, Lcom/mbridge/msdk/click/i;->n:Ljava/lang/String;

    invoke-interface {p2, p3, p4, p1, p5}, Lcom/mbridge/msdk/click/i$a;->a(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_3
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/click/i;Z)Z
    .locals 0

    .line 32
    iput-boolean p1, p0, Lcom/mbridge/msdk/click/i;->q:Z

    return p1
.end method

.method private b()V
    .locals 0

    .line 413
    invoke-direct {p0}, Lcom/mbridge/msdk/click/i;->d()V

    .line 414
    invoke-direct {p0}, Lcom/mbridge/msdk/click/i;->c()V

    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/click/i;)Z
    .locals 0

    .line 32
    iget-boolean p0, p0, Lcom/mbridge/msdk/click/i;->q:Z

    return p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/click/i;Z)Z
    .locals 0

    .line 32
    iput-boolean p1, p0, Lcom/mbridge/msdk/click/i;->p:Z

    return p1
.end method

.method private c()V
    .locals 2

    .line 422
    iget-object v0, p0, Lcom/mbridge/msdk/click/i;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/click/i;->s:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/click/i;)V
    .locals 4

    .line 1346
    sget-object v0, Lcom/mbridge/msdk/click/i;->d:Ljava/lang/String;

    monitor-enter v0

    .line 1348
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/click/i;->b()V

    .line 1350
    iget-object v1, p0, Lcom/mbridge/msdk/click/i;->i:Lcom/mbridge/msdk/click/i$a;

    if-eqz v1, :cond_0

    .line 1351
    iget-object v1, p0, Lcom/mbridge/msdk/click/i;->i:Lcom/mbridge/msdk/click/i$a;

    iget-object v2, p0, Lcom/mbridge/msdk/click/i;->j:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/mbridge/msdk/click/i;->p:Z

    iget-object p0, p0, Lcom/mbridge/msdk/click/i;->n:Ljava/lang/String;

    invoke-interface {v1, v2, v3, p0}, Lcom/mbridge/msdk/click/i$a;->a(Ljava/lang/String;ZLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 1356
    :catchall_0
    :try_start_1
    sget-object p0, Lcom/mbridge/msdk/click/i;->d:Ljava/lang/String;

    const-string v1, "webview colse to failed"

    invoke-static {p0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1354
    :catch_0
    sget-object p0, Lcom/mbridge/msdk/click/i;->d:Ljava/lang/String;

    const-string v1, "webview colse to failed"

    invoke-static {p0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1358
    :cond_0
    :goto_0
    monitor-exit v0

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/click/i;)Lcom/mbridge/msdk/click/i$a;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/mbridge/msdk/click/i;->i:Lcom/mbridge/msdk/click/i$a;

    return-object p0
.end method

.method private d()V
    .locals 2

    .line 430
    iget-object v0, p0, Lcom/mbridge/msdk/click/i;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/click/i;->r:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic e(Lcom/mbridge/msdk/click/i;)V
    .locals 4

    .line 1399
    invoke-direct {p0}, Lcom/mbridge/msdk/click/i;->c()V

    .line 1400
    iget-boolean v0, p0, Lcom/mbridge/msdk/click/i;->b:Z

    .line 1418
    iget-object v0, p0, Lcom/mbridge/msdk/click/i;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/click/i;->s:Ljava/lang/Runnable;

    iget p0, p0, Lcom/mbridge/msdk/click/i;->e:I

    int-to-long v2, p0

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/click/i;)V
    .locals 0

    .line 32
    invoke-direct {p0}, Lcom/mbridge/msdk/click/i;->d()V

    return-void
.end method

.method static synthetic g(Lcom/mbridge/msdk/click/i;)V
    .locals 0

    .line 32
    invoke-direct {p0}, Lcom/mbridge/msdk/click/i;->c()V

    return-void
.end method

.method static synthetic h(Lcom/mbridge/msdk/click/i;)Z
    .locals 0

    .line 32
    iget-boolean p0, p0, Lcom/mbridge/msdk/click/i;->m:Z

    return p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/click/i;)Landroid/webkit/WebView;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    return-object p0
.end method

.method static synthetic j(Lcom/mbridge/msdk/click/i;)V
    .locals 0

    .line 32
    invoke-direct {p0}, Lcom/mbridge/msdk/click/i;->b()V

    return-void
.end method

.method static synthetic k(Lcom/mbridge/msdk/click/i;)Ljava/lang/String;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/mbridge/msdk/click/i;->n:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic l(Lcom/mbridge/msdk/click/i;)V
    .locals 4

    .line 2406
    invoke-direct {p0}, Lcom/mbridge/msdk/click/i;->d()V

    .line 2407
    iget-boolean v0, p0, Lcom/mbridge/msdk/click/i;->b:Z

    .line 2426
    iget-object v0, p0, Lcom/mbridge/msdk/click/i;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/click/i;->r:Ljava/lang/Runnable;

    iget p0, p0, Lcom/mbridge/msdk/click/i;->f:I

    int-to-long v2, p0

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic m(Lcom/mbridge/msdk/click/i;)I
    .locals 0

    .line 32
    iget p0, p0, Lcom/mbridge/msdk/click/i;->f:I

    return p0
.end method

.method static synthetic n(Lcom/mbridge/msdk/click/i;)V
    .locals 4

    .line 3362
    sget-object v0, Lcom/mbridge/msdk/click/i;->d:Ljava/lang/String;

    monitor-enter v0

    .line 3364
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/click/i;->b()V

    .line 3365
    iget-object v1, p0, Lcom/mbridge/msdk/click/i;->l:Landroid/webkit/WebView;

    invoke-virtual {v1}, Landroid/webkit/WebView;->destroy()V

    .line 3367
    iget-object v1, p0, Lcom/mbridge/msdk/click/i;->i:Lcom/mbridge/msdk/click/i$a;

    if-eqz v1, :cond_0

    .line 3368
    iget-object v1, p0, Lcom/mbridge/msdk/click/i;->i:Lcom/mbridge/msdk/click/i$a;

    iget-object v2, p0, Lcom/mbridge/msdk/click/i;->j:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/mbridge/msdk/click/i;->p:Z

    iget-object p0, p0, Lcom/mbridge/msdk/click/i;->n:Ljava/lang/String;

    invoke-interface {v1, v2, v3, p0}, Lcom/mbridge/msdk/click/i$a;->a(Ljava/lang/String;ZLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 3373
    :catchall_0
    :try_start_1
    sget-object p0, Lcom/mbridge/msdk/click/i;->d:Ljava/lang/String;

    const-string v1, "webview colse to failed"

    invoke-static {p0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 3371
    :catch_0
    sget-object p0, Lcom/mbridge/msdk/click/i;->d:Ljava/lang/String;

    const-string v1, "webview colse to failed"

    invoke-static {p0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 3375
    :cond_0
    :goto_0
    monitor-exit v0

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/click/i;)I
    .locals 0

    .line 32
    iget p0, p0, Lcom/mbridge/msdk/click/i;->e:I

    return p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/click/i$a;)V
    .locals 0

    if-eqz p6, :cond_0

    .line 101
    iput-object p5, p0, Lcom/mbridge/msdk/click/i;->j:Ljava/lang/String;

    .line 102
    iput-object p6, p0, Lcom/mbridge/msdk/click/i;->i:Lcom/mbridge/msdk/click/i$a;

    .line 104
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mbridge/msdk/click/i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)V

    return-void

    .line 99
    :cond_0
    new-instance p1, Ljava/lang/NullPointerException;

    const-string p2, "OverrideUrlLoadingListener can not be null"

    invoke-direct {p1, p2}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/click/i$a;)V
    .locals 0

    if-eqz p7, :cond_0

    .line 90
    iput-object p6, p0, Lcom/mbridge/msdk/click/i;->k:Ljava/lang/String;

    .line 91
    iput-object p5, p0, Lcom/mbridge/msdk/click/i;->j:Ljava/lang/String;

    .line 92
    iput-object p7, p0, Lcom/mbridge/msdk/click/i;->i:Lcom/mbridge/msdk/click/i$a;

    .line 93
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/mbridge/msdk/click/i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)V

    return-void

    .line 88
    :cond_0
    new-instance p1, Ljava/lang/NullPointerException;

    const-string p2, "OverrideUrlLoadingListener can not be null"

    invoke-direct {p1, p2}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw p1
.end method
