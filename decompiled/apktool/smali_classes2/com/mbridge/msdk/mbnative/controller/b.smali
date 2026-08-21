.class public Lcom/mbridge/msdk/mbnative/controller/b;
.super Ljava/lang/Object;
.source "NativePreloadController.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbnative/controller/b$b;,
        Lcom/mbridge/msdk/mbnative/controller/b$a;
    }
.end annotation


# static fields
.field private static final d:Ljava/lang/String;

.field private static e:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Ljava/lang/Object;",
            ">;>;"
        }
    .end annotation
.end field

.field private static f:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field private static g:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/foundation/entity/m;",
            ">;"
        }
    .end annotation
.end field

.field private static h:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private static i:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private static j:Lcom/mbridge/msdk/mbnative/controller/b;

.field private static w:I

.field private static x:I


# instance fields
.field private A:I

.field private B:Lcom/mbridge/msdk/foundation/same/e/b;

.field private C:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field a:Ljava/util/Queue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Queue<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field b:Ljava/util/Queue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Queue<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field protected c:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private k:Lcom/mbridge/msdk/c/c;

.field private l:Lcom/mbridge/msdk/click/b;

.field private m:Lcom/mbridge/msdk/c/d;

.field private n:Ljava/lang/String;

.field private o:Landroid/os/Handler;

.field private p:I

.field private q:Ljava/lang/String;

.field private r:Lcom/mbridge/msdk/foundation/db/i;

.field private s:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private t:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private u:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private v:Z

.field private y:Z

.field private z:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 77
    const-class v0, Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    .line 79
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->e:Ljava/util/Map;

    .line 81
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->f:Ljava/util/Map;

    .line 83
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->g:Ljava/util/Map;

    .line 85
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->h:Ljava/util/Map;

    .line 87
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->i:Ljava/util/Map;

    const/4 v0, 0x0

    .line 89
    sput-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    const/4 v0, -0x1

    .line 150
    sput v0, Lcom/mbridge/msdk/mbnative/controller/b;->w:I

    const/4 v0, -0x2

    .line 151
    sput v0, Lcom/mbridge/msdk/mbnative/controller/b;->x:I

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 119
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 102
    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->a:Ljava/util/Queue;

    .line 103
    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->b:Ljava/util/Queue;

    const/4 v0, 0x0

    .line 104
    iput v0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->p:I

    const-string v0, ""

    .line 106
    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->q:Ljava/lang/String;

    .line 156
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->C:Ljava/util/Map;

    .line 120
    new-instance v0, Lcom/mbridge/msdk/foundation/same/e/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/foundation/same/e/b;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->B:Lcom/mbridge/msdk/foundation/same/e/b;

    .line 121
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    if-nez v0, :cond_0

    .line 122
    invoke-static {}, Landroid/os/Looper;->prepare()V

    .line 124
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/mbnative/controller/b$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/mbnative/controller/b$1;-><init>(Lcom/mbridge/msdk/mbnative/controller/b;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->o:Landroid/os/Handler;

    return-void
.end method

.method private a(Ljava/lang/String;)I
    .locals 5

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 374
    :cond_0
    :try_start_0
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 375
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result p1

    if-lez p1, :cond_2

    move p1, v0

    .line 376
    :goto_0
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge p1, v2, :cond_2

    .line 377
    invoke-virtual {v1, p1}, Lorg/json/JSONArray;->opt(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lorg/json/JSONObject;

    const-string v3, "id"

    .line 378
    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    const/4 v4, 0x2

    if-ne v4, v3, :cond_1

    const-string p1, "ad_num"

    .line 380
    invoke-virtual {v2, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :cond_1
    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 386
    sget-object v1, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/b;)Landroid/os/Handler;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->o:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/b;Lcom/mbridge/msdk/foundation/db/i;)Lcom/mbridge/msdk/foundation/db/i;
    .locals 0

    .line 76
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b;->r:Lcom/mbridge/msdk/foundation/db/i;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/b;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 76
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b;->q:Ljava/lang/String;

    return-object p1
.end method

.method public static a()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Ljava/lang/Object;",
            ">;>;"
        }
    .end annotation

    .line 1148
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->e:Ljava/util/Map;

    return-object v0
.end method

.method private a(IJILjava/lang/String;Ljava/lang/String;ZLcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V
    .locals 17

    move-object/from16 v13, p0

    move-object/from16 v14, p5

    move/from16 v15, p7

    .line 1190
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->G()Ljava/util/UUID;

    move-result-object v12

    const-string v0, "_post"

    const-string v1, "_ttc"

    const/4 v2, 0x0

    .line 1195
    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    const-string v3, "_"

    if-nez v12, :cond_0

    .line 1192
    iget-object v4, v13, Lcom/mbridge/msdk/mbnative/controller/b;->C:Ljava/util/Map;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v4, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1193
    iget-object v1, v13, Lcom/mbridge/msdk/mbnative/controller/b;->C:Ljava/util/Map;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v15}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v1, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 1195
    :cond_0
    iget-object v4, v13, Lcom/mbridge/msdk/mbnative/controller/b;->C:Ljava/util/Map;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v15}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v4, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1196
    iget-object v1, v13, Lcom/mbridge/msdk/mbnative/controller/b;->C:Ljava/util/Map;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v15}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v1, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1198
    :goto_0
    new-instance v11, Lcom/mbridge/msdk/mbnative/controller/b$2;

    invoke-direct {v11, v13, v14, v12, v15}, Lcom/mbridge/msdk/mbnative/controller/b$2;-><init>(Lcom/mbridge/msdk/mbnative/controller/b;Ljava/lang/String;Ljava/util/UUID;Z)V

    .line 1228
    new-instance v10, Lcom/mbridge/msdk/mbnative/controller/b$3;

    move-object v0, v10

    move-object/from16 v1, p0

    move-object/from16 v2, p5

    move/from16 v3, p7

    move-object v4, v12

    move-object v5, v11

    move/from16 v6, p1

    move-wide/from16 v7, p2

    move/from16 v9, p4

    move-object v14, v10

    move-object/from16 v10, p6

    move-object v15, v11

    move-object/from16 v11, p8

    move-object/from16 v16, v12

    move-object/from16 v12, p9

    invoke-direct/range {v0 .. v12}, Lcom/mbridge/msdk/mbnative/controller/b$3;-><init>(Lcom/mbridge/msdk/mbnative/controller/b;Ljava/lang/String;ZLjava/util/UUID;Lcom/mbridge/msdk/foundation/same/e/a;IJILjava/lang/String;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V

    .line 1282
    iget-object v0, v13, Lcom/mbridge/msdk/mbnative/controller/b;->o:Landroid/os/Handler;

    const-wide/32 v1, 0x15f90

    invoke-virtual {v0, v14, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 1283
    new-instance v12, Lcom/mbridge/msdk/mbnative/controller/b$4;

    move-object v0, v12

    move-object/from16 v1, p0

    move-object/from16 v2, p5

    move-object/from16 v4, v16

    move/from16 v5, p1

    move-wide/from16 v6, p2

    move/from16 v8, p4

    move-object/from16 v9, p6

    move-object/from16 v10, p8

    move-object/from16 v11, p9

    invoke-direct/range {v0 .. v11}, Lcom/mbridge/msdk/mbnative/controller/b$4;-><init>(Lcom/mbridge/msdk/mbnative/controller/b;Ljava/lang/String;ZLjava/util/UUID;IJILjava/lang/String;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V

    .line 1315
    iget-object v0, v13, Lcom/mbridge/msdk/mbnative/controller/b;->B:Lcom/mbridge/msdk/foundation/same/e/b;

    if-nez v0, :cond_1

    .line 1316
    new-instance v0, Lcom/mbridge/msdk/foundation/same/e/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/foundation/same/e/b;-><init>(Landroid/content/Context;)V

    iput-object v0, v13, Lcom/mbridge/msdk/mbnative/controller/b;->B:Lcom/mbridge/msdk/foundation/same/e/b;

    .line 1318
    :cond_1
    iget-object v0, v13, Lcom/mbridge/msdk/mbnative/controller/b;->B:Lcom/mbridge/msdk/foundation/same/e/b;

    if-eqz v0, :cond_2

    .line 1319
    invoke-virtual {v0, v15, v12}, Lcom/mbridge/msdk/foundation/same/e/b;->a(Lcom/mbridge/msdk/foundation/same/e/a;Lcom/mbridge/msdk/foundation/same/e/a$b;)V

    :cond_2
    return-void
.end method

.method private a(IJLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILcom/mbridge/msdk/c/d;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(IJ",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;I",
            "Lcom/mbridge/msdk/c/d;",
            "Lcom/mbridge/msdk/b/a/a;",
            "Lcom/mbridge/msdk/out/AdMobClickListener;",
            ")V"
        }
    .end annotation

    move-object v11, p0

    move v1, p1

    const/4 v0, 0x1

    if-eq v1, v0, :cond_0

    .line 433
    invoke-static {p1}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 435
    iget v3, v11, Lcom/mbridge/msdk/mbnative/controller/b;->A:I

    move-object/from16 v6, p4

    invoke-virtual {v2, v6, v3}, Lcom/mbridge/msdk/mbnative/a/b;->b(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/List;

    if-eqz v2, :cond_1

    .line 436
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_1

    const/4 v1, 0x0

    move-object/from16 v8, p9

    .line 437
    invoke-virtual {p0, v0, v8, v1}, Lcom/mbridge/msdk/mbnative/controller/b;->a(ZLcom/mbridge/msdk/b/a/a;Ljava/lang/String;)V

    return-void

    :cond_0
    move-object/from16 v6, p4

    :cond_1
    move-object/from16 v8, p9

    if-eq v1, v0, :cond_3

    const/4 v0, 0x2

    if-eq v1, v0, :cond_2

    const/4 v9, 0x0

    move-object v0, p0

    move v1, p1

    move-wide v2, p2

    move/from16 v4, p7

    move-object/from16 v5, p8

    move-object/from16 v6, p4

    move-object/from16 v7, p5

    move-object/from16 v8, p9

    move-object/from16 v10, p10

    .line 452
    invoke-virtual/range {v0 .. v10}, Lcom/mbridge/msdk/mbnative/controller/b;->a(IJILcom/mbridge/msdk/c/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;ZLcom/mbridge/msdk/out/AdMobClickListener;)V

    goto :goto_0

    :cond_2
    const/4 v1, 0x2

    const/4 v9, 0x0

    move-object v0, p0

    move-wide v2, p2

    move/from16 v4, p7

    move-object/from16 v5, p8

    move-object/from16 v6, p4

    move-object/from16 v7, p5

    move-object/from16 v8, p9

    move-object/from16 v10, p10

    .line 448
    invoke-virtual/range {v0 .. v10}, Lcom/mbridge/msdk/mbnative/controller/b;->a(IJILcom/mbridge/msdk/c/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;ZLcom/mbridge/msdk/out/AdMobClickListener;)V

    goto :goto_0

    :cond_3
    const/4 v7, 0x1

    move-object v0, p0

    move v1, p1

    move-wide v2, p2

    move/from16 v4, p7

    move-object/from16 v5, p4

    move-object/from16 v6, p5

    move-object/from16 v8, p9

    move-object/from16 v9, p10

    .line 445
    invoke-direct/range {v0 .. v9}, Lcom/mbridge/msdk/mbnative/controller/b;->a(IJILjava/lang/String;Ljava/lang/String;ZLcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V

    :goto_0
    return-void
.end method

.method private a(ILcom/mbridge/msdk/c/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V
    .locals 12

    move-object v11, p0

    .line 411
    iget-object v0, v11, Lcom/mbridge/msdk/mbnative/controller/b;->a:Ljava/util/Queue;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Ljava/util/Queue;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 413
    :try_start_0
    iget-object v0, v11, Lcom/mbridge/msdk/mbnative/controller/b;->a:Ljava/util/Queue;

    invoke-interface {v0}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 414
    sget v0, Lcom/mbridge/msdk/MBridgeConstans;->REQUEST_TIME_OUT:I

    int-to-long v2, v0

    .line 415
    iget-object v0, v11, Lcom/mbridge/msdk/mbnative/controller/b;->b:Ljava/util/Queue;

    if-eqz v0, :cond_0

    iget-object v0, v11, Lcom/mbridge/msdk/mbnative/controller/b;->b:Ljava/util/Queue;

    invoke-interface {v0}, Ljava/util/Queue;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 416
    iget-object v0, v11, Lcom/mbridge/msdk/mbnative/controller/b;->b:Ljava/util/Queue;

    invoke-interface {v0}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Long;

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    .line 418
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "preload start queue adsource = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 420
    iget-object v6, v11, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    move-object v0, p0

    move-object v4, p3

    move-object/from16 v5, p4

    move v7, p1

    move-object v8, p2

    move-object/from16 v9, p5

    move-object/from16 v10, p6

    invoke-direct/range {v0 .. v10}, Lcom/mbridge/msdk/mbnative/controller/b;->a(IJLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILcom/mbridge/msdk/c/d;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 422
    :catchall_0
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    const-string v1, "queue poll exception"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public static a(ILjava/lang/String;)V
    .locals 5

    .line 716
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->g:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 717
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->g:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/m;

    goto :goto_0

    .line 719
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/m;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/entity/m;-><init>()V

    .line 721
    :goto_0
    sget-object v1, Lcom/mbridge/msdk/mbnative/controller/b;->h:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 4180
    sget-object v2, Lcom/mbridge/msdk/mbnative/controller/b;->i:Ljava/util/Map;

    .line 724
    invoke-interface {v2, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_1

    .line 5180
    sget-object v2, Lcom/mbridge/msdk/mbnative/controller/b;->i:Ljava/util/Map;

    .line 725
    invoke-interface {v2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    goto :goto_1

    :cond_1
    move v2, v3

    :goto_1
    const/4 v4, 0x0

    if-eq p0, v3, :cond_4

    const/4 v3, 0x2

    if-eq p0, v3, :cond_2

    goto :goto_4

    .line 736
    :cond_2
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/m;->a()I

    move-result p0

    add-int/2addr v1, p0

    if-le v1, v2, :cond_3

    goto :goto_2

    :cond_3
    move v4, v1

    .line 740
    :goto_2
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/foundation/entity/m;->a(I)V

    goto :goto_4

    .line 729
    :cond_4
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/m;->b()I

    move-result p0

    add-int/2addr v1, p0

    if-le v1, v2, :cond_5

    goto :goto_3

    :cond_5
    move v4, v1

    .line 733
    :goto_3
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/foundation/entity/m;->b(I)V

    .line 745
    :goto_4
    sget-object p0, Lcom/mbridge/msdk/mbnative/controller/b;->g:Ljava/util/Map;

    invoke-interface {p0, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/b;Ljava/util/List;Ljava/lang/String;)V
    .locals 11

    const-string p0, "com.mbridge.msdk.videocommon.download.b"

    if-eqz p1, :cond_0

    .line 5391
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-lez v0, :cond_0

    :try_start_1
    const-string v0, "com.mbridge.msdk.nativex.view.MBMediaView"

    .line 5394
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 5395
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 5396
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    const-string v0, "getInstance"

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Class;

    .line 5397
    invoke-virtual {p0, v0, v2}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v2, v1, [Ljava/lang/Object;

    const/4 v3, 0x0

    .line 5398
    invoke-virtual {v0, v3, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    const-string v2, "com.mbridge.msdk.videocommon.listener.a"

    .line 5400
    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    const-string v4, "createUnitCache"

    const/4 v5, 0x5

    new-array v6, v5, [Ljava/lang/Class;

    .line 5401
    const-class v7, Landroid/content/Context;

    aput-object v7, v6, v1

    const-class v7, Ljava/lang/String;

    const/4 v8, 0x1

    aput-object v7, v6, v8

    const-class v7, Ljava/util/concurrent/CopyOnWriteArrayList;

    const/4 v9, 0x2

    aput-object v7, v6, v9

    sget-object v7, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v10, 0x3

    aput-object v7, v6, v10

    const/4 v7, 0x4

    aput-object v2, v6, v7

    invoke-virtual {p0, v4, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v4, v5, [Ljava/lang/Object;

    .line 5402
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v5

    aput-object v5, v4, v1

    aput-object p2, v4, v8

    new-instance v5, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v5, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>(Ljava/util/Collection;)V

    aput-object v5, v4, v9

    invoke-static {v8}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v4, v10

    aput-object v3, v4, v7

    invoke-virtual {v2, v0, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "load"

    new-array v2, v8, [Ljava/lang/Class;

    .line 5403
    const-class v3, Ljava/lang/String;

    aput-object v3, v2, v1

    invoke-virtual {p0, p1, v2}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p0

    new-array p1, v8, [Ljava/lang/Object;

    aput-object p2, p1, v1

    .line 5404
    invoke-virtual {p0, v0, p1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    .line 5407
    :catch_0
    :try_start_2
    sget-object p0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    const-string p1, "please import the videocommon aar"

    invoke-static {p0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 5410
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    const-string p1, "onload \u4e0d\u7528\u4e0b\u8f7d\u89c6\u9891\u7d20\u6750 size\u4e3a0"

    invoke-static {p0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_0

    :catch_1
    move-exception p0

    .line 5414
    sget-object p1, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    invoke-static {p0}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/mbnative/controller/b;Z)Z
    .locals 0

    .line 76
    iput-boolean p1, p0, Lcom/mbridge/msdk/mbnative/controller/b;->y:Z

    return p1
.end method

.method public static b()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation

    .line 1156
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->f:Ljava/util/Map;

    return-object v0
.end method

.method public static b(ILjava/lang/String;)V
    .locals 3

    .line 749
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->g:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 750
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->g:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/m;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eq p0, v1, :cond_1

    const/4 v1, 0x2

    if-eq p0, v1, :cond_0

    goto :goto_0

    .line 756
    :cond_0
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/entity/m;->a(I)V

    goto :goto_0

    .line 753
    :cond_1
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/entity/m;->b(I)V

    .line 761
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/mbnative/controller/b;->g:Ljava/util/Map;

    invoke-interface {p0, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/mbnative/controller/b;)Z
    .locals 0

    .line 76
    iget-boolean p0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->v:Z

    return p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/mbnative/controller/b;)Lcom/mbridge/msdk/foundation/db/i;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->r:Lcom/mbridge/msdk/foundation/db/i;

    return-object p0
.end method

.method public static c()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/foundation/entity/m;",
            ">;"
        }
    .end annotation

    .line 1164
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->g:Ljava/util/Map;

    return-object v0
.end method

.method public static d()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 1172
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->h:Ljava/util/Map;

    return-object v0
.end method

.method static synthetic d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->C:Ljava/util/Map;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/mbnative/controller/b;)Lcom/mbridge/msdk/foundation/same/e/b;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->B:Lcom/mbridge/msdk/foundation/same/e/b;

    return-object p0
.end method

.method public static e()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 1180
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->i:Ljava/util/Map;

    return-object v0
.end method

.method static synthetic f(Lcom/mbridge/msdk/mbnative/controller/b;)Lcom/mbridge/msdk/c/d;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    return-object p0
.end method

.method static synthetic f()Ljava/lang/String;
    .locals 1

    .line 76
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic g()Ljava/util/Map;
    .locals 1

    .line 76
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->e:Ljava/util/Map;

    return-object v0
.end method

.method static synthetic h()Ljava/util/Map;
    .locals 1

    .line 76
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->h:Ljava/util/Map;

    return-object v0
.end method


# virtual methods
.method public final a(IJILcom/mbridge/msdk/c/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;ZLcom/mbridge/msdk/out/AdMobClickListener;)V
    .locals 24

    move-object/from16 v8, p0

    move/from16 v1, p1

    move/from16 v9, p4

    move-object/from16 v10, p6

    move-object/from16 v7, p7

    move-object/from16 v11, p8

    move/from16 v12, p9

    move-object/from16 v13, p10

    const-string v2, "native_video_height"

    const-string v3, "native_video_width"

    const-string v0, "app_key"

    const-string v4, "1"

    const-string v5, "native_info"

    const-string v6, "key_word"

    .line 464
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v14

    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v14

    invoke-static {v14}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v14

    invoke-static {v14}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v14

    .line 465
    invoke-virtual {v14}, Lcom/mbridge/msdk/foundation/db/f;->a()V

    .line 467
    iget-object v14, v8, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v14}, Lcom/mbridge/msdk/c/d;->p()I

    move-result v14

    .line 469
    iget-object v15, v8, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v15}, Lcom/mbridge/msdk/c/d;->q()I

    move-result v15

    .line 470
    sget-object v13, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    move/from16 p5, v15

    const-string v15, "START LOAD MB MVNATIVE"

    invoke-static {v13, v15}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 472
    new-instance v13, Lcom/mbridge/msdk/mbnative/e/a/a;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v15

    invoke-virtual {v15}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v15

    invoke-direct {v13, v15}, Lcom/mbridge/msdk/mbnative/e/a/a;-><init>(Landroid/content/Context;)V

    .line 473
    new-instance v15, Lcom/mbridge/msdk/foundation/same/net/g/d;

    invoke-direct {v15}, Lcom/mbridge/msdk/foundation/same/net/g/d;-><init>()V

    .line 474
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v16

    invoke-virtual/range {v16 .. v16}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v16

    .line 475
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v17

    invoke-virtual/range {v17 .. v17}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v17

    move-object/from16 v18, v13

    .line 476
    iget-object v13, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_6

    move-object/from16 v19, v2

    const-string v2, "app_id"

    if-eqz v13, :cond_3

    :try_start_1
    iget-object v13, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v13, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v13

    if-eqz v13, :cond_3

    iget-object v13, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    .line 477
    invoke-interface {v13, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v13

    if-eqz v13, :cond_3

    iget-object v13, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v13, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v13

    if-eqz v13, :cond_3

    iget-object v13, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    .line 478
    invoke-interface {v13, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    if-eqz v13, :cond_3

    .line 480
    iget-object v13, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v13, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    instance-of v13, v13, Ljava/lang/String;

    if-eqz v13, :cond_0

    .line 481
    iget-object v13, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v13, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    move-object/from16 v16, v13

    check-cast v16, Ljava/lang/String;

    .line 483
    :cond_0
    iget-object v13, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v13, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v13

    instance-of v13, v13, Ljava/lang/String;

    if-eqz v13, :cond_1

    .line 484
    iget-object v13, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v13, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    move-object/from16 v17, v0

    check-cast v17, Ljava/lang/String;

    .line 486
    :cond_1
    iget-object v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v0, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Ljava/lang/String;

    if-eqz v0, :cond_2

    .line 487
    iget-object v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v0, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    .line 489
    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_3

    const-string v6, "smart"

    .line 490
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v15, v6, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    move-object/from16 v0, v16

    move-object/from16 v6, v17

    .line 494
    invoke-virtual {v15, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "unit_id"

    .line 495
    invoke-virtual {v15, v2, v10}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "req_type"

    .line 496
    invoke-virtual {v15, v2, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 497
    iget-object v2, v8, Lcom/mbridge/msdk/mbnative/controller/b;->n:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    const-string v2, "category"

    .line 498
    iget-object v13, v8, Lcom/mbridge/msdk/mbnative/controller/b;->n:Ljava/lang/String;

    invoke-virtual {v15, v2, v13}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 500
    :cond_4
    invoke-static/range {p7 .. p7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    .line 501
    sget-object v2, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v15, v2, v7}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    const-string v2, "sign"

    .line 503
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v15, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "only_impression"

    .line 504
    invoke-virtual {v15, v0, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 505
    invoke-static/range {p6 .. p6}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 506
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    const-string v2, "j"

    .line 507
    invoke-virtual {v15, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 510
    :cond_6
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->h:Ljava/util/Map;

    invoke-interface {v0, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 511
    sget v0, Lcom/mbridge/msdk/mbnative/controller/b;->w:I

    if-eq v14, v0, :cond_28

    if-eqz v14, :cond_28

    if-nez v2, :cond_7

    goto/16 :goto_f

    :cond_7
    const/4 v13, 0x1

    if-nez v9, :cond_b

    .line 516
    invoke-static/range {p1 .. p1}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v0

    if-eqz v12, :cond_a

    if-eqz v0, :cond_8

    .line 520
    invoke-virtual {v0, v10, v2}, Lcom/mbridge/msdk/mbnative/a/b;->b(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;

    if-eqz v0, :cond_8

    .line 521
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_8

    const/4 v0, 0x0

    .line 522
    invoke-virtual {v8, v13, v11, v0}, Lcom/mbridge/msdk/mbnative/controller/b;->a(ZLcom/mbridge/msdk/b/a/a;Ljava/lang/String;)V

    return-void

    .line 526
    :cond_8
    iget-boolean v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->y:Z

    if-eqz v0, :cond_9

    const-string v2, ""

    move-object/from16 v1, p0

    move/from16 v3, p4

    move-object/from16 v4, p6

    move-object/from16 v5, p7

    move-object/from16 v6, p8

    move-object/from16 v7, p10

    .line 527
    invoke-virtual/range {v1 .. v7}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V

    :cond_9
    return-void

    :cond_a
    if-eq v1, v13, :cond_b

    if-eqz v0, :cond_b

    .line 534
    invoke-virtual {v0, v10, v2}, Lcom/mbridge/msdk/mbnative/a/b;->b(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;

    if-eqz v0, :cond_b

    .line 535
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_b

    const/4 v0, 0x0

    .line 536
    invoke-virtual {v8, v13, v11, v0}, Lcom/mbridge/msdk/mbnative/controller/b;->a(ZLcom/mbridge/msdk/b/a/a;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_6

    return-void

    :cond_b
    const-string v6, "ad_num"

    const-string v13, ""

    if-eqz v2, :cond_c

    .line 543
    :try_start_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v15, v6, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 546
    :cond_c
    iget v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->p:I

    if-eqz v0, :cond_d

    const-string v0, "frame_num"

    .line 547
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    iget v12, v8, Lcom/mbridge/msdk/mbnative/controller/b;->p:I

    invoke-virtual {v9, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v15, v0, v9}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 553
    :cond_d
    iget-object v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v0, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_14

    .line 554
    iget-object v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v0, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    move-object v9, v0

    check-cast v9, Ljava/lang/String;

    .line 555
    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_13

    .line 556
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    new-instance v12, Ljava/lang/StringBuilder;

    invoke-direct {v12}, Ljava/lang/StringBuilder;-><init>()V

    const-string v11, "nativeinfo"

    invoke-virtual {v12, v11}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    invoke-static {v0, v11}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_6

    .line 559
    :try_start_3
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, v9}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 560
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v11
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_5
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_6

    if-lez v11, :cond_12

    move-object/from16 v21, v9

    const/4 v11, 0x0

    const/4 v12, 0x0

    const/16 v20, 0x0

    .line 561
    :goto_1
    :try_start_4
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v9

    if-ge v11, v9, :cond_11

    .line 562
    invoke-virtual {v0, v11}, Lorg/json/JSONArray;->opt(I)Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lorg/json/JSONObject;
    :try_end_4
    .catch Lorg/json/JSONException; {:try_start_4 .. :try_end_4} :catch_3
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_6

    move/from16 v22, v12

    :try_start_5
    const-string v12, "id"
    :try_end_5
    .catch Lorg/json/JSONException; {:try_start_5 .. :try_end_5} :catch_2
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_6

    move/from16 v23, v2

    const/4 v2, 0x0

    .line 563
    :try_start_6
    invoke-virtual {v9, v12, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v12

    const/4 v2, 0x2

    if-ne v2, v12, :cond_e

    .line 565
    invoke-virtual {v9, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v12
    :try_end_6
    .catch Lorg/json/JSONException; {:try_start_6 .. :try_end_6} :catch_1
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_6

    if-lez v14, :cond_10

    .line 567
    :try_start_7
    invoke-virtual {v9, v6, v14}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_7
    .catch Lorg/json/JSONException; {:try_start_7 .. :try_end_7} :catch_0
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_6

    goto :goto_2

    :catch_0
    move-exception v0

    goto :goto_5

    :cond_e
    const/4 v2, 0x3

    if-ne v2, v12, :cond_f

    .line 570
    :try_start_8
    invoke-virtual {v9, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v20

    if-lez v14, :cond_f

    .line 572
    invoke-virtual {v9, v6, v14}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_8
    .catch Lorg/json/JSONException; {:try_start_8 .. :try_end_8} :catch_1
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_6

    :cond_f
    move/from16 v12, v22

    :cond_10
    :goto_2
    add-int/lit8 v11, v11, 0x1

    move/from16 v2, v23

    goto :goto_1

    :catch_1
    move-exception v0

    goto :goto_3

    :catch_2
    move-exception v0

    move/from16 v23, v2

    :goto_3
    move/from16 v12, v22

    goto :goto_5

    :cond_11
    move/from16 v23, v2

    move/from16 v22, v12

    move/from16 v2, v20

    goto :goto_4

    :catch_3
    move-exception v0

    move/from16 v23, v2

    move/from16 v22, v12

    goto :goto_5

    :cond_12
    move/from16 v23, v2

    move-object/from16 v21, v9

    const/4 v2, 0x0

    const/4 v12, 0x0

    .line 577
    :goto_4
    :try_start_9
    invoke-static {v12, v2}, Ljava/lang/Math;->max(II)I

    move-result v9

    iput v9, v8, Lcom/mbridge/msdk/mbnative/controller/b;->z:I

    .line 578
    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v9
    :try_end_9
    .catch Lorg/json/JSONException; {:try_start_9 .. :try_end_9} :catch_4
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_6

    goto :goto_6

    :catch_4
    move-exception v0

    move/from16 v20, v2

    goto :goto_5

    :catch_5
    move-exception v0

    move/from16 v23, v2

    move-object/from16 v21, v9

    const/4 v12, 0x0

    const/16 v20, 0x0

    .line 581
    :goto_5
    :try_start_a
    sget-object v2, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    move/from16 v2, v20

    move-object/from16 v9, v21

    .line 584
    :goto_6
    invoke-virtual {v15, v5, v9}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_7

    :cond_13
    move/from16 v23, v2

    const/4 v2, 0x0

    const/4 v12, 0x0

    :goto_7
    move/from16 v14, v23

    goto :goto_9

    :cond_14
    move/from16 v23, v2

    .line 587
    sget v0, Lcom/mbridge/msdk/mbnative/controller/b;->x:I

    if-eq v14, v0, :cond_15

    if-eqz v14, :cond_15

    goto :goto_8

    :cond_15
    move/from16 v14, v23

    :goto_8
    const/4 v2, 0x0

    const/4 v12, 0x0

    .line 592
    :goto_9
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v14}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v15, v6, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "ping_mode"

    .line 593
    invoke-virtual {v15, v0, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 595
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_16

    .line 597
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    .line 600
    :cond_16
    iget-object v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(Ljava/util/Map;)Z

    move-result v0

    if-nez v0, :cond_17

    .line 601
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    const-string v4, "\u6ca1\u6709param \u53c2\u6570 \u8981\u4f20fqci"

    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 602
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v10}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Landroid/content/Context;Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    .line 603
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-lez v4, :cond_17

    .line 604
    sget-object v4, Lcom/mbridge/msdk/foundation/same/net/g/d;->c:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lorg/json/JSONArray;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v15, v4, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 608
    :cond_17
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 609
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->i()Ljava/util/List;

    move-result-object v4

    if-eqz v4, :cond_18

    .line 610
    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v6

    if-lez v6, :cond_18

    .line 611
    invoke-interface {v4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :goto_a
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_18

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Long;

    move v9, v12

    invoke-virtual {v6}, Ljava/lang/Long;->longValue()J

    move-result-wide v11

    .line 612
    invoke-virtual {v0, v11, v12}, Lorg/json/JSONArray;->put(J)Lorg/json/JSONArray;

    move v12, v9

    goto :goto_a

    :cond_18
    move v9, v12

    .line 617
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-lez v4, :cond_19

    const-string v4, "install_ids"

    .line 618
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lorg/json/JSONArray;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v15, v4, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 621
    :cond_19
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->g:Ljava/util/Map;

    invoke-interface {v0, v10}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1c

    .line 622
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->g:Ljava/util/Map;

    invoke-interface {v0, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/m;

    if-eqz v0, :cond_1c

    const/4 v4, 0x1

    if-eq v1, v4, :cond_1b

    const/4 v4, 0x2

    if-eq v1, v4, :cond_1a

    .line 632
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/m;->b()I

    move-result v12

    goto :goto_b

    .line 629
    :cond_1a
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/m;->a()I

    move-result v12

    goto :goto_b

    .line 626
    :cond_1b
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/m;->b()I

    move-result v12

    :goto_b
    const/4 v4, 0x1

    goto :goto_c

    :cond_1c
    const/4 v4, 0x1

    const/4 v12, 0x0

    :goto_c
    if-ne v1, v4, :cond_1d

    .line 638
    iget-object v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->q:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1d

    const-string v0, "ttc_ids"

    .line 639
    iget-object v4, v8, Lcom/mbridge/msdk/mbnative/controller/b;->q:Ljava/lang/String;

    invoke-virtual {v15, v0, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 642
    :cond_1d
    iget-object v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v0, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_6

    const-string v4, "tnum"

    const/4 v5, 0x1

    if-eqz v0, :cond_1e

    if-ne v1, v5, :cond_1e

    .line 643
    :try_start_b
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v5, v8, Lcom/mbridge/msdk/mbnative/controller/b;->z:I

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v15, v4, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_d

    :cond_1e
    if-ne v1, v5, :cond_1f

    .line 645
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v5, v8, Lcom/mbridge/msdk/mbnative/controller/b;->A:I

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v15, v4, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1f
    :goto_d
    const-string v0, "offset"

    .line 647
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v15, v0, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "ad_type"

    const-string v4, "42"

    .line 648
    invoke-virtual {v15, v0, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "ad_source_id"

    .line 649
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v15, v0, v4}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "native"

    .line 655
    invoke-static {v10, v0}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 656
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_20

    .line 657
    sget-object v4, Lcom/mbridge/msdk/foundation/same/net/g/d;->b:Ljava/lang/String;

    invoke-virtual {v15, v4, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 662
    :cond_20
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0xe

    if-lt v0, v4, :cond_23

    .line 663
    iget-object v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v0, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_21

    iget-object v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Ljava/lang/Integer;

    if-eqz v0, :cond_21

    const-string v0, "video_width"

    .line 664
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v5, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v15, v0, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 666
    :cond_21
    iget-object v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    move-object/from16 v3, v19

    invoke-interface {v0, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_22

    iget-object v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Ljava/lang/Integer;

    if-eqz v0, :cond_22

    const-string v0, "video_height"

    .line 667
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-interface {v5, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v15, v0, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_22
    const-string v0, "video_version"

    const-string v3, "2.0"

    .line 671
    invoke-virtual {v15, v0, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 674
    :cond_23
    new-instance v0, Lcom/mbridge/msdk/mbnative/controller/b$a;

    invoke-direct {v0, v8, v1}, Lcom/mbridge/msdk/mbnative/controller/b$a;-><init>(Lcom/mbridge/msdk/mbnative/controller/b;I)V

    .line 675
    invoke-virtual {v0, v10}, Lcom/mbridge/msdk/mbnative/controller/b$a;->setUnitId(Ljava/lang/String;)V

    .line 676
    invoke-virtual {v0, v7}, Lcom/mbridge/msdk/mbnative/controller/b$a;->setPlacementId(Ljava/lang/String;)V

    const/16 v3, 0x2a

    .line 677
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->setAdType(I)V

    move/from16 v3, v23

    .line 678
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->d(I)V

    move v12, v9

    .line 679
    invoke-virtual {v0, v12}, Lcom/mbridge/msdk/mbnative/controller/b$a;->b(I)V

    .line 680
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/mbnative/controller/b$a;->c(I)V

    move/from16 v2, p5

    .line 681
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(I)V

    move-object/from16 v9, p10

    .line 682
    invoke-virtual {v0, v9}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Lcom/mbridge/msdk/out/AdMobClickListener;)V

    move-object/from16 v11, p8

    .line 683
    invoke-virtual {v0, v11}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Lcom/mbridge/msdk/b/a/a;)V

    const/4 v2, 0x1

    move/from16 v12, p9

    if-ne v1, v2, :cond_24

    if-eqz v12, :cond_25

    .line 685
    :cond_24
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/mbnative/controller/b$a;->b(Z)V

    .line 688
    :cond_25
    iget-object v1, v8, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->b(Ljava/util/Map;)Ljava/util/List;

    move-result-object v1

    .line 689
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Ljava/util/List;)V

    .line 691
    new-instance v14, Lcom/mbridge/msdk/mbnative/controller/b$b;

    const/4 v3, 0x1

    move-object v1, v14

    move-object/from16 v2, p0

    move-object v4, v0

    move/from16 v5, p4

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    invoke-direct/range {v1 .. v7}, Lcom/mbridge/msdk/mbnative/controller/b$b;-><init>(Lcom/mbridge/msdk/mbnative/controller/b;ILcom/mbridge/msdk/foundation/same/e/d;ILjava/lang/String;Ljava/lang/String;)V

    .line 693
    invoke-virtual {v0, v14}, Lcom/mbridge/msdk/mbnative/controller/b$a;->a(Ljava/lang/Runnable;)V

    move/from16 v3, p4

    .line 694
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/mbnative/controller/b$a;->e(I)V

    .line 695
    invoke-virtual {v14, v11}, Lcom/mbridge/msdk/mbnative/controller/b$b;->a(Lcom/mbridge/msdk/b/a/a;)V

    .line 696
    invoke-virtual {v14, v9}, Lcom/mbridge/msdk/mbnative/controller/b$b;->a(Lcom/mbridge/msdk/out/AdMobClickListener;)V

    .line 697
    invoke-virtual {v14, v12}, Lcom/mbridge/msdk/mbnative/controller/b$b;->a(Z)V

    .line 698
    invoke-virtual {v14, v10}, Lcom/mbridge/msdk/mbnative/controller/b$b;->a(Ljava/lang/String;)V

    if-nez v3, :cond_26

    move-object/from16 v1, v18

    const/4 v2, 0x1

    .line 701
    invoke-virtual {v1, v2, v15, v0, v13}, Lcom/mbridge/msdk/mbnative/e/a/a;->choiceV3OrV5BySetting(ILcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;Ljava/lang/String;)V

    goto :goto_e

    :cond_26
    move-object/from16 v1, v18

    const/4 v2, 0x1

    if-ne v3, v2, :cond_27

    .line 703
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/d;->a()Lcom/mbridge/msdk/foundation/same/net/f/d;

    move-result-object v3

    iget-object v3, v3, Lcom/mbridge/msdk/foundation/same/net/f/d;->n:Ljava/lang/String;

    invoke-virtual {v1, v2, v3, v15, v0}, Lcom/mbridge/msdk/mbnative/e/a/a;->getLoadOrSetting(ILjava/lang/String;Lcom/mbridge/msdk/foundation/same/net/g/d;Lcom/mbridge/msdk/foundation/same/net/e;)V

    .line 705
    :cond_27
    :goto_e
    iget-object v0, v8, Lcom/mbridge/msdk/mbnative/controller/b;->o:Landroid/os/Handler;

    move-wide/from16 v1, p2

    invoke-virtual {v0, v14, v1, v2}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_10

    :cond_28
    :goto_f
    move v3, v9

    move-object/from16 v9, p10

    const-string v2, "The request was refused"

    move-object/from16 v1, p0

    move/from16 v3, p4

    move-object/from16 v4, p6

    move-object/from16 v5, p7

    move-object/from16 v6, p8

    move-object/from16 v7, p10

    .line 512
    invoke-virtual/range {v1 .. v7}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_6

    return-void

    :catch_6
    move-exception v0

    .line 707
    sget-object v1, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 708
    sget-object v1, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_10
    return-void
.end method

.method public final a(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V
    .locals 7

    .line 1057
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 1059
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->a:Ljava/util/Queue;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->a:Ljava/util/Queue;

    invoke-interface {v0}, Ljava/util/Queue;->size()I

    move-result v0

    if-lez v0, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b;->a:Ljava/util/Queue;

    if-nez v0, :cond_2

    :cond_1
    const/4 p2, 0x0

    .line 1061
    invoke-virtual {p0, p2, p5, p1}, Lcom/mbridge/msdk/mbnative/controller/b;->a(ZLcom/mbridge/msdk/b/a/a;Ljava/lang/String;)V

    goto :goto_0

    .line 1064
    :cond_2
    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    move-object v0, p0

    move v1, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    move-object v6, p6

    invoke-direct/range {v0 .. v6}, Lcom/mbridge/msdk/mbnative/controller/b;->a(ILcom/mbridge/msdk/c/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 1067
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_3

    .line 1068
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/Thread;)V
    .locals 1

    .line 1376
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->PRELOAD_RESULT_IN_SUBTHREAD:Z

    if-nez v0, :cond_0

    .line 1377
    invoke-virtual {p1}, Ljava/lang/Thread;->run()V

    goto :goto_0

    .line 1379
    :cond_0
    invoke-virtual {p1}, Ljava/lang/Thread;->start()V

    :goto_0
    return-void
.end method

.method public final a(Ljava/util/Map;ILcom/mbridge/msdk/out/AdMobClickListener;)V
    .locals 23
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;I",
            "Lcom/mbridge/msdk/out/AdMobClickListener;",
            ")V"
        }
    .end annotation

    move-object/from16 v11, p0

    move-object/from16 v0, p1

    move/from16 v12, p2

    const-string v13, "native_info"

    const-string v14, "com.mbridge.msdk.videocommon.download.b"

    const-string v1, "app_key"

    const-string v2, "app_id"

    const-string v3, "preload_result_listener"

    const-string v4, "ad_num"

    const-string v5, "catetory"

    const-string v6, "ad_frame_num"

    const-string v7, "isPreloadImg"

    const-string v8, "unit_id"

    const-string v9, "_"

    .line 161
    :try_start_0
    iput-object v0, v11, Lcom/mbridge/msdk/mbnative/controller/b;->s:Ljava/util/Map;

    const/4 v15, 0x0

    .line 162
    iput-boolean v15, v11, Lcom/mbridge/msdk/mbnative/controller/b;->y:Z

    .line 164
    invoke-interface {v0, v8}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v10

    if-nez v10, :cond_0

    .line 165
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    const-string v1, "preload error,make sure you have unitid"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 168
    :cond_0
    invoke-interface {v0, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    move-object v10, v8

    check-cast v10, Ljava/lang/String;

    add-int/lit8 v8, v12, 0x1

    const/16 v16, 0x2

    .line 169
    rem-int/lit8 v8, v8, 0x2

    .line 170
    sget-object v15, Lcom/mbridge/msdk/mbnative/controller/b;->e:Ljava/util/Map;

    move-object/from16 v17, v13

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-interface {v15, v8}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_1

    sget-object v8, Lcom/mbridge/msdk/mbnative/controller/b;->e:Ljava/util/Map;

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v13, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    invoke-interface {v8, v13}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v8

    if-nez v8, :cond_1

    .line 171
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    const-string v1, "An id can have only one AD form"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 174
    :cond_1
    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_2

    .line 175
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    const-string v1, "preload error,make sure you have correct unitid"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 178
    :cond_2
    invoke-interface {v0, v7}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_3

    .line 179
    invoke-interface {v0, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/Boolean;

    invoke-virtual {v7}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v7

    iput-boolean v7, v11, Lcom/mbridge/msdk/mbnative/controller/b;->v:Z

    .line 181
    :cond_3
    iget-object v7, v11, Lcom/mbridge/msdk/mbnative/controller/b;->l:Lcom/mbridge/msdk/click/b;

    if-nez v7, :cond_4

    .line 182
    new-instance v7, Lcom/mbridge/msdk/click/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v8

    invoke-direct {v7, v8, v10}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v7, v11, Lcom/mbridge/msdk/mbnative/controller/b;->l:Lcom/mbridge/msdk/click/b;

    goto :goto_0

    .line 184
    :cond_4
    iget-object v7, v11, Lcom/mbridge/msdk/mbnative/controller/b;->l:Lcom/mbridge/msdk/click/b;

    invoke-virtual {v7, v10}, Lcom/mbridge/msdk/click/b;->a(Ljava/lang/String;)V

    .line 186
    :goto_0
    invoke-interface {v0, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_5

    .line 187
    invoke-interface {v0, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Integer;

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    iput v6, v11, Lcom/mbridge/msdk/mbnative/controller/b;->p:I

    .line 189
    :cond_5
    invoke-interface {v0, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_6

    .line 190
    invoke-interface {v0, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    iput-object v5, v11, Lcom/mbridge/msdk/mbnative/controller/b;->n:Ljava/lang/String;

    .line 194
    :cond_6
    sget-object v5, Lcom/mbridge/msdk/mbnative/controller/b;->f:Ljava/util/Map;

    invoke-interface {v5, v10}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    const/4 v13, 0x1

    if-eqz v5, :cond_9

    sget-object v5, Lcom/mbridge/msdk/mbnative/controller/b;->f:Ljava/util/Map;

    invoke-interface {v5, v10}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/Boolean;

    invoke-virtual {v5}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v5

    if-eqz v5, :cond_9

    .line 2148
    sget-object v5, Lcom/mbridge/msdk/mbnative/controller/b;->e:Ljava/util/Map;

    .line 196
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v12}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v5, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/Map;

    .line 197
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v7

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v7

    if-eqz v6, :cond_9

    .line 199
    invoke-interface {v6}, Ljava/util/Map;->size()I

    move-result v8

    if-lez v8, :cond_9

    .line 200
    invoke-interface {v6}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v6

    .line 201
    invoke-interface {v6}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v6

    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Long;

    .line 202
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    if-nez v7, :cond_7

    .line 204
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v7

    invoke-virtual {v7}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v7

    .line 206
    :cond_7
    invoke-virtual {v7}, Lcom/mbridge/msdk/c/a;->ag()J

    move-result-wide v18

    const-wide/16 v20, 0x3e8

    mul-long v18, v18, v20

    .line 208
    invoke-virtual {v6}, Ljava/lang/Long;->longValue()J

    move-result-wide v6

    sub-long/2addr v8, v6

    cmp-long v6, v8, v18

    if-ltz v6, :cond_8

    .line 209
    invoke-interface {v5, v10}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    :cond_8
    if-ne v12, v13, :cond_9

    return-void

    .line 217
    :cond_9
    :goto_1
    sget-object v5, Lcom/mbridge/msdk/mbnative/controller/b;->f:Ljava/util/Map;

    invoke-static {v13}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v6

    invoke-interface {v5, v10, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 218
    iput v13, v11, Lcom/mbridge/msdk/mbnative/controller/b;->A:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4

    .line 221
    :try_start_1
    invoke-interface {v0, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_b

    .line 222
    invoke-interface {v0, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    iput v4, v11, Lcom/mbridge/msdk/mbnative/controller/b;->A:I

    if-ge v4, v13, :cond_a

    .line 224
    iput v13, v11, Lcom/mbridge/msdk/mbnative/controller/b;->A:I

    .line 226
    :cond_a
    iget v4, v11, Lcom/mbridge/msdk/mbnative/controller/b;->A:I

    const/16 v5, 0xa

    if-le v4, v5, :cond_b

    .line 227
    iput v5, v11, Lcom/mbridge/msdk/mbnative/controller/b;->A:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_2

    .line 231
    :catch_0
    :try_start_2
    sget-object v4, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    const-string v5, "ADNUM MUST BE INTEGER"

    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 233
    :cond_b
    :goto_2
    sget-object v4, Lcom/mbridge/msdk/mbnative/controller/b;->h:Ljava/util/Map;

    iget v5, v11, Lcom/mbridge/msdk/mbnative/controller/b;->A:I

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-interface {v4, v10, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 236
    invoke-interface {v0, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_c

    .line 237
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_c

    .line 239
    check-cast v3, Lcom/mbridge/msdk/out/PreloadListener;

    .line 240
    new-instance v4, Lcom/mbridge/msdk/b/a/a;

    invoke-direct {v4, v3}, Lcom/mbridge/msdk/b/a/a;-><init>(Lcom/mbridge/msdk/out/PreloadListener;)V

    move-object v9, v4

    goto :goto_3

    :cond_c
    const/4 v9, 0x0

    .line 246
    :goto_3
    invoke-interface {v0, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_d

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_d

    const-string v3, "key_word"

    .line 247
    invoke-interface {v0, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_d

    .line 248
    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 249
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    goto :goto_4

    :cond_d
    const/4 v1, 0x0

    const/4 v2, 0x0

    .line 3141
    :goto_4
    iget-object v3, v11, Lcom/mbridge/msdk/mbnative/controller/b;->k:Lcom/mbridge/msdk/c/c;

    if-nez v3, :cond_e

    .line 3142
    new-instance v3, Lcom/mbridge/msdk/c/c;

    invoke-direct {v3}, Lcom/mbridge/msdk/c/c;-><init>()V

    iput-object v3, v11, Lcom/mbridge/msdk/mbnative/controller/b;->k:Lcom/mbridge/msdk/c/c;

    .line 3144
    :cond_e
    iget-object v3, v11, Lcom/mbridge/msdk/mbnative/controller/b;->k:Lcom/mbridge/msdk/c/c;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v3, v4, v2, v1, v10}, Lcom/mbridge/msdk/c/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 253
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-virtual {v1, v2, v10}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v1

    iput-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    if-nez v1, :cond_f

    .line 256
    invoke-static {v10}, Lcom/mbridge/msdk/c/d;->d(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v1

    iput-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    .line 260
    :cond_f
    sget-object v1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_4

    const-string v8, ""

    if-eqz v1, :cond_11

    :try_start_3
    sget-object v1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_11

    .line 261
    sget-object v1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 262
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_10

    goto :goto_5

    :cond_10
    move-object/from16 v18, v1

    goto :goto_6

    :cond_11
    :goto_5
    move-object/from16 v18, v8

    .line 269
    :goto_6
    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/d;->r()Ljava/util/List;

    move-result-object v1

    iput-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->t:Ljava/util/List;

    .line 270
    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/d;->s()Ljava/util/List;

    move-result-object v1

    iput-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->c:Ljava/util/List;

    .line 271
    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/d;->s()Ljava/util/List;

    move-result-object v1

    iput-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->u:Ljava/util/List;

    .line 272
    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->t:Ljava/util/List;

    if-eqz v1, :cond_1d

    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->t:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1d

    .line 273
    new-instance v1, Ljava/util/LinkedList;

    invoke-direct {v1}, Ljava/util/LinkedList;-><init>()V

    iput-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->a:Ljava/util/Queue;

    .line 274
    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->t:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_7
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_12

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    .line 275
    iget-object v3, v11, Lcom/mbridge/msdk/mbnative/controller/b;->a:Ljava/util/Queue;

    invoke-interface {v3, v2}, Ljava/util/Queue;->add(Ljava/lang/Object;)Z

    goto :goto_7

    .line 283
    :cond_12
    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->u:Ljava/util/List;

    if-eqz v1, :cond_13

    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->u:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_13

    .line 284
    new-instance v1, Ljava/util/LinkedList;

    invoke-direct {v1}, Ljava/util/LinkedList;-><init>()V

    iput-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->b:Ljava/util/Queue;

    .line 285
    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->u:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_8
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_13

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    .line 286
    iget-object v3, v11, Lcom/mbridge/msdk/mbnative/controller/b;->b:Ljava/util/Queue;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v4, v2

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-interface {v3, v2}, Ljava/util/Queue;->add(Ljava/lang/Object;)Z

    goto :goto_8

    .line 290
    :cond_13
    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->t:Ljava/util/List;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_4

    if-eqz v1, :cond_15

    if-nez v12, :cond_15

    .line 293
    :try_start_4
    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->c:Ljava/util/List;

    iget-object v2, v11, Lcom/mbridge/msdk/mbnative/controller/b;->t:Ljava/util/List;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-interface {v2, v3}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v2

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    mul-int/lit16 v1, v1, 0x3e8

    int-to-long v3, v1

    const/4 v2, 0x1

    const/16 v19, 0x0

    move-object/from16 v1, p0

    move/from16 v5, p2

    move-object v6, v10

    move-object/from16 v7, v18

    move-object/from16 v22, v8

    move/from16 v8, v19

    move-object/from16 v19, v9

    move-object v15, v10

    move-object/from16 v10, p3

    .line 294
    :try_start_5
    invoke-direct/range {v1 .. v10}, Lcom/mbridge/msdk/mbnative/controller/b;->a(IJILjava/lang/String;Ljava/lang/String;ZLcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V

    .line 297
    invoke-static {v13}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v1

    if-eqz v1, :cond_14

    const/4 v2, 0x0

    .line 299
    invoke-virtual {v1, v15, v2}, Lcom/mbridge/msdk/mbnative/a/b;->b(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/List;

    if-eqz v1, :cond_14

    .line 300
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1

    if-lez v1, :cond_14

    move-object/from16 v6, v19

    const/4 v1, 0x0

    .line 301
    :try_start_6
    invoke-virtual {v11, v13, v6, v1}, Lcom/mbridge/msdk/mbnative/controller/b;->a(ZLcom/mbridge/msdk/b/a/a;Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3

    goto :goto_9

    :catch_1
    :cond_14
    move-object/from16 v6, v19

    goto :goto_9

    :catch_2
    :cond_15
    move-object/from16 v22, v8

    move-object v6, v9

    move-object v15, v10

    .line 308
    :catch_3
    :goto_9
    :try_start_7
    iget-object v3, v11, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    move-object/from16 v1, p0

    move/from16 v2, p2

    move-object v4, v15

    move-object/from16 v5, v18

    move-object/from16 v7, p3

    invoke-direct/range {v1 .. v7}, Lcom/mbridge/msdk/mbnative/controller/b;->a(ILcom/mbridge/msdk/c/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V

    .line 310
    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    if-eqz v1, :cond_16

    .line 311
    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/d;->v()I

    move-result v1

    iget v2, v11, Lcom/mbridge/msdk/mbnative/controller/b;->A:I

    mul-int/2addr v1, v2

    goto :goto_a

    :cond_16
    move v1, v13

    .line 3180
    :goto_a
    sget-object v2, Lcom/mbridge/msdk/mbnative/controller/b;->i:Ljava/util/Map;

    .line 313
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v2, v15, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_4

    :try_start_8
    const-string v1, "com.mbridge.msdk.nativex.view.MBMediaView"

    .line 315
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 316
    invoke-static {v14}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    .line 318
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v15}, Lcom/mbridge/msdk/mbnative/controller/c;->a(Landroid/content/Context;Ljava/lang/String;)V

    .line 320
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/x;->b()V

    .line 323
    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1f

    .line 325
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v1

    .line 326
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/db/f;->a()V

    move-object/from16 v1, v17

    .line 329
    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_17

    .line 330
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    goto :goto_b

    :cond_17
    const/4 v0, 0x0

    .line 332
    :goto_b
    invoke-direct {v11, v0}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Ljava/lang/String;)I

    move-result v0

    if-gtz v0, :cond_18

    .line 334
    iget v0, v11, Lcom/mbridge/msdk/mbnative/controller/b;->A:I

    .line 3393
    :cond_18
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    move-object/from16 v2, v22

    invoke-virtual {v1, v2, v15}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v1

    iput-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    if-nez v1, :cond_19

    .line 3395
    invoke-static {v15}, Lcom/mbridge/msdk/c/d;->d(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v1

    iput-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    .line 3397
    :cond_19
    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->m:Lcom/mbridge/msdk/c/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/d;->r()Ljava/util/List;

    move-result-object v1

    iput-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->t:Ljava/util/List;

    if-eqz v1, :cond_1a

    .line 3398
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1a

    iget-object v1, v11, Lcom/mbridge/msdk/mbnative/controller/b;->t:Ljava/util/List;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1a

    .line 3400
    invoke-static {v13}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v1

    if-eqz v1, :cond_1a

    .line 3402
    invoke-virtual {v1, v15, v0}, Lcom/mbridge/msdk/mbnative/a/b;->b(Ljava/lang/Object;I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;

    goto :goto_c

    :cond_1a
    const/4 v0, 0x0

    :goto_c
    if-eqz v0, :cond_1f

    .line 337
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x0

    .line 339
    :goto_d
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_1c

    .line 340
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 341
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1b

    .line 342
    invoke-interface {v1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1b
    add-int/lit8 v2, v2, 0x1

    goto :goto_d

    .line 346
    :cond_1c
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1f

    .line 347
    invoke-static {v14}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v2, "getInstance"

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Class;

    .line 348
    invoke-virtual {v0, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v4, v3, [Ljava/lang/Object;

    const/4 v3, 0x0

    .line 349
    invoke-virtual {v2, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    const-string v3, "com.mbridge.msdk.videocommon.listener.a"

    .line 350
    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    const-string v4, "createUnitCache"

    const/4 v5, 0x5

    new-array v6, v5, [Ljava/lang/Class;

    .line 351
    const-class v7, Landroid/content/Context;

    const/4 v8, 0x0

    aput-object v7, v6, v8

    const-class v7, Ljava/lang/String;

    aput-object v7, v6, v13

    const-class v7, Ljava/util/concurrent/CopyOnWriteArrayList;

    aput-object v7, v6, v16

    sget-object v7, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v8, 0x3

    aput-object v7, v6, v8

    const/4 v7, 0x4

    aput-object v3, v6, v7

    invoke-virtual {v0, v4, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    new-array v4, v5, [Ljava/lang/Object;

    .line 353
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v5

    const/4 v6, 0x0

    aput-object v5, v4, v6

    aput-object v15, v4, v13

    new-instance v5, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v5, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>(Ljava/util/Collection;)V

    aput-object v5, v4, v16

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v4, v8

    const/4 v1, 0x0

    aput-object v1, v4, v7

    invoke-virtual {v3, v2, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "load"

    new-array v3, v13, [Ljava/lang/Class;

    .line 355
    const-class v4, Ljava/lang/String;

    const/4 v5, 0x0

    aput-object v4, v3, v5

    invoke-virtual {v0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v1, v13, [Ljava/lang/Object;

    aput-object v15, v1, v5

    .line 356
    invoke-virtual {v0, v2, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    goto :goto_e

    .line 361
    :catchall_0
    :try_start_9
    sget-object v0, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    const-string v1, "init cam cache failed"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_e

    :cond_1d
    move-object v6, v9

    if-eqz v6, :cond_1e

    const-string v0, "don\'t have sorceList"

    .line 279
    invoke-virtual {v6, v0}, Lcom/mbridge/msdk/b/a/a;->onPreloadFaild(Ljava/lang/String;)V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_4

    :cond_1e
    return-void

    :catch_4
    move-exception v0

    .line 364
    sget-object v1, Lcom/mbridge/msdk/mbnative/controller/b;->d:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/b/a;->a(Ljava/lang/Exception;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1f
    :goto_e
    return-void
.end method

.method public final a(ZLcom/mbridge/msdk/b/a/a;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x1

    if-eqz p1, :cond_0

    if-eqz p2, :cond_1

    .line 1335
    invoke-virtual {p2}, Lcom/mbridge/msdk/b/a/a;->a()Z

    move-result p1

    if-nez p1, :cond_1

    .line 1336
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/b/a/a;->a(Z)V

    .line 1337
    invoke-virtual {p2}, Lcom/mbridge/msdk/b/a/a;->onPreloadSucceed()V

    goto :goto_0

    :cond_0
    if-eqz p2, :cond_1

    .line 1340
    invoke-virtual {p2}, Lcom/mbridge/msdk/b/a/a;->a()Z

    move-result p1

    if-nez p1, :cond_1

    .line 1341
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/b/a/a;->a(Z)V

    .line 1342
    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/b/a/a;->onPreloadFaild(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(ZLcom/mbridge/msdk/out/Campaign;)V
    .locals 2

    if-nez p2, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 1360
    invoke-virtual {p2}, Lcom/mbridge/msdk/out/Campaign;->getIconDrawable()Landroid/graphics/drawable/Drawable;

    move-result-object v1

    if-nez v1, :cond_1

    .line 1361
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/out/Campaign;->loadIconUrlAsyncWithBlock(Lcom/mbridge/msdk/out/OnImageLoadListener;)V

    :cond_1
    if-eqz p1, :cond_2

    .line 1363
    invoke-virtual {p2}, Lcom/mbridge/msdk/out/Campaign;->getBigDrawable()Landroid/graphics/drawable/Drawable;

    move-result-object p1

    if-nez p1, :cond_2

    .line 1364
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/out/Campaign;->loadImageUrlAsyncWithBlock(Lcom/mbridge/msdk/out/OnImageLoadListener;)V

    :cond_2
    return-void
.end method
