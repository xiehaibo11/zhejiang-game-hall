.class public final Lcom/loc/m;
.super Ljava/lang/Object;
.source "AuthConfigManager.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/loc/m$a;,
        Lcom/loc/m$d;,
        Lcom/loc/m$f;,
        Lcom/loc/m$e;,
        Lcom/loc/m$c;,
        Lcom/loc/m$b;,
        Lcom/loc/m$g;
    }
.end annotation


# static fields
.field private static A:Ljava/util/concurrent/ConcurrentHashMap; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field private static B:Ljava/util/concurrent/ConcurrentHashMap; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field private static C:Ljava/util/ArrayList; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/loc/br$a;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile D:Z = false

.field private static E:Ljava/util/Queue; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Queue<",
            "Lcom/loc/br$c;",
            ">;"
        }
    .end annotation
.end field

.field public static a:I = -0x1

.field public static b:Ljava/lang/String; = ""

.field public static c:Landroid/content/Context; = null

.field public static volatile d:Z = false

.field public static e:I = 0x0

.field public static f:Z = false

.field public static g:Z = false

.field public static h:Z = false

.field public static i:Z = false

.field public static j:Z = false

.field private static k:Ljava/lang/String; = "6"

.field private static l:Ljava/lang/String; = "4"

.field private static m:Ljava/lang/String; = "9"

.field private static n:Ljava/lang/String; = "8"

.field private static volatile o:Z = true

.field private static p:Ljava/util/Vector;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Vector<",
            "Lcom/loc/m$e;",
            ">;"
        }
    .end annotation
.end field

.field private static q:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private static r:Ljava/lang/String;

.field private static s:J

.field private static volatile t:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/loc/m$g;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile u:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile v:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/loc/m$d;",
            ">;"
        }
    .end annotation
.end field

.field private static w:Z

.field private static x:Z

.field private static y:I

.field private static z:I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Ljava/util/Vector;

    invoke-direct {v0}, Ljava/util/Vector;-><init>()V

    sput-object v0, Lcom/loc/m;->p:Ljava/util/Vector;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/loc/m;->q:Ljava/util/Map;

    const/4 v0, 0x0

    sput-object v0, Lcom/loc/m;->r:Ljava/lang/String;

    const-wide/16 v0, 0x0

    sput-wide v0, Lcom/loc/m;->s:J

    const/4 v0, 0x0

    sput-boolean v0, Lcom/loc/m;->d:Z

    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    const/16 v2, 0x8

    invoke-direct {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v1, Lcom/loc/m;->t:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v1, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v1, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    sput-boolean v0, Lcom/loc/m;->w:Z

    sput-boolean v0, Lcom/loc/m;->x:Z

    const/16 v1, 0x1388

    sput v1, Lcom/loc/m;->e:I

    const/4 v1, 0x1

    sput-boolean v1, Lcom/loc/m;->f:Z

    sput-boolean v0, Lcom/loc/m;->g:Z

    const/4 v2, 0x3

    sput v2, Lcom/loc/m;->y:I

    sput-boolean v1, Lcom/loc/m;->h:Z

    sput-boolean v0, Lcom/loc/m;->i:Z

    sput v2, Lcom/loc/m;->z:I

    sput-boolean v0, Lcom/loc/m;->j:Z

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/loc/m;->A:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/loc/m;->B:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/loc/m;->C:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    sput-object v0, Lcom/loc/m;->E:Ljava/util/Queue;

    return-void
.end method

.method public static a(Ljava/util/List;)J
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)J"
        }
    .end annotation

    if-eqz p0, :cond_0

    :try_start_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x0

    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p0}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-wide v0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public static a(Landroid/content/Context;Lcom/loc/w;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/loc/m$b;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/loc/w;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Lcom/loc/m$b;"
        }
    .end annotation

    invoke-static/range {p0 .. p5}, Lcom/loc/m;->b(Landroid/content/Context;Lcom/loc/w;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/loc/m$b;

    move-result-object p0

    return-object p0
.end method

.method private static declared-synchronized a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Lcom/loc/m$e;
    .locals 6

    const-class v0, Lcom/loc/m;

    monitor-enter v0

    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x0

    if-nez v1, :cond_1

    const/4 v1, 0x0

    :goto_0
    sget-object v4, Lcom/loc/m;->p:Ljava/util/Vector;

    invoke-virtual {v4}, Ljava/util/Vector;->size()I

    move-result v4

    if-ge v1, v4, :cond_1

    sget-object v4, Lcom/loc/m;->p:Ljava/util/Vector;

    invoke-virtual {v4, v1}, Ljava/util/Vector;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/loc/m$e;

    if-eqz v4, :cond_0

    invoke-static {v4}, Lcom/loc/m$e;->c(Lcom/loc/m$e;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v5, :cond_0

    goto :goto_1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    move-object v4, v2

    :goto_1
    if-eqz v4, :cond_2

    monitor-exit v0

    return-object v4

    :cond_2
    if-nez p0, :cond_3

    monitor-exit v0

    return-object v2

    :cond_3
    :try_start_1
    const-string v1, ""

    invoke-static {p0, p2, p1, v1}, Lcom/loc/bd;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/loc/m$e;->b(Ljava/lang/String;)Lcom/loc/m$e;

    move-result-object p0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-string p2, "yyyyMMdd"

    invoke-static {v1, v2, p2}, Lcom/loc/x;->a(JLjava/lang/String;)Ljava/lang/String;

    move-result-object p2

    if-nez p0, :cond_4

    new-instance p0, Lcom/loc/m$e;

    invoke-direct {p0, p1, p2, v3}, Lcom/loc/m$e;-><init>(Ljava/lang/String;Ljava/lang/String;I)V

    :cond_4
    invoke-static {p0}, Lcom/loc/m$e;->a(Lcom/loc/m$e;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_5

    invoke-virtual {p0, p2}, Lcom/loc/m$e;->a(Ljava/lang/String;)V

    invoke-static {p0}, Lcom/loc/m$e;->b(Lcom/loc/m$e;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object p1

    invoke-virtual {p1, v3}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    :cond_5
    sget-object p1, Lcom/loc/m;->p:Ljava/util/Vector;

    invoke-virtual {p1, p0}, Ljava/util/Vector;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/loc/m$d;

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/loc/m$d;->b:Ljava/lang/String;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Landroid/content/Context;)V
    .locals 0

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    sput-object p0, Lcom/loc/m;->c:Landroid/content/Context;

    :cond_0
    return-void
.end method

.method private static a(Landroid/content/Context;Lcom/loc/w;Ljava/lang/String;)V
    .locals 3

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "amap_sdk_auth_fail"

    const-string v2, "1"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "amap_sdk_auth_fail_type"

    invoke-virtual {v0, v1, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object p2

    const-string v1, "amap_sdk_name"

    invoke-virtual {v0, v1, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/loc/w;->c()Ljava/lang/String;

    move-result-object p1

    const-string p2, "amap_sdk_version"

    invoke-virtual {v0, p2, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, v0}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    return-void

    :cond_0
    :try_start_0
    new-instance p2, Lcom/loc/bz;

    const-string v0, "core"

    const-string v1, "2.0"

    const-string v2, "O001"

    invoke-direct {p2, p0, v0, v1, v2}, Lcom/loc/bz;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Lcom/loc/bz;->a(Ljava/lang/String;)V

    invoke-static {p2, p0}, Lcom/loc/ca;->a(Lcom/loc/bz;Landroid/content/Context;)V
    :try_end_0
    .catch Lcom/loc/k; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public static declared-synchronized a(Landroid/content/Context;Lcom/loc/w;Ljava/lang/String;Lcom/loc/m$a;)V
    .locals 4

    const-class v0, Lcom/loc/m;

    monitor-enter v0

    if-eqz p0, :cond_7

    if-nez p1, :cond_0

    goto/16 :goto_0

    :cond_0
    :try_start_0
    sget-object v1, Lcom/loc/m;->c:Landroid/content/Context;

    if-nez v1, :cond_1

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    sput-object p0, Lcom/loc/m;->c:Landroid/content/Context;

    :cond_1
    invoke-virtual {p1}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_2

    monitor-exit v0

    return-void

    :cond_2
    :try_start_1
    invoke-static {p1}, Lcom/loc/m;->a(Lcom/loc/w;)V

    sget-object v1, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    const/16 v2, 0x8

    if-nez v1, :cond_3

    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v1, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    :cond_3
    sget-object v1, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v1, :cond_4

    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v1, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    :cond_4
    sget-object v1, Lcom/loc/m;->t:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v1, :cond_5

    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v1, Lcom/loc/m;->t:Ljava/util/concurrent/ConcurrentHashMap;

    :cond_5
    sget-object v1, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_6

    new-instance v1, Lcom/loc/m$d;

    const/4 v2, 0x0

    invoke-direct {v1, v2}, Lcom/loc/m$d;-><init>(B)V

    iput-object p1, v1, Lcom/loc/m$d;->a:Lcom/loc/w;

    iput-object p2, v1, Lcom/loc/m$d;->b:Ljava/lang/String;

    iput-object p3, v1, Lcom/loc/m$d;->c:Lcom/loc/m$a;

    sget-object p1, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1, p0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object p1, Lcom/loc/m;->c:Landroid/content/Context;

    const-string p2, "open_common"

    const-wide/16 v1, 0x0

    invoke-static {p1, p2, p0, v1, v2}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide p1

    sget-object p3, Lcom/loc/m;->c:Landroid/content/Context;

    const-string v1, "open_common"

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "lct-info"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, ""

    invoke-static {p3, v1, v2, v3}, Lcom/loc/bd;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    sget-object v1, Lcom/loc/m;->t:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v2, Lcom/loc/m$g;

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-direct {v2, p1, p3}, Lcom/loc/m$g;-><init>(Ljava/lang/Long;Ljava/lang/String;)V

    invoke-virtual {v1, p0, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object p0, Lcom/loc/m;->c:Landroid/content/Context;

    invoke-static {p0}, Lcom/loc/m;->d(Landroid/content/Context;)V

    sget-object p0, Lcom/loc/m;->c:Landroid/content/Context;

    invoke-static {p0}, Lcom/loc/m;->e(Landroid/content/Context;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_6
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    :try_start_2
    const-string p1, "at"

    const-string p2, "rglc"

    invoke-static {p0, p1, p2}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    monitor-exit v0

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0

    :cond_7
    :goto_0
    monitor-exit v0

    return-void
.end method

.method private static a(Landroid/content/Context;Lcom/loc/w;Ljava/lang/String;Lcom/loc/m$b;Lorg/json/JSONObject;)V
    .locals 18
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v2, p3

    move-object/from16 v3, p4

    const-string v4, "ust"

    const-string v5, "umv"

    const-string v6, "usc"

    const-string v7, "fsv2"

    const-string v8, "ucf"

    const-string v9, "off"

    new-instance v10, Lcom/loc/m$b$a;

    invoke-direct {v10}, Lcom/loc/m$b$a;-><init>()V

    const/4 v11, 0x0

    iput-boolean v11, v10, Lcom/loc/m$b$a;->a:Z

    iput-boolean v11, v10, Lcom/loc/m$b$a;->b:Z

    iput-object v10, v2, Lcom/loc/m$b;->g:Lcom/loc/m$b$a;

    :try_start_0
    const-string v0, ";"

    move-object/from16 v12, p2

    invoke-virtual {v12, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    array-length v12, v0

    if-lez v12, :cond_1

    array-length v12, v0

    const/4 v13, 0x0

    :goto_0
    if-ge v13, v12, :cond_1

    aget-object v14, v0, v13

    invoke-virtual {v3, v14}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v15

    if-eqz v15, :cond_0

    iget-object v15, v2, Lcom/loc/m$b;->f:Lorg/json/JSONObject;

    invoke-virtual {v3, v14}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v11

    invoke-virtual {v15, v14, v11}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    add-int/lit8 v13, v13, 0x1

    const/4 v11, 0x0

    goto :goto_0

    :catchall_0
    move-exception v0

    const-string v11, "at"

    const-string v12, "co"

    invoke-static {v0, v11, v12}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    const-string v0, "16H"

    invoke-static {v3, v0}, Lcom/loc/x;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v11

    const-string v12, "able"

    const-string v13, "AuthConfigManager"

    if-eqz v11, :cond_2

    :try_start_1
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const/4 v11, 0x0

    invoke-static {v0, v11}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v0

    invoke-static {v2, v0}, Lcom/loc/m$b;->a(Lcom/loc/m$b;Z)Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v0

    const-string v11, "load 16H"

    invoke-static {v0, v13, v11}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_1
    const-string v0, "11K"

    invoke-static {v3, v0}, Lcom/loc/x;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_3

    :try_start_2
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    const/4 v14, 0x0

    invoke-static {v11, v14}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v11

    iput-boolean v11, v10, Lcom/loc/m$b$a;->a:Z

    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_3

    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, v10, Lcom/loc/m$b$a;->c:Lorg/json/JSONObject;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v0

    const-string v9, "load 11K"

    invoke-static {v0, v13, v9}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_2
    const-string v0, "145"

    invoke-static {v3, v0}, Lcom/loc/x;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_4

    :try_start_3
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, v2, Lcom/loc/m$b;->a:Lorg/json/JSONObject;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_3

    :catchall_3
    move-exception v0

    const-string v9, "load 145"

    invoke-static {v0, v13, v9}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_3
    const-string v0, "14D"

    invoke-static {v3, v0}, Lcom/loc/x;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_5

    :try_start_4
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, v2, Lcom/loc/m$b;->b:Lorg/json/JSONObject;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    goto :goto_4

    :catchall_4
    move-exception v0

    const-string v9, "load 14D"

    invoke-static {v0, v13, v9}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_4
    const-string v0, "151"

    invoke-static {v3, v0}, Lcom/loc/x;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_7

    :try_start_5
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    new-instance v9, Lcom/loc/m$b$b;

    invoke-direct {v9}, Lcom/loc/m$b$b;-><init>()V

    if-eqz v0, :cond_6

    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const/4 v10, 0x0

    invoke-static {v0, v10}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, v9, Lcom/loc/m$b$b;->a:Z

    :cond_6
    iput-object v9, v2, Lcom/loc/m$b;->h:Lcom/loc/m$b$b;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_5

    goto :goto_5

    :catchall_5
    move-exception v0

    const-string v2, "load 151"

    invoke-static {v0, v13, v2}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    :goto_5
    const-string v0, "17S"

    invoke-static {v3, v0}, Lcom/loc/x;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v2

    const-string v9, "open_common"

    if-eqz v2, :cond_b

    :try_start_6
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_8

    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const/4 v10, 0x0

    invoke-static {v2, v10}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v2

    sget-boolean v10, Lcom/loc/m;->o:Z

    if-eq v2, v10, :cond_8

    sput-boolean v2, Lcom/loc/m;->o:Z

    if-eqz v1, :cond_8

    invoke-static {v1, v9}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v10

    const-string v11, "a2"

    invoke-static {v10, v11, v2}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Z)V

    invoke-static {v10}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;)V

    :cond_8
    if-eqz v0, :cond_b

    const-string v2, "static_enable"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const/4 v10, 0x1

    invoke-static {v2, v10}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v2

    const-string v11, "static_ip_direct_enable"

    invoke-virtual {v0, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    const/4 v12, 0x0

    invoke-static {v11, v12}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v11

    const-string v12, "static_timeout"

    const/4 v14, 0x5

    invoke-virtual {v0, v12, v14}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v12

    mul-int/lit16 v12, v12, 0x3e8

    const-string v14, "static_retry"

    const/4 v15, 0x3

    invoke-virtual {v0, v14, v15}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v14

    const-string v15, "bgp_enable"

    invoke-virtual {v0, v15}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    invoke-static {v15, v10}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v10

    const-string v15, "bgp_ip_direct_enable"

    invoke-virtual {v0, v15}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_8

    move-object/from16 v16, v4

    const/4 v4, 0x0

    :try_start_7
    invoke-static {v15, v4}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v15

    const-string v4, "bgp_retry"
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_7

    move-object/from16 v17, v5

    const/4 v5, 0x3

    :try_start_8
    invoke-virtual {v0, v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string v5, "perf_data_upload_enable"

    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const/4 v5, 0x0

    invoke-static {v0, v5}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v0

    sget-boolean v5, Lcom/loc/m;->f:Z

    if-ne v2, v5, :cond_9

    sget-boolean v5, Lcom/loc/m;->g:Z

    if-ne v11, v5, :cond_9

    sget v5, Lcom/loc/m;->e:I

    if-ne v12, v5, :cond_9

    sget v5, Lcom/loc/m;->y:I

    if-ne v14, v5, :cond_9

    sget-boolean v5, Lcom/loc/m;->h:Z

    if-ne v10, v5, :cond_9

    sget-boolean v5, Lcom/loc/m;->i:Z

    if-ne v15, v5, :cond_9

    sget v5, Lcom/loc/m;->z:I

    if-ne v4, v5, :cond_9

    sget-boolean v5, Lcom/loc/m;->j:Z

    if-eq v0, v5, :cond_a

    :cond_9
    sput-boolean v2, Lcom/loc/m;->f:Z

    sput-boolean v11, Lcom/loc/m;->g:Z

    sput v12, Lcom/loc/m;->e:I

    sput v14, Lcom/loc/m;->y:I

    sput-boolean v10, Lcom/loc/m;->h:Z

    sput-boolean v15, Lcom/loc/m;->i:Z

    sput v4, Lcom/loc/m;->z:I

    sput-boolean v0, Lcom/loc/m;->j:Z

    if-eqz v1, :cond_a

    invoke-static {v1, v9}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v5

    const-string v1, "a13"

    invoke-static {v5, v1, v2}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Z)V

    const-string v1, "a6"

    invoke-static {v5, v1, v10}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Z)V

    const-string v1, "a7"

    invoke-static {v5, v1, v11}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Z)V

    const-string v1, "a8"

    invoke-static {v5, v1, v12}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;I)V

    const-string v1, "a9"

    invoke-static {v5, v1, v14}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;I)V

    const-string v1, "a10"

    invoke-static {v5, v1, v15}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Z)V

    const-string v1, "a11"

    invoke-static {v5, v1, v4}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;I)V

    const-string v1, "a12"

    invoke-static {v5, v1, v0}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Z)V

    invoke-static {v5}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;)V

    :cond_a
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "static_enable="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-boolean v1, Lcom/loc/m;->f:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/loc/br;->a()V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "bgp_enable="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-boolean v1, Lcom/loc/m;->h:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/loc/br;->a()V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "static_ip_direct_enable="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-boolean v1, Lcom/loc/m;->g:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/loc/br;->a()V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "bgp_ip_direct_enable="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-boolean v1, Lcom/loc/m;->i:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/loc/br;->a()V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "perf_data_upload_enable="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-boolean v1, Lcom/loc/m;->j:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/loc/br;->a()V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_6

    goto :goto_8

    :catchall_6
    move-exception v0

    goto :goto_7

    :catchall_7
    move-exception v0

    goto :goto_6

    :catchall_8
    move-exception v0

    move-object/from16 v16, v4

    :goto_6
    move-object/from16 v17, v5

    :goto_7
    const-string v1, "load 17S"

    invoke-static {v0, v13, v1}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_8

    :cond_b
    move-object/from16 v16, v4

    move-object/from16 v17, v5

    :goto_8
    const-string v0, "15K"

    invoke-static {v3, v0}, Lcom/loc/x;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_d

    :try_start_9
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_d

    invoke-virtual {v0, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sget-boolean v2, Lcom/loc/m$f;->a:Z

    invoke-static {v1, v2}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v1

    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    sget-boolean v4, Lcom/loc/m$f;->b:Z

    invoke-static {v2, v4}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v2

    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    sget-boolean v5, Lcom/loc/m$f;->c:Z

    invoke-static {v4, v5}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v4

    sget v5, Lcom/loc/m$f;->d:I

    move-object/from16 v10, v17

    invoke-virtual {v0, v10, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    move-object/from16 v11, v16

    invoke-virtual {v0, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    sget-boolean v14, Lcom/loc/m$f;->e:Z

    invoke-static {v12, v14}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v12

    const-string v14, "ustv"

    sget v15, Lcom/loc/m$f;->f:I

    invoke-virtual {v0, v14, v15}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    sget-boolean v14, Lcom/loc/m$f;->a:Z

    if-ne v1, v14, :cond_c

    sget-boolean v14, Lcom/loc/m$f;->b:Z

    if-ne v2, v14, :cond_c

    sget-boolean v14, Lcom/loc/m$f;->c:Z

    if-ne v4, v14, :cond_c

    sget v14, Lcom/loc/m$f;->d:I

    if-ne v5, v14, :cond_c

    sget-boolean v14, Lcom/loc/m$f;->e:Z

    if-ne v12, v14, :cond_c

    sget v14, Lcom/loc/m$f;->d:I

    if-eq v0, v14, :cond_d

    :cond_c
    sput-boolean v1, Lcom/loc/m$f;->a:Z

    sput-boolean v2, Lcom/loc/m$f;->b:Z

    sput-boolean v4, Lcom/loc/m$f;->c:Z

    sput v5, Lcom/loc/m$f;->d:I

    sput-boolean v12, Lcom/loc/m$f;->e:Z

    sput v0, Lcom/loc/m$f;->f:I
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_a

    move-object/from16 v1, p0

    :try_start_a
    invoke-static {v1, v9}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    sget-boolean v2, Lcom/loc/m$f;->a:Z

    invoke-static {v0, v8, v2}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Z)V

    sget-boolean v2, Lcom/loc/m$f;->b:Z

    invoke-static {v0, v7, v2}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Z)V

    sget-boolean v2, Lcom/loc/m$f;->c:Z

    invoke-static {v0, v6, v2}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Z)V

    sget v2, Lcom/loc/m$f;->d:I

    invoke-static {v0, v10, v2}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;I)V

    sget-boolean v2, Lcom/loc/m$f;->e:Z

    invoke-static {v0, v11, v2}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Z)V

    const-string v2, "ustv"

    sget v4, Lcom/loc/m$f;->f:I

    invoke-static {v0, v2, v4}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;I)V

    invoke-static {v0}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;)V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_9

    goto :goto_9

    :catchall_9
    nop

    goto :goto_9

    :catchall_a
    move-exception v0

    move-object/from16 v1, p0

    const-string v2, "load 15K"

    invoke-static {v0, v13, v2}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_9

    :cond_d
    move-object/from16 v1, p0

    :goto_9
    const-string v0, "183"

    invoke-static {v3, v0}, Lcom/loc/x;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_e

    :try_start_b
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    move-object/from16 v2, p1

    invoke-static {v2, v0}, Lcom/loc/bq;->a(Lcom/loc/w;Lorg/json/JSONObject;)V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_b

    goto :goto_a

    :catchall_b
    move-exception v0

    const-string v2, "load 183"

    invoke-static {v0, v13, v2}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_e
    :goto_a
    const-string v0, "17I"

    invoke-static {v3, v0}, Lcom/loc/x;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_f

    :try_start_c
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    const-string v2, "na"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const/4 v4, 0x0

    invoke-static {v2, v4}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v2

    const-string v5, "aa"

    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v4}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v0

    sput-boolean v2, Lcom/loc/ag;->d:Z

    sput-boolean v0, Lcom/loc/ag;->e:Z

    invoke-static {v1, v9}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v4

    const-string v5, "a4"

    invoke-static {v4, v5, v2}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Z)V

    const-string v2, "a5"

    invoke-static {v4, v2, v0}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Z)V

    invoke-static {v4}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;)V
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_c

    goto :goto_b

    :catchall_c
    move-exception v0

    const-string v2, "load 17I"

    invoke-static {v0, v13, v2}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_f
    :goto_b
    const-string v0, "1A4"

    invoke-static {v3, v0}, Lcom/loc/x;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_10

    :try_start_d
    invoke-virtual {v3, v0}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    const-string v2, "ada"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    sget-boolean v3, Lcom/loc/z;->c:Z

    invoke-static {v2, v3}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v3

    const-string v4, "iv"

    sget-wide v5, Lcom/loc/z;->a:J

    invoke-virtual {v0, v4, v5, v6}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v4

    sput-boolean v3, Lcom/loc/z;->d:Z

    sput-wide v4, Lcom/loc/z;->b:J

    invoke-static {v1, v9}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "a16"

    invoke-static {v0, v1, v2}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "a17"

    invoke-static {v0, v1, v4, v5}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;J)V

    invoke-static {v0}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;)V
    :try_end_d
    .catchall {:try_start_d .. :try_end_d} :catchall_d

    return-void

    :catchall_d
    move-exception v0

    const-string v1, "load 1A4"

    invoke-static {v0, v13, v1}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_10
    return-void
.end method

.method private static a(Landroid/content/Context;Lcom/loc/w;Ljava/lang/Throwable;)V
    .locals 0

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p1, p2}, Lcom/loc/m;->a(Landroid/content/Context;Lcom/loc/w;Ljava/lang/String;)V

    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/loc/l;->a(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/loc/m$e;)V
    .locals 1

    if-eqz p3, :cond_3

    invoke-static {p3}, Lcom/loc/m$e;->c(Lcom/loc/m$e;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p3}, Lcom/loc/m$e;->b()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    :cond_1
    if-nez p0, :cond_2

    return-void

    :cond_2
    invoke-static {p0, p2}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0, p1, p3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    invoke-static {p0}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;)V

    :cond_3
    :goto_0
    return-void
.end method

.method public static a(Lcom/loc/br$c;)V
    .locals 5

    if-eqz p0, :cond_2

    sget-object v0, Lcom/loc/m;->c:Landroid/content/Context;

    if-nez v0, :cond_0

    goto/16 :goto_0

    :cond_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iget-object v1, p0, Lcom/loc/br$c;->c:Ljava/lang/String;

    const-string v2, "serverip"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v1, p0, Lcom/loc/br$c;->e:Ljava/lang/String;

    const-string v2, "hostname"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v1, p0, Lcom/loc/br$c;->d:Ljava/lang/String;

    const-string v2, "path"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v1, p0, Lcom/loc/br$c;->a:Ljava/lang/String;

    const-string v2, "csid"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v1, p0, Lcom/loc/br$c;->b:Lcom/loc/bt$b;

    invoke-virtual {v1}, Lcom/loc/bt$b;->a()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "degrade"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget v1, p0, Lcom/loc/br$c;->m:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "errorcode"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget v1, p0, Lcom/loc/br$c;->n:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "errorsubcode"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-wide v1, p0, Lcom/loc/br$c;->h:J

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    const-string v2, "connecttime"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-wide v1, p0, Lcom/loc/br$c;->i:J

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    const-string v2, "writetime"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-wide v1, p0, Lcom/loc/br$c;->j:J

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    const-string v2, "readtime"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v1, p0, Lcom/loc/br$c;->l:Ljava/lang/String;

    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "datasize"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-wide v1, p0, Lcom/loc/br$c;->f:J

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p0

    const-string v1, "totaltime"

    invoke-virtual {v0, v1, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, v0}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "--\u57cb\u70b9--"

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    invoke-static {}, Lcom/loc/br;->a()V

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    :cond_1
    :try_start_0
    new-instance v0, Lcom/loc/bz;

    sget-object v1, Lcom/loc/m;->c:Landroid/content/Context;

    const-string v2, "core"

    const-string v3, "2.0"

    const-string v4, "O008"

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/loc/bz;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Lcom/loc/bz;->a(Ljava/lang/String;)V

    sget-object p0, Lcom/loc/m;->c:Landroid/content/Context;

    invoke-static {v0, p0}, Lcom/loc/ca;->a(Lcom/loc/bz;Landroid/content/Context;)V
    :try_end_0
    .catch Lcom/loc/k; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_2
    :goto_0
    return-void
.end method

.method private static a(Lcom/loc/w;)V
    .locals 2

    if-eqz p0, :cond_3

    :try_start_0
    invoke-virtual {p0}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/loc/w;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Lcom/loc/w;->b()Ljava/lang/String;

    move-result-object v0

    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    return-void

    :cond_2
    invoke-virtual {p0}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, v0}, Lcom/loc/ag;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    nop

    :catchall_0
    :cond_3
    return-void
.end method

.method private static declared-synchronized a(Ljava/lang/String;JLjava/lang/String;)V
    .locals 4

    const-class v0, Lcom/loc/m;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v1, :cond_3

    sget-object v1, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    sget-object v1, Lcom/loc/m;->t:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v1, :cond_1

    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    const/16 v2, 0x8

    invoke-direct {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v1, Lcom/loc/m;->t:Ljava/util/concurrent/ConcurrentHashMap;

    :cond_1
    sget-object v1, Lcom/loc/m;->t:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v2, Lcom/loc/m$g;

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-direct {v2, v3, p3}, Lcom/loc/m$g;-><init>(Ljava/lang/Long;Ljava/lang/String;)V

    invoke-virtual {v1, p0, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v1, Lcom/loc/m;->c:Landroid/content/Context;

    if-eqz v1, :cond_2

    sget-object v1, Lcom/loc/m;->c:Landroid/content/Context;

    const-string v2, "open_common"

    invoke-static {v1, v2}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    invoke-static {v1, p0, p1, p2}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;J)V

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "lct-info"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0, p3}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v1}, Lcom/loc/bd;->a(Landroid/content/SharedPreferences$Editor;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    monitor-exit v0

    return-void

    :cond_3
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    :try_start_1
    const-string p1, "at"

    const-string p2, "ucut"

    invoke-static {p0, p1, p2}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    monitor-exit v0

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    sget-object v0, Lcom/loc/m;->c:Landroid/content/Context;

    invoke-static {v0, p0, p1}, Lcom/loc/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Lcom/loc/m$e;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-string v3, "yyyyMMdd"

    invoke-static {v1, v2, v3}, Lcom/loc/x;->a(JLjava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0}, Lcom/loc/m$e;->a(Lcom/loc/m$e;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-virtual {v0, v1}, Lcom/loc/m$e;->a(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/loc/m$e;->b(Lcom/loc/m$e;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    :cond_0
    invoke-static {v0}, Lcom/loc/m$e;->b(Lcom/loc/m$e;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I

    sget-object v1, Lcom/loc/m;->c:Landroid/content/Context;

    invoke-static {v1, p0, p1, v0}, Lcom/loc/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/loc/m$e;)V

    return-void
.end method

.method public static declared-synchronized a(Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    const-class v0, Lcom/loc/m;

    monitor-enter v0

    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    monitor-exit v0

    return-void

    :cond_0
    :try_start_1
    sget-object v1, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v1, :cond_1

    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    const/16 v2, 0x8

    invoke-direct {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v1, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    :cond_1
    sget-object v1, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {v1, p0, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v1, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v1, :cond_2

    monitor-exit v0

    return-void

    :cond_2
    :try_start_2
    sget-object v1, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-nez v1, :cond_3

    monitor-exit v0

    return-void

    :cond_3
    :try_start_3
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz v1, :cond_4

    monitor-exit v0

    return-void

    :cond_4
    if-eqz p1, :cond_5

    const/4 p1, 0x1

    :try_start_4
    invoke-static {p1, p0}, Lcom/loc/bq;->a(ZLjava/lang/String;)V

    :cond_5
    invoke-static {}, Lcom/loc/cr;->a()Lcom/loc/cr;

    move-result-object p1

    new-instance v1, Lcom/loc/m$1;

    invoke-direct {v1, p0, p2, p3, p4}, Lcom/loc/m$1;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1, v1}, Lcom/loc/cr;->b(Lcom/loc/cs;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    :try_start_5
    const-string p1, "at"

    const-string p2, "lca"

    invoke-static {p0, p1, p2}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    monitor-exit v0

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Ljava/lang/String;ZZZ)V
    .locals 4

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    sget-object v0, Lcom/loc/m;->c:Landroid/content/Context;

    if-nez v0, :cond_0

    goto/16 :goto_3

    :cond_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "url"

    invoke-virtual {v0, v1, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object p0

    const-string v1, "downLevel"

    invoke-virtual {v0, v1, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object p0, Lcom/loc/m;->c:Landroid/content/Context;

    invoke-static {p0}, Lcom/loc/o;->j(Landroid/content/Context;)I

    move-result p0

    const-string v1, "0"

    const-string v2, "1"

    if-nez p0, :cond_1

    move-object p0, v1

    goto :goto_0

    :cond_1
    move-object p0, v2

    :goto_0
    const-string v3, "ant"

    invoke-virtual {v0, v3, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "type"

    if-eqz p3, :cond_3

    if-eqz p1, :cond_2

    sget-object p1, Lcom/loc/m;->m:Ljava/lang/String;

    goto :goto_1

    :cond_2
    sget-object p1, Lcom/loc/m;->n:Ljava/lang/String;

    goto :goto_1

    :cond_3
    if-eqz p1, :cond_4

    sget-object p1, Lcom/loc/m;->k:Ljava/lang/String;

    goto :goto_1

    :cond_4
    sget-object p1, Lcom/loc/m;->l:Ljava/lang/String;

    :goto_1
    invoke-virtual {v0, p0, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    if-eqz p2, :cond_5

    goto :goto_2

    :cond_5
    move-object v1, v2

    :goto_2
    const-string p0, "status"

    invoke-virtual {v0, p0, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, v0}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_6

    return-void

    :cond_6
    :try_start_0
    new-instance p1, Lcom/loc/bz;

    sget-object p2, Lcom/loc/m;->c:Landroid/content/Context;

    const-string p3, "core"

    const-string v0, "2.0"

    const-string v1, "O002"

    invoke-direct {p1, p2, p3, v0, v1}, Lcom/loc/bz;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1, p0}, Lcom/loc/bz;->a(Ljava/lang/String;)V

    sget-object p0, Lcom/loc/m;->c:Landroid/content/Context;

    invoke-static {p1, p0}, Lcom/loc/ca;->a(Lcom/loc/bz;Landroid/content/Context;)V
    :try_end_0
    .catch Lcom/loc/k; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_7
    :goto_3
    return-void
.end method

.method public static a(ZLcom/loc/br$a;)V
    .locals 4

    sget-boolean v0, Lcom/loc/m;->D:Z

    if-eqz v0, :cond_5

    if-nez p1, :cond_0

    goto/16 :goto_3

    :cond_0
    sget-object v0, Lcom/loc/m;->C:Ljava/util/ArrayList;

    monitor-enter v0

    if-eqz p0, :cond_3

    :try_start_0
    sget-object p0, Lcom/loc/m;->C:Ljava/util/ArrayList;

    invoke-virtual {p0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/loc/br$a;

    iget-object v2, v1, Lcom/loc/br$a;->b:Ljava/lang/String;

    iget-object v3, p1, Lcom/loc/br$a;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    iget-object v2, v1, Lcom/loc/br$a;->e:Ljava/lang/String;

    iget-object v3, p1, Lcom/loc/br$a;->e:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    iget v2, v1, Lcom/loc/br$a;->f:I

    iget v3, p1, Lcom/loc/br$a;->f:I

    if-ne v2, v3, :cond_1

    iget-object v2, v1, Lcom/loc/br$a;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    iget-object v3, p1, Lcom/loc/br$a;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    if-ne v2, v3, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->remove()V

    :goto_1
    invoke-static {}, Lcom/loc/br;->a()V

    goto :goto_0

    :cond_2
    iget-object v2, v1, Lcom/loc/br$a;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    iget-object v1, v1, Lcom/loc/br$a;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v1

    iget-object v3, p1, Lcom/loc/br$a;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v3}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v3

    sub-int/2addr v1, v3

    invoke-virtual {v2, v1}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    goto :goto_1

    :cond_3
    const/4 p0, 0x0

    sput-boolean p0, Lcom/loc/m;->D:Z

    sget-object p0, Lcom/loc/m;->C:Ljava/util/ArrayList;

    invoke-virtual {p0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_2
    invoke-static {}, Lcom/loc/br;->a()V

    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p1

    if-eqz p1, :cond_4

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/loc/br$a;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "----path="

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p1, Lcom/loc/br$a;->e:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "-counts="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p1, Lcom/loc/br$a;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, "-code="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/loc/br$a;->f:I

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "----"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    :cond_4
    invoke-static {}, Lcom/loc/br;->a()V

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_5
    :goto_3
    return-void
.end method

.method public static a(ZLjava/lang/String;)V
    .locals 2

    :try_start_0
    const-string v0, "--markHostNameFailed---hostname="

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    invoke-static {}, Lcom/loc/br;->a()V

    sget-boolean v0, Lcom/loc/m;->f:Z

    if-nez v0, :cond_0

    if-nez p0, :cond_0

    return-void

    :cond_0
    sget-boolean v0, Lcom/loc/m;->i:Z

    if-nez v0, :cond_1

    if-eqz p0, :cond_1

    return-void

    :cond_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_2

    return-void

    :cond_2
    const-string v0, "open_common"

    if-nez p0, :cond_4

    :try_start_1
    sget-object p0, Lcom/loc/m;->A:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_3

    return-void

    :cond_3
    sget-object p0, Lcom/loc/m;->A:Ljava/util/concurrent/ConcurrentHashMap;

    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {p0, p1, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "a14"

    invoke-static {p1, p0}, Lcom/loc/m;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, v0}, Lcom/loc/m;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_4
    sget-object p0, Lcom/loc/m;->B:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_5

    return-void

    :cond_5
    sget-object p0, Lcom/loc/m;->B:Ljava/util/concurrent/ConcurrentHashMap;

    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {p0, p1, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "a15"

    invoke-static {p1, p0}, Lcom/loc/m;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, v0}, Lcom/loc/m;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    return-void
.end method

.method public static a()Z
    .locals 5

    sget-object v0, Lcom/loc/m;->c:Landroid/content/Context;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/loc/m;->i()V

    invoke-static {}, Lcom/loc/m;->c()Z

    move-result v0

    if-nez v0, :cond_0

    return v2

    :cond_0
    invoke-static {}, Lcom/loc/m;->b()Z

    move-result v0

    if-eqz v0, :cond_1

    return v1

    :cond_1
    sget-boolean v0, Lcom/loc/m;->o:Z

    if-nez v0, :cond_2

    return v2

    :cond_2
    sget-object v0, Lcom/loc/m;->c:Landroid/content/Context;

    const-string v3, "IPV6_CONFIG_NAME"

    const-string v4, "open_common"

    invoke-static {v0, v3, v4}, Lcom/loc/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Lcom/loc/m$e;

    move-result-object v0

    if-nez v0, :cond_3

    return v2

    :cond_3
    invoke-virtual {v0}, Lcom/loc/m$e;->a()I

    move-result v0

    const/4 v3, 0x5

    if-ge v0, v3, :cond_4

    return v1

    :cond_4
    return v2
.end method

.method public static declared-synchronized a(Ljava/lang/String;J)Z
    .locals 7

    const-class v0, Lcom/loc/m;

    monitor-enter v0

    const/4 v1, 0x0

    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_0

    monitor-exit v0

    return v1

    :cond_0
    :try_start_1
    invoke-static {p0}, Lcom/loc/m;->f(Ljava/lang/String;)Lcom/loc/m$g;

    move-result-object v2

    const-wide/16 v3, 0x0

    if-eqz v2, :cond_1

    iget-wide v5, v2, Lcom/loc/m$g;->a:J

    goto :goto_0

    :cond_1
    move-wide v5, v3

    :goto_0
    cmp-long v2, p1, v5

    if-eqz v2, :cond_3

    sget-object p1, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz p1, :cond_2

    sget-object p1, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    sget-object p1, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Long;

    invoke-virtual {p0}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    :cond_2
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    sub-long/2addr p0, v3

    const-wide/16 v2, 0x7530

    cmp-long p2, p0, v2

    if-lez p2, :cond_3

    const/4 v1, 0x1

    :catchall_0
    :cond_3
    monitor-exit v0

    return v1
.end method

.method public static a(Ljava/lang/String;Z)Z
    .locals 2

    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return p1

    :cond_0
    invoke-static {p0}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "/"

    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    array-length v0, p0

    const/4 v1, 0x1

    sub-int/2addr v0, v1

    aget-object p0, p0, v0

    const/4 v0, 0x4

    invoke-virtual {p0, v0}, Ljava/lang/String;->charAt(I)C

    move-result p0

    rem-int/lit8 p0, p0, 0x2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-ne p0, v1, :cond_1

    return v1

    :cond_1
    const/4 p0, 0x0

    return p0

    :catchall_0
    return p1
.end method

.method private static a(Ljava/net/InetAddress;)Z
    .locals 1

    invoke-virtual {p0}, Ljava/net/InetAddress;->isLoopbackAddress()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Ljava/net/InetAddress;->isLinkLocalAddress()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Ljava/net/InetAddress;->isAnyLocalAddress()Z

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method private static b(Landroid/content/Context;Lcom/loc/w;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/loc/m$b;
    .locals 22
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/loc/w;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Lcom/loc/m$b;"
        }
    .end annotation

    move-object/from16 v8, p0

    move-object/from16 v9, p1

    const-string v10, "infocode"

    const-string v11, "info"

    const-string v12, "result"

    const-string v13, "ver"

    const-string v14, "status"

    const-string v15, "lct"

    const-string v7, "lc"

    const-string v6, "at"

    new-instance v5, Lcom/loc/m$b;

    invoke-direct {v5}, Lcom/loc/m$b;-><init>()V

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iput-object v0, v5, Lcom/loc/m$b;->f:Lorg/json/JSONObject;

    if-eqz v8, :cond_0

    invoke-virtual/range {p0 .. p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    sput-object v0, Lcom/loc/m;->c:Landroid/content/Context;

    :cond_0
    invoke-static {}, Lcom/loc/m;->e()V

    const/16 v16, 0x0

    const/4 v4, 0x0

    :try_start_0
    invoke-static/range {p1 .. p1}, Lcom/loc/m;->a(Lcom/loc/w;)V

    new-instance v0, Lcom/loc/bo;

    invoke-direct {v0}, Lcom/loc/bo;-><init>()V

    invoke-static/range {p2 .. p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catch Lcom/loc/k; {:try_start_0 .. :try_end_0} :catch_a
    .catch Ljavax/crypto/IllegalBlockSizeException; {:try_start_0 .. :try_end_0} :catch_9
    .catchall {:try_start_0 .. :try_end_0} :catchall_7

    if-nez v0, :cond_1

    :try_start_1
    invoke-static/range {p2 .. p2}, Lcom/loc/m;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1
    :try_end_1
    .catch Lcom/loc/k; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    move-object/from16 v17, v1

    goto :goto_0

    :catchall_0
    move-object/from16 v17, p2

    :catchall_1
    move-object/from16 v21, v10

    move-object/from16 v19, v12

    move-object/from16 v20, v13

    move-object v12, v5

    move-object v13, v6

    move-object v10, v7

    goto/16 :goto_2

    :catch_0
    move-exception v0

    move-object/from16 v17, p2

    goto/16 :goto_3

    :cond_1
    move-object/from16 v17, p2

    :goto_0
    :try_start_2
    invoke-static/range {p0 .. p0}, Lcom/loc/m;->d(Landroid/content/Context;)V

    invoke-static/range {p0 .. p0}, Lcom/loc/m;->e(Landroid/content/Context;)V

    new-instance v18, Lcom/loc/m$c;
    :try_end_2
    .catch Lcom/loc/k; {:try_start_2 .. :try_end_2} :catch_6
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    move-object/from16 v1, v18

    move-object/from16 v2, p0

    move-object/from16 v3, p1

    move-object/from16 v19, v12

    const/4 v12, 0x0

    move-object/from16 v4, v17

    move-object v12, v5

    move-object/from16 v5, p3

    move-object/from16 v20, v13

    move-object v13, v6

    move-object/from16 v6, p4

    move-object/from16 v21, v10

    move-object v10, v7

    move-object/from16 v7, p5

    :try_start_3
    invoke-direct/range {v1 .. v7}, Lcom/loc/m$c;-><init>(Landroid/content/Context;Lcom/loc/w;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static/range {v18 .. v18}, Lcom/loc/bo;->a(Lcom/loc/bt;)Lcom/loc/bu;

    move-result-object v1
    :try_end_3
    .catch Lcom/loc/k; {:try_start_3 .. :try_end_3} :catch_5
    .catchall {:try_start_3 .. :try_end_3} :catchall_5

    if-eqz v0, :cond_2

    return-object v12

    :cond_2
    if-eqz v1, :cond_3

    :try_start_4
    iget-object v2, v1, Lcom/loc/bu;->a:[B
    :try_end_4
    .catch Lcom/loc/k; {:try_start_4 .. :try_end_4} :catch_2
    .catch Ljavax/crypto/IllegalBlockSizeException; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :try_start_5
    iget-object v0, v1, Lcom/loc/bu;->b:Ljava/util/Map;

    if-eqz v0, :cond_4

    invoke-interface {v0, v15}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v0, v15}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/List;

    const-string v4, "lct-info"

    invoke-interface {v0, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;

    invoke-static {v3}, Lcom/loc/m;->a(Ljava/util/List;)J

    move-result-wide v3

    iput-wide v3, v12, Lcom/loc/m$b;->e:J

    invoke-static {v0}, Lcom/loc/m;->b(Ljava/util/List;)Ljava/lang/String;

    move-result-object v0

    iget-wide v3, v12, Lcom/loc/m$b;->e:J

    const-wide/16 v5, 0x0

    cmp-long v7, v3, v5

    if-eqz v7, :cond_4

    if-eqz v9, :cond_4

    invoke-virtual/range {p1 .. p1}, Lcom/loc/w;->a()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    iget-wide v4, v12, Lcom/loc/m$b;->e:J

    invoke-static {v3, v4, v5, v0}, Lcom/loc/m;->a(Ljava/lang/String;JLjava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    goto :goto_1

    :catchall_2
    move-exception v0

    :try_start_6
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    invoke-static {v0, v13, v15}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :catchall_3
    move-exception v0

    move-object/from16 v2, v16

    goto/16 :goto_6

    :catch_1
    move-exception v0

    move-object/from16 v2, v16

    goto/16 :goto_8

    :catch_2
    move-exception v0

    move-object/from16 v2, v16

    goto/16 :goto_a

    :cond_3
    move-object/from16 v2, v16

    :cond_4
    :goto_1
    const/16 v0, 0x10

    new-array v3, v0, [B

    array-length v4, v2

    sub-int/2addr v4, v0

    new-array v4, v4, [B

    const/4 v5, 0x0

    invoke-static {v2, v5, v3, v5, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    array-length v6, v2

    sub-int/2addr v6, v0

    invoke-static {v2, v0, v4, v5, v6}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    new-instance v0, Ljavax/crypto/spec/SecretKeySpec;

    const-string v5, "EQUVT"

    invoke-static {v5}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-direct {v0, v3, v5}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    const-string v3, "CQUVTL0NCQy9QS0NTNVBhZGRpbmc"

    invoke-static {v3}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v3

    new-instance v5, Ljavax/crypto/spec/IvParameterSpec;

    invoke-static {}, Lcom/loc/x;->c()[B

    move-result-object v6

    invoke-direct {v5, v6}, Ljavax/crypto/spec/IvParameterSpec;-><init>([B)V

    const/4 v6, 0x2

    invoke-virtual {v3, v6, v0, v5}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    invoke-virtual {v3, v4}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object v0

    invoke-static {v0}, Lcom/loc/x;->a([B)Ljava/lang/String;

    move-result-object v16
    :try_end_6
    .catch Lcom/loc/k; {:try_start_6 .. :try_end_6} :catch_4
    .catch Ljavax/crypto/IllegalBlockSizeException; {:try_start_6 .. :try_end_6} :catch_3
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    goto/16 :goto_b

    :catchall_4
    move-exception v0

    goto :goto_6

    :catch_3
    move-exception v0

    goto :goto_8

    :catch_4
    move-exception v0

    goto/16 :goto_a

    :catch_5
    move-exception v0

    goto :goto_4

    :catchall_5
    :goto_2
    :try_start_7
    new-instance v0, Lcom/loc/k;

    const-string v1, "\u672a\u77e5\u7684\u9519\u8bef"

    invoke-direct {v0, v1}, Lcom/loc/k;-><init>(Ljava/lang/String;)V

    throw v0

    :catch_6
    move-exception v0

    :goto_3
    move-object/from16 v21, v10

    move-object/from16 v19, v12

    move-object/from16 v20, v13

    move-object v12, v5

    move-object v13, v6

    move-object v10, v7

    :goto_4
    throw v0
    :try_end_7
    .catch Lcom/loc/k; {:try_start_7 .. :try_end_7} :catch_8
    .catch Ljavax/crypto/IllegalBlockSizeException; {:try_start_7 .. :try_end_7} :catch_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_6

    :catchall_6
    move-exception v0

    goto :goto_5

    :catch_7
    move-exception v0

    goto :goto_7

    :catch_8
    move-exception v0

    goto :goto_9

    :catchall_7
    move-exception v0

    move-object/from16 v21, v10

    move-object/from16 v19, v12

    move-object/from16 v20, v13

    move-object v12, v5

    move-object v13, v6

    move-object v10, v7

    move-object/from16 v17, p2

    :goto_5
    move-object/from16 v1, v16

    move-object v2, v1

    :goto_6
    invoke-static {v0, v13, v10}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_8

    :catch_9
    move-exception v0

    move-object/from16 v21, v10

    move-object/from16 v19, v12

    move-object/from16 v20, v13

    move-object v12, v5

    move-object v13, v6

    move-object v10, v7

    move-object/from16 v17, p2

    :goto_7
    move-object/from16 v1, v16

    move-object v2, v1

    :goto_8
    invoke-static {v8, v9, v0}, Lcom/loc/m;->a(Landroid/content/Context;Lcom/loc/w;Ljava/lang/Throwable;)V

    goto :goto_b

    :catch_a
    move-exception v0

    move-object/from16 v21, v10

    move-object/from16 v19, v12

    move-object/from16 v20, v13

    move-object v12, v5

    move-object v13, v6

    move-object v10, v7

    move-object/from16 v17, p2

    :goto_9
    move-object/from16 v1, v16

    move-object v2, v1

    :goto_a
    invoke-virtual {v0}, Lcom/loc/k;->a()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v12, Lcom/loc/m$b;->c:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/loc/k;->a()Ljava/lang/String;

    move-result-object v3

    invoke-static {v8, v9, v3}, Lcom/loc/m;->a(Landroid/content/Context;Lcom/loc/w;Ljava/lang/String;)V

    const-string v3, "/v3/iasdkauth"

    invoke-static {v9, v3, v0}, Lcom/loc/av;->a(Lcom/loc/w;Ljava/lang/String;Lcom/loc/k;)V

    :goto_b
    move-object/from16 v7, v17

    if-nez v2, :cond_5

    return-object v12

    :cond_5
    invoke-static/range {v16 .. v16}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_6

    invoke-static {v2}, Lcom/loc/x;->a([B)Ljava/lang/String;

    move-result-object v16

    :cond_6
    move-object/from16 v0, v16

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_7

    const-string v2, "result is null"

    invoke-static {v8, v9, v2}, Lcom/loc/m;->a(Landroid/content/Context;Lcom/loc/w;Ljava/lang/String;)V

    :cond_7
    :try_start_8
    new-instance v15, Lorg/json/JSONObject;

    invoke-direct {v15, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v15, v14}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_f

    invoke-virtual {v15, v14}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_8

    sput v2, Lcom/loc/m;->a:I

    goto :goto_d

    :cond_8
    if-nez v0, :cond_c

    const-string v0, "authcsid"

    const-string v2, "authgsid"

    if-eqz v1, :cond_9

    iget-object v0, v1, Lcom/loc/bu;->c:Ljava/lang/String;

    iget-object v1, v1, Lcom/loc/bu;->d:Ljava/lang/String;

    move-object v5, v0

    move-object v4, v1

    goto :goto_c

    :cond_9
    move-object v5, v0

    move-object v4, v2

    :goto_c
    invoke-static {v8, v5, v4, v15}, Lcom/loc/x;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    const/4 v1, 0x0

    sput v1, Lcom/loc/m;->a:I

    invoke-virtual {v15, v11}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_a

    invoke-virtual {v15, v11}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/m;->b:Ljava/lang/String;

    :cond_a
    const-string v0, ""

    move-object/from16 v1, v21

    invoke-virtual {v15, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_b

    invoke-virtual {v15, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_b
    move-object v6, v0

    const-string v2, "/v3/iasdkauth"

    sget-object v3, Lcom/loc/m;->b:Ljava/lang/String;

    move-object/from16 v1, p1

    invoke-static/range {v1 .. v6}, Lcom/loc/av;->a(Lcom/loc/w;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    sget v0, Lcom/loc/m;->a:I

    if-nez v0, :cond_c

    sget-object v0, Lcom/loc/m;->b:Ljava/lang/String;

    iput-object v0, v12, Lcom/loc/m$b;->c:Ljava/lang/String;
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_9

    return-object v12

    :cond_c
    :goto_d
    move-object/from16 v1, v20

    :try_start_9
    invoke-virtual {v15, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_d

    invoke-virtual {v15, v1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    iput v0, v12, Lcom/loc/m$b;->d:I
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_8

    goto :goto_e

    :catchall_8
    move-exception v0

    :try_start_a
    invoke-static {v0, v13, v10}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_d
    :goto_e
    move-object/from16 v1, v19

    invoke-static {v15, v1}, Lcom/loc/x;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_f

    invoke-virtual {v15, v1}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    invoke-static {v8, v9, v7, v12, v0}, Lcom/loc/m;->a(Landroid/content/Context;Lcom/loc/w;Ljava/lang/String;Lcom/loc/m$b;Lorg/json/JSONObject;)V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_9

    :try_start_b
    const-string v1, "15K"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "isTargetAble"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v1, v2}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v1

    const-string v3, "able"

    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v2}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v0

    if-nez v0, :cond_e

    invoke-static {}, Lcom/loc/q;->a()Lcom/loc/q;

    invoke-static/range {p0 .. p0}, Lcom/loc/q;->b(Landroid/content/Context;)V

    goto :goto_f

    :cond_e
    invoke-static {}, Lcom/loc/q;->a()Lcom/loc/q;

    move-result-object v0

    invoke-virtual {v0, v8, v1}, Lcom/loc/q;->a(Landroid/content/Context;Z)V
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_a

    goto :goto_f

    :catchall_9
    move-exception v0

    invoke-static {v0, v13, v10}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :catchall_a
    :cond_f
    :goto_f
    return-object v12
.end method

.method public static b(Ljava/lang/String;)Lcom/loc/w;
    .locals 1

    sget-object v0, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/loc/m$d;

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/loc/m$d;->a:Lcom/loc/w;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    invoke-static {p0}, Lcom/loc/s;->a([B)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static b(Ljava/util/List;)Ljava/lang/String;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    if-eqz p0, :cond_0

    :try_start_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x0

    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_0

    return-object p0

    :catch_0
    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method public static b(Landroid/content/Context;)V
    .locals 3

    if-nez p0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    const-string v1, "open_common"

    const-string v2, "a2"

    invoke-static {p0, v1, v2, v0}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result p0

    sput-boolean p0, Lcom/loc/m;->o:Z

    return-void
.end method

.method public static b(Lcom/loc/br$c;)V
    .locals 10

    sget-object v0, Lcom/loc/m;->C:Ljava/util/ArrayList;

    monitor-enter v0

    const/4 v1, 0x0

    const/4 v2, 0x0

    :goto_0
    :try_start_0
    sget-object v3, Lcom/loc/m;->C:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-ge v1, v3, :cond_2

    sget-object v3, Lcom/loc/m;->C:Ljava/util/ArrayList;

    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/loc/br$a;

    iget-object v4, p0, Lcom/loc/br$c;->c:Ljava/lang/String;

    iget-object v5, v3, Lcom/loc/br$a;->b:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    const/4 v5, 0x1

    if-eqz v4, :cond_1

    iget-object v4, p0, Lcom/loc/br$c;->d:Ljava/lang/String;

    iget-object v6, v3, Lcom/loc/br$a;->e:Ljava/lang/String;

    invoke-virtual {v4, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    iget v4, p0, Lcom/loc/br$c;->m:I

    iget v6, v3, Lcom/loc/br$a;->f:I

    if-ne v4, v6, :cond_1

    iget v2, v3, Lcom/loc/br$a;->f:I

    if-ne v2, v5, :cond_0

    iget-object v2, v3, Lcom/loc/br$a;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    int-to-long v6, v2

    iget-wide v8, v3, Lcom/loc/br$a;->i:J

    mul-long v6, v6, v8

    iget-wide v8, p0, Lcom/loc/br$c;->f:J

    add-long/2addr v6, v8

    iget-object v2, v3, Lcom/loc/br$a;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v2

    add-int/2addr v2, v5

    int-to-long v8, v2

    div-long/2addr v6, v8

    iput-wide v6, v3, Lcom/loc/br$a;->i:J

    :cond_0
    iget-object v2, v3, Lcom/loc/br$a;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicInteger;->getAndIncrement()I

    const/4 v2, 0x1

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    if-nez v2, :cond_3

    sget-object v1, Lcom/loc/m;->C:Ljava/util/ArrayList;

    new-instance v2, Lcom/loc/br$a;

    invoke-direct {v2, p0}, Lcom/loc/br$a;-><init>(Lcom/loc/br$c;)V

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_3
    invoke-static {}, Lcom/loc/br;->a()V

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static declared-synchronized b(Ljava/lang/String;Z)V
    .locals 2

    const-class v0, Lcom/loc/m;

    monitor-enter v0

    const/4 v1, 0x0

    :try_start_0
    invoke-static {p0, p1, v1, v1, v1}, Lcom/loc/m;->a(Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static b()Z
    .locals 3

    sget-object v0, Lcom/loc/m;->c:Landroid/content/Context;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-static {v0}, Lcom/loc/o;->o(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    return v1

    :cond_1
    sget-object v2, Lcom/loc/m;->q:Ljava/util/Map;

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    if-nez v0, :cond_2

    return v1

    :cond_2
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v2, 0x2

    if-ne v0, v2, :cond_3

    const/4 v0, 0x1

    return v0

    :cond_3
    return v1
.end method

.method public static c(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ";15K;16H;17I;1A4;17S;183"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :cond_0
    return-object p0
.end method

.method private static c(Landroid/content/Context;)V
    .locals 4

    if-nez p0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    const-string v1, "open_common"

    const-string v2, "a13"

    invoke-static {p0, v1, v2, v0}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v2

    sput-boolean v2, Lcom/loc/m;->f:Z

    const-string v2, "a6"

    invoke-static {p0, v1, v2, v0}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v0

    sput-boolean v0, Lcom/loc/m;->h:Z

    const/4 v0, 0x0

    const-string v2, "a7"

    invoke-static {p0, v1, v2, v0}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v2

    sput-boolean v2, Lcom/loc/m;->g:Z

    const/16 v2, 0x1388

    const-string v3, "a8"

    invoke-static {p0, v1, v3, v2}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)I

    move-result v2

    sput v2, Lcom/loc/m;->e:I

    const/4 v2, 0x3

    const-string v3, "a9"

    invoke-static {p0, v1, v3, v2}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)I

    move-result v3

    sput v3, Lcom/loc/m;->y:I

    const-string v3, "a10"

    invoke-static {p0, v1, v3, v0}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v3

    sput-boolean v3, Lcom/loc/m;->i:Z

    const-string v3, "a11"

    invoke-static {p0, v1, v3, v2}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)I

    move-result v2

    sput v2, Lcom/loc/m;->z:I

    const-string v2, "a12"

    invoke-static {p0, v1, v2, v0}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result p0

    sput-boolean p0, Lcom/loc/m;->j:Z

    return-void
.end method

.method public static c(Lcom/loc/br$c;)V
    .locals 2

    if-nez p0, :cond_0

    return-void

    :cond_0
    sget-boolean v0, Lcom/loc/m;->j:Z

    if-nez v0, :cond_1

    return-void

    :cond_1
    sget-object v0, Lcom/loc/m;->E:Ljava/util/Queue;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/loc/m;->E:Ljava/util/Queue;

    invoke-interface {v1, p0}, Ljava/util/Queue;->offer(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/loc/br;->a()V

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static c()Z
    .locals 3

    sget-object v0, Lcom/loc/m;->c:Landroid/content/Context;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-static {v0}, Lcom/loc/o;->o(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    return v1

    :cond_1
    sget-object v2, Lcom/loc/m;->q:Ljava/util/Map;

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    if-nez v0, :cond_2

    return v1

    :cond_2
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v2, 0x2

    if-lt v0, v2, :cond_3

    const/4 v0, 0x1

    return v0

    :cond_3
    return v1
.end method

.method public static d()V
    .locals 6

    :try_start_0
    const-string v0, "IPV6_CONFIG_NAME"

    const-string v1, "open_common"

    sget-object v2, Lcom/loc/m;->c:Landroid/content/Context;

    invoke-static {v2, v0, v1}, Lcom/loc/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Lcom/loc/m$e;

    move-result-object v2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    const-string v5, "yyyyMMdd"

    invoke-static {v3, v4, v5}, Lcom/loc/x;->a(JLjava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2}, Lcom/loc/m$e;->a(Lcom/loc/m$e;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_0

    invoke-virtual {v2, v3}, Lcom/loc/m$e;->a(Ljava/lang/String;)V

    invoke-static {v2}, Lcom/loc/m$e;->b(Lcom/loc/m$e;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object v3

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    :cond_0
    invoke-static {v2}, Lcom/loc/m$e;->b(Lcom/loc/m$e;)Ljava/util/concurrent/atomic/AtomicInteger;

    move-result-object v3

    invoke-virtual {v3}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I

    sget-object v3, Lcom/loc/m;->c:Landroid/content/Context;

    invoke-static {v3, v0, v1, v2}, Lcom/loc/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/loc/m$e;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private static d(Landroid/content/Context;)V
    .locals 3

    const-string v0, "open_common"

    :try_start_0
    sget-boolean v1, Lcom/loc/m;->w:Z

    if-eqz v1, :cond_0

    return-void

    :cond_0
    const-string v1, "a4"

    const/4 v2, 0x1

    invoke-static {p0, v0, v1, v2}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v1

    sput-boolean v1, Lcom/loc/ag;->d:Z

    const-string v1, "a5"

    invoke-static {p0, v0, v1, v2}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result p0

    sput-boolean p0, Lcom/loc/ag;->e:Z

    sput-boolean v2, Lcom/loc/m;->w:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static declared-synchronized d(Ljava/lang/String;)Z
    .locals 5

    const-class v0, Lcom/loc/m;

    monitor-enter v0

    const/4 v1, 0x0

    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_0

    monitor-exit v0

    return v1

    :cond_0
    :try_start_1
    sget-object v2, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v2, :cond_1

    monitor-exit v0

    return v1

    :cond_1
    :try_start_2
    sget-object v2, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v2, :cond_2

    new-instance v2, Ljava/util/concurrent/ConcurrentHashMap;

    const/16 v3, 0x8

    invoke-direct {v2, v3}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v2, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    :cond_2
    sget-object v2, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v2, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    sget-object v2, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v2, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_3

    sget-object v2, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v2, p0, v3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const/4 p0, 0x1

    monitor-exit v0

    return p0

    :catchall_0
    move-exception p0

    :try_start_3
    const-string v2, "at"

    const-string v3, "cslct"

    invoke-static {p0, v2, v3}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :cond_3
    monitor-exit v0

    return v1

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static e()V
    .locals 4

    const-string v0, "open_common"

    sget-boolean v1, Lcom/loc/m;->d:Z

    if-eqz v1, :cond_0

    return-void

    :cond_0
    :try_start_0
    sget-object v1, Lcom/loc/m;->c:Landroid/content/Context;

    if-nez v1, :cond_1

    return-void

    :cond_1
    const/4 v2, 0x1

    sput-boolean v2, Lcom/loc/m;->d:Z

    invoke-static {}, Lcom/loc/q;->a()Lcom/loc/q;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/loc/q;->a(Landroid/content/Context;)V

    invoke-static {v1}, Lcom/loc/m;->b(Landroid/content/Context;)V

    invoke-static {v1}, Lcom/loc/m;->c(Landroid/content/Context;)V

    const-string v2, "ucf"

    sget-boolean v3, Lcom/loc/m$f;->a:Z

    invoke-static {v1, v0, v2, v3}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v2

    sput-boolean v2, Lcom/loc/m$f;->a:Z

    const-string v2, "fsv2"

    sget-boolean v3, Lcom/loc/m$f;->b:Z

    invoke-static {v1, v0, v2, v3}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v2

    sput-boolean v2, Lcom/loc/m$f;->b:Z

    const-string v2, "usc"

    sget-boolean v3, Lcom/loc/m$f;->c:Z

    invoke-static {v1, v0, v2, v3}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v2

    sput-boolean v2, Lcom/loc/m$f;->c:Z

    const-string v2, "umv"

    sget v3, Lcom/loc/m$f;->d:I

    invoke-static {v1, v0, v2, v3}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)I

    move-result v2

    sput v2, Lcom/loc/m$f;->d:I

    const-string v2, "ust"

    sget-boolean v3, Lcom/loc/m$f;->e:Z

    invoke-static {v1, v0, v2, v3}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)Z

    move-result v2

    sput-boolean v2, Lcom/loc/m$f;->e:Z

    const-string v2, "ustv"

    sget v3, Lcom/loc/m$f;->f:I

    invoke-static {v1, v0, v2, v3}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)I

    move-result v0

    sput v0, Lcom/loc/m$f;->f:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private static e(Landroid/content/Context;)V
    .locals 5

    const-string v0, "open_common"

    :try_start_0
    sget-boolean v1, Lcom/loc/m;->x:Z

    if-eqz v1, :cond_0

    return-void

    :cond_0
    const-string v1, "a16"

    const-string v2, ""

    invoke-static {p0, v0, v1, v2}, Lcom/loc/bd;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    invoke-static {v1, v2}, Lcom/loc/m;->a(Ljava/lang/String;Z)Z

    move-result v1

    sput-boolean v1, Lcom/loc/z;->d:Z

    const-string v1, "a17"

    sget-wide v3, Lcom/loc/z;->a:J

    invoke-static {p0, v0, v1, v3, v4}, Lcom/loc/bd;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide v0

    sput-wide v0, Lcom/loc/z;->b:J

    sput-boolean v2, Lcom/loc/m;->x:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static declared-synchronized e(Ljava/lang/String;)V
    .locals 2

    const-class v0, Lcom/loc/m;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_0

    monitor-exit v0

    return-void

    :cond_0
    :try_start_1
    sget-object v1, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    sget-object v1, Lcom/loc/m;->u:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static f()Lcom/loc/br$a;
    .locals 3

    sget-boolean v0, Lcom/loc/m;->D:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    sget-object v0, Lcom/loc/m;->C:Ljava/util/ArrayList;

    monitor-enter v0

    :try_start_0
    sget-boolean v2, Lcom/loc/m;->D:Z

    if-eqz v2, :cond_1

    monitor-exit v0

    return-object v1

    :cond_1
    sget-object v2, Lcom/loc/m;->C:Ljava/util/ArrayList;

    invoke-static {v2}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    sget-object v2, Lcom/loc/m;->C:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_2

    sget-object v1, Lcom/loc/m;->C:Ljava/util/ArrayList;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/loc/br$a;

    invoke-virtual {v1}, Lcom/loc/br$a;->a()Lcom/loc/br$a;

    move-result-object v1

    const/4 v2, 0x1

    sput-boolean v2, Lcom/loc/m;->D:Z

    monitor-exit v0

    return-object v1

    :cond_2
    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public static declared-synchronized f(Ljava/lang/String;)Lcom/loc/m$g;
    .locals 3

    const-class v0, Lcom/loc/m;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/loc/m;->t:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v1, :cond_0

    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    const/16 v2, 0x8

    invoke-direct {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    sput-object v1, Lcom/loc/m;->t:Ljava/util/concurrent/ConcurrentHashMap;

    :cond_0
    sget-object v1, Lcom/loc/m;->t:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    sget-object v1, Lcom/loc/m;->t:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/loc/m$g;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    :try_start_1
    const-string v1, "at"

    const-string v2, "glcut"

    invoke-static {p0, v1, v2}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    new-instance p0, Lcom/loc/m$g;

    const-wide/16 v1, 0x0

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    const-string v2, ""

    invoke-direct {p0, v1, v2}, Lcom/loc/m$g;-><init>(Ljava/lang/Long;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    monitor-exit v0

    return-object p0

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static g()Lcom/loc/br$c;
    .locals 2

    sget-object v0, Lcom/loc/m;->E:Ljava/util/Queue;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/loc/m;->E:Ljava/util/Queue;

    invoke-interface {v1}, Ljava/util/Queue;->poll()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/loc/br$c;

    if-eqz v1, :cond_0

    monitor-exit v0

    return-object v1

    :cond_0
    const/4 v1, 0x0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public static g(Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x1

    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return v0

    :cond_0
    sget-boolean v1, Lcom/loc/m;->f:Z

    const/4 v2, 0x0

    if-nez v1, :cond_1

    return v2

    :cond_1
    sget-object v1, Lcom/loc/m;->A:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-nez v1, :cond_2

    const/4 v1, 0x1

    goto :goto_0

    :cond_2
    const/4 v1, 0x0

    :goto_0
    if-nez v1, :cond_3

    return v2

    :cond_3
    sget-object v1, Lcom/loc/m;->c:Landroid/content/Context;

    if-nez v1, :cond_4

    return v0

    :cond_4
    sget-object v1, Lcom/loc/m;->c:Landroid/content/Context;

    const-string v3, "a14"

    invoke-static {p0, v3}, Lcom/loc/m;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v3, "open_common"

    invoke-static {v1, p0, v3}, Lcom/loc/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Lcom/loc/m$e;

    move-result-object p0

    if-nez p0, :cond_5

    return v0

    :cond_5
    invoke-virtual {p0}, Lcom/loc/m$e;->a()I

    move-result p0

    sget v1, Lcom/loc/m;->y:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-ge p0, v1, :cond_6

    return v0

    :cond_6
    return v2

    :catchall_0
    return v0
.end method

.method static synthetic h()Ljava/util/concurrent/ConcurrentHashMap;
    .locals 1

    sget-object v0, Lcom/loc/m;->v:Ljava/util/concurrent/ConcurrentHashMap;

    return-object v0
.end method

.method public static h(Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return v0

    :cond_0
    sget-boolean v1, Lcom/loc/m;->i:Z

    if-nez v1, :cond_1

    return v0

    :cond_1
    sget-object v1, Lcom/loc/m;->B:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const/4 v2, 0x1

    if-nez v1, :cond_2

    const/4 v1, 0x1

    goto :goto_0

    :cond_2
    const/4 v1, 0x0

    :goto_0
    if-nez v1, :cond_3

    return v0

    :cond_3
    sget-object v1, Lcom/loc/m;->c:Landroid/content/Context;

    if-nez v1, :cond_4

    return v2

    :cond_4
    sget-object v1, Lcom/loc/m;->c:Landroid/content/Context;

    const-string v3, "a15"

    invoke-static {p0, v3}, Lcom/loc/m;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v3, "open_common"

    invoke-static {v1, p0, v3}, Lcom/loc/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Lcom/loc/m$e;

    move-result-object p0

    if-nez p0, :cond_5

    return v2

    :cond_5
    invoke-virtual {p0}, Lcom/loc/m$e;->a()I

    move-result p0

    sget v1, Lcom/loc/m;->z:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-ge p0, v1, :cond_6

    return v2

    :catchall_0
    :cond_6
    return v0
.end method

.method private static i()V
    .locals 6

    :try_start_0
    sget-object v0, Lcom/loc/m;->c:Landroid/content/Context;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/loc/m;->c:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/o;->o(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/loc/m;->r:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    sget-object v1, Lcom/loc/m;->r:Ljava/lang/String;

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    sget-wide v3, Lcom/loc/m;->s:J

    sub-long/2addr v1, v3

    const-wide/32 v3, 0xea60

    cmp-long v5, v1, v3

    if-gez v5, :cond_0

    return-void

    :cond_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    sput-object v0, Lcom/loc/m;->r:Ljava/lang/String;

    goto :goto_0

    :cond_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/loc/m;->s:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x2710

    cmp-long v4, v0, v2

    if-gez v4, :cond_2

    return-void

    :cond_2
    :goto_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sput-wide v0, Lcom/loc/m;->s:J

    sget-object v0, Lcom/loc/m;->q:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    invoke-static {}, Ljava/net/NetworkInterface;->getNetworkInterfaces()Ljava/util/Enumeration;

    move-result-object v0

    invoke-static {v0}, Ljava/util/Collections;->list(Ljava/util/Enumeration;)Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_3
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_8

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/net/NetworkInterface;

    invoke-virtual {v1}, Ljava/net/NetworkInterface;->getInterfaceAddresses()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_3

    invoke-virtual {v1}, Ljava/net/NetworkInterface;->getDisplayName()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v1}, Ljava/net/NetworkInterface;->getInterfaceAddresses()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_4
    :goto_2
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_6

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/net/InterfaceAddress;

    invoke-virtual {v4}, Ljava/net/InterfaceAddress;->getAddress()Ljava/net/InetAddress;

    move-result-object v4

    instance-of v5, v4, Ljava/net/Inet6Address;

    if-eqz v5, :cond_5

    check-cast v4, Ljava/net/Inet6Address;

    invoke-static {v4}, Lcom/loc/m;->a(Ljava/net/InetAddress;)Z

    move-result v4

    if-nez v4, :cond_4

    or-int/lit8 v3, v3, 0x2

    goto :goto_2

    :cond_5
    instance-of v5, v4, Ljava/net/Inet4Address;

    if-eqz v5, :cond_4

    check-cast v4, Ljava/net/Inet4Address;

    invoke-static {v4}, Lcom/loc/m;->a(Ljava/net/InetAddress;)Z

    move-result v5

    if-nez v5, :cond_4

    invoke-virtual {v4}, Ljava/net/Inet4Address;->getHostAddress()Ljava/lang/String;

    move-result-object v4

    const-string v5, "FMTkyLjE2OC40My4"

    invoke-static {v5}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_4

    or-int/lit8 v3, v3, 0x1

    goto :goto_2

    :cond_6
    if-eqz v3, :cond_3

    if-eqz v2, :cond_7

    const-string v1, "wlan"

    invoke-virtual {v2, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_7

    sget-object v1, Lcom/loc/m;->q:Ljava/util/Map;

    const-string v2, "WIFI"

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    :goto_3
    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    :cond_7
    if-eqz v2, :cond_3

    const-string v1, "rmnet"

    invoke-virtual {v2, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    sget-object v1, Lcom/loc/m;->q:Ljava/util/Map;

    const-string v2, "MOBILE"

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_3

    :cond_8
    return-void

    :catchall_0
    move-exception v0

    const-string v1, "at"

    const-string v2, "ipstack"

    invoke-static {v0, v1, v2}, Lcom/loc/as;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
