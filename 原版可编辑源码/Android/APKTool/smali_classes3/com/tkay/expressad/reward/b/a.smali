.class public Lcom/tkay/expressad/reward/b/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/a/g;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/reward/b/a$b;,
        Lcom/tkay/expressad/reward/b/a$a;,
        Lcom/tkay/expressad/reward/b/a$c;,
        Lcom/tkay/expressad/reward/b/a$d;
    }
.end annotation


# static fields
.field private static final A:I = 0x9

.field private static final E:I = 0x10

.field private static final F:I = 0x12

.field private static final G:I = 0x11

.field private static final H:I = 0xf4629

.field private static final I:I = 0xf462a

.field private static T:Ljava/util/Map; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private static U:Ljava/util/concurrent/ConcurrentHashMap; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field public static final a:I = 0x1

.field public static b:Ljava/lang/String; = null

.field public static c:Ljava/util/Map; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/reward/b/a$d;",
            ">;"
        }
    .end annotation
.end field

.field private static final i:Ljava/lang/String; = "RewardVideoController"

.field private static final j:I = 0x8

.field private static final z:I = 0x8


# instance fields
.field private B:I

.field private C:I

.field private D:I

.field private J:Z

.field private K:Z

.field private L:Z

.field private M:Z

.field private N:Z

.field private O:Z

.field private P:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private Q:Z

.field private volatile R:Z

.field private final S:Ljava/lang/Object;

.field private V:Ljava/util/Queue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Queue<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private W:Ljava/lang/String;

.field private X:Lcom/tkay/expressad/foundation/c/c;

.field private volatile Y:Z

.field private volatile Z:Z

.field private volatile aa:Z

.field private volatile ab:Z

.field private volatile ac:Z

.field private volatile ad:Z

.field private volatile ae:Z

.field private af:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private ag:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field volatile d:Z

.field volatile e:Z

.field volatile f:Z

.field volatile g:Z

.field volatile h:Z

.field private k:Landroid/content/Context;

.field private l:I

.field private m:Lcom/tkay/expressad/reward/a/d;

.field private n:Lcom/tkay/expressad/videocommon/e/d;

.field private o:Lcom/tkay/expressad/videocommon/e/a;

.field private volatile p:Lcom/tkay/expressad/videocommon/d/a;

.field private volatile q:Lcom/tkay/expressad/reward/b/a$c;

.field private r:Ljava/lang/String;

.field private s:Ljava/lang/String;

.field private volatile t:Ljava/lang/String;

.field private u:Ljava/lang/String;

.field private v:Ljava/lang/String;

.field private w:I

.field private x:Landroid/os/Handler;

.field private y:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 123
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/reward/b/a;->T:Ljava/util/Map;

    .line 128
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/reward/b/a;->c:Ljava/util/Map;

    .line 130
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/reward/b/a;->U:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public constructor <init>()V
    .locals 3

    .line 292
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 80
    iput v0, p0, Lcom/tkay/expressad/reward/b/a;->w:I

    const/4 v1, 0x2

    .line 82
    iput v1, p0, Lcom/tkay/expressad/reward/b/a;->y:I

    .line 93
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->J:Z

    .line 94
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->K:Z

    .line 96
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->L:Z

    .line 97
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->M:Z

    .line 100
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->O:Z

    .line 110
    new-instance v1, Ljava/util/ArrayList;

    const/4 v2, 0x7

    invoke-direct {v1, v2}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v1, p0, Lcom/tkay/expressad/reward/b/a;->P:Ljava/util/ArrayList;

    .line 112
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->Q:Z

    .line 113
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    .line 114
    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/tkay/expressad/reward/b/a;->S:Ljava/lang/Object;

    const/4 v1, 0x0

    .line 797
    iput-object v1, p0, Lcom/tkay/expressad/reward/b/a;->X:Lcom/tkay/expressad/foundation/c/c;

    const/4 v1, 0x1

    .line 886
    iput-boolean v1, p0, Lcom/tkay/expressad/reward/b/a;->Y:Z

    .line 887
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->Z:Z

    .line 1065
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->aa:Z

    .line 1066
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->ab:Z

    .line 1067
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->ac:Z

    .line 1068
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->ad:Z

    .line 1069
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->ae:Z

    .line 1302
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->d:Z

    .line 1303
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->e:Z

    .line 1304
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->f:Z

    .line 1305
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->g:Z

    .line 1306
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->h:Z

    .line 293
    new-instance v0, Lcom/tkay/expressad/reward/b/a$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/tkay/expressad/reward/b/a$1;-><init>(Lcom/tkay/expressad/reward/b/a;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/reward/b/a;->x:Landroid/os/Handler;

    return-void
.end method

.method public static a(Ljava/lang/String;)I
    .locals 1

    .line 207
    :try_start_0
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/tkay/expressad/reward/b/a;->T:Ljava/util/Map;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/tkay/expressad/reward/b/a;->T:Ljava/util/Map;

    .line 208
    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 209
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->T:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    if-eqz p0, :cond_0

    .line 211
    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 215
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/b/a;)Ljava/util/List;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a;->af:Ljava/util/List;

    return-object p0
.end method

.method private static a(Ljava/lang/String;Ljava/util/List;)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation

    .line 1287
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p1, :cond_1

    .line 1288
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 1289
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_0

    .line 1290
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->B()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 1291
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private a(III)V
    .locals 5

    .line 163
    iput p1, p0, Lcom/tkay/expressad/reward/b/a;->B:I

    .line 164
    iput p2, p0, Lcom/tkay/expressad/reward/b/a;->C:I

    .line 165
    sget v0, Lcom/tkay/expressad/foundation/g/a;->cu:I

    if-ne p2, v0, :cond_1

    if-gez p3, :cond_0

    const/4 v0, 0x5

    goto :goto_0

    :cond_0
    move v0, p3

    .line 166
    :goto_0
    iput v0, p0, Lcom/tkay/expressad/reward/b/a;->D:I

    .line 168
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/reward/b/a;->C:I

    sget v1, Lcom/tkay/expressad/foundation/g/a;->ct:I

    if-ne v0, v1, :cond_3

    if-gez p3, :cond_2

    const/16 v0, 0x50

    goto :goto_1

    :cond_2
    move v0, p3

    .line 169
    :goto_1
    iput v0, p0, Lcom/tkay/expressad/reward/b/a;->D:I

    .line 173
    :cond_3
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "ivRewardEnable"

    const/4 v2, 0x1

    .line 174
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "ivRewardMode"

    .line 175
    sget v3, Lcom/tkay/expressad/foundation/g/a;->cr:I

    const/4 v4, 0x0

    if-ne p1, v3, :cond_4

    move p1, v4

    goto :goto_2

    :cond_4
    move p1, v2

    :goto_2
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "ivRewardPlayValueMode"

    .line 176
    sget v1, Lcom/tkay/expressad/foundation/g/a;->ct:I

    if-ne p2, v1, :cond_5

    move v2, v4

    :cond_5
    invoke-virtual {v0, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "ivRewardPlayValue"

    .line 177
    invoke-virtual {v0, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 178
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/tkay/expressad/d/b;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method private a(Landroid/app/Activity;Ljava/lang/String;Lcom/tkay/core/common/f/i;)V
    .locals 11

    const-string v0, "_1"

    const-string v1, "1"

    const/4 v2, 0x0

    .line 2120
    :try_start_0
    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a;->o:Lcom/tkay/expressad/videocommon/e/a;

    if-eqz v3, :cond_0

    .line 2121
    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a;->o:Lcom/tkay/expressad/videocommon/e/a;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/e/a;->i()Ljava/util/Map;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 2122
    invoke-interface {v3, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 2123
    invoke-interface {v3, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    goto :goto_0

    :cond_0
    move v1, v2

    .line 2126
    :goto_0
    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-static {v3, v4, v5}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 2127
    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-static {v3, v0, v4}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/reward/b/a;->l:I

    .line 2130
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    if-nez v0, :cond_2

    .line 2131
    invoke-direct {p0}, Lcom/tkay/expressad/reward/b/a;->i()V

    .line 2133
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    if-eqz v0, :cond_4

    .line 2140
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/reward/a/d;->c()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 2143
    iget v0, p0, Lcom/tkay/expressad/reward/b/a;->l:I

    if-lt v0, v1, :cond_3

    if-lez v1, :cond_3

    .line 2144
    iput-boolean v2, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    return-void

    .line 2148
    :cond_3
    new-instance v5, Lcom/tkay/expressad/reward/b/a$d;

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->x:Landroid/os/Handler;

    invoke-direct {v5, p0, p0, v0}, Lcom/tkay/expressad/reward/b/a$d;-><init>(Lcom/tkay/expressad/reward/b/a;Lcom/tkay/expressad/reward/b/a;Landroid/os/Handler;)V

    .line 2149
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->c:Ljava/util/Map;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    invoke-interface {v0, v1, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2150
    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    iget-object v7, p0, Lcom/tkay/expressad/reward/b/a;->r:Ljava/lang/String;

    iget v8, p0, Lcom/tkay/expressad/reward/b/a;->y:I

    iget-object v9, p0, Lcom/tkay/expressad/reward/b/a;->u:Ljava/lang/String;

    move-object v4, p1

    move-object v6, p2

    move-object v10, p3

    invoke-virtual/range {v3 .. v10}, Lcom/tkay/expressad/reward/a/d;->a(Landroid/app/Activity;Lcom/tkay/expressad/video/bt/module/b/h;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/tkay/core/common/f/i;)V

    return-void

    .line 2178
    :cond_4
    iput-boolean v2, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    .line 2180
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz p1, :cond_5

    .line 2182
    :try_start_1
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    const-string p2, "can\'t show because load is failed"

    invoke-interface {p1, p2}, Lcom/tkay/expressad/videocommon/d/a;->b(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 2184
    :try_start_2
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_5

    .line 2185
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    :cond_5
    return-void

    :catch_1
    move-exception p1

    .line 2199
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_6

    .line 2200
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    .line 2202
    :cond_6
    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    if-eqz p2, :cond_7

    .line 2204
    :try_start_3
    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    const-string p3, "show exception"

    invoke-interface {p2, p3}, Lcom/tkay/expressad/videocommon/d/a;->b(Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    goto :goto_1

    .line 2206
    :catch_2
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_7

    .line 2207
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2215
    :cond_7
    :goto_1
    iput-boolean v2, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/b/a;Ljava/lang/String;)V
    .locals 0

    .line 58
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/b/a;->b(Ljava/lang/String;)V

    return-void
.end method

.method public static a(Ljava/lang/String;I)V
    .locals 1

    .line 192
    :try_start_0
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->T:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 193
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->T:Ljava/util/Map;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {v0, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p0

    .line 196
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 137
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 138
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Tkay_ConfirmTitle"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, v1, p1}, Lcom/tkay/expressad/foundation/h/v;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 140
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 141
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Tkay_ConfirmContent"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, v0, p2}, Lcom/tkay/expressad/foundation/h/v;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 143
    :cond_1
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 144
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "Tkay_CancelText"

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p4}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p4

    invoke-static {p1, p2, p4}, Lcom/tkay/expressad/foundation/h/v;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 146
    :cond_2
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 147
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    new-instance p2, Ljava/lang/StringBuilder;

    const-string p4, "Tkay_ConfirmText"

    invoke-direct {p2, p4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p4, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, p2, p3}, Lcom/tkay/expressad/foundation/h/v;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    :cond_3
    return-void
.end method

.method private static a(ZZ)V
    .locals 1

    .line 2512
    :try_start_0
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->c:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 2513
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    :cond_0
    if-eqz p0, :cond_2

    const/16 p0, 0x11f

    if-eqz p1, :cond_1

    .line 2520
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/a;->a(I)V

    goto :goto_0

    .line 2522
    :cond_1
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/a;->b(I)V

    goto :goto_0

    :cond_2
    const/16 p0, 0x5e

    if-eqz p1, :cond_3

    .line 2526
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/a;->a(I)V

    goto :goto_0

    .line 2528
    :cond_3
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/a;->b(I)V

    .line 2531
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/a;->a()V

    .line 2532
    invoke-static {}, Lcom/tkay/expressad/videocommon/a;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private static a(ZZLjava/lang/String;)V
    .locals 1

    .line 2541
    :try_start_0
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->c:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 2542
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->c:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    :cond_0
    if-eqz p0, :cond_2

    const/16 p0, 0x11f

    if-eqz p1, :cond_1

    .line 2549
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/a;->a(I)V

    goto :goto_0

    .line 2551
    :cond_1
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/a;->b(I)V

    goto :goto_0

    :cond_2
    const/16 p0, 0x5e

    if-eqz p1, :cond_3

    .line 2555
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/a;->a(I)V

    goto :goto_0

    .line 2557
    :cond_3
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/a;->b(I)V

    .line 2560
    :goto_0
    invoke-static {p2}, Lcom/tkay/expressad/videocommon/a;->c(Ljava/lang/String;)V

    .line 2561
    invoke-static {}, Lcom/tkay/expressad/videocommon/a;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/reward/b/a;Z)Z
    .locals 0

    .line 58
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/b/a;->Q:Z

    return p1
.end method

.method private b(I)Lcom/tkay/expressad/videocommon/c/b;
    .locals 4

    .line 2080
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->n:Lcom/tkay/expressad/videocommon/e/d;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 2081
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->I()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_1

    .line 2083
    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a;->n:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/e/d;->I()Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/videocommon/c/b;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/c/b;->a()I

    move-result v3

    if-ne v3, p1, :cond_0

    .line 2084
    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->n:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->I()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/videocommon/c/b;

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-object v1
.end method

.method static synthetic b(Lcom/tkay/expressad/reward/b/a;)Ljava/util/List;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a;->ag:Ljava/util/List;

    return-object p0
.end method

.method static synthetic b()V
    .locals 0

    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 2

    .line 2019
    :try_start_0
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/b/a;->c(Lcom/tkay/expressad/foundation/d/d;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 2023
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "load mv api error:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/b/a;->b(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception p1

    const-string v0, "can\'t show because unknow error"

    .line 2030
    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/b/a;->b(Ljava/lang/String;)V

    .line 2031
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_0

    .line 2032
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 1

    .line 2039
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->q:Lcom/tkay/expressad/reward/b/a$c;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 2040
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->ad:Z

    .line 2041
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->q:Lcom/tkay/expressad/reward/b/a$c;

    invoke-static {v0, p1}, Lcom/tkay/expressad/reward/b/a$c;->a(Lcom/tkay/expressad/reward/b/a$c;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private static b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 223
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 226
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 229
    :cond_1
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->U:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_2

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 230
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->U:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    return-void
.end method

.method private b(Z)V
    .locals 0

    .line 107
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/b/a;->K:Z

    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/reward/b/a;)Lcom/tkay/expressad/reward/a/d;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    return-object p0
.end method

.method private static c()V
    .locals 0

    return-void
.end method

.method private c(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 4

    .line 2054
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/reward/a/d;->e()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 2055
    :cond_0
    new-instance v0, Lcom/tkay/expressad/reward/a/d;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/reward/a/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    .line 2056
    iget-boolean v1, p0, Lcom/tkay/expressad/reward/b/a;->J:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/reward/a/d;->a(Z)V

    .line 2057
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v1, p0, Lcom/tkay/expressad/reward/b/a;->K:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/reward/a/d;->b(Z)V

    .line 2059
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->J:Z

    if-eqz v0, :cond_2

    .line 2060
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    iget v1, p0, Lcom/tkay/expressad/reward/b/a;->B:I

    iget v2, p0, Lcom/tkay/expressad/reward/b/a;->C:I

    iget v3, p0, Lcom/tkay/expressad/reward/b/a;->D:I

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/reward/a/d;->a(III)V

    .line 2062
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    iget v1, p0, Lcom/tkay/expressad/reward/b/a;->y:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/reward/a/d;->a(I)V

    .line 2063
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->n:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    .line 2064
    new-instance v0, Lcom/tkay/expressad/reward/b/a$a;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    invoke-direct {v0, p0, v1}, Lcom/tkay/expressad/reward/b/a$a;-><init>(Lcom/tkay/expressad/reward/b/a;Lcom/tkay/expressad/reward/a/a;)V

    .line 2065
    new-instance v1, Lcom/tkay/expressad/reward/b/a$b;

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    invoke-direct {v1, p0, v2}, Lcom/tkay/expressad/reward/b/a$b;-><init>(Lcom/tkay/expressad/reward/b/a;Lcom/tkay/expressad/reward/a/a;)V

    .line 2067
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/reward/b/a$b;->a(Ljava/lang/Runnable;)V

    .line 2068
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/b;)V

    .line 2070
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/foundation/d/d;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 2072
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/b/a;->b(Ljava/lang/String;)V

    return-void
.end method

.method private c(Z)V
    .locals 0

    .line 152
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/b/a;->O:Z

    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/reward/b/a;)Lcom/tkay/expressad/reward/b/a$c;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a;->q:Lcom/tkay/expressad/reward/b/a$c;

    return-object p0
.end method

.method private d()Ljava/lang/String;
    .locals 2

    .line 532
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    if-eqz v0, :cond_0

    .line 533
    iget-boolean v1, p0, Lcom/tkay/expressad/reward/b/a;->Q:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/reward/a/d;->c(Z)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method private static e()V
    .locals 0

    .line 847
    invoke-static {}, Lcom/tkay/expressad/foundation/h/m;->a()V

    return-void
.end method

.method static synthetic e(Lcom/tkay/expressad/reward/b/a;)Z
    .locals 0

    .line 58
    iget-boolean p0, p0, Lcom/tkay/expressad/reward/b/a;->N:Z

    return p0
.end method

.method static synthetic f(Lcom/tkay/expressad/reward/b/a;)Ljava/lang/String;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    return-object p0
.end method

.method private f()V
    .locals 7

    .line 1953
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->n:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->I()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1954
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    const/4 v1, 0x0

    move v2, v1

    .line 1955
    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_0

    .line 1956
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/videocommon/c/b;

    .line 1957
    iget-object v4, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "_"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/c/b;->a()I

    move-result v3

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-static {v4, v3, v5}, Lcom/tkay/expressad/foundation/h/v;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void

    :catch_0
    move-exception v0

    .line 1961
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method static synthetic g(Lcom/tkay/expressad/reward/b/a;)Ljava/lang/String;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    return-object p0
.end method

.method private g()Z
    .locals 9

    .line 1973
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->n:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->I()Ljava/util/List;

    move-result-object v0

    .line 1974
    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->o:Lcom/tkay/expressad/videocommon/e/a;

    if-nez v1, :cond_0

    .line 1975
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/c;->b()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/reward/b/a;->o:Lcom/tkay/expressad/videocommon/e/a;

    .line 1977
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->o:Lcom/tkay/expressad/videocommon/e/a;

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/a;->i()Ljava/util/Map;

    move-result-object v1

    if-eqz v0, :cond_4

    .line 1978
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_4

    const/4 v2, 0x0

    move v3, v2

    .line 1979
    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v4

    if-ge v3, v4, :cond_4

    .line 1980
    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/videocommon/c/b;

    .line 1982
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/c/b;->a()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v1, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 1983
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/c/b;->a()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/Integer;

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    goto :goto_1

    :cond_1
    move v5, v2

    .line 1985
    :goto_1
    iget-object v6, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "_"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/c/b;->a()I

    move-result v4

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-static {v6, v4, v7}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_2

    .line 1988
    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :cond_2
    move v4, v2

    :goto_2
    if-ge v4, v5, :cond_3

    return v2

    :cond_3
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1998
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 1999
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_4
    const/4 v0, 0x1

    return v0
.end method

.method static synthetic h(Lcom/tkay/expressad/reward/b/a;)Lcom/tkay/expressad/videocommon/d/a;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    return-object p0
.end method

.method private h()Z
    .locals 1

    .line 2254
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    if-nez v0, :cond_0

    .line 2255
    invoke-direct {p0}, Lcom/tkay/expressad/reward/b/a;->i()V

    .line 2257
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    if-eqz v0, :cond_1

    .line 2259
    invoke-virtual {v0}, Lcom/tkay/expressad/reward/a/d;->c()Z

    move-result v0

    goto :goto_0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private i()V
    .locals 4

    .line 2336
    new-instance v0, Lcom/tkay/expressad/reward/a/d;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/reward/a/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    .line 2337
    iget-boolean v1, p0, Lcom/tkay/expressad/reward/b/a;->J:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/reward/a/d;->a(Z)V

    .line 2338
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v1, p0, Lcom/tkay/expressad/reward/b/a;->K:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/reward/a/d;->b(Z)V

    .line 2339
    iget-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->J:Z

    if-eqz v0, :cond_0

    .line 2340
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    iget v1, p0, Lcom/tkay/expressad/reward/b/a;->B:I

    iget v2, p0, Lcom/tkay/expressad/reward/b/a;->C:I

    iget v3, p0, Lcom/tkay/expressad/reward/b/a;->D:I

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/reward/a/d;->a(III)V

    .line 2342
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->n:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/videocommon/e/d;)V

    return-void
.end method

.method static synthetic i(Lcom/tkay/expressad/reward/b/a;)Z
    .locals 0

    .line 58
    iget-boolean p0, p0, Lcom/tkay/expressad/reward/b/a;->K:Z

    return p0
.end method

.method static synthetic j(Lcom/tkay/expressad/reward/b/a;)Lcom/tkay/expressad/videocommon/e/d;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a;->n:Lcom/tkay/expressad/videocommon/e/d;

    return-object p0
.end method

.method private j()Z
    .locals 1

    .line 2490
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->X:Lcom/tkay/expressad/foundation/c/c;

    if-nez v0, :cond_0

    .line 2491
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/c/c;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/c/c;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/reward/b/a;->X:Lcom/tkay/expressad/foundation/c/c;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic k(Lcom/tkay/expressad/reward/b/a;)Ljava/util/ArrayList;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a;->P:Ljava/util/ArrayList;

    return-object p0
.end method

.method static synthetic l(Lcom/tkay/expressad/reward/b/a;)Z
    .locals 1

    const/4 v0, 0x0

    .line 58
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    return v0
.end method

.method static synthetic m(Lcom/tkay/expressad/reward/b/a;)Ljava/lang/String;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a;->v:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/expressad/reward/b/a;)Z
    .locals 0

    .line 58
    iget-boolean p0, p0, Lcom/tkay/expressad/reward/b/a;->aa:Z

    return p0
.end method

.method static synthetic o(Lcom/tkay/expressad/reward/b/a;)Z
    .locals 1

    const/4 v0, 0x1

    .line 58
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->aa:Z

    return v0
.end method

.method static synthetic p(Lcom/tkay/expressad/reward/b/a;)Z
    .locals 0

    .line 58
    iget-boolean p0, p0, Lcom/tkay/expressad/reward/b/a;->ab:Z

    return p0
.end method

.method static synthetic q(Lcom/tkay/expressad/reward/b/a;)Z
    .locals 1

    const/4 v0, 0x1

    .line 58
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->ab:Z

    return v0
.end method

.method static synthetic r(Lcom/tkay/expressad/reward/b/a;)Z
    .locals 0

    .line 58
    iget-boolean p0, p0, Lcom/tkay/expressad/reward/b/a;->ac:Z

    return p0
.end method

.method static synthetic s(Lcom/tkay/expressad/reward/b/a;)Z
    .locals 1

    const/4 v0, 0x1

    .line 58
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->ac:Z

    return v0
.end method

.method static synthetic t(Lcom/tkay/expressad/reward/b/a;)Z
    .locals 0

    .line 58
    iget-boolean p0, p0, Lcom/tkay/expressad/reward/b/a;->ae:Z

    return p0
.end method

.method static synthetic u(Lcom/tkay/expressad/reward/b/a;)Z
    .locals 1

    const/4 v0, 0x1

    .line 58
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->ad:Z

    return v0
.end method

.method static synthetic v(Lcom/tkay/expressad/reward/b/a;)Z
    .locals 0

    .line 58
    iget-boolean p0, p0, Lcom/tkay/expressad/reward/b/a;->ad:Z

    return p0
.end method

.method static synthetic w(Lcom/tkay/expressad/reward/b/a;)Landroid/os/Handler;
    .locals 0

    .line 58
    iget-object p0, p0, Lcom/tkay/expressad/reward/b/a;->x:Landroid/os/Handler;

    return-object p0
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 235
    iget-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->Q:Z

    if-eqz v0, :cond_0

    .line 236
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->U:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/tkay/expressad/reward/b/a;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 237
    sget-object v0, Lcom/tkay/expressad/reward/b/a;->U:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {p0}, Lcom/tkay/expressad/reward/b/a;->d()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public final a(I)V
    .locals 0

    .line 133
    iput p1, p0, Lcom/tkay/expressad/reward/b/a;->y:I

    return-void
.end method

.method public final a(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/i;)V
    .locals 9

    const/4 v0, 0x0

    .line 2348
    :try_start_0
    iput-object p2, p0, Lcom/tkay/expressad/reward/b/a;->v:Ljava/lang/String;

    .line 2349
    iput-object p3, p0, Lcom/tkay/expressad/reward/b/a;->r:Ljava/lang/String;

    .line 2350
    iput-object p4, p0, Lcom/tkay/expressad/reward/b/a;->u:Ljava/lang/String;

    .line 2351
    iget-object p3, p0, Lcom/tkay/expressad/reward/b/a;->S:Ljava/lang/Object;

    monitor-enter p3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_8

    .line 2352
    :try_start_1
    iget-boolean p4, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    if-eqz p4, :cond_1

    .line 2353
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p1, :cond_0

    .line 2355
    :try_start_2
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    const-string p2, "Campaign is show progressing "

    invoke-interface {p1, p2}, Lcom/tkay/expressad/videocommon/d/a;->b(Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2357
    :try_start_3
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_0

    .line 2358
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2362
    :cond_0
    :goto_0
    monitor-exit p3

    return-void

    :cond_1
    const/4 p4, 0x1

    .line 2364
    iput-boolean p4, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    .line 2366
    monitor-exit p3
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 2368
    :try_start_4
    iget-object p3, p0, Lcom/tkay/expressad/reward/b/a;->q:Lcom/tkay/expressad/reward/b/a$c;

    if-eqz p3, :cond_3

    iget-object p3, p0, Lcom/tkay/expressad/reward/b/a;->q:Lcom/tkay/expressad/reward/b/a$c;

    invoke-static {p3}, Lcom/tkay/expressad/reward/b/a$c;->c(Lcom/tkay/expressad/reward/b/a$c;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object p3

    invoke-virtual {p3}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p3

    if-ne p3, p4, :cond_3

    .line 2369
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_8

    if-eqz p1, :cond_2

    .line 2371
    :try_start_5
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    const-string p2, "campaing is loading"

    invoke-interface {p1, p2}, Lcom/tkay/expressad/videocommon/d/a;->b(Ljava/lang/String;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 2373
    :try_start_6
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_2

    .line 2374
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2382
    :cond_2
    :goto_1
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    return-void

    .line 2385
    :cond_3
    iget-object p3, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    if-nez p3, :cond_5

    .line 2386
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_8

    if-eqz p1, :cond_4

    .line 2388
    :try_start_7
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    const-string p2, "context is null"

    invoke-interface {p1, p2}, Lcom/tkay/expressad/videocommon/d/a;->b(Ljava/lang/String;)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_2

    goto :goto_2

    :catch_2
    move-exception p1

    .line 2390
    :try_start_8
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_4

    .line 2391
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2399
    :cond_4
    :goto_2
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    return-void

    .line 2403
    :cond_5
    iget-boolean p3, p0, Lcom/tkay/expressad/reward/b/a;->J:Z

    if-eqz p3, :cond_7

    iget-object p3, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    invoke-static {p3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;)Z

    move-result p3

    if-nez p3, :cond_7

    .line 2404
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_8

    if-eqz p1, :cond_6

    .line 2406
    :try_start_9
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    const-string p2, "network exception"

    invoke-interface {p1, p2}, Lcom/tkay/expressad/videocommon/d/a;->b(Ljava/lang/String;)V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_3

    goto :goto_3

    :catch_3
    move-exception p1

    .line 2408
    :try_start_a
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_6

    .line 2409
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2416
    :cond_6
    :goto_3
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    return-void

    .line 2419
    :cond_7
    invoke-direct {p0}, Lcom/tkay/expressad/reward/b/a;->j()Z
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_8

    .line 2447
    :try_start_b
    new-instance p3, Ljava/text/SimpleDateFormat;

    const-string p4, "dd"

    invoke-direct {p3, p4}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 2448
    new-instance p4, Ljava/util/Date;

    invoke-direct {p4}, Ljava/util/Date;-><init>()V

    invoke-virtual {p3, p4}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object p3

    .line 2450
    iget-object p4, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    const-string v1, "reward_date"

    const-string v2, "0"

    invoke-static {p4, v1, v2}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p4

    check-cast p4, Ljava/lang/String;

    .line 2451
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_8

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_8

    .line 2452
    invoke-virtual {p4, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p4

    if-nez p4, :cond_8

    .line 2453
    iget-object p4, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    const-string v1, "reward_date"

    invoke-static {p4, v1, p3}, Lcom/tkay/expressad/foundation/h/v;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V

    .line 2454
    iget-object p3, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    invoke-virtual {p4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_1"

    invoke-virtual {p4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-static {p3, p4, v1}, Lcom/tkay/expressad/foundation/h/v;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_4

    .line 4120
    :catch_4
    :cond_8
    :try_start_c
    iget-object p3, p0, Lcom/tkay/expressad/reward/b/a;->o:Lcom/tkay/expressad/videocommon/e/a;

    if-eqz p3, :cond_9

    .line 4121
    iget-object p3, p0, Lcom/tkay/expressad/reward/b/a;->o:Lcom/tkay/expressad/videocommon/e/a;

    invoke-virtual {p3}, Lcom/tkay/expressad/videocommon/e/a;->i()Ljava/util/Map;

    move-result-object p3

    if-eqz p3, :cond_9

    const-string p4, "1"

    .line 4122
    invoke-interface {p3, p4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p4

    if-eqz p4, :cond_9

    const-string p4, "1"

    .line 4123
    invoke-interface {p3, p4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/lang/Integer;

    invoke-virtual {p3}, Ljava/lang/Integer;->intValue()I

    move-result p3

    goto :goto_4

    :cond_9
    move p3, v0

    .line 4126
    :goto_4
    iget-object p4, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_1"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {p4, v1, v2}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p4

    if-eqz p4, :cond_a

    .line 4127
    iget-object p4, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_1"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-static {p4, v1, v2}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p4

    check-cast p4, Ljava/lang/Integer;

    invoke-virtual {p4}, Ljava/lang/Integer;->intValue()I

    move-result p4

    iput p4, p0, Lcom/tkay/expressad/reward/b/a;->l:I

    .line 4130
    :cond_a
    iget-object p4, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    if-nez p4, :cond_b

    .line 4131
    invoke-direct {p0}, Lcom/tkay/expressad/reward/b/a;->i()V

    .line 4133
    :cond_b
    iget-object p4, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    if-eqz p4, :cond_d

    .line 4140
    iget-object p4, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    invoke-virtual {p4}, Lcom/tkay/expressad/reward/a/d;->c()Z

    move-result p4

    if-eqz p4, :cond_d

    .line 4143
    iget p4, p0, Lcom/tkay/expressad/reward/b/a;->l:I

    if-lt p4, p3, :cond_c

    if-lez p3, :cond_c

    .line 4144
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    return-void

    .line 4148
    :cond_c
    new-instance v3, Lcom/tkay/expressad/reward/b/a$d;

    iget-object p3, p0, Lcom/tkay/expressad/reward/b/a;->x:Landroid/os/Handler;

    invoke-direct {v3, p0, p0, p3}, Lcom/tkay/expressad/reward/b/a$d;-><init>(Lcom/tkay/expressad/reward/b/a;Lcom/tkay/expressad/reward/b/a;Landroid/os/Handler;)V

    .line 4149
    sget-object p3, Lcom/tkay/expressad/reward/b/a;->c:Ljava/util/Map;

    iget-object p4, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    invoke-interface {p3, p4, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4150
    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    iget-object v5, p0, Lcom/tkay/expressad/reward/b/a;->r:Ljava/lang/String;

    iget v6, p0, Lcom/tkay/expressad/reward/b/a;->y:I

    iget-object v7, p0, Lcom/tkay/expressad/reward/b/a;->u:Ljava/lang/String;

    move-object v2, p1

    move-object v4, p2

    move-object v8, p5

    invoke-virtual/range {v1 .. v8}, Lcom/tkay/expressad/reward/a/d;->a(Landroid/app/Activity;Lcom/tkay/expressad/video/bt/module/b/h;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/tkay/core/common/f/i;)V

    return-void

    .line 4178
    :cond_d
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    .line 4180
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;
    :try_end_c
    .catch Ljava/lang/Exception; {:try_start_c .. :try_end_c} :catch_6

    if-eqz p1, :cond_e

    .line 4182
    :try_start_d
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    const-string p2, "can\'t show because load is failed"

    invoke-interface {p1, p2}, Lcom/tkay/expressad/videocommon/d/a;->b(Ljava/lang/String;)V
    :try_end_d
    .catch Ljava/lang/Exception; {:try_start_d .. :try_end_d} :catch_5

    return-void

    :catch_5
    move-exception p1

    .line 4184
    :try_start_e
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_e

    .line 4185
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_e
    .catch Ljava/lang/Exception; {:try_start_e .. :try_end_e} :catch_6

    :cond_e
    return-void

    :catch_6
    move-exception p1

    .line 4199
    :try_start_f
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_f

    .line 4200
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    .line 4202
    :cond_f
    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;
    :try_end_f
    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_f} :catch_8

    if-eqz p2, :cond_10

    .line 4204
    :try_start_10
    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    const-string p3, "show exception"

    invoke-interface {p2, p3}, Lcom/tkay/expressad/videocommon/d/a;->b(Ljava/lang/String;)V
    :try_end_10
    .catch Ljava/lang/Exception; {:try_start_10 .. :try_end_10} :catch_7

    goto :goto_5

    .line 4206
    :catch_7
    :try_start_11
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_10

    .line 4207
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 4215
    :cond_10
    :goto_5
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    return-void

    :catchall_0
    move-exception p1

    .line 2366
    monitor-exit p3

    throw p1
    :try_end_11
    .catch Ljava/lang/Exception; {:try_start_11 .. :try_end_11} :catch_8

    :catch_8
    move-exception p1

    .line 2463
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_11

    .line 2464
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    .line 2466
    :cond_11
    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    if-eqz p2, :cond_12

    .line 2468
    :try_start_12
    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    const-string p3, "show exception"

    invoke-interface {p2, p3}, Lcom/tkay/expressad/videocommon/d/a;->b(Ljava/lang/String;)V
    :try_end_12
    .catch Ljava/lang/Exception; {:try_start_12 .. :try_end_12} :catch_9

    goto :goto_6

    .line 2470
    :catch_9
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_12

    .line 2471
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2478
    :cond_12
    :goto_6
    iput-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->R:Z

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 5

    if-nez p1, :cond_0

    .line 925
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->q:Lcom/tkay/expressad/reward/b/a$c;

    const-string v0, "Campaign data is NULL"

    invoke-static {p1, v0}, Lcom/tkay/expressad/reward/b/a$c;->b(Lcom/tkay/expressad/reward/b/a$c;Ljava/lang/String;)V

    return-void

    .line 929
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->q:Lcom/tkay/expressad/reward/b/a$c;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->q:Lcom/tkay/expressad/reward/b/a$c;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a$c;->a(Lcom/tkay/expressad/reward/b/a$c;)I

    move-result v0

    const/4 v3, 0x3

    if-ne v0, v3, :cond_1

    .line 931
    iput-boolean v2, p0, Lcom/tkay/expressad/reward/b/a;->Y:Z

    goto :goto_0

    .line 933
    :cond_1
    iput-boolean v1, p0, Lcom/tkay/expressad/reward/b/a;->Y:Z

    .line 934
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->q:Lcom/tkay/expressad/reward/b/a$c;

    invoke-static {v0}, Lcom/tkay/expressad/reward/b/a$c;->b(Lcom/tkay/expressad/reward/b/a$c;)V

    .line 936
    :goto_0
    iput-boolean v1, p0, Lcom/tkay/expressad/reward/b/a;->N:Z

    .line 937
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->x:Landroid/os/Handler;

    const v1, 0xf4629

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 938
    iput-boolean v2, p0, Lcom/tkay/expressad/reward/b/a;->ab:Z

    .line 939
    iput-boolean v2, p0, Lcom/tkay/expressad/reward/b/a;->aa:Z

    .line 940
    iput-boolean v2, p0, Lcom/tkay/expressad/reward/b/a;->ac:Z

    .line 941
    iput-boolean v2, p0, Lcom/tkay/expressad/reward/b/a;->ad:Z

    .line 946
    invoke-static {}, Lcom/tkay/expressad/reward/a/c;->a()Lcom/tkay/expressad/reward/a/c;

    .line 983
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    iget-boolean v3, p0, Lcom/tkay/expressad/reward/b/a;->J:Z

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/reward/b/a;->n:Lcom/tkay/expressad/videocommon/e/d;

    .line 1008
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 1010
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->n:Lcom/tkay/expressad/videocommon/e/d;

    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/e/d;->b(Ljava/lang/String;)V

    .line 1012
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->n:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->S()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    .line 1013
    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->x:Landroid/os/Handler;

    if-eqz v1, :cond_3

    .line 1014
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "start load timeout for "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " ms"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1015
    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->x:Landroid/os/Handler;

    const v2, 0xf462a

    int-to-long v3, v0

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 1017
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->n:Lcom/tkay/expressad/videocommon/e/d;

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->Q()Ljava/util/Queue;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/reward/b/a;->V:Ljava/util/Queue;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3

    .line 1021
    :try_start_1
    invoke-direct {p0}, Lcom/tkay/expressad/reward/b/a;->g()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 1025
    invoke-direct {p0}, Lcom/tkay/expressad/reward/b/a;->f()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 1029
    :try_start_2
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_4

    .line 1030
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3

    .line 3019
    :cond_4
    :goto_1
    :try_start_3
    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/b/a;->c(Lcom/tkay/expressad/foundation/d/d;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    return-void

    :catch_1
    move-exception p1

    .line 3023
    :try_start_4
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "load mv api error:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/tkay/expressad/reward/b/a;->b(Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    return-void

    :catch_2
    move-exception p1

    :try_start_5
    const-string v0, "can\'t show because unknow error"

    .line 3030
    invoke-direct {p0, v0}, Lcom/tkay/expressad/reward/b/a;->b(Ljava/lang/String;)V

    .line 3031
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_5

    .line 3032
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3

    :cond_5
    return-void

    :catch_3
    move-exception p1

    .line 1054
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->q:Lcom/tkay/expressad/reward/b/a$c;

    if-eqz v0, :cond_6

    .line 1055
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a;->q:Lcom/tkay/expressad/reward/b/a$c;

    const-string v1, "load exception"

    invoke-static {v0, v1}, Lcom/tkay/expressad/reward/b/a$c;->a(Lcom/tkay/expressad/reward/b/a$c;Ljava/lang/String;)V

    .line 1059
    :cond_6
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-eqz v0, :cond_7

    .line 1060
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_7
    return-void
.end method

.method public final a(Lcom/tkay/expressad/videocommon/d/a;)V
    .locals 7

    .line 801
    iput-object p1, p0, Lcom/tkay/expressad/reward/b/a;->p:Lcom/tkay/expressad/videocommon/d/a;

    .line 802
    new-instance v6, Lcom/tkay/expressad/reward/b/a$c;

    iget-object v3, p0, Lcom/tkay/expressad/reward/b/a;->x:Landroid/os/Handler;

    iget-object v4, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    const/4 v5, 0x0

    move-object v0, v6

    move-object v1, p0

    move-object v2, p1

    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/reward/b/a$c;-><init>(Lcom/tkay/expressad/reward/b/a;Lcom/tkay/expressad/videocommon/d/a;Landroid/os/Handler;Ljava/lang/String;B)V

    iput-object v6, p0, Lcom/tkay/expressad/reward/b/a;->q:Lcom/tkay/expressad/reward/b/a$c;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 808
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/reward/b/a;->k:Landroid/content/Context;

    .line 809
    iput-object p2, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    .line 810
    iput-object p1, p0, Lcom/tkay/expressad/reward/b/a;->t:Ljava/lang/String;

    .line 813
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/c;->b()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/reward/b/a;->o:Lcom/tkay/expressad/videocommon/e/a;

    .line 817
    invoke-static {}, Lcom/tkay/expressad/foundation/h/m;->b()V

    .line 820
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/k;->a()Lcom/tkay/expressad/videocommon/b/k;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/b/k;->b()V

    .line 823
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/h;->a()Lcom/tkay/expressad/videocommon/b/h;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/b/h;->b()V

    .line 824
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/expressad/reward/b/a;->s:Ljava/lang/String;

    iget-boolean v0, p0, Lcom/tkay/expressad/reward/b/a;->J:Z

    invoke-virtual {p1, p2, v0}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Z)V

    .line 834
    iget-object p1, p0, Lcom/tkay/expressad/reward/b/a;->X:Lcom/tkay/expressad/foundation/c/c;

    if-nez p1, :cond_0

    .line 835
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/c/c;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/c/c;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/reward/b/a;->X:Lcom/tkay/expressad/foundation/c/c;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 838
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 103
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/b/a;->J:Z

    return-void
.end method

.method public isReady()Z
    .locals 3

    const/4 v0, 0x0

    .line 2225
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/reward/b/a;->j()Z

    .line 2226
    iget-boolean v1, p0, Lcom/tkay/expressad/reward/b/a;->K:Z

    if-nez v1, :cond_1

    .line 3254
    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    if-nez v1, :cond_0

    .line 3255
    invoke-direct {p0}, Lcom/tkay/expressad/reward/b/a;->i()V

    .line 3257
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    if-eqz v1, :cond_1

    .line 3259
    iget-object v1, p0, Lcom/tkay/expressad/reward/b/a;->m:Lcom/tkay/expressad/reward/a/d;

    invoke-virtual {v1}, Lcom/tkay/expressad/reward/a/d;->c()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 2240
    sget-boolean v2, Lcom/tkay/expressad/b;->a:Z

    if-eqz v2, :cond_1

    .line 2241
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    return v0
.end method
