.class public final Lcom/tkay/expressad/videocommon/e/a;
.super Ljava/lang/Object;


# static fields
.field public static final a:I = 0x3e8

.field public static final b:I = 0x3e8


# instance fields
.field private c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/c/c;",
            ">;"
        }
    .end annotation
.end field

.field private e:J

.field private f:J

.field private g:J

.field private h:J

.field private i:J

.field private j:J


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/a;
    .locals 8

    .line 108
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_4

    .line 110
    :try_start_0
    new-instance v0, Lcom/tkay/expressad/videocommon/e/a;

    invoke-direct {v0}, Lcom/tkay/expressad/videocommon/e/a;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 111
    :try_start_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "caplist"

    .line 112
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 114
    invoke-virtual {p0}, Lorg/json/JSONObject;->length()I

    move-result v2

    if-lez v2, :cond_3

    .line 115
    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    .line 116
    invoke-virtual {p0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v3

    :cond_0
    :goto_0
    if-eqz v3, :cond_2

    .line 117
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    .line 118
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    const/16 v5, 0x3e8

    .line 119
    invoke-virtual {p0, v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    .line 120
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_0

    .line 121
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_1

    if-nez v6, :cond_1

    .line 122
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-interface {v2, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 124
    :cond_1
    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-interface {v2, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 1095
    :cond_2
    iput-object v2, v0, Lcom/tkay/expressad/videocommon/e/a;->c:Ljava/util/Map;

    :cond_3
    const-string p0, "reward"

    .line 132
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    .line 131
    invoke-static {p0}, Lcom/tkay/expressad/videocommon/c/c;->a(Lorg/json/JSONArray;)Ljava/util/Map;

    move-result-object p0

    .line 1103
    iput-object p0, v0, Lcom/tkay/expressad/videocommon/e/a;->d:Ljava/util/Map;

    const-string p0, "getpf"

    const-wide/32 v2, 0xa8c0

    .line 135
    invoke-virtual {v1, p0, v2, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v2

    .line 2037
    iput-wide v2, v0, Lcom/tkay/expressad/videocommon/e/a;->e:J

    const-string p0, "ruct"

    const-wide/16 v2, 0x1518

    .line 137
    invoke-virtual {v1, p0, v2, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v2

    .line 2045
    iput-wide v2, v0, Lcom/tkay/expressad/videocommon/e/a;->f:J

    const-string p0, "plct"

    const-wide/16 v2, 0xe10

    .line 139
    invoke-virtual {v1, p0, v2, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v4

    .line 2053
    iput-wide v4, v0, Lcom/tkay/expressad/videocommon/e/a;->g:J

    const-string p0, "dlct"

    .line 141
    invoke-virtual {v1, p0, v2, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v2

    .line 2061
    iput-wide v2, v0, Lcom/tkay/expressad/videocommon/e/a;->h:J

    const-string p0, "vcct"

    const-wide/16 v2, 0x5

    .line 143
    invoke-virtual {v1, p0, v2, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v2

    .line 2069
    iput-wide v2, v0, Lcom/tkay/expressad/videocommon/e/a;->i:J

    const-string p0, "current_time"

    .line 146
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    .line 2078
    iput-wide v1, v0, Lcom/tkay/expressad/videocommon/e/a;->j:J
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object v0

    :catch_0
    move-exception p0

    move-object v1, v0

    goto :goto_1

    :catch_1
    move-exception p0

    .line 149
    :goto_1
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    return-object v1
.end method

.method private a(J)V
    .locals 0

    .line 78
    iput-wide p1, p0, Lcom/tkay/expressad/videocommon/e/a;->j:J

    return-void
.end method

.method private l()J
    .locals 4

    .line 33
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/e/a;->e:J

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    return-wide v0
.end method

.method private m()J
    .locals 4

    .line 41
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/e/a;->f:J

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    return-wide v0
.end method

.method private n()J
    .locals 2

    .line 74
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/e/a;->j:J

    return-wide v0
.end method

.method private static o()Lcom/tkay/expressad/videocommon/e/a;
    .locals 7

    .line 156
    new-instance v0, Lcom/tkay/expressad/videocommon/e/a;

    invoke-direct {v0}, Lcom/tkay/expressad/videocommon/e/a;-><init>()V

    .line 157
    new-instance v1, Ljava/util/HashMap;

    const/4 v2, 0x5

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    const/16 v2, 0x3e8

    .line 158
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "1"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "9"

    .line 159
    invoke-interface {v1, v4, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "8"

    .line 160
    invoke-interface {v1, v4, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 161
    new-instance v2, Ljava/util/HashMap;

    const/4 v4, 0x3

    invoke-direct {v2, v4}, Ljava/util/HashMap;-><init>(I)V

    .line 162
    new-instance v4, Lcom/tkay/expressad/videocommon/c/c;

    const-string v5, "Virtual Item"

    const/4 v6, 0x1

    invoke-direct {v4, v5, v6}, Lcom/tkay/expressad/videocommon/c/c;-><init>(Ljava/lang/String;I)V

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2095
    iput-object v1, v0, Lcom/tkay/expressad/videocommon/e/a;->c:Ljava/util/Map;

    .line 2103
    iput-object v2, v0, Lcom/tkay/expressad/videocommon/e/a;->d:Ljava/util/Map;

    const-wide/32 v1, 0xa8c0

    .line 3037
    iput-wide v1, v0, Lcom/tkay/expressad/videocommon/e/a;->e:J

    const-wide/16 v1, 0x1518

    .line 3045
    iput-wide v1, v0, Lcom/tkay/expressad/videocommon/e/a;->f:J

    const-wide/16 v1, 0xe10

    .line 3053
    iput-wide v1, v0, Lcom/tkay/expressad/videocommon/e/a;->g:J

    .line 3061
    iput-wide v1, v0, Lcom/tkay/expressad/videocommon/e/a;->h:J

    const-wide/16 v1, 0x5

    .line 3069
    iput-wide v1, v0, Lcom/tkay/expressad/videocommon/e/a;->i:J

    return-object v0
.end method


# virtual methods
.method public final a()V
    .locals 2

    const-wide/32 v0, 0xa8c0

    .line 37
    iput-wide v0, p0, Lcom/tkay/expressad/videocommon/e/a;->e:J

    return-void
.end method

.method public final a(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 95
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/e/a;->c:Ljava/util/Map;

    return-void
.end method

.method public final b()V
    .locals 2

    const-wide/16 v0, 0x1518

    .line 45
    iput-wide v0, p0, Lcom/tkay/expressad/videocommon/e/a;->f:J

    return-void
.end method

.method public final b(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/c/c;",
            ">;)V"
        }
    .end annotation

    .line 103
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/e/a;->d:Ljava/util/Map;

    return-void
.end method

.method public final c()J
    .locals 4

    .line 49
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/e/a;->g:J

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    return-wide v0
.end method

.method public final d()V
    .locals 2

    const-wide/16 v0, 0xe10

    .line 53
    iput-wide v0, p0, Lcom/tkay/expressad/videocommon/e/a;->g:J

    return-void
.end method

.method public final e()J
    .locals 2

    .line 57
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/e/a;->h:J

    return-wide v0
.end method

.method public final f()V
    .locals 2

    const-wide/16 v0, 0xe10

    .line 61
    iput-wide v0, p0, Lcom/tkay/expressad/videocommon/e/a;->h:J

    return-void
.end method

.method public final g()J
    .locals 2

    .line 65
    iget-wide v0, p0, Lcom/tkay/expressad/videocommon/e/a;->i:J

    return-wide v0
.end method

.method public final h()V
    .locals 2

    const-wide/16 v0, 0x5

    .line 69
    iput-wide v0, p0, Lcom/tkay/expressad/videocommon/e/a;->i:J

    return-void
.end method

.method public final i()Ljava/util/Map;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 82
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/a;->c:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 83
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/e/a;->c:Ljava/util/Map;

    const/16 v1, 0x3e8

    .line 85
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "1"

    .line 84
    invoke-interface {v0, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 86
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/a;->c:Ljava/util/Map;

    .line 87
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "9"

    .line 86
    invoke-interface {v0, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 88
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/a;->c:Ljava/util/Map;

    .line 89
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "8"

    .line 88
    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 91
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/a;->c:Ljava/util/Map;

    return-object v0
.end method

.method public final j()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/c/c;",
            ">;"
        }
    .end annotation

    .line 99
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/a;->d:Ljava/util/Map;

    return-object v0
.end method

.method public final k()Lorg/json/JSONObject;
    .locals 8

    .line 174
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 177
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/e/a;->c:Ljava/util/Map;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/e/a;->c:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    if-lez v1, :cond_1

    .line 179
    :try_start_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 181
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/a;->c:Ljava/util/Map;

    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 182
    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-virtual {v1, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_0

    :cond_0
    const-string v2, "caplist"

    .line 185
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 187
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 191
    :cond_1
    :goto_1
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/e/a;->d:Ljava/util/Map;

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/e/a;->d:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    if-lez v1, :cond_4

    .line 193
    :try_start_3
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 195
    iget-object v2, p0, Lcom/tkay/expressad/videocommon/e/a;->d:Ljava/util/Map;

    invoke-interface {v2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_2
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map$Entry;

    .line 196
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    .line 198
    invoke-interface {v3}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    .line 199
    invoke-interface {v3}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/videocommon/c/c;

    if-eqz v3, :cond_2

    const-string v6, "name"

    .line 202
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/c/c;->a()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "amount"

    .line 203
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/c/c;->b()I

    move-result v3

    invoke-virtual {v4, v6, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "id"

    .line 204
    invoke-virtual {v4, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 207
    :cond_2
    invoke-virtual {v1, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_2

    :cond_3
    const-string v2, "reward"

    .line 210
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_3

    :catch_1
    move-exception v1

    .line 212
    :try_start_4
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_3
    const-string v1, "getpf"

    .line 216
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/e/a;->e:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "ruct"

    .line 217
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/e/a;->f:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "plct"

    .line 218
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/e/a;->g:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "dlct"

    .line 219
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/e/a;->h:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "vcct"

    .line 220
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/e/a;->i:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "current_time"

    .line 221
    iget-wide v2, p0, Lcom/tkay/expressad/videocommon/e/a;->j:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    return-object v0

    :catch_2
    move-exception v1

    .line 225
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    return-object v0
.end method
