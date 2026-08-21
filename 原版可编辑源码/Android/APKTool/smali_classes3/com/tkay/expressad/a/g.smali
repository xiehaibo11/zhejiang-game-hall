.class public Lcom/tkay/expressad/a/g;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/a/g$a;
    }
.end annotation


# static fields
.field public static a:J = 0x0L

.field private static final d:Ljava/lang/String;

.field private static final p:I = 0x1

.field private static final q:I = 0x2

.field private static final r:I


# instance fields
.field b:Z

.field c:Z

.field private e:I

.field private f:I

.field private g:Landroid/os/Handler;

.field private h:Lcom/tkay/expressad/d/a;

.field private i:Lcom/tkay/expressad/a/g$a;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Landroid/webkit/WebView;

.field private m:Z

.field private n:Ljava/lang/String;

.field private o:I

.field private s:Z

.field private t:Z

.field private final u:Ljava/lang/Runnable;

.field private final v:Ljava/lang/Runnable;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 29
    const-class v0, Lcom/tkay/expressad/a/g;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/a/g;->d:Ljava/lang/String;

    const-wide/16 v0, 0x0

    .line 50
    sput-wide v0, Lcom/tkay/expressad/a/g;->a:J

    return-void
.end method

.method public constructor <init>(Z)V
    .locals 2

    .line 52
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x3a98

    .line 31
    iput v0, p0, Lcom/tkay/expressad/a/g;->e:I

    const/16 v0, 0xbb8

    .line 32
    iput v0, p0, Lcom/tkay/expressad/a/g;->f:I

    const/4 v0, 0x0

    .line 49
    iput-boolean v0, p0, Lcom/tkay/expressad/a/g;->s:Z

    .line 377
    new-instance v0, Lcom/tkay/expressad/a/g$4;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/a/g$4;-><init>(Lcom/tkay/expressad/a/g;)V

    iput-object v0, p0, Lcom/tkay/expressad/a/g;->u:Ljava/lang/Runnable;

    .line 387
    new-instance v0, Lcom/tkay/expressad/a/g$5;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/a/g$5;-><init>(Lcom/tkay/expressad/a/g;)V

    iput-object v0, p0, Lcom/tkay/expressad/a/g;->v:Ljava/lang/Runnable;

    .line 53
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/a/g;->g:Landroid/os/Handler;

    .line 54
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/a/g;->h:Lcom/tkay/expressad/d/a;

    if-nez v0, :cond_0

    .line 56
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->c()Lcom/tkay/expressad/d/a;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/a/g;->h:Lcom/tkay/expressad/d/a;

    .line 58
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/a/g;->h:Lcom/tkay/expressad/d/a;

    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->v()Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/expressad/a/g;->m:Z

    if-eqz p1, :cond_1

    .line 60
    iget-object p1, p0, Lcom/tkay/expressad/a/g;->h:Lcom/tkay/expressad/d/a;

    invoke-virtual {p1}, Lcom/tkay/expressad/d/a;->q()J

    move-result-wide v0

    long-to-int p1, v0

    iput p1, p0, Lcom/tkay/expressad/a/g;->e:I

    .line 61
    iget-object p1, p0, Lcom/tkay/expressad/a/g;->h:Lcom/tkay/expressad/d/a;

    invoke-virtual {p1}, Lcom/tkay/expressad/d/a;->q()J

    move-result-wide v0

    long-to-int p1, v0

    iput p1, p0, Lcom/tkay/expressad/a/g;->f:I

    return-void

    .line 63
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/a/g;->h:Lcom/tkay/expressad/d/a;

    invoke-virtual {p1}, Lcom/tkay/expressad/d/a;->r()J

    move-result-wide v0

    long-to-int p1, v0

    iput p1, p0, Lcom/tkay/expressad/a/g;->e:I

    .line 64
    iget-object p1, p0, Lcom/tkay/expressad/a/g;->h:Lcom/tkay/expressad/d/a;

    invoke-virtual {p1}, Lcom/tkay/expressad/d/a;->r()J

    move-result-wide v0

    long-to-int p1, v0

    iput p1, p0, Lcom/tkay/expressad/a/g;->f:I

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/a/g;I)I
    .locals 0

    .line 28
    iput p1, p0, Lcom/tkay/expressad/a/g;->o:I

    return p1
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 28
    sget-object v0, Lcom/tkay/expressad/a/g;->d:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/expressad/a/g;)Ljava/lang/String;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/expressad/a/g;->j:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/expressad/a/g;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 28
    iput-object p1, p0, Lcom/tkay/expressad/a/g;->j:Ljava/lang/String;

    return-object p1
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 158
    new-instance v0, Landroid/webkit/WebView;

    invoke-direct {v0, p1}, Landroid/webkit/WebView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    .line 159
    invoke-virtual {v0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setJavaScriptEnabled(Z)V

    .line 160
    iget-object p1, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    invoke-virtual {p1}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    const/4 v0, 0x2

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setCacheMode(I)V

    .line 161
    iget-object p1, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    invoke-virtual {p1}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/webkit/WebSettings;->setLoadsImagesAutomatically(Z)V

    .line 162
    iget-object p1, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    new-instance v0, Lcom/tkay/expressad/a/g$2;

    invoke-direct {v0, p0, p3, p2}, Lcom/tkay/expressad/a/g$2;-><init>(Lcom/tkay/expressad/a/g;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Landroid/webkit/WebView;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    .line 303
    new-instance p1, Lcom/tkay/expressad/a/g$3;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/a/g$3;-><init>(Lcom/tkay/expressad/a/g;)V

    .line 341
    iget-object p2, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    invoke-virtual {p2, p1}, Landroid/webkit/WebView;->setWebChromeClient(Landroid/webkit/WebChromeClient;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/a/g;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 28
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/a/g;->a(Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V
    .locals 6

    .line 120
    :try_start_0
    invoke-direct {p0, p3, p1, p2}, Lcom/tkay/expressad/a/g;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 122
    iget-object p1, p0, Lcom/tkay/expressad/a/g;->k:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 123
    iget-object p1, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    invoke-virtual {p1}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p1

    const-string p2, "utf-8"

    invoke-virtual {p1, p2}, Landroid/webkit/WebSettings;->setDefaultTextEncodingName(Ljava/lang/String;)V

    const/16 p1, 0x7d0

    .line 124
    iput p1, p0, Lcom/tkay/expressad/a/g;->f:I

    .line 125
    iput p1, p0, Lcom/tkay/expressad/a/g;->e:I

    .line 127
    iget-object v0, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    iget-object v2, p0, Lcom/tkay/expressad/a/g;->k:Ljava/lang/String;

    const-string v3, "*/*"

    const-string v4, "utf-8"

    move-object v1, p4

    move-object v5, p4

    invoke-virtual/range {v0 .. v5}, Landroid/webkit/WebView;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 131
    :cond_0
    iget-boolean p1, p0, Lcom/tkay/expressad/a/g;->m:Z

    if-eqz p1, :cond_2

    .line 132
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    .line 133
    iget-object p2, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    invoke-virtual {p2}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object p2

    if-eqz p2, :cond_1

    const-string p2, "Referer"

    .line 134
    iget-object p3, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    invoke-virtual {p3}, Landroid/webkit/WebView;->getUrl()Ljava/lang/String;

    move-result-object p3

    invoke-interface {p1, p2, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 136
    :cond_1
    iget-object p2, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    invoke-virtual {p2, p4, p1}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;Ljava/util/Map;)V

    return-void

    .line 138
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    invoke-virtual {p1, p4}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 143
    :try_start_1
    iget-object p2, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    if-eqz p2, :cond_3

    .line 144
    iget-object p2, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    iget-object p3, p0, Lcom/tkay/expressad/a/g;->j:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    iget-object p4, p0, Lcom/tkay/expressad/a/g;->n:Ljava/lang/String;

    invoke-interface {p2, p3, p1, p4}, Lcom/tkay/expressad/a/g$a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_3
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)V
    .locals 8

    .line 106
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-virtual {v1}, Landroid/os/Looper;->getThread()Ljava/lang/Thread;

    move-result-object v1

    if-ne v0, v1, :cond_0

    .line 107
    iget-object p1, p0, Lcom/tkay/expressad/a/g;->j:Ljava/lang/String;

    invoke-direct {p0, p2, p3, p4, p1}, Lcom/tkay/expressad/a/g;->a(Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    return-void

    .line 109
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/a/g;->g:Landroid/os/Handler;

    new-instance v7, Lcom/tkay/expressad/a/g$1;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/a/g$1;-><init>(Lcom/tkay/expressad/a/g;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)V

    invoke-virtual {v0, v7}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private b()V
    .locals 4

    .line 345
    sget-object v0, Lcom/tkay/expressad/a/g;->d:Ljava/lang/String;

    monitor-enter v0

    .line 347
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->f()V

    .line 349
    iget-object v1, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    if-eqz v1, :cond_0

    .line 350
    iget-object v1, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/a/g;->j:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/a/g;->n:Ljava/lang/String;

    invoke-interface {v1, v2, v3}, Lcom/tkay/expressad/a/g$a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 357
    :catch_0
    :catchall_0
    :cond_0
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    :catchall_1
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method static synthetic b(Lcom/tkay/expressad/a/g;)Z
    .locals 0

    .line 28
    iget-boolean p0, p0, Lcom/tkay/expressad/a/g;->t:Z

    return p0
.end method

.method private c()V
    .locals 4

    .line 361
    sget-object v0, Lcom/tkay/expressad/a/g;->d:Ljava/lang/String;

    monitor-enter v0

    .line 363
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->f()V

    .line 364
    iget-object v1, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    invoke-virtual {v1}, Landroid/webkit/WebView;->destroy()V

    .line 366
    iget-object v1, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    if-eqz v1, :cond_0

    .line 367
    iget-object v1, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/a/g;->j:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/a/g;->n:Ljava/lang/String;

    invoke-interface {v1, v2, v3}, Lcom/tkay/expressad/a/g$a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 374
    :catch_0
    :catchall_0
    :cond_0
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    :catchall_1
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method static synthetic c(Lcom/tkay/expressad/a/g;)V
    .locals 3

    .line 2345
    sget-object v0, Lcom/tkay/expressad/a/g;->d:Ljava/lang/String;

    monitor-enter v0

    .line 2347
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->f()V

    .line 2349
    iget-object v1, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    if-eqz v1, :cond_0

    .line 2350
    iget-object v1, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/a/g;->j:Ljava/lang/String;

    iget-object p0, p0, Lcom/tkay/expressad/a/g;->n:Ljava/lang/String;

    invoke-interface {v1, v2, p0}, Lcom/tkay/expressad/a/g$a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 2357
    :catch_0
    :catchall_0
    :cond_0
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method static synthetic d(Lcom/tkay/expressad/a/g;)Lcom/tkay/expressad/a/g$a;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    return-object p0
.end method

.method private d()V
    .locals 4

    .line 398
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->h()V

    .line 1417
    iget-object v0, p0, Lcom/tkay/expressad/a/g;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/a/g;->v:Ljava/lang/Runnable;

    iget v2, p0, Lcom/tkay/expressad/a/g;->e:I

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method private e()V
    .locals 4

    .line 405
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->j()V

    .line 1425
    iget-object v0, p0, Lcom/tkay/expressad/a/g;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/a/g;->u:Ljava/lang/Runnable;

    iget v2, p0, Lcom/tkay/expressad/a/g;->f:I

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic e(Lcom/tkay/expressad/a/g;)Z
    .locals 1

    const/4 v0, 0x1

    .line 28
    iput-boolean v0, p0, Lcom/tkay/expressad/a/g;->t:Z

    return v0
.end method

.method private f()V
    .locals 0

    .line 412
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->j()V

    .line 413
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->h()V

    return-void
.end method

.method static synthetic f(Lcom/tkay/expressad/a/g;)V
    .locals 4

    .line 2398
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->h()V

    .line 2417
    iget-object v0, p0, Lcom/tkay/expressad/a/g;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/a/g;->v:Ljava/lang/Runnable;

    iget p0, p0, Lcom/tkay/expressad/a/g;->e:I

    int-to-long v2, p0

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method private g()V
    .locals 4

    .line 417
    iget-object v0, p0, Lcom/tkay/expressad/a/g;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/a/g;->v:Ljava/lang/Runnable;

    iget v2, p0, Lcom/tkay/expressad/a/g;->e:I

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic g(Lcom/tkay/expressad/a/g;)V
    .locals 0

    .line 28
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->j()V

    return-void
.end method

.method private h()V
    .locals 2

    .line 421
    iget-object v0, p0, Lcom/tkay/expressad/a/g;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/a/g;->v:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic h(Lcom/tkay/expressad/a/g;)V
    .locals 0

    .line 28
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->h()V

    return-void
.end method

.method private i()V
    .locals 4

    .line 425
    iget-object v0, p0, Lcom/tkay/expressad/a/g;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/a/g;->u:Ljava/lang/Runnable;

    iget v2, p0, Lcom/tkay/expressad/a/g;->f:I

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic i(Lcom/tkay/expressad/a/g;)Z
    .locals 0

    .line 28
    iget-boolean p0, p0, Lcom/tkay/expressad/a/g;->m:Z

    return p0
.end method

.method static synthetic j(Lcom/tkay/expressad/a/g;)Landroid/webkit/WebView;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    return-object p0
.end method

.method private j()V
    .locals 2

    .line 429
    iget-object v0, p0, Lcom/tkay/expressad/a/g;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/a/g;->u:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic k(Lcom/tkay/expressad/a/g;)V
    .locals 0

    .line 28
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->f()V

    return-void
.end method

.method static synthetic l(Lcom/tkay/expressad/a/g;)Ljava/lang/String;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/expressad/a/g;->n:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic m(Lcom/tkay/expressad/a/g;)V
    .locals 4

    .line 3405
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->j()V

    .line 3425
    iget-object v0, p0, Lcom/tkay/expressad/a/g;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/tkay/expressad/a/g;->u:Ljava/lang/Runnable;

    iget p0, p0, Lcom/tkay/expressad/a/g;->f:I

    int-to-long v2, p0

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic n(Lcom/tkay/expressad/a/g;)Z
    .locals 1

    const/4 v0, 0x1

    .line 28
    iput-boolean v0, p0, Lcom/tkay/expressad/a/g;->s:Z

    return v0
.end method

.method static synthetic o(Lcom/tkay/expressad/a/g;)I
    .locals 0

    .line 28
    iget p0, p0, Lcom/tkay/expressad/a/g;->f:I

    return p0
.end method

.method static synthetic p(Lcom/tkay/expressad/a/g;)V
    .locals 3

    .line 4361
    sget-object v0, Lcom/tkay/expressad/a/g;->d:Ljava/lang/String;

    monitor-enter v0

    .line 4363
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/a/g;->f()V

    .line 4364
    iget-object v1, p0, Lcom/tkay/expressad/a/g;->l:Landroid/webkit/WebView;

    invoke-virtual {v1}, Landroid/webkit/WebView;->destroy()V

    .line 4366
    iget-object v1, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    if-eqz v1, :cond_0

    .line 4367
    iget-object v1, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    iget-object v2, p0, Lcom/tkay/expressad/a/g;->j:Ljava/lang/String;

    iget-object p0, p0, Lcom/tkay/expressad/a/g;->n:Ljava/lang/String;

    invoke-interface {v1, v2, p0}, Lcom/tkay/expressad/a/g$a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 4374
    :catch_0
    :catchall_0
    :cond_0
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method static synthetic q(Lcom/tkay/expressad/a/g;)I
    .locals 0

    .line 28
    iget p0, p0, Lcom/tkay/expressad/a/g;->e:I

    return p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;Lcom/tkay/expressad/a/g$a;)V
    .locals 0

    if-eqz p6, :cond_0

    .line 99
    iput-object p5, p0, Lcom/tkay/expressad/a/g;->j:Ljava/lang/String;

    .line 100
    iput-object p6, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    .line 102
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/a/g;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)V

    return-void

    .line 97
    :cond_0
    new-instance p1, Ljava/lang/NullPointerException;

    const-string p2, "OverrideUrlLoadingListener can not be null"

    invoke-direct {p1, p2}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/a/g$a;)V
    .locals 0

    if-eqz p7, :cond_0

    .line 88
    iput-object p6, p0, Lcom/tkay/expressad/a/g;->k:Ljava/lang/String;

    .line 89
    iput-object p5, p0, Lcom/tkay/expressad/a/g;->j:Ljava/lang/String;

    .line 90
    iput-object p7, p0, Lcom/tkay/expressad/a/g;->i:Lcom/tkay/expressad/a/g$a;

    .line 91
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/a/g;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;)V

    return-void

    .line 86
    :cond_0
    new-instance p1, Ljava/lang/NullPointerException;

    const-string p2, "OverrideUrlLoadingListener can not be null"

    invoke-direct {p1, p2}, Ljava/lang/NullPointerException;-><init>(Ljava/lang/String;)V

    throw p1
.end method
