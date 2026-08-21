.class public final Lcom/tkay/expressad/video/bt/a/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/bt/a/c$a;
    }
.end annotation


# static fields
.field public static final a:I = -0x3e7

.field private static final b:Ljava/lang/String; = "OperateViews"

.field private static c:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Landroid/view/View;",
            ">;>;"
        }
    .end annotation
.end field

.field private static d:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static e:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private static f:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/e/d;",
            ">;"
        }
    .end annotation
.end field

.field private static g:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static h:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private static i:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile j:I

.field private static k:I

.field private static l:I

.field private static m:Ljava/lang/String;

.field private static n:I

.field private static o:I

.field private static p:I

.field private static q:I

.field private static r:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 62
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/video/bt/a/c;->c:Ljava/util/concurrent/ConcurrentHashMap;

    .line 64
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/video/bt/a/c;->d:Ljava/util/LinkedHashMap;

    .line 66
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/video/bt/a/c;->e:Ljava/util/LinkedHashMap;

    .line 68
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/video/bt/a/c;->f:Ljava/util/LinkedHashMap;

    .line 70
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/video/bt/a/c;->g:Ljava/util/LinkedHashMap;

    .line 72
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/video/bt/a/c;->h:Ljava/util/LinkedHashMap;

    .line 74
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/video/bt/a/c;->i:Ljava/util/LinkedHashMap;

    const/16 v0, 0x2710

    .line 77
    sput v0, Lcom/tkay/expressad/video/bt/a/c;->j:I

    const/4 v0, 0x0

    .line 79
    sput v0, Lcom/tkay/expressad/video/bt/a/c;->k:I

    const/4 v0, 0x1

    .line 80
    sput v0, Lcom/tkay/expressad/video/bt/a/c;->l:I

    const-string v0, ""

    .line 82
    sput-object v0, Lcom/tkay/expressad/video/bt/a/c;->m:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 85
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 58
    invoke-direct {p0}, Lcom/tkay/expressad/video/bt/a/c;-><init>()V

    return-void
.end method

.method public static E(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 1

    :try_start_0
    const-string v0, "unitId"

    .line 2023
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    const-string v0, "data"

    .line 2024
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-nez p1, :cond_0

    const-string p1, "data is empty"

    .line 2026
    invoke-static {p0, p1}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 2031
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public static I(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 1

    :try_start_0
    const-string v0, "unitId"

    .line 2168
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    const-string v0, "data"

    .line 2169
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-nez p1, :cond_0

    const-string p1, "data is empty"

    .line 2171
    invoke-static {p0, p1}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 2176
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public static J(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 1

    :try_start_0
    const-string v0, "unitId"

    .line 2182
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    const-string v0, "id"

    .line 2183
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    const-string v0, "data"

    .line 2184
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-nez p1, :cond_0

    const-string p1, "data is empty"

    .line 2186
    invoke-static {p0, p1}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_0
    const-string p1, "android mediaPlayer not support setScaleType"

    .line 2189
    invoke-static {p0, p1}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 2191
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public static P(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 19

    move-object/from16 v1, p0

    const-string v2, "resource"

    const-string v3, "message"

    const-string v4, "code"

    const-string v5, "type"

    const-string v6, ""

    .line 2473
    new-instance v7, Lorg/json/JSONObject;

    invoke-direct {v7}, Lorg/json/JSONObject;-><init>()V

    const/4 v9, 0x1

    const/4 v10, 0x0

    .line 2485
    :try_start_0
    invoke-virtual {v7, v4, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2486
    invoke-virtual {v7, v3, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v0, p1

    .line 2489
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v11

    if-eqz v11, :cond_b

    .line 2490
    invoke-virtual {v11}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-lez v0, :cond_b

    .line 2492
    new-instance v12, Lorg/json/JSONArray;

    invoke-direct {v12}, Lorg/json/JSONArray;-><init>()V

    .line 2493
    invoke-virtual {v11}, Lorg/json/JSONArray;->length()I

    move-result v13

    move v14, v10

    :goto_0
    if-ge v14, v13, :cond_a

    .line 2495
    invoke-virtual {v11, v14}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v0

    const-string v15, "ref"

    .line 2496
    invoke-virtual {v0, v15, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    .line 2497
    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    .line 2498
    new-instance v8, Lorg/json/JSONObject;

    invoke-direct {v8}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    const-string v10, "path"

    if-ne v0, v9, :cond_3

    .line 2499
    :try_start_1
    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_3

    .line 2501
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 2502
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/l;->a()Lcom/tkay/expressad/videocommon/b/l;

    invoke-static {v15}, Lcom/tkay/expressad/videocommon/b/l;->b(Ljava/lang/String;)Lcom/tkay/core/common/a/i;

    move-result-object v16

    if-eqz v16, :cond_2

    .line 2505
    invoke-virtual {v0, v5, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v9, "videoDataLength"
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_4

    move-object/from16 v17, v3

    move-object/from16 v18, v4

    .line 2507
    :try_start_2
    invoke-virtual/range {v16 .. v16}, Lcom/tkay/core/common/a/i;->d()J

    move-result-wide v3

    invoke-virtual {v0, v9, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 2508
    invoke-virtual/range {v16 .. v16}, Lcom/tkay/core/common/a/i;->b()Ljava/lang/String;

    move-result-object v3

    .line 2509
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const-string v9, "path4Web"

    if-eqz v4, :cond_0

    .line 2511
    :try_start_3
    invoke-virtual {v0, v10, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2512
    invoke-virtual {v0, v9, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    .line 2515
    :cond_0
    invoke-virtual {v0, v10, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2517
    invoke-virtual {v0, v9, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2525
    :goto_1
    invoke-virtual/range {v16 .. v16}, Lcom/tkay/core/common/a/i;->c()I

    move-result v3
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    const/16 v4, 0x64

    const-string v9, "downloaded"

    if-ne v3, v4, :cond_1

    const/4 v3, 0x1

    .line 2526
    :try_start_4
    invoke-virtual {v0, v9, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const/4 v3, 0x0

    goto :goto_2

    :cond_1
    const/4 v3, 0x0

    .line 2528
    invoke-virtual {v0, v9, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2530
    :goto_2
    invoke-virtual {v8, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2531
    invoke-virtual {v12, v8}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto/16 :goto_6

    :cond_2
    move-object/from16 v17, v3

    move-object/from16 v18, v4

    const/4 v3, 0x0

    goto/16 :goto_6

    :cond_3
    move-object/from16 v17, v3

    move-object/from16 v18, v4

    const/4 v3, 0x0

    const/4 v4, 0x2

    if-ne v0, v4, :cond_5

    .line 2535
    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_5

    .line 2537
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 2538
    invoke-virtual {v0, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2539
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v4

    invoke-virtual {v4, v15}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    if-nez v4, :cond_4

    move-object v4, v6

    goto :goto_3

    :cond_4
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v4

    invoke-virtual {v4, v15}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    :goto_3
    invoke-virtual {v0, v10, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2540
    invoke-virtual {v8, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2541
    invoke-virtual {v12, v8}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto/16 :goto_6

    :cond_5
    const/4 v4, 0x3

    if-ne v0, v4, :cond_7

    .line 2542
    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-nez v9, :cond_7

    .line 2547
    :try_start_5
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, v15}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 2548
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v9

    if-eqz v9, :cond_6

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v9

    if-eqz v9, :cond_6

    invoke-virtual {v0}, Ljava/io/File;->canRead()Z

    move-result v0

    if-eqz v0, :cond_6

    const-string v0, "file:////"

    .line 2550
    invoke-static {v15}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v9}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_4

    :catchall_0
    move-exception v0

    .line 2553
    :try_start_6
    sget-boolean v9, Lcom/tkay/expressad/b;->a:Z

    if-eqz v9, :cond_6

    .line 2554
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_6
    move-object v0, v6

    .line 2557
    :goto_4
    new-instance v9, Lorg/json/JSONObject;

    invoke-direct {v9}, Lorg/json/JSONObject;-><init>()V

    .line 2558
    invoke-virtual {v9, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2559
    invoke-virtual {v9, v10, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2560
    invoke-virtual {v8, v15, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2561
    invoke-virtual {v12, v8}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_6

    :cond_7
    const/4 v4, 0x4

    if-ne v0, v4, :cond_9

    .line 2562
    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_9

    .line 2564
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 2565
    invoke-virtual {v0, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2566
    invoke-static {v15}, Lcom/tkay/expressad/foundation/h/s;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    if-nez v4, :cond_8

    move-object v4, v6

    goto :goto_5

    :cond_8
    invoke-static {v15}, Lcom/tkay/expressad/foundation/h/s;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    :goto_5
    invoke-virtual {v0, v10, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2567
    invoke-virtual {v8, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2568
    invoke-virtual {v12, v8}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    :cond_9
    :goto_6
    add-int/lit8 v14, v14, 0x1

    move v10, v3

    move-object/from16 v3, v17

    move-object/from16 v4, v18

    const/4 v9, 0x1

    goto/16 :goto_0

    :cond_a
    move-object/from16 v17, v3

    move-object/from16 v18, v4

    .line 2571
    invoke-virtual {v7, v2, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2572
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v7}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    const/4 v3, 0x2

    invoke-static {v2, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    return-void

    :catchall_1
    move-exception v0

    move-object/from16 v3, v17

    move-object/from16 v2, v18

    goto :goto_8

    :cond_b
    move-object/from16 v17, v3

    move-object/from16 v18, v4

    move-object/from16 v2, v18

    const/4 v3, 0x1

    .line 2575
    :try_start_7
    invoke-virtual {v7, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "resource is null"
    :try_end_7
    .catch Lorg/json/JSONException; {:try_start_7 .. :try_end_7} :catch_1
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    move-object/from16 v3, v17

    .line 2576
    :try_start_8
    invoke-virtual {v7, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2577
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v7}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    const/4 v5, 0x2

    invoke-static {v4, v5}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v1, v4}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_8
    .catch Lorg/json/JSONException; {:try_start_8 .. :try_end_8} :catch_0
    .catchall {:try_start_8 .. :try_end_8} :catchall_3

    return-void

    :catch_0
    move-exception v0

    goto :goto_7

    :catchall_2
    move-exception v0

    move-object/from16 v3, v17

    goto :goto_8

    :catch_1
    move-exception v0

    move-object/from16 v3, v17

    .line 2579
    :goto_7
    :try_start_9
    invoke-virtual {v0}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_3

    return-void

    :catchall_3
    move-exception v0

    goto :goto_8

    :catchall_4
    move-exception v0

    move-object v2, v4

    :goto_8
    const/4 v4, 0x1

    .line 2584
    :try_start_a
    invoke-virtual {v7, v2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2585
    invoke-virtual {v0}, Ljava/lang/Throwable;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v7, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2586
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v7}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    const/4 v3, 0x2

    invoke-static {v2, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_a
    .catch Lorg/json/JSONException; {:try_start_a .. :try_end_a} :catch_2

    return-void

    :catch_2
    move-exception v0

    .line 2588
    invoke-virtual {v0}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private static a(Landroid/view/ViewGroup$LayoutParams;Landroid/graphics/Rect;II)Landroid/view/ViewGroup$LayoutParams;
    .locals 4

    const/16 v0, -0x3e7

    if-nez p1, :cond_0

    .line 659
    new-instance p1, Landroid/graphics/Rect;

    invoke-direct {p1, v0, v0, v0, v0}, Landroid/graphics/Rect;-><init>(IIII)V

    .line 661
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    if-nez v1, :cond_1

    return-object p0

    .line 665
    :cond_1
    instance-of v2, p0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v3, -0x1

    if-eqz v2, :cond_8

    .line 666
    new-instance p0, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {p0, v3, v3}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    .line 667
    iget v2, p1, Landroid/graphics/Rect;->left:I

    if-eq v2, v0, :cond_2

    .line 668
    iget v2, p1, Landroid/graphics/Rect;->left:I

    int-to-float v2, v2

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, p0, Landroid/widget/FrameLayout$LayoutParams;->leftMargin:I

    .line 670
    :cond_2
    iget v2, p1, Landroid/graphics/Rect;->top:I

    if-eq v2, v0, :cond_3

    .line 671
    iget v2, p1, Landroid/graphics/Rect;->top:I

    int-to-float v2, v2

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, p0, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    .line 673
    :cond_3
    iget v2, p1, Landroid/graphics/Rect;->right:I

    if-eq v2, v0, :cond_4

    .line 674
    iget v2, p1, Landroid/graphics/Rect;->right:I

    int-to-float v2, v2

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, p0, Landroid/widget/FrameLayout$LayoutParams;->rightMargin:I

    .line 676
    :cond_4
    iget v2, p1, Landroid/graphics/Rect;->bottom:I

    if-eq v2, v0, :cond_5

    .line 677
    iget p1, p1, Landroid/graphics/Rect;->bottom:I

    int-to-float p1, p1

    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    iput p1, p0, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    :cond_5
    if-lez p2, :cond_6

    int-to-float p1, p2

    .line 680
    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    iput p1, p0, Landroid/widget/FrameLayout$LayoutParams;->width:I

    :cond_6
    if-lez p3, :cond_7

    int-to-float p1, p3

    .line 683
    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    iput p1, p0, Landroid/widget/FrameLayout$LayoutParams;->height:I

    :cond_7
    return-object p0

    .line 687
    :cond_8
    instance-of v2, p0, Landroid/widget/RelativeLayout$LayoutParams;

    if-eqz v2, :cond_f

    .line 688
    new-instance p0, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {p0, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 689
    iget v2, p1, Landroid/graphics/Rect;->left:I

    if-eq v2, v0, :cond_9

    .line 690
    iget v2, p1, Landroid/graphics/Rect;->left:I

    int-to-float v2, v2

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, p0, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 692
    :cond_9
    iget v2, p1, Landroid/graphics/Rect;->top:I

    if-eq v2, v0, :cond_a

    .line 693
    iget v2, p1, Landroid/graphics/Rect;->top:I

    int-to-float v2, v2

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, p0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 695
    :cond_a
    iget v2, p1, Landroid/graphics/Rect;->right:I

    if-eq v2, v0, :cond_b

    .line 696
    iget v2, p1, Landroid/graphics/Rect;->right:I

    int-to-float v2, v2

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, p0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 698
    :cond_b
    iget v2, p1, Landroid/graphics/Rect;->bottom:I

    if-eq v2, v0, :cond_c

    .line 699
    iget p1, p1, Landroid/graphics/Rect;->bottom:I

    int-to-float p1, p1

    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    iput p1, p0, Landroid/widget/RelativeLayout$LayoutParams;->bottomMargin:I

    :cond_c
    if-lez p2, :cond_d

    int-to-float p1, p2

    .line 702
    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    iput p1, p0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    :cond_d
    if-lez p3, :cond_e

    int-to-float p1, p3

    .line 705
    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    iput p1, p0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    :cond_e
    return-object p0

    .line 709
    :cond_f
    instance-of v2, p0, Landroid/widget/LinearLayout$LayoutParams;

    if-eqz v2, :cond_15

    .line 710
    new-instance p0, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {p0, v3, v3}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 711
    iget v2, p1, Landroid/graphics/Rect;->left:I

    if-eq v2, v0, :cond_10

    .line 712
    iget v2, p1, Landroid/graphics/Rect;->left:I

    int-to-float v2, v2

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, p0, Landroid/widget/LinearLayout$LayoutParams;->leftMargin:I

    .line 714
    :cond_10
    iget v2, p1, Landroid/graphics/Rect;->top:I

    if-eq v2, v0, :cond_11

    .line 715
    iget v2, p1, Landroid/graphics/Rect;->top:I

    int-to-float v2, v2

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, p0, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    .line 717
    :cond_11
    iget v2, p1, Landroid/graphics/Rect;->right:I

    if-eq v2, v0, :cond_12

    .line 718
    iget v2, p1, Landroid/graphics/Rect;->right:I

    int-to-float v2, v2

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    iput v2, p0, Landroid/widget/LinearLayout$LayoutParams;->rightMargin:I

    .line 720
    :cond_12
    iget v2, p1, Landroid/graphics/Rect;->bottom:I

    if-eq v2, v0, :cond_13

    .line 721
    iget p1, p1, Landroid/graphics/Rect;->bottom:I

    int-to-float p1, p1

    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    iput p1, p0, Landroid/widget/LinearLayout$LayoutParams;->bottomMargin:I

    :cond_13
    if-lez p2, :cond_14

    int-to-float p1, p2

    .line 724
    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    iput p1, p0, Landroid/widget/LinearLayout$LayoutParams;->width:I

    :cond_14
    if-lez p3, :cond_15

    int-to-float p1, p3

    .line 727
    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    iput p1, p0, Landroid/widget/LinearLayout$LayoutParams;->height:I

    :cond_15
    return-object p0
.end method

.method public static a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 103
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->e:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 104
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->e:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/expressad/foundation/d/c;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a()Lcom/tkay/expressad/video/bt/a/c;
    .locals 1

    .line 93
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c$a;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    return-object v0
.end method

.method public static a(IIIII)V
    .locals 4

    .line 2690
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "OperateViews setNotchString = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v1, 0x5

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x1

    aput-object v2, v1, v3

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x2

    aput-object v2, v1, v3

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x3

    aput-object v2, v1, v3

    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x4

    aput-object v2, v1, v3

    const-string v2, "%1$s-%2$s-%3$s-%4$s-%5$s"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2691
    invoke-static {p0, p1, p2, p3, p4}, Lcom/tkay/expressad/foundation/h/h;->a(IIIII)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/video/bt/a/c;->m:Ljava/lang/String;

    .line 2692
    sput p0, Lcom/tkay/expressad/video/bt/a/c;->n:I

    .line 2693
    sput p1, Lcom/tkay/expressad/video/bt/a/c;->o:I

    .line 2694
    sput p2, Lcom/tkay/expressad/video/bt/a/c;->p:I

    .line 2695
    sput p3, Lcom/tkay/expressad/video/bt/a/c;->q:I

    .line 2696
    sput p4, Lcom/tkay/expressad/video/bt/a/c;->r:I

    return-void
.end method

.method public static a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 3

    .line 205
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 206
    sget v2, Lcom/tkay/expressad/video/bt/a/c;->l:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    .line 207
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 208
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 209
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, p0, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 211
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public static a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 245
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 246
    sget v2, Lcom/tkay/expressad/video/bt/a/c;->k:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 247
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "id"

    .line 248
    invoke-virtual {v1, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 249
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 250
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 252
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 253
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public static a(Ljava/lang/Object;)V
    .locals 1

    :try_start_0
    const-string v0, ""

    .line 2432
    invoke-static {p0, v0}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 2434
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public static a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 217
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 218
    sget v2, Lcom/tkay/expressad/video/bt/a/c;->k:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 219
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "id"

    .line 220
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 221
    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 222
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, p0, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 224
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 225
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private static a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 231
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 232
    sget v2, Lcom/tkay/expressad/video/bt/a/c;->k:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 233
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "id"

    .line 234
    invoke-virtual {v1, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 235
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 236
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p0, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 238
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 239
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public static a(Ljava/lang/String;I)V
    .locals 1

    .line 150
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->h:Ljava/util/LinkedHashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v0, p0, p1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static a(Ljava/lang/String;Landroid/app/Activity;)V
    .locals 1

    .line 135
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->i:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0, p1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private static a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 2467
    sget-object v0, Lcom/tkay/expressad/foundation/g/a/f;->k:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "reward"

    .line 2468
    invoke-static {p0, p1, v0}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 117
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0, p1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 3093
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c$a;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    .line 2672
    invoke-virtual {v0, p0, p1}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 2673
    invoke-virtual {p0}, Ljava/util/LinkedHashMap;->size()I

    move-result p1

    if-lez p1, :cond_3

    .line 2674
    invoke-virtual {p0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p1

    if-eqz p1, :cond_3

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/view/View;

    .line 2675
    instance-of v0, p1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v0, :cond_1

    .line 2676
    check-cast p1, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->notifyEvent(Ljava/lang/String;)V

    goto :goto_0

    .line 2677
    :cond_1
    instance-of v0, p1, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    if-eqz v0, :cond_2

    .line 2678
    check-cast p1, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->notifyEvent(Ljava/lang/String;)V

    goto :goto_0

    .line 2679
    :cond_2
    instance-of v0, p1, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    if-eqz v0, :cond_0

    .line 2680
    check-cast p1, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->notifyEvent(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_3
    return-void

    :catchall_0
    move-exception p0

    .line 2685
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public static b(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;
    .locals 1

    .line 121
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->f:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 122
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->f:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/expressad/videocommon/e/d;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static b()Ljava/lang/String;
    .locals 1

    .line 97
    sget v0, Lcom/tkay/expressad/video/bt/a/c;->j:I

    add-int/lit8 v0, v0, 0x1

    .line 98
    sput v0, Lcom/tkay/expressad/video/bt/a/c;->j:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static b(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 13

    .line 2595
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 2597
    :try_start_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    const/4 p1, 0x0

    move v1, p1

    .line 2598
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v3, ""

    if-ge v1, v2, :cond_3

    .line 2599
    :try_start_1
    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v2

    const-string v4, "type"

    .line 2600
    invoke-virtual {v2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v4

    const-string v5, "url"

    .line 2601
    invoke-virtual {v2, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    const-string v5, "report"

    .line 2602
    invoke-virtual {v2, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v12

    const/4 v2, 0x1

    if-nez v12, :cond_1

    .line 2604
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v5

    const/4 v6, 0x0

    if-eqz v4, :cond_0

    goto :goto_1

    :cond_0
    move v2, p1

    :goto_1
    invoke-static {v5, v6, v3, v9, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_3

    .line 2606
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v6

    const/4 v7, 0x0

    const-string v8, ""

    const/4 v10, 0x0

    if-eqz v4, :cond_2

    move v11, v2

    goto :goto_2

    :cond_2
    move v11, p1

    :goto_2
    invoke-static/range {v6 .. v12}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V

    :goto_3
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 2610
    :cond_3
    invoke-static {p0, v3}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_4
    return-void
.end method

.method public static c(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 128
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->g:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 129
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->g:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method static synthetic c()Ljava/util/LinkedHashMap;
    .locals 1

    .line 58
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->d:Ljava/util/LinkedHashMap;

    return-object v0
.end method

.method private static c(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 193
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 194
    sget v2, Lcom/tkay/expressad/video/bt/a/c;->l:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    .line 195
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 196
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 197
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, p0, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 199
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public static d(Ljava/lang/String;)V
    .locals 1

    .line 146
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->i:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static e(Ljava/lang/String;)I
    .locals 1

    .line 154
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->h:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 155
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->h:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    return p0

    :cond_0
    const/4 p0, 0x2

    return p0
.end method

.method public static f(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 2

    :try_start_0
    const-string v0, "unitId"

    .line 577
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    const-string v0, "id"

    .line 578
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "data"

    .line 579
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-nez p1, :cond_0

    const-string p1, "data is empty"

    .line 581
    invoke-static {p0, p1}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 585
    :cond_0
    invoke-static {p0, v0}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 587
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public static f(Ljava/lang/String;)V
    .locals 1

    .line 161
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->g:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 162
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->g:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 164
    :cond_0
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->f:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 165
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->f:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 167
    :cond_1
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->e:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 168
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->e:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 170
    :cond_2
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 171
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_3
    return-void
.end method

.method public static g(Ljava/lang/String;)V
    .locals 1

    .line 176
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->h:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 177
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->h:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method private static h(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 110
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 111
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method private static i(Ljava/lang/String;)Landroid/app/Activity;
    .locals 1

    .line 139
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->i:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 140
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->i:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/Activity;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public final A(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 1871
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1872
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1873
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1874
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1875
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1876
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1877
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1878
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1881
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1883
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1886
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 1887
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1888
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 1889
    instance-of v0, p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v0, :cond_2

    .line 1890
    check-cast p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->play()V

    .line 1891
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "instanceId is not player"

    .line 1894
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId not exit"

    .line 1898
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1902
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1903
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "playerPlay failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final B(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 1909
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1910
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1911
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1912
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1913
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1914
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1915
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1916
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1919
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1921
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1924
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 1925
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1926
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 1927
    instance-of v0, p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v0, :cond_2

    .line 1928
    check-cast p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->pause()V

    .line 1929
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "instanceId is not player"

    .line 1932
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId not exit"

    .line 1936
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1940
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1941
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "playerPause failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final C(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 1947
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1948
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1949
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1950
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1951
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1952
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1953
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1954
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1957
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1959
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1962
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 1963
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1964
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 1965
    instance-of v0, p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v0, :cond_2

    .line 1966
    check-cast p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->resume()V

    .line 1967
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "instanceId is not player"

    .line 1970
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId not exit"

    .line 1974
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1978
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1979
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "playerResume failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final D(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 1985
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1986
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1987
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1988
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1989
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1990
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1991
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1992
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1995
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1997
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 2000
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 2001
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 2002
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 2003
    instance-of v0, p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v0, :cond_2

    .line 2004
    check-cast p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->stop()V

    .line 2005
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "instanceId is not player"

    .line 2008
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId not exit"

    .line 2012
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 2016
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 2017
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "playerStop failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final F(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 2037
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 2038
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 2039
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 2040
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 2041
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 2042
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 2043
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 2044
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 2047
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 2049
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 2052
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 2053
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 2054
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 2055
    instance-of v0, p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v0, :cond_3

    .line 2056
    check-cast p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->playMute()Z

    move-result p2

    if-eqz p2, :cond_2

    .line 2058
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "set mute failed"

    .line 2061
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId is not player"

    .line 2065
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_4
    const-string p2, "instanceId not exist"

    .line 2069
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 2073
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 2074
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "playerMute failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final G(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 2080
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 2081
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 2082
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 2083
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 2084
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 2085
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 2086
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 2087
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 2090
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 2092
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 2095
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 2096
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 2097
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 2098
    instance-of v0, p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v0, :cond_3

    .line 2099
    check-cast p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->playUnMute()Z

    move-result p2

    if-eqz p2, :cond_2

    .line 2101
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onUnmute"

    .line 2102
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "set unmute failed"

    .line 2105
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId is not player"

    .line 2109
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_4
    const-string p2, "instanceId not exit"

    .line 2113
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 2117
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 2118
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "playerUnmute failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final H(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 7

    const-string v0, "data"

    const-string v1, "id"

    :try_start_0
    const-string v2, "unitId"

    .line 2124
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 2125
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 2126
    invoke-static {v3}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 2127
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 2128
    move-object v5, p1

    check-cast v5, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 2129
    iget-object v6, v5, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v6, :cond_0

    .line 2130
    iget-object v4, v5, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 2131
    invoke-virtual {v4}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v4

    .line 2134
    :cond_0
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 2136
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 2139
    :cond_1
    invoke-virtual {p0, v2, v4}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 2140
    invoke-virtual {p2, v3}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 2141
    invoke-virtual {p2, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 2142
    instance-of v2, p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v2, :cond_2

    .line 2143
    check-cast p2, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->getMute()I

    move-result p2

    .line 2144
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "code"

    .line 2145
    sget v5, Lcom/tkay/expressad/video/bt/a/c;->k:I

    invoke-virtual {v2, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2146
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    .line 2147
    invoke-virtual {v4, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mute"

    .line 2148
    invoke-virtual {v4, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2149
    invoke-virtual {v2, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2150
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "instanceId is not player"

    .line 2153
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId not exist"

    .line 2157
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 2161
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 2162
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "playerGetMuteState failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final K(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 2197
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 2198
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 2199
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 2200
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 2201
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 2202
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 2203
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 2204
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 2207
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 2209
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 2212
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 2213
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 2214
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 2215
    instance-of v0, p2, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v0, :cond_2

    .line 2216
    check-cast p2, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->preload()V

    .line 2217
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "view not exist"

    .line 2219
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId not exist"

    .line 2222
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 2225
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 2226
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "preloadSubPlayTemplateView failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final L(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 7

    :try_start_0
    const-string v0, "unitId"

    .line 2232
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 2233
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 2234
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 2235
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 2236
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 2237
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 2238
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 2239
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 2242
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 2244
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 2247
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    const/4 v3, 0x0

    .line 2249
    invoke-virtual {p2}, Ljava/util/LinkedHashMap;->size()I

    move-result v4

    if-lez v4, :cond_8

    .line 2250
    invoke-virtual {p2}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :cond_2
    :goto_0
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_6

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Landroid/view/View;

    .line 2251
    instance-of v6, v5, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v6, :cond_3

    .line 2252
    move-object v3, v5

    check-cast v3, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    goto :goto_0

    .line 2255
    :cond_3
    instance-of v6, v5, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    if-eqz v6, :cond_4

    .line 2256
    check-cast v5, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {v5}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->onDestory()V

    goto :goto_0

    .line 2259
    :cond_4
    instance-of v6, v5, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v6, :cond_5

    .line 2260
    move-object v6, v5

    check-cast v6, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v6}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->getInstanceId()Ljava/lang/String;

    move-result-object v6

    .line 2261
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/a;->a()Lcom/tkay/expressad/video/bt/a/a;

    invoke-static {v6}, Lcom/tkay/expressad/video/bt/a/a;->a(Ljava/lang/String;)V

    .line 2262
    check-cast v5, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v5}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->onDestory()V

    goto :goto_0

    .line 2265
    :cond_5
    instance-of v6, v5, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v6, :cond_2

    .line 2266
    check-cast v5, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v5}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onDestroy()V

    goto :goto_0

    :cond_6
    if-eqz v3, :cond_7

    .line 2271
    invoke-virtual {v3}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->onAdClose()V

    .line 2272
    sget-object v3, Lcom/tkay/expressad/video/bt/a/c;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v3, p2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 2273
    invoke-virtual {p2}, Ljava/util/LinkedHashMap;->clear()V

    .line 2274
    sget-object p2, Lcom/tkay/expressad/video/bt/a/c;->c:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 2275
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_7
    const-string p2, "not found TkayBTContainer"

    .line 2278
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_8
    const-string p2, "unitId or instanceId not exist"

    .line 2281
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 2285
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 2286
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "closeAd failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final M(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    .line 2292
    :try_start_0
    move-object v0, p1

    check-cast v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 2294
    iget-object v1, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v2, ""

    if-eqz v1, :cond_0

    .line 2295
    :try_start_1
    iget-object v0, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 2296
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    move-object v0, v2

    :goto_0
    const-string v1, "unitId"

    .line 2298
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v3, "eventName"

    .line 2299
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "data"

    .line 2300
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 2301
    invoke-virtual {p0, v1, v0}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 2302
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_4

    .line 2303
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/view/View;

    .line 2304
    instance-of v4, v1, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    if-eqz v4, :cond_2

    .line 2305
    move-object v4, v1

    check-cast v4, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {v4, v3, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->broadcast(Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 2307
    :cond_2
    instance-of v4, v1, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    if-eqz v4, :cond_1

    .line 2308
    check-cast v1, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;

    invoke-virtual {v1, v3, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTLayout;->broadcast(Ljava/lang/String;Lorg/json/JSONObject;)V

    goto :goto_1

    .line 2314
    :cond_3
    invoke-static {p1, v2}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_4
    const-string p2, "unitId not exist"

    .line 2316
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 2319
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 2320
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "broadcast failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final N(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 10

    const-string v0, "id"

    .line 2326
    :try_start_0
    move-object v1, p1

    check-cast v1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 2328
    iget-object v2, v1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v3, ""

    if-eqz v2, :cond_0

    .line 2329
    :try_start_1
    iget-object v1, v1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 2330
    invoke-virtual {v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    move-object v1, v3

    :goto_0
    const-string v2, "unitId"

    .line 2332
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 2333
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "data"

    .line 2334
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    const-string v5, "userId"

    .line 2335
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "expired"

    .line 2337
    invoke-virtual {p2, v6}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v6

    const-string v7, "reward"

    .line 2338
    invoke-virtual {p2, v7}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v7

    const-string v8, "extra"

    .line 2339
    invoke-virtual {p2, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const/4 v8, 0x0

    if-eqz v7, :cond_1

    .line 2343
    new-instance v8, Lcom/tkay/expressad/videocommon/c/c;

    const-string v3, "name"

    invoke-virtual {v7, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v9, "amount"

    invoke-virtual {v7, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v9

    invoke-direct {v8, v3, v9}, Lcom/tkay/expressad/videocommon/c/c;-><init>(Ljava/lang/String;I)V

    .line 2344
    invoke-virtual {v7, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 2346
    :cond_1
    invoke-virtual {p0, v2, v1}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    .line 2347
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_4

    sget-object v1, Lcom/tkay/expressad/video/bt/a/c;->g:Ljava/util/LinkedHashMap;

    invoke-virtual {v1, v4}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 2348
    invoke-virtual {v0, v4}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    .line 2349
    instance-of v1, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v1, :cond_3

    .line 2350
    check-cast v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    .line 2351
    invoke-virtual {v0, v8}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setReward(Lcom/tkay/expressad/videocommon/c/c;)V

    .line 2352
    invoke-virtual {v0, v5}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setUserId(Ljava/lang/String;)V

    .line 2353
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setRewardId(Ljava/lang/String;)V

    .line 2354
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setCampaignExpired(Z)V

    .line 2355
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 2356
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setDeveloperExtraData(Ljava/lang/String;)V

    .line 2358
    :cond_2
    invoke-static {p1, v4}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId not exist"

    .line 2361
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_4
    const-string p2, "unitId not exist"

    .line 2365
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 2369
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 2370
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "setSubPlayTemplateInfo failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final O(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 7

    .line 2376
    :try_start_0
    move-object v0, p1

    check-cast v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    const-string v1, ""

    .line 2378
    iget-object v2, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v2, :cond_0

    .line 2379
    iget-object v0, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 2380
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v1

    :cond_0
    const-string v0, "unitId"

    .line 2382
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "id"

    .line 2383
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "data"

    .line 2384
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    const-string v3, "eventName"

    .line 2385
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "eventData"

    .line 2386
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    .line 2388
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    .line 2390
    :cond_1
    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    .line 2391
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-lez v1, :cond_4

    .line 2392
    invoke-virtual {v0, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    .line 2393
    instance-of v1, v0, Landroid/view/ViewGroup;

    if-eqz v1, :cond_3

    .line 2394
    check-cast v0, Landroid/view/ViewGroup;

    .line 2395
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v1, :cond_3

    .line 2397
    invoke-virtual {v0, v4}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v5

    .line 2398
    instance-of v6, v5, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v6, :cond_2

    .line 2399
    check-cast v5, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 2400
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-static {v5, v3, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 2401
    invoke-static {p1, v2}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_3
    const-string p2, "instanceId not exist"

    .line 2407
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_4
    const-string p2, "unitId not exist"

    .line 2410
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 2414
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 2415
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "webviewFireEvent failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final Q(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 6

    .line 2618
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "createNativeEC:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :try_start_0
    const-string v0, "unitId"

    .line 2620
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "data"

    .line 2621
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p2, :cond_5

    .line 2622
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto/16 :goto_0

    :cond_0
    const-string v1, ""

    const-string v2, "campaign"

    .line 2627
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    .line 2628
    invoke-static {v2}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 2629
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 2630
    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 2631
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    :cond_1
    const-string v3, "unitSetting"

    .line 2633
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 2634
    invoke-static {p2}, Lcom/tkay/expressad/videocommon/e/d;->a(Lorg/json/JSONObject;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 2636
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/videocommon/e/d;->a(Ljava/lang/String;)V

    .line 2638
    :cond_2
    new-instance v3, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v3, v4}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;-><init>(Landroid/content/Context;)V

    .line 2639
    invoke-virtual {v3, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 2640
    new-instance v4, Lcom/tkay/expressad/video/signal/a/j;

    const/4 v5, 0x0

    invoke-direct {v4, v5, v2}, Lcom/tkay/expressad/video/signal/a/j;-><init>(Landroid/app/Activity;Lcom/tkay/expressad/foundation/d/c;)V

    .line 2641
    invoke-virtual {v4, v0}, Lcom/tkay/expressad/video/signal/a/j;->a(Ljava/lang/String;)V

    .line 2642
    invoke-virtual {v3, v4}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->setJSCommon(Lcom/tkay/expressad/video/signal/a/j;)V

    .line 2643
    invoke-virtual {v3, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->setUnitId(Ljava/lang/String;)V

    .line 2644
    invoke-virtual {v3, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->setRewardUnitSetting(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 2645
    move-object p2, p1

    check-cast p2, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 2646
    iget-object v4, p2, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_3

    .line 2647
    iget-object p2, p2, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 2648
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v1

    .line 2649
    invoke-virtual {v3, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->setCreateWebView(Landroid/webkit/WebView;)V

    .line 2651
    :cond_3
    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 2652
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->b()Ljava/lang/String;

    move-result-object v0

    .line 2653
    sget-object v4, Lcom/tkay/expressad/video/bt/a/c;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {v4, v0, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2654
    invoke-virtual {v3, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->setInstanceId(Ljava/lang/String;)V

    .line 2655
    invoke-virtual {p2, v0, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2656
    invoke-virtual {v3}, Lcom/tkay/expressad/video/bt/module/TkayBTNativeEC;->preLoadData()V

    if-nez v2, :cond_4

    const-string p2, "campaign is null"

    .line 2658
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 2661
    :cond_4
    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_5
    :goto_0
    const-string p2, "unitId or data is empty"

    .line 2623
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 2665
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 2666
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "createNativeEC failed:"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 8

    :try_start_0
    const-string v0, "unitId"

    .line 259
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 260
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p2, "unitId is empty"

    .line 261
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_0
    const-string v0, "data"

    .line 264
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    const-string v0, "delay"

    const/4 v1, 0x0

    .line 265
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    const-string v2, "rect"

    .line 266
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 267
    new-instance v2, Landroid/graphics/Rect;

    const/16 v3, -0x3e7

    invoke-direct {v2, v3, v3, v3, v3}, Landroid/graphics/Rect;-><init>(IIII)V

    if-eqz p2, :cond_1

    .line 271
    new-instance v1, Landroid/graphics/Rect;

    const-string v2, "left"

    invoke-virtual {p2, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    const-string v5, "top"

    invoke-virtual {p2, v5, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    const-string v6, "right"

    invoke-virtual {p2, v6, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    const-string v7, "bottom"

    invoke-virtual {p2, v7, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    invoke-direct {v1, v2, v5, v6, v3}, Landroid/graphics/Rect;-><init>(IIII)V

    const-string v2, "width"

    .line 272
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const-string v3, "height"

    .line 273
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    move v7, p2

    move-object v5, v1

    move v6, v2

    goto :goto_0

    :cond_1
    move v6, v1

    move v7, v6

    move-object v5, v2

    .line 279
    :goto_0
    new-instance p2, Lcom/tkay/expressad/video/bt/a/c$1;

    move-object v1, p2

    move-object v2, p0

    move-object v3, p1

    invoke-direct/range {v1 .. v7}, Lcom/tkay/expressad/video/bt/a/c$1;-><init>(Lcom/tkay/expressad/video/bt/a/c;Ljava/lang/Object;Ljava/lang/String;Landroid/graphics/Rect;II)V

    .line 308
    new-instance v1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    int-to-long v2, v0

    invoke-virtual {v1, p2, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 310
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 311
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "create view failed:"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final declared-synchronized b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    .line 182
    :try_start_0
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->c:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 183
    sget-object v0, Lcom/tkay/expressad/video/bt/a/c;->c:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/LinkedHashMap;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object p1

    .line 185
    :cond_0
    :try_start_1
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 186
    sget-object v1, Lcom/tkay/expressad/video/bt/a/c;->c:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 187
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final b(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 11

    :try_start_0
    const-string v0, "unitId"

    .line 317
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 318
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p2, "unitId is empty"

    .line 319
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_0
    const-string v0, "data"

    .line 322
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    const-string v0, "delay"

    const/4 v1, 0x0

    .line 323
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    const-string v2, "fileURL"

    .line 324
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v2, "filePath"

    .line 325
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string v2, "html"

    .line 326
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v2, "rect"

    .line 327
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 328
    new-instance v2, Landroid/graphics/Rect;

    const/16 v3, -0x3e7

    invoke-direct {v2, v3, v3, v3, v3}, Landroid/graphics/Rect;-><init>(IIII)V

    if-eqz p2, :cond_1

    .line 332
    new-instance v1, Landroid/graphics/Rect;

    const-string v2, "left"

    invoke-virtual {p2, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    const-string v8, "top"

    invoke-virtual {p2, v8, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v8

    const-string v9, "right"

    invoke-virtual {p2, v9, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v9

    const-string v10, "bottom"

    invoke-virtual {p2, v10, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    invoke-direct {v1, v2, v8, v9, v3}, Landroid/graphics/Rect;-><init>(IIII)V

    const-string v2, "width"

    .line 333
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const-string v3, "height"

    .line 334
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    move v10, p2

    move-object v8, v1

    move v9, v2

    goto :goto_0

    :cond_1
    move v9, v1

    move v10, v9

    move-object v8, v2

    .line 340
    :goto_0
    new-instance p2, Lcom/tkay/expressad/video/bt/a/c$2;

    move-object v1, p2

    move-object v2, p0

    move-object v3, p1

    invoke-direct/range {v1 .. v10}, Lcom/tkay/expressad/video/bt/a/c$2;-><init>(Lcom/tkay/expressad/video/bt/a/c;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Rect;II)V

    .line 373
    new-instance v1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    int-to-long v2, v0

    invoke-virtual {v1, p2, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 375
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 376
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "createWebview failed:"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final c(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 9

    :try_start_0
    const-string v0, "unitId"

    .line 382
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "data"

    .line 383
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p2, :cond_4

    .line 384
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto/16 :goto_1

    :cond_0
    const-string v1, ""

    const-string v2, "campaign"

    .line 389
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2

    .line 390
    invoke-static {v2}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 391
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 392
    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 393
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v1

    :cond_1
    const-string v3, "show_time"

    const/4 v4, 0x0

    .line 395
    invoke-virtual {p2, v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    const-string v5, "show_mute"

    .line 396
    invoke-virtual {p2, v5, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    const-string v6, "show_close"

    .line 397
    invoke-virtual {p2, v6, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    const-string v7, "orientation"

    const/4 v8, 0x1

    .line 398
    invoke-virtual {p2, v7, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    const-string v8, "show_pgb"

    .line 399
    invoke-virtual {p2, v8, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    .line 400
    new-instance v4, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v4, v8}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;-><init>(Landroid/content/Context;)V

    .line 401
    invoke-virtual {v4, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 402
    invoke-virtual {v4, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setUnitId(Ljava/lang/String;)V

    .line 403
    invoke-virtual {v4, v5}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setShowMute(I)V

    .line 404
    invoke-virtual {v4, v3}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setShowTime(I)V

    .line 405
    invoke-virtual {v4, v6}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setShowClose(I)V

    .line 406
    invoke-virtual {v4, v7}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setOrientation(I)V

    .line 407
    invoke-virtual {v4, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setProgressBarState(I)V

    .line 408
    move-object p2, p1

    check-cast p2, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 409
    iget-object v3, p2, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v3, :cond_2

    .line 410
    iget-object p2, p2, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 411
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v1

    .line 412
    invoke-virtual {v4, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setCreateWebView(Landroid/webkit/WebView;)V

    .line 414
    :cond_2
    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 415
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->b()Ljava/lang/String;

    move-result-object v0

    .line 416
    sget-object v3, Lcom/tkay/expressad/video/bt/a/c;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {v3, v0, v1}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 417
    invoke-virtual {v4, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setInstanceId(Ljava/lang/String;)V

    .line 418
    invoke-virtual {p2, v0, v4}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 419
    invoke-virtual {v4}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->preLoadData()V

    if-nez v2, :cond_3

    const-string p2, "campaign is null"

    .line 421
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 424
    :cond_3
    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 427
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/a;->a()Lcom/tkay/expressad/video/bt/a/a;

    invoke-static {v0, v4}, Lcom/tkay/expressad/video/bt/a/a;->a(Ljava/lang/String;Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;)V

    return-void

    :cond_4
    :goto_1
    const-string p2, "unitId or data is empty"

    .line 385
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 429
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 430
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "createPlayerView failed:"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final d(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 12

    :try_start_0
    const-string v0, "unitId"

    .line 436
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "data"

    .line 437
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p2, :cond_8

    .line 438
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto/16 :goto_0

    :cond_0
    const-string v1, "mute"

    .line 442
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    const-string v2, ""

    const-string v3, "campaign"

    .line 444
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    .line 445
    invoke-static {v3}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 446
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 447
    invoke-virtual {v3, v0}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 448
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v2

    :cond_1
    const-string v4, "unitSetting"

    .line 450
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v4

    .line 451
    invoke-static {v4}, Lcom/tkay/expressad/videocommon/e/d;->a(Lorg/json/JSONObject;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v4

    if-eqz v4, :cond_2

    .line 453
    invoke-virtual {v4, v0}, Lcom/tkay/expressad/videocommon/e/d;->a(Ljava/lang/String;)V

    :cond_2
    const-string v5, "userId"

    .line 455
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 456
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_3

    .line 457
    move-object v6, p1

    check-cast v6, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 458
    iget-object v7, v6, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v7, :cond_3

    .line 459
    iget-object v2, v6, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 460
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    .line 463
    :cond_3
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v6

    .line 464
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->b()Ljava/lang/String;

    move-result-object v7

    .line 465
    sget-object v8, Lcom/tkay/expressad/video/bt/a/c;->d:Ljava/util/LinkedHashMap;

    invoke-virtual {v8, v7, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 466
    new-instance v2, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v2, v8}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;-><init>(Landroid/content/Context;)V

    .line 467
    invoke-virtual {v2, v7}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setInstanceId(Ljava/lang/String;)V

    .line 468
    invoke-virtual {v2, v0}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setUnitId(Ljava/lang/String;)V

    .line 469
    invoke-virtual {v2, v3}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 470
    invoke-virtual {v2, v4}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setRewardUnitSetting(Lcom/tkay/expressad/videocommon/e/d;)V

    const/4 v8, 0x1

    .line 471
    invoke-virtual {v2, v8}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setBigOffer(Z)V

    .line 472
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_4

    .line 473
    invoke-virtual {v2, v5}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setUserId(Ljava/lang/String;)V

    :cond_4
    const-string v5, "reward"

    .line 475
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v5

    if-eqz v5, :cond_6

    const-string v8, "id"

    .line 477
    invoke-virtual {v5, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 478
    new-instance v9, Lcom/tkay/expressad/videocommon/c/c;

    const-string v10, "name"

    invoke-virtual {v5, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    const-string v11, "amount"

    invoke-virtual {v5, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-direct {v9, v10, v5}, Lcom/tkay/expressad/videocommon/c/c;-><init>(Ljava/lang/String;I)V

    .line 479
    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_5

    .line 480
    invoke-virtual {v2, v8}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setRewardId(Ljava/lang/String;)V

    .line 482
    :cond_5
    invoke-virtual {v9}, Lcom/tkay/expressad/videocommon/c/c;->a()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_6

    .line 483
    invoke-virtual {v2, v9}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setReward(Lcom/tkay/expressad/videocommon/c/c;)V

    :cond_6
    const-string v5, "extra"

    .line 486
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 487
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_7

    .line 488
    invoke-virtual {v2, p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setDeveloperExtraData(Ljava/lang/String;)V

    .line 490
    :cond_7
    invoke-virtual {v2, v1}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setMute(I)V

    .line 491
    invoke-virtual {v6, v7, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 492
    sget-object p2, Lcom/tkay/expressad/video/bt/a/c;->g:Ljava/util/LinkedHashMap;

    invoke-virtual {p2, v7, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 493
    sget-object p2, Lcom/tkay/expressad/video/bt/a/c;->e:Ljava/util/LinkedHashMap;

    invoke-virtual {p2, v7, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 494
    sget-object p2, Lcom/tkay/expressad/video/bt/a/c;->f:Ljava/util/LinkedHashMap;

    invoke-virtual {p2, v7, v4}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 495
    invoke-static {p1, v7}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_8
    :goto_0
    const-string p2, "unitId or data is empty"

    .line 439
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 498
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 499
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "createSubPlayTemplateView failed:"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final e(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 7

    :try_start_0
    const-string v0, "unitId"

    .line 505
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 506
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "data"

    .line 507
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p2, :cond_b

    .line 508
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    goto/16 :goto_2

    .line 512
    :cond_0
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 513
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 514
    move-object v2, p1

    check-cast v2, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 515
    iget-object v3, v2, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v3, :cond_1

    .line 516
    iget-object p2, v2, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 517
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object p2

    .line 520
    :cond_1
    invoke-virtual {p0, v0, p2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    if-eqz p2, :cond_a

    .line 521
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 522
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    .line 523
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    if-eqz v0, :cond_6

    .line 524
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    if-eqz v2, :cond_6

    .line 525
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    if-eqz v2, :cond_2

    .line 527
    invoke-virtual {v2, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 529
    :cond_2
    instance-of v2, v0, Landroid/view/ViewGroup;

    if-eqz v2, :cond_6

    .line 530
    move-object v2, v0

    check-cast v2, Landroid/view/ViewGroup;

    .line 531
    invoke-virtual {v2}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v3

    if-lez v3, :cond_6

    .line 532
    invoke-virtual {v2}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v3

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v3, :cond_6

    .line 534
    invoke-virtual {v2, v4}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v5

    .line 535
    instance-of v6, v5, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    if-eqz v6, :cond_3

    .line 536
    move-object v6, v5

    check-cast v6, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {v6}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->getInstanceId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p2, v6}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 537
    check-cast v5, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {v5}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->onDestory()V

    goto :goto_1

    .line 540
    :cond_3
    instance-of v6, v5, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v6, :cond_4

    .line 541
    move-object v6, v5

    check-cast v6, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v6}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->getInstanceId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p2, v6}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 542
    check-cast v5, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v5}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->onDestory()V

    goto :goto_1

    .line 545
    :cond_4
    instance-of v6, v5, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v6, :cond_5

    .line 546
    move-object v6, v5

    check-cast v6, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v6}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->getInstanceId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p2, v6}, Ljava/util/LinkedHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 547
    check-cast v5, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v5}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onDestroy()V

    :cond_5
    :goto_1
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 553
    :cond_6
    instance-of p2, v0, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz p2, :cond_7

    .line 554
    move-object p2, v0

    check-cast p2, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->onDestroy()V

    .line 556
    :cond_7
    instance-of p2, v0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    if-eqz p2, :cond_8

    .line 557
    move-object p2, v0

    check-cast p2, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->onDestory()V

    .line 559
    :cond_8
    instance-of p2, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz p2, :cond_9

    .line 560
    check-cast v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->onDestory()V

    .line 562
    :cond_9
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onComponentDestroy"

    .line 563
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_a
    const-string p2, "unitId or instanceId not exist"

    .line 566
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_b
    :goto_2
    const-string p2, "unidId or data is empty"

    .line 509
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 570
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public final g(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 7

    :try_start_0
    const-string v0, "unitId"

    .line 593
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 594
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 595
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 596
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 597
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 598
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 599
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 600
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 603
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 605
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_1
    const-string v3, "rect"

    .line 608
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_2

    const-string p2, "rect not exist"

    .line 610
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 614
    :cond_2
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    const-string v2, "left"

    const/16 v3, -0x3e7

    .line 616
    invoke-virtual {p2, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    const-string v4, "top"

    .line 617
    invoke-virtual {p2, v4, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string v5, "right"

    .line 618
    invoke-virtual {p2, v5, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    const-string v6, "bottom"

    .line 619
    invoke-virtual {p2, v6, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    .line 620
    new-instance v6, Landroid/graphics/Rect;

    invoke-direct {v6, v2, v4, v5, v3}, Landroid/graphics/Rect;-><init>(IIII)V

    const-string v2, "width"

    .line 621
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const-string v3, "height"

    .line 622
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 623
    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_7

    .line 624
    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    if-eqz v0, :cond_6

    .line 626
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_3

    .line 627
    invoke-virtual {v0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    .line 628
    invoke-static {v3, v6, v2, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/view/ViewGroup$LayoutParams;Landroid/graphics/Rect;II)Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    invoke-virtual {v0, p2}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 629
    invoke-virtual {v0}, Landroid/view/View;->requestLayout()V

    goto :goto_0

    .line 631
    :cond_3
    instance-of v3, v0, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    if-eqz v3, :cond_4

    .line 632
    move-object v3, v0

    check-cast v3, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {v3, v6}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setRect(Landroid/graphics/Rect;)V

    .line 633
    move-object v3, v0

    check-cast v3, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {v3, v2, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setLayout(II)V

    .line 635
    :cond_4
    instance-of v3, v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    if-eqz v3, :cond_5

    .line 636
    move-object v3, v0

    check-cast v3, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v3, v6}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setRect(Landroid/graphics/Rect;)V

    .line 637
    check-cast v0, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;

    invoke-virtual {v0, v2, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTVideoView;->setLayout(II)V

    .line 640
    :cond_5
    :goto_0
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onViewRectChanged"

    .line 641
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_6
    const-string p2, "view is null"

    .line 644
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_7
    const-string p2, "instanceId not exist"

    .line 648
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 652
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 653
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "setViewRect failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final h(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 736
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 737
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 738
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 739
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 740
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 741
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 742
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 743
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 746
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 748
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 751
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 752
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 753
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    if-eqz p2, :cond_3

    .line 754
    invoke-virtual {p2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 755
    invoke-virtual {p2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_2

    .line 757
    invoke-virtual {v0, p2}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 758
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onRemoveFromView"

    .line 759
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "parent is null"

    .line 762
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "view is null"

    .line 766
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_4
    const-string p2, "params not enough"

    .line 770
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 774
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 775
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "removeFromSuperView failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final i(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 12

    const-string v0, "id"

    :try_start_0
    const-string v1, "unitId"

    .line 781
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 782
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 783
    invoke-static {v2}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 784
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 785
    move-object v4, p1

    check-cast v4, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 786
    iget-object v5, v4, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v5, :cond_0

    .line 787
    iget-object v3, v4, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 788
    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v3

    :cond_0
    const-string v4, "data"

    .line 791
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 793
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 796
    :cond_1
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 797
    invoke-virtual {p0, v1, v3}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v1

    .line 798
    invoke-virtual {v1, v0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    invoke-virtual {v1, v2}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    .line 799
    invoke-virtual {v1, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    .line 800
    invoke-virtual {v1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/view/View;

    .line 801
    invoke-static {v4}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    if-eqz v3, :cond_b

    if-nez v4, :cond_2

    goto/16 :goto_3

    :cond_2
    const-string v5, "rect"

    .line 806
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 807
    instance-of v5, v4, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    const/4 v6, 0x0

    if-eqz v5, :cond_4

    .line 808
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v5, "OperateViews setNotchString = "

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v5, "%1$s-%2$s-%3$s-%4$s-%5$s"

    const/4 v7, 0x5

    new-array v7, v7, [Ljava/lang/Object;

    sget v8, Lcom/tkay/expressad/video/bt/a/c;->n:I

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v7, v6

    const/4 v6, 0x1

    sget v8, Lcom/tkay/expressad/video/bt/a/c;->o:I

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v7, v6

    const/4 v6, 0x2

    sget v8, Lcom/tkay/expressad/video/bt/a/c;->p:I

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v7, v6

    const/4 v6, 0x3

    sget v8, Lcom/tkay/expressad/video/bt/a/c;->q:I

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v7, v6

    const/4 v6, 0x4

    sget v8, Lcom/tkay/expressad/video/bt/a/c;->r:I

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v7, v6

    invoke-static {v5, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 809
    move-object v6, v4

    check-cast v6, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    sget v7, Lcom/tkay/expressad/video/bt/a/c;->n:I

    sget v8, Lcom/tkay/expressad/video/bt/a/c;->o:I

    sget v9, Lcom/tkay/expressad/video/bt/a/c;->p:I

    sget v10, Lcom/tkay/expressad/video/bt/a/c;->q:I

    sget v11, Lcom/tkay/expressad/video/bt/a/c;->r:I

    invoke-virtual/range {v6 .. v11}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setNotchPadding(IIIII)V

    .line 810
    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_3
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_a

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/View;

    .line 811
    instance-of v5, v3, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v5, :cond_3

    .line 812
    invoke-static {v4}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 813
    move-object v1, v3

    check-cast v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    check-cast v3, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    check-cast v4, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v1, v3, v4, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->appendSubView(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;Lcom/tkay/expressad/video/bt/module/TYTempContainer;Lorg/json/JSONObject;)V

    goto/16 :goto_2

    :cond_4
    const/4 v1, 0x0

    if-nez p2, :cond_6

    .line 822
    instance-of p2, v4, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    if-eqz p2, :cond_5

    .line 823
    move-object p2, v4

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getRect()Landroid/graphics/Rect;

    move-result-object v1

    .line 824
    move-object p2, v4

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewWidth()I

    move-result v6

    .line 825
    move-object p2, v4

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewHeight()I

    move-result p2

    goto :goto_0

    :cond_5
    move p2, v6

    goto :goto_0

    :cond_6
    const-string v1, "left"

    const/16 v5, -0x3e7

    .line 828
    invoke-virtual {p2, v1, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    const-string v6, "top"

    .line 829
    invoke-virtual {p2, v6, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    const-string v7, "right"

    .line 830
    invoke-virtual {p2, v7, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    const-string v8, "bottom"

    .line 831
    invoke-virtual {p2, v8, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    .line 832
    new-instance v8, Landroid/graphics/Rect;

    invoke-direct {v8, v1, v6, v7, v5}, Landroid/graphics/Rect;-><init>(IIII)V

    const-string v1, "width"

    .line 833
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    const-string v1, "height"

    .line 834
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    move-object v1, v8

    .line 836
    :goto_0
    new-instance v5, Landroid/view/ViewGroup$LayoutParams;

    const/4 v7, -0x1

    invoke-direct {v5, v7, v7}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 837
    instance-of v8, v3, Landroid/widget/FrameLayout;

    if-eqz v8, :cond_7

    .line 838
    new-instance v5, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v5, v7, v7}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 839
    :cond_7
    instance-of v8, v3, Landroid/widget/RelativeLayout;

    if-eqz v8, :cond_8

    .line 840
    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v5, v7, v7}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 841
    :cond_8
    instance-of v8, v3, Landroid/widget/LinearLayout;

    if-eqz v8, :cond_9

    .line 842
    new-instance v5, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v5, v7, v7}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 844
    :cond_9
    :goto_1
    invoke-static {v5, v1, v6, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/view/ViewGroup$LayoutParams;Landroid/graphics/Rect;II)Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    .line 845
    invoke-static {v4}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 846
    invoke-virtual {v3, v4, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 848
    :cond_a
    :goto_2
    invoke-static {p1, v2}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onAppendView"

    .line 849
    invoke-static {p1, p2, v2}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    .line 850
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v1, "appendSubView parentId = "

    invoke-direct {p2, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " childId = "

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void

    :cond_b
    :goto_3
    const-string p2, "view is not exist"

    .line 803
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_c
    const-string p2, "instanceId is not exist"

    .line 852
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 856
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 857
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "appendSubView failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final j(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 9

    const-string v0, "id"

    :try_start_0
    const-string v1, "unitId"

    .line 863
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 864
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 865
    invoke-static {v2}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 866
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 867
    move-object v4, p1

    check-cast v4, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 868
    iget-object v5, v4, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v5, :cond_0

    .line 869
    iget-object v3, v4, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 870
    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v3

    :cond_0
    const-string v4, "data"

    .line 873
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p2, :cond_d

    .line 874
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_1

    goto/16 :goto_4

    .line 878
    :cond_1
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 879
    invoke-virtual {p0, v1, v3}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v1

    .line 880
    invoke-virtual {v1, v2}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    invoke-virtual {v1, v0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    .line 881
    invoke-virtual {v1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    .line 882
    invoke-virtual {v1, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/view/View;

    .line 883
    invoke-static {v4}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    if-eqz v3, :cond_b

    if-nez v4, :cond_2

    goto/16 :goto_3

    :cond_2
    const-string v5, "rect"

    .line 888
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 889
    instance-of v5, v4, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v5, :cond_4

    .line 890
    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_3
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_a

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/View;

    .line 891
    instance-of v5, v3, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v5, :cond_3

    .line 892
    invoke-static {v4}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 893
    move-object v1, v3

    check-cast v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    check-cast v3, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    check-cast v4, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v1, v3, v4, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->appendSubView(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;Lcom/tkay/expressad/video/bt/module/TYTempContainer;Lorg/json/JSONObject;)V

    goto/16 :goto_2

    :cond_4
    const/4 v1, 0x0

    const/4 v5, 0x0

    if-nez p2, :cond_6

    .line 902
    instance-of p2, v4, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    if-eqz p2, :cond_5

    .line 903
    move-object p2, v4

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getRect()Landroid/graphics/Rect;

    move-result-object v1

    .line 904
    move-object p2, v4

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewWidth()I

    move-result v5

    .line 905
    move-object p2, v4

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewHeight()I

    move-result p2

    goto :goto_0

    :cond_5
    move p2, v5

    goto :goto_0

    :cond_6
    const-string v1, "left"

    const/16 v5, -0x3e7

    .line 908
    invoke-virtual {p2, v1, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    const-string v6, "top"

    .line 909
    invoke-virtual {p2, v6, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    const-string v7, "right"

    .line 910
    invoke-virtual {p2, v7, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    const-string v8, "bottom"

    .line 911
    invoke-virtual {p2, v8, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    .line 912
    new-instance v8, Landroid/graphics/Rect;

    invoke-direct {v8, v1, v6, v7, v5}, Landroid/graphics/Rect;-><init>(IIII)V

    const-string v1, "width"

    .line 913
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    const-string v1, "height"

    .line 914
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    move-object v1, v8

    .line 916
    :goto_0
    new-instance v6, Landroid/view/ViewGroup$LayoutParams;

    const/4 v7, -0x1

    invoke-direct {v6, v7, v7}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 917
    instance-of v8, v3, Landroid/widget/FrameLayout;

    if-eqz v8, :cond_7

    .line 918
    new-instance v6, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v6, v7, v7}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 919
    :cond_7
    instance-of v8, v3, Landroid/widget/RelativeLayout;

    if-eqz v8, :cond_8

    .line 920
    new-instance v6, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v6, v7, v7}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 921
    :cond_8
    instance-of v8, v3, Landroid/widget/LinearLayout;

    if-eqz v8, :cond_9

    .line 922
    new-instance v6, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v6, v7, v7}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 924
    :cond_9
    :goto_1
    invoke-static {v6, v1, v5, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/view/ViewGroup$LayoutParams;Landroid/graphics/Rect;II)Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    .line 925
    invoke-static {v4}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 926
    invoke-virtual {v3, v4, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 928
    :cond_a
    :goto_2
    invoke-static {p1, v2}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onAppendViewTo"

    .line 929
    invoke-static {p1, p2, v2}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    .line 930
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v1, "appendViewTo parentId = "

    invoke-direct {p2, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " childId = "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void

    :cond_b
    :goto_3
    const-string p2, "view is not exist"

    .line 885
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_c
    const-string p2, "instanceId is not exist"

    .line 932
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_d
    :goto_4
    const-string p2, "unitId or data is empty"

    .line 875
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 936
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 937
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "appendViewTo failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final k(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 12

    const-string v0, "id"

    :try_start_0
    const-string v1, "unitId"

    .line 943
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 944
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 945
    invoke-static {v2}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 946
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 947
    move-object v4, p1

    check-cast v4, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 948
    iget-object v5, v4, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v5, :cond_0

    .line 949
    iget-object v3, v4, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 950
    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v3

    :cond_0
    const-string v4, "data"

    .line 953
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 955
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 958
    :cond_1
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 959
    invoke-virtual {p0, v1, v3}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v1

    .line 960
    invoke-virtual {v1, v0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    invoke-virtual {v1, v2}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    .line 961
    invoke-virtual {v1, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    .line 962
    invoke-virtual {v1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/view/View;

    if-eqz v3, :cond_b

    if-nez v4, :cond_2

    goto/16 :goto_3

    :cond_2
    const-string v5, "rect"

    .line 967
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 968
    instance-of v5, v4, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    const/4 v6, 0x0

    if-eqz v5, :cond_4

    .line 969
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v5, "OperateViews setNotchString = "

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v5, "%1$s-%2$s-%3$s-%4$s-%5$s"

    const/4 v7, 0x5

    new-array v7, v7, [Ljava/lang/Object;

    sget v8, Lcom/tkay/expressad/video/bt/a/c;->n:I

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v7, v6

    const/4 v6, 0x1

    sget v8, Lcom/tkay/expressad/video/bt/a/c;->o:I

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v7, v6

    const/4 v6, 0x2

    sget v8, Lcom/tkay/expressad/video/bt/a/c;->p:I

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v7, v6

    const/4 v6, 0x3

    sget v8, Lcom/tkay/expressad/video/bt/a/c;->q:I

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v7, v6

    const/4 v6, 0x4

    sget v8, Lcom/tkay/expressad/video/bt/a/c;->r:I

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    aput-object v8, v7, v6

    invoke-static {v5, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 970
    move-object v6, v4

    check-cast v6, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    sget v7, Lcom/tkay/expressad/video/bt/a/c;->n:I

    sget v8, Lcom/tkay/expressad/video/bt/a/c;->o:I

    sget v9, Lcom/tkay/expressad/video/bt/a/c;->p:I

    sget v10, Lcom/tkay/expressad/video/bt/a/c;->q:I

    sget v11, Lcom/tkay/expressad/video/bt/a/c;->r:I

    invoke-virtual/range {v6 .. v11}, Lcom/tkay/expressad/video/bt/module/TYTempContainer;->setNotchPadding(IIIII)V

    .line 971
    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_3
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_a

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/View;

    .line 972
    instance-of v5, v3, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v5, :cond_3

    .line 973
    invoke-static {v4}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 974
    move-object v1, v3

    check-cast v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    check-cast v3, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    check-cast v4, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v1, v3, v4, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->appendSubView(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;Lcom/tkay/expressad/video/bt/module/TYTempContainer;Lorg/json/JSONObject;)V

    goto/16 :goto_2

    :cond_4
    const/4 v1, 0x0

    if-nez p2, :cond_6

    .line 983
    instance-of p2, v4, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    if-eqz p2, :cond_5

    .line 984
    move-object p2, v4

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getRect()Landroid/graphics/Rect;

    move-result-object v1

    .line 985
    move-object p2, v4

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewWidth()I

    move-result v6

    .line 986
    move-object p2, v4

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewHeight()I

    move-result p2

    goto :goto_0

    :cond_5
    move p2, v6

    goto :goto_0

    :cond_6
    const-string v1, "left"

    const/16 v5, -0x3e7

    .line 989
    invoke-virtual {p2, v1, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    const-string v6, "top"

    .line 990
    invoke-virtual {p2, v6, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    const-string v7, "right"

    .line 991
    invoke-virtual {p2, v7, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    const-string v8, "bottom"

    .line 992
    invoke-virtual {p2, v8, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    .line 993
    new-instance v8, Landroid/graphics/Rect;

    invoke-direct {v8, v1, v6, v7, v5}, Landroid/graphics/Rect;-><init>(IIII)V

    const-string v1, "width"

    .line 994
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    const-string v1, "height"

    .line 995
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    move-object v1, v8

    .line 997
    :goto_0
    new-instance v5, Landroid/view/ViewGroup$LayoutParams;

    const/4 v7, -0x1

    invoke-direct {v5, v7, v7}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 998
    instance-of v8, v3, Landroid/widget/FrameLayout;

    if-eqz v8, :cond_7

    .line 999
    new-instance v5, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v5, v7, v7}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1000
    :cond_7
    instance-of v8, v3, Landroid/widget/RelativeLayout;

    if-eqz v8, :cond_8

    .line 1001
    new-instance v5, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v5, v7, v7}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1002
    :cond_8
    instance-of v8, v3, Landroid/widget/LinearLayout;

    if-eqz v8, :cond_9

    .line 1003
    new-instance v5, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v5, v7, v7}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 1005
    :cond_9
    :goto_1
    invoke-static {v5, v1, v6, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/view/ViewGroup$LayoutParams;Landroid/graphics/Rect;II)Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    .line 1006
    invoke-virtual {v3, v4, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1008
    :cond_a
    :goto_2
    invoke-static {p1, v2}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onAppendView"

    .line 1009
    invoke-static {p1, p2, v2}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    .line 1010
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v1, "appendSubView parentId = "

    invoke-direct {p2, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " childId = "

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void

    :cond_b
    :goto_3
    const-string p2, "view is not exist"

    .line 964
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_c
    const-string p2, "instanceId is not exist"

    .line 1012
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1016
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1017
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "appendSubView failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final l(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 9

    const-string v0, "id"

    :try_start_0
    const-string v1, "unitId"

    .line 1023
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1024
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1025
    invoke-static {v2}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 1026
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 1027
    move-object v4, p1

    check-cast v4, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1028
    iget-object v5, v4, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v5, :cond_0

    .line 1029
    iget-object v3, v4, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1030
    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v3

    :cond_0
    const-string v4, "data"

    .line 1033
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p2, :cond_d

    .line 1034
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_1

    goto/16 :goto_4

    .line 1038
    :cond_1
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1039
    invoke-virtual {p0, v1, v3}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v1

    .line 1040
    invoke-virtual {v1, v2}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    invoke-virtual {v1, v0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_c

    .line 1041
    invoke-virtual {v1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    .line 1042
    invoke-virtual {v1, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/view/View;

    if-eqz v3, :cond_b

    if-nez v4, :cond_2

    goto/16 :goto_3

    :cond_2
    const-string v5, "rect"

    .line 1047
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 1048
    instance-of v5, v4, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    if-eqz v5, :cond_4

    .line 1049
    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_3
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_a

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/View;

    .line 1050
    instance-of v5, v3, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    if-eqz v5, :cond_3

    .line 1051
    invoke-static {v4}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    .line 1052
    move-object v1, v3

    check-cast v1, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    check-cast v3, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;

    check-cast v4, Lcom/tkay/expressad/video/bt/module/TYTempContainer;

    invoke-virtual {v1, v3, v4, p2}, Lcom/tkay/expressad/video/bt/module/TkayBTContainer;->appendSubView(Lcom/tkay/expressad/video/bt/module/TkayBTContainer;Lcom/tkay/expressad/video/bt/module/TYTempContainer;Lorg/json/JSONObject;)V

    goto/16 :goto_2

    :cond_4
    const/4 v1, 0x0

    const/4 v5, 0x0

    if-nez p2, :cond_6

    .line 1061
    instance-of p2, v4, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    if-eqz p2, :cond_5

    .line 1062
    move-object p2, v4

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getRect()Landroid/graphics/Rect;

    move-result-object v1

    .line 1063
    move-object p2, v4

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewWidth()I

    move-result v5

    .line 1064
    move-object p2, v4

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewHeight()I

    move-result p2

    goto :goto_0

    :cond_5
    move p2, v5

    goto :goto_0

    :cond_6
    const-string v1, "left"

    const/16 v5, -0x3e7

    .line 1067
    invoke-virtual {p2, v1, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    const-string v6, "top"

    .line 1068
    invoke-virtual {p2, v6, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    const-string v7, "right"

    .line 1069
    invoke-virtual {p2, v7, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    const-string v8, "bottom"

    .line 1070
    invoke-virtual {p2, v8, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    .line 1071
    new-instance v8, Landroid/graphics/Rect;

    invoke-direct {v8, v1, v6, v7, v5}, Landroid/graphics/Rect;-><init>(IIII)V

    const-string v1, "width"

    .line 1072
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    const-string v1, "height"

    .line 1073
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    move-object v1, v8

    .line 1075
    :goto_0
    new-instance v6, Landroid/view/ViewGroup$LayoutParams;

    const/4 v7, -0x1

    invoke-direct {v6, v7, v7}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 1076
    instance-of v8, v3, Landroid/widget/FrameLayout;

    if-eqz v8, :cond_7

    .line 1077
    new-instance v6, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v6, v7, v7}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1078
    :cond_7
    instance-of v8, v3, Landroid/widget/RelativeLayout;

    if-eqz v8, :cond_8

    .line 1079
    new-instance v6, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v6, v7, v7}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1080
    :cond_8
    instance-of v8, v3, Landroid/widget/LinearLayout;

    if-eqz v8, :cond_9

    .line 1081
    new-instance v6, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v6, v7, v7}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 1083
    :cond_9
    :goto_1
    invoke-static {v6, v1, v5, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/view/ViewGroup$LayoutParams;Landroid/graphics/Rect;II)Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    .line 1084
    invoke-virtual {v3, v4, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1086
    :cond_a
    :goto_2
    invoke-static {p1, v2}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onAppendViewTo"

    .line 1087
    invoke-static {p1, p2, v2}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    .line 1088
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v1, "appendViewTo parentId = "

    invoke-direct {p2, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " childId = "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void

    :cond_b
    :goto_3
    const-string p2, "view is not exist"

    .line 1044
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_c
    const-string p2, "instanceId is not exist"

    .line 1090
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_d
    :goto_4
    const-string p2, "unitId or data is empty"

    .line 1035
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1094
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1095
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "appendViewTo failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final m(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 1102
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1103
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1104
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1105
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1106
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1107
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1108
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1109
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1112
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1114
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1117
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 1118
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 1119
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    if-eqz p2, :cond_3

    .line 1120
    invoke-virtual {p2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 1121
    invoke-virtual {p2}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_2

    .line 1123
    invoke-virtual {v0, p2}, Landroid/view/ViewGroup;->bringChildToFront(Landroid/view/View;)V

    .line 1124
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onBringViewToFront"

    .line 1125
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "parent is null"

    .line 1128
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "view is null"

    .line 1132
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_4
    const-string p2, "instanceId is not exist"

    .line 1136
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1140
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1141
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "bringViewToFront failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final n(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 1147
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1148
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1149
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1150
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1151
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1152
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1153
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1154
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1157
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1159
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1162
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 1163
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1164
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    if-eqz p2, :cond_2

    const/16 v0, 0x8

    .line 1166
    invoke-virtual {p2, v0}, Landroid/view/View;->setVisibility(I)V

    .line 1167
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onHideView"

    .line 1168
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "view not exist"

    .line 1171
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId not exist"

    .line 1175
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1179
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1180
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "hideView failed: + "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final o(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 1186
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1187
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1188
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1189
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1190
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1191
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1192
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1193
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1196
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1198
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1201
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 1202
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1203
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    if-eqz p2, :cond_2

    const/4 v0, 0x0

    .line 1205
    invoke-virtual {p2, v0}, Landroid/view/View;->setVisibility(I)V

    .line 1206
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onShowView"

    .line 1207
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "view not exist"

    .line 1210
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId not exist"

    .line 1214
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1218
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1219
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "showView failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final p(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 1225
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1226
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1227
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1228
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1229
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1230
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1231
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1232
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1235
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1237
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_1
    const-string v3, "color"

    .line 1240
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1241
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    const-string p2, "color is not exist"

    .line 1242
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1245
    :cond_2
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    .line 1246
    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 1247
    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    if-eqz v0, :cond_3

    .line 1249
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1250
    invoke-static {p2}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result p2

    invoke-virtual {v0, p2}, Landroid/view/View;->setBackgroundColor(I)V

    const-string p2, "onViewBgColorChanged"

    .line 1251
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "view not exist"

    .line 1254
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_4
    const-string p2, "instanceId not exist"

    .line 1258
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1262
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1263
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "setViewBgColor failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final q(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 6

    :try_start_0
    const-string v0, "unitId"

    .line 1269
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1270
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1271
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1272
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1273
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1274
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1275
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1276
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1279
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1281
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_1
    const-string v3, "alpha"

    const-wide/high16 v4, 0x3ff0000000000000L    # 1.0

    .line 1284
    invoke-virtual {p2, v3, v4, v5}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v3

    .line 1285
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 1286
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1287
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    if-eqz p2, :cond_2

    double-to-float v0, v3

    .line 1289
    invoke-virtual {p2, v0}, Landroid/view/View;->setAlpha(F)V

    .line 1290
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onViewAlphaChanged"

    .line 1291
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "view not exist"

    .line 1294
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId not exist"

    .line 1298
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1302
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1303
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "setViewAlpha failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final r(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 8

    :try_start_0
    const-string v0, "unitId"

    .line 1309
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1310
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1311
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1312
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1313
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1314
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1315
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1316
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1319
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1321
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_1
    const-string v3, "vertical"

    const-wide/high16 v4, 0x3ff0000000000000L    # 1.0

    .line 1324
    invoke-virtual {p2, v3, v4, v5}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v6

    const-string v3, "horizon"

    .line 1325
    invoke-virtual {p2, v3, v4, v5}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v3

    .line 1326
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 1327
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1328
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    if-eqz p2, :cond_2

    double-to-float v0, v3

    .line 1330
    invoke-virtual {p2, v0}, Landroid/view/View;->setScaleX(F)V

    double-to-float v0, v6

    .line 1331
    invoke-virtual {p2, v0}, Landroid/view/View;->setScaleY(F)V

    .line 1332
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onViewScaleChanged"

    .line 1333
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "view not exist"

    .line 1336
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "instanceId not exist"

    .line 1340
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1344
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1345
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "setViewScale failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final s(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 10

    :try_start_0
    const-string v0, "unitId"

    .line 1351
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1352
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1353
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1354
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1355
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1356
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1357
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1358
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1361
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1363
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_1
    const-string v3, "targetComponentId"

    .line 1366
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "rect"

    .line 1367
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 1369
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    .line 1370
    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_8

    invoke-virtual {v0, v3}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_8

    .line 1371
    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    .line 1372
    invoke-virtual {v0, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    if-eqz v0, :cond_7

    .line 1373
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v4

    if-eqz v4, :cond_7

    .line 1374
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v4

    check-cast v4, Landroid/view/ViewGroup;

    .line 1375
    invoke-virtual {v4, v0}, Landroid/view/ViewGroup;->indexOfChild(Landroid/view/View;)I

    move-result v0

    const/4 v5, 0x0

    const/4 v6, 0x0

    if-nez p2, :cond_3

    .line 1381
    instance-of p2, v2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    if-eqz p2, :cond_2

    .line 1382
    move-object p2, v2

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getRect()Landroid/graphics/Rect;

    move-result-object v5

    .line 1383
    move-object p2, v2

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewWidth()I

    move-result v6

    .line 1384
    move-object p2, v2

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewHeight()I

    move-result p2

    goto :goto_0

    :cond_2
    move p2, v6

    goto :goto_0

    :cond_3
    const-string v5, "left"

    const/16 v6, -0x3e7

    .line 1387
    invoke-virtual {p2, v5, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    const-string v7, "top"

    .line 1388
    invoke-virtual {p2, v7, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    const-string v8, "right"

    .line 1389
    invoke-virtual {p2, v8, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v8

    const-string v9, "bottom"

    .line 1390
    invoke-virtual {p2, v9, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    .line 1391
    new-instance v9, Landroid/graphics/Rect;

    invoke-direct {v9, v5, v7, v8, v6}, Landroid/graphics/Rect;-><init>(IIII)V

    const-string v5, "width"

    .line 1392
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    const-string v5, "height"

    .line 1393
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    move-object v5, v9

    .line 1395
    :goto_0
    new-instance v7, Landroid/view/ViewGroup$LayoutParams;

    const/4 v8, -0x1

    invoke-direct {v7, v8, v8}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 1396
    instance-of v9, v4, Landroid/widget/FrameLayout;

    if-eqz v9, :cond_4

    .line 1397
    new-instance v7, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v7, v8, v8}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1398
    :cond_4
    instance-of v9, v4, Landroid/widget/RelativeLayout;

    if-eqz v9, :cond_5

    .line 1399
    new-instance v7, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v7, v8, v8}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1400
    :cond_5
    instance-of v9, v4, Landroid/widget/LinearLayout;

    if-eqz v9, :cond_6

    .line 1401
    new-instance v7, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v7, v8, v8}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 1403
    :cond_6
    :goto_1
    invoke-static {v7, v5, v6, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/view/ViewGroup$LayoutParams;Landroid/graphics/Rect;II)Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    .line 1405
    invoke-static {v2}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    add-int/lit8 v0, v0, 0x1

    .line 1407
    invoke-virtual {v4, v2, v0, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 1408
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onInsertViewAbove"

    .line 1409
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    .line 1410
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "insertViewAbove instanceId = "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " brotherId = "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void

    :cond_7
    const-string p2, "view not exist"

    .line 1412
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_8
    const-string p2, "instanceId not exist"

    .line 1416
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1420
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1421
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "insertViewAbove failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final t(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 10

    :try_start_0
    const-string v0, "unitId"

    .line 1427
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1428
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1429
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1430
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1431
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1432
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1433
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1434
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1437
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1439
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_1
    const-string v3, "targetComponentId"

    .line 1442
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "rect"

    .line 1443
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 1445
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    .line 1446
    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_9

    invoke-virtual {v0, v3}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_9

    .line 1447
    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    .line 1448
    invoke-virtual {v0, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    if-eqz v0, :cond_8

    .line 1449
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_8

    .line 1450
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    .line 1451
    invoke-virtual {v3, v0}, Landroid/view/ViewGroup;->indexOfChild(Landroid/view/View;)I

    move-result v0

    const/4 v4, 0x0

    const/4 v5, 0x0

    if-nez p2, :cond_3

    .line 1457
    instance-of p2, v2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    if-eqz p2, :cond_2

    .line 1458
    move-object p2, v2

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getRect()Landroid/graphics/Rect;

    move-result-object v4

    .line 1459
    move-object p2, v2

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewWidth()I

    move-result p2

    .line 1460
    move-object v6, v2

    check-cast v6, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {v6}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewHeight()I

    move-result v6

    goto :goto_0

    :cond_2
    move p2, v5

    move v6, p2

    goto :goto_0

    :cond_3
    const-string v4, "left"

    const/16 v6, -0x3e7

    .line 1463
    invoke-virtual {p2, v4, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string v7, "top"

    .line 1464
    invoke-virtual {p2, v7, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    const-string v8, "right"

    .line 1465
    invoke-virtual {p2, v8, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v8

    const-string v9, "bottom"

    .line 1466
    invoke-virtual {p2, v9, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    .line 1467
    new-instance v9, Landroid/graphics/Rect;

    invoke-direct {v9, v4, v7, v8, v6}, Landroid/graphics/Rect;-><init>(IIII)V

    const-string v4, "width"

    .line 1468
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v4

    const-string v6, "height"

    .line 1469
    invoke-virtual {p2, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    move p2, v4

    move-object v4, v9

    .line 1471
    :goto_0
    new-instance v7, Landroid/view/ViewGroup$LayoutParams;

    const/4 v8, -0x1

    invoke-direct {v7, v8, v8}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 1472
    instance-of v9, v3, Landroid/widget/FrameLayout;

    if-eqz v9, :cond_4

    .line 1473
    new-instance v7, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v7, v8, v8}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1474
    :cond_4
    instance-of v9, v3, Landroid/widget/RelativeLayout;

    if-eqz v9, :cond_5

    .line 1475
    new-instance v7, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v7, v8, v8}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1476
    :cond_5
    instance-of v9, v3, Landroid/widget/LinearLayout;

    if-eqz v9, :cond_6

    .line 1477
    new-instance v7, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v7, v8, v8}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 1479
    :cond_6
    :goto_1
    invoke-static {v7, v4, p2, v6}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/view/ViewGroup$LayoutParams;Landroid/graphics/Rect;II)Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    .line 1481
    invoke-static {v2}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;)V

    add-int/lit8 v0, v0, -0x1

    if-ltz v0, :cond_7

    move v5, v0

    .line 1485
    :cond_7
    invoke-virtual {v3, v2, v5, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 1486
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onInsertViewBelow"

    .line 1487
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_8
    const-string p2, "view not exist"

    .line 1490
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_9
    const-string p2, "instanceId not exist"

    .line 1494
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1498
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1499
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "insertViewBelow failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final u(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 10

    :try_start_0
    const-string v0, "unitId"

    .line 1506
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1507
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1508
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1509
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1510
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1511
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1512
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1513
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1516
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1518
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_1
    const-string v3, "targetComponentId"

    .line 1521
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "rect"

    .line 1522
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 1524
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    .line 1525
    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_8

    invoke-virtual {v0, v3}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_8

    .line 1526
    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    .line 1527
    invoke-virtual {v0, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    if-eqz v0, :cond_7

    .line 1528
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v4

    if-eqz v4, :cond_7

    .line 1529
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v4

    check-cast v4, Landroid/view/ViewGroup;

    .line 1530
    invoke-virtual {v4, v0}, Landroid/view/ViewGroup;->indexOfChild(Landroid/view/View;)I

    move-result v0

    const/4 v5, 0x0

    const/4 v6, 0x0

    if-nez p2, :cond_3

    .line 1536
    instance-of p2, v2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    if-eqz p2, :cond_2

    .line 1537
    move-object p2, v2

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getRect()Landroid/graphics/Rect;

    move-result-object v5

    .line 1538
    move-object p2, v2

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewWidth()I

    move-result v6

    .line 1539
    move-object p2, v2

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewHeight()I

    move-result p2

    goto :goto_0

    :cond_2
    move p2, v6

    goto :goto_0

    :cond_3
    const-string v5, "left"

    const/16 v6, -0x3e7

    .line 1542
    invoke-virtual {p2, v5, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    const-string v7, "top"

    .line 1543
    invoke-virtual {p2, v7, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    const-string v8, "right"

    .line 1544
    invoke-virtual {p2, v8, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v8

    const-string v9, "bottom"

    .line 1545
    invoke-virtual {p2, v9, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    .line 1546
    new-instance v9, Landroid/graphics/Rect;

    invoke-direct {v9, v5, v7, v8, v6}, Landroid/graphics/Rect;-><init>(IIII)V

    const-string v5, "width"

    .line 1547
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    const-string v5, "height"

    .line 1548
    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    move-object v5, v9

    .line 1550
    :goto_0
    new-instance v7, Landroid/view/ViewGroup$LayoutParams;

    const/4 v8, -0x1

    invoke-direct {v7, v8, v8}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 1551
    instance-of v9, v4, Landroid/widget/FrameLayout;

    if-eqz v9, :cond_4

    .line 1552
    new-instance v7, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v7, v8, v8}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1553
    :cond_4
    instance-of v9, v4, Landroid/widget/RelativeLayout;

    if-eqz v9, :cond_5

    .line 1554
    new-instance v7, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v7, v8, v8}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1555
    :cond_5
    instance-of v9, v4, Landroid/widget/LinearLayout;

    if-eqz v9, :cond_6

    .line 1556
    new-instance v7, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v7, v8, v8}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 1558
    :cond_6
    :goto_1
    invoke-static {v7, v5, v6, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/view/ViewGroup$LayoutParams;Landroid/graphics/Rect;II)Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    add-int/lit8 v0, v0, 0x1

    .line 1560
    invoke-virtual {v4, v2, v0, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 1561
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onInsertViewAbove"

    .line 1562
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    .line 1563
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "insertViewAbove instanceId = "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " brotherId = "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void

    :cond_7
    const-string p2, "view not exist"

    .line 1565
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_8
    const-string p2, "instanceId not exist"

    .line 1569
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1573
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1574
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "insertViewAbove failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final v(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 9

    :try_start_0
    const-string v0, "unitId"

    .line 1580
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1581
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1582
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1583
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1584
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1585
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1586
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1587
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1590
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1592
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_1
    const-string v3, "targetComponentId"

    .line 1595
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "rect"

    .line 1596
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 1598
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0

    .line 1599
    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_8

    invoke-virtual {v0, v3}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_8

    .line 1600
    invoke-virtual {v0, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/view/View;

    .line 1601
    invoke-virtual {v0, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/view/View;

    if-eqz v0, :cond_7

    .line 1602
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_7

    .line 1603
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    .line 1604
    invoke-virtual {v3, v0}, Landroid/view/ViewGroup;->indexOfChild(Landroid/view/View;)I

    move-result v0

    const/4 v4, 0x0

    const/4 v5, 0x0

    if-nez p2, :cond_3

    .line 1610
    instance-of p2, v2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    if-eqz p2, :cond_2

    .line 1611
    move-object p2, v2

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getRect()Landroid/graphics/Rect;

    move-result-object v4

    .line 1612
    move-object p2, v2

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewWidth()I

    move-result v5

    .line 1613
    move-object p2, v2

    check-cast p2, Lcom/tkay/expressad/video/bt/module/BTBaseView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/BTBaseView;->getViewHeight()I

    move-result p2

    goto :goto_0

    :cond_2
    move p2, v5

    goto :goto_0

    :cond_3
    const-string v4, "left"

    const/16 v5, -0x3e7

    .line 1616
    invoke-virtual {p2, v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string v6, "top"

    .line 1617
    invoke-virtual {p2, v6, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    const-string v7, "right"

    .line 1618
    invoke-virtual {p2, v7, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    const-string v8, "bottom"

    .line 1619
    invoke-virtual {p2, v8, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    .line 1620
    new-instance v8, Landroid/graphics/Rect;

    invoke-direct {v8, v4, v6, v7, v5}, Landroid/graphics/Rect;-><init>(IIII)V

    const-string v4, "width"

    .line 1621
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    const-string v4, "height"

    .line 1622
    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    move-object v4, v8

    .line 1624
    :goto_0
    new-instance v6, Landroid/view/ViewGroup$LayoutParams;

    const/4 v7, -0x1

    invoke-direct {v6, v7, v7}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 1625
    instance-of v8, v3, Landroid/widget/FrameLayout;

    if-eqz v8, :cond_4

    .line 1626
    new-instance v6, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v6, v7, v7}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1627
    :cond_4
    instance-of v8, v3, Landroid/widget/RelativeLayout;

    if-eqz v8, :cond_5

    .line 1628
    new-instance v6, Landroid/widget/RelativeLayout$LayoutParams;

    invoke-direct {v6, v7, v7}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    goto :goto_1

    .line 1629
    :cond_5
    instance-of v8, v3, Landroid/widget/LinearLayout;

    if-eqz v8, :cond_6

    .line 1630
    new-instance v6, Landroid/widget/LinearLayout$LayoutParams;

    invoke-direct {v6, v7, v7}, Landroid/widget/LinearLayout$LayoutParams;-><init>(II)V

    .line 1632
    :cond_6
    :goto_1
    invoke-static {v6, v4, v5, p2}, Lcom/tkay/expressad/video/bt/a/c;->a(Landroid/view/ViewGroup$LayoutParams;Landroid/graphics/Rect;II)Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    .line 1633
    invoke-virtual {v3, v2, v0, p2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    .line 1634
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p2, "onInsertViewBelow"

    .line 1635
    invoke-static {p1, p2, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_7
    const-string p2, "view not exist"

    .line 1638
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_8
    const-string p2, "instanceId not exist"

    .line 1642
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1646
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1647
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "insertViewBelow failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final w(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 16

    move-object/from16 v1, p1

    move-object/from16 v0, p2

    const-string v2, "unitId"

    .line 1653
    :try_start_0
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "id"

    .line 1654
    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 1655
    invoke-static {v4}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 1656
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_0

    .line 1657
    move-object v6, v1

    check-cast v6, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1658
    iget-object v7, v6, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v7, :cond_0

    .line 1659
    iget-object v5, v6, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1660
    invoke-virtual {v5}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v5

    :cond_0
    const-string v6, "data"

    .line 1663
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v6

    if-nez v6, :cond_1

    const-string v0, "data is empty"

    .line 1665
    invoke-static {v1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_1
    const-string v7, "content"

    .line 1668
    invoke-virtual {v6, v7}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v6

    if-nez v6, :cond_2

    const-string v0, "content is empty"

    .line 1670
    invoke-static {v1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string v7, "fileURL"

    .line 1673
    invoke-virtual {v6, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v8, "filePath"

    .line 1674
    invoke-virtual {v6, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const-string v9, "html"

    .line 1675
    invoke-virtual {v6, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 1676
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-eqz v10, :cond_3

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-eqz v10, :cond_3

    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-eqz v10, :cond_3

    const-string v0, "url is empty"

    .line 1677
    invoke-static {v1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string v10, "campaigns"

    .line 1680
    invoke-virtual {v6, v10}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v10

    .line 1681
    new-instance v11, Ljava/util/ArrayList;

    invoke-direct {v11}, Ljava/util/ArrayList;-><init>()V

    if-eqz v10, :cond_5

    .line 1682
    invoke-virtual {v10}, Lorg/json/JSONArray;->length()I

    move-result v13

    if-lez v13, :cond_5

    .line 1683
    invoke-virtual {v10}, Lorg/json/JSONArray;->length()I

    move-result v13

    const/4 v14, 0x0

    :goto_0
    if-ge v14, v13, :cond_5

    .line 1685
    invoke-virtual {v10, v14}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v15

    invoke-static {v15}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object v15

    if-eqz v15, :cond_4

    .line 1687
    invoke-virtual {v15, v3}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 1688
    invoke-interface {v11, v15}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_4
    add-int/lit8 v14, v14, 0x1

    goto :goto_0

    .line 1692
    :cond_5
    invoke-virtual {v6, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v10, "unitSetting"

    .line 1693
    invoke-virtual {v6, v10}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v10

    invoke-static {v10}, Lcom/tkay/expressad/videocommon/e/d;->a(Lorg/json/JSONObject;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v10

    if-eqz v10, :cond_6

    .line 1695
    invoke-virtual {v10, v2}, Lcom/tkay/expressad/videocommon/e/d;->a(Ljava/lang/String;)V

    :cond_6
    const-string v2, "rect"

    .line 1697
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    .line 1698
    new-instance v2, Landroid/graphics/Rect;

    const/16 v13, -0x3e7

    invoke-direct {v2, v13, v13, v13, v13}, Landroid/graphics/Rect;-><init>(IIII)V

    if-eqz v0, :cond_7

    const-string v2, "left"

    .line 1702
    invoke-virtual {v0, v2, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    const-string v14, "top"

    .line 1703
    invoke-virtual {v0, v14, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v14

    const-string v15, "right"

    .line 1704
    invoke-virtual {v0, v15, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v15

    const-string v12, "bottom"

    .line 1705
    invoke-virtual {v0, v12, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v12

    .line 1706
    new-instance v13, Landroid/graphics/Rect;

    invoke-direct {v13, v2, v14, v15, v12}, Landroid/graphics/Rect;-><init>(IIII)V

    const-string v2, "width"

    .line 1707
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const-string v12, "height"

    .line 1708
    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    move v12, v2

    move-object v2, v13

    goto :goto_1

    :cond_7
    const/4 v0, 0x0

    const/4 v12, 0x0

    :goto_1
    const-string v13, "refreshCache"

    const/4 v14, 0x0

    .line 1710
    invoke-virtual {v6, v13, v14}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    move-object/from16 v13, p0

    .line 1711
    :try_start_1
    invoke-virtual {v13, v3, v5}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v3

    .line 1712
    invoke-virtual {v3, v4}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_9

    .line 1713
    invoke-virtual {v3, v4}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/view/View;

    .line 1714
    instance-of v5, v3, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    if-eqz v5, :cond_8

    .line 1715
    check-cast v3, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    .line 1716
    invoke-virtual {v3, v9}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setHtml(Ljava/lang/String;)V

    .line 1717
    invoke-virtual {v3, v8}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setFilePath(Ljava/lang/String;)V

    .line 1718
    invoke-virtual {v3, v7}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setFileURL(Ljava/lang/String;)V

    .line 1719
    invoke-virtual {v3, v2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setRect(Landroid/graphics/Rect;)V

    .line 1720
    invoke-virtual {v3, v12, v0}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setLayout(II)V

    .line 1721
    invoke-virtual {v3, v11}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setCampaigns(Ljava/util/List;)V

    .line 1722
    invoke-virtual {v3, v10}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->setRewardUnitSetting(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 1723
    invoke-virtual {v3, v6}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->webviewLoad(I)V

    .line 1724
    invoke-static {v1, v4}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_8
    const-string v0, "view not exist"

    .line 1727
    invoke-static {v1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_9
    const-string v0, "instanceId not exist"

    .line 1731
    invoke-static {v1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    goto :goto_2

    :catchall_1
    move-exception v0

    move-object/from16 v13, p0

    .line 1735
    :goto_2
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1736
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "webviewLoad failed: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final x(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 1742
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1743
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1744
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1745
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1746
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1747
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1748
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1749
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1752
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1754
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1757
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 1758
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 1759
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 1760
    instance-of v0, p2, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    if-eqz v0, :cond_3

    .line 1761
    check-cast p2, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->webviewReload()Z

    move-result p2

    if-eqz p2, :cond_2

    .line 1763
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "reload failed"

    .line 1766
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "view not exist"

    .line 1770
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_4
    const-string p2, "instanceId not exist"

    .line 1774
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1778
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1779
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "webviewReload failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final y(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 1785
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1786
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1787
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1788
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1789
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1790
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1791
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1792
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1795
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1797
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1800
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 1801
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 1802
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 1803
    instance-of v0, p2, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    if-eqz v0, :cond_3

    .line 1804
    check-cast p2, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->webviewGoBack()Z

    move-result p2

    if-eqz p2, :cond_2

    .line 1806
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "webviewGoBack failed"

    .line 1809
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "view not exist"

    .line 1813
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_4
    const-string p2, "instanceId not exist"

    .line 1817
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1821
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1822
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "webviewGoBack failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final z(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 5

    :try_start_0
    const-string v0, "unitId"

    .line 1828
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "id"

    .line 1829
    invoke-virtual {p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1830
    invoke-static {v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 1831
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 1832
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1833
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_0

    .line 1834
    iget-object v2, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1835
    invoke-virtual {v2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getRid()Ljava/lang/String;

    move-result-object v2

    :cond_0
    const-string v3, "data"

    .line 1838
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    if-nez p2, :cond_1

    const-string p2, "data is empty"

    .line 1840
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1843
    :cond_1
    invoke-virtual {p0, v0, v2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object p2

    .line 1844
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 1845
    invoke-virtual {p2, v1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    .line 1846
    instance-of v0, p2, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    if-eqz v0, :cond_3

    .line 1847
    check-cast p2, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;

    invoke-virtual {p2}, Lcom/tkay/expressad/video/bt/module/TkayBTWebView;->webviewGoForward()Z

    move-result p2

    if-eqz p2, :cond_2

    .line 1849
    invoke-static {p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p2, "webviewGoForward failed"

    .line 1852
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_3
    const-string p2, "view not exist"

    .line 1856
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_4
    const-string p2, "instanceId not exist"

    .line 1860
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 1864
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1865
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "webviewGoForward failed: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method
