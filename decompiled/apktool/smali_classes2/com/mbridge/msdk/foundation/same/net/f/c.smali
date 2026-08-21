.class public final Lcom/mbridge/msdk/foundation/same/net/f/c;
.super Ljava/lang/Object;
.source "RequestControlUtil.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/foundation/same/net/f/c$a;,
        Lcom/mbridge/msdk/foundation/same/net/f/c$b;
    }
.end annotation


# instance fields
.field private final a:Ljava/lang/String;

.field private b:I

.field private c:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/foundation/same/net/f/c$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 4

    .line 57
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "IDErrorUtil"

    .line 45
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->a:Ljava/lang/String;

    .line 49
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->c:Ljava/util/ArrayList;

    .line 51
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v1, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->d:Ljava/util/concurrent/ConcurrentHashMap;

    .line 58
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v1

    if-nez v1, :cond_0

    .line 60
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v1

    .line 63
    :cond_0
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->aU()I

    move-result v2

    mul-int/lit16 v2, v2, 0x3e8

    iput v2, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->b:I

    .line 65
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->aV()Ljava/util/ArrayList;

    move-result-object v2

    if-eqz v2, :cond_1

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->aV()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_1

    const-string v2, "Setting ercd not EMPTY will use setting."

    .line 66
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 67
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->c:Ljava/util/ArrayList;

    invoke-virtual {v1}, Lcom/mbridge/msdk/c/a;->aV()Ljava/util/ArrayList;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    goto/16 :goto_0

    :cond_1
    const-string v1, "Setting ercd is EMPTY and use default code list."

    .line 69
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 70
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->c:Ljava/util/ArrayList;

    const/16 v1, 0x14

    new-array v1, v1, [Ljava/lang/Integer;

    const/4 v2, 0x0

    const/4 v3, -0x1

    .line 1193
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x1

    const/16 v3, -0xa

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x2

    const/16 v3, -0x4b1

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x3

    const/16 v3, -0x4b2

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x4

    const/16 v3, -0x4b3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x5

    const/16 v3, -0x4b5

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x6

    const/16 v3, -0x4b6

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/4 v2, 0x7

    const/16 v3, -0x4b8

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0x8

    const/16 v3, -0x515

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0x9

    const/16 v3, -0x516

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0xa

    const/16 v3, -0x519

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0xb

    const/16 v3, -0x51a

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0xc

    const/16 v3, -0x51b

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0xd

    const/16 v3, -0x77b

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0xe

    const/16 v3, 0x296a

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0xf

    const/16 v3, 0x296b

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0x10

    const/16 v3, 0x296c

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0x11

    const/16 v3, 0x2971

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0x12

    const/16 v3, 0x2972

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const/16 v2, 0x13

    const/16 v3, 0x2978

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    .line 1194
    invoke-static {v1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v1

    .line 70
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    :goto_0
    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/foundation/same/net/f/c$1;)V
    .locals 0

    .line 44
    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/net/f/c;-><init>()V

    return-void
.end method

.method private declared-synchronized a(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/same/net/f/c$a;
    .locals 7

    monitor-enter p0

    :try_start_0
    const-string v0, "IDErrorUtil"

    .line 95
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getErrorInfo : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 96
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_4

    .line 97
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/same/net/f/c$a;

    if-eqz v0, :cond_4

    .line 99
    iget v2, v0, Lcom/mbridge/msdk/foundation/same/net/f/c$a;->b:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v3, -0x1

    if-ne v2, v3, :cond_0

    .line 100
    monitor-exit p0

    return-object v0

    .line 103
    :cond_0
    :try_start_1
    iget-wide v2, v0, Lcom/mbridge/msdk/foundation/same/net/f/c$a;->a:J

    iget v4, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->b:I

    int-to-long v4, v4

    add-long/2addr v2, v4

    .line 104
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    cmp-long v2, v4, v2

    if-lez v2, :cond_3

    .line 105
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 107
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result p1

    if-lez p1, :cond_2

    .line 108
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "IDErrorUtil"

    const-string v2, "getErrorInfo : delete timeout entry"

    .line 109
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 110
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 111
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/same/net/f/c$a;

    .line 112
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-wide v5, v2, Lcom/mbridge/msdk/foundation/same/net/f/c$a;->a:J

    sub-long/2addr v3, v5

    iget v2, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->b:I

    int-to-long v5, v2

    cmp-long v2, v3, v5

    if-lez v2, :cond_1

    .line 113
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 118
    :cond_2
    monitor-exit p0

    return-object v1

    :cond_3
    :try_start_2
    const-string p1, "IDErrorUtil"

    .line 120
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getErrorInfo : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v0, Lcom/mbridge/msdk/foundation/same/net/f/c$a;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 121
    monitor-exit p0

    return-object v0

    .line 125
    :cond_4
    monitor-exit p0

    return-object v1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public static a()Lcom/mbridge/msdk/foundation/same/net/f/c;
    .locals 1

    .line 75
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/f/c$b;->a()Lcom/mbridge/msdk/foundation/same/net/f/c;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/foundation/same/net/g/d;)Lcom/mbridge/msdk/foundation/same/net/k;
    .locals 10

    .line 133
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->b()Ljava/util/Map;

    move-result-object v0

    const-string v1, "app_id"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 134
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->b()Ljava/util/Map;

    move-result-object v1

    const-string v2, "placement_id"

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 135
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->b()Ljava/util/Map;

    move-result-object v2

    const-string v3, "unit_id"

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 136
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->b()Ljava/util/Map;

    move-result-object v3

    const-string v4, "ad_type"

    invoke-interface {v3, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 138
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->b()Ljava/util/Map;

    move-result-object p1

    const-string v4, "token"

    invoke-interface {p1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 140
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "_"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 142
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/foundation/same/net/f/c;->a(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/same/net/f/c$a;

    move-result-object v4

    const-string v5, "IDErrorUtil"

    const/4 v6, 0x0

    if-eqz v4, :cond_3

    .line 143
    iget-object v7, v4, Lcom/mbridge/msdk/foundation/same/net/f/c$a;->c:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_3

    .line 145
    :try_start_0
    iget v7, v4, Lcom/mbridge/msdk/foundation/same/net/f/c$a;->b:I

    const/4 v8, -0x1

    const/16 v9, 0xc8

    if-eq v7, v8, :cond_0

    .line 146
    new-instance p1, Lorg/json/JSONObject;

    iget-object v0, v4, Lcom/mbridge/msdk/foundation/same/net/f/c$a;->c:Ljava/lang/String;

    invoke-direct {p1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/e/c;

    iget-object v1, v4, Lcom/mbridge/msdk/foundation/same/net/f/c$a;->c:Ljava/lang/String;

    .line 147
    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-direct {v0, v9, v1, v6}, Lcom/mbridge/msdk/foundation/same/net/e/c;-><init>(I[BLjava/util/List;)V

    .line 146
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/same/net/k;->a(Ljava/lang/Object;Lcom/mbridge/msdk/foundation/same/net/e/c;)Lcom/mbridge/msdk/foundation/same/net/k;

    move-result-object p1

    return-object p1

    .line 150
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    return-object v6

    :cond_1
    if-eqz v3, :cond_3

    .line 154
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 155
    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    const/16 v3, 0x11f

    if-eq p1, v3, :cond_3

    const/16 v3, 0x5e

    if-eq p1, v3, :cond_3

    .line 158
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    invoke-virtual {p1, v0, v2}, Lcom/mbridge/msdk/c/b;->d(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p1

    .line 159
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/d;->w()I

    move-result p1

    mul-int/lit16 p1, p1, 0x3e8

    int-to-long v2, p1

    iget-wide v7, v4, Lcom/mbridge/msdk/foundation/same/net/f/c$a;->a:J

    add-long/2addr v2, v7

    .line 160
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    cmp-long p1, v7, v2

    if-gez p1, :cond_2

    .line 161
    new-instance p1, Lorg/json/JSONObject;

    iget-object v0, v4, Lcom/mbridge/msdk/foundation/same/net/f/c$a;->c:Ljava/lang/String;

    invoke-direct {p1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/e/c;

    iget-object v1, v4, Lcom/mbridge/msdk/foundation/same/net/f/c$a;->c:Ljava/lang/String;

    .line 162
    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-direct {v0, v9, v1, v6}, Lcom/mbridge/msdk/foundation/same/net/e/c;-><init>(I[BLjava/util/List;)V

    .line 161
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/same/net/k;->a(Ljava/lang/Object;Lcom/mbridge/msdk/foundation/same/net/e/c;)Lcom/mbridge/msdk/foundation/same/net/k;

    move-result-object p1

    return-object p1

    .line 164
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v6

    :catch_0
    move-exception p1

    .line 171
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v5, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    const-string p1, "getErrorInfo RETURN NULL"

    .line 175
    invoke-static {v5, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v6
.end method

.method public final declared-synchronized a(Ljava/lang/String;ILjava/lang/String;J)V
    .locals 3

    monitor-enter p0

    .line 79
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 80
    monitor-exit p0

    return-void

    .line 83
    :cond_0
    :try_start_1
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v0, :cond_1

    .line 84
    monitor-exit p0

    return-void

    .line 87
    :cond_1
    :try_start_2
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->c:Ljava/util/ArrayList;

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "IDErrorUtil"

    .line 88
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "addErrorInfo : "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 89
    new-instance v0, Lcom/mbridge/msdk/foundation/same/net/f/c$a;

    invoke-direct {v0, p4, p5, p2, p3}, Lcom/mbridge/msdk/foundation/same/net/f/c$a;-><init>(JILjava/lang/String;)V

    .line 90
    iget-object p2, p0, Lcom/mbridge/msdk/foundation/same/net/f/c;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 92
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
