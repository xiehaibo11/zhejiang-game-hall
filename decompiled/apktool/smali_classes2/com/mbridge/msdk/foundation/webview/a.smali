.class public Lcom/mbridge/msdk/foundation/webview/a;
.super Ljava/lang/Object;
.source "BackPointBrowserViewListener.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/webview/BrowserView$a;


# static fields
.field private static a:Ljava/lang/String;


# instance fields
.field private b:Landroid/content/Context;

.field private c:Lcom/mbridge/msdk/out/BaseTrackingListener;

.field private d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private e:Z

.field private f:Lcom/mbridge/msdk/foundation/webview/BrowserView;

.field private g:Landroid/os/Handler;

.field private h:Lcom/mbridge/msdk/click/b;

.field private i:J

.field private j:I

.field private k:Z

.field private l:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

.field private m:Ljava/lang/String;

.field private n:Z

.field private final o:Ljava/lang/Runnable;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 28
    const-class v0, Lcom/mbridge/msdk/foundation/webview/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/b;Lcom/mbridge/msdk/foundation/webview/BrowserView;Lcom/mbridge/msdk/out/BaseTrackingListener;)V
    .locals 1

    .line 63
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 32
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->e:Z

    const/16 v0, 0x2710

    .line 37
    iput v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->j:I

    const/4 v0, 0x0

    .line 38
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->k:Z

    const/4 v0, 0x0

    .line 39
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->l:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    .line 42
    new-instance v0, Lcom/mbridge/msdk/foundation/webview/a$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/foundation/webview/a$1;-><init>(Lcom/mbridge/msdk/foundation/webview/a;)V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->o:Ljava/lang/Runnable;

    .line 64
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->b:Landroid/content/Context;

    .line 65
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/webview/a;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 66
    iput-object p4, p0, Lcom/mbridge/msdk/foundation/webview/a;->f:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    .line 67
    iput-object p5, p0, Lcom/mbridge/msdk/foundation/webview/a;->c:Lcom/mbridge/msdk/out/BaseTrackingListener;

    .line 68
    new-instance p1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-direct {p1, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->g:Landroid/os/Handler;

    .line 69
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    if-nez p1, :cond_0

    .line 71
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object p1

    .line 73
    :cond_0
    iput-object p3, p0, Lcom/mbridge/msdk/foundation/webview/a;->h:Lcom/mbridge/msdk/click/b;

    .line 74
    new-instance p2, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    invoke-direct {p2}, Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;-><init>()V

    iput-object p2, p0, Lcom/mbridge/msdk/foundation/webview/a;->l:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    .line 75
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->ac()J

    move-result-wide p1

    long-to-int p1, p1

    iput p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->j:I

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/webview/a;)I
    .locals 0

    .line 27
    iget p0, p0, Lcom/mbridge/msdk/foundation/webview/a;->j:I

    return p0
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 4

    const-string v0, "url"

    const-string v1, "com.mbridge.msdk.activity.MBCommonActivity"

    if-nez p1, :cond_0

    return-void

    .line 207
    :cond_0
    :try_start_0
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 208
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 209
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2, p1, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 210
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-void

    .line 213
    :cond_1
    sget-object v1, Lcom/mbridge/msdk/foundation/webview/b;->a:Ljava/util/HashMap;

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/webview/a;->f:Lcom/mbridge/msdk/foundation/webview/BrowserView;

    invoke-virtual {v1, p2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 214
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ad$a;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    const-string v1, "market://details?id="

    const-string v3, ""

    .line 215
    invoke-virtual {p2, v1, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p2

    .line 216
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "https://play.google.com/store/apps/details?id="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 219
    :cond_2
    invoke-virtual {v2, v0, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 220
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "webview url = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/high16 v0, 0x30000000

    .line 221
    invoke-virtual {v2, v0}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    const-string v0, "mvcommon"

    .line 222
    invoke-virtual {v2, v0, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 223
    invoke-virtual {p1, v2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 225
    :catch_0
    iget-object p3, p0, Lcom/mbridge/msdk/foundation/webview/a;->c:Lcom/mbridge/msdk/out/BaseTrackingListener;

    invoke-static {p1, p2, p3}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/BaseTrackingListener;)V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/webview/a;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 27
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/foundation/webview/a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/webview/a;Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 0

    .line 27
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/foundation/webview/a;->d(Landroid/webkit/WebView;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/webview/a;Z)Z
    .locals 0

    .line 27
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->k:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/foundation/webview/a;)Lcom/mbridge/msdk/click/b;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/webview/a;->h:Lcom/mbridge/msdk/click/b;

    return-object p0
.end method

.method static synthetic b()Ljava/lang/String;
    .locals 1

    .line 27
    sget-object v0, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic c(Lcom/mbridge/msdk/foundation/webview/a;)Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/webview/a;->l:Lcom/mbridge/msdk/click/CommonJumpLoader$JumpLoaderResult;

    return-object p0
.end method

.method private c()V
    .locals 4

    .line 347
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/a;->o:Ljava/lang/Runnable;

    iget v2, p0, Lcom/mbridge/msdk/foundation/webview/a;->j:I

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/foundation/webview/a;)Ljava/lang/String;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/webview/a;->m:Ljava/lang/String;

    return-object p0
.end method

.method private d()V
    .locals 2

    .line 351
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->g:Landroid/os/Handler;

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/a;->o:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method private d(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 6

    const-string p1, "http"

    const/4 v0, 0x1

    .line 231
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return v0

    .line 237
    :cond_0
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    .line 238
    invoke-virtual {v1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const-string v3, "https"

    const/4 v4, 0x0

    if-nez v2, :cond_2

    :try_start_1
    invoke-virtual {v1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_0

    :cond_1
    move v2, v4

    goto :goto_1

    :cond_2
    :goto_0
    move v2, v0

    :goto_1
    if-eqz v2, :cond_3

    return v0

    .line 244
    :cond_3
    invoke-virtual {v1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v1

    const-string v2, "intent"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_8

    .line 245
    invoke-static {p2, v0}, Landroid/content/Intent;->parseUri(Ljava/lang/String;I)Landroid/content/Intent;

    move-result-object v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 248
    :try_start_2
    invoke-virtual {v1}, Landroid/content/Intent;->getPackage()Ljava/lang/String;

    move-result-object v2

    .line 249
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    iget-object v5, p0, Lcom/mbridge/msdk/foundation/webview/a;->b:Landroid/content/Context;

    invoke-virtual {v5}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v5

    invoke-virtual {v5, v2}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v2, :cond_4

    return v4

    :catchall_0
    move-exception v2

    .line 253
    :try_start_3
    sget-object v5, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v5, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :cond_4
    :try_start_4
    const-string v2, "browser_fallback_url"

    .line 258
    invoke-virtual {v1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 259
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_8

    .line 260
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    .line 261
    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_6

    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz p1, :cond_5

    goto :goto_2

    :cond_5
    move p1, v4

    goto :goto_3

    :cond_6
    :goto_2
    move p1, v0

    :goto_3
    if-eqz p1, :cond_7

    return v0

    :cond_7
    move-object p2, v1

    goto :goto_4

    :catchall_1
    move-exception p1

    .line 269
    :try_start_5
    sget-object v1, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 273
    :cond_8
    :goto_4
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->b:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/click/c;->e(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_9

    .line 274
    sget-object p1, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    const-string p2, "openDeepLink"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    return v4

    :cond_9
    return v0

    :catchall_2
    move-exception p1

    .line 280
    sget-object p2, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v0
.end method

.method static synthetic e(Lcom/mbridge/msdk/foundation/webview/a;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/webview/a;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method private e(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 7

    const-string v0, "http"

    const/4 v1, 0x0

    .line 287
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    return v1

    .line 293
    :cond_0
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    .line 294
    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const-string v4, "https"

    const/4 v5, 0x1

    if-nez v3, :cond_2

    :try_start_1
    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    goto :goto_0

    :cond_1
    move v3, v1

    goto :goto_1

    :cond_2
    :goto_0
    move v3, v5

    :goto_1
    if-eqz v3, :cond_3

    return v1

    .line 300
    :cond_3
    invoke-virtual {v2}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v2

    const-string v3, "intent"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_8

    .line 301
    invoke-static {p2, v5}, Landroid/content/Intent;->parseUri(Ljava/lang/String;I)Landroid/content/Intent;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 304
    :try_start_2
    invoke-virtual {v2}, Landroid/content/Intent;->getPackage()Ljava/lang/String;

    move-result-object v3

    .line 305
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_4

    iget-object v6, p0, Lcom/mbridge/msdk/foundation/webview/a;->b:Landroid/content/Context;

    invoke-virtual {v6}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v6

    invoke-virtual {v6, v3}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v3

    if-eqz v3, :cond_4

    const/high16 v3, 0x10000000

    .line 306
    invoke-virtual {v2, v3}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 307
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/webview/a;->b:Landroid/content/Context;

    invoke-virtual {v3, v2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    .line 308
    iput-boolean v5, p0, Lcom/mbridge/msdk/foundation/webview/a;->k:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return v5

    :catchall_0
    move-exception v3

    .line 312
    :try_start_3
    sget-object v6, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    invoke-virtual {v3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v6, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :cond_4
    :try_start_4
    const-string v3, "browser_fallback_url"

    .line 317
    invoke-virtual {v2, v3}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 318
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_8

    .line 319
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    .line 320
    invoke-virtual {v3}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v6, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    invoke-virtual {v3}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    goto :goto_2

    :cond_5
    move v0, v1

    goto :goto_3

    :cond_6
    :goto_2
    move v0, v5

    :goto_3
    if-eqz v0, :cond_7

    .line 322
    invoke-virtual {p1, v2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    return v1

    :cond_7
    move-object p2, v2

    goto :goto_4

    :catchall_1
    move-exception p1

    .line 329
    :try_start_5
    sget-object v0, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 333
    :cond_8
    :goto_4
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->b:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/click/c;->e(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_9

    .line 334
    sget-object p1, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    const-string p2, "openDeepLink"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 335
    iput-boolean v5, p0, Lcom/mbridge/msdk/foundation/webview/a;->k:Z
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    return v5

    :cond_9
    return v1

    :catchall_2
    move-exception p1

    .line 341
    sget-object p2, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v1
.end method

.method static synthetic f(Lcom/mbridge/msdk/foundation/webview/a;)Z
    .locals 0

    .line 27
    iget-boolean p0, p0, Lcom/mbridge/msdk/foundation/webview/a;->k:Z

    return p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/foundation/webview/a;)Landroid/content/Context;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/webview/a;->b:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/foundation/webview/a;)Lcom/mbridge/msdk/out/BaseTrackingListener;
    .locals 0

    .line 27
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/webview/a;->c:Lcom/mbridge/msdk/out/BaseTrackingListener;

    return-object p0
.end method


# virtual methods
.method public final a()V
    .locals 0

    return-void
.end method

.method public final a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 178
    sget-object p2, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/webview/a;->d()V

    .line 180
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->b()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object p2

    new-instance v0, Lcom/mbridge/msdk/foundation/webview/a$4;

    invoke-direct {v0, p0, p4, p3}, Lcom/mbridge/msdk/foundation/webview/a$4;-><init>(Lcom/mbridge/msdk/foundation/webview/a;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    .line 195
    invoke-direct {p0, p1, p4}, Lcom/mbridge/msdk/foundation/webview/a;->d(Landroid/webkit/WebView;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->k:Z

    if-nez p1, :cond_0

    const/4 p1, 0x1

    .line 196
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->k:Z

    .line 197
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->b:Landroid/content/Context;

    iget-object p2, p0, Lcom/mbridge/msdk/foundation/webview/a;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0, p1, p4, p2}, Lcom/mbridge/msdk/foundation/webview/a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 4

    .line 85
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->i:J

    const-wide/16 v2, 0x0

    cmp-long p1, v0, v2

    const/4 v0, 0x1

    if-nez p1, :cond_0

    .line 86
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/mbridge/msdk/foundation/webview/a;->i:J

    .line 87
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->n:Z

    if-nez p1, :cond_0

    .line 88
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->n:Z

    .line 89
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/webview/a;->c()V

    .line 92
    :cond_0
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/webview/a;->m:Ljava/lang/String;

    .line 93
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->e:Z

    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 4

    .line 98
    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->i:J

    const-wide/16 v2, 0x0

    cmp-long p1, v0, v2

    const/4 p3, 0x1

    if-nez p1, :cond_1

    .line 99
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->i:J

    .line 100
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->n:Z

    if-nez p1, :cond_0

    .line 101
    iput-boolean p3, p0, Lcom/mbridge/msdk/foundation/webview/a;->n:Z

    .line 102
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/webview/a;->c()V

    :cond_0
    const/4 p1, 0x0

    .line 104
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->k:Z

    .line 106
    :cond_1
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/webview/a;->m:Ljava/lang/String;

    .line 107
    iput-boolean p3, p0, Lcom/mbridge/msdk/foundation/webview/a;->e:Z

    return-void
.end method

.method public final b(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 3

    .line 112
    sget-object v0, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "shouldOverrideUrlLoading1  "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    .line 113
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->e:Z

    .line 114
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/webview/a;->b:Landroid/content/Context;

    const/4 v2, 0x0

    invoke-static {v1, p2, v2}, Lcom/mbridge/msdk/foundation/tools/ad$a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    .line 115
    iput-boolean v1, p0, Lcom/mbridge/msdk/foundation/webview/a;->k:Z

    .line 117
    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/foundation/webview/a;->e(Landroid/webkit/WebView;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    const-wide/16 v1, 0x0

    .line 119
    iput-wide v1, p0, Lcom/mbridge/msdk/foundation/webview/a;->i:J

    .line 120
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->e:Z

    .line 121
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/webview/a;->d()V

    .line 122
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->b()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/foundation/webview/a$2;

    invoke-direct {v1, p0, p2}, Lcom/mbridge/msdk/foundation/webview/a$2;-><init>(Lcom/mbridge/msdk/foundation/webview/a;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    :cond_1
    return p1
.end method

.method public final c(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 3

    .line 143
    sget-object p1, Lcom/mbridge/msdk/foundation/webview/a;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onPageFinished1  "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 144
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->e:Z

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-wide/16 v0, 0x0

    .line 147
    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->i:J

    const/4 p1, 0x0

    .line 148
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->e:Z

    .line 149
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->b()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/foundation/webview/a$3;

    invoke-direct {v1, p0, p2}, Lcom/mbridge/msdk/foundation/webview/a$3;-><init>(Lcom/mbridge/msdk/foundation/webview/a;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    .line 163
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 166
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/webview/a;->d()V

    .line 167
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 168
    invoke-virtual {v0}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v1

    const-string v2, "http"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x1

    if-nez v1, :cond_2

    invoke-virtual {v0}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v0

    const-string v1, "https"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    :cond_2
    move p1, v2

    :cond_3
    if-eqz p1, :cond_4

    .line 169
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->k:Z

    if-nez p1, :cond_4

    .line 170
    iput-boolean v2, p0, Lcom/mbridge/msdk/foundation/webview/a;->k:Z

    .line 171
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/webview/a;->b:Landroid/content/Context;

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/webview/a;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0, p1, p2, v0}, Lcom/mbridge/msdk/foundation/webview/a;->a(Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_4
    return-void
.end method
