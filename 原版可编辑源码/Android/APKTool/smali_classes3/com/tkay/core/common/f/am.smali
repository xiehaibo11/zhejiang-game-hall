.class public final Lcom/tkay/core/common/f/am;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/f/am$a;
    }
.end annotation


# static fields
.field static final e:Ljava/lang/String; = "reqId"

.field static final f:Ljava/lang/String; = "reqDatetime"

.field static final g:Ljava/lang/String; = "fillOffers"

.field static final h:Ljava/lang/String; = "bidResps"

.field static final i:Ljava/lang/String; = "adSourceId"

.field static final j:Ljava/lang/String; = "price"

.field static final k:Ljava/lang/String; = "networkFirmId"

.field static final l:Ljava/lang/String; = "demandType"

.field static final m:Ljava/lang/String; = "tp_bid_id"


# instance fields
.field a:Ljava/lang/String;

.field b:J

.field c:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/am$a;",
            ">;"
        }
    .end annotation
.end field

.field d:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/am$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 38
    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x3

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/common/f/am;->c:Ljava/util/List;

    .line 39
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/core/common/f/am;->d:Ljava/util/List;

    return-void
.end method

.method public static a(Ljava/lang/String;)Lcom/tkay/core/common/f/am;
    .locals 4

    .line 59
    new-instance v0, Lcom/tkay/core/common/f/am;

    invoke-direct {v0}, Lcom/tkay/core/common/f/am;-><init>()V

    .line 62
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "reqId"

    .line 64
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/f/am;->b(Ljava/lang/String;)V

    const-string p0, "reqDatetime"

    .line 65
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->getLong(Ljava/lang/String;)J

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Lcom/tkay/core/common/f/am;->a(J)V

    const-string p0, "fillOffers"

    .line 66
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/tkay/core/common/f/am;->c(Ljava/lang/String;)Ljava/util/List;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/tkay/core/common/f/am;->a(Ljava/util/List;)V

    const-string p0, "bidResps"

    .line 67
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/tkay/core/common/f/am;->c(Ljava/lang/String;)Ljava/util/List;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/tkay/core/common/f/am;->b(Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 70
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method private declared-synchronized a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/am$a;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    .line 85
    :try_start_0
    iput-object p1, p0, Lcom/tkay/core/common/f/am;->c:Ljava/util/List;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 86
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized a(Ljava/util/List;Lcom/tkay/core/common/f/am$a;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/am$a;",
            ">;",
            "Lcom/tkay/core/common/f/am$a;",
            ")V"
        }
    .end annotation

    monitor-enter p0

    if-eqz p2, :cond_4

    .line 111
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    .line 113
    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 115
    monitor-exit p0

    return-void

    :cond_0
    const/4 v0, 0x0

    .line 119
    :goto_0
    :try_start_1
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, -0x1

    if-ge v0, v1, :cond_2

    .line 120
    iget-wide v3, p2, Lcom/tkay/core/common/f/am$a;->d:D

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/am$a;

    iget-wide v5, v1, Lcom/tkay/core/common/f/am$a;->d:D

    cmpl-double v1, v3, v5

    if-lez v1, :cond_1

    goto :goto_1

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_1
    if-eq v0, v2, :cond_3

    .line 127
    invoke-interface {p1, v0, p2}, Ljava/util/List;->add(ILjava/lang/Object;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    .line 129
    :cond_3
    :try_start_2
    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 133
    :cond_4
    :goto_2
    monitor-exit p0

    return-void
.end method

.method private declared-synchronized b(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/am$a;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    .line 89
    :try_start_0
    iput-object p1, p0, Lcom/tkay/core/common/f/am;->d:Ljava/util/List;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 90
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized c()J
    .locals 2

    monitor-enter p0

    .line 97
    :try_start_0
    iget-wide v0, p0, Lcom/tkay/core/common/f/am;->b:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-wide v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized c(Ljava/lang/String;)Ljava/util/List;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/am$a;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    .line 136
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 139
    :try_start_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 140
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 142
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result p1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, p1, :cond_1

    .line 144
    new-instance v3, Lcom/tkay/core/common/f/am$a;

    invoke-direct {v3}, Lcom/tkay/core/common/f/am$a;-><init>()V

    .line 146
    invoke-virtual {v1, v2}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v4

    .line 147
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5, v4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v4, "adSourceId"

    .line 149
    invoke-virtual {v5, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/tkay/core/common/f/am$a;->b:Ljava/lang/String;

    const-string v4, "price"

    .line 150
    invoke-virtual {v5, v4}, Lorg/json/JSONObject;->getDouble(Ljava/lang/String;)D

    move-result-wide v6

    iput-wide v6, v3, Lcom/tkay/core/common/f/am$a;->d:D

    const-string v4, "networkFirmId"

    .line 151
    invoke-virtual {v5, v4}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v4

    iput v4, v3, Lcom/tkay/core/common/f/am$a;->c:I

    const-string v4, "demandType"

    .line 152
    invoke-virtual {v5, v4}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v4

    iput v4, v3, Lcom/tkay/core/common/f/am$a;->a:I

    const-string v4, "tp_bid_id"

    .line 154
    invoke-virtual {v5, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    const-string v4, "tp_bid_id"

    .line 155
    invoke-virtual {v5, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v3, Lcom/tkay/core/common/f/am$a;->e:Ljava/lang/String;

    .line 158
    :cond_0
    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 162
    :cond_1
    new-instance p1, Lcom/tkay/core/common/f/am$1;

    invoke-direct {p1, p0}, Lcom/tkay/core/common/f/am$1;-><init>(Lcom/tkay/core/common/f/am;)V

    invoke-static {v0, p1}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 176
    :try_start_2
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 179
    :cond_2
    :goto_1
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized c(Ljava/util/List;)Lorg/json/JSONArray;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/am$a;",
            ">;)",
            "Lorg/json/JSONArray;"
        }
    .end annotation

    monitor-enter p0

    .line 192
    :try_start_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    if-eqz p1, :cond_0

    .line 194
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/am$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 197
    :try_start_1
    invoke-virtual {v1}, Lcom/tkay/core/common/f/am$a;->a()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 199
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    .line 204
    :cond_0
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized d()Lorg/json/JSONArray;
    .locals 1

    monitor-enter p0

    .line 184
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/am;->c:Ljava/util/List;

    invoke-direct {p0, v0}, Lcom/tkay/core/common/f/am;->c(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private declared-synchronized e()Lorg/json/JSONArray;
    .locals 1

    monitor-enter p0

    .line 188
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/am;->d:Ljava/util/List;

    invoke-direct {p0, v0}, Lcom/tkay/core/common/f/am;->c(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method


# virtual methods
.method public final declared-synchronized a()Lorg/json/JSONObject;
    .locals 4

    monitor-enter p0

    .line 45
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string v1, "reqId"

    .line 47
    iget-object v2, p0, Lcom/tkay/core/common/f/am;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "reqDatetime"

    .line 48
    iget-wide v2, p0, Lcom/tkay/core/common/f/am;->b:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "fillOffers"

    .line 49
    invoke-direct {p0}, Lcom/tkay/core/common/f/am;->d()Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "bidResps"

    .line 50
    invoke-direct {p0}, Lcom/tkay/core/common/f/am;->e()Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 52
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 55
    :goto_0
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized a(J)V
    .locals 0

    monitor-enter p0

    .line 81
    :try_start_0
    iput-wide p1, p0, Lcom/tkay/core/common/f/am;->b:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 82
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Lcom/tkay/core/common/f/am$a;)V
    .locals 1

    monitor-enter p0

    .line 101
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/am;->c:Ljava/util/List;

    invoke-direct {p0, v0, p1}, Lcom/tkay/core/common/f/am;->a(Ljava/util/List;Lcom/tkay/core/common/f/am$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 102
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b()Ljava/lang/String;
    .locals 1

    monitor-enter p0

    .line 93
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/am;->a:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized b(Lcom/tkay/core/common/f/am$a;)V
    .locals 1

    monitor-enter p0

    .line 105
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/am;->d:Ljava/util/List;

    invoke-direct {p0, v0, p1}, Lcom/tkay/core/common/f/am;->a(Ljava/util/List;Lcom/tkay/core/common/f/am$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 106
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b(Ljava/lang/String;)V
    .locals 0

    monitor-enter p0

    .line 77
    :try_start_0
    iput-object p1, p0, Lcom/tkay/core/common/f/am;->a:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 78
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
