.class public Lcom/mbridge/msdk/foundation/controller/b;
.super Ljava/lang/Object;
.source "SDKController.java"


# static fields
.field private static volatile j:Lcom/mbridge/msdk/foundation/controller/b;


# instance fields
.field public final a:I

.field public final b:I

.field public final c:I

.field public final d:I

.field public final e:I

.field public final f:I

.field public final g:I

.field public final h:I

.field i:Landroid/os/Handler;

.field private k:Landroid/content/Context;

.field private l:Ljava/lang/String;

.field private m:Ljava/lang/String;

.field private n:Ljava/lang/String;

.field private o:Ljava/lang/String;

.field private p:Ljava/lang/String;

.field private q:Z

.field private r:Lcom/mbridge/msdk/b/a;

.field private s:Ljava/lang/String;

.field private t:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private u:Lcom/mbridge/msdk/foundation/tools/FastKV;

.field private v:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private w:I

.field private x:Lcom/mbridge/msdk/out/AdMobClickListener;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 116
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 81
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->q:Z

    const/4 v0, 0x1

    .line 85
    iput v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->a:I

    const/4 v0, 0x2

    .line 86
    iput v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->b:I

    const/4 v0, 0x3

    .line 87
    iput v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->c:I

    const/4 v0, 0x4

    .line 88
    iput v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->d:I

    const/4 v0, 0x5

    .line 89
    iput v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->e:I

    const/4 v0, 0x6

    .line 90
    iput v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->f:I

    const/4 v0, 0x7

    .line 91
    iput v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->g:I

    const/16 v0, 0x8

    .line 92
    iput v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->h:I

    const/4 v0, 0x0

    .line 111
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->t:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 529
    new-instance v0, Lcom/mbridge/msdk/foundation/controller/b$4;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/foundation/controller/b$4;-><init>(Lcom/mbridge/msdk/foundation/controller/b;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->i:Landroid/os/Handler;

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/foundation/controller/b;
    .locals 2

    .line 123
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/b;->j:Lcom/mbridge/msdk/foundation/controller/b;

    if-nez v0, :cond_1

    .line 124
    const-class v0, Lcom/mbridge/msdk/foundation/controller/b;

    monitor-enter v0

    .line 125
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/controller/b;->j:Lcom/mbridge/msdk/foundation/controller/b;

    if-nez v1, :cond_0

    .line 126
    new-instance v1, Lcom/mbridge/msdk/foundation/controller/b;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/controller/b;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/foundation/controller/b;->j:Lcom/mbridge/msdk/foundation/controller/b;

    .line 128
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 130
    :cond_1
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/foundation/controller/b;->j:Lcom/mbridge/msdk/foundation/controller/b;

    return-object v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/controller/b;)V
    .locals 0

    .line 72
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/controller/b;->e()V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/controller/b;Ljava/lang/String;)V
    .locals 3

    .line 7801
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    if-nez v0, :cond_0

    goto/16 :goto_1

    .line 7805
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 7807
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 7809
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->aM()Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/mbridge/msdk/MBridgeConstans;->OMID_JS_SERVICE_URL:Ljava/lang/String;

    .line 7810
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->aL()Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/mbridge/msdk/MBridgeConstans;->OMID_JS_H5_URL:Ljava/lang/String;

    .line 7812
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->al()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 7813
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v1

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->al()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mbridge/msdk/foundation/same/net/f/d;->c:Ljava/lang/String;

    .line 7814
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/same/net/f/d;->e()V

    .line 7816
    :cond_1
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->am()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 7817
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v1

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->am()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/foundation/same/net/f/d;->d:Ljava/lang/String;

    .line 7818
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/net/f/d;->f()V

    goto :goto_0

    :cond_2
    const-string v0, "https://cdn-adn-https.rayjump.com/cdn-adn/v2/portal/19/08/20/11/06/5d5b63cb457e2.js"

    .line 7821
    sput-object v0, Lcom/mbridge/msdk/MBridgeConstans;->OMID_JS_SERVICE_URL:Ljava/lang/String;

    const-string v0, "https://mtg-native.rayjump.com/omsdk/omsdkjs_common_js.txt"

    .line 7822
    sput-object v0, Lcom/mbridge/msdk/MBridgeConstans;->OMID_JS_H5_URL:Ljava/lang/String;

    .line 7826
    :cond_3
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/c/b;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 7827
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    invoke-virtual {v0, p1, v1, v2}, Lcom/mbridge/msdk/c/b;->a(Ljava/lang/String;ILjava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 7828
    new-instance v0, Lcom/mbridge/msdk/c/c;

    invoke-direct {v0}, Lcom/mbridge/msdk/c/c;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    iget-object p0, p0, Lcom/mbridge/msdk/foundation/controller/b;->o:Ljava/lang/String;

    invoke-virtual {v0, v1, p1, p0}, Lcom/mbridge/msdk/c/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 7830
    :cond_4
    new-instance p1, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object p0, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/report/d;->a()V

    :goto_1
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/foundation/controller/b;)Ljava/lang/String;
    .locals 0

    .line 72
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/controller/b;->n:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/foundation/controller/b;)Landroid/content/Context;
    .locals 0

    .line 72
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/foundation/controller/b;)V
    .locals 8

    .line 8726
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 8727
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->n:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v2

    if-nez v2, :cond_0

    .line 8729
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v2

    .line 8731
    :cond_0
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    const-string v4, "mbridge_setting_campaign_time"

    new-instance v5, Ljava/lang/Long;

    const-wide/16 v6, 0x0

    invoke-direct {v5, v6, v7}, Ljava/lang/Long;-><init>(J)V

    invoke-static {v3, v4, v5}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    cmp-long v5, v3, v6

    if-lez v5, :cond_1

    .line 8734
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->N()I

    move-result v5

    mul-int/lit16 v5, v5, 0x3e8

    int-to-long v5, v5

    add-long/2addr v3, v5

    cmp-long v0, v3, v0

    if-lez v0, :cond_1

    goto :goto_0

    .line 8739
    :cond_1
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->M()I

    move-result v0

    if-gtz v0, :cond_2

    .line 8741
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/q;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/q;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/q;->b()I

    goto :goto_0

    .line 8745
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/q;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/db/q;->c()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 8746
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 8747
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    .line 8748
    iput-object v0, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 v0, 0x7

    .line 8749
    iput v0, v1, Landroid/os/Message;->what:I

    .line 8750
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/controller/b;->i:Landroid/os/Handler;

    invoke-virtual {p0, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 8754
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_0
    return-void
.end method

.method private e()V
    .locals 5

    :try_start_0
    const-string v0, "com.mbridge.msdk.e.b"

    .line 406
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "getInstance"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    .line 407
    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    const/4 v3, 0x0

    new-array v4, v2, [Ljava/lang/Object;

    .line 408
    invoke-virtual {v1, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const-string v3, "start"

    new-array v4, v2, [Ljava/lang/Class;

    .line 409
    invoke-virtual {v0, v3, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v2, v2, [Ljava/lang/Object;

    .line 410
    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 412
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "SDKController"

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public final a(Ljava/util/Map;I)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;I)V"
        }
    .end annotation

    const-string v0, "layout_type"

    .line 767
    invoke-static {}, Lcom/mbridge/msdk/out/MBridgeSDKFactory;->getMBridgeSDK()Lcom/mbridge/msdk/system/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/system/a;->getStatus()Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;

    move-result-object v1

    sget-object v2, Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;->COMPLETED:Lcom/mbridge/msdk/MBridgeSDK$PLUGIN_LOAD_STATUS;

    const-string v3, "SDKController"

    if-eq v1, v2, :cond_0

    const-string p1, "preloaad failed,sdk do not inited"

    .line 768
    invoke-static {v3, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 771
    :cond_0
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->v:Ljava/util/Map;

    .line 772
    iput p2, p0, Lcom/mbridge/msdk/foundation/controller/b;->w:I

    .line 773
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    if-eqz p1, :cond_6

    .line 5231
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->r:Lcom/mbridge/msdk/b/a;

    if-nez p1, :cond_1

    .line 5232
    new-instance p1, Lcom/mbridge/msdk/b/a;

    invoke-direct {p1}, Lcom/mbridge/msdk/b/a;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->r:Lcom/mbridge/msdk/b/a;

    .line 5235
    :cond_1
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->v:Ljava/util/Map;

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->v:Ljava/util/Map;

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result p1

    if-lez p1, :cond_6

    .line 5236
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->v:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 5237
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->v:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    const-string p2, "preload"

    const/4 v0, 0x2

    const/4 v1, 0x3

    const/4 v2, 0x0

    const/4 v4, 0x1

    if-nez p1, :cond_2

    .line 5239
    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->v:Ljava/util/Map;

    iget v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->w:I

    iget-object v5, p0, Lcom/mbridge/msdk/foundation/controller/b;->x:Lcom/mbridge/msdk/out/AdMobClickListener;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    :try_start_2
    const-string v6, "com.mbridge.msdk.mbnative.e.a"

    .line 6013
    invoke-static {v6}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v6

    .line 6015
    invoke-virtual {v6}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v7

    new-array v8, v1, [Ljava/lang/Class;

    .line 6016
    const-class v9, Ljava/util/Map;

    aput-object v9, v8, v2

    sget-object v9, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v9, v8, v4

    const-class v9, Lcom/mbridge/msdk/out/AdMobClickListener;

    aput-object v9, v8, v0

    invoke-virtual {v6, p2, v8}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p2

    new-array v1, v1, [Ljava/lang/Object;

    aput-object p1, v1, v2

    .line 6019
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v1, v4

    aput-object v5, v1, v0

    invoke-virtual {p2, v7, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 6022
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    :cond_2
    if-ne v1, p1, :cond_3

    .line 5241
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->v:Ljava/util/Map;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    :try_start_4
    const-string v0, "com.mbridge.msdk.appwall.service.HandlerProvider"

    .line 6035
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 6036
    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v1

    new-array v3, v4, [Ljava/lang/Class;

    .line 6037
    const-class v5, Ljava/util/Map;

    aput-object v5, v3, v2

    invoke-virtual {v0, p2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p2

    new-array v0, v4, [Ljava/lang/Object;

    aput-object p1, v0, v2

    .line 6039
    invoke-virtual {p2, v1, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_0

    :catch_1
    move-exception p1

    .line 6042
    :try_start_5
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    :cond_3
    if-ne v4, p1, :cond_4

    goto :goto_0

    :cond_4
    if-ne v0, p1, :cond_5

    goto :goto_0

    :cond_5
    const-string p1, "unknow layout type in preload"

    .line 5247
    invoke-static {v3, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2

    goto :goto_0

    :catch_2
    move-exception p1

    .line 5252
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_6
    :goto_0
    return-void
.end method

.method public final a(Ljava/util/Map;Landroid/content/Context;)V
    .locals 12

    const-string v0, "SDKController"

    const-string v1, ""

    if-eqz p2, :cond_1a

    const-string v2, "mbridge_appid"

    .line 145
    invoke-interface {p1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 146
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    iput-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->n:Ljava/lang/String;

    .line 148
    :cond_0
    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    iput-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    .line 149
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/foundation/controller/a;->b(Landroid/content/Context;)V

    .line 151
    :try_start_0
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 152
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 153
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v4

    const-string v5, "sdk_app_id"

    invoke-virtual {v4, v5, v3}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v3

    goto :goto_0

    :catch_0
    move-exception v3

    goto :goto_1

    .line 158
    :goto_0
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_2

    .line 156
    :goto_1
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 161
    :cond_1
    :goto_2
    :try_start_1
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/same/net/n;->a(Landroid/content/Context;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 165
    :catch_1
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x1a

    if-ge v3, v4, :cond_2

    .line 166
    invoke-static {p2}, Lcom/mbridge/msdk/d/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/d/b;

    move-result-object v3

    const/16 v4, 0x7530

    iget-object v5, p0, Lcom/mbridge/msdk/foundation/controller/b;->n:Ljava/lang/String;

    invoke-virtual {v3, v4, v5}, Lcom/mbridge/msdk/d/b;->a(ILjava/lang/String;)V

    .line 168
    :cond_2
    iget-boolean v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->q:Z

    const/4 v4, 0x1

    if-ne v3, v4, :cond_3

    .line 170
    invoke-static {}, Lcom/mbridge/msdk/rover/b;->a()Lcom/mbridge/msdk/rover/b;

    move-result-object p1

    .line 171
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/rover/b;->a(Landroid/content/Context;)V

    .line 172
    invoke-virtual {p1}, Lcom/mbridge/msdk/rover/b;->b()V

    .line 173
    new-instance p1, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-direct {p1, p2}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/report/d;->a()V

    return-void

    .line 176
    :cond_3
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/v;->C(Landroid/content/Context;)Ljava/lang/String;

    if-eqz p1, :cond_19

    .line 180
    invoke-interface {p1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_4

    .line 181
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iput-object v2, p0, Lcom/mbridge/msdk/foundation/controller/b;->n:Ljava/lang/String;

    :cond_4
    const-string v2, "mbridge_appkey"

    .line 184
    invoke-interface {p1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 185
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iput-object v2, p0, Lcom/mbridge/msdk/foundation/controller/b;->o:Ljava/lang/String;

    :cond_5
    const-string v2, "mbridge_wx_appid"

    .line 187
    invoke-interface {p1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_6

    .line 188
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iput-object v2, p0, Lcom/mbridge/msdk/foundation/controller/b;->p:Ljava/lang/String;

    :cond_6
    const-string v2, "applicationID"

    .line 190
    invoke-interface {p1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_7

    .line 191
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    iput-object v2, p0, Lcom/mbridge/msdk/foundation/controller/b;->s:Ljava/lang/String;

    :cond_7
    const-string v2, "mbridge_appstartupcarsh"

    .line 193
    invoke-interface {p1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_8

    .line 194
    invoke-interface {p1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->m:Ljava/lang/String;

    :cond_8
    const/4 p1, 0x0

    .line 1461
    :try_start_2
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v2

    if-eqz v2, :cond_b

    .line 1463
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->n()Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_b

    .line 1464
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_b

    .line 1465
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_9
    :goto_3
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_b

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/b;

    .line 1466
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/b;->a()I

    move-result v5
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const/16 v6, 0x11f

    const-string v7, "loadFormSelfFilling"

    const/4 v8, 0x2

    if-ne v5, v6, :cond_a

    :try_start_3
    const-string v5, "com.mbridge.msdk.interstitialvideo.out.MBInterstitialVideoHandler"

    .line 1467
    invoke-static {v5}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v5

    .line 1468
    iget-object v6, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    if-eqz v6, :cond_9

    if-eqz v5, :cond_9

    new-array v6, v8, [Ljava/lang/Class;

    .line 1470
    const-class v9, Ljava/lang/String;

    aput-object v9, v6, p1

    const-class v9, Ljava/lang/String;

    aput-object v9, v6, v4

    invoke-virtual {v5, v6}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v6

    new-array v8, v8, [Ljava/lang/Object;

    aput-object v1, v8, p1

    .line 1471
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/b;->b()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v8, v4

    invoke-virtual {v6, v8}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_9

    new-array v6, p1, [Ljava/lang/Class;

    .line 1473
    invoke-virtual {v5, v7, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v5

    new-array v6, p1, [Ljava/lang/Object;

    .line 1474
    invoke-virtual {v5, v3, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_3

    .line 1478
    :cond_a
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/b;->a()I

    move-result v5

    const/16 v6, 0x5e

    if-ne v5, v6, :cond_9

    const-string v5, "com.mbridge.msdk.out.MBRewardVideoHandler"

    .line 1479
    invoke-static {v5}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v5

    if-eqz v5, :cond_9

    new-array v6, v8, [Ljava/lang/Class;

    .line 1481
    const-class v9, Ljava/lang/String;

    aput-object v9, v6, p1

    const-class v9, Ljava/lang/String;

    aput-object v9, v6, v4

    invoke-virtual {v5, v6}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v6

    new-array v8, v8, [Ljava/lang/Object;

    aput-object v1, v8, p1

    .line 1482
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/b;->b()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v8, v4

    invoke-virtual {v6, v8}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_9

    new-array v6, p1, [Ljava/lang/Class;

    .line 1484
    invoke-virtual {v5, v7, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v5

    new-array v6, p1, [Ljava/lang/Object;

    .line 1485
    invoke-virtual {v5, v3, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto/16 :goto_3

    :catchall_1
    move-exception v2

    .line 1494
    sget-boolean v3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v3, :cond_b

    .line 1495
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 2700
    :cond_b
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->n:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/controller/a;->c(Ljava/lang/String;)V

    .line 2701
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->o:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/controller/a;->d(Ljava/lang/String;)V

    .line 2702
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->p:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/controller/a;->e(Ljava/lang/String;)V

    .line 2703
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->l:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/controller/a;->b(Ljava/lang/String;)V

    .line 2704
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->s:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/controller/a;->a(Ljava/lang/String;)V

    .line 2708
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    new-instance v3, Lcom/mbridge/msdk/foundation/controller/b$6;

    invoke-direct {v3, p0}, Lcom/mbridge/msdk/foundation/controller/b$6;-><init>(Lcom/mbridge/msdk/foundation/controller/b;)V

    iget-object v5, p0, Lcom/mbridge/msdk/foundation/controller/b;->i:Landroid/os/Handler;

    invoke-virtual {v2, v3, v5}, Lcom/mbridge/msdk/foundation/controller/a;->a(Lcom/mbridge/msdk/foundation/controller/a$b;Landroid/os/Handler;)V

    .line 2260
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    .line 3395
    :try_start_4
    invoke-static {v2}, Lcom/iab/omid/library/mmadbridge/Omid;->activate(Landroid/content/Context;)V

    .line 3396
    invoke-static {}, Lcom/iab/omid/library/mmadbridge/Omid;->isActive()Z

    move-result v3

    if-nez v3, :cond_c

    .line 3397
    new-instance v5, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-direct {v5, v2, p1}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;I)V

    const-string v6, ""

    const-string v7, ""

    const-string v8, ""

    const-string v9, ""

    const-string v10, "activate om failed"

    invoke-virtual/range {v5 .. v10}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/IllegalArgumentException; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_4

    :catch_2
    move-exception v2

    .line 3400
    invoke-virtual {v2}, Ljava/lang/IllegalArgumentException;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3, v2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 2261
    :cond_c
    :goto_4
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "facebook = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->l:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "appId = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->n:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "appKey = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->o:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2262
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    .line 4323
    :try_start_5
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result v3
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    const-string v5, "H+tU+FeXHM=="

    if-eqz v3, :cond_d

    :try_start_6
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->u:Lcom/mbridge/msdk/foundation/tools/FastKV;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    if-nez v3, :cond_d

    .line 4325
    :try_start_7
    new-instance v3, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;

    sget-object v6, Lcom/mbridge/msdk/foundation/same/b/c;->m:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v6}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-direct {v3, v6, v7}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;->build()Lcom/mbridge/msdk/foundation/tools/FastKV;

    move-result-object v3

    iput-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->u:Lcom/mbridge/msdk/foundation/tools/FastKV;
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_3
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    goto :goto_5

    :catch_3
    const/4 v3, 0x0

    .line 4327
    :try_start_8
    iput-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->u:Lcom/mbridge/msdk/foundation/tools/FastKV;

    .line 4331
    :cond_d
    :goto_5
    iget-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->u:Lcom/mbridge/msdk/foundation/tools/FastKV;
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    const-string v6, "c"

    const-string v7, "b"

    const-string v8, "H+tU+Fz8"

    const-string v9, "H+tU+bfPhM=="

    if-eqz v3, :cond_11

    .line 4332
    :try_start_9
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->u:Lcom/mbridge/msdk/foundation/tools/FastKV;

    invoke-static {v9}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2, v1}, Lcom/mbridge/msdk/foundation/tools/FastKV;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 4333
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/b;->u:Lcom/mbridge/msdk/foundation/tools/FastKV;

    invoke-static {v8}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, v1}, Lcom/mbridge/msdk/foundation/tools/FastKV;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 4335
    sget-object v2, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_e

    sget-object v2, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_e

    .line 4336
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v2

    invoke-virtual {v2, v7}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    .line 4337
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v2

    invoke-virtual {v2, v6}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    .line 4339
    :cond_e
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_10

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_10

    .line 4340
    sget-object p1, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_f

    sget-object p1, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_f

    goto/16 :goto_7

    .line 4343
    :cond_f
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->u:Lcom/mbridge/msdk/foundation/tools/FastKV;

    invoke-static {v9}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Lcom/mbridge/msdk/foundation/tools/FastKV;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 4344
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->u:Lcom/mbridge/msdk/foundation/tools/FastKV;

    invoke-static {v8}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Lcom/mbridge/msdk/foundation/tools/FastKV;->putString(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 4346
    :cond_10
    sput-object p1, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    .line 4347
    sput-object v1, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    .line 4348
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p1

    sget-object v1, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-virtual {p1, v7, v1}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 4349
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p1

    sget-object v1, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-virtual {p1, v6, v1}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_7

    .line 4352
    :cond_11
    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3, p1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    if-eqz p1, :cond_12

    .line 4354
    invoke-static {v9}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {p1, v2, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 4355
    invoke-static {v8}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {p1, v3, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    move-object v11, v2

    move-object v2, v1

    move-object v1, v11

    goto :goto_6

    :cond_12
    move-object v2, v1

    .line 4357
    :goto_6
    sget-object v3, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_13

    sget-object v3, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_13

    .line 4358
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v3

    invoke-virtual {v3, v7}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    .line 4359
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v3

    invoke-virtual {v3, v6}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    sput-object v3, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    .line 4361
    :cond_13
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_15

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_15

    .line 4362
    sget-object v1, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_14

    sget-object v1, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_14

    goto :goto_7

    :cond_14
    if-eqz p1, :cond_16

    .line 4366
    invoke-interface {p1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    .line 4367
    invoke-static {v9}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-interface {p1, v1, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 4368
    invoke-static {v8}, Lcom/mbridge/msdk/foundation/tools/t;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-object v2, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-interface {p1, v1, v2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 4369
    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V

    goto :goto_7

    .line 4372
    :cond_15
    sput-object v1, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    .line 4373
    sput-object v2, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    .line 4374
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p1

    sget-object v1, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-virtual {p1, v7, v1}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 4375
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p1

    sget-object v1, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-virtual {p1, v6, v1}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_2

    goto :goto_7

    :catchall_2
    move-exception p1

    .line 4379
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 2265
    :cond_16
    :goto_7
    :try_start_a
    sget-boolean p1, Lcom/mbridge/msdk/MBridgeConstans;->INIT_UA_IN:Z

    if-eqz p1, :cond_17

    .line 2266
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object p1

    .line 2268
    new-instance v1, Lcom/mbridge/msdk/foundation/controller/b$2;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/controller/b$2;-><init>(Lcom/mbridge/msdk/foundation/controller/b;)V

    invoke-interface {p1, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    goto :goto_8

    .line 2281
    :cond_17
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object p1

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne p1, v1, :cond_18

    .line 2282
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object p1

    .line 2284
    new-instance v1, Lcom/mbridge/msdk/foundation/controller/b$3;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/controller/b$3;-><init>(Lcom/mbridge/msdk/foundation/controller/b;)V

    invoke-interface {p1, v1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    goto :goto_8

    .line 2295
    :cond_18
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/controller/b;->e()V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_4

    goto :goto_8

    :catch_4
    const-string p1, "get app setting failed"

    .line 2300
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2304
    :goto_8
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/b;->c()V

    .line 2310
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ac;->a(Landroid/content/Context;)V

    .line 2315
    iput-boolean v4, p0, Lcom/mbridge/msdk/foundation/controller/b;->q:Z

    .line 201
    invoke-static {}, Lcom/mbridge/msdk/rover/b;->a()Lcom/mbridge/msdk/rover/b;

    move-result-object p1

    .line 202
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/rover/b;->a(Landroid/content/Context;)V

    .line 203
    invoke-virtual {p1}, Lcom/mbridge/msdk/rover/b;->b()V

    .line 205
    :cond_19
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->n:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/c/b;->g(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    .line 206
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->a()I

    move-result p1

    int-to-long v0, p1

    const-wide/16 v2, 0x514

    cmp-long p1, v0, v2

    if-eqz p1, :cond_1a

    .line 208
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/controller/b;->i:Landroid/os/Handler;

    new-instance v2, Lcom/mbridge/msdk/foundation/controller/b$1;

    invoke-direct {v2, p0, p2}, Lcom/mbridge/msdk/foundation/controller/b$1;-><init>(Lcom/mbridge/msdk/foundation/controller/b;Landroid/content/Context;)V

    invoke-virtual {p1, v2, v0, v1}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_1a
    return-void
.end method

.method public final b()V
    .locals 2

    .line 524
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->i:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 525
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 2

    .line 644
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/foundation/controller/b$5;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/controller/b$5;-><init>(Lcom/mbridge/msdk/foundation/controller/b;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 696
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public final d()Z
    .locals 4

    .line 781
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->k:Landroid/content/Context;

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    iget-object v2, p0, Lcom/mbridge/msdk/foundation/controller/b;->t:Ljava/util/concurrent/atomic/AtomicBoolean;

    if-nez v2, :cond_1

    const/4 v2, 0x0

    const-string v3, "mb_optimization_setting"

    .line 782
    invoke-virtual {v0, v3, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    const-string v3, "use_thread_pool"

    .line 783
    invoke-interface {v0, v3, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v0

    .line 784
    new-instance v3, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v3, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v3, p0, Lcom/mbridge/msdk/foundation/controller/b;->t:Ljava/util/concurrent/atomic/AtomicBoolean;

    if-nez v0, :cond_0

    move v2, v1

    .line 785
    :cond_0
    invoke-virtual {v3, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 788
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/controller/b;->t:Ljava/util/concurrent/atomic/AtomicBoolean;

    if-eqz v0, :cond_2

    .line 789
    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    return v0

    :cond_2
    return v1
.end method
