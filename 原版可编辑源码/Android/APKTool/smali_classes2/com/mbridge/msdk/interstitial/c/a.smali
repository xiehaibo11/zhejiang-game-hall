.class public final Lcom/mbridge/msdk/interstitial/c/a;
.super Ljava/lang/Object;
.source "InterstitialController.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/interstitial/c/a$c;,
        Lcom/mbridge/msdk/interstitial/c/a$a;,
        Lcom/mbridge/msdk/interstitial/c/a$b;
    }
.end annotation


# static fields
.field public static a:Ljava/lang/String;

.field public static c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public static d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field public static e:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/interstitial/c/a$c;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field public b:Z

.field private f:Ljava/lang/String;

.field private g:Landroid/content/Context;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Lcom/mbridge/msdk/out/MBridgeIds;

.field private l:Landroid/os/Handler;

.field private m:Lcom/mbridge/msdk/c/d;

.field private n:Lcom/mbridge/msdk/out/InterstitialListener;

.field private o:Ljava/lang/String;

.field private p:Ljava/lang/String;

.field private q:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 65
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/interstitial/c/a;->c:Ljava/util/Map;

    .line 67
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/interstitial/c/a;->d:Ljava/util/Map;

    .line 73
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/interstitial/c/a;->e:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 140
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "InterstitialController"

    .line 36
    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const/4 v0, 0x0

    .line 59
    iput-boolean v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->b:Z

    const-string v1, ""

    .line 61
    iput-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a;->o:Ljava/lang/String;

    .line 62
    iput-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a;->p:Ljava/lang/String;

    .line 76
    iput-boolean v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->q:Z

    .line 1150
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/interstitial/c/a$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/interstitial/c/a$1;-><init>(Lcom/mbridge/msdk/interstitial/c/a;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->l:Landroid/os/Handler;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1217
    :try_start_1
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception v0

    .line 144
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static a(Ljava/lang/String;)I
    .locals 1

    .line 118
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/mbridge/msdk/interstitial/c/a;->c:Ljava/util/Map;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/mbridge/msdk/interstitial/c/a;->c:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 119
    sget-object v0, Lcom/mbridge/msdk/interstitial/c/a;->c:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    if-eqz p0, :cond_0

    .line 121
    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 125
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/InterstitialListener;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/c/a;->n:Lcom/mbridge/msdk/out/InterstitialListener;

    return-object p0
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 3

    .line 477
    new-instance v0, Lcom/mbridge/msdk/interstitial/c/a$c;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/interstitial/c/a$c;-><init>(Lcom/mbridge/msdk/interstitial/c/a;)V

    .line 479
    sget-object v1, Lcom/mbridge/msdk/interstitial/c/a;->e:Ljava/util/Map;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 480
    sget-object v1, Lcom/mbridge/msdk/interstitial/c/a;->e:Ljava/util/Map;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 483
    :cond_0
    new-instance v0, Landroid/content/Intent;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a;->g:Landroid/content/Context;

    const-class v2, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x4000000

    .line 484
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const/high16 v1, 0x10000000

    .line 485
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 486
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 487
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    const-string v2, "unitId"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    :cond_1
    if-eqz p1, :cond_2

    .line 490
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a;->p:Ljava/lang/String;

    const-string v1, "campaign"

    .line 491
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/io/Serializable;)Landroid/content/Intent;

    .line 493
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->g:Landroid/content/Context;

    if-eqz p1, :cond_3

    .line 494
    invoke-virtual {p1, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    :cond_3
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/c/a;Ljava/lang/String;)V
    .locals 0

    .line 34
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/interstitial/c/a;->c(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/interstitial/c/a;Z)V
    .locals 0

    .line 34
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/interstitial/c/a;->b(Z)V

    return-void
.end method

.method public static a(Ljava/lang/String;I)V
    .locals 1

    .line 103
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/interstitial/c/a;->c:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 104
    sget-object v0, Lcom/mbridge/msdk/interstitial/c/a;->c:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 107
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method private a(Z)V
    .locals 7

    .line 411
    :try_start_0
    new-instance v6, Lcom/mbridge/msdk/interstitial/a/a;

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a;->g:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/c/a;->j:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/c/a;->h:Ljava/lang/String;

    move-object v0, v6

    move v5, p1

    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/interstitial/a/a;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 413
    new-instance v0, Lcom/mbridge/msdk/interstitial/c/a$b;

    invoke-direct {v0, p0, v6}, Lcom/mbridge/msdk/interstitial/c/a$b;-><init>(Lcom/mbridge/msdk/interstitial/c/a;Lcom/mbridge/msdk/interstitial/a/a;)V

    .line 414
    new-instance v1, Lcom/mbridge/msdk/interstitial/c/a$a;

    invoke-direct {v1, p0, v6, v0}, Lcom/mbridge/msdk/interstitial/c/a$a;-><init>(Lcom/mbridge/msdk/interstitial/c/a;Lcom/mbridge/msdk/interstitial/a/a;Lcom/mbridge/msdk/interstitial/c/a$b;)V

    .line 416
    invoke-virtual {v6, v1}, Lcom/mbridge/msdk/interstitial/a/a;->a(Lcom/mbridge/msdk/interstitial/c/a$a;)V

    .line 418
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a;->l:Landroid/os/Handler;

    if-eqz v1, :cond_0

    .line 419
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a;->l:Landroid/os/Handler;

    const-wide/16 v2, 0x7530

    invoke-virtual {v1, v0, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 421
    :cond_0
    invoke-virtual {v6}, Lcom/mbridge/msdk/interstitial/a/a;->b()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 423
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    if-nez p1, :cond_1

    const-string p1, "can\'t show because unknow error"

    .line 425
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/interstitial/c/a;->b(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/interstitial/c/a;)Lcom/mbridge/msdk/out/MBridgeIds;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/c/a;->k:Lcom/mbridge/msdk/out/MBridgeIds;

    return-object p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/interstitial/c/a;Ljava/lang/String;)V
    .locals 0

    .line 34
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/interstitial/c/a;->b(Ljava/lang/String;)V

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 1

    .line 673
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->l:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 674
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 675
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 p1, 0x2

    .line 676
    iput p1, v0, Landroid/os/Message;->what:I

    .line 677
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->l:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 680
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method private b(Z)V
    .locals 8

    .line 444
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "showInterstitial isShowCall:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 445
    new-instance v0, Lcom/mbridge/msdk/interstitial/a/a;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/c/a;->g:Landroid/content/Context;

    iget-object v4, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/interstitial/c/a;->j:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/interstitial/c/a;->h:Ljava/lang/String;

    const/4 v7, 0x1

    move-object v2, v0

    invoke-direct/range {v2 .. v7}, Lcom/mbridge/msdk/interstitial/a/a;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 446
    invoke-virtual {v0}, Lcom/mbridge/msdk/interstitial/a/a;->a()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 449
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/c/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_1

    .line 454
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string v0, "showInterstitial \u53d1\u73b0cmapaign\u4e3a\u7a7a \u53bbload\u4e00\u904d========="

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x1

    .line 455
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/interstitial/c/a;->a(Z)V

    goto :goto_0

    :cond_1
    const-string p1, "no ads available can show"

    .line 457
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/interstitial/c/a;->c(Ljava/lang/String;)V

    .line 458
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string v0, "showInterstitial \u53d1\u73b0cmapaign\u4e3a\u7a7a"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 465
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 466
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->n:Lcom/mbridge/msdk/out/InterstitialListener;

    if-eqz p1, :cond_2

    const-string p1, "can\'t show because unknow error"

    .line 467
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/interstitial/c/a;->c(Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/interstitial/c/a;)Ljava/lang/String;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/interstitial/c/a;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->o:Ljava/lang/String;

    return-object p1
.end method

.method private c(Ljava/lang/String;)V
    .locals 1

    .line 699
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->l:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 700
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 701
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 p1, 0x4

    .line 702
    iput p1, v0, Landroid/os/Message;->what:I

    .line 703
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->l:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 706
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/interstitial/c/a;)Landroid/os/Handler;
    .locals 0

    .line 34
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/c/a;->l:Landroid/os/Handler;

    return-object p0
.end method

.method private d()V
    .locals 3

    .line 385
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string v1, "initUnitSetting"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 386
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/c/a;->e()V

    .line 387
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->m:Lcom/mbridge/msdk/c/d;

    if-nez v0, :cond_0

    .line 389
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/c/d;->f(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->m:Lcom/mbridge/msdk/c/d;

    .line 390
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string v1, "\u83b7\u53d6\u9ed8\u8ba4\u7684unitsetting"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 393
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method private e()V
    .locals 4

    .line 716
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/c/c;

    invoke-direct {v0}, Lcom/mbridge/msdk/c/c;-><init>()V

    .line 717
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a;->g:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v3, v3, v2}, Lcom/mbridge/msdk/c/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 719
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method static synthetic e(Lcom/mbridge/msdk/interstitial/c/a;)V
    .locals 1

    .line 1662
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/c/a;->l:Landroid/os/Handler;

    if-eqz p0, :cond_0

    const/4 v0, 0x1

    .line 1663
    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    :cond_0
    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/interstitial/c/a;)V
    .locals 1

    .line 1688
    iget-object p0, p0, Lcom/mbridge/msdk/interstitial/c/a;->l:Landroid/os/Handler;

    if-eqz p0, :cond_0

    const/4 v0, 0x3

    .line 1689
    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    :cond_0
    return-void
.end method


# virtual methods
.method public final a()V
    .locals 5

    .line 276
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->g:Landroid/content/Context;

    if-nez v0, :cond_0

    const-string v0, "context is null"

    .line 277
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/c/a;->b(Ljava/lang/String;)V

    .line 278
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string v1, "load context is null"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 281
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "unitid is null"

    .line 282
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/c/a;->b(Ljava/lang/String;)V

    .line 283
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string v1, "load unitid is null"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 287
    :cond_1
    iget-boolean v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->q:Z

    if-nez v0, :cond_2

    const-string v0, "init error"

    .line 288
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/c/a;->b(Ljava/lang/String;)V

    .line 289
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string v1, "load init error"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 294
    :cond_2
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/c/a;->d()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 1322
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->m:Lcom/mbridge/msdk/c/d;

    if-eqz v0, :cond_6

    .line 1323
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->m:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/d;->q()I

    move-result v0

    .line 1324
    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/c/a;->m:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/d;->v()I

    move-result v1

    const/4 v2, 0x1

    if-gtz v0, :cond_3

    move v0, v2

    :cond_3
    if-gtz v1, :cond_4

    move v1, v2

    :cond_4
    mul-int/2addr v1, v0

    .line 1332
    sget-object v2, Lcom/mbridge/msdk/interstitial/c/a;->d:Ljava/util/Map;

    if-eqz v2, :cond_5

    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    .line 1333
    sget-object v2, Lcom/mbridge/msdk/interstitial/c/a;->d:Ljava/util/Map;

    iget-object v3, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1335
    :cond_5
    iget-object v2, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "maxOffset:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " apiCacheNum:"

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " mUnitId:"

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1338
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_6
    :goto_0
    const/4 v0, 0x0

    .line 299
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/c/a;->a(Z)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 302
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, "can\'t show because unknow error"

    .line 303
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/c/a;->b(Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/out/InterstitialListener;)V
    .locals 0

    .line 136
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->n:Lcom/mbridge/msdk/out/InterstitialListener;

    return-void
.end method

.method public final a(Landroid/content/Context;Ljava/util/Map;)Z
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)Z"
        }
    .end annotation

    const-string v0, "catetory"

    const-string v1, "unit_id"

    const/4 v2, 0x0

    .line 232
    :try_start_0
    iput-boolean v2, p0, Lcom/mbridge/msdk/interstitial/c/a;->q:Z

    if-nez p2, :cond_0

    .line 234
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string p2, "init error params==null"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    :cond_0
    if-nez p1, :cond_1

    .line 239
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string p2, "init context ==null"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    .line 243
    :cond_1
    invoke-interface {p2, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 244
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    instance-of v3, v3, Ljava/lang/String;

    if-nez v3, :cond_2

    goto :goto_0

    .line 249
    :cond_2
    invoke-interface {p2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 250
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    instance-of v3, v3, Ljava/lang/String;

    if-eqz v3, :cond_3

    .line 251
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->h:Ljava/lang/String;

    .line 255
    :cond_3
    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iput-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    .line 256
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->g:Landroid/content/Context;

    .line 258
    sget-object p1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-interface {p2, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_4

    sget-object p1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 259
    sget-object p1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->j:Ljava/lang/String;

    .line 262
    :cond_4
    new-instance p1, Lcom/mbridge/msdk/out/MBridgeIds;

    iget-object p2, p0, Lcom/mbridge/msdk/interstitial/c/a;->j:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    invoke-direct {p1, p2, v0}, Lcom/mbridge/msdk/out/MBridgeIds;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->k:Lcom/mbridge/msdk/out/MBridgeIds;

    const/4 p1, 0x1

    .line 264
    iput-boolean p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->q:Z

    goto :goto_1

    .line 245
    :cond_5
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string p2, "init error,make sure you have unitid"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v2

    :catch_0
    move-exception p1

    .line 266
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 267
    iput-boolean v2, p0, Lcom/mbridge/msdk/interstitial/c/a;->q:Z

    .line 269
    :goto_1
    iget-boolean p1, p0, Lcom/mbridge/msdk/interstitial/c/a;->q:Z

    return p1
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 308
    iget-boolean v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->b:Z

    if-eqz v0, :cond_0

    .line 309
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->p:Ljava/lang/String;

    return-object v0

    .line 311
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->o:Ljava/lang/String;

    return-object v0
.end method

.method public final c()V
    .locals 2

    .line 349
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->g:Landroid/content/Context;

    if-nez v0, :cond_0

    const-string v0, "context is null"

    .line 350
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/c/a;->c(Ljava/lang/String;)V

    .line 351
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string v1, "show context is null"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 354
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->i:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "unitid is null"

    .line 355
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/c/a;->c(Ljava/lang/String;)V

    .line 356
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string v1, "show unitid is null"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 360
    :cond_1
    iget-boolean v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->q:Z

    if-nez v0, :cond_2

    const-string v0, "init error"

    .line 361
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/c/a;->c(Ljava/lang/String;)V

    .line 362
    iget-object v0, p0, Lcom/mbridge/msdk/interstitial/c/a;->f:Ljava/lang/String;

    const-string v1, "show init error"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 367
    :cond_2
    invoke-direct {p0}, Lcom/mbridge/msdk/interstitial/c/a;->d()V

    const/4 v0, 0x1

    .line 369
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/c/a;->b(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 372
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const-string v0, "can\'t show because unknow error"

    .line 373
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/interstitial/c/a;->c(Ljava/lang/String;)V

    :goto_0
    return-void
.end method
