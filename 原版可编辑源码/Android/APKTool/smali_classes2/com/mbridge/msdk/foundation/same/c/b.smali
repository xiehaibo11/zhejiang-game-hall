.class public final Lcom/mbridge/msdk/foundation/same/c/b;
.super Ljava/lang/Object;
.source "CommonImageLoader.java"


# static fields
.field private static a:Lcom/mbridge/msdk/foundation/same/c/b;


# instance fields
.field private b:Lcom/mbridge/msdk/foundation/same/e/b;

.field private c:Lcom/mbridge/msdk/foundation/same/a/c;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/mbridge/msdk/foundation/same/a/c<",
            "Ljava/lang/String;",
            "Landroid/graphics/Bitmap;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/same/c/c;",
            ">;>;"
        }
    .end annotation
.end field

.field private e:Landroid/os/Handler;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 3

    .line 93
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 43
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->d:Ljava/util/LinkedHashMap;

    .line 45
    new-instance v0, Lcom/mbridge/msdk/foundation/same/c/b$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/foundation/same/c/b$1;-><init>(Lcom/mbridge/msdk/foundation/same/c/b;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->e:Landroid/os/Handler;

    .line 94
    new-instance v0, Lcom/mbridge/msdk/foundation/same/e/b;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/foundation/same/e/b;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->b:Lcom/mbridge/msdk/foundation/same/e/b;

    .line 97
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/c/b;->g(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    const/16 v0, 0xa

    if-eqz p1, :cond_0

    .line 99
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->w()I

    move-result p1

    goto :goto_0

    :cond_0
    move p1, v0

    :goto_0
    if-gtz p1, :cond_1

    goto :goto_1

    :cond_1
    move v0, p1

    .line 106
    :goto_1
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Runtime;->maxMemory()J

    move-result-wide v1

    long-to-int p1, v1

    .line 107
    div-int/2addr p1, v0

    .line 108
    new-instance v0, Lcom/mbridge/msdk/foundation/same/a/a;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/foundation/same/a/a;-><init>(I)V

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->c:Lcom/mbridge/msdk/foundation/same/a/c;

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;
    .locals 1

    .line 112
    sget-object v0, Lcom/mbridge/msdk/foundation/same/c/b;->a:Lcom/mbridge/msdk/foundation/same/c/b;

    if-nez v0, :cond_0

    .line 113
    new-instance v0, Lcom/mbridge/msdk/foundation/same/c/b;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/foundation/same/c/b;-><init>(Landroid/content/Context;)V

    sput-object v0, Lcom/mbridge/msdk/foundation/same/c/b;->a:Lcom/mbridge/msdk/foundation/same/c/b;

    .line 115
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/foundation/same/c/b;->a:Lcom/mbridge/msdk/foundation/same/c/b;

    return-object p0
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)Lcom/mbridge/msdk/foundation/same/c/d;
    .locals 1

    .line 314
    new-instance p5, Lcom/mbridge/msdk/foundation/same/c/b$5;

    invoke-direct {p5, p0}, Lcom/mbridge/msdk/foundation/same/c/b$5;-><init>(Lcom/mbridge/msdk/foundation/same/c/b;)V

    .line 339
    new-instance v0, Lcom/mbridge/msdk/foundation/same/c/d;

    invoke-direct {v0, p1, p2, p3}, Lcom/mbridge/msdk/foundation/same/c/d;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 341
    invoke-virtual {v0, p4}, Lcom/mbridge/msdk/foundation/same/c/d;->a(Z)V

    .line 342
    invoke-virtual {v0, p5}, Lcom/mbridge/msdk/foundation/same/c/d;->a(Lcom/mbridge/msdk/foundation/same/c/d$a;)V

    return-object v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/same/c/b;)Ljava/util/LinkedHashMap;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->d:Ljava/util/LinkedHashMap;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/same/c/b;Ljava/lang/String;Landroid/graphics/Bitmap;Lcom/mbridge/msdk/foundation/same/c/c;)V
    .locals 2

    .line 2249
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_0

    const-string v0, "ImageLoader"

    const-string v1, "handler image load success event"

    .line 2250
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    if-nez p3, :cond_1

    goto :goto_0

    .line 2255
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->e:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/foundation/same/c/b$3;

    invoke-direct {v1, p0, p3, p2, p1}, Lcom/mbridge/msdk/foundation/same/c/b$3;-><init>(Lcom/mbridge/msdk/foundation/same/c/b;Lcom/mbridge/msdk/foundation/same/c/c;Landroid/graphics/Bitmap;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/same/c/b;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V
    .locals 2

    .line 2266
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_0

    const-string v0, "ImageLoader"

    const-string v1, "handler image load failed event"

    .line 2267
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    if-nez p3, :cond_1

    goto :goto_0

    .line 2272
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->e:Landroid/os/Handler;

    new-instance v1, Lcom/mbridge/msdk/foundation/same/c/b$4;

    invoke-direct {v1, p0, p3, p2, p1}, Lcom/mbridge/msdk/foundation/same/c/b$4;-><init>(Lcom/mbridge/msdk/foundation/same/c/b;Lcom/mbridge/msdk/foundation/same/c/c;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/foundation/same/c/b;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZLcom/mbridge/msdk/foundation/same/c/c;Lcom/mbridge/msdk/foundation/same/c/g;)V
    .locals 1

    .line 2298
    iget-object p5, p0, Lcom/mbridge/msdk/foundation/same/c/b;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {p5, p2}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result p5

    if-nez p5, :cond_0

    .line 2299
    new-instance p5, Ljava/util/LinkedList;

    invoke-direct {p5}, Ljava/util/LinkedList;-><init>()V

    .line 2300
    invoke-virtual {p5, p6}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z

    .line 2301
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p2, p5}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2348
    new-instance p5, Lcom/mbridge/msdk/foundation/same/c/b$6;

    invoke-direct {p5, p0, p7, p1, p6}, Lcom/mbridge/msdk/foundation/same/c/b$6;-><init>(Lcom/mbridge/msdk/foundation/same/c/b;Lcom/mbridge/msdk/foundation/same/c/g;Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    .line 2393
    new-instance p0, Lcom/mbridge/msdk/foundation/same/c/d;

    invoke-direct {p0, p1, p2, p3, p7}, Lcom/mbridge/msdk/foundation/same/c/d;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/g;)V

    .line 2395
    invoke-virtual {p0, p4}, Lcom/mbridge/msdk/foundation/same/c/d;->a(Z)V

    .line 2396
    invoke-virtual {p0, p5}, Lcom/mbridge/msdk/foundation/same/c/d;->a(Lcom/mbridge/msdk/foundation/same/c/d$a;)V

    .line 2304
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->e()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object p1

    invoke-virtual {p1, p0}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 2306
    :cond_0
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {p0, p2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/LinkedList;

    if-eqz p0, :cond_1

    .line 2307
    invoke-virtual {p0, p6}, Ljava/util/LinkedList;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 2308
    invoke-virtual {p0, p6}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z

    :cond_1
    :goto_0
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZLcom/mbridge/msdk/foundation/same/c/c;)V
    .locals 1

    .line 283
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p2}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 284
    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    .line 285
    invoke-virtual {v0, p6}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z

    .line 286
    iget-object p6, p0, Lcom/mbridge/msdk/foundation/same/c/b;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {p6, p2, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 287
    invoke-direct/range {p0 .. p5}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZ)Lcom/mbridge/msdk/foundation/same/c/d;

    move-result-object p1

    .line 288
    iget-object p2, p0, Lcom/mbridge/msdk/foundation/same/c/b;->b:Lcom/mbridge/msdk/foundation/same/e/b;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/same/e/b;->b(Lcom/mbridge/msdk/foundation/same/e/a;)V

    goto :goto_0

    .line 290
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/c/b;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {p1, p2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/LinkedList;

    if-eqz p1, :cond_1

    .line 291
    invoke-virtual {p1, p6}, Ljava/util/LinkedList;->contains(Ljava/lang/Object;)Z

    move-result p2

    if-nez p2, :cond_1

    .line 292
    invoke-virtual {p1, p6}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/foundation/same/c/b;)Landroid/os/Handler;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->e:Landroid/os/Handler;

    return-object p0
.end method

.method public static b()V
    .locals 1

    .line 126
    sget-object v0, Lcom/mbridge/msdk/foundation/same/c/b;->a:Lcom/mbridge/msdk/foundation/same/c/b;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->c()V

    return-void
.end method

.method private d(Ljava/lang/String;)Landroid/graphics/Bitmap;
    .locals 1

    .line 90
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->c:Lcom/mbridge/msdk/foundation/same/a/c;

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/foundation/same/a/c;->b(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/graphics/Bitmap;

    return-object p1
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Landroid/graphics/Bitmap;
    .locals 4

    .line 146
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    .line 149
    :cond_0
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 150
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 151
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/same/c/b;->d(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 152
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/same/c/b;->d(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object p1

    return-object p1

    .line 153
    :cond_1
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 154
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/a;->a(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 156
    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Landroid/graphics/Bitmap;)V

    return-object v0

    :cond_2
    return-object v1
.end method

.method public final a()V
    .locals 1

    .line 119
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->c:Lcom/mbridge/msdk/foundation/same/a/c;

    invoke-interface {v0}, Lcom/mbridge/msdk/foundation/same/a/c;->b()V

    .line 120
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->d:Ljava/util/LinkedHashMap;

    if-eqz v0, :cond_0

    .line 121
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->clear()V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 1

    .line 84
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/same/c/b;->d(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-nez v0, :cond_0

    if-eqz p2, :cond_0

    .line 85
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->c:Lcom/mbridge/msdk/foundation/same/a/c;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/foundation/same/a/c;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V
    .locals 9

    .line 131
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 132
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/c/f;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v7, 0x0

    const/4 v4, 0x0

    .line 1211
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_0

    .line 1214
    :cond_0
    new-instance v8, Lcom/mbridge/msdk/foundation/same/c/b$2;

    move-object v0, v8

    move-object v1, p0

    move-object v2, v3

    move-object v3, v4

    move-object v4, p1

    move-object v5, p2

    move-object v6, p1

    invoke-direct/range {v0 .. v7}, Lcom/mbridge/msdk/foundation/same/c/b$2;-><init>(Lcom/mbridge/msdk/foundation/same/c/b;Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/g;Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;Ljava/lang/String;Z)V

    .line 1245
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/c/f;->b()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object p1

    invoke-virtual {p1, v8}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_1
    const/4 v5, 0x0

    .line 2190
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    .line 2193
    :cond_2
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 2194
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/same/c/b;->d(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 2195
    invoke-virtual {v1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v2

    if-nez v2, :cond_3

    .line 2196
    invoke-interface {p2, v1, p1}, Lcom/mbridge/msdk/foundation/same/c/c;->onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V

    goto :goto_0

    .line 2197
    :cond_3
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 2198
    invoke-static {v3}, Lcom/mbridge/msdk/foundation/same/c/a;->a(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 2199
    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v1

    if-nez v1, :cond_4

    .line 2200
    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Landroid/graphics/Bitmap;)V

    .line 2201
    invoke-interface {p2, v0, p1}, Lcom/mbridge/msdk/foundation/same/c/c;->onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    const/4 v4, 0x1

    move-object v0, p0

    move-object v1, p1

    move-object v2, p1

    move-object v6, p2

    .line 2203
    invoke-direct/range {v0 .. v6}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZLcom/mbridge/msdk/foundation/same/c/c;)V

    goto :goto_0

    :cond_5
    const/4 v4, 0x0

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p1

    move-object v6, p2

    .line 2206
    invoke-direct/range {v0 .. v6}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZZLcom/mbridge/msdk/foundation/same/c/c;)V

    :cond_6
    :goto_0
    return-void
.end method

.method public final b(Ljava/lang/String;)Z
    .locals 3

    .line 164
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 167
    :cond_0
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 168
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 169
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/same/c/b;->d(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object p1

    const/4 v0, 0x1

    if-eqz p1, :cond_1

    return v0

    .line 171
    :cond_1
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_2

    return v0

    :cond_2
    return v1
.end method

.method public final c()V
    .locals 1

    .line 402
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->c:Lcom/mbridge/msdk/foundation/same/a/c;

    if-eqz v0, :cond_0

    .line 403
    invoke-interface {v0}, Lcom/mbridge/msdk/foundation/same/a/c;->b()V

    :cond_0
    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 1

    .line 409
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->c:Lcom/mbridge/msdk/foundation/same/a/c;

    if-eqz v0, :cond_0

    .line 410
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->c:Lcom/mbridge/msdk/foundation/same/a/c;

    invoke-interface {v0}, Lcom/mbridge/msdk/foundation/same/a/c;->a()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0, p1}, Ljava/util/Collection;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 411
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/c/b;->c:Lcom/mbridge/msdk/foundation/same/a/c;

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/foundation/same/a/c;->a(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 415
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ImageLoader"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method
