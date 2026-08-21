.class public Lcom/mbridge/msdk/reward/a/a;
.super Ljava/lang/Object;
.source "RewardVideoController.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/reward/a/a$b;,
        Lcom/mbridge/msdk/reward/a/a$a;,
        Lcom/mbridge/msdk/reward/a/a$c;,
        Lcom/mbridge/msdk/reward/a/a$d;
    }
.end annotation


# static fields
.field private static K:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private static L:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public static a:Ljava/lang/String;

.field public static b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/reward/a/a$d;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private A:Z

.field private B:Z

.field private C:Z

.field private D:Z

.field private E:Z

.field private F:Z

.field private G:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private H:Z

.field private final I:Ljava/lang/Object;

.field private J:Z

.field private M:Ljava/util/Queue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Queue<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private N:Ljava/lang/String;

.field private O:Lcom/mbridge/msdk/foundation/db/i;

.field private volatile P:Z

.field private volatile Q:Z

.field private volatile R:Z

.field private volatile S:Z

.field private volatile T:Z

.field private volatile U:Z

.field private volatile V:Z

.field private W:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private X:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field volatile c:Z

.field volatile d:Z

.field volatile e:Z

.field volatile f:Z

.field volatile g:Z

.field private h:Landroid/content/Context;

.field private i:I

.field private j:Lcom/mbridge/msdk/reward/adapter/d;

.field private k:Lcom/mbridge/msdk/videocommon/d/c;

.field private l:Lcom/mbridge/msdk/videocommon/d/a;

.field private volatile m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

.field private volatile n:Lcom/mbridge/msdk/reward/a/a$c;

.field private o:Ljava/lang/String;

.field private p:Ljava/lang/String;

.field private q:Lcom/mbridge/msdk/out/MBridgeIds;

.field private r:Ljava/lang/String;

.field private volatile s:Ljava/lang/String;

.field private t:Ljava/lang/String;

.field private u:I

.field private v:Landroid/os/Handler;

.field private w:I

.field private x:I

.field private y:I

.field private z:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 132
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/reward/a/a;->K:Ljava/util/concurrent/ConcurrentHashMap;

    .line 134
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/reward/a/a;->L:Ljava/util/concurrent/ConcurrentHashMap;

    .line 139
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/reward/a/a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    .line 302
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 91
    iput v0, p0, Lcom/mbridge/msdk/reward/a/a;->u:I

    const/4 v1, 0x2

    .line 93
    iput v1, p0, Lcom/mbridge/msdk/reward/a/a;->w:I

    .line 104
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    .line 105
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    .line 107
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->C:Z

    .line 108
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->D:Z

    .line 111
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->F:Z

    .line 121
    new-instance v1, Ljava/util/ArrayList;

    const/4 v2, 0x7

    invoke-direct {v1, v2}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->G:Ljava/util/ArrayList;

    .line 123
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->H:Z

    .line 124
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->I:Ljava/lang/Object;

    .line 125
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->J:Z

    const/4 v1, 0x0

    .line 815
    iput-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->O:Lcom/mbridge/msdk/foundation/db/i;

    const/4 v1, 0x1

    .line 915
    iput-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->P:Z

    .line 916
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->Q:Z

    .line 1093
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->R:Z

    .line 1094
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->S:Z

    .line 1095
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->T:Z

    .line 1096
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->U:Z

    .line 1097
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->V:Z

    .line 1329
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->c:Z

    .line 1330
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->d:Z

    .line 1331
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->e:Z

    .line 1332
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->f:Z

    .line 1333
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->g:Z

    .line 303
    new-instance v0, Lcom/mbridge/msdk/reward/a/a$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/reward/a/a$1;-><init>(Lcom/mbridge/msdk/reward/a/a;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->v:Landroid/os/Handler;

    return-void
.end method

.method public static a(Ljava/lang/String;)I
    .locals 1

    .line 216
    :try_start_0
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/mbridge/msdk/reward/a/a;->K:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/mbridge/msdk/reward/a/a;->K:Ljava/util/concurrent/ConcurrentHashMap;

    .line 217
    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 218
    sget-object v0, Lcom/mbridge/msdk/reward/a/a;->K:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    if-eqz p0, :cond_0

    .line 220
    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 224
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/foundation/db/i;)Lcom/mbridge/msdk/foundation/db/i;
    .locals 0

    .line 69
    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->O:Lcom/mbridge/msdk/foundation/db/i;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object p0
.end method

.method private a(Ljava/lang/String;Ljava/util/List;)Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    .line 1259
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    .line 1260
    new-instance v1, Ljava/util/LinkedHashMap;

    invoke-direct {v1}, Ljava/util/LinkedHashMap;-><init>()V

    .line 1261
    new-instance v2, Ljava/util/LinkedHashMap;

    invoke-direct {v2}, Ljava/util/LinkedHashMap;-><init>()V

    if-eqz p2, :cond_6

    .line 1264
    :try_start_0
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_6

    .line 1265
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    const/4 v3, 0x1

    move v4, v3

    :cond_0
    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_5

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v5, :cond_0

    .line 1267
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVcn()I

    move-result v6

    if-le v6, v4, :cond_1

    .line 1268
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVcn()I

    move-result v4

    .line 1270
    :cond_1
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTokenRule()I

    move-result v6

    if-ne v6, v3, :cond_3

    .line 1271
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v6

    .line 1272
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_0

    .line 1273
    invoke-interface {v1, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    .line 1274
    invoke-interface {v1, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/List;

    invoke-interface {v6, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 1276
    :cond_2
    new-instance v7, Ljava/util/ArrayList;

    invoke-direct {v7}, Ljava/util/ArrayList;-><init>()V

    .line 1277
    invoke-interface {v7, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1278
    invoke-interface {v1, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 1282
    :cond_3
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v6

    .line 1283
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_0

    .line 1284
    invoke-interface {v2, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_4

    .line 1285
    invoke-interface {v2, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/List;

    invoke-interface {v6, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 1287
    :cond_4
    new-instance v7, Ljava/util/ArrayList;

    invoke-direct {v7}, Ljava/util/ArrayList;-><init>()V

    .line 1288
    invoke-interface {v7, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1289
    invoke-interface {v2, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 1295
    :cond_5
    invoke-interface {v2}, Ljava/util/Map;->size()I

    move-result p2

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v2

    add-int/2addr p2, v2

    if-lt p2, v4, :cond_6

    .line 1297
    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result p2

    if-lez p2, :cond_6

    .line 1298
    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p2

    if-eqz p2, :cond_6

    .line 1299
    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    if-eqz p2, :cond_6

    .line 1300
    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    if-eqz p2, :cond_6

    .line 1301
    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/util/Map$Entry;

    invoke-interface {p2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object p2

    if-eqz p2, :cond_6

    .line 1302
    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/util/Map$Entry;

    invoke-interface {p2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/util/Collection;

    invoke-virtual {v0, p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->addAll(Ljava/util/Collection;)Z

    .line 1303
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-static {p2, p1, v4}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Ljava/lang/String;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 1308
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_6
    :goto_1
    return-object v0
.end method

.method private a(IIZLjava/lang/String;)V
    .locals 10

    :try_start_0
    const-string v0, "RewardVideoController"

    .line 2125
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u5f00\u59cb\u4ece SOURCE_MBAPI \u8bf7\u6c42\u65b0\u7684 offer: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2126
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/reward/adapter/d;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 2127
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/mbridge/msdk/reward/adapter/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    .line 2128
    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Z)V

    .line 2129
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->b(Z)V

    .line 2131
    :cond_1
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    if-eqz v0, :cond_2

    .line 2132
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget v1, p0, Lcom/mbridge/msdk/reward/a/a;->x:I

    iget v2, p0, Lcom/mbridge/msdk/reward/a/a;->y:I

    iget v3, p0, Lcom/mbridge/msdk/reward/a/a;->z:I

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/reward/adapter/d;->a(III)V

    .line 2134
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget v1, p0, Lcom/mbridge/msdk/reward/a/a;->w:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(I)V

    .line 2135
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/videocommon/d/c;)V

    .line 2136
    new-instance v0, Lcom/mbridge/msdk/reward/a/a$a;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-direct {v0, p0, v1, p1, p3}, Lcom/mbridge/msdk/reward/a/a$a;-><init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/reward/adapter/d;IZ)V

    .line 2137
    new-instance v1, Lcom/mbridge/msdk/reward/a/a$b;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-direct {v1, p0, v2, p3}, Lcom/mbridge/msdk/reward/a/a$b;-><init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/reward/adapter/a;Z)V

    .line 2139
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/reward/a/a$b;->a(Ljava/lang/Runnable;)V

    .line 2140
    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/reward/adapter/b;)V

    .line 2141
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->v:Landroid/os/Handler;

    mul-int/lit16 v2, p2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {v1, v0, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 2142
    iget-object v4, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v9, p0, Lcom/mbridge/msdk/reward/a/a;->F:Z

    move v5, p1

    move v6, p2

    move v7, p3

    move-object v8, p4

    invoke-virtual/range {v4 .. v9}, Lcom/mbridge/msdk/reward/adapter/d;->a(IIZLjava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2144
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p2, :cond_3

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p2

    if-lez p2, :cond_3

    .line 2145
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    const/4 p3, 0x0

    invoke-virtual {p2, p3}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object p2

    move-object v1, p2

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    iget-boolean v4, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    const-string v5, ""

    const-string v6, ""

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/reward/b/a;->b(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 2147
    :cond_3
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/a/a;->c(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/a/a;Ljava/lang/String;)V
    .locals 0

    .line 69
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/a/a;->c(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/a/a;Ljava/lang/String;Ljava/util/List;)V
    .locals 2

    const-string v0, "RewardVideoController"

    if-eqz p2, :cond_0

    .line 9291
    :try_start_0
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/a/a;->S:Z

    if-nez p0, :cond_0

    .line 9292
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6807\u8bb0\u7f13\u5b58\u6570\u636e \uff1a "

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 9294
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object p0

    invoke-virtual {p0, p2, p1}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/util/List;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 9297
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public static a(Ljava/lang/String;I)V
    .locals 1

    .line 201
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/reward/a/a;->K:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 202
    sget-object v0, Lcom/mbridge/msdk/reward/a/a;->K:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {v0, p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 205
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 232
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 235
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 238
    :cond_1
    sget-object v0, Lcom/mbridge/msdk/reward/a/a;->L:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_2

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 239
    sget-object v0, Lcom/mbridge/msdk/reward/a/a;->L:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    return-void
.end method

.method private a(Ljava/util/Queue;ZLjava/lang/String;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Queue<",
            "Ljava/lang/Integer;",
            ">;Z",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    const/16 v0, 0x8

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz p1, :cond_0

    .line 2082
    :try_start_0
    invoke-interface {p1}, Ljava/util/Queue;->size()I

    move-result v3

    if-lez v3, :cond_0

    .line 2083
    invoke-interface {p1}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    goto :goto_1

    .line 2086
    :cond_0
    :goto_0
    :try_start_1
    invoke-direct {p0, v1, v0, p2, p3}, Lcom/mbridge/msdk/reward/a/a;->a(IIZLjava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto/16 :goto_2

    :catch_1
    move-exception p1

    .line 2088
    :try_start_2
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    const-string p3, "load mv api error:"

    if-eqz p2, :cond_1

    :try_start_3
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p2

    if-lez p2, :cond_1

    .line 2089
    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object p2

    move-object v4, p2

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    iget-object v6, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    iget-boolean v7, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    const-string v8, ""

    const-string v9, ""

    invoke-static/range {v3 .. v9}, Lcom/mbridge/msdk/reward/b/a;->b(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 2092
    :cond_1
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/a/a;->c(Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_2

    .line 2097
    :goto_1
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p2, :cond_2

    invoke-virtual {p2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p2

    if-lez p2, :cond_2

    .line 2098
    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p2, v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object p2

    move-object v4, p2

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    iget-boolean v7, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    const-string v5, "can\'t show because unknow error"

    const-string v8, ""

    const-string v9, ""

    invoke-static/range {v3 .. v9}, Lcom/mbridge/msdk/reward/b/a;->b(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    :cond_2
    const-string p2, "can\'t show because unknow error"

    .line 2102
    invoke-direct {p0, p2}, Lcom/mbridge/msdk/reward/a/a;->c(Ljava/lang/String;)V

    .line 2103
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_3

    .line 2104
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_2
    return-void
.end method

.method private a(Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/mbridge/msdk/reward/adapter/d;)V
    .locals 22
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;",
            "Lcom/mbridge/msdk/reward/adapter/d;",
            ")V"
        }
    .end annotation

    move-object/from16 v7, p0

    const/4 v0, 0x0

    move-object/from16 v6, p1

    .line 1336
    invoke-virtual {v6, v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    move-object v15, v1

    check-cast v15, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1337
    invoke-virtual {v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    xor-int/lit8 v14, v1, 0x1

    .line 1338
    invoke-virtual {v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNscpt()I

    move-result v13

    .line 1339
    iput-boolean v0, v7, Lcom/mbridge/msdk/reward/a/a;->c:Z

    .line 1340
    iput-boolean v0, v7, Lcom/mbridge/msdk/reward/a/a;->d:Z

    .line 1341
    iput-boolean v0, v7, Lcom/mbridge/msdk/reward/a/a;->e:Z

    .line 1342
    iput-boolean v0, v7, Lcom/mbridge/msdk/reward/a/a;->f:Z

    .line 1343
    iput-boolean v0, v7, Lcom/mbridge/msdk/reward/a/a;->g:Z

    .line 1346
    invoke-static {}, Lcom/mbridge/msdk/reward/adapter/c;->a()Lcom/mbridge/msdk/reward/adapter/c;

    move-result-object v8

    iget-object v9, v7, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-boolean v12, v7, Lcom/mbridge/msdk/reward/a/a;->B:Z

    iget-boolean v0, v7, Lcom/mbridge/msdk/reward/a/a;->A:Z

    if-eqz v0, :cond_0

    const/16 v0, 0x11f

    goto :goto_0

    :cond_0
    const/16 v0, 0x5e

    :goto_0
    move/from16 v16, v0

    iget-object v11, v7, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    iget-object v10, v7, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    .line 1348
    invoke-virtual {v15}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v17

    new-instance v18, Lcom/mbridge/msdk/reward/a/a$4;

    move-object/from16 v0, v18

    move-object/from16 v1, p0

    move v2, v14

    move-object v3, v15

    move-object/from16 v4, p2

    move v5, v13

    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/reward/a/a$4;-><init>(Lcom/mbridge/msdk/reward/a/a;ZLcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/reward/adapter/d;I)V

    new-instance v0, Lcom/mbridge/msdk/reward/a/a$5;

    invoke-direct {v0, v7, v14, v15, v13}, Lcom/mbridge/msdk/reward/a/a$5;-><init>(Lcom/mbridge/msdk/reward/a/a;ZLcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    move-object v1, v10

    move v10, v14

    move-object v2, v11

    move v11, v13

    move/from16 v20, v13

    move/from16 v13, v16

    move v5, v14

    move-object v14, v2

    move-object/from16 v21, v15

    move-object v15, v1

    move-object/from16 v16, v17

    move-object/from16 v17, p1

    move-object/from16 v19, v0

    .line 1346
    invoke-virtual/range {v8 .. v19}, Lcom/mbridge/msdk/reward/adapter/c;->a(Landroid/content/Context;ZIZILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/mbridge/msdk/reward/adapter/c$c;Lcom/mbridge/msdk/reward/adapter/c$i;)V

    if-eqz v5, :cond_1

    .line 1551
    invoke-static {}, Lcom/mbridge/msdk/reward/adapter/c;->a()Lcom/mbridge/msdk/reward/adapter/c;

    move-result-object v8

    iget-object v9, v7, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object v11, v7, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    iget-object v12, v7, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual/range {v21 .. v21}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v13

    new-instance v14, Lcom/mbridge/msdk/reward/a/a$6;

    move-object v0, v14

    move-object/from16 v1, p0

    move-object/from16 v2, v21

    move-object/from16 v3, p1

    move-object/from16 v4, p2

    move/from16 v6, v20

    invoke-direct/range {v0 .. v6}, Lcom/mbridge/msdk/reward/a/a$6;-><init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/mbridge/msdk/reward/adapter/d;ZI)V

    move-object/from16 v10, v21

    invoke-virtual/range {v8 .. v14}, Lcom/mbridge/msdk/reward/adapter/c;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/reward/adapter/c$i;)V

    :cond_1
    return-void
.end method

.method private a(Ljava/util/concurrent/CopyOnWriteArrayList;Ljava/lang/String;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    if-eqz p1, :cond_1

    .line 1240
    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_1

    const/4 v0, 0x1

    .line 1241
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->V:Z

    .line 1242
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    iget-boolean v2, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/reward/a/a$c;->a(Z)V

    .line 1243
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-static {v1, v2, v3}, Lcom/mbridge/msdk/reward/a/a$c;->c(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x0

    .line 1244
    invoke-virtual {p1, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1246
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1247
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz p2, :cond_0

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    xor-int/2addr v0, v2

    .line 1248
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNscpt()I

    move-result v1

    .line 1247
    invoke-virtual {p2, p1, v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;ZI)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 1250
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    const-wide/16 v1, 0x0

    invoke-static {p1, p2, v0, v1, v2}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V

    .line 1251
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-static {p1, p2, v0}, Lcom/mbridge/msdk/reward/a/a$c;->b(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1253
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/mbridge/msdk/reward/adapter/d;)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/a/a;Z)Z
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->J:Z

    return p1
.end method

.method private a(Ljava/util/List;Ljava/lang/String;)Z
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/c;",
            ">;",
            "Ljava/lang/String;",
            ")Z"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 2368
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/c;

    if-eqz v1, :cond_1

    .line 2369
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/c;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 2370
    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/c;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/lang/String;)V

    .line 2371
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/reward/adapter/d;->b()Z

    move-result v1

    if-eqz v1, :cond_1

    const/4 v0, 0x1

    :cond_2
    return v0
.end method

.method static synthetic b(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/List;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->X:Ljava/util/List;

    return-object p0
.end method

.method private b(Ljava/lang/String;Ljava/util/List;)Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)",
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    .line 1315
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    if-eqz p2, :cond_1

    .line 1316
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 1317
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_0
    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_0

    .line 1318
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getBidToken()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 1319
    invoke-virtual {v0, v1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private b(ZLjava/lang/String;)V
    .locals 8

    .line 1100
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz v0, :cond_12

    .line 1101
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    const/4 v1, 0x1

    const-string v2, "checkOverCap failed"

    const/4 v3, 0x0

    const-string v4, "RewardVideoController"

    if-nez v0, :cond_c

    .line 1102
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/reward/a/a;->b(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->V:Z

    .line 1103
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->V:Z

    if-eqz v0, :cond_6

    .line 1104
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u672c\u5730\u5b58\u5728\u53ef\u7528\u7684\u7f13\u5b58: "

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v5}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " \u6761"

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "\u672c\u5730\u5b58\u5728\u53ef\u7528\u7684\u7f13\u5b58\uff0c\u975e BID Campaign"

    .line 1105
    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1106
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->j()Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "\u672c\u5730\u5b58\u5728\u53ef\u7528\u7684\u7f13\u5b58\uff0c\u6ca1\u6709\u8d85\u8fc7\u4e0a\u9650\uff0c\u5e76\u9884\u52a0\u8f7d\u5404\u79cd\u8d44\u6e90"

    .line 1107
    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1109
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_12

    .line 1110
    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v2

    if-lez v2, :cond_12

    .line 1111
    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    iget-object v5, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    iget-object v6, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-static {v2, v5, v6}, Lcom/mbridge/msdk/reward/a/a$c;->c(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "\u975eBID\uff0c\u672c\u5730\u5b58\u5728\u53ef\u7528\u7684\u7f13\u5b58\uff0c\u6ca1\u6709\u8d85\u8fc7\u4e0a\u9650\uff0c\u56de\u8c03 onCampaignLoadSuccess\uff0c\u5f00\u59cb\u9884\u52a0\u8f7d\u8d44\u6e90"

    .line 1112
    invoke-static {v4, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1114
    invoke-virtual {v0, v3}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1115
    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    iget-boolean v4, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/reward/a/a$c;->a(Z)V

    .line 1116
    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz v3, :cond_0

    .line 1117
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    xor-int/2addr v1, v4

    .line 1118
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNscpt()I

    move-result v2

    .line 1116
    invoke-virtual {v3, v0, v1, v2}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;ZI)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1119
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    const-wide/16 v3, 0x0

    invoke-static {v0, v1, v2, v3, v4}, Lcom/mbridge/msdk/reward/b/a;->a(Landroid/content/Context;Ljava/util/List;Ljava/lang/String;J)V

    .line 1120
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/reward/a/a$c;->b(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 1122
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/concurrent/CopyOnWriteArrayList;Lcom/mbridge/msdk/reward/adapter/d;)V

    .line 1124
    :goto_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->P:Z

    if-eqz v0, :cond_12

    .line 1125
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz v0, :cond_1

    .line 1126
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;)V

    .line 1128
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->M:Ljava/util/Queue;

    invoke-direct {p0, v0, p1, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/Queue;ZLjava/lang/String;)V

    goto/16 :goto_2

    :cond_2
    const-string v0, "\u975eBID\uff0c\u672c\u5730\u5b58\u5728\u53ef\u7528\u7684\u7f13\u5b58\uff0c\u8d85\u8fc7\u4e0a\u9650"

    .line 1134
    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1135
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_3

    .line 1136
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1137
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v4, v1, v5}, Lcom/mbridge/msdk/videocommon/a/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    goto :goto_1

    :cond_3
    if-eqz p1, :cond_5

    .line 1143
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz p1, :cond_4

    .line 1144
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {p1, v2}, Lcom/mbridge/msdk/reward/a/a$c;->c(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    :cond_4
    return-void

    .line 1148
    :cond_5
    iput-boolean v3, p0, Lcom/mbridge/msdk/reward/a/a;->V:Z

    .line 1149
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Z)V

    .line 1150
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->M:Ljava/util/Queue;

    invoke-direct {p0, v0, p1, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/Queue;ZLjava/lang/String;)V

    goto/16 :goto_2

    :cond_6
    const-string v0, "\u975eBID\uff0c\u4e0d\u5b58\u5728\u53ef\u7528\u7684\u7f13\u5b58"

    .line 1154
    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1155
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->j()Z

    move-result v0

    if-nez v0, :cond_8

    .line 1156
    iput-boolean v3, p0, Lcom/mbridge/msdk/reward/a/a;->V:Z

    .line 1157
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz v0, :cond_7

    .line 1158
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;)V

    .line 1160
    :cond_7
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Z)V

    .line 1161
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->M:Ljava/util/Queue;

    invoke-direct {p0, v0, p1, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/Queue;ZLjava/lang/String;)V

    goto/16 :goto_2

    :cond_8
    if-eqz p1, :cond_a

    .line 1164
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz p1, :cond_9

    .line 1165
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {p1, v2}, Lcom/mbridge/msdk/reward/a/a$c;->c(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    :cond_9
    return-void

    .line 1169
    :cond_a
    iput-boolean v3, p0, Lcom/mbridge/msdk/reward/a/a;->V:Z

    .line 1170
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz v0, :cond_b

    .line 1171
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;)V

    .line 1173
    :cond_b
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Z)V

    .line 1174
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->M:Ljava/util/Queue;

    invoke-direct {p0, v0, p1, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/Queue;ZLjava/lang/String;)V

    goto/16 :goto_2

    .line 1180
    :cond_c
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    iget-object v5, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    iget-boolean v6, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    const-string v7, ""

    invoke-virtual {v0, v5, v1, v6, v7}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;IZLjava/lang/String;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    const-string v1, "HBOPTIMIZE"

    if-eqz v0, :cond_10

    .line 1183
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v5

    if-lez v5, :cond_10

    const-string v5, "\u6267\u884c\u5b58\u5728\u7f13\u5b58\u903b\u8f91"

    .line 1184
    invoke-static {v1, v5}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string v5, "BID\uff0c\u672c\u5730\u5b58\u5728\u53ef\u7528\u7684\u7f13\u5b58"

    .line 1185
    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1186
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->j()Z

    move-result v5

    if-nez v5, :cond_f

    .line 1188
    invoke-direct {p0, p2, v0}, Lcom/mbridge/msdk/reward/a/a;->b(Ljava/lang/String;Ljava/util/List;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    if-eqz v2, :cond_d

    .line 1189
    invoke-virtual {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v4

    if-lez v4, :cond_d

    const-string p1, "\u6267\u884c BidToken \u5b58\u5728\u903b\u8f91"

    .line 1190
    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1191
    invoke-direct {p0, v2, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/concurrent/CopyOnWriteArrayList;Ljava/lang/String;)V

    return-void

    .line 1195
    :cond_d
    invoke-direct {p0, p2, v0}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/util/List;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    if-eqz v0, :cond_e

    .line 1196
    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v2

    if-lez v2, :cond_e

    .line 1197
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u9700\u8981\u88ab\u66ff\u6362Offer\u7684 bidToken "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1198
    invoke-direct {p0, v0, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/concurrent/CopyOnWriteArrayList;Ljava/lang/String;)V

    .line 1200
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/db/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/b;

    move-result-object v2

    invoke-virtual {v2, p2, v0}, Lcom/mbridge/msdk/foundation/db/b;->a(Ljava/lang/String;Ljava/util/List;)V

    .line 1201
    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz v2, :cond_e

    .line 1202
    invoke-virtual {v2, v0}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/util/List;)V

    .line 1205
    :cond_e
    iput-boolean v3, p0, Lcom/mbridge/msdk/reward/a/a;->V:Z

    .line 1206
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    iget-boolean v2, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/reward/a/a$c;->a(Z)V

    const-string v0, "\u6267\u884ctokenRule \u4e3a 1 \u7ee7\u7eed\u8bf7\u6c42\u903b\u8f91"

    .line 1207
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1208
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->M:Ljava/util/Queue;

    invoke-direct {p0, v0, p1, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/Queue;ZLjava/lang/String;)V

    goto :goto_2

    :cond_f
    const-string v0, "BID\uff0c\u672c\u5730\u5b58\u5728\u53ef\u7528\u7684\u7f13\u5b58\uff0c\u8d85\u8fc7\u4e0a\u9650"

    .line 1210
    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1211
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v0, v1, p2}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_12

    .line 1213
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz p1, :cond_12

    .line 1214
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {p1, v2}, Lcom/mbridge/msdk/reward/a/a$c;->c(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    goto :goto_2

    :cond_10
    const-string v0, "BID\uff0c\u4e0d\u5b58\u5728\u53ef\u7528\u7684\u7f13\u5b58"

    .line 1220
    invoke-static {v4, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "\u6267\u884c \u65e0\u53ef\u7528\u7f13\u5b58\u903b\u8f91"

    .line 1221
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1222
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->j()Z

    move-result v0

    if-nez v0, :cond_11

    .line 1223
    iput-boolean v3, p0, Lcom/mbridge/msdk/reward/a/a;->V:Z

    .line 1224
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Z)V

    .line 1225
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->M:Ljava/util/Queue;

    invoke-direct {p0, v0, p1, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/Queue;ZLjava/lang/String;)V

    goto :goto_2

    .line 1227
    :cond_11
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v0, v1, p2}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_12

    .line 1229
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz p1, :cond_12

    .line 1230
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {p1, v2}, Lcom/mbridge/msdk/reward/a/a$c;->c(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    :cond_12
    :goto_2
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/reward/a/a;Z)Z
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->H:Z

    return p1
.end method

.method private b(Ljava/lang/String;)Z
    .locals 6

    .line 1628
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/reward/adapter/d;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 1629
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    invoke-direct {v0, v1, v2, p1}, Lcom/mbridge/msdk/reward/adapter/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    .line 1630
    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Z)V

    .line 1631
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->b(Z)V

    .line 1633
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget v1, p0, Lcom/mbridge/msdk/reward/a/a;->w:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(I)V

    .line 1634
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/videocommon/d/c;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 1641
    :catch_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    const/4 v2, 0x1

    invoke-virtual {v0, p1, v2, v1}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;IZ)Ljava/util/List;

    move-result-object v0

    .line 1644
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u5f53\u524d\u53ef\u7528\u7684\u7f13\u5b58\u6570\u636e\uff1a "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x0

    if-nez v0, :cond_2

    move v4, v3

    goto :goto_0

    :cond_2
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v4

    :goto_0
    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v4, "RewardVideoController"

    invoke-static {v4, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1645
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v1

    iget-boolean v5, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    invoke-virtual {v1, p1, v2, v5}, Lcom/mbridge/msdk/videocommon/a/a;->b(Ljava/lang/String;IZ)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->X:Ljava/util/List;

    .line 1646
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f53\u524d\u5168\u90e8\u7684\u7f13\u5b58\u6570\u636e\uff1a "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->X:Ljava/util/List;

    if-nez v1, :cond_3

    move v1, v3

    goto :goto_1

    :cond_3
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    :goto_1
    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_5

    .line 1647
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_5

    .line 1648
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-nez p1, :cond_4

    .line 1649
    new-instance p1, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    goto :goto_2

    .line 1651
    :cond_4
    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    .line 1653
    :goto_2
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {p1, v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->addAll(Ljava/util/Collection;)Z

    return v2

    .line 1656
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz p1, :cond_6

    .line 1657
    invoke-virtual {p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->clear()V

    :cond_6
    return v3
.end method

.method static synthetic c(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/adapter/d;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    return-object p0
.end method

.method private c()V
    .locals 2

    .line 889
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v0

    .line 890
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/f;->a(Ljava/lang/String;)V

    return-void
.end method

.method private c(Ljava/lang/String;)V
    .locals 1

    .line 2111
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 2112
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->U:Z

    .line 2113
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/reward/a/a;Z)Z
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->R:Z

    return p1
.end method

.method static synthetic d(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/reward/a/a$c;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    return-object p0
.end method

.method private d()V
    .locals 5

    const-string v0, "_"

    .line 895
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/db/f;->b(Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 896
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_2

    .line 897
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 898
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 899
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 900
    invoke-static {v3}, Lcom/mbridge/msdk/videocommon/a;->b(Ljava/lang/String;)V

    .line 901
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 902
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 903
    invoke-static {v2}, Lcom/mbridge/msdk/videocommon/a;->b(Ljava/lang/String;)V

    goto/16 :goto_0

    .line 906
    :cond_1
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdType()I

    move-result v3

    invoke-static {v3, v2}, Lcom/mbridge/msdk/videocommon/a;->b(ILcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_0

    :catch_0
    :cond_2
    return-void
.end method

.method private d(Ljava/lang/String;)V
    .locals 14

    const-string v0, ""

    const-string v1, "1"

    const-string v2, "_"

    const-string v3, "RewardVideoController"

    const/4 v4, 0x3

    const/4 v5, 0x4

    const/4 v6, 0x1

    const/4 v7, 0x0

    .line 2199
    :try_start_0
    iget-object v8, p0, Lcom/mbridge/msdk/reward/a/a;->l:Lcom/mbridge/msdk/videocommon/d/a;

    if-eqz v8, :cond_0

    .line 2200
    iget-object v8, p0, Lcom/mbridge/msdk/reward/a/a;->l:Lcom/mbridge/msdk/videocommon/d/a;

    invoke-virtual {v8}, Lcom/mbridge/msdk/videocommon/d/a;->i()Ljava/util/Map;

    move-result-object v8

    if-eqz v8, :cond_0

    .line 2201
    invoke-interface {v8, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_0

    .line 2202
    invoke-interface {v8, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v7

    .line 2205
    :goto_0
    iget-object v8, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v10, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-static {v8, v9, v10}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    if-eqz v8, :cond_1

    .line 2206
    iget-object v8, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v10, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    invoke-static {v8, v9, v10}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/Integer;

    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v8

    iput v8, p0, Lcom/mbridge/msdk/reward/a/a;->i:I

    .line 2209
    :cond_1
    iget-object v8, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-nez v8, :cond_2

    .line 2210
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->i()V

    .line 2212
    :cond_2
    iget-object v8, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz v8, :cond_7

    const-string v8, "controller 819"

    .line 2213
    invoke-static {v3, v8}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2215
    iget-boolean v8, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    if-eqz v8, :cond_3

    .line 2216
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->g()Z

    move-result v8

    goto :goto_1

    .line 2218
    :cond_3
    iget-object v8, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v8}, Lcom/mbridge/msdk/reward/adapter/d;->b()Z

    move-result v8

    :goto_1
    if-eqz v8, :cond_5

    .line 2221
    iget v2, p0, Lcom/mbridge/msdk/reward/a/a;->i:I

    if-lt v2, v1, :cond_4

    if-lez v1, :cond_4

    .line 2222
    iput-boolean v7, p0, Lcom/mbridge/msdk/reward/a/a;->J:Z

    return-void

    :cond_4
    const-string v1, "invoke adapter show isReady"

    .line 2225
    invoke-static {v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2226
    new-instance v1, Lcom/mbridge/msdk/reward/a/a$d;

    iget-object v12, p0, Lcom/mbridge/msdk/reward/a/a;->v:Landroid/os/Handler;

    const/4 v13, 0x0

    const/4 v11, 0x1

    move-object v8, v1

    move-object v9, p0

    move-object v10, p0

    invoke-direct/range {v8 .. v13}, Lcom/mbridge/msdk/reward/a/a$d;-><init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/reward/a/a;ILandroid/os/Handler;Lcom/mbridge/msdk/reward/a/a$1;)V

    .line 2227
    sget-object v2, Lcom/mbridge/msdk/reward/a/a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v2, v8, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2228
    iget-object v8, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v11, p0, Lcom/mbridge/msdk/reward/a/a;->o:Ljava/lang/String;

    iget v12, p0, Lcom/mbridge/msdk/reward/a/a;->w:I

    iget-object v13, p0, Lcom/mbridge/msdk/reward/a/a;->r:Ljava/lang/String;

    move-object v9, v1

    move-object v10, p1

    invoke-virtual/range {v8 .. v13}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/video/bt/module/b/h;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    return-void

    .line 2232
    :cond_5
    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    if-eqz v1, :cond_6

    .line 2233
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->h()Z

    move-result v1

    goto :goto_2

    .line 2235
    :cond_6
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/reward/adapter/d;->c()Z

    move-result v1

    :goto_2
    if-eqz v1, :cond_7

    const-string v1, "invoke adapter show isSpareOfferReady"

    .line 2238
    invoke-static {v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 2239
    new-instance v1, Lcom/mbridge/msdk/reward/a/a$d;

    iget-object v12, p0, Lcom/mbridge/msdk/reward/a/a;->v:Landroid/os/Handler;

    const/4 v13, 0x0

    const/4 v11, 0x1

    move-object v8, v1

    move-object v9, p0

    move-object v10, p0

    invoke-direct/range {v8 .. v13}, Lcom/mbridge/msdk/reward/a/a$d;-><init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/reward/a/a;ILandroid/os/Handler;Lcom/mbridge/msdk/reward/a/a$1;)V

    .line 2240
    sget-object v2, Lcom/mbridge/msdk/reward/a/a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v8, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v2, v8, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2241
    iget-object v8, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v11, p0, Lcom/mbridge/msdk/reward/a/a;->o:Ljava/lang/String;

    iget v12, p0, Lcom/mbridge/msdk/reward/a/a;->w:I

    iget-object v13, p0, Lcom/mbridge/msdk/reward/a/a;->r:Ljava/lang/String;

    move-object v9, v1

    move-object v10, p1

    invoke-virtual/range {v8 .. v13}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/video/bt/module/b/h;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    return-void

    .line 2246
    :cond_7
    iget v1, p0, Lcom/mbridge/msdk/reward/a/a;->i:I

    if-eqz v1, :cond_8

    .line 2247
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v9, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-static {v1, v2, v8}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 2249
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/a/a;->d(Ljava/lang/String;)V

    return-void

    .line 2252
    :cond_8
    iput-boolean v7, p0, Lcom/mbridge/msdk/reward/a/a;->J:Z

    .line 2253
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz p1, :cond_9

    .line 2255
    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->q:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v2, "can\'t show because load is failed"

    invoke-interface {p1, v1, v2}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_3

    :catch_0
    move-exception p1

    .line 2257
    :try_start_2
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_9

    .line 2258
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2262
    :cond_9
    :goto_3
    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    if-nez p1, :cond_d

    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    if-nez p1, :cond_d

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz p1, :cond_d

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p1, v5}, Lcom/mbridge/msdk/videocommon/d/c;->v(I)Z

    move-result p1

    if-eqz p1, :cond_d

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz p1, :cond_d

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    .line 2263
    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v6, :cond_d

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v4, :cond_d

    .line 2883
    invoke-virtual {p0, v7, v0}, Lcom/mbridge/msdk/reward/a/a;->a(ZLjava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_5

    :catch_1
    move-exception p1

    .line 2272
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_a

    .line 2273
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v3, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2275
    :cond_a
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    if-eqz v1, :cond_b

    .line 2277
    :try_start_3
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->q:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v3, "show exception"

    invoke-interface {v1, v2, v3}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    goto :goto_4

    .line 2279
    :catch_2
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_b

    .line 2280
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2284
    :cond_b
    :goto_4
    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    if-nez p1, :cond_c

    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    if-nez p1, :cond_c

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz p1, :cond_c

    invoke-virtual {p1, v5}, Lcom/mbridge/msdk/videocommon/d/c;->v(I)Z

    move-result p1

    if-eqz p1, :cond_c

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz p1, :cond_c

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    .line 2285
    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v6, :cond_c

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v4, :cond_c

    .line 3883
    invoke-virtual {p0, v7, v0}, Lcom/mbridge/msdk/reward/a/a;->a(ZLjava/lang/String;)V

    .line 2288
    :cond_c
    iput-boolean v7, p0, Lcom/mbridge/msdk/reward/a/a;->J:Z

    :cond_d
    :goto_5
    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/reward/a/a;Z)Z
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->S:Z

    return p1
.end method

.method private e()V
    .locals 7

    .line 2020
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->y()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2021
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    const/4 v1, 0x0

    move v2, v1

    .line 2022
    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_0

    .line 2023
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/videocommon/b/b;

    .line 2024
    iget-object v4, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "_"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/mbridge/msdk/videocommon/b/b;->a()I

    move-result v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-static {v4, v3, v5}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2028
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-void
.end method

.method static synthetic e(Lcom/mbridge/msdk/reward/a/a;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/a/a;->E:Z

    return p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/reward/a/a;Z)Z
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->T:Z

    return p1
.end method

.method static synthetic f(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    return-object p0
.end method

.method private f()Z
    .locals 10

    const-string v0, ""

    .line 2040
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->y()Ljava/util/List;

    move-result-object v1

    .line 2041
    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->l:Lcom/mbridge/msdk/videocommon/d/a;

    if-nez v2, :cond_0

    .line 2042
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/b;->b()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->l:Lcom/mbridge/msdk/videocommon/d/a;

    .line 2044
    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->l:Lcom/mbridge/msdk/videocommon/d/a;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/a;->i()Ljava/util/Map;

    move-result-object v2

    if-eqz v1, :cond_4

    .line 2045
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_4

    const/4 v3, 0x0

    move v4, v3

    .line 2046
    :goto_0
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v5

    if-ge v4, v5, :cond_4

    .line 2047
    invoke-interface {v1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/videocommon/b/b;

    .line 2049
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5}, Lcom/mbridge/msdk/videocommon/b/b;->a()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v2, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_1

    .line 2050
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5}, Lcom/mbridge/msdk/videocommon/b/b;->a()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v2, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Integer;

    invoke-virtual {v6}, Ljava/lang/Integer;->intValue()I

    move-result v6

    goto :goto_1

    :cond_1
    move v6, v3

    .line 2052
    :goto_1
    iget-object v7, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v9, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, "_"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/mbridge/msdk/videocommon/b/b;->a()I

    move-result v5

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    invoke-static {v7, v5, v8}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    if-eqz v5, :cond_2

    .line 2055
    check-cast v5, Ljava/lang/Integer;

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :cond_2
    move v5, v3

    :goto_2
    if-ge v5, v6, :cond_3

    return v3

    :cond_3
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2065
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 2066
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardVideoController"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    const/4 v0, 0x1

    return v0
.end method

.method static synthetic f(Lcom/mbridge/msdk/reward/a/a;Z)Z
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->U:Z

    return p1
.end method

.method static synthetic g(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    return-object p0
.end method

.method private g()Z
    .locals 4

    .line 2339
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-nez v0, :cond_0

    .line 2340
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->i()V

    .line 2342
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    .line 2343
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_3

    .line 2344
    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/a/d;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 2345
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 2346
    invoke-direct {p0, v0, v2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/util/List;Ljava/lang/String;)Z

    move-result v1

    :cond_1
    if-nez v1, :cond_3

    .line 2349
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/c;

    if-eqz v2, :cond_2

    .line 2351
    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/c;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/lang/String;)V

    .line 2352
    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v2}, Lcom/mbridge/msdk/reward/adapter/d;->b()Z

    move-result v2

    if-eqz v2, :cond_2

    const/4 v1, 0x1

    :cond_3
    return v1
.end method

.method static synthetic h(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    return-object p0
.end method

.method private h()Z
    .locals 4

    .line 2382
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-nez v0, :cond_0

    .line 2383
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->i()V

    .line 2385
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 2386
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 2388
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/c;

    if-eqz v1, :cond_1

    .line 2390
    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/c;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/reward/adapter/d;->a(Ljava/lang/String;)V

    .line 2391
    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v2}, Lcom/mbridge/msdk/reward/adapter/d;->c()Z

    move-result v2

    if-eqz v2, :cond_2

    const/4 v0, 0x1

    return v0

    .line 2394
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/c;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v3, v1}, Lcom/mbridge/msdk/videocommon/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_3
    const/4 v0, 0x0

    return v0
.end method

.method private i()V
    .locals 4

    .line 2408
    new-instance v0, Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/mbridge/msdk/reward/adapter/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    .line 2409
    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Z)V

    .line 2410
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->b(Z)V

    .line 2411
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    if-eqz v0, :cond_0

    .line 2412
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget v1, p0, Lcom/mbridge/msdk/reward/a/a;->x:I

    iget v2, p0, Lcom/mbridge/msdk/reward/a/a;->y:I

    iget v3, p0, Lcom/mbridge/msdk/reward/a/a;->z:I

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/reward/adapter/d;->a(III)V

    .line 2414
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->a(Lcom/mbridge/msdk/videocommon/d/c;)V

    return-void
.end method

.method static synthetic i(Lcom/mbridge/msdk/reward/a/a;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    return p0
.end method

.method public static insertExcludeId(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 4

    .line 275
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    if-eqz p1, :cond_0

    .line 276
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 279
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    .line 278
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/k;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/k;

    move-result-object v0

    .line 280
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/g;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/entity/g;-><init>()V

    .line 281
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/entity/g;->a(J)V

    .line 282
    invoke-virtual {v1, p0}, Lcom/mbridge/msdk/foundation/entity/g;->b(Ljava/lang/String;)V

    .line 283
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/mbridge/msdk/foundation/entity/g;->a(Ljava/lang/String;)V

    .line 284
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/db/k;->a(Lcom/mbridge/msdk/foundation/entity/g;)V

    :cond_0
    return-void
.end method

.method static synthetic j(Lcom/mbridge/msdk/reward/a/a;)V
    .locals 2

    .line 9253
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->q:Lcom/mbridge/msdk/out/MBridgeIds;

    if-eqz v0, :cond_2

    .line 9254
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->H:Z

    if-nez v0, :cond_0

    goto :goto_0

    .line 9258
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/reward/a/a;->b()Ljava/lang/String;

    move-result-object v0

    .line 9259
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 9260
    sget-object v1, Lcom/mbridge/msdk/reward/a/a;->L:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v1, :cond_1

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 9261
    sget-object v1, Lcom/mbridge/msdk/reward/a/a;->L:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/CharSequence;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 9262
    sget-object v1, Lcom/mbridge/msdk/reward/a/a;->L:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    goto :goto_1

    :cond_1
    :goto_0
    const-string v0, ""

    .line 9265
    :goto_1
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->q:Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/out/MBridgeIds;->setBidToken(Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method private j()Z
    .locals 6

    const/4 v0, 0x0

    .line 2567
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->O:Lcom/mbridge/msdk/foundation/db/i;

    if-nez v1, :cond_0

    .line 2568
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->O:Lcom/mbridge/msdk/foundation/db/i;

    .line 2570
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->O:Lcom/mbridge/msdk/foundation/db/i;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/j;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/j;

    move-result-object v1

    .line 2571
    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez v2, :cond_1

    .line 2572
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v2

    .line 2574
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    iget-boolean v5, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    .line 2573
    invoke-virtual {v2, v3, v4, v5}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v2

    iput-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    .line 2576
    :cond_1
    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/d/c;->f()I

    move-result v2

    if-eqz v1, :cond_2

    .line 2577
    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v1, v3, v2}, Lcom/mbridge/msdk/foundation/db/j;->a(Ljava/lang/String;I)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_2

    const/4 v0, 0x1

    goto :goto_0

    :catchall_0
    const-string v1, "RewardVideoController"

    const-string v2, "cap check error"

    .line 2581
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return v0
.end method

.method static synthetic k(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/out/MBridgeIds;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->q:Lcom/mbridge/msdk/out/MBridgeIds;

    return-object p0
.end method

.method static synthetic l(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/videocommon/d/c;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    return-object p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/reward/a/a;)Landroid/content/Context;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic n(Lcom/mbridge/msdk/reward/a/a;)Ljava/util/ArrayList;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->G:Ljava/util/ArrayList;

    return-object p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/reward/a/a;)Ljava/lang/String;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->t:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic p(Lcom/mbridge/msdk/reward/a/a;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    return p0
.end method

.method static synthetic q(Lcom/mbridge/msdk/reward/a/a;)Landroid/os/Handler;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->v:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic r(Lcom/mbridge/msdk/reward/a/a;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/a/a;->F:Z

    return p0
.end method

.method static synthetic s(Lcom/mbridge/msdk/reward/a/a;)I
    .locals 0

    .line 69
    iget p0, p0, Lcom/mbridge/msdk/reward/a/a;->w:I

    return p0
.end method

.method static synthetic t(Lcom/mbridge/msdk/reward/a/a;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/a/a;->R:Z

    return p0
.end method

.method static synthetic u(Lcom/mbridge/msdk/reward/a/a;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/a/a;->S:Z

    return p0
.end method

.method static synthetic v(Lcom/mbridge/msdk/reward/a/a;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/a/a;->T:Z

    return p0
.end method

.method static synthetic w(Lcom/mbridge/msdk/reward/a/a;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/a/a;->V:Z

    return p0
.end method

.method static synthetic x(Lcom/mbridge/msdk/reward/a/a;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/reward/a/a;->U:Z

    return p0
.end method

.method static synthetic y(Lcom/mbridge/msdk/reward/a/a;)Lcom/mbridge/msdk/foundation/db/i;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/reward/a/a;->O:Lcom/mbridge/msdk/foundation/db/i;

    return-object p0
.end method

.method static synthetic z(Lcom/mbridge/msdk/reward/a/a;)I
    .locals 0

    .line 69
    iget p0, p0, Lcom/mbridge/msdk/reward/a/a;->i:I

    return p0
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 244
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->H:Z

    if-eqz v0, :cond_0

    .line 245
    sget-object v0, Lcom/mbridge/msdk/reward/a/a;->L:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/mbridge/msdk/reward/a/a;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 246
    sget-object v0, Lcom/mbridge/msdk/reward/a/a;->L:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p0}, Lcom/mbridge/msdk/reward/a/a;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public final a(I)V
    .locals 0

    .line 142
    iput p1, p0, Lcom/mbridge/msdk/reward/a/a;->w:I

    return-void
.end method

.method public final a(III)V
    .locals 5

    .line 172
    iput p1, p0, Lcom/mbridge/msdk/reward/a/a;->x:I

    .line 173
    iput p2, p0, Lcom/mbridge/msdk/reward/a/a;->y:I

    .line 174
    sget v0, Lcom/mbridge/msdk/foundation/same/a;->z:I

    if-ne p2, v0, :cond_1

    if-gez p3, :cond_0

    const/4 v0, 0x5

    goto :goto_0

    :cond_0
    move v0, p3

    .line 175
    :goto_0
    iput v0, p0, Lcom/mbridge/msdk/reward/a/a;->z:I

    .line 177
    :cond_1
    iget v0, p0, Lcom/mbridge/msdk/reward/a/a;->y:I

    sget v1, Lcom/mbridge/msdk/foundation/same/a;->y:I

    if-ne v0, v1, :cond_3

    if-gez p3, :cond_2

    const/16 v0, 0x50

    goto :goto_1

    :cond_2
    move v0, p3

    .line 178
    :goto_1
    iput v0, p0, Lcom/mbridge/msdk/reward/a/a;->z:I

    .line 182
    :cond_3
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "ivRewardEnable"

    const/4 v2, 0x1

    .line 183
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "ivRewardMode"

    .line 184
    sget v3, Lcom/mbridge/msdk/foundation/same/a;->w:I

    const/4 v4, 0x0

    if-ne p1, v3, :cond_4

    move p1, v4

    goto :goto_2

    :cond_4
    move p1, v2

    :goto_2
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "ivRewardPlayValueMode"

    .line 185
    sget v1, Lcom/mbridge/msdk/foundation/same/a;->y:I

    if-ne p2, v1, :cond_5

    move v2, v4

    :cond_5
    invoke-virtual {v0, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "ivRewardPlayValue"

    .line 186
    invoke-virtual {v0, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 187
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    .line 2642
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ivreward_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1, p2}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    const-string p1, "RewardVideoController"

    const-string p2, "setIVRewardEnable to SP was ERROR"

    .line 189
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_3
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;)V
    .locals 7

    .line 819
    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    .line 820
    new-instance v6, Lcom/mbridge/msdk/reward/a/a$c;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->v:Landroid/os/Handler;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    const/4 v5, 0x0

    move-object v0, v6

    move-object v1, p0

    move-object v2, p1

    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/reward/a/a$c;-><init>(Lcom/mbridge/msdk/reward/a/a;Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;Landroid/os/Handler;Ljava/lang/String;Lcom/mbridge/msdk/reward/a/a$1;)V

    iput-object v6, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    const/4 v0, 0x3

    const/4 v1, 0x4

    const/4 v2, 0x1

    const/4 v3, 0x0

    .line 2420
    :try_start_0
    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->t:Ljava/lang/String;

    .line 2421
    iput-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->o:Ljava/lang/String;

    .line 2422
    iput-object p3, p0, Lcom/mbridge/msdk/reward/a/a;->r:Ljava/lang/String;

    .line 2423
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->I:Ljava/lang/Object;

    monitor-enter p2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_6

    .line 2424
    :try_start_1
    iget-boolean p3, p0, Lcom/mbridge/msdk/reward/a/a;->J:Z

    if-eqz p3, :cond_1

    .line 2425
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_0

    .line 2427
    :try_start_2
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    iget-object p3, p0, Lcom/mbridge/msdk/reward/a/a;->q:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v4, "campaing is show progressing "

    invoke-interface {p1, p3, v4}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2429
    :try_start_3
    sget-boolean p3, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p3, :cond_0

    .line 2430
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2434
    :cond_0
    :goto_0
    monitor-exit p2

    return-void

    .line 2436
    :cond_1
    iput-boolean v2, p0, Lcom/mbridge/msdk/reward/a/a;->J:Z

    .line 2438
    monitor-exit p2
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 2440
    :try_start_4
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz p2, :cond_4

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {p2}, Lcom/mbridge/msdk/reward/a/a$c;->b(Lcom/mbridge/msdk/reward/a/a$c;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object p2

    invoke-virtual {p2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p2

    if-ne p2, v2, :cond_4

    .line 2441
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_6

    if-eqz p1, :cond_2

    .line 2443
    :try_start_5
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->q:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string p3, "campaing is loading"

    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 2445
    :try_start_6
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_2

    .line 2446
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2451
    :cond_2
    :goto_1
    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    if-nez p1, :cond_3

    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/videocommon/d/c;->v(I)Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    .line 2452
    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v2, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v0, :cond_3

    const-string p1, ""

    .line 4883
    invoke-virtual {p0, v3, p1}, Lcom/mbridge/msdk/reward/a/a;->a(ZLjava/lang/String;)V

    .line 2455
    :cond_3
    iput-boolean v3, p0, Lcom/mbridge/msdk/reward/a/a;->J:Z

    return-void

    .line 2458
    :cond_4
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    if-nez p2, :cond_7

    .line 2459
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_6

    if-eqz p1, :cond_5

    .line 2461
    :try_start_7
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->q:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string p3, "context is null"

    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_2

    goto :goto_2

    :catch_2
    move-exception p1

    .line 2463
    :try_start_8
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_5

    .line 2464
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2469
    :cond_5
    :goto_2
    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    if-nez p1, :cond_6

    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    if-nez p1, :cond_6

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/videocommon/d/c;->v(I)Z

    move-result p1

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    .line 2470
    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v2, :cond_6

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v0, :cond_6

    const-string p1, ""

    .line 5883
    invoke-virtual {p0, v3, p1}, Lcom/mbridge/msdk/reward/a/a;->a(ZLjava/lang/String;)V

    .line 2473
    :cond_6
    iput-boolean v3, p0, Lcom/mbridge/msdk/reward/a/a;->J:Z

    return-void

    .line 2477
    :cond_7
    iget-boolean p2, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    if-eqz p2, :cond_a

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;)Z

    move-result p2

    if-nez p2, :cond_a

    .line 2478
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_6

    if-eqz p1, :cond_8

    .line 2480
    :try_start_9
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->q:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string p3, "network exception"

    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_3

    goto :goto_3

    :catch_3
    move-exception p1

    .line 2482
    :try_start_a
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_8

    .line 2483
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2487
    :cond_8
    :goto_3
    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    if-nez p1, :cond_9

    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    if-nez p1, :cond_9

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz p1, :cond_9

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/videocommon/d/c;->v(I)Z

    move-result p1

    if-eqz p1, :cond_9

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz p1, :cond_9

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    .line 2488
    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v2, :cond_9

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v0, :cond_9

    const-string p1, ""

    .line 6883
    invoke-virtual {p0, v3, p1}, Lcom/mbridge/msdk/reward/a/a;->a(ZLjava/lang/String;)V

    .line 2491
    :cond_9
    iput-boolean v3, p0, Lcom/mbridge/msdk/reward/a/a;->J:Z

    return-void

    .line 2494
    :cond_a
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->j()Z

    move-result p2

    if-eqz p2, :cond_d

    const-string p1, "RewardVideoController"

    const-string p2, " check over cap true"

    .line 2495
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2496
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_6

    if-eqz p1, :cond_b

    .line 2498
    :try_start_b
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->q:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string p3, "Play more than limit"

    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_4

    goto :goto_4

    :catch_4
    move-exception p1

    .line 2500
    :try_start_c
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_b

    .line 2501
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2505
    :cond_b
    :goto_4
    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    if-nez p1, :cond_c

    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    if-nez p1, :cond_c

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz p1, :cond_c

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/videocommon/d/c;->v(I)Z

    move-result p1

    if-eqz p1, :cond_c

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz p1, :cond_c

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    .line 2506
    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v2, :cond_c

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v0, :cond_c

    const-string p1, ""

    .line 7883
    invoke-virtual {p0, v3, p1}, Lcom/mbridge/msdk/reward/a/a;->a(ZLjava/lang/String;)V

    .line 2514
    :cond_c
    iput-boolean v3, p0, Lcom/mbridge/msdk/reward/a/a;->J:Z

    return-void

    .line 2519
    :cond_d
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->o:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_e

    .line 2520
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->E()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->o:Ljava/lang/String;
    :try_end_c
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_6

    .line 2523
    :cond_e
    :try_start_d
    new-instance p2, Ljava/text/SimpleDateFormat;

    const-string p3, "dd"

    invoke-direct {p2, p3}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 2524
    new-instance p3, Ljava/util/Date;

    invoke-direct {p3}, Ljava/util/Date;-><init>()V

    invoke-virtual {p2, p3}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object p2

    .line 2526
    iget-object p3, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    const-string v4, "reward_date"

    const-string v5, "0"

    invoke-static {p3, v4, v5}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/lang/String;

    .line 2527
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_f

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_f

    .line 2528
    invoke-virtual {p3, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p3

    if-nez p3, :cond_f

    .line 2529
    iget-object p3, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    const-string v4, "reward_date"

    invoke-static {p3, v4, p2}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 2530
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    invoke-virtual {p3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_"

    invoke-virtual {p3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-static {p2, p3, v4}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_5

    .line 2536
    :catch_5
    :cond_f
    :try_start_e
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/a/a;->d(Ljava/lang/String;)V
    :try_end_e
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_6

    goto :goto_6

    :catchall_0
    move-exception p1

    .line 2438
    :try_start_f
    monitor-exit p2
    :try_end_f
    .catchall {:try_start_f .. :try_end_f} :catchall_0

    :try_start_10
    throw p1
    :try_end_10
    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_10} :catch_6

    :catch_6
    move-exception p1

    .line 2539
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_10

    .line 2540
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p2

    const-string p3, "RewardVideoController"

    invoke-static {p3, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2542
    :cond_10
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    if-eqz p2, :cond_11

    .line 2544
    :try_start_11
    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->m:Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;

    iget-object p3, p0, Lcom/mbridge/msdk/reward/a/a;->q:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v4, "show exception"

    invoke-interface {p2, p3, v4}, Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;->onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    :try_end_11
    .catch Ljava/lang/Exception; {:try_start_11 .. :try_end_11} :catch_7

    goto :goto_5

    .line 2546
    :catch_7
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_11

    .line 2547
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2551
    :cond_11
    :goto_5
    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    if-nez p1, :cond_12

    iget-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    if-nez p1, :cond_12

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz p1, :cond_12

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/videocommon/d/c;->v(I)Z

    move-result p1

    if-eqz p1, :cond_12

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz p1, :cond_12

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    .line 2552
    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v2, :cond_12

    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {p1}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result p1

    if-eq p1, v0, :cond_12

    const-string p1, ""

    .line 8883
    invoke-virtual {p0, v3, p1}, Lcom/mbridge/msdk/reward/a/a;->a(ZLjava/lang/String;)V

    .line 2555
    :cond_12
    iput-boolean v3, p0, Lcom/mbridge/msdk/reward/a/a;->J:Z

    :goto_6
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 146
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 147
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "MBridge_ConfirmTitle"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 149
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 150
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "MBridge_ConfirmContent"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, v0, p2}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 152
    :cond_1
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 153
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "MBridge_CancelText"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p4}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p4

    invoke-static {p1, p2, p4}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 155
    :cond_2
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 156
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "MBridge_ConfirmText"

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p4, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, p2, p3}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    :cond_3
    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 114
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->A:Z

    return-void
.end method

.method public final a(ZLjava/lang/String;)V
    .locals 17

    move-object/from16 v1, p0

    move/from16 v2, p1

    const-string v3, "load exception"

    .line 925
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u53d1\u8d77\u4e00\u6b21 load\uff1a isDevCall "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v4, " "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object/from16 v4, p2

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v5, "RewardVideoController"

    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 926
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    const/4 v6, 0x1

    if-eqz v0, :cond_3

    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result v0

    if-ne v0, v6, :cond_3

    .line 927
    iget-boolean v0, v1, Lcom/mbridge/msdk/reward/a/a;->E:Z

    if-eqz v0, :cond_1

    if-eqz v2, :cond_0

    const-string v0, "\u672c\u5730\u5b58\u5728\u7531\u5f00\u53d1\u8005\u53d1\u8d77\u7684load\uff0c\u6b64\u6b21 load \u4e5f\u662f\u5f00\u53d1\u8005\u53d1\u8d77\u7684\uff0c\u56de\u8c03 CURRENT_UNIT_IS_LOADING"

    .line 930
    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 931
    iget-object v6, v1, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    const/4 v7, 0x0

    iget-object v9, v1, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    iget-boolean v10, v1, Lcom/mbridge/msdk/reward/a/a;->B:Z

    const-string v8, "current unit is loading"

    const-string v11, ""

    const-string v12, ""

    invoke-static/range {v6 .. v12}, Lcom/mbridge/msdk/reward/b/a;->b(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 932
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    const-string v2, "errorCode: 3501 errorMessage: current unit is loading"

    invoke-static {v0, v2}, Lcom/mbridge/msdk/reward/a/a$c;->b(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v0, "\u672c\u5730\u5b58\u5728\u7531\u5f00\u53d1\u8005\u53d1\u8d77\u7684load\uff0c\u6b64\u6b21 load \u662f\u81ea\u52a8 load\uff0c\u4e0d\u505a\u4efb\u4f55\u5904\u7406"

    .line 936
    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    if-eqz v2, :cond_2

    const-string v0, "\u672c\u5730\u5b58\u5728\u7531\u81ea\u52a8 load \u53d1\u8d77\u7684load\uff0c\u6b64\u6b21 load \u662f\u5f00\u53d1\u8005\u53d1\u8d77\u7684\uff0c\u5c06\u56de\u8c03\u8f6c\u79fb\u7ed9\u5f00\u53d1\u8005"

    .line 942
    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 943
    iput-boolean v2, v1, Lcom/mbridge/msdk/reward/a/a;->E:Z

    goto :goto_0

    :cond_2
    const-string v0, "\u672c\u5730\u5b58\u5728\u7531\u81ea\u52a8 load \u53d1\u8d77\u7684load\uff0c\u6b64\u6b21 load \u662f\u81ea\u52a8 load \u53d1\u8d77\u7684\uff0c\u4e0d\u505a\u4efb\u4f55\u5904\u7406"

    .line 946
    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void

    .line 954
    :cond_3
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    const/4 v7, 0x0

    if-eqz v0, :cond_4

    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {v0}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;)I

    move-result v0

    const/4 v8, 0x3

    if-ne v0, v8, :cond_4

    .line 956
    iput-boolean v7, v1, Lcom/mbridge/msdk/reward/a/a;->P:Z

    goto :goto_1

    .line 958
    :cond_4
    iput-boolean v6, v1, Lcom/mbridge/msdk/reward/a/a;->P:Z

    .line 959
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {v0, v6}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;I)V

    .line 961
    :goto_1
    iput-boolean v2, v1, Lcom/mbridge/msdk/reward/a/a;->E:Z

    .line 962
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->v:Landroid/os/Handler;

    const v6, 0xf4629

    invoke-virtual {v0, v6}, Landroid/os/Handler;->removeMessages(I)V

    .line 963
    iput-boolean v7, v1, Lcom/mbridge/msdk/reward/a/a;->S:Z

    .line 964
    iput-boolean v7, v1, Lcom/mbridge/msdk/reward/a/a;->R:Z

    .line 965
    iput-boolean v7, v1, Lcom/mbridge/msdk/reward/a/a;->T:Z

    .line 966
    iput-boolean v7, v1, Lcom/mbridge/msdk/reward/a/a;->U:Z

    .line 968
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/reward/a/a;->d()V

    .line 969
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/reward/a/a;->c()V

    .line 970
    invoke-static {}, Lcom/mbridge/msdk/reward/adapter/c;->a()Lcom/mbridge/msdk/reward/adapter/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/reward/adapter/c;->b()V

    .line 973
    :try_start_0
    invoke-static/range {p2 .. p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 974
    iget-boolean v0, v1, Lcom/mbridge/msdk/reward/a/a;->A:Z

    if-eqz v0, :cond_5

    .line 975
    invoke-static {}, Lcom/mbridge/msdk/e/b;->getInstance()Lcom/mbridge/msdk/e/b;

    move-result-object v0

    iget-object v6, v1, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v0, v6, v8}, Lcom/mbridge/msdk/e/b;->addInterstitialList(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 977
    :cond_5
    invoke-static {}, Lcom/mbridge/msdk/e/b;->getInstance()Lcom/mbridge/msdk/e/b;

    move-result-object v0

    iget-object v6, v1, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    iget-object v8, v1, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v0, v6, v8}, Lcom/mbridge/msdk/e/b;->addRewardList(Ljava/lang/String;Ljava/lang/String;)V

    .line 981
    :cond_6
    :goto_2
    iget-boolean v0, v1, Lcom/mbridge/msdk/reward/a/a;->B:Z

    if-eqz v0, :cond_9

    invoke-static/range {p2 .. p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 982
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz v0, :cond_8

    .line 983
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_7

    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_7

    .line 984
    iget-object v8, v1, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v7}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    move-object v9, v0

    check-cast v9, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const-string v10, "bidToken is empty"

    iget-object v11, v1, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    iget-boolean v12, v1, Lcom/mbridge/msdk/reward/a/a;->B:Z

    const-string v13, ""

    const-string v14, ""

    invoke-static/range {v8 .. v14}, Lcom/mbridge/msdk/reward/b/a;->b(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 986
    :cond_7
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    const-string v2, "bidToken is empty"

    invoke-static {v0, v2}, Lcom/mbridge/msdk/reward/a/a$c;->c(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    :cond_8
    return-void

    .line 998
    :cond_9
    sget-object v0, Lcom/mbridge/msdk/system/a;->a:Ljava/util/Map;

    if-nez v0, :cond_c

    .line 999
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz v0, :cond_b

    .line 1000
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_a

    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_a

    .line 1001
    iget-object v8, v1, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v7}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    move-object v9, v0

    check-cast v9, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const-string v10, "init error"

    iget-object v11, v1, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    iget-boolean v12, v1, Lcom/mbridge/msdk/reward/a/a;->B:Z

    const-string v13, ""

    const-string v14, ""

    invoke-static/range {v8 .. v14}, Lcom/mbridge/msdk/reward/b/a;->b(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 1004
    :cond_a
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    const-string v2, "init error"

    invoke-static {v0, v2}, Lcom/mbridge/msdk/reward/a/a$c;->c(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    const-string v0, "SDK \u521d\u59cb\u5316\u9519\u8bef"

    .line 1005
    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    return-void

    .line 1011
    :cond_c
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v6

    iget-object v8, v1, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {v0, v6, v8}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez v0, :cond_d

    const-string v0, "\u5f53\u524d RewardUnitSetting \u4e3a\u7a7a\uff0c\u8bf7\u6c42\u65b0\u7684\u914d\u7f6e\u4fe1\u606f"

    .line 1013
    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1014
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->N:Ljava/lang/String;

    .line 1015
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v0

    iget-object v6, v1, Lcom/mbridge/msdk/reward/a/a;->N:Ljava/lang/String;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v8

    iget-object v9, v1, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    new-instance v10, Lcom/mbridge/msdk/reward/a/a$3;

    invoke-direct {v10, v1}, Lcom/mbridge/msdk/reward/a/a$3;-><init>(Lcom/mbridge/msdk/reward/a/a;)V

    invoke-virtual {v0, v6, v8, v9, v10}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/c/c;)V

    .line 1033
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v6

    iget-object v8, v1, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    iget-boolean v9, v1, Lcom/mbridge/msdk/reward/a/a;->A:Z

    invoke-virtual {v0, v6, v8, v9}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    .line 1036
    :cond_d
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_e

    .line 1038
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    iget-object v6, v1, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    invoke-virtual {v0, v6}, Lcom/mbridge/msdk/videocommon/d/c;->b(Ljava/lang/String;)V

    .line 1040
    :cond_e
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->H()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    .line 1041
    iget-object v6, v1, Lcom/mbridge/msdk/reward/a/a;->v:Landroid/os/Handler;

    if-eqz v6, :cond_f

    .line 1042
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "start load timeout for "

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, " ms"

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1043
    iget-object v6, v1, Lcom/mbridge/msdk/reward/a/a;->v:Landroid/os/Handler;

    const v8, 0xf462a

    int-to-long v9, v0

    invoke-virtual {v6, v8, v9, v10}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 1045
    :cond_f
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->k:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/c;->F()Ljava/util/Queue;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->M:Ljava/util/Queue;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3

    .line 1048
    :try_start_1
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/reward/a/a;->f()Z

    move-result v0

    if-eqz v0, :cond_10

    const-string v0, "\u5f53\u524d cap \u5168\u6ee1\uff0c\u6e05\u9664\u6240\u6709\u7684 cap"

    .line 1051
    invoke-static {v5, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1052
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/reward/a/a;->e()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_3

    :catch_0
    move-exception v0

    .line 1056
    :try_start_2
    sget-boolean v5, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v5, :cond_10

    .line 1057
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3

    .line 1061
    :cond_10
    :goto_3
    :try_start_3
    invoke-direct/range {p0 .. p2}, Lcom/mbridge/msdk/reward/a/a;->b(ZLjava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto/16 :goto_4

    :catch_1
    move-exception v0

    move-object v2, v0

    .line 1064
    :try_start_4
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v0, :cond_11

    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v0

    if-lez v0, :cond_11

    .line 1065
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, v7}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    move-object v8, v0

    check-cast v8, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v9, v1, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "load exception: "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iget-object v11, v1, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    iget-boolean v12, v1, Lcom/mbridge/msdk/reward/a/a;->B:Z

    const-string v13, ""

    const-string v14, ""

    const-wide/16 v15, 0x0

    invoke-static/range {v8 .. v16}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    .line 1071
    :catch_2
    :cond_11
    :try_start_5
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz v0, :cond_13

    .line 1072
    iget-object v0, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {v0, v3}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    goto :goto_4

    :catch_3
    move-exception v0

    .line 1080
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    if-eqz v2, :cond_12

    .line 1081
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a;->n:Lcom/mbridge/msdk/reward/a/a$c;

    invoke-static {v2, v3}, Lcom/mbridge/msdk/reward/a/a$c;->a(Lcom/mbridge/msdk/reward/a/a$c;Ljava/lang/String;)V

    .line 1082
    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    if-eqz v2, :cond_12

    invoke-virtual {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v2

    if-lez v2, :cond_12

    .line 1083
    iget-object v8, v1, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object v2, v1, Lcom/mbridge/msdk/reward/a/a;->W:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v2, v7}, Ljava/util/concurrent/CopyOnWriteArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    move-object v9, v2

    check-cast v9, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "load exception "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    iget-object v11, v1, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    iget-boolean v12, v1, Lcom/mbridge/msdk/reward/a/a;->B:Z

    const-string v13, ""

    const-string v14, ""

    invoke-static/range {v8 .. v14}, Lcom/mbridge/msdk/reward/b/a;->b(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)V

    .line 1087
    :cond_12
    sget-boolean v2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v2, :cond_13

    .line 1088
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_13
    :goto_4
    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 2

    .line 554
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz v0, :cond_0

    .line 555
    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/a/a;->H:Z

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/adapter/d;->c(Z)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    .line 826
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    .line 827
    iput-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    .line 828
    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    .line 829
    new-instance p1, Lcom/mbridge/msdk/out/MBridgeIds;

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->s:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-direct {p1, p2, v0}, Lcom/mbridge/msdk/out/MBridgeIds;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->q:Lcom/mbridge/msdk/out/MBridgeIds;

    .line 831
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/b;->b()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->l:Lcom/mbridge/msdk/videocommon/d/a;

    .line 833
    new-instance p1, Lcom/mbridge/msdk/reward/a/a$2;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/reward/a/a$2;-><init>(Lcom/mbridge/msdk/reward/a/a;)V

    .line 845
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->b()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object p2

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    .line 847
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/x;->b()V

    .line 850
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->getinstance()Lcom/mbridge/msdk/foundation/download/download/ResourceManager;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/download/ResourceManager;->cleanZipRes()V

    .line 853
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/download/HTMLResourceManager;->cleanHtmlRes()V

    .line 854
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/videocommon/d/b;->b(Ljava/lang/String;)V

    .line 855
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ab;->a()Lcom/mbridge/msdk/foundation/tools/ab;

    move-result-object p1

    const-string p2, "c_d_v_w_i"

    const/4 v0, 0x0

    invoke-virtual {p1, p2, v0}, Lcom/mbridge/msdk/foundation/tools/ab;->a(Ljava/lang/String;Z)Z

    move-result p1

    if-nez p1, :cond_0

    .line 856
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 857
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    const/4 v0, 0x1

    invoke-virtual {p1, p2, v0}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/lang/String;I)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v4

    if-eqz v4, :cond_0

    .line 859
    invoke-virtual {v4}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result p1

    if-lez p1, :cond_0

    .line 860
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/reward/a/a;->h:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/a/a;->p:Ljava/lang/String;

    const/16 v5, 0x5e

    const/4 v6, 0x0

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/videocommon/download/b;->createUnitCache(Landroid/content/Context;Ljava/lang/String;Ljava/util/concurrent/CopyOnWriteArrayList;ILcom/mbridge/msdk/videocommon/listener/a;)Lcom/mbridge/msdk/videocommon/download/d;

    .line 865
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->O:Lcom/mbridge/msdk/foundation/db/i;

    if-nez p1, :cond_1

    .line 866
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/reward/a/a;->O:Lcom/mbridge/msdk/foundation/db/i;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 869
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string v0, "RewardVideoController"

    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 118
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z

    return-void
.end method

.method public final c(Z)V
    .locals 0

    .line 161
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/a/a;->F:Z

    return-void
.end method

.method public final d(Z)V
    .locals 1

    const-string v0, ""

    .line 883
    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/reward/a/a;->a(ZLjava/lang/String;)V

    return-void
.end method

.method public final e(Z)Z
    .locals 2

    const/4 p1, 0x0

    .line 2297
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->j()Z

    move-result v0

    if-nez v0, :cond_2

    .line 2298
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/a/a;->B:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 2301
    :try_start_1
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->g()Z

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 4326
    :cond_0
    :try_start_2
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-nez v0, :cond_1

    .line 4327
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/a/a;->i()V

    .line 4329
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    if-eqz v0, :cond_2

    .line 4331
    iget-object v0, p0, Lcom/mbridge/msdk/reward/a/a;->j:Lcom/mbridge/msdk/reward/adapter/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/reward/adapter/d;->b()Z

    move-result p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 2311
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_2

    .line 2312
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :catch_0
    :cond_2
    :goto_0
    return p1
.end method
